#ifndef HMSTHIETLAP_MIENGIAM_TIENAN_HAUCAN_H
#define HMSTHIETLAP_MIENGIAM_TIENAN_HAUCAN_H

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
class CHMSThietLap_Miengiam_Tienan_Haucan : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndSearchByNameLabel;
	CGuiTextCtrl	m_wndSearchByName;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscountPercentage;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiCheckBox	m_wndActive;
	CGuiLabel		m_wndTreattimeLabel;
	CGuiNumberCtrl	m_wndTreattime;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szSearchByName;
	CString	m_szID;
	CString	m_szName;
	CString	m_szGroupKey;
	CString	m_szItemKey;
	long	m_nDiscountPercentage;
	long	m_nOrderID;
	long	m_nTreattime;
	int		m_nIndex;
	BOOL	m_bActive;
	CDbfMap PASS_FEEFOOD_CHECK_LIST_Tbl;
	void			OnSearchByNameChange(); 
	//void			OnSearchByNameSetfocus(); 
	//void			OnSearchByNameKillfocus(); 
	int			OnSearchByNameCheckValue();
	int			OnTreattimeCheckValue();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	int			OnOrderIDCheckValue();
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	//void			OnDiscountPercentageChange(); 
	//void			OnDiscountPercentageSetfocus(); 
	//void			OnDiscountPercentageKillfocus(); 
	int			OnDiscountPercentageCheckValue(); 
	void			OnActiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSThietLap_Miengiam_Tienan_Haucan(CWnd *pParent);
	~CHMSThietLap_Miengiam_Tienan_Haucan();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSThietLap_Miengiam_Tienan_Haucan(); 
	int OnEditCHMSThietLap_Miengiam_Tienan_Haucan(); 
	int OnDeleteCHMSThietLap_Miengiam_Tienan_Haucan(); 
	int OnSaveCHMSThietLap_Miengiam_Tienan_Haucan(); 
	int OnCancelCHMSThietLap_Miengiam_Tienan_Haucan(); 
	int OnCHMSThietLap_Miengiam_Tienan_HaucanListLoadData();
	void SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);
};
#endif