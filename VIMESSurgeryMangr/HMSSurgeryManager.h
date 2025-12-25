// HMSSurgeryManager.h : main header file for the HMSSurgeryManager application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CHMSSurgeryManagerApp:
// See HMSSurgeryManager.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CHMSSurgeryManagerApp : public CMFCWinApp
{
public:
	CHMSSurgeryManagerApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHMSSurgeryManagerApp theApp;