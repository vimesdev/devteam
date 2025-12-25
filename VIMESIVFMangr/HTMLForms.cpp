// HTMLayoutCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "HTMLForms.h"
#include <strsafe.h>
#include "GuiMainFrame.h"
#include "DbMap.h"
#include "JSON.h"
#include "StringUtil.h"
using namespace htmlayout;

// HTMLayout specific notification handler.
static LRESULT CALLBACK HTMLayoutNotifyHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, LPVOID vParam)
{
  // all HTMLayout notification are comming here.
  NMHDR*  phdr = (NMHDR*)lParam;

  CHTMLForms* pView = static_cast<CHTMLForms*>(vParam);

  switch(phdr->code)
  {
      case HLN_CREATE_CONTROL:    return pView->OnCreateControl((LPNMHL_CREATE_CONTROL) lParam);
      case HLN_CONTROL_CREATED:   return pView->OnControlCreated((LPNMHL_CREATE_CONTROL) lParam);
      case HLN_DESTROY_CONTROL:   return pView->OnDestroyControl((LPNMHL_DESTROY_CONTROL) lParam);
      case HLN_LOAD_DATA:         return pView->OnLoadData((LPNMHL_LOAD_DATA) lParam);
      case HLN_DATA_LOADED:       return pView->OnDataLoaded((LPNMHL_DATA_LOADED)lParam);
      case HLN_DOCUMENT_COMPLETE: return pView->OnDocumentComplete();
      case HLN_ATTACH_BEHAVIOR:   return pView->OnAttachBehavior((LPNMHL_ATTACH_BEHAVIOR)lParam );
  }
  return 0;
}

// CHTMLForms


IMPLEMENT_DYNAMIC(CHTMLForms, CView)
CHTMLForms::CHTMLForms():
event_handler(HANDLE_ALL), m_pvalues(0)


{
	m_pPrinter = NULL;
  m_margin_top = 0.5;
  m_margin_left = 0.7;
  m_margin_right = 0.5;
  m_margin_bottom = 0.5;
  m_nOptIdx= 0;
}

CHTMLForms::~CHTMLForms()
{
}

BOOL CHTMLForms::Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd,
  UINT nID)
{
  CWnd* pWnd = this;
  if(pWnd->Create(::HTMLayoutClassNameT(), NULL, dwStyle, rect, pParentWnd, nID))
  {
    SetCallback(); // reroute all HTMLayout notifications directly to this class
    return TRUE;
  }
  return FALSE;
}

BOOL CHTMLForms::CreateEx(DWORD dwExStyle, DWORD dwStyle, const RECT& rect,
  CWnd* pParentWnd, UINT nID)
{
  BOOL bRet = Create(dwStyle, rect, pParentWnd, nID);
  if (bRet)
  {
    ModifyStyleEx(0, dwExStyle);
  }
  return bRet;
}

BEGIN_MESSAGE_MAP(CHTMLForms, CView)
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_NCDESTROY()
END_MESSAGE_MAP()



void CHTMLForms::OnDraw(CDC *pDC)
{

}
// CHTMLForms message handlers



void CHTMLForms::UpdateData(bool bSaveAndValidate)
{
	CView::UpdateData(bSaveAndValidate);

	dom::element root = GetRootElement();
	
	htmlayout::named_values values;
    
    if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
		//::MessageBoxW(NULL, name, _T("") )
		dom::element t = root.find_first("[name='%S']",name.c_str()); 

		if( !t.get_style_attribute("behavior") )
			continue;
		std::string str = t.get_element_type();
		if(str == "input" || str == "textarea" || str == "plaintext")
		{
			t.set_attribute("value", value.c_str());
			t.set_value(value);

		}
		
	  }
    }


}
bool CHTMLForms::LoadHtmlResource(LPCTSTR pszName, HMODULE hModule)
{
  // This code assumes that the host and control windows are the same
  ASSERT(::IsWindow(m_hWnd));

  LPBYTE pb;
  DWORD  cb;

  if(!GetHtmlResource(pszName, pb, cb, hModule))
    return false;

  return LoadHtml(pb, cb);
}

bool CHTMLForms::LoadHtmlResource(DWORD resID, HMODULE hModule)
{
  return LoadHtmlResource(MAKEINTRESOURCE(resID), hModule);
}



