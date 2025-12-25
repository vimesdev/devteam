#ifndef PRODUCTDIALOG2_H
#define PRODUCTDIALOG2_H

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
class CProductDialog2 : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndProductTypeLabel;
	CGuiComboBox	m_wndProductType;
	CGuiLabel		m_wndProductCategoryLabel;
	CGuiComboBox	m_wndProductCategory;
	CGuiLabel		m_wndProductNameLabel;
	CGuiTextCtrl	m_wndProductName;
	CGuiLabel		m_wndUomLabel;
	CGuiGroupBox	m_wndProductInformation;
	CGuiComboBox	m_wndUom;
	CGuiLabel		m_wndSaleUomLabel;
	CGuiCheckBox	m_wndSaleUomOption;
	CGuiComboBox	m_wndSaleUom;
	CGuiLabel		m_wndConversionRateLabel;
	CGuiNumberCtrl	m_wndConversionRate;
	CGuiLabel		m_wndSpecificationLabel;
	CGuiTextCtrl	m_wndSpecification;
	CGuiLabel		m_wndProductCodeLabel;
	CGuiTextCtrl	m_wndProductCode;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndMfgLabel;
	CGuiComboBox	m_wndMfg;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiTabCtrl	m_wndTab;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szProductTypeKey;
	CString	m_szProductCategoryKey;
	CString	m_szProductName;
	CString	m_szUomKey;
	BOOL	m_bSaleUomOption;
	CString	m_szSaleUomKey;
	long	m_nConversionRate;
	CString	m_szSpecification;
	CString	m_szProductCode;
	CString	m_szSerialNo;
	CString	m_szMfgKey;
	CString	m_szSupplierKey;
	CString	m_szDescription;
	BOOL	m_bActive;
	CDbfMap	m_m_productTbl;
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
	//void			OnProductNameChange(); 
	//void			OnProductNameSetfocus(); 
	//void			OnProductNameKillfocus(); 
	int			OnProductNameCheckValue(); 
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
	//void			OnProductCodeChange(); 
	//void			OnProductCodeSetfocus(); 
	//void			OnProductCodeKillfocus(); 
	int			OnProductCodeCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
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
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CProductDialog2(CWnd *pParent);
	~CProductDialog2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductDialog2(); 
	int OnEditProductDialog2(); 
	int OnDeleteProductDialog2(); 
	int OnSaveProductDialog2(); 
	int OnCancelProductDialog2(); 
	int OnProductDialog2ListLoadData(); 
};
#endif
