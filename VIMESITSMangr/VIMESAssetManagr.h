// VIMESAssetManagr.h : main header file for the VIMESAssetManagr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CVIMESAssetManagrApp:
// See VIMESAssetManagr.cpp for the implementation of this class
//

class CVIMESAssetManagrApp : public CWinApp
{
public:
	CVIMESAssetManagrApp();
	//CFAMAsset m_wndAsset;
// Overrides
public:
	virtual BOOL InitInstance();
	//virtual BOOL PreTranslateMessage(MSG *pMsg);
// Implementation

public:
	afx_msg void OnAppAbout();
	//afx_msg LRESULT OnMyHotKey(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};

extern CVIMESAssetManagrApp theApp;