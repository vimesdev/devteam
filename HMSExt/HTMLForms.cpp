// HTMLayoutCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "HTMLForms.h"
#include <strsafe.h>
#include "GuiMainFrame.h"
#include "DbMap.h"
#include "JSON.h"
#include "StringUtil.h"
#include "LayoutUtils.h"
#include "HMSParaclinicResultDialog.h"
#include <Winspool.h>
#include "fml.h"

using namespace htmlayout;

vector<string> splitString(string s, string delimiter) {
	size_t pos_start = 0, pos_end, delim_len = delimiter.length();
	string token;
	vector<string> res;

	while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
		token = s.substr (pos_start, pos_end - pos_start);
		pos_start = pos_end + delim_len;
		res.push_back (token);
	}

	res.push_back (s.substr (pos_start));
	return res;
}

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

#if (_MSC_VER > 1500)
	IMPLEMENT_DYNAMIC(CHTMLForms, CHTMLayoutCtrl)
#else
	IMPLEMENT_DYNAMIC(CHTMLForms, CView)
#endif


CHTMLForms::CHTMLForms():

#if (_MSC_VER > 1500)
	CHTMLayoutCtrl()
#else
	event_handler(HANDLE_ALL), m_pvalues(0)
#endif

{
  m_pPrinter = NULL;
  m_margin_top = 0.5;
  m_margin_left = 0.7;
  m_margin_right = 0.5;
  m_margin_bottom = 0.5;
  m_szUID.Empty();
  m_nDocumentNo = 0;
}

CHTMLForms::~CHTMLForms()
{
}

