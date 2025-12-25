// VIMESMaterialMangr.h : main header file for the VIMESMaterialMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESMaterialMangrApp:
// See VIMESMaterialMangr.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESMaterialMangrApp : public CMFCWinApp
{
public:
	CVIMESMaterialMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESMaterialMangrApp theApp;