bool CHTMLForms::GetHtmlResource(LPCTSTR pszName, /*out*/PBYTE& pb, /*out*/DWORD& cb, HMODULE hModule)
{
  ASSERT(pszName != NULL);

  // Find specified resource and check if ok

  if(!hModule)
    hModule = AfxGetApp()->m_hInstance;
  
  HRSRC hrsrc = ::FindResource(hModule, pszName, MAKEINTRESOURCE(RT_HTML));

  if(!hrsrc) 
    return false;

  // Load specified resource and check if ok
  
  HGLOBAL hgres = ::LoadResource(hModule, hrsrc);
  if(!hgres) return false;

  // Retrieve resource data and check if ok

  pb = (PBYTE)::LockResource(hgres); if (!pb) return false;
  cb = ::SizeofResource(hModule, hrsrc); if (!cb) return false;

  return true;
}

  LRESULT CHTMLForms::OnBehaviorNotify(UINT uMsg, WPARAM wParam, LPARAM lParam)
  {
    ASSERT(uMsg == WM_BEHAVIOR_NOTIFY);

    // Crack and call appropriate method
    // here are all notifiactions
    switch(((NMHDR*)lParam)->code) 
    {
      case HLN_HYPERLINK:         
        return OnHyperLink((NMHL_HYPERLINK*) lParam);
      case HLN_COMMAND_CLICK:
        return OnHtmlCommand((NMHL_COMMAND_CLICK*)lParam);
    }
    return 0;
  }

  LRESULT CHTMLForms::OnHtmlGenericNotifications(UINT uMsg, WPARAM wParam, LPARAM lParam)
  {




    // all generic notifications 
    // are coming to the parent of HTMLayout
	NMHDR* phdr = (NMHDR*)lParam;
	
    ASSERT(::IsWindow(m_hWnd));
    // Pass it to the parent window if any
    HWND hWndParent = ::GetParent(m_hWnd);
    if (!hWndParent) return 0;
    return ::SendMessage(hWndParent, uMsg, wParam, lParam);
  }

  LRESULT CHTMLForms::OnCreateControl(LPNMHL_CREATE_CONTROL pnmcc)
  {
	  _tprintf(_T("CHTMLForms::OnCreateControl: type='%s'\n"), GetElementType(pnmcc->helement) );

    // Try to create control and if failed, proceed with default processing.
    // Note that this code assumes that the host and control windows are the same. If
    // you are handling HTMLayout control notification in another window, you'll have
    // to override this method and provide proper hWnd.

    ASSERT(::IsWindow(m_hWnd));

    //return CreateControl(pT->m_hWnd, pnmcc);
    return 0;
  }

  LRESULT CHTMLForms::OnControlCreated(LPNMHL_CREATE_CONTROL pnmcc)
  {
    _tprintf(_T("CHTMLayoutHost::OnControlCreated: type='%s' \n"), GetElementType(pnmcc->helement) );
	
    return 0;
  }

  LRESULT CHTMLForms::OnDestroyControl(LPNMHL_DESTROY_CONTROL pnmhl)
  {
    TRACE(_T("CHTMLayoutHost::OnDestroyControl: HWND=%x\n"), pnmhl->inoutControlHwnd);
    
    //  use this if you don't want this child to be destroyed:
    //  pnmhl->inoutControlHwnd = 0;

    //  If you will not change pnmhl->inoutControlHwnd field then HTMLayout 
    //  will call ::DestroyWindow by itself.

    return 0;
  }


  LRESULT CHTMLForms::OnHyperLink(NMHL_HYPERLINK* pnmhl)
  {
    ATLTRACE(_T("CHTMLayoutHost::OnHyperLink: href='%s' target='%s' action=%u\n"), 
      CString(pnmhl->szHREF), CString(pnmhl->szTarget), pnmhl->action);

    switch (pnmhl->action) {
      case NMHL_HYPERLINK::ENTER: return OnHyperLinkEnter(pnmhl);
      case NMHL_HYPERLINK::LEAVE: return OnHyperLinkLeave(pnmhl);
      case NMHL_HYPERLINK::CLICK: return OnHyperLinkClick(pnmhl);
    }

    return 0;
  }

  LRESULT CHTMLForms::OnHyperLinkEnter(NMHL_HYPERLINK* pnmhl)
  {
    return 0;
  }

  LRESULT CHTMLForms::OnHyperLinkLeave(NMHL_HYPERLINK* pnmhl)
  {
    return 0;
  }

  LRESULT CHTMLForms::OnHyperLinkClick(NMHL_HYPERLINK* pnmhl)
  {
    USES_CONVERSION;
    ::ShellExecute(m_hWnd,TEXT("open"),CW2T(pnmhl->szHREF),NULL,NULL,SW_SHOW);
    return 0;
  }

  LRESULT CHTMLForms::OnLoadData(LPNMHL_LOAD_DATA pnmld)
  {
    _tprintf(_T("CHTMLayoutHost::OnLoadData: uri='%s'\n"), CString(pnmld->uri));

    // Try to load data from resource and if failed, proceed with default processing.
    // Note that this code assumes that the host and control windows are the same. If
    // you are handling HTMLayout control notification in another window, you'll have
    // to override this method and provide proper hWnd.
    return LoadResourceData(pnmld);
  }

  LRESULT CHTMLForms::OnDataLoaded(LPNMHL_DATA_LOADED pnmld)
  {
	
    return 0;
  }

  LRESULT CHTMLForms::OnDocumentComplete()
  {
    
    return 0;
  }

  LRESULT CHTMLForms::OnAttachBehavior( LPNMHL_ATTACH_BEHAVIOR lpab )
  {
    htmlayout::event_handler *pb = htmlayout::behavior::find(lpab->behaviorName, lpab->element);
  if(pb)
  {
    lpab->elementTag  = pb;
    lpab->elementProc = htmlayout::behavior::element_proc;
    lpab->elementEvents = pb->subscribed_to;

  }
    return 0;
  }

  int CHTMLForms::GetAttrInt(HELEMENT he, LPCSTR attrName, int defaultValue)
  {
    htmlayout::dom::element el = he;
    const wchar_t* pv = el.get_attribute(attrName);
    if(pv && wcslen(pv) > 0)
      return _wtoi(pv);
    return defaultValue;
  }

  CString CHTMLForms::GetElementType(HELEMENT he)
  {
    htmlayout::dom::element el = he;
    USES_CONVERSION;
    CString s = CA2T(el.get_element_type());
    return s;
  }

  CString CHTMLForms::GetAttr(HELEMENT he, LPCSTR attrName)
  {
    htmlayout::dom::element el = he;
    USES_CONVERSION;
    CString s = CW2T(el.get_attribute(attrName));
    return s;
  }

  bool CHTMLForms::HasAttr(HELEMENT he, LPCSTR attrName)
  {
    htmlayout::dom::element el = he;
    for(unsigned int i = 0; i < el.get_attribute_count(); ++i)
    {
      if(stricmp(el.get_attribute_name(i),attrName) == 0)
        return true;
    }
    return false;
  }

  static LRESULT LoadResourceData(HWND hWnd, LPCWSTR uri )
  {
    USES_CONVERSION;

    ATLASSERT(::IsWindow(hWnd));
    // Check for trivial case

    if (!uri || !uri[0]) return LOAD_DISCARD;

    // Retrieve url specification into a local storage since FindResource() expects 
    // to find its parameters on stack rather then on the heap under Win9x/Me

    TCHAR achURL[MAX_PATH]; lstrcpyn(achURL, W2CT(uri), MAX_PATH);

    
    // Separate name and handle external resource module specification

    LPTSTR pszName = achURL;

    /*
    Module module;
    LPTSTR psz;
    if ((psz = _tcsrchr(pszName, '/')) != NULL) {
      LPTSTR pszModule = pszName; pszName = psz + 1; *psz = '\0';
      DWORD dwAttr = ::GetFileAttributes(pszModule);
      if (dwAttr != INVALID_FILE_ATTRIBUTES && !(dwAttr & FILE_ATTRIBUTE_DIRECTORY)) {
        module.Load(pszModule, LOAD_LIBRARY_AS_DATAFILE);
      }
    }
    */

    // Separate extension if any

    LPTSTR pszExt = _tcsrchr(pszName, '.'); if (pszExt) *pszExt++ = '\0';

    // Find specified resource and leave if failed. Note that we use extension
    // as the custom resource type specification or assume standard HTML resource 
    // if no extension is specified

    HRSRC hrsrc = 0;
    bool  isHtml = false;
    if( pszExt == 0 || _tcsicmp(pszExt,TEXT("HTML")) == 0)
    {
      hrsrc = ::FindResource(AfxGetApp()->m_hInstance, pszName, RT_HTML);
      isHtml = true;
    }
    else
      hrsrc = ::FindResource(AfxGetApp()->m_hInstance, pszName, pszExt);

    if (!hrsrc) return LOAD_OK; // resource not found here - proceed with default loader

    // Load specified resource and check if ok

    HGLOBAL hgres = ::LoadResource(AfxGetApp()->m_hInstance, hrsrc);
    if (!hgres) return LOAD_DISCARD;

    // Retrieve resource data and check if ok

    PBYTE pb = (PBYTE)::LockResource(hgres); if (!pb) return LOAD_DISCARD;
    DWORD cb = ::SizeofResource(AfxGetApp()->m_hInstance, hrsrc); if (!cb) return LOAD_DISCARD;

    // Report data ready

    ::HTMLayoutDataReady(hWnd, uri, pb,  cb);
    
    return LOAD_OK;
  }

  static LRESULT LoadResourceData(HWND hWnd, LPCSTR uri )
  {
     USES_CONVERSION;
     return LoadResourceData(hWnd,A2CW(uri));
  }


  LRESULT CHTMLForms::LoadResourceData(LPNMHL_LOAD_DATA pnmld)
  {
    // This code assumes that the host and control windows are the same
    ASSERT(::IsWindow(m_hWnd));
    return ::LoadResourceData(m_hWnd, pnmld->uri);
  }


  /////////////////////////////////////////////////////////////////////////////
