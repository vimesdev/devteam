#ifndef WardReturnOrder_H
#define WardReturnOrder_H

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

class CWardReturnOrder : public CGuiView{
protected:
public:
	bool		m_bRefresh;
	int			m_nImportStorage;
	long		m_nID;
	long		m_nOrderLine;
	
	CString		m_szCreatedBy;
	CString		m_szStatusDesc;
	CString		m_szStatus;
	CString		m_szPosted;
	CString		m_szOrgID;
	CString		m_szType;

	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndTerms;
	CGuiGroupBox	m_wndSummary;
	CGuiLabel		m_wndTransactionTypeLabel;
	CGuiComboBox	m_wndTransactionType;

	CGuiLabel		m_wndImportStorageLabel;
	CGuiComboBox	m_wndImportStorage;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndOriginalDocument;
	
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiDateTimeCtrl	m_wndApprovedDate;
	CGuiTextCtrl	m_wndNote;

	CGuiLabel		m_wndTotalLinesLabel;
	CGuiNumberCtrl	m_wndTotalLines;
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
	CGuiListCtrl	m_wndList;

	CString	m_szImportStorageKey;
	CString	m_szDescription;
	CString	m_szDepartment;

	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szAccountingDate;
	CString	m_szApprovedDate;
	CString	m_szTransactionTypeKey;
	CString	m_szDepartmentKey;

	long	m_nTotalLines;
	double	m_nTotalAmount;
	CDbfMap	m_transactionTbl;
	void			OnImportStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnImportStorageSelendok(); 
	//void			OnImportStorageSetfocus(); 
	//void			OnImportStorageKillfocus(); 
	long			OnImportStorageLoadData(); 
	//void			OnImportStorageAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnDelivererSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDelivererSelendok(); 
	//void			OnDelivererSetfocus(); 
	//void			OnDelivererKillfocus(); 
	long			OnDelivererLoadData(); 
	//void			OnDelivererAddNew(); 
	void			OnReceiverSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReceiverSelendok(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	long			OnReceiverLoadData(); 
	//void			OnReceiverAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnAccountingDateChange(); 
	//void			OnAccountingDateSetfocus(); 
	//void			OnAccountingDateKillfocus(); 
	int			OnAccountingDateCheckValue(); 
	int			OnApprovedDateCheckValue(); 
	void			OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransactionTypeSelendok(); 
	//void			OnTransactionTypeSetfocus(); 
	//void			OnTransactionTypeKillfocus(); 
	long			OnTransactionTypeLoadData(); 
	//void			OnTransactionTypeAddNew(); 

	void			OnDeliveryObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeliveryObjectSelendok(); 
	//void			OnDeliveryObjectSetfocus(); 
	//void			OnDeliveryObjectKillfocus(); 
	long			OnDeliveryObjectLoadData(); 
	//void			OnDeliveryObjectAddNew(); 

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem(); 
	
	//void			OnTotalLinesChange(); 
	//void			OnTotalLinesSetfocus(); 
	//void			OnTotalLinesKillfocus(); 
	int			OnTotalLinesCheckValue(); 
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
	int				OnAddFromPL();

	void			OnTabSelectChange(int nOld, int nNew); 
	CWardReturnOrder();
	~CWardReturnOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddWardReturnOrder(); 
	int OnEditWardReturnOrder(); 
	int OnDeleteWardReturnOrder(); 
	int OnSaveWardReturnOrder(); 
	int OnDiscardWardReturnOrder(); 
	int OnWardReturnOrderListLoadData(); 
	CString GetOrderStatus();
	bool	IsAllowEdit();
};
#endif
