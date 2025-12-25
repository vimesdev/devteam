// HTMLayoutOld.cpp : implementation file
//

#include "stdafx.h"
#include "HTMLayoutOld.h"
#include <strsafe.h>
#include "HMSMainFrame.h"
#include "DbMap.h"
#include ".\HTMLayoutOld.h"
#include "JSON.h"
#include "StringUtil.h"
#include <Winspool.h>
#include "HttpClient.h"
#include <fstream>
#include "base64.h"
#include "HMSParaclinicResultDialog.h"
#include <GuiManager.h>

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

	CHTMLayoutOld* pView = static_cast<CHTMLayoutOld*>(vParam);

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

// CHTMLayoutOld

IMPLEMENT_DYNAMIC(CHTMLayoutOld, CView)
CHTMLayoutOld::CHTMLayoutOld()
:event_handler(HANDLE_ALL)

{
	m_pPrinter = NULL;
	m_margin_top = 1/2.54;
	m_margin_left = 1/2.54;
	m_margin_right = 1/2.54;
	m_margin_bottom = 1/2.54;


	m_nOptIdx= 0;
	m_utf8bytes = NULL;
}

CHTMLayoutOld::~CHTMLayoutOld()
{
}

BOOL CHTMLayoutOld::Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd,
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

BOOL CHTMLayoutOld::CreateEx(DWORD dwExStyle, DWORD dwStyle, const RECT& rect,
							  CWnd* pParentWnd, UINT nID)
{
	BOOL bRet = Create(dwStyle, rect, pParentWnd, nID);
	if (bRet)
	{
		ModifyStyleEx(0, dwExStyle);
	}
	return bRet;
}

BEGIN_MESSAGE_MAP(CHTMLayoutOld, CView)
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_NCDESTROY()
END_MESSAGE_MAP()



void CHTMLayoutOld::OnDraw(CDC *pDC)
{

}
// CHTMLayoutOld message handlers



void CHTMLayoutOld::UpdateData(bool bSaveAndValidate)
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
bool CHTMLayoutOld::LoadHtmlResource(LPCTSTR pszName, HMODULE hModule)
{
	// This code assumes that the host and control windows are the same
	ASSERT(::IsWindow(m_hWnd));

	LPBYTE pb;
	DWORD  cb;

	if(!GetHtmlResource(pszName, pb, cb, hModule))
		return false;

	return LoadHtml(pb, cb);
}

bool CHTMLayoutOld::LoadHtmlResource(DWORD resID, HMODULE hModule)
{
	return LoadHtmlResource(MAKEINTRESOURCE(resID), hModule);
}



bool GetHtmlResource(LPCTSTR pszName, /*out*/PBYTE& pb, /*out*/DWORD& cb, HMODULE hModule)
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

LRESULT CHTMLayoutOld::OnBehaviorNotify(UINT uMsg, WPARAM wParam, LPARAM lParam)
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

LRESULT CHTMLayoutOld::OnHtmlGenericNotifications(UINT uMsg, WPARAM wParam, LPARAM lParam)
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

LRESULT CHTMLayoutOld::OnCreateControl(LPNMHL_CREATE_CONTROL pnmcc)
{
	//   _tprintf(_T("CHTMLayoutOld::OnCreateControl: type='%s' \n"), GetElementType(pnmcc->helement) );

	// Try to create control and if failed, proceed with default processing.
	// Note that this code assumes that the host and control windows are the same. If
	// you are handling HTMLayout control notification in another window, you'll have
	// to override this method and provide proper hWnd.

	ASSERT(::IsWindow(m_hWnd));

	//return CreateControl(pT->m_hWnd, pnmcc);
	return 0;
}

LRESULT CHTMLayoutOld::OnControlCreated(LPNMHL_CREATE_CONTROL pnmcc)
{
	_tprintf(_T("CHTMLayoutHost::OnControlCreated: type='%s' \n"), GetElementType(pnmcc->helement) );
	return 0;
}

