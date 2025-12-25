#ifndef FACASHADDITIONVIEW_H
#define FACASHADDITIONVIEW_H

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
class CFACashAdditionView : public CGuiView{
protected:
public:
	CGuiComboBox	m_wndCurrency;
	CGuiNumberCtrl	m_wndExchageRate;
	CGuiNumberCtrl	m_wndAmount;
	CGuiNumberCtrl	m_wndExchangeAmount;
	CGuiComboBox	m_wndInvoiceType;
	CGuiTextCtrl	m_wndInvoiceTemplateNo;
	CGuiTextCtrl	m_wndInvoiceNo;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiTextCtrl	m_wndInvoiceSigned;
	CString	m_szCurrencyKey;
	long	m_nExchageRate;
	long	m_nAmount;
	long	m_nExchangeAmount;
	CString	m_szInvoiceTypeKey;
	CString	m_szInvoiceTemplateNo;
	CString	m_szInvoiceNo;
	CString	m_szInvoiceDate;
	CString	m_szInvoiceSigned;
	void			OnCurrencySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCurrencySelendok(); 
	//void			OnCurrencySetfocus(); 
	//void			OnCurrencyKillfocus(); 
	long			OnCurrencyLoadData(); 
	//void			OnCurrencyAddNew(); 
	//void			OnExchageRateChange(); 
	//void			OnExchageRateSetfocus(); 
	//void			OnExchageRateKillfocus(); 
	int			OnExchageRateCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnExchangeAmountChange(); 
	//void			OnExchangeAmountSetfocus(); 
	//void			OnExchangeAmountKillfocus(); 
	int			OnExchangeAmountCheckValue(); 
	void			OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInvoiceTypeSelendok(); 
	//void			OnInvoiceTypeSetfocus(); 
	//void			OnInvoiceTypeKillfocus(); 
	long			OnInvoiceTypeLoadData(); 
	//void			OnInvoiceTypeAddNew(); 
	//void			OnInvoiceTemplateNoChange(); 
	//void			OnInvoiceTemplateNoSetfocus(); 
	//void			OnInvoiceTemplateNoKillfocus(); 
	int			OnInvoiceTemplateNoCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	//void			OnInvoiceSignedChange(); 
	//void			OnInvoiceSignedSetfocus(); 
	//void			OnInvoiceSignedKillfocus(); 
	int			OnInvoiceSignedCheckValue(); 
	CFACashAdditionView();
	~CFACashAdditionView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFACashAdditionView(); 
	int OnEditFACashAdditionView(); 
	int OnDeleteFACashAdditionView(); 
	int OnSaveFACashAdditionView(); 
	int OnCancelFACashAdditionView(); 
	int OnFACashAdditionViewListLoadData(); 
};
#endif
