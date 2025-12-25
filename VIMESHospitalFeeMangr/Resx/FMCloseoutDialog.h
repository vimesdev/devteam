#ifndef FMCLOSEOUTDIALOG_H
#define FMCLOSEOUTDIALOG_H

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
class CFMCloseoutDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDateLabel;
	CGuiGroupBox	m_wndReceiptInformation;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndStaffLabel;
	CGuiGroupBox	m_wndRefundInformation;
	CGuiTextCtrl	m_wndStaff;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiTextCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReceiptAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndReceiptReasonLabel;
	CGuiTextCtrl	m_wndReceiptReason;
	CGuiLabel		m_wndRefundNoLabel;
	CGuiTextCtrl	m_wndPaymentNo;
	CGuiLabel		m_wndPaymentAmountLabel;
	CGuiNumberCtrl	m_wndRefundAmount;
	CGuiLabel		m_wndRefundReasonLabel;
	CGuiTextCtrl	m_wndPaymentReason;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndClose;
	CString	m_szDate;
	CString	m_szStaff;
	CString	m_szReceiptNo;
	long	m_nAmount;
	CString	m_szReceiptReason;
	CString	m_szPaymentNo;
	long	m_nRefundAmount;
	CString	m_szPaymentReason;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnStaffChange(); 
	//void			OnStaffSetfocus(); 
	//void			OnStaffKillfocus(); 
	int			OnStaffCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnReceiptReasonChange(); 
	//void			OnReceiptReasonSetfocus(); 
	//void			OnReceiptReasonKillfocus(); 
	int			OnReceiptReasonCheckValue(); 
	//void			OnPaymentNoChange(); 
	//void			OnPaymentNoSetfocus(); 
	//void			OnPaymentNoKillfocus(); 
	int			OnPaymentNoCheckValue(); 
	//void			OnRefundAmountChange(); 
	//void			OnRefundAmountSetfocus(); 
	//void			OnRefundAmountKillfocus(); 
	int			OnRefundAmountCheckValue(); 
	//void			OnPaymentReasonChange(); 
	//void			OnPaymentReasonSetfocus(); 
	//void			OnPaymentReasonKillfocus(); 
	int			OnPaymentReasonCheckValue(); 
	void			OnOKSelect(); 
	void			OnCloseSelect(); 
	CFMCloseoutDialog(CWnd *pParent);
	~CFMCloseoutDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMCloseoutDialog(); 
	int OnEditFMCloseoutDialog(); 
	int OnDeleteFMCloseoutDialog(); 
	int OnSaveFMCloseoutDialog(); 
	int OnCancelFMCloseoutDialog(); 
	int OnFMCloseoutDialogListLoadData(); 
};
#endif
