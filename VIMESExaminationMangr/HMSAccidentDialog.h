#ifndef HMSACCIDENTDIALOG_H
#define HMSACCIDENTDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSAccidentDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndHelmetUsedInfor;
	CGuiGroupBox	m_wndAlcoholUsedInfor;
	CGuiGroupBox	m_wndTraumaStatus;
	CGuiGroupBox	m_wndTreat;
	CGuiLabel		m_wndCauseOfAccidentLabel;
	CGuiComboBox	m_wndCauseOfAccident;
	CGuiLabel		m_wndAccidentPlaceLabel;
	CGuiComboBox	m_wndAccidentPlace;
	CGuiLabel		m_wndTransportUsedLabel;
	CGuiComboBox	m_wndTransportUsed;
	CGuiLabel		m_wndTransportCausedAccidentLabel;
	CGuiComboBox	m_wndTransportCausedAccident;
	CGuiLabel		m_wndExplosiveLabel;
	CGuiComboBox	m_wndExplosive;
	CGuiLabel		m_wndAccidentTimeLabel;
	CGuiDateTimeCtrl	m_wndAccidentTime;
	CGuiLabel		m_wndFirstAidLabel;
	CGuiComboBox	m_wndFirstAid;
	CGuiLabel		m_wndFirstAidPlaceLabel;
	CGuiComboBox	m_wndFirstAidPlace;
	CGuiLabel		m_wndTransportToHospitalLabel;
	CGuiComboBox	m_wndTransportToHospital;
	CGuiLabel		m_wndEmergencyTimeLabel;
	CGuiDateTimeCtrl	m_wndEmergencyTime;
	CGuiLabel		m_wndPatientStateLabel;
	CGuiComboBox	m_wndPatientState;
	CGuiLabel		m_wndWearHelmetLabel;
	CGuiComboBox	m_wndWearHelmet;
	CGuiLabel		m_wndPutOnHelmetStrapLabel;
	CGuiComboBox	m_wndPutOnHelmetStrap;
	CGuiLabel		m_wndHelmetBrokenLabel;
	CGuiComboBox	m_wndHelmetBroken;
	CGuiLabel		m_wndHelmetManufacturerLabel;
	CGuiTextCtrl	m_wndHelmetManufacturer;
	CGuiLabel		m_wndUseAlcoholLabel;
	CGuiComboBox	m_wndUseAlcohol;
	CGuiLabel		m_wndSensorialLabel;
	CGuiComboBox	m_wndSensorial;
	CGuiLabel		m_wndBloodAlcoholConcentrationLabel;
	CGuiNumberCtrl	m_wndBloodAlcoholConcentration;
	CGuiLabel		m_wndBreathAlcoholConcentrationLabel;
	CGuiNumberCtrl	m_wndBreathAlcoholConcentration;
	CGuiLabel		m_wndCranialTraumaLabel;
	CGuiComboBox	m_wndCranialTrauma;
	CGuiLabel		m_wndGlassgowLabel;
	CGuiComboBox	m_wndGlassgow;
	CGuiLabel		m_wndSpineTraumaLabel;
	CGuiComboBox	m_wndSpineTrauma;
	CGuiLabel		m_wndOtherTraumaLabel;
	CGuiComboBox	m_wndOtherTrauma;
	CGuiLabel		m_wndAdmissionLabel;
	CGuiComboBox	m_wndAdmission;
	CGuiLabel		m_wndEmergencyOperationLabel;
	CGuiComboBox	m_wndEmergencyOperation;
	CGuiLabel		m_wndDeathLabel;
	CGuiComboBox	m_wndDeath;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szCauseOfAccidentKey;
	CString	m_szAccidentPlaceKey;
	CString	m_szTransportUsedKey;
	CString	m_szTransportCausedAccidentKey;
	CString	m_szExplosiveKey;
	CString	m_szAccidentTime;
	CString	m_szFirstAidKey;
	CString	m_szFirstAidPlaceKey;
	CString	m_szTransportToHospitalKey;
	CString	m_szEmergencyTime;
	CString	m_szPatientStateKey;
	CString	m_szWearHelmetKey;
	CString	m_szPutOnHelmetStrapKey;
	CString	m_szHelmetBrokenKey;
	CString	m_szHelmetManufacturer;
	CString	m_szUseAlcoholKey;
	CString	m_szSensorialKey;
	long	m_nBloodAlcoholConcentration;
	long	m_nBreathAlcoholConcentration;
	CString	m_szCranialTraumaKey;
	CString	m_szGlassgowKey;
	CString	m_szSpineTraumaKey;
	CString	m_szOtherTraumaKey;
	CString	m_szAdmissionKey;
	CString	m_szEmergencyOperationKey;
	CString	m_szDeathKey;
	CDbfMap	m_hms_accidentTbl;

	long m_nDocNo;

	void			OnCauseOfAccidentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCauseOfAccidentSelendok(); 
	//void			OnCauseOfAccidentSetfocus(); 
	//void			OnCauseOfAccidentKillfocus(); 
	long			OnCauseOfAccidentLoadData(); 
	void			OnCauseOfAccidentAddNew(); 
	void			OnAccidentPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAccidentPlaceSelendok(); 
	//void			OnAccidentPlaceSetfocus(); 
	//void			OnAccidentPlaceKillfocus(); 
	long			OnAccidentPlaceLoadData(); 
	void			OnAccidentPlaceAddNew(); 
	void			OnTransportUsedSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransportUsedSelendok(); 
	//void			OnTransportUsedSetfocus(); 
	//void			OnTransportUsedKillfocus(); 
	long			OnTransportUsedLoadData(); 
	void			OnTransportUsedAddNew(); 
	void			OnTransportCausedAccidentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransportCausedAccidentSelendok(); 
	//void			OnTransportCausedAccidentSetfocus(); 
	//void			OnTransportCausedAccidentKillfocus(); 
	long			OnTransportCausedAccidentLoadData(); 
	void			OnTransportCausedAccidentAddNew(); 
	void			OnExplosiveSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExplosiveSelendok(); 
	//void			OnExplosiveSetfocus(); 
	//void			OnExplosiveKillfocus(); 
	long			OnExplosiveLoadData(); 
	void			OnExplosiveAddNew(); 
	//void			OnAccidentTimeChange(); 
	//void			OnAccidentTimeSetfocus(); 
	//void			OnAccidentTimeKillfocus(); 
	int			OnAccidentTimeCheckValue(); 
	void			OnFirstAidSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFirstAidSelendok(); 
	//void			OnFirstAidSetfocus(); 
	//void			OnFirstAidKillfocus(); 
	long			OnFirstAidLoadData(); 
	void			OnFirstAidAddNew(); 
	void			OnFirstAidPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFirstAidPlaceSelendok(); 
	//void			OnFirstAidPlaceSetfocus(); 
	//void			OnFirstAidPlaceKillfocus(); 
	long			OnFirstAidPlaceLoadData(); 
	void			OnFirstAidPlaceAddNew(); 
	void			OnTransportToHospitalSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransportToHospitalSelendok(); 
	//void			OnTransportToHospitalSetfocus(); 
	//void			OnTransportToHospitalKillfocus(); 
	long			OnTransportToHospitalLoadData(); 
	void			OnTransportToHospitalAddNew(); 
	//void			OnEmergencyTimeChange(); 
	//void			OnEmergencyTimeSetfocus(); 
	//void			OnEmergencyTimeKillfocus(); 
	int			OnEmergencyTimeCheckValue(); 
	void			OnPatientStateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientStateSelendok(); 
	//void			OnPatientStateSetfocus(); 
	//void			OnPatientStateKillfocus(); 
	long			OnPatientStateLoadData(); 
	void			OnPatientStateAddNew(); 
	void			OnWearHelmetSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWearHelmetSelendok(); 
	//void			OnWearHelmetSetfocus(); 
	//void			OnWearHelmetKillfocus(); 
	long			OnWearHelmetLoadData(); 
	void			OnWearHelmetAddNew(); 
	void			OnPutOnHelmetStrapSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPutOnHelmetStrapSelendok(); 
	//void			OnPutOnHelmetStrapSetfocus(); 
	//void			OnPutOnHelmetStrapKillfocus(); 
	long			OnPutOnHelmetStrapLoadData(); 
	void			OnPutOnHelmetStrapAddNew(); 
	void			OnHelmetBrokenSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHelmetBrokenSelendok(); 
	//void			OnHelmetBrokenSetfocus(); 
	//void			OnHelmetBrokenKillfocus(); 
	long			OnHelmetBrokenLoadData(); 
	void			OnHelmetBrokenAddNew(); 
	//void			OnHelmetManufacturerChange(); 
	//void			OnHelmetManufacturerSetfocus(); 
	//void			OnHelmetManufacturerKillfocus(); 
	int			OnHelmetManufacturerCheckValue(); 
	void			OnUseAlcoholSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUseAlcoholSelendok(); 
	//void			OnUseAlcoholSetfocus(); 
	//void			OnUseAlcoholKillfocus(); 
	long			OnUseAlcoholLoadData(); 
	void			OnUseAlcoholAddNew(); 
	void			OnSensorialSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSensorialSelendok(); 
	//void			OnSensorialSetfocus(); 
	//void			OnSensorialKillfocus(); 
	long			OnSensorialLoadData(); 
	void			OnSensorialAddNew(); 
	//void			OnBloodAlcoholConcentrationChange(); 
	//void			OnBloodAlcoholConcentrationSetfocus(); 
	//void			OnBloodAlcoholConcentrationKillfocus(); 
	int			OnBloodAlcoholConcentrationCheckValue(); 
	//void			OnBreathAlcoholConcentrationChange(); 
	//void			OnBreathAlcoholConcentrationSetfocus(); 
	//void			OnBreathAlcoholConcentrationKillfocus(); 
	int			OnBreathAlcoholConcentrationCheckValue(); 
	void			OnCranialTraumaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCranialTraumaSelendok(); 
	//void			OnCranialTraumaSetfocus(); 
	//void			OnCranialTraumaKillfocus(); 
	long			OnCranialTraumaLoadData(); 
	void			OnCranialTraumaAddNew(); 
	void			OnGlassgowSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGlassgowSelendok(); 
	//void			OnGlassgowSetfocus(); 
	//void			OnGlassgowKillfocus(); 
	long			OnGlassgowLoadData(); 
	void			OnGlassgowAddNew(); 
	void			OnSpineTraumaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSpineTraumaSelendok(); 
	//void			OnSpineTraumaSetfocus(); 
	//void			OnSpineTraumaKillfocus(); 
	long			OnSpineTraumaLoadData(); 
	void			OnSpineTraumaAddNew(); 
	void			OnOtherTraumaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOtherTraumaSelendok(); 
	//void			OnOtherTraumaSetfocus(); 
	//void			OnOtherTraumaKillfocus(); 
	long			OnOtherTraumaLoadData(); 
	void			OnOtherTraumaAddNew(); 
	void			OnAdmissionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAdmissionSelendok(); 
	//void			OnAdmissionSetfocus(); 
	//void			OnAdmissionKillfocus(); 
	long			OnAdmissionLoadData(); 
	void			OnAdmissionAddNew(); 
	void			OnEmergencyOperationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEmergencyOperationSelendok(); 
	//void			OnEmergencyOperationSetfocus(); 
	//void			OnEmergencyOperationKillfocus(); 
	long			OnEmergencyOperationLoadData(); 
	void			OnEmergencyOperationAddNew(); 
	void			OnDeathSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeathSelendok(); 
	//void			OnDeathSetfocus(); 
	//void			OnDeathKillfocus(); 
	long			OnDeathLoadData(); 
	void			OnDeathAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSAccidentDialog(CWnd *pParent);
	~CHMSAccidentDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAccidentDialog(); 
	int OnEditHMSAccidentDialog(); 
	int OnDeleteHMSAccidentDialog(); 
	int OnSaveHMSAccidentDialog(); 
	int OnCancelHMSAccidentDialog(); 
	int OnHMSAccidentDialogListLoadData();
	void SetControlState(int bState);
};
#endif
