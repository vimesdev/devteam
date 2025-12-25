#ifndef ADPRICELISTPOPUP_H
#define ADPRICELISTPOPUP_H

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
class CAdPriceListPopup : public CGuiPopup{
protected:
public:
	CGuiGroupBox	m_wndEntry;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndPriceSchemaLabel;
	CGuiComboBox	m_wndPriceSchema;
	CGuiLabel		m_wndBasePriceListLabel;
	CGuiComboBox	m_wndBasePriceList;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndStartDate;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCreatePriceList;
	CString		m_szID;
	CString	m_szName;
	CString	m_szDescription;
	CString	m_szCurrencyKey;
	CString	m_szPriceSchemaKey;
	CString	m_szBasePriceListKey;
	CString	m_szStartDate;
	BOOL	m_bActive;
	int		m_nMode;
	CDbfMap	m_ad_price_listTbl;
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnCurrencySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCurrencySelendok(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	long			OnCurrencyLoadData(); 
	//void			OnCurrencyAddNew(); 
	void			OnPriceSchemaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPriceSchemaSelendok(); 
	//void			OnPriceSchemaSetfocus(); 
	//void			OnPriceSchemaKillfocus(); 
	long			OnPriceSchemaLoadData(); 
	//void			OnPriceSchemaAddNew(); 
	void			OnBasePriceListSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBasePriceListSelendok(); 
	//void			OnBasePriceListSetfocus(); 
	//void			OnBasePriceListKillfocus(); 
	long			OnBasePriceListLoadData(); 
	//void			OnBasePriceListAddNew(); 
	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCreatePriceListSelect(); 
	CAdPriceListPopup();
	CAdPriceListPopup(CWnd *pParent);
	~CAdPriceListPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdPriceListPopup(); 
	int OnEditAdPriceListPopup(); 
	int OnDeleteAdPriceListPopup(); 
	int OnSaveAdPriceListPopup(); 
	int OnCancelAdPriceListPopup(); 
	int OnAdPriceListPopupListLoadData(); 
	void ClosePopup();
};
#endif
