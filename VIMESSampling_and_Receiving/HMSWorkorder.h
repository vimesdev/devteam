#ifndef HMSWORKORDER_H
#define HMSWORKORDER_H

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
class CHMSWorkorder : public CGuiView{
protected:
	long	m_nOrderID;
	CString m_szGroupID;

public:
	CGuiGroupBox	m_wndWorkOrderInformation;
	CGuiLabel		m_wndTestDeviceLabel;
	CGuiComboBox	m_wndTestDevice;
	CGuiLabel		m_wndSIDLabel;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiTextCtrl	m_wndSID;
	CGuiButton		m_wndAddWorkorder;
	CGuiLabel		m_wndYOBLabel;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiNumberCtrl	m_wndYOB;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndRoomLabel;
	CGuiNumberCtrl	m_wndRoom;
	CGuiListCtrl	m_wndTestList;
	CGuiListCtrl	m_wndWorkorderList;
	CString	m_szTestDeviceKey;
	long	m_nDocumentNo;
	CString	m_szSID;
	CString	m_szPatientName;
	long	m_nYOB;
	CString	m_szDepartment;
	long	m_nRoom;
	void			OnTestDeviceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestDeviceSelendok(); 
	//void			OnTestDeviceSetfocus(); 
	//void			OnTestDeviceKillfocus(); 
	long			OnTestDeviceLoadData(); 
	void			OnTestDeviceAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnSIDChange(); 
	//void			OnSIDSetfocus(); 
	//void			OnSIDKillfocus(); 
	int			OnSIDCheckValue(); 
	void			OnAddWorkorderSelect(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYOBChange(); 
	//void			OnYOBSetfocus(); 
	//void			OnYOBKillfocus(); 
	int			OnYOBCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnRoomChange(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	int			OnRoomCheckValue(); 
	long			OnTestListLoadData(); 
	void			OnTestListSelectChange(int nOldItem, int nNewItem); 
	void			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	long			OnWorkorderListLoadData(); 
	void			OnWorkorderListSelectChange(int nOldItem, int nNewItem); 
	void			OnWorkorderListDblClick(); 
	int			OnWorkorderListDeleteItem(); 
	CHMSWorkorder();
	~CHMSWorkorder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSWorkorder(); 
	int OnEditHMSWorkorder(); 
	int OnDeleteHMSWorkorder(); 
	int OnSaveHMSWorkorder(); 
	int OnCancelHMSWorkorder(); 
	int OnHMSWorkorderListLoadData(); 
};
#endif
