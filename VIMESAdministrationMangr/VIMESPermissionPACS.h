#ifndef VIMESPermissionPACS_H
#define VIMESPermissionPACS_H

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
class CVIMESPermissionPACS : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupBoxListPermission;
	CGuiListCtrl	m_wndList;
	CGuiRadioButton	m_wndPACS;
	CGuiRadioButton	m_wndLIMS;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndCancel;
	CGuiRadioButton	m_wndPACSLIMS;
	CGuiCheckBox	m_wndCheckAll;
	CDbfMap	m_sys_userpermTbl;

	int	m_nPACS;
	int	m_nLIMS;
	int	m_nPACSLIMS;
	CString	m_szUserID;
	
	BOOL	m_bCheckAll;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnPACSSelect(); 
	void			OnLIMSSelect(); 
	void			OnApplySelect(); 
	void			OnCancelSelect(); 
	void			OnPACSLIMSSelect(); 
	void			OnCheckAllSelect(); 
	CVIMESPermissionPACS(CWnd *pParent);
	~CVIMESPermissionPACS();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESPermissionPACS(); 
	int OnEditVIMESPermissionPACS(); 
	int OnDeleteVIMESPermissionPACS(); 
	int OnSaveVIMESPermissionPACS(); 
	int OnCancelVIMESPermissionPACS(); 
	int OnVIMESPermissionPACSListLoadData(); 
};
#endif
