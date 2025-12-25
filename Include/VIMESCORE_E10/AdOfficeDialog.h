#ifndef ADOFFICEDIALOG_H
#define ADOFFICEDIALOG_H

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
class CAdOfficeDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndBusinessPartnerInformation;
	CGuiLabel		m_wndPartnerTypeLabel;
	CGuiComboBox	m_wndPartnerType;
	CGuiLabel		m_wndPartnerIDLabel;
	CGuiTextCtrl	m_wndPartnerID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiCheckBox	m_wndIsActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szPartnerTypeKey;
	CString	m_szPartnerID;
	CString	m_szName;
	CString	m_szAddress;
	BOOL	m_bIsActive;
	CDbfMap	m_ad_partnerTbl;
	void			OnPartnerTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerTypeSelendok(); 
	//void			OnPartnerTypeSetfocus(); 
	//void			OnPartnerTypeKillfocus(); 
	long			OnPartnerTypeLoadData(); 
	//void			OnPartnerTypeAddNew(); 
	//void			OnPartnerIDChange(); 
	//void			OnPartnerIDSetfocus(); 
	//void			OnPartnerIDKillfocus(); 
	int			OnPartnerIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnIsActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CAdOfficeDialog(CWnd *pParent, int nMode);
	~CAdOfficeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdOfficeDialog(); 
	int OnEditAdOfficeDialog(); 
	int OnDeleteAdOfficeDialog(); 
	int OnSaveAdOfficeDialog(); 
	int OnCancelAdOfficeDialog(); 
	int OnAdOfficeDialogListLoadData(); 
};
#endif
