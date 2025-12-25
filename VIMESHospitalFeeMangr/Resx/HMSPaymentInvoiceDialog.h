#ifndef HMSPAYMENTINVOICEDIALOG_H
#define HMSPAYMENTINVOICEDIALOG_H

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
class CHMSPaymentInvoiceDialog : public CGuiDialog{
protected:
public:
	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndPatientPaidLabel;
	CGuiNumberCtrl	m_wndPatientPaid;
	CGuiLabel		m_wndReceiveDateLabel;
	CGuiGroupBox	m_wndGeneralCost;
	CGuiDateCtrl	m_wndReceiveDate;
	CGuiLabel		m_wndInsurancePaidLabel;
	CGuiNumberCtrl	m_wndInsurancePaid;
	CGuiLabel		m_wndDepositLabel;
	CGuiNumberCtrl	m_wndDeposit;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiComboBox	m_wndSerialNo;
	CGuiLabel		m_wndRemissionLabel;
	CGuiNumberCtrl	m_wndRemission;
	CGuiLabel		m_wndFreeLabel;
	CGuiNumberCtrl	m_wndFree;
	CGuiLabel		m_wndReceiveNoLabel;
	CGuiNumberCtrl	m_wndReceiveNo;
	CGuiLabel		m_wndDiffrencePaidLabel;
	CGuiNumberCtrl	m_wndDifferencePaid;
	CGuiLabel		m_wndTotalPayableLabel;
	CGuiNumberCtrl	m_wndTotalPayable;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiComboBox	m_wndDescription;
	CGuiCheckBox	m_wndInsuranceUnpaidFilter;
	CGuiCheckBox	m_wndPrintDischargePayment;
	CGuiButton		m_wndPayment;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	long	m_nTotalCost;
	long	m_nPatientPaid;
	CString	m_szReceiveDate;
	long	m_nInsurancePaid;
	long	m_nDeposit;
	CString	m_szSerialNoKey;
	long	m_nRemission;
	long	m_nFree;
	long	m_nReceiveNo;
	long	m_nDifferencePaid;
	long	m_nTotalPayable;
	CString	m_szDescriptionKey;
	BOOL	m_bInsuranceUnpaidFilter;
	BOOL	m_bPrintDischargePayment;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnPatientPaidChange(); 
	//void			OnPatientPaidSetfocus(); 
	//void			OnPatientPaidKillfocus(); 
	int			OnPatientPaidCheckValue(); 
	//void			OnReceiveDateChange(); 
	//void			OnReceiveDateSetfocus(); 
	//void			OnReceiveDateKillfocus(); 
	int			OnReceiveDateCheckValue(); 
	//void			OnInsurancePaidChange(); 
	//void			OnInsurancePaidSetfocus(); 
	//void			OnInsurancePaidKillfocus(); 
	int			OnInsurancePaidCheckValue(); 
	//void			OnDepositChange(); 
	//void			OnDepositSetfocus(); 
	//void			OnDepositKillfocus(); 
	int			OnDepositCheckValue(); 
	void			OnSerialNoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSerialNoSelendok(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	long			OnSerialNoLoadData(); 
	void			OnSerialNoAddNew(); 
	//void			OnRemissionChange(); 
	//void			OnRemissionSetfocus(); 
	//void			OnRemissionKillfocus(); 
	int			OnRemissionCheckValue(); 
	//void			OnFreeChange(); 
	//void			OnFreeSetfocus(); 
	//void			OnFreeKillfocus(); 
	int			OnFreeCheckValue(); 
	//void			OnReceiveNoChange(); 
	//void			OnReceiveNoSetfocus(); 
	//void			OnReceiveNoKillfocus(); 
	int			OnReceiveNoCheckValue(); 
	//void			OnDifferencePaidChange(); 
	//void			OnDifferencePaidSetfocus(); 
	//void			OnDifferencePaidKillfocus(); 
	int			OnDifferencePaidCheckValue(); 
	//void			OnTotalPayableChange(); 
	//void			OnTotalPayableSetfocus(); 
	//void			OnTotalPayableKillfocus(); 
	int			OnTotalPayableCheckValue(); 
	void			OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDescriptionSelendok(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	long			OnDescriptionLoadData(); 
	void			OnDescriptionAddNew(); 
	void			OnInsuranceUnpaidFilterSelect(); 
	void			OnPrintDischargePaymentSelect(); 
	void			OnPaymentSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	bool			OnPaymentFee(); 
	CHMSPaymentInvoiceDialog(CWnd *pParent);
	~CHMSPaymentInvoiceDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPaymentInvoiceDialog(); 
	int OnEditHMSPaymentInvoiceDialog(); 
	int OnDeleteHMSPaymentInvoiceDialog(); 
	int OnSaveHMSPaymentInvoiceDialog(); 
	int OnCancelHMSPaymentInvoiceDialog(); 
	int OnHMSPaymentInvoiceDialogListLoadData(); 
	void RecalcTotal();
};
#endif
