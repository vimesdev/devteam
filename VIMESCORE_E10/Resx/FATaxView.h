#ifndef FATAXVIEW_H
#define FATAXVIEW_H

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
class CFATaxView : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFATAXINFORMATION;
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
	CString	m_szTaxrateKey;
	long	m_nTaxAmount;
	CString	m_szTaxAcctKey;
	CString	m_szInvoiceTypeKey;
	CString	m_szInvoiceDate;
	CString	m_szInvoiceNo;
	CString	m_szInvoiceTemplate;
	CString	m_szInvoiceSigned;
	CString	m_szGroupServiceItemsKey;
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
	CFATaxView();
	~CFATaxView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFATaxView(); 
	int OnEditFATaxView(); 
	int OnDeleteFATaxView(); 
	int OnSaveFATaxView(); 
	int OnCancelFATaxView(); 
	int OnFATaxViewListLoadData(); 
};
#endif
