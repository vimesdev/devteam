#ifndef UPDATEPTTT_H
#define UPDATEPTTT_H

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
class CUPDATEPTTT : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndUpdatePTTT;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiLabel		m_wndTangLabel;
	CGuiComboBox	m_wndTang;
	CGuiLabel		m_wndFeeCategoryLabel;
	CGuiComboBox	m_wndFeeCategory;
	CGuiCheckBox	m_wndChecked;
	CGuiCheckBox	m_wndChecked2;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndUpdate;

	CString	m_szGroupKey;
	CString	m_szSearch;
	CString	m_szTangKey;
	CString	m_szFeeCategoryKey;
	BOOL	m_bChecked;
	BOOL	m_bChecked2;
	CString m_szFeeID;
	int		m_nCurItem;
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnTangSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTangSelendok(); 
	//void			OnTangSetfocus(); 
	//void			OnTangKillfocus(); 
	long			OnTangLoadData(); 
	//void			OnTangAddNew(); 
	void			OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeCategorySelendok(); 
	//void			OnFeeCategorySetfocus(); 
	//void			OnFeeCategoryKillfocus(); 
	long			OnFeeCategoryLoadData(); 
	//void			OnFeeCategoryAddNew(); 
	void			OnCheckedSelect(); 
	void			OnChecked2Select(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnUpdateSelect(); 
	CUPDATEPTTT(CWnd *pParent);
	~CUPDATEPTTT();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddUPDATEPTTT(); 
	int OnEditUPDATEPTTT(); 
	int OnDeleteUPDATEPTTT(); 
	int OnSaveUPDATEPTTT(); 
	int OnCancelUPDATEPTTT(); 
	int OnUPDATEPTTTListLoadData(); 
};
#endif
