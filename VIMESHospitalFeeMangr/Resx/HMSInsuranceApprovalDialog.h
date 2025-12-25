#ifndef HMSINSURANCEAPPROVALDIALOG_H
#define HMSINSURANCEAPPROVALDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
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
class CHMSInsuranceApprovalDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateTimeCtrl	m_wndReceiveDate;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndTotalInsCostLabel;
	CGuiNumberCtrl	m_wndTotalInsCost;
	CGuiLabel		m_wndTotalInsPaidLabel;
	CGuiNumberCtrl	m_wndTotalInsPaid;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndTotalPatPaidLabel;
	CGuiNumberCtrl	m_wndTotalPatPaid;
	CGuiLabel		m_wndTotalDiffPaidLabel;
	CGuiNumberCtrl	m_wndTotalDiffPaid;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndTotal DepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalPolicyLabel;
	CGuiButton		m_wndAddPolicy;
	CGuiNumberCtrl	m_wndTotalPolicy;
	CGuiLabel		m_wndSumABLabel;
	CGuiNumberCtrl	m_wndSumAB;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReasonLabel;
	CGuiComboBox	m_wndReason;
	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;
	CGuiLabel		m_wndTotaPaymentLabel;
	CGuiNumberCtrl	m_wndTotalPayment;
	CGuiCheckBox	m_wndPatientPaidFlag;
	CGuiCheckBox	m_wndDifferenceCharge;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	CString	m_szReceiveDate;
	long	m_nTotalCost;
	long	m_nTotalInsCost;
	long	m_nTotalInsPaid;
	CString	m_szStaff;
	long	m_nTotalPatPaid;
	long	m_nTotalDiffPaid;
	long	m_nTotalPayable;
	CString	m_szSerialNo;
	long	m_nTotalDeposit;
	long	m_nTotalPolicy;
	long	m_nSumAB;
	long	m_nReceiptNo;
	CString	m_szReasonKey;
	long	m_nTotalDiscount;
	long	m_nTotalPayment;
	BOOL	m_bPatientPaidFlag;
	BOOL	m_bDifferenceCharge;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnReceiveDateChange(); 
	//void			OnReceiveDateSetfocus(); 
	//void			OnReceiveDateKillfocus(); 
	int			OnReceiveDateCheckValue(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnTotalInsCostChange(); 
	//void			OnTotalInsCostSetfocus(); 
	//void			OnTotalInsCostKillfocus(); 
	int			OnTotalInsCostCheckValue(); 
	//void			OnTotalInsPaidChange(); 
	//void			OnTotalInsPaidSetfocus(); 
	//void			OnTotalInsPaidKillfocus(); 
	int			OnTotalInsPaidCheckValue(); 
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue(); 
	//void			OnTotalPatPaidChange(); 
	//void			OnTotalPatPaidSetfocus(); 
	//void			OnTotalPatPaidKillfocus(); 
	int			OnTotalPatPaidCheckValue(); 
	//void			OnTotalDiffPaidChange(); 
	//void			OnTotalDiffPaidSetfocus(); 
	//void			OnTotalDiffPaidKillfocus(); 
	int			OnTotalDiffPaidCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	void			OnAddPolicySelect(); 
	//void			OnTotalPolicyChange(); 
	//void			OnTotalPolicySetfocus(); 
	//void			OnTotalPolicyKillfocus(); 
	int			OnTotalPolicyCheckValue(); 
	//void			OnSumABChange(); 
	//void			OnSumABSetfocus(); 
	//void			OnSumABKillfocus(); 
	int			OnSumABCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	void			OnReasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReasonSelendok(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	long			OnReasonLoadData(); 
	//void			OnReasonAddNew(); 
	//void			OnTotalDiscountChange(); 
	//void			OnTotalDiscountSetfocus(); 
	//void			OnTotalDiscountKillfocus(); 
	int			OnTotalDiscountCheckValue(); 
	//void			OnTotalPaymentChange(); 
	//void			OnTotalPaymentSetfocus(); 
	//void			OnTotalPaymentKillfocus(); 
	int			OnTotalPaymentCheckValue(); 
	void			OnPatientPaidFlagSelect(); 
	void			OnDifferenceChargeSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnCloseSelect(); 
	CHMSInsuranceApprovalDialog(CWnd *pParent);
	~CHMSInsuranceApprovalDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInsuranceApprovalDialog(); 
	int OnEditHMSInsuranceApprovalDialog(); 
	int OnDeleteHMSInsuranceApprovalDialog(); 
	int OnSaveHMSInsuranceApprovalDialog(); 
	int OnCancelHMSInsuranceApprovalDialog(); 
	int OnHMSInsuranceApprovalDialogListLoadData(); 
};
#endif
