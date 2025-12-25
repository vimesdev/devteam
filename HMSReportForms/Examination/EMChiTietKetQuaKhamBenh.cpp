#include "stdafx.h"
#include "EMChiTietKetQuaKhamBenh.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "HMSListSearchDialog.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMChiTietKetQuaKhamBenh* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMChiTietKetQuaKhamBenh* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSpecialitySelectFnc(CWnd *pWnd){
	  ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnAllSpecialitySelect();
}
static void _OnInDeptSelectFnc(CWnd *pWnd){
	  ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnInDeptSelect();
}
static void _OnOutDeptSelectFnc(CWnd *pWnd){
	  ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnOutDeptSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMChiTietKetQuaKhamBenh *pVw = (CEMChiTietKetQuaKhamBenh *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMChiTietKetQuaKhamBenh *pVw = (CEMChiTietKetQuaKhamBenh *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMChiTietKetQuaKhamBenh *pVw = (CEMChiTietKetQuaKhamBenh *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnAddEMTongHopKetQuaKhamBenh();
} 
static int _OnEditEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnEditEMTongHopKetQuaKhamBenh();
} 
static int _OnDeleteEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnDeleteEMTongHopKetQuaKhamBenh();
} 
static int _OnSaveEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnSaveEMTongHopKetQuaKhamBenh();
} 
static int _OnCancelEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCancelEMTongHopKetQuaKhamBenh();
} 
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanyLoadData();
} 
static void _OnCompanyDblClickFnc(CWnd *pWnd){
	((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanyDblClick();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanySelectChange(nOldItem, nNewItem);
} 
static int _OnCompanyDeleteItemFnc(CWnd *pWnd){
	return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanyDeleteItem();
} 

static int _OnCompanySearchItemFnc(CWnd* pWnd)
{
	return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanySearchItem();
}
static int _OnCompanyCheckAllFnc(CWnd* pWnd)
{
	return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanyCheckAll();
}
static int _OnCompanyUncheckAllFnc(CWnd* pWnd)
{
	return ((CEMChiTietKetQuaKhamBenh*)pWnd)->OnCompanyUncheckAll();
}
CEMChiTietKetQuaKhamBenh::CEMChiTietKetQuaKhamBenh(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 190;
	//EMInitialize(pParent);
	SetDefaultValues();
}
CEMChiTietKetQuaKhamBenh::~CEMChiTietKetQuaKhamBenh(){
}
CEMChiTietKetQuaKhamBenh &CEMChiTietKetQuaKhamBenh::operator=(const CEMChiTietKetQuaKhamBenh& item)
{
	return *this;
}
void CEMChiTietKetQuaKhamBenh::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 395);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 90, 90, 115);
	m_wndDepartment.Create(this,95, 90, 485, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 400, 410, 425);
	m_wndExport.Create(this, _T("&Export"), 415, 400, 490, 425);
	m_wndAll.Create(this, _T("All"), 5, 400, 85, 425);
	m_wndTerminated.Create(this, _T("Terminated"), 90, 400, 190, 425);
	m_wndOpen.Create(this, _T("Open"), 195, 400, 275, 425);
	m_wndAllSpeciality.Create(this, _T("All Speciality"), 95, 120, 255, 145);
	m_wndInDept.Create(this, _T("In Dept"), 260, 120, 370, 145);
	m_wndOutDept.Create(this, _T("Out Dept"), 375, 120, 485, 145);
	m_wndAllSpeciality.ShowWindow(SW_HIDE);
	m_wndInDept.ShowWindow(SW_HIDE);
	m_wndOutDept.ShowWindow(SW_HIDE);
	m_wndCompany.Create(this, 10, 120, 485, 390); 
	m_wndCompany.SetCheckBox(TRUE);
	m_wndPrintPreview.ShowWindow(SW_HIDE);
}
void CEMChiTietKetQuaKhamBenh::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(false);
	m_wndReportPeriod.SetCheckValue(false);
	m_wndReportPeriod.LimitText(35);
