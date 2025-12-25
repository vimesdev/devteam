#ifndef HMSCLOSEOUTDIALOG_H
#define HMSCLOSEOUTDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSCloseoutDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInvoiceCreationDateSettings;
	CGuiGroupBox	m_wndAmountOfReceiptInformation;
	CGuiLabel		m_wndCurrentDateLabel;
	CGuiDateCtrl	m_wndCurrentDate;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndNextInvoiceDateLabel;
	CGuiDateCtrl	m_wndNextInvoiceDate;
	CGuiLabel		m_wndDepositAmountLabel;
	CGuiNumberCtrl	m_wndDepositAmount;
	CGuiLabel		m_wndRefundAmountLabel;
	CGuiNumberCtrl	m_wndRefundAmount;
	CGuiLabel		m_wndExternalAmountLabel;
	CGuiNumberCtrl	m_wndExternalAmount;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;

	CGuiButton		m_wndCloseout;
	CGuiButton		m_wndOk;
	CGuiButton		m_wndCancel;
	CString	m_szCurrentDate;
	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szNextInvoiceDate;
	double	m_nDepositAmount;
	double	m_nRefundAmount;
	double	m_nExternalAmount;
	double	m_nTotalAmount;
	//void			OnCurrentDateChange(); 
	//void			OnCurrentDateSetfocus(); 
	//void			OnCurrentDateKillfocus(); 
	int			OnCurrentDateCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	//void			OnNextInvoiceDateChange(); 
	//void			OnNextInvoiceDateSetfocus(); 
	//void			OnNextInvoiceDateKillfocus(); 
	int			OnNextInvoiceDateCheckValue(); 
	//void			OnDepositAmountChange(); 
	//void			OnDepositAmountSetfocus(); 
	//void			OnDepositAmountKillfocus(); 
	int			OnDepositAmountCheckValue(); 
	//void			OnRefundAmountChange(); 
	//void			OnRefundAmountSetfocus(); 
	//void			OnRefundAmountKillfocus(); 
	int			OnRefundAmountCheckValue(); 
	//void			OnExternalAmountChange(); 
	//void			OnExternalAmountSetfocus(); 
	//void			OnExternalAmountKillfocus(); 
	int			OnExternalAmountCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void			OnCloseoutSelect(); 
	void			OnOkSelect(); 
	void			OnCancelSelect(); 
	CHMSCloseoutDialog(CWnd *pParent, int nMode);
	~CHMSCloseoutDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCloseoutDialog(); 
	int OnEditHMSCloseoutDialog(); 
	int OnDeleteHMSCloseoutDialog(); 
	int OnSaveHMSCloseoutDialog(); 
	int OnCancelHMSCloseoutDialog(); 
	int OnHMSCloseoutDialogListLoadData(); 
};
#endif
