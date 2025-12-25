#ifndef PRODUCTMANUFACTURELIST_H
#define PRODUCTMANUFACTURELIST_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class AFX_EXT_CLASS CAdManufactureList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformations;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndProducingCountryLabel;
	CGuiComboBox	m_wndProducingCountry;
	CGuiButton		m_wndFind;
	CGuiGroupBox	m_wndManufactureInformation;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiCheckBox	m_wndLoadInactive;
	CGuiListCtrl	m_wndList;
	long	m_nID;
	BOOL	m_bLoadInactive;
	CString	m_szName;
	CString	m_szProducingCountryKey;
	CDbfMap	m_manufactureTbl;
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnProducingCountrySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProducingCountrySelendok(); 
	//void			OnProducingCountrySetfocus(); 
	//void			OnProducingCountryKillfocus(); 
	long			OnProducingCountryLoadData(); 
	void			OnProducingCountryAddNew(); 
	void			OnFindSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnLoadInactiveSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick();
	int			OnListAddItem();
	int			OnListEditItem();
	int			OnListDeleteItem(); 
	CAdManufactureList();
	~CAdManufactureList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdManufactureList(); 
	int OnEditAdManufactureList(); 
	int OnDeleteAdManufactureList(); 
	int OnSaveAdManufactureList(); 
	int OnCancelAdManufactureList(); 
	int OnAdManufactureListListLoadData(); 
	void	Refresh(long nID=0);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	void OnResizeLayout();
};
#endif
