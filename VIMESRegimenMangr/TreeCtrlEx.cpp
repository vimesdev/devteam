#include "StdAfx.h"
#include ".\treectrlex.h"

#include "stdafx.h"


IMPLEMENT_DYNAMIC(CTreeCtrlEx, CTreeCtrl)

CTreeCtrlEx::CTreeCtrlEx()
{
	_OnSelItemChangeFnc = NULL;
	_OnDblClickFnc = NULL;
}

CTreeCtrlEx::~CTreeCtrlEx()
{
}

/////////////////////////////////////////////////////////////////////////////
// Properties
/////////////////////////////////////////////////////////////////////////////

void CTreeCtrlEx::SetItemBold(const HTREEITEM hItem, const bool bBold)
{
	SetItemState(hItem, bBold ? TVIS_BOLD: 0, TVIS_BOLD);
}

//////////////////////////////////////////////////////////////////////
//
BOOL CTreeCtrlEx::GetItemBold(const HTREEITEM hItem) const
{
  return (GetItemState(hItem, TVIS_BOLD) & TVIS_BOLD)?true:false;
}



void CTreeCtrlEx::SetItemID(const HTREEITEM hItem, LPCTSTR szID)
{
  // If the color is the text color of the tree, remove the related entry 
  // from the tree.
   sTreeItemProperties treeItemProperty = m_mapTreeItemProperties[hItem];
   _tcscpy(treeItemProperty.id, szID);
   m_mapTreeItemProperties[hItem] = treeItemProperty;
}

void CTreeCtrlEx::SetItemFace(const HTREEITEM hItem, LPCTSTR face)
{
  // If the color is the text color of the tree, remove the related entry 
  // from the tree.
   sTreeItemProperties treeItemProperty = m_mapTreeItemProperties[hItem];
   _tcscpy(treeItemProperty.face, face);
   m_mapTreeItemProperties[hItem] = treeItemProperty;
}


void CTreeCtrlEx::SetItemSize(const HTREEITEM hItem, int size)
{
  // If the color is the text color of the tree, remove the related entry 
  // from the tree.
   sTreeItemProperties treeItemProperty = m_mapTreeItemProperties[hItem];
   treeItemProperty.facesize = size;
   m_mapTreeItemProperties[hItem] = treeItemProperty;
}


//////////////////////////////////////////////////////////////////////
//
void CTreeCtrlEx::SetItemColor(const HTREEITEM hItem, const COLORREF color)
{
  // If the color is the text color of the tree, remove the related entry 
  // from the tree.
  if( color == GetTextColor() )
  {
    m_mapTreeItemProperties.erase( hItem );
  }
  else
  {
    sTreeItemProperties treeItemProperty = m_mapTreeItemProperties[hItem];
    treeItemProperty.color = color;
    m_mapTreeItemProperties[hItem] = treeItemProperty;
  }
}

LPCTSTR CTreeCtrlEx::GetItemID(const HTREEITEM hItem) const
{
  tTreeItemProperties::const_iterator cit = m_mapTreeItemProperties.find( hItem );
  return cit->second.id;
  
}

//////////////////////////////////////////////////////////////////////
//
COLORREF CTreeCtrlEx::GetItemColor(const HTREEITEM hItem) const
{
  tTreeItemProperties::const_iterator cit = m_mapTreeItemProperties.find( hItem );
  if( m_mapTreeItemProperties.end() == cit )
  {
    return GetTextColor();
  }
  else
  {
    return cit->second.color;
  }
}

/////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////

BEGIN_MESSAGE_MAP(CTreeCtrlEx, CTreeCtrl)
  //{{AFX_MSG_MAP(CTreeCtrlEx)
  //ON_WM_PAINT()
  ON_REGISTERED_MESSAGE(WMU_ENABLETREEITEM, OnSetItemColor)
  //}}AFX_MSG_MAP
  ON_WM_CREATE()
  ON_NOTIFY_REFLECT(TVN_SELCHANGED, OnTvnSelchanged)
  ON_NOTIFY_REFLECT(NM_DBLCLK, OnNMDblclk)
END_MESSAGE_MAP()

//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////

