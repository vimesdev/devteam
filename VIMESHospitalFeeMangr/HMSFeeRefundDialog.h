#ifndef HMSFEEREFUNDDIALOG_H
#define HMSFEEREFUNDDIALOG_H

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

class CHMSFeeRefundDialog : public CGuiDialog{
protected:
	
	
public:
	bool	m_bSalaryInput;
	bool	m_bTerminated;

	//m_szType: bao gom cac gia tri
	//E: Hoan tra khi khong thuc hien dich vu;
	//F: Hoan tra khi ra vien; 
	//S: Cap luong cho bo doi.
	CString		m_szType;
	long		m_nPID;
	long		m_nDocumentNo;
	double		m_nCostDiscount;

	CGuiGroupBox	m_wndPaymentInformation;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndPaymentNoLabel;
	CGuiNumberCtrl	m_wndPaymentNo;
	CGuiLabel		m_wndPaymentDateLabel;
	CGuiDateTimeCtrl	m_wndPaymentDate;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndPaymentTypeLabel;
	CGuiComboBox	m_wndPaymentType;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;

	CGuiCheckBox	m_wndPrintPayment;
	CGuiCheckBox	m_wndInputDesc;

	CString	m_szSerialNo;
	long	m_nPaymentNo;
	CString	m_szPaymentDate;
	double	m_nAmount;
	CString	m_szPaymentTypeKey;
	CString	m_szDescription;


	long	m_nInvoiceNo;
	
	BOOL	m_bPrintPayment;
	BOOL	m_bInputDesc;

	CDbfMap	m_hms_fee_refundTbl;

	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnPaymentNoChange(); 
	//void			OnPaymentNoSetfocus(); 
	//void			OnPaymentNoKillfocus(); 
	int			OnPaymentNoCheckValue(); 
	//void			OnPaymentDateChange(); 
	//void			OnPaymentDateSetfocus(); 
	//void			OnPaymentDateKillfocus(); 
	int			OnPaymentDateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnPaymentTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentTypeSelendok(); 
	//void			OnPaymentTypeSetfocus(); 
	//void			OnPaymentTypeKillfocus(); 
	long			OnPaymentTypeLoadData(); 
	//void			OnPaymentTypeAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	 
	void			OnOKSelect(); 
	void			OnCancelSelect();

	void			OnPrintPaymentSelect();
	void			OnInputDescSelect();

	CHMSFeeRefundDialog(CWnd *pParent);
	~CHMSFeeRefundDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeRefundDialog(); 
	int OnEditHMSFeeRefundDialog(); 
	int OnDeleteHMSFeeRefundDialog(); 
	int OnSaveHMSFeeRefundDialog(); 
	int OnCancelHMSFeeRefundDialog(); 
	int OnHMSFeeRefundDialogListLoadData(); 
};
#endif
