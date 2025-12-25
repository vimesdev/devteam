#ifndef HMSADMISSIONREGISTRATIONDIALOG_H
#define HMSADMISSIONREGISTRATIONDIALOG_H

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
class CHMSAdmissionRegistrationDialog : public CGuiDialog
{
protected:
	bool	m_bHasAdmissionRegistration;
public:
	long	m_nDocumentNo;
	int		m_nIndex;
	CString	m_szStatus;
	CString	m_szOutPatient;
	CString	m_szWard;
	CString m_szCardNo;

	CGuiButton		m_wndPrint;
	void			OnPrintSelect();
	CGuiGroupBox	m_wndAdmissionInformation;
	CGuiGroupBox	m_wndContactInformation;
	CGuiGroupBox	m_wndDepartmentAdmitedInformation;
	CGuiLabel		m_wndRelativeLabel;
	CGuiTextCtrl	m_wndRelative;
	CGuiLabel		m_wndRelationLabel;
	CGuiComboBox	m_wndRelation;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndAdmissionNoLabel;
	CGuiTextCtrl	m_wndAdmissionNo;
	CGuiLabel		m_wndTimes;
	CGuiNumberCtrl	m_wndTimesOfAdmision;
	CGuiLabel		m_wndAdmisionDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndAdmitedDirectionLabel;
	CGuiComboBox	m_wndAdmitedDirection;
	CGuiLabel		m_wndTransferPlaceLabel;
	CGuiComboBox	m_wndTransferPlace;
	CGuiLabel		m_wndTransferDiagnosticLabel;
	CGuiTextCtrl	m_wndTransferDiagnostic;
	CGuiLabel		m_wndExamineDiseaseLabel;
	CGuiTextCtrl	m_wndExamineDisease;
	CGuiLabel		m_wndInDateLabel;
	CGuiDateTimeCtrl	m_wndInDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndEmergency;
	CGuiCheckBox	m_wndCancer;
	CGuiNumberCtrl	m_wndCancerTime;
	CGuiCheckBox	m_wndHasAllergy;
	CGuiLabel		m_wndAdmissionICDLabel;
	CGuiComboBox	m_wndAdmissionICD;
	CGuiLabel		m_wndAdmissionDiseaseLabel;
	CGuiTextCtrl	m_wndAdmissionDisease;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndIssueNumberLabel;
	CGuiNumberCtrl	m_wndIssueNumber;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndLoaidieutriLabel;
	CGuiComboBox	m_wndLoaidieutri;
	CGuiLabel		m_wndPhanloaibenhcovidLabel;
	CGuiComboBox	m_wndPhanloaibenhcovid19;
	CGuiLabel		m_wndGheptangLabel;
	CGuiComboBox	m_wndGheptang;
	CGuiLabel		m_wndLoaiKCBLabel;
	CGuiComboBox	m_wndLoaiKCB;
	CGuiLabel		m_wndTreatModeLabel;
	CGuiComboBox	m_wndTreatMode;
	CGuiLabel		m_wndPhanloaiUngthuLabel;
	CGuiComboBox	m_wndPhanloaiUngthu;


	CString	m_szRelative;
	CString	m_szRelationKey;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szAdmissionNo;
	CString m_szTiles;
	long	m_nTimesOfAdmision;
	CString	m_szAdmitDate;
	CString	m_szPhanloaibenhcovid19Key;

	BOOL	m_bEmergency;
	BOOL	m_bOutpatient;
	int		m_nCancerTime;

	long	m_nIssueNumber;
	CString	m_szNote;
	CString	m_szPhanloaiUngthuKey;

	CString	m_szAdmitedDirectionKey;
	CString	m_szTransferPlaceKey;
	CString	m_szTransferDiagnostic;
	CString	m_szExamineDisease;
	CString	m_szInDate;
	CString m_szDoctorKey;
	BOOL	m_bCancer;
	BOOL	m_bHasAllergy;
	CString	m_szAdmissionICDKey;
	CString m_szAdmissionDisease;
	CString	m_szMainDiseaseKey;
	CString	m_szRelationDisease;
	CString	m_szLoaidieutriKey;

	CString	m_szGheptangKey;
	CString	m_szLoaiKCBKey;
	CString	m_szTreatModeKey;

