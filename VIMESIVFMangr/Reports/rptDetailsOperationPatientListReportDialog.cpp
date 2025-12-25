#include "rptDetailsOperationPatientListReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptDetailsOperationPatientListReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailsOperationPatientListReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptDetailsOperationPatientListReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptDetailsOperationPatientListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptDetailsOperationPatientListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailsOperationPatientListReportDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDoctorAddNew();
}*/


static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailsOperationPatientListReportDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((rptDetailsOperationPatientListReportDialog *)pWnd)->OnDeptAddNew();
}*/

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptDetailsOperationPatientListReportDialog *pVw = (rptDetailsOperationPatientListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptDetailsOperationPatientListReportDialog *pVw = (rptDetailsOperationPatientListReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptDetailsOperationPatientListReportDialog *pVw = (rptDetailsOperationPatientListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptDetailsOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailsOperationPatientListReportDialog*)pWnd)->OnAddrptDetailsOperationPatientListReportDialog();
} 
static int _OnEditrptDetailsOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailsOperationPatientListReportDialog*)pWnd)->OnEditrptDetailsOperationPatientListReportDialog();
} 
static int _OnDeleterptDetailsOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailsOperationPatientListReportDialog*)pWnd)->OnDeleterptDetailsOperationPatientListReportDialog();
} 
static int _OnSaverptDetailsOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailsOperationPatientListReportDialog*)pWnd)->OnSaverptDetailsOperationPatientListReportDialog();
} 
static int _OnCancelrptDetailsOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDetailsOperationPatientListReportDialog*)pWnd)->OnCancelrptDetailsOperationPatientListReportDialog();
} 
rptDetailsOperationPatientListReportDialog::rptDetailsOperationPatientListReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_bPreview = true;
}
rptDetailsOperationPatientListReportDialog::~rptDetailsOperationPatientListReportDialog(){
}
void rptDetailsOperationPatientListReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 29, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 110, 115);
	m_wndDept.Create(this,115, 90, 395, 115);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 110, 145);
	m_wndDoctor.Create(this,115, 120, 395, 145);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 155, 230, 180);
	m_wndPrint.Create(this, _T("&Export"), 235, 155, 315, 180);
	m_wndClose.Create(this, _T("&Close"), 320, 155, 400, 180);
}
void rptDetailsOperationPatientListReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
//	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void rptDetailsOperationPatientListReportDialog::OnSetWindowEvents(){
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
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);

	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
	m_szDeptKey = pMF->m_szDept;
//	m_szReportPeriodKey = _T("16");
	SetMode(VM_EDIT);
	
}
void rptDetailsOperationPatientListReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
}
void rptDetailsOperationPatientListReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptDetailsOperationPatientListReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptDetailsOperationPatientListReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();
	m_szDeptKey.Empty();
	
}
int rptDetailsOperationPatientListReportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void rptDetailsOperationPatientListReportDialog::OnYearChange(){
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnYearSetfocus(){
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnYearKillfocus(){
	
} */
int rptDetailsOperationPatientListReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptDetailsOperationPatientListReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailsOperationPatientListReportDialog::OnReportPeriodSelendok(){
	 CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d"), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d"), m_nYear, dte.GetMonthLastDay());
	}

	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d"), m_nYear, dte.GetMonthLastDay());
	}
	UpdateData(false);
}
/*void rptDetailsOperationPatientListReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptDetailsOperationPatientListReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptDetailsOperationPatientListReportDialog::OnReportPeriodLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void rptDetailsOperationPatientListReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnFromDateChange(){
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnFromDateKillfocus(){
	
} */
int rptDetailsOperationPatientListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptDetailsOperationPatientListReportDialog::OnToDateChange(){
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnToDateSetfocus(){
	
} */
/*void rptDetailsOperationPatientListReportDialog::OnToDateKillfocus(){
	
} */
int rptDetailsOperationPatientListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptDetailsOperationPatientListReportDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailsOperationPatientListReportDialog::OnDoctorSelendok(){
	 
}
/*void rptDetailsOperationPatientListReportDialog::OnDoctorSetfocus(){
	
}*/
/*void rptDetailsOperationPatientListReportDialog::OnDoctorKillfocus(){
	
}*/
long rptDetailsOperationPatientListReportDialog::OnDoctorLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//return pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void rptDetailsOperationPatientListReportDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void rptDetailsOperationPatientListReportDialog::OnDeptKillfocus(){
	
}*/

void rptDetailsOperationPatientListReportDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailsOperationPatientListReportDialog::OnDeptSelendok(){
	 
}
/*void rptDetailsOperationPatientListReportDialog::OnDeptSetfocus(){
	
}*/
/*void rptDetailsOperationPatientListReportDialog::OnDeptKillfocus(){
	
}*/

long rptDetailsOperationPatientListReportDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id ='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("Select sd_id as id,  sd_name as name from sys_dept where sd_type ='DT' %s"), szWhere);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptDetailsOperationPatientListReportDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptDetailsOperationPatientListReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	PrintOperationPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey, m_bPreview);
	
} 
void rptDetailsOperationPatientListReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	ExportOperationPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey);
} 
void rptDetailsOperationPatientListReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptDetailsOperationPatientListReportDialog::OnAddrptDetailsOperationPatientListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptDetailsOperationPatientListReportDialog::OnEditrptDetailsOperationPatientListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptDetailsOperationPatientListReportDialog::OnDeleterptDetailsOperationPatientListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelrptDetailsOperationPatientListReportDialog(); 
 	}
	return 0;
}
int rptDetailsOperationPatientListReportDialog::OnSaverptDetailsOperationPatientListReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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
 		//OnrptDetailsOperationPatientListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptDetailsOperationPatientListReportDialog::OnCancelrptDetailsOperationPatientListReportDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int rptDetailsOperationPatientListReportDialog::OnrptDetailsOperationPatientListReportDialogListLoadData(){
	return 0;
}
void rptDetailsOperationPatientListReportDialog::PrintOperationPatientListReport(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere,szListRoom,szDeptID, szNameRoom;
	CString szDate, szSysDate;
	szSysDate= pMF->GetSysDate(); 
	CReport rpt; 

	if(!rpt.Init(_T("Reports/HMS/HMS_BANGKECHITIETTHUOCVTTHPTTT.RPT")))
	return ;

	UpdateData(true);	
	
	
	if (!m_szDeptKey.IsEmpty())	
		szWhere.AppendFormat( _T(" AND ho_deptid  = '%s' "), m_szDeptKey);	

	if(!m_szDoctorKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_doctor = '%s' "), m_szDoctorKey);
	}

	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_doctor as doctor,") \
		_T(" ho_idx as OrderID") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE (hfl_report <> 'N' or hfl_report Is null) and ho_depttype ='I' and date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status not in('O') %s ") \
		_T(" ORDER BY OrderID,patientname"), m_szFromDate, m_szToDate, szWhere); 

	//_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data"));
		return;
	}
	
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;	
	long nOrderID, nDocno;
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);		
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("Address"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("operatype"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);		
		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("performdate"), tmpStr);
		rptDetail->SetValue(_T("11"), CDate::Convert(rs.GetValue(_T("performdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("doctor"), tmpStr);		
		rptDetail->SetValue(_T("12"), pMF->GetDoctorName(tmpStr));
		rs.GetValue(_T("docno"), nDocno);
		rs.GetValue(_T("OrderID"),nOrderID);

		szSQL.Format(_T(" SELECT idx, id, name, unit, type, ") \
			_T("	(select hfg_name from hms_feegroup where hfg_id=type) as TypeName, ") \
			_T("	price, sum(qty) as qty, sum(qty)*price as amount ") \
			_T(" FROM ( ") \
			_T("	SELECT hpol_idx as idx, pmi_id as id, ") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit as unit, ") \
			_T("	case when pmi_typeid = 'A9000' then pmi_typeid else 'A0000' end as type,") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	hpol_issueqty as qty") \
			_T(" FROM hms_operation ") \
			_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=ho_docno and trim(hpo_feeid)=cast(ho_idx as text))") \
			_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" WHERE ho_docno=%ld AND hpo_type='M' AND ho_idx=%ld") \
			_T(" ) As tbl ") \
			_T(" GROUP BY type,typename,id, name, unit, price, idx") \
			_T(" ORDER BY type,idx"), nDocno, nOrderID);

		rsl.ExecSQL(szSQL);
		//_msg(_T("%d"), ret);
		TCHAR *lszChar[] = {_T("I"), _T("II"), _T("I+II")};
		double nTotalAmount = 0, nAmount = 0, Cost = 0;		
		int nItem = 0, nChar = 0;
		CString szTmp;		
		CString szNewLine, szOldLine;
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF())
		{
			rsl.GetValue(_T("TypeName"), szNewLine);
			if(!szNewLine.IsEmpty() && szNewLine != szOldLine )
			{
				if (nAmount > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->GetItem(_T("8"))->SetBold(TRUE);
					rptDetail->GetItem(_T("8"))->SetItalic(TRUE);
					rptDetail->GetItem(_T("12"))->SetBold(TRUE);
					rptDetail->GetItem(_T("12"))->SetItalic(TRUE);
					tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nChar]);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(nAmount, tmpStr);
					rptDetail->SetValue(_T("12"), tmpStr);
					nTotalAmount += nAmount;
					nAmount =0;
					nChar++;					
				}

				if (nChar > 1)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->GetItem(_T("8"))->SetBold(TRUE);
					rptDetail->GetItem(_T("8"))->SetItalic(TRUE);
					rptDetail->GetItem(_T("12"))->SetBold(TRUE);
					rptDetail->GetItem(_T("12"))->SetItalic(TRUE);
					rptDetail->GetItem(_T("12"))->SetTextAlign(2);			
					tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[2]);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(nTotalAmount, tmpStr);
					rptDetail->SetValue(_T("12"), tmpStr);				
				}

				/*rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				rptDetail->GetItem(_T("8"))->SetBold(TRUE);
				rptDetail->GetItem(_T("8"))->SetItalic(TRUE);
				tmpStr.Format(_T("%s.  %s"), lszChar[nChar], szNewLine);
				rptDetail->SetValue(_T("8"), tmpStr);*/
				if (nChar < 1)
				{
					TranslateString(_T("Unit"),tmpStr);
					rptDetail->SetValue(_T("9"), tmpStr);
					TranslateString(_T("Price"),tmpStr);
					rptDetail->SetValue(_T("10"), tmpStr);
					TranslateString(_T("Qty"),tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);	
					TranslateString(_T("Total Amount"),tmpStr);
					rptDetail->SetValue(_T("12"), tmpStr);
					
					rptDetail->GetItem(_T("9"))->SetTextAlign(1);
					rptDetail->GetItem(_T("10"))->SetTextAlign(1);
					rptDetail->GetItem(_T("11"))->SetTextAlign(1);
					rptDetail->GetItem(_T("12"))->SetTextAlign(1);
				}
				nItem=0;
				szOldLine = szNewLine;
			}
			nItem++;
			/*rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));			
			tmpStr.Format(_T("%d. %s"), nItem, rsl.GetValue(_T("name")));			
			rptDetail->SetValue(_T("8"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);			
			rptDetail->SetValue(_T("9"), tmpStr);
			rsl.GetValue(_T("price"), Cost);
			FormatCurrency(Cost, tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);
			rsl.GetValue(_T("amount"), Cost);
			nAmount += Cost;
			FormatCurrency(Cost, tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);*/
			rsl.MoveNext();
		}
		if (nAmount > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->GetItem(_T("8"))->SetBold(TRUE);
			rptDetail->GetItem(_T("8"))->SetItalic(TRUE);
			rptDetail->GetItem(_T("12"))->SetBold(TRUE);
			rptDetail->GetItem(_T("12"))->SetItalic(TRUE);
			tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nChar]);
			rptDetail->SetValue(_T("8"), tmpStr);
			FormatCurrency(nAmount, tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);
			nTotalAmount += nAmount;		
		}

		if (nChar >= 1)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->GetItem(_T("8"))->SetBold(TRUE);
			rptDetail->GetItem(_T("8"))->SetItalic(TRUE);
			rptDetail->GetItem(_T("12"))->SetBold(TRUE);
			rptDetail->GetItem(_T("12"))->SetItalic(TRUE);
			tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[2]);
			rptDetail->SetValue(_T("8"), tmpStr);
			FormatCurrency(nTotalAmount, tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);				
		}
	
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();

}
void rptDetailsOperationPatientListReportDialog::ExportOperationPatientListReport(CString szFromDate, CString szToDate, CString szDoctor){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd() ;
	CRecord rs(&pMF->m_db);
	CRecord	rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate,szFromDateToDate;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and ho_deptid ='%s' "),m_szDeptKey);
	}
	if(!szDoctor.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_doctor='%s' "), szDoctor);
	}
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_createdby as doctor,") \
		_T(" ho_idx as OrderID") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE (hfl_report <> 'N' or hfl_report Is null) and ho_depttype ='I' and date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status <>'O' %s ") \
		_T(" ORDER BY OrderID,patientname"), m_szFromDate, m_szToDate, szWhere); 
