#ifndef ADMANUFACTUREDIALOG_H
#define ADMANUFACTUREDIALOG_H

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
class AFX_EXT_CLASS CAdManufactureDialog : public CGuiDialog{
protected:
public:
	long	m_nID;

	CGuiGroupBox	m_wndManufactureInformation;
	CGuiLabel		m_wndManufactureNoLabel;
	CGuiTextCtrl	m_wndManufactureNo;
	CGuiLabel		m_wndManufactureNameLabel;
	CGuiTextCtrl	m_wndManufactureName;
	CGuiLabel		m_wndProductCountryLabel;
	CGuiComboBox	m_wndProductCountry;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szManufactureNo;
	CString	m_szManufactureName;
	CString	m_szProductCountryKey;
	BOOL	m_bActive;
	CDbfMap	m_manufactureTbl;

	//void			OnManufactureNoChange(); 
	//void			OnManufactureNoSetfocus(); 
	//void			OnManufactureNoKillfocus(); 
	int			OnManufactureNoCheckValue(); 
	//void			OnManufactureNameChange(); 
	//void			OnManufactureNameSetfocus(); 
	//void			OnManufactureNameKillfocus(); 
	int			OnManufactureNameCheckValue(); 
	void			OnProductCountrySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductCountrySelendok(); 
	//void			OnProductCountrySetfocus(); 
	//void			OnProductCountryKillfocus(); 
	long			OnProductCountryLoadData(); 
	//void			OnProductCountryAddNew(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CAdManufactureDialog(CWnd *pParent, int nMode);
	~CAdManufactureDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdManufactureDialog(); 
	int OnEditAdManufactureDialog(); 
	int OnDeleteAdManufactureDialog(); 
	int OnSaveAdManufactureDialog(); 
	int OnCancelAdManufactureDialog(); 
	int OnAdManufactureDialogListLoadData(); 
};
#endif
