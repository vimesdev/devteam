#ifndef BBEXPORTLIST_H
#define BBEXPORTLIST_H

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
class CBBExportList : public CGuiView
{
protected:
public:
	CGuiLabel		m_wndPeriodReportLabel;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiComboBox	m_wndPeriodReport;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndListProduct;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndUnPaid;
	long	m_nYear;
	CString	m_szPeriodReportKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szDepartmentKey;
	BOOL	m_bUnPaid;
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPeriodReportSelendok(); 
	//void			OnPeriodReportSetfocus(); 
	//void			OnPeriodReportKillfocus(); 
	long			OnPeriodReportLoadData(); 
	//void			OnPeriodReportAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnUnPaidSelect();
	CBBExportList(CWnd *pWnd);
	~CBBExportList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddBBExportList(); 
	int OnEditBBExportList(); 
	int OnDeleteBBExportList(); 
	int OnSaveBBExportList(); 
	int OnCancelBBExportList(); 
	int OnBBExportListListLoadData();
	CString GetQueryString();
	CString GetNameUser(CString UserName, CString LastName =_T(""));
	int	OnListCheckAll();
	int	OnListUncheckAll();
};
#endif
