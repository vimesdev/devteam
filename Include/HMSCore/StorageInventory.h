#ifndef STORAGEINVENTORY_H
#define STORAGEINVENTORY_H

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
class AFX_EXT_CLASS CStorageInventory : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndCategoryLabel;
	CGuiGroupBox	m_wndItemInformation;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndExpirationDateLabel;
	CGuiComboBox	m_wndExpirationDate;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndSubTotalLabel;
	CGuiNumberCtrl	m_wndSubTotal;
	CGuiLabel		m_wndTotalExchangeAmountLabel;
	CGuiNumberCtrl	m_wndTotalExchangeAmount;
	CGuiLabel		m_wndTotalAmountSalePriceLabel;
	CGuiNumberCtrl	m_wndTotalAmountSalePrice;
	CString	m_szTypeKey;
	CString	m_szCategoryKey;
	CString	m_szStorageKey;
	CString	m_szExpirationDateKey;
	CString	m_szName;
	double	m_nSubTotal;
	double	m_nTotalExchangeAmount;
	double	m_nTotalAmountSalePrice;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	//void			OnCategoryAddNew(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnExpirationDateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpirationDateSelendok(); 
	//void			OnExpirationDateSetfocus(); 
	//void			OnExpirationDateKillfocus(); 
	long			OnExpirationDateLoadData(); 
	//void			OnExpirationDateAddNew(); 
	void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnSearchSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnSubTotalChange(); 
	//void			OnSubTotalSetfocus(); 
	//void			OnSubTotalKillfocus(); 
	int			OnSubTotalCheckValue(); 
	//void			OnTotalExchangeAmountChange(); 
	//void			OnTotalExchangeAmountSetfocus(); 
	//void			OnTotalExchangeAmountKillfocus(); 
	int			OnTotalExchangeAmountCheckValue(); 
	//void			OnTotalAmountSalePriceChange(); 
	//void			OnTotalAmountSalePriceSetfocus(); 
	//void			OnTotalAmountSalePriceKillfocus(); 
	int			OnTotalAmountSalePriceCheckValue(); 
	CStorageInventory();
	~CStorageInventory();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageInventory(); 
	int OnEditStorageInventory(); 
	int OnDeleteStorageInventory(); 
	int OnSaveStorageInventory(); 
	int OnCancelStorageInventory(); 
	int OnStorageInventoryListLoadData(); 
	void	GetTotalAmounts();
};
#endif
