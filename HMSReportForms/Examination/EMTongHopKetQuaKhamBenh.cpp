#include "stdafx.h"
#include "EMTongHopKetQuaKhamBenh.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "HMSListSearchDialog.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMTongHopKetQuaKhamBenh* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMTongHopKetQuaKhamBenh* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnAllSpecialitySelectFnc(CWnd *pWnd){
	  ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnAllSpecialitySelect();
}
static void _OnInDeptSelectFnc(CWnd *pWnd){
	  ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnInDeptSelect();
}
static void _OnOutDeptSelectFnc(CWnd *pWnd){
	  ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnOutDeptSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMTongHopKetQuaKhamBenh *pVw = (CEMTongHopKetQuaKhamBenh *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMTongHopKetQuaKhamBenh *pVw = (CEMTongHopKetQuaKhamBenh *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CEMTongHopKetQuaKhamBenh *pVw = (CEMTongHopKetQuaKhamBenh *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnAddEMTongHopKetQuaKhamBenh();
} 
static int _OnEditEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnEditEMTongHopKetQuaKhamBenh();
} 
static int _OnDeleteEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnDeleteEMTongHopKetQuaKhamBenh();
} 
static int _OnSaveEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnSaveEMTongHopKetQuaKhamBenh();
} 
static int _OnCancelEMTongHopKetQuaKhamBenhFnc(CWnd *pWnd){
	 return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCancelEMTongHopKetQuaKhamBenh();
} 
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanyLoadData();
} 
static void _OnCompanyDblClickFnc(CWnd *pWnd){
	((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanyDblClick();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanySelectChange(nOldItem, nNewItem);
} 
static int _OnCompanyDeleteItemFnc(CWnd *pWnd){
	return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanyDeleteItem();
} 

static int _OnCompanySearchItemFnc(CWnd* pWnd)
{
	return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanySearchItem();
}
static int _OnCompanyCheckAllFnc(CWnd* pWnd)
{
	return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanyCheckAll();
}
static int _OnCompanyUncheckAllFnc(CWnd* pWnd)
{
	return ((CEMTongHopKetQuaKhamBenh*)pWnd)->OnCompanyUncheckAll();
}
CEMTongHopKetQuaKhamBenh::CEMTongHopKetQuaKhamBenh(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 190;
	//EMInitialize(pParent);
	SetDefaultValues();
}
CEMTongHopKetQuaKhamBenh::~CEMTongHopKetQuaKhamBenh(){
}
CEMTongHopKetQuaKhamBenh &CEMTongHopKetQuaKhamBenh::operator=(const CEMTongHopKetQuaKhamBenh& item)
{
	return *this;
}
void CEMTongHopKetQuaKhamBenh::OnCreateComponents(){
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
	m_wndAllSpeciality.Create(this, _T("All Speciality"), 95, 120, 255, 145);
	m_wndInDept.Create(this, _T("In Dept"), 260, 120, 370, 145);
	m_wndOutDept.Create(this, _T("Out Dept"), 375, 120, 485, 145);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 400, 410, 425);
	m_wndExport.Create(this, _T("&Export"), 415, 400, 490, 425);
	m_wndAllSpeciality.ShowWindow(SW_HIDE);
	m_wndInDept.ShowWindow(SW_HIDE);
	m_wndOutDept.ShowWindow(SW_HIDE);
	m_wndCompany.Create(this, 10, 120, 485, 390); 
	m_wndCompany.SetCheckBox(TRUE);
}
void CEMTongHopKetQuaKhamBenh::OnInitializeComponents(){
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

	m_wndCompany.InsertColumn(0, _T("Id"), CFMT_NUMBER, 100);
	m_wndCompany.InsertColumn(1, _T("Contract No"), CFMT_TEXT, 100);
	m_wndCompany.InsertColumn(2, _T("Description"), CFMT_TEXT, 150);
	m_wndCompany.InsertColumn(3, _T("Exam Date"), CFMT_DATE, 80);
	m_wndCompany.InsertColumn(4, _T("Type"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndCompany.InsertColumn(5, _T(""), CFMT_TEXT, 0);	//companyid
	m_wndCompany.InsertColumn(6, _T(""), CFMT_TEXT, 0);	//object
}
void CEMTongHopKetQuaKhamBenh::OnSetWindowEvents(){
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
void CEMTongHopKetQuaKhamBenh::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAllSpeciality.GetDlgCtrlID(), m_nAllSpeciality);
	DDX_Radio(pDX, m_wndInDept.GetDlgCtrlID(), m_nInDept);
	DDX_Radio(pDX, m_wndOutDept.GetDlgCtrlID(), m_nOutDept);

}
void CEMTongHopKetQuaKhamBenh::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMTongHopKetQuaKhamBenh::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMTongHopKetQuaKhamBenh::SetDefaultValues(){
	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nAllSpeciality=0;
	m_nInDept=1;
	m_nOutDept=1;

}
int CEMTongHopKetQuaKhamBenh::SetMode(int nMode){
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
/*void CEMTongHopKetQuaKhamBenh::OnYearChange(){
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnYearSetfocus(){
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnYearKillfocus(){
	
} */
int CEMTongHopKetQuaKhamBenh::OnYearCheckValue(){
	return 0;
} 
void CEMTongHopKetQuaKhamBenh::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMTongHopKetQuaKhamBenh::OnReportPeriodSelendok(){
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
/*void CEMTongHopKetQuaKhamBenh::OnReportPeriodSetfocus(){
	
}*/
/*void CEMTongHopKetQuaKhamBenh::OnReportPeriodKillfocus(){
	
}*/
long CEMTongHopKetQuaKhamBenh::OnReportPeriodLoadData(){
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
/*void CEMTongHopKetQuaKhamBenh::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnFromDateChange(){
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnFromDateSetfocus(){
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnFromDateKillfocus(){
	
} */
int CEMTongHopKetQuaKhamBenh::OnFromDateCheckValue(){
	OnCompanyLoadData();
	return 0;
} 
/*void CEMTongHopKetQuaKhamBenh::OnToDateChange(){
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnToDateSetfocus(){
	
} */
/*void CEMTongHopKetQuaKhamBenh::OnToDateKillfocus(){
	
} */
int CEMTongHopKetQuaKhamBenh::OnToDateCheckValue(){
	OnCompanyLoadData();
	return 0;
} 
void CEMTongHopKetQuaKhamBenh::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMTongHopKetQuaKhamBenh::OnDepartmentSelendok(){
	 
}
/*void CEMTongHopKetQuaKhamBenh::OnDepartmentSetfocus(){
	
}*/
/*void CEMTongHopKetQuaKhamBenh::OnDepartmentKillfocus(){
	
}*/
long CEMTongHopKetQuaKhamBenh::OnDepartmentLoadData(){
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
/*void CEMTongHopKetQuaKhamBenh::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMTongHopKetQuaKhamBenh::OnAllSpecialitySelect(){
	
}
void CEMTongHopKetQuaKhamBenh::OnInDeptSelect(){
	
}
void CEMTongHopKetQuaKhamBenh::OnOutDeptSelect(){
	
}
void CEMTongHopKetQuaKhamBenh::OnPrintPreviewSelect(){
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
void CEMTongHopKetQuaKhamBenh::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString tmpStr, szSQL;
	CRecord rs(&pMF->m_db);
	BeginWaitCursor();
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 10);
	xls.SetColumnWidth(1, 16);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 50);
	xls.SetColumnWidth(4, 20);
	int nCol = 0;
	int nRow = 0;
	
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 2, 5);
	xls.SetCellText(nCol, nRow + 2, _T("TỔNG HỢP KẾT QUẢ KHÁM BỆNH"), FMT_TEXT | FMT_CENTER, true, 14);
	xls.SetCellMergedColumns(nCol, nRow + 3, 5);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(nCol, nRow + 4, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 1, nRow + 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 2, nRow + 4, _T("Họ và tên"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 3, nRow + 4, _T("Kết luận"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 4, nRow + 4, _T("Phân loại sức khỏe"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol + 5, nRow + 4, _T("Ngày sinh"), FMT_TEXT | FMT_CENTER, true, 11);

	nRow = 5;
	int nIndex = 1;
	int nTotal[14];
	for (int i = 1; i<= 13; i++)
	{
		nTotal[i] = 0;
	}
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"),tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"),tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("conclusion"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("ptype"),tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
		
		xls.SetCellText(nCol + 5, nRow, rs.GetValue(_T("birth_date")), FMT_TEXT);
		nRow++;
		rs.MoveNext();		
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\TongHopKetQuaKhamBenh.xls"));
	
} 
void CEMTongHopKetQuaKhamBenh::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMTongHopKetQuaKhamBenh::OnAddEMTongHopKetQuaKhamBenh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMTongHopKetQuaKhamBenh::OnEditEMTongHopKetQuaKhamBenh(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMTongHopKetQuaKhamBenh::OnDeleteEMTongHopKetQuaKhamBenh(){
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
int CEMTongHopKetQuaKhamBenh::OnSaveEMTongHopKetQuaKhamBenh(){
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
int CEMTongHopKetQuaKhamBenh::OnCancelEMTongHopKetQuaKhamBenh(){
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
int CEMTongHopKetQuaKhamBenh::OnEMTongHopKetQuaKhamBenhListLoadData()
{
	return 0;
}
CString CEMTongHopKetQuaKhamBenh::GetQueryString()
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
		_T(" to_char(birth_date, 'dd/mm/yyyy') as birth_date") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT hp_birthdate as birth_date,") \
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
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}


void CEMTongHopKetQuaKhamBenh::OnCompanyDblClick(){

} 
void CEMTongHopKetQuaKhamBenh::OnCompanySelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 

} 
int CEMTongHopKetQuaKhamBenh::OnCompanyDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	return 0;
} 
long CEMTongHopKetQuaKhamBenh::OnCompanyLoadData(){
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

	szSQL.Format(_T(" SELECT DISTINCT hec_contract_id,") \
		_T("   hec_no,") \
		_T("   hec_company_id,") \
		_T("   hwp_name                            AS hec_company,") \
		_T("   TO_CHAR(he_examdate, 'DD/MM/YYYY') AS exmdate,") \
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
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND he_status <> 'O' AND he_deptid = '%s' %s ") \
		_T(" ORDER BY hec_contract_id"), m_szFromDate, m_szToDate, pMF->GetCurrentDepartmentID(), szWhere);
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

int CEMTongHopKetQuaKhamBenh::OnCompanySearchItem()
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

int CEMTongHopKetQuaKhamBenh::OnCompanyCheckAll()
{
	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		m_wndCompany.SetCheck(i);
	}
	return 0;
}

int CEMTongHopKetQuaKhamBenh::OnCompanyUncheckAll()
{
	for (int i = 0; i < m_wndCompany.GetItemCount(); i++)
	{
		m_wndCompany.SetCheck(i, FALSE);
	}
	return 0;
}