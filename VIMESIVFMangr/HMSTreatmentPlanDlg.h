#ifndef HMSTREATMENTPLANDLG_H
#define HMSTREATMENTPLANDLG_H

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

///////////////////////////////////////////
//KE HOAC DIEU TRI
///////////////////////////////////////////

class CHMSTreatmentPlanDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndTreatmentPlan;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiTextCtrl	m_wndPatientNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndDocIDLabel;
	CGuiTextCtrl	m_wndDocID;
	CGuiLabel		m_wndDetectTimeLabel;
	CGuiDateCtrl	m_wndDetectTime;
	CGuiLabel		m_wndSymptomLabel;
	CGuiTextCtrl	m_wndSymptom;
	CGuiLabel		m_wndSurgeryLabel;
	CGuiTextCtrl	m_wndSurgery;
	CGuiLabel		m_wndAdditionSurgeryLabel;
	CGuiTextCtrl	m_wndAdditionSurgery;
	CGuiLabel		m_wndAfterSurgeryLabel;
	CGuiTextCtrl	m_wndAfterSurgery;
	CGuiLabel		m_wndGPBLLabel;
	CGuiTextCtrl	m_wndGPBL;
	CGuiLabel		m_wndNeckGanglionLabel;
	CGuiTextCtrl	m_wndNeckGanglion;
	CGuiLabel		m_wndDiseaseCombineLabel;
	CGuiTextCtrl	m_wndDiseaseCombine;
	CGuiLabel		m_wndUsingDrugLabel;
	CGuiTextCtrl	m_wndUsingDrug;
	CGuiLabel		m_wndFamilyLabel;
	CGuiComboBox	m_wndFamily;
	CGuiLabel		m_wndCQKhacLabel;
	CGuiTextCtrl	m_wndCQKhac;
	CGuiLabel		m_wndRelapseRiskLabel;
	CGuiTextCtrl	m_wndRelapseRisk;
	CGuiLabel		m_wndTSHLabel;
	CGuiTextCtrl	m_wndTSH;
	CGuiLabel		m_wndCanxiLabel;
	CGuiTextCtrl	m_wndCanxi;
	CGuiLabel		m_wndKaliLabel;
	CGuiTextCtrl	m_wndKali;
	CGuiLabel		m_wndTestThaiLabel;
	CGuiTextCtrl	m_wndTestThai;
	CGuiLabel		m_wndTgATgChangeLabel;
	CGuiTextCtrl	m_wndTgATgChange;
	CGuiLabel		m_wndSideEffectLabel;
	CGuiTextCtrl	m_wndSideEffect;
	CGuiLabel		m_wndTgLabel;
	CGuiTextCtrl	m_wndTg;
	CGuiTextCtrl	m_wndATg;
	CGuiLabel		m_wndATgLabel;
	CGuiTextCtrl	m_wndDose;
	CGuiLabel		m_wndDoseLabel;
	CGuiLabel		m_wndTimeLabel;
	CGuiTextCtrl	m_wndTime;
	CGuiLabel		m_wndOBloodChemistryLabel;
	CGuiComboBox	m_wndOBloodChemistry;
	CGuiTextCtrl	m_wndBloodWeirdo;
	CGuiLabel		m_wndBloodFormulaLabel;
	CGuiComboBox	m_wndBloodFormula;
	CGuiLabel		m_wndUltraSonicNeckLabel;
	CGuiTextCtrl	m_wndUltraSonicNeck;
	CGuiLabel		m_wndUltraSonicAbdomenLabel;
	CGuiTextCtrl	m_wndUltraSonicAbdomen;
	CGuiLabel		m_wndImagingAfterTreatLabel;
	CGuiLabel		m_wndIATSpotLabel;
	CGuiTextCtrl	m_wndIATSpot;
	CGuiLabel		m_wndIATAllLabel;
	CGuiTextCtrl	m_wndIATAll;
	CGuiLabel		m_wndImaging2MCILabel;
	CGuiLabel		m_wndI2MSpotLabel;
	CGuiTextCtrl	m_wndI2MSpot;
	CGuiLabel		m_wndI2MAllLabel;
	CGuiTextCtrl	m_wndI2MAll;
	CGuiLabel		m_wndBISPECTLabel;
	CGuiTextCtrl	m_wndBISPECT;
	CGuiLabel		m_wndBoneImagingLabel;
	CGuiLabel		m_wndBICTLabel;
	CGuiTextCtrl	m_wndBICT;
	CGuiLabel		m_wndDiagnoseLabel;
	CGuiTextCtrl	m_wndDiagnose;
	CGuiLabel		m_wndStageLabel;
	CGuiTextCtrl	m_wndStage;
	CGuiLabel		m_wndAttackDiseaseLabel;
	CGuiTextCtrl	m_wndAttackDisease;
	CGuiLabel		m_wndExpectedTherapeuticDoseLabel;
	CGuiTextCtrl	m_wndExpectedTherapeuticDose;
	CGuiLabel		m_wndTreatmentReasonLabel;
	CGuiTextCtrl	m_wndTreatmentReason;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndAppointmentList;
	long	m_nPatientNo;
	CString	m_szPatientName;
	CString	m_szDocID;
	CString	m_szDetectTime;
	CString	m_szSymptom;
	CString	m_szSurgery;
	CString	m_szAdditionSurgery;
	CString	m_szAfterSurgery;
	CString	m_szGPBL;
	CString	m_szDiseaseCombine;
	CString	m_szUsingDrug;
	CString	m_szFamilyKey;
	CString	m_szCQKhac;
	CString	m_szTSH;
	CString	m_szCanxi;
	CString	m_szKali;
	CString	m_szTestThai;
	CString	m_szTgATgChange;
	CString	m_szSideEffect;
	CString	m_szTg;
	CString	m_szATg;
	CString	m_szDose;
	CString	m_szTime;
	CString	m_szOBloodChemistryKey;
	CString	m_szBloodWeirdo;
	CString	m_szBloodFormulaKey;
	CString	m_szUltraSonicNeck;
	CString	m_szUltraSonicAbdomen;
	CString	m_szIATSpot;
	CString	m_szIATAll;
	CString	m_szI2MSpot;
	CString	m_szI2MAll;
	CString	m_szBISPECT;
	CString	m_szBICT;
	CString	m_szDiagnose;
	CString	m_szStage;
	CString	m_szAttackDisease;
	CString	m_szExpectedTherapeuticDose;
	CString	m_szTreatmentReason;
	int		m_nIDx;
	CString	m_szRelapseRisk;
	CString	m_szNeckGanglion;
	long m_nDocNo;

	CDbfMap m_tblTreatmentPlan;
	CDbfMap m_tblTGATG;
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnDocIDChange(); 
	//void			OnDocIDSetfocus(); 
	//void			OnDocIDKillfocus(); 
	int			OnDocIDCheckValue(); 
	//void			OnDetectTimeChange(); 
	//void			OnDetectTimeSetfocus(); 
	//void			OnDetectTimeKillfocus(); 
	int			OnDetectTimeCheckValue(); 
	//void			OnSymptomChange(); 
	//void			OnSymptomSetfocus(); 
	//void			OnSymptomKillfocus(); 
	int			OnSymptomCheckValue(); 
	//void			OnSurgeryChange(); 
	//void			OnSurgerySetfocus(); 
	//void			OnSurgeryKillfocus(); 
	int			OnSurgeryCheckValue(); 
	//void			OnAdditionSurgeryChange(); 
	//void			OnAdditionSurgerySetfocus(); 
	//void			OnAdditionSurgeryKillfocus(); 
	int			OnAdditionSurgeryCheckValue(); 
	//void			OnAfterSurgeryChange(); 
	//void			OnAfterSurgerySetfocus(); 
	//void			OnAfterSurgeryKillfocus(); 
	int			OnAfterSurgeryCheckValue(); 
	//void			OnGPBLChange(); 
	//void			OnGPBLSetfocus(); 
	//void			OnGPBLKillfocus(); 
	int			OnGPBLCheckValue(); 
	//void			OnRelapseRiskChange(); 
	//void			OnRelapseRiskSetfocus(); 
	//void			OnRelapseRiskKillfocus(); 
	int			OnRelapseRiskCheckValue(); 
	
	//void			OnDiseaseCombineChange(); 
	//void			OnDiseaseCombineSetfocus(); 
	//void			OnDiseaseCombineKillfocus(); 
	int			OnDiseaseCombineCheckValue(); 
	//void			OnUsingDrugChange(); 
	//void			OnUsingDrugSetfocus(); 
	//void			OnUsingDrugKillfocus(); 
	int			OnUsingDrugCheckValue(); 
	void			OnFamilySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFamilySelendok(); 
	//void			OnFamilySetfocus(); 
	//void			OnFamilyKillfocus(); 
	long			OnFamilyLoadData(); 
	//void			OnFamilyAddNew(); 
	//void			OnCQKhacChange(); 
	//void			OnCQKhacSetfocus(); 
	//void			OnCQKhacKillfocus(); 
	int			OnCQKhacCheckValue(); 
	//void			OnNeckGanglionChange(); 
	//void			OnNeckGanglionSetfocus(); 
	//void			OnNeckGanglionKillfocus(); 
	int			OnNeckGanglionCheckValue();
	//void			OnTSHChange(); 
	//void			OnTSHSetfocus(); 
	//void			OnTSHKillfocus(); 
	int			OnTSHCheckValue(); 
	//void			OnCanxiChange(); 
	//void			OnCanxiSetfocus(); 
	//void			OnCanxiKillfocus(); 
	int			OnCanxiCheckValue(); 
	//void			OnKaliChange(); 
	//void			OnKaliSetfocus(); 
	//void			OnKaliKillfocus(); 
	int			OnKaliCheckValue(); 
	//void			OnTestThaiChange(); 
	//void			OnTestThaiSetfocus(); 
	//void			OnTestThaiKillfocus(); 
	int			OnTestThaiCheckValue(); 
	//void			OnTgATgChangeChange(); 
	//void			OnTgATgChangeSetfocus(); 
	//void			OnTgATgChangeKillfocus(); 
	int			OnTgATgChangeCheckValue(); 
	//void			OnSideEffectChange(); 
	//void			OnSideEffectSetfocus(); 
	//void			OnSideEffectKillfocus(); 
	int			OnSideEffectCheckValue(); 
	//void			OnTgChange(); 
	//void			OnTgSetfocus(); 
	//void			OnTgKillfocus(); 
	int			OnTgCheckValue(); 
	//void			OnATgChange(); 
	//void			OnATgSetfocus(); 
	//void			OnATgKillfocus(); 
	int			OnATgCheckValue(); 
	//void			OnDoseChange(); 
	//void			OnDoseSetfocus(); 
	//void			OnDoseKillfocus(); 
	int			OnDoseCheckValue(); 
	//void			OnTimeChange(); 
	//void			OnTimeSetfocus(); 
	//void			OnTimeKillfocus(); 
	int			OnTimeCheckValue(); 
	void			OnOBloodChemistrySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOBloodChemistrySelendok(); 
	//void			OnOBloodChemistrySetfocus(); 
	//void			OnOBloodChemistryKillfocus(); 
	long			OnOBloodChemistryLoadData(); 
	//void			OnOBloodChemistryAddNew(); 
	//void			OnBloodWeirdoChange(); 
	//void			OnBloodWeirdoSetfocus(); 
	//void			OnBloodWeirdoKillfocus(); 
	int			OnBloodWeirdoCheckValue(); 
	void			OnBloodFormulaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBloodFormulaSelendok(); 
	//void			OnBloodFormulaSetfocus(); 
	//void			OnBloodFormulaKillfocus(); 
	long			OnBloodFormulaLoadData(); 
	//void			OnBloodFormulaAddNew(); 
	//void			OnUltraSonicNeckChange(); 
	//void			OnUltraSonicNeckSetfocus(); 
	//void			OnUltraSonicNeckKillfocus(); 
	int			OnUltraSonicNeckCheckValue(); 
	//void			OnUltraSonicAbdomenChange(); 
	//void			OnUltraSonicAbdomenSetfocus(); 
	//void			OnUltraSonicAbdomenKillfocus(); 
	int			OnUltraSonicAbdomenCheckValue(); 
	//void			OnIATSpotChange(); 
	//void			OnIATSpotSetfocus(); 
	//void			OnIATSpotKillfocus(); 
	int			OnIATSpotCheckValue(); 
	//void			OnIATAllChange(); 
	//void			OnIATAllSetfocus(); 
	//void			OnIATAllKillfocus(); 
	int			OnIATAllCheckValue(); 
	//void			OnI2MSpotChange(); 
	//void			OnI2MSpotSetfocus(); 
	//void			OnI2MSpotKillfocus(); 
	int			OnI2MSpotCheckValue(); 
	//void			OnI2MAllChange(); 
	//void			OnI2MAllSetfocus(); 
	//void			OnI2MAllKillfocus(); 
	int			OnI2MAllCheckValue(); 
	//void			OnBISPECTChange(); 
	//void			OnBISPECTSetfocus(); 
	//void			OnBISPECTKillfocus(); 
	int			OnBISPECTCheckValue(); 
	//void			OnBICTChange(); 
	//void			OnBICTSetfocus(); 
	//void			OnBICTKillfocus(); 
	int			OnBICTCheckValue(); 
	//void			OnDiagnoseChange(); 
	//void			OnDiagnoseSetfocus(); 
	//void			OnDiagnoseKillfocus(); 
	int			OnDiagnoseCheckValue(); 
	//void			OnStageChange(); 
	//void			OnStageSetfocus(); 
	//void			OnStageKillfocus(); 
	int			OnStageCheckValue(); 
	//void			OnAttackDiseaseChange(); 
	//void			OnAttackDiseaseSetfocus(); 
	//void			OnAttackDiseaseKillfocus(); 
	int			OnAttackDiseaseCheckValue(); 
	//void			OnExpectedTherapeuticDoseChange(); 
	//void			OnExpectedTherapeuticDoseSetfocus(); 
	//void			OnExpectedTherapeuticDoseKillfocus(); 
	int			OnExpectedTherapeuticDoseCheckValue(); 
	//void			OnTreatmentReasonChange(); 
	//void			OnTreatmentReasonSetfocus(); 
	//void			OnTreatmentReasonKillfocus(); 
	int			OnTreatmentReasonCheckValue(); 
	long			OnAppointmentListLoadData(); 
	void			OnAppointmentListSelectChange(int nOldItem, int nNewItem); 
	void			OnAppointmentListDblClick(); 
	int			OnAppointmentListDeleteItem(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			OnPrintSelect(); 
	CHMSTreatmentPlanDlg(CWnd *pParent);
	~CHMSTreatmentPlanDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentPlanDlg(); 
	int OnEditHMSTreatmentPlanDlg(); 
	int OnDeleteHMSTreatmentPlanDlg(); 
	int OnSaveHMSTreatmentPlanDlg(); 
	int OnCancelHMSTreatmentPlanDlg(); 
	int OnHMSTreatmentPlanDlgListLoadData(); 
};
#endif
