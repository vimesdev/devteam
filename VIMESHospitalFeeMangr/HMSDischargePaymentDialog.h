#ifndef HMSDISCHARGEPAYMENTDIALOG_H
#define HMSDISCHARGEPAYMENTDIALOG_H

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
#include "POSCommDevice.h"
#include "GridListView.h"
#include "HMSBankPaymentInfoDialog.h"

class CHMSDischargePaymentDialog : public CGuiDialog{
protected:
public:
	BANKPAYMENTINFO	m_bankPaymentInfo;
	
	long	m_nPatientNo;
	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	int		m_nObjectID;
	int		m_nInsRate;


	CString		m_szDepartments;
	CString		m_szStatus;
	CString		m_szLocked;
	CString		m_szMaSoThue;

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
	

	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndBankCardInfo;

	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndInsuranceApprove;
	
#ifdef HAVE_POS
	CGuiButton		m_wndPosPayment;
#endif

	CString	m_szReceiptDate;
	CString	m_szStaff;
	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szReasonKey;
	CString	m_szPaymentMethodKey;

	double	m_nTotalCost;
	double	m_nTotalInsCost;
	double	m_nTotalInsPaid;
	double	m_nTotalDiffPaid;
	double	m_nTotalPatPaid;
	double	m_nTotalDeposit;
	double	m_nTotalPayable;
	double	m_nSumAB;
	double	m_nTotalDiscount;
	double	m_nTotalPolicy;
	double	m_nTotalPayment;
	double	m_nOtherPaid;
	double  m_nTtlCost;

	BOOL	m_bDifferenceChargeFlag;
	BOOL	m_bPatientChargeFlag;
	CString m_szDescription;

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


	void			OnReasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReasonSelendok(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	long			OnReasonLoadData(); 
	void			OnReasonAddNew();

	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	void			OnPaymentMethodAddNew();

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
	//void			OnTotalDiscountChange(); 
	//void			OnTotalDiscountSetfocus(); 
	//void			OnTotalDiscountKillfocus(); 
	int			OnTotalDiscountCheckValue(); 
	//void			OnInsPaidChange(); 
	//void			OnInsPaidSetfocus(); 
	//void			OnInsPaidKillfocus(); 
	int			OnInsPaidCheckValue(); 
	//void			OnTotalPatPaidChange(); 
	//void			OnTotalPatPaidSetfocus(); 
	//void			OnTotalPatPaidKillfocus(); 
	int			OnTotalPatPaidCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	void			OnDifferenceChargeSelect(); 	
	//void			OnOtherPaidChange(); 

	//void			OnOtherPaidSetfocus(); 
	//void			OnOtherPaidKillfocus(); 
	int			OnOtherPaidCheckValue(); 

	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnBankCardInfoSelect(); 

	int			OnPrintElectronicInvoice();
	
	void			OnPOSPaymentSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnCloseSelect(); 
	int			OnMarkFreeItems();
	int			OnUnmarkFreeItems();
	void		OnInsuranceApproveDoc();
	void		OnCreateRefund();
	void		OnCreateDiscount();
	void		OnPaymentSourceSelect();
	void		OnPaymentSourceEXSelect();
	void		GetMasterCardInfo();
	void		OnChuyennguonngansachTTbenhnhancovid19Select();	
	void		OnChuyennguonngansachTTbenhnhanquancovid19Select();
	void		OnChuyennguonngansachTTbenhnhancovid19pkSelect();
	void		OnChuyennguonngansachTTbenhnhanquanchitietSelect();
	void		OnChuyennguonngansachTTbenhnhanquanPKchitietSelect();
	void		OnUnUploadtoInsGate();

	CHMSDischargePaymentDialog(CWnd *pParent);
	~CHMSDischargePaymentDialog();
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
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
