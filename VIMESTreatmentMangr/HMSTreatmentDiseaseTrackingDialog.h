#ifndef HMSTREATMENTDISEASETRACKINGDIALOG_H
#define HMSTREATMENTDISEASETRACKINGDIALOG_H

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
class CHMSTreatmentDiseaseTrackingDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndDiseaseTrackingLabel;
	CGuiTextCtrl	m_wndDiseaseTracking;
	CGuiLabel		m_wndParaclinicalResult;
	CGuiButton		m_wndSelectFromOrder;
	CGuiTextCtrl	m_wndParaclinicRes;
	CGuiLabel		m_wndDietLabel;
	CGuiTextCtrl	m_wndDiet;
	CGuiCheckBox	m_wndInputPulseTemperature;
	CGuiLabel		m_wndPulseLabel;
	CGuiNumberCtrl	m_wndPulse;
	CGuiLabel		m_wndTemperatureLabel;
	CGuiNumberCtrl	m_wndTemperature;
	CGuiLabel		m_wndBloodPressureLabel;
	CGuiTextCtrl	m_wndBloodPressure;
	CGuiLabel		m_wndlabel_space;
	CGuiTextCtrl	m_wndcontrol_20;
	CGuiLabel		m_wndBreathingRateLabel;
	CGuiNumberCtrl	m_wndBreathingRate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szDate;
	CString	m_szDiseaseTracking;
	CString	m_szParaclinicRes;
	CString	m_szDiet;
	BOOL	m_bInputPulseTemperature;
	long	m_nPulse;
	long	m_nTemperature;
	CString	m_szBloodPressure;
	CString	m_szcontrol_20;
	long	m_nBreathingRate;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnDiseaseTrackingChange(); 
	//void			OnDiseaseTrackingSetfocus(); 
	//void			OnDiseaseTrackingKillfocus(); 
	int			OnDiseaseTrackingCheckValue(); 
	void			OnSelectFromOrderSelect(); 
	//void			OnParaclinicResChange(); 
	//void			OnParaclinicResSetfocus(); 
	//void			OnParaclinicResKillfocus(); 
	int			OnParaclinicResCheckValue(); 
	//void			OnDietChange(); 
	//void			OnDietSetfocus(); 
	//void			OnDietKillfocus(); 
	int			OnDietCheckValue(); 
	void			OnInputPulseTemperatureSelect(); 
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
	//void			Oncontrol_20Change(); 
	//void			Oncontrol_20Setfocus(); 
	//void			Oncontrol_20Killfocus(); 
	int			Oncontrol_20CheckValue(); 
	//void			OnBreathingRateChange(); 
	//void			OnBreathingRateSetfocus(); 
	//void			OnBreathingRateKillfocus(); 
	int			OnBreathingRateCheckValue(); 
	void			OnInputPulseTemperatureSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSTreatmentDiseaseTrackingDialog(CWnd *pParent, int nMode);
	~CHMSTreatmentDiseaseTrackingDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentDiseaseTrackingDialog(); 
	int OnEditHMSTreatmentDiseaseTrackingDialog(); 
	int OnDeleteHMSTreatmentDiseaseTrackingDialog(); 
	int OnSaveHMSTreatmentDiseaseTrackingDialog(); 
	int OnCancelHMSTreatmentDiseaseTrackingDialog(); 
	int OnHMSTreatmentDiseaseTrackingDialogListLoadData(); 
};
#endif
