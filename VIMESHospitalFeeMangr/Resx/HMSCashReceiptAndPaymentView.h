#ifndef HMSCASHRECEIPTANDPAYMENTVIEW_H
#define HMSCASHRECEIPTANDPAYMENTVIEW_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSCashReceiptAndPaymentView : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndInvoiceType;
	CGuiGroupBox	m_wndStatus;
	CGuiGroupBox	m_wndPatientList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiNumberCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiRadioButton	m_wndAllOrder;
	CGuiRadioButton	m_wndReceiptNote;
	CGuiRadioButton	m_wndPaymentOrder;
	CGuiCheckBox	m_wndWaiting;
	CGuiCheckBox	m_wndPosted;
	CGuiButton		m_wndSearch;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndDiscard;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nDocumentNo;
	long	m_nInvoiceNo;
	CString	m_szPatientName;
	int	m_nAllOrder;
	int	m_nReceiptNote;
	int	m_nPaymentOrder;
	BOOL	m_bWaiting;
	BOOL	m_bPosted;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnAllOrderSelect(); 
	void			OnReceiptNoteSelect(); 
	void			OnPaymentOrderSelect(); 
	void			OnWaitingSelect(); 
	void			OnPostedSelect(); 
	void			OnSearchSelect(); 
	void			OnPostSelect(); 
	void			OnDiscardSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSCashReceiptAndPaymentView();
	~CHMSCashReceiptAndPaymentView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCashReceiptAndPaymentView(); 
	int OnEditHMSCashReceiptAndPaymentView(); 
	int OnDeleteHMSCashReceiptAndPaymentView(); 
	int OnSaveHMSCashReceiptAndPaymentView(); 
	int OnCancelHMSCashReceiptAndPaymentView(); 
	int OnHMSCashReceiptAndPaymentViewListLoadData(); 
};
#endif