//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();	
	//Report Header
	
	BeginWaitCursor();

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	

	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,25);
	xls.SetColumnWidth(2,8);
	xls.SetColumnWidth(3,8);
	xls.SetColumnWidth(4,20);
	xls.SetColumnWidth(5,40);
	xls.SetColumnWidth(6,9);
	xls.SetColumnWidth(7,45);
	xls.SetColumnWidth(8,15);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,15);
	xls.SetRowHeight(8,30);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 3, m_wndDept.GetCurrent(1),FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,5,11);
	xls.SetCellMergedColumns(0,6,11);
	xls.SetCellText(0, 5, _T("BANG KE THUOC-VTTH BENH NHAN LAM PT-TT"),FMT_TEXT,true,12,TRUE);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 6, szFromDateToDate,FMT_TEXT,true,12);
	
	
	int nRow = 8, age=0;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Age"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Card"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Desc"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Type"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Cost"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Date"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Doctor"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);

	
	
	int nIndex = 1;
	long	nOrderID,nDocno;
	TCHAR *lszChar[] = {_T("I"),_T("II"),_T("III")};
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()) 
	{
		AfxMessageBox(_T("No data"));
		return;
	}
	while(!rs.IsEOF())
	{
		nRow++;	
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("patientname"), tmpStr);		
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("Address"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("docno"), nDocno);
		tmpStr.Format(_T("%d"),nDocno);
		xls.SetCellText(6, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("operatype"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cost"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("performdate"), tmpStr);		
		xls.SetCellText(10, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE);
		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(11, nRow, pMF->GetDoctorName(tmpStr), FMT_TEXT);
		
		rs.GetValue(_T("OrderID"),nOrderID);

		szSQL.Format(_T(" SELECT idx, id, name, unit, type, ") \
			_T("	(select hfg_name from hms_feegroup where hfg_id=type) as TypeName, ") \
			_T("	price, sum(qty) as qty, sum(qty)*price as amount ") \
			_T(" FROM ( ") \
			_T("	SELECT hpol_idx as idx, pmi_id as id, ") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit as unit, ") \
			_T("	case when pmi_typeid = 'A9000' then pmi_typeid else 'A0000' end as type,") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	hpol_issueqty as qty") \
			_T(" FROM hms_operation ") \
			_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=ho_docno and trim(hpo_feeid)=cast(ho_idx as text))") \
			_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" WHERE ho_docno=%ld AND hpo_type='M' AND ho_idx=%ld") \
			_T(" ) As tbl ") \
			_T(" GROUP BY type,typename,id, name, unit, price, idx") \
			_T(" ORDER BY type,idx"),nDocno ,nOrderID);
		rsl.ExecSQL(szSQL);
		
		//_fmsg(_T("%s"), szSQL);
		double nTotalAmount=0, nAmount=0;		
		int nItem = 0, nGroup=0;
		CString szTmp;
		CString szNewLine, szOldLine;
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF())
		{	
			rsl.GetValue(_T("typeName"), szNewLine);			
			if (!szNewLine.IsEmpty() && szOldLine != szNewLine)
			{
				if(nAmount > 0)
				{
					nRow++;
					//xls.SetCellMergedColumns(1,nRow,6);
					//xls.SetCellMergedColumns(7,nRow,4);					
					tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nGroup]);
					xls.SetCellText(7,nRow,tmpStr,FMT_TEXT,true);
					tmpStr.Format(_T("%.2f"), nAmount);
					xls.SetCellText(11,nRow,tmpStr,FMT_NUMBER1,true);
					nTotalAmount += nAmount;
					nGroup ++;
					nAmount =0;
				}
				nRow++;
				//xls.SetCellMergedColumns(1,nRow,6);
				//xls.SetCellMergedColumns(7,nRow,5);
				tmpStr.Format(_T("%s.  %s"), lszChar[nGroup], szNewLine);
				xls.SetCellText(7,nRow,tmpStr,FMT_TEXT,true);

				if (nGroup < 1)
				{
					TranslateString(_T("Unit"),tmpStr);
					xls.SetCellText(8,nRow,tmpStr, FMT_TEXT, true);
					TranslateString(_T("Price"),tmpStr);
					xls.SetCellText(9,nRow,tmpStr, FMT_TEXT, true);
					TranslateString(_T("Qty"),tmpStr);
					xls.SetCellText(10,nRow,tmpStr, FMT_TEXT, true);
					TranslateString(_T("Total Amount"),tmpStr);
					xls.SetCellText(11,nRow,tmpStr, FMT_TEXT, true);
				}

				szOldLine = szNewLine;				
				nItem=0;				
			}
			
			nRow++;
			nItem++;
			//xls.SetCellMergedColumns(1,nRow,6);
			/*tmpStr.Format(_T("%d"),nItem ++);
			xls.SetCellText(6,nRow, tmpStr, FMT_INTEGER);*/
			tmpStr.Format(_T("%d. %s"),nItem,rsl.GetValue(_T("name")));			
			xls.SetCellText(7,nRow, tmpStr, FMT_TEXT);
			rsl.GetValue(_T("unit"), tmpStr);			
			xls.SetCellText(8,nRow, tmpStr, FMT_TEXT);
			rsl.GetValue(_T("price"), tmpStr);
			xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
			rsl.GetValue(_T("qty"), tmpStr);
			xls.SetCellText(10,nRow,	tmpStr, FMT_INTEGER);
			rsl.GetValue(_T("amount"), tmpStr);
			nAmount += ToFloat(tmpStr);
			xls.SetCellText(11,nRow, tmpStr,FMT_NUMBER1);		
			rsl.MoveNext();
		}
		
		if(nAmount > 0){
			nRow++;
			//xls.SetCellMergedColumns(1,nRow,6);
			//xls.SetCellMergedColumns(7,nRow,4);
			tmpStr.Format(_T("\x43\x1ED9ng(%s):"), lszChar[nGroup]);			
			xls.SetCellText(7,nRow,tmpStr,FMT_TEXT,true);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(11,nRow,tmpStr,FMT_NUMBER1,true);
			nTotalAmount += nAmount;
		}
			
		if(nGroup >= 1){
			nRow++;
			//xls.SetCellMergedColumns(1,nRow,6);
			//xls.SetCellMergedColumns(7,nRow,4);
			tmpStr.Format(_T("%.2f"), nTotalAmount);
			xls.SetCellText(7,nRow,_T("\x43\x1ED9ng(I+II):"),FMT_TEXT,true);
			xls.SetCellText(11,nRow,tmpStr,FMT_NUMBER1,true);					
		}		
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	
	xls.Save(_T("Exports\\BangkechitietthuocvtPT-TT.xls"));	
	EndWaitCursor();	
	
}
//cvtPT-TT.xls"));	
//	EndWaitCursor();	
	

