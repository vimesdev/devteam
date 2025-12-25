#ifndef FMOutpatientInsuranceReport19A_TrangBi_H
#define FMOutpatientInsuranceReport19A_TrangBi_H

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

class CFMOutpatientInsuranceReport19A_TrangBi : public CGuiView
{
protected:
	CMap<CString, LPCTSTR , CString, LPCTSTR> m_mapChapter;//He thong nhom phi
	CMap<CString, LPCTSTR , CString, LPCTSTR> m_mapLine;//Tuyen BN
public:
	CGuiGroupBox	m_wndReportFilter;
	CGuiGroupBox	m_wndDeptInfo;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndPatientLineLabel;
	CGuiComboBox	m_wndPatientLine;
	CGuiCheckBox	m_wndDrugPTTT;
	CGuiCheckBox	m_wndByDischargedDate;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExportXLS;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndSoldierPatient;
	CGuiCheckBox	m_wndNotinSoldierPatient;
	CGuiCheckBox	m_wndCheckCategory;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szPatientLineKey;
	BOOL	m_bCheckDrug;
	BOOL	m_bByDischargedDate;
	BOOL	m_bSoldierPatient;
	BOOL	m_bNotinSoldierPatient;
	BOOL	m_bCheckCategory;
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
	void			OnPatientLineSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientLineSelendok(); 
	//void			OnPatientLineSetfocus(); 
	//void			OnPatientLineKillfocus(); 
	long			OnPatientLineLoadData(); 
	//void			OnPatientLineAddNew(); 
	void			OnDrugPTTTSelect(); 
	void			OnByDischargedDateSelect(); 
	void			OnPrintPreviewSelect(); 
	void			OnExportSelect();
	void			OnExport();
	void			OnExport_1();
	void			OnExportDetail();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick();
	void			OnSoldierPatientSelect();
	void			OnNotinSoldierPatientSelect(); 
	void			OnCheckCategorySelect(); 
	int			OnListDeleteItem(); 
	CFMOutpatientInsuranceReport19A_TrangBi(CWnd *pParent);
	~CFMOutpatientInsuranceReport19A_TrangBi();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnListCheckAll();
	int OnListUnCheckAll();
	CString GetQueryString();
	CString GetQueryString1();
	CString GetQueryString2();
};
#endif