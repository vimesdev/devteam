#ifndef MANUFACTURESETUPDIALOG_H
#define MANUFACTURESETUPDIALOG_H

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
class CManufactureSetupDialog : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndManufacturerIDLabel;
	CGuiTextCtrl	m_wndManufacturerID;
	CGuiLabel		m_wndManufacturerNameLabel;
	CGuiTextCtrl	m_wndManufacturerName;
	CGuiLabel		m_wndCountryLabel;
	CGuiComboBox	m_wndMfgCountry;
	CGuiLabel		m_wndActiveLabel;
	CGuiComboBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szManufacturerID;
	CString	m_szManufacturerName;
	CString	m_szMfgCountryKey;
	CString	m_szActiveKey;
	int m_nIndex;
	CDbfMap	m_fam_manufactureTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnManufacturerIDChange(); 
	//void			OnManufacturerIDSetfocus(); 
	//void			OnManufacturerIDKillfocus(); 
	int			OnManufacturerIDCheckValue(); 
	//void			OnManufacturerNameChange(); 
	//void			OnManufacturerNameSetfocus(); 
	//void			OnManufacturerNameKillfocus(); 
	int			OnManufacturerNameCheckValue(); 
	void			OnMfgCountrySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMfgCountrySelendok(); 
	//void			OnMfgCountrySetfocus(); 
	//void			OnMfgCountryKillfocus(); 
	long			OnMfgCountryLoadData(); 
	void			OnMfgCountryAddNew(); 
	void			OnActiveSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnActiveSelendok(); 
	//void			OnActiveSetfocus(); 
	//void			OnActiveKillfocus(); 
	long			OnActiveLoadData(); 
	void			OnActiveAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);

	CManufactureSetupDialog(CWnd *pParent);
	~CManufactureSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddManufactureSetupDialog(); 
	int OnEditManufactureSetupDialog(); 
	int OnDeleteManufactureSetupDialog(); 
	int OnSaveManufactureSetupDialog(); 
	int OnCancelManufactureSetupDialog(); 
	int OnManufactureSetupDialogListLoadData(); 
};
#endif
