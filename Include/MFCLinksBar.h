#ifndef MFCLINKBAR_H
#define MFCLINKBAR_H
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#pragma once

// MSMLinksBar.h : header file
//


/////////////////////////////////////////////////////////////////////////////
// CMFCLinksBar window

class AFX_EXT_CLASS CMFCLinksBar : public CMFCToolBar
{
	DECLARE_DYNCREATE(CMFCLinksBar)
// Construction
public:
	CMFCLinksBar ();

	virtual ~CMFCLinksBar ();

// Attributes
public:

// Operations
public:

// Implementation
public:
	virtual int GetRowHeight () const
				{
					return 1;
				}

	void SetCurrentCommand (UINT nCommand)
		 {
			m_CurrentCommand = nCommand;
		 }

	UINT GetCurrentCommand () const
		 {
			return m_CurrentCommand;
		 }

protected:
	DECLARE_MESSAGE_MAP()

private:
	UINT m_CurrentCommand;
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#endif