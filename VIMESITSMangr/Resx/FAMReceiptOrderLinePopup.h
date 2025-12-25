#ifndef FAMRECEIPTORDERLINEPOPUP_H
#define FAMRECEIPTORDERLINEPOPUP_H

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
class CFAMReceiptOrderLinePopup : public CGuiView{
protected:
public:
	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndQuantityLabel;
	CGuiTextCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiTextCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndMoneyLabel;
	CGuiTextCtrl	m_wndMoney;
	CGuiLabel		m_wndSeriLabel;
	CGuiTextCtrl	m_wndSeri;
	CGuiButton		m_wndSaveItem;
	CString	m_szItemNameKey;
	CString	m_szUnit;
	CString	m_szQuantity;
	CString	m_szUnitPrice;
	CString	m_szMoney;
	CString	m_szSeri;
	void			OnItemNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemNameSelendok(); 
	//void			OnItemNameSetfocus(); 
	//void			OnItemNameKillfocus(); 
	long			OnItemNameLoadData(); 
	//void			OnItemNameAddNew(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnMoneyChange(); 
	//void			OnMoneySetfocus(); 
	//void			OnMoneyKillfocus(); 
	int			OnMoneyCheckValue(); 
	//void			OnSeriChange(); 
	//void			OnSeriSetfocus(); 
	//void			OnSeriKillfocus(); 
	int			OnSeriCheckValue(); 
	void			OnSaveItemSelect(); 
	CFAMReceiptOrderLinePopup();
	~CFAMReceiptOrderLinePopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMReceiptOrderLinePopup(); 
	int OnEditFAMReceiptOrderLinePopup(); 
	int OnDeleteFAMReceiptOrderLinePopup(); 
	int OnSaveFAMReceiptOrderLinePopup(); 
	int OnCancelFAMReceiptOrderLinePopup(); 
	int OnFAMReceiptOrderLinePopupListLoadData(); 
};
#endif
