///////////////////////////////////////////////////////////////////////////////
//
// ListBoxXP.cpp : implementation file
//
///////////////////////////////////////////////////////////////////////////////

#include "ListNotification.h"
#include "GuiDefs.h"
#include "GuiUtils.h"


////////////////////////////////////////////////////////////////////////////////
CListNotification::CListNotification ()
{
}

////////////////////////////////////////////////////////////////////////////////
CListNotification::~CListNotification ()
{
}



////////////////////////////////////////////////////////////////////////////////
void CListNotification::PreSubclassWindow ()
{
    ModifyStyleEx (WS_EX_CLIENTEDGE, 0);
    ModifyStyle (0, WS_BORDER|WS_VSCROLL, SWP_FRAMECHANGED);
	ModifyStyle(0,LBS_OWNERDRAWVARIABLE|LBS_HASSTRINGS);
}

////////////////////////////////////////////////////////////////////////////////
BEGIN_MESSAGE_MAP(CListNotification, CListBox)
    //{{AFX_MSG_MAP(CListNotification)
  //  ON_WM_MOUSEMOVE()
//    ON_WM_NCPAINT()
//	ON_WM_KILLFOCUS()
	//ON_CONTROL_REFLECT(LBN_DBLCLK, OnDblclk)
//	ON_WM_SETFOCUS()
	//ON_CONTROL_REFLECT(LBN_SELCHANGE, OnSelchange)
//	ON_WM_VSCROLL()
//	ON_WM_KEYUP()
	ON_WM_KEYDOWN()
	ON_WM_HSCROLL()
	//}}AFX_MSG_MAP
//    ON_WM_MOUSEOUT()
END_MESSAGE_MAP()


BOOL CListNotification::Create(CWnd *pParent, int x, int y, int cx, int cy){
	return CListBox::Create(WS_CHILD|WS_VISIBLE|WS_CHILD|WS_BORDER|WS_VSCROLL|LBS_OWNERDRAWVARIABLE | LBS_HASSTRINGS|LBS_MULTIPLESEL, CRect(x, y, cx, cy), pParent, 1000001);
}

////////////////////////////////////////////////////////////////////////////////
void CListNotification::OnMouseMove (UINT, CPoint p)
{
    Default();
}

///////////////////////////////////////////////////////////////////////////////
void CListNotification::OnMouseOut ()
{
}

///////////////////////////////////////////////////////////////////////////////
void CListNotification::OnNcPaint ()
{
    Default();

    CWindowDC cDC (this);
	CRect rc;
	GetWindowRect(&rc);

    CPen pen (PS_SOLID, 1, COLOR_BORDER);

    cDC.SelectObject (::GetStockObject (NULL_BRUSH));
    cDC.Rectangle (0, 0, rc.Width(), rc.Height());
}

void CListNotification::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct) 
{
	ASSERT(lpDrawItemStruct->CtlType == ODT_LISTBOX);
	if(GetCount() <= 0)
		return;

	CString szText;
	GetText(lpDrawItemStruct->itemID,szText);

   CDC dc;

   dc.Attach(lpDrawItemStruct->hDC);

   // Save these value to restore them when done drawing.
   COLORREF crOldTextColor = dc.GetTextColor();
   COLORREF crOldBkColor = dc.GetBkColor();

   // If this item is selected, set the background color  
   // and the text color to appropriate values. Also, erase 
   // rect by filling it with the background color. 
   if ((lpDrawItemStruct->itemAction | ODA_SELECT) &&
      (lpDrawItemStruct->itemState & ODS_SELECTED))
   {
      dc.SetTextColor(::GetSysColor(COLOR_HIGHLIGHTTEXT));
      dc.SetBkColor(::GetSysColor(COLOR_HIGHLIGHT));
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, 
         ::GetSysColor(COLOR_HIGHLIGHT));
   }
   else
   {
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, crOldBkColor);
   }

   // If this item has the focus, draw a red frame around the 
   // item's rect. 
   if ((lpDrawItemStruct->itemAction | ODA_FOCUS) &&
      (lpDrawItemStruct->itemState & ODS_FOCUS))
   {
      CBrush br(RGB(255, 0, 0));
      dc.FrameRect(&lpDrawItemStruct->rcItem, &br);
   }

   CRect rc = lpDrawItemStruct->rcItem;
   rc.top+= 1;
   rc.left += 2;
   DrawHTML(dc.m_hDC, szText, szText.GetLength(), &rc, DT_WORDBREAK);

   // Reset the background color and the text color back to their 
   // original values.
   dc.SetTextColor(crOldTextColor);
   dc.SetBkColor(crOldBkColor);

   dc.Detach();


}

