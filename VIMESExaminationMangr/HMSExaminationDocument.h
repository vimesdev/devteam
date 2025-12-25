#ifndef HMSExaminationDOCUMENT_H
#define HMSExaminationDOCUMENT_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Vietnamese Medical Software Join Stock Company. 2006-2008.			
//	All rights reserved. 
//	This program is protected by Viet nam and interEthnical treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@VIMES.com.vn or hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@VIMES.com.vn hoac hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSExaminationDocument : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndCardInformation;
	CGuiGroupBox	m_wndTransferInformation;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndReceptNoLabel;
	CGuiTextCtrl	m_wndReceptNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiComboBox	m_wndAddress;
	CGuiLabel		m_wndAddressDetailLabel;
	CGuiTextCtrl	m_wndAddressDetail;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndRegistrationDateLabel;
	CGuiDateCtrl	m_wndRegistrationDate;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndRegistrationPlaceLabel;
	CGuiTextCtrl	m_wndRegistrationPlace;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndHospitalLabel;
	CGuiTextCtrl	m_wndHospital;
	CGuiLabel		m_wndDiseaseLabel;
	CGuiTextCtrl	m_wndDisease;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndOccupationLabel;
	CGuiComboBox	m_wndEthnicality;
	CGuiLabel		m_wndRelativeLabel;
	CGuiTextCtrl	m_wndRelative;
	CGuiLabel		m_wndRelationLabel;
	CGuiComboBox	m_wndRelation;
	CGuiLabel		m_wndContactAddressLabel;
	CGuiTextCtrl	m_wndContactAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiButton		m_wndCancel;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szReceptNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSexKey;
	CString	m_szAddressKey;
	CString	m_szAddressDetail;
	CString	m_szWorkplace;
	CString	m_szCardNo;
	long	m_nDiscount;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlace;
	CString	m_szObjectKey;
	CString	m_szHospital;
	CString	m_szDisease;
	CString	m_szEthnicKey;
	CString	m_szEthnicalityKey;
	CString	m_szRelative;
	CString	m_szRelationKey;
	CString	m_szContactAddress;
	CString	m_szPhone;
	CString	m_szBirthDate;
	//int			OnPatientNoChange(); 
	//int			OnPatientNoSetfocus(); 
	//int			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//int			OnDocumentNoChange(); 
	//int			OnDocumentNoSetfocus(); 
	//int			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//int			OnReceptNoChange(); 
	//int			OnReceptNoSetfocus(); 
	//int			OnReceptNoKillfocus(); 
	int			OnReceptNoCheckValue(); 
	//int			OnPatientNameChange(); 
	//int			OnPatientNameSetfocus(); 
	//int			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//int			OnAgeChange(); 
	//int			OnAgeSetfocus(); 
	//int			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	int			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnSexSelendok(); 
	//int			OnSexSetfocus(); 
	//int			OnSexKillfocus(); 
	int			OnSexLoadData(); 
	int			OnSexAddNew(); 
	int			OnAddressSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnAddressSelendok(); 
	//int			OnAddressSetfocus(); 
	//int			OnAddressKillfocus(); 
	int			OnAddressLoadData(); 
	int			OnAddressAddNew(); 
	//int			OnAddressDetailChange(); 
	//int			OnAddressDetailSetfocus(); 
	//int			OnAddressDetailKillfocus(); 
	int			OnAddressDetailCheckValue(); 
	//int			OnWorkplaceChange(); 
	//int			OnWorkplaceSetfocus(); 
	//int			OnWorkplaceKillfocus(); 
	int			OnWorkplaceCheckValue(); 
	//int			OnCardNoChange(); 
	//int			OnCardNoSetfocus(); 
	//int			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//int			OnDiscountChange(); 
	//int			OnDiscountSetfocus(); 
	//int			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//int			OnRegistrationDateChange(); 
	//int			OnRegistrationDateSetfocus(); 
	//int			OnRegistrationDateKillfocus(); 
	int			OnRegistrationDateCheckValue(); 
	//int			OnExpiryDateChange(); 
	//int			OnExpiryDateSetfocus(); 
	//int			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	//int			OnRegistrationPlaceChange(); 
	//int			OnRegistrationPlaceSetfocus(); 
	//int			OnRegistrationPlaceKillfocus(); 
	int			OnRegistrationPlaceCheckValue(); 
	int			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnObjectSelendok(); 
	//int			OnObjectSetfocus(); 
	//int			OnObjectKillfocus(); 
	int			OnObjectLoadData(); 
	int			OnObjectAddNew(); 
	//int			OnHospitalChange(); 
	//int			OnHospitalSetfocus(); 
	//int			OnHospitalKillfocus(); 
	int			OnHospitalCheckValue(); 
	//int			OnDiseaseChange(); 
	//int			OnDiseaseSetfocus(); 
	//int			OnDiseaseKillfocus(); 
	int			OnDiseaseCheckValue(); 
	int			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnEthnicSelendok(); 
	//int			OnEthnicSetfocus(); 
	//int			OnEthnicKillfocus(); 
	int			OnEthnicLoadData(); 
	int			OnEthnicAddNew(); 
	int			OnEthnicalitySelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnEthnicalitySelendok(); 
	//int			OnEthnicalitySetfocus(); 
	//int			OnEthnicalityKillfocus(); 
	int			OnEthnicalityLoadData(); 
	int			OnEthnicalityAddNew(); 
	//int			OnRelativeChange(); 
	//int			OnRelativeSetfocus(); 
	//int			OnRelativeKillfocus(); 
	int			OnRelativeCheckValue(); 
	int			OnRelationSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnRelationSelendok(); 
	//int			OnRelationSetfocus(); 
	//int			OnRelationKillfocus(); 
	int			OnRelationLoadData(); 
	int			OnRelationAddNew(); 
	//int			OnContactAddressChange(); 
	//int			OnContactAddressSetfocus(); 
	//int			OnContactAddressKillfocus(); 
	int			OnContactAddressCheckValue(); 
	//int			OnPhoneChange(); 
	//int			OnPhoneSetfocus(); 
	//int			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	int			OnEditSelect(); 
	int			OnSaveSelect(); 
	//int			OnBirthDateChange(); 
	//int			OnBirthDateSetfocus(); 
	//int			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	int			OnCancelSelect(); 
	CHMSExaminationDocument();
	~CHMSExaminationDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExaminationDocument(); 
	int OnEditHMSExaminationDocument(); 
	int OnDeleteHMSExaminationDocument(); 
	int OnSaveHMSExaminationDocument(); 
	int OnCancelHMSExaminationDocument(); 
	int OnHMSExaminationDocumentListLoadData(); 
};
#endif
