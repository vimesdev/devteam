#ifndef HMSADDITIONALFEEDIALOG_H
#define HMSADDITIONALFEEDIALOG_H

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
#include "GridListView.h"
//CLASS THEM PHI KHAC
#include "ListPane.h"
typedef struct FEEITEMDATA{
	CString szFeeID;
	double	nQty;
	double	nPrice;
}FEEITEMDATA;

class CHMSAdditionalFeeDialog : public CGuiDialog{
protected:
public:
	CArray<CString, CString&> m_arGroup;
	CArray<FEEITEMDATA, FEEITEMDATA&> m_arItems;
	
	CArray<int, int> m_arQuantity;

	CString	m_szGroup;


	CGuiGroupBox	m_wndFeeGroup;
	CGridListView	m_wndGroupList;	
	CGridListView	m_wndFeeList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGridListView	m_wndSelectList;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szSearch;
	CString	m_szNameKey;
	long	m_nQuantity;

	CDbfMap	m_hms_feeTbl;
	
	long			OnGroupListLoadData(); 
	void			OnGroupListSelectChange(int nOldItem, int nNewItem); 
	void			OnGroupListDblClick(); 
	int				OnGroupListDeleteItem();


	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	long			OnSelectListLoadData(); 
	void			OnSelectListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectListDblClick(); 
	int			OnSelectListDeleteItem(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnAddSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	void			OnSearchSelect(); 

	


	CHMSAdditionalFeeDialog(CWnd *pParent);
	~CHMSAdditionalFeeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdditionalFeeDialog(); 
	int OnEditHMSAdditionalFeeDialog(); 
	int OnDeleteHMSAdditionalFeeDialog(); 
	int OnSaveHMSAdditionalFeeDialog(); 
	int OnCancelHMSAdditionalFeeDialog(); 
	int OnHMSAdditionalFeeDialogListLoadData(); 
};
#endif
