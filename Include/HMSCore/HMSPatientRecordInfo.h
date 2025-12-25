#ifndef HMSPATIENTRECORDINFO_H
#define HMSPATIENTRECORDINFO_H

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

#define VM_BORROWDOC  0x010
#define VM_RETURNDOC  0x020
#define VM_BORROWEDIT 0x040
#define VM_BREDIT     0x080
#define VM_BRVIEW     0x100
#define VM_BRNONE     0x200

class AFX_EXT_CLASS CHMSPatientRecordInfo : public CGuiView{
protected:
	
public:
	long	m_nTreat_time;
	CGuiLabel		m_wndTimesLabel;
	CGuiNumberCtrl	m_wndTimes;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndArchivalRecordList;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndRecordInformation;
	CGuiGroupBox	m_wndRecordDiaryInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndRecordList;
	CGuiLabel		m_wndDocNoLabel;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiTextCtrl	m_wndPatientNo;
	CGuiButton		m_wndSearchPatient;
	CGuiLabel		m_wndFullNameLabel;
	CGuiTextCtrl	m_wndFullName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndOccupationLabel;
	CGuiTextCtrl	m_wndOccupation;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
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
	CGuiButton		m_wndSummary;
	CGuiListCtrl	m_wndBorrowList;
	CGuiLabel		m_wndBorrowDateLabel;
	CGuiDateCtrl	m_wndBorrowDate;
	CGuiLabel		m_wndNumberOfDateLabel;
	CGuiNumberCtrl	m_wndNumberOfDate;
	CGuiLabel		m_wndBorrowerLabel;
	CGuiTextCtrl	m_wndBorrower;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndBorrowStatusLabel;
	CGuiComboBox	m_wndBorrowStatus;
	CGuiLabel		m_wndDelivererLabel;
	CGuiTextCtrl	m_wndDeliverer;
	CGuiLabel		m_wndReturnDateLabel;
	CGuiDateCtrl	m_wndReturnDate;
	CGuiLabel		m_wndReturnStatusLabel;
	CGuiComboBox	m_wndReturnStatus;
	CGuiLabel		m_wndReturnerLabel;
	CGuiTextCtrl	m_wndReturner;
	CGuiLabel		m_wndReceiverLabel;
	CGuiTextCtrl	m_wndReceiver;
	CGuiLabel		m_wndNotesLabel;
	CGuiTextCtrl	m_wndNotes;
	CGuiLabel		m_wndSearchDepartmentLabel;
	CGuiComboBox	m_wndSearchDepartment;
	CGuiLabel		m_wndTreatmentTypeLabel;
	CGuiTextCtrl	m_wndTreatmentType;

	long	m_nTimes;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nDocumentNo;
	CString	m_szRecordNo;
	CString	m_szName;
	long	m_nDocNo;
	CString	m_szPatientNo;
	CString	m_szFullName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szOccupation;
	CString	m_szObject;
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
	CString	m_szArchivalNoOld;
	CString	m_szStoredDate;
	CString	m_szRecordStatusKey;
	CString m_szTreatmentType;
	CString m_szTreatmentTypeID;

	long	m_nRoomID;
	long	m_nCabinet;
	long	m_nDrawer;
	long	m_nLocation;
	bool	m_nOutPatient;
	
	CString	m_szPatientDead;
	CString	m_szShortcut;
	CString	m_szNote;
	CString	m_szBorrowDate;
	long	m_nNumberOfDate;
	CString	m_szBorrower;
	CString	m_szDepartmentKey;
	CString	m_szSearchDepartmentKey;
	CString	m_szReason;
	CString	m_szBorrowStatusKey;
	CString	m_szDeliverer;
	CString	m_szReturnDate;
	CString	m_szReturnStatusKey;
	CString	m_szReturner;
	CString	m_szReceiver;
	CString	m_szNotes;

	CString m_szClass;

	CDbfMap	m_hms_patient_recordTbl;
	CDbfMap m_hms_record_borrowTbl;

	CString m_szSearch;
	//CString m_szRecNo;
	CString m_szAdmitDept;
	CString m_szDischargeDept;
	CString m_szAdmitNo;
	CString m_szTempRec;

