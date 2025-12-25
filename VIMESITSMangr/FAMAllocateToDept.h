#ifndef FAMALLOCATETODEPT_H
#define FAMALLOCATETODEPT_H

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
#include "FAMAllocateToDeptLine.h"
class CFAMAllocateToDept : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndFromWarehouseLabel;
	CGuiComboBox	m_wndWarehouse;
	CGuiLabel		m_wndToDepartmentLabel;
	CGuiComboBox	m_wndToDepartment;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndRefresh;
	CGuiGroupBox	m_wndOrderList;
	CGuiListCtrl	m_wndAllocateToDeptList;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndIsApproved;
	CGuiButton		m_wndView;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szWarehouseKey;
	CString	m_szToDepartmentKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szOrderNo;
	CString szOrderNo;
	CString szDept;
	CString m_szWarehouse;
	int	m_nAll;
	int	m_nOpening;
	int	m_nIsApproved;
	CString szStatus;
	CString m_szTransactionID;
	CString m_szUser;
	CFAMAllocateToDeptLine m_wndATDL;
	void			OnWarehouseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWarehouseSelendok(); 
	//void			OnWarehouseSetfocus(); 
	//void			OnWarehouseKillfocus(); 
	long			OnWarehouseLoadData(); 
	//void			OnWarehouseAddNew(); 
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
	long			OnAllocateToDeptListLoadData(); 
	void			OnAllocateToDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnAllocateToDeptListDblClick(); 
	int			OnAllocateToDeptListDeleteItem(); 
	void			OnAllSelect(); 
	void			OnOpeningSelect(); 
	void			OnIsApprovedSelect(); 
	void			OnViewSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect();
	CFAMAllocateToDept();
	~CFAMAllocateToDept();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAllocateToDept(); 
	int OnEditFAMAllocateToDept(); 
	int OnDeleteFAMAllocateToDept(); 
	int OnSaveFAMAllocateToDept(); 
	int OnCancelFAMAllocateToDept(); 
	int OnFAMAllocateToDeptListLoadData(); 
};
#endif