// CHTMLForms printing

BOOL CHTMLForms::OnPreparePrinting(CPrintInfo* pInfo)
{
  // Create printer instance
	if (m_pPrinter != NULL){
	  delete m_pPrinter;
	}
	m_pPrinter = new PrintEx;
	LPBYTE pData=NULL;
	HELEMENT he = GetRootElement();
	htmlayout::dom::element el = he;
	LPWSTR str;
	UINT nLength= m_nHtmlSize;
	unsigned char* utf8bytes = 0;
	

	dom::element root = GetRootElement();
	
	htmlayout::named_values values;
    /*
    if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
      //::MessageBoxW(NULL, name, _T("") )
		dom::element t = el.find_first("[name='%S']",name.c_str()); 
	  
		if( !t.get_style_attribute("behavior") )
			continue;
		set_value(t, (*it).second);
		t.set_attribute("value", value.c_str());
		if(t.get_ctl_type() == CTL_CHECKBOX)
		{
			if(value == L"true")
			{
				t.set_attribute("checked", value.c_str());
			}
		}

		if(t.get_ctl_type() == CTL_RADIO)
		{
			dom::element el = t;
			json::value opt = get_radio_index(el);
			int idx = _ttoi(opt.to_string().c_str());
			selected_cb selected;
			//dom::element r = el.parent(); // ATTN: I assume here that all radios in the group belong to the same parent!
			root.find_all(&selected, "[type='radio'][name='%S']", el.get_attribute("name"));
		    
			for( unsigned int n = 0; n < selected.elements.size(); ++n )
			{
				dom::element& e = selected.elements[n];
				  
				if ( n == idx)
				{
					//  e.set_value(json::value(true));
					e.set_attribute("checked", L"true");
				}
				else
				{
					//e.set_value(json::value(false));
					//e.set_attribute("checked", L"false");
					e.remove_attribute("checked");
				}
				e.update(true);
			}
			root.update(true);
		}
	  }
    }
	*/

	HTMLayoutGetElementHtml(he, &utf8bytes, true);
	//printf("\r\n%s", utf8bytes);
//	FILE *fp = fopen("c:\\temp\\xxx.dat", "w+");
//	fprintf(fp, "%s", utf8bytes);
//	fclose(fp);
	char szPath[254];
	::GetCurrentDirectoryA(254, szPath);
	CStringA szBaseUri;
	szBaseUri.Format("%s\\", szPath);

	if (!m_pPrinter->load((LPCBYTE)utf8bytes, strlen((const char*)utf8bytes), szBaseUri)){
		delete m_pPrinter;
		m_pPrinter = NULL;
		delete utf8bytes;
		return FALSE;
	}
	delete utf8bytes;

  // default preparation
  return DoPreparePrinting(pInfo);
}

