// ThumbnailControl.cpp : implementation file
//

#include "stdafx.h"
#include "MainFrm.h"
#include "Resource.h"
#include "Gdiplus.h"
using namespace Gdiplus;


#define	THUMBNAIL_WIDTH		150
#define	THUMBNAIL_HEIGHT	150

typedef struct tagUndoInfo{
	int nIndex;
	HBITMAP hBitmap;
}UndoInfo;


CListImage::CListImage(){
}
CListImage::~CListImage(){
}
BEGIN_MESSAGE_MAP(CListImage, CListCtrl)
	ON_NOTIFY_REFLECT(LVN_ITEMCHANGED, OnLvnItemchanged)
	ON_WM_LBUTTONDOWN()
//	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnNMCustomdraw)
//ON_WM_DRAWITEM()
	ON_WM_CREATE()
//ON_WM_PAINT()
//	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnNMCustomdraw)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()



BOOL CListImage::Create(CWnd *pParent, int x, int y, int w, int h){
	CRect rect(x, y, x+w, y+h);
	return CListCtrl::Create(LVS_ALIGNTOP|LVS_ICON|WS_VISIBLE|WS_CHILD|WS_BORDER , rect, pParent, NULL);

}
void CListImage::OnLvnItemchanged(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	static int nOldItem = -1;
	if(pNMLV->uNewState & LVNI_SELECTED)
	{
		if(pNMLV->iItem >=0 && nOldItem != pNMLV->iItem)
		{
			CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
			nOldItem = pNMLV->iItem;
		}
	}
	*pResult = 0;
}



void CListImage::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	SetFocus();
	CListCtrl::OnLButtonDown(nFlags, point);
}

int CListImage::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CListCtrl::OnCreate(lpCreateStruct) == -1)
		return -1;
	m_ImageList.Create(THUMBNAIL_WIDTH, THUMBNAIL_HEIGHT, ILC_COLOR24, 0, 1);
	SetImageList(&m_ImageList, LVSIL_NORMAL);

	//ModifyStyle(0, LVS_EX_CHECKBOXES);
//	DWORD dwStyle = GetStyle();
//	SetExtendedStyle(dwStyle|LVS_EX_CHECKBOXES|LVS_EX_FULLROWSELECT);
	return 0;
}


void CListImage::OnNMCustomdraw(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	CRect rect = pNMCD->rc;
	CDC *pDC = CDC::FromHandle(pNMCD->hdc);

	*pResult = 0;
}

void CListImage::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	int nSel = GetNextItem(-1, LVIS_SELECTED);
	if(nSel >= 0)
	{
	/*	BOOL bCheck = GetCheck(nSel);
		SetCheck(nSel, !bCheck);
		this->RedrawItems(nSel, nSel);*/
	}
	CListCtrl::OnLButtonDblClk(nFlags, point);
	((CThumbnailControl*)GetParent())->OnLButtonDblClk(nFlags, point);
}





// CThumbnailControl

IMPLEMENT_DYNAMIC(CThumbnailControl, CWnd)
CThumbnailControl::CThumbnailControl()
{
	m_nPrevSelection = -1;
}

CThumbnailControl::~CThumbnailControl()
{
	Reset();
}

BOOL CThumbnailControl::Create(CWnd *pParent, int x, int y, int w, int h){
	return CWnd::Create(NULL, _T(""), WS_CHILD|WS_VISIBLE, CRect(x, y, x+w, y+h), pParent, _GetNextID());
}
void CThumbnailControl::Reset(){
	for (int i =0; i < m_ThumbInfo.GetCount(); i++){
		THUMBNAILINFO tni = m_ThumbInfo[i];
		::DeleteObject(tni.hBitmap);
	}
	m_ThumbInfo.RemoveAll();
	ReleaseUndo();
	
}

