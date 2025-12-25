#ifndef HMSDRUGCANCERBYITEMSETUPDLG_H
#define HMSDRUGCANCERBYITEMSETUPDLG_H

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
class AFX_EXT_CLASS CHMSDrugCancerByItemSetupDlg : public CGuiDialog
{
protected:
	double	m_nOldPercent;
	CString	m_szOldApplyDate;
	CString m_szOldStatus;
	CString m_szStatus;

public:
	CGuiGroupBox	m_wndDrugCancerSetup;
	CGuiGroupBox	m_wndDrugListInfo;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndPercentLabel;
	CGuiNumberCtrl	m_wndPercent;
	CGuiCheckBox	m_wndInactive;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndDrugList;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
		CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CString	m_szNameKey;
	double	m_nPercent;
	int		m_nIdx;
	BOOL	m_bInactive;
	CString	m_szApplyDate;
	CString m_szNote;
	CDbfMap	m_Product_cancer_itemTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnPercentChange(); 
	//void			OnPercentSetfocus(); 
	//void			OnPercentKillfocus(); 
	int			OnPercentCheckValue(); 
	void			OnInactiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnApplySelect(); 
	void			OnCancelSelect();
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue(); 
	CHMSDrugCancerByItemSetupDlg(CWnd *pParent);
	~CHMSDrugCancerByItemSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDrugCancerByClassSetupDlg(); 
	int OnEditHMSDrugCancerByClassSetupDlg(); 
	int OnDeleteHMSDrugCancerByClassSetupDlg(); 
	int OnSaveHMSDrugCancerByClassSetupDlg(); 
	int OnCancelHMSDrugCancerByClassSetupDlg(); 
	int OnHMSDrugCancerByClassSetupDlgListLoadData(); 
	int OnListManipulateItem();
};
#endif