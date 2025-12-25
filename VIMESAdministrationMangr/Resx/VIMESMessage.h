#ifndef VIMESMESSAGE_H
#define VIMESMESSAGE_H

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
class CVIMESMessage : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndMessageList;
	CGuiLabel		m_wndSearchModuleLabel;
	CGuiComboBox	m_wndSearchModule;
	CGuiLabel		m_wndFindNameLabel;
	CGuiTextCtrl	m_wndFindName;
	CGuiListCtrl	m_wndMsgList;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndEnglishMessageLabel;
	CGuiTextCtrl	m_wndEnglishMessage;
	CGuiLabel		m_wndOtherMessageLabel;
	CGuiTextCtrl	m_wndOtherMessage;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szSearchModuleKey;
	CString	m_szFindName;
	long	m_nID;
	CString	m_szModuleKey;
	CString	m_szEnglishMessage;
	CString	m_szOtherMessage;
	CDbfMap	m_vimes_msgTbl;
	void			OnSearchModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchModuleSelendok(); 
	//void			OnSearchModuleSetfocus(); 
	//void			OnSearchModuleKillfocus(); 
	long			OnSearchModuleLoadData(); 
	void			OnSearchModuleAddNew(); 
	//void			OnFindNameChange(); 
	//void			OnFindNameSetfocus(); 
	//void			OnFindNameKillfocus(); 
	int			OnFindNameCheckValue(); 
	long			OnMsgListLoadData(); 
	void			OnMsgListSelectChange(int nOldItem, int nNewItem); 
	void			OnMsgListDblClick(); 
	int			OnMsgListDeleteItem(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	void			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnModuleSelendok(); 
	//void			OnModuleSetfocus(); 
	//void			OnModuleKillfocus(); 
	long			OnModuleLoadData(); 
	void			OnModuleAddNew(); 
	//void			OnEnglishMessageChange(); 
	//void			OnEnglishMessageSetfocus(); 
	//void			OnEnglishMessageKillfocus(); 
	int			OnEnglishMessageCheckValue(); 
	//void			OnOtherMessageChange(); 
	//void			OnOtherMessageSetfocus(); 
	//void			OnOtherMessageKillfocus(); 
	int			OnOtherMessageCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CVIMESMessage();
	~CVIMESMessage();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESMessage(); 
	int OnEditVIMESMessage(); 
	int OnDeleteVIMESMessage(); 
	int OnSaveVIMESMessage(); 
	int OnCancelVIMESMessage(); 
	int OnVIMESMessageListLoadData(); 
};
#endif
