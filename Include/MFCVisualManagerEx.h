// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.
#include "icons.h"
#include <afxvisualmanageroffice2003.h>
#pragma once

// MFCVisualManagerEx.h : header file
//

class CMFCVisualManagerEx : public CMFCVisualManagerOffice2003
{
	DECLARE_DYNCREATE(CMFCVisualManagerEx)

// Construction
public:
	CFont m_fIconFont;

	CMFCVisualManagerEx();

	virtual ~CMFCVisualManagerEx();

	virtual void DrawCaptionButton (CDC* pDC, CRect rect, AFX_BUTTON_STATE state, UINT id);

	void SetupMemoryBitmapSize (CDC* pDC, const CSize& size);

	BOOL LoadCaptionButtonsIcons (LPCTSTR lpszID);

	const CSize& GetCaptionButtonsSize () const;
	

	void	DrawIcon(CDC* pDC, IconData icon, CRect rc, COLORREF clr, int nFontSize = 12);
	void	DrawButton(CDC* pDC, IconData icon, LPCTSTR lpszCaption, CRect rc, UINT nStyle, UINT nState, COLORREF clr = RGB(50, 50, 50), COLORREF clrBackground=RGB(235, 235, 235));


	
	
	COLORREF	GetColor(COLORREF clr, UINT state);

public:
	virtual void OnUpdateSystemColors ();

	virtual void OnDrawSeparator (CDC* pDC, CBasePane* pBar,
							  CRect rect, BOOL bHorz);

	virtual COLORREF GetToolbarButtonTextColor (CMFCToolBarButton* pButton,
										 CMFCVisualManager::AFX_BUTTON_STATE state);

	virtual void OnFillBarBackground (CDC* pDC, CBasePane* pBar,
					 CRect rectClient, CRect rectClip, BOOL bNCArea = FALSE);

	virtual void OnFillHighlightedArea (CDC* pDC, CRect rect, 
						 CBrush* pBrush, CMFCToolBarButton* pButton);

	virtual void OnDrawMenuBorder (CDC* pDC, CMFCPopupMenu* pMenu, CRect rect);

	virtual void OnDrawButtonBorder (CDC* pDC,
						 CMFCToolBarButton* pButton, CRect rect, AFX_BUTTON_STATE state);

	virtual void OnHighlightMenuItem (CDC*pDC, CMFCToolBarMenuButton* pButton,
								 CRect rect, COLORREF& clrText);

	virtual void OnDrawComboBorder (CDC* pDC, CRect rect,
									 BOOL bDisabled,
									 BOOL bIsDropped,
									 BOOL bIsHighlighted,
									 CMFCToolBarComboBoxButton* pButton);

	virtual void OnDrawComboDropButton (CDC* pDC, CRect rect,
									 BOOL bDisabled,
									 BOOL bIsDropped,
									 BOOL bIsHighlighted,
									 CMFCToolBarComboBoxButton* pButton);

	virtual void OnFillTasksPaneBackground(CDC* pDC, CRect rectWorkArea);
	virtual void OnFillTasksGroupInterior(CDC* /*pDC*/, CRect /*rect*/, BOOL /*bSpecial*/ = FALSE) {}
	virtual void OnDrawTasksGroupAreaBorder(CDC* /*pDC*/, CRect /*rect*/, BOOL /*bSpecial*/ = FALSE, BOOL /*bNoTitle*/ = FALSE) {}
	virtual void OnDrawTask(CDC* pDC, CMFCTasksPaneTask* pTask, CImageList* pIcons, BOOL bIsHighlighted = FALSE, BOOL bIsSelected = FALSE);
	virtual void OnFillOutlookPageButton(CDC* pDC, const CRect& rect, BOOL bIsHighlighted, BOOL bIsPressed, COLORREF& clrText);
	
	virtual COLORREF OnFillRibbonButton(CDC* pDC, CMFCRibbonButton* pButton);
	virtual COLORREF OnDrawRibbonCategoryTab(CDC* pDC, CMFCRibbonTab* pTab, BOOL bIsActive);
	virtual COLORREF OnDrawPaneCaption(CDC* pDC, CDockablePane* /*pBar*/, BOOL bActive, CRect rectCaption, CRect /*rectButtons*/);
	virtual void OnDrawExpandingBox(CDC* pDC, CRect rect, BOOL bIsOpened, COLORREF colorBox);
	

public:
	CSize	   m_MemorySize;
	CDC 	   m_MemoryDC;
	CBitmap    m_MemoryBitmap;
	BOOL	   m_MemoryFilled;

	CImageList m_CaptionButtonIconst;
	CSize	   m_CaptionButtonSize;

	CBitmap    m_FrameBitmap;
	CBitmap    m_ViewBitmap;

	CBrush	   m_brMenuBarButtonHighlighted;
	COLORREF   m_clrMenuBarButtonBorderHighlighted;

	COLORREF   m_clrMenuBarButtonTextRegular;
	COLORREF   m_clrMenuBarButtonTextPressed;
	COLORREF   m_clrMenuBarButtonTextHighlighted;

	COLORREF   m_clrToolBarButtonTextRegular;
	COLORREF   m_clrToolBarButtonTextPressed;
	COLORREF   m_clrToolBarButtonTextHighlighted;

	COLORREF   m_clrCategorieBarButtonTextRegular;
	COLORREF   m_clrCategorieBarButtonTextPressed;
	COLORREF   m_clrCategorieBarButtonTextHighlighted;

	COLORREF   m_clrToolBarSeparatorS;
	COLORREF   m_clrToolBarSeparatorM;
	COLORREF   m_clrToolBarSeparatorF;

	COLORREF   m_clrComboBoxBorder;

	COLORREF   m_clrComboBoxBtnRegularF;
	COLORREF   m_clrComboBoxBtnRegularL;
	COLORREF   m_clrComboBoxBtnRegularBorder;
	COLORREF   m_clrComboBoxBtnHighlightedF;
	COLORREF   m_clrComboBoxBtnHighlightedL;
	COLORREF   m_clrComboBoxBtnHighlightedBorder;
	COLORREF   m_clrComboBoxBtnPressedF;
	COLORREF   m_clrComboBoxBtnPressedL;
	COLORREF   m_clrComboBoxBtnPressedBorder;

	COLORREF   m_clrCategorieBarButtonBorder;
	COLORREF   m_clrCategorieBarButtonBorderM;
	COLORREF   m_clrCategorieBarButtonLine;
	COLORREF   m_clrCategorieBarButtonF;
	COLORREF   m_clrCategorieBarButtonL;

	CBrush	   m_brLinksBarBack;
	CBrush	   m_brLinksBarButtonHighlighted;
	COLORREF   m_clrLinksBarButtonBorderHighlighted;
};


inline
const CSize&
CMFCVisualManagerEx::GetCaptionButtonsSize () const
{
	return m_CaptionButtonSize;
}