BOOL CHTMLForms::Create(CWnd* pParent, int x, int y, int w, int h)
{
	return Create(WS_CHILD|WS_VISIBLE, CRect(x,y, w, h), pParent, _GetNextID());
}
BOOL CHTMLForms::Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd,
  UINT nID)
{
  CWnd* pWnd = this;
  if(pWnd->Create(::HTMLayoutClassNameT(), NULL, dwStyle, rect, pParentWnd, nID))
  {
	  OnInitializes();
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
	 // _tprintf(_T("CHTMLForms::OnCreateControl: type='%s'\n"), GetElementType(pnmcc->helement) );

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
    
	dom::element root = GetRootElement();
	htmlayout::dom::element body = root.find_first("body");
	/*m_margin_left = body.get_attribute_int("margin-left", m_margin_left);
	m_margin_top = body.get_attribute_int("margin-top", m_margin_top);
	m_margin_right = body.get_attribute_int("margin-right", m_margin_right);
	m_margin_bottom = body.get_attribute_int("margin-bottom", m_margin_bottom);*/
	
	const wchar_t* attr;

	attr = body.get_attribute("margin-left");
	if(attr != NULL)
	{
		m_margin_left = str2float(attr)/2.54;
		body.set_attribute("margin-left", L"0cm");
	}
	attr = body.get_attribute("margin-top");
	if(attr != NULL)
	{
		m_margin_top = str2float(attr)/2.54;
		body.set_attribute("margin-top", L"0cm");
	}
	attr = body.get_attribute("margin-right");
	if(attr != NULL)
	{
		m_margin_right = str2float(attr)/2.54;
		body.set_style_attribute("margin-right", L"0cm");
	}
	attr = body.get_attribute("margin-bottom");
	if(attr != NULL)
	{
		m_margin_bottom = str2float(attr)/2.54;
		body.set_attribute("margin-bottom", L"0cm");
	}
	body.set_style_attribute("margin-left", L"0cm");
	body.set_style_attribute("margin-top", L"0cm");
	body.set_style_attribute("margin-right", L"0cm");
	body.set_style_attribute("margin-bottom", L"0cm");
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
		m_pPrinter = NULL;
	}
	const wchar_t* attr;
	dom::element root = GetRootElement();
	htmlayout::dom::element body = root.find_first("body");


	
	CString szDeviceName = AfxGetApp()->GetProfileString(_T("PrinterConfig"), m_szForm, _T(""));
	_tprintf(_T("\r\n%s"), szDeviceName);

	if(!szDeviceName.IsEmpty())
	{
		DWORD dwLength=MAX_PATH;
		TCHAR szPrinter[MAX_PATH];
		if (GetDefaultPrinter(szPrinter, &dwLength))
		{
			_tprintf(_T("\r\n%s"), szPrinter);
			if (szDeviceName != szPrinter)
			{
				if (!SetDefaultPrinter(szDeviceName))
				{
					AfxGetApp()->WriteProfileString(_T("PrinterConfig"), m_szHtmlFile, szPrinter);
				}
			}
		}
	}
	

	
	attr = body.get_attribute("paper_size");
_tprintf(_T("\r\n%s"), attr);

	if(attr != NULL)
	{
		std::wstring val(attr);
		PRINTDLG pd;
		pd.lStructSize=(DWORD)sizeof(PRINTDLG);
		BOOL bRet=AfxGetApp()->GetPrinterDeviceDefaults(&pd);
		if(bRet)
		{
			// protect memory handle with ::GlobalLock and ::GlobalUnlock

			DEVMODE FAR *pDevMode=(DEVMODE FAR *)::GlobalLock(pd.hDevMode);
			// set papersize to A4
			if(val == _T("A5"))
			{
				pDevMode->dmPaperSize=DMPAPER_A5;
			}
			else
				pDevMode->dmPaperSize=DMPAPER_A4;
			// set orientation to landscape  or portrait
			int orientation = DMORIENT_PORTRAIT;
			attr = body.get_attribute("landscape");
			if(attr != NULL)
			{
				val = attr;
				if(val == L"true")
				{
					orientation = DMORIENT_LANDSCAPE;
				}
			}
			pDevMode->dmOrientation=orientation;
			AfxGetApp()->SelectPrinter(pd.hDevNames, pd.hDevMode);
			::GlobalUnlock(pd.hDevMode);
		}
	}

	m_pPrinter = new PrintEx();
	LPBYTE pData=NULL;
	HELEMENT he = GetRootElement();
	htmlayout::dom::element el = he;
	LPWSTR str;
	UINT nLength= m_nHtmlSize;
	unsigned char* utf8bytes = 0;
	
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
	std::string strHtml;
	dom::element t;
	std::vector<dom::element> plaintext_grp;
	root.find_all(plaintext_grp, "div[name='%S']", L"plaintext");

	
	for( unsigned int n = 0; n < plaintext_grp.size(); ++n )
	{
		t = plaintext_grp[n];
		if(!t.is_valid())
			continue;
		dom::element e = t.find_first("plaintext");
		if(e.is_valid())
		{
			json::value value = e.get_value();
			std::wstring strValue = value.to_string();
			if (strValue.empty())
				continue;

			strHtml = StringUtil::toUTF8(strValue.c_str());
			vector<std::string> arr =  splitString(strHtml, "\r\n");
			strHtml.clear();
			std::string space;
			std::string divString;
			for(size_t i =0; i < arr.size(); i++)
			{
				std::string str = arr[i];
				//	printf("\r\nblock: %s", str.c_str());


				space.clear();
				size_t j = 0;
				for(j = 0; j < str.length(); j++)
				{
					if(str[j] != ' ')
						break;
					space.append("&nbsp;");
				}
				//if(i > 0) strHtml.append("<br\>");
				strHtml.append(space);
				strHtml.append(&str[j]);
				str.clear();
				str.append("<div>");
				str.append(strHtml);
				str.append("</div>");
				divString += str;
				strHtml.clear();
			}
			printf("\r\n%s", divString.c_str());
			//printf("\r\n%s", strHtml.c_str());
			t.set_html((const unsigned char*)divString.c_str(), divString.size());
			t.update();
		}
	}
	root.update();

	HTMLayoutGetElementHtml(he, &utf8bytes, true);
	//printf("\r\n%s", utf8bytes);
//	FILE *fp = fopen("c:\\temp\\xxx.dat", "w+");
//	fprintf(fp, "%s", utf8bytes);
//	fclose(fp);
	char szPath[254];
	::GetCurrentDirectoryA(254, szPath);
	CStringA szBaseUri;
	szBaseUri.Format("%s\\", szPath);
	if (utf8bytes)
	{
		if (!m_pPrinter->load((LPCBYTE)utf8bytes, strlen((const char*)utf8bytes), szBaseUri)) {
			delete m_pPrinter;
			m_pPrinter = NULL;
			delete utf8bytes;
			return FALSE;
		}
		//delete utf8bytes;
	}

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

	dom::element root = GetRootElement();
	htmlayout::dom::element body = root.find_first("body");
	//m_margin_left = body.get_attribute_int("margin-left", m_margin_left);
	const wchar_t* attr;

	body.set_style_attribute("margin-left", L"0cm");
	body.set_style_attribute("margin-top", L"0cm");
	body.set_style_attribute("margin-right", L"0cm");
	body.set_style_attribute("margin-bottom", L"0cm");
	body.set_attribute("margin-left", L"0cm");
	body.set_attribute("margin-top", L"0cm");
	body.set_attribute("margin-right", L"0cm");
	body.set_attribute("margin-bottom", L"0cm");

	attr = body.get_attribute("xmargin-left");
	if(attr != NULL)
	{
		m_margin_left = str2float(attr)/2.54;
	}

	//m_margin_right = body.get_attribute_int("margin-right", m_margin_right);
	attr = body.get_attribute("xmargin-right");

	if(attr != NULL)
	{
		m_margin_right = str2float(attr)/2.54;
	}

	attr = body.get_attribute("xmargin-top");
	if(attr != NULL)
	{
		m_margin_top = str2float(attr)/2.54;
	}

	//m_margin_right = body.get_attribute_int("margin-right", m_margin_right);
	attr = body.get_attribute("xmargin-bottom");

	if(attr != NULL)
	{
		m_margin_bottom = str2float(attr)/2.54;
	}


	printf("\r\n%f: %f: %f: %f", m_margin_top, m_margin_bottom, dpix, dpiy);

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

		m_szFieldKey.Format(_T("%s_uid"), m_szTableName);


	  return 0;
}