void CThumbnailControl::ReleaseUndo(){
	POSITION pos = m_UndoBitmaps.GetHeadPosition();
	while(pos != NULL){
		CPtrArray* arUndo = (CPtrArray*) m_UndoBitmaps.GetNext(pos);
		if(arUndo)
		{
			for (int i =0; i < arUndo->GetCount(); i++){
				UndoInfo *ui = (UndoInfo*) arUndo->GetAt(i);
				::DeleteObject(ui->hBitmap);
				delete ui;
			}
			arUndo->RemoveAll();
			delete arUndo;
		}
	}
	m_UndoBitmaps.RemoveAll();
}


BEGIN_MESSAGE_MAP(CThumbnailControl, CWnd)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
	ON_WM_CREATE()
	ON_WM_CONTEXTMENU()
END_MESSAGE_MAP()



// CThumbnailControl message handlers


void CThumbnailControl::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CWnd::OnLButtonDblClk(nFlags, point);
}

void CThumbnailControl::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nHit = HitTest(point);
	CWnd::OnLButtonDown(nFlags, point);
}

void CThumbnailControl::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	CRect rect, rc;
	GetClientRect(&rect);
	rc = rect;
	rc.bottom = rect.top+30;
	dc.FillSolidRect(rc, RGB(0, 79, 39));
	CString szText;
	szText = _T("Thumbnails");
	dc.SetBkMode(TRANSPARENT);
	dc.SetTextColor(RGB(255, 255, 255));
	dc.DrawText(szText, rc, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	rc = rect;
	rc.top += 450;
	dc.FillSolidRect(rc, RGB(220, 220, 255));
	CRect rcItem;
	rcItem = rc;
	rcItem.OffsetRect(15, 5);
	rcItem.right = rcItem.left+40;
	rcItem.bottom = rcItem.top+40;


}

BOOL CThumbnailControl::OnEraseBkgnd(CDC* pDC)
{
	return CWnd::OnEraseBkgnd(pDC);
}

int CThumbnailControl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	CRect rect;
	GetClientRect(&rect);
	rect.top += 30;
	rect.bottom = rect.bottom;
	m_wndImage.Create(this, rect.left, rect.top, rect.Width(), rect.Height());
	m_imageList.Create(THUMBNAIL_WIDTH, THUMBNAIL_HEIGHT, ILC_COLOR24, 0, 1);
	m_wndImage.SetImageList(&m_imageList, LVSIL_NORMAL);
	DWORD dwStyle = m_wndImage.GetStyle();
	//dwStyle &=~LVS_SINGLESEL;
//	m_wndImage.SetExtendedStyle(dwStyle|LVS_EX_CHECKBOXES|LVS_EX_FULLROWSELECT);
	return 0;
}


void CThumbnailControl::Add(HBITMAP hBitmap){

	const float fRatio=(float)THUMBNAIL_HEIGHT/THUMBNAIL_WIDTH;
	int XDest, YDest, nDestWidth, nDestHeight;

		Bitmap bmp(hBitmap, 0);
		Bitmap newbm(THUMBNAIL_WIDTH, THUMBNAIL_HEIGHT);
		Graphics g(&newbm);

		// Calculate Rect to fit to canvas
		const float fImgRatio=(float)bmp.GetHeight()/bmp.GetWidth();
		if(fImgRatio > fRatio)
		{
			nDestWidth=(int)THUMBNAIL_HEIGHT/fImgRatio;
			XDest=(THUMBNAIL_WIDTH-nDestWidth)/2;
			YDest=0;
			nDestHeight=THUMBNAIL_HEIGHT;
		}
		else
		{
			XDest=0;
			nDestWidth=THUMBNAIL_WIDTH;
			nDestHeight=(int)THUMBNAIL_WIDTH*fImgRatio;
			YDest=(THUMBNAIL_HEIGHT-nDestHeight)/2;
		}

		g.DrawImage(&bmp, Rect(XDest, YDest, nDestWidth, nDestHeight), 0, 0, bmp.GetWidth(),bmp.GetHeight(), UnitPixel, NULL);
		THUMBNAILINFO thumbinfo;
		newbm.GetHBITMAP(Color(255, 0, 0, 0), &thumbinfo.hBitmap);
		thumbinfo.bchecked = false;
		thumbinfo.szComment = _T("");
		m_ThumbInfo.Add(thumbinfo);

	
}