void CHTMLForms::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
  pInfo->SetMinPage(1);

  // get some printer metrics
  double dpix = (double)pDC->GetDeviceCaps(LOGPIXELSX);
  double dpiy = (double)pDC->GetDeviceCaps(LOGPIXELSY);
  int unprintable_x = pDC->GetDeviceCaps(PHYSICALOFFSETX);
  int unprintable_y = pDC->GetDeviceCaps(PHYSICALOFFSETY);
  int total_page_cx = pDC->GetDeviceCaps(PHYSICALWIDTH);
  int total_page_cy = pDC->GetDeviceCaps(PHYSICALHEIGHT);
  int printable_area_cx = pDC->GetDeviceCaps (HORZRES);
  int printable_area_cy = pDC->GetDeviceCaps (VERTRES);

  // calculate maximum printable area
  CRect rcMaxPrintArea;
  rcMaxPrintArea.left   = unprintable_x;
  rcMaxPrintArea.right  = printable_area_cx + unprintable_x;
  rcMaxPrintArea.top    = unprintable_y;
  rcMaxPrintArea.bottom = printable_area_cy + unprintable_y;

  // Ask user for new margins
  /*
  CSimplePageSetup dlg;
  dlg.m_margin_left = m_margin_left;
  dlg.m_margin_top = m_margin_top;
  dlg.m_margin_right = m_margin_right;
  dlg.m_margin_bottom = m_margin_bottom;
  dlg.m_height = total_page_cy / dpiy;
  dlg.m_width  = total_page_cx / dpix;
  if (IDOK==dlg.DoModal()){
    m_margin_left = dlg.m_margin_left;
    m_margin_top = dlg.m_margin_top;
    m_margin_right = dlg.m_margin_right;
    m_margin_bottom = dlg.m_margin_bottom;
  }
*/
  // calculate printable area adjusted for margins
  m_rcPrintArea.left = (int)(m_margin_left * dpix) - unprintable_x;
  m_rcPrintArea.top  = (int)(m_margin_top  * dpiy) - unprintable_y;
  m_rcPrintArea.right  = total_page_cx - (int)(m_margin_right  * dpix) - unprintable_x;
  m_rcPrintArea.bottom = total_page_cy - (int)(m_margin_bottom * dpiy) - unprintable_y;

  // validate adjusted printable area
  m_rcPrintArea.left   = min (rcMaxPrintArea.right,   max (rcMaxPrintArea.left,   m_rcPrintArea.left) );
  m_rcPrintArea.top    = min (rcMaxPrintArea.bottom,  max (rcMaxPrintArea.top,    m_rcPrintArea.top) );
  m_rcPrintArea.right  = max (rcMaxPrintArea.left,    min (rcMaxPrintArea.right,  m_rcPrintArea.right) );
  m_rcPrintArea.bottom = max (rcMaxPrintArea.top,     min (rcMaxPrintArea.bottom, m_rcPrintArea.bottom) );

  pInfo->m_rectDraw = m_rcPrintArea;

  // Calculate scale factor for true 1:1 scale (e.g. 12 point font on screen should be 12 point font on printer) 
  CClientDC dc_screen(this);
  double fx = (double)dc_screen.GetDeviceCaps(LOGPIXELSX) / (double)::GetDeviceCaps(pDC->m_hAttribDC, LOGPIXELSX);
  m_scaled_width = (int)(fx * m_rcPrintArea.Width());
  
  // Scale for printing and calculate number of pages
  int num_pages = m_pPrinter->measure(*pDC, m_scaled_width, m_rcPrintArea.Width(), m_rcPrintArea.Height());
  if (num_pages > 0){

    pInfo->SetMaxPage((UINT)num_pages);
  }
  else{
    pInfo->SetMaxPage (1);
  }
  m_measured = CSize(0,0);
}

void CHTMLForms::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
  if (m_pPrinter!=NULL){
    delete m_pPrinter;
    m_pPrinter = NULL;
  }
}

void CHTMLForms::OnPrepareDC(CDC* pDC, CPrintInfo* pInfo) 
{
  // TODO: Add your specialized code here and/or call the base class
  
  CView::OnPrepareDC(pDC, pInfo);
}

void CHTMLForms::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
{
  if (m_pPrinter!=NULL)
  {
    // Draw HTMLayout
    if (pInfo->m_bPreview)
    {
      CPoint ptTopLeft (m_rcPrintArea.TopLeft());
      CPoint ptBotRigh (m_rcPrintArea.BottomRight());
      ::LPtoDP(pDC->m_hDC, &ptTopLeft, 1);
      ::LPtoDP(pDC->m_hDC, &ptBotRigh, 1);

      CSize measured = CSize(ptBotRigh.x-ptTopLeft.x, ptBotRigh.y-ptTopLeft.y);
      if(m_measured != measured)
      {
        m_pPrinter->measure(pDC->GetSafeHdc(), m_scaled_width, ptBotRigh.x-ptTopLeft.x, ptBotRigh.y-ptTopLeft.y);
        m_measured = measured;
      }
      m_pPrinter->render(pDC->GetSafeHdc(), ptTopLeft.x, ptTopLeft.y, pInfo->m_nCurPage-1);
    }
    else{
      m_pPrinter->render(pDC->GetSafeHdc(), m_rcPrintArea.left, m_rcPrintArea.top, pInfo->m_nCurPage-1);
    }

	CFont font, *pOldFont;
	LOGFONT lf;

	CRect  rcPage = m_rcPrintArea;
	rcPage.top = rcPage.bottom;
	rcPage.bottom = rcPage.top+120;
	//rcPage.right -= 100;
	//int nHeight = -MulDiv(120, GetDeviceCaps(pDC->m_hDC, LOGPIXELSY), 72);
	font.CreatePointFont(600, _T("Tahoma"));
	pOldFont = pDC->SelectObject(&font);
	CString tmpStr;
	tmpStr.Format(_T("%d"), pInfo->m_nCurPage);
	pDC->DrawText(tmpStr, rcPage, DT_CENTER);
	pDC->SelectObject(pOldFont);
	font.DeleteObject();

	//pDC->FillSolidRect(rcPage, RGB(0, 0, 255));
    //// Draw borders
    //pDC->MoveTo(m_rcPrintArea.left, m_rcPrintArea.top);
    //pDC->LineTo(m_rcPrintArea.right, m_rcPrintArea.top);
    //pDC->LineTo(m_rcPrintArea.right, m_rcPrintArea.bottom);
    //pDC->LineTo(m_rcPrintArea.left, m_rcPrintArea.bottom);
    //pDC->LineTo(m_rcPrintArea.left, m_rcPrintArea.top);
  }
}

void CHTMLForms::OnFilePrintPreview()
{
	CView::OnFilePrintPreview();
}


void CHTMLForms::OnFilePrint()
{
	CView::OnFilePrint();
}