//	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(false);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(false);
	m_wndDepartment.SetCheckValue(false);
	m_wndDepartment.LimitText(35);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 100);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndCompany.InsertColumn(0, _T("Id"), CFMT_NUMBER, 80);
	m_wndCompany.InsertColumn(1, _T("Contract No"), CFMT_TEXT, 100);
	m_wndCompany.InsertColumn(2, _T("Description"), CFMT_TEXT, 200);
	m_wndCompany.InsertColumn(3, _T("Ngày khám dự kiến"), CFMT_DATE, 100);
	m_wndCompany.InsertColumn(4, _T("Type"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndCompany.InsertColumn(5, _T(""), CFMT_TEXT, 0);	//companyid
	m_wndCompany.InsertColumn(6, _T(""), CFMT_TEXT, 0);	//object
}
void CEMChiTietKetQuaKhamBenh::OnSetWindowEvents(){
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAllSpeciality.SetEvent(WE_CLICK, _OnAllSpecialitySelectFnc);
	m_wndInDept.SetEvent(WE_CLICK, _OnInDeptSelectFnc);
	m_wndOutDept.SetEvent(WE_CLICK, _OnOutDeptSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndCompany.SetEvent(WE_SELCHANGE, _OnCompanySelectChangeFnc);
	m_wndCompany.SetEvent(WE_LOADDATA, _OnCompanyLoadDataFnc);
	m_wndCompany.SetEvent(WE_DBLCLICK, _OnCompanyDblClickFnc);
	m_wndCompany.AddEvent(1, _T("Search"), _OnCompanySearchItemFnc);
	m_wndCompany.AddEvent(0, _T("-"));
	m_wndCompany.AddEvent(2, _T("Check All"), _OnCompanyCheckAllFnc);
	m_wndCompany.AddEvent(0, _T("-"));
	m_wndCompany.AddEvent(3, _T("Uncheck All"), _OnCompanyUncheckAllFnc);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	SetMode(VM_EDIT);
	OnCompanyLoadData();
}
void CEMChiTietKetQuaKhamBenh::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nStatus);
	//DDX_Radio(pDX, m_wndAllSpeciality.GetDlgCtrlID(), m_nAllSpeciality);
	//DDX_Radio(pDX, m_wndInDept.GetDlgCtrlID(), m_nInDept);
	//DDX_Radio(pDX, m_wndOutDept.GetDlgCtrlID(), m_nOutDept);

}
void CEMChiTietKetQuaKhamBenh::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMChiTietKetQuaKhamBenh::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMChiTietKetQuaKhamBenh::SetDefaultValues(){
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nAllSpeciality=0;
	m_nInDept=1;
	m_nOutDept=1;
	m_nStatus = 0;
}
int CEMChiTietKetQuaKhamBenh::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0,1,2,3,-1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CEMChiTietKetQuaKhamBenh::OnYearChange(){
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnYearSetfocus(){
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnYearKillfocus(){
	
} */
int CEMChiTietKetQuaKhamBenh::OnYearCheckValue(){
	return 0;
} 
void CEMChiTietKetQuaKhamBenh::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMChiTietKetQuaKhamBenh::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);	 
	 
}
/*void CEMChiTietKetQuaKhamBenh::OnReportPeriodSetfocus(){
	
}*/
/*void CEMChiTietKetQuaKhamBenh::OnReportPeriodKillfocus(){
	
}*/
long CEMChiTietKetQuaKhamBenh::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0){
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMChiTietKetQuaKhamBenh::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnFromDateChange(){
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnFromDateSetfocus(){
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnFromDateKillfocus(){
	
} */
int CEMChiTietKetQuaKhamBenh::OnFromDateCheckValue(){
	OnCompanyLoadData();
	return 0;
} 
/*void CEMChiTietKetQuaKhamBenh::OnToDateChange(){
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnToDateSetfocus(){
	
} */
/*void CEMChiTietKetQuaKhamBenh::OnToDateKillfocus(){
	
} */
int CEMChiTietKetQuaKhamBenh::OnToDateCheckValue(){
	OnCompanyLoadData();
	return 0;
} 
void CEMChiTietKetQuaKhamBenh::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMChiTietKetQuaKhamBenh::OnDepartmentSelendok(){
	 
}
/*void CEMChiTietKetQuaKhamBenh::OnDepartmentSetfocus(){
	
}*/
/*void CEMChiTietKetQuaKhamBenh::OnDepartmentKillfocus(){
	
}*/
long CEMChiTietKetQuaKhamBenh::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and sd_id = '%s' "), m_szDepartmentKey);
		szWhere.Format(_T("and hrl_id = %d"), ToInt(m_szDepartmentKey)); 

	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select hrl_name as name, hrl_id as id from hms_roomlist where hrl_deptid = '%s' %s Order by id"), pMF->m_szDept, szWhere);
	//szSQL.Format(_T(" SELECT sd_id as id, sd_name as name from sys_dept where sd_type = 'KB' %s"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CEMChiTietKetQuaKhamBenh::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMChiTietKetQuaKhamBenh::OnAllSpecialitySelect(){
	
}
void CEMChiTietKetQuaKhamBenh::OnInDeptSelect(){
	
}
void CEMChiTietKetQuaKhamBenh::OnOutDeptSelect(){
	
}
void CEMChiTietKetQuaKhamBenh::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);

	if(!rpt.Init(_T("Reports/HMS/HE_TONGHOPKETQUAKHAMBENH.RPT")) )
		return ;
	
	BeginWaitCursor();
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	StringUpper(pMF->m_szHealthService, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_szHospitalName, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	int nIndex = 1;
	int nTotal[14];
	for(int i = 1; i<= 13; i++)
	{
		 nTotal[i] = 0;
	}
	CReportSection* rptDetail;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%d"), nIndex ++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("docno"),tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("conclusion"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("ptype"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("birth_date")));
		rs.MoveNext();	
	}	
	
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CEMChiTietKetQuaKhamBenh::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szSQL, szIndexQuery, szResultQuery, szOldItem, szNewItem, szRoomQuery;
	CRecord rs(&pMF->m_db);
	BeginWaitCursor();
	GetQueryString_v2(szIndexQuery, szRoomQuery, szResultQuery);
    //GetQueryString(szIndexQuery, szRoomQuery, szResultQuery);
	
	int nCount = rs.ExecSQL(szIndexQuery), nRow = 0, nCol = 6, nIndex = 1;
	//_msg(_T("1: %s"), szIndexQuery);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;	
	if (!xls.Load(_T("Exports\\Template\\Mau_ChiTietKetQuaKhamBenh.xls")))
	{
		return;
	}
	xls.SetWorksheet(0);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	nRow = 4;
	long tmp = 0;
	while (!rs.IsEOF())
	{
		tmp = str2long(rs.GetValue(_T("has_fee")));
		//if (rs.GetValue(_T("has_fee")) == _T("N"))
		if (tmp > 0)
		{
			rs.GetValue(_T("fee_parent"), szNewItem);
			if (szNewItem != szOldItem)
			{
				xls.SetCellText(nCol, nRow, szNewItem, FMT_TEXT, true);
				xls.SetCellMergedColumns(nCol, nRow, str2int(rs.GetValue(_T("index_count"))));
				szOldItem = szNewItem;
			}
			xls.SetCellText(nCol, nRow+1, rs.GetValue(_T("fee_name")), FMT_TEXT);	
		}
		else
		{
			xls.SetCellText(nCol, nRow, rs.GetValue(_T("fee_name")), FMT_TEXT, true);	
		}
		nCol++;
		rs.MoveNext();
	}
	rs.ExecSQL(szRoomQuery);
	//_msg(_T("2: %s"), szRoomQuery);
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, rs.GetValue(_T("room_name")), FMT_TEXT, true);
		nCol++;
		rs.MoveNext();
	}
	xls.SetCellText(nCol, nRow, _T("Chức năng sống"), FMT_TEXT, true);
	nRow = 6;
	rs.ExecSQL(szResultQuery);
	//_msg(_T("3: %s"), szResultQuery);
	while (!rs.IsEOF())
	{
		nCol = 2;
		xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			xls.SetCellText(nCol, nRow, rs.GetValue(i), FMT_TEXT);
			nCol++;
		}
		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\ChiTietKetQuaKhamBenh.xls"));
	
} 
void CEMChiTietKetQuaKhamBenh::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMChiTietKetQuaKhamBenh::OnAddEMTongHopKetQuaKhamBenh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMChiTietKetQuaKhamBenh::OnEditEMTongHopKetQuaKhamBenh(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMChiTietKetQuaKhamBenh::OnDeleteEMTongHopKetQuaKhamBenh(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelEMTongHopKetQuaKhamBenh(); 
 	}
	return 0;
}
int CEMChiTietKetQuaKhamBenh::OnSaveEMTongHopKetQuaKhamBenh(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnEMTongHopKetQuaKhamBenhListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMChiTietKetQuaKhamBenh::OnCancelEMTongHopKetQuaKhamBenh(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CEMChiTietKetQuaKhamBenh::OnEMTongHopKetQuaKhamBenhListLoadData()
{
	return 0;
}
CString CEMChiTietKetQuaKhamBenh::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szCompanys;
	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND he_roomid = %d "), ToInt(m_szDepartmentKey));
	}

	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		if (m_wndCompany.GetCheck(i))
		{
			m_wndCompany.SetCurSel(i);
			if (!szCompanys.IsEmpty())
				szCompanys += _T(",");
			szCompanys.AppendFormat(_T("'%s'"), m_wndCompany.GetItemText(i, 0));
		}
	}
	if(!szCompanys.IsEmpty())
		szWhere.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);

	szSQL.Format(_T(" SELECT ") \
		_T(" docno,") \
		_T(" pname,") \
		_T(" conclusion,") \
		_T(" ptype,") \
		_T(" to_char(birth_date, 'dd/mm/yyyy') as birth_date, gender") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT hp_birthdate as birth_date, HMS_GETSEX(hp_sex) AS gender,") \
		_T(" hee_docno AS docno,") \
		_T(" TRIM(hee_surname||' '||hee_midname||' '||hee_firstname) AS pname,") \
		_T(" (SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_type = 'KSK_CHANDOANTONGQUAT' AND hde_name = 'CDTONGQUAT' AND hde_docno = hee_docno AND rownum = 1) AS conclusion,") \
		_T(" (SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_type = 'KSK_CHANDOANTONGQUAT' AND hde_name = 'LOAISK' AND hde_docno = hee_docno AND rownum = 1) AS ptype") \
		_T(" FROM hms_exm_employee ") \
		_T(" LEFT JOIN hms_exm_contract") \
		_T(" ON(hec_contract_id = hee_contract_id)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = hee_docno)") \
		_T(" LEFT JOIN Hms_patient ON (hd_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON(he_docno = hee_docno)") \
		_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND he_status <> 'O' AND he_deptid = '%s' %s ") \
		_T(" ) tbl") \
		_T(" ORDER BY") \
		_T(" docno,") \
		_T(" pname,") \
		_T(" conclusion,") \
		_T(" ptype"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

void CEMChiTietKetQuaKhamBenh::GetQueryString_v2(CString& index_query, CString& room_query, CString& result_query)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szWhere, szCompanys, szIndexes, szRooms, szWhere2;
	szIndexes.Empty();
	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND dept_id = '%s' AND room_id = %d "), pMF->m_szDept, ToInt(m_szDepartmentKey));
		szWhere2.Format(_T(" AND he_deptid = '%s' AND he_roomid = %d "), pMF->m_szDept, ToInt(m_szDepartmentKey));
	}

	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		if (m_wndCompany.GetCheck(i))
		{
			m_wndCompany.SetCurSel(i);
			if (!szCompanys.IsEmpty())
				szCompanys += _T(",");
			szCompanys.AppendFormat(_T("'%s'"), m_wndCompany.GetItemText(i, 0));
		}
	}
	if(!szCompanys.IsEmpty())
	{
		szWhere.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);
		szWhere2.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);
	}
	szWhere.AppendFormat(_T(" AND order_date between To_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	szWhere2.AppendFormat(_T(" AND he_examdate between To_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	
	if (m_nStatus == 1)
	{
		szWhere.AppendFormat(_T(" AND hd_status = 'T'"));
		szWhere2.AppendFormat(_T(" AND hd_status = 'T'"));
	}
	if (m_nStatus == 2)
	{
		szWhere.AppendFormat(_T(" AND NVL(hd_status, 'O') <> 'T'"));
		szWhere2.AppendFormat(_T(" AND NVL(hd_status, 'O') <> 'T'"));
	}
	index_query.Format(_T("SELECT    DISTINCT hfl_line,") \
	_T("          hfl_feeid as fee_id, has_fee, hfl_subitem, hfl_name AS fee_name,") \
	_T("          CASE WHEN has_fee >0 THEN hfl_name  ") \
	_T("			ELSE (SELECT hfl_name FROM   hms_fee_list WHERE  hfl_feeid = ol.hfl_subitem) END AS fee_parent,") \
	_T("          Count(DISTINCT hfl_feeid) OVER ") \
	_T("			( PARTITION BY Decode(Substr(hfl_subitem, 1, 1), 'B', hfl_subitem, hfl_feeid)) AS index_count") \
	_T(" FROM hms_exm_employee ") \
	_T(" LEFT JOIN hms_exm_contract") \
	_T(" ON(hec_contract_id = hee_contract_id)") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno = hee_docno)") \
	_T(" LEFT JOIN Hms_patient ON (hd_patientno = hp_patientno)") \
	_T(" LEFT JOIN      HMS_PARA_RESULT_VIEW_VL5 ON (hd_docno = doc_no)") \
	_T(" LEFT JOIN hms_fee_list ol ON ( hfl_feeid = item_id )") \
	_T(" WHERE     para_result IS NOT NULL %s") \
	_T(" ORDER     BY Decode(Substr(hfl_subitem, 1, 1), 'B', hfl_subitem,hfl_feeid),hfl_line"), szWhere);
	rs.ExecSQL(index_query);
	while (!rs.IsEOF())
	{
		if (!szIndexes.IsEmpty())
		{
			szIndexes += _T(",");
		}
		szIndexes.AppendFormat(_T("'%s'"), rs.GetValue(_T("fee_id")));
		rs.MoveNext();
	}
	room_query.Format(_T(" SELECT    DISTINCT he_deptid ||'|' ||he_roomid AS room_id, hms_getroomname(he_deptid, he_roomid) as room_name,") \
	_T("	he_deptid, he_roomid ") \
	_T(" FROM      hms_exm_employee") \
	_T(" LEFT JOIN hms_exm_contract ON( hec_contract_id = hee_contract_id )") \
	_T(" LEFT JOIN hms_doc ON( hd_docno = hee_docno )") \
	_T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
	_T(" LEFT JOIN hms_exam ON ( he_docno = hd_docno )") \
	_T(" WHERE he_status = 'T' %s ORDER BY he_deptid, he_roomid"), szWhere2);

	rs.ExecSQL(room_query);
	while (!rs.IsEOF())
	{
		if (!szRooms.IsEmpty())
		{
			szRooms += _T(",");
		}
		szRooms.AppendFormat(_T("'%s'"), rs.GetValue(_T("room_id")));
		rs.MoveNext();
	}
	result_query.Format(_T("SELECT *") \
	_T(" FROM   (SELECT doc_no, get_patientname(doc_no) as patient_name, to_char(hp_birthdate, 'dd/mm/yyyy') as birth_date, HMS_GETSEX(hp_sex) AS gender,") \
	_T("               item_id,") \
	_T("               para_result") \
	_T(" FROM hms_exm_employee ") \
	_T(" LEFT JOIN hms_exm_contract") \
	_T(" ON(hec_contract_id = hee_contract_id)") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno = hee_docno)") \
	_T(" LEFT JOIN Hms_patient ON (hd_patientno = hp_patientno)") \
	_T(" LEFT JOIN      HMS_PARA_RESULT_VIEW_VL5 ON (hd_docno = doc_no)") \
	_T("        WHERE  para_result IS NOT NULL %s) ") \
	_T(" PIVOT ") \
	_T("( ") \
	_T("  LISTAGG(cast(para_result as varchar2(2000)),',') WITHIN GROUP (ORDER BY NULL) ") \
	_T("  FOR item_id IN ") \
	_T("  (%s) ") \
	_T(" )") \
	_T(" FULL JOIN ") \
	_T(" (SELECT tbl_conclusion.*, ") \
	_T("	(select get_vitalsign (he_docno, he_receptidx) from hms_exam ") \
	_T("	where he_docno = doc_no and he_hasfee = 'Y' and rownum <= 1) as vital_sign ") \
	_T(" FROM (") \
	_T("  SELECT    he_docno AS doc_no,") \
	_T("           Get_patientname(hd_docno) AS patient_name,") \
	_T("           To_char(hp_birthdate, 'dd/mm/yyyy') AS birth_date, HMS_GETSEX(hp_sex) AS gender,") \
	_T("           he_deptid ||'|' ||he_roomid AS room_id,") \
	_T("           he_diagnostic AS conclusion") \
	_T("  FROM      hms_exm_employee") \
	_T("  LEFT JOIN hms_exm_contract ON( hec_contract_id = hee_contract_id )") \
	_T("  LEFT JOIN hms_doc ON( hd_docno = hee_docno )") \
	_T("  LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )") \
	_T("  LEFT JOIN hms_exam ON ( he_docno = hd_docno AND he_status = 'T' )") \
	_T("  WHERE     1 = 1 %s ") \
	_T("  )") \
	_T("  PIVOT ") \
	_T("  ( ") \
    _T("	listagg(cast(conclusion as varchar2(2000)), ',') within group (order by null) ") \
    _T("	for room_id in (%s)") \
	_T("  ) tbl_conclusion") \
	_T(" )") \
	_T(" USING (doc_no, patient_name, birth_date, gender)")
	, szWhere, szIndexes, szWhere2, szRooms);
}

