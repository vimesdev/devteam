#ifndef HMSPRICESCHEMAFULLVIEW_H
#define HMSPRICESCHEMAFULLVIEW_H

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
#include "GridListCtrl.h"
#include "GridListView.h"
class CHMSPriceSchemaFullView : public CGuiView{
protected:
	long m_nPriceSchemaID;
	long m_nPriceSchemaLineID;
	CString m_szFeeID;
public:
	CGuiGroupBox	m_wndSearchInformationGroup;
	CGuiGroupBox	m_wndExpenseGroup;
	CGuiGroupBox	m_wndPriceSchemaGroup;
	CGuiGroupBox	m_wndFeeGroup;
	CGuiLabel		m_wndSchemaListSearchLabel;
	CGuiTextCtrl	m_wndSchemaListSearch;
	CGuiLabel		m_wndFeeLabel;
	CGuiComboBox	m_wndFee;
	CGuiLabel		m_wndExpenseLabel;
	CGuiComboBox	m_wndExpense;
	CGridListView	m_wndSchemaList;
	CGuiButton		m_wndExtra;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiLabel		m_wndExpenseListSearchLabel;
	CGuiTextCtrl	m_wndExpenseListSearch;
	CGridListView	m_wndExpenseList;
	CGuiLabel		m_wndFeeListSearchLabel;
	CGuiTextCtrl	m_wndFeeListSearch;
	CGridListView	m_wndFeeList;
	CString	m_szSchemaListSearch;
	CString	m_szFeeKey;
	CString	m_szExpenseKey;
	CString	m_szExpenseListSearch;
	CString	m_szFeeListSearch;
	//void			OnSchemaListSearchChange(); 
	//void			OnSchemaListSearchSetfocus(); 
	//void			OnSchemaListSearchKillfocus(); 
	int			OnSchemaListSearchCheckValue(); 
	void			OnFeeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeSelendok(); 
	//void			OnFeeSetfocus(); 
	//void			OnFeeKillfocus(); 
	long			OnFeeLoadData(); 
	//void			OnFeeAddNew(); 
	void			OnExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpenseSelendok(); 
	//void			OnExpenseSetfocus(); 
	//void			OnExpenseKillfocus(); 
	long			OnExpenseLoadData(); 
	//void			OnExpenseAddNew(); 
	long			OnSchemaListLoadData(); 
	void			OnSchemaListSelectChange(int nOldItem, int nNewItem); 
	void			OnSchemaListDblClick(); 
	int			OnSchemaListDeleteItem(); 
	int			OnSchemaListCopyItem(); 
	void			OnExtraSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	//void			OnExpenseListSearchChange(); 
	//void			OnExpenseListSearchSetfocus(); 
	//void			OnExpenseListSearchKillfocus(); 
	int			OnExpenseListSearchCheckValue(); 
	long			OnExpenseListLoadData(); 
	void			OnExpenseListSelectChange(int nOldItem, int nNewItem); 
	void			OnExpenseListDblClick(); 
	int			OnExpenseListDeleteItem(); 
	int			OnExpenseListAddItem(); 
	int			OnExpenseListEditItem(); 
	//void			OnFeeListSearchChange(); 
	//void			OnFeeListSearchSetfocus(); 
	//void			OnFeeListSearchKillfocus(); 
	int			OnFeeListSearchCheckValue(); 
	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListAddItem(); 
	int			OnFeeListDeleteItem(); 
	CHMSPriceSchemaFullView();
	~CHMSPriceSchemaFullView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPriceSchemaFullView(); 
	int OnEditHMSPriceSchemaFullView(); 
	int OnDeleteHMSPriceSchemaFullView(); 
	int OnSaveHMSPriceSchemaFullView(); 
	int OnCancelHMSPriceSchemaFullView(); 
	int OnHMSPriceSchemaFullViewListLoadData(); 
};
#endif
