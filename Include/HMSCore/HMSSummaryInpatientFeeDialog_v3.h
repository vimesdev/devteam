#ifndef HMSSummaryInpatientFeeDialogV3_H
#define HMSSummaryInpatientFeeDialogV3_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
#include "GridListView.h"

class CHMSSummaryInpatientFeeDialog_V3 : public CGuiDialog{
protected:
public:
	

	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	int		m_nInsRate;
	CArray<long,long&> m_invoices;

	CString		m_szDepartments;
	CString		m_szStatus;
	CString		m_szIsExtIns;

	CGuiGroupBox	m_wndGeneralCost;
	CGridListView	m_wndList;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;

	CGuiLabel		m_wndTotalPolicyLabel;
	CGuiNumberCtrl	m_wndTotalPolicy;
	
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndTotalInsCostLabel;
	CGuiNumberCtrl	m_wndTotalInsCost;
	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;

	CGuiLabel		m_wndTotalInsUnpaidLabel;
	CGuiNumberCtrl	m_wndTotalInsUnpaid;
	CGuiLabel		m_wndTotalDiffPaidLabel;
	CGuiNumberCtrl	m_wndTotalDiffPaid;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;

	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalFreeLabel;
	CGuiNumberCtrl	m_wndTotalFree;
	CGuiLabel		m_wndSumABLabel;
	CGuiNumberCtrl	m_wndSumAB;

	CGuiLabel		m_wndTotalPaymentLabel;
	CGuiNumberCtrl	m_wndTotalPayment;



	
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	
	CGuiRadioButton	m_wndAllCost;
	CGuiRadioButton	m_wndInsurnaceCost;
	CGuiRadioButton	m_wndServiceCost;

	CGuiCheckBox	m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	//
	CString	m_szReceiptDate;
	CString	m_szStaff;
	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szDepartmentKey;
	BOOL	m_bToDateOption;
	CString	m_szToDate;

	double	m_nTotalCost;
	double	m_nTotalInsCost;
	double	m_nTotalDiscount;
	double	m_nTotalDiffPaid;
	double	m_nTotalInsUnpaid;
	double	m_nTotalDeposit;
	double	m_nTotalPayable;
	double	m_nSumAB;
	double	m_nTotalFree;
	double	m_nTotalPolicy;
	double	m_nTotalPayment;
	double  m_nTotalOtherPaid;

	BOOL	m_bDifferenceChargeFlag;
	BOOL	m_bPatientChargeFlag;
	int		m_nOptList;

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue(); 
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew();
	//void			OnTotalPolicyChange(); 
	//void			OnTotalPolicySetfocus(); 
	//void			OnTotalPolicyKillfocus(); 
	int			OnTotalPolicyCheckValue(); 
	void			OnAddPolicySelect();
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	//void			OnTotalFreeChange(); 
	//void			OnTotalFreeSetfocus(); 
	//void			OnTotalFreeKillfocus(); 
	int			OnTotalFreeCheckValue(); 
	//void			OnInsPaidChange(); 
	//void			OnInsPaidSetfocus(); 
	//void			OnInsPaidKillfocus(); 
	int			OnInsPaidCheckValue(); 
	//void			OnTotalInsUnpaidChange(); 
	//void			OnTotalInsUnpaidSetfocus(); 
	//void			OnTotalInsUnpaidKillfocus(); 
	int			OnTotalInsUnpaidCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	void			OnDifferenceChargeSelect(); 
	void			OnOptListSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnCloseSelect(); 
	CHMSSummaryInpatientFeeDialog_V3(CWnd *pParent);
	~CHMSSummaryInpatientFeeDialog_V3();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSummaryInpatientFeeDialog_V3(); 
	int OnEditHMSSummaryInpatientFeeDialog_V3(); 
	int OnDeleteHMSSummaryInpatientFeeDialog_V3(); 
	int OnSaveHMSSummaryInpatientFeeDialog_V3(); 
	int OnCancelHMSSummaryInpatientFeeDialog_V3(); 
	int OnHMSSummaryInpatientFeeDialog_V3ListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	int OnViewDrugMaterial();
	void	LoadFeeList(CGuiListCtrl* pList, long nDocumentNo, long nInvoiceNo,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalDiscount, 
		double& nTotalDiffCost, double& nTotalInsUnpaid, double& nTotalPayable, CString szFilter=_T(""), long nInsInvoice=0);
	
	void		PrintServiceDischargeReceiptFromInvoice(long nInvoiceNo);
	void		PrintInsuranceDischargeReceiptFromInvoice(long nInvoiceNo);
	void		PrintPolicyDischargeReceiptFromInvoice(long nInvoiceNo);
	void		PrintServiceDischargeReceiptFromInvoice_covid(long nInvoiceNo);
	void		PrintDischargeReceiptFromInvoice(long nInvoiceNo, bool bDetailForCost=true, bool bInsObject=false);	

};
#endif
