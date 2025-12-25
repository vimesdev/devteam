#include "HMSInsuraceRepor21aDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuraceRepor21aDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuraceRepor21aDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuraceRepor21aDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuraceRepor21aDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuraceRepor21aDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInsuraceRepor21aDialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuraceRepor21aDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CHMSInsuraceRepor21aDialog *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSInsuraceRepor21aDialog *pVw = (CHMSInsuraceRepor21aDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSInsuraceRepor21aDialog *pVw = (CHMSInsuraceRepor21aDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSInsuraceRepor21aDialog *pVw = (CHMSInsuraceRepor21aDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuraceRepor21aDialog *pVw = (CHMSInsuraceRepor21aDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CHMSInsuraceRepor21aDialog*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	 ((CHMSInsuraceRepor21aDialog*)pWnd)->OnInPatientSelect();
}
static int _OnAddHMSInsuraceRepor21aDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceRepor21aDialog*)pWnd)->OnAddHMSInsuraceRepor21aDialog();
} 
static int _OnEditHMSInsuraceRepor21aDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceRepor21aDialog*)pWnd)->OnEditHMSInsuraceRepor21aDialog();
} 
static int _OnDeleteHMSInsuraceRepor21aDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceRepor21aDialog*)pWnd)->OnDeleteHMSInsuraceRepor21aDialog();
} 
static int _OnSaveHMSInsuraceRepor21aDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceRepor21aDialog*)pWnd)->OnSaveHMSInsuraceRepor21aDialog();
} 
static int _OnCancelHMSInsuraceRepor21aDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuraceRepor21aDialog*)pWnd)->OnCancelHMSInsuraceRepor21aDialog();
} 
CHMSInsuraceRepor21aDialog::CHMSInsuraceRepor21aDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSInsuraceRepor21aDialog::~CHMSInsuraceRepor21aDialog(){
}
void CHMSInsuraceRepor21aDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 420, 150);
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
	m_wndOutPatient.Create(this, _T("OutPatient"), 115, 120, 250, 145);
	m_wndInPatient.Create(this, _T("InPatient"), 255, 120, 385, 145);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 85, 155, 165, 180);
	m_wndPrint.Create(this, _T("&Print"), 169, 155, 249, 180);
	m_wndExport.Create(this, _T("&Export"), 255, 155, 335, 180);
	m_wndClose.Create(this, _T("&Close"), 340, 155, 420, 180);
}
void CHMSInsuraceRepor21aDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSInsuraceRepor21aDialog::OnSetWindowEvents(){
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
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);

}
void CHMSInsuraceRepor21aDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndInPatient.GetDlgCtrlID(), m_bInPatient);

}
void CHMSInsuraceRepor21aDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuraceRepor21aDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuraceRepor21aDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bOutPatient=FALSE;
	m_bInPatient=FALSE;

}
int CHMSInsuraceRepor21aDialog::SetMode(int nMode){
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
/*void CHMSInsuraceRepor21aDialog::OnYearChange(){
	
} */
/*void CHMSInsuraceRepor21aDialog::OnYearSetfocus(){
	
} */
/*void CHMSInsuraceRepor21aDialog::OnYearKillfocus(){
	
} */
int CHMSInsuraceRepor21aDialog::OnYearCheckValue(){
	return 0;
} 
void CHMSInsuraceRepor21aDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuraceRepor21aDialog::OnReportPeriodSelendok(){
	
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
/*void CHMSInsuraceRepor21aDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSInsuraceRepor21aDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSInsuraceRepor21aDialog::OnReportPeriodLoadData(){
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
/*void CHMSInsuraceRepor21aDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInsuraceRepor21aDialog::OnFromDateChange(){
	
} */
/*void CHMSInsuraceRepor21aDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSInsuraceRepor21aDialog::OnFromDateKillfocus(){
	
} */
int CHMSInsuraceRepor21aDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSInsuraceRepor21aDialog::OnToDateChange(){
	
} */
/*void CHMSInsuraceRepor21aDialog::OnToDateSetfocus(){
	
} */
/*void CHMSInsuraceRepor21aDialog::OnToDateKillfocus(){
	
} */
int CHMSInsuraceRepor21aDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSInsuraceRepor21aDialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuraceRepor21aDialog::OnClerkSelendok(){
	 
}
/*void CHMSInsuraceRepor21aDialog::OnClerkSetfocus(){
	
}*/
/*void CHMSInsuraceRepor21aDialog::OnClerkKillfocus(){
	
}*/
long CHMSInsuraceRepor21aDialog::OnClerkLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSInsuraceRepor21aDialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInsuraceRepor21aDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bPreview=true;
	PrintTonghopsudungdichvukythuatBHYT();
} 
void CHMSInsuraceRepor21aDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	m_bPreview=false;
	PrintTonghopsudungdichvukythuatBHYT();
} 
void CHMSInsuraceRepor21aDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ExportTonghopsudungdichvukythuatBHYT();
} 
void CHMSInsuraceRepor21aDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
	void CHMSInsuraceRepor21aDialog::OnOutPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSInsuraceRepor21aDialog::OnInPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSInsuraceRepor21aDialog::OnAddHMSInsuraceRepor21aDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInsuraceRepor21aDialog::OnEditHMSInsuraceRepor21aDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuraceRepor21aDialog::OnDeleteHMSInsuraceRepor21aDialog(){
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
 		OnCancelHMSInsuraceRepor21aDialog(); 
 	}
	return 0;
}
int CHMSInsuraceRepor21aDialog::OnSaveHMSInsuraceRepor21aDialog(){
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
 		//OnHMSInsuraceRepor21aDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInsuraceRepor21aDialog::OnCancelHMSInsuraceRepor21aDialog(){
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
int CHMSInsuraceRepor21aDialog::OnHMSInsuraceRepor21aDialogListLoadData(){
	return 0;
}
//Bao cao tong hop su dung dich vu ky thuat theo quu ( mau 21/BHYT)
void CHMSInsuraceRepor21aDialog::PrintTonghopsudungdichvukythuatBHYT()
{	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,m_szGroups, szDeptidCLS, szDeptOperation, szDeptDrug;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/HF_THONGKETONGHOPDICHVUKYTHUATTHEOQUY.RPT")) )	
	{
		return;
	}	
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDate::Convert(m_szToDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine,szAmount;
	CString szDate,szMoney;
	CReportSection* rptDetail;
	long double grpCost=0;
	long double ttlCost=0;
	long double totalCost=0;
	double cost=0,costword = 0;
	grpCost=ttlCost=cost=ttlCost=0;
	nIndex=1;


	if (m_bInPatient==1)
	{
		szDeptidCLS.Format(_T(" AND pcmso_depttype ='I' "));
		szDeptOperation.Format(_T(" AND ho_depttype='I' "));
		szDeptDrug.Format(_T(" AND hpo_depttype='I' "));
	}
	else if (m_bOutPatient==1)	
	{
		szDeptidCLS.Format(_T(" AND pcmso_depttype ='E' "));	
		szDeptOperation.Format(_T(" AND ho_depttype='E' "));
		szDeptDrug.Format(_T(" AND hpo_depttype='E' "));
	}
		
	if (m_bInPatient==1 && m_bOutPatient==1)	
	{
		szDeptidCLS.Empty();
		szDeptOperation.Empty();
		szDeptDrug.Empty();
	}
	
//_msg(_T("%s, %d"), szDeptidCLS,m_bInPatient );
UpdateData(false);
szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,") \
			_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
			_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
			_T(" 	from (") \
			_T(" 		select hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
			_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
			_T(" 		from pcms_order ") \
			_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
			_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
			_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
			_T(" 		where date(pcmso_orderdate) between date('%s') and date('%s') and pcmso_status <> 'O'") \
			_T("		and substr(hfl_groupid,1,2)='B1' and hd_object in('1','2') and  hfl_hitech='N' %s") \
			_T(" 		group by groupid,pcmsname,hfl_unit,servprice, insprice") \
			_T(" ) as tb1 ") \
			_T(" where servprice > 0.0") \
			_T(" group by groupid,groupname,pcmsname,unit, servprice, insprice order by groupid;"), m_szFromDate, m_szToDate,szDeptidCLS);
	
	

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{	
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(false);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
		TranslateString(_T("Test"), tmpStr);
		rptDetail->SetValue(_T("GroupName"),tmpStr );
		rptDetail->SetValue(_T("Group"),_T("A") );		
		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{				
					TranslateString(_T("Total Groups"), tmpStr);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s5"), tmpStr);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(10);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));				
				rptDetail->SetValue(_T("GroupName"),szNewLine );
				szOldLine = szNewLine;
			}

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pcmsname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);		
			rs.GetValue(_T("soluong"), tmpStr);					
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("insprice"), cost);		
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);		
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			
			rs.MoveNext();
		}
		
		
		if(grpCost > 0){
			CString szField, szAmount;		
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
			FormatCurrency(grpCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);	
			ttlCost += grpCost;		
		}

		if(ttlCost > 0){
			CString szField, szAmount;
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount +_T("(A)"));						
			FormatCurrency(ttlCost, tmpStr);
			rptDetail->SetValue(_T("S5"), tmpStr);	
			totalCost+=ttlCost;
		}
	}

