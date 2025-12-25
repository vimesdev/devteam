#ifndef FAADDITIONVIEW_H
#define FAADDITIONVIEW_H

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
class CFAAdditionView : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFATAXINFORMATION;
	CGuiGroupBox	m_wndFASOURCE;
	CGuiGroupBox	m_wndCurrencyInformation;
	CGuiGroupBox	m_wndStatisticInformation;
	CGuiLabel		m_wndTaxrateLabel;
	CGuiComboBox	m_wndTaxrate;
	CGuiLabel		m_wndTaxAmountLabel;
	CGuiNumberCtrl	m_wndTaxAmount;
	CGuiLabel		m_wndTaxAcctLabel;
	CGuiComboBox	m_wndTaxAcct;
	CGuiLabel		m_wndInvoiceTypeLabel;
	CGuiComboBox	m_wndInvoiceType;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiTextCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiTextCtrl	m_wndInvoiceNo;
	CGuiLabel		m_wndInvoiceTemplateLabel;
	CGuiTextCtrl	m_wndInvoiceTemplate;
	CGuiLabel		m_wndInvoiceSignedLabel;
	CGuiTextCtrl	m_wndInvoiceSigned;
	CGuiLabel		m_wndGroupServiceItemsLabel;
	CGuiComboBox	m_wndGroupServiceItems;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiLabel		m_wndChapterLabel;
	CGuiComboBox	m_wndChapter;
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiLabel		m_wndSubItemLabel;
	CGuiComboBox	m_wndSubItem;
	CGuiLabel		m_wndStatisticIDLabel;
	CGuiComboBox	m_wndStatisticID;
	CGuiLabel		m_wndDistributionLabel;
	CGuiComboBox	m_wndDistribution;
	CGuiLabel		m_wndCurrencyLabel;
	CGuiComboBox	m_wndCurrency;
	CGuiLabel		m_wndExchangeRateLabel;
	CGuiNumberCtrl	m_wndExchangeRate;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndExchangeLabel;
	CGuiNumberCtrl	m_wndExchange;
	CGuiLabel		m_wndHCSNLabel;
	CGuiComboBox	m_wndHCSN;
	CGuiLabel		m_wndCTMTDUANLabel;
	CGuiComboBox	m_wndCTMTDUAN;
	CGuiLabel		m_wndCCVONLabel;
	CGuiComboBox	m_wndCCVON;
	CString	m_szTaxrateKey;
	long	m_nTaxAmount;
	CString	m_szTaxAcctKey;
	CString	m_szInvoiceTypeKey;
	CString	m_szInvoiceDate;
	CString	m_szInvoiceNo;
	CString	m_szInvoiceTemplate;
	CString	m_szInvoiceSigned;
	CString	m_szGroupServiceItemsKey;
	CString	m_szSourceKey;
	CString	m_szChapterKey;
	CString	m_szItemKey;
	CString	m_szSubItemKey;
	CString	m_szStatisticIDKey;
	CString	m_szDistributionKey;
	CString	m_szCurrencyKey;
	long	m_nExchangeRate;
	long	m_nAmount;
	long	m_nExchange;
	CString	m_szHCSNKey;
	CString	m_szCTMTDUANKey;
	CString	m_szCCVONKey;
	void			OnTaxrateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxrateSelendok(); 
	//void			OnTaxrateSetfocus(); 
	//void			OnTaxrateKillfocus(); 
	long			OnTaxrateLoadData(); 
	//void			OnTaxrateAddNew(); 
	//void			OnTaxAmountChange(); 
	//void			OnTaxAmountSetfocus(); 
	//void			OnTaxAmountKillfocus(); 
	int			OnTaxAmountCheckValue(); 
	void			OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxAcctSelendok(); 
	//void			OnTaxAcctSetfocus(); 
	//void			OnTaxAcctKillfocus(); 
	long			OnTaxAcctLoadData(); 
	//void			OnTaxAcctAddNew(); 
	void			OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInvoiceTypeSelendok(); 
	//void			OnInvoiceTypeSetfocus(); 
	//void			OnInvoiceTypeKillfocus(); 
	long			OnInvoiceTypeLoadData(); 
	//void			OnInvoiceTypeAddNew(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceTemplateChange(); 
	//void			OnInvoiceTemplateSetfocus(); 
	//void			OnInvoiceTemplateKillfocus(); 
	int			OnInvoiceTemplateCheckValue(); 
	//void			OnInvoiceSignedChange(); 
	//void			OnInvoiceSignedSetfocus(); 
	//void			OnInvoiceSignedKillfocus(); 
	int			OnInvoiceSignedCheckValue(); 
	void			OnGroupServiceItemsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupServiceItemsSelendok(); 
	//void			OnGroupServiceItemsSetfocus(); 
	//void			OnGroupServiceItemsKillfocus(); 
	long			OnGroupServiceItemsLoadData(); 
	//void			OnGroupServiceItemsAddNew(); 
	void			OnSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourceSelendok(); 
	//void			OnSourceSetfocus(); 
	//void			OnSourceKillfocus(); 
	long			OnSourceLoadData(); 
	//void			OnSourceAddNew(); 
	void			OnChapterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChapterSelendok(); 
	//void			OnChapterSetfocus(); 
	//void			OnChapterKillfocus(); 
	long			OnChapterLoadData(); 
	//void			OnChapterAddNew(); 
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	void			OnSubItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSubItemSelendok(); 
	//void			OnSubItemSetfocus(); 
	//void			OnSubItemKillfocus(); 
	long			OnSubItemLoadData(); 
	//void			OnSubItemAddNew(); 
	void			OnStatisticIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatisticIDSelendok(); 
	//void			OnStatisticIDSetfocus(); 
	//void			OnStatisticIDKillfocus(); 
	long			OnStatisticIDLoadData(); 
	//void			OnStatisticIDAddNew(); 
	void			OnDistributionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistributionSelendok(); 
	//void			OnDistributionSetfocus(); 
	//void			OnDistributionKillfocus(); 
	long			OnDistributionLoadData(); 
	//void			OnDistributionAddNew(); 
	void			OnCurrencySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCurrencySelendok(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	long			OnCurrencyLoadData(); 
	//void			OnCurrencyAddNew(); 
	//void			OnExchangeRateChange(); 
	//void			OnExchangeRateSetfocus(); 
	//void			OnExchangeRateKillfocus(); 
	int			OnExchangeRateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnExchangeChange(); 
	//void			OnExchangeSetfocus(); 
	//void			OnExchangeKillfocus(); 
	int			OnExchangeCheckValue(); 
	void			OnHCSNSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHCSNSelendok(); 
	//void			OnHCSNSetfocus(); 
	//void			OnHCSNKillfocus(); 
	long			OnHCSNLoadData(); 
	//void			OnHCSNAddNew(); 
	void			OnCTMTDUANSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCTMTDUANSelendok(); 
	//void			OnCTMTDUANSetfocus(); 
	//void			OnCTMTDUANKillfocus(); 
	long			OnCTMTDUANLoadData(); 
	//void			OnCTMTDUANAddNew(); 
	void			OnCCVONSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCCVONSelendok(); 
	//void			OnCCVONSetfocus(); 
	//void			OnCCVONKillfocus(); 
	long			OnCCVONLoadData(); 
	//void			OnCCVONAddNew(); 
	CFAAdditionView();
	~CFAAdditionView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAAdditionView(); 
	int OnEditFAAdditionView(); 
	int OnDeleteFAAdditionView(); 
	int OnSaveFAAdditionView(); 
	int OnCancelFAAdditionView(); 
	int OnFAAdditionViewListLoadData(); 
};
#endif
