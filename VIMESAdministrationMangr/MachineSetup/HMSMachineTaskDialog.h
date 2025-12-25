#ifndef HMSMACHINETASKDIALOG_H
#define HMSMACHINETASKDIALOG_H

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
#include "GridListView.h"
class CHMSMachineTaskDialog : public CGuiDialog{
protected:
public:
	CString	m_szMachineID;
	long	m_nTaskID;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndFeeListGroup;
	CGuiGroupBox	m_wndTaskListGroup;
	CGuiLabel		m_wndFeeGroupLabel;
	CGuiComboBox	m_wndFeeGroup;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndClose;
	CGridListView	m_wndFeeList;
	CGridListView	m_wndTaskList;
	CGuiCheckBox	m_wndFeeListCheck;
	CGuiCheckBox	m_wndTaskListCheck;
	CString	m_szFeeGroupKey;
	CString	m_szFind;
	BOOL	m_bFeeListCheck;
	BOOL	m_bTaskListCheck;
	void			OnFeeGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeGroupSelendok(); 
	//void			OnFeeGroupSetfocus(); 
	//void			OnFeeGroupKillfocus(); 
	long			OnFeeGroupLoadData(); 
	//void			OnFeeGroupAddNew(); 
	//void			OnFindChange(); 
	//void			OnFindSetfocus(); 
	//void			OnFindKillfocus(); 
	int			OnFindCheckValue(); 
	void			OnAddSelect(); 
	void			OnCloseSelect(); 
	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	void		OnFeeListClick();
	long			OnTaskListLoadData(); 
	void			OnTaskListSelectChange(int nOldItem, int nNewItem); 
	void			OnTaskListDblClick(); 
	int			OnTaskListDeleteItem(); 
	void		OnTaskListClick();
	void		OnFeeListCheckSelect();
	void		OnTaskListCheckSelect();
	CHMSMachineTaskDialog(CWnd *pParent);
	~CHMSMachineTaskDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSMachineTaskDialog(); 
	int OnEditHMSMachineTaskDialog(); 
	int OnDeleteHMSMachineTaskDialog(); 
	int OnSaveHMSMachineTaskDialog(); 
	int OnCancelHMSMachineTaskDialog(); 
};
#endif
