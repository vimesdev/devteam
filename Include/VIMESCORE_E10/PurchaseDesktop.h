#ifndef PURCHASEDESKTOP_H
#define PURCHASEDESKTOP_H

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
class AFX_EXT_CLASS CPurchaseDesktop : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReports;
	CGuiButton		m_wndNewPurchaseOrder;
	CGuiButton		m_wndNewCreditNote;
	CGuiButton		m_wndNewCashPurchase;
	CGuiButton		m_wndPayPurchaseInvoice;
	CGuiButton		m_wndIssuePayment;
	CGuiGroupBox	m_wndMoreTasks;
	CGuiLabel		m_wndNewSupplier;
	CGuiLabel		m_wndNewProductOrService;
	CGuiListCtrl	m_wndcontrol_10;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndDisplay;
	CGuiButton		m_wndNewPurchaseReturnOrder;
	CGuiButton		m_wndNewDebitNote;
	CGuiButton		m_wndNewCashPurchaseReturn;
	CGuiButton		m_wndNewPurchaseQuote;
	CString	m_szFromDate;
	CString	m_szToDate;
	void			OnNewPurchaseOrderSelect(); 
	void			OnNewCreditNoteSelect(); 
	void			OnNewCashPurchaseSelect(); 
	void			OnPayPurchaseInvoiceSelect(); 
	void			OnIssuePaymentSelect(); 
	long			Oncontrol_10LoadData(); 
	void			Oncontrol_10SelectChange(int nOldItem, int nNewItem); 
	void			Oncontrol_10DblClick(); 
	int			Oncontrol_10DeleteItem(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnDisplaySelect(); 
	void			OnNewPurchaseReturnOrderSelect(); 
	void			OnNewDebitNoteSelect(); 
	void			OnNewCashPurchaseReturnSelect(); 
	void			OnNewPurchaseQuoteSelect(); 
	CPurchaseDesktop();
	~CPurchaseDesktop();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseDesktop(); 
	int OnEditPurchaseDesktop(); 
	int OnDeletePurchaseDesktop(); 
	int OnSavePurchaseDesktop(); 
	int OnCancelPurchaseDesktop(); 
	int OnPurchaseDesktopListLoadData(); 
};
#endif
