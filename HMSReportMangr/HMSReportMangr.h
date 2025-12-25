// HMSReportMangr.h : main header file for the HMSReportMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CHMSReportMangrApp:
// See HMSReportMangr.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CHMSReportMangrApp : public CMFCWinApp
{
public:
	CHMSReportMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHMSReportMangrApp theApp;