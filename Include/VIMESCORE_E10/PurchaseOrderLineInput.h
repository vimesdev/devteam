#ifndef PURCHASEORDERLINEINPUT_H
#define PURCHASEORDERLINEINPUT_H

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
class CPurchaseOrderLineInput : public CGuiDialog{
protected:
public:
	long	m_nOrderID;
	long	m_nOrderLine;
	int		m_nStorageID;
	int		m_nTaxID;
	long	m_nUomID;
	CString	m_szResourceKey;
	CString m_szPartnerID;

	CGuiLabel		m_wndProductLabel;
	CGuiComboBox	m_wndProduct;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndWarehouseLabel;
	CGuiComboBox	m_wndWarehouse;
	CGuiLabel		m_wndVATLabel;
	CGuiComboBox	m_wndVAT;
	CGuiLabel		m_wndManufactureLabel;
	CGuiComboBox	m_wndManufacture;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndExprDateLabel;
	CGuiDateCtrl	m_wndExprDate;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndSaleUomLabel;
	CGuiTextCtrl	m_wndSaleUom;
	CGuiLabel		m_wndConversionRateLabel;
	CGuiNumberCtrl	m_wndConversionRate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szProductKey;
	CString	m_szUom;
	CString	m_szWarehouseKey;
	CString	m_szVATKey;
	CString	m_szManufactureKey;
	CString	m_szLotNo;
	CString	m_szExprDate;
	double	m_nQuantity;
	double	m_nUnitPrice;
	double	m_nAmount;
	CString	m_szSaleUom;
	float	m_nConversionRate;
	CDbfMap	m_purchase_orderlineTbl;

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
	void			OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseSelendok(); 
	//void			OnWarehouseSetfocus(); 
	//void			OnWarehouseKillfocus(); 
	long			OnWarehouseLoadData(); 
	//void			OnWarehouseAddNew(); 
	void			OnVATSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVATSelendok(); 
	//void			OnVATSetfocus(); 
	//void			OnVATKillfocus(); 
	long			OnVATLoadData(); 
	//void			OnVATAddNew(); 
	void			OnManufactureSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManufactureSelendok(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	long			OnManufactureLoadData(); 
	//void			OnManufactureAddNew(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnExprDateChange(); 
	//void			OnExprDateSetfocus(); 
	//void			OnExprDateKillfocus(); 
	int			OnExprDateCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnSaleUomChange(); 
	//void			OnSaleUomSetfocus(); 
	//void			OnSaleUomKillfocus(); 
	int			OnSaleUomCheckValue(); 
	//void			OnConversionRateChange(); 
	//void			OnConversionRateSetfocus(); 
	//void			OnConversionRateKillfocus(); 
	int			OnConversionRateCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CPurchaseOrderLineInput(CWnd *pParent, int nMode, int x, int y);
	~CPurchaseOrderLineInput();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderLineInput(); 
	int OnEditPurchaseOrderLineInput(); 
	int OnDeletePurchaseOrderLineInput(); 
	int OnSavePurchaseOrderLineInput(); 
	int OnCancelPurchaseOrderLineInput(); 
	int OnPurchaseOrderLineInputListLoadData(); 
};
#endif
