#ifndef CHMSOPERATIONUSERSETUP_H
#define CHMSOPERATIONUSERSETUP_H

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
class AFX_EXT_CLASS CHMSOperationUserSetup : public CGuiDialog{
protected:
public:
	long		m_nOperationID;

	CGuiGroupBox	m_wndInstructionSetupBox;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndUserNameLabel;
	CGuiComboBox	m_wndUserName;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndGroupSearchLabel;
	CGuiComboBox	m_wndGroupSearch;
	CGuiLabel		m_wndUerNameSearchLabel;
	CGuiTextCtrl	m_wndUserNameSearch;
	CString	m_szUserNameKey;
	CString	m_szPositionKey;
	CString	m_szNote;
	BOOL	m_bActive;
	CString	m_szGroupSearchKey;
	CString	m_szUserNameSearch;
	long	m_nopukey;
	CDbfMap	m_hms_operation_user_setup;
	

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnUserNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUserNameSelendok(); 
	//void			OnUserNameSetfocus(); 
	//void			OnUserNameKillfocus(); 
	long			OnUserNameLoadData(); 
	//void			OnUserNameAddNew(); 
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnActiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnGroupSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSearchSelendok(); 
	//void			OnGroupSearchSetfocus(); 
	//void			OnGroupSearchKillfocus(); 
	long			OnGroupSearchLoadData(); 
	//void			OnGroupSearchAddNew(); 
	//void			OnUserNameSearchChange(); 
	//void			OnUserNameSearchSetfocus(); 
	//void			OnUserNameSearchKillfocus(); 
	int			OnUserNameSearchCheckValue(); 
	CHMSOperationUserSetup(CWnd *pParent);
	~CHMSOperationUserSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSOperationUserSetup(); 
	int OnEditCHMSOperationUserSetup(); 
	int OnDeleteCHMSOperationUserSetup(); 
	int OnSaveCHMSOperationUserSetup(); 
	int OnCancelCHMSOperationUserSetup(); 
	int OnCHMSOperationUserSetupListLoadData(); 
};
#endif