LRESULT CHTMLayoutOld::OnDestroyControl(LPNMHL_DESTROY_CONTROL pnmhl)
{
	TRACE(_T("CHTMLayoutHost::OnDestroyControl: HWND=%x\n"), pnmhl->inoutControlHwnd);

	//  use this if you don't want this child to be destroyed:
	//  pnmhl->inoutControlHwnd = 0;

	//  If you will not change pnmhl->inoutControlHwnd field then HTMLayout 
	//  will call ::DestroyWindow by itself.

	return 0;
}


LRESULT CHTMLayoutOld::OnHyperLink(NMHL_HYPERLINK* pnmhl)
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

LRESULT CHTMLayoutOld::OnHyperLinkEnter(NMHL_HYPERLINK* pnmhl)
{
	return 0;
}

LRESULT CHTMLayoutOld::OnHyperLinkLeave(NMHL_HYPERLINK* pnmhl)
{
	return 0;
}

LRESULT CHTMLayoutOld::OnHyperLinkClick(NMHL_HYPERLINK* pnmhl)
{
	USES_CONVERSION;
	::ShellExecute(m_hWnd,TEXT("open"),CW2T(pnmhl->szHREF),NULL,NULL,SW_SHOW);
	return 0;
}

LRESULT CHTMLayoutOld::OnLoadData(LPNMHL_LOAD_DATA pnmld)
{
	_tprintf(_T("CHTMLayoutHost::OnLoadData: uri='%s'\n"), CString(pnmld->uri));

	// Try to load data from resource and if failed, proceed with default processing.
	// Note that this code assumes that the host and control windows are the same. If
	// you are handling HTMLayout control notification in another window, you'll have
	// to override this method and provide proper hWnd.
	return LoadResourceData(pnmld);
}

LRESULT CHTMLayoutOld::OnDataLoaded(LPNMHL_DATA_LOADED pnmld)
{

	return 0;
}

LRESULT CHTMLayoutOld::OnDocumentComplete()
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

LRESULT CHTMLayoutOld::OnAttachBehavior( LPNMHL_ATTACH_BEHAVIOR lpab )
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

int CHTMLayoutOld::GetAttrInt(HELEMENT he, LPCSTR attrName, int defaultValue)
{
	htmlayout::dom::element el = he;
	const wchar_t* pv = el.get_attribute(attrName);
	if(pv && wcslen(pv) > 0)
		return _wtoi(pv);
	return defaultValue;
}

CString CHTMLayoutOld::GetElementType(HELEMENT he)
{
	htmlayout::dom::element el = he;
	USES_CONVERSION;
	CString s = CA2T(el.get_element_type());
	return s;
}

CString CHTMLayoutOld::GetAttr(HELEMENT he, LPCSTR attrName)
{
	htmlayout::dom::element el = he;
	USES_CONVERSION;
	CString s = CW2T(el.get_attribute(attrName));
	return s;
}

bool CHTMLayoutOld::HasAttr(HELEMENT he, LPCSTR attrName)
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


LRESULT CHTMLayoutOld::LoadResourceData(LPNMHL_LOAD_DATA pnmld)
{
	// This code assumes that the host and control windows are the same
	ASSERT(::IsWindow(m_hWnd));
	return ::LoadResourceData(m_hWnd, pnmld->uri);
}



/////////////////////////////////////////////////////////////////////////////
// CHTMLayoutOld printing

