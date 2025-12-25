#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H

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
#include "GuiView.h"
#include "DbField.h"
#include "ProductInformation.h"
class AFX_EXT_CLASS CProductList : public CGuiView
{
protected:
	CProductInformation	m_wndProductInfo;
public:
	CGuiCheckBox	m_wndStent;
	BOOL	m_bStent;
	void	OnStentSelect();
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndTypeSearchLabel;
	CGuiComboBox	m_wndTypeSearch;
	CGuiLabel		m_wndProductListCategoryLabel;
	CGuiComboBox	m_wndProductListCategory;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiTextCtrl	m_wndContractName;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndLoadInactive;
	CGuiCheckBox	m_wndHasPrecision;
	CGuiCheckBox	m_wndIUnPaid;
	CGuiCheckBox	m_wndNonstock;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndFind;
	CString m_szProductID;
	CString	m_szTypeSearchKey;
	CString	m_szProductCategoryKey;
	CString	m_szStorageKey;
	CString	m_szSearchName;
	CString	m_szSearchString;
	CString m_szGenericName;
	CString m_szContractName;
	BOOL	m_bLoadInactive;
	BOOL	m_bHasPrecision;
	BOOL	m_bInsuranceUnpaid;
	BOOL	m_bNonstock;
	CDbfMap	m_m_productTbl;

	void			OnTypeSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSearchSelendok(); 
	//void			OnTypeSearchSetfocus(); 
	//void			OnTypeSearchKillfocus(); 
	long			OnTypeSearchLoadData(); 
	void			OnTypeSearchAddNew(); 
	void			OnProductListCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductListCategorySelendok(); 
	//void			OnProductListCategorySetfocus(); 
	//void			OnProductListCategoryKillfocus(); 
	long			OnProductListCategoryLoadData(); 
	void			OnProductListCategoryAddNew(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	void			OnStorageAddNew(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	int			OnContractNameCheckValue();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick();
	int			OnListAddItem();
	int			OnListAddNonstockItem();
	int			OnListDeleteItem(); 
	long			OnListExportItem();
	void			OnLoadInactiveSelect();
	void			OnHasPrecisionSelect();
	void			OnInsuranceUnPaid();
	void			OnNonstockSelect();
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnFindSelect();
	long            OnNonActiveMultiItems();
	void			OnUpdateSelect();

	void OnResizeLayout();

	CProductList();
	~CProductList();
	
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductList(); 
	int OnEditProductList(); 
	int OnDeleteProductList(); 
	int OnSaveProductList(); 
	int OnCancelProductList(); 
	int OnProductListListLoadData(); 
	void Refresh(LPCTSTR szActiveID=_T(""), LPCTSTR lpszSearchName=_T(""));
	void ReloadData(LPCTSTR lpszSearchName);
	void	On908DocumentInput();
	void OnMapInsuranceGroup();
	void OnMapProductItems();
	void OnImportProductItems();
	void ShowPopup();
	
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSetFocus(CWnd* pOldWnd);

	
};
#endif
