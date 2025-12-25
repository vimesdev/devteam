#ifndef HMSCARDENTRYDIALOG_H
#define HMSCARDENTRYDIALOG_H

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
#include "HMSInsuranceCheckIn.h"
class CHMSCardEntryDialog : public CGuiDialog
{

protected:
	bool	m_bAddNew;
	bool	m_bPassExpDate;
	bool	m_bEditEmergency;
	int		m_nCardDiscount;
	long	m_nxCardIdx;
	long	m_nCardIdx;
	bool	m_bInsCheck1stCard;
	bool	m_bInsCheck2ndCard;

	typedef struct tagCardInfo
	{
		CString	regdate;
		CString	expdate;
		CString	hospitalid;
		CString	regplacecde;
		CString	company;
		CString	code;
		int		discount;
		int		groupid;
		CString	xCardno;
		CString xobject;
		CString xIssuePlace;
		CString xIssueDate;
		CString szArea;
		BOOL	bxHema;
		CString szOver5year;
		CString szDateOfBirth;

		CString sz5YearDate;
		CString szSex;
		CString szBirthDate;


	} CardInfo;
public:

	CGuiGroupBox	m_wndCardNumberInformation;
	CGuiGroupBox	m_wndTransferInformation;
	CGuiGroupBox	m_wndSecondaryCardInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	/*CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;*/
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
	CGuiNumberCtrl	m_wndDiscount2;
	CGuiButton		m_wndCheckIns;
	CGuiButton		m_wndCheckIns2;
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

	CGuiCheckBox	m_wndOver5Year;
	CGuiCheckBox	m_wndOver5YearOpt;
	CGuiNumberCtrl	m_wndDisrate2;
	CGuiLabel		m_wndPercent2Label;
	CGuiCheckBox	m_wndOffLine2;
	
	CGuiDateCtrl	m_wndDateOrver5Year;
	CGuiCheckBox	m_wndHasFreePaper;
	CGuiDateCtrl	m_wndDateDisCount;

	CGuiLabel		m_wndAreaLabel;
	CGuiComboBox	m_wndArea;
	CGuiLabel		m_wndDoituong_kcbLabel;
	CGuiComboBox	m_wndDoituong_kcb;

	BOOL			m_bOver5Year;
	BOOL			m_bOver5YearOpt;
	
	CString	m_szDateOrver5Year;
	BOOL	m_bHasFreePaper;
	CString	m_szDateDisCount;

	CString	m_szPatientName;
	CString	m_szObjectKey;
	CString	m_szCardNo;
	CString	m_szCardNoData;
	CString m_szFormat;
	CString	m_szCode;
	CString m_szWorkPlace;

	int		m_nDiscount;
	int		m_nGroupID;
	long	m_nPatientNo;
	int		m_nIndex;
	CString	m_szRegistrationDate;
	CString	m_szRegistrationDateOld;
	CString	m_szExpiryDate;
	CString	m_szExpiryDateOld;
	CString	m_szRegistrationPlaceKey;
	CString	m_szRegistrationPlace;
	CString	m_szCompany;
	CString	m_szObject;
	CString	m_szObjectType;
	CString	m_szHospital;
	CString	m_szDisease;
	BOOL	m_bOffLine;
	BOOL	m_bOffLineOld;
	BOOL	m_bEmergency;
	BOOL	m_bOffLine2;
	int		m_nDisrate;

	CString m_szxCardNo;
	CString m_szxIssueDate;
	CString m_szxIssuePlace;
	CString m_szxObject;
	CString m_szFromDate;


	int		m_nGroupID2;
	BOOL	m_bCardNo2Label;
	CString	m_szCardNo2;
	CString	m_szCode2;
	int		m_nDiscount2;
	int	    m_nDisrate2;
	CString	m_szRegDate2;
	CString	m_szExpDate2;
	CString	m_szRegistrationPlace2Key;
	CString	m_szCompany2;
	bool	m_bEnableObjectType;
	CHMSInsuranceCheckIn	m_insCheckin;
	CString m_szBirthDate;
	CString	m_szAreaKey;
	CString	m_szDoituong_kcbKey;
	CString m_szCardNoFind;
	CardInfo	m_sCardInfo;
	CString m_szThe10so;
	long m_nDocumentNo;


