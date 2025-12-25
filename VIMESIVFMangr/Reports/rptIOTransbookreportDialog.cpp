#include "rptIOTransbookreportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnYearKillfocus();
} */
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((rptIOTransbookreportDialog*)pWnd)->OnInsuranceSelect();
}
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((rptIOTransbookreportDialog*)pWnd)->OnDiscountSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((rptIOTransbookreportDialog*)pWnd)->OnServiceSelect();
}

static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptIOTransbookreportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptIOTransbookreportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptIOTransbookreportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptIOTransbookreportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptIOTransbookreportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptIOTransbookreportDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((rptIOTransbookreportDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((rptIOTransbookreportDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptIOTransbookreportDialog *pVw = (rptIOTransbookreportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptIOTransbookreportDialog *pVw = (rptIOTransbookreportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptIOTransbookreportDialog *pVw = (rptIOTransbookreportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptIOTransbookreportDialogFnc(CWnd *pWnd){
	 return ((rptIOTransbookreportDialog*)pWnd)->OnAddrptIOTransbookreportDialog();
} 
static int _OnEditrptIOTransbookreportDialogFnc(CWnd *pWnd){
	 return ((rptIOTransbookreportDialog*)pWnd)->OnEditrptIOTransbookreportDialog();
} 
static int _OnDeleterptIOTransbookreportDialogFnc(CWnd *pWnd){
	 return ((rptIOTransbookreportDialog*)pWnd)->OnDeleterptIOTransbookreportDialog();
} 
static int _OnSaverptIOTransbookreportDialogFnc(CWnd *pWnd){
	 return ((rptIOTransbookreportDialog*)pWnd)->OnSaverptIOTransbookreportDialog();
} 
static int _OnCancelrptIOTransbookreportDialogFnc(CWnd *pWnd){
	 return ((rptIOTransbookreportDialog*)pWnd)->OnCancelrptIOTransbookreportDialog();
} 
rptIOTransbookreportDialog::rptIOTransbookreportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 190;
	SetDefaultValues();
	m_bPreview = true;
}
rptIOTransbookreportDialog::~rptIOTransbookreportDialog(){
}
void rptIOTransbookreportDialog::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 420, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 80, 55);
	m_wndYear.Create(this,85, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 210, 30, 290, 55);
	m_wndReportPeriod.Create(this,295, 30, 415, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 80, 85);
	m_wndFromDate.Create(this,85, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 60, 290, 85);
	m_wndToDate.Create(this,295, 60, 415, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 90, 80, 115);
	m_wndStatus.Create(this,85, 90, 415, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 170, 155, 250, 180);
	m_wndPrint.Create(this, _T("&Export"), 255, 155, 335, 180);
	m_wndClose.Create(this, _T("&Close"), 340, 155, 420, 180);
	m_wndInsurance.Create(this, _T("Insurance"), 105, 120, 205, 145);
	m_wndDiscount.Create(this, _T("Discount"), 210, 120, 310, 145);
	m_wndService.Create(this, _T("Service"), 315, 120, 415, 145);

}
void rptIOTransbookreportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
//	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
//	m_wndDoctor.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


}
void rptIOTransbookreportDialog::OnSetWindowEvents(){
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
	tmpStr = pMF->GetSysDateTime();
	m_nYear = ToInt(tmpStr.Left(4));
	//m_szFromDate = m_szToDate = tmpStr;
//	m_szReportPeriodKey = _T("16");
	SetMode(VM_EDIT);
}
void rptIOTransbookreportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);


}
void rptIOTransbookreportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptIOTransbookreportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptIOTransbookreportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_bInsurance=TRUE;
	m_bDiscount=TRUE;
	m_bService=TRUE;

}
int rptIOTransbookreportDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate dt;
		CDateTime dt1, dt2;
		dt.ParseDate(pMF->GetSysDate());
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, -1);
			dt1.SetDate(dt.GetYear(), dt.GetMonth(), dt.GetDay());
			dt1.SetTime(0, 1, 0);
			dt2.SetDate(dt.GetYear(), dt.GetMonth(), dt.GetDay());
			dt2.SetTime(23, 59, 0);
			m_szFromDate = dt1.GetDateTime();
			m_szToDate = dt2.GetDateTime();
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
/*void rptIOTransbookreportDialog::OnYearChange(){
	
} */
/*void rptIOTransbookreportDialog::OnYearSetfocus(){
	
} */
/*void rptIOTransbookreportDialog::OnYearKillfocus(){
	
} */
int rptIOTransbookreportDialog::OnYearCheckValue(){
	return 0;
} 
void rptIOTransbookreportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptIOTransbookreportDialog::OnReportPeriodSelendok(){
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
/*void rptIOTransbookreportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptIOTransbookreportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptIOTransbookreportDialog::OnReportPeriodLoadData(){
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
/*void rptIOTransbookreportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptIOTransbookreportDialog::OnFromDateChange(){
	
} */
/*void rptIOTransbookreportDialog::OnFromDateSetfocus(){
	
} */
/*void rptIOTransbookreportDialog::OnFromDateKillfocus(){
	
} */
int rptIOTransbookreportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptIOTransbookreportDialog::OnToDateChange(){
	
} */
/*void rptIOTransbookreportDialog::OnToDateSetfocus(){
	
} */
/*void rptIOTransbookreportDialog::OnToDateKillfocus(){
	
} */
int rptIOTransbookreportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptIOTransbookreportDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptIOTransbookreportDialog::OnStatusSelendok(){
	 
}
/*void rptIOTransbookreportDialog::OnStatusSetfocus(){
	
}*/
/*void rptIOTransbookreportDialog::OnStatusKillfocus(){
	
}*/
long rptIOTransbookreportDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code ='%s' ") , m_szStatusKey);
	};
	szSQL.Format(_T(" SELECT ss_code as id,ss_desc as name FROM sys_sel WHERE ss_id ='hms_suggestion' and ss_code in('A','T','D')  %s"), szWhere);
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
/*void rptIOTransbookreportDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptIOTransbookreportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bPreview = true;
	OnReportInpatientpatientlistreport();
	UpdateData(false);
	
} 
void rptIOTransbookreportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnExport();
	UpdateData(false);
} 
void rptIOTransbookreportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptIOTransbookreportDialog::OnAddrptIOTransbookreportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
}
int rptIOTransbookreportDialog::OnEditrptIOTransbookreportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptIOTransbookreportDialog::OnDeleterptIOTransbookreportDialog(){
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
 		OnCancelrptIOTransbookreportDialog(); 
 	}
	return 0;
}
int rptIOTransbookreportDialog::OnSaverptIOTransbookreportDialog(){
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
 		//OnrptIOTransbookreportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptIOTransbookreportDialog::OnCancelrptIOTransbookreportDialog(){
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
int rptIOTransbookreportDialog::OnrptIOTransbookreportDialogListLoadData(){
	return 0;
}
void rptIOTransbookreportDialog::OnInsuranceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptIOTransbookreportDialog::OnDiscountSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptIOTransbookreportDialog::OnServiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void rptIOTransbookreportDialog::OnReportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate, szAge;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
	BeginWaitCursor();
	if(!rpt.Init(_T("Reports/HMS/TM_SOVAOVIENRAVIENCHUYENVIEN.RPT")))
	{
		return ;
	}
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDateTime::Convert(szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),CDateTime::Convert(szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
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
	
	szWhere.Empty();
	if (!m_szStatusKey.IsEmpty())
	{
		if(m_szStatusKey==_T("A"))
		{
			szWhereDate.Format(_T("hcr_admitdate"));
			szWhere.Format(_T(" AND hcr_status='I' AND hcr_suggestion is null "));
		}
		else		
		if(m_szStatusKey==_T("D"))
		{
			szWhereDate.Format(_T("hcr_dischargedate"));
			szWhere.Format(_T(" and hcr_suggestion='D' and hcr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("T"))
		{
			szWhereDate.Format(_T("hcr_dischargedate"));
			szWhere.Format(_T(" and hcr_suggestion='T' and hcr_status='T' "));
		}		
	}
szSQL.Format(_T(" SELECT 	hd_docno as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hp_sex as sex,") \
		_T(" hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T(" hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T(" (select ss_desc from sys_sel where ss_id='sys_occupation' and cast(ss_code as int) =hp_occupation) as occupation,") \
		_T(" hd_cardno as cardno,") \
		_T(" hd_transplace as transferplace,") \
		_T(" hd_transdiagn as transferdiagnostic,") \
		_T(" hd_icd as icd,") \
		_T(" hd_diagnostic as diagnostic,") \
		_T(" trim(hcr_maindisease) as maindisease,") \
		_T(" trim(hcr_mainicd) as mainicd,") \
		_T(" (hcr_admitdate) as admitdate,") \
		_T(" case when hcr_suggestion in('D','T') then (hcr_dischargedate) else null end as dischargedate,") \
		_T(" case when hcr_suggestion ='T' then (hcr_dischargedate) else null end as Transhospitall,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='5' then 'X' else '' end as tuvong,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='6' then 'X' else '' end as tuvongtruoc24,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='1' then 'X' else '' end as Khoi,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='2' then 'X' else '' end as dogiam,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='3' then 'X' else '' end as khongthaydoi,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='4' then 'X' else '' end as Nang,") \
		_T(" case when hcr_status ='T' then (select sum(hb_treatqty) from hms_bed where hb_docno=hcr_docno) else 0 end as treatqty, ") \
		_T(" case when hcr_status ='I' then ( trunc_date('%s') - trunc_date(hcr_admitdate))+1 else 0 end as ngaydt") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T(" WHERE hcr_status in ('I','T') and (hcr_admitdate between '%s' and '%s' ) or  (hcr_dischargedate between '%s' and '%s' ) %s %s ") \
		_T(" ORDER BY docno "), m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate, szWhereObjects, szWhere) ;
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	int i,nIndex = 1 ;
	long docno=0, age=0, nTotalPatient=0;
	long c[30];
	for (i=0;i<=30;i++)
	{
		c[i]=0;
	}

	
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{ 			
		nTotalPatient++;
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			c[4]++;
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			c[5]++;

		}
		
		rs.GetValue(_T("cardno"), tmpStr);
		if(!tmpStr.IsEmpty()) c[6]++;
		rptDetail->SetValue(_T("6"), tmpStr);
		tmpStr.Empty();
		rs.GetValue(_T("age"),age);
		rs.GetValue(_T("age"),szAge);
		if (age <=6 || szAge.Right(1) ==_T("T") || szAge.Right(1) ==_T("N")) tmpStr.Format(_T("X"));
		if(!tmpStr.IsEmpty()) c[7]++;
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("occupation"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("transferplace"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		
		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("11"), CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));
		if(!tmpStr.IsEmpty()) c[11]++;
		rs.GetValue(_T("dischargedate"), tmpStr);
		rptDetail->SetValue(_T("12"), CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));
		if(!tmpStr.IsEmpty()) c[12]++;
		rs.GetValue(_T("Transhospitall"), tmpStr);
		rptDetail->SetValue(_T("13"), CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm));
		if(!tmpStr.IsEmpty()) c[13]++;
		
		rs.GetValue(_T("tuvong"), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		if(!tmpStr.IsEmpty()) c[14]++;
		rs.GetValue(_T("tuvongtruoc24"), tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
		if(!tmpStr.IsEmpty()) c[15]++;
	
		rs.GetValue(_T("diagnostic"), tmpStr);
		tmpStr.AppendFormat(_T("(%s)"), rs.GetValue(_T("icd")));
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("maindisease"), tmpStr);
//		tmpStr += rs.GetValue(_T("mainicd"));
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.GetValue(_T("khongthaydoi"), tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);
		if(!tmpStr.IsEmpty()) c[18]++;

		rs.GetValue(_T("khoi"), tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);
		if(!tmpStr.IsEmpty()) c[19]++;

		rs.GetValue(_T("Dogiam"), tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);
		if(!tmpStr.IsEmpty()) c[20]++;

		rs.GetValue(_T("Nang"), tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);
		if(!tmpStr.IsEmpty()) c[21]++;

		rs.GetValue(_T("treatqty"), tmpStr);
		if (tmpStr.IsEmpty()) rs.GetValue(_T("ngaydt"), tmpStr);

		rptDetail->SetValue(_T("22"), tmpStr);
		if(!tmpStr.IsEmpty()) c[22]+= ToInt(tmpStr);


		rs.MoveNext();
	}
	
	for(i=3;i<=22;i++)
	{	CString szFied;
		szFied.Format(_T("s%d"),i);
		tmpStr.Format(_T("%ld"),c[i]);				
		rpt.GetReportFooter()->SetValue(szFied, tmpStr);
	}

	tmpStr.Format(_T("%d"), docno);
	rpt.GetReportHeader()->SetValue(_T("ToNum"), tmpStr);
	tmpStr.Format(_T("%d"), nTotalPatient);
	rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);	
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();

}
void rptIOTransbookreportDialog::OnExport()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate, szAge;
	CReport rpt; 

	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	UpdateData(true);


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
	
	szWhere.Empty();
	if (!m_szStatusKey.IsEmpty())
	{
		if(m_szStatusKey==_T("A"))
		{
			szWhereDate.Format(_T("hcr_admitdate"));
			szWhere.Format(_T(" AND hcr_status='I' AND hcr_suggestion is null "));
		}
		else		
		if(m_szStatusKey==_T("D"))
		{
			szWhereDate.Format(_T("hcr_dischargedate"));
			szWhere.Format(_T(" and hcr_suggestion='D' and hcr_status='T' "));
		}
		else		
		if(m_szStatusKey==_T("T"))
		{
			szWhereDate.Format(_T("hcr_dischargedate"));
			szWhere.Format(_T(" and hcr_suggestion='T' and hcr_status='T' "));
		}		
	}

	szSQL.Format(_T(" SELECT 	hd_docno as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hp_sex as sex,") \
		_T(" hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T(" hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T(" (select ss_desc from sys_sel where ss_id='sys_occupation' and cast(ss_code as int) =hp_occupation) as occupation,") \
		_T(" hd_cardno as cardno,") \
		_T(" hd_transplace as transferplace,") \
		_T(" hd_transdiagn as transferdiagnostic,") \
		_T(" hd_icd as icd,") \
		_T(" hd_diagnostic as diagnostic,") \
		_T(" trim(hcr_maindisease) as maindisease,") \
		_T(" trim(hcr_mainicd) as mainicd,") \
		_T(" (hcr_admitdate) as admitdate,") \
		_T(" case when hcr_suggestion in('D','T') then (hcr_dischargedate) else null end as dischargedate,") \
		_T(" case when hcr_suggestion ='T' then (hcr_dischargedate) else null end as Transhospitall,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='5' then 'X' else '' end as tuvong,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='6' then 'X' else '' end as tuvongtruoc24,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='1' then 'X' else '' end as Khoi,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='2' then 'X' else '' end as dogiam,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='3' then 'X' else '' end as khongthaydoi,") \
		_T(" case when hcr_suggestion in('D','T') and hcr_result ='4' then 'X' else '' end as Nang,") \
		_T(" case when hcr_status ='T' then (select sum(hb_treatqty) from hms_bed where hb_docno=hcr_docno) else 0 end as treatqty, ") \
		_T(" case when hcr_status ='I' then ( trunc_date('%s') - trunc_date(hcr_admitdate))+1 else 0 end as ngaydt") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
		_T(" WHERE hcr_status in ('I','T') and (hcr_admitdate between '%s' and '%s' ) or  (hcr_dischargedate between '%s' and '%s' ) %s %s ") \
		_T(" ORDER BY docno "), m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate, szWhereObjects, szWhere) ;
	_fmsg(_T("%s"), szSQL);
	
	
	rs.ExecSQL(szSQL);
	
	CExcel xls;	
	CString xlsfile;
	//xlsfile.Format(_T("Exports\\SOVAOVIENRAVIENCHUYENVIEN.XLS"));
	//if(!pMF->DownloadFile(_T("ReportDemo.xls"), xlsfile))
	//	ShowMessageBox(_T("Can not download file from server."));
	//if(!xls.Load(xlsfile))
	//	return;

	xls.CreateSheet(1);
	xls.SetWorksheet(0);
		
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
	xls.MergeCell(3, 0, 0, 12);
	xls.SetCellText(5, 3, _T("Transfer - discharge - admission report"), FMT_TEXT, true,16,0);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(5, 4, tmpStr,FMT_TEXT,true,12,0);
	
	//xls.SetCellMergedColumns(0, 4, 12);

	
	
	int nRow = 7, age=0;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Age Female"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Age Man"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Card Number"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Children < 6 age"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Occupation"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Adress"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Instroduce Place"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Admitdate"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);	
	
	TranslateString(_T("Dischargedate"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Hospital Transfer"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Death"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);	

	TranslateString(_T("Died after 24 hours"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);		
	
	TranslateString(_T("Examine Disease"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Diagnosis"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("No change"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Good"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Help reduce"), tmpStr);
	xls.SetCellText(19, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Heavy"), tmpStr);
	xls.SetCellText(20, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("TreatQty"), tmpStr);
	xls.SetCellText(21, nRow, tmpStr, FMT_TEXT,true);


	int i, nIndex = 1 ;
	int c[22];
	long docno=0, nTotalPatient=0;
	
	for (i=0;i<=22;i++)
	{
		c[i]=0;
	}

	while(!rs.IsEOF())
	{ 			
		nRow++;		
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr,FMT_NUMBER1);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1,nRow, tmpStr,FMT_INTEGER);
		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("sex"), tmpStr);
		if(tmpStr == _T("M"))
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(3, nRow, tmpStr,FMT_NUMBER1);
		}
		else 
		{
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(4, nRow, tmpStr,FMT_NUMBER1);

		}

		rs.GetValue(_T("cardno"), tmpStr);
		if(!tmpStr.IsEmpty()) c[5]++;
		xls.SetCellText(5, nRow, tmpStr,FMT_TEXT);
		tmpStr.Empty();
		rs.GetValue(_T("age"),szAge);
		rs.GetValue(_T("age"),age);
		if (age <=6 || szAge.Right(1) ==_T("T") || szAge.Right(1) ==_T("N")) tmpStr.Format(_T("X"));
		if(!tmpStr.IsEmpty()) c[6]++;
		xls.SetCellText(6, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("Occupation"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr,FMT_TEXT);
		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("transferplace"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("admitdate"), tmpStr);
		xls.SetCellText(10, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm),FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[10]++;

		rs.GetValue(_T("dischargedate"), tmpStr);
		xls.SetCellText(11, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm),FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[11]++;

		rs.GetValue(_T("Transhospitall"), tmpStr);
		xls.SetCellText(12, nRow, CDateTime::Convert(tmpStr,yyyymmdd|hhmm,ddmmyyyy|hhmm),FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[12]++;
		
		rs.GetValue(_T("tuvong"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[13]++;
		rs.GetValue(_T("tuvongtruoc24"), tmpStr);
		xls.SetCellText(14, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[14]++;
	
		rs.GetValue(_T("diagnostic"), tmpStr);
		tmpStr.AppendFormat(_T("(%s)"), rs.GetValue(_T("icd")));
		xls.SetCellText(15, nRow, tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("maindisease"), tmpStr);
		tmpStr.AppendFormat(_T("(%s)"), rs.GetValue(_T("mainicd")));
		xls.SetCellText(16, nRow, tmpStr,FMT_TEXT);

		rs.GetValue(_T("khongthaydoi"), tmpStr);
		xls.SetCellText(17, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[17]++;

		rs.GetValue(_T("khoi"), tmpStr);
		xls.SetCellText(18, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[18]++;

		rs.GetValue(_T("Dogiam"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[19]++;

		rs.GetValue(_T("Nang"), tmpStr);
		xls.SetCellText(20, nRow, tmpStr,FMT_TEXT);
		if(!tmpStr.IsEmpty()) c[20]++;

		rs.GetValue(_T("treatqty"), tmpStr);
		if (tmpStr.IsEmpty()) rs.GetValue(_T("ngaydt"), tmpStr);

		xls.SetCellText(21, nRow, tmpStr,FMT_INTEGER);
		if(!tmpStr.IsEmpty()) c[21]+= ToInt(tmpStr);

		rs.MoveNext();
	}
	nRow++;
	xls.SetCellText(2, nRow, _T("Tong cong"),FMT_TEXT);
	for (int i =3; i< 22;i++)
	{
		tmpStr.Format(_T("%d"), c[i]);
		xls.SetCellText(i, nRow, tmpStr,FMT_INTEGER);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\SOVAOVIENRAVIENCHUYENVIEN.XLS"));	
}