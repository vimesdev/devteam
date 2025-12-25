#include "HMSReportSnapDlg.h"
#include "MainFrm.h"
static void _OnLogDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSReportSnapDlg* )pWnd)->OnLogDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLogDateSelendokFnc(CWnd *pWnd){
	((CHMSReportSnapDlg *)pWnd)->OnLogDateSelendok();
}
/*static void _OnLogDateSetfocusFnc(CWnd *pWnd){
	((CHMSReportSnapDlg *)pWnd)->OnLogDateKillfocus();
}*/
/*static void _OnLogDateKillfocusFnc(CWnd *pWnd){
	((CHMSReportSnapDlg *)pWnd)->OnLogDateKillfocus();
}*/
static long _OnLogDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSReportSnapDlg *)pWnd)->OnLogDateLoadData();
}
/*static void _OnLogDateAddNewFnc(CWnd *pWnd){
	((CHMSReportSnapDlg *)pWnd)->OnLogDateAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSReportSnapDlg *pVw = (CHMSReportSnapDlg *)pWnd;
	pVw->OnExportSelect();
} 

static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSReportSnapDlg *pVw = (CHMSReportSnapDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSReportSnapDlgFnc(CWnd *pWnd){
	 return ((CHMSReportSnapDlg*)pWnd)->OnAddHMSReportSnapDlg();
} 
static int _OnEditHMSReportSnapDlgFnc(CWnd *pWnd){
	 return ((CHMSReportSnapDlg*)pWnd)->OnEditHMSReportSnapDlg();
} 
static int _OnDeleteHMSReportSnapDlgFnc(CWnd *pWnd){
	 return ((CHMSReportSnapDlg*)pWnd)->OnDeleteHMSReportSnapDlg();
} 
static int _OnSaveHMSReportSnapDlgFnc(CWnd *pWnd){
	 return ((CHMSReportSnapDlg*)pWnd)->OnSaveHMSReportSnapDlg();
} 
static int _OnCancelHMSReportSnapDlgFnc(CWnd *pWnd){
	 return ((CHMSReportSnapDlg*)pWnd)->OnCancelHMSReportSnapDlg();
} 
CHMSReportSnapDlg::CHMSReportSnapDlg(CWnd *pParent, CString szReport_id):
	CGuiDialog(pParent), m_szReport_id(szReport_id){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSReportSnapDlg::~CHMSReportSnapDlg(){
}
void CHMSReportSnapDlg::OnCreateComponents(){
	m_wndLogDateLabel.Create(this, _T("Log Date"), 5, 5, 85, 30);
	m_wndLogDate.Create(this,90, 5, 340, 30);
	m_wndDelete.Create(this, _T("&Delete"), 5, 35, 85, 60);
	m_wndExport.Create(this, _T("&Export"), 260, 35, 340, 60);
	
}
void CHMSReportSnapDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLogDate.SetCheckValue(true);
	m_wndLogDate.LimitText(35);

	m_wndLogDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndLogDate.InsertColumn(1, _T("Date"), CFMT_DATE, 100);
	m_wndLogDate.InsertColumn(2, _T("Option"), CFMT_TEXT, 200);

}
void CHMSReportSnapDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLogDate.SetEvent(WE_SELENDOK, _OnLogDateSelendokFnc);
	//m_wndLogDate.SetEvent(WE_SETFOCUS, _OnLogDateSetfocusFnc);
	//m_wndLogDate.SetEvent(WE_KILLFOCUS, _OnLogDateKillfocusFnc);
	m_wndLogDate.SetEvent(WE_SELCHANGE, _OnLogDateSelectChangeFnc);
	m_wndLogDate.SetEvent(WE_LOADDATA, _OnLogDateLoadDataFnc);
	//m_wndLogDate.SetEvent(WE_ADDNEW, _OnLogDateAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	EnableControls();
	EnableButtons(FALSE, 0, -1);
	if (pMF->CheckPermission(_T("01.01")))
	{
		m_wndDelete.EnableWindow();
	}
}
void CHMSReportSnapDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndLogDate.GetDlgCtrlID(), m_szLogDateKey);

}
void CHMSReportSnapDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("LogDate")] =  m_szLogDateKey;
	}
	else
	{
			
	m_jData[_T("LogDate")].GetValue(m_szLogDateKey);
	}

}
void CHMSReportSnapDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSReportSnapDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReportSnapDlg::SetDefaultValues(){

	m_szLogDateKey.Empty();

}
int CHMSReportSnapDlg::SetMode(int nMode){
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
void CHMSReportSnapDlg::OnLogDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReportSnapDlg::OnLogDateSelendok(){
	 
}
/*void CHMSReportSnapDlg::OnLogDateSetfocus(){
	
}*/
/*void CHMSReportSnapDlg::OnLogDateKillfocus(){
	
}*/
long CHMSReportSnapDlg::OnLogDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLogDate.IsSearchKey() && !m_szLogDateKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szLogDateKey);
	};
	m_wndLogDate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrs_id as id, ") \
				_T("	to_char(hrs_report_date, 'dd/mm/yyyy') as report_date, ") \
				_T("	hrs_option as report_option ") \
				_T(" FROM hms_report_snap ") \
				_T(" WHERE 1=1 %s ") \
				_T(" AND hrs_report_id = '%s'") \
				_T(" ORDER BY hrs_report_date ")
				, szWhere, m_szReport_id);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLogDate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("report_date")), 
			rs.GetValue(_T("report_option")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSReportSnapDlg::OnLogDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSReportSnapDlg::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
	{
		return;
	}
	m_szSnap_id = m_szLogDateKey;
	m_szReport_date = m_wndLogDate.GetCurrent(1);
	//OnExport();
	CGuiDialog::OnOK();
} 

void CHMSReportSnapDlg::OnExport()
{
	
}

int CHMSReportSnapDlg::OnAddHMSReportSnapDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSReportSnapDlg::OnEditHMSReportSnapDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReportSnapDlg::OnDeleteHMSReportSnapDlg(){
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
 		OnCancelHMSReportSnapDlg();
 	}
	return 0;
}
int CHMSReportSnapDlg::OnSaveHMSReportSnapDlg(){
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
 		//OnHMSReportSnapDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSReportSnapDlg::OnCancelHMSReportSnapDlg(){
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
int CHMSReportSnapDlg::OnHMSReportSnapDlgListLoadData(){
	return 0;
}

void CHMSReportSnapDlg::OnDeleteSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	if (m_szLogDateKey.IsEmpty())
	{
		return;
	}
	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return;
	CString szSQL;
	szSQL.Format(_T("HMS_REPORT_SNAP_DELETE('%s')"), m_szLogDateKey);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnLogDateLoadData();
	}
}