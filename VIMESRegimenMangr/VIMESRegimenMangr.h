// HMSLAB.h : main header file for the MITECOPCM application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESRegimenMangrApp:
// See MITECOPCM.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESRegimenMangrApp : public CMFCWinApp
{
public:
	CVIMESRegimenMangrApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESRegimenMangrApp theApp;
