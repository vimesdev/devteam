#ifndef LIMSTESTREPORTBYMACHINE_EX_H
#define LIMSTESTREPORTBYMACHINE_EX_H

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
class CLIMSTestReportByMachine_ex : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiGroupBox	m_wndMachineLabel;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiComboBox	m_wndPerformDept;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndNoSubItem;
	CGuiCheckBox	m_wndOutPatient;
	CGuiCheckBox	m_wndInPatient;
	CGuiCheckBox	m_wndAllHospitals;
	CGuiLabel		m_wndDeptLabel;
	CGuiGroupBox	m_wndDepartmentList;
	CGuiListCtrl	m_wndDepartment;
	CGuiListCtrl	m_wndTestGroup;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndObject;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szPerformDeptKey;
	CString m_szListKey;
	CString	m_szUserKey;
	CString m_szObjectKey;
	BOOL	m_bSubItem;
	BOOL	m_bOutPatient;
	BOOL	m_bInPatient;
	BOOL	m_bAllHospitals;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDeptSelendok(); 
	//void			OnPerformDeptSetfocus(); 
	//void			OnPerformDeptKillfocus(); 
	long			OnPerformDeptLoadData(); 
	void			OnPerformDeptAddNew(); 
	void			OnExportSelect();
	void			OnExport1();
	void			OnExport2();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	void			OnSubItemSelect();
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	void			OnAllHospitalsSelect(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentSelectChange(int nOldItem, int nNewItem); 
	void			OnDepartmentDblClick(); 
	int			OnDepartmentDeleteItem();
	long			OnTestGroupLoadData(); 
	void			OnTestGroupSelectChange(int nOldItem, int nNewItem); 
	void			OnTestGroupDblClick(); 
	int			OnTestGroupDeleteItem();
	long			OnObjectLoadData(); 
	void			OnObjectSelectChange(int nOldItem, int nNewItem); 
	void			OnObjectDblClick(); 
	int			OnObjectDeleteItem(); 

	CLIMSTestReportByMachine_ex(CWnd *pParent);
	~CLIMSTestReportByMachine_ex();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLIMSTestReportByMachine(); 
	int OnEditLIMSTestReportByMachine(); 
	int OnDeleteLIMSTestReportByMachine(); 
	int OnSaveLIMSTestReportByMachine(); 
	int OnCancelLIMSTestReportByMachine(); 
	int OnLIMSTestReportByMachineListLoadData();
	int OnMachineListCheckAll();
	int OnMachineListUnCheckAll();
	int	OnObjectListCheckAll();
	int	OnObjectListUnCheckAll();
	int	OnDeptListCheckAll();
	int	OnDeptListUnCheckAll();

};
#endif