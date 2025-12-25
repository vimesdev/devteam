#ifndef GUILOGINDIALOG_H
#define GUILOGINDIALOG_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	hayhv@vimes.com.vn or hayhv@yahoo.com
//	http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "GuiDialog.h"

class AFX_EXT_CLASS CGuiLoginDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndLoginInformation;
	CGuiLabel	m_wndUserNameLabel;
	CGuiTextCtrl	m_wndUserName;
	CGuiLabel	m_wndPasswordLabel;
	CGuiTextCtrl	m_wndPassword;
	CGuiButton	m_wndOk;
	CGuiButton	m_wndCancel;
	CGuiLabel	m_wndLogo;
	CString	m_szUserName;
	CString	m_szPassword;
	int			OnUserNameChange(); 
	int			OnUserNameSetfocus(); 
	int			OnUserNameKillfocus(); 
	int			OnUserNameCheckValue(); 
	int			OnPasswordChange(); 
	int			OnPasswordSetfocus(); 
	int			OnPasswordKillfocus(); 
	int			OnPasswordCheckValue(); 
	int			OnOKSel(); 
	int			OnCancelSel(); 
	CGuiLoginDialog(CWnd *pParent);
	~CGuiLoginDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
#endif
