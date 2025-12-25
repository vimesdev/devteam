#ifndef HMSTreatmentCareEMInputDIALOG_H
#define HMSTreatmentCareEMInputDIALOG_H

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
class CHMSTreatmentCareEMInputDialog : public CGuiDialog
{
protected:
	long			m_nDocumentNo;
	long			m_nTreatIdx;
	int				m_nPrintCount;
	CDbfMap			m_hms_careinfoTbl;
	CString			m_szCreatedBy;
	CString			m_szDoctorID;
public:
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiRadioButton	m_wndNormal;
	CGuiRadioButton	m_wnd6h;
	CGuiRadioButton	m_wnd18h;
	CGuiRadioButton	m_wnd25h;
	CGuiLabel		m_wndOperationNameLabel;
	CGuiComboBox	m_wndOperationName;
	CGuiLabel		m_wndDiseaseTrackingLabel;
	CGuiTextCtrl	m_wndDiseaseTracking;
	CGuiLabel		m_wndPatientTakeCareGroup;
	CGuiTextCtrl	m_wndPatientTakeCare;
	//CGuiCheckBox	m_wndInputPulseTemperature;
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
	CGuiLabel		m_wndSP02Label;
	CGuiNumberCtrl	m_wndSP02;
	CGuiLabel		m_wndSauPT;
	CGuiLabel		m_wndDauhieunhiemkhuanLabel;
	CGuiTextCtrl	m_wndDauhieunhiemkhuan;
	
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wnddanhmucnhiemkhuan108;
	CString	m_szDate;
	int		m_nNumberDate;
	BOOL	m_bNumberDateSelect;
	CString	m_szDiseaseTracking;
	CString	m_szPatientTakeCare;
	CString	m_szCare;
	CString	m_szDauhieunhiemkhuan;
	//BOOL	m_bInputPulseTemperature;
	int		m_nPulse;
	double	m_nTemperature;
	int		m_nBloodPressure;
	int		m_nBloodPressureHight;
	int		m_nBreathingRate;
	int		m_nSP02;
	int	m_n6h;
	int	m_n18h;
	int	m_n25h;
	CString	m_szOperationNameKey;
	CString m_szRefCode;
	CString m_szRefType;
	int	m_nNormal;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnNormalSelect(); 
	void			On6hSelect(); 
	void			On18hSelect(); 
	void			On25hSelect(); 
	void			OnOperationNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOperationNameSelendok(); 
	//void			OnOperationNameSetfocus(); 
	//void			OnOperationNameKillfocus(); 
	long			OnOperationNameLoadData(); 
	//void			OnOperationNameAddNew(); 
	void		OnNumberDateLabelClick(); 
	int			OnNumberDateCheckValue();
	//void			OnDiseaseTrackingChange(); 
	//void			OnDiseaseTrackingSetfocus(); 
	//void			OnDiseaseTrackingKillfocus(); 
	int			OnDiseaseTrackingCheckValue(); 
	//void			OnPatientTakeCareChange(); 
	//void			OnPatientTakeCareSetfocus(); 
	//void			OnPatientTakeCareKillfocus(); 
	int			OnPatientTakeCareCheckValue(); 
	void		OnPatientTakeCareGroupSelect();
	//void			OnCareChange(); 
	//void			OnCareSetfocus(); 
	//void			OnCareKillfocus(); 
	int			OnCareCheckValue(); 
	//void			OnInputPulseTemperatureSelect(); 
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
	//void			OnSP02Change(); 
	//void			OnSP02Setfocus(); 
	//void			OnSP02Killfocus(); 
	int			OnSP02CheckValue(); 
	int			OnDauhieunhiemkhuanCheckValue();
	
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSTreatmentCareEMInputDialog(CWnd *pParent, int nMode, long nDocumentNo, long nUID=0);
	~CHMSTreatmentCareEMInputDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	void			Ondanhmucnhiemkhuan108Select();
	//void	EnableInputPulse(BOOL bFlag);

	int OnAddHMSTreatmentCareInputDialog(); 
	int OnEditHMSTreatmentCareInputDialog(); 
	int OnDeleteHMSTreatmentCareInputDialog(); 
	int OnSaveHMSTreatmentCareInputDialog(); 
	int OnCancelHMSTreatmentCareInputDialog(); 
	int OnHMSTreatmentCareInputDialogListLoadData(); 
};
#endif
