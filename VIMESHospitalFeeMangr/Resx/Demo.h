#ifndef DEMO_H
#define DEMO_H

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
class CDemo : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndUserIDLabel;
	CGuiTextCtrl	m_wndUserID;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndBookNoLabel;
	CGuiNumberCtrl	m_wndBookNo;
	CGuiLabel		m_wndDepartment;
	CGuiComboBox	m_wndComboBox;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szUserID;
	CString	m_szSerialNo;
	long	m_nBookNo;
	CString	m_szComboBoxKey;
	CDbfMap	m_hms_invfeectlTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnUserIDChange(); 
	//void			OnUserIDSetfocus(); 
	//void			OnUserIDKillfocus(); 
	int			OnUserIDCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnBookNoChange(); 
	//void			OnBookNoSetfocus(); 
	//void			OnBookNoKillfocus(); 
	int			OnBookNoCheckValue(); 
	void			OnComboBoxSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnComboBoxSelendok(); 
	//void			OnComboBoxSetfocus(); 
	//void			OnComboBoxKillfocus(); 
	long			OnComboBoxLoadData(); 
	void			OnComboBoxAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CDemo(CWnd *pParent);
	~CDemo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddDemo(); 
	int OnEditDemo(); 
	int OnDeleteDemo(); 
	int OnSaveDemo(); 
	int OnCancelDemo(); 
	int OnDemoListLoadData(); 
};
#endif
