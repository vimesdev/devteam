#include "stdafx.h"
#include "MainFrm.h"
#include "Thumbnailimage.h"
#include "GuiInputDataDialog.h"
#include "VIMESPictureView.h"
#include "StringToken.h"
#include "GuiManager.h"
#include "rapidjson/document.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/ostreamwrapper.h>
#include "rapidjson/filewritestream.h"
#include "StringUtil.h"
#include "fml.h"

using namespace rapidjson;
#include <atlimage.h>
static CImage m_img;

CThumbnailImage::CThumbnailImage(void)
{
	m_nThumbWidth = 150;
	m_nThumbHeight = 150;
	m_nMaxFrame = 0;
}

CThumbnailImage::~CThumbnailImage(void)
{

}



BEGIN_MESSAGE_MAP(CThumbnailImage, CListBox)
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_MOUSEMOVE()
	ON_WM_MOUSEWHEEL()
	ON_WM_MEASUREITEM()
	ON_WM_ERASEBKGND()
	ON_WM_DELETEITEM()
	ON_WM_SIZE()
END_MESSAGE_MAP()


BOOL CThumbnailImage::Create(CWnd* pParent, int x, int y, int w, int h, DWORD dwStyle) {
	m_nThumbWidth = max(m_nThumbWidth, w - 20);
	return CListBox::Create(WS_BORDER | WS_TABSTOP | WS_HSCROLL | WS_VSCROLL | LBS_OWNERDRAWVARIABLE | dwStyle, CRect(x, y, x + w, y + h), pParent, NULL);
}
int CThumbnailImage::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CListBox::OnCreate(lpCreateStruct) == -1)
		return -1;

	return 0;
}

void CThumbnailImage::OnDestroy()
{
	CListBox::OnDestroy();
	DeleteAll();
	// TODO: Add your message handler code here
}

void CThumbnailImage::OnLButtonDown(UINT nFlags, CPoint point)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	// TODO: Add your message handler code here and/or call default
	CListBox::OnLButtonDown(nFlags, point);
	CRect rcCheck;;
	int nSel = GetCurSel();

	if (nSel >= 0)
	{
		GetItemRect(nSel, rcCheck);
		rcCheck.right = rcCheck.left + 20;
		rcCheck.top = rcCheck.bottom - 20;
		if (rcCheck.PtInRect(point)) {
			BOOL bCheck = GetCheck(nSel);
			SetCheck(nSel, !bCheck);
			Invalidate(FALSE);
		}

		THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nSel);
		if (obj != NULL)
		{
			CString szFileName;
			szFileName.Format(_T("%s\\%s"), m_szPath, obj->szFileName);

//			if (pMF->m_wndImageCapture.m_wndImage.GetSafeHwnd())
			{
//				pMF->m_wndImageCapture.m_wndImage.SetFileName(szFileName);
//				pMF->m_wndImageCapture.m_wndImage.Invalidate();
			}
			_tprintf(_T("\r\n:%s"), szFileName);
		}

		CRect rcClose;
		GetItemRect(nSel, rcCheck);
		rcClose = rcCheck;
		rcClose.left = rcClose.right - 20;
		rcClose.top = rcClose.bottom - 20;
		rcClose.DeflateRect(2, 2, 2, 2);
		if (rcClose.PtInRect(point)) {
			int ret = AfxMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO | MB_DEFBUTTON2);
			if (ret == IDYES) {
				Delete(nSel, true);
			}
		}
	}

}

void CThumbnailImage::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	EditComment();
	CListBox::OnLButtonDblClk(nFlags, point);
}

void CThumbnailImage::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CListBox::OnMouseMove(nFlags, point);
}

BOOL CThumbnailImage::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	// TODO: Add your message handler code here and/or call default

	return CListBox::OnMouseWheel(nFlags, zDelta, pt);
}

