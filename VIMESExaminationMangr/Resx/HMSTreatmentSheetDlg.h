#ifndef HMSTREATMENTSHEETDLG_H
#define HMSTREATMENTSHEETDLG_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSTreatmentSheetDlg : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndTreatmentInformation;
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
	CHMSTreatmentSheetDlg();
	~CHMSTreatmentSheetDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSTreatmentSheetDlg(); 
	int OnEditHMSTreatmentSheetDlg(); 
	int OnDeleteHMSTreatmentSheetDlg(); 
	int OnSaveHMSTreatmentSheetDlg(); 
	int OnCancelHMSTreatmentSheetDlg(); 
};
#endif
