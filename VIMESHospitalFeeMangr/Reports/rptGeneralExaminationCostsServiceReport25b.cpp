#include "rptGeneralExaminationCostsServiceReport25b.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostsServiceReport25b* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptGeneralExaminationCostsServiceReport25b* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((rptGeneralExaminationCostsServiceReport25b *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsServiceReport25b *pVw = (rptGeneralExaminationCostsServiceReport25b *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsServiceReport25b *pVw = (rptGeneralExaminationCostsServiceReport25b *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsServiceReport25b *pVw = (rptGeneralExaminationCostsServiceReport25b *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptGeneralExaminationCostsServiceReport25b *pVw = (rptGeneralExaminationCostsServiceReport25b *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnKhonglaybnccSelectFnc(CWnd *pWnd){
	 ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnKhonglaybnccSelect();
}
static void _OnLaybnccSelectFnc(CWnd *pWnd){
	 ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnLaybnccSelect();
}
static int _OnAddrptGeneralExaminationCostsServiceReport25bFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnAddrptGeneralExaminationCostsServiceReport25b();
} 
static int _OnEditrptGeneralExaminationCostsServiceReport25bFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnEditrptGeneralExaminationCostsServiceReport25b();
} 
static int _OnDeleterptGeneralExaminationCostsServiceReport25bFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnDeleterptGeneralExaminationCostsServiceReport25b();
} 
static int _OnSaverptGeneralExaminationCostsServiceReport25bFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnSaverptGeneralExaminationCostsServiceReport25b();
} 
static int _OnCancelrptGeneralExaminationCostsServiceReport25bFnc(CWnd *pWnd){
	 return ((rptGeneralExaminationCostsServiceReport25b*)pWnd)->OnCancelrptGeneralExaminationCostsServiceReport25b();
} 
rptGeneralExaminationCostsServiceReport25b::rptGeneralExaminationCostsServiceReport25b(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 225;
	m_szTitle = _T("Thong ke CP ngoai tru CMKT dich vu");
	SetDefaultValues();
}
rptGeneralExaminationCostsServiceReport25b::~rptGeneralExaminationCostsServiceReport25b(){
}
void rptGeneralExaminationCostsServiceReport25b::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 420, 180);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 210, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 215, 30, 315, 55);
	m_wndReportPeriod.Create(this,320, 30, 415, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 210, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 315, 85);
	m_wndToDate.Create(this,320, 60, 415, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 415, 115); 
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 84, 185, 164, 210);
	//m_wndPrint.Create(this, _T("&Print"), 169, 185, 249, 210);
	m_wndExport.Create(this, _T("&Export"), 254, 185, 334, 210);
	m_wndClose.Create(this, _T("&Close"), 339, 185, 419, 210);
	m_wndKhonglaybncc.Create(this, _T("Khong lay benh nhan cap cuu vao bao cao"), 10, 120, 415, 145);
	m_wndLaybncc.Create(this, _T("Chi lay benh nhan cap cuu vao bao cao"), 10, 150, 415, 175);

}
void rptGeneralExaminationCostsServiceReport25b::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void rptGeneralExaminationCostsServiceReport25b::OnSetWindowEvents(){
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
	m_wndKhonglaybncc.SetEvent(WE_CLICK, _OnKhonglaybnccSelectFnc);
	m_wndLaybncc.SetEvent(WE_CLICK, _OnLaybnccSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);

}
void rptGeneralExaminationCostsServiceReport25b::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndKhonglaybncc.GetDlgCtrlID(), m_bKhonglaybncc);
	DDX_Check(pDX, m_wndLaybncc.GetDlgCtrlID(), m_bLaybncc);

}
void rptGeneralExaminationCostsServiceReport25b::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

}
void rptGeneralExaminationCostsServiceReport25b::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptGeneralExaminationCostsServiceReport25b::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bKhonglaybncc=FALSE;
	m_bLaybncc=FALSE;

}
int rptGeneralExaminationCostsServiceReport25b::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0,1,2,3, 4, -1); 
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
/*void rptGeneralExaminationCostsServiceReport25b::OnYearChange(){
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnYearSetfocus(){
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnYearKillfocus(){
	
} */
int rptGeneralExaminationCostsServiceReport25b::OnYearCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostsServiceReport25b::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostsServiceReport25b::OnReportPeriodSelendok(){
	
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
/*void rptGeneralExaminationCostsServiceReport25b::OnReportPeriodSetfocus(){
	
}*/
/*void rptGeneralExaminationCostsServiceReport25b::OnReportPeriodKillfocus(){
	
}*/
long rptGeneralExaminationCostsServiceReport25b::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
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
/*void rptGeneralExaminationCostsServiceReport25b::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnFromDateChange(){
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnFromDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnFromDateKillfocus(){
	
} */
int rptGeneralExaminationCostsServiceReport25b::OnFromDateCheckValue(){
	return 0;
} 
/*void rptGeneralExaminationCostsServiceReport25b::OnToDateChange(){
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnToDateSetfocus(){
	
} */
/*void rptGeneralExaminationCostsServiceReport25b::OnToDateKillfocus(){
	
} */
int rptGeneralExaminationCostsServiceReport25b::OnToDateCheckValue(){
	return 0;
} 
void rptGeneralExaminationCostsServiceReport25b::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptGeneralExaminationCostsServiceReport25b::OnClerkSelendok(){
	 
}
/*void rptGeneralExaminationCostsServiceReport25b::OnClerkSetfocus(){
	
}*/
/*void rptGeneralExaminationCostsServiceReport25b::OnClerkKillfocus(){
	
}*/
long rptGeneralExaminationCostsServiceReport25b::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT su_userid as id, su_name as name FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptGeneralExaminationCostsServiceReport25b::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptGeneralExaminationCostsServiceReport25b::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*UpdateData(true);
	PrintGeneralCost25AReport(m_szClerkKey,m_szFromDate,m_szToDate, true);		
	UpdateData(false);*/
} 
void rptGeneralExaminationCostsServiceReport25b::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	/*UpdateData(true);
	PrintGeneralCost25AReport(m_szClerkKey,m_szFromDate,m_szToDate, false);		
	UpdateData(false);*/
} 
void rptGeneralExaminationCostsServiceReport25b::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	UpdateData(true);
	ExportToExcell25AReport(m_szClerkKey,m_szFromDate,m_szToDate, true);	
	UpdateData(false);
} 
void rptGeneralExaminationCostsServiceReport25b::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
	void rptGeneralExaminationCostsServiceReport25b::OnKhonglaybnccSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bLaybncc=false;
	UpdateData(false);
	
}
	void rptGeneralExaminationCostsServiceReport25b::OnLaybnccSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bKhonglaybncc=false;	
	UpdateData(false);
}
int rptGeneralExaminationCostsServiceReport25b::OnAddrptGeneralExaminationCostsServiceReport25b(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptGeneralExaminationCostsServiceReport25b::OnEditrptGeneralExaminationCostsServiceReport25b(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptGeneralExaminationCostsServiceReport25b::OnDeleterptGeneralExaminationCostsServiceReport25b(){
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
 		OnCancelrptGeneralExaminationCostsServiceReport25b(); 
 	}
	return 0;
}
int rptGeneralExaminationCostsServiceReport25b::OnSaverptGeneralExaminationCostsServiceReport25b(){
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
 		//OnrptGeneralExaminationCostsServiceReport25bListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptGeneralExaminationCostsServiceReport25b::OnCancelrptGeneralExaminationCostsServiceReport25b(){
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
int rptGeneralExaminationCostsServiceReport25b::OnrptGeneralExaminationCostsServiceReport25bListLoadData(){
	return 0;
}
void rptGeneralExaminationCostsServiceReport25b::PrintGeneralCost25AReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	CString szWhere, szInpatientCost, szUserReceiver;
	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."), _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	
	if (m_bLaybncc==1)
		szWhere.Format(_T(" and hd_emergency in('Y')"));
	else
		if (m_bKhonglaybncc==1) szWhere.Format(_T(" and (hd_emergency not in('Y') or hd_emergency is null) "));
	
	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));

	szInpatientCost.Empty();
	//szInpatientCost.Format(_T(" and hd_suggestion not in('A') "));
	
	if (pMF->m_szDiscountPrintReport !=_T("Y"))
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("	sum(pacsfeexq) as pacsfeexq,") \
		_T("	sum(pacsfeeSADT) as pacsfeeSADT, ")\
		_T("	sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
		_T("	sum(pacsfeeSAMAU+pacsfeeSADT+pacsfeexq) as pacsfee,") \
		_T("	sum(noisoi) as noisoi, ") \
		_T("	sum(dientim) as dientim, ") \
		_T("	sum(diennao) as diennao, ") \
		_T("	sum(dohohap) as dohohap, ") \
		_T("	sum(luuhuyetnao) as luuhuyetnao,") \
		_T("	sum(Dotimthai) as dotimthai, ") \
		_T("	sum(noisoi+dientim+diennao+dohohap+luuhuyetnao+dotimthai) as tdcnfee, ") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(cost) as cost,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM ") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfe_deptid,") \
		_T("	hfi_recvdate as recvdate,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 1) in('A') and substr(hfe_group, 1, 2)<> 'A9' then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 3)='B21' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Dotimthai,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
		_T("  	case when hfe_group='D0000' then hfe_cost-hfe_diffcost else 0 end as examfee,") \
		_T("  	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_invoiceno=hfi_invoiceno and hfe_docno=hfi_docno)") \
		_T("     WHERE hfe_status='P' ") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') %s ") \
		_T(" 	and hfi_type='P' ") \
		_T(" 	and hfi_class in('E')  and hfe_discount > 0 ") \
		_T("  ) as tbl") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	 ") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("  WHERE ho_type ='S' and hd_status='T'  %s ") \
		_T("  GROUP BY recvdate,docno, pname, birthyear, sex, cardno, address, icd10,  examdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY recvdate,invoiceno,docno,pname"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	else
	{	
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("	hc_expdate as expdate, ") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("	sum(pacsfeexq) as pacsfeexq,") \
		_T("	sum(pacsfeeSADT) as pacsfeeSADT, ")\
		_T("	sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
		_T("	sum(pacsfeeSAMAU+pacsfeeSADT+pacsfeexq) as pacsfee,") \
		_T("	sum(noisoi) as noisoi, ") \
		_T("	sum(dientim) as dientim, ") \
		_T("	sum(diennao) as diennao, ") \
		_T("	sum(dohohap) as dohohap, ") \
		_T("	sum(luuhuyetnao) as luuhuyetnao,") \
		_T("	sum(Dotimthai) as dotimthai, ") \
		_T("	sum(noisoi+dientim+diennao+dohohap+luuhuyetnao+dotimthai) as tdcnfee, ") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(discount) as cost,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM ") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfe_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("	hfi_recvdate as recvdate, ") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 1) in('A') and substr(hfe_group, 1, 2)<> 'A9' then hfe_discount else 0 end as drugfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1' and hfe_hitech='N' then hfe_discount else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 3)='B21' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' and hfe_hitech='N' then hfe_discount else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' and hfe_hitech='N' then hfe_discount else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' and hfe_hitech='N' then hfe_discount else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' and hfe_hitech='N' then hfe_discount else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' and hfe_hitech='N' then hfe_discount else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' and hfe_hitech='N' then hfe_discount else 0 end as Dotimthai,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_discount else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_discount else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_discount else 0 end as materialfee,") \
		_T("  	case when hfe_group='D0000' then hfe_discount else 0 end as examfee,") \
		_T("  	case when hfe_group='F0000' then hfe_discount else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_invoiceno=hfi_invoiceno and hfe_docno=hfi_docno)") \
		_T("     WHERE hfe_status='P' ") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') %s ") \
		_T(" 	and hfi_type='P' ") \
		_T(" 	and hfi_class in('E') ") \
		_T("  ) as tbl") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	 ") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("  WHERE ho_type ='S' and hd_status='T' %s ") \
		_T("  GROUP BY recvdate,docno, pname, birthyear, sex, cardno, address,  icd10,  examdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY recvdate, invoiceno,docno,pname"), szFromDate, szToDate, szUserReceiver,szWhere);
	}

//_fmsg(_T("%s"), szSQL);

BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST79AREPORT.RPT")) )
		return;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	rs.GetValue(_T("invoiceno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CReportSection* rptDetail;
	long double grpCost[23];
	long double grpLine[23];
	long double ttlCost[23];
	double cost = 0;
	for (int i =0; i < 23; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("insline"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField,szAmount;
			if(grpLine[20] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}

			
			if(grpCost[20] > 0)
			{					
				TranslateString(_T("Total Line"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szLineName);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;				
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(12);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));	
			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("InsuranceLine"), szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			szOldLine = szNewLine;
			nIndex=1;
		}
		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty()){
			CString szField,szAmount;
			if(grpLine[20] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),szNewGroup +_T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			szOldGroup = szNewGroup;
			nIndex=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("birthyear"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("regplace"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		tmpStr = CDate::Convert(rs.GetValue(_T("examdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		
		rs.GetValue(_T("testfee"), cost);
		grpCost[10] += cost;
		grpLine[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);				

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);		

		rs.GetValue(_T("drugfeek"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);
		
		rs.GetValue(_T("examfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);		
		
		rs.GetValue(_T("cost"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);

		rs.GetValue(_T("patpaid"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);
		
		rs.MoveNext();
	}
	for (int i =0; i < 24; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(grpLine[20] > 0){
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szOldGroup);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =10; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}

	if(grpCost[20] > 0){		
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =10; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	
	}
	if(ttlCost[20] > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount:"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(10);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i =10; i < 24; i++)
		{
			
			szField.Format(_T("S%d"), i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);		
		}

	}

	//Page Footer
	//Report Footer
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

}

void rptGeneralExaminationCostsServiceReport25b::ExportToExcell25AReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr,szUserReceiver, szSQL, szFromDateToDate;
	CString szWhere,szInpatientCost;
	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."), _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};
	if (m_bLaybncc==1)
		szWhere.Format(_T(" and hd_emergency in('Y')"));
	else
		if (m_bKhonglaybncc==1) szWhere.Format(_T(" and (hd_emergency not in('Y') or hd_emergency is null) "));
	
	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));

	szInpatientCost.Empty();
	//szInpatientCost.Format(_T(" and hd_suggestion not in('A') "));

	if (pMF->m_szDiscountPrintReport !=_T("Y"))
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(drugfee) as Boob,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("	sum(pacsfeexq) as pacsfeexq,") \
		_T("	sum(pacsfeeSADT) as pacsfeeSADT, ")\
		_T("	sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
		_T("	sum(pacsfeeSAMAU+pacsfeeSADT+pacsfeexq) as pacsfee,") \
		_T("	sum(noisoi) as noisoi, ") \
		_T("	sum(dientim) as dientim, ") \
		_T("	sum(diennao) as diennao, ") \
		_T("	sum(dohohap) as dohohap, ") \
		_T("	sum(luuhuyetnao) as luuhuyetnao,") \
		_T("	sum(Dotimthai) as dotimthai, ") \
		_T("	sum(noisoi+dientim+diennao+dohohap+luuhuyetnao+dotimthai) as tdcnfee, ") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(cost) as cost,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM ") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfe_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 1) in('A') and substr(hfe_group, 1, 2) <> 'A9' then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 3)='B21' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as Dotimthai,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_cost-hfe_diffcost else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_cost-hfe_diffcost else 0 end as materialfee,") \
		_T("  	case when hfe_group='D0000' then hfe_cost-hfe_diffcost else 0 end as examfee,") \
		_T("  	case when hfe_group='F0000' then hfe_cost-hfe_diffcost else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_invoiceno=hfi_invoiceno and hfe_docno=hfi_docno)") \
		_T("     WHERE hfe_status='P' ") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') %s ") \
		_T(" 	and hfi_type='P' ") \
		_T(" 	and hfi_class in('E') ") \
		_T("  ) as tbl") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	 ") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("  WHERE ho_type in('S','R') and hd_status='T'  %s ") \
		_T("  GROUP BY docno, pname, birthyear, sex, address,icd10,  examdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY docno,pname"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	else
	{	
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("	hms_getaddress(hp_provid, hp_distid, hp_villid) as address, ") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("	sum(pacsfeexq) as pacsfeexq,") \
		_T("	sum(pacsfeeSADT) as pacsfeeSADT, ")\
		_T("	sum(pacsfeeSAMAU) as pacsfeeSAMAU, ") \
		_T("	sum(pacsfeeSAMAU+pacsfeeSADT+pacsfeexq) as pacsfee,") \
		_T("	sum(noisoi) as noisoi, ") \
		_T("	sum(dientim) as dientim, ") \
		_T("	sum(diennao) as diennao, ") \
		_T("	sum(dohohap) as dohohap, ") \
		_T("	sum(luuhuyetnao) as luuhuyetnao,") \
		_T("	sum(Dotimthai) as dotimthai, ") \
		_T("	sum(noisoi+dientim+diennao+dohohap+luuhuyetnao+dotimthai) as tdcnfee, ") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(discount) as cost,") \
		_T("  	sum(otherfee) as otherfee ,") \
		_T("  	sum(discount) as inspaid ,") \
		_T("  	sum(patpaid) as patpaid ") \
		_T("  FROM ") \
		_T("  (") \
		_T("      SELECT ") \
		_T("  	hfe_deptid,") \
		_T("  	hfi_class,") \
		_T("  	hfi_docno,") \
		_T("  	hfi_invoiceno,") \
		_T("  	hfe_group as groupid,") \
		_T("  	hfe_quantity as qty,") \
		_T("  	hfe_unitprice	as unitprice,") \
		_T("  	case when substr(hfe_group, 1, 1) in('A') and substr(hfe_group, 1, 2)<> 'A9' then hfe_discount else 0 end as drugfee,") \
		_T("   	case when substr(hfe_group, 1, 2)='B1' and hfe_hitech='N' then hfe_discount else 0 end as testfee,") \
		_T("   	case when substr(hfe_group, 1, 3)='B21' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeexq,") \
		_T("   	case when substr(hfe_group, 1, 3)='B24' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeeSADT,") \
		_T("   	case when substr(hfe_group, 1, 3)='B25' and hfe_hitech='N' then hfe_discount else 0 end as pacsfeeSAMAU,") \
		_T("   	case when substr(hfe_group, 1, 3)='B31' and hfe_hitech='N' then hfe_discount else 0 end as Noisoi,") \
		_T("   	case when substr(hfe_group, 1, 3)='B33' and hfe_hitech='N' then hfe_discount else 0 end as Dientim,") \
		_T("   	case when substr(hfe_group, 1, 3)='B34' and hfe_hitech='N' then hfe_discount else 0 end as Diennao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B35' and hfe_hitech='N' then hfe_discount else 0 end as DoHohap,") \
		_T("   	case when substr(hfe_group, 1, 3)='B36' and hfe_hitech='N' then hfe_discount else 0 end as Luuhuyetnao,") \
		_T("   	case when substr(hfe_group, 1, 3)='B37' and hfe_hitech='N' then hfe_discount else 0 end as Dotimthai,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B4','B5') and hfe_hitech='N' then hfe_discount else 0 end as normtechfee,") \
		_T("  	case when hfe_hitech='Y' then hfe_discount else 0 end as hitechfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='A9' then hfe_discount else 0 end as materialfee,") \
		_T("  	case when hfe_group='D0000' then hfe_discount else 0 end as examfee,") \
		_T("  	case when hfe_group='F0000' then hfe_discount else 0 end as otherfee,") \
		_T("  	hfe_cost as cost,") \
		_T("  	hfe_discount as discount,") \
		_T("  	hfe_patpaid as patpaid,") \
		_T("  	hfe_diffpaid as diffpaid,") \
		_T("  	hfe_patdebt as patdebt") \
		_T("     FROM hms_fee_invoice") \
		_T("     LEFT JOIN hmsv_fee ON(hfe_invoiceno=hfi_invoiceno and hfe_docno=hfi_docno)") \
		_T("     WHERE hfe_status='P' ") \
		_T(" 	and date(hfi_recvdate) between date('%s') and date('%s') %s ") \
		_T(" 	and hfi_type='P' ") \
		_T(" 	and hfi_class in('E') ") \
		_T("  ) as tbl") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	 ") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("  WHERE ho_type in('S','R') and hd_status='T'") \
		_T("  GROUP BY docno, pname, birthyear, sex, address,icd10,  examdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY docno,pname"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	_fmsg(_T("%s"), szSQL);
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	xls.SetColumnWidth(0,5);

	xls.SetColumnWidth(1,23);
	xls.SetColumnWidth(2,5);
	xls.SetColumnWidth(3,5);
	xls.SetColumnWidth(4,17);
	xls.SetColumnWidth(5,6);
	xls.SetColumnWidth(6,10);
	xls.SetColumnWidth(7,10);
	xls.SetColumnWidth(8,30);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,10);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,12);
	xls.SetColumnWidth(19,12);
	xls.SetColumnWidth(20,12);
	xls.SetColumnWidth(21,12);
	xls.SetColumnWidth(22,12);
	xls.SetColumnWidth(23,12);
	xls.SetColumnWidth(24,12);
	xls.SetColumnWidth(25,12);
	xls.SetColumnWidth(26,12);
	xls.SetColumnWidth(27,12);
	xls.SetColumnWidth(28,12);
	xls.SetColumnWidth(29,12);
	xls.SetColumnWidth(30,12);
	xls.SetColumnWidth(31,12);
	

	xls.SetRowHeight(6,25);	
	xls.SetRowHeight(7,25);
	xls.SetCellMergedColumns(0,3,22);
	xls.SetCellMergedColumns(0,4,22);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true);
	TranslateString(_T("List of recommended payment of outpatient medical care"), tmpStr);
	xls.SetCellText(0, 3, tmpStr,FMT_TEXT,true,18,0);	
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT,true,12);

	int nRow = 6;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Card Number"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Register Place ID"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Reg Date"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Exp Date Place ID"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("ICD 10"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Exam Date"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);
	
	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Examination Fee"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(15, nRow, _T("XN"), FMT_TEXT,true);

	//Phau thuat thu thuat
	TranslateString(_T("TT, PT"), tmpStr);
	xls.SetCellText(27, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(28, nRow, _T("VTYT"), FMT_TEXT,true);	
	xls.SetCellText(29, nRow, _T("DVKTC"), FMT_TEXT,true);	
	xls.SetCellText(30, nRow, _T("PhiVC"), FMT_TEXT,true);	
	TranslateString(_T("Difference Receipt"), tmpStr);
	xls.SetCellText(31, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance Paid"), tmpStr);	
	xls.SetCellText(32, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("TT,DT"), tmpStr);	
	xls.SetCellText(33, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(16,nRow,7);	
	TranslateString(_T("NH\xD3M TH\x102M \x44\xD2 \x43H\x1EE8\x43 N\x102NG"), tmpStr); // TDCN
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellMergedColumns(23,nRow,4);
	TranslateString(_T("NH\xD3M \x43\x110H\x41"), tmpStr); //CDHA
	xls.SetCellText(23, nRow, tmpStr, FMT_TEXT,true);
  
	xls.SetCellMergedRows(0,nRow,2);
	xls.SetCellMergedRows(1,nRow,2);
	xls.SetCellMergedRows(2,nRow,2);	
	xls.SetCellMergedRows(3,nRow,2);
	xls.SetCellMergedRows(4,nRow,2);
	xls.SetCellMergedRows(5,nRow,2);

	xls.SetCellMergedRows(6,nRow,2);
	xls.SetCellMergedRows(7,nRow,2);
	xls.SetCellMergedRows(8,nRow,2);
	xls.SetCellMergedRows(9,nRow,2);
	xls.SetCellMergedRows(10,nRow,2);
	xls.SetCellMergedRows(11,nRow,2);

	xls.SetCellMergedRows(12,nRow,2);	
	xls.SetCellMergedRows(13,nRow,2);
	xls.SetCellMergedRows(14,nRow,2);
	xls.SetCellMergedRows(15,nRow,2);

	xls.SetCellMergedRows(27,nRow,2);
	xls.SetCellMergedRows(28,nRow,2);
	xls.SetCellMergedRows(29,nRow,2);
	xls.SetCellMergedRows(30,nRow,2);
	xls.SetCellMergedRows(31,nRow,2);
	xls.SetCellMergedRows(32,nRow,2);
	xls.SetCellMergedRows(33,nRow,2);
	

	
	nRow=7;	
	
	/*TranslateString(_T("Medical expenses incurred at medical care facilities"), tmpStr);
	xls.SetCellText(16, nRow-1, tmpStr, FMT_TEXT,true);	*/

	//Nhom TDCN
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(17, nRow, _T("N\x1ED9i soi"), FMT_TEXT,true);	//Noi soi
	xls.SetCellText(18, nRow, _T("\x110i\x1EC7n tim"), FMT_TEXT,true); // Dien tim
	TranslateString(_T("\x110i\x1EC7n n\xE3o"), tmpStr); // Dien nao
	xls.SetCellText(19, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(20, nRow, _T("\x110o CNHH"), FMT_TEXT,true);	//Do chuc nang HH
	xls.SetCellText(21, nRow, _T("L\x1B0u HN"), FMT_TEXT,true); // Luu huyet nao
	TranslateString(_T("\x110o TT"), tmpStr);// Do tim thai
	xls.SetCellText(22, nRow, tmpStr, FMT_TEXT,true);
	//Nhom CDHA
	TranslateString(_T("Total"), tmpStr);
	xls.SetCellText(23, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("X.Quang"), tmpStr); // Q. Quang
	xls.SetCellText(24, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Si\xEAu \xE2m \x110T"), tmpStr); //Sieu am DT
	xls.SetCellText(25, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(26, nRow, _T("Si\xEAu \xE2m m\xE0u"), FMT_TEXT,true); //Sieu AM mau
	
	
	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine;

	long double grpCost[34];
	long double grpLine[34];
	long double ttlCost[34];
	long double grpOfLine[34];
	double cost = 0;
	nRow++;
	for (int i =0; i < 34; i++)
	{
		tmpStr.Format(_T("%d"), i+1);
		xls.SetCellText(i, nRow,tmpStr,FMT_INTEGER,true);
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i]=0;
	}
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("insline"), szNewLine);		
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField,szAmount;
			if(grpOfLine[12] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s"),szAmount );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i =12; i < 34; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}			
			
			if(grpCost[12] > 0){
				nRow ++;
				CString szField, szAmount;
				TranslateString(_T("Total Line"), szAmount);
				tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
				xls.SetCellMergedColumns(1,nRow,11);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11);
				for (int i =12; i < 34; i++)
				{			
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,11);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;						
				}
			}

			if(grpLine[12] > 0)
			{			
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,12);
				for (int i =12; i < 34; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,12);				
					grpLine[i] = 0;					
				}
			}

			nRow++;
			rs.GetValue(_T("linename"), szLineName);
			xls.SetCellMergedColumns(0,nRow,33);
			tmpStr.Format(_T("%s"),  szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,12);
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}
			
		// Nhom bao hiem (I, II, II)
		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty()){
			CString szField,szAmount;

			if(grpOfLine[12] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s"),szAmount );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i =12; i < 34; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}

			if(grpLine[12] > 0)
			{
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s (%s) "),szAmount , szOldGroup);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11);			
				for (int i =12; i < 34; i++)
				{
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true,11);
					grpLine[i] = 0;						
				}
			}

			nRow++;
			xls.SetCellMergedColumns(0,nRow,33);
			tmpStr.Format(_T("%s"), szNewGroup +_T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,11);
			szOldGroup = szNewGroup;	
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}
		
		//Dung tuyen hay trai tuyen
		rs.GetValue(_T("hdline"), szNewOfLine);
		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[12] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s"),szAmount );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i =12; i < 34; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}
			
			if (szNewOfLine == _T("0") )
				tmpStr.Format(_T("%s"), lszLine[0]);
			else
				tmpStr.Format(_T("%s"), lszLine[1]);
			nRow++;
			xls.SetCellMergedColumns(0,nRow,33);
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true);
			szOldOfLine = szNewOfLine;
			nIndex=1;
		}
		

		
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);		
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1,false);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER,false);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,false);		
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,false);		
		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_INTEGER,false);		
		tmpStr = CDate::Convert(rs.GetValue(_T("regdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(6, nRow, tmpStr, FMT_DATE,false);
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(7, nRow, tmpStr, FMT_DATE,false);		
		rs.GetValue(_T("Address"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,false);
		tmpStr = CDate::Convert(rs.GetValue(_T("examdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(10, nRow, tmpStr, FMT_DATE,false);		
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_INTEGER,false);
		
			
		rs.GetValue(_T("cost"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		grpOfLine[12] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("examfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		grpOfLine[13] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(13, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("drugfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(14, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("testfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1,false);	
	
		rs.GetValue(_T("tdcnfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(16,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Noisoi"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(17,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dientim"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(18,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Diennao"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(19,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dohohap"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(20,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("Luuhuyetnao"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(21,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("Dotimthai"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(22,nRow,tmpStr,FMT_NUMBER1);	

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(23,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeexq"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(24,nRow,tmpStr,FMT_NUMBER1);
		
		rs.GetValue(_T("pacsfeeSADT"), cost);
		grpCost[25] += cost;
		grpLine[25] += cost;
		grpOfLine[25] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(25,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("pacsfeeSAMAU"), cost);
		grpCost[26] += cost;
		grpLine[26] += cost;
		grpOfLine[26] += cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(26,nRow,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[27] += cost;
		grpLine[27] += cost;
		grpOfLine[27] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(27, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[28] += cost;
		grpLine[28] += cost;
		grpOfLine[28] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(28, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[29] += cost;
		grpLine[29] += cost;
		grpOfLine[29] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(29, nRow, tmpStr, FMT_NUMBER1,false);	
		
		rs.GetValue(_T("otherfee"), cost);
		grpCost[30] += cost;
		grpLine[30] += cost;
		grpOfLine[30] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(30, nRow, tmpStr, FMT_NUMBER1,false);		
	
		rs.GetValue(_T("patpaid"), cost);
		grpCost[31] += cost;
		grpLine[31] += cost;
		grpOfLine[31] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(31, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[32] += cost;
		grpLine[32] += cost;
		grpOfLine[32] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(32, nRow, tmpStr, FMT_NUMBER1,false);

		
		tmpStr.Format(_T("%s"), rs.GetValue(_T("hdline")));
		xls.SetCellText(33, nRow, tmpStr, FMT_INTEGER,false);

		rs.MoveNext();
	}

	for (int i =0; i < 34; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(grpOfLine[12] > 0)
	{
		CString szAmount;
		nRow++;
		TranslateString(_T("\x43\x1ED9ng:"), szAmount);
		xls.SetCellMergedColumns(1,nRow,11);
		tmpStr.Format(_T("%s"),szAmount );
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
		for (int i =12; i < 34; i++)
		{
			tmpStr.Format(_T("%.2f"),grpOfLine[i]);
			xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
			grpOfLine[i] = 0;						
		}
	}
	
	if(grpLine[12] > 0){
		nRow ++;
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szOldGroup);
		xls.SetCellMergedColumns(1,nRow,11);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true,11);
		for (int i =12; i < 34; i++)
		{				
			tmpStr.Format(_T("%.2f"),grpLine[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true,11);
		}	
	}
	
	if(grpCost[12] > 0){
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		xls.SetCellMergedColumns(1,nRow,11);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,12);
		for (int i =12; i < 34; i++)
		{			
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,12);
		}
	}

	
	if(ttlCost[12] > 0){
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount "), szAmount);	
		tmpStr.Format(_T("%s :"),szAmount );
		xls.SetCellMergedColumns(1,nRow,11);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,13);
		for (int i =12; i < 34; i++)
		{			
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true,13);
		}

	}
	xls.Save(_T("Exports\\Chiphingoaitruchuyenmonkythuat.xls"));
	EndWaitCursor();
	
} 
