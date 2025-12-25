#include "PMSReturnDrugListDialog.h"
#include "MainFrm.h"
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnDrugListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CPMSReturnDrugListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSReturnDrugListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CPMSReturnDrugListDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CPMSReturnDrugListDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSReturnDrugListDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMSReturnDrugListDialog *pVw = (CPMSReturnDrugListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSReturnDrugListDialog *pVw = (CPMSReturnDrugListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnAddPMSReturnDrugListDialog();
} 
static int _OnEditPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnEditPMSReturnDrugListDialog();
} 
static int _OnDeletePMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnDeletePMSReturnDrugListDialog();
} 
static int _OnSavePMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnSavePMSReturnDrugListDialog();
} 
static int _OnCancelPMSReturnDrugListDialogFnc(CWnd *pWnd){
	 return ((CPMSReturnDrugListDialog*)pWnd)->OnCancelPMSReturnDrugListDialog();
} 
CPMSReturnDrugListDialog::CPMSReturnDrugListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CPMSReturnDrugListDialog::~CPMSReturnDrugListDialog(){
}
void CPMSReturnDrugListDialog::OnCreateComponents(){
	m_wndPatientListGroup.Create(this, _T("Patient List"), 5, 5, 320, 450);
	m_wndDrugListGroup.Create(this, _T("Drug List"), 325, 5, 640, 450);
	m_wndPatientList.Create(this,10, 30, 315, 445); 
	m_wndDrugList.Create(this,330, 30, 635, 445); 
	m_wndApply.Create(this, _T("&Apply"), 475, 455, 555, 480);
	m_wndClose.Create(this, _T("&Close"), 560, 455, 640, 480);

}
void CPMSReturnDrugListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 200);

	m_wndDrugList.SetCheckBox(true);
	m_wndDrugList.InsertColumn(0, _T("Drug Name"), CFMT_TEXT, 140);
	m_wndDrugList.InsertColumn(1, _T("Unit"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(2, _T("Order Qty"), CFMT_NUMBER, 50);
	m_wndDrugList.InsertColumn(3, _T("Return Qty"), CFMT_NUMBER, 50);
	m_wndDrugList.InsertColumn(4, _T("orderid"), CFMT_NUMBER, 0);
	m_wndDrugList.InsertColumn(5, _T("sitemid"), CFMT_NUMBER, 0);
	m_wndDrugList.InsertColumn(6, _T("sheetidx"), CFMT_TEXT, 0);

	m_pms_returnorder_lineTbl.SetTableName(_T("pms_return_order_line"));
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_id"), dfText, 15); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_orderno"), dfText, 15); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_sitemid"), dfLong); 
	m_pms_returnorder_lineTbl.AddField(_T("pmrol_qty"), dfLong); 


}
void CPMSReturnDrugListDialog::OnSetWindowEvents(){
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnPatientListLoadData();
}
void CPMSReturnDrugListDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CPMSReturnDrugListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSReturnDrugListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMSReturnDrugListDialog::SetDefaultValues(){


}
int CPMSReturnDrugListDialog::SetMode(int nMode){
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
void CPMSReturnDrugListDialog::OnPatientListDblClick(){
	
} 
void CPMSReturnDrugListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nNewItem, 0));
	OnDrugListLoadData();
	
} 
int CPMSReturnDrugListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSReturnDrugListDialog::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT 	distinct hd_docno as docno,") \
_T(" 	hp_surname||' '||hp_midname||' '||hp_firstname as pname") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
_T(" WHERE hpo_stockid=%d and hpo_deptid='%s' and hpol_issueqty < hpol_orderqty and hpol_return='Y' and date(hpo_issuedate) <= date('%s') "), 
m_nStockID, pMF->m_szDept, m_szReturnDate);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("PName")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;

}
void CPMSReturnDrugListDialog::OnDrugListDblClick(){
	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return;
	m_wndDrugList.SetCheck(nSel, !m_wndDrugList.GetCheck(nSel));	
} 
void CPMSReturnDrugListDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMSReturnDrugListDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSReturnDrugListDialog::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	szSQL.Format(_T(" SELECT 	hpo_sheetidx as sheetidx, hpo_orderid as orderid, hpol_sitemid as sitemid, hpol_name as name, ") \
_T(" 	hpol_unit as unit,") \
_T(" 	sum(hpol_orderqty) as orderqty,") \
_T(" 	sum(hpol_orderqty-hpol_issueqty) as retqty ") \
_T(" FROM hms_pharmacyorder") \
_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
_T(" WHERE hpo_docno=%ld and hpo_stockid=%d and hpo_deptid='%s' and hpol_issueqty < hpol_orderqty and hpol_return='Y' AND date(hpo_issuedate) <= date('%s') ") \
_T(" GROUP BY sheetidx, orderid, sitemid, name, unit ORDER BY name "), 
		 m_nDocumentNo, m_nStockID, pMF->m_szDept, m_szReturnDate);
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nItem = m_wndDrugList.AddItems(
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("OrderQty")), 
			rs.GetValue(_T("retqty")), 
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("sitemid")), 
			rs.GetValue(_T("sheetidx")), 
			NULL);
		m_wndDrugList.SetCheck(nItem, true);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;

}
void CPMSReturnDrugListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString sheetIdx, sItemID, retQty;
	CString szSQL;
	long nOrderID;
	for (int i =0; i < m_wndDrugList.GetItemCount(); i++)
	{
		if(m_wndDrugList.GetCheck(i))
		{
			retQty = m_wndDrugList.GetItemText(i, 3);
			nOrderID = ToLong(m_wndDrugList.GetItemText(i, 4));	
			sItemID = m_wndDrugList.GetItemText(i, 5);
			sheetIdx = m_wndDrugList.GetItemText(i, 6);	
			m_pms_returnorder_lineTbl.SetValue(_T("pmrol_userid"), pMF->GetCurrentUser());
			m_pms_returnorder_lineTbl.SetValue(_T("pmrol_id"), m_szSheetID);
			m_pms_returnorder_lineTbl.SetValue(_T("pmrol_orderno"), sheetIdx);
			m_pms_returnorder_lineTbl.SetValue(_T("pmrol_sitemid"), sItemID);
			m_pms_returnorder_lineTbl.SetValue(_T("pmrol_qty"), retQty);
			szSQL.Format(_T("SELECT pms_return_order_line_add(%s)"), m_pms_returnorder_lineTbl.FormatSQL());
			pMF->ExecSQL(szSQL);
			szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hpol_return='A' WHERE hpol_orderid=%ld and hpol_sitemid=%ld "), nOrderID, ToLong(sItemID));
			pMF->ExecSQL(szSQL);

		}
	}
	CGuiDialog::OnOK();
} 
void CPMSReturnDrugListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
	
} 
int CPMSReturnDrugListDialog::OnAddPMSReturnDrugListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMSReturnDrugListDialog::OnEditPMSReturnDrugListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSReturnDrugListDialog::OnDeletePMSReturnDrugListDialog(){
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
 		OnCancelPMSReturnDrugListDialog(); 
 	}
	return 0;
}
int CPMSReturnDrugListDialog::OnSavePMSReturnDrugListDialog(){
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
 		//OnPMSReturnDrugListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMSReturnDrugListDialog::OnCancelPMSReturnDrugListDialog(){
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
int CPMSReturnDrugListDialog::OnPMSReturnDrugListDialogListLoadData(){
	return 0;
}
