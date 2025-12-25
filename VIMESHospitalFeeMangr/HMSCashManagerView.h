#ifndef HMSCASHMANAGERVIEW_H
#define HMSCASHMANAGERVIEW_H

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
#include "HMSCashListView.h"
#include "HMSCashOrderView.h"

class CHMSCashManagerView : public CGuiView{
protected:
public:
	long				m_nCashID;
	CString				m_szFromDate;
	CString				m_szToDate;
	CString				m_szInvoiceType;
	CString				m_szPosted;
	CString				m_szPatientName;
	long				m_nInvoiceNo;
	long				m_nDocumentNo;

	CHMSCashListView	m_wndCashList;
	CHMSCashOrderView	m_wndCashOrder;

	CGuiTabCtrl	m_wndTab;
	CGuiGroupBox	m_wndPatientReceiptPaymentList;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndSearchPatientInfoLabel;
	CGuiTextCtrl	m_wndSearchPatientInfo;
	CGuiButton		m_wndSearchPatient;
	CGuiLabel		m_wndTotalRecvAmountLabel;
	CGuiNumberCtrl	m_wndTotalRecvAmount;
	CGuiLabel		m_wndTotalPayAmountLabel;
	CGuiNumberCtrl	m_wndTotalPayAmount;
	CString	m_szSearchPatientInfo;
	long	m_nTotalRecvAmount;
	long	m_nTotalPayAmount;
	void			OnTabSelectChange(int nOld, int nNew); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnPostInvoice(); 
	int			OnUnPostInvoice();

	//void			OnSearchPatientInfoChange(); 
	//void			OnSearchPatientInfoSetfocus(); 
	//void			OnSearchPatientInfoKillfocus(); 
	int			OnSearchPatientInfoCheckValue(); 
	void			OnSearchPatientSelect(); 
	//void			OnTotalRecvAmountChange(); 
	//void			OnTotalRecvAmountSetfocus(); 
	//void			OnTotalRecvAmountKillfocus(); 
	int			OnTotalRecvAmountCheckValue(); 
	//void			OnTotalPayAmountChange(); 
	//void			OnTotalPayAmountSetfocus(); 
	//void			OnTotalPayAmountKillfocus(); 
	int			OnTotalPayAmountCheckValue(); 
	
	CHMSCashManagerView();
	~CHMSCashManagerView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCashManagerView(); 
	int OnEditHMSCashManagerView(); 
	int OnDeleteHMSCashManagerView(); 
	int OnSaveHMSCashManagerView(); 
	int OnCancelHMSCashManagerView(); 
	int OnHMSCashManagerViewListLoadData(); 
	void OnResizeLayout();
};
#endif
