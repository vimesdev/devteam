// VIMESHMSExamination.h : main header file for the VIMESHMSExamination application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESHMSExaminationApp:
// See VIMESHMSExamination.cpp for the implementation of this class
//
#include "MFCWinApp.h"

class CVIMESHMSExaminationApp : public CMFCWinApp
{
public:
	CVIMESHMSExaminationApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESHMSExaminationApp theApp;