HELEMENT CHTMLForms::GetRootElement()
  {
    ATLASSERT(::IsWindow(m_hWnd));
    HELEMENT hRootElement = 0;
    ::HTMLayoutGetRootElement(m_hWnd, &hRootElement);
    return hRootElement;
  }

  int CHTMLForms::OnCreate(LPCREATESTRUCT lpCreateStruct)
  {
	  if (__super::OnCreate(lpCreateStruct) == -1)
		  return -1;
		//Load dữ liệu từ sys_sel
		//InitSelection(_T("lieunap"), _T("COLISTIN_B1_1MG"));			

	  HTMLayoutSetCallback(m_hWnd,&HTMLayoutNotifyHandler,this); // attach handler of htmlayout events

		htmlayout::attach_event_handler(m_hWnd,this); // attach handler of DOM events

	
	  return 0;
  }


 void CHTMLForms::GetData()
 {
	 CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 CString szSQL, szWhere;
	 CString szFieldName, szValue;
	 CRecord rs(&pMF->m_db);
	 if(m_szTableView.IsEmpty())
	 {
		 m_szTableView.Format(_T("%s_VIEW"), m_szTableName);
	 }

	 szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld %s "), m_szTableView, m_nDocumentNo, m_szWhere);
	 rs.ExecSQL(szSQL);
	 m_ROFields.RemoveAll();
	 while (!rs.IsEOF())
	 {
		for (int i =0; i < rs.GetFieldCount(); i++)
		{
			szFieldName = rs.GetFieldName(i);
			szValue  = rs.GetValue(i);
			SetValue(szFieldName, szValue);
			EnableControl(szFieldName, false);
			szFieldName.MakeLower();
			SetValue(szFieldName, szValue);
			CString szName = szFieldName;
			szName.MakeUpper();
			m_ROFields.Add(szName);
		}
		rs.MoveNext();
	 }

	szSQL.Format(_T("SELECT * FROM %s_FORM WHERE docno=%ld and fuid ='%s' "), m_szTableName, m_nDocumentNo, m_szUID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		for (int i =0; i < rs.GetFieldCount(); i++)
		{
			szFieldName = rs.GetFieldName(i);
			szValue  = rs.GetValue(i);
			SetValue(szFieldName, szValue);
			EnableControl(szFieldName, true);
			szFieldName.MakeLower();
			SetValue(szFieldName, szValue);

		}
	}
	 
 }

 bool CHTMLForms::PostData()
 {
	 CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 bool bRes = false;
	 CString szSQL;
	 
	 //m_nDocumentNo = 15001219;
	//	m_szDeptID = _T("C1.3");
	 
	 
	dom::element root = GetRootElement();
	
	root.update(true);



	CDbfMap tbl;
	CDbfMap emrTbl;
	emrTbl.AddField(_T("hde_type"), dfText, 20);
	emrTbl.AddField(_T("hde_docno"), dfLong);
	emrTbl.AddField(_T("hde_deptid"), dfText, 10);
	emrTbl.AddField(_T("hde_refidx"), dfLong);
	emrTbl.AddField(_T("hde_roomid"), dfInteger);
	emrTbl.AddField(_T("hde_userid"), dfText, 20);
	emrTbl.AddField(_T("hde_name"), dfText, 20);
	emrTbl.AddField(_T("hde_value"), dfText, 2000);
	emrTbl.AddField(_T("hde_optidx"), dfLong);

	emrTbl.SetValue(_T("hde_type"), m_szType);
	emrTbl.SetValue(_T("hde_docno"), m_nDocumentNo);
	emrTbl.SetValue(_T("hde_deptid"), m_szDeptID);
	emrTbl.SetValue(_T("hde_refidx"), m_nRefIndex);
	emrTbl.SetValue(_T("hde_roomid"), m_nRoomID);
	emrTbl.SetValue(_T("hde_optidx"), m_nOptIdx);
	
	emrTbl.SetValue(_T("hde_userid"), pMF->GetCurrentUser());

	
	tbl.SetTableName(m_szTableName+_T("_FORM"));
	tbl.AddField(_T("docno"), dfLong);
	tbl.AddField(_T("fuid"), dfText, 32);
	tbl.SetValue(_T("docno"), m_nDocumentNo);
	tbl.SetValue(_T("fuid"), m_szUID);
	if (m_nOptIdx > 0)
	{
		tbl.AddField(_T("optidx"), dfLong);
		tbl.SetValue(_T("optidx"), m_nOptIdx);
	}
	CStringArray fields;

	htmlayout::named_values values;
	if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
		
		

		dom::element t = root.find_first("[name='%S']",name.c_str()); 
		if( !t.get_style_attribute("behavior") )
		{
			continue;
		}
		if(IsReadOnly(name.c_str()))
			continue;
		
		const wchar_t* disabled = t.get_attribute("disabled");
		const wchar_t* val = t.get_attribute("value");
		const wchar_t* checked = t.get_attribute("checked");
		//_tprintf(_T("\r\n%s: %s: %s: %s"), name.c_str(), val, checked, disabled);
		if(t.get_ctl_type() == CTL_RADIO)
		{
			
			selected_cb selected;
			root.find_all(&selected, "[type='radio'][name='%S']", name.c_str());

			for( unsigned int n = 0; n < selected.elements.size(); ++n )
			{
				dom::element& e = selected.elements[n];
				checked = e.get_attribute("checked");
				val = e.get_attribute("value");
				if(checked != NULL && wcscmp(checked, L"true") == 0)
				{
					value = val;					
					break;
				}
				
			}
			
		}

		if(t.get_ctl_type() == CTL_DD_SELECT)
		{
			dom::element sel = t.find_first("caption");
			if(sel.is_valid())
			{
				val = sel.get_attribute("id");
				if(val != NULL)
				{
					value = val;
				}
			}
		}
		
		

		
			
		//if (value.length() > 0)
		{
			printf("\r\n%s: %d", t.get_element_type(), t.get_ctl_type());
			_tprintf(_T("\r\n %s: %s: %s: %s"),  name.c_str(), value.c_str(), val, checked);

			int type = dfText;
			int length = 254;
			
			if(tbl.AddField(name.c_str(), type, length) > 0)
			{
				fields.Add(name.c_str());
			}
			tbl.SetValue(name.c_str(), value.c_str());

		}

	  }
	  bRes = TRUE;
    }

	CRecord rs(&pMF->m_db);
	CString szWhere;

	szWhere.Format(_T(" WHERE docno=%ld %s "), m_nDocumentNo, m_szWhere);
	szSQL.Format(_T("SELECT count(*) FROM %s_FORM %s "), m_szTableName, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		szSQL.Format(_T("%s %s"), tbl.GetUpdateSQL(), szWhere);
	}
	else
	{
		szSQL.Format(_T("%s"), tbl.GetInsertSQL());
	}

	int ret = pMF->ExecSQL(szSQL);
	_tprintf(_T("\r\n%d:%s"), ret, szSQL);
	if(ret == -1)
	{
		CString szType;
		
		szSQL.Format(_T("select count(*) from SYS.dba_tables where table_name ='%s_FORM'"), m_szTableName);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0)
		{
			szSQL.Format(_T("CREATE TABLE %s_FORM(docno integer, fuid nvarchar2(32), primary key(docno, fuid) )"), m_szTableName);
			if (m_nOptIdx > 0)
			{
				szSQL.Format(_T("CREATE TABLE %s_FORM(docno integer, fuid nvarchar2(32), primary key(docno, fuid), optidx integer )"), m_szTableName);
			}
			pMF->ExecSQL(szSQL);
		}
		for (int i =0; i < fields.GetCount(); i++)
		{
			CDbField f = tbl[fields[i]];
			switch(f.GetType())
			{
			case dfInteger:
				szType.Format(_T(" INTEGER"));
				break;
			case dfDate:
				szType.Format(_T(" DATE"));
				break;
			case dfDateTime:
				szType.Format(_T(" TIMESTAMP "));
				break;
			default:
				szType.Format(_T(" NVARCHAR2(32) "));
				break;

			};
			szSQL.Format(_T("ALTER TABLE %s_FORM ADD %s %s "),m_szTableName, f.GetName(), szType);
			pMF->ExecSQL(szSQL);
			
			
		}
	}

	return bRes;
 }


 void CHTMLForms::OnAfterLoadData()
 {

	 CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 CRecord rs(&pMF->m_db);
	 CString szSQL;

	 dom::element root = GetRootElement();

	 htmlayout::named_values values;
	if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
      
		dom::element t = root.find_first("[name='%S']",name.c_str()); 
		if( !t.get_style_attribute("behavior") )
			continue;
		szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='GENERAL_EXAM_DOC' and hde_name='%s' "),
			m_nDocumentNo, m_szDeptID, name.c_str());