	CDbfMap	m_hms_treatment_recordTbl;
	//void			OnRelativeChange(); 
	//void			OnRelativeSetfocus(); 
	//void			OnRelativeKillfocus(); 
	int			OnRelativeCheckValue();
	bool		CheckRollbackDocument(int m_nDocno);
	void			OnRelationSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnRelationSelendok();
	//void			OnRelationSetfocus(); 
	//void			OnRelationKillfocus(); 
	long			OnRelationLoadData();
	void			OnRelationAddNew();
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue();
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue();
	//void			OnAdmissionNoChange(); 
	//void			OnAdmissionNoSetfocus(); 
	//void			OnAdmissionNoKillfocus(); 
	int			OnAdmissionNoCheckValue();
	//void			OnTimesOfAdmisionChange(); 
	//void			OnTimesOfAdmisionSetfocus(); 
	//void			OnTimesOfAdmisionKillfocus(); 
	int			OnTimesOfAdmisionCheckValue();
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue();
	void			OnAdmitedDirectionSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnAdmitedDirectionSelendok();
	//void			OnAdmitedDirectionSetfocus(); 
	//void			OnAdmitedDirectionKillfocus(); 
	long			OnAdmitedDirectionLoadData();
	void			OnAdmitedDirectionAddNew();
	void			OnTransferPlaceSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTransferPlaceSelendok();
	//void			OnTransferPlaceSetfocus(); 
	//void			OnTransferPlaceKillfocus(); 
	long			OnTransferPlaceLoadData();
	void			OnTransferPlaceAddNew();
	//void			OnTransferDiagnosticChange(); 
	//void			OnTransferDiagnosticSetfocus(); 
	//void			OnTransferDiagnosticKillfocus(); 
	int			OnTransferDiagnosticCheckValue();
	//void			OnExamineDiseaseChange(); 
	//void			OnExamineDiseaseSetfocus(); 
	//void			OnExamineDiseaseKillfocus(); 
	int			OnExamineDiseaseCheckValue();
	//void			OnInDateChange(); 
	//void			OnInDateSetfocus(); 
	//void			OnInDateKillfocus(); 
	int			OnInDateCheckValue();
	long		OnDoctorLoadData();
	void			OnCancerSelect();
	void			OnAdmissionICDSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnAdmissionICDSelendok();
	//void			OnAdmissionICDSetfocus(); 
	//void			OnAdmissionICDKillfocus(); 
	long			OnAdmissionICDLoadData();
	void			OnAdmissionICDAddNew();
	void			OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnMainDiseaseSelendok();
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	long			OnMainDiseaseLoadData();
	void			OnMainDiseaseAddNew();
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue();
	void			OnRelationDiseaseSelect();
	//void			OnIssueNumberChange(); 
	//void			OnIssueNumberSetfocus(); 
	//void			OnIssueNumberKillfocus(); 
	int			OnIssueNumberCheckValue();
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue();
	int			OnUpdateAdmitDiseaseInformation();

	void			OnTreatModeSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTreatModeSelendok();
	//void			OnTreatModeSetfocus(); 
	//void			OnTreatModeKillfocus(); 

	long			OnLoaidieutriLoadData();
	void			OnTreatModeAddNew();
	void			OnSaveSelect();
	void			OnCancelSelect();
	//void			OnCancerTimeChange(); 
	//void			OnCancerTimeSetfocus(); 
	//void			OnCancerTimeKillfocus(); 
	int			OnCancerTimeCheckValue();
	int			OnUpdateIssueNumberInformation();
	long			OnPhanloaibenhcovid19LoadData();
	long			OnLoaiKCBLoadData();
	long			OnTreatModeLoadData();
	long			OnPhanloaiUngthuLoadData();
	CHMSAdmissionRegistrationDialog(CWnd* pParent);
	~CHMSAdmissionRegistrationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdmissionRegistrationDialog();
	int OnEditHMSAdmissionRegistrationDialog();
	int OnDeleteHMSAdmissionRegistrationDialog();
	int OnSaveHMSAdmissionRegistrationDialog();
	int OnCancelHMSAdmissionRegistrationDialog();
	int OnHMSAdmissionRegistrationDialogListLoadData();
	long			OnGheptangLoadData();
};
#endif