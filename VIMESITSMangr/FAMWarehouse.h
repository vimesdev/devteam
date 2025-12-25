#ifndef FAMWAREHOUSE_H
#define FAMWAREHOUSE_H

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
class CFAMWarehouse : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndMaintenance;
	CGuiLabel		m_wndWarehouseTypeLabel;
	CGuiComboBox	m_wndWarehouseType;
	CGuiLabel		m_wndWarehouseLabel;
	CGuiComboBox	m_wndWarehouse;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndRefresh;
	CGuiListCtrl	m_wndItemList;
	CString	m_szWarehouseTypeKey;
	CString	m_szWarehouseKey;
	CString	m_szSearchName;
	CString m_szAssetNo;
	void			OnWarehouseTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseTypeSelendok(); 
	//void			OnWarehouseTypeSetfocus(); 
	//void			OnWarehouseTypeKillfocus(); 
	long			OnWarehouseTypeLoadData(); 
	//void			OnWarehouseTypeAddNew();
	void			OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseSelendok(); 
	//void			OnWarehouseSetfocus(); 
	//void			OnWarehouseKillfocus(); 
	long			OnWarehouseLoadData(); 
	//void			OnWarehouseAddNew(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnRefreshSelect(); 
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	CFAMWarehouse();
	~CFAMWarehouse();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMWarehouse(); 
	int OnEditFAMWarehouse(); 
	int OnDeleteFAMWarehouse(); 
	int OnSaveFAMWarehouse(); 
	int OnCancelFAMWarehouse(); 
	int OnFAMWarehouseListLoadData(); 
};
#endif
