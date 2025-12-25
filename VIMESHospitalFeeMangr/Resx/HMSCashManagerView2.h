#ifndef HMSCASHMANAGERVIEW2_H
#define HMSCASHMANAGERVIEW2_H

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
class CHMSCashManagerView2 : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReceiptAndPaymentInformation;
	CGuiGroupBox	m_wndPatientReceiptPaymentList;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndCashIDLabel;
	CGuiTextCtrl	m_wndCashID;
	CGuiButton		m_wndSearchInfo;
	CGuiListCtrl	m_wndStaffList;
	CGuiLabel		m_wndReceiptPaymentNoLabel;
	CGuiNumberCtrl	m_wndReceiptPaymentNo;
	CGuiButton		m_wndPostReceiptAndPayment;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndSearchPatientInfoLabel;
	CGuiTextCtrl	m_wndSearchPatientInfo;
	CGuiButton		m_wndSearchPatient;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CString	m_szTypeKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStaff;
	CString	m_szCashID;
	long	m_nReceiptPaymentNo;
	CString	m_szSearchPatientInfo;
	long	m_nTotalAmount;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue(); 
	//void			OnCashIDChange(); 
	//void			OnCashIDSetfocus(); 
	//void			OnCashIDKillfocus(); 
	int			OnCashIDCheckValue(); 
	void			OnSearchInfoSelect(); 
	long			OnStaffListLoadData(); 
	void			OnStaffListSelectChange(int nOldItem, int nNewItem); 
	void			OnStaffListDblClick(); 
	int			OnStaffListDeleteItem(); 
	//void			OnReceiptPaymentNoChange(); 
	//void			OnReceiptPaymentNoSetfocus(); 
	//void			OnReceiptPaymentNoKillfocus(); 
	int			OnReceiptPaymentNoCheckValue(); 
	void			OnPostReceiptAndPaymentSelect(); 
	void			OnPrintSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnSearchPatientInfoChange(); 
	//void			OnSearchPatientInfoSetfocus(); 
	//void			OnSearchPatientInfoKillfocus(); 
	int			OnSearchPatientInfoCheckValue(); 
	void			OnSearchPatientSelect(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	CHMSCashManagerView2();
	~CHMSCashManagerView2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCashManagerView2(); 
	int OnEditHMSCashManagerView2(); 
	int OnDeleteHMSCashManagerView2(); 
	int OnSaveHMSCashManagerView2(); 
	int OnCancelHMSCashManagerView2(); 
	int OnHMSCashManagerView2ListLoadData(); 
};
#endif
