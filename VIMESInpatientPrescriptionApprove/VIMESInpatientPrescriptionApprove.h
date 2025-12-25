// VIMESInpatientPrescriptionApprove.h : main header file for the VIMESInpatientPrescriptionApprove application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESInpatientPrescriptionApproveApp:
// See VIMESInpatientPrescriptionApprove.cpp for the implementation of this class
//
#include <MFCWinApp.h>
class CVIMESInpatientPrescriptionApproveApp : public CMFCWinApp
{
public:
	CVIMESInpatientPrescriptionApproveApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVIMESInpatientPrescriptionApproveApp theApp;