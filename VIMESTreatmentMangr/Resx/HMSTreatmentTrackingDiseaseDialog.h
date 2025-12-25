#ifndef HMSTREATMENTTRACKINGDISEASEDIALOG_H
#define HMSTREATMENTTRACKINGDISEASEDIALOG_H

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
public:
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiCheckBox	m_wndNumberDateLabel;
	CGuiNumberCtrl	m_wndNumberDate;
	CGuiLabel		m_wndDiseaseTrackingLabel;
	CGuiTextCtrl	m_wndDiseaseTracking;
	CGuiLabel		m_wndNhandinhchandoanLabel;
	CGuiTextCtrl	m_wndNhandinhchandoan;
	CGuiLabel		m_wndKetquatieptheoLabel;
	CGuiTextCtrl	m_wndKetquatieptheo;
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
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szDate;
	BOOL	m_bNumberDateLabel;
	long	m_nNumberDate;
	CString	m_szDiseaseTracking;
	CString	m_szNhandinhchandoan;
	CString	m_szKetquatieptheo;
	CString	m_szParaclinicRes;
	CString	m_szDietKey;
	CString	m_szNurseAssistance;
	BOOL	m_bInputPulseTemperature;
	CString	m_szTemperatureSelectKey;
	long	m_nPulse;
	long	m_nTemperature;
	long	m_nBloodPressure;
	long	m_nBloodPressureHight;
	long	m_nBreathingRate;
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
	//void			OnNhandinhchandoanChange(); 
	//void			OnNhandinhchandoanSetfocus(); 
	//void			OnNhandinhchandoanKillfocus(); 
	int			OnNhandinhchandoanCheckValue(); 
	//void			OnKetquatieptheoChange(); 
	//void			OnKetquatieptheoSetfocus(); 
	//void			OnKetquatieptheoKillfocus(); 
	int			OnKetquatieptheoCheckValue(); 
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
	CHMSTreatmentTrackingDiseaseDialog(CWnd *pParent);
	~CHMSTreatmentTrackingDiseaseDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentTrackingDiseaseDialog(); 
	int OnEditHMSTreatmentTrackingDiseaseDialog(); 
	int OnDeleteHMSTreatmentTrackingDiseaseDialog(); 
	int OnSaveHMSTreatmentTrackingDiseaseDialog(); 
	int OnCancelHMSTreatmentTrackingDiseaseDialog(); 
	int OnHMSTreatmentTrackingDiseaseDialogListLoadData(); 
};
#endif
