#ifndef ADCONTACTINPUT_H
#define ADCONTACTINPUT_H

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
#include "GuiView.h"
#include "DbField.h"
class CAdContactInput : public CListItemEdit{
protected:
public:
	CWnd*	m_pWnd;
	CGuiCheckBox	m_wndPrimary;
	CGuiLabel		m_wndTitleLabel;
	CGuiTextCtrl	m_wndTitle;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndEmailLabel;
	CGuiTextCtrl	m_wndEmail;
	CGuiLabel		m_wndPositionLabel;
	CGuiTextCtrl	m_wndPosition;
	CString m_szPartnerID;
	CString	m_szID;
	int		m_bPrimary;
	CString	m_szTitle;
	CString	m_szName;
	CString	m_szPhone;
	CString	m_szEmail;
	CString	m_szPosition;
	CDbfMap	m_ad_partner_contactTbl;
	void			OnPrimarySelect(); 
	//void			OnTitleChange(); 
	//void			OnTitleSetfocus(); 
	//void			OnTitleKillfocus(); 
	int			OnTitleCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnEmailChange(); 
	//void			OnEmailSetfocus(); 
	//void			OnEmailKillfocus(); 
	int			OnEmailCheckValue(); 
	//void			OnPositionChange(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	int			OnPositionCheckValue(); 
	CAdContactInput();
	~CAdContactInput();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdContactInput(); 
	int OnEditAdContactInput(); 
	int OnDeleteAdContactInput(); 
	int OnSaveAdContactInput(); 
	int OnCancelAdContactInput(); 
	int OnAdContactInputListLoadData(); 
	int OnOK();
	void OnCancel();
	void ApplyToList();
};
#endif
