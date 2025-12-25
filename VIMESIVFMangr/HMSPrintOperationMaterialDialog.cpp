#include "HMSPrintOperationMaterialDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrintOperationMaterialDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrintOperationMaterialDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPrintOperationMaterialDialog *pVw = (CHMSPrintOperationMaterialDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrintOperationMaterialDialog *pVw = (CHMSPrintOperationMaterialDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAllDeptSelectFnc(CWnd *pWnd){
	  ((CHMSPrintOperationMaterialDialog*)pWnd)->OnAllDeptSelect();
}
static void _OnCurrentDeptSelectFnc(CWnd *pWnd){
	  ((CHMSPrintOperationMaterialDialog*)pWnd)->OnCurrentDeptSelect();
}
static int _OnAddHMSPrintOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnAddHMSPrintOperationMaterialDialog();
} 
static int _OnEditHMSPrintOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnEditHMSPrintOperationMaterialDialog();
} 
static int _OnDeleteHMSPrintOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnDeleteHMSPrintOperationMaterialDialog();
} 
static int _OnSaveHMSPrintOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnSaveHMSPrintOperationMaterialDialog();
} 
static int _OnCancelHMSPrintOperationMaterialDialogFnc(CWnd *pWnd){
	 return ((CHMSPrintOperationMaterialDialog*)pWnd)->OnCancelHMSPrintOperationMaterialDialog();
} 
CHMSPrintOperationMaterialDialog::CHMSPrintOperationMaterialDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 415;
	SetDefaultValues();
}
CHMSPrintOperationMaterialDialog::~CHMSPrintOperationMaterialDialog(){
}
void CHMSPrintOperationMaterialDialog::OnCreateComponents(){
	m_wndListOperation.Create(this, _T("List Operation"), 5, 5, 600, 370);
	m_wndList.Create(this,10, 30, 597, 365); 
	m_wndPrint.Create(this, _T("&Print"), 431, 375, 511, 400);
	m_wndClose.Create(this, _T("&Close"), 516, 375, 596, 400);
	m_wndAllDept.Create(this, _T("&All Dept"), 8, 375, 131, 400);
	m_wndCurrentDept.Create(this, _T("&Current Dept"), 136, 375, 259, 400);

}
void CHMSPrintOperationMaterialDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Note"), CFMT_TEXT, 180);
	m_hms_ipharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
	m_hms_ipharmaorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_receptidx"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_approvedate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_issuer"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderstatus"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_payment"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_advice"), dfText, 128); 
	m_hms_ipharmaorderlnTbl.SetTableName(_T("hms_ipharmaorderln"));
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_orderno"), dfLong); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_orderlineid"), dfLong); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_product_id"), dfText, 15); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_stockline"), dfLong); 
	m_hms_ipharmaorderlnTbl.AddField(_T("product_name"), dfText, 35); 
	m_hms_ipharmaorderlnTbl.AddField(_T("product_uomname"), dfText, 15); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_issueqty"), dfLong); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpol_return"), dfText, 1); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpo_usage"), dfText, 128); 
	m_hms_ipharmaorderlnTbl.AddField(_T("hpo_dose"), dfText, 35); 

}
void CHMSPrintOperationMaterialDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAllDept.SetEvent(WE_CLICK, _OnAllDeptSelectFnc);
	m_wndCurrentDept.SetEvent(WE_CLICK, _OnCurrentDeptSelectFnc);

}
void CHMSPrintOperationMaterialDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAllDept.GetDlgCtrlID(), m_nAllDept);
	DDX_Radio(pDX, m_wndCurrentDept.GetDlgCtrlID(), m_nCurrentDept);

}
void CHMSPrintOperationMaterialDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrintOperationMaterialDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());

}
void CHMSPrintOperationMaterialDialog::SetDefaultValues(){

	m_nAllDept=0;
	m_nCurrentDept=0;

}
int CHMSPrintOperationMaterialDialog::SetMode(int nMode){
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
void CHMSPrintOperationMaterialDialog::OnListDblClick(){
	
} 
void CHMSPrintOperationMaterialDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrintOperationMaterialDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrintOperationMaterialDialog::OnListLoadData(){
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
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Name/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrintOperationMaterialDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrintOperationMaterialDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrintOperationMaterialDialog::OnAllDeptSelect(){
	
}
void CHMSPrintOperationMaterialDialog::OnCurrentDeptSelect(){
	
}
int CHMSPrintOperationMaterialDialog::OnAddHMSPrintOperationMaterialDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPrintOperationMaterialDialog::OnEditHMSPrintOperationMaterialDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrintOperationMaterialDialog::OnDeleteHMSPrintOperationMaterialDialog(){
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
 		OnCancelHMSPrintOperationMaterialDialog(); 
 	}
	return 0;
}
int CHMSPrintOperationMaterialDialog::OnSaveHMSPrintOperationMaterialDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_ipharmaorderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_ipharmaorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPrintOperationMaterialDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrintOperationMaterialDialog::OnCancelHMSPrintOperationMaterialDialog(){
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
int CHMSPrintOperationMaterialDialog::OnHMSPrintOperationMaterialDialogListLoadData(){
	return 0;
}
