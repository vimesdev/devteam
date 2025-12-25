#ifndef HMSFEEPRICESCHEMALINESETUPV3DIALOG_H
#define HMSFEEPRICESCHEMALINESETUPV3DIALOG_H

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
class CHMSFeePriceSchemaLineSetupV3Dialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroup;
	CGuiGroupBox	m_wndGroup2;
	CGuiLabel		m_wndExpenseLabel;
	CGuiComboBox	m_wndExpense;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndFind;
	CGuiListCtrl	m_wndList2;
	CString	m_szExpenseKey;
	long	m_nQty;
	CString	m_szSearch;
	void			OnExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnExpenseSelendok(); 
	//void			OnExpenseSetfocus(); 
	//void			OnExpenseKillfocus(); 
	long			OnExpenseLoadData(); 
	//void			OnExpenseAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnFindSelect(); 
	long			OnList2LoadData(); 
	void			OnList2SelectChange(int nOldItem, int nNewItem); 
	void			OnList2DblClick(); 
	int			OnList2DeleteItem(); 
	CHMSFeePriceSchemaLineSetupV3Dialog(CWnd *pParent);
	~CHMSFeePriceSchemaLineSetupV3Dialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeePriceSchemaLineSetupV3Dialog(); 
	int OnEditHMSFeePriceSchemaLineSetupV3Dialog(); 
	int OnDeleteHMSFeePriceSchemaLineSetupV3Dialog(); 
	int OnSaveHMSFeePriceSchemaLineSetupV3Dialog(); 
	int OnCancelHMSFeePriceSchemaLineSetupV3Dialog(); 
	int OnHMSFeePriceSchemaLineSetupV3DialogListLoadData(); 
};
#endif
