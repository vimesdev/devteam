// MainFrm.h : interface of the CMainFrame class
//


#pragma once
#include "HMSMainFrame.h"
#include "ChildView.h"
#include "VisitPatientListView.h"
#include "ServicePackageListView.h"


class CMainFrame : public CHMSMainFrame
{
	
public:

	CVisitPatientListView	m_wndVisitPatientList;
	CServicePackageListView	m_wndServicePackageList;

	CMainFrame();
protected: 
	DECLARE_DYNAMIC(CMainFrame)

// Attributes
public:

// Operations
public:

// Implementation
public:
	virtual ~CMainFrame();

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFileReport();

	DECLARE_MESSAGE_MAP()
};


