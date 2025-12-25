#ifndef ACCTAXCREATIONDIALOG_H
#define ACCTAXCREATIONDIALOG_H

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
class CAccTaxCreationDialog : public CGuiDialog{
protected:
public:
	CString		m_szTaxInvoiceID;
	CString		m_szReferenceID;
	CString		m_szInvoiceType;
	CString		m_szID;

	CGuiLabel		m_wndFormNoLabel;
	CGuiGroupBox	m_wndTaxInformation;
	CGuiTextCtrl	m_wndFormNo;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiTextCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndAccountingObjectNameLabel;
	CGuiTextCtrl	m_wndAccountingObjectName;
	CGuiLabel		m_wndVATCodeLabel;
	CGuiTextCtrl	m_wndVATCode;
	CGuiLabel		m_wndAccountingObjectAddressLabel;
	CGuiTextCtrl	m_wndAccountingObjectAddress;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiCheckBox	m_wndApplyAll;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	CString	m_szFormNo;
	CString	m_szSerialNo;
	CString	m_szInvoiceNo;
	CString	m_szInvoiceDate;
	CString	m_szAccountingObjectName;
	CString	m_szVATCode;
	CString	m_szAccountingObjectAddress;
	CString	m_szDescription;
	BOOL	m_bApplyAll;

	CDbfMap	m_acc_invoice_vatTbl;
	//void			OnFormNoChange(); 
	//void			OnFormNoSetfocus(); 
	//void			OnFormNoKillfocus(); 
	int			OnFormNoCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	//void			OnAccountingObjectNameChange(); 
	//void			OnAccountingObjectNameSetfocus(); 
	//void			OnAccountingObjectNameKillfocus(); 
	int			OnAccountingObjectNameCheckValue(); 
	//void			OnVATCodeChange(); 
	//void			OnVATCodeSetfocus(); 
	//void			OnVATCodeKillfocus(); 
	int			OnVATCodeCheckValue(); 
	//void			OnAccountingObjectAddressChange(); 
	//void			OnAccountingObjectAddressSetfocus(); 
	//void			OnAccountingObjectAddressKillfocus(); 
	int			OnAccountingObjectAddressCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	CAccTaxCreationDialog(CWnd *pParent, int nMode);
	~CAccTaxCreationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAccTaxCreationDialog(); 
	int OnEditAccTaxCreationDialog(); 
	int OnDeleteAccTaxCreationDialog(); 
	int OnSaveAccTaxCreationDialog(); 
	int OnCancelAccTaxCreationDialog(); 
	int OnAccTaxCreationDialogListLoadData(); 
};
#endif
