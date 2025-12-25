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
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
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
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPatientName;
	CString	m_szObjectKey;
	CString	m_szCardNo;
	CString	m_szCode;
	long	m_nDiscount;
	CString	m_szRegistrationDate;
	CString	m_szExpiryDate;
	CString	m_szRegistrationPlaceKey;
	CString	m_szCompany;
	CString	m_szAreaKey;
	BOOL	m_bOffLine;
	BOOL	m_bEmergency;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
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
	//void			OnRegistrationPlaceAddNew(); 
	//void			OnCompanyChange(); 
	//void			OnCompanySetfocus(); 
	//void			OnCompanyKillfocus(); 
	int			OnCompanyCheckValue(); 
	void			OnAreaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAreaSelendok(); 
	//void			OnAreaSetfocus(); 
	//void			OnAreaKillfocus(); 
	long			OnAreaLoadData(); 
	//void			OnAreaAddNew(); 
	void			OnOffLineSelect(); 
	void			OnEmergencySelect(); 
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
