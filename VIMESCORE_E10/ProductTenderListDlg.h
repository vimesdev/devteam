#ifndef ProductTenderListDlgDLG_H
#define ProductTenderListDlgDLG_H

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
class AFX_EXT_CLASS CProductTenderListDlg : public CGuiDialog{
protected:
public:
	long			m_nTenderID;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndItemInformation;
	CGuiGroupBox	m_wndProductInformationLabel;
	CGuiLabel		m_wndProductListCategoryLabel;
	CGuiComboBox	m_wndProductListCategory;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndFind;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndClose;
	
	
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndActiveIngredientIDLabel;
	CGuiNumberCtrl	m_wndActiveIngredientID;
	CGuiLabel		m_wndActiveIngredientLabel;
	CGuiTextCtrl	m_wndActiveIngredient;
	CGuiLabel		m_wndCategoryLabel;
	CGuiTextCtrl	m_wndCategory;
	CGuiLabel		m_wndDosageConcentrationLabel;
	CGuiTextCtrl	m_wndProductName;
	CGuiLabel		m_wndDosageFormLabel;
	CGuiTextCtrl	m_wndDosageForm;
	CGuiLabel		m_wndRouteOfAdminLabel;
	CGuiTextCtrl	m_wndRouteOfAdmin;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndPlannedPriceLabel;
	CGuiNumberCtrl	m_wndPlannedPrice;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndProductIDLabel;
	CGuiTextCtrl	m_wndProductID;
	CGuiLabel		m_wndProductExtraInfoIDLabel;
	CGuiTextCtrl	m_wndProductExtraInfoID;
	CString	m_szProductListCategoryKey;
	CString	m_szSearchName;
	CString	m_szCode;
	long	m_nActiveIngredientID;
	CString	m_szActiveIngredient;
	CString	m_szCategory;
	CString	m_szProductName;
	CString	m_szDosageForm;
	CString	m_szRouteOfAdmin;
	CString	m_szUom;
	long	m_nQuantity;
	long	m_nPlannedPrice;
	long	m_nTotalAmount;
	CString	m_szProductID;
	CString	m_szProductExtraInfoID;
	CDbfMap	m_m_product_tenderTbl;
	CString m_szProductTenderID;

	void			OnProductListCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductListCategorySelendok(); 
	//void			OnProductListCategorySetfocus(); 
	//void			OnProductListCategoryKillfocus(); 
	long			OnProductListCategoryLoadData(); 
	//void			OnProductListCategoryAddNew(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnCloseSelect(); 
	void			OnFindSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListCloseItem(); 
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue(); 
	//void			OnActiveIngredientIDChange(); 
	//void			OnActiveIngredientIDSetfocus(); 
	//void			OnActiveIngredientIDKillfocus(); 
	int			OnActiveIngredientIDCheckValue(); 
	//void			OnActiveIngredientChange(); 
	//void			OnActiveIngredientSetfocus(); 
	//void			OnActiveIngredientKillfocus(); 
	int			OnActiveIngredientCheckValue(); 
	//void			OnCategoryChange(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	int			OnCategoryCheckValue(); 
	//void			OnProductNameChange(); 
	//void			OnProductNameSetfocus(); 
	//void			OnProductNameKillfocus(); 
	int			OnProductNameCheckValue(); 
	//void			OnDosageFormChange(); 
	//void			OnDosageFormSetfocus(); 
	//void			OnDosageFormKillfocus(); 
	int			OnDosageFormCheckValue(); 
	//void			OnRouteOfAdminChange(); 
	//void			OnRouteOfAdminSetfocus(); 
	//void			OnRouteOfAdminKillfocus(); 
	int			OnRouteOfAdminCheckValue(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnPlannedPriceChange(); 
	//void			OnPlannedPriceSetfocus(); 
	//void			OnPlannedPriceKillfocus(); 
	int			OnPlannedPriceCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnProductIDChange(); 
	//void			OnProductIDSetfocus(); 
	//void			OnProductIDKillfocus(); 
	int			OnProductIDCheckValue(); 
	//void			OnProductExtraInfoIDChange(); 
	//void			OnProductExtraInfoIDSetfocus(); 
	//void			OnProductExtraInfoIDKillfocus(); 
	int			OnProductExtraInfoIDCheckValue(); 
	CProductTenderListDlg(CWnd *pParent);
	~CProductTenderListDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductTenderListDlg(); 
	int OnEditProductTenderListDlg(); 
	int OnCloseProductTenderListDlg(); 
	int OnSaveProductTenderListDlg(); 
	int OnCancelProductTenderListDlg(); 
	int OnProductTenderListDlgListLoadData(); 
	void OnResizeLayout();
};
#endif
