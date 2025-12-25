#ifndef IVFSETTINGTHUNGDIALOG_H
#define IVFSETTINGTHUNGDIALOG_H

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
class CIVFSettingThungDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndLocationLabel;
	CGuiComboBox	m_wndLocation;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndMaxCapacityLabel;
	CGuiNumberCtrl	m_wndMaxCapacity;
	CGuiLabel		m_wndNitoDateLabel;
	CGuiDateCtrl	m_wndNitoDate;
	CGuiCheckBox	m_wndIsActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szSearch;
	CString	m_szID;
	CString	m_szCategoryKey;
	CString	m_szLocationKey;
	CString	m_szDescription;
	long	m_nMaxCapacity;
	CString	m_szNitoDate;
	BOOL	m_bIsActive;
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	//void			OnCategoryAddNew(); 
	void			OnLocationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLocationSelendok(); 
	//void			OnLocationSetfocus(); 
	//void			OnLocationKillfocus(); 
	long			OnLocationLoadData(); 
	//void			OnLocationAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnMaxCapacityChange(); 
	//void			OnMaxCapacitySetfocus(); 
	//void			OnMaxCapacityKillfocus(); 
	int			OnMaxCapacityCheckValue(); 
	//void			OnNitoDateChange(); 
	//void			OnNitoDateSetfocus(); 
	//void			OnNitoDateKillfocus(); 
	int			OnNitoDateCheckValue(); 
	void			OnIsActiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CIVFSettingThungDialog(CWnd *pParent);
	~CIVFSettingThungDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFSettingThungDialog(); 
	int OnEditIVFSettingThungDialog(); 
	int OnDeleteIVFSettingThungDialog(); 
	int OnSaveIVFSettingThungDialog(); 
	int OnCancelIVFSettingThungDialog(); 
	int OnIVFSettingThungDialogListLoadData(); 
};
#endif
