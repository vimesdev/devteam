#ifndef FAMALLOCATETODEPTLINE_H
#define FAMALLOCATETODEPTLINE_H

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

class CFAMAllocateToDeptLine : public CGuiView{
protected:
public:
	CGuiListCtrl	m_wndItemList;
	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndMoneyLabel;
	CGuiNumberCtrl	m_wndMoney;
	CGuiLabel		m_wndUseDateLabel;
	CGuiDateCtrl	m_wndUseDate;
	CGuiButton		m_wndSaveItem;
	CString	m_szItemNameKey;
	CString	m_szExpDate;
	CString m_szUnit;
	CString	m_szUseDate;
	long	m_nDeprTime;
	CDbfMap m_tbl_Allocateline;
	long m_nIndex;
	CString m_szSeri;
	CString m_szOrderNo;
	CString szOrderNo;
	CString szDept;
	CString szAssetNo;
	CString szName;
	CString szType;
	CString szWarehouse;
	long nIdx;
	double m_nUnitPrice;
	double m_nQuantity;
	double nQty;
	double m_nMoney;
	double nQtyStock;
	CString m_szTransactionID;
	CString m_szTranLineID;
	CString m_szImpStorage;
	CString m_szModel;
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	void			OnItemNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemNameSelendok(); 
	//void			OnItemNameSetfocus(); 
	void			OnItemNameKillfocus(); 
	long			OnItemNameLoadData(); 
	//void			OnItemNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnMoneyChange(); 
	//void			OnMoneySetfocus(); 
	//void			OnMoneyKillfocus(); 
	int			OnMoneyCheckValue(); 
	//void			OnUseDateChange(); 
	//void			OnUseDateSetfocus(); 
	void			OnUseDateKillfocus(); 
	int			OnUseDateCheckValue(); 
	void			OnSaveItemSelect();
	void		CheckType();
	CFAMAllocateToDeptLine();
	~CFAMAllocateToDeptLine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAllocateToDeptLine(); 
	int OnEditFAMAllocateToDeptLine(); 
	int OnDeleteFAMAllocateToDeptLine(); 
	int OnSaveFAMAllocateToDeptLine(); 
	int OnCancelFAMAllocateToDeptLine(); 
	int OnFAMAllocateToDeptLineListLoadData();
};
#endif
