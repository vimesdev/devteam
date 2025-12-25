#ifndef GLASSPRODUCTDIALOG_H
#define GLASSPRODUCTDIALOG_H

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
class CGlassProductDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndProductInformation;
	CGuiLabel		m_wndProductTypeLabel;
	CGuiComboBox	m_wndProductType;
	CGuiLabel		m_wndProductCategoryLabel;
	CGuiComboBox	m_wndProductCategory;
	CGuiLabel		m_wndProductCodeLabel;
	CGuiTextCtrl	m_wndProductCode;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndProductNameLabel;
	CGuiTextCtrl	m_wndProductName;
	CGuiLabel		m_wndUomLabel;
	CGuiComboBox	m_wndUom;
	CGuiLabel		m_wndMfgLabel;
	CGuiComboBox	m_wndMfg;
	CGuiLabel		m_wndOriginLabel;
	CGuiTextCtrl	m_wndOrigin;
	CGuiLabel		m_wndMaterialLabel;
	CGuiComboBox	m_wndMaterial;
	CGuiLabel		m_wndAttributeLabel;
	CGuiComboBox	m_wndAttribute;
	CGuiLabel		m_wndColorLabel;
	CGuiComboBox	m_wndColor;
	CGuiLabel		m_wndGuaranteeDaysLabel;
	CGuiNumberCtrl	m_wndGuaranteeDays;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndImage;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndPurchasePriceLabel;
	CGuiNumberCtrl	m_wndPurchasePrice;
	CGuiLabel		m_wndSalePriceLabel;
	CGuiNumberCtrl	m_wndSalePrice;
	CGuiLabel		m_wndRetainPriceLabel;
	CGuiNumberCtrl	m_wndRetainPrice;
	CGuiTabCtrl	m_wndTab;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szProductTypeKey;
	CString	m_szProductCategoryKey;
	CString	m_szProductCode;
	CString	m_szSerialNo;
	CString	m_szProductName;
	CString	m_szUomKey;
	CString	m_szMfgKey;
	CString	m_szOrigin;
	CString	m_szMaterialKey;
	CString	m_szAttributeKey;
	CString	m_szColorKey;
	long	m_nGuaranteeDays;
	CString	m_szDescription;
	CString	m_szNote;
	long	m_nPurchasePrice;
	long	m_nSalePrice;
	long	m_nRetainPrice;
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
	void			OnUomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUomSelendok(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	long			OnUomLoadData(); 
	//void			OnUomAddNew(); 
	void			OnMfgSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMfgSelendok(); 
	//void			OnMfgSetfocus(); 
	//void			OnMfgKillfocus(); 
	long			OnMfgLoadData(); 
	//void			OnMfgAddNew(); 
	//void			OnOriginChange(); 
	//void			OnOriginSetfocus(); 
	//void			OnOriginKillfocus(); 
	int			OnOriginCheckValue(); 
	void			OnMaterialSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMaterialSelendok(); 
	//void			OnMaterialSetfocus(); 
	//void			OnMaterialKillfocus(); 
	long			OnMaterialLoadData(); 
	//void			OnMaterialAddNew(); 
	void			OnAttributeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAttributeSelendok(); 
	//void			OnAttributeSetfocus(); 
	//void			OnAttributeKillfocus(); 
	long			OnAttributeLoadData(); 
	//void			OnAttributeAddNew(); 
	void			OnColorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnColorSelendok(); 
	//void			OnColorSetfocus(); 
	//void			OnColorKillfocus(); 
	long			OnColorLoadData(); 
	//void			OnColorAddNew(); 
	//void			OnGuaranteeDaysChange(); 
	//void			OnGuaranteeDaysSetfocus(); 
	//void			OnGuaranteeDaysKillfocus(); 
	int			OnGuaranteeDaysCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnPurchasePriceChange(); 
	//void			OnPurchasePriceSetfocus(); 
	//void			OnPurchasePriceKillfocus(); 
	int			OnPurchasePriceCheckValue(); 
	//void			OnSalePriceChange(); 
	//void			OnSalePriceSetfocus(); 
	//void			OnSalePriceKillfocus(); 
	int			OnSalePriceCheckValue(); 
	//void			OnRetainPriceChange(); 
	//void			OnRetainPriceSetfocus(); 
	//void			OnRetainPriceKillfocus(); 
	int			OnRetainPriceCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnActiveSelect(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CGlassProductDialog(CWnd *pParent);
	~CGlassProductDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddGlassProductDialog(); 
	int OnEditGlassProductDialog(); 
	int OnDeleteGlassProductDialog(); 
	int OnSaveGlassProductDialog(); 
	int OnCancelGlassProductDialog(); 
	int OnGlassProductDialogListLoadData(); 
};
#endif
