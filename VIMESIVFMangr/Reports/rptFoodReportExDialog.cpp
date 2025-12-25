#include "rptFoodReportExDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptFoodReportExDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptFoodReportExDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorAddNew();
}*/

static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptFoodReportExDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorAddNew();
}*/

static void _OnWardSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptFoodReportExDialog* )pWnd)->OnWardSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWardSelendokFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnWardSelendok();
}
/*static void _OnWardSetfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnWardKillfocusFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnWardLoadDataFnc(CWnd *pWnd){
	return ((rptFoodReportExDialog *)pWnd)->OnWardLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((rptFoodReportExDialog *)pWnd)->OnDoctorAddNew();
}*/


static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptFoodReportExDialog *pVw = (rptFoodReportExDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptFoodReportExDialog *pVw = (rptFoodReportExDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptFoodReportExDialog *pVw = (rptFoodReportExDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptFoodReportExDialogFnc(CWnd *pWnd){
	 return ((rptFoodReportExDialog*)pWnd)->OnAddrptFoodReportExDialog();
} 
static int _OnEditrptFoodReportExDialogFnc(CWnd *pWnd){
	 return ((rptFoodReportExDialog*)pWnd)->OnEditrptFoodReportExDialog();
} 
static int _OnDeleterptFoodReportExDialogFnc(CWnd *pWnd){
	 return ((rptFoodReportExDialog*)pWnd)->OnDeleterptFoodReportExDialog();
} 
static int _OnSaverptFoodReportExDialogFnc(CWnd *pWnd){
	 return ((rptFoodReportExDialog*)pWnd)->OnSaverptFoodReportExDialog();
} 
static int _OnCancelrptFoodReportExDialogFnc(CWnd *pWnd){
	 return ((rptFoodReportExDialog*)pWnd)->OnCancelrptFoodReportExDialog();
} 
rptFoodReportExDialog::rptFoodReportExDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_szTitle =_T("Bao cao danh sach duoc cap tien an");
	m_bPreview = true;
}
rptFoodReportExDialog::~rptFoodReportExDialog(){
}
void rptFoodReportExDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 180);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 30, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndDoctorLabel.Create(this, _T("Source"), 10, 90, 110, 115);
	m_wndDoctor.Create(this,115, 90, 395, 115); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 120, 110, 145);
	m_wndDept.Create(this,115, 120, 395, 145);
	m_wndWardLabel.Create(this, _T("Ward"), 10, 150, 110, 175);
	m_wndWard.Create(this,115, 150, 395, 175);

	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 185, 230, 210);
	m_wndPrint.Create(this, _T("&Print"), 235, 185, 315, 210);
	m_wndClose.Create(this, _T("&Close"), 320, 185, 400, 210);

}
void rptFoodReportExDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);

//	m_wndDoctor.SetCheckValue(true);
	m_wndDoctor.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndWard.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndWard.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void rptFoodReportExDialog::OnSetWindowEvents(){
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

	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	
	m_wndWard.SetEvent(WE_SELCHANGE, _OnWardSelectChangeFnc);
	m_wndWard.SetEvent(WE_LOADDATA, _OnWardLoadDataFnc);


	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("16");
	m_wndDept.EnableWindow(false);
	m_szDeptKey = pMF->m_szDept;
	UpdateData(false);
}
void rptFoodReportExDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndWard.GetDlgCtrlID(), m_szWardKey);

}
void rptFoodReportExDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptFoodReportExDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptFoodReportExDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDoctorKey.Empty();
	m_szDeptKey.Empty();

}
int rptFoodReportExDialog::SetMode(int nMode){
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
/*void rptFoodReportExDialog::OnYearChange(){
	
} */
/*void rptFoodReportExDialog::OnYearSetfocus(){
	
} */
/*void rptFoodReportExDialog::OnYearKillfocus(){
	
} */
int rptFoodReportExDialog::OnYearCheckValue(){
	return 0;
} 
void rptFoodReportExDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptFoodReportExDialog::OnReportPeriodSelendok(){
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
/*void rptFoodReportExDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptFoodReportExDialog::OnReportPeriodKillfocus(){
	
}*/
long rptFoodReportExDialog::OnReportPeriodLoadData(){
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
/*void rptFoodReportExDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptFoodReportExDialog::OnFromDateChange(){
	
} */
/*void rptFoodReportExDialog::OnFromDateSetfocus(){
	
} */
/*void rptFoodReportExDialog::OnFromDateKillfocus(){
	
} */
int rptFoodReportExDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptFoodReportExDialog::OnToDateChange(){
	
} */
/*void rptFoodReportExDialog::OnToDateSetfocus(){
	
} */
/*void rptFoodReportExDialog::OnToDateKillfocus(){
	
} */
int rptFoodReportExDialog::OnToDateCheckValue(){
	return 0;
} 
void rptFoodReportExDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptFoodReportExDialog::OnDoctorSelendok(){
	 
}
/*void rptFoodReportExDialog::OnDoctorSetfocus(){
	
}*/
/*void rptFoodReportExDialog::OnDoctorKillfocus(){
	
}*/
long rptFoodReportExDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
		szWhere.Format(_T("and cast(ss_code as integer) =%d "), ToLong(m_szDoctorKey));
	}
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_foodtravelsupport'  and ss_code not in('1','2') %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptFoodReportExDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void rptFoodReportExDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

void rptFoodReportExDialog::OnDeptSelendok(){
	 
}
/*void rptFoodReportExDialog::OnDeptSetfocus(){
	
}*/
/*void rptFoodReportExDialog::OnDeptKillfocus(){
	
}*/
long rptFoodReportExDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T("and sd_id ='%s' "), m_szDeptKey);
	}

	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type='DT' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptFoodReportExDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


