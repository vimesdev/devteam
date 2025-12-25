//*******************************************************************************
// COPYRIGHT NOTES
// ---------------
// This is a part of the BCGControlBar Library
// Copyright (C) 1998-2016 BCGSoft Ltd.
// All rights reserved.
//
// This source code can be used, distributed or modified
// only under terms and conditions 
// of the accompanying license agreement.
//*******************************************************************************

#if !defined(AFX_MFCDATETIMECTRL_H__FEA34C6D_5D34_461C_9403_95C23C0B6F4A__INCLUDED_)
#define AFX_MFCDATETIMECTRL_H__FEA34C6D_5D34_461C_9403_95C23C0B6F4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MFCDateTimeCtrl.h : header file
//

#include <afxcontrolbars.h>
#include "GuiDefs.h"
#include "GuiDateTimeCtrl.h"

#define MAX_PARTS	8

/////////////////////////////////////////////////////////////////////////////
// CMFCDateTimeCtrl window

class AFX_EXT_CLASS CMFCDateTimeCtrl : public CGuiMaskCtrl
{
	DECLARE_DYNAMIC(CMFCDateTimeCtrl)
// Construction
public:
	CMFCDateTimeCtrl();
	~CMFCDateTimeCtrl();
	BOOL IsDroppedDown() { return FALSE;  }
	void	SetState(UINT nFlags, UINT nMask);
	DATE	GetDate();
// Attributes
public:
    
	static const UINT		DTM_SPIN;
	static const UINT		DTM_DATE;
	static const UINT		DTM_TIME;
	static const UINT		DTM_CHECKBOX;
	static const UINT		DTM_DROPCALENDAR;
	static const UINT		DTM_TIME24H;
	static const UINT		DTM_CHECKED;
	static const UINT		DTM_TIME24HBYLOCALE;
	static const UINT		DTM_SECONDS;

// Operations
public:

DECLARE_MESSAGE_MAP()
    afx_msg void OnEnSetfocus();
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDATETIMECTRL_H__FEA34C6D_5D34_461C_9403_95C23C0B6F4A__INCLUDED_)
