#ifndef HMSSERVICEPACKAGEFOODORDERDIALOG_H
#define HMSSERVICEPACKAGEFOODORDERDIALOG_H

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
class CHMSServicePackageFoodOrderDialog : public CGuiDialog{
protected:
public:
	CGuiComboBox	m_wndBreakfast;
	CGuiLabel		m_wndBreakfastLabel;
	CGuiLabel		m_wndLunchLabel;
	CGuiComboBox	m_wndLunch;
	CGuiLabel		m_wndDinnerLabel;
	CGuiComboBox	m_wndDinner;
	CGuiButton		m_wndMenu;
	CGuiListCtrl	m_wndOrderList;
	CGuiListCtrl	m_wndSelectedList;
	CGuiButton		m_wndMark;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndRemove;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szBreakfastKey;
	CString	m_szLunchKey;
	CString	m_szDinnerKey;
	void			OnBreakfastSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBreakfastSelendok(); 
	//void			OnBreakfastSetfocus(); 
	//void			OnBreakfastKillfocus(); 
	long			OnBreakfastLoadData(); 
	//void			OnBreakfastAddNew(); 
	void			OnLunchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLunchSelendok(); 
	//void			OnLunchSetfocus(); 
	//void			OnLunchKillfocus(); 
	long			OnLunchLoadData(); 
	//void			OnLunchAddNew(); 
	void			OnDinnerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDinnerSelendok(); 
	//void			OnDinnerSetfocus(); 
	//void			OnDinnerKillfocus(); 
	long			OnDinnerLoadData(); 
	//void			OnDinnerAddNew(); 
	void			OnMenuSelect(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	long			OnSelectedListLoadData(); 
	void			OnSelectedListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectedListDblClick(); 
	int			OnSelectedListDeleteItem(); 
	void			OnMarkSelect(); 
	void			OnUnMarkSelect(); 
	void			OnAddSelect(); 
	void			OnRemoveSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSServicePackageFoodOrderDialog(CWnd *pParent);
	~CHMSServicePackageFoodOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSServicePackageFoodOrderDialog(); 
	int OnEditHMSServicePackageFoodOrderDialog(); 
	int OnDeleteHMSServicePackageFoodOrderDialog(); 
	int OnSaveHMSServicePackageFoodOrderDialog(); 
	int OnCancelHMSServicePackageFoodOrderDialog(); 
	int OnHMSServicePackageFoodOrderDialogListLoadData(); 
};
#endif
