#ifndef DATAPURCHASEORDERLIST_H
#define DATAPURCHASEORDERLIST_H

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
#include "GuiView.h"
#include "DbField.h"
class CDataPurchaseOrderList : public CGuiView
{

protected:
public:
	CGuiGroupBox	m_wndQuoteList;
	CGuiGroupBox	m_wndDataInvoice;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndFromDateLabel;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiButton		m_wndOption;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndNonStockFlag;
	CGuiCheckBox	m_wndPaidFlag;
	CGuiCheckBox	m_wndApprovedFlag;
	CGuiCheckBox	m_wndLocked;
	CGuiButton		m_wndView;
	CGuiButton		m_wndData;
	CGuiButton		m_wndPrint;

	CGuiLabel		m_wndTypeCashLabel;
	CGuiComboBox	m_wndTypeCash;
	CGuiLabel		m_wndFromDateCLabel;
	CGuiDateCtrl	m_wndFromDateC;
	CGuiLabel		m_wndToDateCLabel;
	CGuiDateCtrl	m_wndToDateC;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndDataNoLabel;
	CGuiNumberCtrl	m_wndDataNo;
	CGuiButton		m_wndSearchData;
	CGuiListCtrl	m_wndDataInvoiceList;
	CGuiButton		m_wndLockData;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiCheckBox	m_wndNotLocked;

	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStorageKey;
	CString	m_szSupplierKey;
	CString	m_szSearch;
	BOOL	m_bNonStockFlag;
	BOOL	m_bPaidFlag;
	BOOL	m_bApprovedFlag;
	BOOL	m_bLocked;
	BOOL	m_bNotLocked;
	CString			m_szType;
	
	
	CString	m_szTypeCashKey;
	CString	m_szFromDateC;
	CString	m_szToDateC;
	CString	m_szStaff;
	long	m_nDataNo;
	long	m_nCashID;
	double	m_nTotalAmount;

	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue();
	void			OnListCheckAll();
	void			OnListUncheckAll();
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
	void			OnOptionSelect(); 
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnNonStockFlagSelect(); 
	void			OnPaidFlagSelect(); 
	void			OnApprovedFlagSelect(); 
	void			OnLockedSelect(); 
	void			OnViewSelect(); 
	void			OnDataSelect(); 
	void			OnPrintSelect();
	void			OnNotLockedSelect(); 

	void			OnTypeCashSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTypeCashSelendok(); 
	long		OnTypeCashLoadData(); 	
	int			OnFromDateCCheckValue();	
	int			OnToDateCCheckValue(); 	 
	int			OnStaffCheckValue();	
	int			OnDataNoCheckValue();
	int			OnTotalAmountCheckValue();
	void			OnSearchDataSelect();
	void			OnDataInvoiceListSelectChange(int nOldItem, int nNewItem); 
	void			OnDataInvoiceListDblClick(); 
	int			OnDataInvoiceListDeleteItem(); 
	void			OnLockDataSelect();
	long			OnDataInvoiceListLoadData();
	void			OnPrintByCompany();
	void			OnPrintByImportDay();
	CString			GetQueryString();
	CString			GetQueryString1();
	CDataPurchaseOrderList();
	~CDataPurchaseOrderList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddDataPurchaseOrderList(); 
	int OnEditDataPurchaseOrderList(); 
	int OnDeleteDataPurchaseOrderList(); 
	int OnSaveDataPurchaseOrderList(); 
	int OnCancelDataPurchaseOrderList(); 
	int OnDataPurchaseOrderListListLoadData();
	void OnRollBackDataInvoice();
	void OnResizeLayout();
};
#endif
