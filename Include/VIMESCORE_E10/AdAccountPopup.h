#ifndef AdAccountPopup_H
#define AdAccountPopup_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Joint Stock Company. 2005-2010. 			
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
#include "GuiPopup.h"
#include "DbField.h"
class CAdAccountPopup : public CGuiPopup{
protected:
public:
	CGuiGroupBox	m_wndEntry;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiLabel		m_wndEnglishNameLabel;
	CGuiTextCtrl	m_wndEnglishName;
	CGuiLabel		m_wndPropertyLabel;
	CGuiComboBox	m_wndProperty;
	CGuiLabel		m_wndParentAccLabel;
	CGuiComboBox	m_wndParentAcc;
	CDbfMap			m_ad_accountTbl;
	CString	m_szID;
	CString	m_szName;
	BOOL	m_bActive;
	CString	m_szEnglishName;
	CString	m_szPropertyKey;
	CString	m_szParentAccKey;
	int		m_nMode;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	//void			OnEnglishNameChange(); 
	//void			OnEnglishNameSetfocus(); 
	//void			OnEnglishNameKillfocus(); 
	int			OnEnglishNameCheckValue(); 
	void			OnPropertySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPropertySelendok(); 
	//void			OnPropertySetfocus(); 
	//void			OnPropertyKillfocus(); 
	long			OnPropertyLoadData(); 
	void			OnPropertyAddNew(); 
	void			OnParentAccSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParentAccSelendok(); 
	//void			OnParentAccSetfocus(); 
	//void			OnParentAccKillfocus(); 
	long			OnParentAccLoadData(); 
	void			OnParentAccAddNew(); 
	CAdAccountPopup();
	CAdAccountPopup(CWnd *pParent);
	~CAdAccountPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdAccountPopup(); 
	int OnEditAdAccountPopup(); 
	int OnDeleteAdAccountPopup(); 
	int OnSaveAdAccountPopup(); 
	int OnCancelAdAccountPopup(); 
	int OnAdAccountPopupListLoadData(); 
	void	ClosePopup();
};
#endif
