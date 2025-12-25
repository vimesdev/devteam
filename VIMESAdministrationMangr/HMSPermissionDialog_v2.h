#ifndef HMSPERMISSIONDIALOG_V2_H
#define HMSPERMISSIONDIALOG_V2_H

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
class CHMSPermissionDialog_v2 : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiGroupBox	m_wndPermissionInformation;
	CString	m_szUserID;
	CGuiLabel		m_wndExaminationDeptLabel;
	CGuiTextCtrl	m_wndExaminationDept;
	CGuiLabel		m_wndExaminationRoomLabel;
	CGuiTextCtrl	m_wndExaminationRoom;
	CGuiButton		m_wndRoomSelect;
	CGuiButton		m_wndExaminationDeptSelect;

	CGuiLabel		m_wndExaminationRoom2Label;
	CGuiTextCtrl	m_wndExaminationRoom2;
	CGuiButton		m_wndRoom2Select;

	CGuiLabel		m_wndObjectsLabel;
	CGuiTextCtrl	m_wndObjects;
	CGuiButton		m_wndObjectSelect;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;

	CString	m_szExaminationDept;
	CString	m_szExaminationDeptX;
	CString	m_szExaminationRoom;
	CString	m_szObjects;
	CString	m_szExaminationRoom2;
	CDbfMap	m_sys_userTbl;

	//void			OnExaminationDeptChange(); 
	//void			OnExaminationDeptSetfocus(); 
	//void			OnExaminationDeptKillfocus(); 
	int			OnExaminationDeptCheckValue(); 
	//void			OnExaminationRoomChange(); 
	//void			OnExaminationRoomSetfocus(); 
	//void			OnExaminationRoomKillfocus(); 
	int			OnExaminationRoomCheckValue(); 
	void			OnRoomSelectSelect(); 

	int			OnExaminationRoom2CheckValue(); 
	void			OnRoom2SelectSelect(); 

	//void			OnObjectsChange(); 
	//void			OnObjectsSetfocus(); 
	//void			OnObjectsKillfocus(); 
	int			OnObjectsCheckValue(); 
	void			OnObjectSelectSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	long		OnListLoadData();
	
	void			OnExaminationDeptSelect(); 

	CHMSPermissionDialog_v2(CWnd *pParent);
	~CHMSPermissionDialog_v2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPermissionDialog(); 
	int OnEditHMSPermissionDialog(); 
	int OnDeleteHMSPermissionDialog(); 
	int OnSaveHMSPermissionDialog(); 
	int OnCancelHMSPermissionDialog(); 
	int OnHMSPermissionDialogListLoadData(); 
};
#endif
