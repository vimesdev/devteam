#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "HMSPatientProfiles.h"
#include "HMSOutPatientList.h"
#include "HMSInPatientList.h"
#include "HMSAdditionalFeeList.h"
#include "HMSDepositPatientList.h"
#include "HMSTrackingPatientFeeDialog.h"
#include "HMSCashManagerView.h"
#include "DataPurchaseOrderList.h"
#include "HFPayMentOnlineList.h"

#include "POSConnection.h"

//*****************************************
//hfe_type: A, B, C: Phieu tam ung
// D: Phieu mien giam
// E: F: Phieu hoan tra
//*****************************************
class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON		m_hIcon;
	CString		m_szSerialNo;
	long		m_nBookNo;
	long		m_nReceiptNo;
	long		m_nAutoRecvNo;
	CString		m_szInsSerialNo;
	long		m_nInsBookNo;
	long		m_nInsRecvNo;
	long		m_nInsAutoRecvNo;
	long		m_nInvoiceNo;
	CString		m_szRecvDate;
	CString		m_szDepositReceipt;
	CString		m_szDepositEmergency;
	bool		m_bAutoSerial;
	bool		m_bDischarge;
	bool		m_bAutoPrint;
	CString		m_szClientID;
	CString		m_szExtIns;
	
public:

#ifdef HAVE_POS	
	bool	m_bWaitForPayment;
	CPOSConnection	m_pos;
	void	POS_ResetContent();
	bool	POS_GetPaymentState();
	CString	POS_GetBillCode();
	CString	POS_GetAmount();
	CString	POS_GetResultCode();
	CString	POS_GetServiceCode();
	void	POS_BeginWaitForPayment();
	bool	POS_IsWaitForPayment();
#endif
	
	CString	m_szBillCode;
	CString	m_szServiceCode;
	CString	m_szAmount;
	CString	m_szReceiveData;
	CString	m_szResultCode;
	CString	m_szPatientName;

	CString	m_szDepartments;
	CString m_szDeptPayment;
	CString	m_szAutoPrintInvoice;
	CString	m_szAutoPrintDischargeVote;
	CString	m_szPrintGeneralExamCostSheetType;
	CString	m_szPrintAllCostInDischargeReceipt;
	CString	m_szPrintDrugDelivery;
	CString	m_szPrintHemaReceipt;
	CString	m_szPrintDetailDisease;
	CString	m_szReceiptDeptID;
	CString	m_szReceiptMethod;
	CString	m_szViewInsurancePaid;
	CString m_szDiscountPrintReport;
	CString m_szAddonedayoutofhospital; //Tham so cong them 1 ngay ra vien cho bn Object (I,C,D)
	// Hoa don dien tu
	CString m_szElectronicInvoicesConnection; // Tham so ket noi hoa don dien tu
	CString m_szInvUrl;
	CString m_szInvUserID;
	CString m_szInvPassword;
	CString m_szInvPattern;
	CString m_szInvSerial;
	CString m_szInvPattern1; // Mau don thuoc
	CString m_szInvSerial1;
	

	
	int		m_nPrintDepositNumberPage;	//So trang in phieu tam ung
	int		m_nPrintDiscountNumberPage;	//So trang in phieu mien giam
	int		m_nPrintRefundNumberPage;	//So trang in phieu hoan tra
	int		m_nPrintReceiptNumberPage;	//So trang in phieu hoan tra
	int     m_nPrintDetailRefundNumberPage; //So trang in chi tiet phieu chi
	long	m_nPID;
	int		m_nInpatient;
	int		m_nInsOffLinePayment;
	CString	m_szFeeTypes;
	CString	m_szFeeTypesPerm;
	CString	m_szObjectTypeGroup;
	CString m_szPath;
	
	CString	m_szStatus;

	CString	m_szCardNo;
	CString m_szObjectID;

	CString	m_szPaymentMethod;

	BOOL	m_IsC11;
	BOOL	m_IsC12;
	BOOL	m_IsC13;

	bool	m_isInfertility;
	bool	m_isPregnancy;
	BOOL	m_bIsRequest;
	CString m_szRequestDept;


	CHMSPatientProfiles	m_wndPatientFee;
	CHMSOutPatientList	m_wndPatientList;
	CHMSInPatientList	m_wndInPatientList;
	CHMSAdditionalFeeList	m_wndAdditionalFeeList;
	CHMSDepositPatientList	m_wndPatientDepositList;
	CHMSCashManagerView		m_wndCashManager;	
	CDataPurchaseOrderList  m_wndDataPurchaseOrderList;
	CHFPayMentOnlineList m_wndPaymentOnlineList; // danh sach cac hoa don thu bang QR, POS
		
	CMainFrame();
	virtual ~CMainFrame();
	//Kiem tra benh nhan ngoai tru hay noi tru
	bool		IsInPatient();
	
	//Kiem tra benh nhan da ra vien chua
	bool		IsDischarge();
	bool		IsAutoSerialNo();
	bool		IsCheckDrugExist(long nDocno);
	bool		HasPOS();
	void		POSReset();
	bool		IsInfertility() { return m_isInfertility; } 
	CString		GetPaymentMethod();
	

	void	GetSerialInformation();
	CString	GetDepartments(LPCTSTR lpszDepts);
	bool	IsAllowPaymentFees(long nDocumentNo);
	bool	IsFinishAndPaymentFees(long nDocument);
	void	IncreaseReceiptNo(long nCurrReceiptNo);

	void	CreateFees();
	
	void	LoadFeeList(CGridListView* pList, long nDocumentNo, long nInvoiceNo,
	double& nTotalCost, double&  nTotalInsCost, double& nTotalInsPaid, 
	double& nTotalDiffCost, double& nTotalPatPaid, double& nTotalPayable, CString szFilter=_T(""), long nInsInvoice=0, bool bCancel=false, bool bInPackage=false);


	//In giay hen kham lai + benh an dieu tri
	void PrintAppointmentExamine(long nDocNo, bool bPreview=false);
	void PrintTreatment(long nDocNo, bool bPreview=false);

