#include "stdafx.h"
#include "../MainFrm.h"
#include "Thumbnailimage.h"
#include "GuiInputDataDialog.h"
#include "StringToken.h"
#include <Gdiplus.h>
using namespace Gdiplus;

CThumbnailImage::CThumbnailImage(void)
{
	m_nThumbWidth = 150;
	m_nThumbHeight = 150;
	m_nMaxFrame = 0;
}

CThumbnailImage::~CThumbnailImage(void)
{
	DeleteAll();
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
END_MESSAGE_MAP()


BOOL CThumbnailImage::Create(CWnd *pParent, int x, int y, int w, int h, DWORD dwStyle){
	m_nThumbWidth = max(m_nThumbWidth, w-20);
	return CListBox::Create(WS_BORDER|WS_TABSTOP|WS_HSCROLL|WS_VSCROLL|LBS_OWNERDRAWVARIABLE|dwStyle, CRect(x, y, x+w, y+h), pParent, NULL);
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

	// TODO: Add your message handler code here
}

void CThumbnailImage::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CListBox::OnLButtonDown(nFlags, point);
	CRect rcCheck;;
	int nSel = GetCurSel();

	if(nSel >= 0)
	{
		GetItemRect(nSel, rcCheck);
		rcCheck.right = rcCheck.left+20;
		rcCheck.top = rcCheck.bottom-20;
		if(rcCheck.PtInRect(point)){
			BOOL bCheck = GetCheck(nSel);
			SetCheck(nSel, !bCheck);			
			Invalidate(FALSE);
		}

		CRect rcClose;
		GetItemRect(nSel, rcCheck);
		rcClose = rcCheck;
		rcClose.left = rcClose.right-20;
		rcClose.top = rcClose.bottom-20;
		rcClose.DeflateRect(2, 2, 2, 2);
		if(rcClose.PtInRect(point)){
			int ret = AfxMessageBox(_T("Do you want to delete item?(Y/N)"), MB_YESNO|MB_DEFBUTTON2);
			if(ret == IDYES){
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
	if(lpDIS->CtlType != ODT_LISTBOX)
		return;
	if(lpDIS->itemID < 0 || lpDIS->itemID >= m_Thumb.GetCount())
		return;
	
	//Bitmap* bmp = NULL;
	THUMBINFO* obj = (THUMBINFO*) m_Thumb[lpDIS->itemID];

	CDC *pDC = CDC::FromHandle(lpDIS->hDC);
	CRect rcItem = lpDIS->rcItem;
	CRect rcCheck;
	rcCheck = CRect(rcItem.left, rcItem.bottom-20, rcItem.left+20, rcItem.bottom);
	rcCheck.DeflateRect(2, 2, 2,2);
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

   Bitmap* bmp = Bitmap::FromHBITMAP(obj->hBitmap, 0);
   if(bmp)
   {
		
		Graphics g(pDC->m_hDC);
		float scale = (float)bmp->GetHeight()/bmp->GetWidth();
		g.DrawImage(bmp, Rect(rcItem.left, rcItem.top, rcItem.Width(), rcItem.Width()*scale), 0, 0, bmp->GetWidth(),bmp->GetHeight(), UnitPixel, NULL);
		delete bmp;
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

   
	rcItem.top = rcItem.bottom-20;
	pDC->FillSolidRect(rcItem, RGB(0, 64, 128));


//Draw check

	BOOL bCheck = FALSE;
	bCheck = GetCheck(lpDIS->itemID);
   
   if(bCheck)
	   pDC->FillSolidRect(rcCheck, RGB(255, 128, 0));
   else
	   pDC->FillSolidRect(rcCheck, RGB(255, 255, 255));

    CString tmpStr;
	
	tmpStr.Format(_T("%d"), obj->nIndex);	
	pDC->DrawText(tmpStr, rcCheck,DT_CENTER|DT_SINGLELINE|DT_VCENTER);
	
   // Draw the text.
	rcItem.left += 25;
	pDC->SetTextColor(RGB(255,255, 255));
	pDC->SetBkMode(TRANSPARENT);
	pDC->DrawText(obj->szString, rcItem,DT_CENTER|DT_SINGLELINE|DT_VCENTER);

	 if ((lpDIS->itemAction | ODA_FOCUS) &&
      (lpDIS->itemState & ODS_FOCUS))
   {
		CRect rcClose;
		rcClose = lpDIS->rcItem;
		rcClose.left = rcClose.right-20;
		rcClose.top = rcClose.bottom-20;
		rcClose.DeflateRect(2, 2, 2, 2);
		pDC->DrawFrameControl(rcClose, DFC_CAPTION, DFCS_CAPTIONCLOSE);
    
   }
   // Reset the background color and the text color back to their
   // original values.
   pDC->SetTextColor(crOldTextColor);
   pDC->SetBkColor(crOldBkColor);
   


}

int CThumbnailImage::Add(int nIndex, LPCTSTR lpszString, void* pBitmap, LPCTSTR lpszFileName){
	if(pBitmap == NULL)
		return -1;
	
	int nItem = CListBox::AddString(lpszString);	
	if(nItem >= 0){
		const float fRatio=(float)m_nThumbHeight/(float)m_nThumbWidth;
		int XDest, YDest, nDestWidth, nDestHeight;

		Bitmap* bmp = (Bitmap*) pBitmap;
		
		int w = 320;
		float scale = (float) bmp->GetHeight()/bmp->GetWidth();
		if(bmp->GetWidth() > 320)
			w = 320;
		Bitmap* newbmp = new Bitmap(w, w*scale);
		Graphics g(newbmp);
/*
		// Calculate Rect to fit to canvas
		const float fImgRatio=(float)bmp->GetHeight()/bmp->GetWidth();
		if(fImgRatio > fRatio)
		{
			nDestWidth=(int)m_nThumbHeight/fImgRatio;
			XDest=(m_nThumbWidth-nDestWidth)/2;
			YDest=0;
			nDestHeight=m_nThumbHeight;
		}
		else
		{
			XDest=0;
			nDestWidth=m_nThumbWidth;
			nDestHeight=(int)m_nThumbHeight*fImgRatio;
			YDest=(m_nThumbHeight-nDestHeight)/2;
		}
*/				
		
		g.DrawImage(bmp, Rect(0, 0, w, w*scale), 0, 0, bmp->GetWidth(),bmp->GetHeight(), UnitPixel, NULL);

		bool bFound = false;
		THUMBINFO* obj;
		for (int i =0; i < m_Thumb.GetCount(); i++)
		{
			obj = (THUMBINFO*) m_Thumb[i];
			if(obj->szFileName == lpszFileName)
			{
				bFound = true;
				break;
			}
		}
		if(!bFound) 
		{
			THUMBINFO* newobj = new THUMBINFO;
			newobj->szString = lpszString;
			newobj->szCommnet = _T("");
			newobj->bCheck= FALSE;	
			newobj->nIndex = nIndex;
			newobj->szFileName = lpszFileName;
			newbmp->GetHBITMAP(Color(255,255,255,255), &newobj->hBitmap);
			m_Thumb.Add(newobj);
		}
		else
		{
			::DeleteObject(obj->hBitmap);
			obj->szString = lpszString;
			obj->szFileName = lpszFileName;
			newbmp->GetHBITMAP(Color(255,255,255,255), &obj->hBitmap);

		}
		delete newbmp;

		SaveProperties();
		
	}
	return nItem;
}
void CThumbnailImage::MeasureItem(LPMEASUREITEMSTRUCT lpMIS)
{
	lpMIS->itemWidth = m_nThumbWidth;
	lpMIS->itemHeight = m_nThumbHeight+30;

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

void CThumbnailImage::OnDeleteItem(int nIDCtl, LPDELETEITEMSTRUCT lpDeleteItemStruct)
{
	CListBox::OnDeleteItem(nIDCtl, lpDeleteItemStruct);
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
	if(pMsg->message== WM_KEYDOWN){
		//Save File
		if(pMsg->wParam == VK_DELETE && m_bDelete)
		{
			//Save(_T("c:\\img.dat"));
			/*Delete(nSel, true);*/
		}

		if(pMsg->wParam == VK_F2){
			
		}
	}

	return CListBox::PreTranslateMessage(pMsg);
}


BOOL CThumbnailImage::GetCheck(int nIndex){
	if(nIndex < 0 || nIndex >= m_Thumb.GetCount())
		return FALSE;
	THUMBINFO *obj = (THUMBINFO*) m_Thumb[nIndex];
//	printf("\r\ncheck=%d", obj->bCheck);
	return obj->bCheck;
}
void CThumbnailImage::SetCheck(int nIndex, BOOL bCheck){
	if(nIndex < 0 || nIndex >= m_Thumb.GetCount())
		return;
	THUMBINFO *obj = (THUMBINFO*) m_Thumb[nIndex];
	obj->bCheck = bCheck;
}

CString CThumbnailImage::GetString(int nIndex){
	if(nIndex < 0 || nIndex >= m_Thumb.GetCount())
		return FALSE;
	THUMBINFO *obj = (THUMBINFO*) m_Thumb[nIndex];
	return obj->szString;
}


void CThumbnailImage::Delete(int nIndex, bool bRemoveFile){
	if(nIndex < 0 || nIndex >= m_Thumb.GetCount())
		return;
	
	int ret = CListBox::DeleteString(nIndex);
	if(ret >= 0)
	{
		THUMBINFO* obj = (THUMBINFO*) m_Thumb[nIndex];
		if(obj->hBitmap){
			::DeleteObject(obj->hBitmap);
		}
		if(bRemoveFile)
		{
			CString szPath;
			szPath.Format(_T("%s\\%s"), m_szPath, obj->szFileName);
			::DeleteFile(szPath);

		}

		if(obj)delete obj;
		m_Thumb.RemoveAt(nIndex);
		if(nIndex > 0)
			SetCurSel(nIndex-1);
		else	
			SetCurSel(0);
		if(bRemoveFile){
			SaveProperties();
		}
	//	Bitmap* bmp = (Bitmap*) m_ThumbBitmaps[nIndex];
	//	delete bmp;
	//	m_ThumbBitmaps.RemoveAt(nIndex);

	}

}


// basic_ofstream_class.cpp
// compile with: /EHsc
#include <fstream>
using namespace std;


 

bool CThumbnailImage::Save(LPCTSTR lpszFileName){
	IStorage* pIStorage = NULL;
	IStream* pIStream1 = NULL;
	IStream* pIStream2 = NULL;
	HRESULT hr;
	Status stat = Ok;

   hr = CoInitialize(NULL);
   if(FAILED(hr))
      goto Exit;

   // Create a compound file object, and get
   // a pointer to its IStorage interface.
   hr = StgCreateDocfile(
	   L"c:\\CompoundFile.cmp", 
      STGM_READWRITE|STGM_CREATE|STGM_SHARE_EXCLUSIVE, 
      0, 
      &pIStorage);

   if(FAILED(hr))
      goto Exit;

      // Get the class identifier for the JPEG encoder.
   CLSID jpgClsid;
   GetEncoderClsid(L"image/jpeg", &jpgClsid);

   // Get the class identifier for the PNG encoder.
   CLSID pngClsid;
   GetEncoderClsid(L"image/png", &pngClsid);


   for (int i =0; i < m_Thumb.GetCount(); i++){
	   THUMBINFO *obj = (THUMBINFO*) m_Thumb[i];
		IStream* pIStream = NULL;
// Create a stream in the compound file.
		CString tmpStr;
		tmpStr.Format(_T("Image %d"), i);
	   hr = pIStorage->CreateStream(
		   tmpStr,
		STGM_READWRITE|STGM_SHARE_EXCLUSIVE,
		0,
		0,
		&pIStream);

		if(FAILED(hr))
			goto Exit;

		pIStream->Release();
		

   }

Exit:
   if(pIStorage)
      pIStorage->Release();

   if(stat != Ok || FAILED(hr))
      return false;
   CoUninitialize();

   return true;
}

bool CThumbnailImage::Open(LPCTSTR lpszFileName){
	return true;
}

HBITMAP CThumbnailImage::GetHBITMAP(int nIndex){
	if(nIndex < 0 || nIndex >= m_Thumb.GetCount())
		return NULL;
	THUMBINFO *obj = (THUMBINFO *) m_Thumb[nIndex];
	return obj->hBitmap;
}

int CThumbnailImage::GetImageCount(){
	return m_Thumb.GetCount();
}

void CThumbnailImage::MarkAll(){
	for (int i =0; i < m_Thumb.GetCount(); i++){
		THUMBINFO *obj = (THUMBINFO *) m_Thumb[i];
		obj->bCheck = true;
	}
	Invalidate(FALSE);
}

void CThumbnailImage::UnmarkAll(){
	for (int i =0; i < m_Thumb.GetCount(); i++){
		THUMBINFO *obj = (THUMBINFO *) m_Thumb[i];
		obj->bCheck = false;
	}
	Invalidate(FALSE);
}

void CThumbnailImage::DeleteAllMarked(){
	
	for (int i = m_Thumb.GetCount()-1; i>=0; i--){
		THUMBINFO *obj = (THUMBINFO *) m_Thumb[i];
		if(obj->bCheck){
			Delete(i, true);
		}
	}
	Invalidate(FALSE);	
}

void CThumbnailImage::EditImage(){
// TODO: Add your message handler code here and/or call default
	int nSel = GetCurSel();
	if(nSel < 0)
		return;
	TCHAR szPath[MAX_PATH];
	CString szFileName;
	::GetCurrentDirectory(MAX_PATH, szPath);
	szFileName.Format(_T("%s\\tmp.jpg"), szPath);

	THUMBINFO *obj = (THUMBINFO*) m_Thumb[nSel];

	Bitmap *bmp = Bitmap::FromHBITMAP(obj->hBitmap, 0);
	
	CLSID jpgClsid;
   	GetEncoderClsid(L"image/jpeg", &jpgClsid);
	
	bmp->Save(szFileName, &jpgClsid, NULL);

	STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

	CString szCommandLine;
	szCommandLine.Format(_T("mspaint.exe %s"), szFileName);
    // Start the child process. 
    if( !CreateProcess( NULL,   // No module name (use command line)
        (LPTSTR)(LPCTSTR)szCommandLine,        // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory 
        &si,            // Pointer to STARTUPINFO structure
        &pi )           // Pointer to PROCESS_INFORMATION structure
    ) 
    {
        printf( "CreateProcess failed (%d)\n", GetLastError() );
        return;
    }

    // Wait until child process exits.
    WaitForSingleObject( pi.hProcess, INFINITE );

	// Close process and thread handles. 
    CloseHandle( pi.hProcess );
    CloseHandle( pi.hThread );

	::DeleteObject(obj->hBitmap);
	delete bmp;

	Bitmap newbmp(szFileName);
	newbmp.GetHBITMAP(Color(255, 255, 255, 255), &obj->hBitmap);
	
	SetRedraw(TRUE);
	Invalidate(FALSE);
 
	::DeleteFile(szFileName);
}

void CThumbnailImage::DeleteAll(){
	for (int i = m_Thumb.GetCount()-1; i >=0; i--){
		Delete(i, false);
	}
	m_Thumb.RemoveAll();
}


void CThumbnailImage::ResetContent(){
	for (int i = m_Thumb.GetCount()-1; i >=0; i--){
		Delete(i, false);
	}
	m_Thumb.RemoveAll();
}

void CThumbnailImage::EditComment(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = GetCurSel();
	if(nSel < 0)
		return;

	TCHAR szPath[MAX_PATH];
	CString szFileName;
	::GetCurrentDirectory(MAX_PATH, szPath);
	szFileName.Format(_T("%s\\tmp.jpg"), szPath);

	THUMBINFO *obj = (THUMBINFO*) m_Thumb[nSel];

	/*Bitmap *bmp = Bitmap::FromHBITMAP(obj->hBitmap, 0);
	
	CLSID jpgClsid;
   	GetEncoderClsid(L"image/jpeg", &jpgClsid);
	
	bmp->Save(szFileName, &jpgClsid, NULL);
	::DeleteObject(obj->hBitmap);
	delete bmp;*/

	
	CGuiInputDataDialog dlg(this->GetParent(), false);
	obj = (THUMBINFO*) m_Thumb[nSel];
	dlg.m_szTextValue = obj->szString;
	dlg.m_szTextValue.Trim();
	if(dlg.DoModal() == IDOK){
		obj = (THUMBINFO*) m_Thumb[nSel];		
		obj->szString = dlg.GetTextValue();		
		obj->szCommnet = dlg.GetTextValue();

		SaveProperties();
		Invalidate(FALSE);

	}
}
void CThumbnailImage::SetPath(LPCTSTR lpszPath){
	m_szPath = lpszPath;
}

void CThumbnailImage::LoadThumb(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	TCHAR fname[MAX_PATH];
	CString szFile;
	CString szFileName;
	CString szPath;
	CString tmpStr, szComment;;	

	szFile.Format(_T("%s\\info.img"), m_szPath);
	CFile file;
	m_nMaxFrame =0;
	CFileFind finder;
	int i = 0;
	int n = 0;



	//szPath.Format(_T("%s\\*.jpg"), m_szPath);
	GetCurrentDirectory(MAX_PATH, fname);
	szPath.Format(_T("%s\\DATA\\RM\\%ld_image.jpg"), fname, pMF->m_nPatientNo);
	printf("\nszPath:%s\n", szPath);
	BOOL bWorking = finder.FindFile(szPath);
	if (bWorking)
	{
		printf("\nFindFile\n");
	}
	ResetContent();

	while (bWorking)
	{
		bWorking = finder.FindNextFile();
		szFileName = finder.GetFilePath();
		Bitmap bmp(szFileName);
		bool bFound = false;
		tmpStr.Empty();
		for (int i = szFileName.GetLength()-8; i < szFileName.GetLength()-4; i++){
			if(szFileName[i] != _T('0'))
				bFound = true;
			if(bFound){
				tmpStr += szFileName[i];
			}			
		}
		
		n = str2int(tmpStr);
		m_nMaxFrame = max(n,m_nMaxFrame);		
		Add(n, _T(""), &bmp, finder.GetFileName());

	} 
	finder.Close();


	if(!file.Open(szFile, CFile::modeRead))
	{
		return;
	}	


	THUMBINFO *obj;
	CString szLine;
	char* buffer = new char[file.GetLength()+1];
	
	memset(buffer, '\0', file.GetLength()+1);
	file.Read(buffer, file.GetLength());
	int byte = ::MultiByteToWideChar(CP_UTF8, 0,buffer, file.GetLength(), NULL, 0);
	::MultiByteToWideChar(CP_UTF8, 0,buffer, file.GetLength(), szLine.GetBufferSetLength(byte), byte);
	szLine.ReleaseBuffer();
	delete buffer;

	CStringToken tkLine(szLine, _T("\n"), false);	
	
	int nx = 0;
	n = 1;
	int nIdx = 0;
	for (int i =0; i < tkLine.GetSize(); i++){
		tkLine.GetAt(i, tmpStr);
		nx++;

		CStringToken tk(tmpStr, _T("|"), false);
		szFileName.Empty();
		tk.GetAt(0, nIdx);
		tk.GetAt(1, szFileName);
		tk.GetAt(2, szComment);

		//if(m_CommentItems.GetCount() < i){
		//	COMMENTINFO item = m_CommentItems.GetAt(i);
		//	_tprintf(_T("\r\n%d"), item.nIdx, item.szComment);
		//	if(item.nIdx == i)
		//	{
		//		szComment = item.szComment;
		//	}
		//}

		/*CString szImageFile;
		szImageFile.Format(_T("%s\\%s"), m_szPath, szFileName);
		if(szImageFile.Find(_T("jpg")) != -1)
		{
			Bitmap bmp(szImageFile);
			Add(n++, szComment, &bmp, szImageFile);
			m_nMaxFrame = n;
		}*/

		if(i < m_Thumb.GetCount()){			
			obj = (THUMBINFO*) m_Thumb[i];
			if(obj->szFileName == szFileName)
			{
				obj->szString = szComment;
				obj->nIndex = nIdx;
			}
		}

	}
	file.Close();
	Invalidate();
}

bool CThumbnailImage::SaveProperties(){
	char fname[MAX_PATH];
	CString szFile;
	szFile.Format(_T("%s\\info.img"), m_szPath);
	CFile file;
	if(!file.Open(szFile, CFile::modeWrite|CFile::modeCreate))
		return false;

	THUMBINFO *obj;
	CString szLine;
	char* szInfo;
	szLine.Empty();
	for (int i =0; i < m_Thumb.GetCount(); i++){
		obj = (THUMBINFO*) m_Thumb[i];
		CString tmpStr = obj->szString;
		tmpStr.Trim();
		szLine.AppendFormat(_T("%d|%s|%s\r\n"), i, obj->szFileName, tmpStr);
	}
	if(!szLine.IsEmpty())
	{
		int length = szLine.GetLength()*sizeof(WCHAR);
		szInfo = new char[length+sizeof(char)];
		memset(szInfo, '\0', length);
		int byte = ::WideCharToMultiByte(CP_UTF8, 0, szLine, szLine.GetLength(), szInfo, length, 0, 0);
		file.Write(szInfo, strlen(szInfo));
		delete szInfo;
	}
	file.Close();
	return true;
}


int CThumbnailImage::GetMaxFrame(){
	return m_nMaxFrame;
}