void CThumbnailImage::DrawItem(LPDRAWITEMSTRUCT lpDIS)
{
	if (lpDIS->CtlType != ODT_LISTBOX)
		return;
	if (lpDIS->itemID < 0 || lpDIS->itemID >= GetCount())
		return;

	//Bitmap* bmp = NULL;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(lpDIS->itemID);

	CDC* pDC = CDC::FromHandle(lpDIS->hDC);
	CRect rcItem = lpDIS->rcItem;
	CRect rcCheck;
	int check_size = 20;// * afxGetInstance()->GetScaleDPI();

	rcCheck = CRect(rcItem.left, rcItem.bottom - check_size, rcItem.left + check_size, rcItem.bottom);
	rcCheck.DeflateRect(2, 2, 2, 2);
	// Save these value to restore them when done drawing.
	COLORREF crOldTextColor = pDC->GetTextColor();
	COLORREF crOldBkColor = pDC->GetBkColor();

	// If this item is selected, set the background color 
	// and the text color to appropriate values. Also, erase
	// rect by filling it with the background color.

	if ((lpDIS->itemAction | ODA_SELECT) &&
		(lpDIS->itemState & ODS_SELECTED))
	{
		pDC->SetTextColor(::GetSysColor(COLOR_HIGHLIGHTTEXT));
		pDC->SetBkColor(::GetSysColor(COLOR_HIGHLIGHT));
		//   pDC->FillSolidRect(&lpDIS->rcItem, ::GetSysColor(COLOR_HIGHLIGHT));
	}
	else
	{
		// pDC->FillSolidRect(&lpDIS->rcItem, RGB(200, 200, 200));
	}

	// If this item has the focus, draw a red frame around the
	// item's rect.
 /*
	Bitmap bmp(obj->hBitmap, 0);
	if(obj && obj->hBitmap)
	{
		 Graphics g(pDC->m_hDC);
		 g.DrawImage(&bmp, Rect(rcItem.left, rcItem.top, rcItem.Width(), rcItem.Height()-25), 0, 0, bmp.GetWidth(),bmp.GetHeight(), UnitPixel, NULL);

	}
 */

	if (obj != NULL && obj->hBitmap)
	{
		Bitmap* bmp = Bitmap::FromHBITMAP(obj->hBitmap, 0);
		if (bmp)
		{
			Graphics g(pDC->m_hDC);
			float scale = (float)bmp->GetWidth() / bmp->GetHeight();
			INT height = m_nThumbHeight;
			INT width = height * scale;

			int x = (rcItem.Width() - width) / 2;
			int y = (m_nThumbHeight - height) / 2;
			g.DrawImage(bmp, Rect(rcItem.left + x, rcItem.top + y, width, height), 0, 0, bmp->GetWidth(), bmp->GetHeight(), UnitPixel, NULL);
			//delete bmp;
		}
	}

	if ((lpDIS->itemAction | ODA_FOCUS) &&
		(lpDIS->itemState & ODS_FOCUS))
	{
		CBrush br(RGB(255, 0, 0));
		pDC->FrameRect(&rcItem, &br);
	}
	else
	{
		CBrush br(RGB(0, 0, 255));
		pDC->FrameRect(&rcItem, &br);

	}


	rcItem.top = rcItem.bottom - check_size;
	pDC->FillSolidRect(rcItem, RGB(0, 128, 192));


	//Draw check

	BOOL bCheck = FALSE;
	bCheck = GetCheck(lpDIS->itemID);

	if (bCheck)
	{
		pDC->FillSolidRect(rcCheck, RGB(255, 128, 0));
		pDC->SetTextColor(RGB(255, 255, 255));
	}
	else
	{
		pDC->FillSolidRect(rcCheck, RGB(255, 255, 255));
		pDC->SetTextColor(RGB(64, 64, 64));
	}

	CString tmpStr;

	tmpStr.Format(_T("%d"), lpDIS->itemID);
	pDC->DrawText(tmpStr, rcCheck, DT_CENTER | DT_SINGLELINE | DT_VCENTER);

	// Draw the text.
	rcItem.left += 25;
	pDC->SetTextColor(RGB(255, 255, 255));
	pDC->SetBkMode(TRANSPARENT);
	pDC->DrawText(obj->szString, rcItem, DT_CENTER | DT_SINGLELINE | DT_VCENTER);

	if ((lpDIS->itemAction | ODA_FOCUS) &&
		(lpDIS->itemState & ODS_FOCUS))
	{
		CRect rcClose;
		rcClose = lpDIS->rcItem;
		rcClose.left = rcClose.right - check_size;
		rcClose.top = rcClose.bottom - check_size;
		rcClose.DeflateRect(2, 2, 2, 2);
		pDC->DrawFrameControl(rcClose, DFC_CAPTION, DFCS_CAPTIONCLOSE);

	}
	// Reset the background color and the text color back to their
	// original values.
	pDC->SetTextColor(crOldTextColor);
	pDC->SetBkColor(crOldBkColor);



}

