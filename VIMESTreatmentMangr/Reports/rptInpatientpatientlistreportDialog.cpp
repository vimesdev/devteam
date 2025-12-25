#include "rptInpatientpatientlistreportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"

/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnYearKillfocus();
} */
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((rptInpatientpatientlistreportDialog*)pWnd)->OnInsuranceSelect();
}
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((rptInpatientpatientlistreportDialog*)pWnd)->OnDiscountSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((rptInpatientpatientlistreportDialog*)pWnd)->OnServiceSelect();
}

static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptInpatientpatientlistreportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptInpatientpatientlistreportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptInpatientpatientlistreportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptInpatientpatientlistreportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptInpatientpatientlistreportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptInpatientpatientlistreportDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((rptInpatientpatientlistreportDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((rptInpatientpatientlistreportDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptInpatientpatientlistreportDialog *pVw = (rptInpatientpatientlistreportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptInpatientpatientlistreportDialog *pVw = (rptInpatientpatientlistreportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptInpatientpatientlistreportDialog *pVw = (rptInpatientpatientlistreportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptInpatientpatientlistreportDialogFnc(CWnd *pWnd){
	 return ((rptInpatientpatientlistreportDialog*)pWnd)->OnAddrptInpatientpatientlistreportDialog();
} 
static int _OnEditrptInpatientpatientlistreportDialogFnc(CWnd *pWnd){
	 return ((rptInpatientpatientlistreportDialog*)pWnd)->OnEditrptInpatientpatientlistreportDialog();
} 
static int _OnDeleterptInpatientpatientlistreportDialogFnc(CWnd *pWnd){
	 return ((rptInpatientpatientlistreportDialog*)pWnd)->OnDeleterptInpatientpatientlistreportDialog();
} 
static int _OnSaverptInpatientpatientlistreportDialogFnc(CWnd *pWnd){
	 return ((rptInpatientpatientlistreportDialog*)pWnd)->OnSaverptInpatientpatientlistreportDialog();
} 
static int _OnCancelrptInpatientpatientlistreportDialogFnc(CWnd *pWnd){
	 return ((rptInpatientpatientlistreportDialog*)pWnd)->OnCancelrptInpatientpatientlistreportDialog();
} 
rptInpatientpatientlistreportDialog::rptInpatientpatientlistreportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 160;
	SetDefaultValues();
	m_bPreview = true;
}
rptInpatientpatientlistreportDialog::~rptInpatientpatientlistreportDialog()
{
}
void rptInpatientpatientlistreportDialog::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 156);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 204, 29, 304, 54);
	m_wndReportPeriod.Create(this,309, 29, 394, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 59, 110, 84);
	m_wndFromDate.Create(this,115, 59, 200, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 59, 305, 84);
	m_wndToDate.Create(this,310, 59, 395, 84); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 89, 110, 114);
	m_wndStatus.Create(this,115, 89, 395, 114); 
	m_wndInsurance.Create(this, _T("Insurance"), 48, 120, 151, 145);
	m_wndDiscount.Create(this, _T("Discount"), 156, 120, 259, 145);
	m_wndService.Create(this, _T("Service"), 264, 120, 367, 145);

	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 169, 230, 194);
	m_wndPrint.Create(this, _T("&Export"), 235, 169, 315, 194);
	m_wndClose.Create(this, _T("&Close"), 320, 169, 400, 194);


}
void rptInpatientpatientlistreportDialog::OnInitializeComponents()
{
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
	m_wndStatus.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


}
void rptInpatientpatientlistreportDialog::OnSetWindowEvents()
{
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndDiscount.SetEvent(WE_CLICK, _OnDiscountSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr = pMF->GetSysDate();
	m_nYear = ToInt(tmpStr.Left(4));
	m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("16");
	SetMode(VM_EDIT);
}
void rptInpatientpatientlistreportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);


}
void rptInpatientpatientlistreportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptInpatientpatientlistreportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptInpatientpatientlistreportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_bInsurance=TRUE;
	m_bDiscount=TRUE;
	m_bService=TRUE;

}
int rptInpatientpatientlistreportDialog::SetMode(int nMode){
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
/*void rptInpatientpatientlistreportDialog::OnYearChange(){
	
} */
/*void rptInpatientpatientlistreportDialog::OnYearSetfocus(){
	
} */
/*void rptInpatientpatientlistreportDialog::OnYearKillfocus(){
	
} */
int rptInpatientpatientlistreportDialog::OnYearCheckValue(){
	return 0;
} 
void rptInpatientpatientlistreportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptInpatientpatientlistreportDialog::OnReportPeriodSelendok(){
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
/*void rptInpatientpatientlistreportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptInpatientpatientlistreportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptInpatientpatientlistreportDialog::OnReportPeriodLoadData(){
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
/*void rptInpatientpatientlistreportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptInpatientpatientlistreportDialog::OnFromDateChange(){
	
} */
/*void rptInpatientpatientlistreportDialog::OnFromDateSetfocus(){
	
} */
/*void rptInpatientpatientlistreportDialog::OnFromDateKillfocus(){
	
} */
int rptInpatientpatientlistreportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptInpatientpatientlistreportDialog::OnToDateChange(){
	
} */
/*void rptInpatientpatientlistreportDialog::OnToDateSetfocus(){
	
} */
/*void rptInpatientpatientlistreportDialog::OnToDateKillfocus(){
	
} */
int rptInpatientpatientlistreportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptInpatientpatientlistreportDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptInpatientpatientlistreportDialog::OnStatusSelendok()
{
	//UpdateData(TRUE);
	//m_szStatus = m_wndStatus.GetCurrent(1);
}
/*void rptInpatientpatientlistreportDialog::OnStatusSetfocus(){
	
}*/
/*void rptInpatientpatientlistreportDialog::OnStatusKillfocus(){
	
}*/
long rptInpatientpatientlistreportDialog::OnStatusLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code ='%s' ") , m_szStatusKey);
	};
	szSQL.Format(_T(" SELECT ss_code as id,ss_desc as name FROM sys_sel WHERE ss_id ='hms_suggestion' %s ORDER BY ss_code"), szWhere);
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptInpatientpatientlistreportDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptInpatientpatientlistreportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	OnReportInpatientpatientlistreport();
	UpdateData(false);
	
} 
void rptInpatientpatientlistreportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);	
	OnExportInpatientpatientlistreport();
	UpdateData(false);
} 
void rptInpatientpatientlistreportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptInpatientpatientlistreportDialog::OnAddrptInpatientpatientlistreportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
}
int rptInpatientpatientlistreportDialog::OnEditrptInpatientpatientlistreportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptInpatientpatientlistreportDialog::OnDeleterptInpatientpatientlistreportDialog(){
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
 		OnCancelrptInpatientpatientlistreportDialog(); 
 	}
	return 0;
}
int rptInpatientpatientlistreportDialog::OnSaverptInpatientpatientlistreportDialog(){
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
 		//OnrptInpatientpatientlistreportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptInpatientpatientlistreportDialog::OnCancelrptInpatientpatientlistreportDialog(){
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
int rptInpatientpatientlistreportDialog::OnrptInpatientpatientlistreportDialogListLoadData(){
	return 0;
}
void rptInpatientpatientlistreportDialog::OnInsuranceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptInpatientpatientlistreportDialog::OnDiscountSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptInpatientpatientlistreportDialog::OnServiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void rptInpatientpatientlistreportDialog::OnReportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
	if(!rpt.Init(_T("Reports/HMS/HT_INPATIENTLISTREPORT.RPT")))
		return ;
	BeginWaitCursor();
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	//rpt.GetReportHeader()->SetValue(_T("status"), m_szStatus);
	//Report Detail
	
	szWhereObjects.Empty();
	tmpStr2 = _T("' '");
	if(m_bInsurance)
	{
		TranslateString(_T("Insurance"), tmpStr);
		szObjects.Format(_T("%s"), tmpStr);
		tmpStr2 += _T(",'I','C'");
	}
	if(m_bDiscount)
	{
		TranslateString(_T("Discount"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'D','Z'");
	}

	if(m_bService)
	{
		TranslateString(_T("Service"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'S','X'");
	}
	
	szWhereObjects.Format(_T(" AND ho_type in(%s) "), tmpStr2);
	szWhereDate.Format(_T("htr_admitdate"));
	
	szWhere.Empty();
	if (!m_szStatusKey.IsEmpty())
	{
		if(m_szStatusKey==_T("A"))
		{
			szWhereDate.Format(_T("htr_admitdate"));
			szWhere.Format(_T(" AND htr_status='A' AND htr_suggestion is null "));
		}
		else
		if(m_szStatusKey==_T("I"))
		{
			szWhereDate.Format(_T("htr_admitdate"));
			szWhere.Format(_T(" AND htr_status='I' AND htr_suggestion is null "));
		}
		else
		if(m_szStatusKey==_T("D"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='D' and htr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("O"))
		{
			szWhereDate.Format(_T("htr_admitdate"));
			szWhere.Format(_T(" AND htr_outpatient = 'Y'"));
		}
		else
		if(m_szStatusKey==_T("T"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='T' and htr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("M"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='M' "));
		}
		else if (m_szStatusKey.Trim() == _T("F"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='F' and htr_status='T' "));
		}
	}
//Danh sachs benh nhan dang dieu tri
szSQL.Format(_T(" SELECT suggestion, docno,admitdate,dischargedate, pname, age,sex, address,maindisease,doctor,tdeptid, ") \
	_T(" 	(select hrl_name from hms_roomlist left join hms_bed on(hb_docno=docno and hb_deptid=htr_deptid) where hrl_id=hb_roomid and hrl_deptid=htr_deptid order by hb_idx desc limit 1) as roomid,") \
	_T(" 	(select hbl_name from hms_bedlist left join hms_bed on(hb_docno = docno and hb_deptid=htr_deptid) where hbl_id=hb_idx and hbl_roomid=hb_roomid and hbl_deptid=htr_deptid order by hb_idx desc limit 1) as bedid,") \
	_T(" 	cardno, object") \
	_T(" FROM ( ") \
	_T(" SELECT case when htr_status = 'A' then 'A' ")\
	_T("	when htr_status ='I' then 'I'	else htr_suggestion end as suggestion, ") \
	_T("	date(htr_admitdate) as admitdate,") \
	_T(" 	date(htr_dischargedate) as dischargedate,") \
	_T(" 	htr_docno as docno,") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
	_T(" 	hp_sex as sex,") \
	_T("	hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
	_T(" 	htr_maindisease as maindisease,") \
	_T(" 	htr_doctor as doctor, ") \
	_T(" 	htr_deptid, ") \
	_T("	sd_name as tdeptid, ")\
	_T(" 	hd_cardno as cardno, ") \
	_T(" 	ho_desc as object ") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_treatment_record ON(hd_docno=htr_docno)") \
	_T(" LEFT JOIN sys_dept on (sd_id=htr_tdeptid)")\
	_T(" LEFT JOIN hms_object ON(hd_object=ho_id) ") \
	_T(" WHERE 	htr_deptid='%s' ") \
	_T(" 	and date(%s) between date('%s') and date('%s') %s %s ") \
	_T(" ) AS TblMain ") \
	_T(" GROUP BY suggestion, docno,admitdate,dischargedate, pname, age,sex, address,roomid,bedid, maindisease,doctor,cardno,object,tdeptid ") \
	_T(" ORDER BY suggestion,pname") , pMF->m_szDept, szWhereDate,m_szFromDate, m_szToDate, szWhere, szWhereObjects); 

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	long double grpCost[17];
	long double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);

	for (int i =0; i <= 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

		while(!rs.IsEOF())
		{
			rs.GetValue(_T("suggestion"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost[4] > 0)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					for (int i =3; i < 17; i++)
					{
						tmpStr.Format(_T("(%s)"),szOldLine);
						rptDetail->SetValue(_T("TotalGroup"), szAmount + tmpStr);
						szField.Format(_T("S%d"), i);										
						FormatCurrency(grpCost[i], tmpStr);
						rptDetail->SetValue(szField, tmpStr);
						ttlCost[i] += grpCost[i];					
						grpCost[i] = 0;				
					}
				}
				tmpStr = pMF->GetSelectionString(_T("hms_suggestion"), szNewLine);
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
				rptDetail->SetValue(_T("GroupName"), tmpStr);
				szOldLine = szNewLine;
				nIndex=1;
			}

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("0"), tmpStr);
			rs.GetValue(_T("admitdate"), tmpStr);
			rptDetail->SetValue(_T("1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("dischargedate"), tmpStr);
			rptDetail->SetValue(_T("2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("docno"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("sex"), tmpStr);
			rptDetail->SetValue(_T("6"), pMF->GetSelectionString(_T("sys_sex"), tmpStr));
			rs.GetValue(_T("address"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			rs.GetValue(_T("roomid"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			rs.GetValue(_T("bedid"), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			rs.GetValue(_T("maindisease"), tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			rs.GetValue(_T("doctor"), tmpStr);
			rptDetail->SetValue(_T("11"), pMF->GetDoctorName(tmpStr.Trim()));
			rs.GetValue(_T("cardno"), tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);
			rs.GetValue(_T("object"), tmpStr);
			rptDetail->SetValue(_T("13"), tmpStr);
			rs.GetValue(_T("tdeptid"), tmpStr);
			rptDetail->SetValue(_T("14"), tmpStr);

			rs.MoveNext();
		}
	//Page Footer
	//Report Footer
	UpdateData(false);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	if(m_bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

void rptInpatientpatientlistreportDialog::OnExportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
	//Report Detail
	BeginWaitCursor();
	szWhereObjects.Empty();
	tmpStr2 = _T("' '");
	if(m_bInsurance)
	{
		TranslateString(_T("Insurance"), tmpStr);
		szObjects.Format(_T("%s"), tmpStr);
		tmpStr2 += _T(",'I','C'");
	}
	if(m_bDiscount)
	{
		TranslateString(_T("Discount"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'D','Z'");
	}

	if(m_bService)
	{
		TranslateString(_T("Service"), tmpStr);
		if(!szObjects.IsEmpty())
			szObjects += _T("; ");
		szObjects.AppendFormat(_T("%s"), tmpStr);
		tmpStr2 += _T(",'S','X'");
	}
	
	szWhereObjects.Format(_T(" AND ho_type in(%s) "), tmpStr2);
	szWhereDate.Format(_T("htr_admitdate"));
	
	szWhere.Empty();
	if (!m_szStatusKey.IsEmpty())
	{
		if(m_szStatusKey==_T("A"))
		{
			szWhereDate.Format(_T("htr_admitdate"));
			szWhere.Format(_T(" AND htr_status='A' AND htr_suggestion is null "));
		}
		else
		if(m_szStatusKey==_T("I"))
		{
			szWhereDate.Format(_T("htr_admitdate"));
			szWhere.Format(_T(" AND htr_status='I' AND htr_suggestion is null "));
		}
		else
		if(m_szStatusKey==_T("D"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='D' and htr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("O"))
		{
			szWhereDate.Format(_T("htr_admitdate"));
			szWhere.Format(_T(" AND htr_outpatient = 'Y'"));
		}
		else
		if(m_szStatusKey==_T("T"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='T' and htr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("M"))
		{
			szWhereDate.Format(_T("htr_dischargedate"));
			szWhere.Format(_T(" and htr_suggestion='M' "));
		}		
	}
//Danh sachs benh nhan dang dieu tri
szSQL.Format(_T(" SELECT suggestion, docno,admitdate,dischargedate, pname, age,sex, address,maindisease,doctor,tdeptid, ") \
	_T(" 	(select hrl_name from hms_roomlist left join hms_bed on(hb_docno=docno and hb_deptid=htr_deptid) where hrl_id=hb_roomid and hrl_deptid=htr_deptid order by hb_idx desc limit 1) as roomid,") \
	_T(" 	(select hbl_name from hms_bedlist left join hms_bed on(hb_docno = docno and hb_deptid=htr_deptid) where hbl_id=hb_idx and hbl_roomid=hb_roomid and hbl_deptid=htr_deptid order by hb_idx desc limit 1) as bedid,") \
	_T(" 	cardno, object") \
	_T(" FROM ( ") \
	_T(" SELECT case when htr_status = 'A' then 'A' ")\
	_T("	when htr_status ='I' then 'I'	else htr_suggestion end as suggestion, ") \
	_T("	date(htr_admitdate) as admitdate,") \
	_T(" 	date(htr_dischargedate) as dischargedate,") \
	_T(" 	htr_docno as docno,") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
	_T(" 	hp_sex as sex,") \
	_T("	hms_getaddress(hp_provid,hp_distid,hp_villid) as address, ") \
	_T(" 	htr_maindisease as maindisease,") \
	_T(" 	htr_doctor as doctor, ") \
	_T(" 	htr_deptid, ") \
	_T("	sd_name as tdeptid, ")\
	_T(" 	hd_cardno as cardno, ") \
	_T(" 	ho_desc as object ") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_treatment_record ON(hd_docno=htr_docno)") \
	_T(" LEFT JOIN sys_dept on (sd_id=htr_tdeptid)")\
	_T(" LEFT JOIN hms_object ON(hd_object=ho_id) ") \
	_T(" WHERE 	htr_deptid='%s' ") \
	_T(" 	and date(%s) between date('%s') and date('%s') %s %s ") \
	_T(" ) AS TblMain ") \
	_T(" GROUP BY suggestion, docno,admitdate,dischargedate, pname, age,sex, address,roomid,bedid, maindisease,doctor,cardno,object,tdeptid ") \
	_T(" ORDER BY suggestion,pname") , pMF->m_szDept, szWhereDate,m_szFromDate, m_szToDate, szWhere, szWhereObjects); 

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,3,14);	
	xls.SetCellText(0, 4, _T("BAO CAO DANH SACH BENH NHAN DIEU TRI"), FMT_TEXT, true,16,0);
	xls.SetCellMergedColumns(0,4,14);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	
	
	int nRow = 7, age=0;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT, true);	
	TranslateString(_T("Admitdate"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("Dischargedate"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Object"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Card No"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Adress"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Room"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("Bed"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Diagnosis"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Doctor"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("tdeptid"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);

	int nIndex = 1;
	CString szOldLine, szNewLine;
	
	double grpCost[17];
	double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);

	for (int i =0; i <= 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

		while(!rs.IsEOF())
		{
			rs.GetValue(_T("suggestion"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost[4] > 0)
				{
					nRow++;
					for (int i =3; i < 17; i++)
					{
						tmpStr.Format(_T("Total (%s)"),szOldLine);						
						xls.SetCellText(0, nRow,  tmpStr, FMT_TEXT,true);						
						FormatCurrency(grpCost[i], tmpStr);
						xls.SetCellText(i, nRow, tmpStr, FMT_INTEGER,true);
						ttlCost[i] += grpCost[i];					
						grpCost[i] = 0;				
					}
				}
				nRow++;
				tmpStr = pMF->GetSelectionString(_T("hms_suggestion"), szNewLine);				
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
				szOldLine = szNewLine;
				nIndex=1;
			}

			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
			rs.GetValue(_T("admitdate"), tmpStr);			
			xls.SetCellText(1, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
			rs.GetValue(_T("dischargedate"), tmpStr);
			xls.SetCellText(2, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
			rs.GetValue(_T("docno"), tmpStr);
			xls.SetCellText(3, nRow,tmpStr, FMT_INTEGER);
			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(4, nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(5, nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("sex"), tmpStr);			
			xls.SetCellText(6, nRow,pMF->GetSelectionString(_T("sys_sex"), tmpStr), FMT_TEXT);

			rs.GetValue(_T("object"), tmpStr);			
			xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("cardno"), tmpStr);			
			xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("address"), tmpStr);
			xls.SetCellText(9, nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("roomid"), tmpStr);
			xls.SetCellText(10, nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("bedid"), tmpStr);
			xls.SetCellText(11, nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("maindisease"), tmpStr);
			xls.SetCellText(12, nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("doctor"), tmpStr);			
			xls.SetCellText(13, nRow,pMF->GetDoctorName(tmpStr.Trim()), FMT_TEXT);
			rs.GetValue(_T("tdeptid"), tmpStr);
			xls.SetCellText(14, nRow,tmpStr, FMT_TEXT);

			rs.MoveNext();
		}
	//Page Footer
	//Report Footer
	xls.Save(_T("Exports\\Danh sach benh nhan vao vien.xls"));
	EndWaitCursor();
	UpdateData(false);
	
}
