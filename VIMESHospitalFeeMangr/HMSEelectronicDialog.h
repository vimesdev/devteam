#ifndef HMSEELECTRONICDIALOG_H
#define HMSEELECTRONICDIALOG_H

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
class CHMSEelectronicDialog : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndGroupFilterData;
	CGuiGroupBox	m_wndGroupListInvoice;
	CGuiGroupBox	m_wndInformationSheet;	
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndCreateDateLabel;
	CGuiDateTimeCtrl	m_wndCreateDate;
	CGuiLabel		m_wndPostDateLabel;
	CGuiDateTimeCtrl	m_wndPostDate;
	CGuiLabel		m_wndDocumnetNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiNumberCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndPostdByLabel;
	CGuiComboBox	m_wndPostdBy;
	CGuiLabel		m_wndTotalLabel;
	CGuiNumberCtrl	m_wndTotal;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiRadioButton	m_wndInvoiceAll;
	CGuiRadioButton	m_wndInvoicePayment;
	CGuiRadioButton	m_wndInvoiceRefund;

	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;

	CGuiButton		m_wndCreate;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndSearch;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCheckInvoice;
	CGuiCheckBox	m_wndUnPost;
	CGuiCheckBox	m_wndPostOneRecord;

	CString	m_szCreateDate;
	CString	m_szPostDate;
	long	m_nDocumentNo;
	CString	m_szInvoiceNoKey;
	CString	m_szPostdByKey;
	CString m_szStatus;
	CString  m_szInvUserID, m_szInvPassword;

	long	m_nTotal;
	double	m_nAmount;
	long	m_nInvoiceNo;
	int	m_nInvoiceAll;
	int	m_nInvoicePayment;
	int	m_nInvoiceRefund;
	BOOL	m_bUnPost;
	BOOL	m_bPostOneRecord;
	CString	m_szPatientName;
	CDbfMap	m_hms_electronicTbl;

	int			OnPostPayment(int nLimit);
	int			OnPostRefund(int nLimit);
	int			OnPostDrug(int nLimit);

	int			OnPostPayment_ITT(int nLimit);
	int			OnPostRefund_ITT(int nLimit);
	int			OnPostDrug_ITT(int nLimit);

	void			OnCreateSelect(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListRefreshItem(); 
	//void			OnCreateDateChange(); 
	//void			OnCreateDateSetfocus(); 
	//void			OnCreateDateKillfocus(); 
	int			OnCreateDateCheckValue(); 
	//void			OnPostDateChange(); 
	//void			OnPostDateSetfocus(); 
	//void			OnPostDateKillfocus(); 
	int			OnPostDateCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnInvoiceNoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInvoiceNoSelendok(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	long			OnInvoiceNoLoadData(); 
	//void			OnInvoiceNoAddNew(); 
	void			OnPostdBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPostdBySelendok(); 
	//void			OnPostdBySetfocus(); 
	//void			OnPostdByKillfocus(); 
	long			OnPostdByLoadData(); 
	//void			OnPostdByAddNew(); 
	//void			OnTotalChange(); 
	//void			OnTotalSetfocus(); 
	//void			OnTotalKillfocus(); 
	int			OnTotalCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnInvoiceAllSelect(); 
	void			OnInvoicePaymentSelect(); 
	void			OnInvoiceRefundSelect(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnSearchSelect(); 
	void			OnCheckInvoiceSelect(); 
	void			OnDeleteSelect();
	void			OnUnPostSelect();
	void			OnPostOneRecordSelect();

	CHMSEelectronicDialog(CWnd *pParent);
	~CHMSEelectronicDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSEelectronicDialog(); 
	int OnEditHMSEelectronicDialog(); 
	int OnDeleteHMSEelectronicDialog(); 
	int OnSaveHMSEelectronicDialog(); 
	int OnCancelHMSEelectronicDialog(); 
	int OnHMSEelectronicDialogListLoadData(); 
};
#endif