/*
	Nhom chan doan hinh anh
*/

	szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_id=groupid) as groupName,") \
			_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
			_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
			_T(" 	from (") \
			_T(" 		select hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
			_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
			_T(" 		from pcms_order ") \
			_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
			_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
			_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
			_T(" 		where date(pcmso_orderdate) between date('%s') and date('%s') and pcmso_status <> 'O'") \
			_T("		and substr(hfl_groupid,1,2)='B2' and hd_object in('1','2') and hfl_hitech='N' %s") \
			_T(" 		group by groupid,pcmsname,hfl_unit,servprice, insprice") \
			_T(" ) as tb1 ") \
			_T(" where servprice > 0.0") \
			_T(" group by groupname,groupid,pcmsname,unit, servprice, insprice order by groupid;"), m_szFromDate, m_szToDate,szDeptidCLS);
	
	
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		grpCost=ttlCost=cost=ttlCost=0;
		nIndex=1;
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(false);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
		TranslateString(_T("Diagnostic image"), tmpStr);
		rptDetail->SetValue(_T("GroupName"),tmpStr );
		rptDetail->SetValue(_T("Group"),_T("B") );		
		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{				
					TranslateString(_T("Total Groups"), tmpStr);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s5"), tmpStr);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(10);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));				
				rptDetail->SetValue(_T("GroupName"),szNewLine );
				szOldLine = szNewLine;
			}

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pcmsname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);		
			rs.GetValue(_T("soluong"), tmpStr);					
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("insprice"), cost);		
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);		
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			
			rs.MoveNext();
		}
		ttlCost += grpCost;
		
		if(grpCost > 0){
			CString szField, szAmount;		
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
			FormatCurrency(grpCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);		
		
		}


		if(ttlCost > 0){
			CString szField, szAmount;
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount + _T("(B)"));						
			FormatCurrency(ttlCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
			totalCost+=ttlCost;
		}
	}


