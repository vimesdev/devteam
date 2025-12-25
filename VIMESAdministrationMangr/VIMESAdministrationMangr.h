// VIMESSystemSetup.h : main header file for the VIMESSystemSetup application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESAdministrationApp:
// See VIMESSystemSetup.cpp for the implementation of this class
//


#include <MFCWinApp.h>

class CVIMESAdministrationApp : public CMFCWinApp
{
public:
	CVIMESAdministrationApp();


// Overrides
public:
	virtual BOOL InitInstance();
// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESAdministrationApp theApp;