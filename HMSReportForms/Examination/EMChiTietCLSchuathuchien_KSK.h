#ifndef EMChiTietCLSchuathuchien_KSK_H
#define EMChiTietCLSchuathuchien_KSK_H

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
class AFX_EXT_CLASS CEMChiTietCLSchuathuchien_KSK : public CGuiView
{
protected:
public:
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiGroupBox	m_wndReportCondition;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiRadioButton	m_wndAllSpeciality;
	CGuiRadioButton	m_wndInDept;
	CGuiRadioButton	m_wndOutDept;
	CGuiListCtrl	m_wndCompany;
	CGuiListCtrl	m_wndTestGroup;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndTerminated;
	CGuiRadioButton	m_wndOpen;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szDepartmentKey;
	int m_nStatus;
	int	m_nAllSpeciality;
	int	m_nInDept;
	int	m_nOutDept;

	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok(); 
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	void			OnReportPeriodAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	long			OnCompanyLoadData();
	long			OnTestGroupLoadData(); 
	void			OnCompanySelectChange(int nOldItem, int nNewItem); 
	void			OnCompanyDblClick(); 
	int			OnCompanyDeleteItem(); 
	int			OnCompanySearchItem();
	int			OnCompanyCheckAll();
	int			OnCompanyUncheckAll();
	void			OnAllSpecialitySelect(); 
	void			OnInDeptSelect(); 
	void			OnOutDeptSelect(); 
	void			OnPrintPreviewSelect(); 
	void			OnExportSelect(); 
	void			OnCloseSelect(); 
	CEMChiTietCLSchuathuchien_KSK(CWnd *pParent);
	~CEMChiTietCLSchuathuchien_KSK();
	CEMChiTietCLSchuathuchien_KSK &operator=(const CEMChiTietCLSchuathuchien_KSK& rpt);
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEMChiTietCLSchuathuchien_KSK(); 
	int OnEditEMChiTietCLSchuathuchien_KSK(); 
	int OnDeleteEMChiTietCLSchuathuchien_KSK(); 
	int OnSaveEMChiTietCLSchuathuchien_KSK(); 
	int OnCancelEMChiTietCLSchuathuchien_KSK(); 
	int OnEMChiTietCLSchuathuchien_KSKListLoadData(); 
	CString GetQueryString();
	void	GetQueryString_v2(CString& index_query, CString& room_query, CString& result_query);
};
#endif
