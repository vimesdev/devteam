#ifndef CHMSMAPITEMDIALOG_H
#define CHMSMAPITEMDIALOG_H

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
class CHMSMapItemDialog : public CGuiDialog{
protected:
	CDb	m_db;
public:
	CGuiLabel		m_wndOldGroupLabel;
	CGuiComboBox	m_wndOldGroup;
	CGuiLabel		m_wndNewGroupLabel;
	CGuiComboBox	m_wndNewGroup;
	CGuiLabel		m_wndMapItemLabel;
	CGuiComboBox	m_wndMapItem;
	CGuiButton		m_wndMap;
	CGuiListCtrl	m_wndOldList;
	CGuiListCtrl	m_wndMapList;
	CString	m_szOldGroupKey;
	CString	m_szNewGroupKey;
	CString	m_szMapItemKey;
	void			OnOldGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOldGroupSelendok(); 
	//void			OnOldGroupSetfocus(); 
	//void			OnOldGroupKillfocus(); 
	long			OnOldGroupLoadData(); 
	void			OnOldGroupAddNew(); 
	void			OnNewGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNewGroupSelendok(); 
	//void			OnNewGroupSetfocus(); 
	//void			OnNewGroupKillfocus(); 
	long			OnNewGroupLoadData(); 
	void			OnNewGroupAddNew(); 
	void			OnMapItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMapItemSelendok(); 
	//void			OnMapItemSetfocus(); 
	//void			OnMapItemKillfocus(); 
	long			OnMapItemLoadData(); 
	void			OnMapItemAddNew(); 
	void			OnMapSelect(); 
	long			OnOldListLoadData(); 
	void			OnOldListSelectChange(int nOldItem, int nNewItem); 
	void			OnOldListDblClick(); 
	int			OnOldListDeleteItem(); 
	long			OnMapListLoadData(); 
	void			OnMapListSelectChange(int nOldItem, int nNewItem); 
	void			OnMapListDblClick(); 
	int			OnMapListDeleteItem(); 
	int			OnMapListDoubleItem();
	CHMSMapItemDialog(CWnd *pParent);
	~CHMSMapItemDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSMapItemDialog(); 
	int OnEditCHMSMapItemDialog(); 
	int OnDeleteCHMSMapItemDialog(); 
	int OnSaveCHMSMapItemDialog(); 
	int OnCancelCHMSMapItemDialog(); 
	int OnCHMSMapItemDialogListLoadData(); 
};
#endif
