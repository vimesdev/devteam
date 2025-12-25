#ifndef ConfirmDialog_H
#define ConfirmDialog_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2006-2008.			
//	All rights reserved. 
//	This program is protected by Viet nam and interEthnical treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@VIMES.com.vn or hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@VIMES.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class AFX_EXT_CLASS CConfirmDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndConfirmPasswordLabel;
	CGuiTextCtrl	m_wndConfirmPassword;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	CString	m_szDoctor;
	CString	m_szConfirmPassword;
	//int			OnDoctorChange(); 
	//int			OnDoctorSetfocus(); 
	//int			OnDoctorKillfocus(); 
	int			OnDoctorLoadData();
	int			OnDoctorCheckValue(); 
	//int			OnConfirmPasswordChange(); 
	//int			OnConfirmPasswordSetfocus(); 
	//int			OnConfirmPasswordKillfocus(); 
	int			OnConfirmPasswordCheckValue(); 
	int			OnOKSelect(); 
	int			OnCancelSelect(); 
	CConfirmDialog(CWnd *pParent);
	~CConfirmDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddConfirmDialog(); 
	int OnEditConfirmDialog(); 
	int OnDeleteConfirmDialog(); 
	int OnSaveConfirmDialog(); 
	int OnCancelConfirmDialog(); 
	int OnConfirmDialogListLoadData(); 
};
#endif
