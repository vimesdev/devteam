#ifndef ADCONTRACTDIALOG_H
#define ADCONTRACTDIALOG_H

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
class AFX_EXT_CLASS CAdContractDialog : public CGuiDialog
{
protected:
public:
	CGuiLabel		m_wndContractidLabel;
	CGuiNumberCtrl	m_wndContractid;
	CGuiLabel		m_wndContractNoLabel;
	CGuiTextCtrl	m_wndContractNo;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndSignedDateLabel;
	CGuiDateCtrl	m_wndSignedDate;
	CGuiLabel		m_wndPerformedDateLabel;
	CGuiDateCtrl	m_wndPerformedDate;
	CGuiLabel		m_wndPartnerLabel;
	CGuiComboBox	m_wndPartner;
	CGuiLabel		m_wndContractPackageLabel;
	CGuiComboBox	m_wndContractPackage;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndDurationLabel;
	CGuiNumberCtrl	m_wndDuration;
	CGuiLabel		m_wndAdjustedAmtLabel;
	CGuiNumberCtrl	m_wndAdjustedAmt;
	CGuiLabel		m_wndPaidAmtLabel;
	CGuiNumberCtrl	m_wndPaidAmt;
	CGuiLabel		m_wndRemainingAmtLabel;
	CGuiNumberCtrl	m_wndRemainingAmt;
	CGuiLabel		m_wndBankAccountLabel;
	CGuiTextCtrl	m_wndBankAccount;
	CGuiLabel		m_wndBankLabel;
	CGuiComboBox	m_wndBank;
	CGuiLabel		m_wndAccountHolderLabel;
	CGuiTextCtrl	m_wndAccountHolder;
	CGuiLabel		m_wndTyleungtruoclabel;
	CGuiNumberCtrl	m_wndTyleung;
	CGuiCheckBox	m_wndIsActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;

	CGuiLabel		m_wndDiachinhacungcapLabel;
	CGuiTextCtrl	m_wndDiachinhacungcap;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndMataichinhLabel;
	CGuiTextCtrl	m_wndMataichinh;

	CGuiLabel		m_wndBranchLabel;
	CGuiTextCtrl	m_wndBranch;
	CGuiLabel		m_wndCitascodeLabel;
	CGuiTextCtrl	m_wndCitasCode;


	long	m_nContractId;
	long	m_nTyleung;
	CString	m_szContractNo;
	CString	m_szDescription;
	CString	m_szSignedDate;
	CString	m_szPerformedDate;
	CString	m_szPartnerKey;
	CString	m_szContractPackageKey;
	double	m_nAmount;
	int		m_nDuration;
	long	m_nAdjustedAmt;
	long	m_nPaidAmt;
	long	m_nRemainingAmt;
	CString	m_szBankAccount;
	CString	m_szBankKey;
	CString	m_szAccountHolder;

	CString	m_szDiachinhacungcap;
	CString	m_szPhone;
	CString	m_szMataichinh;
	CString	m_szBranch;
	CString	m_szCitasCode;

	BOOL	m_bIsActive;
	CDbfMap	m_ad_contractTbl;

	void		OnPartnerLabelClick();
	int			OnDiachinhacungcapCheckValue(); 
	int			OnPhoneCheckValue();
	int			OnMataichinhCheckValue();
	int			OnBranchCheckValue();
	int			OnCitasCodeCheckValue(); 
	//void			OnContractidChange(); 
	//void			OnContractidSetfocus(); 
	//void			OnContractidKillfocus(); 
	int			OnContractidCheckValue(); 
	//void			OnContractNoChange(); 
	//void			OnContractNoSetfocus(); 
	//void			OnContractNoKillfocus(); 
	int			OnContractNoCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnSignedDateChange(); 
	//void			OnSignedDateSetfocus(); 
	//void			OnSignedDateKillfocus(); 
	int			OnSignedDateCheckValue(); 
	//void			OnPerformedDateChange(); 
	//void			OnPerformedDateSetfocus(); 
	//void			OnPerformedDateKillfocus(); 
	int			OnPerformedDateCheckValue(); 
	void			OnPartnerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerSelendok(); 
	//void			OnPartnerSetfocus(); 
	//void			OnPartnerKillfocus(); 
	long			OnPartnerLoadData(); 
	//void			OnPartnerAddNew(); 
	void			OnContractPackageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractPackageSelendok(); 
	//void			OnContractPackageSetfocus(); 
	//void			OnContractPackageKillfocus(); 
	long			OnContractPackageLoadData(); 
	//void			OnContractPackageAddNew(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnDurationChange(); 
	//void			OnDurationSetfocus(); 
	//void			OnDurationKillfocus(); 
	int			OnDurationCheckValue();
	//void			OnAdjustedAmtChange(); 
	//void			OnAdjustedAmtSetfocus(); 
	//void			OnAdjustedAmtKillfocus(); 
	int			OnAdjustedAmtCheckValue();
	//void			OnPaidAmtChange(); 
	//void			OnPaidAmtSetfocus(); 
	//void			OnPaidAmtKillfocus(); 
	int			OnPaidAmtCheckValue();
	//void			OnRemainingAmtChange(); 
	//void			OnRemainingAmtSetfocus(); 
	//void			OnRemainingAmtKillfocus(); 
	int			OnRemainingAmtCheckValue();
	int			OnTyleungCheckValue(); 
	//void			OnBankAccountChange(); 
	//void			OnBankAccountSetfocus(); 
	//void			OnBankAccountKillfocus(); 
	int			OnBankAccountCheckValue(); 
	void			OnBankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBankSelendok(); 
	//void			OnBankSetfocus(); 
	//void			OnBankKillfocus(); 
	long			OnBankLoadData(); 
	//void			OnBankAddNew(); 
	//void			OnAccountHolderChange(); 
	//void			OnAccountHolderSetfocus(); 
	//void			OnAccountHolderKillfocus(); 
	int			OnAccountHolderCheckValue(); 
	void			OnIsActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CAdContractDialog(CWnd *pParent, int nMode, long nId);
	~CAdContractDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdContractDialog(); 
	int OnEditAdContractDialog(); 
	int OnDeleteAdContractDialog(); 
	int OnSaveAdContractDialog(); 
	int OnCancelAdContractDialog(); 
	int OnAdContractDialogListLoadData(); 
};
#endif