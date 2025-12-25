#ifndef ADPRICESCHEMAINPUT_H
#define ADPRICESCHEMAINPUT_H

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
class CAdPriceSchemaInput : public CListItemEdit{
protected:
public:
	CGuiLabel		m_wndPartnerLabel;
	CGuiComboBox	m_wndPartner;
	CGuiLabel		m_wndProductCategoryLabel;
	CGuiComboBox	m_wndProductCategory;
	CGuiLabel		m_wndProductLabel;
	CGuiComboBox	m_wndProduct;
	CGuiLabel		m_wndRefPriceTypeLabel;
	CGuiComboBox	m_wndRefPriceType;
	CGuiLabel		m_wndUnitPriceTypeLabel;
	CGuiComboBox	m_wndUnitPriceType;
	CGuiLabel		m_wndRefPriceAdjustLabel;
	CGuiTextCtrl	m_wndRefPriceAdjust;
	CGuiLabel		m_wndUnitPriceAdjustLabel;
	CGuiTextCtrl	m_wndUnitPriceAdjust;
	CString	m_szID;
	CString	m_szPriceSchemaID;
	CString	m_szPartnerKey;
	CString	m_szProductCategoryKey;
	CString	m_szProductKey;
	CString	m_szRefPriceTypeKey;
	CString	m_szUnitPriceTypeKey;
	CString	m_szRefPriceAdjust;
	CString	m_szUnitPriceAdjust;
	CDbfMap	m_ad_price_schema_lineTbl;
	void			OnPartnerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerSelendok(); 
	//void			OnPartnerSetfocus(); 
	//void			OnPartnerKillfocus(); 
	long			OnPartnerLoadData(); 
	//void			OnPartnerAddNew(); 
	void			OnProductCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductCategorySelendok(); 
	//void			OnProductCategorySetfocus(); 
	//void			OnProductCategoryKillfocus(); 
	long			OnProductCategoryLoadData(); 
	//void			OnProductCategoryAddNew(); 
	void			OnProductSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductSelendok(); 
	//void			OnProductSetfocus(); 
	//void			OnProductKillfocus(); 
	long			OnProductLoadData(); 
	//void			OnProductAddNew(); 
	void			OnRefPriceTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRefPriceTypeSelendok(); 
	//void			OnRefPriceTypeSetfocus(); 
	//void			OnRefPriceTypeKillfocus(); 
	long			OnRefPriceTypeLoadData(); 
	//void			OnRefPriceTypeAddNew(); 
	void			OnUnitPriceTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnitPriceTypeSelendok(); 
	//void			OnUnitPriceTypeSetfocus(); 
	//void			OnUnitPriceTypeKillfocus(); 
	long			OnUnitPriceTypeLoadData(); 
	//void			OnUnitPriceTypeAddNew(); 
	//void			OnRefPriceAdjustChange(); 
	//void			OnRefPriceAdjustSetfocus(); 
	//void			OnRefPriceAdjustKillfocus(); 
	int			OnRefPriceAdjustCheckValue(); 
	//void			OnUnitPriceAdjustChange(); 
	//void			OnUnitPriceAdjustSetfocus(); 
	//void			OnUnitPriceAdjustKillfocus(); 
	int			OnUnitPriceAdjustCheckValue(); 
	CAdPriceSchemaInput();
	~CAdPriceSchemaInput();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdPriceSchemaInput(); 
	int OnEditAdPriceSchemaInput(); 
	int OnDeleteAdPriceSchemaInput(); 
	int OnSaveAdPriceSchemaInput(); 
	int OnCancelAdPriceSchemaInput(); 
	int OnAdPriceSchemaInputListLoadData(); 
	int OnOK();
};
#endif
