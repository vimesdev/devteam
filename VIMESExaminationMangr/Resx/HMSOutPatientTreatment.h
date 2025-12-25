#ifndef HMSOUTPATIENTTREATMENT_H
#define HMSOUTPATIENTTREATMENT_H

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
class CHMSOutPatientTreatment : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndTreatInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTreatDaysLabel;
	CGuiNumberCtrl	m_wndTreatDays;
	CGuiLabel		m_wndICDDiagnosicLabel;
	CGuiComboBox	m_wndICDDiagnostic;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndTreatMethodLabel;
	CGuiTextCtrl	m_wndTreatMethod;
	CGuiLabel		m_wndResultLabel;
	CGuiTextCtrl	m_wndResult;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndTerminate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nTreatDays;
	CString	m_szICDDiagnosticKey;
	CString	m_szMainDisease;
	CString	m_szRelationDisease;
	CString	m_szConclusion;
	CString	m_szTreatMethod;
	CString	m_szResult;
	CString	m_szNote;
	CDbfMap	m_hms_outpatientTbl;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnTreatDaysChange(); 
	//void			OnTreatDaysSetfocus(); 
	//void			OnTreatDaysKillfocus(); 
	int			OnTreatDaysCheckValue(); 
	void			OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICDDiagnosticSelendok(); 
	//void			OnICDDiagnosticSetfocus(); 
	//void			OnICDDiagnosticKillfocus(); 
	long			OnICDDiagnosticLoadData(); 
	void			OnICDDiagnosticAddNew(); 
	//void			OnMainDiseaseChange(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseCheckValue(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	//void			OnTreatMethodChange(); 
	//void			OnTreatMethodSetfocus(); 
	//void			OnTreatMethodKillfocus(); 
	int			OnTreatMethodCheckValue(); 
	//void			OnResultChange(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnTerminateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CHMSOutPatientTreatment();
	~CHMSOutPatientTreatment();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOutPatientTreatment(); 
	int OnEditHMSOutPatientTreatment(); 
	int OnDeleteHMSOutPatientTreatment(); 
	int OnSaveHMSOutPatientTreatment(); 
	int OnCancelHMSOutPatientTreatment(); 
	int OnHMSOutPatientTreatmentListLoadData(); 
};
#endif
