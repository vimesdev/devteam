// VIMESAdmissionRegistration.h : main header file for the VIMESAdmissionRegistration application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESAdmissionRegistrationApp:
// See VIMESAdmissionRegistration.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESAdmissionRegistrationApp : public CMFCWinApp
{
public:
	CVIMESAdmissionRegistrationApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESAdmissionRegistrationApp theApp;