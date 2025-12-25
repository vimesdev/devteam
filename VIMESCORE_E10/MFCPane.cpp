#include "StdAfx.h"
#include ".\mfcpane.h"
#include "GuiUtils.h"
#include "GuiButton.h"

#define PANE_HEADER_HEIGHT	30
#define PANE_FOOTER_HEIGHT	40
#define PANE_HEADER_BKCOLOR	RGB(235, 235, 235)
#define PANE_HEADER_TEXTCOLOR RGB(128, 128, 128)
#define PANE_FOOTER_BKCOLOR	RGB(100, 100, 100)
#define PANE_FOOTER_TEXTCOLOR RGB(255 ,255 , 255)


static void _OnButtonSelectFnc(CWnd *pWnd){
	CMFCPane *pVw = (CMFCPane *)pWnd;
	pVw->OnButtonSelect();
}


CMFCPane::CMFCPane(void)
{
	m_nWidth = 400;
	m_szName = _T("MFCPANE");
	m_szCaption = _T("Pane");
	m_wndView = NULL;
}

CMFCPane::~CMFCPane(void)
{
	m_Buttons.RemoveAll();
}

void CMFCPane::RecalcLayout(){
	CRect rect, rc;
	CScrollView::GetClientRect(&rect);
	
	rc = rect;
	rc.top = rc.bottom - PANE_FOOTER_HEIGHT;
	rc.right = rc.left + PANE_FOOTER_HEIGHT;
	rc.DeflateRect(2, 2, 2, 2);

	rc = rect;
	rc.top = rc.bottom - PANE_FOOTER_HEIGHT;
	rc.left = rc.right - PANE_FOOTER_HEIGHT;
	rc.DeflateRect(2, 2, 2, 2);
	for (int i =0; i < m_Buttons.GetCount(); i++)
	{
		CWnd *pButton = m_Buttons[i];
		pButton->MoveWindow(rc);
		rc.OffsetRect(-1*rc.Width(), 0);
	}
	
	rc = rect;
	rc.top += PANE_HEADER_HEIGHT;
	rc.bottom -= PANE_FOOTER_HEIGHT;
	if(m_wndView)
	{
		int w, h;
		CGuiView *pView = (CGuiView*)m_wndView;
		w = pView->GetWidth();
		h = pView->GetHeight();
		h += PANE_HEADER_HEIGHT;
		h += PANE_FOOTER_HEIGHT;
		SetScrollSizes(MM_TEXT, CSize(w, h));
		GetClientRect(&rc);
		m_wndView->MoveWindow(rc, FALSE);
	}
	
}
void CMFCPane::OnButtonClick(int nIndex){
}
void CMFCPane::OnSelect(int nIndex){
}

BOOL	CMFCPane::Create(CWnd *pParent, int nWidth, LPCTSTR lpszName){
	m_szName = lpszName;
	m_nWidth = nWidth;
	return CScrollView::Create(NULL, lpszName, AFX_WS_DEFAULT_VIEW, CRect(0, 0, nWidth, 0), pParent, NULL);
}
void	CMFCPane::OnCreateComponents(){
}

void CMFCPane::OnSetWindowEvents()
{
	for (int i =0; i < m_Buttons.GetCount(); i++)
	{
		CGuiButton* pBtn = (CGuiButton*)m_Buttons[i];
		pBtn->SetEvent(WE_CLICK, _OnButtonSelectFnc);
	}
}
void	CMFCPane::SetCaptionText(CString szCaption){
	m_szCaption = szCaption;
	Invalidate();
}
void	CMFCPane::SetName(CString	szName){
	m_szName = szName;
}
CString	CMFCPane::GetCaptionText(){
	return m_szCaption;
}
CString	CMFCPane::GetName(){
	return m_szName;
}

void	CMFCPane::AddButton(CWnd* pButton, int nStyle){
	m_Buttons.Add(pButton);
}

int CMFCPane::GetWidth()
{
	return m_nWidth;
}


IMPLEMENT_DYNCREATE(CMFCPane, CScrollView)


