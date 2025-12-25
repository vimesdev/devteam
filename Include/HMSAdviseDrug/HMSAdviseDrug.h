// HMSAdviseDrug.h : main header file for the HMSAdviseDrug DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CHMSAdviseDrugApp
// See HMSAdviseDrug.cpp for the implementation of this class
//

class CHMSAdviseDrugApp : public CWinApp
{
public:
	CHMSAdviseDrugApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
