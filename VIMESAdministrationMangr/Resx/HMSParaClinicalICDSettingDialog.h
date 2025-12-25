#ifndef HMSPARACLINICALICDSETTINGDIALOG_H
#define HMSPARACLINICALICDSETTINGDIALOG_H

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
class CHMSParaClinicalICDSettingDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndParaClinical;
	CGuiGroupBox	m_wndICDGroup;
	CGuiGroupBox	m_wndMappingGroup;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiCheckBox	m_wndMaped;
	CGuiLabel		m_wndChapterLabel;
	CGuiComboBox	m_wndChapter;
	CGuiLabel		m_wndIcdNameLabel;
	CGuiTextCtrl	m_wndIcdName;
	CGuiLabel		m_wndMapNameLabel;
	CGuiTextCtrl	m_wndMapName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndRemove;
	CGuiButton		m_wndClose;
	CString	m_szGroupKey;
	CString	m_szSearch;
	BOOL	m_bMaped;
	CString	m_szChapterKey;
	CString	m_szIcdName;
	CString	m_szMapName;
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnMapedSelect(); 
	void			OnChapterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChapterSelendok(); 
	//void			OnChapterSetfocus(); 
	//void			OnChapterKillfocus(); 
	long			OnChapterLoadData(); 
	//void			OnChapterAddNew(); 
	//void			OnIcdNameChange(); 
	//void			OnIcdNameSetfocus(); 
	//void			OnIcdNameKillfocus(); 
	int			OnIcdNameCheckValue(); 
	//void			OnMapNameChange(); 
	//void			OnMapNameSetfocus(); 
	//void			OnMapNameKillfocus(); 
	int			OnMapNameCheckValue(); 
	void			OnAddSelect(); 
	void			OnRemoveSelect(); 
	void			OnCloseSelect(); 
	CHMSParaClinicalICDSettingDialog(CWnd *pParent);
	~CHMSParaClinicalICDSettingDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaClinicalICDSettingDialog(); 
	int OnEditHMSParaClinicalICDSettingDialog(); 
	int OnDeleteHMSParaClinicalICDSettingDialog(); 
	int OnSaveHMSParaClinicalICDSettingDialog(); 
	int OnCancelHMSParaClinicalICDSettingDialog(); 
	int OnHMSParaClinicalICDSettingDialogListLoadData(); 
};
#endif
