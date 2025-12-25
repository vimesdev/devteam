#ifndef HMSWARDTRANSFERENCE_H
#define HMSWARDTRANSFERENCE_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSWardTransference : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndWardTransferenceInfo;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndResultLabel;
	CGuiComboBox	m_wndResult;
	CGuiLabel		m_wndOutDateLabel;
	CGuiDateTimeCtrl	m_wndOutDate;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiComboBox	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndDiseaseAccompaniedLabel;
	CGuiComboBox	m_wndDiseaseAccompanied;
	CGuiLabel		m_wndPatientStatusLabel;
	CGuiTextCtrl	m_wndPatientStatus;
	CGuiLabel		m_wndTotalDateOfTreatmentLabel;
	CGuiNumberCtrl	m_wndTotalDateOfTreatment;
	CGuiLabel		m_wndWardNameLabel;
	CGuiComboBox	m_wndWardName;
	CString	m_szResultKey;
	CString	m_szOutDate;
	CString	m_szMainDiseaseKey;
	CString	m_szRelationDisease;
	CString	m_szDiseaseAccompaniedKey;
	CString	m_szPatientStatus;
	long	m_nTotalDateOfTreatment;
	CString	m_szWardNameKey;
	int			OnUpdateSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	int			OnResultSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnResultSelendok(); 
	//int			OnResultSetfocus(); 
	//int			OnResultKillfocus(); 
	int			OnResultLoadData(); 
	int			OnResultAddNew(); 
	//int			OnOutDateChange(); 
	//int			OnOutDateSetfocus(); 
	//int			OnOutDateKillfocus(); 
	int			OnOutDateCheckValue(); 
	int			OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnMainDiseaseSelendok(); 
	//int			OnMainDiseaseSetfocus(); 
	//int			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseLoadData(); 
	int			OnMainDiseaseAddNew(); 
	//int			OnRelationDiseaseChange(); 
	//int			OnRelationDiseaseSetfocus(); 
	//int			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	int			OnDiseaseAccompaniedSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDiseaseAccompaniedSelendok(); 
	//int			OnDiseaseAccompaniedSetfocus(); 
	//int			OnDiseaseAccompaniedKillfocus(); 
	int			OnDiseaseAccompaniedLoadData(); 
	int			OnDiseaseAccompaniedAddNew(); 
	//int			OnPatientStatusChange(); 
	//int			OnPatientStatusSetfocus(); 
	//int			OnPatientStatusKillfocus(); 
	int			OnPatientStatusCheckValue(); 
	//int			OnTotalDateOfTreatmentChange(); 
	//int			OnTotalDateOfTreatmentSetfocus(); 
	//int			OnTotalDateOfTreatmentKillfocus(); 
	int			OnTotalDateOfTreatmentCheckValue(); 
	int			OnWardNameSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnWardNameSelendok(); 
	//int			OnWardNameSetfocus(); 
	//int			OnWardNameKillfocus(); 
	int			OnWardNameLoadData(); 
	int			OnWardNameAddNew(); 
	CHMSWardTransference();
	~CHMSWardTransference();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSWardTransference(); 
	int OnEditHMSWardTransference(); 
	int OnDeleteHMSWardTransference(); 
	int OnSaveHMSWardTransference(); 
	int OnCancelHMSWardTransference(); 
};
#endif
