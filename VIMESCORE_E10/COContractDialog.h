#ifndef COCONTRACTDIALOG_H
#define COCONTRACTDIALOG_H

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
class CCOContractDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndContractInformation;
	CGuiGroupBox	m_wndCustomerVendorInformation;
	CGuiGroupBox	m_wndContractState;
	CGuiGroupBox	m_wndAttachmentFiles;
	CGuiLabel		m_wndContractNoLabel;
	CGuiTextCtrl	m_wndContractNo;
	CGuiLabel		m_wndContractDateLabel;
	CGuiDateCtrl	m_wndContractDate;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateCtrl	m_wndPerformDate;
	CGuiLabel		m_wndSignatureByLabel;
	CGuiTextCtrl	m_wndSignatureBy;
	CGuiLabel		m_wndPositionLabel;
	CGuiTextCtrl	m_wndPosition;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndExchangeRateLabel;
	CGuiNumberCtrl	m_wndExchangeRate;
	CGuiLabel		m_wndOriginalAmountLabel;
	CGuiNumberCtrl	m_wndOriginalAmount;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndObjectNameLabel;
	CGuiTextCtrl	m_wndObjectName;
	CGuiLabel		m_wndObjectSignaturedLabel;
	CGuiTextCtrl	m_wndObjectSignatured;
	CGuiLabel		m_wndObjectPositionLabel;
	CGuiTextCtrl	m_wndObjectPosition;
	CGuiLabel		m_wndObjectTelLabel;
	CGuiTextCtrl	m_wndObjectTel;
	CGuiLabel		m_wndObjectFaxLabel;
	CGuiTextCtrl	m_wndObjectFax;
	CGuiLabel		m_wndObjectAccountLabel;
	CGuiTextCtrl	m_wndObjectAccount;
	CGuiLabel		m_wndObjectBankLabel;
	CGuiTextCtrl	m_wndObjectBank;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateCtrl	m_wndEndDate;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAttachAFile;
	CString	m_szContractNo;
	CString	m_szContractDate;
	CString	m_szPerformDate;
	CString	m_szSignatureBy;
	CString	m_szPosition;
	CString	m_szCurrencyKey;
	long	m_nExchangeRate;
	long	m_nOriginalAmount;
	long	m_nAmount;
	CString	m_szDescription;
	CString	m_szObjectKey;
	CString	m_szObjectName;
	CString	m_szObjectSignatured;
	CString	m_szObjectPosition;
	CString	m_szObjectTel;
	CString	m_szObjectFax;
	CString	m_szObjectAccount;
	CString	m_szObjectBank;
	CString	m_szStatusKey;
	CString	m_szEndDate;
	CString	m_szReason;
	CDbfMap	m_acc_contractTbl;
	//void			OnContractNoChange(); 
	//void			OnContractNoSetfocus(); 
	//void			OnContractNoKillfocus(); 
	int			OnContractNoCheckValue(); 
	//void			OnContractDateChange(); 
	//void			OnContractDateSetfocus(); 
	//void			OnContractDateKillfocus(); 
	int			OnContractDateCheckValue(); 
	//void			OnPerformDateChange(); 
	//void			OnPerformDateSetfocus(); 
	//void			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	//void			OnSignatureByChange(); 
	//void			OnSignatureBySetfocus(); 
	//void			OnSignatureByKillfocus(); 
	int			OnSignatureByCheckValue(); 
	//void			OnPositionChange(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	int			OnPositionCheckValue(); 
	void			OnCurrencySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCurrencySelendok(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	long			OnCurrencyLoadData(); 
	void			OnCurrencyAddNew(); 
	//void			OnExchangeRateChange(); 
	//void			OnExchangeRateSetfocus(); 
	//void			OnExchangeRateKillfocus(); 
	int			OnExchangeRateCheckValue(); 
	//void			OnOriginalAmountChange(); 
	//void			OnOriginalAmountSetfocus(); 
	//void			OnOriginalAmountKillfocus(); 
	int			OnOriginalAmountCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew(); 
	//void			OnObjectNameChange(); 
	//void			OnObjectNameSetfocus(); 
	//void			OnObjectNameKillfocus(); 
	int			OnObjectNameCheckValue(); 
	//void			OnObjectSignaturedChange(); 
	//void			OnObjectSignaturedSetfocus(); 
	//void			OnObjectSignaturedKillfocus(); 
	int			OnObjectSignaturedCheckValue(); 
	//void			OnObjectPositionChange(); 
	//void			OnObjectPositionSetfocus(); 
	//void			OnObjectPositionKillfocus(); 
	int			OnObjectPositionCheckValue(); 
	//void			OnObjectTelChange(); 
	//void			OnObjectTelSetfocus(); 
	//void			OnObjectTelKillfocus(); 
	int			OnObjectTelCheckValue(); 
	//void			OnObjectFaxChange(); 
	//void			OnObjectFaxSetfocus(); 
	//void			OnObjectFaxKillfocus(); 
	int			OnObjectFaxCheckValue(); 
	//void			OnObjectAccountChange(); 
	//void			OnObjectAccountSetfocus(); 
	//void			OnObjectAccountKillfocus(); 
	int			OnObjectAccountCheckValue(); 
	//void			OnObjectBankChange(); 
	//void			OnObjectBankSetfocus(); 
	//void			OnObjectBankKillfocus(); 
	int			OnObjectBankCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	void			OnStatusAddNew(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnAttachAFileSelect(); 
	CCOContractDialog(CWnd *pParent);
	~CCOContractDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCOContractDialog(); 
	int OnEditCOContractDialog(); 
	int OnDeleteCOContractDialog(); 
	int OnSaveCOContractDialog(); 
	int OnCancelCOContractDialog(); 
	int OnCOContractDialogListLoadData(); 
};
#endif