BOOL CHTMLayoutOld::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Create printer instance
	if (m_pPrinter != NULL){
		delete m_pPrinter;
	}

	const wchar_t* attr;
	dom::element root = GetRootElement();
	htmlayout::dom::element body = root.find_first("body");

	CString szDeviceName = AfxGetApp()->GetProfileString(_T("PrinterConfig"), m_szFile, _T(""));
	_tprintf(_T("\r\n%s"), (LPCTSTR)  szDeviceName);
	if(!szDeviceName.IsEmpty())
	{
		DWORD dwLength=MAX_PATH;
		TCHAR szPrinter[MAX_PATH];
		GetDefaultPrinter(szPrinter, &dwLength);
		_tprintf(_T("\r\n%s"), (LPCTSTR)  szPrinter);
		if(szDeviceName != szPrinter)
		{
			if(!SetDefaultPrinter(szDeviceName))
			{
				AfxGetApp()->WriteProfileString(_T("PrinterConfig"), m_szFile, szPrinter);
			}
		}
	}


	attr = body.get_attribute("paper_size");
_tprintf(_T("\r\n%s"), (LPCTSTR)  attr);

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

	/*
	attr = body.get_style_attribute("margin-left");
	if(attr != NULL)
	{
		m_margin_left = str2float(attr)/2.54;
		body.set_style_attribute("margin-left", L"0cm");
	}
	attr = body.get_style_attribute("margin-top");
	if(attr != NULL)
	{
		m_margin_top = str2float(attr)/2.54;
		body.set_style_attribute("margin-top", L"0cm");
	}
	attr = body.get_style_attribute("margin-right");
	if(attr != NULL)
	{
		m_margin_right = str2float(attr)/2.54;
		body.set_style_attribute("margin-right", L"0cm");
	}
	attr = body.get_style_attribute("margin-bottom");
	if(attr != NULL)
	{
		m_margin_bottom = str2float(attr)/2.54;
		body.set_style_attribute("margin-bottom", L"0cm");
	}
*/
	m_pPrinter = new PrintEx();





	LPBYTE pData=NULL;
	HELEMENT he = GetRootElement();
	htmlayout::dom::element el = he;
	LPWSTR str;
	UINT nLength= m_dataSize;
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

	if (!m_pPrinter->load((LPCBYTE)utf8bytes, strlen((const char*)utf8bytes), szBaseUri)){
		delete m_pPrinter;
		m_pPrinter = NULL;
		delete utf8bytes;
		return FALSE;
	}
	m_utf8bytes = utf8bytes;
//	delete utf8bytes;

	// default preparation
	return DoPreparePrinting(pInfo);
}

void CHTMLayoutOld::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
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

void CHTMLayoutOld::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* pInfo)
{

	AfxGetApp()->WriteProfileString(_T("PrinterConfig"), m_szFile, pInfo->m_pPD->GetDeviceName());

	if (m_utf8bytes != NULL)
	{
		//delete m_utf8bytes;
		//m_utf8bytes = NULL;
	}

	if (m_pPrinter!=NULL){
		delete m_pPrinter;
		m_pPrinter = NULL;
		
	}
}

void CHTMLayoutOld::OnPrepareDC(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class

	CView::OnPrepareDC(pDC, pInfo);
}

void CHTMLayoutOld::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
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

void CHTMLayoutOld::OnFilePrintPreview()
{
	CView::OnFilePrintPreview();
}


void CHTMLayoutOld::OnFilePrint()
{
	//if(PostAndPrintDocx())
	//	return;
	// Enable radio
	dom::element root = GetRootElement();
	selected_cb selected;
	root.find_all(&selected, "[type='radio']");
	for( unsigned int n = 0; n < selected.elements.size(); ++n )
	{
		dom::element& e = selected.elements[n];
		e.remove_attribute("disabled");
		e.set_attribute("background", L"#FFFFFF");
		e.update(true);
	}
	CView::OnFilePrint();
	for( unsigned int n = 0; n < selected.elements.size(); ++n )
	{
		dom::element& e = selected.elements[n];
		e.set_attribute("disabled", _T(""));
		e.set_attribute("background", L"#F8F8F8");
		e.update(true);
	}
}


HELEMENT CHTMLayoutOld::GetRootElement()
{
	ATLASSERT(::IsWindow(m_hWnd));
	HELEMENT hRootElement = 0;
	::HTMLayoutGetRootElement(m_hWnd, &hRootElement);
	return hRootElement;
}

