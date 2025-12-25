// VIMESGlassShopMangr.h : main header file for the VIMESGlassShopMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESGlassShopMangrApp:
// See VIMESGlassShopMangr.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESGlassShopMangrApp : public CMFCWinApp
{
public:
	CVIMESGlassShopMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESGlassShopMangrApp theApp;
