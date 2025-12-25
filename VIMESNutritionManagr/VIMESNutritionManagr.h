// VIMESNutritionManagr.h : main header file for the VIMESNutritionManagr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESNutritionManagrApp:
// See VIMESNutritionManagr.cpp for the implementation of this class
//
#include "MFCWinApp.h"

class CVIMESNutritionManagrApp : public CMFCWinApp
{
public:
	CVIMESNutritionManagrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESNutritionManagrApp theApp;