int CThumbnailImage::Add(int nFrame, LPCTSTR lpszString,  LPCTSTR lpszName) {

	_tprintf(_T("\r\nCThumbnailImage:%d, %s"), nFrame, lpszName);
	int nItem = CListBox::AddString(lpszString);
	_tprintf(_T("\r\nInsert item: %d"), nItem);
	

	if (nItem >= 0) {
		const float fRatio = (float)m_nThumbHeight / (float)m_nThumbWidth;
		int XDest, YDest, nDestWidth, nDestHeight;
		CString szFileName;
		szFileName.Format(_T("%s\\%s"), m_szPath, lpszName);
		Bitmap bmp(szFileName);
		
		_tprintf(_T("\r\n%s"), szFileName);

		int w = 320;
		float scale = (float)bmp.GetHeight() / bmp.GetWidth();
		if (bmp.GetWidth() > 320)
			w = 320;
		Bitmap* newbmp = new Bitmap(w, w * scale);
		Graphics g(newbmp);

		g.DrawImage(&bmp, Rect(0, 0, w, w * scale), 0, 0, bmp.GetWidth(), bmp.GetHeight(), UnitPixel, NULL);

		bool bFound = false;

		THUMBINFO* newobj = new THUMBINFO();
		newobj->szString = lpszString;
		newobj->szCommnet = _T("");
		newobj->bCheck = FALSE;
		newobj->nIndex = nFrame;
		newobj->szFileName = lpszName;
		newbmp->GetHBITMAP(Color(255, 255, 255, 255), &newobj->hBitmap);
		if (newobj->hBitmap == NULL)
		{
			_tprintf(_T("\r\nCannot load bitmap"));

		}
		SetItemDataPtr(nItem, newobj);

	}
	return nItem;
}
void CThumbnailImage::MeasureItem(LPMEASUREITEMSTRUCT lpMIS)
{
	lpMIS->itemWidth = m_nThumbWidth;
	lpMIS->itemHeight = m_nThumbHeight + 30;

	// TODO:  Add your code to determine the size of specified item
}

BOOL CThumbnailImage::OnEraseBkgnd(CDC* pDC)
{
	// TODO: Add your message handler code here and/or call default
	CRect rect;
	GetClientRect(&rect);
	//	pDC->FillSolidRect(rect, RGB(0, 0, 0));
	//	return TRUE;
	return CListBox::OnEraseBkgnd(pDC);
}

void CThumbnailImage::OnDeleteItem(int nIDCtl, LPDELETEITEMSTRUCT lpDIS)
{
	CListBox::OnDeleteItem(nIDCtl, lpDIS);
}

BOOL CThumbnailImage::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Add your specialized code here and/or call the base class
//	cs.style |= (LBS_OWNERDRAWVARIABLE|WS_VSCROLL);
	
	return CListBox::PreCreateWindow(cs);
}

