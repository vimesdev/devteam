#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "HMSMainFrame.h"
#include "HMSHFPatientFee.h"
#include "HMSHFPatientList.h"
typedef struct tagFEEITEM{
	CString	szGroupID;
	CString szID;
	CString szName;
	CString szUnit;
	int		nQuantity;
	double	nPrice;
	double	nInsPrice;
	double  nCost;
	double  nInsPaid;
	double	nDiscount;
	double	nPatpaid;
	double	nPatdebt;
	double	nUnpaid;
	bool	bVisible;
}FEEITEM;

class CMainFrame : public CHMSMainFrame
{
	DECLARE_DYNAMIC(CMainFrame)
	HICON		m_hIcon;
	CString		m_szSerialNo;
	long		m_nBookNo;
	long		m_nRecvNo;
	long		m_nAutoRecvNo;
	CString		m_szInsSerialNo;
	long		m_nInsBookNo;
	long		m_nInsRecvNo;
	long		m_nInsAutoRecvNo;
	CString		m_szRecvDate;
	CString		m_szAdvancePayment;
	CString		m_szAdvanceEmergency;
	bool		m_bAutoSerial;
	CString		m_szClientID;
public:
	
	CString	m_szDepartments;
	CString	m_szAutoPrintInvoice;
	CString	m_szAutoPrintDischargeVote;
	CString	m_szPrintGeneralExamCostSheetType;
	CString	m_szPrintAllCostInDischargePayment;
	CString	m_szPrintDrugDelivery;
	CString	m_szPrintHemaReceipt;
	CString	m_szPrintDetailDisease;
	CString	m_szPaymentDept;
	CString	m_szPaymentMethod;
	CString	m_szViewInsurancePaid;

	long	m_nPID;
	int		m_nInpatient;
	CHMSHFPatientFee	m_wndPatientFee;
	CHMSHFPatientList	m_wndPatientList;
	CMainFrame();
	virtual ~CMainFrame();
	void	GetSerialInformation();
	CString	GetDepartments(LPCTSTR lpszDepts);
	bool	IsAllowDischargePayment(long nDocumentNo);
	bool	IsFinishAndPaymentExaminationCost(long nDocument);
	

//In hoa don tam ung, hoan ung, bien lan thu tien...
	void		PrintInvoice(long nInvoiceNo);
//In bien lai thu phi
	void		PrintReceipt(long nInvoiceNo);
//In bang ke chi phi kham chua benh
	void		PrintGeneralExaminationCost(long nInvoiceNo);
	void		PrintGeneralExaminationCost_New(long nInvoiceNo);
//In Phieu thanh toan ra vien
	void		PrintDischargePayment(CString szDeptID, bool bGeneralCost=false);
	void		PrintDischargePaymentFromInvoice(long nInvoiceNo, bool bDetailForDept=true);
	void		PrintDischargePaymentFromInvoice_New(long nInvoiceNo, bool bDetailForDept=true);
	void		PrintHemaReceipt(long nInvoiceNo);
	
protected: 
	void OnInitializes();
// Generated message map functions
protected:

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileInvoicesetup();
	afx_msg void OnFileChangepassword();
	afx_msg void OnReportsGeneralexaminationcost79areport();
	afx_msg void OnReportsGeneralexaminationcost80areport();
	afx_msg void OnReportsGeneralexaminationcostofPatientsService();
	afx_msg void OnReportsGeneralexaminationcostofPatientsPolicy();
	afx_msg void OnReportsGeneraltreatmentcostsofpatientsservice();
	afx_msg void OnReportsGeneraltreatmentcostsofpatientspolicy();
	afx_msg void OnReportsGeneralexaminationandtreatmentcostsofhospital();
	afx_msg void OnReportsGeneralexaminationcostsforobjects();
	afx_msg void OnReportsGeneraltreatmentcostsforobjects();
	afx_msg void OnReportsAdmissionadvancepaymentpatientlist();
	afx_msg void OnReportsRefundpatientlist();
	afx_msg void OnReportsDiscountpatientlist();
	afx_msg void OnReportsGeneralExaminationCostForInsuranceObject();
	afx_msg void OnReportsGeneralTreatmentCostForInsuranceObject();
	afx_msg void OnReportsGeneralexaminationcostforinsuranceregistrationplace();
	afx_msg void OnReportsGeneralexaminationcostforinsuranceline();
	afx_msg void OnReportsGeneralexaminationcostforinsuranceobjectgroup();
	afx_msg void OnReportsGeneraltreatmentcostforinsuranceobjectgroup();
	afx_msg void OnReportsGeneraltreatmentcostforinsuranceregistrationplace();
	afx_msg void OnReportsGeneraltreatmentcostforinsuranceline();
	afx_msg void OnReportsGeneralexaminationcostsdaily();
	afx_msg void OnMenu();
	afx_msg void OnGroupsofpatientsreportedcostofmedicalinsuranceoutpatientGeneralexaminationcost25areport();
	afx_msg void OnThegroupofpatientsreportingcosthealthinsuranceinpatientGeneraltreatmentcost80areport();
	afx_msg void OnReportsGeneralstatisticsandtechnicalservicesforpatientsusingmedicalinsurance32812();
	afx_msg void OnMenu32813();
	afx_msg void OnReportsTonghopchiphikhamchuabenhvienphitheokhoa();
	afx_msg void OnMenu32815();
	afx_msg void OnReportsDanhsachbenhnhanchuathanhtoanvienphi();
};
#endif