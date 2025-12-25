#ifndef FAMLISTSETUPDIALOG_H
#define FAMLISTSETUPDIALOG_H

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
class CFAMListSetupDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSetupListInfo;
	CGuiGroupBox	m_wndItemInfo;
	CGuiGroupBox	m_wndDetailInfo;
	CGuiListCtrl	m_wndSetupList;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiListCtrl	m_wndItemList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szSearchName;
	CString	m_szID;
	CString	m_szName;

	CString m_szTableName;
	CString m_szPrefix;
	int m_nIndex;

	long			OnSetupListLoadData(); 
	void			OnSetupListSelectChange(int nOldItem, int nNewItem); 
	void			OnSetupListDblClick(); 
	int			OnSetupListDeleteItem(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CFAMListSetupDialog(CWnd *pParent);
	~CFAMListSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMListSetupDialog(); 
	int OnEditFAMListSetupDialog(); 
	int OnDeleteFAMListSetupDialog(); 
	int OnSaveFAMListSetupDialog(); 
	int OnCancelFAMListSetupDialog(); 
	int OnFAMListSetupDialogListLoadData();
	void SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);
	int OnAddEntry();
	int OnEditEntry();
	int OnDeleteEntry();
};
#endif
