#ifndef PurchaseOrderInvoicePaymentAddDialog_H
#define PurchaseOrderInvoicePaymentAddDialog_H

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
class CPurchaseOrderInvoicePaymentAddDialog : public CGuiDialog{
protected:
public:
	long	m_nID;
	CArray<long, long> m_orders;
	typedef struct tagOrderInfo{
			long	orderid ;
			CString szType;
	}ORDERINFO;
	CArray<ORDERINFO, ORDERINFO& > orderInfo;
	ORDERINFO order;

	CGuiGroupBox	m_wndPaymentInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndAddAll;
	CGuiGroupBox	m_wndPurchaseOrderInformation;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndRemove;
	CGuiButton		m_wndRemoveAll;
	CGuiListCtrl	m_wndPaymentList;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndDiscard;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStorageKey;
	CString	m_szSearch;
	CGuiCheckBox	m_wndReturnOrder;
	BOOL	m_bReturnOrder;
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	int			OnReturnOrderSelect();
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnAddAllSelect(); 
	void			OnAddSelect(); 
	void			OnRemoveSelect(); 
	void			OnRemoveAllSelect(); 
	long			OnPaymentListLoadData(); 
	void			OnPaymentListSelectChange(int nOldItem, int nNewItem); 
	void			OnPaymentListDblClick(); 
	int			OnPaymentListDeleteItem(); 
	void			OnOKSelect(); 
	void			OnDiscardSelect(); 
	CPurchaseOrderInvoicePaymentAddDialog(CWnd *pParent);
	~CPurchaseOrderInvoicePaymentAddDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderInvoicePaymentAddDialog(); 
	int OnEditPurchaseOrderInvoicePaymentAddDialog(); 
	int OnDeletePurchaseOrderInvoicePaymentAddDialog(); 
	int OnSavePurchaseOrderInvoicePaymentAddDialog(); 
	int OnCancelPurchaseOrderInvoicePaymentAddDialog(); 
	int OnPurchaseOrderInvoicePaymentAddDialogListLoadData(); 
};
#endif
