#ifndef FMTotalInComeByFeeTypeAB_H
#define FMTotalInComeByFeeTypeAB_H


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
#include "Excel.h"
#include "ReportDocument.h"
class CFMTotalInComeByFeeTypeAB : public CGuiView
{

protected:
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mIndex;
	double m_nTotal[18], m_nDaySum[18], m_nDeptSum[18];
	CStringArray m_arr_data_name;
	CString m_szPrevDate, m_szPrevDept;
public:
	CString		m_szCashIDS;

	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiLabel		m_wndClerkLabel;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiComboBox	m_wndClerk;
	CGuiLabel		m_wndOrderByLabel;
	CGuiComboBox	m_wndOrderBy;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndWithoutGeneral;
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiRadioButton	m_wndInpatient;
	CGuiRadioButton	m_wndOutpatient;
	CGuiRadioButton	m_wndDeposit;
	CGuiRadioButton	m_wndAll;
	CGuiCheckBox	m_wndSOD;
	CGuiCheckBox	m_wndSoldier;
	CGuiCheckBox	m_wndLoadAll;
	CGuiCheckBox	m_wndLoadCLCzone;

	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString m_szDoctorKey;
	CString	m_szOrderByKey;
	CString	m_szStatusKey;
	CString m_szDeptKey;
	CString	m_szRoomKey;
	BOOL	m_bWithoutGeneral;
	int		m_nPatientType;
	BOOL	m_bSOD;
	BOOL	m_bSoldier;
	BOOL	m_bLoadAll;
	BOOL	m_bLoadCLCzone;
	void			OnLoadAllSelect();
	void			OnLoadCLCzoneSelect(); 

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
	void			OnClerkSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClerkSelendok(); 
	//void			OnClerkSetfocus(); 
	//void			OnClerkKillfocus(); 
	long			OnClerkLoadData(); 
	long			OnDoctorLoadData();
	long			OnRoomLoadData();
	//void			OnClerkAddNew(); 
	void			OnOrderBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderBySelendok(); 
	//void			OnOrderBySetfocus(); 
	//void			OnOrderByKillfocus(); 
	long			OnOrderByLoadData(); 
	//void			OnOrderByAddNew(); 
	long			OnDeptLoadData();
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnMarkAllSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnExportDetail();
	void			OnExportTotal();
	void            OnExportTotalAll();
	void            OnExportTotalAll_V2();
	void            OnExportTotalAll_V2_Detail();
	void            OnExportDetailPatientList();
	void			OnInpatientSelect(); 
	void			OnOutpatientSelect(); 
	void			OnDepositSelect(); 
	void			OnAllSelect(); 
	void			OnSODSelect();
	void			OnSoldierSelect();
	void			OnPrint1stver();
	void			OnPrint2ndver();
	void			OnPrint2ndver_();
	int				OnCheckBeforePrint(CReport* rpt, CRecord& rs);
	void			OnPrintOther(CReport* rpt);
	//void			IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept, CReportSection*& rpDateGroup, CReportSection*& rpDeptGroup);
	void			IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup);
	void			IsNewGroup(CReport* rpt, CRecord* rs, bool& bNewDate, bool& bNewDept);
	void			OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept, CReportSection* pDateGroup, CReportSection* pDeptGroup);
	void			OnPrintGroupSummary(CReport* rpt, bool bNewDate, bool bNewDept);
	void			OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept);
	void			OnPrintGroupDescr(CReport* rpt, CRecord* rs, bool bNewDate, bool bNewDept, CReportSection** ppDateGroup, CReportSection** ppDeptGroup);
	void			OnPrintDetail(CReport* rpt, CRecord* rs);
	void			OnPrintDetail(CReport* rpt, CReportSection* pDetail, CRecord* rs);
	void			OnCalcData(CRecord* rs, bool& bNewDate, bool& bNewDept);
	void			ResetVar();
	CString			GetQueryStringDetail();
	CString			GetQueryStringTotal();
	CString			GetQueryStringTotalAll();
	CString			GetQueryStringTotalAll_V2();
	CString			GetQueryStringTotalAll_V2_Detail();
	CString			GetQueryString2();
	CString         GetQueryString();
	CString			GetQueryStringDetailByPatient();

	CFMTotalInComeByFeeTypeAB(CWnd *pWnd);
	~CFMTotalInComeByFeeTypeAB();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsuranceReceiptSummary(); 
	int OnEditFMInsuranceReceiptSummary(); 
	int OnDeleteFMInsuranceReceiptSummary(); 
	int OnSaveFMInsuranceReceiptSummary(); 
	int OnCancelFMInsuranceReceiptSummary(); 
	int OnFMInsuranceReceiptSummaryListLoadData(); 
	double OnRound(double nToRound);
	int OnListCheckAllTYC();
	int OnListCheckAllPTTYC();
	int OnListCheckAllBHAB();
	int OnListCheckAllDVAB();
	int OnListCheckAllQUANAB();
	void OnListSearchItem();
};
#endif