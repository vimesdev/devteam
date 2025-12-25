#ifndef HMSCARDVIEWDIALOG_H
#define HMSCARDVIEWDIALOG_H

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
#include "HMSCardInfoView.h"

class AFX_EXT_CLASS CHMSCardViewDialog : public CGuiDialog
{
protected:
	bool	m_bAddNew;
	bool	m_bPassExpDate;
	bool	m_bEditEmergency;
	int		m_nCardDiscount;

public:
	bool	m_bAutoUpdate;
	bool	m_bCheckIns;
	JSONVALUE m_jData;
	
	JSONVALUE		m_json;
	JSONVALUE		m_jsonHisCheck;
	std::string		m_response;
	
	CGuiGroupBox	m_wndCardNumberInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndPercentLabel;
	CGuiLabel		m_wndRegistrationDateLabel;
	CGuiDateCtrl	m_wndRegistrationDate;
	CGuiLabel		m_wndExpiryDateLabel;
	CGuiDateCtrl	m_wndExpiryDate;
	CGuiLabel		m_wndRegistrationPlaceLabel;
	CGuiComboBox	m_wndRegistrationPlace;
	CGuiLabel		m_wndCompanyLabel;
	CGuiTextCtrl	m_wndCompany;
	CGuiLabel		m_wndAreaLabel;
	CGuiComboBox	m_wndArea;
	CGuiCheckBox	m_wndOffLine;
	CGuiCheckBox	m_wndEmergency;	
	CGuiButton		m_wndGenCard;

	CGuiButton		m_wndHemaFlag;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiButton		m_wndCheckIns;	

	CGuiCheckBox	m_wnd5Years;
	CGuiDateCtrl	m_wndFromDate;
	CGuiCheckBox	m_wndHasDisCount;
	CGuiDateCtrl	m_wndDateDisCount;
	CGuiDateCtrl	m_wndToDateDiscount;
	CGuiLabel		m_wndTransHospitalLabel;
	CGuiComboBox	m_wndTransHospital;
	CGuiLabel		m_wndDoituong_kcbLabel;
	CGuiComboBox	m_wndDoituong_kcb;

	CGuiLabel		m_wndCardNo2Label;
	CGuiTextCtrl	m_wndCardNo2;
	CGuiButton		m_wndCardNo2Btn;
	
	CHMSCardInfoView	m_wndCardInfoView;
	CGridListView	m_wndListHistory;

	CString m_szInputPatientName;
	CString m_szInputObject;
	CString m_szInputBirthDate;

	CString	m_szPatientName;
	CString	m_szObjectKey;
	CString	m_szCardNo;
	CString	m_szCardNoData;
	CString m_szFormat;
	CString	m_szCode;
	CString m_szOffLine;
	CString m_szEmergency;
	CString m_szAccess_token;
	CString m_szAddress;
	
	CString	m_szPassword;
	CString m_szUserName;
	int m_nProvinceID;
	CString m_szHospitalID;
	CString m_szToken_ID;
	CString m_szURL;
	CString m_szCardRegCode;
	CString m_szCardRegCode_control_old;

	int		m_nDiscount;
	int		m_nGroupID;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	long	m_nIndex;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlaceKey;
	CString	m_szRegistrationPlace;
	CString	m_szCompany;
	CString	m_szAreaKey;
	CString	m_szObject;
	CString	m_szObjectType;
	BOOL	m_bOffLine;
	BOOL	m_bEmergency;
	BOOL	m_bOver5Years;
	int		m_nDisrate;
	BOOL	m_bUseBarcode;
	BOOL	m_bPassCheckIns;
	CString m_szAdmitDate;

	CString	m_szBirthDate;
	CString	m_szSexKey;

	CString	m_szxCardNo;
	CString	m_szxIssueDate;
	CString	m_szxIssuePlace;
	CString	m_szxObject;
	CString	m_szWorkPlace;
	BOOL	m_bxHema;
	bool	m_bEnableObjectType;
	CString	m_szThe10so;
	int		m_nMuchuongthe10so;

	BOOL	m_b5Years;
	CString	m_szFromDate;
	BOOL	m_bHasDisCount;
	CString	m_szDateDisCount;
	CString	m_szToDateDiscount;
	CString	m_szTransHospitalKey;
	CString	m_szDoituong_kcbKey;

	CDbfMap	m_hms_cardTbl;
	void			OnPatientNameChange(); 
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
	void			OnAreaSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnAreaSelendok(); 
	//void			OnAreaSetfocus(); 
	//void			OnAreaKillfocus(); 
	long			OnAreaLoadData(); 
	//void			OnAreaAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnHemaSelect();
	void			OnEmergencySelect();
	void			OnOffLineSelect(); 
	void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	void			OnCheckInsSelect(); 
	void			OnOver5yearSelect(); 
	void			On5YearsSelect(); 
	//void			OnApplyDate5yearChange(); 
	//void			OnApplyDate5yearSetfocus(); 
	//void			OnApplyDate5yearKillfocus(); 
	
	int			OnFromDateCheckValue(); 
	
	
	void			OnHasDisCountSelect();
	int			OnDateDisCountCheckValue(); 
	//void			OnExceptionPaymentChange(); 
	//void			OnExceptionPaymentSetfocus(); 
	//void			OnExceptionPaymentKillfocus(); 
	int			OnExceptionPaymentCheckValue(); 
	//void			OnToDateDiscountChange(); 
	//void			OnToDateDiscountSetfocus(); 
	//void			OnToDateDiscountKillfocus(); 
	int			OnToDateDiscountCheckValue(); 
	long			OnListHistoryLoadData();
	void			OnListHistorySelectChange(int nOldItem, int nNewItem);
	void			OnListHistoryDblClick();

	CHMSCardViewDialog(CWnd *pParent, int nMode, bool bEnableObjectType=false,bool bUseBarCode=false);
	~CHMSCardViewDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCardViewDialog(); 
	int OnEditHMSCardViewDialog(); 
	int OnDeleteHMSCardViewDialog(); 
	int OnSaveHMSCardViewDialog(); 
	int OnCancelHMSCardViewDialog(); 
	int OnHMSCardViewDialogListLoadData(); 
	bool UpdateCardInfo(std::string response);
	void OnGenCardSelect();
	void RecalcPercent();
	void			OnDoituong_kcbSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoituong_kcbSelendok(); 	
	long			OnDoituong_kcbLoadData(); 
	void			OnTransHospitalSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnTransHospitalSelendok();
	//void			OnTransHospitalSetfocus(); 
	//void			OnTransHospitalKillfocus(); 
	int			OnTransHospitalLoadData();
	//void			OnTransHospitalAddNew();
//	int	ParseCard(CString szCardNo);
	void UpdateJson(BOOL bUpdate);
	JSONVALUE		GetInsState();
    bool IsPassCheck();
};
#endif