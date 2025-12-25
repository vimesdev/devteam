#ifndef PRODUCTSYSCATEGORY_H
#define PRODUCTSYSCATEGORY_H

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
class CProductSysCategory : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndVimes;
	CGuiComboBox	m_wndNameVimes;
	CGuiButton		m_wndMap;
	CGuiListCtrl	m_wndMapList;
	CGuiLabel		m_wndExelLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndAutoMap;
	CGuiButton		m_wndClose;
	CString	m_szNameVimesKey;
	CString	m_szName;
	CString m_szTable;
	CString m_szFiled1;
	CString m_szFiled2;
	CString m_szUpdateFiled;
	CString m_szTableRef;
	CString m_szRefFiled_ID;
	CString m_szRefFiled_NAME;
	CString m_szRefFiled_NAME2;
	CString m_szGui_ID;
	int m_nSizeCol1;
	int m_nSizeCol2;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListCheckAll();
	int			OnListUnCheckAll();
	void			OnNameVimesSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameVimesSelendok(); 
	//void			OnNameVimesSetfocus(); 
	//void			OnNameVimesKillfocus(); 
	long			OnNameVimesLoadData(); 
	//void			OnNameVimesAddNew(); 
	void			OnMapSelect(); 
	long			OnMapListLoadData(); 
	void			OnMapListSelectChange(int nOldItem, int nNewItem); 
	void			OnMapListDblClick(); 
	int			OnMapListDeleteItem(); 
	int			OnMapListDeleteAllItem();
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnAutoMapSelect(); 
	void			OnCloseSelect(); 
	void			OnVimesSelect();
	CProductSysCategory(CWnd *pParent);
	~CProductSysCategory();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductSysCategory(); 
	int OnEditProductSysCategory(); 
	int OnDeleteProductSysCategory(); 
	int OnSaveProductSysCategory(); 
	int OnCancelProductSysCategory(); 
	int OnProductSysCategoryListLoadData(); 

};
#endif
