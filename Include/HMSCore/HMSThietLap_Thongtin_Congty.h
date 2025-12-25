#ifndef HMSTHIETLAPTHONGTINCONGTY_H
#define HMSTHIETLAPTHONGTINCONGTY_H

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
class AFX_EXT_CLASS CHMSThietLap_Thongtin_Congty : public CGuiDialog
{
protected:	
public:
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndSearchByNameLabel;
	CGuiTextCtrl	m_wndSearchByName;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;	
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndPhanloailabel;
	CGuiComboBox	m_wndPhanloai;
	CString	m_szSearchByName;
	CString	m_szID;
	
	BOOL	m_bActive;
	long	m_nOrderId;
	CString	m_szName;
	CString m_szPhanloaiKey;
	CDbfMap M_COMPANY_LIST_Tbl;
	int m_nIndex;

	void			OnSearchByNameChange(); 
	//void			OnSearchByNameSetfocus(); 
	//void			OnSearchByNameKillfocus(); 
	int			OnSearchByNameCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	long			OnPhanloaiLoadData();
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	void			OnNameChange(); 
	void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue();
	
	void			OnActiveSelect(); 

	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSThietLap_Thongtin_Congty(CWnd *pParent,long nOrderId=0);
	~CHMSThietLap_Thongtin_Congty();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSThietLap_Thongtin_Congty(); 
	int OnEditHMSThietLap_Thongtin_Congty(); 
	int OnDeleteHMSThietLap_Thongtin_Congty(); 
	int OnSaveHMSThietLap_Thongtin_Congty(); 
	int OnCancelHMSThietLap_Thongtin_Congty(); 
	int OnHMSThietLap_Thongtin_CongtyListLoadData();

	void SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);
};
#endif
