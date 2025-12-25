#include "rptDetailsPatientListReportReturnDrugDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailsPatientListReportReturnDrugDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailsPatientListReportReturnDrugDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnDoctorAddNew();
}*/


static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDetailsPatientListReportReturnDrugDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((rptDetailsPatientListReportReturnDrugDialog *)pWnd)->OnStockAddNew();
}*/

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptDetailsPatientListReportReturnDrugDialog *pVw = (rptDetailsPatientListReportReturnDrugDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptDetailsPatientListReportReturnDrugDialog *pVw = (rptDetailsPatientListReportReturnDrugDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptDetailsPatientListReportReturnDrugDialog *pVw = (rptDetailsPatientListReportReturnDrugDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptDetailsPatientListReportReturnDrugDialogFnc(CWnd *pWnd){
	 return ((rptDetailsPatientListReportReturnDrugDialog*)pWnd)->OnAddrptDetailsPatientListReportReturnDrugDialog();
} 
static int _OnEditrptDetailsPatientListReportReturnDrugDialogFnc(CWnd *pWnd){
	 return ((rptDetailsPatientListReportReturnDrugDialog*)pWnd)->OnEditrptDetailsPatientListReportReturnDrugDialog();
} 
static int _OnDeleterptDetailsPatientListReportReturnDrugDialogFnc(CWnd *pWnd){
	 return ((rptDetailsPatientListReportReturnDrugDialog*)pWnd)->OnDeleterptDetailsPatientListReportReturnDrugDialog();
} 
static int _OnSaverptDetailsPatientListReportReturnDrugDialogFnc(CWnd *pWnd){
	 return ((rptDetailsPatientListReportReturnDrugDialog*)pWnd)->OnSaverptDetailsPatientListReportReturnDrugDialog();
} 
static int _OnCancelrptDetailsPatientListReportReturnDrugDialogFnc(CWnd *pWnd){
	 return ((rptDetailsPatientListReportReturnDrugDialog*)pWnd)->OnCancelrptDetailsPatientListReportReturnDrugDialog();
} 
rptDetailsPatientListReportReturnDrugDialog::rptDetailsPatientListReportReturnDrugDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_bPreview = true;
}
rptDetailsPatientListReportReturnDrugDialog::~rptDetailsPatientListReportReturnDrugDialog(){
}
void rptDetailsPatientListReportReturnDrugDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 29, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
	m_wndStock.Create(this,115, 90, 395, 115);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 110, 145);
	m_wndDoctor.Create(this,115, 120, 395, 145);
	m_wndCheckStatus.Create(this,_T("Drug confirm"),10,155,145,180);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 155, 230, 180);
	m_wndPrint.Create(this, _T("&Export"), 235, 155, 315, 180);
	m_wndClose.Create(this, _T("&Close"), 320, 155, 400, 180);
}
void rptDetailsPatientListReportReturnDrugDialog::OnInitializeComponents(){
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
	m_wndStock.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void rptDetailsPatientListReportReturnDrugDialog::OnSetWindowEvents(){
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

	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
	//m_szStockKey = pMF->m_szDept;
//	m_szReportPeriodKey = _T("16");
	SetMode(VM_EDIT);
	
}
void rptDetailsPatientListReportReturnDrugDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_Check(pDX, m_wndCheckStatus.GetDlgCtrlID(), m_bStatus);	
}
void rptDetailsPatientListReportReturnDrugDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptDetailsPatientListReportReturnDrugDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptDetailsPatientListReportReturnDrugDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();
	m_szStockKey.Empty();
	
}
int rptDetailsPatientListReportReturnDrugDialog::SetMode(int nMode){
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
/*void rptDetailsPatientListReportReturnDrugDialog::OnYearChange(){
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnYearSetfocus(){
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnYearKillfocus(){
	
} */
int rptDetailsPatientListReportReturnDrugDialog::OnYearCheckValue(){
	return 0;
} 
void rptDetailsPatientListReportReturnDrugDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailsPatientListReportReturnDrugDialog::OnReportPeriodSelendok(){
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
/*void rptDetailsPatientListReportReturnDrugDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptDetailsPatientListReportReturnDrugDialog::OnReportPeriodKillfocus(){
	
}*/
long rptDetailsPatientListReportReturnDrugDialog::OnReportPeriodLoadData(){
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
/*void rptDetailsPatientListReportReturnDrugDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnFromDateChange(){
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnFromDateSetfocus(){
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnFromDateKillfocus(){
	
} */
int rptDetailsPatientListReportReturnDrugDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptDetailsPatientListReportReturnDrugDialog::OnToDateChange(){
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnToDateSetfocus(){
	
} */
/*void rptDetailsPatientListReportReturnDrugDialog::OnToDateKillfocus(){
	
} */
int rptDetailsPatientListReportReturnDrugDialog::OnToDateCheckValue(){
	return 0;
} 
void rptDetailsPatientListReportReturnDrugDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailsPatientListReportReturnDrugDialog::OnDoctorSelendok(){
	 
}
/*void rptDetailsPatientListReportReturnDrugDialog::OnDoctorSetfocus(){
	
}*/
/*void rptDetailsPatientListReportReturnDrugDialog::OnDoctorKillfocus(){
	
}*/
long rptDetailsPatientListReportReturnDrugDialog::OnDoctorLoadData(){
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
/*void rptDetailsPatientListReportReturnDrugDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

/*void rptDetailsPatientListReportReturnDrugDialog::OnStockKillfocus(){
	
}*/

void rptDetailsPatientListReportReturnDrugDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDetailsPatientListReportReturnDrugDialog::OnStockSelendok(){
	 
}
/*void rptDetailsPatientListReportReturnDrugDialog::OnStockSetfocus(){
	
}*/
/*void rptDetailsPatientListReportReturnDrugDialog::OnStockKillfocus(){
	
}*/

long rptDetailsPatientListReportReturnDrugDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
		szWhere.Format(_T(" and pmsl_stockid =%d "), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmsl_stockid as id, pmsl_name as name FROM pms_stocklist where 1=1 %s ORDER BY pmsl_stockid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptDetailsPatientListReportReturnDrugDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptDetailsPatientListReportReturnDrugDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	ExportPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey);
	
} 
void rptDetailsPatientListReportReturnDrugDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	ExportPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey);
} 
void rptDetailsPatientListReportReturnDrugDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptDetailsPatientListReportReturnDrugDialog::OnAddrptDetailsPatientListReportReturnDrugDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptDetailsPatientListReportReturnDrugDialog::OnEditrptDetailsPatientListReportReturnDrugDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptDetailsPatientListReportReturnDrugDialog::OnDeleterptDetailsPatientListReportReturnDrugDialog(){
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
 		OnCancelrptDetailsPatientListReportReturnDrugDialog(); 
 	}
	return 0;
}
int rptDetailsPatientListReportReturnDrugDialog::OnSaverptDetailsPatientListReportReturnDrugDialog(){
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
 		//OnrptDetailsPatientListReportReturnDrugDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptDetailsPatientListReportReturnDrugDialog::OnCancelrptDetailsPatientListReportReturnDrugDialog(){
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
int rptDetailsPatientListReportReturnDrugDialog::OnrptDetailsPatientListReportReturnDrugDialogListLoadData(){
	return 0;
}
void rptDetailsPatientListReportReturnDrugDialog::PrintPatientListReport(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview){
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
	
	
	if (!m_szStockKey.IsEmpty())	
		szWhere.AppendFormat( _T(" AND ho_deptid  = '%s' "), m_szStockKey);	

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
		_T(" WHERE ho_depttype ='I' and date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status not in('O') %s ") \
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
			_T(" ORDER BY type,idx"),nDocno ,nOrderID);

		rsl.ExecSQL(szSQL);		
		TCHAR *lszChar[] = {_T("I"), _T("II"), _T("I+II")};
		double nTotalAmount=0, nAmount=0,Cost=0;		
		int nItem = 0, nChar=0;
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

				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				rptDetail->GetItem(_T("8"))->SetBold(TRUE);
				rptDetail->GetItem(_T("8"))->SetItalic(TRUE);
				tmpStr.Format(_T("%s.  %s"), lszChar[nChar], szNewLine);
				rptDetail->SetValue(_T("8"), tmpStr);
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
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));			
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
			rptDetail->SetValue(_T("12"), tmpStr);
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
void rptDetailsPatientListReportReturnDrugDialog::ExportPatientListReport(CString szFromDate, CString szToDate, CString szDoctor){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd() ;
	CRecord rs(&pMF->m_db);
	CRecord	rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate,szFromDateToDate, szStatus;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	if (!m_szStockKey.IsEmpty())
	{
		szWhere.Format(_T(" and hdr_stockid =%d "),ToLong(m_szStockKey));
	}
	if(!szDoctor.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hdr_confirmby='%s' "), szDoctor);
	}
	
	szStatus.Format(_T(" and hdr_status <> 'O' "));
	if (m_bStatus)
		szStatus.Format(_T(" and hdr_status ='O' "));

	szSQL.Format(_T("SELECT (select sd_name from sys_dept where sd_id=deptid) as deptname,confirmdate, ") \
	_T("	sheetidx,itemid,docno, patientname,unit,drugname,userid,") \
	_T("	sum(qty) as qty,price, sum(qty)*price as Amount") \
	_T(" FROM ( ") \
	_T("	SELECT hdr_sheetidx as sheetidx, hdr_docno as docno,") \
	_T("		hp_surname||' '||hp_midname||' '||hp_firstname as patientname, ") \
	_T("		hdr_deptid as deptid ,") \
	_T("		hdr_itemid as itemid, ") \
	_T("		hdr_sitemid as sitemid, ") \
	_T("		pmi_name as Drugname, ") \
	_T("		pmi_unit as unit, ") \
	_T("		hdr_confirmby as userid, ") \
	_T("		hdr_confirmdate as confirmdate, ") \
	_T("		pmsi_vatprice as price, ") \
	_T("		hdr_Qty as qty ") \
	_T(" FROM hms_drug_return ") \
	_T(" LEFT JOIN hms_doc ON(hdr_docno=hd_docno) ") \
	_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno) ") \
	_T(" LEFT JOIN pms_stockitems ON(hdr_sitemid=pmsi_id) ") \
	_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid) ") \
	_T(" WHERE hdr_deptid ='%s' %s and date(hdr_confirmdate) between '%s' and '%s' %s and hdr_Qty > 0 ") \
	_T(" ) AS tblMain") \
	_T(" GROUP BY docno, patientname,deptid, itemid,confirmdate,unit,drugname,price,sheetidx,userID ") \
	_T(" ORDER BY deptname,docno,patientname,sheetidx,userID "),pMF->m_szDept, szStatus ,m_szFromDate, m_szToDate, szWhere);
		
