#ifndef HMSBHCARDINFOR_H
#define HMSBHCARDINFOR_H

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
class ChmsBhCardInfor : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndCardInformation;
	CGuiLabel		m_wndInfoLabel;
	CGuiTextCtrl	m_wndInfo;
	CGuiLabel		m_wndCardnoLabel;
	CGuiTextCtrl	m_wndCardno;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndBirthdateLabel;
	CGuiTextCtrl	m_wndbirthdate;
	CGuiLabel		m_wndSexlabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAdressLabel;
	CGuiTextCtrl	m_wndAdress;
	CGuiLabel		m_wndKCBBDLABEL;
	CGuiTextCtrl	m_wndcontrol_14;
	CGuiLabel		m_wndRegDateLabel;
	CGuiTextCtrl	m_wndregdate;
	CGuiLabel		m_wndExpDate;
	CGuiTextCtrl	m_wndexpdate;
	CGuiLabel		m_wndorver5yearLabel;
	CGuiTextCtrl	m_wndover5year;
	CGuiButton		m_wndOK;
	CString	m_szInfo;
	CString	m_szCardno;
	CString	m_szPatientName;
	CString	m_szbirthdate;
	CString	m_szSex;
	CString	m_szAdress;
	CString	m_szcontrol_14;
	CString	m_szregdate;
	CString	m_szexpdate;
	CString	m_szover5year;
	//void			OnInfoChange(); 
	//void			OnInfoSetfocus(); 
	//void			OnInfoKillfocus(); 
	int			OnInfoCheckValue(); 
	//void			OnCardnoChange(); 
	//void			OnCardnoSetfocus(); 
	//void			OnCardnoKillfocus(); 
	int			OnCardnoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnbirthdateChange(); 
	//void			OnbirthdateSetfocus(); 
	//void			OnbirthdateKillfocus(); 
	int			OnbirthdateCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAdressChange(); 
	//void			OnAdressSetfocus(); 
	//void			OnAdressKillfocus(); 
	int			OnAdressCheckValue(); 
	//void			Oncontrol_14Change(); 
	//void			Oncontrol_14Setfocus(); 
	//void			Oncontrol_14Killfocus(); 
	int			Oncontrol_14CheckValue(); 
	//void			OnregdateChange(); 
	//void			OnregdateSetfocus(); 
	//void			OnregdateKillfocus(); 
	int			OnregdateCheckValue(); 
	//void			OnexpdateChange(); 
	//void			OnexpdateSetfocus(); 
	//void			OnexpdateKillfocus(); 
	int			OnexpdateCheckValue(); 
	//void			Onover5yearChange(); 
	//void			Onover5yearSetfocus(); 
	//void			Onover5yearKillfocus(); 
	int			Onover5yearCheckValue(); 
	void			OnOKSelect(); 
	ChmsBhCardInfor(CWnd *pParent);
	~ChmsBhCardInfor();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddhmsBhCardInfor(); 
	int OnEdithmsBhCardInfor(); 
	int OnDeletehmsBhCardInfor(); 
	int OnSavehmsBhCardInfor(); 
	int OnCancelhmsBhCardInfor(); 
	int OnhmsBhCardInforListLoadData(); 
};
#endif
