#ifndef HMSFEEPRICESCHEMAVIEW_H
#define HMSFEEPRICESCHEMAVIEW_H

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
#include "GridListView.h"
class CHMSFeePriceSchemaView : public CGuiView{
protected:
	CString	m_szFeePendingID;
	CString	m_szFeeID;
	long	m_nPriceSchemaID;
	long	m_nPriceSchemaLineID;
	long	m_nPendingPriceSchemaID;
	long	m_nPendingPriceSchemaLineID;
public:
	CGuiGroupBox	m_wndSearchInformationGroup;
	CGuiGroupBox	m_wndFeeGroup;
	CGuiGroupBox	m_wndPendingGroup;
	CGuiLabel		m_wndFeeLabel;
	CGuiTextCtrl	m_wndFee;
	CGuiLabel		m_wndExpenseLabel;
	CGuiComboBox	m_wndExpense;
	CGuiButton		m_wndExtra;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGridListView	m_wndPendingList;
	CGridListView	m_wndExpenseList;
	CGridListView	m_wndFeeList;
	CGridListView	m_wndPendingExpenseList;
	CString	m_szFee;
	CString	m_szExpenseKey;
	//void			OnFeeChange(); 
	//void			OnFeeSetfocus(); 
	//void			OnFeeKillfocus(); 
	int			OnFeeCheckValue(); 
	void			OnExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpenseSelendok(); 
	//void			OnExpenseSetfocus(); 
	//void			OnExpenseKillfocus(); 
	long			OnExpenseLoadData(); 
	//void			OnExpenseAddNew(); 
	void			OnExtraSelect(); 
	void			OnConfirmSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	long			OnPendingListLoadData(); 
	void			OnPendingListSelectChange(int nOldItem, int nNewItem); 
	void			OnPendingListDblClick(); 
	int			OnPendingListSetupItem(); 
	long			OnExpenseListLoadData(); 
	void			OnExpenseListSelectChange(int nOldItem, int nNewItem); 
	void			OnExpenseListDblClick(); 
	int			OnExpenseListDeleteItem(); 
	int			OnExpenseListViewHistory();
	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListCopyItem(); 
	int			OnFeeListViewHistory();
	long			OnPendingExpenseListLoadData(); 
	void			OnPendingExpenseListSelectChange(int nOldItem, int nNewItem); 
	void			OnPendingExpenseListDblClick(); 
	int			OnPendingExpenseListDeleteItem(); 
	CHMSFeePriceSchemaView();
	~CHMSFeePriceSchemaView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeePriceSchemaView(); 
	int OnEditHMSFeePriceSchemaView(); 
	int OnDeleteHMSFeePriceSchemaView(); 
	int OnSaveHMSFeePriceSchemaView(); 
	int OnCancelHMSFeePriceSchemaView(); 
	void RefreshData();
};
#endif