/*------------------------------------------------------------------------------------------------------------------------------
	NHOM THAM GIO CHUC NANG
-----------------------------------------------------------------------------------------------------------------------------*/

	szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,") \
			_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
			_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
			_T(" 	from (") \
			_T(" 		select hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
			_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
			_T(" 		from pcms_order ") \
			_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
			_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
			_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
			_T(" 		where date(pcmso_orderdate) between date('%s') and date('%s') ") \
			_T("		and substr(hfl_groupid,1,2)='B3' and hd_object in('1','2') and hfl_hitech='N' and pcmso_status <> 'O' %s") \
			_T(" 		group by groupid,pcmsname,hfl_unit,servprice, insprice") \
			_T(" ) as tb1 ") \
			_T(" where servprice > 0.0") \
			_T(" group by groupname,groupid,pcmsname,unit, servprice, insprice order by groupid;"), m_szFromDate, m_szToDate,szDeptidCLS);
	
	
//	_fmsg(_T("%s"), szSQL);	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		grpCost=ttlCost=cost=ttlCost=0;
		nIndex=1;
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(false);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
		TranslateString(_T("Visiting the function rolls"), tmpStr);
		rptDetail->SetValue(_T("GroupName"),tmpStr );
		rptDetail->SetValue(_T("Group"),_T("C") );
		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{				
					TranslateString(_T("Total Groups"), tmpStr);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s5"), tmpStr);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(10);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));			
				rptDetail->SetValue(_T("GroupName"),szNewLine );
				szOldLine = szNewLine;
			}

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pcmsname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);		
			rs.GetValue(_T("soluong"), tmpStr);					
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("insprice"), cost);		
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);		
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			
			rs.MoveNext();
		}
		ttlCost += grpCost;
		
		if(grpCost > 0){
			CString szField, szAmount;		
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
			FormatCurrency(grpCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);		
		
		}


		if(ttlCost > 0){
			CString szField, szAmount;
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount + _T("(C)"));						
			FormatCurrency(ttlCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
			totalCost+=ttlCost;
		}
	}

/*--------------------------------------------------------------------------------------------------------------------------------------------
	NHOM PHAU THUAT, THU THUAT
--------------------------------------------------------------------------------------------------------------------------------------------*/
	
		szSQL.Format(_T(" SELECT hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_unitprice as price,") \
		_T(" sum(ho_qty) as qty,") \
		_T(" sum(hfe_cost) as cost") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" WHERE hd_object in('1','2') and date(ho_orderdate) BETWEEN date('%s') ") \
		_T(" AND date('%s') AND ho_status <>'O' and hfl_hitech='N' %s ") \
		_T(" GROUP BY operatype, name, price ") \
		_T(" ORDER BY operatype"), m_szFromDate, m_szToDate, szDeptOperation); 
	//_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);	
	if (!rs.IsEOF())
	{
		grpCost=ttlCost=cost=ttlCost=0;
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(false);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
		TranslateString(_T("Surgery - procedures"), tmpStr);
		rptDetail->SetValue(_T("GroupName"),tmpStr );
		rptDetail->SetValue(_T("Group"),_T("D") );
		nIndex = 1;	
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("operatype"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{				
					TranslateString(_T("Total Groups"), tmpStr);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s5"), tmpStr);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(10);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));				
				rptDetail->SetValue(_T("GroupName"),szNewLine );
				szOldLine = szNewLine;
			}

			rptDetail = rpt.AddDetail();	
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("name"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("price"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);		
			rs.GetValue(_T("cost"), cost);
			grpCost += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);		
			rs.MoveNext();
		}
		
		ttlCost += grpCost;
		
		if(grpCost > 0){
			CString szField, szAmount;		
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
			FormatCurrency(grpCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);		
		
		}


		if(ttlCost > 0){
			CString szField, szAmount;
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount + _T("(D)"));						
			FormatCurrency(ttlCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
			totalCost+=ttlCost;
		}
	}