int CHTMLayoutOld::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (__super::OnCreate(lpCreateStruct) == -1)
		return -1;
#if (_MSC_VER >= 1500)
	CGuiManager::GetInstance()->ScaleDPI(this, NULL);
#endif

	HTMLayoutSetCallback(m_hWnd,&HTMLayoutNotifyHandler,this); // attach handler of htmlayout events

	htmlayout::attach_event_handler(m_hWnd,this); // attach handler of DOM events

	return 0;
}


bool CHTMLayoutOld::LoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr;
	CRecord rs(&pMF->m_db);

	/*Load lai TTHC neu ho so dang mo*/
	/*TTHC*/
	if (pMF->IsActiveDocument())
	{
		szSQL.Format(_T("select * from hms_doc_html_view_v2 where sohoso = %ld")
					, m_nDocumentNo);				
		_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);
		rs.ExecSQL(szSQL);

		if(!rs.IsEOF())
		{
			for (int i = 0 ; i < rs.GetFieldCount(); i++)
			{
				rs.GetValue(rs.GetFieldName(i), tmpStr);
				SetValue(rs.GetFieldName(i), tmpStr);
			}
		}
	}
	szWhere.Empty();
	if(m_nOptIdx >= 0)
	{
		szWhere.Format(_T(" and hde_optidx=%ld "), m_nOptIdx);
	}
	szSQL.Format(_T("SELECT hde_name, to_char(hde_value) as hde_value ") \
		_T(" FROM hms_doc_emr ") \
		_T(" WHERE hde_docno=%ld and hde_type='%s' and hde_deptid = '%s' %s")
		, m_nDocumentNo, m_szType, m_szDeptID, szWhere);
	rs.ExecSQL(szSQL);
	CString szName, szValue;

	if(rs.GetRecordCount() <= 0)
		return false;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_name"), szName);
		rs.GetValue(_T("hde_value"), szValue);
		SetValue(szName, szValue);
		rs.MoveNext();
	}
	return true;
}



BOOL CHTMLayoutOld::SaveData(long nDocumentNo, bool bSaveAll)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	BOOL bRes = FALSE;
	CString szSQL;

	//m_nDocumentNo = 15001219;
	//	m_szDeptID = _T("C1.3");


	dom::element root = GetRootElement();

	root.update(true);



	CDbfMap emrTbl;
	emrTbl.AddField(_T("hde_type"), dfText, 20);
	emrTbl.AddField(_T("hde_docno"), dfLong);
	emrTbl.AddField(_T("hde_deptid"), dfText, 10);
	emrTbl.AddField(_T("hde_refidx"), dfLong);
	emrTbl.AddField(_T("hde_roomid"), dfInteger);
	emrTbl.AddField(_T("hde_userid"), dfText, 20);
	emrTbl.AddField(_T("hde_name"), dfText, 20);
	emrTbl.AddField(_T("hde_value"), dfText, 4000);
	emrTbl.AddField(_T("hde_optidx"), dfLong);

	emrTbl.SetValue(_T("hde_type"), m_szType);
	emrTbl.SetValue(_T("hde_docno"), m_nDocumentNo);
	emrTbl.SetValue(_T("hde_deptid"), m_szDeptID);
	emrTbl.SetValue(_T("hde_refidx"), m_nRefIndex);
	emrTbl.SetValue(_T("hde_roomid"), m_nRoomID);
	emrTbl.SetValue(_T("hde_optidx"), m_nOptIdx);

	emrTbl.SetValue(_T("hde_userid"), pMF->GetCurrentUser());

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



			//	if( !t.get_style_attribute("behavior") )
			//		continue;



			const wchar_t* disabled = t.get_attribute("disabled");
			const wchar_t* val = t.get_attribute("value");
			const wchar_t* checked = t.get_attribute("checked");
			//_tprintf(_T("\r\n%s: %s"), val, checked);
			if(t.get_ctl_type() ==  CTL_RADIO)
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


			if(!bSaveAll && disabled != NULL)
				continue;

			//_tprintf(_T("\r\n%s: %s: %s: %s"), name.c_str(), value.c_str(), val, checked);

			if (value.length() > 0)
			{
				if(value.length() <= 2000)
				{
					emrTbl.SetValue(_T("hde_name"), name.c_str());
					emrTbl.SetValue(_T("hde_value"), value.c_str());
					szSQL.Format(_T("HMS_DOC_EMR_CREATE(%s) "), emrTbl.FormatSQL());
					_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);
					pMF->ExecDML(szSQL);
				}
				else
				{
					pMF->SaveEMRData(m_szType, name.c_str(), m_nDocumentNo, m_szDeptID,  m_nRefIndex, m_nRoomID, m_nOptIdx, value.c_str());

				}
			}

		}
		// ::MessageBoxW(m_hWnd,s.c_str(),L"values are:", MB_OK);
		//  _tprintf(_T("\r\n%s"), (LPCTSTR)  s.c_str());
		bRes = TRUE;
	}


	return bRes;
}

