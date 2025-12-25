#ifndef PaymentOrderList_H
#define PaymentOrderList_H

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

/////////////////////////////////////
//DANH SÁCH PHIẾU ĐỀ NGHỊ THANH TOÁN
////////////////////////////////////

class AFX_EXT_CLASS CPaymentOrderList : public CGuiView{
protected:
	long			m_nID;
	CStringArray	m_arFilters;
	int				m_nSearchID;
	CString			m_szStatus;
public:
	CString			m_szType;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndPaymentOrderInfo;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndFromDateLabel;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndOption;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndView;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szSearch;
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
	void			OnOptionSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListViewItem(); 
	int			OnListRollbackItem();
	void			OnViewSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	//Ham in phiếu đề nghị thanh toán
	void OnPrint();
	void OnSend();

	CPaymentOrderList();
	~CPaymentOrderList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPaymentOrderList(); 
	int OnEditPaymentOrderList(); 
	int OnDeletePaymentOrderList(); 
	int OnSavePaymentOrderList(); 
	int OnCancelPaymentOrderList(); 
	int OnPaymentOrderListListLoadData(); 
	void Refresh();
	CString GetCurrentStatus();
	void OnResizeLayout();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSetFocus(CWnd* pOldWnd);
};
#endif
