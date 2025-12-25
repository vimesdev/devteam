#ifndef HMSSETUPBEDDIALOG_H
#define HMSSETUPBEDDIALOG_H

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
class CHMSSetupBedDialog : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndBedList;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndplannedbedLabel;
	CGuiNumberCtrl	m_wndplannedbed;
	CGuiLabel		m_wndavaiablebedLabel;
	CGuiNumberCtrl	m_wndavaiablebed;
	CGuiNumberCtrl	m_wndDeptIdx;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndDeptIdxLabel;
	long	m_nplannedbed;
	CString	m_szDepartmentKey;
	long	m_navaiablebed;
	int m_nID;
	long	m_nDeptIdx;
	CDbfMap	m_hms_bedlistTbl;
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnBedListLoadData(); 
	void			OnBedListSelectChange(int nOldItem, int nNewItem); 
	void			OnBedListDblClick(); 
	int			OnBedListDeleteItem(); 
	//void			OnplannedbedChange(); 
	//void			OnplannedbedSetfocus(); 
	//void			OnplannedbedKillfocus(); 
	int			OnplannedbedCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnavaiablebedChange(); 
	//void			OnavaiablebedSetfocus(); 
	//void			OnavaiablebedKillfocus(); 
	int			OnavaiablebedCheckValue(); 
	int			OnDeptIdxCheckValue();
	CHMSSetupBedDialog(CWnd *pParent);
	~CHMSSetupBedDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSetupBedDialog(); 
	int OnEditHMSSetupBedDialog(); 
	int OnDeleteHMSSetupBedDialog(); 
	int OnSaveHMSSetupBedDialog(); 
	int OnCancelHMSSetupBedDialog(); 
	int OnHMSSetupBedDialogListLoadData(); 
};
#endif
