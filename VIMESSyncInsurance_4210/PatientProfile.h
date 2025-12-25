#ifndef PATIENTPROFILE_H
#define PATIENTPROFILE_H

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
#include "GuiView.h"
#include "DbField.h"
class CPatientProfile : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndcontrol_18;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndDocnoLabel;
	CGuiTextCtrl	m_wndDocno;
	CGuiLabel		m_wndAdmitdateLabel;
	CGuiDateTimeCtrl	m_wndAdmitdate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateTimeCtrl	m_wndDischargeDate;
	CGuiLabel		m_wndDianosticLabel;
	CGuiTextCtrl	m_wndDianostic;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiTextCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndInspaidLabel;
	CGuiTextCtrl	m_wndInspaid;
	CGuiLabel		m_wndPatpaidLabel;
	CGuiTextCtrl	m_wndPatpaid;
	CString m_szMa_lk;
	CString	m_szPatientName;
	CString	m_szDocno;
	CString	m_szAdmitdate;
	CString	m_szDischargeDate;
	CString	m_szDianostic;
	CString	m_szCardNo;
	CString	m_szTotalAmount;
	CString	m_szInspaid;
	CString	m_szPatpaid;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnDocnoChange(); 
	//void			OnDocnoSetfocus(); 
	//void			OnDocnoKillfocus(); 
	int			OnDocnoCheckValue(); 
	//void			OnAdmitdateChange(); 
	//void			OnAdmitdateSetfocus(); 
	//void			OnAdmitdateKillfocus(); 
	int			OnAdmitdateCheckValue(); 
	//void			OnDischargeDateChange(); 
	//void			OnDischargeDateSetfocus(); 
	//void			OnDischargeDateKillfocus(); 
	int			OnDischargeDateCheckValue(); 
	//void			OnDianosticChange(); 
	//void			OnDianosticSetfocus(); 
	//void			OnDianosticKillfocus(); 
	int			OnDianosticCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnInspaidChange(); 
	//void			OnInspaidSetfocus(); 
	//void			OnInspaidKillfocus(); 
	int			OnInspaidCheckValue(); 
	//void			OnPatpaidChange(); 
	//void			OnPatpaidSetfocus(); 
	//void			OnPatpaidKillfocus(); 
	int			OnPatpaidCheckValue(); 
	CPatientProfile();
	~CPatientProfile();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPatientProfile(); 
	int OnEditPatientProfile(); 
	int OnDeletePatientProfile(); 
	int OnSavePatientProfile(); 
	int OnCancelPatientProfile(); 
	int OnPatientProfileListLoadData();
	int OnUpdateDrugOrderDay();
};
#endif
