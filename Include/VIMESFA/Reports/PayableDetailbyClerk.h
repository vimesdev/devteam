#ifndef RPTPAYABLEDETAILBYCLERK_H
#define RPTPAYABLEDETAILBYCLERK_H

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
#include "GuiView.h"
#include "DbField.h"
class CRPTPayableDetailbyClerk : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndAccountLabel;
	CGuiComboBox	m_wndAccount;
	CGuiRadioButton	m_wndCustomer;
	CGuiRadioButton	m_wndSupplier;
	CGuiRadioButton	m_wndOther;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiListCtrl	m_wndClerkList;
	CGuiListCtrl	m_wndSupplierList;
	CGuiButton		m_wndPrint;
	CString	m_szReportPeriodKey;
	CString	m_szCurrencyKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szAccountKey;
	int	m_nCustomer;
	int	m_nSupplier;
	int	m_nOther;
	CString	m_szGroupKey;
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok(); 
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	void			OnReportPeriodAddNew(); 
	void			OnCurrencySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCurrencySelendok(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	long			OnCurrencyLoadData(); 
	void			OnCurrencyAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAccountSelendok(); 
	//void			OnAccountSetfocus(); 
	//void			OnAccountKillfocus(); 
	long			OnAccountLoadData(); 
	void			OnAccountAddNew(); 
	void			OnCustomerSelect(); 
	void			OnSupplierSelect(); 
	void			OnOtherSelect(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	long			OnClerkListLoadData(); 
	void			OnClerkListSelectChange(int nOldItem, int nNewItem); 
	void			OnClerkListDblClick(); 
	int			OnClerkListDeleteItem(); 
	long			OnSupplierListLoadData(); 
	void			OnSupplierListSelectChange(int nOldItem, int nNewItem); 
	void			OnSupplierListDblClick(); 
	int			OnSupplierListDeleteItem(); 
	void			OnPrintSelect();
	void	FillList(); 
	CRPTPayableDetailbyClerk();
	~CRPTPayableDetailbyClerk();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
};
#endif
