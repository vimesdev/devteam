// HMSLAB.h : main header file for the MITECOPCM application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESPACSApp:
// See MITECOPCM.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESPACSApp : public CMFCWinApp
{
public:
	CVIMESPACSApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CVIMESPACSApp theApp;
