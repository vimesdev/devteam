#ifndef ADPAYMENTTERMDIALOG_H
#define ADPAYMENTTERMDIALOG_H

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
class CAdPaymentTermDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndEntry;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndDueDateLabel;
	CGuiTextCtrl	m_wndDueDate;
	CGuiLabel		m_wndInstallmentNoLabel;
	CGuiNumberCtrl	m_wndInstallmentNo;
	CGuiLabel		m_wndDiscountDateLabel;
	CGuiTextCtrl	m_wndDiscountDate;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CString	m_szCode;
	CString	m_szDescription;
	CString	m_szDueDate;
	long	m_nInstallmentNo;
	CString	m_szDiscountDate;
	long	m_nDiscount;
	BOOL	m_bActive;
	CDbfMap	m_ad_payment_termTbl;
	//User-def var
	int		m_nMode;
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnDueDateChange(); 
	//void			OnDueDateSetfocus(); 
	//void			OnDueDateKillfocus(); 
	int			OnDueDateCheckValue(); 
	//void			OnInstallmentNoChange(); 
	//void			OnInstallmentNoSetfocus(); 
	//void			OnInstallmentNoKillfocus(); 
	int			OnInstallmentNoCheckValue(); 
	//void			OnDiscountDateChange(); 
	//void			OnDiscountDateSetfocus(); 
	//void			OnDiscountDateKillfocus(); 
	int			OnDiscountDateCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect();
	CAdPaymentTermDialog(CWnd* pParent, int nMode);
	~CAdPaymentTermDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdPaymentTermDialog(); 
	int OnEditAdPaymentTermDialog(); 
	int OnDeleteAdPaymentTermDialog(); 
	int OnSaveAdPaymentTermDialog(); 
	int OnCancelAdPaymentTermDialog(); 
	int OnAdPaymentTermDialogListLoadData(); 
};
#endif
