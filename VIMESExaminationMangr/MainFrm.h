#ifndef HMSEXAMINATIONMAINFRAME_H
#define HMSEXAMINATIONMAINFRAME_H

#include "HMSMainFrame.h"
#include "HMSPatientDocument.h"
#include "HMSExaminationQueue.h"
#include "HMSDailyOrder.h"
#include "HMSPrescriptionGroupDialog.h"
//#include "HMSOperationMaterialOrder.h"
#include "HMSCommanderExamine.h"
#include "HMSMedicalCabinetDrug.h"

#include "HMSAppointmentView.h"
#include "HMSAppointmentScheduleList.h"
#include "HMSAppointmentView_V2.h"
#include "HMSSignatureTransfer.h"

//Neu su dung den led de goi benh nhan vao (Nhi nghe an)
#ifndef HAVE_LED
	//#define HAVE_LED
#endif



class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CString		m_szRecordNo;

	CString		m_szICD10;
	CString		m_szPaymentExamFeeRequest;
	CString		m_szRequestConfirm;
	CString		m_szHaveLed;
	CString		m_szRequestCreateAdmissionVote;
	CString		m_szTreatDeptID;
	CString		m_szHealthExam;
	bool		m_bUseLCD;
	long		m_nDocNo;
	long		m_nPNo;
	int			m_nLimitNumberDoctorExaminedDay; // Gioi han so luong BS kham benh nhan BH trong ngay


	CHMSPatientDocument		m_wndPatientDocument;
	CHMSExaminationQueueList	m_wndExaminationQueue;
	//CHMSOperationMaterialOrder m_wndOperationMaterial;
	CHMSCommanderExamine m_wndCommanderExam;
	CHMSAppointmentView		m_wndAppointment;
	CHMSAppointmentScheduleList	m_wndAppointmentScheduleList;	
	CHMSAppointmentView_V2		m_wndAppointment_V2;
	//Them tab benh an dien tu
	CHMSSignatureView		m_wndSignatureView;
    CHMSSignatureTransfer	m_wndSignatureTransView; // view trinh ky cho lanh dao
                                                   // hoac la truong khoa phong


	CMainFrame();
	virtual ~CMainFrame();
	bool	IsPaymentFee(CString szType, long nIdx);
	bool	IsActiveDocument();
	bool	IsPaidFees();
	bool	m_bExam;
	CString	GetDocumentStatus();
	CString GetCertificateInfor();
	bool	IsUseLCD();
	CString UserC13ExamTab();
	CString IsA11Patient();
	bool	IsDocumentEmpty();

	void	PrintEmergencyPatientListReport(CString szFromDate, CString szToDate, bool bPreview=true);
	void	PrintAdmissionPatientListReport(CString szFromDate, CString szToDate, CString szDeptID, CString szStatus, bool bPreview=true);
	void	PrintAdmissionStatisticForDepartmentPatientListReport(CString szFromDate, CString szToDate, bool bPreview=true);
	void	PrintOperationPatientListReport(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview=true);
	void	PrintGeneralExaminationReport(CString szFromDate, CString szToDate, bool bPreview=true);
	void	PrintGeneralExaminationCostReport(CString szFromDate, CString szToDate, bool bPreview=true);
	void	PrintGeneralParaclinicalCostReport(CString szFromDate, CString szToDate, bool bPreview=true);
	void	PrintGeneralSurgeryCostReport(CString szFromDate, CString szToDate, bool bPreview=true);
	void	PrintGeneralOutpatientTreatReport(CString szFromDate, CString szToDate, bool bPreview=true);

	void	PrintAppointmentSheet(long nDocumentNo);


protected: 
	void OnInitializes();
// Generated message map functions
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFileSetupprescriptionlist();
	afx_msg void OnCommandMedicalcabinet();
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	afx_msg void OnFileChangepassword();
	afx_msg void OnChangeDepartment();	
	afx_msg void OnCommandDrugmaterialordersheet();
	afx_msg void OnCommandSearchinformationpatient();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMenuReportForms();


	
	void	OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);

	afx_msg void OnSettingsSmartCard();
	afx_msg void OnSetUpAppointmentA20();
	afx_msg void OnFileOperationschedules();
	
	void OnSmartCardConnected(CString szCardId);
	void OnSmartCardDisconnect();


	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnCommandTestprofilesetup();
	afx_msg void OnCommandTestprofilesetup32826();
	afx_msg void OnCommandSetupdiagnostic();
	afx_msg void OnFileReturndrugordersheet();
	afx_msg void OnFileHealthexamlist();
	afx_msg void OnFileSelectworkingzone();
	afx_msg void OnFileInventorymanager();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSettingsSetupreportparameter();
	afx_msg void OnFileSetuppartnerlist();
	afx_msg void OnOrderRetailorder();
	afx_msg void OnFileBosungHoanTraKhongcobenhnhan();
	afx_msg void OnFileDailyfood();
	afx_msg void OnCommandReturndrugorder();

	afx_msg void OnSettingsDoctorinfo();
	afx_msg void OnSettingsExamschedule();
	afx_msg void OnSettingsOrgDeptinfo();
    afx_msg void OnDestroy();
};

int	LoadPartnerTypeList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
int LoadDeliveryMethodList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
int LoadPaymentTermList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
int LoadDeliveryTermList(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
#endif