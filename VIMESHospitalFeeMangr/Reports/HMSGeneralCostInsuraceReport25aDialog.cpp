#include "HMSGeneralCostInsuraceReport25aDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostInsuraceReport25aDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostInsuraceReport25aDialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnKhonglaybnccSelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnKhonglaybnccSelect();
}
static void _OnLaybnccSelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnLaybnccSelect();
}
static int _OnAddHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnAddHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnEditHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnEditHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnDeleteHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnDeleteHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnSaveHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnSaveHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnCancelHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnCancelHMSGeneralCostInsuraceReport25aDialog();
} 
CHMSGeneralCostInsuraceReport25aDialog::CHMSGeneralCostInsuraceReport25aDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 225;
	m_szTitle = _T("General Examination Cost 25A Report");
	SetDefaultValues();
}
CHMSGeneralCostInsuraceReport25aDialog::~CHMSGeneralCostInsuraceReport25aDialog(){
}
void CHMSGeneralCostInsuraceReport25aDialog::OnCreateComponents(){	
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
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 84, 185, 164, 210);
	m_wndPrint.Create(this, _T("&Print"), 169, 185, 249, 210);
	m_wndExport.Create(this, _T("&Export"), 254, 185, 334, 210);
	m_wndClose.Create(this, _T("&Close"), 339, 185, 419, 210);
	m_wndKhonglaybncc.Create(this, _T("Khong lay benh nhan cap cuu vao bao cao"), 10, 120, 415, 145);
	m_wndLaybncc.Create(this, _T("Chi lay benh nhan cap cuu vao bao cao"), 10, 150, 415, 175);

}
void CHMSGeneralCostInsuraceReport25aDialog::OnInitializeComponents(){
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
void CHMSGeneralCostInsuraceReport25aDialog::OnSetWindowEvents(){
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
void CHMSGeneralCostInsuraceReport25aDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndKhonglaybncc.GetDlgCtrlID(), m_bKhonglaybncc);
	DDX_Check(pDX, m_wndLaybncc.GetDlgCtrlID(), m_bLaybncc);

}
void CHMSGeneralCostInsuraceReport25aDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	

}
void CHMSGeneralCostInsuraceReport25aDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralCostInsuraceReport25aDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bKhonglaybncc=FALSE;
	m_bLaybncc=FALSE;

}
int CHMSGeneralCostInsuraceReport25aDialog::SetMode(int nMode){
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
/*void CHMSGeneralCostInsuraceReport25aDialog::OnYearChange(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnYearSetfocus(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnYearKillfocus(){
	
} */
int CHMSGeneralCostInsuraceReport25aDialog::OnYearCheckValue(){
	return 0;
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodSelendok(){
	
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
/*void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodLoadData(){
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
/*void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralCostInsuraceReport25aDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralCostInsuraceReport25aDialog::OnToDateChange(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralCostInsuraceReport25aDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnClerkSelendok(){
	 
}
/*void CHMSGeneralCostInsuraceReport25aDialog::OnClerkSetfocus(){
	
}*/
/*void CHMSGeneralCostInsuraceReport25aDialog::OnClerkKillfocus(){
	
}*/
long CHMSGeneralCostInsuraceReport25aDialog::OnClerkLoadData(){
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
/*void CHMSGeneralCostInsuraceReport25aDialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSGeneralCostInsuraceReport25aDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	PrintGeneralCost25AReport(m_szClerkKey,m_szFromDate,m_szToDate, true);		
	UpdateData(false);
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	UpdateData(true);
	PrintGeneralCost25AReport(m_szClerkKey,m_szFromDate,m_szToDate, false);		
	UpdateData(false);
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	UpdateData(true);
	ExportToExcell25AReport(m_szClerkKey,m_szFromDate,m_szToDate, true);	
	UpdateData(false);
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
	void CHMSGeneralCostInsuraceReport25aDialog::OnKhonglaybnccSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bLaybncc=false;
	UpdateData(false);
}
	void CHMSGeneralCostInsuraceReport25aDialog::OnLaybnccSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bKhonglaybncc=false;	
	UpdateData(false);
}
int CHMSGeneralCostInsuraceReport25aDialog::OnAddHMSGeneralCostInsuraceReport25aDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralCostInsuraceReport25aDialog::OnEditHMSGeneralCostInsuraceReport25aDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralCostInsuraceReport25aDialog::OnDeleteHMSGeneralCostInsuraceReport25aDialog(){
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
 		OnCancelHMSGeneralCostInsuraceReport25aDialog(); 
 	}
	return 0;
}
int CHMSGeneralCostInsuraceReport25aDialog::OnSaveHMSGeneralCostInsuraceReport25aDialog(){
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
 		//OnHMSGeneralCostInsuraceReport25aDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralCostInsuraceReport25aDialog::OnCancelHMSGeneralCostInsuraceReport25aDialog(){
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
int CHMSGeneralCostInsuraceReport25aDialog::OnHMSGeneralCostInsuraceReport25aDialogListLoadData(){
	return 0;
}
void CHMSGeneralCostInsuraceReport25aDialog::PrintGeneralCost25AReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
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
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(drugfeek) as drugfeek,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(cost-diffpaid) as cost,") \
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
		_T("  	case when substr(hfe_group, 1, 2)='A1' and hfe_group <>'A1400'then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("  	case when hfe_group ='A1400' then hfe_cost-hfe_diffcost else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfee,") \
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
		_T("  WHERE ho_type in('I','C') and hd_status='T' and length(hc_cardno) > 1  %s ") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline, regplace, icd10,  examdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline, cardno"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(drugfeek) as drugfeek,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
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
		_T("  	case when substr(hfe_group, 1, 2)='A1' and hfe_group <>'A1400'then hfe_discount else 0 end as drugfee,") \
		_T("  	case when hfe_group ='A1400' then hfe_discount else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_discount else 0 end as bloodfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_discount else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_discount else 0 end as pacsfee,") \
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
		_T(" 	and hfi_class in('E')  and hfe_discount > 0 ") \
		_T("  ) as tbl") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	 ") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("  WHERE ho_type in('I','C') and hd_status='T' and length(hc_cardno) > 1  %s ") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline,regplace, icd10, examdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline, cardno"), szFromDate, szToDate, szUserReceiver,szWhere);
	}

_fmsg(_T("%s"), szSQL);

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
	CString szNewOfLine, szOldOfLine,szSumOfline;
	CReportSection* rptDetail;
	long double grpCost[23];
	long double grpLine[23];
	long double ttlCost[23];
	long double	grpOfLine[23];
	double cost = 0;
	for (int i =0; i < 23; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i] =0;
	}
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("insline"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[20] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
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

			if(grpLine[20] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpLine[i] = 0;
				}
			}
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(12);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));	
			rs.GetValue(_T("linename"), szLineName);
			rptDetail->SetValue(_T("InsuranceLine"), szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}
		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[20] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}
			if(grpLine[20] > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
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
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}

		rs.GetValue(_T("hdline"), szNewOfLine);
		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty()){
			CString szField,szAmount;
			if(grpOfLine[20] > 0)
			{
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
				rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%s (%s) "),szAmount , szSumOfline);
				rptDetail->SetValue(_T("TotalGroup"), tmpStr );
				for (int i =10; i < 24; i++)
				{
					szField.Format(_T("S%d"), i);
					FormatCurrency(grpOfLine[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);					
					grpOfLine[i] = 0;
				}
			}
			
			if (szNewOfLine == _T("0") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("a");
			}
			else
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("b");
			}
			
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetFaceSize(10);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetItalic(true);
			rpt.GetGroupHeader(1)->GetItem(_T("InsuranceLine"))->SetBold(true);			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InsuranceLine"),tmpStr);
			szOldOfLine = szNewOfLine;			
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
		grpOfLine[10] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("pacsfee"), cost);
		grpCost[11] += cost;
		grpLine[11] += cost;
		grpOfLine[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("drugfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		grpOfLine[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[13] += cost;
		grpLine[13] += cost;
		grpOfLine[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);				

		rs.GetValue(_T("normtechfee"), cost);
		grpCost[14] += cost;
		grpLine[14] += cost;
		grpOfLine[14] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("16"), tmpStr);		

		rs.GetValue(_T("drugfeek"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);
		
		rs.GetValue(_T("examfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("18"), tmpStr);

		rs.GetValue(_T("otherfee"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("19"), tmpStr);		
		
		rs.GetValue(_T("cost"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("20"), tmpStr);

		rs.GetValue(_T("patpaid"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("21"), tmpStr);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("22"), tmpStr);
		
		rs.MoveNext();
	}
	for (int i =0; i < 24; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(grpOfLine[20] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("\x43\x1ED9ng"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s)"),szAmount , szSumOfline);
		rptDetail->SetValue(_T("TotalGroup"), tmpStr );
		for (int i =10; i < 24; i++)
		{
			szField.Format(_T("S%d"), i);
			FormatCurrency(grpLine[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}	
	}

	if(grpLine[20] > 0)
	{
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetFaceSize(8);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetBold(true);
		rpt.GetGroupFooter(1)->GetItem(_T("TotalGroup"))->SetItalic(true);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%s (%s=(a+b))"),szAmount , szOldGroup);
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
	if(ttlCost[20] > 0)
	{
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
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

	EndWaitCursor();

}

void CHMSGeneralCostInsuraceReport25aDialog::ExportToExcell25AReport(CString szReportPeriod, CString szFromDate, CString szToDate, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr,szUserReceiver, szSQL, szFromDateToDate;
	CString szWhere,szInpatientCost;
	TCHAR *lszLine[] ={_T("a) \x42\x1EC7nh nh\xE2n \x111\xFAng tuy\x1EBFn."), _T("b) \x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn.")};

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	

	xls.SetColumnWidth(0,5);
	xls.SetColumnWidth(1,23);
	xls.SetColumnWidth(2,9);
	xls.SetColumnWidth(3,5);
	xls.SetColumnWidth(4,51);
	xls.SetColumnWidth(5,18);
	xls.SetColumnWidth(6,13);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,10);
	xls.SetColumnWidth(10,9);
	xls.SetColumnWidth(11,9);
	xls.SetColumnWidth(12,12);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,12);
	xls.SetColumnWidth(15,12);
	xls.SetColumnWidth(16,12);
	xls.SetColumnWidth(17,12);
	xls.SetColumnWidth(18,12);
	xls.SetColumnWidth(19,17);
	xls.SetColumnWidth(20,12);
	xls.SetColumnWidth(21,12);
	xls.SetColumnWidth(22,12);
	xls.SetColumnWidth(23,14);
	xls.SetColumnWidth(24,12);
	xls.SetColumnWidth(25,21);
	xls.SetColumnWidth(26,14);
	//xls.SetColumnWidth(23,12);

	//xls.SetRowHeight(6,25);	
	//xls.SetRowHeight(7,25);	

	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT|FMT_CENTER, true);
	xls.SetCellMergedColumns(0,2, 3);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT|FMT_CENTER, true);
	//TranslateString(_T("List of recommended payment of outpatient medical care"), tmpStr);
	xls.SetCellText(0, 3, _T("\x44\x41NH S\xC1\x43H \x110\x1EC0 NGH\x1ECA TH\x41NH TO\xC1N \x43HI PH\xCD KH\xC1M \x43H\x1EEE\x41 \x42\x1EC6NH NGO\x1EA0I TR\xDA"), FMT_TEXT|FMT_CENTER, true, 18);
	xls.SetCellMergedColumns(0, 3, 27);
	xls.SetCellMergedColumns(0, 4, 27);
	TranslateString(_T("From Date"),tmpStr);
	szFromDateToDate.Format(_T("%s: %s"), tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy));
	TranslateString(_T("To Date"),tmpStr);
	szFromDateToDate.AppendFormat(_T(" %s: %s"), tmpStr, CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));	
	xls.SetCellText(0, 4, szFromDateToDate,FMT_TEXT|FMT_CENTER, true, 12);

	long nRow = 6;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT|FMT_CENTER, true, 10);	
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);	
	TranslateString(_T("Birth Date"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);	
// them dia chi
	xls.SetCellText(4, nRow, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER, true, 10);
	TranslateString(_T("Card Number"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);	
// ngay dang ky, ngay het han.
	xls.SetCellText(6, nRow, _T("Ng\xE0y \x111\x103ng k\xFD"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(7, nRow, _T("Ng\xE0y h\x1EBFt h\x1EA1n"), FMT_TEXT | FMT_CENTER, true, 10);

	TranslateString(_T("Register Place ID"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);	

	TranslateString(_T("Exam Date"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 10);	

	TranslateString(_T("ICD 10"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true, 10);	
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true, 10);
  
	xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellMergedRows(2, nRow, 2);	
	xls.SetCellMergedRows(3, nRow, 2);
	xls.SetCellMergedRows(4, nRow, 2);
	xls.SetCellMergedRows(5, nRow, 2);
	xls.SetCellMergedRows(6, nRow, 2);
	xls.SetCellMergedRows(7, nRow, 2);
	xls.SetCellMergedRows(8, nRow, 2);
	xls.SetCellMergedRows(9, nRow, 2);
	xls.SetCellMergedRows(10, nRow, 2);
	xls.SetCellMergedRows(11, nRow, 2);

	xls.SetCellMergedRows(23, nRow, 2);
	xls.SetCellMergedRows(24, nRow, 2);
	xls.SetCellMergedRows(25, nRow, 2);
	xls.SetCellMergedRows(26, nRow, 2);

	xls.SetCellMergedColumns(12, nRow, 11);
	xls.SetCellMergedColumns(13, nRow, 2);

	nRow = 7; 

	TranslateString(_T("Medical expenses incurred at medical care facilities"), tmpStr);
	xls.SetCellText(12, nRow-1, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);	
	xls.SetCellText(12, nRow, _T("XN,CDCN"), FMT_TEXT|FMT_CENTER, true, 11);	
	xls.SetCellText(13, nRow, _T("CDHA"), FMT_TEXT|FMT_CENTER, true, 11);

	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);	
	TranslateString(_T("Blood"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);	
	TranslateString(_T("TT, PT"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);
	xls.SetCellText(17, nRow, _T("VTYT"), FMT_TEXT|FMT_CENTER,true, 11);	
	xls.SetCellText(18, nRow, _T("DVKTC"), FMT_TEXT|FMT_CENTER,true, 11);	
	xls.SetCellText(19, nRow, _T("Thuoc K, Thai gep"), FMT_TEXT|FMT_CENTER, true, 11);
	TranslateString(_T("Examination Fee"), tmpStr);
	xls.SetCellText(20, nRow, tmpStr, FMT_TEXT|FMT_CENTER,true, 11);	;	
	xls.SetCellText(21, nRow, _T("Phi VC"), FMT_TEXT|FMT_CENTER, true, 11);	
	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(22, nRow, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);
	TranslateString(_T("Difference Receipt"), tmpStr);
	xls.SetCellText(23, nRow - 1, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);	
	TranslateString(_T("Insurance Paid"), tmpStr);	
	xls.SetCellText(24, nRow - 1, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);
	TranslateString(_T("Trong do ngoai quy DS"), tmpStr);	
	xls.SetCellText(25, nRow - 1, tmpStr, FMT_TEXT|FMT_CENTER, true, 11);

	// ly do vao vien
	xls.SetCellText(26, nRow - 1, _T("L\xFD \x64o v\xE0o vi\x1EC7n"), FMT_TEXT | FMT_CENTER, true, 11);

	if (m_bLaybncc==1)
		szWhere.Format(_T(" and hd_emergency in('Y')"));
	else
		if (m_bKhonglaybncc==1) szWhere.Format(_T(" and (hd_emergency not in('Y') or hd_emergency is null) "));
	
	if (!m_wndClerk.GetCurrent(0).IsEmpty())
		szUserReceiver.Format(_T(" and hfi_receiver ='%s' "), m_wndClerk.GetCurrent(0));

	szInpatientCost.Empty();
	//szInpatientCost.Format(_T(" and hd_suggestion not in('A') "));

		BeginWaitCursor();
	if (pMF->m_szDiscountPrintReport !=_T("Y"))
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T("  	hms_getaddress(hp_provid, hp_distid, hp_villid) as dtladdr,") \
		_T("	hd_emergency as emergency,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_regdate as regdate,") \
		_T("  	hc_expdate as expdate,") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(drugfeek) as drugfeek,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
		_T("  	sum(normtechfee) as normtechfee ,") \
		_T("  	sum(hitechfee) as hitechfee ,") \
		_T("  	sum(materialfee) as materialfee ,") \
		_T("  	sum(examfee) as examfee ,") \
		_T("  	sum(cost-diffpaid) as cost,") \
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
		_T("  	case when substr(hfe_group, 1, 2)='A1' and hfe_group <>'A1400'then hfe_cost-hfe_diffcost else 0 end as drugfee,") \
		_T("  	case when hfe_group ='A1400' then hfe_cost-hfe_diffcost else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_cost-hfe_diffcost else 0 end as bloodfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_cost-hfe_diffcost else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_cost-hfe_diffcost else 0 end as pacsfee,") \
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
		_T("  WHERE ho_type in('I','C') and hd_status='T' and length(hc_cardno) > 1  %s ") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline,insgroup,linename,hdline, regplace, icd10, examdate, dtladdr, emergency, regdate, expdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline, cardno"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT  hd_docno as docno, max(hfi_invoiceno) as invoiceno, ") \
		_T("  	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("  	date_part('year', hp_birthdate) as birthyear,") \
		_T("	hd_emergency as emergency,") \
		_T("  	hms_getaddress(hp_provid, hp_distid, hp_villid) as dtladdr,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex, ") \
		_T("  	case when length(hc_cardno) > 15 then substr(hc_cardno,1,15) else hc_cardno end  as cardno,") \
		_T("	case when hd_insline ='Y' then 1 else 0 end as hdline, ") \
		_T("  	hc_regcode as regplace,") \
		_T("  	hc_regdate as regdate,") \
		_T("  	hc_expdate as expdate,") \
		_T("  	hc_line as insline,") \
		_T("	(SELECT ss_default from sys_sel where ss_id='hms_insline' and ss_code=cast(hc_line as text)) as linename, ")\
		_T("  	(select hig_group from hms_insurance_group where hig_idx= hc_groupid) as insgroup,") \
		_T(" 	date(hd_admitdate) as examdate, ") \
		_T("  	hd_icd as icd10,") \
		_T("  	sum(drugfee) as drugfee,") \
		_T("  	sum(drugfeek) as drugfeek,") \
		_T("  	sum(bloodfee) as bloodfee ,") \
		_T("  	sum(testfee) as testfee ,") \
		_T("  	sum(pacsfee) as pacsfee ,") \
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
		_T("  	case when substr(hfe_group, 1, 2)='A1' and hfe_group <>'A1400'then hfe_discount else 0 end as drugfee,") \
		_T("  	case when hfe_group ='A1400' then hfe_discount else 0 end as drugfeek,") \
		_T("  	case when substr(hfe_group, 1, 2)='A2'then hfe_discount else 0 end as bloodfee,") \
		_T("  	case when substr(hfe_group, 1, 2)='B1'then hfe_discount else 0 end as testfee,") \
		_T("  	case when substr(hfe_group, 1, 2) in('B2','B3') and hfe_hitech='N' then hfe_discount else 0 end as pacsfee,") \
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
		_T(" 	and hfi_class in('E')  and hfe_discount > 0 ") \
		_T("  ) as tbl") \
		_T("  LEFT JOIN hms_doc ON(hfi_docno=hd_docno)	 ") \
		_T("  LEFT JOIN hms_patient ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx)") \
		_T("  LEFT JOIN hms_object ON(ho_id=hd_object)") \
		_T("  WHERE ho_type in('I','C') and hd_status='T' and length(hc_cardno) > 1  %s ") \
		_T("  GROUP BY docno, pname, birthyear, sex, cardno, insline, insgroup, linename,hdline,regplace, icd10, examdate, dtladdr, emergency, regdate, expdate") \
		_T("  HAVING sum(cost) > 0") \
		_T("  ORDER BY insline,insgroup,hdline, cardno"), szFromDate, szToDate, szUserReceiver,szWhere);
	}
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	long nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;
	CString szNewOfLine, szOldOfLine,szSumOfline;

	long double grpCost[27];
	long double grpLine[27];
	long double ttlCost[27];
	long double grpOfLine[27];
	double cost = 0;
	
	for (int i =0; i < 27; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
		ttlCost[i] = 0;
		grpOfLine[i]= 0;
	}
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("insline"), szNewLine);		
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField,szAmount;
			//Tong dung tuyen , trai tuyen
			if(grpOfLine[22] > 0)
			{			
				nRow++;
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s (%s)"),szAmount, szSumOfline);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
				for (int i = 12; i < 27; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);				
					grpLine[i] = 0;					
				}
			}
			//Tong nhom (I,II,...	)
			if(grpCost[22] > 0)
			{
				nRow ++;
				CString szField, szAmount;
				TranslateString(_T("Total Line"), szAmount);
				tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
				xls.SetCellMergedColumns(0,nRow,12);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
				for (int i = 12; i < 27; i++)
				{			
					tmpStr.Format(_T("%.2f"),grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);
					ttlCost[i] += grpCost[i];
					grpLine[i] = 0;
					grpCost[i] = 0;	
				}
			}
			//Tong tuyen (A,B,C)
			if(grpLine[22] > 0)
			{			
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(0,nRow,12);
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);				
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
				for (int i = 12; i < 27; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);				
					grpLine[i] = 0;					
				}
			}		

			nRow++;
			rs.GetValue(_T("linename"), szLineName);
			xls.SetCellMergedColumns(0,nRow,27);
			tmpStr.Format(_T("%s"),  szLineName + _T(". ") + pMF->GetSelectionString(_T("hms_insline"), szNewLine));			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true);
			szOldLine = szNewLine;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}
		//Nhom I,II,...
		rs.GetValue(_T("insgroup"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			CString szField,szAmount;
			if(grpOfLine[22] > 0)
			{			
				nRow++;
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s (%s)"),szAmount,szSumOfline);				
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
				for (int i = 12; i < 27; i++)
				{					
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);				
					grpOfLine[i] = 0;					
				}
			}
			if(grpLine[22] > 0)
			{
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(0,nRow,12);
				tmpStr.Format(_T("%s (%s=(a+b)) "),szAmount , szOldGroup);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);			
				for (int i = 12; i < 27; i++)
				{
					tmpStr.Format(_T("%.2f"),grpLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpLine[i] = 0;						
				}
			}
			nRow++;
			xls.SetCellMergedColumns(0,nRow,27);
			tmpStr.Format(_T("%s"), szNewGroup +_T(". ") + pMF->GetSelectionString(_T("hms_insurance_group"), szNewGroup));
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true);
			szOldGroup = szNewGroup;
			szOldOfLine = _T("xxxx");
			nIndex=1;
		}
		//Dung tuyen hay benh nhan trai tuyen
		rs.GetValue(_T("hdline"), szNewOfLine);
		if(szNewOfLine != szOldOfLine && !szNewOfLine.IsEmpty())
		{
			CString szField,szAmount;
			if(grpOfLine[22] > 0)
			{
				nRow++;
				TranslateString(_T("\x43\x1ED9ng"), szAmount);
				xls.SetCellMergedColumns(1,nRow,11);
				tmpStr.Format(_T("%s (%s)"),szAmount, szSumOfline );
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);			
				for (int i = 12; i < 27; i++)
				{
					tmpStr.Format(_T("%.2f"),grpOfLine[i]);
					xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
					grpOfLine[i] = 0;						
				}
			}
			if (szNewOfLine == _T("0") )
			{
				tmpStr.Format(_T("%s"), lszLine[0]);
				szSumOfline = _T("a");
			}
			else
			{
				tmpStr.Format(_T("%s"), lszLine[1]);
				szSumOfline = _T("b");
			}
			nRow++;
			xls.SetCellMergedColumns(0,nRow,27);
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true);
			szOldOfLine = szNewOfLine;
			nIndex=1;
		}
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);		
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1, false);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, false);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER, false);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT, false);

		rs.GetValue(_T("dtladdr"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT, false);
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT, false);
		tmpStr = CDate::Convert(rs.GetValue(_T("regdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT, false);
		tmpStr = CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT, false);

		rs.GetValue(_T("regplace"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,false);
		tmpStr = CDate::Convert(rs.GetValue(_T("examdate")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,false);
		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_INTEGER,false);
		rs.GetValue(_T("testfee"), cost);
		grpCost[12] += cost;
		grpLine[12] += cost;
		grpOfLine[12] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("pacsfee"), cost);
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

		rs.GetValue(_T("bloodfee"), cost);
		grpCost[15] += cost;
		grpLine[15] += cost;
		grpOfLine[15] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(15, nRow, tmpStr, FMT_NUMBER1,false);


		rs.GetValue(_T("normtechfee"), cost);
		grpCost[16] += cost;
		grpLine[16] += cost;
		grpOfLine[16] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(16, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("materialfee"), cost);
		grpCost[17] += cost;
		grpLine[17] += cost;
		grpOfLine[17] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(17, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("hitechfee"), cost);
		grpCost[18] += cost;
		grpLine[18] += cost;
		grpOfLine[18] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(18, nRow, tmpStr, FMT_NUMBER1,false);
		
		rs.GetValue(_T("drugfeek"), cost);
		grpCost[19] += cost;
		grpLine[19] += cost;
		grpOfLine[19] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1,false);
		

		rs.GetValue(_T("examfee"), cost);
		grpCost[20] += cost;
		grpLine[20] += cost;
		grpOfLine[20] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(20, nRow, tmpStr, FMT_NUMBER1,false);
		

		rs.GetValue(_T("otherfee"), cost);
		grpCost[21] += cost;
		grpLine[21] += cost;
		grpOfLine[21] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(21, nRow, tmpStr, FMT_NUMBER1,false);		

		rs.GetValue(_T("cost"), cost);
		grpCost[22] += cost;
		grpLine[22] += cost;
		grpOfLine[22] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(22, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("patpaid"), cost);
		grpCost[23] += cost;
		grpLine[23] += cost;
		grpOfLine[23] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(23, nRow, tmpStr, FMT_NUMBER1,false);

		rs.GetValue(_T("inspaid"), cost);
		grpCost[24] += cost;
		grpLine[24] += cost;
		grpOfLine[24] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(24, nRow, tmpStr, FMT_NUMBER1,false);

		if (rs.GetValue(_T("emergency")).Trim() == _T("Y"))
			xls.SetCellText(26, nRow, _T("2"), FMT_INTEGER, false);
		rs.MoveNext();
	}

	for (int i =0; i < 27; i++)
	{
			ttlCost[i] += grpCost[i];
	}
	
	if(grpOfLine[22] > 0)
	{	
		CString szAmount;
		nRow++;
		TranslateString(_T("\x43\x1ED9ng"), szAmount);
		xls.SetCellMergedColumns(0,nRow,12);
		tmpStr.Format(_T("%s (%s)"),szAmount, szSumOfline);				
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
		for (int i = 12; i < 27; i++)
		{					
			tmpStr.Format(_T("%.2f"),grpOfLine[i]);
			xls.SetCellText(i, nRow , tmpStr, FMT_NUMBER1,true);					
		}
	}

	if(grpLine[22] > 0)
	{
		nRow ++;
		CString szField,szAmount;
		TranslateString(_T("Total Group"), szAmount);
		tmpStr.Format(_T("%s (%s=(a+b))"),szAmount , szOldGroup);
		xls.SetCellMergedColumns(1,nRow,11);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
		for (int i = 12; i < 27; i++)
		{				
			tmpStr.Format(_T("%.2f"),grpLine[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
		}	
	}
	if(grpCost[22] > 0)
	{
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Line"), szAmount);
		tmpStr.Format(_T("%s (%s)"),szAmount , szLineName);
		xls.SetCellMergedColumns(1,nRow,11);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		for (int i = 12; i < 27; i++)
		{			
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);
		}
	}
	if(ttlCost[22] > 0)
	{
		nRow ++;
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);	
		tmpStr.Format(_T("%s :"),szAmount );
		xls.SetCellMergedColumns(1,nRow,11);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		for (int i = 12; i < 27; i++)
		{			
			tmpStr.Format(_T("%.2f"),ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);
		}

	}	
	xls.Save(_T("Exports\\ChiphikhambenhBHYT_25a.xls"));
	EndWaitCursor();
} 
