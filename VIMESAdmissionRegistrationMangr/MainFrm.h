#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "AdmissionRegistration.h"
#include "AdmissionRegistrationList.h"
#include "HMSDailyFoodOrder.h"
class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:
//	CEMRecordDocument	m_wndRecordDocument;
	CAdmissionRegistration		m_wndAdmissionRegistration;
	CAdmissionRegistrationList	m_wndAdmissionRegistrationList;
	CHMSDailyFoodOrder			m_wndDailyFoodOrder;
	CMainFrame();
	virtual ~CMainFrame();
protected: 
	void OnInitializes();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFileUserSetup();
	afx_msg void OnFileAdmissionFileConfig();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileChangepassword();
	afx_msg void OnMenuAbortedRecord();
};
#endif