/*----------------------------------------------------------------------------------------------------------------------
NHOM VAT TU Y TE TIEU HAO
-----------------------------------------------------------------------------------------------------------------------*/
	szSQL.Format(_T(" SELECT 	(SELECT hfg_name as name FROM hms_feegroup where hfg_id= pmi_typeid) as pmi_typeid,pmi_id as id, ") \
			_T("		 	pmi_name as name,") \
			_T(" 		 	pmi_unit as unit,") \
			_T("			(SELECT pmm_name from pms_mfg where pmm_id=pmsi_mfgid) as contruyid,") \
			_T(" 		 	pmsi_vatprice as price,	") \
			_T("			sum(hpol_issueqty) as qty, ")\
			_T(" 		 	sum(hpol_issueqty*pmsi_vatprice) as amount") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
			_T(" LEFT JOIN hms_pharmacyorder_line ON (hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
			_T(" WHERE 	 pmi_inspaid ='Y' and date(hpo_issuedate) between date('%s') and date('%s') AND ho_type in('I','C') ") \
			_T(" and substr(pmi_typeid, 1, length(rtrim('A9000','0'))) =rtrim('A9000','0') ") \
			_T(" and hpo_type in('P','D','M','E') and hpo_status IN('A','I','D') %s") \
			_T(" GROUP BY pmi_typeid,pmi_id, pmi_name ,pmi_unit ,pmsi_vatprice, contruyid") \
			_T(" ORDER BY pmi_typeid"), m_szFromDate, m_szToDate, szDeptDrug );
						
			rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			grpCost=ttlCost=cost=ttlCost=0;
			nIndex=1;
			rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(12);
			rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
			rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(false);
			rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetFaceSize(12);
			rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetBold(true);
			rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetItalic(false);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			TranslateString(_T("Consumables"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr );
			rptDetail->SetValue(_T("Group"),_T("E") );
					
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("pmi_typeid"), szNewLine);
				if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
					CString szField;
					if(grpCost > 0)
					{
						TranslateString(_T("Total Group"), szAmount);
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
						rptDetail->SetValue(_T("TotalGroup"), szAmount);						
						FormatCurrency(grpCost, tmpStr);
						rptDetail->SetValue(_T("s5"), tmpStr);
						ttlCost += grpCost;						
						grpCost = 0;								
					}

					rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));					
					rptDetail->SetValue(_T("GroupName"),szNewLine );
					szOldLine = szNewLine;
					nIndex=1;
				}

				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), nIndex++);
				rptDetail->SetValue(_T("1"), tmpStr);				
				rs.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				
				rs.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);

				rs.GetValue(_T("price"), cost);
				FormatCurrency(cost, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				
				rs.GetValue(_T("amount"), cost);	
				grpCost += cost;
				FormatCurrency(cost, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);

				rs.MoveNext();
			}
						
			ttlCost += grpCost;
			
			if(grpCost > 0){	
				TranslateString(_T("Total Group"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
				rptDetail->SetValue(_T("TotalGroup"), szAmount);
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("s5"), tmpStr);			
			}
			if(ttlCost > 0){				
				TranslateString(_T("Total Amount"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount +_T("(E)"));
				FormatCurrency(ttlCost, tmpStr);
				rptDetail->SetValue(_T("s5"), tmpStr);
				totalCost+=ttlCost;
			}
		}
/*------------------------------------------------------------------------------------------------------------------------------
	NHOM DICH VU KY THUAT CAO
-----------------------------------------------------------------------------------------------------------------------------*/

	szSQL.Format(_T(" select groupname, 	       ") \
		_T(" 	groupid,pcmsname, unit, sum(soluong) as soluong,  	       ") \
		_T(" 	 insprice, sum(soluong * insprice) as suminsprice 	") \
		_T(" from ( 	select (select hfg_name from hms_feegroup where hfg_id=hfl_groupid) as groupname,") \
		_T(" 	hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit,sum(1) as soluong, hfl_insprice as insprice 		") \
		_T(" 	from pcms_order  		") \
		_T(" 	left join pcms_order_line on(pcmso_orderid=pcmsol_orderid)  		") \
		_T(" 	left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)		") \
		_T(" 	left join hms_doc on(hd_docno=pcmso_docno)  		") \
		_T(" 	where date(pcmso_orderdate) between date('%s') and date('%s') 		") \
		_T(" 		and hd_object in('1','2') and hfl_hitech='Y'  and pcmso_status <> 'O'	%s") \
		_T(" 	group by groupid,pcmsname,hfl_unit, insprice ") \
		_T(" 	UNION ALL") \
		_T(" 	SELECT (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as groupid,") \
		_T(" 		hfl_groupid as operatype,   hfl_name as name,") \
		_T(" 		hfl_unit,sum(ho_qty) as qty,hfl_insprice as price") \
		_T(" 	FROM hms_patient ") \
		_T(" 	LEFT JOIN hms_doc ON (hp_patientno = hd_patientno) ") \
		_T(" 	LEFT JOIN hms_operation ON  (hd_docno = ho_docno) ") \
		_T(" 	LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid)  ") \
		_T(" 	WHERE hd_object in('1','2') and date(ho_orderdate) BETWEEN date('%s')  AND date('%s') ") \
		_T(" 		AND ho_status <>'O' and hfl_hitech='Y' %s") \
		_T(" 	GROUP BY operatype, name, price,hfl_unit  ") \
		_T(" ) as tb1  where insprice > 0.0 ") \
		_T(" group by groupname,groupid,pcmsname,unit, insprice order by groupid;") \
		, m_szFromDate, m_szToDate,szDeptidCLS,m_szFromDate, m_szToDate,szDeptOperation);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		
		grpCost=ttlCost=cost=ttlCost=0;
		nIndex=1;
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(false);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetFaceSize(12);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetBold(true);
		rpt.GetGroupHeader(0)->GetItem(_T("Group"))->SetItalic(false);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
		TranslateString(_T("High-tech services"), tmpStr);
		rptDetail->SetValue(_T("GroupName"),tmpStr );
		rptDetail->SetValue(_T("Group"),_T("F") );
		
		
		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{				
					TranslateString(_T("Total Groups"), tmpStr);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s5"), tmpStr);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetFaceSize(10);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetBold(true);
				rpt.GetGroupHeader(0)->GetItem(_T("GroupName"))->SetItalic(true);
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));				
				rptDetail->SetValue(_T("GroupName"),szNewLine );
				szOldLine = szNewLine;
			}

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("pcmsname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);		
			rs.GetValue(_T("soluong"), tmpStr);					
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("insprice"), cost);		
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);		
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			
			rs.MoveNext();
		}
		ttlCost += grpCost;
		
		if(grpCost > 0){
			CString szField, szAmount;		
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
			FormatCurrency(grpCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);					
		}
		if(ttlCost > 0){
			CString szField, szAmount;
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount + _T("(F)"));						
			FormatCurrency(ttlCost, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
			totalCost+=ttlCost;
		}

	}

	if(totalCost > 0){
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount + _T("(A+B+C+D+E+F)"));						
		FormatCurrency(totalCost, tmpStr);
		rptDetail->SetValue(_T("s5"), tmpStr);
	}
	//Page Footer
	//Report Footer
	
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);			
	MoneyToString(szMoney, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);

	if(m_bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
	UpdateData(false);
}