void CListNotification::MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct) 
{
	if(lpMeasureItemStruct->itemID < 0)
		return;
	HDC hDC;
	TEXTMETRIC tm;
	TCHAR szBuf[4096]=_T("");
	::SendMessage(this->m_hWnd, LB_GETTEXT,(WPARAM)lpMeasureItemStruct->itemID,(LPARAM)szBuf);
	hDC =::GetDC(this->m_hWnd);
	RECT r;
	GetItemRect(lpMeasureItemStruct->itemID, &r);
	DrawHTML(hDC, szBuf, _tcslen(szBuf), &r, DT_WORDBREAK|DT_CALCRECT);

	::GetTextMetrics(hDC, &tm);
	lpMeasureItemStruct->itemHeight= r.bottom-r.top+5;
	::ReleaseDC(this->m_hWnd, hDC);
}

UINT CListNotification::CountLines(const TCHAR *szBuf)
{
	const TCHAR * fnd=_tcschr(szBuf,_T('\n'));
	int cnt=0;
	while(fnd)
	{
		cnt++;
		fnd=_tcschr(fnd+1,_T('\n'));
	}
	cnt++;
	return cnt;
}

void CListNotification::EnableItemEditing(BOOL bYes)
{
}

void CListNotification::OnKillFocus(CWnd* pNewWnd) 
{
	CListBox::OnKillFocus(pNewWnd);
}

void CListNotification::OnDblclk() 
{
	BOOL o=0;
	CPoint p;
//	GetCursorPos(&p);
//	ScreenToClient(&p);
}

void CListNotification::OnSetFocus(CWnd* pOldWnd) 
{
	if(!pOldWnd)
	{
		CListBox::OnSetFocus(pOldWnd);
		return;
	}
	
	CListBox::OnSetFocus(pOldWnd);
}

void CListNotification::OnSelchange() 
{
//	::DestroyWindow(hHelper);
}

void CListNotification::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	CListBox::OnVScroll(nSBCode, nPos, pScrollBar);
}

void CListNotification::OnItemRenamed(UINT Item)
{
}

int CListNotification::VKeyToItem(UINT nKey, UINT nIndex) 
{
	if(nKey==VK_DELETE)
	{
		this->DeleteString(nIndex);
		return -2;
	}
	return -1;
}

int CListNotification::CharToItem(UINT nKey, UINT nIndex) 
{
	if(nKey==VK_DELETE)
	{
		this->DeleteString(nIndex);
		return -2;
	}
	return -1;
}

void CListNotification::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	
	
	CListBox::OnKeyUp(nChar, nRepCnt, nFlags);
}

void CListNotification::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{

	int nSel = GetCurSel();
	if(nSel >= 0){
		UINT nControl = GetKeyState(VK_CONTROL);

		if(nChar == VK_DELETE && (GetKeyState(VK_CONTROL)&0x8000))
		{
			ResetContent();
		}
		else if(nChar == VK_DELETE){
			for (int i = GetCount()-1; i >= 0; i--)
			{
				if(GetSel(i) > 0)
					DeleteString(i);
			}
			SetCurSel(0);
		}
	}
	CListBox::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CListNotification::OnItemAdded(UINT Item)
{

}

void CListNotification::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	
	CListBox::OnHScroll(nSBCode, nPos, pScrollBar);
}

BOOL CListNotification::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Add your specialized code here and/or call the base class
    cs.style |= WS_BORDER | WS_VSCROLL | LBS_OWNERDRAWVARIABLE | LBS_HASSTRINGS;
        
	BOOL bRet =  CListBox::PreCreateWindow(cs);
//	ModifyStyleEx (WS_EX_CLIENTEDGE, 0);
    //ModifyStyle (0, WS_BORDER|WS_VSCROLL, SWP_FRAMECHANGED);
	//ModifyStyle(0,LBS_OWNERDRAWVARIABLE|LBS_HASSTRINGS);
	return bRet;
}
