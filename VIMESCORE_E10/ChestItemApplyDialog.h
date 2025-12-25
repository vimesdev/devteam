#ifndef CHESTITEMAPPLYDIALOG_H
#define CHESTITEMAPPLYDIALOG_H

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
class CChestItemApplyDialog : public CGuiDialog{
protected:
	int m_nMode;
	int m_nStorageID;
	int m_nLocationID;
	long m_nProductID;
public:
	CGuiGroupBox	m_wndChestItem;
	CGuiLabel		m_wndProductTypeLabel;
	CGuiComboBox	m_wndProductType;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndFind;
	CString	m_szProductTypeKey;
	CString	m_szSearch;
	CDbfMap	m_product_locationTbl;
	void			OnProductTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductTypeSelendok(); 
	//void			OnProductTypeSetfocus(); 
	//void			OnProductTypeKillfocus(); 
	long			OnProductTypeLoadData(); 
	//void			OnProductTypeAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListCheckAll();
	int			OnListUncheckAll();
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	void			OnFindSelect(); 
	CChestItemApplyDialog(CWnd *pParent, int nMode, int nStorageID, int nLocationID);
	~CChestItemApplyDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddChestItemApplyDialog(); 
	int OnEditChestItemApplyDialog(); 
	int OnDeleteChestItemApplyDialog(); 
	int OnSaveChestItemApplyDialog(); 
	int OnCancelChestItemApplyDialog(); 
	int OnChestItemApplyDialogListLoadData(); 
};
#endif
