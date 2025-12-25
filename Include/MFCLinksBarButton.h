#ifndef MFCLINKSBARBUTTON_H
#define MFCLINKSBARBUTTON_H

// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.
#include "Icons.h"

#pragma once

class AFX_EXT_CLASS CMFCLinksBarButton : public CMFCToolBarButton  
{
	DECLARE_SERIAL(CMFCLinksBarButton)

public:
	IconData	m_icon;
	CRect		m_rect;
	UINT		m_nState;
	CWnd*		m_pWnd;
	
	CString		m_strTooltip;
	CString		m_strName;
	CObList		m_lstPanes;
	COLORREF	m_clrBackground;
	COLORREF	m_clrText;
	

	CMFCLinksBarButton ();
	CMFCLinksBarButton (LPCTSTR lpszLabel, UINT nID);

	virtual ~CMFCLinksBarButton ();
	void	ShowWindow(int nShow);
	
	virtual void OnDraw (CDC* pDC, const CRect& rect, CMFCToolBarImages* pImages,
					 BOOL bHorz = TRUE, BOOL bCustomizeMode = FALSE,
					 BOOL bHighlight = FALSE,
					 BOOL bDrawBorder = TRUE,
					 BOOL bGrayDisabledButtons = TRUE);
	virtual SIZE OnCalculateSize(
		CDC* pDC,
		const CSize& sizeDefault,
		BOOL bHorz);
protected:
	void Initialize ();

	virtual BOOL IsEditable () const
				 {
					 return FALSE;
				 }

	
};

#endif