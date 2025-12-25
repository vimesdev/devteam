#ifndef MFCWINAPP_H
#define MFCWINAPP_H

#pragma once


#if (_MSC_VER >= 1900)
#include <afxwinappex.h>
typedef CWinAppEx CMainApp;
#else
typedef CWinApp CMainApp;
#endif

class AFX_EXT_CLASS CMFCWinApp : public CMainApp
{
public:

	CMFCWinApp();
	// Overrides
public:
	virtual BOOL InitInstance();
	virtual int	 ExitInstance();
	// Implementation

public:
	DECLARE_MESSAGE_MAP()
};


#endif