BOOL CHTMLayoutOld::SaveAsJson(long nDocumentNo)
{
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	BOOL bRes = FALSE;
	CString szSQL;

	//m_nDocumentNo = 15001219;
	//	m_szDeptID = _T("C1.3");

	JSONVALUE jbuilder;

	dom::element root = GetRootElement();


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
			set_value(t, (*it).second);
			t.set_attribute("value", value.c_str());

			if (value.length() > 0)
			{

				//	emrTbl.SetValue(_T("hde_name"), name.c_str());
				//	emrTbl.SetValue(_T("hde_value"), value.c_str());
				jbuilder[name.c_str()]= value.c_str();
			}

		}
		// ::MessageBoxW(m_hWnd,s.c_str(),L"values are:", MB_OK);
		//  _tprintf(_T("\r\n%s"), (LPCTSTR)  s.c_str());
	}

	std::wstring json_string;
	CString szJson;
	jbuilder.ToString(json_string);
	szJson.Format(_T("{\"data\":%s}"), json_string.c_str());

	emrTbl.SetValue(_T("hde_name"), m_szForm);
	emrTbl.SetValue(_T("hde_value"), szJson);
	szSQL.Format(_T("HMS_DOC_EMR_CREATE(%s) "), emrTbl.FormatSQL());
	_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);
	pMF->ExecDML(szSQL);


	return bRes;
}


BOOL CHTMLayoutOld::Save(LPCTSTR lpszFile)
{
	return TRUE;
}



void CHTMLayoutOld::OnAfterLoadData()
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
			_tprintf(_T("\r\n%s"), (LPCTSTR)  szSQL);
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


bool CHTMLayoutOld::SetValue(LPCTSTR lpszName, CString szValue)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	bool bRes = false;
	dom::element root = GetRootElement();
	CString szName(lpszName);
	if (pMF->GetProp(L"apply_tt32_forms")==_T("Y"))
	{
		szName.MakeLower();
		lpszName = szName;
	}
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
				//				_tprintf(_T("\r\n%s: %s: %s"), lpszName, szValue, str.c_str());
				if(str == (LPCTSTR)szValue)
				{
					//  e.set_value(json::value(true));
					e.set_attribute("checked", L"true");
					e.set_value(val);
					//					_tprintf(_T("\r\nSetvalue %s: %s"), lpszName, szValue);
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
			t.set_value((LPCTSTR)szValue);
			t.set_attribute("value", szValue);
			/*
			std::vector<dom::element> selected;
			root.find_all(selected, "[type='text'][name='%S']", lpszName);		    
			for( unsigned int n = 0; n < selected.size(); ++n )
			{
				dom::element& e = selected[n];
				e.set_value((LPCTSTR)szValue);
			}
			*/
		}
		t.update(false);

		return true;
	}
	return false;
}


