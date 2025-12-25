#include "rptDepositRefundPatientListReportDialog.h"
#include "ReportDocument.h"
#include "Excel.h"
#include "../MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptDepositRefundPatientListReportDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDepositRefundPatientListReportDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptDepositRefundPatientListReportDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptDepositRefundPatientListReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptDepositRefundPatientListReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDepositRefundPatientListReportDialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptDepositRefundPatientListReportDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptDepositRefundPatientListReportDialog *pVw = (rptDepositRefundPatientListReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptDepositRefundPatientListReportDialog *pVw = (rptDepositRefundPatientListReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptDepositRefundPatientListReportDialog *pVw = (rptDepositRefundPatientListReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptDepositRefundPatientListReportDialog *pVw = (rptDepositRefundPatientListReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDepositRefundPatientListReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((rptDepositRefundPatientListReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((rptDepositRefundPatientListReportDialog *)pWnd)->OnObjectAddNew();
}*/
static int _OnAddrptDepositRefundPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDepositRefundPatientListReportDialog*)pWnd)->OnAddrptDepositRefundPatientListReportDialog();
} 
static int _OnEditrptDepositRefundPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDepositRefundPatientListReportDialog*)pWnd)->OnEditrptDepositRefundPatientListReportDialog();
} 
static int _OnDeleterptDepositRefundPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDepositRefundPatientListReportDialog*)pWnd)->OnDeleterptDepositRefundPatientListReportDialog();
} 
static int _OnSaverptDepositRefundPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDepositRefundPatientListReportDialog*)pWnd)->OnSaverptDepositRefundPatientListReportDialog();
} 
static int _OnCancelrptDepositRefundPatientListReportDialogFnc(CWnd *pWnd){
	 return ((rptDepositRefundPatientListReportDialog*)pWnd)->OnCancelrptDepositRefundPatientListReportDialog();
} 
rptDepositRefundPatientListReportDialog::rptDepositRefundPatientListReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 155;
	m_szTitle=_T("Refund Patient List");
	SetDefaultValues();
}
rptDepositRefundPatientListReportDialog::~rptDepositRefundPatientListReportDialog(){
}
void rptDepositRefundPatientListReportDialog::OnCreateComponents(){
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 240, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 245, 30, 345, 55);
	m_wndReportPeriod.Create(this,350, 30, 475, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 240, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 60, 345, 85);
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 480, 120);
	m_wndToDate.Create(this,350, 60, 475, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 240, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 245, 90, 345, 115);
	m_wndObject.Create(this,350, 90, 475, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 145, 125, 225, 150);
	m_wndPrint.Create(this, _T("&Print"), 230, 125, 310, 150);
	m_wndExport.Create(this, _T("&Export"), 315, 125, 395, 150);
	m_wndClose.Create(this, _T("&Close"), 400, 125, 480, 150);

}
void rptDepositRefundPatientListReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndReportPeriod.Format(2, 1, 17);
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void rptDepositRefundPatientListReportDialog::OnSetWindowEvents(){
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
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDateTime();
	SetMode(VM_EDIT);
}
void rptDepositRefundPatientListReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);

}
void rptDepositRefundPatientListReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptDepositRefundPatientListReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptDepositRefundPatientListReportDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szObjectKey.Empty();

}
int rptDepositRefundPatientListReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1,2,3, -1); 
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
/*void rptDepositRefundPatientListReportDialog::OnYearChange(){
	
} */
/*void rptDepositRefundPatientListReportDialog::OnYearSetfocus(){
	
} */
/*void rptDepositRefundPatientListReportDialog::OnYearKillfocus(){
	
} */
int rptDepositRefundPatientListReportDialog::OnYearCheckValue(){
	return 0;
} 
void rptDepositRefundPatientListReportDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDepositRefundPatientListReportDialog::OnReportPeriodSelendok(){
	
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
/*void rptDepositRefundPatientListReportDialog::OnReportPeriodSetfocus(){
	
}*/
/*void rptDepositRefundPatientListReportDialog::OnReportPeriodKillfocus(){
	
}*/
long rptDepositRefundPatientListReportDialog::OnReportPeriodLoadData(){
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
/*void rptDepositRefundPatientListReportDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptDepositRefundPatientListReportDialog::OnFromDateChange(){
	
} */
/*void rptDepositRefundPatientListReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptDepositRefundPatientListReportDialog::OnFromDateKillfocus(){
	
} */
int rptDepositRefundPatientListReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptDepositRefundPatientListReportDialog::OnToDateChange(){
	
} */
/*void rptDepositRefundPatientListReportDialog::OnToDateSetfocus(){
	
} */
/*void rptDepositRefundPatientListReportDialog::OnToDateKillfocus(){
	
} */
int rptDepositRefundPatientListReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptDepositRefundPatientListReportDialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDepositRefundPatientListReportDialog::OnClerkSelendok(){
	 
}
/*void rptDepositRefundPatientListReportDialog::OnClerkSetfocus(){
	
}*/
/*void rptDepositRefundPatientListReportDialog::OnClerkKillfocus(){
	
}*/
long rptDepositRefundPatientListReportDialog::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);
		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptDepositRefundPatientListReportDialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptDepositRefundPatientListReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = true;
	PrintRefundPatientListReport(m_szFromDate, m_szToDate, m_szClerkKey);

} 
void rptDepositRefundPatientListReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview = false;		
	PrintRefundPatientListReport(m_szFromDate, m_szToDate, m_szClerkKey);
} 
void rptDepositRefundPatientListReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	RefundPatientListReportToExcell(m_szFromDate, m_szToDate, m_szClerkKey);		
} 
void rptDepositRefundPatientListReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void rptDepositRefundPatientListReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDepositRefundPatientListReportDialog::OnObjectSelendok(){
	 
}
/*void rptDepositRefundPatientListReportDialog::OnObjectSetfocus(){
	
}*/
/*void rptDepositRefundPatientListReportDialog::OnObjectKillfocus(){
	
}*/
long rptDepositRefundPatientListReportDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" where ho_id='%s'"), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select ho_type as id, ho_desc as name from hms_object %s order by cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptDepositRefundPatientListReportDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int rptDepositRefundPatientListReportDialog::OnAddrptDepositRefundPatientListReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptDepositRefundPatientListReportDialog::OnEditrptDepositRefundPatientListReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptDepositRefundPatientListReportDialog::OnDeleterptDepositRefundPatientListReportDialog(){
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
 		OnCancelrptDepositRefundPatientListReportDialog(); 
 	}
	return 0;
}
int rptDepositRefundPatientListReportDialog::OnSaverptDepositRefundPatientListReportDialog(){
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
 		//OnrptDepositRefundPatientListReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptDepositRefundPatientListReportDialog::OnCancelrptDepositRefundPatientListReportDialog(){
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
int rptDepositRefundPatientListReportDialog::OnrptDepositRefundPatientListReportDialogListLoadData(){
	return 0;
}
void rptDepositRefundPatientListReportDialog::PrintRefundPatientListReport(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);

	UpdateData(true);
	szWhere.Empty();
	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);

	szSQL.Format(_T("SELECT docno, pname, age, sex, department, ") \
				_T(" sum(Advnce) as Advnce, sum(Refund) as Refund, sum(costpaid) as costpaid, sum(Discount) as Discount ") \
				_T(" FROM ( ") \
				_T(" SELECT hfi_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	(select sd_name from sys_dept where sd_id=hfi_deptid) as department,") \
				_T("	case when hfi_type ='A' and hfi_category ='A' then hfi_patpaid else 0 end as Advnce, ") \
				_T("	case when hfi_type ='R' then hfi_patpaid else 0 end as Refund, ") \
				_T("	case when hfi_type ='D' and hfi_category ='A' then hfi_patpaid else 0 end as Discount, ") \
				_T("	case when hfi_type = 'P' and hfi_type not in('A','D') then hfi_patpaid else 0 end as costpaid ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_invoice ON(hfi_docno=hd_docno)") \
				_T(" WHERE hfi_class = 'I' and hfi_patpaid > 0 ") \
				_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') %s") \
				_T(" ) as tbl ") \
				_T(" GROUP BY docno, pname, age, sex, department ") \
				_T(" ORDER BY pname"), szFromDate, szToDate, szWhere);

	if(!rpt.Init(_T("Reports/HMS/HF_TONGHOPTAMUNGHOANUNG.RPT")) )
		return ;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(szToDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

	
	//Page Header
	//Report Detail
	CReportSection* rptDetail;
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double nSumAmount = 0;
	long double c[5];
	double nAmount = 0;
	long nIndex =1;
	c[1] =c[2] = c[3] = c[0] =0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();		
		tmpStr.Format(_T("%ld"), nIndex ++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("department"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		rs.GetValue(_T("Advnce"), nAmount);
		c[0] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("Refund"), nAmount);
		c[1] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		
		rs.GetValue(_T("Discount"), nAmount);
		c[2] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("Costpaid"), nAmount);
		c[3] += nAmount;
		FormatCurrency(nAmount, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);		

		
		
		rs.MoveNext();
	}
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(c[0], tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		FormatCurrency(c[1], tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		FormatCurrency(c[2], tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		FormatCurrency(c[3], tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
	}
	//Page Footer
	//Report Footer
	

	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();

}

void rptDepositRefundPatientListReportDialog::RefundPatientListReportToExcell(CString szFromDate, CString szToDate, CString szUserID){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere;
	CRecord rs(&pMF->m_db);

	UpdateData(true);
	szWhere.Empty();
	if(!szUserID.IsEmpty())
		szWhere.Format(_T(" AND hfi_receiver='%s' "), szUserID);

	szSQL.Format(_T("SELECT docno, pname, age, sex, department, ") \
				_T(" sum(Advnce) as Advnce, sum(Refund) as Refund, sum(costpaid) as costpaid, sum(Discount) as Discount ") \
				_T(" FROM ( ") \
				_T(" SELECT hfi_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	(select sd_name from sys_dept where sd_id=hfi_deptid) as department,") \
				_T("	case when hfi_type ='A' and hfi_category ='A' then hfi_patpaid else 0 end as Advnce, ") \
				_T("	case when hfi_type ='R' then hfi_patpaid else 0 end as Refund, ") \
				_T("	case when hfi_type ='D' and hfi_category ='A' then hfi_patpaid else 0 end as Discount, ") \
				_T("	case when hfi_type = 'P' and hfi_type not in('A','D') then hfi_patpaid else 0 end as costpaid ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_invoice ON(hfi_docno=hd_docno)") \
				_T(" WHERE hfi_class = 'I' and hfi_patpaid > 0 ") \
				_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') %s") \
				_T(" ) as tbl ") \
				_T(" GROUP BY docno, pname, age, sex, department ") \
				_T(" ORDER BY pname"), szFromDate, szToDate, szWhere);

	CExcel xls;	
	xls.CreateSheet(1);
	
	xls.SetColumnWidth(1,10);
	xls.SetColumnWidth(2,12);
	xls.SetColumnWidth(3,10);
	xls.SetColumnWidth(4,20);
	xls.SetColumnWidth(5,5);
	xls.SetColumnWidth(6,10);
	xls.SetColumnWidth(7,20);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,22);

	xls.SetCellMergedColumns(0,3,22);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O \x42\x1EC6NH NH\xC2N HO\xC0N \x1EE8NG"), FMT_TEXT,true,10,0);
	xls.SetCellMergedColumns(0,3,22);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111i\x1EBFn ng\xE0y %s"), CDateTime::Convert(szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,10,0);
	

	int nRow = 6;
	xls.SetCellText(0, nRow, _T("STT"),FMT_TEXT,true,10,0);	
	xls.SetCellText(1, nRow, _T("Document No"),FMT_TEXT,true,10,0);
	xls.SetCellText(2, nRow, _T("H\x1ECD v\xE0 t\xEAn"),FMT_TEXT,true,10,0);
	xls.SetCellText(3, nRow, _T("Tu\x1ED5i"),FMT_TEXT,true,10,0);
	xls.SetCellText(4, nRow, _T("Gi\x1EDBi"),FMT_TEXT,true,10,0);
	xls.SetCellText(5, nRow, _T("Kho\x61 ph\xF2ng"),FMT_TEXT,true,10,0);	
	xls.SetCellText(6, nRow, _T("T\x1EA1m \x1EE9ng"),FMT_TEXT,true,10,0);	
	xls.SetCellText(7, nRow, _T("Ho\xE0n \x1EE9ng"),FMT_TEXT,true,10,0);	
	xls.SetCellText(8, nRow, _T("Mi\x1EC5n gi\x1EA3m"),FMT_TEXT,true,10,0);	
	xls.SetCellText(9, nRow, _T("Thu ph\xED"),FMT_TEXT,true,10,0);	
		
	
	//Page Header
	//Report Detail
	
	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	long double nSumAmount = 0;
	long double c[5];
	double nAmount = 0;
	int nIndex=0;
	c[0]=c[1]=c[2]=c[3]=0;
	while(!rs.IsEOF())
	{
		nRow++;
		nIndex++;
		tmpStr.Format(_T("%d"),nIndex);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("department"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Advnce"), nAmount);
		c[0] += nAmount;
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("Refund"), nAmount);
		c[1] += nAmount;
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);
	
		rs.GetValue(_T("Discount"), nAmount);
		c[2] += nAmount;
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("costpaid"), nAmount);
		c[3] += nAmount;
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);

		
		
		rs.MoveNext();
	}
	if(c[0]+c[1]+c[2]+c[3] > 0){		
		nRow++;
		xls.SetCellText(1, nRow, _T("Total Amount:"), FMT_TEXT,true,10,0);		
		xls.MergeCell(nRow, 1, nRow, 6);
		tmpStr.Format(_T("%.2f"),c[0]);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1,true,10,0);
		tmpStr.Format(_T("%.2f"),c[1]);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1,true,10,0);
		tmpStr.Format(_T("%.2f"),c[2]);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1,true,10,0);
		tmpStr.Format(_T("%.2f"),c[3]);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1,true,10,0);
	}
	xls.Save(_T("Exports\\Baocaotonghoptinhhoanung.xls"));

}