void CThumbnailControl::Insert(int nIndex, HBITMAP hBitmap){

	const float fRatio=(float)THUMBNAIL_HEIGHT/THUMBNAIL_WIDTH;
	int XDest, YDest, nDestWidth, nDestHeight;

		Bitmap bmp(hBitmap, 0);
		Bitmap newbm(THUMBNAIL_WIDTH, THUMBNAIL_HEIGHT);
		Graphics g(&newbm);

		// Calculate Rect to fit to canvas
		const float fImgRatio=(float)bmp.GetHeight()/bmp.GetWidth();
		if(fImgRatio > fRatio)
		{
			nDestWidth=(int)THUMBNAIL_HEIGHT/fImgRatio;
			XDest=(THUMBNAIL_WIDTH-nDestWidth)/2;
			YDest=0;
			nDestHeight=THUMBNAIL_HEIGHT;
		}
		else
		{
			XDest=0;
			nDestWidth=THUMBNAIL_WIDTH;
			nDestHeight=(int)THUMBNAIL_WIDTH*fImgRatio;
			YDest=(THUMBNAIL_HEIGHT-nDestHeight)/2;
		}

		g.DrawImage(&bmp, Rect(XDest, YDest, nDestWidth, nDestHeight), 0, 0, bmp.GetWidth(),bmp.GetHeight(), UnitPixel, NULL);
		
		THUMBNAILINFO thumbinfo;
		newbm.GetHBITMAP(Color(255, 0, 0, 0), &thumbinfo.hBitmap);
		thumbinfo.bchecked = false;
		thumbinfo.szComment = _T("");
		m_ThumbInfo.InsertAt(nIndex, thumbinfo);
}

void CThumbnailControl::Remove(int nIndex){
	if(nIndex < 0 || nIndex >= m_ThumbInfo.GetCount())
		return;
	THUMBNAILINFO tni = m_ThumbInfo[nIndex];
	::DeleteObject(tni.hBitmap);
	m_ThumbInfo.RemoveAt(nIndex);
	m_wndImage.DeleteItem(nIndex);
//	m_imageList.Remove(nIndex);
	ShowImages();	
	
}
void CThumbnailControl::ShowImages(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CImageList* pImgList=&m_imageList;

	m_wndImage.SetRedraw(FALSE);

	// reset our image list
	for(int i=0; i<pImgList->GetImageCount(); i++)
		pImgList->Remove(i); 
	
	// remove all items from list view
	m_wndImage.DeleteAllItems();
	pImgList->SetImageCount(m_ThumbInfo.GetCount());

	 
	 
	CString szString; 

	for(int i =0; i < m_ThumbInfo.GetCount(); i++)
	{
			szString.Format(_T("Frame %d"), i+1);
			m_wndImage.InsertItem(i, szString, i);
			m_wndImage.SetCheck(i, FALSE);
			// Attach to Bitmap and Replace image in CImageList
			THUMBNAILINFO tni = m_ThumbInfo[i];
			CBitmap bitmap;
			bitmap.Attach(tni.hBitmap);
			pImgList->Replace(i, &bitmap, NULL);

			bitmap.Detach();
			// Redraw only a current item for removing flickering and fast speed.
			m_wndImage.RedrawItems(i, i);
	}
	m_wndImage.SetRedraw(TRUE);
	m_wndImage.Invalidate();

}
BOOL CThumbnailControl::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_DELETE){
		int nSel  =m_wndImage.GetNextItem(-1, LVNI_SELECTED);
		if(nSel >= 0){
			int nRet = ShowMessageBox(_T("Do you want to remove frame?(Y/N)"), MB_YESNO);
			if(nRet == IDYES)
			{
				CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
				Remove(nSel);
			}
		}
	}
	return CWnd::PreTranslateMessage(pMsg);
}