//Bao cao tong hop su dung dich vu ky thuat theo quu ( mau 21/BHYT)
void CHMSInsuraceRepor21aDialog::ExportTonghopsudungdichvukythuatBHYT()
{	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,m_szGroups, szDeptidCLS, szDeptOperation, szDeptDrug;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);
	
	CExcel xls;
	xls.CreateSheet(0);
	xls.SetWorksheet(0);
	
	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,50);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 15);

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	xls.SetCellText(0, 2, tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	xls.SetCellText(0,3, tmpStr);
	
	xls.SetCellMergedColumns(0,5,12);	
	StringUpper(_T("General statistics and technical services for patients using medical insurance"), tmpStr);
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,13);
	xls.SetCellMergedColumns(0,6,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 6, tmpStr,FMT_TEXT,true,12,0);
	

	int nRow = 8;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_INTEGER,true);	
	TranslateString(_T("Desc"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Qty"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Price"), tmpStr);	
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Amount"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);		


	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine,szAmount;
	CString szDate,szMoney;	
	long double grpCost=0;
	long double ttlCost=0;
	long double totalCost=0;
	double cost=0,costword = 0;
	grpCost=ttlCost=cost=0;
	nIndex=1;


	if (m_bInPatient==1)
	{
		szDeptidCLS.Format(_T(" AND pcmso_depttype ='I' "));
		szDeptOperation.Format(_T(" AND ho_depttype='I' "));
		szDeptDrug.Format(_T(" AND hpo_depttype='I' "));
	}
	else if (m_bOutPatient==1)	
	{
		szDeptidCLS.Format(_T(" AND pcmso_depttype ='E' "));	
		szDeptOperation.Format(_T(" AND ho_depttype='E' "));
		szDeptDrug.Format(_T(" AND hpo_depttype='E' "));
	}
		
	if (m_bInPatient==1 && m_bOutPatient==1)	
	{
		szDeptidCLS.Empty();
		szDeptOperation.Empty();
		szDeptDrug.Empty();
	}
	
