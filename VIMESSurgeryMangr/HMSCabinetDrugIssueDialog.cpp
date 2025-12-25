#include "HMSCabinetDrugIssueDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCabinetDrugIssueDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCabinetDrugIssueDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnListDeleteItem();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSCabinetDrugIssueDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCabinetDrugIssueDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSCabinetDrugIssueDialog *pVw = (CHMSCabinetDrugIssueDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSCabinetDrugIssueDialog *pVw = (CHMSCabinetDrugIssueDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCabinetDrugIssueDialog *pVw = (CHMSCabinetDrugIssueDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCabinetDrugIssueDialogFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnAddHMSCabinetDrugIssueDialog();
} 
static int _OnEditHMSCabinetDrugIssueDialogFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnEditHMSCabinetDrugIssueDialog();
} 
static int _OnDeleteHMSCabinetDrugIssueDialogFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnDeleteHMSCabinetDrugIssueDialog();
} 
static int _OnSaveHMSCabinetDrugIssueDialogFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnSaveHMSCabinetDrugIssueDialog();
} 
static int _OnCancelHMSCabinetDrugIssueDialogFnc(CWnd *pWnd){
	 return ((CHMSCabinetDrugIssueDialog*)pWnd)->OnCancelHMSCabinetDrugIssueDialog();
} 
CHMSCabinetDrugIssueDialog::CHMSCabinetDrugIssueDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSCabinetDrugIssueDialog::~CHMSCabinetDrugIssueDialog(){
}
void CHMSCabinetDrugIssueDialog::OnCreateComponents(){
	m_wndDrugIssueInformation.Create(this, _T("Drug Issue Information"), 5, 5, 750, 450);
	m_wndList.Create(this,10, 30, 375, 445); 
	m_wndPatientList.Create(this,380, 30, 745, 445); 
	m_wndAdd.Create(this, _T("&Add"), 515, 455, 590, 480);
	m_wndDelete.Create(this, _T("&Delete"), 595, 455, 670, 480);
	m_wndClose.Create(this, _T("&Close"), 675, 455, 750, 480);
}
void CHMSCabinetDrugIssueDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 135);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 45);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 65);
	m_wndList.InsertColumn(4, _T("itemid"), CFMT_TEXT, 0);

	m_wndPatientList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 190);
	m_wndPatientList.InsertColumn(2, _T("Quantity"), CFMT_NUMBER, 65);

}
void CHMSCabinetDrugIssueDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Supplement Drug List"));
	m_wndList.AddEvent(1, _T("Cancel"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	//m_wndPatientList.AddEvent(1, _T("Cancel"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
	OnListLoadData();
}
void CHMSCabinetDrugIssueDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSCabinetDrugIssueDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCabinetDrugIssueDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCabinetDrugIssueDialog::SetDefaultValues(){


}
int CHMSCabinetDrugIssueDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 2, -1); 
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
void CHMSCabinetDrugIssueDialog::OnListDblClick(){
	
} 
void CHMSCabinetDrugIssueDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	OnPatientListLoadData();	
} 
int CHMSCabinetDrugIssueDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	CString szIssueDate, szItemID, szSQL;
	long nOrderID;
	
	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("07.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(pMF->GetModuleID() == _T("EM") && !pMF->CheckPermission(_T("10.06"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return 0;
	}

	if(ShowMessageBox(_T("Do you want to cancel item?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 

	szIssueDate = m_wndList.GetItemText(nSel, 0);
	szItemID = m_wndList.GetItemText(nSel, 4);

	szSQL.Format(_T(" SELECT 	hpol_orderid as orderid ") \
				_T(" FROM hms_pharmacyorder ") \
				_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
				_T(" WHERE 	hpo_stockid=%d and hpol_itemid='%s'  and hpo_deptid='%s' ") \
				_T(" 	and date(hpo_issuedate) =date('%s') ") \
				_T(" 	and hpol_status='O' "), m_nStockID, szItemID, pMF->m_szDept, szIssueDate);

	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("orderid"), nOrderID);
		szSQL.Format(_T("UPDATE hms_pharmacyorder_line SET hpol_status='C' WHERE hpol_orderid=%ld and hpol_itemid='%s' "), nOrderID, szItemID);
		pMF->ExecSQL(szSQL);
		rs.MoveNext();
	}
	m_wndList.DeleteItem(nSel);
	return 0;
} 
long CHMSCabinetDrugIssueDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	m_wndList.BeginLoad(); 
	
	szSQL.Format(_T(" SELECT date(hsm_date) as issuedate, ") \
_T(" 	hsm_itemid as itemid,") \
_T(" 	hsm_name as name,") \
_T(" 	hsm_unit as unit,") \
_T(" 	sum(hsm_issueqty) as issueqty") \
_T(" FROM hms_surgery_material ") \
_T(" WHERE 	hsm_stockid=%d and hsm_status='I' ") \
_T(" 	and date(hsm_date) >= sysdate-7 ") \
_T(" GROUP BY itemid, name, unit, issuedate") \
_T(" ORDER BY issuedate, name, unit"), m_nStockID);
//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	int nItem =0;
	while(!rs.IsEOF()){ 
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("IssueDate")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("IssueQty")), 
			rs.GetValue(_T("itemid")), 
			NULL);
		m_wndList.SetCheck(nItem, true);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSCabinetDrugIssueDialog::OnPatientListDblClick(){
	
} 
void CHMSCabinetDrugIssueDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCabinetDrugIssueDialog::OnPatientListDeleteItem(){
	return 0;	
} 
long CHMSCabinetDrugIssueDialog::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szIssueDate;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	CString szItemID;

	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	szIssueDate = m_wndList.GetItemText(nSel, 0);
	szItemID = m_wndList.GetItemText(nSel, 4);

	szSQL.Format(_T(" SELECT hps_docno as docno,") \
_T(" 	hps_pname as pname,") \
_T("  	sum(hsm_issueqty) as issueqty") \
_T(" FROM hms_patient_surgery ") \
_T(" LEFT JOIN hms_surgery_detail ON(hps_docno=hsd_docno) ") \
_T(" LEFT JOIN hms_surgery_material ON(hsd_idx=hsm_orderid)") \
_T(" WHERE hsm_stockid=%d ") \
_T("  	and date(hsm_date) = date('%s')") \
_T(" 	and hsm_itemid='%s' ") \
_T(" GROUP BY pname, docno ") \
_T(" ORDER BY pname"), m_nStockID, szIssueDate, szItemID);

	_fmsg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("issueqty")), 
			NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;

}
void CHMSCabinetDrugIssueDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szIssueDate,tmpStr, szItemID;
	CRecord rs(&pMF->m_db);
	long nsItemID = -1, nQty, ret, nOrderID;
	szSQL.Format(_T("SELECT pmst_status FROM pms_stocktransfer WHERE pmst_id='%s' "), m_szInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("pmst_status"), tmpStr);
	if(tmpStr != _T("O")){
		ShowMessageBox(_T("Can not manipulate with current status. "), MB_OK);
		return;
	}
	pMF->BeginTransaction();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			szIssueDate = m_wndList.GetItemText(i, 0);
			szItemID = m_wndList.GetItemText(i, 4);
			nQty = ToLong(m_wndList.GetItemText(i, 3));
			szSQL.Format(_T("select pms_stocktransfer_line_additem('%s', %d, '%s', %d) "), m_szInvoiceNo, m_nSupplementStockID, szItemID, nQty);

			rs.ExecSQL(szSQL);
			ret = rs.GetIntValue();

			if(ret > 0){
				szSQL.Format(_T(" SELECT 	hsm_idx as orderid ") \
				_T(" FROM hms_surgery_material ") \
				_T(" WHERE 	hsm_stockid=%d and hsm_itemid='%s' ") \
				_T(" 	and date(hsm_date) =date('%s') ") \
				_T(" 	and hsm_status='I' "), m_nStockID, szItemID, szIssueDate);

				rs.ExecSQL(szSQL);
				while(!rs.IsEOF()){
					rs.GetValue(_T("orderid"), nOrderID);
					szSQL.Format(_T("UPDATE hms_surgery_material SET hsm_status='S' WHERE hsm_docno=%ld and hsm_itemid='%s' "), nOrderID, szItemID);
					int ret = pMF->ExecSQL(szSQL);
					if(ret <= 0)
					{
						pMF->Rollback();
						return;
					}
					rs.MoveNext();
				}
			}
			else
			{
			//	pMF->Rollback();
			//	return;

			}
		}
	}
	pMF->Commit();
	if(m_wndList.GetItemCount() == 0)
		CGuiDialog::OnOK();
	else
	{
		OnListLoadData();
		CString szMsg;
#ifdef UNICODE
		szMsg.Format(_T("\x43ó %ld m\x1EE5\x63 thu\x1ED1\x63 trên \x64\x61nh sá\x63h không yêu \x63\x1EA7u \x62\x1ED5 sung \x111\x1B0\x1EE3\x63.\r\n\x43á\x63 m\x1EE5\x63 thu\x1ED1\x63 này không \x63ó trong kho ho\x1EB7\x63 không \x111\x1EE7 s\x1ED1 l\x1B0\x1EE3ng yêu \x63\x1EA7u."), m_wndList.GetItemCount());
		ShowMessageBox(szMsg, 0);
#endif
	}
} 
void CHMSCabinetDrugIssueDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCabinetDrugIssueDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCabinetDrugIssueDialog::OnAddHMSCabinetDrugIssueDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 

 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCabinetDrugIssueDialog::OnEditHMSCabinetDrugIssueDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCabinetDrugIssueDialog::OnDeleteHMSCabinetDrugIssueDialog(){
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
 		OnCancelHMSCabinetDrugIssueDialog(); 
 	}
	return 0;
}
int CHMSCabinetDrugIssueDialog::OnSaveHMSCabinetDrugIssueDialog(){
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
 		//OnHMSCabinetDrugIssueDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSCabinetDrugIssueDialog::OnCancelHMSCabinetDrugIssueDialog(){
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
int CHMSCabinetDrugIssueDialog::OnHMSCabinetDrugIssueDialogListLoadData(){
	return 0;
}
