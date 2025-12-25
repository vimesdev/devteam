#ifndef PURCHASERETURNORDERDIALOG_H
#define PURCHASERETURNORDERDIALOG_H

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
#include "PurchaseReturnOrderLines.h"
class CPurchaseReturnOrderDialog : public CGuiDialog{
protected:
public:
	long		m_nID;
	long		m_nOrderLine;
	CDbfMap		m_transactionTbl;
	CString		m_szCurrencyKey;
	float		m_nExchangeRate;
	CString		m_szStatus;
	CString		m_szPosted;
	CString		m_szReference;
	CString		m_szAddress;
	CString		m_szNote;
	CString		m_szType;
	double		m_nTotalExchangeAmount;
	int			m_nTaxID;

	CPurchaseReturnOrderLines	m_wndLines;

	CGuiGroupBox	m_wndPurchaseOrderInformation;
	CGuiGroupBox	m_wndSupplierInformation;
	CGuiLabel		m_wndWarehouseLabel;
	CGuiComboBox	m_wndWarehouse;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndDelivererLabel;
	CGuiTextCtrl	m_wndDeliverer;
	CGuiLabel		m_wndReceiverLabel;
	CGuiTextCtrl	m_wndReceiver;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndApprovedDateLabel;
	CGuiDateTimeCtrl	m_wndApprovedDate;
	CGuiLabel		m_wndTotalLinesLabel;
	CGuiNumberCtrl	m_wndTotalLines;
	CGuiLabel		m_wndNetAmountLabel;
	CGuiNumberCtrl	m_wndNetAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndPayMent;
	CGuiTabCtrl	m_wndTab;
		CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndPaymentDateLabel;
	CGuiDateTimeCtrl	m_wndPaymentDate;
	CString	m_szWarehouseKey;
	CString m_szSourceKey;
	CString	m_szSupplierKey;
	CString	m_szDeliverer;
	CString	m_szReceiver;
	CString	m_szReason;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szApprovedDate;
	long	m_nTotalLines;
	long	m_nNetAmount;
	long	m_nTaxesAmount;
	long	m_nTotalAmount;
	CString	m_szPaymentMethodKey;
	CString	m_szPaymentDate;
	CString m_szPayment;
	BOOL	m_bIsPayment;
	void			OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseSelendok(); 
	//void			OnWarehouseSetfocus(); 
	//void			OnWarehouseKillfocus(); 
	long			OnWarehouseLoadData(); 
	//void			OnWarehouseAddNew(); 
	long			OnSourceLoadData();
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	//void			OnDelivererChange(); 
	//void			OnDelivererSetfocus(); 
	//void			OnDelivererKillfocus(); 
	int			OnDelivererCheckValue(); 
	//void			OnReceiverChange(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	int			OnReceiverCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnApprovedDateChange(); 
	//void			OnApprovedDateSetfocus(); 
	//void			OnApprovedDateKillfocus(); 
	int			OnApprovedDateCheckValue(); 
	//void			OnTotalLinesChange(); 
	//void			OnTotalLinesSetfocus(); 
	//void			OnTotalLinesKillfocus(); 
	int			OnTotalLinesCheckValue(); 
	//void			OnNetAmountChange(); 
	//void			OnNetAmountSetfocus(); 
	//void			OnNetAmountKillfocus(); 
	int			OnNetAmountCheckValue(); 
	//void			OnTaxesAmountChange(); 
	//void			OnTaxesAmountSetfocus(); 
	//void			OnTaxesAmountKillfocus(); 
	int			OnTaxesAmountCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	void			OnAddLineSelect();
	void			OnPayMentSelect();
	void			OnTabSelectChange(int nOld, int nNew); 
		void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	//void			OnPaymentMethodAddNew(); 
	//void			OnPaymentDateChange(); 
	//void			OnPaymentDateSetfocus(); 
	//void			OnPaymentDateKillfocus(); 
	int			OnPaymentDateCheckValue();
	CPurchaseReturnOrderDialog(CWnd *pParent, int nMode);
	~CPurchaseReturnOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseReturnOrderDialog(); 
	int OnEditPurchaseReturnOrderDialog(); 
	int OnDeletePurchaseReturnOrderDialog(); 
	int OnSavePurchaseReturnOrderDialog(); 
	int OnCancelPurchaseReturnOrderDialog(); 
	int OnPurchaseReturnOrderDialogListLoadData(); 
	void	RecalcAmount();
	void	CreateTabViews();	
	BOOL PreTranslateMessage(MSG *pmsg);

};
#endif
