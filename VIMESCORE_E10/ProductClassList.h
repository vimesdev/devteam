#ifndef PRODUCTCLASSLIST_H
#define PRODUCTCLASSLIST_H

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
#include "ProductClassLineInput.h"
class AFX_EXT_CLASS CProductClassList : public CGuiView{
protected:
	CProductClassLineInput m_wndLineInput;
	long	m_nOldSel;
	long	m_nID;
	CString	m_szGroupType;
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndEffectGroupLabel;
	CGuiComboBox	m_wndEffectGroup;
	CGuiLabel		m_wndClassGroupLabel;
	CGuiComboBox	m_wndClassGroup;
	CGuiLabel		m_wndATCCodeLabel;
	CGuiTextCtrl	m_wndATCCode;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndFind;
	CGuiGroupBox	m_wndGenericInformation;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndSetting;
	CGuiCheckBox	m_wndInactive;
	CGuiCheckBox	m_wndICDInteraction;

	CString	m_szEffectGroupKey;
	CString	m_szClassGroupKey;
	CString	m_szATCCode;
	CString	m_szSearchName;
	CDbfMap	m_product_classTbl;
	BOOL	m_bInactive;
	BOOL	m_bICDInteraction;
	void			OnEffectGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEffectGroupSelendok(); 
	//void			OnEffectGroupSetfocus(); 
	//void			OnEffectGroupKillfocus(); 
	long			OnEffectGroupLoadData(); 
	void			OnEffectGroupAddNew(); 
	long			OnClassGroupLoadData(); 
	//void			OnATCCodeChange(); 
	//void			OnATCCodeSetfocus(); 
	//void			OnATCCodeKillfocus(); 
	int			OnATCCodeCheckValue(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnFindSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect();
	void			OnSettingSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem();
	int			OnListEditItem();
	int			OnListDeleteItem(); 
	int			OnListAddICD10Interaction();
	CProductClassList();
	~CProductClassList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductClassList(); 
	int OnEditProductClassList(); 
	int OnDeleteProductClassList(); 
	int OnSaveProductClassList(); 
	int OnCancelProductClassList(); 
	int OnProductClassListListLoadData(); 
	void Refresh(long nID = 0);
	void OnInactiveSelect();
	void OnICDInteractionSelect();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};
#endif