//_msg(_T("%s, %d"), szDeptidCLS,m_bInPatient );
UpdateData(false);
szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,") \
			_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
			_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
			_T(" 	from (") \
			_T(" 		select hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
			_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
			_T(" 		from pcms_order ") \
			_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
			_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
			_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
			_T(" 		where date(pcmso_orderdate) between date('%s') and date('%s') and pcmso_status <> 'O'") \
			_T("		and substr(hfl_groupid,1,2)='B1' and hd_object in('1','2') and  hfl_hitech='N' %s") \
			_T(" 		group by groupid,pcmsname,hfl_unit,servprice, insprice") \
			_T(" ) as tb1 ") \
			_T(" where servprice > 0.0") \
			_T(" group by groupname,groupid,pcmsname,unit, servprice, insprice order by groupid;"), m_szFromDate, m_szToDate,szDeptidCLS);
	
	

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{	
		nRow++;		
		TranslateString(_T("Test"), tmpStr);
		xls.SetCellText(0,nRow,_T("A."),FMT_TEXT,TRUE,14);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT,TRUE,14);		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{	
					nRow++;
					TranslateString(_T("C\x1ED9ng:"), tmpStr);
					xls.SetCellText(1,nRow, tmpStr,FMT_TEXT,TRUE);
					tmpStr.Format(_T("%.2f"),grpCost);
					xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				nRow++;				
				xls.SetCellText(1,nRow, szNewLine, FMT_TEXT, TRUE,14);
				szOldLine = szNewLine;
			}
			nRow++;			
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("pcmsname"), tmpStr);
			xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("soluong"), tmpStr);					
			xls.SetCellText(2,nRow,tmpStr, FMT_INTEGER);
			rs.GetValue(_T("insprice"), cost);		
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(3,nRow,tmpStr, FMT_NUMBER1);
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(4,nRow,tmpStr, FMT_NUMBER1);
			
			rs.MoveNext();
		}		
		
		if(grpCost > 0){
			nRow++;
			TranslateString(_T("C\x1ED9ng:"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr,FMT_TEXT,TRUE);
			tmpStr.Format(_T("%.2f"),grpCost);
			xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
			ttlCost += grpCost;		
		}

		if(ttlCost > 0){
			nRow++;
			TranslateString(_T("Total Groups"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr + _T("(A)"),FMT_TEXT,TRUE);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
			totalCost+=ttlCost;
		}
	}

/*
	Nhom chan doan hinh anh
*/

	szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,") \
			_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
			_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
			_T(" 	from (") \
			_T(" 		select hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
			_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
			_T(" 		from pcms_order ") \
			_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
			_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
			_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
			_T(" 		where date(pcmso_orderdate) between date('%s') and date('%s') and pcmso_status <> 'O'") \
			_T("		and substr(hfl_groupid,1,2)='B2' and hd_object in('1','2') and hfl_hitech='N' %s") \
			_T(" 		group by groupid,pcmsname,hfl_unit,servprice, insprice") \
			_T(" ) as tb1 ") \
			_T(" where servprice > 0.0") \
			_T(" group by groupname,groupid,pcmsname,unit, servprice, insprice order by groupid;"), m_szFromDate, m_szToDate,szDeptidCLS);
	
	
	//_fmsg(_T("%s"), szSQL);
	nIndex=1;
	grpCost=ttlCost=cost=ttlCost=0;
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{	
		nRow++;		
		TranslateString(_T("Diagnostic image"), tmpStr);
		xls.SetCellText(0,nRow,_T("B"),FMT_TEXT,TRUE,14);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT,TRUE,14);		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{	
					nRow++;
					TranslateString(_T("C\x1ED9ng:"), tmpStr);
					xls.SetCellText(1,nRow, tmpStr,FMT_TEXT,TRUE);
					tmpStr.Format(_T("%.2f"),grpCost);
					xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				nRow++;				
				xls.SetCellText(1,nRow, szNewLine, FMT_TEXT, TRUE);
				szOldLine = szNewLine;
			}
			nRow++;			
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("pcmsname"), tmpStr);
			xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("soluong"), tmpStr);					
			xls.SetCellText(2,nRow,tmpStr, FMT_INTEGER);
			rs.GetValue(_T("insprice"), cost);		
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(3,nRow,tmpStr, FMT_NUMBER1);
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(4,nRow,tmpStr, FMT_NUMBER1);
			
			rs.MoveNext();
		}		
		
		if(grpCost > 0){
			nRow++;
			TranslateString(_T("C\x1ED9ng:"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr,FMT_TEXT,TRUE);
			tmpStr.Format(_T("%.2f"),grpCost);
			xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
			ttlCost += grpCost;		
		}

		if(ttlCost > 0){
			nRow++;
			TranslateString(_T("Total Groups"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr + _T("(B)"),FMT_TEXT,TRUE);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
			totalCost+=ttlCost;
		}
	}
	

/*------------------------------------------------------------------------------------------------------------------------------
	NHOM THAM GIO CHUC NANG
-----------------------------------------------------------------------------------------------------------------------------*/

	szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_id=groupid) as groupname,") \
			_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
			_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
			_T(" 	from (") \
			_T(" 		select hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
			_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
			_T(" 		from pcms_order ") \
			_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
			_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
			_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
			_T(" 		where date(pcmso_orderdate) between date('%s') and date('%s') ") \
			_T("		and substr(hfl_groupid,1,2)='B3' and hd_object in('1','2') and hfl_hitech='N' and pcmso_status <> 'O' %s") \
			_T(" 		group by groupid,pcmsname,hfl_unit,servprice, insprice") \
			_T(" ) as tb1 ") \
			_T(" where servprice > 0.0") \
			_T(" group by groupname,groupid,pcmsname,unit, servprice, insprice order by groupid;"), m_szFromDate, m_szToDate,szDeptidCLS);
	
	
//	_fmsg(_T("%s"), szSQL);	
	nIndex=1;
	grpCost=ttlCost=cost=0;
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{	
		nRow++;		
		TranslateString(_T("Visiting the function rolls"), tmpStr);
		xls.SetCellText(0,nRow,_T("C"),FMT_TEXT,TRUE,14);
		xls.SetCellText(1,nRow,tmpStr,FMT_TEXT,TRUE,14);		
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{	
					nRow++;
					TranslateString(_T("C\x1ED9ng:"), tmpStr);
					xls.SetCellText(1,nRow, tmpStr,FMT_TEXT,TRUE);
					tmpStr.Format(_T("%.2f"),grpCost);
					xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				nRow++;				
				xls.SetCellText(1,nRow, szNewLine, FMT_TEXT, TRUE);
				szOldLine = szNewLine;
			}
			nRow++;			
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("pcmsname"), tmpStr);
			xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
			rs.GetValue(_T("soluong"), tmpStr);					
			xls.SetCellText(2,nRow,tmpStr, FMT_INTEGER);
			rs.GetValue(_T("insprice"), cost);		
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(3,nRow,tmpStr, FMT_NUMBER1);
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(4,nRow,tmpStr, FMT_NUMBER1);
			
			rs.MoveNext();
		}		
		
		if(grpCost > 0){
			nRow++;
			TranslateString(_T("C\x1ED9ng:"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr,FMT_TEXT,TRUE);
			tmpStr.Format(_T("%.2f"),grpCost);
			xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
			ttlCost += grpCost;		
		}

		if(ttlCost > 0){
			nRow++;
			TranslateString(_T("Total Groups"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr + _T("(C)"),FMT_TEXT,TRUE);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4,nRow, tmpStr, FMT_NUMBER1,TRUE);
			totalCost+=ttlCost;
		}
	}	

