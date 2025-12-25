#ifndef HMSDISCHARGEPAYMENTDIALOG_H
#define HMSDISCHARGEPAYMENTDIALOG_H

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
class CHMSDischargePaymentDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGeneralCost;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReasonLabel;
	CGuiComboBox	m_wndReason;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndTotalPolicyLabel;
	CGuiNumberCtrl	m_wndTotalPolicy;
	CGuiButton		m_wndAddPolicy;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndTotalInsCostLabel;
	CGuiNumberCtrl	m_wndTotalInsCost;
	CGuiLabel		m_wndTotalInsPaidLabel;
	CGuiNumberCtrl	m_wndTotalInsPaid;
	CGuiLabel		m_wndTotalPatPaidLabel;
	CGuiNumberCtrl	m_wndTotalPatPaid;
	CGuiLabel		m_wndTotalDiffPaidLabel;
	CGuiNumberCtrl	m_wndTotalDiffPaid;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndTotalDepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;
	CGuiLabel		m_wndSumABLabel;
	CGuiNumberCtrl	m_wndSumAB;
	CGuiLabel		m_wndOtherPaidLabel;
	CGuiNumberCtrl	m_wndOtherPaid;
	CGuiLabel		m_wndTotalPaymentLabel;
	CGuiNumberCtrl	m_wndTotalPayment;
	CGuiCheckBox	m_wndPatientChargeFlag;
	CGuiCheckBox	m_wndDifferenceChargeFlag;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndInsuranceApprove;
	CGuiButton		m_wndPosPayment;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndBankCardInfo;
	CString	m_szReceiptDate;
	CString	m_szStaff;
	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szReasonKey;
	CString	m_szPaymentMethodKey;
	long	m_nTotalPolicy;
	long	m_nTotalCost;
	long	m_nTotalInsCost;
	long	m_nTotalInsPaid;
	long	m_nTotalPatPaid;
	long	m_nTotalDiffPaid;
	long	m_nTotalPayable;
	long	m_nTotalDeposit;
	long	m_nTotalDiscount;
	long	m_nSumAB;
	long	m_nOtherPaid;
	long	m_nTotalPayment;
	BOOL	m_bPatientChargeFlag;
	BOOL	m_bDifferenceChargeFlag;
	CString	m_szDescription;
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
	void			OnReasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReasonSelendok(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	long			OnReasonLoadData(); 
	//void			OnReasonAddNew(); 
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	//void			OnPaymentMethodAddNew(); 
	//void			OnTotalPolicyChange(); 
	//void			OnTotalPolicySetfocus(); 
	//void			OnTotalPolicyKillfocus(); 
	int			OnTotalPolicyCheckValue(); 
	void			OnAddPolicySelect(); 
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
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	//void			OnTotalDiscountChange(); 
	//void			OnTotalDiscountSetfocus(); 
	//void			OnTotalDiscountKillfocus(); 
	int			OnTotalDiscountCheckValue(); 
	//void			OnSumABChange(); 
	//void			OnSumABSetfocus(); 
	//void			OnSumABKillfocus(); 
	int			OnSumABCheckValue(); 
	//void			OnOtherPaidChange(); 
	//void			OnOtherPaidSetfocus(); 
	//void			OnOtherPaidKillfocus(); 
	int			OnOtherPaidCheckValue(); 
	//void			OnTotalPaymentChange(); 
	//void			OnTotalPaymentSetfocus(); 
	//void			OnTotalPaymentKillfocus(); 
	int			OnTotalPaymentCheckValue(); 
	void			OnPatientChargeFlagSelect(); 
	void			OnDifferenceChargeFlagSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnCloseSelect(); 
	void			OnInsuranceApproveSelect(); 
	void			OnPosPaymentSelect(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnBankCardInfoSelect(); 
	CHMSDischargePaymentDialog(CWnd *pParent);
	~CHMSDischargePaymentDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDischargePaymentDialog(); 
	int OnEditHMSDischargePaymentDialog(); 
	int OnDeleteHMSDischargePaymentDialog(); 
	int OnSaveHMSDischargePaymentDialog(); 
	int OnCancelHMSDischargePaymentDialog(); 
	int OnHMSDischargePaymentDialogListLoadData(); 
};
#endif