BEGIN_MESSAGE_MAP(CMFCPane, CScrollView)
ON_WM_PAINT()
ON_WM_SIZE()
ON_WM_CREATE()
ON_WM_ERASEBKGND()
ON_WM_HSCROLL()
ON_WM_VSCROLL()
ON_WM_MOUSEWHEEL()
END_MESSAGE_MAP()

void CMFCPane::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: Add your message handler code here
	// Do not call CScrollView::OnPaint() for painting messages
	
	CRect rect, rc;
	CScrollView::GetClientRect(&rect);
	rc = rect;
	rc.bottom = rc.top+PANE_HEADER_HEIGHT;
	COLORREF clrOldText;
	clrOldText = dc.SetTextColor(PANE_HEADER_TEXTCOLOR);
	rc.DeflateRect(0, 0, 1, 0);
	dc.FillSolidRect(rc, PANE_HEADER_BKCOLOR);
	dc.DrawText(m_szCaption, rc, DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	rc = rect;
	rc.top = rc.bottom - PANE_FOOTER_HEIGHT;
	dc.FillSolidRect(rc, PANE_FOOTER_BKCOLOR);

}

void CMFCPane::OnDraw(CDC *pDC)
{
	

}

void CMFCPane::OnSize(UINT nType, int cx, int cy)
{
	CScrollView::OnSize(nType, cx, cy);
	RecalcLayout();
}

int CMFCPane::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CScrollView::OnCreate(lpCreateStruct) == -1)
		return -1;
	return 0;
}

BOOL CMFCPane::OnEraseBkgnd(CDC* pDC)
{
	// TODO: Add your message handler code here and/or call default
	CRect rect;
	CScrollView::GetClientRect(&rect);
	pDC->FillSolidRect(rect, RGB(250, 250 ,250));
	CPen pen, *oldPen;
	pen.CreatePen(PS_SOLID, 1, RGB(192, 192, 192));
	oldPen = pDC->SelectObject(&pen);
	pDC->MoveTo(rect.right-1, rect.top);
	pDC->LineTo(rect.right-1, rect.bottom);
	pDC->SelectObject(oldPen);
	pen.DeleteObject();
	return TRUE;
}


void CMFCPane::OnButtonSelect()
{
	for (int i =0; i < m_Buttons.GetCount(); i++)
	{
		CGuiButton* pBtn = (CGuiButton*) m_Buttons[i];
		if(pBtn == GetFocus())
		{
			OnButtonClick(i);
			break;
		}
	}
}



void CMFCPane::GetClientRect(LPRECT lpRect)
{
	CRect rect;
	CScrollView::GetClientRect(&rect);
	rect.top += PANE_HEADER_HEIGHT;
	rect.bottom -= PANE_FOOTER_HEIGHT;
	lpRect->left = rect.left;
	lpRect->top = rect.top;
	lpRect->right = rect.right;
	lpRect->bottom = rect.bottom;
}
BOOL CMFCPane::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN)
	{

	}
	return CScrollView::PreTranslateMessage(pMsg);
}




BOOL CMFCPane::CreateView(CGuiView* pView)
{
	if(pView == NULL)
	{
		return FALSE;
	}
	if(!pView->GetSafeHwnd())
		pView->Create(this);
	m_wndView = pView;
	
	if (pView->GetExStyle() & WS_EX_CLIENTEDGE)
	{
		// remove the 3d style from the frame, since the view is
		//  providing it.
		// make sure to recalc the non-client area
		ModifyStyleEx(WS_EX_CLIENTEDGE, 0, SWP_FRAMECHANGED);
	}

	return TRUE;

}
void CMFCPane::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default
	Invalidate(FALSE);
	CScrollView::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CMFCPane::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default
	Invalidate(FALSE);

	CScrollView::OnVScroll(nSBCode, nPos, pScrollBar);
}

BOOL CMFCPane::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	// TODO: Add your message handler code here and/or call default
	Invalidate(FALSE);
	return CScrollView::OnMouseWheel(nFlags, zDelta, pt);
}