/*--------------------------------------------------------------------------------------------------------------------------------------------
	NHOM PHAU THUAT, THU THUAT
--------------------------------------------------------------------------------------------------------------------------------------------*/
	
		szSQL.Format(_T(" SELECT hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_unitprice as price,") \
		_T(" sum(ho_qty) as qty,") \
		_T(" sum(hfe_cost) as cost") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" WHERE hd_object in('1','2') and date(ho_orderdate) BETWEEN date('%s') ") \
		_T(" AND date('%s') AND ho_status <>'O' and hfl_hitech='N' %s ") \
		_T(" GROUP BY operatype, name, price ") \
		_T(" ORDER BY operatype"), m_szFromDate, m_szToDate, szDeptOperation); 
	//_fmsg(_T("%s"), szSQL);
	nIndex=1;
	grpCost=ttlCost=cost=0;
	rs.ExecSQL(szSQL);	
	if (!rs.IsEOF())
	{
		nRow++;		
		TranslateString(_T("Surgery - procedures"), tmpStr);
		xls.SetCellText(0, nRow, _T("D"), FMT_TEXT,TRUE,14);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,TRUE,14);		
		nIndex = 1;	
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("operatype"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{	
					nRow++;
					TranslateString(_T("C\x1ED9ng:"), tmpStr);
					xls.SetCellText(1, nRow, tmpStr,FMT_TEXT, TRUE);
					tmpStr.Format(_T("%.2f"),grpCost);
					xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				nRow++;				
				xls.SetCellText(1,nRow,szNewLine,FMT_TEXT,TRUE);
				szOldLine = szNewLine;
			}

			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0,nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("name"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr,FMT_TEXT);
			rs.GetValue(_T("qty"), tmpStr);
			xls.SetCellText(2,nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("price"), cost);
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(3,nRow, tmpStr,FMT_NUMBER1);
			rs.GetValue(_T("cost"), cost);
			grpCost += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(4,nRow, tmpStr,FMT_NUMBER1);
			rs.MoveNext();
		}		
		
		
		if(grpCost > 0){
			nRow++;
			TranslateString(_T("C\x1ED9ng:"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr,FMT_TEXT, TRUE);
			tmpStr.Format(_T("%.2f"),grpCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
			ttlCost += grpCost;
		
		}

		if(ttlCost > 0){
			nRow++;
			TranslateString(_T("Total Groups"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr + _T("(D)"),FMT_TEXT, TRUE);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
			totalCost+=ttlCost;
		}
	}
/*----------------------------------------------------------------------------------------------------------------------
NHOM VAT TU Y TE TIEU HAO
-----------------------------------------------------------------------------------------------------------------------*/
	szSQL.Format(_T(" SELECT 	(SELECT hfg_name as name FROM hms_feegroup where hfg_id= pmi_typeid) as pmi_typeid,pmi_id as id, ") \
			_T("		 	pmi_name as name,") \
			_T(" 		 	pmi_unit as unit,") \
			_T("			(SELECT pmm_name from pms_mfg where pmm_id=pmsi_mfgid) as contruyid,") \
			_T(" 		 	pmsi_vatprice as price,	") \
			_T("			sum(hpol_issueqty) as qty, ")\
			_T(" 		 	sum(hpol_issueqty*pmsi_vatprice) as amount") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
			_T(" LEFT JOIN hms_pharmacyorder_line ON (hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" LEFT JOIN hms_object ON(hd_object=ho_id)") \
			_T(" WHERE 	 pmi_inspaid ='Y' and date(hpo_issuedate) between date('%s') and date('%s') AND ho_type in('I','C') ") \
			_T(" and substr(pmi_typeid, 1, length(rtrim('A9000','0'))) =rtrim('A9000','0') ") \
			_T(" and hpo_type in('P','D','M','E') and hpo_status IN('A','I','D') %s") \
			_T(" GROUP BY pmi_typeid,pmi_id, pmi_name ,pmi_unit ,pmsi_vatprice, contruyid") \
			_T(" ORDER BY pmi_typeid"), m_szFromDate, m_szToDate, szDeptDrug );
						
	rs.ExecSQL(szSQL);
	nIndex=1;
	grpCost=ttlCost=cost=0;
	if (!rs.IsEOF())
	{
		nRow++;		
		TranslateString(_T("Consumables"), tmpStr);
		xls.SetCellText(0, nRow, _T("E"), FMT_TEXT,TRUE,14);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,TRUE,14);		
		nIndex = 1;	
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("pmi_typeid"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{	
					nRow++;
					TranslateString(_T("C\x1ED9ng:"), tmpStr);
					xls.SetCellText(1, nRow, tmpStr,FMT_TEXT, TRUE);
					tmpStr.Format(_T("%.2f"),grpCost);
					xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				nRow++;				
				xls.SetCellText(1,nRow,szNewLine,FMT_TEXT,TRUE);
				szOldLine = szNewLine;
			}

			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0,nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("name"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr,FMT_TEXT);
			rs.GetValue(_T("qty"), tmpStr);
			xls.SetCellText(2,nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("price"), cost);
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(3,nRow, tmpStr,FMT_NUMBER1);
			rs.GetValue(_T("amount"), cost);
			grpCost += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(4,nRow, tmpStr,FMT_NUMBER1);
			rs.MoveNext();
		}		
		
		
		if(grpCost > 0){
			nRow++;
			TranslateString(_T("C\x1ED9ng:"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr,FMT_TEXT, TRUE);
			tmpStr.Format(_T("%.2f"),grpCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
			ttlCost += grpCost;
		
		}

		if(ttlCost > 0){
			nRow++;
			TranslateString(_T("Total Groups"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr + _T("(E)"),FMT_TEXT, TRUE);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
			totalCost+=ttlCost;
		}
	}

/*------------------------------------------------------------------------------------------------------------------------------
	NHOM DICH VU KY THUAT CAO
-----------------------------------------------------------------------------------------------------------------------------*/

	szSQL.Format(_T(" select groupname, 	       ") \
		_T(" 	groupid,pcmsname, unit, sum(soluong) as soluong,  	       ") \
		_T(" 	 insprice, sum(soluong * insprice) as suminsprice 	") \
		_T(" from ( 	select (select hfg_name from hms_feegroup where hfg_id=hfl_groupid) as groupname,") \
		_T(" 	hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit,sum(1) as soluong, hfl_insprice as insprice 		") \
		_T(" 	from pcms_order  		") \
		_T(" 	left join pcms_order_line on(pcmso_orderid=pcmsol_orderid)  		") \
		_T(" 	left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)		") \
		_T(" 	left join hms_doc on(hd_docno=pcmso_docno)  		") \
		_T(" 	where date(pcmso_orderdate) between date('%s') and date('%s') 		") \
		_T(" 		and hd_object in('1','2') and hfl_hitech='Y'  and pcmso_status <> 'O'	%s") \
		_T(" 	group by hfl_deptid,groupid,pcmsname,hfl_unit, insprice ") \
		_T(" 	UNION ALL") \
		_T(" 	SELECT (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as groupid,") \
		_T(" 		hfl_groupid as operatype,   hfl_name as name,") \
		_T(" 		hfl_unit,sum(ho_qty) as qty,hfl_insprice as price") \
		_T(" 	FROM hms_patient ") \
		_T(" 	LEFT JOIN hms_doc ON (hp_patientno = hd_patientno) ") \
		_T(" 	LEFT JOIN hms_operation ON  (hd_docno = ho_docno) ") \
		_T(" 	LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid)  ") \
		_T(" 	WHERE hd_object in('1','2') and date(ho_orderdate) BETWEEN date('%s')  AND date('%s') ") \
		_T(" 		AND ho_status <>'O' and hfl_hitech='Y' %s") \
		_T(" 	GROUP BY operatype, name, price,hfl_unit  ") \
		_T(" ) as tb1  where insprice > 0.0 ") \
		_T(" group by groupname,groupid,pcmsname,unit, insprice order by groupid;") \
		, m_szFromDate, m_szToDate,szDeptidCLS,m_szFromDate, m_szToDate,szDeptOperation);
	nIndex=1;
	grpCost=ttlCost=cost=0;
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		nRow++;		
		TranslateString(_T("High-tech services"), tmpStr);
		xls.SetCellText(0, nRow, _T("F"), FMT_TEXT,TRUE,14);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,TRUE,14);		
		nIndex = 1;	
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("groupname"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{	
					nRow++;
					TranslateString(_T("C\x1ED9ng:"), tmpStr);
					xls.SetCellText(1, nRow, tmpStr,FMT_TEXT, TRUE);
					tmpStr.Format(_T("%.2f"),grpCost);
					xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
					ttlCost += grpCost;
					nIndex=1;
					grpCost = 0;				
				}
				nRow++;				
				xls.SetCellText(1,nRow,szNewLine,FMT_TEXT,TRUE);
				szOldLine = szNewLine;
			}

			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0,nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("pcmsname"), tmpStr);
			xls.SetCellText(1,nRow, tmpStr,FMT_TEXT);
			rs.GetValue(_T("Soluong"), tmpStr);
			xls.SetCellText(2,nRow, tmpStr,FMT_INTEGER);
			rs.GetValue(_T("insprice"), cost);
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(3,nRow, tmpStr,FMT_NUMBER1);
			rs.GetValue(_T("suminsprice"), cost);
			grpCost += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(4,nRow, tmpStr,FMT_NUMBER1);
			rs.MoveNext();
		}		
		
		
		if(grpCost > 0){
			nRow++;
			TranslateString(_T("C\x1ED9ng:"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr,FMT_TEXT, TRUE);
			tmpStr.Format(_T("%.2f"),grpCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
			ttlCost += grpCost;
		
		}

		if(ttlCost > 0){
			nRow++;
			TranslateString(_T("Total Groups"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr + _T("F"),FMT_TEXT, TRUE);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE);
			totalCost+=ttlCost;
		}
	}


	if(totalCost > 0){
		nRow++;
		TranslateString(_T("Total Groups"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr + + _T("(A+B+C+D+E+F)"),FMT_TEXT, TRUE,14);
		tmpStr.Format(_T("%.2f"),totalCost);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1, TRUE, 14);		
	}
	//Page Footer
	//Report Footer
	nRow++;
	tmpStr.Format(_T("%.2f"),totalCost);
	MoneyToString(szMoney, tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(_T(" Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	xls.SetCellText(3, nRow+3, szDate,FMT_TEXT);
	xls.Save(_T("Exports\\Baocao21aBHYT.xls"));
}