void CHTMLayoutOld::GetValue(LPCTSTR lpszName, CString& szValue)
{
	bool bRes = false;
	dom::element root = GetRootElement();
	dom::element t = root.find_first("[name='%S']", lpszName); 
	if(t.get_ctl_type() ==  CTL_RADIO)
	{
		selected_cb selected;
		root.find_all(&selected, "[type='radio'][name='%S']", lpszName);

		for( unsigned int n = 0; n < selected.elements.size(); ++n )
		{
			dom::element& e = selected.elements[n];
			const wchar_t* checked = e.get_attribute("checked");
			const wchar_t* val = e.get_attribute("value");
			if(checked != NULL && wcscmp(checked, L"true") == 0)
			{
				szValue = val;	
				break;
			}
			else
			{
				szValue = _T("0");
			}

		}
		return;

	}
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



void CHTMLayoutOld::EnableControls(bool bEnable)
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
			//::MessageBoxW(NULL, name, _T("") )
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
				t.update(true);
			}
			if(t.get_ctl_type() == CTL_RADIO)
			{

				selected_cb selected;
				root.find_all(&selected, "[type='radio'][name='%S']", name.c_str());

				for( unsigned int n = 0; n < selected.elements.size(); ++n )
				{
					dom::element& e = selected.elements[n];
					if(bEnable)
					{
						e.remove_attribute("disabled");
						e.set_attribute("background", L"#FFFFFF");
					}
					else
					{
						e.set_attribute("disabled", _T(""));
						e.set_attribute("background", L"#F8F8F8");

					}
					e.update(true);
				}

			}
		}
	}

	root.update(true);
}


void CHTMLayoutOld::EnableControl(LPCTSTR lpszName, bool bEnable)
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

dom::element CHTMLayoutOld::Find(LPCTSTR lpszName)
{
	dom::element root = GetRootElement();
	dom::element t = root.find_first("[name='%S']", lpszName); 
	return t;
}
void CHTMLayoutOld::OnDestroy()
{
	CView::OnDestroy();

	// TODO: Add your message handler code here
}

void CHTMLayoutOld::OnNcDestroy()
{
	//__super::OnNcDestroy();

	// TODO: Add your message handler code here
}


bool CHTMLayoutOld::Load(LPCTSTR lpszFile)
{
	CFile file;
	CFileException e;
	if(!file.Open(lpszFile, CFile::modeRead, &e))
	{
		/*
		_msg(_T("File could not be opened %d\n"), e.m_cause);
		LPTSTR str;
		e.GetErrorMessage(str, MAX_PATH);
		_msg(_T("%s"), str);
		*/
		return false;
	}
	m_szFile = lpszFile;
	BYTE* lpBuf = new BYTE[file.GetLength()+sizeof(BYTE)];
	memset(lpBuf, '\0', file.GetLength()+sizeof(BYTE));
	file.Read(lpBuf, file.GetLength());
	LoadHtml((LPCBYTE)lpBuf, file.GetLength());
	delete lpBuf;
	file.Close();
	return true;
}


