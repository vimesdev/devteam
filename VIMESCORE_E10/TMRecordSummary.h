#ifndef TMRECORDSUMMARY_H
#define TMRECORDSUMMARY_H

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
class CTMRecordSummary : public CGuiDialog{
protected:
	long	m_nDocNo;
public:
	CGuiGroupBox	m_wndRecordSummary;
	CGuiLabel		m_wndTerminatedDateLabel;
	CGuiDateTimeCtrl	m_wndTerminatedDate;
	CGuiLabel		m_wndResultLabel;
	CGuiComboBox	m_wndResult;
	CGuiLabel		m_wndAdmitDiseaseLabel;
	CGuiTextCtrl	m_wndAdmitDisease;
	CGuiLabel		m_wndClinographyLabel;
	CGuiTextCtrl	m_wndClinography;
	CGuiLabel		m_wndParaclinicResultLabel;
	CGuiTextCtrl	m_wndParaclinicResult;
	CGuiLabel		m_wndPathologyLabel;
	CGuiTextCtrl	m_wndPathology;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelatedDiseaseLabel;
	CGuiTextCtrl	m_wndRelatedDisease;
	CGuiLabel		m_wndTreatmentMethodLabel;
	CGuiTextCtrl	m_wndTreatmentMethod;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiTextCtrl	m_wndSuggestion;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szTerminatedDate;
	CString	m_szResultKey;
	CString	m_szAdmitDisease;
	CString	m_szClinography;
	CString	m_szParaclinicResult;
	CString	m_szPathology;
	CString	m_szMainDisease;
	CString	m_szRelatedDisease;
	CString	m_szTreatmentMethod;
	CString	m_szSuggestion;
	CDbfMap	m_hms_clinical_recordTbl;
	//void			OnTerminatedDateChange(); 
	//void			OnTerminatedDateSetfocus(); 
	//void			OnTerminatedDateKillfocus(); 
	int			OnTerminatedDateCheckValue(); 
	void			OnResultSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResultSelendok(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	long			OnResultLoadData(); 
	//void			OnResultAddNew(); 
	//void			OnAdmitDiseaseChange(); 
	//void			OnAdmitDiseaseSetfocus(); 
	//void			OnAdmitDiseaseKillfocus(); 
	int			OnAdmitDiseaseCheckValue(); 
	//void			OnClinographyChange(); 
	//void			OnClinographySetfocus(); 
	//void			OnClinographyKillfocus(); 
	int			OnClinographyCheckValue(); 
	//void			OnParaclinicResultChange(); 
	//void			OnParaclinicResultSetfocus(); 
	//void			OnParaclinicResultKillfocus(); 
	int			OnParaclinicResultCheckValue(); 
	//void			OnPathologyChange(); 
	//void			OnPathologySetfocus(); 
	//void			OnPathologyKillfocus(); 
	int			OnPathologyCheckValue(); 
	//void			OnMainDiseaseChange(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseCheckValue(); 
	//void			OnRelatedDiseaseChange(); 
	//void			OnRelatedDiseaseSetfocus(); 
	//void			OnRelatedDiseaseKillfocus(); 
	int			OnRelatedDiseaseCheckValue(); 
	//void			OnTreatmentMethodChange(); 
	//void			OnTreatmentMethodSetfocus(); 
	//void			OnTreatmentMethodKillfocus(); 
	int			OnTreatmentMethodCheckValue(); 
	//void			OnSuggestionChange(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	int			OnSuggestionCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CTMRecordSummary(CWnd *pParent, int nDocNo);
	~CTMRecordSummary();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMRecordSummary(); 
	int OnEditTMRecordSummary(); 
	int OnDeleteTMRecordSummary(); 
	int OnSaveTMRecordSummary(); 
	int OnCancelTMRecordSummary(); 
	int OnTMRecordSummaryListLoadData(); 
};
#endif