_tprintf(_T("\r\n%s"), szSQL);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			CString szValue;
			rs.GetValue(_T("hde_value"), szValue);
			szValue.Trim();
			if(szValue == _T("0"))
				szValue.Empty();

			t.set_attribute("value", szValue);
			t.set_value((LPCTSTR) szValue);
		}
	  }
	}
	return;

	 htmlayout::dom::element tr = root.find_first("plaintext");
          if( tr )
          {
            htmlayout::debug_output_console dcon;
            LPCSTR tag;
            HTMLayoutGetElementType(tr,&tag);
			CString szText = _T(" I think this has something to do with the tables used by the calendars. This hasnt always been this way. The same operations shown in my sample used to be fast. In the last couple of months there were some changes made (I think to delay certain CSS updates?) and ever since HTMLayout has felt extremely fragile and slow, especially where tables are concerned. I actually ripped out some grids and replaced them with a native control because I couldn't keep fighting with them. More than a couple hundred rows would start to ruin the user experience.");
			//tr.set_attribute("disabled", L"true");
			tr.set_attribute("value", szText);
			tr.set_value((LPCTSTR)szText);
//			tr.update(false);


		


		  }
//		  root.update(true);
 }


 bool CHTMLForms::SetValue(LPCTSTR lpszName, CString szValue)
 {
	bool bRes = false;
	dom::element root = GetRootElement();
	dom::element t = root.find_first("[name='%S']", lpszName); 
	if (t.is_valid())
	{
		
		if(t.get_ctl_type() == CTL_RADIO)
		{
			selected_cb selected;
			root.find_all(&selected, "[type='radio'][name='%S']", lpszName);		    
			for( unsigned int n = 0; n < selected.elements.size(); ++n )
			{
				dom::element& e = selected.elements[n];
				const wchar_t* val = e.get_attribute("value");
				std::wstring str(val);
				_tprintf(_T("\r\n%s: %s: %s"), lpszName, szValue, str.c_str());
				if(str == (LPCTSTR)szValue)
				{
					//  e.set_value(json::value(true));
					e.set_attribute("checked", L"true");
					e.set_value(val);
					_tprintf(_T("\r\nSetvalue %s: %s"), lpszName, szValue);
				}
				else
				{
					//e.set_value(json::value(false));
					//e.set_attribute("checked", L"false");
					e.remove_attribute("checked");
				}
			}
			//_tprintf(_T("\r\nHTML:%s"), r.get_html().c_str());
		}
		else if(t.get_ctl_type() == CTL_CHECKBOX)
		{
			t.set_value((LPCTSTR)szValue);
			if(szValue == _T("true"))
			{
				t.set_attribute("checked", szValue);
			}
			else
				t.remove_attribute("checked");
		}
		else
		{
			//_tprintf(_T("\nval: %s|name: %s\n"), szValue, CString(lpszName));
			t.set_value(json::value((LPCTSTR)szValue));
			t.set_attribute("value", (LPCTSTR) szValue);
		}
		t.update(false);

		return true;
	}
	return false;
 }


void CHTMLForms::GetValue(LPCTSTR lpszName, CString& szValue)
 {
	bool bRes = false;
	dom::element root = GetRootElement();
	dom::element t = root.find_first("[name='%S']", lpszName); 
	htmlayout::named_values values;
	if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
		if(name == lpszName)
		{
			szValue = value.c_str();
			break;
		}
				

	  }
    }

 }



