#ifndef PMDRUGLEVELSETUP_H
#define PMDRUGLEVELSETUP_H

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
class CPMDrugLevelSetup : public CGuiDialog
{
protected:
	CString m_szUserID;
	CString m_szOldLevel;
public:
	CGuiLabel		m_wndSearchDeptLabel;
	CGuiComboBox	m_wndSearchDept;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiCheckBox	m_wndLevelI;
	CGuiCheckBox	m_wndLevelII;
	CGuiCheckBox	m_wndLevelIII;
	CGuiCheckBox	m_wndLevelIV;
	CGuiButton		m_wndApply;
	CGuiGroupBox	m_wndUserInformation;
	CGuiGroupBox	m_wndPermissionInformation;
	CGuiListCtrl	m_wndUserList;
	CGuiListCtrl	m_wndPermList;
	CString	m_szSearchDeptKey;
	CString	m_szSearchName;
	BOOL	m_bLevelI;
	BOOL	m_bLevelII;
	BOOL	m_bLevelIII;
	BOOL	m_bLevelIV;
	CDbfMap	m_sys_userpermTbl;
	void			OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchDeptSelendok(); 
	//void			OnSearchDeptSetfocus(); 
	//void			OnSearchDeptKillfocus(); 
	long			OnSearchDeptLoadData(); 
	//void			OnSearchDeptAddNew(); 
	void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnLevelISelect();
	void			OnLevelIISelect();
	void			OnLevelIIISelect();
	void			OnLevelIVSelect();
	void			OnApplySelect(); 
	long			OnUserListLoadData(); 
	void			OnUserListSelectChange(int nOldItem, int nNewItem); 
	void			OnUserListDblClick(); 
	int			OnUserListDeleteItem(); 
	long			OnPermListLoadData(); 
	void			OnPermListSelectChange(int nOldItem, int nNewItem); 
	void			OnPermListDblClick(); 
	int			OnPermListDeleteItem(); 
	CPMDrugLevelSetup(CWnd *pParent);
	~CPMDrugLevelSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMDrugLevelSetup(); 
	int OnEditPMDrugLevelSetup(); 
	int OnDeletePMDrugLevelSetup(); 
	int OnSavePMDrugLevelSetup(); 
	int OnCancelPMDrugLevelSetup(); 
	int OnPMDrugLevelSetupListLoadData(); 
};
#endif
