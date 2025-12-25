// VIMESSyncInsurance.h : main header file for the VIMESSyncInsurance application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESSyncInsuranceApp:
// See VIMESSyncInsurance.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESSyncInsuranceApp : public CMFCWinApp
{
public:
	CVIMESSyncInsuranceApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESSyncInsuranceApp theApp;