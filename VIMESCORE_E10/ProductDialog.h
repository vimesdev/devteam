#ifndef PRODUCTDIALOG_H
#define PRODUCTDIALOG_H

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
#include "ProductDefault.h"
#include "ProductPriceList.h"
#include "ProductControl.h"

class CProductDialog : public CGuiDialog
{

protected:
	bool	m_bNonstock;
	CString m_szRowChange;
public:
	bool	m_bReset;
	long	m_nProductID;
	CProductDefault	m_wndProductDefault;
	CProductPriceList	m_wndProductPrice;
	CProductControl		m_wndProductControl;

	CGuiGroupBox	m_wndProductInformation;
	CGuiLabel		m_wndProductTypeLabel;
	CGuiComboBox	m_wndProductType;
	CGuiLabel		m_wndProductCategoryLabel;
	CGuiComboBox	m_wndProductCategory;
	
	CGuiLabel		m_wndProductClassLabel;
	CGuiComboBox	m_wndProductClass;
	CGuiLabel		m_wndProductCodeLabel;
	CGuiTextCtrl	m_wndProductCode;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndProductNameLabel;
	CGuiTextCtrl	m_wndProductName;
	CGuiLabel		m_wndName2Label;
	CGuiTextCtrl	m_wndName2;
	CGuiLabel		m_wndUomLabel;
	CGuiComboBox	m_wndUom;
	CGuiLabel		m_wndSaleUomLabel;
	CGuiCheckBox	m_wndSaleUomOption;
	CGuiComboBox	m_wndSaleUom;
	CGuiLabel		m_wndConversionRateLabel;
	CGuiNumberCtrl	m_wndConversionRate;
	CGuiLabel		m_wndSpecificationLabel;
	CGuiTextCtrl	m_wndSpecification;
	CGuiLabel		m_wndValueLabel;
	CGuiTextCtrl	m_wndValue;
	CGuiLabel		m_wndMfgLabel;
	CGuiComboBox	m_wndMfg;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndATCCodeLabel;
	CGuiTextCtrl	m_wndATCCode;
	CGuiLabel		m_wndDecisionLabel;
	CGuiTextCtrl	m_wndDecision;
	CGuiLabel		m_wndPackageNoLabel;
	CGuiTextCtrl	m_wndPackageNo;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndDocumentNoteLabel;
	CGuiTextCtrl	m_wndDocumentNote;
	CGuiTabCtrl		m_wndTab;
	CGuiCheckBox	m_wndActive;
	CGuiCheckBox	m_wndHasPrecision;
	CGuiCheckBox	m_wndRoundable;
	CGuiCheckBox	m_wndHitech;
	CGuiLabel		m_wndMapItemLabel;
	CGuiComboBox	m_wndMapItem;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szProductTypeKey;
	CString	m_szProductCategoryKey;
	CString	m_szProductClassKey;
	CString	m_szProductCode;
	CString	m_szSerialNo;
	CString	m_szProductName;
	CString	m_szName2;
	CString	m_szUomKey;
	BOOL	m_bSaleUomOption;
	CString	m_szSaleUomKey;
	long	m_nConversionRate;
	CString	m_szSpecification;
	CString	m_szValue;
	CString	m_szMfgKey;
	CString	m_szSupplierKey;
	CString	m_szATCCode;
	CString	m_szDecision;
	CString	m_szPackageNo;
	CString	m_szDescription;
	CString m_szDocumentNote;
	CString	m_szMapItemKey;
	BOOL	m_bActive;
	BOOL	m_bHasPrecision;
	BOOL	m_bRoundable;
	BOOL	m_bHitech;
	BOOL	m_bStent;
	CGuiCheckBox	m_wndStent;
	CDbfMap	m_productTbl;
	CString	m_szOldProductName;
	void			OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductTypeSelendok(); 
	//void			OnProductTypeSetfocus(); 
	//void			OnProductTypeKillfocus(); 
	long			OnProductTypeLoadData(); 
	//void			OnProductTypeAddNew(); 
	void			OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductCategorySelendok(); 
	//void			OnProductCategorySetfocus(); 
	//void			OnProductCategoryKillfocus(); 
	long			OnProductCategoryLoadData(); 
	//void			OnProductCategoryAddNew(); 
	void			OnProductClassSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductClassSelendok(); 
	//void			OnProductClassSetfocus(); 
	//void			OnProductClassKillfocus(); 
	long			OnProductClassLoadData(); 
	//void			OnProductClassAddNew(); 
	//void			OnProductCodeChange(); 
	//void			OnProductCodeSetfocus(); 
	//void			OnProductCodeKillfocus(); 
	int			OnProductCodeCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnProductNameChange(); 
	//void			OnProductNameSetfocus(); 
	//void			OnProductNameKillfocus(); 
	int			OnProductNameCheckValue(); 
	//void			OnName2Change(); 
	//void			OnName2Setfocus(); 
	//void			OnName2Killfocus(); 
	int			OnName2CheckValue(); 
	void			OnUomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUomSelendok(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	long			OnUomLoadData(); 
	//void			OnUomAddNew(); 
	void			OnSaleUomOptionSelect(); 
	void			OnSaleUomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSaleUomSelendok(); 
	//void			OnSaleUomSetfocus(); 
	//void			OnSaleUomKillfocus(); 
	long			OnSaleUomLoadData(); 
	//void			OnSaleUomAddNew(); 
	//void			OnConversionRateChange(); 
	//void			OnConversionRateSetfocus(); 
	//void			OnConversionRateKillfocus(); 
	int			OnConversionRateCheckValue(); 
	//void			OnSpecificationChange(); 
	//void			OnSpecificationSetfocus(); 
	//void			OnSpecificationKillfocus(); 
	int			OnSpecificationCheckValue(); 
	//void			OnValueChange(); 
	//void			OnValueSetfocus(); 
	//void			OnValueKillfocus(); 
	int			OnValueCheckValue(); 
	void			OnMfgSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMfgSelendok(); 
	//void			OnMfgSetfocus(); 
	//void			OnMfgKillfocus(); 
	long			OnMfgLoadData(); 
	//void			OnMfgAddNew(); 
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnActiveSelect(); 
	void			OnHasPrecisionSelect();
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	long			OnMapItemLoadData(); 
	CProductDialog(CWnd *pParent, int nMode, bool bNonstock = false);
	~CProductDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductDialog(); 
	int OnEditProductDialog(); 
	int OnDeleteProductDialog(); 
	int OnSaveProductDialog(); 
	int OnCancelProductDialog(); 
	int OnProductDialogListLoadData(); 
};
#endif