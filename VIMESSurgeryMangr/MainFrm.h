#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "HMSSurgeryDocument.h"
#include "HMSSurgeryQueue.h"
#include "HMSSurgerySchedule.h"
#include "HMSStorageAdjustmentList.h"
#include "HMSSignatureTransfer.h"

typedef struct tagCOMPANYINFO
{
	CString sc_name;
	CString sc_pname;
}
COMPANYINFO;

class CMainFrame : public CHMSMainFrame
{

	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;
public:
	CDb*		m_serverdb;
	CString		m_szxHost;
	CString		m_szxDatabase;
	CString		m_szDepartment;
	CString     m_szValidDate;

	bool		m_bServerConnnected;
	int			m_nTabIndex;
	int         m_nIsOutPatient;
	bool        m_bIsOldPatient;
	long		m_nDocNo;
	long		m_nPNo;

	COMPANYINFO m_CompanyInfo;
	
	CHMSSurgeryDocument	m_wndSurgeryDocument;
	CHMSurgeryQueue	m_wndSurgeryQueue;
	CHMSSurgerySchedule m_wndSurgerySchedule;
	CHMSStorageAdjustmentList m_wndStorageAdjustmentList;
    CHMSSignatureTransfer m_wndTrinhKy;

	CMainFrame();
	virtual ~CMainFrame();
	CString		GetDoctorName(CString szUserId, bool bFirstName=false);
	BOOL		CheckVersion(CString szModuleID);
protected: 
	
	void OnInitializes();
	void	OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFileChangePassword();
	afx_msg void OnSetupOperationType();
	afx_msg void OnSetupAnaestheticMethod();
	afx_msg void OnSetupAnesthesiaMethod();
	afx_msg void OnSetupSurgeryTable();
	afx_msg void OnSetupHitechOperation();
	afx_msg void OnFileStockinvenntory();
	afx_msg void OnReportListofpatientsurgeryreport();
	afx_msg void OnReportDutiesreport();
	afx_msg void OnReportGeneralSurgeryReport();
	afx_msg void OnFileSetupprescriptionlist();
	afx_msg void OnReportListofpatientsurgeryreport_V2();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnReportTheuseofdrugs();
	afx_msg void OnReportTheuseofsyntheticdrugs();
	afx_msg void OnReportListofpatientsusingpsychotropicdrugs();
	afx_msg void OnReportGeneralsurgeryoftenreported();
	afx_msg void OnGeneralsurgeryreportGeneralsurgeryoftenreported();
	afx_msg void OnGeneralsurgeryreportGeneralsurgeryoftenreportednew();
	afx_msg void OnGeneralsurgeryreportGeneralreportonhigh();
	afx_msg void OnGeneralsurgeryreportGeneralreportonmethodsofanesthesia();
	afx_msg void OnMenu();
	afx_msg void OnReportBaocaosuquyettoanvattu();
	bool IsOutPatient(long nDocNo);
	bool IsInPatient();
	bool IsOldPatient();

	afx_msg void OnSetupApplydate();
	afx_msg void OnReportDrugandmaterialsettlementreport();
	afx_msg void OnReportSurgeryschedulereport();
	afx_msg void OnReportSurgeryscheduleAllreport();
	afx_msg void OnFileViewparaclinicalinformation();
	afx_msg void OnCommandMedicalcabinet();
	afx_msg void OnFileDrugmaterialordersheet();
	afx_msg void OnFileReturndrugordersheet();
	afx_msg void OnReportGeneralDepartmentUsage();
	afx_msg void OnReportDrugMaterialUnpick();
	afx_msg void OnReportDebtMaterial();
	afx_msg void OnReportDebtmaterialsummary();
	afx_msg void OnFileStoragedetail();
	afx_msg void OnSettingsDoctorinfo();
	afx_msg void OnReportProductNameQuantityinfo();
	afx_msg void Baocaoptttthuchientaib5();
    bool IsActiveDocument();
};
#endif