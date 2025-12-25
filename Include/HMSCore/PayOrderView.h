#ifndef PAYORDERVIEW_H
#define PAYORDERVIEW_H

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
class CPayOrderView : public CGuiView{
protected:
public:
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndOrderLabel;
	CGuiTextCtrl	m_wndOrder;
	CGuiListCtrl	m_wndPayOrderList;
	CGuiButton		m_wndCreate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndSend;
	CGuiListCtrl	m_wndcontrol_12;
	CGuiButton		m_wndAddInvoice;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndApproveDateLabel;
	CGuiDateCtrl	m_wndApproveDate;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStatusKey;
	CString	m_szOrder;
	CString	m_szOrderDate;
	CString	m_szApproveDate;
	long	m_nAmount;
	CString	m_szDescription;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	//void			OnOrderChange(); 
	//void			OnOrderSetfocus(); 
	//void			OnOrderKillfocus(); 
	int			OnOrderCheckValue(); 
	long			OnPayOrderListLoadData(); 
	void			OnPayOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnPayOrderListDblClick(); 
	int			OnPayOrderListDeleteItem(); 
	void			OnCreateSelect(); 
	void			OnPrintSelect(); 
	void			OnSendSelect(); 
	long			Oncontrol_12LoadData(); 
	void			Oncontrol_12SelectChange(int nOldItem, int nNewItem); 
	void			Oncontrol_12DblClick(); 
	int			Oncontrol_12DeleteItem(); 
	void			OnAddInvoiceSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnApproveDateChange(); 
	//void			OnApproveDateSetfocus(); 
	//void			OnApproveDateKillfocus(); 
	int			OnApproveDateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	CPayOrderView();
	~CPayOrderView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPayOrderView(); 
	int OnEditPayOrderView(); 
	int OnDeletePayOrderView(); 
	int OnSavePayOrderView(); 
	int OnCancelPayOrderView(); 
	int OnPayOrderViewListLoadData(); 
};
#endif