void CThumbnailImage::PreSubclassWindow()
{
	// TODO: Add your specialized code here and/or call the base class

	CListBox::PreSubclassWindow();
	//	ModifyStyle(0, LBS_OWNERDRAWVARIABLE|WS_VSCROLL);

}


BOOL CThumbnailImage::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	int nSel = GetCurSel();
	if (pMsg->message == WM_KEYDOWN) {
		//Save File
		if (pMsg->wParam == VK_DELETE && m_bDelete)
		{
			//Save(_T("c:\\img.dat"));
			/*Delete(nSel, true);*/
		}

		if (pMsg->wParam == VK_F2) {

		}
	}

	return CListBox::PreTranslateMessage(pMsg);
}


BOOL CThumbnailImage::GetCheck(int nIndex) {
	if (nIndex < 0 || nIndex >= GetCount())
		return FALSE;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nIndex);
	if (obj == NULL)
		return FALSE;
	//	printf("\r\ncheck=%d", obj->bCheck);
	return obj->bCheck;
}
void CThumbnailImage::SetCheck(int nIndex, BOOL bCheck) {
	if (nIndex < 0 || nIndex >= GetCount())
		return;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nIndex);
	if (obj == NULL)
		return;
	obj->bCheck = bCheck;
}

CString CThumbnailImage::GetString(int nIndex) {
	if (nIndex < 0 || nIndex >= GetCount())
		return FALSE;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nIndex);
	if (obj == NULL)
		return _T("");
	return obj->szString;
}


void CThumbnailImage::Delete(int nIndex, bool bRemoveFile) {
	if (nIndex < 0 || nIndex >= GetCount())
		return;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nIndex);
	int ret = CListBox::DeleteString(nIndex);
	if (ret >= 0)
	{
		
		if (obj)
		{
			_tprintf(_T("\r\nDelete Item: %d"), nIndex);
			CString strPath;
			strPath.Format(_T("%s\\%s"), m_szPath, obj->szFileName);
			int retval = PathFileExists(strPath);
			if (retval == 1)
				::DeleteFile(strPath);

			delete obj;
		}
		SaveProperties();
	}

}


// basic_ofstream_class.cpp
// compile with: /EHsc
#include <fstream>
using namespace std;




bool CThumbnailImage::Save(LPCTSTR lpszFileName) {
	IStorage* pIStorage = NULL;
	IStream* pIStream1 = NULL;
	IStream* pIStream2 = NULL;
	HRESULT hr;
	Status stat = Ok;

	hr = CoInitialize(NULL);
	if (FAILED(hr))
		goto Exit;

	// Create a compound file object, and get
	// a pointer to its IStorage interface.
	hr = StgCreateDocfile(
		L"c:\\CompoundFile.cmp",
		STGM_READWRITE | STGM_CREATE | STGM_SHARE_EXCLUSIVE,
		0,
		&pIStorage);

	if (FAILED(hr))
		goto Exit;

	// Get the class identifier for the JPEG encoder.
	CLSID jpgClsid;
	GetEncoderClsid(L"image/jpeg", &jpgClsid);

	// Get the class identifier for the PNG encoder.
	CLSID pngClsid;
	GetEncoderClsid(L"image/png", &pngClsid);


	for (int i = 0; i < GetCount(); i++) {
		THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(i);
		IStream* pIStream = NULL;
		// Create a stream in the compound file.
		CString tmpStr;
		tmpStr.Format(_T("Image %d"), i);
		hr = pIStorage->CreateStream(
			tmpStr,
			STGM_READWRITE | STGM_SHARE_EXCLUSIVE,
			0,
			0,
			&pIStream);

		if (FAILED(hr))
			goto Exit;

		pIStream->Release();


	}

Exit:
	if (pIStorage)
		pIStorage->Release();

	if (stat != Ok || FAILED(hr))
		return false;
	CoUninitialize();

	return true;
}

bool CThumbnailImage::Open(LPCTSTR lpszFileName) {
	return true;
}

