#ifndef LIMSIsoSetupDialog_H
#define LIMSIsoSetupDialog_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company 2008-2010.			
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
//	Ban quyen cua Cong Ty Co Phan Thiet Bi Va Cong Nghe Tin Hoc Y Te MITECO., JSC. 2006-2008.
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

class CLIMSIsoSetupDialog : public CGuiDialog

{
protected: 
	CString m_szPermGroupID;
	long m_nID;
public:
	CGuiListCtrl	m_wndIsoList;
	CGuiLabel		m_wndWildCastLabel;
	CGuiTextCtrl	m_wndWildCast;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndTestMethodLabel;
	CGuiTextCtrl	m_wndTestMethod;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndSearch;
	CGuiLabel		m_wndTestNameLabel;
	CGuiComboBox	m_wndTestName;
	CGuiLabel		m_wndMachineNameLabel;
	CGuiComboBox	m_wndMachineName;
	CGuiTextCtrl	m_wndMachineManualName;
	CGuiCheckBox	m_wndDefault;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndManual;
	CString	m_szWildCast;
	CString	m_szTypeKey;
	CString	m_szTestMethod;
	CString	m_szName;
	CString	m_szTestNameKey;
	CString	m_szMachineNameKey;
	CString	m_szDeptID;
	BOOL	m_bDefault;
	BOOL	m_bActive;
	BOOL	m_bManual;
	CString	m_szMachineManualName;
	CDbfMap	m_lims_instrument_qcTbl;

	long			OnIsoListLoadData(); 
	void			OnIsoListSelectChange(int nOldItem, int nNewItem); 
	void			OnIsoListDblClick(); 
	int			OnIsoListDeleteItem();	
	int			OnWildCastCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok();	
	long			OnTypeLoadData();	
	int			OnTestMethodCheckValue(); 	
	int			OnNameCheckValue(); 
	void			OnSearchSelect(); 
	void			OnTestNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestNameSelendok();	
	long			OnTestNameLoadData(); 
	//void			OnTestNameAddNew(); 
	void			OnMachineNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMachineNameSelendok(); 
	//void			OnMachineNameSetfocus(); 
	//void			OnMachineNameKillfocus(); 
	long			OnMachineNameLoadData(); 
	//void			OnMachineNameAddNew(); 
	void			OnDefaultSelect(); 
	void			OnActiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	void			OnManualSelect();
	CLIMSIsoSetupDialog(CWnd *pParent);
	~CLIMSIsoSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLIMSIsoSetupDialog(); 
	int OnEditLIMSIsoSetupDialog(); 
	int OnDeleteLIMSIsoSetupDialog(); 
	int OnSaveLIMSIsoSetupDialog(); 
	int OnCancelLIMSIsoSetupDialog(); 
	int OnLIMSIsoSetupDialogListLoadData(); 
};

#endif