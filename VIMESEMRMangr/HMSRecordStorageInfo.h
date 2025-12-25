#ifndef HMSRECORDSTORAGEINFO_H
#define HMSRECORDSTORAGEINFO_H

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
class CHMSRecordStorageInfo : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndRecordInformation;
	CGuiLabel		m_wndAdmissionNoLabel;
	CGuiTextCtrl	m_wndAdmissionNo;
	CGuiLabel		m_wndAdmissionDateLabel;
	CGuiDateTimeCtrl	m_wndAdmissionDate;
	CGuiLabel		m_wndDischargeDateLabel;
	CGuiDateTimeCtrl	m_wndDischargeDate;
	CGuiLabel		m_wndAdmitDepartmentLabel;
	CGuiTextCtrl	m_wndAdmitDepartment;
	CGuiLabel		m_wndFromTimeLabel;
	CGuiDateCtrl	m_wndFromTime;
	CGuiLabel		m_wndToTimeLabel;
	CGuiDateCtrl	m_wndToTime;
	CGuiLabel		m_wndEndDepartmentLabel;
	CGuiTextCtrl	m_wndEndDepartment;
	CGuiLabel		m_wndFromTime2Label;
	CGuiDateCtrl	m_wndFromTime2;
	CGuiDateCtrl	m_wndToTime2;
	CGuiLabel		m_wndToTime2Label;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndArchivalNoLabel;
	CGuiTextCtrl	m_wndArchivalNo;
	CGuiLabel		m_wndStoredDateLabel;
	CGuiDateTimeCtrl	m_wndStoredDate;
	CGuiLabel		m_wndRecordStatusLabel;
	CGuiComboBox	m_wndRecordStatus;
	CGuiLabel		m_wndRoomIDLabel;
	CGuiNumberCtrl	m_wndRoomID;
	CGuiLabel		m_wndCabinetLabel;
	CGuiNumberCtrl	m_wndCabinet;
	CGuiLabel		m_wndDrawerLabel;
	CGuiNumberCtrl	m_wndDrawer;
	CGuiLabel		m_wndLocationLabel;
	CGuiNumberCtrl	m_wndLocation;
	CGuiLabel		m_wndShortcutLabel;
	CGuiTextCtrl	m_wndShortcut;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szAdmissionNo;
	CString	m_szAdmissionDate;
	CString	m_szDischargeDate;
	CString	m_szAdmitDepartment;
	CString	m_szFromTime;
	CString	m_szToTime;
	CString	m_szEndDepartment;
	CString	m_szFromTime2;
	CString	m_szToTime2;
	CString	m_szDiagnostic;
	CString	m_szArchivalNo;
	CString	m_szStoredDate;
	CString	m_szRecordStatusKey;
	long	m_nRoomID;
	long	m_nCabinet;
	long	m_nDrawer;
	long	m_nLocation;
	CString	m_szShortcut;
	CString	m_szNote;
	CDbfMap	m_hms_patient_recordTbl;
	long	m_nDocNo;
	long	m_szPatientNo;
	CString m_szAdmitDept;
	CString m_szClass;
	CString m_szDischargeDept;
	CString m_szPatientDead;
	CString m_szTreatmentTypeID;
	CString m_szArchivalNoOld;
	CString m_szAdmitNo;
	int		m_nOutPatient;
	long	m_nIdx;
	//void			OnAdmissionNoChange(); 
	//void			OnAdmissionNoSetfocus(); 
	//void			OnAdmissionNoKillfocus(); 
	int			OnAdmissionNoCheckValue(); 
	//void			OnAdmissionDateChange(); 
	//void			OnAdmissionDateSetfocus(); 
	//void			OnAdmissionDateKillfocus(); 
	int			OnAdmissionDateCheckValue(); 
	//void			OnDischargeDateChange(); 
	//void			OnDischargeDateSetfocus(); 
	//void			OnDischargeDateKillfocus(); 
	int			OnDischargeDateCheckValue(); 
	//void			OnAdmitDepartmentChange(); 
	//void			OnAdmitDepartmentSetfocus(); 
	//void			OnAdmitDepartmentKillfocus(); 
	int			OnAdmitDepartmentCheckValue(); 
	//void			OnFromTimeChange(); 
	//void			OnFromTimeSetfocus(); 
	//void			OnFromTimeKillfocus(); 
	int			OnFromTimeCheckValue(); 
	//void			OnToTimeChange(); 
	//void			OnToTimeSetfocus(); 
	//void			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue(); 
	//void			OnEndDepartmentChange(); 
	//void			OnEndDepartmentSetfocus(); 
	//void			OnEndDepartmentKillfocus(); 
	int			OnEndDepartmentCheckValue(); 
	//void			OnFromTime2Change(); 
	//void			OnFromTime2Setfocus(); 
	//void			OnFromTime2Killfocus(); 
	int			OnFromTime2CheckValue(); 
	//void			OnToTime2Change(); 
	//void			OnToTime2Setfocus(); 
	//void			OnToTime2Killfocus(); 
	int			OnToTime2CheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	//void			OnArchivalNoChange(); 
	//void			OnArchivalNoSetfocus(); 
	//void			OnArchivalNoKillfocus(); 
	int			OnArchivalNoCheckValue(); 
	//void			OnStoredDateChange(); 
	//void			OnStoredDateSetfocus(); 
	//void			OnStoredDateKillfocus(); 
	int			OnStoredDateCheckValue(); 
	void			OnRecordStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRecordStatusSelendok(); 
	//void			OnRecordStatusSetfocus(); 
	//void			OnRecordStatusKillfocus(); 
	long			OnRecordStatusLoadData(); 
	//void			OnRecordStatusAddNew(); 
	//void			OnRoomIDChange(); 
	//void			OnRoomIDSetfocus(); 
	//void			OnRoomIDKillfocus(); 
	int			OnRoomIDCheckValue(); 
	//void			OnCabinetChange(); 
	//void			OnCabinetSetfocus(); 
	//void			OnCabinetKillfocus(); 
	int			OnCabinetCheckValue(); 
	//void			OnDrawerChange(); 
	//void			OnDrawerSetfocus(); 
	//void			OnDrawerKillfocus(); 
	int			OnDrawerCheckValue(); 
	//void			OnLocationChange(); 
	//void			OnLocationSetfocus(); 
	//void			OnLocationKillfocus(); 
	int			OnLocationCheckValue(); 
	//void			OnShortcutChange(); 
	//void			OnShortcutSetfocus(); 
	//void			OnShortcutKillfocus(); 
	int			OnShortcutCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CHMSRecordStorageInfo();
	~CHMSRecordStorageInfo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRecordStorageInfo(); 
	int OnEditHMSRecordStorageInfo(); 
	int OnDeleteHMSRecordStorageInfo(); 
	int OnSaveHMSRecordStorageInfo(); 
	int OnCancelHMSRecordStorageInfo(); 
	int OnHMSRecordStorageInfoListLoadData(); 
	bool LoadDataToScreen();
};
#endif
