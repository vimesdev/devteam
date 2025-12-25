#ifndef POAUTOCREATEITEMDIALOG_HC_H
#define POAUTOCREATEITEMDIALOG_HC_H

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
typedef struct tagItemInfo
{
	CString szItemID;
	CString szIdx;
	CString szName;
	CString	szPrice;
	CString	szOrderQty;
} ITEM_INFO;
class AFX_EXT_CLASS CPOAutoCreateItemDialog_HC : public CGuiDialog{
protected:
	long	m_nOrderID;
	CString	m_szStorageID;
	CString	m_szSupplierKey;
	int		MoveItem(CGuiListCtrl* pFromList, CGuiListCtrl* pToList, int nIdx);
public:
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndItemNameLabel;
	CGuiGroupBox	m_wndSelectedItems;
	CGuiTextCtrl	m_wndItemName;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndMaterialList;
	CGuiListCtrl	m_wndSelectedList;
	CGuiButton		m_wndFind;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szItemName;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnItemNameChange(); 
	//void			OnItemNameSetfocus(); 
	//void			OnItemNameKillfocus(); 
	int			OnItemNameCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	void			OnFindSelect();
	long			OnMaterialListLoadData(); 
	void			OnMaterialListSelectChange(int nOldItem, int nNewItem); 
	void			OnMaterialListDblClick(); 
	int			OnMaterialListDeleteItem(); 
	int			OnMaterialListSelectAll();
	long			OnSelectedListLoadData(); 
	void			OnSelectedListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectedListDblClick(); 
	int			OnSelectedListDeleteItem();
	int			OnSelectedListDeselectAll();
	CPOAutoCreateItemDialog_HC(CWnd *pParent, long nOrderID, CString szStorageID, CString szSupplierKey);
	~CPOAutoCreateItemDialog_HC();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPOAutoCreateItemDialog_HC(); 
	int OnEditPOAutoCreateItemDialog_HC(); 
	int OnDeletePOAutoCreateItemDialog_HC(); 
	int OnSavePOAutoCreateItemDialog_HC(); 
	int OnCancelPOAutoCreateItemDialog_HC(); 
	int OnPOAutoCreateItemDialog_HCListLoadData(); 
};
#endif
