// HMSHospitalFee.h : main header file for the HMSHospitalFee application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CHMSHospitalFeeApp:
// See HMSHospitalFee.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CHMSHospitalFeeApp : public CMFCWinApp
{
public:
	CHMSHospitalFeeApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CHMSHospitalFeeApp theApp;