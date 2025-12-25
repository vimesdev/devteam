#ifndef PMINTERACTIONSETUPDLG_H
#define PMINTERACTIONSETUPDLG_H

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
class CPMInteractionSetupDlg : public CGuiDialog{
protected:
	long	m_nId;
public:
	CGuiLabel		m_wndClass1Label;
	CGuiComboBox	m_wndClass1;
	CGuiLabel		m_wndClass2Label;
	CGuiComboBox	m_wndClass2;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	//CGuiListCtrl	m_wndList;
	CGridListView	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndSearchValueLabel;
	CGuiTextCtrl	m_wndSearchValue;
	CGuiButton		m_wndSearch;
	CString	m_szClass1Key;
	CString	m_szClass2Key;
	CString	m_szTypeKey;
	CString	m_szDescription;
	CString	m_szSearchValue;
	void			OnClass1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClass1Selendok(); 
	//void			OnClass1Setfocus(); 
	//void			OnClass1Killfocus(); 
	long			OnClass1LoadData(); 
	//void			OnClass1AddNew(); 
	void			OnClass2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClass2Selendok(); 
	//void			OnClass2Setfocus(); 
	//void			OnClass2Killfocus(); 
	long			OnClass2LoadData(); 
	//void			OnClass2AddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	//void			OnSearchValueChange(); 
	//void			OnSearchValueSetfocus(); 
	//void			OnSearchValueKillfocus(); 
	int			OnSearchValueCheckValue(); 
	void			OnSearchSelect(); 
	CPMInteractionSetupDlg(CWnd *pParent);
	~CPMInteractionSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMInteractionSetupDlg(); 
	int OnEditPMInteractionSetupDlg(); 
	int OnDeletePMInteractionSetupDlg(); 
	int OnSavePMInteractionSetupDlg(); 
	int OnCancelPMInteractionSetupDlg(); 
	int OnPMInteractionSetupDlgListLoadData(); 
};
#endif
