#ifndef HMSCARDENTRYDIALOG_H
#define HMSCARDENTRYDIALOG_H

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
class CHMSCardEntryDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndCardNumberInformation;
	CGuiGroupBox	m_wndTransferInformation;
	CGuiGroupBox	m_wndSecondaryCardInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiNumberCtrl	m_wndDisrate;
	CGuiLabel		m_wndPercentLabel;
	CGuiLabel		m_wndRegistrationDateLabel;
	CGuiDateCtrl	m_wndRegistrationDate;
	CGuiLabel		m_wndExpiryDateLabel;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndRegistrationPlaceLabel;
	CGuiComboBox	m_wndRegistrationPlace;
	CGuiLabel		m_wndCompanyLabel;
	CGuiTextCtrl	m_wndCompany;
	CGuiCheckBox	m_wndOffLine;
	CGuiCheckBox	m_wndEmergency;
	CGuiCheckBox	m_wndCardNo2Label;
	CGuiTextCtrl	m_wndCardNo2;
	CGuiLabel		m_wndCode2Label;
	CGuiTextCtrl	m_wndCode2;
	CGuiLabel		m_wndDiscount2Label;
	CGuiTextCtrl	m_wndDiscount2;
	CGuiLabel		m_wndRegDate2Label;
	CGuiDateCtrl	m_wndRegDate2;
	CGuiLabel		m_wndExpDate2Label;
	CGuiDateCtrl	m_wndExpDate2;
	CGuiLabel		m_wndRegistrationPlace2Label;
	CGuiComboBox	m_wndRegistrationPlace2;
	CGuiLabel		m_wndCompany2Label;
	CGuiTextCtrl	m_wndCompany2;
	CGuiButton		m_wndUpdate;
	CGuiLabel		m_wndHospitalLabel;
	CGuiComboBox	m_wndHospital;
	CGuiLabel		m_wndDiseaseLabel;
	CGuiTextCtrl	m_wndDisease;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPatientName;
	CString	m_szCardNo;
	CString	m_szCode;
	long	m_nDiscount;
	long	m_nDisrate;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlaceKey;
	CString	m_szCompany;
	BOOL	m_bOffLine;
	BOOL	m_bEmergency;
	BOOL	m_bCardNo2Label;
	CString	m_szCardNo2;
	CString	m_szCode2;
	CString	m_szDiscount2;
	CString	m_szRegDate2;
	CString	m_szExpDate2;
	CString	m_szRegistrationPlace2Key;
	CString	m_szCompany2;
	CString	m_szHospitalKey;
	CString	m_szDisease;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//void			OnDisrateChange(); 
	//void			OnDisrateSetfocus(); 
	//void			OnDisrateKillfocus(); 
	int			OnDisrateCheckValue(); 
	//void			OnRegistrationDateChange(); 
	//void			OnRegistrationDateSetfocus(); 
	//void			OnRegistrationDateKillfocus(); 
	int			OnRegistrationDateCheckValue(); 
	//void			OnExpiryDateChange(); 
	//void			OnExpiryDateSetfocus(); 
	//void			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	void			OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRegistrationPlaceSelendok(); 
	//void			OnRegistrationPlaceSetfocus(); 
	//void			OnRegistrationPlaceKillfocus(); 
	long			OnRegistrationPlaceLoadData(); 
	//void			OnRegistrationPlaceAddNew(); 
	//void			OnCompanyChange(); 
	//void			OnCompanySetfocus(); 
	//void			OnCompanyKillfocus(); 
	int			OnCompanyCheckValue(); 
	void			OnOffLineSelect(); 
	void			OnEmergencySelect(); 
	void			OnCardNo2LabelSelect(); 
	//void			OnCardNo2Change(); 
	//void			OnCardNo2Setfocus(); 
	//void			OnCardNo2Killfocus(); 
	int			OnCardNo2CheckValue(); 
	//void			OnCode2Change(); 
	//void			OnCode2Setfocus(); 
	//void			OnCode2Killfocus(); 
	int			OnCode2CheckValue(); 
	//void			OnDiscount2Change(); 
	//void			OnDiscount2Setfocus(); 
	//void			OnDiscount2Killfocus(); 
	int			OnDiscount2CheckValue(); 
	//void			OnRegDate2Change(); 
	//void			OnRegDate2Setfocus(); 
	//void			OnRegDate2Killfocus(); 
	int			OnRegDate2CheckValue(); 
	//void			OnExpDate2Change(); 
	//void			OnExpDate2Setfocus(); 
	//void			OnExpDate2Killfocus(); 
	int			OnExpDate2CheckValue(); 
	void			OnRegistrationPlace2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRegistrationPlace2Selendok(); 
	//void			OnRegistrationPlace2Setfocus(); 
	//void			OnRegistrationPlace2Killfocus(); 
	long			OnRegistrationPlace2LoadData(); 
	//void			OnRegistrationPlace2AddNew(); 
	//void			OnCompany2Change(); 
	//void			OnCompany2Setfocus(); 
	//void			OnCompany2Killfocus(); 
	int			OnCompany2CheckValue(); 
	void			OnUpdateSelect(); 
	void			OnHospitalSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHospitalSelendok(); 
	//void			OnHospitalSetfocus(); 
	//void			OnHospitalKillfocus(); 
	long			OnHospitalLoadData(); 
	//void			OnHospitalAddNew(); 
	//void			OnDiseaseChange(); 
	//void			OnDiseaseSetfocus(); 
	//void			OnDiseaseKillfocus(); 
	int			OnDiseaseCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSCardEntryDialog(CWnd *pParent);
	~CHMSCardEntryDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCardEntryDialog(); 
	int OnEditHMSCardEntryDialog(); 
	int OnDeleteHMSCardEntryDialog(); 
	int OnSaveHMSCardEntryDialog(); 
	int OnCancelHMSCardEntryDialog(); 
	int OnHMSCardEntryDialogListLoadData(); 
};
#endif
