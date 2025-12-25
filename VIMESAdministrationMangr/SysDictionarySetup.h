#ifndef SYSDICTIONARYSETUP_H
#define SYSDICTIONARYSETUP_H

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
class CSysDictionarySetup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndDictionaryList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiCheckBox	m_wndEnglishLanguage;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndEnglishWordLabel;
	CGuiTextCtrl	m_wndEnglishWord;
	CGuiLabel		m_wndOtherLanguageLabel;
	CGuiTextCtrl	m_wndOtherLanguage;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndDictList;
	CString	m_szSearch;
	BOOL	m_bEnglishLanguage;
	CString	m_szID;
	CString	m_szEnglishWord;
	CString	m_szOtherLanguage;
	CDbfMap	m_sys_dictTbl;
	void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnEnglishLanguageSelect(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnEnglishWordChange(); 
	//void			OnEnglishWordSetfocus(); 
	//void			OnEnglishWordKillfocus(); 
	int			OnEnglishWordCheckValue(); 
	//void			OnOtherLanguageChange(); 
	//void			OnOtherLanguageSetfocus(); 
	//void			OnOtherLanguageKillfocus(); 
	int			OnOtherLanguageCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnDictListLoadData(); 
	void			OnDictListSelectChange(int nOldItem, int nNewItem); 
	void			OnDictListDblClick(); 
	int			OnDictListDeleteItem(); 
	CSysDictionarySetup();
	~CSysDictionarySetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSysDictionarySetup(); 
	int OnEditSysDictionarySetup(); 
	int OnDeleteSysDictionarySetup(); 
	int OnSaveSysDictionarySetup(); 
	int OnCancelSysDictionarySetup(); 
	int OnSysDictionarySetupListLoadData();
	void Refresh();
};
#endif
