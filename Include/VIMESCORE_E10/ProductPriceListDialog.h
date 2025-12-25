#ifndef PRODUCTPRICELISTDIALOG_H
#define PRODUCTPRICELISTDIALOG_H

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
class CProductPriceListDialog : public CGuiDialog{
protected:
public:
	bool	m_bIsServicePriceManager;

	long	m_nProductPriceID;
	long	m_nProductID;
	CWnd	*m_pWnd;
	CString	m_szProductPriceStr;
	CGuiGroupBox	m_wndNewPrice;
	CGuiLabel		m_wndManufactureLabel;
	CGuiComboBox	m_wndManufacture;
	CGuiLabel		m_wndVendorLabel;
	CGuiComboBox	m_wndVendor;
	CGuiLabel		m_wndPurchasePriceLabel;
	CGuiNumberCtrl	m_wndPurchasePrice;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndSalePriceLabel;
	CGuiNumberCtrl	m_wndSalePrice;
	CGuiLabel		m_wndSalePrice2Label;
	CGuiNumberCtrl	m_wndSalePrice2;
	CGuiLabel		m_wndSalePrice3Label;
	CGuiNumberCtrl	m_wndSalePrice3;
	CGuiLabel		m_wndSalePrice4Label;
	CGuiNumberCtrl	m_wndSalePrice4;
	CGuiCheckBox	m_wndIsPaid1;
	CGuiCheckBox	m_wndIsPaid2;
	CGuiCheckBox	m_wndIsPaid3;
	CGuiCheckBox	m_wndIsPaid4;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndApplyPaymentLevel;

	CString	m_szManufactureKey;
	CString	m_szVendorKey;
	double	m_nPurchasePrice;
	CString	m_szApplyDate;
	double	m_nSalePrice;
	double	m_nSalePrice2;
	double	m_nSalePrice3;
	double	m_nSalePrice4;
	double	m_nInsPrice;
	BOOL	m_bIsPaid1;
	BOOL	m_bIsPaid2;
	BOOL	m_bIsPaid3;
	BOOL	m_bIsPaid4;
	BOOL	m_bApplyPaymentLevel;
	CDbfMap	m_m_product_priceTbl;
	void			OnManufactureSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManufactureSelendok(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	long			OnManufactureLoadData(); 
	//void			OnManufactureAddNew(); 
	void			OnVendorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorSelendok(); 
	//void			OnVendorSetfocus(); 
	//void			OnVendorKillfocus(); 
	long			OnVendorLoadData(); 
	//void			OnVendorAddNew(); 
	//void			OnPurchasePriceChange(); 
	//void			OnPurchasePriceSetfocus(); 
	//void			OnPurchasePriceKillfocus(); 
	int			OnPurchasePriceCheckValue(); 
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue(); 
	//void			OnSalePriceChange(); 
	//void			OnSalePriceSetfocus(); 
	//void			OnSalePriceKillfocus(); 
	int			OnSalePriceCheckValue(); 
	//void			OnSalePrice2Change(); 
	//void			OnSalePrice2Setfocus(); 
	//void			OnSalePrice2Killfocus(); 
	int			OnSalePrice2CheckValue(); 
	//void			OnSalePrice3Change(); 
	//void			OnSalePrice3Setfocus(); 
	//void			OnSalePrice3Killfocus(); 
	int			OnSalePrice3CheckValue(); 
	//void			OnSalePrice4Change(); 
	//void			OnSalePrice4Setfocus(); 
	//void			OnSalePrice4Killfocus(); 
	int			OnSalePrice4CheckValue(); 
	void			OnIsPaid1Select(); 
	void			OnIsPaid2Select(); 
	void			OnIsPaid3Select(); 
	void			OnIsPaid4Select(); 
	void			OnApplyPaymentLevelSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CProductPriceListDialog(CWnd *pParent, int nMode);
	~CProductPriceListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductPriceListDialog(); 
	int OnEditProductPriceListDialog(); 
	int OnDeleteProductPriceListDialog(); 
	int OnSaveProductPriceListDialog(); 
	int OnCancelProductPriceListDialog(); 
	int OnProductPriceListDialogListLoadData(); 
};
#endif