int CThumbnailControl::HitTest(CPoint point){
	CRect rect, rc, rcIem;
	GetClientRect(&rect);

	rc = rect;
	rc.top += 450;
	CRect rcItem;
	rcItem = rc;
	rcItem.OffsetRect(15, 5);
	rcItem.right = rcItem.left+40;
	rcItem.bottom = rcItem.top+40;


	for (int i =0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++){
			if(rcItem.PtInRect(point)){
				int pos = 3*i+j;
				return pos;
			}
			rcItem.OffsetRect(rcItem.Width()+5, 0);
		}
		rcItem.MoveToX(15);
		rcItem.OffsetRect(0, rcItem.Height()+5);
	}
	return -1;
}


BOOL CThumbnailControl::OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	// TODO: Add your specialized code here and/or call the base class
	return CWnd::OnNotify(wParam, lParam, pResult);
}

void CThumbnailControl::OnContextMenu(CWnd* pWnd, CPoint point)
{
	CGuiMenu menu(pWnd);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Select Frames"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T(""));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Delete Frames"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T(""));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Undo"));
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_LEFTALIGN|TPM_RIGHTBUTTON, point.x, point.y, pWnd);
	switch(ret){
	case 1:
		SelectImages();
		break;
	case 2:
		DeleteImages();
		break;
	case 3:
		Undo();
		break;
	}
}


void CThumbnailControl::SelectImages(){
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		int nCount=0;
		CPtrArray* undoBitmaps = new CPtrArray;

		for (int i  = m_wndImage.GetItemCount()-1; i >=0; i--)
		{
			if(!m_wndImage.GetCheck(i))
			{
				UndoInfo* ui = new UndoInfo;
				ui->nIndex = i;
				undoBitmaps->Add(ui);
				Remove(i);
				nCount++;
			}
		}
		if(undoBitmaps->GetCount() > 0)
			m_UndoBitmaps.AddHead(undoBitmaps);
		else
			delete undoBitmaps;
}

void CThumbnailControl::DeleteImages(){
	int nRet = ShowMessageBox(_T("Do you want to delete all images selected?(Y/N)"), MB_YESNO);
	if(nRet == IDYES)
	{
		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
		int nCount = 0;
		CPtrArray* undoBitmaps = new CPtrArray;

		for (int i  = m_wndImage.GetItemCount()-1; i >=0; i--)
		{
			if(m_wndImage.GetCheck(i))
			{
				UndoInfo* ui = new UndoInfo;
				ui->nIndex = i;
				undoBitmaps->Add(ui);

				Remove(i);
				nCount++;
			}
		}
		m_UndoBitmaps.AddHead(undoBitmaps);


	}
}

void CThumbnailControl::Undo(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	if(m_UndoBitmaps.GetCount() <= 0)
		return;

	CPtrArray* undo = (CPtrArray*)m_UndoBitmaps.RemoveHead();

	for (int i = undo->GetCount()-1; i >=0; i--){
		UndoInfo* ui = (UndoInfo*) undo->GetAt(i);
		Insert(ui->nIndex, ui->hBitmap);
		::DeleteObject(ui->hBitmap);
		delete ui;
	}
	ShowImages();

	undo->RemoveAll();
	delete undo;
}


void CThumbnailControl::SetCheck(int nIndex, bool bCheck){
	if(nIndex < 0 || nIndex >= m_ThumbInfo.GetCount())
		return;
	THUMBNAILINFO tni = m_ThumbInfo[nIndex];
	tni.bchecked = bCheck;
	m_ThumbInfo.SetAt(nIndex, tni);
}

bool CThumbnailControl::GetCheck(int nIndex){
	if(nIndex < 0 || nIndex >= m_ThumbInfo.GetCount())
		return false;
	THUMBNAILINFO tni = m_ThumbInfo[nIndex];
	return tni.bchecked;
}