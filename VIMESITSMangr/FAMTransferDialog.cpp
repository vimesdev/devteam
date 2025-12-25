#include "FAMTransferDialog.h"
#include "MainFrm.h"
/*static void _OnTransferIDChangeFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnTransferIDChange();
} */
/*static void _OnTransferIDSetfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnTransferIDSetfocus();} */ 
/*static void _OnTransferIDKillfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnTransferIDKillfocus();
} */
static int _OnTransferIDCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferDialog *)pWnd)->OnTransferIDCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnFromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferDialog* )pWnd)->OnFromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromDeptSelendokFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDeptSelendok();
}
/*static void _OnFromDeptSetfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDeptKillfocus();
}*/
/*static void _OnFromDeptKillfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDeptKillfocus();
}*/
static long _OnFromDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferDialog *)pWnd)->OnFromDeptLoadData();
}
/*static void _OnFromDeptAddNewFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnFromDeptAddNew();
}*/

static void _OnToDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMTransferDialog* )pWnd)->OnToDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToDeptSelendokFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDeptSelendok();
}
/*static void _OnToDeptSetfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDeptKillfocus();
}*/
/*static void _OnToDeptKillfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDeptKillfocus();
}*/
static long _OnToDeptLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransferDialog *)pWnd)->OnToDeptLoadData();
}
/*static void _OnToDeptAddNewFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnToDeptAddNew();
}*/
/*static void _OnQtyLevelChangeFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnQtyLevelChange();
} */
/*static void _OnQtyLevelSetfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnQtyLevelSetfocus();} */ 
/*static void _OnQtyLevelKillfocusFnc(CWnd *pWnd){
	((CFAMTransferDialog *)pWnd)->OnQtyLevelKillfocus();
} */
static int _OnQtyLevelCheckValueFnc(CWnd *pWnd){
	return ((CFAMTransferDialog *)pWnd)->OnQtyLevelCheckValue();
} 
static void _OnbtnSaveSelectFnc(CWnd *pWnd){
	CFAMTransferDialog *pVw = (CFAMTransferDialog *)pWnd;
	pVw->OnbtnSaveSelect();
} 
static void _OnbtnCancelSelectFnc(CWnd *pWnd){
	CFAMTransferDialog *pVw = (CFAMTransferDialog *)pWnd;
	pVw->OnbtnCancelSelect();
} 
static int _OnAddFAMTransferDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferDialog*)pWnd)->OnAddFAMTransferDialog();
} 
static int _OnEditFAMTransferDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferDialog*)pWnd)->OnEditFAMTransferDialog();
} 
static int _OnDeleteFAMTransferDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferDialog*)pWnd)->OnDeleteFAMTransferDialog();
} 
static int _OnSaveFAMTransferDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferDialog*)pWnd)->OnSaveFAMTransferDialog();
} 
static int _OnCancelFAMTransferDialogFnc(CWnd *pWnd){
	 return ((CFAMTransferDialog*)pWnd)->OnCancelFAMTransferDialog();
} 
CFAMTransferDialog::CFAMTransferDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMTransferDialog::~CFAMTransferDialog(){
}
void CFAMTransferDialog::OnCreateComponents(){
	m_wndTransferIDLabel.Create(this, _T("TransferID"), 5, 10, 85, 35);
	m_wndTransferID.Create(this,90, 10, 395, 35); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 40, 85, 65);
	m_wndFromDate.Create(this,90, 40, 180, 65); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 40, 300, 65);
	m_wndToDate.Create(this,305, 40, 395, 65); 
	m_wndFromDeptLabel.Create(this, _T("From Dept"), 5, 69, 85, 94);
	m_wndFromDept.Create(this,90, 70, 395, 95); 
	m_wndToDeptLabel.Create(this, _T("To Dept"), 5, 100, 85, 125);
	//m_wndEmployee.Create(this,90, 100, 395, 125); 
	m_wndToDept.Create(this,90, 100, 395, 125); 
	m_wndQtyLevelLabel.Create(this, _T("Qty Level"), 5, 130, 85, 155);
	//m_wndDeliverBy.Create(this,90, 130, 395, 155); 
	m_wndQtyLevel.Create(this,90, 130, 395, 155); 
	m_wndbtnSave.Create(this, _T("Save"), 230, 160, 310, 185);
	m_wndbtnCancel.Create(this, _T("Cancel"), 315, 160, 395, 185);

}
void CFAMTransferDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTransferID.SetLimitText(1024);
	m_wndTransferID.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromDept.SetCheckValue(true);
	m_wndFromDept.LimitText(1024);
	m_wndToDept.SetCheckValue(true);
	m_wndToDept.LimitText(1024);
	m_wndQtyLevel.SetLimitText(1024);
	m_wndQtyLevel.SetCheckValue(true);

	m_wndFromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndToDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndToDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_tbl_famtransfer.SetTableName(_T("fam_transfer"));
	m_tbl_famtransfer.AddField(_T("ft_createdby"), dfText, 15); 
	m_tbl_famtransfer.AddField(_T("ft_createddate"), dfDateTime); 
	m_tbl_famtransfer.AddField(_T("ft_updatedby"), dfText, 15); 
	m_tbl_famtransfer.AddField(_T("ft_updateddate"), dfDateTime); 
	m_tbl_famtransfer.AddField(_T("ft_transferid"), dfText, 30); 
	m_tbl_famtransfer.AddField(_T("ft_assetno"), dfText, 30); 
	m_tbl_famtransfer.AddField(_T("ft_idx"), dfLong); 
	m_tbl_famtransfer.AddField(_T("ft_date"), dfDateTime); 
	m_tbl_famtransfer.AddField(_T("ft_qtylevel"), dfText, 2);
	m_tbl_famtransfer.AddField(_T("ft_olddept"), dfText, 10);
	m_tbl_famtransfer.AddField(_T("ft_newdept"), dfText, 10); 
	m_tbl_famtransfer.AddField(_T("ft_deliveby"), dfText, 15); 
	m_tbl_famtransfer.AddField(_T("ft_receiveby"), dfText, 15); 
	m_tbl_famtransfer.AddField(_T("ft_org_id"), dfText, 5);

}
void CFAMTransferDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndTransferID.SetEvent(WE_CHANGE, _OnTransferIDChangeFnc);
	//m_wndTransferID.SetEvent(WE_SETFOCUS, _OnTransferIDSetfocusFnc);
	//m_wndTransferID.SetEvent(WE_KILLFOCUS, _OnTransferIDKillfocusFnc);
	m_wndTransferID.SetEvent(WE_CHECKVALUE, _OnTransferIDCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndFromDept.SetEvent(WE_SELENDOK, _OnFromDeptSelendokFnc);
	//m_wndFromDept.SetEvent(WE_SETFOCUS, _OnFromDeptSetfocusFnc);
	//m_wndFromDept.SetEvent(WE_KILLFOCUS, _OnFromDeptKillfocusFnc);
	m_wndFromDept.SetEvent(WE_SELCHANGE, _OnFromDeptSelectChangeFnc);
	m_wndFromDept.SetEvent(WE_LOADDATA, _OnFromDeptLoadDataFnc);
	//m_wndFromDept.SetEvent(WE_ADDNEW, _OnFromDeptAddNewFnc);	
	m_wndToDept.SetEvent(WE_SELENDOK, _OnToDeptSelendokFnc);
	//m_wndToDept.SetEvent(WE_SETFOCUS, _OnToDeptSetfocusFnc);
	//m_wndToDept.SetEvent(WE_KILLFOCUS, _OnToDeptKillfocusFnc);
	m_wndToDept.SetEvent(WE_SELCHANGE, _OnToDeptSelectChangeFnc);
	m_wndToDept.SetEvent(WE_LOADDATA, _OnToDeptLoadDataFnc);
	//m_wndToDept.SetEvent(WE_ADDNEW, _OnToDeptAddNewFnc);
	//m_wndQtyLevel.SetEvent(WE_CHANGE, _OnQtyLevelChangeFnc);
	//m_wndQtyLevel.SetEvent(WE_SETFOCUS, _OnQtyLevelSetfocusFnc);
	//m_wndQtyLevel.SetEvent(WE_KILLFOCUS, _OnQtyLevelKillfocusFnc);
	m_wndQtyLevel.SetEvent(WE_CHECKVALUE, _OnQtyLevelCheckValueFnc);
	m_wndbtnSave.SetEvent(WE_CLICK, _OnbtnSaveSelectFnc);
	m_wndbtnCancel.SetEvent(WE_CLICK, _OnbtnCancelSelectFnc);

	if(GetMode() == VM_EDIT)
	{
		GetDataToScreen();
		SetMode(VM_EDIT);
	}
	else
	{
		SetMode(VM_ADD);
		SetDefaultValues();
	}

}
void CFAMTransferDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTransferID.GetDlgCtrlID(), m_szTransferID);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromDept.GetDlgCtrlID(), m_szFromDeptKey);
	DDX_TextEx(pDX, m_wndToDept.GetDlgCtrlID(), m_szToDeptKey);
	DDX_Text(pDX, m_wndQtyLevel.GetDlgCtrlID(), m_szQtyLevel);

}
void CFAMTransferDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_transfer WHERE ft_assetno= '%s' AND ft_org_id = '%s'"), pMF->m_szAssetNo, pMF->GetModuleID());
	rs.ExecSQL(szSQL);	
	if (!rs.IsEOF())
	{	
		rs.GetValue(_T("ft_transferid"), m_szTransferID);
		rs.GetValue(_T("ft_date"), m_szFromDate);
		rs.GetValue(_T("ft_olddept"), m_szFromDeptKey);
		rs.GetValue(_T("ft_newdept"), m_szToDeptKey);
		rs.GetValue(_T("ft_qtylevel"), m_szQtyLevel);
		
		UpdateData(FALSE);

	}


}
void CFAMTransferDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(ft_idx), 0)+1 FROM fam_transfer WHERE ft_assetno='%s' AND ft_org_id = '%s'"), pMF->m_szAssetNo, pMF->GetModuleID());
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_famtransfer.SetValue(_T("ft_createdby"), pMF->GetCurrentUser());
	m_tbl_famtransfer.SetValue(_T("ft_createddate"), pMF->GetSysDateTime());
	m_tbl_famtransfer.SetValue(_T("ft_updatedby"), pMF->GetCurrentUser());
	m_tbl_famtransfer.SetValue(_T("ft_updateddate"), pMF->GetSysDateTime());
	m_tbl_famtransfer.SetValue(_T("ft_transferid"), m_szTransferID);
	m_tbl_famtransfer.SetValue(_T("ft_assetno"), pMF->m_szAssetNo);
	m_tbl_famtransfer.SetValue(_T("ft_idx"), m_nIndex);
	m_tbl_famtransfer.SetValue(_T("ft_date"), m_szFromDate);
	m_tbl_famtransfer.SetValue(_T("ft_olddept"), m_szFromDeptKey);
	m_tbl_famtransfer.SetValue(_T("ft_newdept"), m_szToDeptKey);
	m_tbl_famtransfer.SetValue(_T("ft_qtylevel"), m_szQtyLevel);
	m_tbl_famtransfer.SetValue(_T("ft_org_id"), pMF->GetModuleID());

}
void CFAMTransferDialog::SetDefaultValues(){

	m_szTransferID.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFromDeptKey.Empty();
	m_szToDeptKey.Empty();
	m_szQtyLevel.Empty();

}
int CFAMTransferDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
			m_wndTransferID.EnableWindow(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CFAMTransferDialog::OnTransferIDChange(){
	
} */
/*void CFAMTransferDialog::OnTransferIDSetfocus(){
	
} */
/*void CFAMTransferDialog::OnTransferIDKillfocus(){
	
} */
int CFAMTransferDialog::OnTransferIDCheckValue(){
	return 0;
} 
/*void CFAMTransferDialog::OnFromDateChange(){
	
} */
/*void CFAMTransferDialog::OnFromDateSetfocus(){
	
} */
/*void CFAMTransferDialog::OnFromDateKillfocus(){
	
} */
int CFAMTransferDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMTransferDialog::OnToDateChange(){
	
} */
/*void CFAMTransferDialog::OnToDateSetfocus(){
	
} */
/*void CFAMTransferDialog::OnToDateKillfocus(){
	
} */
int CFAMTransferDialog::OnToDateCheckValue(){
	return 0;
} 
void CFAMTransferDialog::OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMTransferDialog::OnFromDeptSelendok(){
	 
}
/*void CFAMTransferDialog::OnFromDeptSetfocus(){
	
}*/
/*void CFAMTransferDialog::OnFromDeptKillfocus(){
	
}*/
long CFAMTransferDialog::OnFromDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndFromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_id =  '%s' ORDER BY id "), pMF->m_szDepartment);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMTransferDialog::OnFromDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMTransferDialog::OnToDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		
} 
void CFAMTransferDialog::OnToDeptSelendok(){
	 
}
/*void CFAMTransferDialog::OnToDeptSetfocus(){
	
}*/
/*void CFAMTransferDialog::OnToDeptKillfocus(){
	
}*/
long CFAMTransferDialog::OnToDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToDept.IsSearchKey() && !m_szToDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szToDeptKey);
	}
	m_wndToDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMTransferDialog::OnToDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMTransferDialog::OnQtyLevelChange(){
	
} */
/*void CFAMTransferDialog::OnQtyLevelSetfocus(){
	
} */
/*void CFAMTransferDialog::OnQtyLevelKillfocus(){
	
} */
int CFAMTransferDialog::OnQtyLevelCheckValue(){
	return 0;
} 
void CFAMTransferDialog::OnbtnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMTransferDialog();
} 
void CFAMTransferDialog::OnbtnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMTransferDialog::OnAddFAMTransferDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMTransferDialog::OnEditFAMTransferDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMTransferDialog::OnDeleteFAMTransferDialog(){
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
 		OnCancelFAMTransferDialog();
 	}
	return 0;
}
int CFAMTransferDialog::OnSaveFAMTransferDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szDeptUpdate;

 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_famtransfer.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE ft_transferid = '%s' AND ft_idx = %d AND ft_org_id = '%s'"), m_szTransferID, m_nIndex, pMF->GetModuleID());
 		szSQL = m_tbl_famtransfer.GetUpdateSQL(_T("ft_createdby,ft_createddate, ft_transferid"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		CRecord rsu(&pMF->m_db);
		if(pMF->m_szDepartment != m_szToDeptKey)
		{
			szDeptUpdate.Format(_T("Update fam_asset SET fa_department = '%s' WHERE fa_assetno = '%s' "), m_szToDeptKey, pMF->m_szAssetNo);
			_fmsg(_T("%s"), szDeptUpdate);
			int nCount1 = rsu.ExecSQL(szDeptUpdate);
		}
		pMF->m_wndAsset.m_wndTransfer.OnTransferListLoadData();
		pMF->m_wndAsset.GetDataToScreen();
		OnCancel();
 		//SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMTransferDialog::OnCancelFAMTransferDialog(){
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
int CFAMTransferDialog::OnFAMTransferDialogListLoadData(){
	return 0;
}