void CEMChiTietKetQuaKhamBenh::GetQueryString(CString &index_query,
                                                 CString &room_query,
                                                 CString &result_query)
{
    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CRecord rs(&pMF->m_db);
    CString szWhere, szCompanys, szIndexes, szRooms, szWhere2,
        szSourceItem = L"'B340015189', 'B340031599'";
    szIndexes.Empty();
    if (!m_szDepartmentKey.IsEmpty())
    {
        szWhere.Format(_T(" AND dept_id = '%s' AND room_id = %d "),
                       pMF->m_szDept, ToInt(m_szDepartmentKey));
        szWhere2.Format(_T(" AND he_deptid = '%s' AND he_roomid = %d "),
                        pMF->m_szDept, ToInt(m_szDepartmentKey));
    }

    for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
    {
        if (m_wndCompany.GetCheck(i))
        {
            m_wndCompany.SetCurSel(i);
            if (!szCompanys.IsEmpty())
                szCompanys += _T(",");
            szCompanys.AppendFormat(_T("'%s'"), m_wndCompany.GetItemText(i, 0));
        }
    }
    if (!szCompanys.IsEmpty())
    {
        szWhere.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);
        szWhere2.AppendFormat(_T("AND hec_contract_id IN(%s)"), szCompanys);
    }
    szWhere.AppendFormat(
        _T(" AND order_date between To_timestamp('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"),
        m_szFromDate, m_szToDate);
    szWhere2.AppendFormat(
        _T(" AND he_examdate between To_timestamp('%s', 'yyyy/mm/dd ")
        _T("hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"),
        m_szFromDate, m_szToDate);

    if (m_nStatus == 1)
    {
        szWhere.AppendFormat(_T(" AND hd_status = 'T'"));
        szWhere2.AppendFormat(_T(" AND hd_status = 'T'"));
    }
    if (m_nStatus == 2)
    {
        szWhere.AppendFormat(_T(" AND NVL(hd_status, 'O') <> 'T'"));
        szWhere2.AppendFormat(_T(" AND NVL(hd_status, 'O') <> 'T'"));
    }
    index_query.Format(
        _T(" WITH tbl")
        _T("      AS (SELECT doc_no")
        _T("            FROM hms_para_result_view_vl")
        _T("           WHERE para_result IS NOT NULL %s ") \
		_T("			 AND item_id IN ( %s))")
        _T("    SELECT DISTINCT hfl_line,")
        _T("                    hfl_feeid AS fee_id,")
        _T("                    has_fee,")
        _T("                    hfl_subitem,")
        _T("                    hfl_name AS fee_name,")
        _T("                    CASE WHEN has_fee > 0 THEN hfl_name")
        _T("                    ELSE (SELECT hfl_name")
        _T("                            FROM hms_fee_list")
        _T("                           WHERE hfl_feeid = ol.hfl_subitem)")
        _T("                    END AS fee_parent,")
        _T("                    Count(DISTINCT hfl_feeid)")
        _T("                      OVER(")
        _T("                        PARTITION BY Decode(Substr(hfl_subitem, ")
        _T("1, 1), 'B', hfl_subitem, hfl_feeid ))")
        _T("                    AS index_count")
        _T("      FROM hms_doc")
        _T(" LEFT JOIN hms_patient ON ( hd_patientno = hp_patientno )")
        _T(" LEFT JOIN hms_para_result_view_vl ON ( hd_docno = doc_no )")
        _T(" LEFT JOIN hms_fee_list ol ON ( hfl_feeid = item_id )")
        _T("     WHERE 1 = 1 AND hd_docno IN (SELECT doc_no")
        _T("                              FROM tbl) AND para_result IS NOT ")
        _T("NULL %s")
        _T("     ORDER BY Decode(Substr(hfl_subitem, 1, 1), 'B', hfl_subitem,")
        _T("                                                ")
        _T("hfl_feeid),hfl_line ")

        , szWhere, szSourceItem, szWhere);
    rs.ExecSQL(index_query);
    while (!rs.IsEOF())
    {
        if (!szIndexes.IsEmpty())
        {
            szIndexes += _T(",");
        }
        szIndexes.AppendFormat(_T("'%s'"), rs.GetValue(_T("fee_id")));
        rs.MoveNext();
    }
    
    result_query.Format(
        _T(" WITH tbl")
        _T("      AS (SELECT doc_no")
        _T("            FROM hms_para_result_view_vl")
        _T("           WHERE para_result IS NOT NULL %s ")
        _T("			 AND item_id IN ( %s))")
        _T("SELECT *")
        _T(" FROM   (SELECT doc_no, get_patientname(doc_no) as patient_name, ")
        _T("to_char(hp_birthdate, 'dd/mm/yyyy') as birth_date, ")
        _T("HMS_GETSEX(hp_sex) AS gender,")
        _T("               item_id,")
        _T("               para_result")
        _T(" FROM hms_doc")
        _T(" LEFT JOIN Hms_patient ON (hd_patientno = hp_patientno)")
        _T(" LEFT JOIN      HMS_PARA_RESULT_VIEW_VL ON (hd_docno = doc_no)")
        _T("        WHERE  para_result IS NOT NULL %s AND hd_docno IN (SELECT ")
        _T("doc_no")
        _T("                              FROM tbl) ) ")
        _T(" PIVOT ")
        _T("( ")
        _T("  LISTAGG(cast(para_result as varchar2(2000)),',') WITHIN GROUP ")
        _T("(ORDER BY NULL) ")
        _T("  FOR item_id IN ")
        _T("  (%s) ")
        _T(" )")
        , szWhere, szSourceItem, szWhere, szIndexes);

	room_query.Empty();
    result_query.Empty();
}