	CDbfMap	m_hms_cardTbl;
	CDbfMap m_hms_docTbl;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	int			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnObjectSelendok(); 
	//int			OnObjectSetfocus(); 
	//int			OnObjectKillfocus(); 
	int			OnObjectLoadData(); 
	int			OnObjectAddNew(); 

	void			OnCardNoChange(); 
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
	int			OnDisrate2CheckValue();
	void			OnRegistrationDateChange(); 
	//void			OnRegistrationDateSetfocus(); 
	//void			OnRegistrationDateKillfocus(); 
	int			OnRegistrationDateCheckValue(); 
	void			OnExpiryDateChange(); 
	//void			OnExpiryDateSetfocus(); 
	//void			OnExpiryDateKillfocus(); 
	int			OnExpiryDateCheckValue(); 
	void			OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRegistrationPlaceSelendok(); 
	//void			OnRegistrationPlaceSetfocus(); 
	//void			OnRegistrationPlaceKillfocus(); 
	long			OnRegistrationPlaceLoadData(); 
	void			OnRegistrationPlaceAddNew(); 
	void			OnRegistrationPlaceLabelClick(); 
	//void			OnCompanyChange(); 
	//void			OnCompanySetfocus(); 
	//void			OnCompanyKillfocus(); 
	int			OnCompanyCheckValue(); 
	void			OnEditSelect(); 
	void			OnCardNo2LabelSelect(); 
	void			OnCardNo2Change(); 
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
	void			OnRegDate2Change(); 
	//void			OnRegDate2Setfocus(); 
	//void			OnRegDate2Killfocus(); 
	int			OnRegDate2CheckValue(); 
	void			OnExpDate2Change(); 
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
	void			OnSaveSelect();
	void			OnCloseSelect(); 
	void			OnHemaSelect();
	void			OnEmergencySelect();
	void			OnOffLineSelect(); 
	void			OnOffLine2Select(); 
	void			OnOver5YearSelect();
	void			OnCheckInsSelect();
	void			OnCheckInsSelect2();
	void		OnSave();
	
	//int			OnHospitalChange(); 
	//int			OnHospitalSetfocus(); 
	//int			OnHospitalKillfocus(); 
	//int			OnHospitalCheckValue(); 
	int			OnHospitalSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnHospitalSelendok(); 
	//int			OnHospitalSetfocus(); 
	//int			OnHospitalKillfocus(); 
	int			OnHospitalLoadData(); 
	int			OnHospitalAddNew(); 

	//int			OnDiseaseChange(); 
	//int			OnDiseaseSetfocus(); 
	//int			OnDiseaseKillfocus(); 
	int			OnDiseaseCheckValue();
	void			OnOver5YearOptSelect(); 
	int			OnDateOrver5YearCheckValue(); 
	void		OnHasFreePaperSelect();
	int			OnDateDisCountCheckValue(); 
	long			OnAreaLoadData();
	long			OnDoituong_kcbLoadData(); 


	CHMSCardEntryDialog(CWnd *pParent, int nMode, bool bEnableObjectType=false);
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
	int	ParseCard(CString szObject, CString szCardNo, CString& szRetCode, int& nInsDiscount, int& nGroupID);
	void EnableSecondaryCard(BOOL bFlag);
	void RecalcPercent();
	void UpdateJson(JSONVALUE* jResponse, bool bPrimaryCard=true);
	bool CheckHospitalTransfer();
	bool IsByPassCheckIns(CString szCardNo);
	void CheckQrCode(LPCTSTR lpszCard);
	int ProcessIdCardQrInput(CString szInfo);
	int OnCardNoFindCheckValue();
	JSONVALUE		GetInsState();
};
#endif