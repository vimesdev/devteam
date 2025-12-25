#ifndef HMSTreatmentMAINFRAME_H
#define HMSTreatmentMAINFRAME_H
#include "ChildView.h"
#include "HMSMainFrame.h"
#include "HMSPatientDocument.h"
#include "HMSTreatmentQueue.h"
#include "HMSDailyOrderView.h"
#include "HMSMedicalCabinetDrug.h"
#include <afxcoll.h>
#include "Notification.h"
#include "HMSPatientDocumentEx.h"
#include "HMSServicePackageListView.h"
#include "IVFAppointmentList.h"
#include "IVFLabView.h"
#include "IVFStorageView_v2.h"
#include "HMSSignatureTransfer.h"
#include "EMRPatientList.h"

//Khi goi mot benh nhan vao cac bien nay se duoc gan gia tri trong class CHMSExamine
//va duoc dung chung cho tat ca cac class vi the ta moi khai bao bien toan cuc
//ma benh nhan

#define VM_READONLY 5
typedef struct  tagDAYCOLUMN
{
	CString szDate;
	int nIndex;
}DAYCOLUMN;

typedef struct tagDRUGITEM
{
	CString szItemID;
	double nTotal;
	int nMaxIdx;
}DRUGITEM;

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

	CHMSPatientDocument		m_wndPatientDocument;
	CHMSTreatmentQueue	m_wndTreatmentQueue;
	CHMSDailyOrderView	m_wndDailyDrugOrder;
	CHMSMedicalCabinetDrug		m_wndMedicalCabinetDrug;	
	CHMSPatientDocumentEx	m_wndPatientDocumentEx;
	CHMSServicePackageListView	m_wndServicePackageView;
	CIVFAppointmentList	m_wndAppointmentList;

	CIVFLabView	m_wndLabView;
	CIVFStorageView	m_wndStorageView;
	CIVFStorageView_v2	m_wndStorageView_v2;
	//CHMSBedInformation	m_wndBedInformation;

    CHMSSignatureTransfer m_wndSignatureTransView; // view trinh ky cho lanh dao
                                                   // hoac la truong khoa phong
    CEMRPatientList m_wndSendRecord; // view gui ho so nop KHTH luu tru

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

	long LoadComboBoxList(CGuiComboBox* pCB, CString szKey, CString szTable, CString szFilter=_T(""));
	void	ShowStorageView();
	void	ShowLabList();
	int	LoadIVFLabUser(CWnd* pWnd, CString szKey, CString szFilter=_T(""));
    void OnTabSelectChange(int nOld, int nNew);

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
	afx_msg void OnFileKeeptrackofpatientfee();
	afx_msg void OnCommandSetuptestprofile();
	afx_msg void OnFileDailyfood();
	afx_msg void OnFileOperationfromdept();
	afx_msg void OnFileDailymaterialordersheetthebed();
	afx_msg void OnDrugDailymaterialordersheettheoperation();
	afx_msg void OnFileOperationschedules();
	afx_msg void OnFileBedTracking();
	void	OnCommandMapIndex();
	void	OnCommandMapItemType();
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnFileExporttohl7();
	afx_msg void OnFileOperationgroupsetup();
	afx_msg void OnFileBosungHoantrakhongcobenhnhan();
	afx_msg void OnFileCloseDataForServicePackage();
	afx_msg void OnCommandForminfosetup();
	afx_msg void OnOrderRetailorder();
	afx_msg void OnCommandStorageSetup();
	afx_msg void OnCommandSelectionSetup();
	afx_msg void OnCommandDoctorinfo();

	long	LoadIVFSelectionList(CGuiComboBox* pWnd,CString szSelectionID,  CString szKey, CString szFilter=_T(""));
	CString GetIvfSel(CString szId, CString szCode);
	long	LoadNhanThanhList(CGuiComboBox* pWnd, CString szType, CString szKey, CString szFilter=_T(""));
	long	LoadNhanOngList(CGuiComboBox* pWnd, CString szType, CString szKey, CString szFilter=_T(""));
	int		CreatePopupMenu(CGuiMenu* pMenu, CRect* pRect, CString szItemStr);
	long	LoadThanhList(CGuiComboBox* pWnd, CString szType, CString szKey, CString szFilter=_T(""));
	long	LoadOngList(CGuiComboBox* pWnd, CString szType, CString szKey, CString szFilter=_T(""));
	void	PrintIVFAppointmentSheet(long nDocumentNo, long nOrderId);
	CString	FormatPrintDate(bool bHaveTime=false);
	CString DbfMap2Json(CDbfMap* pMap);
};



#endif