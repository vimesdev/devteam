#ifndef PurchaseOrderNonstockDialog_H
#define PurchaseOrderNonstockDialog_H

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
#include "PurchaseOrderLinesEx.h"


class CPurchaseOrderNonstockDialog : public CGuiDialog{
protected:
	bool	m_bRefresh;
	bool	m_bNonStock;
	CString	m_szIsConsign;

public:
	CPurchaseOrderLinesEx	m_wndLines;

	CDbfMap			m_purchase_orderTbl;
	long			m_nID;
	long			m_nLineIdx;
	CString			m_szStatus;
	CString			m_szPosted;
	CString			m_szType;
	

	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndPurchaseOrderInformation;
	CGuiLabel		m_wndWarehouseLabel;
	CGuiComboBox	m_wndWarehouse;
	CGuiLabel		m_wndResourceLabel;
	CGuiComboBox	m_wndResource;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndDelivererLabel;
	CGuiComboBox	m_wndDeliverer;
	CGuiLabel		m_wndReceiverLabel;
	CGuiComboBox	m_wndReceiver;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiLabel		m_wndOriginalDocument;
	CGuiLabel		m_wndInvoiceTypeLabel;
	CGuiComboBox	m_wndInvoiceType;
	CGuiLabel		m_wndContractPkgLabel;
	CGuiComboBox	m_wndContractPkg;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiTextCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndVATLabel;
	CGuiComboBox	m_wndVAT;
	CGuiTabCtrl	m_wndTab;
	CGuiLabel		m_wndTotalLinesLabel;
	CGuiNumberCtrl	m_wndTotalLines;
	CGuiLabel		m_wndNetAmountLabel;
	CGuiNumberCtrl	m_wndNetAmount;
	CGuiLabel		m_wndTaxesAmountLabel;
	CGuiNumberCtrl	m_wndTaxesAmount;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndClose;
	CString	m_szWarehouseKey;
	CString	m_szResourceKey;
	CString	m_szSupplierKey;
	CString	m_szDelivererKey;
	CString	m_szReceiverKey;
	CString	m_szDescription;
	CString	m_szReference;
	CString	m_szInvoiceTypeKey;
	CString	m_szContractPkgKey;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szInvoiceNo;
	CString	m_szInvoiceDate;
	CString	m_szApprovedDate;
	CString m_szCurrencyKey;
	float	m_nExchangeRate;
	CString	m_szAddress;
	
	CString	m_szVATKey;
	long	m_nTotalLines;
	double	m_nNetAmount;
	double	m_nTaxesAmount;
	double	m_nTotalAmount;
	double	m_nTotalExchangeAmount;
	CString	m_szDebitAcctKey;
	CString	m_szCreditAcctKey;
	CString	m_szPaymentMethodKey;
	CString	m_szPaymentTermsKey;
	CString	m_szDeliveryMethodKey;
	CString	m_szDeliveryDate;
	CString	m_szDeliveryAddress;
	CString	m_szPartnerType_ID;

	void			OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseSelendok(); 
	//void			OnWarehouseSetfocus(); 
	//void			OnWarehouseKillfocus(); 
	long			OnWarehouseLoadData(); 
	//void			OnWarehouseAddNew(); 
	void			OnResourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResourceSelendok(); 
	//void			OnResourceSetfocus(); 
	//void			OnResourceKillfocus(); 
	long			OnResourceLoadData(); 
	//void			OnResourceAddNew(); 
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
	long		OnDelivererLoadData();
	//void			OnReceiverChange(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	int			OnReceiverCheckValue(); 
	long			OnReceiverLoadData(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue();
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	void			OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInvoiceTypeSelendok(); 
	//void			OnInvoiceTypeSetfocus(); 
	//void			OnInvoiceTypeKillfocus(); 
	long			OnInvoiceTypeLoadData(); 
	//void			OnInvoiceTypeAddNew(); 
	void			OnContractPkgSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractPkgSelendok(); 
	//void			OnContractPkgSetfocus(); 
	//void			OnContractPkgKillfocus(); 
	long			OnContractPkgLoadData(); 
	//void			OnContractPkgAddNew(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	void			OnVATSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVATSelendok(); 
	//void			OnVATSetfocus(); 
	//void			OnVATKillfocus(); 
	long			OnVATLoadData(); 
	//void			OnVATAddNew(); 
	void			OnTabSelectChange(int nOld, int nNew); 
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
	void			OnAddLineSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	bool		IsNonStock() { return m_bNonStock; }
	bool		IsConsign();
	CPurchaseOrderNonstockDialog(CWnd *pParent, int nMode, bool bNonStock=false);
	~CPurchaseOrderNonstockDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderNonstockDialog(); 
	int OnEditPurchaseOrderNonstockDialog(); 
	int OnDeletePurchaseOrderNonstockDialog(); 
	int OnSavePurchaseOrderNonstockDialog(); 
	int OnDiscardPurchaseOrderNonstockDialog(); 
	int OnPurchaseOrderNonstockDialogListLoadData(); 
	void CreateTabViews();
	void	RecalcAmount();
	void	Refresh();
	void	GetDefaultPerson();
	BOOL PreTranslateMessage(MSG *pmsg);
};
#endif
