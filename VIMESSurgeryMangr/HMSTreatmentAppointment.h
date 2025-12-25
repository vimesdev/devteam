#ifndef HMSTREATMENTAPPOINTMENT_H
#define HMSTREATMENTAPPOINTMENT_H

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
class CHMSTreatmentAppointment : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndTreatmentAppointment;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndDocumentIDLabel;
	CGuiTextCtrl	m_wndDocumentID;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndAppointmentDateLabel;
	CGuiDateCtrl	m_wndAppointmentDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndShapeLabel;
	CGuiTextCtrl	m_wndShape;
	CGuiLabel		m_wndMetastasisLabel;
	CGuiComboBox	m_wndMetastasis;
	CGuiLabel		m_wndTGATGLabel;
	CGuiTextCtrl	m_wndTGATG;
	CGuiLabel		m_wndScheduleTreatmentLabel;
	CGuiTextCtrl	m_wndScheduleTreatment;
	CGuiLabel		m_wndScheduleDiagnoseLabel;
	CGuiComboBox	m_wndScheduleDiagnose;
	CGuiLabel		m_wndScheduleI131Label;
	CGuiTextCtrl	m_wndScheduleI131;
	CGuiLabel		m_wndDoctorDateLabel;
	CGuiComboBox	m_wndDoctorDate;
	CGuiLabel		m_wndPharmacistDateLabel;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiComboBox	m_wndPharmacistDate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndAppointmentList;
	CGuiButton		m_wndUpdate;
	CString	m_szDocumentNo;
	CString	m_szPatientName;
	CString	m_szDocumentID;
	CString	m_szPhone;
	CString	m_szAppointmentDate;
	CString	m_szTypeKey;
	CString	m_szShape;
	CString	m_szMetastasisKey;
	CString	m_szTGATG;
	CString	m_szScheduleTreatment;
	CString	m_szScheduleDiagnoseKey;
	CString	m_szScheduleI131;
	CString	m_szDoctorDateKey;
	CString	m_szNote;
	CString	m_szPharmacistDateKey;
	long	m_nDocNo;
	long	m_nPNo;
	long m_nIndex;
	CDbfMap m_tbl_appointment;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnDocumentIDChange(); 
	//void			OnDocumentIDSetfocus(); 
	//void			OnDocumentIDKillfocus(); 
	int			OnDocumentIDCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnAppointmentDateChange(); 
	//void			OnAppointmentDateSetfocus(); 
	//void			OnAppointmentDateKillfocus(); 
	int			OnAppointmentDateCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnShapeChange(); 
	//void			OnShapeSetfocus(); 
	//void			OnShapeKillfocus(); 
	int			OnShapeCheckValue(); 
	void			OnMetastasisSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMetastasisSelendok(); 
	//void			OnMetastasisSetfocus(); 
	//void			OnMetastasisKillfocus(); 
	long			OnMetastasisLoadData(); 
	//void			OnMetastasisAddNew(); 
	//void			OnTGATGChange(); 
	//void			OnTGATGSetfocus(); 
	//void			OnTGATGKillfocus(); 
	int			OnTGATGCheckValue(); 
	//void			OnScheduleTreatmentChange(); 
	//void			OnScheduleTreatmentSetfocus(); 
	//void			OnScheduleTreatmentKillfocus(); 
	int			OnScheduleTreatmentCheckValue(); 
	void			OnScheduleDiagnoseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnScheduleDiagnoseSelendok(); 
	//void			OnScheduleDiagnoseSetfocus(); 
	//void			OnScheduleDiagnoseKillfocus(); 
	long			OnScheduleDiagnoseLoadData(); 
	//void			OnScheduleDiagnoseAddNew(); 
	//void			OnScheduleI131Change(); 
	//void			OnScheduleI131Setfocus(); 
	//void			OnScheduleI131Killfocus(); 
	int			OnScheduleI131CheckValue(); 
	void			OnDoctorDateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorDateSelendok(); 
	//void			OnDoctorDateSetfocus(); 
	//void			OnDoctorDateKillfocus(); 
	long			OnDoctorDateLoadData(); 
	//void			OnDoctorDateAddNew(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnPharmacistDateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPharmacistDateSelendok(); 
	//void			OnPharmacistDateSetfocus(); 
	//void			OnPharmacistDateKillfocus(); 
	long			OnPharmacistDateLoadData(); 
	//void			OnPharmacistDateAddNew(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	long			OnAppointmentListLoadData(); 
	void			OnAppointmentListSelectChange(int nOldItem, int nNewItem); 
	void			OnAppointmentListDblClick(); 
	int			OnAppointmentListDeleteItem(); 
	void			OnUpdateSelect(); 
	void			OnLoadBasicInfo();
	CHMSTreatmentAppointment(CWnd *pParent);
	~CHMSTreatmentAppointment();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentAppointment(); 
	int OnEditHMSTreatmentAppointment(); 
	int OnDeleteHMSTreatmentAppointment(); 
	int OnSaveHMSTreatmentAppointment(); 
	int OnCancelHMSTreatmentAppointment(); 
	int OnHMSTreatmentAppointmentListLoadData(); 
};
#endif