void CHTMLForms::GetData()
{
	cout << "DOCNO:" << m_nDocumentNo << endl;
	CGuiMainFrame* pMF = (CGuiMainFrame*)AfxGetMainWnd();
	
/*
#if (_MSC_VER > 1500)
	GetData_V2();
#else
	GetData_V1();
#endif
*/
	GetData_V1();
	CRecord rs(&pMF->m_db);

	//m_ROFields.RemoveAll();
	long nPatientno = 0;
	int nCount = 0;
	int nTotal = 0;
	int nTotalCLS = 0;

	CString szSQL, tmpStr;
	szSQL.Format(_T("select htd_column from html_disable "));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("htd_column"), tmpStr);
		CString szName = tmpStr;
		szName.MakeUpper();
		m_ROFields.Add(szName);
		rs.MoveNext();
	}


}

void CHTMLForms::GetData_V1()
{
	 CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 CString szSQL, szWhere;
	 CString szFieldName, szValue;
	 
	 CRecord rs(&pMF->m_db);
     CLayoutUtils utils;
	 szWhere = m_szWhere;
	 if(m_fKey.m_nOrderId == 0)
	 {
		 szWhere.Empty();	
	 }
	 m_szFieldKey.Format(_T("%s_uid"), m_szTableName);
	 szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld %s "), m_szTableView, m_fKey.m_nDocumentNo, m_szWhere);
	 _tprintf(_T("\r\nGetData: %s"), szSQL);
	 int ret = rs.ExecSQL(szSQL);
	 if(ret == -1)
	 {
		szSQL.Format(_T("select count(*) from SYS.dba_tables where table_name ='%s'"), m_szTableName);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0)
		{
			szSQL.Format(_T("CREATE VIEW %s AS SELECT * FROM %s"), m_szTableView, m_szTableName);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld %s "), m_szTableView, m_fKey.m_nDocumentNo, m_szWhere);
			rs.ExecSQL(szSQL);
		}
	 }

	 m_ROFields.RemoveAll();
	 while (!rs.IsEOF())
	 {
		for (int i =0; i < rs.GetFieldCount(); i++)
		{
			szFieldName = rs.GetFieldName(i);
			szValue  = rs.GetValue(i);
			SetValue(szFieldName, szValue);
			EnableControl(szFieldName, false);
			// Check disable flag
			dom::element root = GetRootElement();
			dom::element el = root.find_first("[name='%S']", szFieldName);
			//printf("\nszField: %S", szField);
			if (el.is_valid())
			{
				//std::wstring str= el.get_attribute("disabled");
				//if (str.compare(L"disabled") == 0)
                if (utils.check_attribute(el, "disabled") > 0)
				{
					m_ROFields.Add(szFieldName);
				}
			}
			m_data[szFieldName] = szValue;
		}
		rs.MoveNext();
	 }


	//szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld and %s ='%s' "), m_szTableName, m_fKey.m_nDocumentNo, m_szFieldKey, m_szUID);
	//_tprintf(_T("\r\nGetData: %s"), szSQL);
	 szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld "), m_szTableName, m_fKey.m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		for (int i =0; i < rs.GetFieldCount(); i++)
		{
			szFieldName = rs.GetFieldName(i);
			if (IsReadOnly(szFieldName))
			{
				continue;
			}
			szValue  = rs.GetValue(i);
			SetValue(szFieldName, szValue);
			EnableControl(szFieldName, true);
			m_data[szFieldName] = szValue;
		}
	}
	 
}
void CHTMLForms::GetData_V2()
{
	
	CGuiMainFrame* pMF = (CGuiMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szFieldName, szValue;

	m_fKey.m_nDocumentNo = m_nDocumentNo;

	CRecord rs(&pMF->m_db);
	szWhere = m_szWhere;
	if (m_fKey.m_nOrderId == 0)
	{
		szWhere.Empty();
	}
	m_szFieldKey.Format(_T("%s_uid"), m_szTableName);
	szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld %s "), m_szTableView, m_fKey.m_nDocumentNo, m_szWhere);
	_tprintf(_T("\r\nGetData: %s"), szSQL);
	int ret = rs.ExecSQL(szSQL);
	if (ret == -1)
	{
		szSQL.Format(_T("select count(*) from SYS.dba_tables where table_name ='%s'"), m_szTableName);
		rs.ExecSQL(szSQL);
		if (rs.GetIntValue() <= 0)
		{
			szSQL.Format(_T("CREATE VIEW %s AS SELECT * FROM %s"), m_szTableView, m_szTableName);
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("SELECT * FROM %s WHERE docno=%ld %s "), m_szTableView, m_fKey.m_nDocumentNo, m_szWhere);
			rs.ExecSQL(szSQL);
		}
	}

	m_ROFields.RemoveAll();
	while (!rs.IsEOF())
	{
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			szFieldName = rs.GetFieldName(i);
			szValue = rs.GetValue(i);
			SetValue(szFieldName, szValue);
			EnableControl(szFieldName, false);
			// Check disable flag
			dom::element root = GetRootElement();
			dom::element el = root.find_first("[name='%S']", szFieldName);
			//printf("\nszField: %S", szField);
			if (el.is_valid())
			{
				std::wstring str = el.get_attribute("disabled");
				if (str.compare(L"disabled") == 0)
				{
					m_ROFields.Add(szFieldName);
				}
			}
			m_data[szFieldName] = szValue;
		}
		rs.MoveNext();
	}

	CString tmpStr, szFilter, szData;
	int nTreatTime = m_nOptIdx;
	szFilter.Empty();
	
	bool res = GetEMRData(m_nDocumentNo, nTreatTime,m_szType, m_szForm, szFilter, szData);
	if (!res)
	{
		CRecord rsl(&pMF->m_db);

		szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr ") \
			_T(" WHERE hde_docno=%ld and hde_type IN('BENH_AN_CHUYEN_KHOA') ") \
			_T(" %s ") \
			_T(" ORDER BY hde_type, hde_refidx "), m_nDocumentNo, szWhere);
		rsl.ExecSQL(szSQL);


		while (!rsl.IsEOF())
		{
			rsl.GetValue(_T("hde_value"), tmpStr);
			szData.AppendFormat(_T("%s"), tmpStr);
			rsl.MoveNext();
		}
	}

	JSONVALUE jsData;
	jsData.Parse(szData);
	if (!szData.IsEmpty())
	{
		for (int i = 0; i < jsData.Size(); i++)
		{

			std::wstring name;
			name = jsData.order[i];
			tmpStr.Empty();
			jsData[name.c_str()].GetValue(tmpStr);
			SetValue(name.c_str(), tmpStr);
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
	 
	 if(m_fKey.m_nDocumentNo <= 0)
	 {
		 ShowMessageBox(_T("Không lưu được dữ liệu. Do số hồ sơ = 0"));
		 return false;
	 }
	dom::element root = GetRootElement();
	
	root.update(true);



	CDbfMap tbl;
	tbl.SetTableName(m_szTableName);
	tbl.AddField(_T("createdby"), dfText, 15);
	//tbl.AddField(_T("createddate"), dfDateTime);
	tbl.AddField(_T("updatedby"), dfText, 15);
	//tbl.AddField(_T("updateddate"), dfDateTime);
	tbl.AddField(_T("patientno"), dfLong);
	tbl.AddField(_T("docno"), dfLong);
	tbl.AddField(_T("deptid"), dfText, 7);
	tbl.AddField(_T("refidx"), dfInteger);
	tbl.AddField(_T("treattime"), dfInteger);
	tbl.AddField(_T("orderid"), dfLong);
	tbl.AddField(_T("reference"), dfText, 32);
	tbl.SetValue(_T("patientno"), m_fKey.m_nPatientNo);
	tbl.SetValue(_T("docno"), m_fKey.m_nDocumentNo);
	tbl.SetValue(_T("deptid"), m_fKey.m_szDeptID);
	tbl.SetValue(_T("refidx"), m_fKey.m_nRefIdx);
	tbl.SetValue(_T("treattime"), m_fKey.m_nTreatTime);
	tbl.SetValue(_T("createdby"), pMF->GetCurrentUser());
	tbl.SetValue(_T("updatedby"), pMF->GetCurrentUser());
	tbl.SetValue(_T("orderid"), m_fKey.m_nOrderId);
	tbl.SetValue(_T("reference"), m_fKey.m_szReference);
	tbl.SetValue(_T("orderid"), m_fKey.m_nOrderId);

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
		
		if (t.get_ctl_type() == CTL_BUTTON)
		{
			continue;
		}

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
		std::wstring id;
		id.clear();
		if(t.get_ctl_type() == CTL_DD_SELECT)
		{
			dom::element sel = t.find_first("caption");
			if(sel.is_valid())
			{
				val = sel.get_attribute("value");
				if(val != NULL)
				{
					value = val;
				}
				const wchar_t* str_id = sel.get_attribute("id");
				if(str_id != NULL)
					id = str_id;
			}
		}
		
		

		
			
		//if (value.length() > 0)
		{
			/*
			printf("\r\n%s: %s: %d", t.get_element_type(), id.c_str(), t.get_ctl_type());
			_tprintf(_T("\r\n %s: %s: %s: %s"),  name.c_str(), value.c_str(), val, checked);
			*/
			int type = dfText;
			int length = 254;
			
			if(tbl.AddField(name.c_str(), type, length) > 0)
			{
				fields.Add(name.c_str());
			}
			tbl.SetValue(name.c_str(), value.c_str());

		}
		if(!id.empty())
		{
			std::wstring id_name = L"id_"+name;
			
			if(tbl.AddField(id_name.c_str(), dfText, 32) > 0)
			{
				fields.Add(id_name.c_str());
			}
			tbl.SetValue(id_name.c_str(), id.c_str());
		}

	  }
	  bRes = TRUE;
    }

	CRecord rs(&pMF->m_db);
	CString szWhere;

	szWhere.Format(_T(" WHERE docno=%ld %s "), m_fKey.m_nDocumentNo, m_szWhere);
	szSQL.Format(_T("SELECT count(*) FROM %s %s "), m_szTableName, szWhere);
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
	//_tprintf(_T("\r\n%d:%s"), ret, szSQL);
	if(ret == -1)
	{
		CString szType;
		
		szSQL.Format(_T("select count(*) from SYS.dba_tables where table_name ='%s'"), m_szTableName);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0)
		{
			szSQL.Format(_T("CREATE TABLE %s (%s nvarchar2(32) default SYS_GUID(), createdby nvarchar2(15), createddate timestamp default systimestamp, updatedby nvarchar2(15), updateddate timestamp, patientno integer, docno integer, deptid nvarchar2(15), refidx integer, treattime integer, orderid integer, reference nvarchar2(32),  primary key(%s) )"), m_szTableName, m_szFieldKey, m_szFieldKey);
			pMF->ExecSQL(szSQL);
//_tprintf(_T("\r\n%s"), szSQL);
		
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
					szType.Format(_T(" NVARCHAR2(2000) "));
					break;

				};
				szSQL.Format(_T("ALTER TABLE %s ADD %s %s "),m_szTableName, f.GetName(), szType);
				pMF->ExecSQL(szSQL);
			}
		}
		bRes = false;
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
			/*szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='GENERAL_EXAM_DOC' and hde_name='%s' "),
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
			}*/
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
	CString szName(lpszName);
	dom::element t = root.find_first("[name='%S']", lpszName, szValue);
	if (!t.is_valid())
	{
		t = root.find_first("[name='%S']", szName.MakeLower(), szValue);
	}
	if (t.is_valid())
	{
		if (t.get_ctl_type() == CTL_RADIO)
		{

			selected_cb selected;
			root.find_all(&selected, "[type='radio'][name='%S']", lpszName);
			std::wstring value;
			value.clear();
			for (unsigned int n = 0; n < selected.elements.size(); ++n)
			{
				dom::element& e = selected.elements[n];
				const wchar_t* val = e.get_attribute("id");
				if (val && szValue == val)
				{
					e.set_value(json::value(true));
					e.set_attribute("checked", L"true");
					value = val;
				}
				else
				{
					e.remove_attribute("checked");

				}
				e.update(false);
				//printf("\r\n%s", e.get_html().c_str());	
			}

			t.update(false);


		}
		else if (t.get_ctl_type() == CTL_CHECKBOX)
		{
            if (szValue == L"1")
                szValue = L"true";
            if (szValue == L"0")
                szValue = L"false";
			t.set_value((LPCTSTR)szValue);
			if (szValue == _T("true"))
			{
				t.set_attribute("checked", szValue);
			}
			else
				t.remove_attribute("checked");
		}
		else
		{
			t.set_value((LPCTSTR)szValue);
			t.set_attribute("value", szValue);
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
	if (htmlayout::get_values(root, values))
	{
		std::wstring s;
		for (htmlayout::named_values::const_iterator it = values.begin(); it != values.end(); ++it)
		{
			s += (*it).first;
			s += L"=";
			s += (*it).second.to_string();
			s += L"\n";

			std::wstring name = (*it).first;
			std::wstring value = (*it).second.to_string();
			if (name == lpszName)
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
		//_tprintf(_T("\nname: %S|value: %S"), name.c_str(), value.c_str());
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
	if (m_pPrinter)
	{
		delete m_pPrinter;
		m_pPrinter = NULL;
	}
	// TODO: Add your message handler code here
}


bool CHTMLForms::Load(LPCTSTR lpszFile)
{
	CFile file;
_tprintf(_T("\nlpszFile: %s"), (CString) lpszFile);
	if(!file.Open(lpszFile, CFile::modeRead))
		return false;
	BYTE* lpBuf = new BYTE[file.GetLength()+sizeof(BYTE)];
	memset(lpBuf, '\0', file.GetLength()+sizeof(BYTE));
	file.Read(lpBuf, file.GetLength());
	LoadHtml((LPCBYTE)lpBuf, file.GetLength());
	delete lpBuf;
	file.Close();
	m_szHtmlFile = lpszFile;
	return true;
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
	bool res = ::HTMLayoutLoadHtml(m_hWnd, pb, nBytes) != 0;

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
		CString szFieldName = m_ROFields[i];
		szFieldName.MakeUpper();
		if(szFieldName == szName)
			return true;
	}
	return false;
}

void CHTMLForms::OnElementEvent(dom::element el){
	//_tprintf(L"\r\n%s", el.get_html().c_str());
}


BOOL CHTMLForms::handle_event (HELEMENT he, BEHAVIOR_EVENT_PARAMS& params ) 
{ 
	BOOL ret =  event_handler::handle_event (he, params) ;

    dom::element src = params.heTarget;
	dom::element el = he;
	dom::element parent = el.parent();
	CTL_TYPE type = el.get_ctl_type();

	const wchar_t* szName = el.get_attribute("name");
	if(params.cmd == 17 && type == 7)
	{
		printf("\r\nselected: %s", parent.get_html().c_str());
	}
	
	
	if(params.cmd == POPUP_REQUEST)
	{
		//printf("popup request");
		if(szName == NULL)
		{
			el = el.parent();
			szName = el.get_attribute("name");
			
		}
		if(szName == NULL)
			return ret;
		
		//_tprintf(_T("\r\ntag name=%s"), szName);
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
				tmpStr.Format(_T("<option id=\"%s\">"), opt->m_szId);
				str += StringUtil::toUTF8(tmpStr);
				tmpStr.Format(_T("%s"), opt->m_szText); 
				str += StringUtil::toUTF8(tmpStr);
				str += "</option>";
			}
			popup.set_html((const unsigned char*)str.c_str(), str.length());
		}
		//printf("\r\n%s", el.get_html().c_str());
		return ret;
	}
	/*
    dom::element caption = parent.find_first("caption");
	if(caption.is_valid())
	{
		printf("\r\n%s", caption.get_html().c_str());

		return ret;
	}
	*/
	

	if(params.cmd == SELECT_SELECTION_CHANGED)
	{
		dom::element el_popup = el.parent();
		dom::element el_select = el_popup.parent();
		//printf("\r\nselect changed:%s", el_select.get_html().c_str());
		int nIndex = el.get_attribute_int("index", -1);
		if(nIndex >= 0)
		{
			const wchar_t* szName = el_select.get_attribute("name");
			OptionList* lstOptions = m_options[szName];
			OptionItem* opt = lstOptions->GetAt(nIndex);
			OnOptionSelect(opt);
		}
	}	
	if(params.cmd == BUTTON_CLICK)
	{
		dom::element el(he), root = el.root();
		std::wstring str = el.get_attribute("name");
		if (str.compare(L"Nut_chon") == 0)		
		{
			CHMSParaclinicResultDialog dlg(this, m_fKey.m_nDocumentNo);
			if (dlg.DoModal() == IDOK)
			{
				dom::element res = root.find_first("[name='TOMTAT_KQ_CLS']");
				if (res.is_valid())
				{
					res.set_value(json::value::from_string((LPCTSTR) dlg.m_szData));
				}
			}
		}
	}
    //return event_handler::handle_event (he, params) ;
	return ret;
}

