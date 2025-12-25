#ifndef HMSEXAMINE_H
#define HMSEXAMINE_H

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
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan
//men nay se 	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi
//da dung theo Luat qui dinh. 	File nay la mot phan cua thu vien lap trinh(GUI).
//Ban quyen cua Hoang Van Hay. 2006-2008 	THONG TIN LIEN HE: 	Email  :
//hayhv@vimes.com.vn hoac hayhv@yahoo.com 	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "DbField.h"
#include "GuiUtils.h"
#include "GuiView.h"
#include "Serial.h"

class CHMSExamine : public CGuiView
{

protected:
    CSerial m_SerialPort;
    void InitCommPort();
    void CloseCommPort();
    void WriteDataToPLC(CSerial *serial, int nNumber, int nCtrl1, int nCtrl2,
                        int nCtrl3, CString szPatientName);
    void callPatient();
    int m_nBeep;
    bool m_bDoctor;
    CString m_szOldICD;

public:
    long m_nPatientNo;
    long m_nDocumentNo;
    int m_nRoomID;
    int m_nReceptNo;
    int m_nReceptIndex;
    int m_nCurrentReceptIdx;
    int m_nSelRoomID;
    bool m_bExamine;
    bool m_bIsReq;

    CString m_szDept;
    CString m_szStatus;
    void LoadData(long nDocNo, int nReceptIdx, int nSelRoom = 0);

    CGuiGroupBox m_wndExaminationInformation;
    CGuiGroupBox m_wndDiseasePrehistory;
    CGuiLabel m_wndOwnerLabel;
    CGuiTextCtrl m_wndOwner;
    CGuiLabel m_wndFamilyLabel;
    CGuiTextCtrl m_wndFamily;
    CGuiLabel m_wndDrugAllergyLabel;
    CGuiTextCtrl m_wndDrugAllergy;
    CGuiLabel m_wndDateLabel;
    CGuiDateTimeCtrl m_wndDate;
    CGuiLabel m_wndExamTypeLabel;
    CGuiComboBox m_wndExamType;
    CGuiLabel m_wndDoctorLabel;
    CGuiComboBox m_wndDoctor;
    CGuiLabel m_wndPathologyProcessLabel;
    CGuiTextCtrl m_wndPathologyProcess;
    CGuiLabel m_wndExamineLabel;
    CGuiTextCtrl m_wndExamine;
    CGuiLabel m_wndPulseLabel;
    CGuiNumberCtrl m_wndPulse;
    CGuiLabel m_wndTemperatureLabel;
    CGuiNumberCtrl m_wndTemperature;
    CGuiLabel m_wndBloodPressureLabel;
    CGuiNumberCtrl m_wndBloodPressure;
    CGuiNumberCtrl m_wndBloodPressurex;
    CGuiLabel m_wndBreathingIntervalLabel;
    CGuiNumberCtrl m_wndBreathingInterval;
    CGuiLabel m_wndWeightLabel;
    CGuiNumberCtrl m_wndWeight;
    CGuiLabel m_wndHeightLabel;
    CGuiNumberCtrl m_wndHeight;
    CGuiLabel m_wndPreDiagnosticLabel;
    CGuiTextCtrl m_wndPreDiagnostic;
    CGuiLabel m_wndRelationDiseaseLabel;
    CGuiTextCtrl m_wndRelationDisease;
    CGuiLabel m_wndICDDiagnosticLabel;
    CGuiComboBox m_wndICDDiagnostic;
    CGuiLabel m_wndConclusionLabel;
    CGuiTextCtrl m_wndConclusion;
    CGuiButton m_wndPrehistory;
    CGuiButton m_wndUpdate;
    CGuiButton m_wndTerminate;
    CGuiButton m_wndSave;
    CGuiButton m_wndCancel;
    CGuiButton m_wndCallIn;
    CGuiButton m_wndReloadInfo;
    CGuiButton m_wndCallPatient;
    CGuiCheckBox m_wndHATD;
    CGuiComboBox m_wndHasAllergy;
    CGuiButton m_wndCoDiseaseAdd;
    CGuiLabel m_wndSolankham;
    CGuiLabel m_wndThangDiemLabel;
    CGuiLabel m_wndBMILabel;
    CGuiNumberCtrl m_wndBMI;
    CGuiButton m_wndAddInforLabel;

    CGuiLabel m_wndEmergencyTypeLabel;
    CGuiComboBox m_wndEmergencyType;
    CGuiComboBox m_wndDetailEmergencyType;
    CString m_szOwner;
    CString m_szFamily;
    CString m_szDrugAllergy;
    CString m_szDate;
    CString m_szExamTypeKey;
    CString m_szDoctorKey;
    CString m_szPathologyProcess;
    CString m_szExamine;
    CString m_szExammove;
    int m_nPulse;
    double m_nTemperature;
    int m_nBloodPressure;
    int m_nBloodPressurex;
    int m_nBreathingInterval;
    float m_nWeight;
    float m_nHeight;
    float m_nBMI;
    CString m_szEmergencyTypeKey;
    CString m_szDetailEmergencyTypeKey;
    CString m_szPreDiagnostic;
    CString m_szRelationDisease;
    CString m_szICDDiagnosticKey;
    CString m_szConclusion;
    CDbfMap m_hms_examTbl;
    CDbfMap m_hms_disease_histTbl;
    long nOldPatientNo;
    long nOldDocumentNo;
    bool m_bSwitch;
    bool m_bCheckReload;
    CString m_szMenuString;
    BOOL m_bHATD;
    CString m_szHasAllergyKey;
    CString m_szHasAllergyFromExam;
    CString m_szHealthExam;
    // void			OnOwnerChange();
    // void			OnOwnerSetfocus();
    // void			OnOwnerKillfocus();
    int OnOwnerCheckValue();
    // void			OnFamilyChange();
    // void			OnFamilySetfocus();
    // void			OnFamilyKillfocus();
    int OnFamilyCheckValue();
    // void			OnDrugAllergyChange();
    // void			OnDrugAllergySetfocus();
    // void			OnDrugAllergyKillfocus();
    int OnDrugAllergyCheckValue();
    // void			OnDateChange();
    // void			OnDateSetfocus();
    // void			OnDateKillfocus();
    int OnDateCheckValue();

