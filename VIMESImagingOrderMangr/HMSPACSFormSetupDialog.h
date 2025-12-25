#ifndef HMSPACSFORMSETUPDIALOG_H
#define HMSPACSFORMSETUPDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
#include "PACSInputResult.h"

class CHMSPACSFormSetupDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndParaclinicalInfo;
	CGuiGroupBox	m_wndPACSFromInfo;
	CGuiLabel		m_wndSearchByNameLabel;
	CGuiTextCtrl	m_wndSearchByName;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiListCtrl	m_wndParaclinicalList;
	CGuiListCtrl	m_wndPACSFormList;
	CGuiTabCtrl		m_wndTab;
	CString	m_szSearchByName;
	CString	m_szGroupKey;	
	CString m_szItemID;
	void			OnSearchByNameChange(); 
	//void			OnSearchByNameSetfocus(); 
	//void			OnSearchByNameKillfocus(); 
	int			OnSearchByNameCheckValue(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	long			OnParaclinicalListLoadData(); 
	void			OnParaclinicalListSelectChange(int nOldItem, int nNewItem); 
	void			OnParaclinicalListDblClick(); 
	int			OnParaclinicalListDeleteItem(); 
	long			OnPACSFormListLoadData(); 
	void			OnPACSFormListSelectChange(int nOldItem, int nNewItem); 
	void			OnPACSFormListDblClick(); 
	int			OnPACSFormListDeleteItem(); 
	CHMSPACSFormSetupDialog(CWnd *pParent);
	~CHMSPACSFormSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPACSFormSetupDialog(); 
	int OnEditHMSPACSFormSetupDialog(); 
	int OnDeleteHMSPACSFormSetupDialog(); 
	int OnSaveHMSPACSFormSetupDialog(); 
	int OnCancelHMSPACSFormSetupDialog(); 
	int OnHMSPACSFormSetupDialogListLoadData();

	int OnAddPACSForm();
	int OnLoadCLSList();
	int OnSortIndex();
};
#endif
