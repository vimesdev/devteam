#ifndef HMSPATIENTCAREDLG_H
#define HMSPATIENTCAREDLG_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"

///////////////////////////////////////////
//PHIEU CHAM SOC
///////////////////////////////////////////

class CHMSPatientCareDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPatientCareInformation;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndMedicalInstructionLabel;
	CGuiTextCtrl	m_wndMedicalInstruction;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szDate;
	CString	m_szDescription;
	CString	m_szDoctorKey;
	CString	m_szMedicalInstruction;
	//int			OnDateChange(); 
	//int			OnDateSetfocus(); 
	//int			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//int			OnDescriptionChange(); 
	//int			OnDescriptionSetfocus(); 
	//int			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	int			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDoctorSelendok(); 
	//int			OnDoctorSetfocus(); 
	//int			OnDoctorKillfocus(); 
	int			OnDoctorLoadData(); 
	int			OnDoctorAddNew(); 
	//int			OnMedicalInstructionChange(); 
	//int			OnMedicalInstructionSetfocus(); 
	//int			OnMedicalInstructionKillfocus(); 
	int			OnMedicalInstructionCheckValue(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CHMSPatientCareDlg();
	~CHMSPatientCareDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSPatientCareDlg(); 
	int OnEditHMSPatientCareDlg(); 
	int OnDeleteHMSPatientCareDlg(); 
	int OnSaveHMSPatientCareDlg(); 
	int OnCancelHMSPatientCareDlg(); 
};
#endif
