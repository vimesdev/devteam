#ifndef PURCHASEORDERLINESEX_H
#define PURCHASEORDERLINESEX_H

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
#include "GridListCtrl.h"
#include "PurchaseOrderLineInputEx.h"

class CPurchaseOrderLinesEx : public CGuiView
{
protected:
	CString	SetNumberDelim(CString szNumber);
	CString	m_szStorageCategory;
	long	m_nProductItemID;
	int		m_nStorageID;
public:
	long	m_nOrderID;
	long	m_nOrderLine;
	CWnd*	m_pWndOrder;
	

	CGuiListCtrl	m_wndList;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem();
	int			OnAutoCreateItem();
	int			OnAutoCreateItem2();
	int			OnAutoCreateItem3();
	int			OnAutoCreateItem_V2();
	CPurchaseOrderLinesEx();
	~CPurchaseOrderLinesEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPurchaseOrderLines(); 
	int OnEditPurchaseOrderLines(); 
	int OnDeletePurchaseOrderLines(); 
	int OnSavePurchaseOrderLines(); 
	int OnCancelPurchaseOrderLines(); 
	int OnPurchaseOrderLinesListLoadData(); 
	void	Refresh(long nOrderID);
	CString GetOrderStatus();
	void	SetNonStock(bool bNonStock);
	int	OnRollback();
	int OnSetDepartmentDelivery();
	int	OnUnitPriceCheckValue();
	void	TrackItem();
	void	OnPostToDuocQG();
	BOOL PreTranslateMessage(MSG* pMsg);
	BOOL CheckPermission(CString szPermID);
	void ShowModal(int nMode);
};
#endif
