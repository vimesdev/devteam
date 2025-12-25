#ifndef FORMFOOTERSETUP_H
#define FORMFOOTERSETUP_H

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
class AFX_EXT_CLASS CFormFooterSetup : public CGuiDialog{
protected:
	long	m_nID;
public:
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndTitleLabel;
	CGuiGroupBox	m_wndFormFooterSetup;
	CGuiTextCtrl	m_wndTitle;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndList;
	CString	m_szPositionKey;
	CString	m_szModuleKey;
	CString	m_szTitle;
	CString	m_szTypeKey;
	CDbfMap m_fm_print_footerTbl;
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	void			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnModuleSelendok(); 
	//void			OnModuleSetfocus(); 
	//void			OnModuleKillfocus(); 
	long			OnModuleLoadData(); 
	//void			OnModuleAddNew(); 
	//void			OnTitleChange(); 
	//void			OnTitleSetfocus(); 
	//void			OnTitleKillfocus(); 
	int			OnTitleCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CFormFooterSetup(CWnd *pParent);
	~CFormFooterSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFormFooterSetup(); 
	int OnEditFormFooterSetup(); 
	int OnDeleteFormFooterSetup(); 
	int OnSaveFormFooterSetup(); 
	int OnCancelFormFooterSetup(); 
	int OnFormFooterSetupListLoadData(); 
};
#endif
