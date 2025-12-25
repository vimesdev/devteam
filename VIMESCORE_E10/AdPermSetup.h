#ifndef ADPERMSETUP_H
#define ADPERMSETUP_H

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
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CAdPermSetup : public CGuiView{
protected:
	CString			m_szUserID;
public:
	CGuiGroupBox	m_wndUserInformation;
	CGuiGroupBox	m_wndStockInformation;
	CGuiGroupBox	m_wndDoctorInformation;
	CGuiListCtrl	m_wndStorageList;
	CGuiListCtrl	m_wndUserList;
	CGuiListCtrl	m_wndDeptList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	long			OnStorageListLoadData(); 
	void			OnStorageListSelectChange(int nOldItem, int nNewItem); 
	void			OnStorageListDblClick(); 
	int			OnStorageListDeleteItem(); 
	long			OnUserListLoadData(); 
	void			OnUserListSelectChange(int nOldItem, int nNewItem); 
	void			OnUserListDblClick(); 
	int			OnUserListDeleteItem(); 
	long			OnDeptListLoadData(); 
	void			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnDeptListDblClick(); 
	int			OnDeptListDeleteItem(); 
	int			OnListCheckItem();
	void OnResizeLayout();
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CAdPermSetup();
	~CAdPermSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdPermSetup(); 
	int OnEditAdPermSetup(); 
	int OnDeleteAdPermSetup(); 
	int OnSaveAdPermSetup(); 
	int OnCancelAdPermSetup(); 
	int OnAdPermSetupListLoadData(); 
};
#endif
