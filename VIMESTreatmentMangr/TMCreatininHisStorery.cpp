#include "TMCreatininHisStorery.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMCreatininHisStorery*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMCreatininHisStorery*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMCreatininHisStorery*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd)
{
	 return ((CTMCreatininHisStorery*)pWnd)->OnListDeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMCreatininHisStorery *pVw = (CTMCreatininHisStorery *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddTMCreatininHisStoreryFnc(CWnd *pWnd){
	 return ((CTMCreatininHisStorery*)pWnd)->OnAddTMCreatininHisStorery();
} 
static int _OnEditTMCreatininHisStoreryFnc(CWnd *pWnd){
	 return ((CTMCreatininHisStorery*)pWnd)->OnEditTMCreatininHisStorery();
} 
static int _OnDeleteTMCreatininHisStoreryFnc(CWnd *pWnd){
	 return ((CTMCreatininHisStorery*)pWnd)->OnDeleteTMCreatininHisStorery();
} 
static int _OnSaveTMCreatininHisStoreryFnc(CWnd *pWnd){
	 return ((CTMCreatininHisStorery*)pWnd)->OnSaveTMCreatininHisStorery();
} 
static int _OnCancelTMCreatininHisStoreryFnc(CWnd *pWnd){
	 return ((CTMCreatininHisStorery*)pWnd)->OnCancelTMCreatininHisStorery();
} 
CTMCreatininHisStorery::CTMCreatininHisStorery(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMCreatininHisStorery::~CTMCreatininHisStorery(){
}
void CTMCreatininHisStorery::OnCreateComponents(){
	m_wndgrpdothanhthai.Create(this, _T("Theo dõi độ thanh thải Creatinin"), 5, 5, 580, 330);
	m_wndList.Create(this,10, 30, 575, 325); 
	m_wndClose.Create(this, _T("Close"), 490, 335, 570, 360);

}
void CTMCreatininHisStorery::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("IDX"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Date"), CFMT_DATETIME, 150);
	m_wndList.InsertColumn(2, _T("Creatinin"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Age"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Weight"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("CrCL"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(6, _T("MDRD 4"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(7, _T("eGFR"), CFMT_TEXT, 70);

}
void CTMCreatininHisStorery::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_VIEW);
	OnListLoadData();

}
void CTMCreatininHisStorery::OnDoDataExchange(CDataExchange* pDX){

}
void CTMCreatininHisStorery::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CTMCreatininHisStorery::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMCreatininHisStorery::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMCreatininHisStorery::SetDefaultValues(){


}
int CTMCreatininHisStorery::SetMode(int nMode){
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
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CTMCreatininHisStorery::OnListDblClick(){
	
} 
void CTMCreatininHisStorery::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMCreatininHisStorery::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMCreatininHisStorery::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" select hcl_idx as idx, hpc_performdate as performdate,hcl_result, ") \
				_T(" hcl_cannang, hcl_tuoi, hcl_crcl, hcl_rfg,hcl_schwartz_gfr  from hms_creatinin_list") \
			_T(" left join hms_testorder on (hpc_docno = hcl_docno and hpc_orderid= hcl_orderid)  ") \
			_T(" where hcl_docno = %ld order by hpc_performdate ") ,pMF->m_nDocumentNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("IDX")), 
			rs.GetValue(_T("performdate")), 
			rs.GetValue(_T("hcl_result")), 
			rs.GetValue(_T("hcl_tuoi")), 
			rs.GetValue(_T("hcl_cannang")), 
			rs.GetValue(_T("hcl_crcl")), 
			rs.GetValue(_T("hcl_rfg")),
			rs.GetValue(_T("hcl_schwartz_gfr")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CTMCreatininHisStorery::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CTMCreatininHisStorery::OnAddTMCreatininHisStorery(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMCreatininHisStorery::OnEditTMCreatininHisStorery(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMCreatininHisStorery::OnDeleteTMCreatininHisStorery(){
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
 		OnCancelTMCreatininHisStorery();
 	}
	return 0;
}
int CTMCreatininHisStorery::OnSaveTMCreatininHisStorery(){
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
 		//OnTMCreatininHisStoreryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMCreatininHisStorery::OnCancelTMCreatininHisStorery(){
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
int CTMCreatininHisStorery::OnTMCreatininHisStoreryListLoadData(){
	return 0;
}
