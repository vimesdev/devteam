#ifndef AdBusinessPartnerListDialog_H
#define AdBusinessPartnerListDialog_H

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
#include "AdBusinessPartnerContractList.h"
#include "AdBusinessPartnerEmplList.h"
#include "AdBusinessPartnerContractDtlDialog.h"
class CAdBusinessPartnerListDialog : public CGuiDialog{
protected:
public:
	CString			m_szID;
	CString			m_szPartnerId;

	bool			m_bCreatetype;
	
	CAdBusinessPartnerContractList	m_wndContractList;
	CAdBusinessPartnerEmplList		m_wndEmplList;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndGroupList;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndFind;
	CGuiListCtrl	m_wndList;
	CGuiTabCtrl		m_wndTab;
	CGuiCheckBox	m_wndLoadInactive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szTypeKey;
	CString	m_szSearchName;
	BOOL	m_bLoadInactive;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnFindSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem();
	int			OnListDeleteItem(); 
	int			OnListEditItem();

//	long			OnEmplListLoadData(); 
//	void			OnTabSelectChange(int nOldItem, int nNewItem); 
//	void			OnEmplListDblClick(); 
//	int			OnEmplListAddItem();
//	int			OnEmplListDeleteItem(); 
//	int			OnEmplListEditItem();

	
	void			OnLoadInactiveSelect();
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 


	CAdBusinessPartnerListDialog(CWnd *pParent);
	~CAdBusinessPartnerListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdBusinessPartnerListDialog(); 
	int OnEditAdBusinessPartnerListDialog(); 
	int OnDeleteAdBusinessPartnerListDialog(); 
	int OnSaveAdBusinessPartnerListDialog(); 
	int OnCancelAdBusinessPartnerListDialog(); 
	int OnAdBusinessPartnerListDialogListLoadData(); 
	void Refresh();
	DECLARE_MESSAGE_MAP()
	
};


#endif
