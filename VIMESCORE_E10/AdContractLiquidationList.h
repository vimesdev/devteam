#ifndef ADCONTRACTLIQUIDATIONLIST_H
#define ADCONTRACTLIQUIDATIONLIST_H

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
class AFX_EXT_CLASS CAdContractLiquidationList : public CGuiView{
protected:
	long			m_nContractId;
	long			m_nOrderId;
	bool			m_bComInit;
public:
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiGroupBox	m_wndContractInformation;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndRefresh;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpen;
	CGuiRadioButton	m_wndCreated;
	CGuiRadioButton	m_wndApproved;
	CGuiButton		m_wndCreate;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndInvoices;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szSearch;
	int	m_nAll;
	int	m_nOpen;
	int	m_nCreated;
	int	m_nApproved;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnRefreshSelect(); 
	void			OnAllSelect(); 
	void			OnOpenSelect(); 
	void			OnCreatedSelect(); 
	void			OnApprovedSelect(); 
	void			OnCreateSelect(); 
	void			OnDeleteSelect(); 
	void			OnApprovalSelect(); 
	void			OnPrintSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnInvoicesLoadData(); 
	void			OnInvoicesSelectChange(int nOldItem, int nNewItem); 
	void			OnInvoicesDblClick(); 
	int			OnInvoicesDeleteItem(); 
	CAdContractLiquidationList();
	~CAdContractLiquidationList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdContractLiquidationList(); 
	int OnEditAdContractLiquidationList(); 
	int OnDeleteAdContractLiquidationList(); 
	int OnSaveAdContractLiquidationList(); 
	int OnCancelAdContractLiquidationList(); 
	int OnAdContractLiquidationListListLoadData();
	void OnResizeLayout();

};
#endif
