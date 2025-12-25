#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "HMSDailyFoodOrderList.h"
#include "HMSDailyFoodOrder.h"
#include "HMSMainFrame.h"
#include "HMSSummaryDailyFoodOrder.h"
#include "SYSPasswordChangeDialog.h"

class CMainFrame : public CHMSMainFrame
{
	CHMSDailyFoodOrderList	m_wndDailyFoodOrderList;
	CHMSDailyFoodOrder		m_wndDailyFoodOrder;
	CHMSSummaryDailyFoodOrder		m_wndSummaryDailyFoodOrder;
	CGuiTabCtrl	m_wndTab;
	
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:

	CMainFrame();
	virtual ~CMainFrame();
	CString m_szLocalHostName;
protected: 
	
	void OnInitializes();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	DECLARE_MESSAGE_MAP()
public:
	void Recurse(LPCTSTR pstr);
	afx_msg void OnFileChangepassword();
	afx_msg void OnFileReports();
	afx_msg void OnFeeFoodSetup();
	afx_msg void OnSetupIndexDept();
};
#endif