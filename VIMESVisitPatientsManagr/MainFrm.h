// MainFrm.h : interface of the CMainFrame class
//


#pragma once
#include "HMSMainFrame.h"
#include "ChildView.h"
#include "VisitPatientListView.h"
#include "ServicePackageListView.h"
#include "TakeCareServicePackageListView.h"
#include "CustomerVisitListView.h"
#include "CardStorageListView.h"
#include "WeelchairmanagementListView.h"

class CMainFrame : public CHMSMainFrame
{
	
public:

	CVisitPatientListView	m_wndVisitPatientList;
	CServicePackageListView	m_wndServicePackageList;
	CTakeCareServicePackageListView	m_wndTakeCareList;
	CCustomerVisitListView	m_wndCustomerVisitList;
	CWeelchairmanagementListView m_wndCWeelchairmanagementListView;
	CCardStorageListView    m_wndCardStorageListView;

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
	afx_msg void OnFileAddPerformUser();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFilePackagecategorysetup();
	afx_msg void OnFileChangepassword();
};


