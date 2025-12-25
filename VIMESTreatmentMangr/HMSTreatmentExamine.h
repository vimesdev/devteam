#ifndef HMSTREATMENTEXAMINE_H
#define HMSTREATMENTEXAMINE_H

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
class CHMSTreatmentExamine : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndExaminationInformation;
	CGuiGroupBox	m_wndExaminationList;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiLabel		m_wndPulseLabel;
	CGuiNumberCtrl	m_wndPulse;
	CGuiLabel		m_wndTemperatureLabel;
	CGuiNumberCtrl	m_wndTemperature;
	CGuiLabel		m_wndBloodPressureLabel;
	CGuiNumberCtrl	m_wndBloodPressure;
	CGuiNumberCtrl	m_wndBloodPressurex;
	CGuiLabel		m_wndBreathingIntervalLabel;
	CGuiNumberCtrl	m_wndBreathingInterval;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndHeightLabel;
	CGuiNumberCtrl	m_wndHeight;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndExamineList;
	CString	m_szDate;
	CString	m_szDoctorKey;
	CString	m_szDesc;
	long	m_nPulse;
	float	m_nTemperature;
	long	m_nBloodPressure;
	long	m_nBloodPressurex;
	long	m_nBreathingInterval;
	long	m_nWeight;
	long	m_nHeight;
	long	m_Idx;
	CDbfMap	m_hms_siexamTbl;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	void			OnDoctorAddNew(); 
	//void			OnExamineChange(); 
	//void			OnExamineSetfocus(); 
	//void			OnExamineKillfocus(); 
	int			OnExamineCheckValue(); 
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
	//void			OnBloodPressurexChange(); 
	//void			OnBloodPressurexSetfocus(); 
	//void			OnBloodPressurexKillfocus(); 
	int			OnBloodPressurexCheckValue(); 
	//void			OnBreathingIntervalChange(); 
	//void			OnBreathingIntervalSetfocus(); 
	//void			OnBreathingIntervalKillfocus(); 
	int			OnBreathingIntervalCheckValue(); 
	//void			OnWeightChange(); 
	//void			OnWeightSetfocus(); 
	//void			OnWeightKillfocus(); 
	int			OnWeightCheckValue(); 
	//void			OnHeightChange(); 
	//void			OnHeightSetfocus(); 
	//void			OnHeightKillfocus(); 
	int			OnHeightCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	long			OnExamineListLoadData(); 
	void			OnExamineListSelectChange(int nOldItem, int nNewItem); 
	void			OnExamineListDblClick(); 
	void			RefreshData();
	int			OnExamineListDeleteItem(); 
	int	OnCertificateofphysicaleyeclinic();
	CHMSTreatmentExamine();
	~CHMSTreatmentExamine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentExamine(); 
	int OnEditHMSTreatmentExamine(); 
	int OnDeleteHMSTreatmentExamine(); 
	int OnSaveHMSTreatmentExamine(); 
	int OnCancelHMSTreatmentExamine(); 
	int OnHMSTreatmentExamineListLoadData(); 

	void OnResizeLayout();

};
#endif