void CTreeCtrlEx::OnPaint() 
{
	CPaintDC dc(this);

	// Create a memory DC compatible with the paint DC
	CDC memDC;
	memDC.CreateCompatibleDC(&dc);

	CRect rcClip, rcClient;
	dc.GetClipBox( &rcClip );
	GetClientRect(&rcClient);

	// Select a compatible bitmap into the memory DC
	CBitmap bitmap;
	bitmap.CreateCompatibleBitmap( &dc, rcClient.Width(), rcClient.Height() );
	memDC.SelectObject( &bitmap );
	
	// Set clip region to be same as that in paint DC
	CRgn rgn;
	rgn.CreateRectRgnIndirect( &rcClip );
	memDC.SelectClipRgn(&rgn);
	rgn.DeleteObject();
	
	// First let the control do its default drawing.
	CWnd::DefWindowProc(WM_PAINT, (WPARAM)memDC.m_hDC, 0);

	HTREEITEM hItem = GetFirstVisibleItem();

	int iItemCount = GetVisibleCount() + 1;
	while(hItem && iItemCount--)
	{		
		CRect rect;

		// Do not update selected or drop highlighted items
		UINT selflag = TVIS_DROPHILITED;
		UINT nState;
		nState = GetItemState(hItem, selflag);
		
		if( 0 == (nState & selflag) )
		{
			tTreeItemProperties::const_iterator cit = m_mapTreeItemProperties.find( hItem );
			if( cit != m_mapTreeItemProperties.end() )
			{
					CFont *pFontDC;
					CFont fontDC;
					LOGFONT logfont;
  				// Create a new font.
					CFont *pFont = GetFont();
					pFont->GetLogFont( &logfont );
					  

				// Update if bold.
					if(GetItemBold(hItem)){
						logfont.lfWeight = FW_BOLD;
					}
					else
						logfont.lfWeight = FW_NORMAL;

					_tcscpy(logfont.lfFaceName, cit->second.face);
					logfont.lfHeight = -1*cit->second.facesize;
					
					fontDC.CreateFontIndirect(&logfont);
					pFontDC = memDC.SelectObject(&fontDC );

					COLORREF clrBk = memDC.GetBkColor();
					// Set the color.
					

					if(nState&TVIS_SELECTED)
					{
						memDC.SetBkColor(RGB(170, 210, 255));
						memDC.SetTextColor(RGB(0, 0, 64));
						
					}
					else
						memDC.SetTextColor( cit->second.color);
					CString sItem = GetItemText(hItem);

					GetItemRect(hItem, &rect, TRUE);
					memDC.DrawText(sItem, rect, DT_LEFT|DT_CALCRECT);
					
//					int nMode = memDC.SetBkMode(TRANSPARENT); 
					rect.right += 20;
					rect.bottom +=1;
					memDC.FillSolidRect(rect, memDC.GetBkColor());
				//	memDC.TextOut(rect.left, rect.top, sItem);
					rect.DeflateRect(2, 0, 0, 0);
					memDC.DrawText(sItem, rect, DT_LEFT);
					  
					memDC.SelectObject(pFontDC);
//					memDC.SetBkMode(nMode);
					memDC.SetBkColor(clrBk);
			}

		}
		
		hItem = GetNextVisibleItem(hItem);
	}

	dc.BitBlt(rcClip.left, rcClip.top, rcClip.Width(), rcClip.Height(), &memDC, 
				rcClip.left, rcClip.top, SRCCOPY);

	memDC.DeleteDC();
}

//////////////////////////////////////////////////////////////////////
//
LRESULT CTreeCtrlEx::OnSetItemColor(WPARAM wParam, LPARAM lParam)
{
  // Convert parameters
  HTREEITEM hItem = reinterpret_cast<HTREEITEM>( wParam );
  COLORREF color = (COLORREF)lParam;

  SetItemColor( hItem, color );
  return 1L;
}

int CTreeCtrlEx::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CTreeCtrl::OnCreate(lpCreateStruct) == -1)
		return -1;
//	SetFont(GetParent()->GetFont());
//	CFont font;
//	font.CreatePointFont(10*10, ".VnArial");
//	SetFont(&font);
	return 0;
}

void CTreeCtrlEx::OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	if(pNMTreeView->itemNew.hItem != NULL && _OnSelItemChangeFnc != NULL){
		_OnSelItemChangeFnc(this, pNMTreeView->itemOld.hItem, pNMTreeView->itemNew.hItem);
	}
	*pResult = 0;
}

void CTreeCtrlEx::SetSelChangeCallback(void (*_fnc)(CWnd *pWnd, HTREEITEM oldItem, HTREEITEM newItem)){
	_OnSelItemChangeFnc = _fnc;
}

void CTreeCtrlEx::OnNMDblclk(NMHDR *pNMHDR, LRESULT *pResult)
{
	if(_OnDblClickFnc != NULL){
		HTREEITEM hCurSel = GetNextItem(TVI_ROOT, TVGN_CARET);
		if (hCurSel == NULL)
			return;
		_OnDblClickFnc(this, hCurSel);
	}
	*pResult = 0;
}

void CTreeCtrlEx::SetDblClickCallback(void (*_OnDblClickCallback)(CWnd *pWnd, HTREEITEM hItem)){
	_OnDblClickFnc = _OnDblClickCallback;
}



void CTreeCtrlEx::ExpandItem(HTREEITEM hti, UINT nCode)
{
	bool bOk= true;
	bOk= Expand(hti, nCode) != 0;
	if (bOk)
	{
		HTREEITEM htiChild= GetChildItem(hti);
		if(ItemHasChildren(htiChild)){
			SetItemState(htiChild, TVIS_BOLD, TVIS_BOLD);
		}
		while (htiChild != NULL)
		{
			ExpandItem(htiChild, nCode);

			htiChild= GetNextSiblingItem(htiChild);
		}
	}
}