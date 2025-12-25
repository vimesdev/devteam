#ifndef HMSCASHPOSTDIALOG_H
#define HMSCASHPOSTDIALOG_H

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
class CHMSCashPostDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiGroupBox	m_wndReceiptPaymentOrderInformation;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiNumberCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndCancel;
	long	m_nDocumentNo;
	CString	m_szRecordNo;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szSex;
	CString	m_szDepartment;
	long	m_nInvoiceNo;
	CString	m_szInvoiceDate;
	CString	m_szStaff;
	long	m_nAmount;
	CString	m_szDescription;
	CString m_szPosted;

	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnUnPostSelect(); 
	void			OnOKSelect(); 
	void			OnCloseSelect(); 
	CHMSCashPostDialog(CWnd *pParent, long nInvoiceNo);
	~CHMSCashPostDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCashPostDialog(); 
	int OnEditHMSCashPostDialog(); 
	int OnDeleteHMSCashPostDialog(); 
	int OnSaveHMSCashPostDialog(); 
	int OnCancelHMSCashPostDialog(); 
	int OnHMSCashPostDialogListLoadData(); 
};
#endif
