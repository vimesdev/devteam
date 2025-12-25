#ifndef PURCHASERETURNORDERSELECTDIALOG_H
#define PURCHASERETURNORDERSELECTDIALOG_H

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
class CPurchaseReturnOrderSelectDialog : public CGuiDialog{
protected:
public:
	CString			m_szBusinessPartnerID;
	long			m_nID;	//purchase_order_id;
	long			m_nLine;
	long			m_nOrderID; //purchase_order_id of supplier return.

	CGuiGroupBox	m_wndReturnItemLists;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiGroupBox	m_wndPurchaseOrderDetail;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiGroupBox	m_wndPurchaseOrders;
	CGuiListCtrl	m_wndPurchaseList;
	CGuiListCtrl	m_wndItemList;
	CGuiListCtrl	m_wndReturnList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndAddAll;
	CGuiButton		m_wndRemove;
	CGuiButton		m_wndRemoveAll;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szOrderNo;
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	long			OnPurchaseListLoadData(); 
	void			OnPurchaseListSelectChange(int nOldItem, int nNewItem); 
	void			OnPurchaseListDblClick(); 
	int			OnPurchaseListDeleteItem(); 
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	long			OnReturnListLoadData(); 
	void			OnReturnListSelectChange(int nOldItem, int nNewItem); 
	void			OnReturnListDblClick(); 
	int			OnReturnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnAddAllSelect(); 
	void			OnRemoveSelect(); 
	void			OnRemoveAllSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CPurchaseReturnOrderSelectDialog(CWnd *pParent);
	~CPurchaseReturnOrderSelectDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseReturnOrderSelectDialog(); 
	int OnEditPurchaseReturnOrderSelectDialog(); 
	int OnDeletePurchaseReturnOrderSelectDialog(); 
	int OnSavePurchaseReturnOrderSelectDialog(); 
	int OnCancelPurchaseReturnOrderSelectDialog(); 
	int OnPurchaseReturnOrderSelectDialogListLoadData(); 
};
#endif
