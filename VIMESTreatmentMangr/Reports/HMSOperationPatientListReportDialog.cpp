#include "rptOperationPatientListReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientListReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOperationPatientListReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientListReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOperationPatientListReportDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientListReportDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDoctorAddNew();
}*/


static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOperationPatientListReportDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientListReportDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((rptOperationPatientListReportDialog *)pWnd)->OnDeptAddNew();
}*/

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptOperationPatientListReportDialog *pVw = (rptOperationPatientListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptOperationPatientListReportDialog *pVw = (rptOperationPatientListReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptOperationPatientListReportDialog *pVw = (rptOperationPatientListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReportDialog*)pWnd)->OnAddrptOperationPatientListReportDialog();
} 
static int _OnEditrptOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReportDialog*)pWnd)->OnEditrptOperationPatientListReportDialog();
} 
static int _OnDeleterptOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReportDialog*)pWnd)->OnDeleterptOperationPatientListReportDialog();
} 
static int _OnSaverptOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReportDialog*)pWnd)->OnSaverptOperationPatientListReportDialog();
} 
static int _OnCancelrptOperationPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientListReportDialog*)pWnd)->OnCancelrptOperationPatientListReportDialog();
} 
rptOperationPatientListReportDialog::rptOperationPatientListReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_bPreview = true;
}
rptOperationPatientListReportDialog::~rptOperationPatientListReportDialog(){
}
void rptOperationPatientListReportDialog::OnCreateComponents(){
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
void rptOperationPatientListReportDialog::OnInitializeComponents(){
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
void rptOperationPatientListReportDialog::OnSetWindowEvents(){
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
void rptOperationPatientListReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
}
void rptOperationPatientListReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptOperationPatientListReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptOperationPatientListReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();
	m_szDeptKey.Empty();
	
}
int rptOperationPatientListReportDialog::SetMode(int nMode){
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
/*void rptOperationPatientListReportDialog::OnYearChange(){
	
} */
/*void rptOperationPatientListReportDialog::OnYearSetfocus(){
	
} */
/*void rptOperationPatientListReportDialog::OnYearKillfocus(){
	
} */
int rptOperationPatientListReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptOperationPatientListReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientListReportDialog::OnReportPeriodSelendok(){
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
/*void rptOperationPatientListReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptOperationPatientListReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptOperationPatientListReportDialog::OnReportPeriodLoadData(){
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
/*void rptOperationPatientListReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptOperationPatientListReportDialog::OnFromDateChange(){
	
} */
/*void rptOperationPatientListReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptOperationPatientListReportDialog::OnFromDateKillfocus(){
	
} */
int rptOperationPatientListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptOperationPatientListReportDialog::OnToDateChange(){
	
} */
/*void rptOperationPatientListReportDialog::OnToDateSetfocus(){
	
} */
/*void rptOperationPatientListReportDialog::OnToDateKillfocus(){
	
} */
int rptOperationPatientListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptOperationPatientListReportDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientListReportDialog::OnDoctorSelendok(){
	 
}
/*void rptOperationPatientListReportDialog::OnDoctorSetfocus(){
	
}*/
/*void rptOperationPatientListReportDialog::OnDoctorKillfocus(){
	
}*/
long rptOperationPatientListReportDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDoctorList(&m_wndDoctor, m_szDoctorKey);
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
/*void rptOperationPatientListReportDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void rptOperationPatientListReportDialog::OnDeptKillfocus(){
	
}*/

void rptOperationPatientListReportDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientListReportDialog::OnDeptSelendok(){
	 
}
/*void rptOperationPatientListReportDialog::OnDeptSetfocus(){
	
}*/
/*void rptOperationPatientListReportDialog::OnDeptKillfocus(){
	
}*/

long rptOperationPatientListReportDialog::OnDeptLoadData(){
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
/*void rptOperationPatientListReportDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptOperationPatientListReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	PrintOperationPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey, m_bPreview);
	
} 
void rptOperationPatientListReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	ExportOperationPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey);
} 
void rptOperationPatientListReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptOperationPatientListReportDialog::OnAddrptOperationPatientListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptOperationPatientListReportDialog::OnEditrptOperationPatientListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptOperationPatientListReportDialog::OnDeleterptOperationPatientListReportDialog(){
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
 		OnCancelrptOperationPatientListReportDialog(); 
 	}
	return 0;
}
int rptOperationPatientListReportDialog::OnSaverptOperationPatientListReportDialog(){
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
 		//OnrptOperationPatientListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptOperationPatientListReportDialog::OnCancelrptOperationPatientListReportDialog(){
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
int rptOperationPatientListReportDialog::OnrptOperationPatientListReportDialogListLoadData(){
	return 0;
}
void rptOperationPatientListReportDialog::PrintOperationPatientListReport(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd() ;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
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
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_doctor as doctor") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status <>'O' %s ") \
		_T(" ORDER BY patientname"), szFromDate, szToDate, szWhere); 
//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/HMS_OPERATIONPATIENTLIST.RPT"))) return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("Dept"), m_wndDept.GetCurrent(1));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
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
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("operatype"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);		
		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("performdate"), tmpStr);
		rptDetail->SetValue(_T("10"), CDate::Convert(rs.GetValue(_T("performdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("11"), pMF->GetDoctorName(tmpStr));
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	
	rpt.PrintPreview();
	
}
void rptOperationPatientListReportDialog::ExportOperationPatientListReport(CString szFromDate, CString szToDate, CString szDoctor){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd() ;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
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
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_doctor as doctor") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status <>'O' %s ") \
		_T(" ORDER BY patientname"), szFromDate, szToDate, szWhere); 
//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();	
	//Report Header
	
	BeginWaitCursor();

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 3, m_wndDept.GetCurrent(1),FMT_TEXT,true,12,0);
	//xls.SetCellMergedColumns(0,5,11);	
	xls.SetCellText(0, 5, _T("DANH SACH BENH NHAN LAM PT-TT"),true,12,0);
	//xls.SetCellMergedColumns(0,6,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 6, tmpStr,FMT_TEXT,true,12,0);
	
	
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
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Desc"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	
	TranslateString(_T("Type"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Cost"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Date"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Doctor"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);

	
	
	int nIndex = 1;
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()) AfxMessageBox(_T("No data"));
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
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("operatype"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cost"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("performdate"), tmpStr);		
		xls.SetCellText(9, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE);
		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(10, nRow, pMF->GetDoctorName(tmpStr), FMT_TEXT);		
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	
	xls.Save(_T("Exports\\Bao cao danh sach benh nhan lam PT-TT.xls"));	
	EndWaitCursor();	
	
}
