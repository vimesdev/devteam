// VIMESHMSTreatment.h : main header file for the VIMESHMSTreatment application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESHMSTreatmentApp:
// See VIMESHMSTreatment.cpp for the implementation of this class
//
#include "MFCWinApp.h"
class CVIMESHMSTreatmentApp : public CMFCWinApp
{
public:
	CVIMESHMSTreatmentApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESHMSTreatmentApp theApp;