bool belongs_to( dom::element parent, dom::element child )
{
  if( !child.is_valid()) 
    return false;
  if( parent == child )
    return true;
  return belongs_to( parent, child.parent() );
}

BOOL CHTMLForms::handle_mouse (HELEMENT he, MOUSE_PARAMS& params ) {
	BOOL res = event_handler::handle_mouse(he, params);
	if(params.cmd != MOUSE_CLICK)
		return res;

	dom::element el = he;
	//printf("\r\nhandle_mouse: %s", el.get_html().c_str());
	return res;
}
BOOL CHTMLForms::handle_key (HELEMENT he, KEY_PARAMS& params ) 
{
	if(params.cmd != KEY_DOWN)
		return FALSE;
	//printf("\r\nhandle_key:%d", params.key_code);	   
	dom::element root = dom::element::root_element(m_hWnd);

	dom::element el = he;
	switch(params.key_code)
	{
		case VK_RETURN:
			::SendMessage(m_hWnd, WM_KEYDOWN, VK_TAB, 0);
			return TRUE;   
			break;
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
			break;
		case VK_TAB:
			//check_empty(m_hWnd);
			break;
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
//_tprintf(_T("\r\n%s"), szId);
		rs.MoveNext();
	}
	  m_options[lpszName] = lstOption;
  }


