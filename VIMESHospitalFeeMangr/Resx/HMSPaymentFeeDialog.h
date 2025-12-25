#ifndef HMSPAYMENTFEEDIALOG_H
#define HMSPAYMENTFEEDIALOG_H

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
class CHMSPaymentFeeDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateTimeCtrl	m_wndReceiveDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReasonLabel;
	CGuiComboBox	m_wndReason;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotal DepositLabel;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiLabel		m_wndTotalDiscountLabel;
	CGuiNumberCtrl	m_wndTotalDiscount;
	CGuiLabel		m_wndInsurancePaidLabel;
	CGuiNumberCtrl	m_wndInsurancePaid;
	CGuiLabel		m_wndCoPaymentLabel;
	CGuiNumberCtrl	m_wndCoPayment;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiCheckBox	m_wndDifferenceCharge;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintReceipt;
	CGuiButton		m_wndClose;
	CString	m_szReceiveDate;
	CString	m_szStaff;
	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szReasonKey;
	long	m_nTotalAmount;
	long	m_nTotalDeposit;
	long	m_nTotalDiscount;
	long	m_nInsurancePaid;
	long	m_nCoPayment;
	long	m_nTotalPayable;
	BOOL	m_bDifferenceCharge;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnReceiveDateChange(); 
	//void			OnReceiveDateSetfocus(); 
	//void			OnReceiveDateKillfocus(); 
	int			OnReceiveDateCheckValue(); 
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
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	//void			OnTotalDiscountChange(); 
	//void			OnTotalDiscountSetfocus(); 
	//void			OnTotalDiscountKillfocus(); 
	int			OnTotalDiscountCheckValue(); 
	//void			OnInsurancePaidChange(); 
	//void			OnInsurancePaidSetfocus(); 
	//void			OnInsurancePaidKillfocus(); 
	int			OnInsurancePaidCheckValue(); 
	//void			OnCoPaymentChange(); 
	//void			OnCoPaymentSetfocus(); 
	//void			OnCoPaymentKillfocus(); 
	int			OnCoPaymentCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	void			OnDifferenceChargeSelect(); 
	void			OnApprovalSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintReceiptSelect(); 
	void			OnCloseSelect(); 
	CHMSPaymentFeeDialog(CWnd *pParent);
	~CHMSPaymentFeeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPaymentFeeDialog(); 
	int OnEditHMSPaymentFeeDialog(); 
	int OnDeleteHMSPaymentFeeDialog(); 
	int OnSaveHMSPaymentFeeDialog(); 
	int OnCancelHMSPaymentFeeDialog(); 
	int OnHMSPaymentFeeDialogListLoadData(); 
};
#endif