HBITMAP CThumbnailImage::GetHBITMAP(int nIndex) {
	if (nIndex < 0 || nIndex >= GetCount())
		return NULL;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nIndex);
	if (obj == NULL)
		return NULL;
	CString szFileName;
	szFileName.Format(_T("%s\\%s"), m_szPath, obj->szFileName);
	m_img.Load(szFileName);
	return m_img.operator HBITMAP();
	
}


Bitmap* CThumbnailImage::GetBitmap(int nIndex) {
	if (nIndex < 0 || nIndex >= GetCount())
		return NULL;
	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nIndex);
	if (obj == NULL)
		return NULL;
	CString szFileName;
	szFileName.Format(_T("%s\\%s"), m_szPath, obj->szFileName);
	Bitmap* bmp = new Bitmap(szFileName);
	return bmp;	
}
int CThumbnailImage::GetImageCount() {
	return GetCount();
}

void CThumbnailImage::MarkAll() {
	for (int i = 0; i < GetCount(); i++) {
		THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(i);
		if(obj) obj->bCheck = true;
	}
	Invalidate(FALSE);
}

void CThumbnailImage::UnmarkAll() {
	for (int i = 0; i < GetCount(); i++) {
		THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(i);
		if(obj) obj->bCheck = false;
	}
	Invalidate(FALSE);
}

void CThumbnailImage::DeleteAllMarked() {

	for (int i = GetCount() - 1; i >= 0; i--) {
		THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(i);
		if (obj && obj->bCheck) {
			Delete(i, true);
		}
	}
	Invalidate(FALSE);
}

void CThumbnailImage::EditImage() {
	// TODO: Add your message handler code here and/or call default
	int nSel = GetCurSel();
	if (nSel < 0)
		return;
	TCHAR szPath[MAX_PATH];
	CString szFileName;
	::GetCurrentDirectory(MAX_PATH, szPath);
	szFileName.Format(_T("%s\\tmp.jpg"), szPath);

	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nSel);
	if (obj == NULL)
		return;

	Bitmap* bmp = Bitmap::FromHBITMAP(obj->hBitmap, 0);

	CLSID jpgClsid;
	GetEncoderClsid(L"image/jpeg", &jpgClsid);

	bmp->Save(szFileName, &jpgClsid, NULL);

	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	CString szCommandLine;
	szCommandLine.Format(_T("mspaint.exe %s"), szFileName);
	// Start the child process. 
	if (!CreateProcess(NULL,   // No module name (use command line)
		(LPTSTR)(LPCTSTR)szCommandLine,        // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si,            // Pointer to STARTUPINFO structure
		&pi)           // Pointer to PROCESS_INFORMATION structure
		)
	{
		printf("CreateProcess failed (%d)\n", GetLastError());
		return;
	}

	// Wait until child process exits.
	WaitForSingleObject(pi.hProcess, INFINITE);

	// Close process and thread handles. 
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	::DeleteObject(obj->hBitmap);
	delete bmp;

	Bitmap newbmp(szFileName);
	newbmp.GetHBITMAP(Color(255, 255, 255, 255), &obj->hBitmap);

	SetRedraw(TRUE);
	Invalidate(FALSE);

	::DeleteFile(szFileName);
}

void CThumbnailImage::DeleteAll() {
	ResetContent();
}


void CThumbnailImage::ResetContent() {
	for (int i = 0; i < GetCount(); i++)
	{
		THUMBINFO* obj = (THUMBINFO*) GetItemDataPtr(i);
		if(obj) delete obj;
	}
	CListBox::ResetContent();
}