void rptFoodReportExDialog::OnWardSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptFoodReportExDialog::OnWardSelendok(){
	 
}
/*void rptFoodReportExDialog::OnWardSetfocus(){
	
}*/
/*void rptFoodReportExDialog::OnWardKillfocus(){
	
}*/
long rptFoodReportExDialog::OnWardLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWard.IsSearchKey() && !m_szWardKey.IsEmpty()){
		szWhere.Format(_T(" and sw_id =%d"), str2int(m_szWardKey));
	}

	m_wndWard.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sw_id as id, sw_name as name FROM sys_ward  WHERE sw_deptid = '%s' %s ORDER BY id "),m_szDeptKey, szWhere);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWard.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptFoodReportExDialog::OnWardAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void rptFoodReportExDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	PrintFoodPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey, m_bPreview);
	
} 
void rptFoodReportExDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = false;
	PrintFoodPatientListReport(m_szFromDate, m_szToDate, m_szDoctorKey, m_bPreview);
} 
void rptFoodReportExDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptFoodReportExDialog::OnAddrptFoodReportExDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptFoodReportExDialog::OnEditrptFoodReportExDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptFoodReportExDialog::OnDeleterptFoodReportExDialog(){
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
 		OnCancelrptFoodReportExDialog(); 
 	}
	return 0;
}
int rptFoodReportExDialog::OnSaverptFoodReportExDialog(){
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
 		//OnrptFoodReportExDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptFoodReportExDialog::OnCancelrptFoodReportExDialog(){
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
int rptFoodReportExDialog::OnrptFoodReportExDialogListLoadData(){
	return 0;
}
void rptFoodReportExDialog::PrintFoodPatientListReport(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd() ;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CReport rpt; 
	long nSongay=0;
	long double Amount=0.0;
	double Cost=0.0;
	if(!szDoctor.IsEmpty())szWhere.Format(_T(" AND hfsl_type='%s' "), szDoctor);	

	if(!m_szDeptKey.IsEmpty()) szWhere.AppendFormat(_T(" and hfsl_facid ='%s' "), m_szDeptKey);

	if (!m_szWardKey.IsEmpty()) szWhere.AppendFormat(_T(" and htr_ward ='%s' "), m_szWardKey);
	

	szSQL.Format(_T(" SELECT (select sd_name from sys_dept where sd_id=facid) as deptid, ") \
		_T(" patientname,age,sex,Adress,name, cardno,docno,foodtype,dischargedate as enddte, ") \
		_T(" sum(sl) as sl,cost,sum(sl)*cost as amount, docno, facid, ") \
		_T(" (select hrl_name from hms_roomlist left join hms_bed on(hb_docno=docno and hb_deptid=facid) where hrl_id=hb_roomid and hrl_deptid=facid order by hb_idx desc limit 1) as roomname") \
		_T(" FROM (") \
		_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hms_getaddress(hp_provid,hp_distid,hp_villid) as Adress, ") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as foodtype, ") \
		_T(" 1 as sl, ") \
		_T(" hfsl_facid as facid, ")
		_T(" hfsl_amount as cost,") \
		_T(" hfsl_dte as performdate, ") \
		_T(" htr_dischargedate as dischargedate ") \
		_T(" FROM hms_foodtravelsupport_line") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno = hfsl_docno and htr_idx = hfsl_refidx) ") \
		_T(" LEFT JOIN hms_doc ON (hd_docno = hfsl_docno)") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno = hd_patientno) ") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=hfsl_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE date(hfsl_dte) BETWEEN date('%s') AND date('%s') AND hfsl_type not in('1','2') %s ") \
		_T(" ) As tbl ") \
		_T(" GROUP BY facid,patientname,age,sex,Adress, cardno,docno,foodtype,name,enddte,cost ") \
		_T(" ORDER BY facid,patientname"), szFromDate, szToDate, szWhere); 
	
	//_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/TM_DANHSACHBENHNHANDUOCHOTROTIENANEX.RPT"))) return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("Department"), m_wndDept.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("WARD"), m_wndWard.GetCurrent(1));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	CString szOldLine, szNewLine;
	int nIndex = 1;
	long double grpCost[12];
	long double ttlCost[12];
	double cost = 0;
	for (int i =0; i < 12; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

	while(!rs.IsEOF())
	{		
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("Age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("Sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);		
		rs.GetValue(_T("Adress"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		rs.GetValue(_T("sl"), Cost);
		grpCost[8]+=Cost;
		FormatCurrency(Cost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);		
		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("amount"), Cost);		
		grpCost[10]+=Cost;
		FormatCurrency(Cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);		
		rs.GetValue(_T("enddte"), tmpStr);		
		rptDetail->SetValue(_T("11"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));		
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);		
		rs.MoveNext();
	}

	for (int i =0; i < 11; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	if(grpCost[8] > 0){
		CString szField;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =5; i < 11; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[8] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("Tongkhoa"), szAmount);
		for (int i =5; i < 11; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);	
		}

	}
//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
