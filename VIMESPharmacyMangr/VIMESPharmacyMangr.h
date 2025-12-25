// VIMESPharmacyMangr.h : main header file for the VIMESPharmacyMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESPharmacyMangrApp:
// See VIMESPharmacyMangr.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESPharmacyMangrApp : public CMFCWinApp
{
public:
	CVIMESPharmacyMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESPharmacyMangrApp theApp;