#ifndef HMSExpandSelectionDIALOG_H
#define HMSExpandSelectionDIALOG_H

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
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"

class CHMSExpandSelectionListDialog : public CGuiDialog 
{
protected:
public:
	typedef struct tagSelectionList{
		CString szID;
		CString	szName;
	}SELITEM;
	CArray<SELITEM, SELITEM&> m_arraySelection;
	CString		m_szSQL;
	CGuiGroupBox	m_wndSelectionList;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndSelectList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndFind;
	long			OnListLoadData();
	long			OnListLoadDataEx();
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListSelectAllItem(); 
	int			OnListUnSelectAllItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect();
	void			OnFindSelect();
	void            OnSearchChange();
	CString	m_szSearch;
	CHMSExpandSelectionListDialog(CWnd *pParent);
	~CHMSExpandSelectionListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSelectionDialog(); 
	int OnEditHMSSelectionDialog(); 
	int OnDeleteHMSSelectionDialog(); 
	int OnSaveHMSSelectionDialog(); 
	int OnCancelHMSSelectionDialog(); 
	int OnHMSSelectionDialogListLoadData();
	int			OnSearchCheckValue();
	SELITEM GetSelectionAt(int nIndex);
	int GetSelectionCount();
	CString GetSelectionName(int nIndex);
	
	long			OnSelectListLoadData(); 
	void			OnSelectListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectListDblClick(); 
	int			OnSelectListDeleteItem(); 

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};
#endif