void CHTMLForms::EnableControls(bool bEnable)
{
	dom::element root = GetRootElement();
	
	htmlayout::named_values values;
    if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
		//::MessageBoxW(NULL, name, _T("") );
		//_tprintf(_T("\nname: %s\n"), name.c_str());
		dom::element t = root.find_first("[name='%S']",name.c_str()); 
		if( !t.get_style_attribute("behavior") )
			continue;
		std::string str = t.get_element_type();
		if(str == "input" || str == "textarea" || str == "plaintext")
		{
			if(bEnable)
			{
				t.remove_attribute("disabled");
				t.set_attribute("background", L"#FFFFFF");
			}
			else
			{
				t.set_attribute("disabled", _T(""));
				t.set_attribute("background", L"#F8F8F8");

			}
			for (int i = 0 ; i < t.get_attribute_count(); i++)
			{
				str = t.get_attribute_name(i);
				//_tprintf(_T("\nattr: %S\n"), str.c_str());
				if (str == "autofocus")
				{
					t.set_state(STATE_FOCUS);
					break;
				}				
			}
			if (IsReadOnly(name.c_str()))
			{
				t.set_attribute("disabled", _T(""));
				t.set_attribute("background", L"#F8F8F8");
			}
			t.update(true);
		}
	  }
    }

	root.update(true);
}


void CHTMLForms::EnableControl(LPCTSTR lpszName, bool bEnable)
{
	dom::element root = GetRootElement();
	dom::element t = root.find_first("[name='%S']", lpszName); 
	if(t.is_valid())
	{
		if(bEnable)
		{
			t.remove_attribute("disabled");
			t.set_attribute("background", L"#FFFFFF");
		}
		else
		{
			t.set_attribute("disabled", _T(""));
			t.set_attribute("background", L"#F8F8F8");

		}
	}
	t.update(true);
	root.update(true);

}

dom::element CHTMLForms::Find(LPCTSTR lpszName)
{
	dom::element root = GetRootElement();
	dom::element t = root.find_first("[name='%S']", lpszName); 
	return t;
}
void CHTMLForms::OnDestroy()
{
	CView::OnDestroy();
	POSITION pos = m_options.GetStartPosition();
	CString lpszName;
	OptionList* optionList;
	while(pos != NULL)
	{
		m_options.GetNextAssoc(pos, lpszName, optionList);
		delete optionList;
	}
	m_options.RemoveAll();
	// TODO: Add your message handler code here
}

void CHTMLForms::OnNcDestroy()
{
	//__super::OnNcDestroy();

	// TODO: Add your message handler code here
}


bool CHTMLForms::Load(LPCTSTR lpszFile)
{
	CFile file;

	if(!file.Open(lpszFile, CFile::modeRead))
		return FALSE;
	BYTE* lpBuf = new BYTE[file.GetLength()+sizeof(BYTE)];
	memset(lpBuf, '\0', file.GetLength()+sizeof(BYTE));
	file.Read(lpBuf, file.GetLength());
	LoadHtml((LPCBYTE)lpBuf, file.GetLength());
	delete lpBuf;
	file.Close();
	return TRUE;
}

  // HTMLayout callback
  LRESULT CALLBACK CHTMLForms::callback(UINT uMsg, WPARAM wParam, LPARAM lParam, LPVOID vParam)
  {
      ASSERT(vParam);
      CHTMLForms* pThis = (CHTMLForms*)vParam;
      return pThis->OnHtmlNotify(uMsg, wParam, lParam);
  }

  void CHTMLForms::SetCallback()
  {
    ASSERT(::IsWindow(m_hWnd));
    ::HTMLayoutSetCallback(m_hWnd,callback, this);
  }

 
 int GetAlts() 
{
  int alts = 0;
  if (GetAsyncKeyState(VK_SHIFT) < 0) alts |= SHIFT_KEY_PRESSED;
  if (GetAsyncKeyState(VK_CONTROL) < 0) alts |= CONTROL_KEY_PRESSED;
  if (GetAsyncKeyState(VK_MENU) < 0) alts |= ALT_KEY_PRESSED;
  return alts;
}

 
  LRESULT CHTMLForms::WindowProc( UINT message, WPARAM wParam, LPARAM lParam)
  {
	// HTMLayout +
	// HTMLayout could be created as sepearate window 
	// using CreateWindow API.
	// But in this case we are attaching HTMLayout functionality
	// to the existing window delegating windows message handling to 
	// HTMLayoutProcND function.
	  BOOL bHandled = FALSE;
	LRESULT lResult = HTMLayoutProcND(m_hWnd,message,wParam,lParam, &bHandled);
	if(bHandled)
		return lResult;
		// HTMLayout -  
	
	

	return CView ::WindowProc(message, wParam, lParam);
  }

  LRESULT CHTMLForms::OnHtmlNotify(UINT uMsg, WPARAM wParam, LPARAM lParam)
  {
    ASSERT(uMsg == WM_NOTIFY);

    // Crack and call appropriate method
    
    // here are all notifiactions
    switch(((NMHDR*)lParam)->code) 
    {
      case HLN_CREATE_CONTROL:    return OnCreateControl((LPNMHL_CREATE_CONTROL) lParam);
      case HLN_CONTROL_CREATED:   return OnControlCreated((LPNMHL_CREATE_CONTROL) lParam);
      case HLN_DESTROY_CONTROL:   return OnDestroyControl((LPNMHL_DESTROY_CONTROL) lParam);
      case HLN_LOAD_DATA:         return OnLoadData((LPNMHL_LOAD_DATA) lParam);
      case HLN_DATA_LOADED:       return OnDataLoaded((LPNMHL_DATA_LOADED)lParam);
      case HLN_DOCUMENT_COMPLETE: return OnDocumentComplete();
      case HLN_ATTACH_BEHAVIOR:   return OnAttachBehavior((LPNMHL_ATTACH_BEHAVIOR)lParam );
    }
    return OnHtmlGenericNotifications(uMsg,wParam,lParam);
  }

  LRESULT CHTMLForms::OnHtmlCommand(NMHL_COMMAND_CLICK *pnmCommand) 
  {
    //empty placeholder
	 if(pnmCommand == NULL)
		return 0;
	return 0;
  }



BOOL CHTMLForms::PreTranslateMessage( MSG* pMsg )
{
	
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_F2)
		{
			PostData();
			return TRUE;
		}

	}
	return CView::PreTranslateMessage(pMsg);
}