    void OnExamTypeSelectChange(int nOldItemSel, int nNewItemSel);
    void OnExamTypeSelendok();
    // void			OnExamTypeSetfocus();
    // void			OnExamTypeKillfocus();
    long OnExamTypeLoadData();
    void OnExamTypeAddNew();

    void OnDoctorSelectChange(int nOldItemSel, int nNewItemSel);
    void OnDoctorSelendok();
    // void			OnDoctorSetfocus();
    // void			OnDoctorKillfocus();
    long OnDoctorLoadData();
    void OnDoctorAddNew();
    void OnPathologyProcessLabelSelect();
    // void			OnPathologyProcessChange();
    // void			OnPathologyProcessSetfocus();
    // void			OnPathologyProcessKillfocus();
    int OnPathologyProcessCheckValue();
    void OnExamineLabelSelect();
    // void			OnExamineChange();
    // void			OnExamineSetfocus();
    // void			OnExamineKillfocus();
    int OnExamineCheckValue();
    // void			OnPulseChange();
    // void			OnPulseSetfocus();
    // void			OnPulseKillfocus();
    int OnPulseCheckValue();
    // void			OnTemperatureChange();
    // void			OnTemperatureSetfocus();
    // void			OnTemperatureKillfocus();
    int OnTemperatureCheckValue();
    // void			OnBloodPressureChange();
    // void			OnBloodPressureSetfocus();
    // void			OnBloodPressureKillfocus();
    int OnBloodPressureCheckValue();
    // void			OnBloodPressurexChange();
    // void			OnBloodPressurexSetfocus();
    // void			OnBloodPressurexKillfocus();
    int OnBloodPressurexCheckValue();
    // void			OnBreathingIntervalChange();
    // void			OnBreathingIntervalSetfocus();
    // void			OnBreathingIntervalKillfocus();
    int OnBreathingIntervalCheckValue();
    // void			OnWeightChange();
    // void			OnWeightSetfocus();
    // void			OnWeightKillfocus();
    int OnWeightCheckValue();
    // void			OnHeightChange();
    // void			OnHeightSetfocus();
    // void			OnHeightKillfocus();
    int OnHeightCheckValue();
    // void			OnPreDiagnosticChange();
    // void			OnPreDiagnosticSetfocus();
    // void			OnPreDiagnosticKillfocus();
    int OnPreDiagnosticCheckValue();
    // void			OnRelationDiseaseChange();
    // void			OnRelationDiseaseSetfocus();
    // void			OnRelationDiseaseKillfocus();
    int OnRelationDiseaseCheckValue();
    void OnICDDiagnosticSelectChange(int nOldItemSel, int nNewItemSel);
    void OnICDDiagnosticSelendok();
    // void			OnICDDiagnosticSetfocus();
    // void			OnICDDiagnosticKillfocus();
    long OnICDDiagnosticLoadData();
    void OnICDDiagnosticAddNew();
    // void			OnConclusionChange();
    void OnConclusionSetfocus();
    // void			OnConclusionKillfocus();

    int OnConclusionCheckValue();
    void OnPrehistorySelect();
    void OnCallInSelect();
    void OnUpdateSelect();
    void OnTerminateSelect();
    void OnSaveSelect();
    void OnCancelSelect();
    void OnReloadInfoSelect();
    void OnCallPatientSelect();
    void OnConclusionSelect();
    void OnHATDSelect();
    long OnHasAllergyLoadData();
    void OnCancelInfertility();
    void OnCoDiseaseAddSelect();
    int OnBMICheckValue();
    void OnAddInforLabelSelect();
    void OnThangDiemSelect();
    long OnEmergencyTypeLoadData();
    long OnDetailEmergencyTypeLoadData();

    CHMSExamine();
    ~CHMSExamine();
    void OnCreateComponents();
    void OnInitializeComponents();
    void OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
    void GetDataToScreen();
    void GetScreenToData();
    void SetDefaultValues();
    int SetMode(int nMode);
    int OnUpdateDiseasePrehistory();
    int OnCreateAdmission();
    int OnCertificateofphysicaleyeclinic();
    int OnAddHMSExamine();
    int OnEditHMSExamine();
    int OnDeleteHMSExamine();
    int OnSaveHMSExamine();
    int OnCancelHMSExamine();
    int OnHMSExamineListLoadData();
    int OnMedicalexams();
    // Phieu kham suc khoe cap tuong
    int OnGeneralRankExamine(CString szType = _T(""));
    // Phieu kham suc khoe cong ty
    int OnHealthExamination();
    int OnAddAppointMentA20();
    int OnBenhAnHiemMuonSelect();
    void SwitchInfertilityPatient();
    void OnMenuSelect(CGuiMenu *pMenu);

    void OnRegistrationPregnancy();
    void OnCancelPregnancy();

    int OnPeriodicExamHealth();

    DECLARE_MESSAGE_MAP()
    afx_msg void OnDestroy();
    void OnResizeLayout();
};
#endif