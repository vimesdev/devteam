#ifndef HMSADVICESETUP_H
#define HMSADVICESETUP_H

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
class CHMSAdviceSetup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupName;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiLabel		m_wndAdviceLabel;
	CGuiTextCtrl	m_wndAdvice;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;

	CGuiLabel		m_wndSearchTypeLabel;
	CGuiComboBox	m_wndSearchType;

	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;

	long	m_nID;
	CString	m_szDesc;
	CString	m_szAdvice;
	CString	m_szSearch;
	CString	m_szTypeKey;
	CString m_szTypeSearchKey;

	CDbfMap	m_hms_adviceTbl;
	void			OnSearchTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchTypeSelendok(); 
	//void			OnSearchTypeSetfocus(); 
	//void			OnSearchTypeKillfocus(); 
	long			OnSearchTypeLoadData(); 
	//void			OnSearchTypeAddNew(); 

	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 

	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnDescChange(); 
	//void			OnDescSetfocus(); 
	//void			OnDescKillfocus(); 
	int			OnDescCheckValue(); 
	//void			OnAdviceChange(); 
	//void			OnAdviceSetfocus(); 
	//void			OnAdviceKillfocus(); 
	int			OnAdviceCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	CHMSAdviceSetup(CWnd *pParent);
	~CHMSAdviceSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdviceSetup(); 
	int OnEditHMSAdviceSetup(); 
	int OnDeleteHMSAdviceSetup(); 
	int OnSaveHMSAdviceSetup(); 
	int OnCancelHMSAdviceSetup(); 
	int OnHMSAdviceSetupListLoadData(); 
};
#endif
