#ifndef FAMATTACHACCESSORIES_H
#define FAMATTACHACCESSORIES_H

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
class CFAMAttachAccessories : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndAccessoriesInformation;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndModelLabel;
	CGuiTextCtrl	m_wndModel;
	CGuiLabel		m_wndSerialLabel;
	CGuiTextCtrl	m_wndSerial;
	CGuiLabel		m_wndMfgLabel;
	CGuiComboBox	m_wndMfg;
	CGuiLabel		m_wndMfgYearLabel;
	CGuiTextCtrl	m_wndMfgYear;
	CGuiLabel		m_wndSpeedLabel;
	CGuiTextCtrl	m_wndSpeed;
	CGuiLabel		m_wndDataSizeLabel;
	CGuiTextCtrl	m_wndDataSize;
	CGuiLabel		m_wndCapacityLabel;
	CGuiTextCtrl	m_wndCapacity;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szTypeKey;
	CString	m_szName;
	CString	m_szModel;
	CString	m_szSerial;
	CString	m_szMfgKey;
	CString	m_szMfgYear;
	CString	m_szSpeed;
	CString	m_szDataSize;
	CString	m_szCapacity;
	CString m_szAssetNo;
	CDbfMap m_tbl_accessory;
	int m_nIdx;
	CWnd * m_pWnd;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnModelChange(); 
	//void			OnModelSetfocus(); 
	//void			OnModelKillfocus(); 
	int			OnModelCheckValue(); 
	//void			OnSerialChange(); 
	//void			OnSerialSetfocus(); 
	//void			OnSerialKillfocus(); 
	int			OnSerialCheckValue(); 
	void			OnMfgSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMfgSelendok(); 
	//void			OnMfgSetfocus(); 
	//void			OnMfgKillfocus(); 
	long			OnMfgLoadData(); 
	//void			OnMfgAddNew(); 
	//void			OnMfgYearChange(); 
	//void			OnMfgYearSetfocus(); 
	//void			OnMfgYearKillfocus(); 
	int			OnMfgYearCheckValue(); 
	//void			OnSpeedChange(); 
	//void			OnSpeedSetfocus(); 
	//void			OnSpeedKillfocus(); 
	int			OnSpeedCheckValue(); 
	//void			OnDataSizeChange(); 
	//void			OnDataSizeSetfocus(); 
	//void			OnDataSizeKillfocus(); 
	int			OnDataSizeCheckValue(); 
	//void			OnCapacityChange(); 
	//void			OnCapacitySetfocus(); 
	//void			OnCapacityKillfocus(); 
	int			OnCapacityCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CFAMAttachAccessories(CWnd *pParent);
	~CFAMAttachAccessories();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAttachAccessories(); 
	int OnEditFAMAttachAccessories(); 
	int OnDeleteFAMAttachAccessories(); 
	int OnSaveFAMAttachAccessories(); 
	int OnCancelFAMAttachAccessories(); 
	int OnFAMAttachAccessoriesListLoadData(); 
};
#endif
