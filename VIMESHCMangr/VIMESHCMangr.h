// VIMESHCMangr.h : main header file for the VIMESHCMangr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


#include <MFCWinApp.h>

class CVIMESHCMangrApp : public CMFCWinApp
{
public:
	CVIMESHCMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESHCMangrApp theApp;