//_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();	
	//Report Header
	
	BeginWaitCursor();

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	

	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,10);
	xls.SetColumnWidth(2,25);
	xls.SetColumnWidth(3,12);
	xls.SetColumnWidth(4,20);
	xls.SetColumnWidth(5,20);
	xls.SetColumnWidth(6,30);
	xls.SetColumnWidth(7,14);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	
	xls.SetRowHeight(8,30);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 3, m_wndStock.GetCurrent(1),FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,5,11);
	xls.SetCellMergedColumns(0,6,11);
	xls.SetCellText(0, 5, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N TR\x1EA2 L\x1EA0I THU\x1ED0\x43"),FMT_TEXT,true,12,TRUE);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 6, szFromDateToDate,FMT_TEXT,true,12);
	
	
	int nRow = 8, age=0;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sheet ID"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("User"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Drug Name"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Price"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Qty"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Amount"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);	

	
	
	int nIndex = 1,nItem=1;
	
	double	cost, Amount;
	TCHAR *lszChar[] = {_T("I"),_T("II"),_T("III")};
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()) 
	{
		AfxMessageBox(_T("No data"));
		return;
	}
	CString szOldLine, szNewLine,szDrugName;
	while(!rs.IsEOF())
	{	
			
		rs.GetValue(_T("DocNo"), tmpStr);	
		szNewLine = tmpStr;
		if(!szNewLine.IsEmpty() && szNewLine != szOldLine )
		{	
			if (Amount > 0 && nItem > 2)
			{
				nRow++;
				xls.SetCellText(6,nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,TRUE);
				tmpStr.Format(_T("%.2f"), Amount);
				xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1,TRUE);
			}
			nRow++;
			tmpStr.Format(_T("%d"), nIndex);
			xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1,TRUE);
			rs.GetValue(_T("DocNo"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER,TRUE);
			rs.GetValue(_T("PatientName"), tmpStr);
			xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,TRUE);
			rs.GetValue(_T("sheetidx"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,TRUE);
			rs.GetValue(_T("deptname"), tmpStr);
			xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,TRUE);
			rs.GetValue(_T("UserID"), tmpStr);
			xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,TRUE);
			nIndex++;
			nItem =1;
			Amount=0;
			szOldLine = szNewLine;
		}
		
		nRow++;
		rs.GetValue(_T("DrugName"), tmpStr);
		szDrugName.Format(_T("%d. %s"),nItem++,tmpStr);
		xls.SetCellText(6, nRow, szDrugName, FMT_TEXT);
		rs.GetValue(_T("Unit"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("Price"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Qty"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("Amount"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		Amount += cost;
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);
	
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	
	xls.Save(_T("Exports\\BangkechitietthuocvtPT-TT.xls"));	
	EndWaitCursor();	
	
}
