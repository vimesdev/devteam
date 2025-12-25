#ifndef FAMWAREHOUSESETUP_H
#define FAMWAREHOUSESETUP_H

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
class CFAMWarehouseSetup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndWarehouseSetup;
	CGuiListCtrl	m_wndWarehouseList;
	CGuiLabel		m_wndWarehouseIDLabel;
	CGuiTextCtrl	m_wndWarehouseID;
	CGuiLabel		m_wndWarehouseNameLabel;
	CGuiTextCtrl	m_wndWarehouseName;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szWarehouseID;
	CString	m_szWarehouseName;
	CString	m_szDepartmentKey;
	CString m_szSelectedID;
	long			OnWarehouseListLoadData(); 
	void			OnWarehouseListSelectChange(int nOldItem, int nNewItem); 
	void			OnWarehouseListDblClick(); 
	int			OnWarehouseListDeleteItem(); 
	//void			OnWarehouseIDChange(); 
	//void			OnWarehouseIDSetfocus(); 
	//void			OnWarehouseIDKillfocus(); 
	int			OnWarehouseIDCheckValue(); 
	//void			OnWarehouseNameChange(); 
	//void			OnWarehouseNameSetfocus(); 
	//void			OnWarehouseNameKillfocus(); 
	int			OnWarehouseNameCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CFAMWarehouseSetup(CWnd *pParent);
	~CFAMWarehouseSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMWarehouseSetup(); 
	int OnEditFAMWarehouseSetup(); 
	int OnDeleteFAMWarehouseSetup(); 
	int OnSaveFAMWarehouseSetup(); 
	int OnCancelFAMWarehouseSetup(); 
	int OnFAMWarehouseSetupListLoadData(); 
};
#endif
