#ifndef HMSBANKPAYMENTINFODIALOG_H
#define HMSBANKPAYMENTINFODIALOG_H

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

typedef struct tagBANKPAYMENTINFO{
	CString szPosNo;
	CString szReceiptNo;
	CString szReceiptDate;
	double	nAmount;
	CString szAccountNo;
	CString szCardNo;
	CString szAccountName;
	CString szAddress;
	CString szBankId;
	CString szBankName;
	CString szBrand;
	CString szNote;
	tagBANKPAYMENTINFO()
	{
		szPosNo.Empty();
		szReceiptNo.Empty();
		szReceiptDate.Empty();
		nAmount = 0;
		szAccountNo.Empty();
		szCardNo.Empty();
		szAccountName.Empty();
		szAddress.Empty();
		szBankId.Empty();
		szBankName.Empty();
		szBrand.Empty();
		szNote.Empty();
	};
} BANKPAYMENTINFO;


class CHMSBankPaymentInfoDialog : public CGuiDialog
{
protected:
public:
	CString		m_szPaymentMethod;
	CString		m_szStatus;
	long		m_nInvoiceNo;
	bool		m_bDeposit;
	CGuiGroupBox	m_wndBankPaymentInformation;
	CGuiLabel		m_wndPOSLabel;
	CGuiTextCtrl	m_wndPOS;
	CGuiLabel		m_wndMethodLabel;
	CGuiComboBox	m_wndMethod;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiTextCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndAccountNoLabel;
	CGuiTextCtrl	m_wndAccountNo;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiLabel		m_wndAccountNameLabel;
	CGuiTextCtrl	m_wndAccountName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndBankNameLabel;
	CGuiComboBox	m_wndBankName;
	CGuiLabel		m_wndBrandLabel;
	CGuiTextCtrl	m_wndBrand;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	CString	m_szPOSNo;
	CString	m_szMethodKey;
	CString	m_szReceiptNo;
	CString m_szReceiptDate;
	long	m_nAmount;
	CString	m_szAccountNo;
	CString	m_szCardNo;
	CString	m_szAccountName;
	CString	m_szAddress;
	CString	m_szBankNameKey;
	CString m_szBankName;
	CString	m_szBrand;
	CString	m_szNote;
	//void			OnPOSChange(); 
	//void			OnPOSSetfocus(); 
	//void			OnPOSKillfocus(); 
	int			OnPOSCheckValue(); 
	void			OnMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMethodSelendok(); 
	//void			OnMethodSetfocus(); 
	//void			OnMethodKillfocus(); 
	long			OnMethodLoadData(); 
	//void			OnMethodAddNew(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnAccountNoChange(); 
	//void			OnAccountNoSetfocus(); 
	//void			OnAccountNoKillfocus(); 
	int			OnAccountNoCheckValue(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	//void			OnAccountNameChange(); 
	//void			OnAccountNameSetfocus(); 
	//void			OnAccountNameKillfocus(); 
	int			OnAccountNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnBankNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBankNameSelendok(); 
	//void			OnBankNameSetfocus(); 
	//void			OnBankNameKillfocus(); 
	long			OnBankNameLoadData(); 
	//void			OnBankNameAddNew(); 
	//void			OnBrandChange(); 
	//void			OnBrandSetfocus(); 
	//void			OnBrandKillfocus(); 
	int			OnBrandCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	CHMSBankPaymentInfoDialog(CWnd *pParent, int nMode);
	~CHMSBankPaymentInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBankPaymentInfoDialog(); 
	int OnEditHMSBankPaymentInfoDialog(); 
	int OnDeleteHMSBankPaymentInfoDialog(); 
	int OnSaveHMSBankPaymentInfoDialog(); 
	int OnCancelHMSBankPaymentInfoDialog(); 
	int OnHMSBankPaymentInfoDialogListLoadData(); 
};
#endif
