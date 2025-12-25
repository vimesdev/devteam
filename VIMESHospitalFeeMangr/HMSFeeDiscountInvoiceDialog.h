#ifndef HMSFeeDiscountInvoiceDialog_H
#define HMSFeeDiscountInvoiceDialog_H

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
class CHMSFeeDiscountInvoiceDialog : public CGuiDialog
{
protected:
public:
	bool	m_bService;

	CGuiGroupBox	m_wndDetailitemsinvoiceno;
	CGuiGroupBox	m_wndGroupDiscount;
	CGuiListCtrl	m_wndFeeList;
	CGuiListCtrl	m_wndSelectList;
	CGuiLabel		m_wndCreatedByLabel;
	CGuiTextCtrl	m_wndCreatedBy;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndAddItemAll;
	CGuiLabel		m_wndInvoicenoLable;
	CGuiNumberCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndAmountDiscountLable;
	CGuiNumberCtrl	m_wndAmountDiscount;
	CGuiLabel		m_wndReceiptDateLabel;
	CGuiDateTimeCtrl	m_wndReceiptDate;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;

	CGuiButton		m_wndPrint;
	CGuiCheckBox	m_wndAutoPrint;
	CString	m_szCreatedBy;
	CString	m_szType;
	

	CString	m_szSerialNo;
	long	m_nReceiptNo;
	CString	m_szReceiptDate;	
	CString	m_szDescription;

	long	m_nInvoiceNo;
	double	m_nAmountDiscount;
	long	m_nPID;
	long	m_nDocumentNo;	
	long	m_nDiscountNo;

	BOOL	m_bAutoPrint;

	CDbfMap	m_hms_fee_discountTbl;

	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	long			OnSelectListLoadData(); 
	void			OnSelectListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectListDblClick(); 
	int			OnSelectListDeleteItem(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnApplySelect(); 
	void			OnCancelSelect(); 
	void			OnAddItemAllSelect(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnAmountDiscountChange(); 
	//void			OnAmountDiscountSetfocus(); 
	//void			OnAmountDiscountKillfocus(); 
	int			OnAmountDiscountCheckValue(); 
	//void			OnReceiptDateChange(); 
	//void			OnReceiptDateSetfocus(); 
	//void			OnReceiptDateKillfocus(); 
	int			OnReceiptDateCheckValue();
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue();

	void			OnPrintSelect(); 
	void			OnAutoPrintSelect(); 
	CHMSFeeDiscountInvoiceDialog(CWnd *pParent);
	~CHMSFeeDiscountInvoiceDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeDiscountInvoiceDialog(); 
	int OnEditHMSFeeDiscountInvoiceDialog(); 
	int OnDeleteHMSFeeDiscountInvoiceDialog(); 
	int OnSaveHMSFeeDiscountInvoiceDialog(); 
	int OnCancelHMSFeeDiscountInvoiceDialog(); 
	int OnHMSFeeDiscountInvoiceDialogListLoadData(); 
};
#endif