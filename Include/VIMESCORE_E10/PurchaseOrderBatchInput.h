#ifndef PURCHASEORDERBATCHINPUT_H
#define PURCHASEORDERBATCHINPUT_H

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
class CPurchaseOrderBatchInput : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiTextCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndProductLabel;
	CGuiComboBox	m_wndProduct;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndVATLabel;
	CGuiComboBox	m_wndVAT;
	CGuiLabel		m_wndExpDateLabel;
	CGuiDateCtrl	m_wndExpDate;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szSupplierKey;
	CString	m_szInvoiceNo;
	CString	m_szInvoiceDate;
	CString	m_szProductKey;
	CString	m_szUom;
	CString	m_szVATKey;
	CString	m_szExpDate;
	CString	m_szLotNo;
	long	m_nUnitPrice;
	long	m_nQuantity;
	long	m_nAmount;
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	void			OnProductSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductSelendok(); 
	//void			OnProductSetfocus(); 
	//void			OnProductKillfocus(); 
	long			OnProductLoadData(); 
	//void			OnProductAddNew(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	void			OnVATSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVATSelendok(); 
	//void			OnVATSetfocus(); 
	//void			OnVATKillfocus(); 
	long			OnVATLoadData(); 
	//void			OnVATAddNew(); 
	//void			OnExpDateChange(); 
	//void			OnExpDateSetfocus(); 
	//void			OnExpDateKillfocus(); 
	int			OnExpDateCheckValue(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CPurchaseOrderBatchInput(CWnd *pParent);
	~CPurchaseOrderBatchInput();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderBatchInput(); 
	int OnEditPurchaseOrderBatchInput(); 
	int OnDeletePurchaseOrderBatchInput(); 
	int OnSavePurchaseOrderBatchInput(); 
	int OnCancelPurchaseOrderBatchInput(); 
	int OnPurchaseOrderBatchInputListLoadData(); 
};
#endif
