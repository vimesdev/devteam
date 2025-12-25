#ifndef STORAGEINVENTORYCONTROLDIALOG_H
#define STORAGEINVENTORYCONTROLDIALOG_H

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
class CStorageInventoryControlDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInventoryInformation;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndInventoyDateLabel;
	CGuiDateCtrl	m_wndInventoyDate;
	CGuiLabel		m_wndIncreaseAccountingLabel;
	CGuiComboBox	m_wndIncreaseAccounting;
	CGuiLabel		m_wndDecreaseAccountingLabel;
	CGuiComboBox	m_wndDecreaseAccounting;
	CGuiCheckBox	m_wndIncludingValues;
	CGuiCheckBox	m_wndAllInStorage;
	CGuiButton		m_wndLoadData;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndExpDateLabel;
	CGuiDateCtrl	m_wndExpDate;
	CGuiLabel		m_wndManufactureLabel;
	CGuiTextCtrl	m_wndManufacture;
	CGuiButton		m_wndAdjustment;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szStorageKey;
	CString	m_szInventoyDate;
	CString	m_szIncreaseAccountingKey;
	CString	m_szDecreaseAccountingKey;
	BOOL	m_bIncludingValues;
	BOOL	m_bAllInStorage;
	CString	m_szLotNo;
	CString	m_szExpDate;
	CString	m_szManufacture;
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	//void			OnInventoyDateChange(); 
	//void			OnInventoyDateSetfocus(); 
	//void			OnInventoyDateKillfocus(); 
	int			OnInventoyDateCheckValue(); 
	void			OnIncreaseAccountingSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIncreaseAccountingSelendok(); 
	//void			OnIncreaseAccountingSetfocus(); 
	//void			OnIncreaseAccountingKillfocus(); 
	long			OnIncreaseAccountingLoadData(); 
	//void			OnIncreaseAccountingAddNew(); 
	void			OnDecreaseAccountingSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDecreaseAccountingSelendok(); 
	//void			OnDecreaseAccountingSetfocus(); 
	//void			OnDecreaseAccountingKillfocus(); 
	long			OnDecreaseAccountingLoadData(); 
	//void			OnDecreaseAccountingAddNew(); 
	void			OnIncludingValuesSelect(); 
	void			OnAllInStorageSelect(); 
	void			OnLoadDataSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnExpDateChange(); 
	//void			OnExpDateSetfocus(); 
	//void			OnExpDateKillfocus(); 
	int			OnExpDateCheckValue(); 
	//void			OnManufactureChange(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	int			OnManufactureCheckValue(); 
	void			OnAdjustmentSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CStorageInventoryControlDialog(CWnd *pParent);
	~CStorageInventoryControlDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageInventoryControlDialog(); 
	int OnEditStorageInventoryControlDialog(); 
	int OnDeleteStorageInventoryControlDialog(); 
	int OnSaveStorageInventoryControlDialog(); 
	int OnCancelStorageInventoryControlDialog(); 
	int OnStorageInventoryControlDialogListLoadData(); 
};
#endif
