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

// MSMTasksPane.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMFCTasksPane window

class CMFCTasksPaneEx : public CMFCTasksPane
{
	DECLARE_DYNAMIC(CMFCTasksPaneEx)

// Construction
public:
	CMFCTasksPaneEx();
	virtual ~CMFCTasksPaneEx();
// Attributes
public:

// Operations
public:

// Implementation
public:
	
	
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	DECLARE_MESSAGE_MAP()
};


