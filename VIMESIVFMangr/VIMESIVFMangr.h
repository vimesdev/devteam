// VIMESIVFMangr.h : main header file for the VIMESIVFMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESIVFMangrApp:
// See VIMESIVFMangr.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESIVFMangrApp : public CMFCWinApp
{
public:
	CVIMESIVFMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESIVFMangrApp theApp;
