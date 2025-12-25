#ifndef IVFSTORAGEVIEWDIALOG_H
#define IVFSTORAGEVIEWDIALOG_H

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
class CIVFStorageViewDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndThungTinhTrungLabel;
	CGuiComboBox	m_wndThungTinhTrung;
	CGuiLabel		m_wndThungNoanLabel;
	CGuiComboBox	m_wndThungNoan;
	CGuiLabel		m_wndThungPhoiLabel;
	CGuiComboBox	m_wndThungPhoi;
	CGuiListCtrl	m_wndTTList;
	CGuiListCtrl	m_wndNoanList;
	CGuiListCtrl	m_wndPhoiList;
	CGuiButton		m_wndClose;
	CString	m_szThungTinhTrungKey;
	CString	m_szThungNoanKey;
	CString	m_szThungPhoiKey;
	void			OnThungTinhTrungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungTinhTrungSelendok(); 
	//void			OnThungTinhTrungSetfocus(); 
	//void			OnThungTinhTrungKillfocus(); 
	long			OnThungTinhTrungLoadData(); 
	//void			OnThungTinhTrungAddNew(); 
	void			OnThungNoanSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungNoanSelendok(); 
	//void			OnThungNoanSetfocus(); 
	//void			OnThungNoanKillfocus(); 
	long			OnThungNoanLoadData(); 
	//void			OnThungNoanAddNew(); 
	void			OnThungPhoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungPhoiSelendok(); 
	//void			OnThungPhoiSetfocus(); 
	//void			OnThungPhoiKillfocus(); 
	long			OnThungPhoiLoadData(); 
	//void			OnThungPhoiAddNew(); 
	long			OnTTListLoadData(); 
	void			OnTTListSelectChange(int nOldItem, int nNewItem); 
	void			OnTTListDblClick(); 
	int			OnTTListDeleteItem(); 
	long			OnNoanListLoadData(); 
	void			OnNoanListSelectChange(int nOldItem, int nNewItem); 
	void			OnNoanListDblClick(); 
	int			OnNoanListDeleteItem(); 
	long			OnPhoiListLoadData(); 
	void			OnPhoiListSelectChange(int nOldItem, int nNewItem); 
	void			OnPhoiListDblClick(); 
	int			OnPhoiListDeleteItem(); 
	void			OnCloseSelect(); 
	CIVFStorageViewDialog(CWnd *pParent);
	~CIVFStorageViewDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFStorageViewDialog(); 
	int OnEditIVFStorageViewDialog(); 
	int OnDeleteIVFStorageViewDialog(); 
	int OnSaveIVFStorageViewDialog(); 
	int OnCancelIVFStorageViewDialog(); 
	int OnIVFStorageViewDialogListLoadData(); 
};
#endif
