#ifndef HMSSURGERYMATERIALDRUGLISTDIALOG_H
#define HMSSURGERYMATERIALDRUGLISTDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSSurgeryMaterialDrugListDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndMaterialDrug;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiListCtrl	m_wndDrugList;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndRemove;
	CGuiListCtrl	m_wndApplyList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szStockKey;
	CString	m_szSearchName;
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnAddSelect(); 
	void			OnRemoveSelect(); 
	long			OnApplyListLoadData(); 
	void			OnApplyListSelectChange(int nOldItem, int nNewItem); 
	void			OnApplyListDblClick(); 
	int			OnApplyListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSSurgeryMaterialDrugListDialog(CWnd *pParent);
	~CHMSSurgeryMaterialDrugListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryMaterialDrugListDialog(); 
	int OnEditHMSSurgeryMaterialDrugListDialog(); 
	int OnDeleteHMSSurgeryMaterialDrugListDialog(); 
	int OnSaveHMSSurgeryMaterialDrugListDialog(); 
	int OnCancelHMSSurgeryMaterialDrugListDialog(); 
	int OnHMSSurgeryMaterialDrugListDialogListLoadData(); 
};
#endif