	//long m_nDoNo;
	long m_nIdx, m_nbID;
	int m_nState, m_nIndex;
	bool m_bCheck;

	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnSearchSelect(); 
	long			OnRecordListLoadData(); 
	void			OnRecordListSelectChange(int nOldItem, int nNewItem); 
	void			OnRecordListDblClick(); 
	int			OnRecordListDeleteItem(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue();
	void			OnSearchPatientSelect();
	//void			OnFullNameChange(); 
	//void			OnFullNameSetfocus(); 
	//void			OnFullNameKillfocus(); 
	int			OnFullNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnOccupationChange(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	int			OnOccupationCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
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
	void			OnRecordStatusAddNew(); 
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
	void			OnSummarySelect();
	long			OnBorrowListLoadData(); 
	void			OnBorrowListSelectChange(int nOldItem, int nNewItem); 
	void			OnBorrowListDblClick(); 
	int			OnBorrowListDeleteItem(); 
	//void			OnBorrowDateChange(); 
	//void			OnBorrowDateSetfocus(); 
	//void			OnBorrowDateKillfocus(); 
	int			OnBorrowDateCheckValue(); 
	//void			OnNumberOfDateChange(); 
	//void			OnNumberOfDateSetfocus(); 
	//void			OnNumberOfDateKillfocus(); 
	int			OnNumberOfDateCheckValue(); 
	//void			OnBorrowerChange(); 
	//void			OnBorrowerSetfocus(); 
	//void			OnBorrowerKillfocus(); 
	int			OnBorrowerCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void			OnBorrowStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBorrowStatusSelendok(); 
	//void			OnBorrowStatusSetfocus(); 
	//void			OnBorrowStatusKillfocus(); 
	long			OnBorrowStatusLoadData(); 
	void			OnBorrowStatusAddNew(); 
	//void			OnDelivererChange(); 
	//void			OnDelivererSetfocus(); 
	//void			OnDelivererKillfocus(); 
	int			OnDelivererCheckValue(); 
	//void			OnReturnDateChange(); 
	//void			OnReturnDateSetfocus(); 
	//void			OnReturnDateKillfocus(); 
	int			OnReturnDateCheckValue(); 
	void			OnReturnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReturnStatusSelendok(); 
	//void			OnReturnStatusSetfocus(); 
	//void			OnReturnStatusKillfocus(); 
	long			OnReturnStatusLoadData(); 
	void			OnReturnStatusAddNew(); 
	//void			OnReturnerChange(); 
	//void			OnReturnerSetfocus(); 
	//void			OnReturnerKillfocus(); 
	int			OnReturnerCheckValue(); 
	//void			OnReceiverChange(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	int			OnReceiverCheckValue(); 
	//void			OnNotesChange(); 
	//void			OnNotesSetfocus(); 
	//void			OnNotesKillfocus(); 
	int			OnNotesCheckValue();
	void			OnSearchDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchDepartmentSelendok(); 
	//void			OnSearchDepartmentSetfocus(); 
	void			OnSearchDepartmentKillfocus(); 
	long			OnSearchDepartmentLoadData(); 
	void			OnSearchDepartmentAddNew(); 

	CHMSPatientRecordInfo();
	~CHMSPatientRecordInfo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientRecordInfo(); 
	int OnEditHMSPatientRecordInfo(); 
	int OnDeleteHMSPatientRecordInfo(); 
	int OnSaveHMSPatientRecordInfo(); 
	int OnCancelHMSPatientRecordInfo(); 
	int OnHMSPatientRecordInfoListLoadData();
	bool LoadDataToScreen();
	void GetBorrowInfor();
	void SetValidControl();
	void SetBorrowControl(bool bState1, bool bState2);
	int OnBorrowDocument();
	int OnReturnDocument();
	int OnEditRecordBorrow();
	int OnDeleteRecordBorrow();
	int OnSaveRecordBorrow();
	int OnCancelRecordBorrow();
	int OnPrint();
	int OnReloadData();
	void SetBRMode(int nMode);
	int GetBRMode();
	void SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);
	void OnResizeLayout();
};
#endif
