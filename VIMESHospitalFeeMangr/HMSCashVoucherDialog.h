#ifndef HMSCashVoucherDialog_H
#define HMSCashVoucherDialog_H

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

class CHMSCashVoucherDialog : public CGuiDialog{
protected:
	
	
public:
	

	//m_szType: bao gom cac gia tri
	//E: Hoan tra khi khong thuc hien dich vu;
	//F: Hoan tra khi ra vien; 
	//S: Cap luong cho bo doi.
	CString		m_szType;
	long		m_nPID;
	long		m_nDocumentNo;
	double		m_nCostDiscount;

	CGuiGroupBox	m_wndReceiptInformation;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateTimeCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndVoucherTypeLabel;
	CGuiComboBox	m_wndVoucherType;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;

	CGuiCheckBox	m_wndPrintReceipt;
	CGuiCheckBox	m_wndInputDesc;

	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szReceiptDate;
	double	m_nAmount;
	CString	m_szVoucherTypeKey;
	CString	m_szDescription;


	long	m_nInvoiceNo;
	
	BOOL	m_bPrintReceipt;
	BOOL	m_bInputDesc;

	CDbfMap	m_hms_fee_invoiceTbl;

	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnVoucherTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVoucherTypeSelendok(); 
	//void			OnVoucherTypeSetfocus(); 
	//void			OnVoucherTypeKillfocus(); 
	long			OnVoucherTypeLoadData(); 
	//void			OnVoucherTypeAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	 
	void			OnOKSelect(); 
	void			OnCancelSelect();

	void			OnPrintReceiptSelect();
	void			OnInputDescSelect();

	CHMSCashVoucherDialog(CWnd *pParent, long nDocumentNo, int nMode);
	~CHMSCashVoucherDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCashVoucherDialog(); 
	int OnEditHMSCashVoucherDialog(); 
	int OnDeleteHMSCashVoucherDialog(); 
	int OnSaveHMSCashVoucherDialog(); 
	int OnCancelHMSCashVoucherDialog(); 
	int OnHMSCashVoucherDialogListLoadData(); 
};
#endif
