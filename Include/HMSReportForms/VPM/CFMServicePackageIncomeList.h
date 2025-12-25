#ifndef CFMSERVICEPACKAGEINCOMELIST_H
#define CFMSERVICEPACKAGEINCOMELIST_H

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
class CCFMServicePackageIncomeList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndExportToExcel;
	CGuiListCtrl	m_wndObjectList;
	CGuiListCtrl	m_wndDeptList;
	CGuiCheckBox	m_wndDeptSend;
	CGuiListCtrl	m_wndPackageList;
	CGuiCheckBox	m_wndStayIn;
	CGuiCheckBox	m_wndFinishStayIn;
	CGuiRadioButton	m_wndPosted;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL	m_bDeptSend;
	BOOL	m_bStayIn;
	BOOL	m_bFinishStayIn;
	int	m_nPosted;
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok(); 
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	//void			OnReportPeriodAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnExportToExcelSelect(); 
	long			OnObjectListLoadData(); 
	void			OnObjectListSelectChange(int nOldItem, int nNewItem); 
	void			OnObjectListDblClick(); 
	int			OnObjectListDeleteItem(); 
	long			OnDeptListLoadData(); 
	void			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnDeptListDblClick(); 
	int			OnDeptListDeleteItem(); 
	void			OnDeptSendSelect(); 
	long			OnPackageListLoadData(); 
	void			OnPackageListSelectChange(int nOldItem, int nNewItem); 
	void			OnPackageListDblClick(); 
	int			OnPackageListDeleteItem(); 
	void			OnStayInSelect(); 
	void			OnFinishStayInSelect(); 
	void			OnPostedSelect(); 
	CCFMServicePackageIncomeList(CWnd *pParent);
	~CCFMServicePackageIncomeList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCFMServicePackageIncomeList(); 
	int OnEditCFMServicePackageIncomeList(); 
	int OnDeleteCFMServicePackageIncomeList(); 
	int OnSaveCFMServicePackageIncomeList(); 
	int OnCancelCFMServicePackageIncomeList(); 
	int OnCFMServicePackageIncomeListListLoadData();
	int OnObjectListCheckAll();
	int OnObjectListUnCheckAll();

	int OnDeptListCheckAll();
	int OnDeptListUnCheckAll();
	CString GetQueryString();

};
#endif
