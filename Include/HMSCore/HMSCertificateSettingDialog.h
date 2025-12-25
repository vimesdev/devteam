#ifndef HMSCERTIFICATESETTINGDIALOG_H
#define HMSCERTIFICATESETTINGDIALOG_H

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
class AFX_EXT_CLASS CHMSCertificateSettingDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSettingSignInfo;
	CGuiLabel		m_wndHSMNameLabel;
	CGuiComboBox	m_wndHSMName;
	CGuiLabel		m_wndUserNameLabel;
	CGuiTextCtrl	m_wndUserName;
	CGuiLabel		m_wndPasswordLabe;
	CGuiTextCtrl	m_wndPassword;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndcredentialidLabel;
	CGuiTextCtrl	m_wndcredential_id;

	CString	m_szHSMNameKey;
	CString	m_szUserName;
	CString	m_szPassword;
	CString	m_szcredential_id;
	void			OnHSMNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHSMNameSelendok(); 
	//void			OnHSMNameSetfocus(); 
	//void			OnHSMNameKillfocus(); 
	long			OnHSMNameLoadData(); 
	//void			OnHSMNameAddNew(); 
	//void			OnUserNameChange(); 
	//void			OnUserNameSetfocus(); 
	//void			OnUserNameKillfocus(); 
	int			OnUserNameCheckValue(); 
	//void			OnPasswordChange(); 
	//void			OnPasswordSetfocus(); 
	//void			OnPasswordKillfocus(); 
	int			OnPasswordCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	int			Oncredential_idCheckValue(); 
	CHMSCertificateSettingDialog(CWnd *pParent);
	~CHMSCertificateSettingDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCertificateSettingDialog(); 
	int OnEditHMSCertificateSettingDialog(); 
	int OnDeleteHMSCertificateSettingDialog(); 
	int OnSaveHMSCertificateSettingDialog(); 
	int OnCancelHMSCertificateSettingDialog(); 
	int OnHMSCertificateSettingDialogListLoadData(); 
};
#endif