BOOL CHTMLForms::on_event(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ){
	
	dom::element el = target;
	//printf("\r\non_event: %s", el.get_html().c_str());
	if( type !=  BUTTON_STATE_CHANGED)
        return FALSE;

	
	if(el.get_ctl_type() == CTL_RADIO)
	{
		dom::element root = GetRootElement();
		selected_cb selected;

		int idx = el.get_attribute_int("id");


		root.find_all(&selected, "[type='radio'][name='%S']", el.get_attribute("name"));
		    
		for (unsigned int n = 0; n < selected.elements.size(); ++n)
		{
			dom::element& e = selected.elements[n];
			if (n == idx)
			{
				e.set_value(json::value(true));
				e.set_attribute("checked", L"true");
			}
			else
			{
				e.set_value(json::value(false));
				//e.set_attribute("checked", L"false");
				e.remove_attribute("checked");
			}
			e.update(true);
			cout << e.get_html() << endl;
		}
		root.update(true);


	}
	
	BOOL ret = OnEvent(el, target, type, reason);
	return ret;
}

BOOL CHTMLForms::OnEvent(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ){
	  //printf("\r\non_event: %d", type);
	  return FALSE;
}

  void CHTMLForms::OnInitializes()
  {

  }

  void CHTMLForms::SetTableName(LPCTSTR lpszTable)
  {
	  m_szTableName.Format(_T("%s_FORM"), lpszTable);
	  m_szFieldKey.Format(_T("%s_form_uid"), lpszTable);
	  m_szTableView.Format(_T("%s_VIEW"), lpszTable);
	  

  }

  bool CHTMLForms::PrintFromFile(LPCTSTR lpszFile)
  {
	  CString szFileViewer = m_szHtmlFile;
	  bool res = Load(lpszFile);
	  if(!res)
	  {
		  CString szMsg;
		  szMsg.Format(_T("Không mở được file [%s]"), lpszFile);
		  AfxMessageBox(szMsg);
		  return false;
	  }
	  GetData();
	  CView::OnFilePrint();
	  m_szHtmlFile = szFileViewer;
	  Load(m_szHtmlFile);
	  GetData();
	return true;
  }

  void CHTMLForms::SetType(LPCTSTR lpszType)
  {
	  m_szType = lpszType;
  }


  bool CHTMLForms::GetEMRData(long nDocNo, int nTreatTime, CString szType, CString szName, CString szFilter, CString& szData)
  {
	  CGuiMainFrame* pMF = (CGuiMainFrame*)AfxGetMainWnd();
	  CRecord rs(&pMF->m_db);
	  CRecord rsl(&pMF->m_db);
	  CString szSQL, szWhere;
	  szWhere.Empty();
	  szWhere = szFilter;


	  if (szType == _T("BENH_AN_HB") || szType == _T("'BENH_AN_KB'") || szType == _T("'BENH_AN_KL'"))
	  {
		  szWhere.Empty();
	  }

	  if (nTreatTime <= 1)
		  szWhere.AppendFormat(_T(" and (hde_treattime=%d or hde_treattime=0) "), nTreatTime);
	  else
		  szWhere.AppendFormat(_T(" and hde_treattime=%d  "), nTreatTime);


	  //Lay du lieu tu bang hms_doc_emr (du lieu moi)
	  szSQL.Format(_T("SELECT hde_uid, hde_name, hde_value, hde_version ") \
		  _T(" FROM hms_doc_emr ") \
		  _T(" WHERE hde_docno = %ld and hde_type='%s' and hde_uid is not null and hde_version = '3.2' %s "),
		  nDocNo, szType, szWhere);

	  rs.ExecSQL(szSQL);
	  szData.Empty();
	  if (!rs.IsEOF())
	  {
		  CString szUID;
		  rs.GetValue(_T("hde_uid"), szUID);
		  m_szUID = szUID;
		  //rs.GetValue(_T("hde_value"), szData);
		  szData.Format(L"%s", fml::Utf8ToWideString(rs.GetBlob(L"hde_value")));
		  return true;
	  }


	  szSQL.Format(_T("SELECT hde_uid,to_char(hde_value) as hde_value ") \
		  _T(" FROM hms_doc_emr ") \
		  _T(" WHERE hde_docno = %ld and hde_type='%s' and hde_name='%s' and hde_uid is not null %s "),
		  nDocNo, szType, szName, szWhere);

	  rs.ExecSQL(szSQL);

	  _tprintf(_T("\r\n%s"), (LPCTSTR)szSQL);

	  szData.Empty();
	  if (!rs.IsEOF())
	  {
		  CString szUID, tmpStr;
		  rs.GetValue(_T("hde_uid"), szUID);
		  rs.GetValue(_T("hde_value"), szData);
		  if (!szUID.IsEmpty())
		  {
			  szSQL.Format(_T("SELECT * FROM hms_doc_emr_line ") \
				  _T(" WHERE hdel_docno=%ld and hdel_uid='%s' ORDER BY hdel_line "),
				  m_nDocumentNo, szUID);
			  rsl.ExecSQL(szSQL);

			  while (!rsl.IsEOF())
			  {
				  rsl.GetValue(_T("hdel_value"), tmpStr);
				  szData.AppendFormat(_T("%s"), tmpStr);
				  rsl.MoveNext();
			  }
		  }
		  //_tprintf(L"\r\n%s", szData);
		  return true;
	  }
	  return false;
  }