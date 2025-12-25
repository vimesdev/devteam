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
class CHMSCardEntryDialog : public CGuiDialog{
protected:
	bool	m_bAddNew;
public:
	CGuiGroupBox	m_wndCardNumberInformation;
	CGuiGroupBox	m_wndTransferInformation;
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
	CGuiCheckBox	m_wndOffLine;	
	CGuiLabel		m_wndPaymentFromDateLabel;
	CGuiDateCtrl	m_wndPaymentFromDate;
	CGuiLabel		m_wndHospitalLabel;
	CGuiTextCtrl	m_wndHospital;
	CGuiLabel		m_wndTransferDiagnosticLabel;
	CGuiTextCtrl	m_wndTransferDiagnostic;

	CString	m_szPatientName;
	CString	m_szObjectKey;
	CString	m_szCardNo;
	CString	m_szCardNoData;
	CString m_szFormat;
	CString	m_szCode;
	int		m_nDiscount;
	int		m_nGroupID;
	long	m_nPatientNo;
	int		m_nIndex;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlaceKey;
	CString	m_szRegistrationPlace;
	CString	m_szPaymentFromDate;
	CString	m_szCompany;
	CString	m_szObject;
	CString	m_szObjectType;
	CString	m_szHospital;
	CString	m_szTransferDiagnostic;
	BOOL	m_bOffLine;

	CDbfMap	m_hms_cardTbl;

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
	void			OnRegistrationPlaceAddNew(); 
	//void			OnCompanyChange(); 
	//void			OnCompanySetfocus(); 
	//void			OnCompanyKillfocus(); 
	int			OnCompanyCheckValue();
	//void			OnHospitalChange(); 
	//void			OnHospitalSetfocus(); 
	//void			OnHospitalKillfocus(); 
	int			OnHospitalCheckValue(); 
	//void			OnTransferDiagnosticChange(); 
	//void			OnTransferDiagnosticSetfocus(); 
	//void			OnTransferDiagnosticKillfocus(); 
	int			OnTransferDiagnosticCheckValue();

	void			OnEditSelect(); 
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
//	int	ParseCard(CString szCardNo);
};
#endif
