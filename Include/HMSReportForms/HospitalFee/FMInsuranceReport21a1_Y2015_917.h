#ifndef FMInsuranceReport21a1_Y2015_917_H
#define FMInsuranceReport21a1_Y2015_917_H

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
class CFMInsuranceReport21a1_Y2015_917 : public CGuiView{
protected:
	CMap<CString, LPCTSTR , CString, LPCTSTR> m_mapChapter;
	CMap<CString, LPCTSTR , CString, LPCTSTR> m_mapLine;
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
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiCheckBox	m_wndDrugPTTT;
	CGuiCheckBox	m_wndByDischargedDate;
	CGuiCheckBox	m_wndInsuranceApproval;
	CGuiCheckBox	m_wndOnlyCommander;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndInPatient;
	CGuiRadioButton	m_wndOutPatient;
	CGuiRadioButton	m_wndOutInDept;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndList;

	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString m_szDrugPTTT;
	CString m_szPatientLineKey;
	CString m_szItemKey;
	int		m_nYear;
	BOOL	m_bCheckDrug;
	BOOL	m_bByDischargedDate;
	BOOL	m_bInsuranceApproval;
	BOOL	m_bOnlyCommander;
	int	m_nAll;
	int	m_nInPatient;
	int	m_nOutPatient;
	int	m_nOutInDept;
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
	long			OnPatientLineLoadData();
	long			OnItemLoadData();
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnDrugPTTTSelect();
	void			OnAllSelect(); 
	void			OnInPatientSelect(); 
	void			OnOutPatientSelect(); 
	void			OnOutInDeptSelect(); 
	void			OnPrintPreviewSelect();
	void			OnExportSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 

	CFMInsuranceReport21a1_Y2015_917(CWnd *pParent);
	~CFMInsuranceReport21a1_Y2015_917();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsuranceReport21a(); 
	int OnEditFMInsuranceReport21a(); 
	int OnDeleteFMInsuranceReport21a(); 
	int OnSaveFMInsuranceReport21a(); 
	int OnCancelFMInsuranceReport21a(); 
	int OnFMInsuranceReport21aListLoadData(); 

	int OnListCheckAll();
	int OnListUnCheckAll();
	CString GetQueryString();
};
#endif
