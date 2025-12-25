#ifndef HMSBankInvoiceInfoDialog_H
#define HMSBankInvoiceInfoDialog_H

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
class AFX_EXT_CLASS CHMSBankInvoiceInfoDialog : public CGuiDialog{
protected:
	CString	m_szBirthDate;
	bool	m_bEnterPatient;
	int		m_nFlag;
	long	m_nCurrentDocNo;
	long	m_nCurrentRecordNo;

public:
	CGuiGroupBox	m_wndDepositInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;

	CGuiTextCtrl	m_wndRecordNo;

	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYOBLabel;
	CGuiNumberCtrl	m_wndYOB;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndReturnDateLabel;
	CGuiDateCtrl	m_wndReturnDate;
	CGuiListCtrl	m_wndList;
	CGuiRadioButton m_wndTamung;
	CGuiRadioButton m_wndDichvu;
	CGuiRadioButton m_wndTTRavien;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;

	long	m_nOrderID;
	long	m_nDocumentNo;

	int		m_nType;
	CString	m_szRecordNo;

	CString	m_szAdmitDate;
	CString	m_szDepartmentKey;
	CString	m_szPatientName;
	int		m_nYOB;
	CString	m_szSexKey;
	CString	m_szObjectKey;
	CString	m_szStatus;
	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szReceiptDate;
	long	m_nAmount;
	CString	m_szDescription;
	CString	m_szReturnDate;
	CString m_szUrlBank;
	CString m_szDocStatus;
	CString m_szTID;

	long	m_nInvoiceNo;
	long	m_nKey;
	bool m_bRefund;
	CString	m_szRefSerialNo;
	long	m_nRefReceiptNo;
	long    m_nRefundInvoice;
	long    m_nDepositInvoice;

	//Table hms_patientTbl: Thong tin benh nhan
	CDbfMap	m_hms_patientTbl;
	//Table hms_doc: Thong tin ho so benh nhan
	CDbfMap	m_hms_docTbl;

	CDbfMap	m_hms_fee_depositTbl;
	CDbfMap m_hms_fee_refundTbl;

	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYOBChange(); 
	//void			OnYOBSetfocus(); 
	//void			OnYOBKillfocus(); 
	int			OnYOBCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue();
	//void			OnReturnDateChange(); 
	//void			OnReturnDateSetfocus(); 
	//void			OnReturnDateKillfocus(); 
	int			OnReturnDateCheckValue();
	int			OnListLoadData();
	void		OnListSelectChange(int nOldItem, int nNewItem); 
	void		OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListDeleteItem();
	int			OnListPrintItem(); 
	int			OnListPaymentItem(); 

	long OnVCBBankGenQRpay(long nOrderID, long nDocumentNo, CString szMID, CString szTID, CString szBillNumber, CString szDescription, CString szDeptID, CString szUserID, CString szType, long nAmount);
	void PrintQRCodeSheet(long nDocumentNo, long nKey);
	void PrintDeposit(long nInvoiceNo, bool bPreview);
	void			OnDichvuSelect(); 
	void			OnTamungSelect(); 
	void			OnTTRavienSelect(); 

	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSBankInvoiceInfoDialog(CWnd *pParent, int nMode);
	~CHMSBankInvoiceInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBankInvoiceInfoDialog(); 
	int OnEditHMSBankInvoiceInfoDialog(); 
	int OnDeleteHMSBankInvoiceInfoDialog(); 
	int OnSaveHMSBankInvoiceInfoDialog(); 
	int OnCancelHMSBankInvoiceInfoDialog(); 
	int OnHMSBankInvoiceInfoDialogListLoadData(); 
	DECLARE_MESSAGE_MAP()
	afx_msg void OnTimer(UINT nIDEvent);
};
#endif
