#ifndef CUSTOMERVISITREGISTERDIALOG_H
#define CUSTOMERVISITREGISTERDIALOG_H

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
class CCustomerVisitRegisterDialog : public CGuiDialog
{
protected:
public:
	long	m_nUID;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndDocnoLabel;
	CGuiNumberCtrl	m_wndDocno;
	CGuiLabel		m_wndCustomerNameLabel;
	CGuiTextCtrl	m_wndCustomerName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndGuardianLabel;
	CGuiTextCtrl	m_wndGuardian;
	CGuiLabel		m_wndCardTypeLabel;
	CGuiComboBox	m_wndCardType;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndCardNoExLabel;
	CGuiTextCtrl	m_wndCardNoEx;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndTimeInLabel;
	CGuiDateTimeCtrl	m_wndTimeIn;
	CGuiLabel		m_wndTimeOutLabel;
	CGuiDateTimeCtrl	m_wndTimeOut;
	CGuiLabel		m_wndTermByLabel;
	CGuiTextCtrl	m_wndTermBy;
	CGuiLabel		m_wndTermDateLabel;
	CGuiDateTimeCtrl	m_wndTermDate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szDepartmentKey;
	long	m_nDocno;
	CString	m_szCustomerName;
	CString	m_szPhone;
	CString	m_szReason;
	CString	m_szGuardian;
	CString	m_szCardTypeKey;
	CString	m_szCardNo;
	CString	m_szCardNoEx;
	long	m_nAmount;
	CString	m_szNote;
	CString	m_szTimeIn;
	CString	m_szTimeOut;
	CString	m_szTermByKey;
	CString	m_szTermDate;
	CDbfMap	m_hms_customer_visitTbl;
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData();
	int			OnDocnoCheckValue(); 
	//void			OnDepartmentAddNew(); 
	//void			OnCustomerNameChange(); 
	//void			OnCustomerNameSetfocus(); 
	//void			OnCustomerNameKillfocus(); 
	int			OnCustomerNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	//void			OnGuardianChange(); 
	//void			OnGuardianSetfocus(); 
	//void			OnGuardianKillfocus(); 
	int			OnGuardianCheckValue(); 
	void			OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCardTypeSelendok(); 
	//void			OnCardTypeSetfocus(); 
	//void			OnCardTypeKillfocus(); 
	long			OnCardTypeLoadData(); 
	//void			OnCardTypeAddNew(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue();
	int			OnCardNoExCheckValue();
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnTimeInChange(); 
	//void			OnTimeInSetfocus(); 
	//void			OnTimeInKillfocus(); 
	int			OnTimeInCheckValue(); 
	//void			OnTimeOutChange(); 
	//void			OnTimeOutSetfocus(); 
	//void			OnTimeOutKillfocus(); 
	int			OnTimeOutCheckValue(); 
	void			OnTermBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTermBySelendok(); 
	//void			OnTermBySetfocus(); 
	//void			OnTermByKillfocus(); 
	long			OnTermByLoadData(); 
	//void			OnTermByAddNew(); 
	//void			OnTermDateChange(); 
	//void			OnTermDateSetfocus(); 
	//void			OnTermDateKillfocus(); 
	int			OnTermDateCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CCustomerVisitRegisterDialog(CWnd *pParent, int nMode);
	~CCustomerVisitRegisterDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCustomerVisitRegisterDialog(); 
	int OnEditCustomerVisitRegisterDialog(); 
	int OnDeleteCustomerVisitRegisterDialog(); 
	long OnSaveCustomerVisitRegisterDialog(); 
	int OnCancelCustomerVisitRegisterDialog(); 
	int OnCustomerVisitRegisterDialogListLoadData(); 
};
#endif