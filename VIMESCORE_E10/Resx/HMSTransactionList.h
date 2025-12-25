#ifndef HMSTRANSACTIONLIST_H
#define HMSTRANSACTIONLIST_H

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
class CHMSTransactionList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndOrderList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTransactionTyleLabel;
	CGuiComboBox	m_wndTransactionType;
	CGuiLabel		m_wndFromStorageLabel;
	CGuiComboBox	m_wndFromStorage;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNO;
	CGuiButton		m_wndRefresh;
	CGuiListCtrl	m_wndList;
	CGuiRadioButton	m_wndAllOrders;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndApproved;
	CGuiButton		m_wndView;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndPrint;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTransactionTypeKey;
	CString	m_szFromStorageKey;
	CString	m_szOrderNO;
	int	m_nAllOrders;
	int	m_nOpening;
	int	m_nApproved;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransactionTypeSelendok(); 
	//void			OnTransactionTypeSetfocus(); 
	//void			OnTransactionTypeKillfocus(); 
	long			OnTransactionTypeLoadData(); 
	//void			OnTransactionTypeAddNew(); 
	void			OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStorageSelendok(); 
	//void			OnFromStorageSetfocus(); 
	//void			OnFromStorageKillfocus(); 
	long			OnFromStorageLoadData(); 
	//void			OnFromStorageAddNew(); 
	//void			OnOrderNOChange(); 
	//void			OnOrderNOSetfocus(); 
	//void			OnOrderNOKillfocus(); 
	int			OnOrderNOCheckValue(); 
	void			OnRefreshSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAllOrdersSelect(); 
	void			OnOpeningSelect(); 
	void			OnApprovedSelect(); 
	void			OnViewSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnPrintSelect(); 
	CHMSTransactionList();
	~CHMSTransactionList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTransactionList(); 
	int OnEditHMSTransactionList(); 
	int OnDeleteHMSTransactionList(); 
	int OnSaveHMSTransactionList(); 
	int OnCancelHMSTransactionList(); 
	int OnHMSTransactionListListLoadData(); 
};
#endif
