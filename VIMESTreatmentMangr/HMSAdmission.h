#ifndef HMSADMISSION_H
#define HMSADMISSION_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSAdmission : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndAdmissionInformation;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndICDDiagnosticLabel;
	CGuiComboBox	m_wndICDDiagnostic;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiCheckBox	m_wndOutPatient;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szDate;
	CString	m_szDepartmentKey;
	CString	m_szICDDiagnosticKey;
	CString	m_szMainDisease;
	CString	m_szRelationDisease;
	CString	m_szConclusion;
	BOOL	m_bOutPatient;
	bool	m_bAddNew;
	int		m_nIndex;
	CString	m_szStatus;
	
	CString m_szTerminateBed;
	CDbfMap	m_hms_treatment_recordTbl;
	bool	OnCheckAdmitdateBed(int m_nDocno, CString m_szDeptID);

	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
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
	void			OnOutPatientSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSAdmission();
	~CHMSAdmission();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdmission(); 
	int OnEditHMSAdmission(); 
	int OnDeleteHMSAdmission(); 
	int OnSaveHMSAdmission(); 
	int OnCancelHMSAdmission(); 
	int OnHMSAdmissionListLoadData(); 
};
#endif
