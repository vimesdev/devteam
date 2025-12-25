#ifndef HMSEMPINFODLG_H
#define HMSEMPINFODLG_H

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
#include "HMSWorkPlaceDlg.h"
class CHMSEmpInfoDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndProfiles;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndCardNoFindLabel;
	CGuiTextCtrl	m_wndCardNoFind;
	CGuiLabel		m_wndPatientIDLabel;
	CGuiTextCtrl	m_wndPatientID;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndOccupationLabel;
	CGuiComboBox	m_wndOccupation;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CGuiLabel		m_wndIDNoLabel;
	CGuiTextCtrl	m_wndIDNo;
	CGuiLabel		m_wndWorkingPlaceLabel;
	CGuiTextCtrl	m_wndWorkingPlace;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndContactAddressLabel;
	CGuiTextCtrl	m_wndContactAddress;
	CGuiButton		m_wndWorkPlaceButton;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szCardNoFind;
	CString	m_szPatientID;
	CString	m_szPatientName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CString	m_szEthnicKey;
	CString	m_szDepartmentKey;
	CString	m_szOccupationKey;
	CString	m_szProvillKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CString	m_szIDNo;
	CString	m_szWorkingPlace;
	CString	m_szPhone;
	CString	m_szRankKey;
	CString	m_szPositionKey;
	CString	m_szContactAddress;
	CString	m_szProvillScr;
	CString	m_szDistrictScr;
	CString	m_szVillageScr;

	CDbfMap m_hms_patientTbl;
	CDbfMap m_hms_docTbl;
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnCardNoFindChange(); 
	//void			OnCardNoFindSetfocus(); 
	//void			OnCardNoFindKillfocus(); 
	int			OnCardNoFindCheckValue(); 
	//void			OnPatientIDChange(); 
	//void			OnPatientIDSetfocus(); 
	//void			OnPatientIDKillfocus(); 
	int			OnPatientIDCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	void			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEthnicSelendok(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	long			OnEthnicLoadData(); 
	//void			OnEthnicAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnOccupationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOccupationSelendok(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	long			OnOccupationLoadData(); 
	//void			OnOccupationAddNew(); 
	void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	long			OnProvillLoadData(); 
	//void			OnProvillAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	long			OnVillageLoadData(); 
	//void			OnVillageAddNew(); 
	//void			OnIDNoChange(); 
	//void			OnIDNoSetfocus(); 
	//void			OnIDNoKillfocus(); 
	int			OnIDNoCheckValue(); 
	//void			OnWorkingPlaceChange(); 
	//void			OnWorkingPlaceSetfocus(); 
	//void			OnWorkingPlaceKillfocus(); 
	int			OnWorkingPlaceCheckValue();
	void		OnWorkingPlaceLabelSelect();
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	//void			OnRankAddNew(); 
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	//void			OnContactAddressChange(); 
	//void			OnContactAddressSetfocus(); 
	//void			OnContactAddressKillfocus(); 
	int			OnContactAddressCheckValue(); 
	void			OnWorkPlaceButtonSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	
	CHMSEmpInfoDlg(CWnd *pParent);
	~CHMSEmpInfoDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSEmpInfoDlg(); 
	int OnEditHMSEmpInfoDlg(); 
	int OnDeleteHMSEmpInfoDlg(); 
	int OnSaveHMSEmpInfoDlg(); 
	int OnCancelHMSEmpInfoDlg(); 
	int OnHMSEmpInfoDlgListLoadData(); 
};
#endif