bool CHTMLForms::LoadHtml(LPCBYTE pb, DWORD nBytes)
  {
    ASSERT(::IsWindow(m_hWnd));
	m_nHtmlSize = nBytes;
    bool res =  ::HTMLayoutLoadHtml(m_hWnd, pb, nBytes) != 0;
	
	dom::element root = htmlayout::dom::element::root_element(m_hWnd);

	if(res)
	{
		_tprintf(_T("CHTMLayoutHost::OnDocumentComplete\n"));
		
       //   OnAfterLoadData();
		  


	}

	
	



	m_pHtmlBuffer = pb;
	return res;
  }


  bool CHTMLForms::IsReadOnly(LPCTSTR szField)
  {
	CString szName(szField);
	szName.MakeUpper();
	  for (int i =0;i < m_ROFields.GetCount(); i++)
	  {
		  if(m_ROFields[i] == szName)
			  return true;
	  }
	  return false;
  }





  void CHTMLForms::OnElementEvent(dom::element el){
	  //_tprintf(L"\r\n%s", el.get_html().c_str());
  }


  BOOL CHTMLForms::handle_event (HELEMENT he, BEHAVIOR_EVENT_PARAMS& params ) 
      { 
		  
        dom::element src = params.heTarget;
		dom::element el = params.he;
		
		CTL_TYPE type = src.get_ctl_type();
		
		printf("\r\nevent:%d: %d", params.cmd, type);
		const wchar_t* szName = el.get_attribute("name");
		
		if(params.cmd == POPUP_REQUEST)
		{
			printf("popup request");
			if(szName == NULL)
			{
				el = el.parent();
				szName = el.get_attribute("name");
				
			}
			if(szName == NULL)
				return FALSE;
			
			_tprintf(_T("\r\ntag name=%s"), szName);
			OnCreateOptions(szName);
			OptionList* lstOptions = m_options[szName];
			
			if(el.is_valid() && lstOptions != NULL)
			{
				dom::element popup = el.find_first("popup,[type='select']");
				popup.clear();
				std::string str;
				CString tmpStr;
				for (int i =0; i < lstOptions->GetCount(); i++)
				{
					OptionItem* opt =  lstOptions->GetAt(i);
					tmpStr.Format(_T("<option id=\"%s\" index=\"%d\">"), opt->m_szId, i);
					str += StringUtil::toUTF8(tmpStr);
					tmpStr.Format(_T("%s"), opt->m_szText); 
					str += StringUtil::toUTF8(tmpStr);
					str += "</option>";
				}
				popup.set_html((const unsigned char*)str.c_str(), str.length());
				el.update();
				
			}
			//printf("\r\n%s", el.get_html().c_str());
			return TRUE;
		}
       
		if(params.cmd == SELECT_SELECTION_CHANGED)
		{
			dom::element el_popup = el.parent();
			dom::element el_select = el_popup.parent();
			printf("\r\nselect changed:%s", el_select.get_html().c_str());
			int nIndex = el.get_attribute_int("index", -1);
			if(nIndex >= 0)
			{
				const wchar_t* szName = el_select.get_attribute("name");
				OptionList* lstOptions = m_options[szName];
				OptionItem* opt = lstOptions->GetAt(nIndex);
				OnOptionSelect(opt);
			}
		}
        return event_handler::handle_event (he, params) ;
}

bool belongs_to( dom::element parent, dom::element child )
{
  if( !child.is_valid()) 
    return false;
  if( parent == child )
    return true;
  return belongs_to( parent, child.parent() );
}


BOOL CHTMLForms::handle_key (HELEMENT he, KEY_PARAMS& params ) 
{
       if(params.cmd != KEY_DOWN)
         return FALSE;
	   printf("\r\nhandle_key:%d", params.key_code);	   
       dom::element root = dom::element::root_element(m_hWnd);
		
	   dom::element el = he;

       switch(params.key_code)
       {
         case VK_RETURN:
           {
			   
			   ::SendMessage(m_hWnd, WM_KEYDOWN, VK_TAB, 0);
			   return TRUE;
             
           } break;
		 case VK_F4:
			 {
				 dom::element form = el.parent();
				 dom::element popup_el = form.find_first(".popup,popup"); // either class or element <popup>
				if( belongs_to(popup_el,params.target) )
					return true;

				if( popup_el.is_valid() && el.is_valid() && !el.get_state(STATE_OWNS_POPUP) )
				{
					//el.set_attribute("popup-shown",_T("")); // set popup-shown attribute 
							// to indicate that popup has been shown
							// this may be used by CSS to indicate UI state
					// set_attribute("popup-shown") above is obsolete as you can use 
					// :popup and :owns-popup pseudo-classes in CSS now.  
					//el.update(true); // render state
					::HTMLayoutShowPopup(popup_el,el,2); // show it below
					//popup_el.set_state(0,STATE_FOCUS);
					//el.set_attribute("popup-shown",0);   // remove popup-shown attribute 
				}
				return TRUE;
			 }
         case VK_ESCAPE:
           {
           } break;
       }
       return FALSE;
    }


  void CHTMLForms::AddOption(LPCTSTR lpszName, OptionList* lstOption)
  {
	  OptionList* opt = m_options[lpszName];
	  if(opt != NULL)
	  {
		  delete opt;
	  }
	  m_options[lpszName] = lstOption;
  }

  void CHTMLForms::InitSelection(LPCTSTR lpszName, LPCTSTR lpszSectionId)
  {
	  OptionList* lstOption = m_options[lpszName];
	  if(lstOption != NULL)
	  {
		  delete lstOption;
	  }
	  lstOption = new OptionList();
	CString szSQL;
	CGuiMainFrame *pMF = (CGuiMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_id='%s' ORDER BY ss_index, ss_code, ss_desc"), lpszSectionId);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		CString szId, szDesc, szDefault;
		rs.GetValue(_T("ss_code"), szId);
		rs.GetValue(_T("ss_desc"), szDesc);
		rs.GetValue(_T("ss_default"), szDefault);
		OptionItem *o = new OptionItem(szId, szDesc, szDefault==_T("Y")?true:false);
		lstOption->Add(o);
_tprintf(_T("\r\n%s"), szId);
		rs.MoveNext();
	}
	  m_options[lpszName] = lstOption;
  }



  BOOL CHTMLForms::OnEvent(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ){
	  printf("on_event:");
	  return FALSE;
  }