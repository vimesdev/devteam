#ifndef HMSTreatmentMAINFRAME_H
#define HMSTreatmentMAINFRAME_H
#include "ChildView.h"
#include "HMSMainFrame.h"
#include "HMSPatientDocument.h"
#include "HMSTreatmentQueue.h"
#include "HMSDailyOrderView.h"
#include "HMSMedicalCabinetDrug.h"
#include "HMSTrackingPatientFeeView.h"
#include <afxcoll.h>
#include "HMSAppointmentView_V2.h"

#include "Notification.h"
#include "HMSPatientDocumentEx.h"
#include "HMSServicePackageListView.h"
#include "HMSSignatureTransfer.h"
#include "EMRPatientList.h"


//Khi goi mot benh nhan vao cac bien nay se duoc gan gia tri trong class CHMSExamine
//va duoc dung chung cho tat ca cac class vi the ta moi khai bao bien toan cuc
//ma benh nhan


typedef struct  tagDAYCOLUMN
{
	CString szDate;
	int nIndex;
} DAYCOLUMN;

typedef struct tagDRUGITEM
{
	CString szItemID;
	double nTotal;
	int nMaxIdx;
} DRUGITEM;





class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CNotification*	m_pWndNotification;
	static UINT StartThread (LPVOID param); //controlling 
	static UINT ShowScheduleThread (LPVOID pParam); //controlling function


	CString	m_szDefaultStockID;
	CString m_szFoodTravel;
	
	CString m_szWard;	
	CString	m_szIncTreatDateFlag;
	CString	m_szCreatenewtreantment;
	CString	m_szDailyserdeptid;
	CString	m_szObjectStockID;
	//So ho so dieu tri hien tai
	CString	m_szRecordNo;
	CString	m_szClosed;
	int		m_nInsOffLinePayment;
	bool	m_bIsSurgeryExamination;
	//Dung cho bac si truc khoi duoc xem toan bo ho so dieu tri cua benh nhan.
	bool	m_bViewAllDocument;
	bool	m_bPrivateNoneView;
	bool	m_bUseCCCDMachine;

	CHMSPatientDocument		m_wndPatientDocument;
	CHMSTreatmentQueue	m_wndTreatmentQueue;
	CHMSDailyOrderView	m_wndDailyDrugOrder;
	CHMSMedicalCabinetDrug		m_wndMedicalCabinetDrug;	
	CHMSPatientDocumentEx	m_wndPatientDocumentEx;
	CHMSServicePackageListView	m_wndServicePackageView;
	//Theo dõi chi phí bệnh nhân trong khoa
	CHMSTrackingPatientFeeView	m_wndTrackingPatientFeeView;
	CHMSAppointmentView_V2	m_wndAppointmentView;

	//CHMSBedInformation	m_wndBedInformation;

	CHMSSignatureTransfer   m_wndSignatureTransView;  // view trinh ky cho lanh dao hoac la truong khoa phong
	CEMRPatientList		m_wndSendRecord;// view gui ho so nop KHTH luu tru




	CMainFrame();
	virtual ~CMainFrame();
	bool	IsPaymentFee(CString szType, long nIdx);
	CString	GetDocumentStatus();
	bool	IsActiveDocument();
	bool	IsPaidFees();
	bool	IsPatientDischarge();
	BOOL    IsOnceRollback(long nDocumentNo);
	//Kiem tra neu ho so da dong thi cac phieu cls, vien phi, thuoc chi load cac order locked='Y';
	bool	IsRecordClosed();


	int		CreateFees(CString szType);
	
	void	ShowNotification();
	void	OnReceiptMessage();
	void	PrintMedicalFile(bool bPreview);
	int		CheckInteraction(long nDocumentNo, CString szOrderDate, long nProduct_id=0);
	CString UserC13ExamTab();
	bool		IsMonDay();
	CString GetAdmitDeptID();
    void	LoadPatientProfile(long nPatientNo, long nDocumentNo, int nRefIdx);

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
	afx_msg void OnChangeDepartment();

	afx_msg void OnCommandReturndrugorder();
	afx_msg void OnDrugandmaterialordersheet();
	afx_msg void OnCommandSearchinformationpatient();
	afx_msg void OnFileHelp();
	afx_msg void OnFileReport32825();	
	afx_msg void OnCommandSetupfood32826();
	afx_msg void OnFileKeeptrackofpatientfee();
	afx_msg void OnCommandSetuptestprofile();
	afx_msg void OnFileDailyfood();
	afx_msg void OnFileOperationfromdept();
	afx_msg void OnFileDailymaterialordersheetthebed();
	afx_msg void OnDrugDailymaterialordersheettheoperation();
	afx_msg void OnFileOperationschedules();
	afx_msg void OnFileOrderSheet();
	afx_msg void OnFileBedTracking();
	afx_msg void OnSettingsOrgDeptinfo();
	afx_msg void OnClose();
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:

	afx_msg void OnFileExporttohl7();
	afx_msg void OnFileOperationgroupsetup();
	afx_msg void OnFileBosungHoantrakhongcobenhnhan();
	afx_msg void OnFileCloseDataForServicePackage();
	afx_msg void OnCommandForminfosetup();
	afx_msg void OnOrderRetailorder();
	//afx_msg void OnDrugDictionarySetup();
	CString DbfMap2Json(CDbfMap* pMap);
	afx_msg void OnCommandDoctorinfo();
	void OnSetupWorkshift();
	void OnOrderPatientHandover();
	afx_msg void OnFileCommandApplytt32forms();
	afx_msg void OnCommandNutritionexam();
	int CheckNutriExamSchedule();
	afx_msg void OnCommandPriceschedulesetup();
	afx_msg void OnCommandSetuptreatdiagram();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnCommandSettupmedicalrecords();
	afx_msg void OnSettingSetuptemplates();
	afx_msg void OnCommandUseCCCDMachine();
	int ApplyInsuranceData(CString szCardNo, JSONVALUE& jData);
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnDestroy();
    afx_msg void OnSettingsSurgeryimagecatalog();
};



#endif