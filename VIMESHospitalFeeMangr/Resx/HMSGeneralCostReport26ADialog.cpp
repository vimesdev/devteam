#include "HMSGeneralCostReport26ADialog.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostReport26ADialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostReport26ADialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostReport26ADialog *)pWnd)->OnClerkAddNew();
}*/
static void _OnInlineSelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostReport26ADialog*)pWnd)->OnInlineSelect();
}
static void _OnOfflineSelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostReport26ADialog*)pWnd)->OnOfflineSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralCostReport26ADialog *pVw = (CHMSGeneralCostReport26ADialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralCostReport26ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog*)pWnd)->OnAddHMSGeneralCostReport26ADialog();
} 
static int _OnEditHMSGeneralCostReport26ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog*)pWnd)->OnEditHMSGeneralCostReport26ADialog();
} 
static int _OnDeleteHMSGeneralCostReport26ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog*)pWnd)->OnDeleteHMSGeneralCostReport26ADialog();
} 
static int _OnSaveHMSGeneralCostReport26ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog*)pWnd)->OnSaveHMSGeneralCostReport26ADialog();
} 
static int _OnCancelHMSGeneralCostReport26ADialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostReport26ADialog*)pWnd)->OnCancelHMSGeneralCostReport26ADialog();
} 
CHMSGeneralCostReport26ADialog::CHMSGeneralCostReport26ADialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSGeneralCostReport26ADialog::~CHMSGeneralCostReport26ADialog(){
}
void CHMSGeneralCostReport26ADialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 400, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 30, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 395, 115); 
	m_wndInline.Create(this, _T("In-line"), 115, 120, 200, 145);
	m_wndOffline.Create(this, _T("Off-line"), 205, 120, 305, 145);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 65, 155, 145, 180);
	m_wndPrint.Create(this, _T("&Print"), 150, 155, 230, 180);
	m_wndExport.Create(this, _T("&Export"), 235, 155, 315, 180);
	m_wndClose.Create(this, _T("&Close"), 320, 155, 400, 180);

}
void CHMSGeneralCostReport26ADialog::OnInitializeComponents(){
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
void CHMSGeneralCostReport26ADialog::OnSetWindowEvents(){
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
	m_wndInline.SetEvent(WE_CLICK, _OnInlineSelectFnc);
	m_wndOffline.SetEvent(WE_CLICK, _OnOfflineSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSGeneralCostReport26ADialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndInline.GetDlgCtrlID(), m_bInline);
	DDX_Check(pDX, m_wndOffline.GetDlgCtrlID(), m_bOffline);

}
void CHMSGeneralCostReport26ADialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralCostReport26ADialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralCostReport26ADialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bInline=FALSE;
	m_bOffline=FALSE;

}
int CHMSGeneralCostReport26ADialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1); 
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
/*void CHMSGeneralCostReport26ADialog::OnYearChange(){
	
} */
/*void CHMSGeneralCostReport26ADialog::OnYearSetfocus(){
	
} */
/*void CHMSGeneralCostReport26ADialog::OnYearKillfocus(){
	
} */
int CHMSGeneralCostReport26ADialog::OnYearCheckValue(){
	return 0;
} 
void CHMSGeneralCostReport26ADialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog::OnReportPeriodSelendok(){
	 
}
/*void CHMSGeneralCostReport26ADialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSGeneralCostReport26ADialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSGeneralCostReport26ADialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSGeneralCostReport26ADialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSGeneralCostReport26ADialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralCostReport26ADialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralCostReport26ADialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralCostReport26ADialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralCostReport26ADialog::OnToDateChange(){
	
} */
/*void CHMSGeneralCostReport26ADialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralCostReport26ADialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralCostReport26ADialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralCostReport26ADialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog::OnClerkSelendok(){
	 
}
/*void CHMSGeneralCostReport26ADialog::OnClerkSetfocus(){
	
}*/
/*void CHMSGeneralCostReport26ADialog::OnClerkKillfocus(){
	
}*/
long CHMSGeneralCostReport26ADialog::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
	};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSGeneralCostReport26ADialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSGeneralCostReport26ADialog::OnInlineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSGeneralCostReport26ADialog::OnOfflineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSGeneralCostReport26ADialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostReport26ADialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralCostReport26ADialog::OnAddHMSGeneralCostReport26ADialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralCostReport26ADialog::OnEditHMSGeneralCostReport26ADialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralCostReport26ADialog::OnDeleteHMSGeneralCostReport26ADialog(){
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
 		OnCancelHMSGeneralCostReport26ADialog(); 
 	}
	return 0;
}
int CHMSGeneralCostReport26ADialog::OnSaveHMSGeneralCostReport26ADialog(){
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
 		//OnHMSGeneralCostReport26ADialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralCostReport26ADialog::OnCancelHMSGeneralCostReport26ADialog(){
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
int CHMSGeneralCostReport26ADialog::OnHMSGeneralCostReport26ADialogListLoadData(){
	return 0;
}
