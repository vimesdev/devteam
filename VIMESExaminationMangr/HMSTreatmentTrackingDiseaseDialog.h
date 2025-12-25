#ifndef HMSTreatmentTrackingDiseaseDIALOG_H
#define HMSTreatmentTrackingDiseaseDIALOG_H

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
class CHMSTreatmentTrackingDiseaseDialog : public CGuiDialog{
protected:
	long			m_nDocumentNo;
	long			m_nTreatIdx;
	int				m_nPrintCount;
	CDbfMap			m_hms_siexamTbl;
	CString			m_szCreatedBy;
	CString			m_szLocked;
public:
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiCheckBox	m_wndNumberDateLabel;
	CGuiNumberCtrl	m_wndNumberDate;
	CGuiLabel		m_wndDiseaseTrackingLabel;
	CGuiTextCtrl	m_wndDiseaseTracking;
	CGuiLabel		m_wndDiagnosisIdentifyLabel;
	CGuiTextCtrl	m_wndDiagnosisIdentify;
	CGuiLabel		m_wndNextPlanLabel;
	CGuiTextCtrl	m_wndNextPlan;
	
	CGuiLabel		m_wndksdptoksdt;
	CGuiRadioButton	m_wndYes;
	CGuiRadioButton	m_wndNo;
	CGuiLabel		m_wndLyDo;
	CGuiComboBox	m_wndLyDoChuyen;

	CGuiLabel		m_wndParaclinicalResult;
	CGuiButton		m_wndParaclinicalResultButton;
	CGuiButton		m_wndSelectFromOrder;
	CGuiTextCtrl	m_wndParaclinicRes;
	CGuiLabel		m_wndDietLabel;
	CGuiComboBox	m_wndDiet;
	CGuiLabel		m_wndNurseAssistanceLabel;
	CGuiTextCtrl	m_wndNurseAssistance;
	CGuiCheckBox	m_wndInputPulseTemperature;
	CGuiLabel		m_wndTemperatureSelectLabel;
	CGuiComboBox	m_wndTemperatureSelect;
	CGuiLabel		m_wndPulseLabel;
	CGuiNumberCtrl	m_wndPulse;
	CGuiLabel		m_wndTemperatureLabel;
	CGuiNumberCtrl	m_wndTemperature;
	CGuiLabel		m_wndBloodPressureLabel;
	CGuiNumberCtrl	m_wndBloodPressure;
	CGuiLabel		m_wndLabelSpec;
	CGuiNumberCtrl	m_wndBloodPressureHight;
	CGuiLabel		m_wndBreathingRateLabel;
	CGuiNumberCtrl	m_wndBreathingRate;
	CGuiCheckBox	m_wndDeanNote;

	int	m_nYes;
	int	m_nNo;
	CString	m_szLyDoChuyenKey;
	
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szDate;
	int		m_nNumberDate;
	BOOL	m_bNumberDateSelect;
	CString	m_szDiseaseTracking;
	CString	m_szDiagnosisIdentify;
	CString	m_szNextPlan;
	CString	m_szParaclinicRes;
	CString	m_szDietKey;
	CString	m_szNurseAssistance;
	BOOL	m_bInputPulseTemperature;
	CString	m_szTemperatureSelectKey;
	int		m_nPulse;
	double	m_nTemperature;
	int		m_nBloodPressure;
	int		m_nBloodPressureHight;
	int		m_nBreathingRate;
	BOOL	m_bDeanNote;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnNumberDateLabelSelect(); 
	//void			OnNumberDateChange(); 
	//void			OnNumberDateSetfocus(); 
	//void			OnNumberDateKillfocus(); 
	int			OnNumberDateCheckValue(); 
	//void			OnDiseaseTrackingChange(); 
	//void			OnDiseaseTrackingSetfocus(); 
	//void			OnDiseaseTrackingKillfocus(); 
	int			OnDiseaseTrackingCheckValue(); 
	//void			OnDiagnosisIdentifyChange(); 
	//void			OnDiagnosisIdentifySetfocus(); 
	//void			OnDiagnosisIdentifyKillfocus(); 
	int			OnDiagnosisIdentifyCheckValue(); 
	//void			OnNextPlanChange(); 
	//void			OnNextPlanSetfocus(); 
	//void			OnNextPlanKillfocus(); 
	int			OnNextPlanCheckValue(); 
	void			OnParaclinicalResultButtonSelect(); 
	void			OnSelectFromOrderSelect(); 
	//void			OnParaclinicResChange(); 
	//void			OnParaclinicResSetfocus(); 
	//void			OnParaclinicResKillfocus(); 
	int			OnParaclinicResCheckValue(); 
	void			OnDietSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDietSelendok(); 
	//void			OnDietSetfocus(); 
	//void			OnDietKillfocus(); 
	long			OnDietLoadData(); 
	//void			OnDietAddNew(); 
	//void			OnNurseAssistanceChange(); 
	//void			OnNurseAssistanceSetfocus(); 
	//void			OnNurseAssistanceKillfocus(); 
	int			OnNurseAssistanceCheckValue(); 
	void			OnNurseAssistanceSelect(); 
	void			OnInputPulseTemperatureSelect(); 
	void			OnTemperatureSelectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTemperatureSelectSelendok(); 
	//void			OnTemperatureSelectSetfocus(); 
	//void			OnTemperatureSelectKillfocus(); 
	long			OnTemperatureSelectLoadData(); 
	//void			OnTemperatureSelectAddNew(); 
	//void			OnPulseChange(); 
	//void			OnPulseSetfocus(); 
	//void			OnPulseKillfocus(); 
	int			OnPulseCheckValue(); 
	//void			OnTemperatureChange(); 
	//void			OnTemperatureSetfocus(); 
	//void			OnTemperatureKillfocus(); 
	int			OnTemperatureCheckValue(); 
	//void			OnBloodPressureChange(); 
	//void			OnBloodPressureSetfocus(); 
	//void			OnBloodPressureKillfocus(); 
	int			OnBloodPressureCheckValue(); 
	//void			OnBloodPressureHightChange(); 
	//void			OnBloodPressureHightSetfocus(); 
	//void			OnBloodPressureHightKillfocus(); 
	int			OnBloodPressureHightCheckValue(); 
	//void			OnBreathingRateChange(); 
	//void			OnBreathingRateSetfocus(); 
	//void			OnBreathingRateKillfocus(); 
	int			OnBreathingRateCheckValue(); 
	void			OnDeanNoteSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnParaclinicResultButtonSelect();

	void			OnYesSelect(); 
	void			OnNoSelect(); 
	void			OnLyDoChuyenSelectChange(int nOldItemSel, int nNewItemSel); 	
	long			OnLyDoChuyenLoadData();
	void			OnLyDoSelect();

	CHMSTreatmentTrackingDiseaseDialog(CWnd *pParent, int nMode, long nDocumentNo, long nUID=0);
	~CHMSTreatmentTrackingDiseaseDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	void	EnableInputPulse(BOOL bFlag);

	int OnAddHMSTreatmentTrackingDiseaseDialog(); 
	int OnEditHMSTreatmentTrackingDiseaseDialog(); 
	int OnDeleteHMSTreatmentTrackingDiseaseDialog(); 
	int OnSaveHMSTreatmentTrackingDiseaseDialog(); 
	int OnCancelHMSTreatmentTrackingDiseaseDialog(); 
	int OnHMSTreatmentTrackingDiseaseDialogListLoadData(); 
};
#endif
