#ifndef PMPURCHASEORDERLINEINPUTEX_H
#define PMPURCHASEORDERLINEINPUTEX_H

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
#include "GuiPopup.h"
#include "DbField.h"
class CPMPurchaseOrderLineInputEx : public CGuiPopup{
protected:
public:
	CWnd*	m_pWndLines;
	CWnd*	m_pWndOrder;
	long	m_nOrderID;
	long	m_nOrderLine;
	int		m_nStorageID;
	int		m_nTaxID;
	long	m_nUomID;
	int		m_nResourceID;
	float	m_nTaxRate;
	CString	m_szStorageCategory;

	CString m_szPartnerID;
	CString m_szContractPackage;
	CDbfMap	m_purchase_orderlineTbl;

	double	m_nQuantity;
	double	m_nUnitPrice;
	double	m_nStdUnitPrice;
	double	m_nSalePrice;
	double	m_nAmount;
	CString	m_szDescription;


	CGuiLabel		m_wndProductLabel;
	CGuiComboBox	m_wndProduct;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndManufactureLabel;
	CGuiComboBox	m_wndManufacture;
	CGuiLabel		m_wndExprDateLabel;
	CGuiDateCtrl	m_wndExprDate;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndSalePriceLabel;
	CGuiNumberCtrl	m_wndSalePrice;
	CGuiLabel		m_wndDescription;
	CGuiLabel		m_wndDefUnitPriceLabel;
	CGuiNumberCtrl	m_wndDefUnitPrice;
	CGuiLabel		m_wndDefSalePriceLabel;
	CGuiNumberCtrl	m_wndDefSalePrice;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiNumberCtrl	m_wndGiatt;
	CString	m_szProductKey;
	CString	m_szUom;
	CString	m_szManufactureKey;
	CString	m_szExprDate;
	CString	m_szLotNo;

	long	m_nDefUnitPrice;
	long	m_nDefSalePrice;
	long	m_nGiatt;

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
	void			OnManufactureSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManufactureSelendok(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	long			OnManufactureLoadData(); 
	//void			OnManufactureAddNew(); 
	//void			OnExprDateChange(); 
	//void			OnExprDateSetfocus(); 
	//void			OnExprDateKillfocus(); 
	int			OnExprDateCheckValue(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnSalePriceChange(); 
	//void			OnSalePriceSetfocus(); 
	//void			OnSalePriceKillfocus(); 
	int			OnSalePriceCheckValue(); 
	//void			OnDefUnitPriceChange(); 
	//void			OnDefUnitPriceSetfocus(); 
	//void			OnDefUnitPriceKillfocus(); 
	int			OnDefUnitPriceCheckValue(); 
	//void			OnDefSalePriceChange(); 
	//void			OnDefSalePriceSetfocus(); 
	//void			OnDefSalePriceKillfocus(); 
	int			OnDefSalePriceCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue();
	int			OnGiattCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CPMPurchaseOrderLineInputEx(CWnd *pParent, int nMode);
	~CPMPurchaseOrderLineInputEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMPurchaseOrderLineInputEx(); 
	int OnEditPMPurchaseOrderLineInputEx(); 
	int OnDeletePMPurchaseOrderLineInputEx(); 
	int OnSavePMPurchaseOrderLineInputEx(); 
	int OnCancelPMPurchaseOrderLineInputEx(); 
	int OnPMPurchaseOrderLineInputExListLoadData(); 
};
#endif