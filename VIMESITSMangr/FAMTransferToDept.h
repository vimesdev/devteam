#ifndef FAMTRANSFERTODEPT_H
#define FAMTRANSFERTODEPT_H

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
#include "GuiView.h"
#include "DbField.h"
class CFAMTransferToDept : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndOrderList;
	CGuiLabel		m_wndFromDeptLabel;
	CGuiComboBox	m_wndFromDept;
	CGuiLabel		m_wndToDepartmentLabel;
	CGuiComboBox	m_wndToDepartment;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndTransferNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndRefresh;
	CGuiListCtrl	m_wndTransferToDeptList;
	CGuiButton		m_wndView;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szFromDeptKey;
	CString	m_szToDepartmentKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szOrderNo;
	CString szTransferID;
	CString szFromDept;
	CString szToDept;
	CString szStatus;
	CString m_szUser;
	CString m_szTransactionID;
	void			OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromDeptSelendok(); 
	//void			OnFromDeptSetfocus(); 
	//void			OnFromDeptKillfocus(); 
	long			OnFromDeptLoadData(); 
	//void			OnFromDeptAddNew(); 
	void			OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToDepartmentSelendok(); 
	//void			OnToDepartmentSetfocus(); 
	//void			OnToDepartmentKillfocus(); 
	long			OnToDepartmentLoadData(); 
	//void			OnToDepartmentAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	void			OnRefreshSelect(); 
	long			OnTransferToDeptListLoadData(); 
	void			OnTransferToDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnTransferToDeptListDblClick(); 
	int			OnTransferToDeptListDeleteItem(); 
	void			OnViewSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	CFAMTransferToDept();
	~CFAMTransferToDept();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMTransferToDept(); 
	int OnEditFAMTransferToDept(); 
	int OnDeleteFAMTransferToDept(); 
	int OnSaveFAMTransferToDept(); 
	int OnCancelFAMTransferToDept(); 
	int OnFAMTransferToDeptListLoadData(); 
};
#endif
