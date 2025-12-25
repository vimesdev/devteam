#ifndef HMSAPPOINTMENTRETreatment_H
#define HMSAPPOINTMENTRETreatment_H

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
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CHMSAppointmentReTreatment : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndAppointmentReTreatment;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndTimeFrameLabel;
	CGuiTimeCtrl	m_wndFromTime;
	CGuiTimeCtrl	m_wndToTime;												
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;							 
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndAdmitdateLabel;
	CGuiDateCtrl	m_wndAdmitdate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateCtrl	m_wndDischargeDate;
	CGuiButton		m_wndTreatTime;
	CString	m_szDate;
	CString	m_szNote;
	CString	m_szFromTime;
	CString	m_szToTime;					
	CString	m_szAdmitdate;
	CString	m_szDischargeDate;

	CString	m_szAdmitdate2;
	CString	m_szDischargeDate2;
	int		m_nTreatTime;
	CString	m_szReason;
	CDbfMap	m_hms_docTbl;
	CDbfMap	m_hms_reexamTbl;

	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue();
	//void			OnFromTimeChange(); 
	//void			OnFromTimeSetfocus(); 
	//void			OnFromTimeKillfocus(); 
	int			OnFromTimeCheckValue(); 
	//void			OnToTimeChange(); 
	//void			OnToTimeSetfocus(); 
	//void			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue(); 											 
	int			OnAdmitdateCheckValue();
	int			OnDischargeDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 				
	int			OnReasonCheckValue();						  
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CHMSAppointmentReTreatment(CWnd* pParent);
	~CHMSAppointmentReTreatment();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);										
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAppointmentReTreatment(); 
	int OnEditHMSAppointmentReTreatment(); 
	int OnDeleteHMSAppointmentReTreatment(); 
	int OnSaveHMSAppointmentReTreatment(); 
	int OnCancelHMSAppointmentReTreatment(); 
	int OnHMSAppointmentReTreatmentListLoadData();
	void			OnTreatTimeSelect();
	int CheckAppointment(CString& szFromTime, CString& szToTime, CGuiTextCtrl& wndReason);
};
#endif
