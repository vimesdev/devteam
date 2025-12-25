// VIMESVisitPatientsMangr.h : main header file for the VIMESVisitPatientsMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESVisitPatientsMangrApp:
// See VIMESVisitPatientsMangr.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESVisitPatientsMangrApp : public CMFCWinApp
{
public:
	CVIMESVisitPatientsMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESVisitPatientsMangrApp theApp;