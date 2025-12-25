#ifndef ADPRODUCTDIALOG_H
#define ADPRODUCTDIALOG_H

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
#include "AdPrice.h"
#include "AdProductDetail.h"
#include "AdProductAccount.h"
#include "AdCostingRule.h"
class CAdProductDialog : public CGuiDialog{
protected:
	CAdProductDetail	m_wndDetail;
	CAdPrice		m_wndPrice;
	CAdProductAccount	m_wndAccount;
	CAdCostingRule	m_wndCostRule;
public:
	CWnd*	m_pWnd;
	CGuiGroupBox	m_wndProductInformation;
	CGuiLabel		m_wndProductIDLabel;
	CGuiTextCtrl	m_wndProductID;
	CGuiCheckBox	m_wndActive;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndBusinessPartnerLabel;
	CGuiComboBox	m_wndBusinessPartner;
	CGuiLabel		m_wndProductTypeLabel;
	CGuiComboBox	m_wndProductType;
	CGuiLabel		m_wndProductCategoryLabel;
	CGuiComboBox	m_wndProductCategory;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndUnit;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiTabCtrl	m_wndTab;
	CString	m_szProductID;
	BOOL	m_bActive;
	CString	m_szName;
	CString	m_szBusinessPartnerKey;
	CString	m_szProductTypeKey;
	CString	m_szProductCategoryKey;
	CString	m_szDescription;
	CString	m_szUnitKey;
	CDbfMap	m_ad_productTbl;
	//void			OnProductIDChange(); 
	//void			OnProductIDSetfocus(); 
	//void			OnProductIDKillfocus(); 
	int			OnProductIDCheckValue(); 
	void			OnActiveSelect(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnBusinessPartnerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBusinessPartnerSelendok(); 
	//void			OnBusinessPartnerSetfocus(); 
	//void			OnBusinessPartnerKillfocus(); 
	long			OnBusinessPartnerLoadData(); 
	//void			OnBusinessPartnerAddNew(); 
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
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnitSelendok(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	long			OnUnitLoadData(); 
	//void			OnUnitAddNew(); 
	void			OnAddSelect();
	void			OnEditSelect();
	void			OnDeleteSelect();
	void			OnSaveSelect();
	void			OnCancelSelect();
	void			OnTabSelectChange(int nOld, int nNew); 
	CAdProductDialog(CWnd *pParent);
	~CAdProductDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdProductDialog(); 
	int OnEditAdProductDialog(); 
	int OnDeleteAdProductDialog(); 
	int OnSaveAdProductDialog(); 
	int OnCancelAdProductDialog(); 
	int OnAdProductDialogListLoadData(); 
	void CreateTabViews();
};
#endif
