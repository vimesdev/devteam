#include "rptReportlistspatientcostsexceedtheadvanceDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptReportlistspatientcostsexceedtheadvanceDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptReportlistspatientcostsexceedtheadvanceDialog *pVw = (CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CrptReportlistspatientcostsexceedtheadvanceDialog *pVw = (CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptReportlistspatientcostsexceedtheadvanceDialog *pVw = (CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnAllSelect();
}
static void _OnOnlyThuaSelectFnc(CWnd *pWnd){
	  ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnOnlyThuaSelect();
}
/*static void _OnLevelChangeFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnLevelChange();
} */
/*static void _OnLevelSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnLevelSetfocus();} */ 
/*static void _OnLevelKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnLevelKillfocus();
} */
static int _OnLevelCheckValueFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnLevelCheckValue();
} 
static int _OnAddrptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnAddrptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnEditrptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnEditrptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnDeleterptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnDeleterptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnSaverptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnSaverptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnCancelrptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnCancelrptReportlistspatientcostsexceedtheadvanceDialog();
} 
CrptReportlistspatientcostsexceedtheadvanceDialog::CrptReportlistspatientcostsexceedtheadvanceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 955;
	m_nDlgHeight = 615;
	SetDefaultValues();
}
CrptReportlistspatientcostsexceedtheadvanceDialog::~CrptReportlistspatientcostsexceedtheadvanceDialog(){
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnCreateComponents(){
	m_wndReportCriteria.Create(this, _T("Conditions to report"), 5, 5, 945, 95);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 365, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 370, 30, 450, 55);
	m_wndDept.Create(this,455, 29, 684, 54); 
	m_wndPrint.Create(this, _T("&Print"), 774, 29, 854, 54);
	m_wndLoad.Create(this, _T("Load"), 689, 29, 769, 54);
	m_wndExport.Create(this, _T("&Export"), 859, 29, 939, 54);
	m_wndList.Create(this,5, 100, 945, 600); 
	m_wndAll.Create(this, _T("All"), 10, 60, 175, 85);
	m_wndOnlyThua.Create(this, _T("Only Thua"), 180, 60, 365, 85);
	m_wndFloorlevelLabel.Create(this, _T("Floor level"), 370, 60, 450, 85);
	m_wndLevel.Create(this,455, 60, 580, 85); 

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndLevel.SetLimitText(35);
	m_wndLevel.SetCheckValue(true);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);



}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOnlyThua.SetEvent(WE_CLICK, _OnOnlyThuaSelectFnc);
	//m_wndLevel.SetEvent(WE_CHANGE, _OnLevelChangeFnc);
	//m_wndLevel.SetEvent(WE_SETFOCUS, _OnLevelSetfocusFnc);
	//m_wndLevel.SetEvent(WE_KILLFOCUS, _OnLevelKillfocusFnc);
	m_wndLevel.SetEvent(WE_CHECKVALUE, _OnLevelCheckValueFnc);

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOnlyThua.GetDlgCtrlID(), m_nOnlyThua);
	DDX_Text(pDX, m_wndLevel.GetDlgCtrlID(), m_szLevel);

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nAll=0;
	m_nOnlyThua=0;
	m_szLevel.Empty();

}
int CrptReportlistspatientcostsexceedtheadvanceDialog::SetMode(int nMode){
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
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateChange(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateSetfocus(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateKillfocus(){
	
} */
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateChange(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateSetfocus(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateKillfocus(){
	
} */
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptSelendok(){
	 
}
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptSetfocus(){
	
}*/
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptKillfocus(){
	
}*/
long CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnListDblClick(){
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptReportlistspatientcostsexceedtheadvanceDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnAllSelect(){
	
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnOnlyThuaSelect(){
	
}
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnLevelChange(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnLevelSetfocus(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnLevelKillfocus(){
	
} */
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnLevelCheckValue(){
	return 0;
} 
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnAddrptReportlistspatientcostsexceedtheadvanceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnEditrptReportlistspatientcostsexceedtheadvanceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeleterptReportlistspatientcostsexceedtheadvanceDialog(){
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
 		OnCancelrptReportlistspatientcostsexceedtheadvanceDialog(); 
 	}
	return 0;
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnSaverptReportlistspatientcostsexceedtheadvanceDialog(){
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
 		//OnrptReportlistspatientcostsexceedtheadvanceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnCancelrptReportlistspatientcostsexceedtheadvanceDialog(){
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
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnrptReportlistspatientcostsexceedtheadvanceDialogListLoadData(){
	return 0;
}
