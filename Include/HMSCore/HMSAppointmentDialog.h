#ifndef HMSAPPOINTMENTDIALOG_H
#define HMSAPPOINTMENTDIALOG_H

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
class AFX_EXT_CLASS CHMSAppointmentDialog : public CGuiDialog
{

protected:
public:
	int				m_nRoomID;
	CGuiGroupBox	m_wndAppointmentInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAppointmentDateLabel;
	CGuiDateCtrl	m_wndAppointmentDate;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndTimeFrame;
	CGuiTimeCtrl	m_wndFromTime;
	CGuiTimeCtrl	m_wndToTime;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiCheckBox	m_wndNhac_Lich_Kham;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAppointmentDate;
	CString	m_szRoomKey;
	CDbfMap	m_hms_appointmentTbl;

	CString m_szStatus;
	CString	m_szFromTime;
	CString	m_szToTime;
	CString	m_szNote;
	CString	m_szReason;
	BOOL	m_bNhac_Lich_Kham;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue();
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue();
	//void			OnAppointmentDateChange(); 
	//void			OnAppointmentDateSetfocus(); 
	//void			OnAppointmentDateKillfocus(); 
	int			OnAppointmentDateCheckValue();
	//void			OnFromTimeChange(); 
	//void			OnFromTimeSetfocus(); 
	//void			OnFromTimeKillfocus(); 
	int			OnFromTimeCheckValue();
	//void			OnToTimeChange(); 
	//void			OnToTimeSetfocus(); 
	//void			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue();
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue();
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue();
	void			OnOKSelect();
	void			OnCloseSelect();
	void			OnUpdateSelect();
	void			OnSaveSelect();
	void			OnCancelSelect();
	void			OnPrintSelect();
	void		OnPrint();
	void			OnNhac_Lich_KhamSelect();
	CHMSAppointmentDialog(CWnd* pParent);
	~CHMSAppointmentDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAppointmentDialog();
	int OnEditHMSAppointmentDialog();
	int OnDeleteHMSAppointmentDialog();
	int OnSaveHMSAppointmentDialog();
	int OnCancelHMSAppointmentDialog();
	int OnHMSAppointmentDialogListLoadData();
	int CheckAppointment(CString& szFromTime, CString& szToTime, CGuiTextCtrl& wndReason);
	int CheckAppointment_V2(CString szTime);
	void PrintAppointmentSheet(long nDocumentNo);
};
#endif
