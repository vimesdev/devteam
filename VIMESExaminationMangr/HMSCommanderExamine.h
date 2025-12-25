#ifndef HMSCOMMANDEREXAMINE_H
#define HMSCOMMANDEREXAMINE_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSCommanderExamine : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProfileInfo;
	CGuiGroupBox	m_wndOwnerInfo;
	CGuiGroupBox	m_wndStrengthExamInfo;
	CGuiGroupBox	m_wndExamineInfo;
	CGuiGroupBox	m_wndStrengthExamInfo2;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndBloodTypeLabel;
	CGuiComboBox	m_wndBloodType;
	CGuiLabel		m_wndDrugAllergyLabel;
	CGuiTextCtrl	m_wndDrugAllergy;
	CGuiLabel		m_wndChronicDiseaseLabel;
	CGuiTextCtrl	m_wndChronicDisease;
	CGuiLabel		m_wndOperationLabel;
	CGuiTextCtrl	m_wndOperation;
	CGuiLabel		m_wndSmokingLabel;
	CGuiTextCtrl	m_wndSmoking;
	CGuiNumberCtrl	m_wndSmokeQuantity;
	CGuiLabel		m_wndDrinkLabel;
	CGuiTextCtrl	m_wndDrink;
	CGuiLabel		m_wndOtherHabitLabel;
	CGuiTextCtrl	m_wndOtherHabit;
	CGuiLabel		m_wndFatherLabel;
	CGuiTextCtrl	m_wndFather;
	CGuiLabel		m_wndMotherLabel;
	CGuiTextCtrl	m_wndMother;
	CGuiLabel		m_wndConnubialLabel;
	CGuiTextCtrl	m_wndConnubial;
	CGuiLabel		m_wndSiblingsLabel;
	CGuiTextCtrl	m_wndSiblings;
	CGuiLabel		m_wndHeightLabel;
	CGuiNumberCtrl	m_wndHeight;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndChestLabel;
	CGuiNumberCtrl	m_wndChest;
	CGuiLabel		m_wndBMILabel;
	CGuiNumberCtrl	m_wndBMI;
	CGuiLabel		m_wndBodyLabel;
	CGuiTextCtrl	m_wndBody;
	CGuiLabel		m_wndBreathingLabel;
	CGuiTextCtrl	m_wndBreathing;
	CGuiLabel		m_wndPulseLabel;
	CGuiNumberCtrl	m_wndPulse;
	CGuiLabel		m_wndBloodPressureLabel;
	CGuiTextCtrl	m_wndBloodPressure;
	CGuiLabel		m_wndCirculationLabel;
	CGuiTextCtrl	m_wndCirculation;
	CGuiLabel		m_wndDigestionLabel;
	CGuiTextCtrl	m_wndDigestion;
	CGuiLabel		m_wndGenitalUrinaryLabel;
	CGuiTextCtrl	m_wndGenitalUrinary;
	CGuiLabel		m_wndMentalNerveLabel;
	CGuiTextCtrl	m_wndMentalNerve;
	CGuiLabel		m_wndBoneLabel;
	CGuiTextCtrl	m_wndBone;
	CGuiLabel		m_wndEndocrineLabel;
	CGuiTextCtrl	m_wndEndocrine;
	CGuiLabel		m_wndOtherPartLabel;
	CGuiTextCtrl	m_wndOtherPart;
	CGuiLabel		m_wndENTLabel;
	CGuiTextCtrl	m_wndENT;
	CGuiLabel		m_wndTCFLabel;
	CGuiTextCtrl	m_wndTCF;
	CGuiLabel		m_wndEyeLabel;
	CGuiTextCtrl	m_wndEye;
	CGuiLabel		m_wndDoctor1Label;
	CGuiComboBox	m_wndDoctor1;
	CGuiLabel		m_wndDoctor2Label;
	CGuiComboBox	m_wndDoctor2;
	CGuiLabel		m_wndDoctor3Label;
	CGuiComboBox	m_wndDoctor3;
	CGuiLabel		m_wndDoctor4Label;
	CGuiComboBox	m_wndDoctor4;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndConclusion;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;

	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szObject;
	CString	m_szBloodTypeKey;
	CString	m_szDrugAllergy;
	CString	m_szChronicDisease;
	CString	m_szOperation;
	CString	m_szSmoking;
	float	m_nSmokeQuantity;
	CString	m_szDrink;
	CString	m_szOtherHabit;
	CString	m_szFather;
	CString	m_szMother;
	CString	m_szConnubial;
	CString	m_szSiblings;
	float	m_nHeight;
	float	m_nWeight;
	float	m_nChest;
	float	m_nBMI;
	CString	m_szBody;
	CString	m_szBreathing;
	float	m_nPulse;
	CString	m_szBloodPressure;
	CString	m_szCirculation;
	CString	m_szDigestion;
	CString	m_szGenitalUrinary;
	CString	m_szMentalNerve;
	CString	m_szBone;
	CString	m_szEndocrine;
	CString	m_szOtherPart;
	CString	m_szENT;
	CString	m_szTCF;
	CString	m_szEye;
	CString	m_szDoctor1Key;
	CString	m_szDoctor2Key;
	CString	m_szDoctor3Key;
	CString	m_szDoctor4Key;

	CDbfMap m_hms_commander_exam_Tbl;
	bool m_bIsInsert;
	bool m_bIsTerminated;
	long m_nIdx;

	CRecord *m_rs;

	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	void			OnBloodTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBloodTypeSelendok(); 
	//void			OnBloodTypeSetfocus(); 
	//void			OnBloodTypeKillfocus(); 
	long			OnBloodTypeLoadData(); 
	//void			OnBloodTypeAddNew(); 
	//void			OnDrugAllergyChange(); 
	//void			OnDrugAllergySetfocus(); 
	//void			OnDrugAllergyKillfocus(); 
	int			OnDrugAllergyCheckValue(); 
	//void			OnChronicDiseaseChange(); 
	//void			OnChronicDiseaseSetfocus(); 
	//void			OnChronicDiseaseKillfocus(); 
	int			OnChronicDiseaseCheckValue(); 
	//void			OnOperationChange(); 
	//void			OnOperationSetfocus(); 
	//void			OnOperationKillfocus(); 
	int			OnOperationCheckValue(); 
	//void			OnSmokingChange(); 
	//void			OnSmokingSetfocus(); 
	//void			OnSmokingKillfocus(); 
	int			OnSmokingCheckValue(); 
	//void			OnSmokeQuantityChange(); 
	//void			OnSmokeQuantitySetfocus(); 
	//void			OnSmokeQuantityKillfocus(); 
	int			OnSmokeQuantityCheckValue(); 
	//void			OnDrinkChange(); 
	//void			OnDrinkSetfocus(); 
	//void			OnDrinkKillfocus(); 
	int			OnDrinkCheckValue(); 
	//void			OnOtherHabitChange(); 
	//void			OnOtherHabitSetfocus(); 
	//void			OnOtherHabitKillfocus(); 
	int			OnOtherHabitCheckValue(); 
	//void			OnFatherChange(); 
	//void			OnFatherSetfocus(); 
	//void			OnFatherKillfocus(); 
	int			OnFatherCheckValue(); 
	//void			OnMotherChange(); 
	//void			OnMotherSetfocus(); 
	//void			OnMotherKillfocus(); 
	int			OnMotherCheckValue(); 
	//void			OnConnubialChange(); 
	//void			OnConnubialSetfocus(); 
	//void			OnConnubialKillfocus(); 
	int			OnConnubialCheckValue(); 
	//void			OnSiblingsChange(); 
	//void			OnSiblingsSetfocus(); 
	//void			OnSiblingsKillfocus(); 
	int			OnSiblingsCheckValue(); 
	//void			OnHeightChange(); 
	//void			OnHeightSetfocus(); 
	//void			OnHeightKillfocus(); 
	int			OnHeightCheckValue(); 
	//void			OnWeightChange(); 
	//void			OnWeightSetfocus(); 
	//void			OnWeightKillfocus(); 
	int			OnWeightCheckValue(); 
	//void			OnChestChange(); 
	//void			OnChestSetfocus(); 
	//void			OnChestKillfocus(); 
	int			OnChestCheckValue(); 
	//void			OnBMIChange(); 
	//void			OnBMISetfocus(); 
	//void			OnBMIKillfocus(); 
	int			OnBMICheckValue(); 
	//void			OnBodyChange(); 
	//void			OnBodySetfocus(); 
	//void			OnBodyKillfocus(); 
	int			OnBodyCheckValue(); 
	//void			OnBreathingChange(); 
	//void			OnBreathingSetfocus(); 
	//void			OnBreathingKillfocus(); 
	int			OnBreathingCheckValue(); 
	//void			OnPulseChange(); 
	//void			OnPulseSetfocus(); 
	//void			OnPulseKillfocus(); 
	int			OnPulseCheckValue(); 
	//void			OnBloodPressureChange(); 
	//void			OnBloodPressureSetfocus(); 
	//void			OnBloodPressureKillfocus(); 
	int			OnBloodPressureCheckValue(); 
	//void			OnCirculationChange(); 
	//void			OnCirculationSetfocus(); 
	//void			OnCirculationKillfocus(); 
	int			OnCirculationCheckValue();
	//void			OnDigestionChange(); 
	//void			OnDigestionSetfocus(); 
	//void			OnDigestionKillfocus(); 
	int			OnDigestionCheckValue();
	//void			OnGenitalUrinaryChange(); 
	//void			OnGenitalUrinarySetfocus(); 
	//void			OnGenitalUrinaryKillfocus(); 
	int			OnGenitalUrinaryCheckValue(); 
	//void			OnMentalNerveChange(); 
	//void			OnMentalNerveSetfocus(); 
	//void			OnMentalNerveKillfocus(); 
	int			OnMentalNerveCheckValue(); 
	//void			OnBoneChange(); 
	//void			OnBoneSetfocus(); 
	//void			OnBoneKillfocus(); 
	int			OnBoneCheckValue(); 
	//void			OnEndocrineChange(); 
	//void			OnEndocrineSetfocus(); 
	//void			OnEndocrineKillfocus(); 
	int			OnEndocrineCheckValue(); 
	//void			OnOtherPartChange(); 
	//void			OnOtherPartSetfocus(); 
	//void			OnOtherPartKillfocus(); 
	int			OnOtherPartCheckValue(); 
	//void			OnENTChange(); 
	//void			OnENTSetfocus(); 
	//void			OnENTKillfocus(); 
	int			OnENTCheckValue(); 
	//void			OnTCFChange(); 
	//void			OnTCFSetfocus(); 
	//void			OnTCFKillfocus(); 
	int			OnTCFCheckValue(); 
	//void			OnEyeChange(); 
	//void			OnEyeSetfocus(); 
	//void			OnEyeKillfocus(); 
	int			OnEyeCheckValue(); 
	void			OnDoctor1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor1Selendok(); 
	//void			OnDoctor1Setfocus(); 
	//void			OnDoctor1Killfocus(); 
	long			OnDoctor1LoadData(); 
	//void			OnDoctor1AddNew(); 
	void			OnDoctor2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor2Selendok(); 
	//void			OnDoctor2Setfocus(); 
	//void			OnDoctor2Killfocus(); 
	long			OnDoctor2LoadData(); 
	//void			OnDoctor2AddNew(); 
	void			OnDoctor3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor3Selendok(); 
	//void			OnDoctor3Setfocus(); 
	//void			OnDoctor3Killfocus(); 
	long			OnDoctor3LoadData(); 
	//void			OnDoctor3AddNew(); 
	void			OnDoctor4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor4Selendok(); 
	//void			OnDoctor4Setfocus(); 
	//void			OnDoctor4Killfocus(); 
	long			OnDoctor4LoadData(); 
	//void			OnDoctor4AddNew(); 
	void			OnUpdateSelect();
	void			OnConclusionSelect(); 
	void			OnDeleteSelect();
	void			OnSaveSelect();
	void			OnCancelSelect();
	void			OnPrintSelect();
	CHMSCommanderExamine();
	~CHMSCommanderExamine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCommanderExamine(); 
	int OnEditHMSCommanderExamine(); 
	int OnDeleteHMSCommanderExamine(); 
	int OnSaveHMSCommanderExamine(); 
	int OnCancelHMSCommanderExamine(); 
	int OnHMSCommanderExamineListLoadData();

	void OnPrint1(long nDocumentNo, bool bPreview = true);
	void OnPrint2(long nDocumentNo, bool bPreview = true);
	void OnPrint3(long nDocumentNo, bool bPreview = true);
};
#endif