BOOL CHTMLayoutOld::on_event (HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ) 
{ 
	//return FALSE;
	_tprintf(_T("\non_event"));
	dom::element el = target, root = GetRootElement();
	std::wstring name;
	if (type == HYPERLINK_CLICK)
	{
		name = el.get_attribute("name");
		if (name.compare(L"DCCT") == 0)
		{
					}
	}

	if(type == BUTTON_CLICK)
	{
		name = el.get_attribute("name");
		if (name.compare(L"Nut_chon") == 0)		
		{
			CHMSParaclinicResultDialog dlg(this, m_nDocumentNo);
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
	if( type !=  BUTTON_STATE_CHANGED)
		return FALSE;

	
	if(el.get_ctl_type() == CTL_RADIO)
	{
		selected_cb selected;
		root.find_all(&selected, "[type='radio'][name='%S']", el.get_attribute("name"));

		for( unsigned int n = 0; n < selected.elements.size(); ++n )
		{
			dom::element& e = selected.elements[n];
			e.remove_attribute("checked");
		}
		const wchar_t* val = el.get_attribute("value");
		//SetValue(el.get_attribute("name"), val);
		el.set_attribute("checked", L"true");
		//		printf("\r\nel: %s", el.get_html().c_str());
		el.update(true);
	}

	OnElementEvent(el);
	return FALSE;
}




// HTMLayout callback
LRESULT CALLBACK CHTMLayoutOld::callback(UINT uMsg, WPARAM wParam, LPARAM lParam, LPVOID vParam)
{
	ASSERT(vParam);
	CHTMLayoutOld* pThis = (CHTMLayoutOld*)vParam;
	return pThis->OnHtmlNotify(uMsg, wParam, lParam);
}

void CHTMLayoutOld::SetCallback()
{
	ASSERT(::IsWindow(m_hWnd));
	::HTMLayoutSetCallback(m_hWnd,callback, this);
}


LRESULT CHTMLayoutOld::WindowProc( UINT message, WPARAM wParam, LPARAM lParam)
{

	// HTMLayout +
	// HTMLayout could be created as sepearate window 
	// using CreateWindow API.
	// But in this case we are attaching HTMLayout functionality
	// to the existing window delegating windows message handling to 
	// HTMLayoutProcND function.
	return HTMLayoutProc(m_hWnd, message, wParam, lParam);
	BOOL bHandled = FALSE;
	LRESULT lResult = HTMLayoutProcND(m_hWnd,message,wParam,lParam, &bHandled);
	if(bHandled)
		return lResult;

	// HTMLayout -  
	return CView ::WindowProc(message, wParam, lParam);
}

LRESULT CHTMLayoutOld::OnHtmlNotify(UINT uMsg, WPARAM wParam, LPARAM lParam)
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

LRESULT CHTMLayoutOld::OnHtmlCommand(NMHL_COMMAND_CLICK *pnmCommand) 
{
	//empty placeholder
	if(pnmCommand == NULL)
		return 0;
	return 0;
}



BOOL CHTMLayoutOld::PreTranslateMessage( MSG* pMsg )
{
	if(pMsg->message == WM_KEYDOWN)
	{
		BOOL bHandled = FALSE;
		::HTMLayoutProcND( m_hWnd, pMsg->message, pMsg->wParam, pMsg->lParam, &bHandled);
		if(bHandled)
			return TRUE;
	}
	return CView::PreTranslateMessage(pMsg);
}


bool CHTMLayoutOld::LoadHtml(LPCBYTE pb, DWORD nBytes)
{
	ASSERT(::IsWindow(m_hWnd));
	m_dataSize = nBytes;
	bool res =  ::HTMLayoutLoadHtml(m_hWnd, pb, nBytes) != 0;

	dom::element root = htmlayout::dom::element::root_element(m_hWnd);

	if(res)
	{
		_tprintf(_T("CHTMLayoutHost::OnDocumentComplete\n"));	
		//   OnAfterLoadData();
	}
	m_pcb = pb;
	return res;
}
bool CHTMLayoutOld::LoadData_V2()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szWhere, szSQL;
	CString tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	int nTreatTime = m_nOptIdx;	

	if(nTreatTime <= 1)
		szWhere.Format(_T(" and (hde_treattime=%d or hde_treattime=0) "), nTreatTime);
	else
		szWhere.Format(_T(" and (hde_treattime=%d) "), nTreatTime);


	CString szFilter;
	szFilter.Empty();
	CString szSpecialInfo;
	bool res = pMF->GetEMRData(m_nDocumentNo, nTreatTime, _T("BENH_AN_CHUYEN_KHOA"), m_szForm,  szFilter, szSpecialInfo);
	if(!res)
	{
		szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr ") \
			_T(" WHERE hde_docno=%ld and hde_type IN('BENH_AN_CHUYEN_KHOA') ") \
			_T(" %s ") \
			_T(" ORDER BY hde_type, hde_refidx "), m_nDocumentNo, szWhere);
		rsl.ExecSQL(szSQL);


		while(!rsl.IsEOF())
		{
			rsl.GetValue(_T("hde_value"), tmpStr);
			szSpecialInfo.AppendFormat(_T("%s"), tmpStr);
			rsl.MoveNext();
		}
	}

	JSONVALUE jsData;
	jsData.Parse(szSpecialInfo);
	if(!szSpecialInfo.IsEmpty())
	{
		for (int i = 0; i < jsData.Size();i++)
		{

			std::wstring name;
			name = jsData.order[i];
			tmpStr.Empty();
			jsData[name.c_str()].GetValue(tmpStr);
			SetValue(name.c_str(), tmpStr);
		}
	}
	return true;
}

bool CHTMLayoutOld::PostAndPrintDocx()
{
	return false;
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	JSONVALUE jbuilder, jsonRequest;

	dom::element root = this->GetRootElement();

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
			set_value(t, (*it).second);
			t.set_attribute("value", value.c_str());
			jbuilder[name.c_str()]= value.c_str();
		}
	}

	std::string strData;
	jbuilder.ToString(strData);
	CHttpClient client;
	CString szResponse, szError;
	CString szUrl, szHost;
	szHost = pMF->GetProp(L"ReportHost");
	CString szLink = m_szType;

	_tprintf(_T("\r\n%s"), (LPCTSTR)  m_szFile);

	szUrl.Format(_T("%s\\api\\reports?id=%s&type=docx"), szHost, szLink);
	client.SetURL(szUrl, _T("Content-Type: application/json"));

	std::wstring json_string;

	jbuilder.ToString(json_string);
	CString szJsonData;
	szJsonData.Format(_T("%s"), json_string.c_str());
	//_msg(_T("%s"), szJsonData);	
	bool res = client.Post(_T(""), szJsonData, szResponse, szError);
	if(!res)
		return false;

	if(!szResponse.IsEmpty())
	{

		std::fstream fs;
		CString szFileName;
		// Lay thu muc goc lam viec
		TCHAR szPath[MAX_PATH];
		::GetCurrentDirectory(MAX_PATH, szPath);
		szFileName.Format(_T("%s\\DATA\\printer.docx"),  szPath);	

		CT2A pStr(szFileName);
		fs.open ( pStr.m_szBuffer, ios::in|ios::out | ios::binary|ios::trunc);
		int bytes = ::WideCharToMultiByte(CP_UTF8, 0, szResponse, szResponse.GetLength(), NULL, 0, 0,0);
		char* buff = new char[bytes];
		::WideCharToMultiByte(CP_UTF8, 0, szResponse, szResponse.GetLength(), buff, bytes, 0,0);
		_tprintf(_T("\r\n%s"), (LPCTSTR)  szResponse);
		std::string data = DecodeBase64(std::string(buff));
		fs << data;
		fs.close();
		delete buff;


		client.SetURL(L"http://127.0.0.1:8181/reports", _T("Content-Type: application/json"));

		JSONVALUE jsonRequest;	
		jsonRequest["password"] = L"vimesjsc2009";
		jsonRequest["type"] = L"docx";
		jsonRequest["sourcefile"] = szFileName;
		jsonRequest["preview"] = true;

		std::wstring json_string;
		jsonRequest.ToString(json_string);
		CString szJsonData;
		szJsonData.Format(_T("%s"), json_string.c_str());
		client.Post(_T(""), szJsonData, szResponse, szError);
		_tprintf(_T("\r\n%s\r\n"),  szError);
		return true;
	}
	return false;
}