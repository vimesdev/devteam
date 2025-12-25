#ifndef HMSTreatmentMAINFRAME_H
#define HMSTreatmentMAINFRAME_H
#include "ChildView.h"
#include "HMSMainFrame.h"
#include "HMSPatientDocument.h"
#include "HMSTreatmentQueue.h"
#include "HMSDailyDrugOrderDialog.h"
#include "HMSMedicalCabinetDrug.h"

#pragma comment( lib, "../Lib/HMSReportForms.lib" )
//Khi goi mot benh nhan vao cac bien nay se duoc gan gia tri trong class CHMSExamine
//va duoc dung chung cho tat ca cac class vi the ta moi khai bao bien toan cuc
//ma benh nhan

class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CString	m_szDefaultStockID;
	CString m_szFoodTravel;
	
	CString m_szWard;	
	CString	m_szIncTreatDateFlag;
	CString	m_szCreatenewtreantment;
	CString	m_szDailyserdeptid;

//So ho so dieu tri hien tai
	CString	m_szRecordNo;

	CHMSPatientDocument		m_wndPatientDocument;
	CHMSTreatmentQueue	m_wndTreatmentQueue;
	CHMSDailyDrugOrderDialog	m_wndDailyDrugOrder;
	CHMSMedicalCabinetDrug		m_wndMedicalCabinetDrug;	

	//CHMSBedInformation	m_wndBedInformation;

	CMainFrame();
	virtual ~CMainFrame();
	bool	IsPaymentFee(CString szType, long nIdx);
	CString	GetDocumentStatus();
	bool	IsActiveDocument();
	bool	IsPaidFees();
	int		CreateFees(CString szType);
	
protected: 
	void OnInitializes();
// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileSetupprescriptionlist();
	afx_msg void OnCommandMedicalcabinet();
	afx_msg void OnCommandDailydrugorder();
	afx_msg void OnFileChangepassword();	
	afx_msg void OnCommandReturndrugorder();
	afx_msg void OnDrugandmaterialordersheet();
	afx_msg void OnCommandSearchinformationpatient();
	afx_msg void OnFileHelp();
	afx_msg void OnFileReport32825();	
	afx_msg void OnCommandSetupfood32826();
};


#endif