void CEMChiTietKetQuaKhamBenh::OnCompanyDblClick(){

} 
void CEMChiTietKetQuaKhamBenh::OnCompanySelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 

} 
int CEMChiTietKetQuaKhamBenh::OnCompanyDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	return 0;
} 
long CEMChiTietKetQuaKhamBenh::OnCompanyLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndCompany.BeginLoad(); 
	int nCount = 0;

	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND he_roomid = %d "), ToInt(m_szDepartmentKey));
	}
		szSQL.Format(_T(" SELECT * FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT hec_contract_id,") \
		_T("   hec_no,") \
		_T("   hec_company_id,") \
		_T("   hwp_name                            AS hec_company,") \
		_T("   TO_CHAR(hec_examdate, 'DD/MM/YYYY') AS exmdate,") \
		_T("   hec_description,") \
		_T("   hec_type,") \
		_T("   hec_object") \
		_T(" FROM hms_exm_employee,") \
		_T("   hms_exm_contract,") \
		_T("   hms_workplace,") \
		_T("   hms_doc,") \
		_T("   hms_exam") \
		_T(" WHERE hec_contract_id = hee_contract_id") \
		_T(" AND hec_company_id    = TO_CHAR(hwp_idx)") \
		_T(" AND hee_docno         = hd_docno") \
		_T(" AND he_docno          = hee_docno") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND he_deptid = '%s' %s ") \
		_T(" UNION ALL") \
		_T("  SELECT DISTINCT hec_contract_id,") \
		_T("     hec_no,") \
		_T("     hec_company_id,") \
		_T("     COM_NAME                            AS hec_company,") \
		_T("     TO_CHAR(hec_examdate, 'DD/MM/YYYY') AS exmdate,") \
		_T("     hec_description,") \
		_T("     hec_type,") \
		_T("     hec_object") \
		_T("   FROM hms_exm_contract") \
		_T("   LEFT JOIN M_COMPANY_LIST") \
		_T("   ON (hec_company_id=COM_CODE)") \
		_T("   LEFT JOIN hms_exm_employee") \
		_T("   ON (hec_contract_id = hee_contract_id)") \
		_T("   LEFT JOIN hms_doc ON (hee_docno = hd_docno)") \
		_T("   LEFT JOIN hms_exam ON (hee_docno = he_docno)") \
		_T("   WHERE 1           =1") \
		_T("   AND hec_company_id IS NOT NULL") \
		_T("   AND COM_NAME       IS NOT NULL") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND he_deptid = '%s' %s ") \
		_T(" )") \
		_T(" ORDER BY hec_contract_id"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(), szWhere, m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(), szWhere);
	//AND he_status <> 'O'
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCompany.AddItems(
			rs.GetValue(_T("hec_contract_id")), 
			rs.GetValue(_T("hec_no")), 
			rs.GetValue(_T("hec_company")), 
			rs.GetValue(_T("exmdate")), 
			rs.GetValue(_T("hec_type")), 
			rs.GetValue(_T("hec_company_id")), 
			rs.GetValue(_T("hec_object")), NULL);
		rs.MoveNext();
	}
	m_wndCompany.EndLoad(); 
	UpdateData(FALSE);
	return nCount;

}

int CEMChiTietKetQuaKhamBenh::OnCompanySearchItem()
{
	int nSubSel = m_wndCompany.GetSubItemSel();
_tprintf(_T("\nSubSel: %d\n"), nSubSel);
	if (nSubSel < 0)
	{
		nSubSel = 0;
	}
	CHMSListSearchDialog dlg(&m_wndCompany, nSubSel);
	dlg.DoModal();
	return 0;
}

int CEMChiTietKetQuaKhamBenh::OnCompanyCheckAll()
{
	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		m_wndCompany.SetCheck(i);
	}
	return 0;
}

int CEMChiTietKetQuaKhamBenh::OnCompanyUncheckAll()
{
	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		m_wndCompany.SetCheck(i, FALSE);
	}
	return 0;
}