// In phieu thu
	void		PrintInvoice(long nInvoiceNo, bool bPreview=false, bool bDirect=false, int nCount=0);
	void		PrintInvoice_V2(long nInvoiceNo, bool bPreview=false, bool bDirect=false, int nCount=0);
//Ham in hoa don truoc ngay 08/07/2019
	void		PrintInvoice_old(long nInvoiceNo, bool bPreview=false, bool bDirect=false, int nCount=0);
//In hoa don tam ung, hoan ung, bien lan thu tien...	
	void		PrintDeposit(long nInvoiceNo, bool bPreview=true);	
	void		PrintRefund(long nInvoiceNo, bool bPreview=true);
	void		PrintDiscount(long nInvoiceNo, bool bPreview=true);
	void        PrintDetailRefundInvoice(long nInvoiceNo, bool bPreview=true, bool bOtherFee=false);
//In bien lai thu phi
	void		PrintReceipt(long nInvoiceNo, bool bPreview=true);
//In bang ke chi phi kham chua benh
	void		PrintGeneralExaminationCost(long nInvoiceNo, bool bPreview=true);
	void		PrintGeneralExaminationCostA11(long nInvoiceNo, bool bPreview=true);
	void		PrintGeneralExaminationCost2(long nInvoiceNo, bool bPreview=true);
	void		PrintGeneralInPackageCost(long nInvoiceNo, bool bPreview=true);
//In Phieu thanh toan ra vien
	void		PrintDischargeReceipt(CString szDeptID, bool bGeneralCost=false);
	void		PrintServiceDischargeReceiptFromInvoice(long nInvoiceNo);
	void		PrintAllServiceDischargeReceipt(long nDocumentNo);
	void		PrintInsuranceDischargeReceiptFromInvoice(long nInvoiceNo);
	void		PrintPolicyDischargeReceiptFromInvoice(long nInvoiceNo);

	void		PrintDischargeReceiptFromInvoice(long nInvoiceNo, bool bDetailForCost=true, bool bInsObject=false);
	void		PrintDischargeReceiptFromInvoice2(long nInvoiceNo, bool bDetailForCost=true);
	void		PrintDischargeReceiptFromInvoice3(long nInvoiceNo, bool bDetailForCost=true);
	void		PrintDischargeReceiptFromInvoice_New(long nInvoiceNo, bool bDetailForDept=true);
	void		PrintHemaReceipt(long nInvoiceNo);
	void		PrintPrescription(long nInvoiceNo, bool bPreview=false,  bool bDirect=false);
	void		PrintSummarizeExaminationSheet(long nDocumentNo, bool bPrintPrescription, bool bPreview, bool bDirect);
// Hoa don dien tu
	bool PostToInvoice(long nDocumentNo, long nInvoiceNo);
	int	 PostToInvoice(long nDocumentNo, CString szClass, CString szDepttype, CString szType, double nAmount, double nPatpaid);
	bool PostToCancelInvoice(long nDocumentNo, long nInvoiceno);
	bool PostToRefundInvoice(long nDocumentNo, long nInvoiceno);
	bool PostToRefundInvoice(long nDocumentNo, CString szClass, CString szDepttype);
	bool DownloadInvoice(double nInvoiceno);
	bool UpdateUserInvoice(CString szUserID, CString szFullName, CString szPassword);

protected: 
	void OnInitializes();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnFileInvoicesetup();
	afx_msg void OnFileChangepassword();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMenuReports();
	DECLARE_MESSAGE_MAP()
	
public:
	afx_msg void OnFileSetupreceiptdate();
	//afx_msg void OnFileEditfeereceivedate();
	afx_msg void OnFileKeeptrackofpatientfee();
	afx_msg void OnFileSummarypaymentreceipt();
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	LRESULT OnReceiveMessage(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnFileSettingpaymentmethod();
	afx_msg void OnMenuformfootersetup();
	afx_msg void OnMenuElectronicControl();
	afx_msg void OnSettingsSmartCard();
	afx_msg void OnSettingPassDrugCancer();	
	afx_msg void OnSettingComPanyList();
	afx_msg void OnSettingDeptList();
	void OnSmartCardConnected(CString szCardId);
	void OnSmartCardDisconnect();

	afx_msg void OnMenu32861();
};
#endif