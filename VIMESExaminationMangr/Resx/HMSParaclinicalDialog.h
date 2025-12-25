#ifndef HMSPARACLINICALDIALOG_H
#define HMSPARACLINICALDIALOG_H

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
class CHMSParaclinicalDialog : public CGuiDialog{
protected:
public:
	CGuiListBox	m_wndParaclinicalList;
	CGuiLabel		m_wndPerformDepartmentLabel;
	CGuiComboBox	m_wndPerformDepartment;
	CGuiListCtrl	m_wndTestList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndAdd;
	CGuiListCtrl	m_wndSelectList;
	CGuiButton		m_wndRemove;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiButton		m_wndGroup;
	CString	m_szPerformDepartmentKey;
	CString	m_szSearch;
	CString	m_szOrderDate;
	long			OnParaclinicalListLoadData(); 
	void			OnParaclinicalListSelectChange(int nOldItem, int nNewItem); 
	void			OnParaclinicalListDblClick(); 
	int			OnParaclinicalListDeleteItem(); 
	void			OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDepartmentSelendok(); 
	//void			OnPerformDepartmentSetfocus(); 
	//void			OnPerformDepartmentKillfocus(); 
	long			OnPerformDepartmentLoadData(); 
	void			OnPerformDepartmentAddNew(); 
	long			OnTestListLoadData(); 
	void			OnTestListSelectChange(int nOldItem, int nNewItem); 
	void			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnAddSelect(); 
	long			OnSelectListLoadData(); 
	void			OnSelectListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectListDblClick(); 
	int			OnSelectListDeleteItem(); 
	void			OnRemoveSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnGroupSelect(); 
	CHMSParaclinicalDialog(CWnd *pParent);
	~CHMSParaclinicalDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalDialog(); 
	int OnEditHMSParaclinicalDialog(); 
	int OnDeleteHMSParaclinicalDialog(); 
	int OnSaveHMSParaclinicalDialog(); 
	int OnCancelHMSParaclinicalDialog(); 
	int OnHMSParaclinicalDialogListLoadData(); 
};
#endif
