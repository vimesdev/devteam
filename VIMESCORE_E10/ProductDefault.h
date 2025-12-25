#ifndef PRODUCTDEFAULT_H
#define PRODUCTDEFAULT_H

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
#include "GuiView.h"
#include "DbField.h"
class CProductDefault : public CGuiView{
protected:
public:
	long			m_nProductID;
	CString m_szOldPriority;
	CGuiLabel		m_wndStorageIDLabel;
	CGuiComboBox	m_wndStorageID;
	CGuiLabel		m_wndStorageAccountLabel;
	CGuiComboBox	m_wndStorageAccount;
	CGuiLabel		m_wndExpenseAccountLabel;
	CGuiComboBox	m_wndExpenseAccount;
	CGuiLabel		m_wndRevenueAccountLabel;
	CGuiComboBox	m_wndRevenueAccount;
	CGuiLabel		m_wndTaxCategoryLabel;
	CGuiComboBox	m_wndTaxCategory;
	CGuiLabel		m_wndPriorityLabel;
	CGuiComboBox	m_wndPriority;
	CGuiLabel		m_wndDamageLabel;
	CGuiNumberCtrl	m_wndDamage;
	CGuiLabel		m_wndPercentLabel;
	CGuiLabel		m_wndMinQuantityLabel;
	CGuiNumberCtrl	m_wndMinQuantity;
	CGuiLabel		m_wndMaxQuantityLabel;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndWarningQuantityLabel;
	CGuiNumberCtrl	m_wndWarningQuantity;
	CGuiLabel		m_wndPackageLimitLabel;
	CGuiNumberCtrl	m_wndPackageLimit;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndSalePriceLabel;
	CGuiNumberCtrl	m_wndSalePrice;
	CGuiButton		m_wndPriceButton;
	CString	m_szStorageIDKey;
	CString	m_szStorageAccountKey;
	CString	m_szExpenseAccountKey;
	CString	m_szRevenueAccountKey;
	CString	m_szTaxCategoryKey;
	CString	m_szPriorityKey;
	double	m_nDamage;
	int		m_nMinQuantity;
	long	m_nMaxQuantity;
	int		m_nWarningQuantity;
	long	m_nPackageLimit;
	double	m_nUnitPrice;
	double	m_nSalePrice;
	double	m_nSalePrice2;
	double	m_nSalePrice3;
	double	m_nSalePrice4;
	BOOL	m_bIsPaid1;
	BOOL	m_bIsPaid2;
	BOOL	m_bIsPaid3;
	BOOL	m_bIsPaid4;
 
	CRecord*	m_rs;
	CDbfMap*	m_product_defaultTbl;

	void			OnStorageIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageIDSelendok(); 
	//void			OnStorageIDSetfocus(); 
	//void			OnStorageIDKillfocus(); 
	long			OnStorageIDLoadData(); 
	//void			OnStorageIDAddNew(); 
	void			OnStorageAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageAccountSelendok(); 
	//void			OnStorageAccountSetfocus(); 
	//void			OnStorageAccountKillfocus(); 
	long			OnStorageAccountLoadData(); 
	//void			OnStorageAccountAddNew(); 
	void			OnExpenseAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpenseAccountSelendok(); 
	//void			OnExpenseAccountSetfocus(); 
	//void			OnExpenseAccountKillfocus(); 
	long			OnExpenseAccountLoadData(); 
	//void			OnExpenseAccountAddNew(); 
	void			OnRevenueAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRevenueAccountSelendok(); 
	//void			OnRevenueAccountSetfocus(); 
	//void			OnRevenueAccountKillfocus(); 
	long			OnRevenueAccountLoadData(); 
	//void			OnRevenueAccountAddNew(); 
	void			OnTaxCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxCategorySelendok(); 
	//void			OnTaxCategorySetfocus(); 
	//void			OnTaxCategoryKillfocus(); 
	long			OnTaxCategoryLoadData(); 
	//void			OnTaxCategoryAddNew(); 
	void			OnPrioritySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPrioritySelendok(); 
	//void			OnPrioritySetfocus(); 
	//void			OnPriorityKillfocus(); 
	long			OnPriorityLoadData(); 
	//void			OnPriorityAddNew(); 
	//void			OnMinQuantityChange(); 
	//void			OnMinQuantitySetfocus(); 
	//void			OnMinQuantityKillfocus(); 
	int			OnMinQuantityCheckValue(); 
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnSalePriceChange(); 
	//void			OnSalePriceSetfocus(); 
	//void			OnSalePriceKillfocus(); 
	int			OnSalePriceCheckValue(); 
	void			OnPriceButtonSelect(); 
	CProductDefault();
	~CProductDefault();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductDefault(); 
	int OnEditProductDefault(); 
	int OnDeleteProductDefault(); 
	int OnSaveProductDefault(); 
	int OnCancelProductDefault(); 
	int OnProductDefaultListLoadData(); 
	void Refresh();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

};
#endif
