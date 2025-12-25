#ifndef HMSADDAPPOINTMENTA20_H
#define HMSADDAPPOINTMENTA20_H

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
class CHMSAddAppointmentA20 : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndAppointmentInfomation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndLoad;
	CGuiGroupBox	m_wndAppointmentList;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndSearchDocnoLabel;
	CGuiNumberCtrl	m_wndSearchDoc;
	CGuiLabel		m_wndSearchRecordLabel;
	CGuiTextCtrl	m_wndSearchRecord;
	CGuiLabel		m_wndPatientNameSearchLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDocnoLabel;
	CGuiNumberCtrl	m_wndDocno;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiNumberCtrl	m_wndYob;
	CGuiLabel		m_wndAdressLabel;
	CGuiTextCtrl	m_wndAdress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndTrustUseLabel;
	CGuiComboBox	m_wndTrust;
	CGuiLabel		m_wndTheLabel;
	CGuiComboBox	m_wndbe;
	CGuiLabel		m_wndDiCanLabel;
	CGuiComboBox	m_wndDiCan;
	CGuiLabel		m_wndTGLabel;
	CGuiNumberCtrl	m_wndTG;
	CGuiNumberCtrl	m_wndATG;
	CGuiLabel		m_wndATGLabel;
	CGuiLabel		m_wndAppointmentDateLabel;
	CGuiDateCtrl	m_wndAppointmentDate;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndTreattimeLabel;
	CGuiNumberCtrl	m_wndTreattime;
	CGuiLabel		m_wndTherapeuticdoseLabel;
	CGuiComboBox	m_wndTherapeuticdose;
	CGuiLabel		m_wndIot131Label;
	CGuiComboBox	m_wndIot;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrintAppoint;
	CGuiLabel		m_wndTypeSearchLabel;
	CGuiComboBox	m_wndTypeSearch;
	CGuiLabel		m_wndStageLabel;
	CGuiTextCtrl	m_wndStage;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nSearchDoc;
	CString	m_szSearchRecord;
	CString	m_szSearchName;
	long	m_nDocno;
	CString	m_szPatientName;
	long	m_nYob;
	CString	m_szAdress;
	CString	m_szPhone;
	CString	m_szTypeKey;
	CString	m_szDiagnostic;
	CString	m_szTrustKey;
	CString	m_szbeKey;
	CString	m_szDiCanKey;
	float	m_nTG;
	float	m_nATG;
	CString	m_szAppointmentDate;
	CString	m_szRecordNo;
	CString	m_szTreattimeKey;
	long	m_nTreattime;
	CString	m_szTherapeuticdoseKey;
	CString	m_szIotKey;
	CString	m_szTypeSearchKey;
	CString	m_szStage;
	CString	m_szDoctorKey;
	long m_nReceptNo;
	long	m_nPatientNo;
	CDbfMap	m_hms_appointment_detailTbl;
	bool	m_bLoad;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnLoadSelect(); 
	void			OnExportSelect(); 
	void			OnPrintSelect(); 
	//void			OnSearchDocChange(); 
	//void			OnSearchDocSetfocus(); 
	//void			OnSearchDocKillfocus(); 
	int			OnSearchDocCheckValue(); 
	//void			OnSearchRecordChange(); 
	//void			OnSearchRecordSetfocus(); 
	//void			OnSearchRecordKillfocus(); 
	int			OnSearchRecordCheckValue(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnDocnoChange(); 
	//void			OnDocnoSetfocus(); 
	//void			OnDocnoKillfocus(); 
	int			OnDocnoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnAdressChange(); 
	//void			OnAdressSetfocus(); 
	//void			OnAdressKillfocus(); 
	int			OnAdressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	void			OnTrustSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTrustSelendok(); 
	//void			OnTrustSetfocus(); 
	//void			OnTrustKillfocus(); 
	long			OnTrustLoadData(); 
	//void			OnTrustAddNew(); 
	void			OnbeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnbeSelendok(); 
	//void			OnbeSetfocus(); 
	//void			OnbeKillfocus(); 
	long			OnbeLoadData(); 
	//void			OnbeAddNew(); 
	void			OnDiCanSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiCanSelendok(); 
	//void			OnDiCanSetfocus(); 
	//void			OnDiCanKillfocus(); 
	long			OnDiCanLoadData(); 
	//void			OnDiCanAddNew(); 
	//void			OnTGChange(); 
	//void			OnTGSetfocus(); 
	//void			OnTGKillfocus(); 
	int			OnTGCheckValue(); 
	//void			OnATGChange(); 
	//void			OnATGSetfocus(); 
	//void			OnATGKillfocus(); 
	int			OnATGCheckValue(); 
	//void			OnAppointmentDateChange(); 
	//void			OnAppointmentDateSetfocus(); 
	//void			OnAppointmentDateKillfocus(); 
	int			OnAppointmentDateCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	//void			OnTreattimeChange(); 
	//void			OnTreattimeSetfocus(); 
	//void			OnTreattimeKillfocus(); 
	int			OnTreattimeCheckValue();
	void			OnTherapeuticdoseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTherapeuticdoseSelendok(); 
	//void			OnTherapeuticdoseSetfocus(); 
	//void			OnTherapeuticdoseKillfocus(); 
	long			OnTherapeuticdoseLoadData(); 
	//void			OnTherapeuticdoseAddNew(); 
	void			OnIotSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIotSelendok();  
	long			OnIotLoadData(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintAppointSelect(); 
		void			OnTypeSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSearchSelendok(); 
	//void			OnTypeSearchSetfocus(); 
	//void			OnTypeSearchKillfocus(); 
	long			OnTypeSearchLoadData(); 
	//void			OnTypeSearchAddNew(); 
	//void			OnStageChange(); 
	//void			OnStageSetfocus(); 
	//void			OnStageKillfocus(); 
	int			OnStageCheckValue(); 
	
	CHMSAddAppointmentA20(CWnd *pParent);
	~CHMSAddAppointmentA20();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAddAppointmentA20(); 
	int OnEditHMSAddAppointmentA20(); 
	int OnDeleteHMSAddAppointmentA20(); 
	int OnSaveHMSAddAppointmentA20(); 
	int OnCancelHMSAddAppointmentA20(); 
	int OnHMSAddAppointmentA20ListLoadData(); 
	void EnableGroup(bool bFlag);
	bool CheckAddAppoinment();
};
#endif
