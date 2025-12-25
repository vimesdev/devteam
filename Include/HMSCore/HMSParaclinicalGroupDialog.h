#ifndef HMSPARACLINICALGROUPDIALOG_H
#define HMSPARACLINICALGROUPDIALOG_H

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
#include "GridListView.h"

typedef struct tagGRPPARAITEM{
	CString szID;
	CString szQty;
	CString szServPrice;
}GRPPARAITEM;

class AFX_EXT_CLASS CHMSParaclinicalGroupDialog : public CGuiDialog{
protected:
	CArray<CString, CString&> m_arGroup;
	CArray<CString, CString&> m_arItems;

	bool	m_bIsC14;
	bool	m_bTestOnly;
	CString	m_szSex;
public:
	bool	m_bHasApply;
	
	CArray<GRPPARAITEM, GRPPARAITEM&> m_selItems;
	typedef struct tagSelectionList{
	CString szID;
	CString	szName;
	}SELITEM;
	CArray<SELITEM, SELITEM&> m_arraySelection;
	CString		m_szSQL;
	CGuiGroupBox	m_wndSelectionList;
	CGuiGroupBox	m_wndGroupDetail;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGridListView	m_wndListSelect;
    CGuiCheckBox	m_wndAutoSign;
	CGuiCheckBox	m_wndAutoPrint;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;

	BOOL			m_bAutoPrint;
    BOOL			m_bAutoSign;
	CString			m_szOrderDate;

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	long			OnListSelectLoadData(); 
	void			OnListSelectSelectChange(int nOldItem, int nNewItem); 
	void			OnListSelectDblClick(); 
	int			OnListSelectDeleteItem(); 

	CHMSParaclinicalGroupDialog(CWnd *pParent);
	~CHMSParaclinicalGroupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalGroupDialog(); 
	int OnEditHMSParaclinicalGroupDialog(); 
	int OnDeleteHMSParaclinicalGroupDialog(); 
	int OnSaveHMSParaclinicalGroupDialog(); 
	int OnCancelHMSParaclinicalGroupDialog(); 
	int OnHMSParaclinicalGroupDialogListLoadData();
	SELITEM GetSelectionAt(int nIndex);
	int GetSelectionCount();
	CString GetSelectionName(int nIndex); 
	
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	int	OnApplyCheck();
	int ShowFeeWarning(CString szFee_id);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	int CheckDeposit(long nDocNo, bool& bDepositRequest);
};
#endif
