#ifndef STORAGEADJUSTMENTDIALOG_H
#define STORAGEADJUSTMENTDIALOG_H

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
class CStorageAdjustmentDialog : public CGuiDialog{
protected:
public:
	long	m_nID;
	CString	m_szOrderNo;
	CString	m_szDescription;
	CString	m_szStatus;

	CGuiGroupBox	m_wndInventoryInformation;
	CGuiGroupBox	m_wndInventoryItems;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndInventoryDateLabel;
	CGuiDateTimeCtrl	m_wndInventoryDate;
	CGuiButton		m_wndLoadData;
	CGuiListCtrlEx	m_wndList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndAdjustment;
	CGuiButton		m_wndPrintStockExport;
	CGuiButton		m_wndPrintStockImport;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndGetLastInventory;

	CString	m_szStorageKey;
	CString	m_szInventoryDate;
	CString	m_szName;
	BOOL	m_bCheckLastInventory;

	CDbfMap	m_m_inventoryTbl;
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	//void			OnInventoryDateChange(); 
	//void			OnInventoryDateSetfocus(); 
	//void			OnInventoryDateKillfocus(); 
	int			OnInventoryDateCheckValue(); 
	void			OnLoadDataSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 

	void			OnAdjQuantityChange(); 
	//void			OnAdjQuantitySetfocus(); 
	//void			OnAdjQuantityKillfocus(); 
	int			OnAdjQuantityCheckValue(); 
	
	int			OnCheckLastInventory(); 

	void			OnAdjustmentSelect(); 
	void			OnPrintSelect(); 
	void			OnPrintStockExportSelect(); 
	void			OnPrintStockImportSelect(); 
	void			OnCloseSelect(); 
	CStorageAdjustmentDialog(CWnd *pParent, int nMode);
	~CStorageAdjustmentDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageAdjustmentDialog(); 
	int OnEditStorageAdjustmentDialog(); 
	int OnDeleteStorageAdjustmentDialog(); 
	int OnSaveStorageAdjustmentDialog(); 
	int OnCancelStorageAdjustmentDialog(); 
	int OnStorageAdjustmentDialogListLoadData(); 
	void AdjustmentQty();
	CString	GetOrderStatus();
	BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
