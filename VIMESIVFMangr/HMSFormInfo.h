#ifndef HMSFORMINFO_H
#define HMSFORMINFO_H

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
class CHMSFormInfo : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndFormInfo;
	CGuiLabel		m_wndFieldLabel;
	CGuiTextCtrl	m_wndField;
	CGuiLabel		m_wndDataLabel;
	CGuiComboBox	m_wndData;
	CGuiLabel		m_wndFormNameLabel;
	CGuiTextCtrl	m_wndFormName;
	CGuiLabel		m_wndFormListLabel;
	CGuiComboBox	m_wndFormList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiListCtrl	m_wndList;
	CString	m_szField;
	CString	m_szDataKey;
	CString	m_szFormName;
	CString	m_szFormListKey;
	//void			OnFieldChange(); 
	//void			OnFieldSetfocus(); 
	//void			OnFieldKillfocus(); 
	int			OnFieldCheckValue(); 
	void			OnDataSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDataSelendok(); 
	//void			OnDataSetfocus(); 
	//void			OnDataKillfocus(); 
	long			OnDataLoadData(); 
	//void			OnDataAddNew(); 
	//void			OnFormNameChange(); 
	//void			OnFormNameSetfocus(); 
	//void			OnFormNameKillfocus(); 
	int			OnFormNameCheckValue(); 
	void			OnFormListSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFormListSelendok(); 
	//void			OnFormListSetfocus(); 
	//void			OnFormListKillfocus(); 
	long			OnFormListLoadData(); 
	//void			OnFormListAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSFormInfo(CWnd *pParent);
	~CHMSFormInfo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFormInfo(); 
	int OnEditHMSFormInfo(); 
	int OnDeleteHMSFormInfo(); 
	int OnSaveHMSFormInfo(); 
	int OnCancelHMSFormInfo(); 
	int OnHMSFormInfoListLoadData();
	CString ToConcatColumns();
};
#endif