void CThumbnailImage::EditComment() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	int nSel = GetCurSel();
	if (nSel < 0)
		return;

	TCHAR szPath[MAX_PATH];
	CString szFileName;
	::GetCurrentDirectory(MAX_PATH, szPath);
	szFileName.Format(_T("%s\\tmp.jpg"), szPath);

	THUMBINFO* obj = (THUMBINFO*)GetItemDataPtr(nSel);
	if (obj == NULL)
		return;

	CGuiInputDataDialog dlg(this->GetParent(), false);
	dlg.m_szGroupName.Empty();
	dlg.m_szValueName = _T("Ghi chú");
	dlg.m_szTextValue = obj->szString;
	dlg.m_szTextValue.Trim();
	if (dlg.DoModal() == IDOK) {
		obj->szString = dlg.GetTextValue();
		obj->szCommnet = dlg.GetTextValue();
		SaveProperties();
		Invalidate(FALSE);

	}
}
void CThumbnailImage::SetPath(LPCTSTR lpszPath) {
	m_szPath = lpszPath;
	LoadThumb();
}

void CThumbnailImage::LoadThumb() {
	char fname[MAX_PATH];
	CString szFile;
	CString szFileName;
	CString szPath;
	CString tmpStr, szComment;;


	ResetContent();


	szFile.Format(_T("%s\\info.json"), m_szPath);
	m_nMaxFrame = 0;

	_tprintf(L"\r\nLoad File: %s", szFile);



	ifstream ifs(StringUtil::toUTF8(szFile));
	if (!ifs.is_open())
		return;

	IStreamWrapper isw(ifs);

	Document d;
	d.ParseStream(isw);

	printf("\r\nLOAD: %s", d.GetString());
	if(d.HasMember("images"))
	{
		Value a = d["images"].GetArray();

		int nIndex;


		for (int i = 0;i < a.Size(); i++)
		{
			Value obj = a[i].GetObject();
			nIndex = obj["index"].GetInt();
			szFileName = StringUtil::fromUTF8(obj["name"].GetString());
			szComment = StringUtil::fromUTF8(obj["comment"].GetString());
			Add(nIndex, szComment, szFileName);
		}
	}
	
	RedrawWindow();

	SetCurSel(0);

	ifs.close();

	StringUtil::Clear();
}


bool CThumbnailImage::SaveProperties() {
	char fname[MAX_PATH];
	CString szFile;
	szFile.Format(_T("%s\\info.json"), m_szPath);

	THUMBINFO* obj;
	CString szLine;
	char* szInfo;
	szLine.Empty();

	rapidjson::Document d;
	d.SetObject();
	Value a(kArrayType);
	Document::AllocatorType& allocator = d.GetAllocator();


	for (int i = 0; i < GetCount(); i++) {
		obj = (THUMBINFO*)GetItemDataPtr(i);
		if (obj == NULL)
			continue;
		Value info(kObjectType);
		info.AddMember("index", i+1, allocator);
		info.AddMember("name", StringRef((LPCSTR)StringUtil::toUTF8(obj->szFileName)), allocator);
		info.AddMember("comment", StringRef((LPCSTR)StringUtil::toUTF8(obj->szCommnet)), allocator);
		a.PushBack(info, allocator);
	}
	d.AddMember("images", a, allocator);

	rapidjson::StringBuffer buffer;
	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d.Accept(writer);

	printf("\r\nSAVE: %s", buffer.GetString());

	//SetFileAttributes(szFile, FILE_ATTRIBUTE_NORMAL);

	FILE* fp = fopen(fml::WideStringToUtf8(std::wstring(szFile)).c_str(), "wb"); // non-Windows use "w"
	fwrite(buffer.GetString(), sizeof(char), buffer.GetLength(), fp);
	fclose(fp);

	//SetFileAttributes(szFile, FILE_ATTRIBUTE_READONLY);

	StringUtil::Clear();

	return true;
}


int CThumbnailImage::GetMaxFrame() {
	m_nMaxFrame = GetCount();
	return m_nMaxFrame;
}



void CThumbnailImage::OnSize(UINT nType, int cx, int cy)
{
	CListBox::OnSize(nType, cx, cy);
	Invalidate();
	// TODO: Add your message handler code here
}


