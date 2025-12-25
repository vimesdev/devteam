#include "PMSetDepartmentDeliveryDialog.h"
#include "MainFrame_E10.h"
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSetDepartmentDeliveryDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMSetDepartmentDeliveryDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMSetDepartmentDeliveryDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMSetDepartmentDeliveryDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMSetDepartmentDeliveryDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMSetDepartmentDeliveryDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMSetDepartmentDeliveryDialog *pVw = (CPMSetDepartmentDeliveryDialog *)pWnd;
	pVw->OnApplySelect();
} 
static int _OnAddPMSetDepartmentDeliveryDialogFnc(CWnd *pWnd){
	 return ((CPMSetDepartmentDeliveryDialog*)pWnd)->OnAddPMSetDepartmentDeliveryDialog();
} 
static int _OnEditPMSetDepartmentDeliveryDialogFnc(CWnd *pWnd){
	 return ((CPMSetDepartmentDeliveryDialog*)pWnd)->OnEditPMSetDepartmentDeliveryDialog();
} 
static int _OnDeletePMSetDepartmentDeliveryDialogFnc(CWnd *pWnd){
	 return ((CPMSetDepartmentDeliveryDialog*)pWnd)->OnDeletePMSetDepartmentDeliveryDialog();
} 
static int _OnSavePMSetDepartmentDeliveryDialogFnc(CWnd *pWnd){
	 return ((CPMSetDepartmentDeliveryDialog*)pWnd)->OnSavePMSetDepartmentDeliveryDialog();
} 
static int _OnCancelPMSetDepartmentDeliveryDialogFnc(CWnd *pWnd){
	 return ((CPMSetDepartmentDeliveryDialog*)pWnd)->OnCancelPMSetDepartmentDeliveryDialog();
} 
CPMSetDepartmentDeliveryDialog::CPMSetDepartmentDeliveryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSetDepartmentDeliveryDialog::~CPMSetDepartmentDeliveryDialog(){
}
void CPMSetDepartmentDeliveryDialog::OnCreateComponents(){
	m_wndDepartMentInfor.Create(this, _T("Department Delivery"), 5, 5, 370, 90);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 130, 55);
	m_wndDepartment.Create(this,135, 30, 365, 55); 
	m_wndApply.Create(this, _T("&Apply"), 285, 60, 365, 85);

}
void CPMSetDepartmentDeliveryDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPMSetDepartmentDeliveryDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	SetMode(VM_ADD);

}
void CPMSetDepartmentDeliveryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CPMSetDepartmentDeliveryDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Department")] =  m_szDepartmentKey;
	}
	else
	{
			
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	}

}
void CPMSetDepartmentDeliveryDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSetDepartmentDeliveryDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSetDepartmentDeliveryDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();

}
int CPMSetDepartmentDeliveryDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 4, -1);
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
void CPMSetDepartmentDeliveryDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSetDepartmentDeliveryDialog::OnDepartmentSelendok(){
	 
}
/*void CPMSetDepartmentDeliveryDialog::OnDepartmentSetfocus(){
	
}*/
/*void CPMSetDepartmentDeliveryDialog::OnDepartmentKillfocus(){
	
}*/
long CPMSetDepartmentDeliveryDialog::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id  as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSetDepartmentDeliveryDialog::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMSetDepartmentDeliveryDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL,szAcept;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	if(m_szDepartmentKey.IsEmpty())
	{
		 ShowMessageBox(_T("Yêu cầu chọn khoa "), MB_OK);
		return ;
	}

	// kiem tra xem phieu da dc app dung cho vao 1 phieu thì  không cho sửa nữa return luôn
	szSQL.Format(_T("select po_delivery_aceept from purchase_order  where po_purchase_order_id =%ld"), m_nPurcharseOrder);
	rs.ExecSQL(szSQL);
	szAcept = rs.GetStringValue();
	if(szAcept == _T("Y"))
	{
		 ShowMessageBox(_T("Phiếu đã đc khoa sử dụng vào phiếu lĩnh! Không thể thao tác nữa "), MB_OK);
		return ;
	}

	szSQL.Format(_T("update purchase_order  set po_delivery_deptid='%s',po_delivery_aceept='N'   where po_purchase_order_id =%ld"),m_szDepartmentKey, m_nPurcharseOrder);
	int nRet = pMF->ExecSQL(szSQL);

	if( nRet >0)
	{
		OnOK();
	}
	else
	{
		 ShowMessageBox(_T("Update lỗi"), MB_OK);
	}

} 
int CPMSetDepartmentDeliveryDialog::OnAddPMSetDepartmentDeliveryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSetDepartmentDeliveryDialog::OnEditPMSetDepartmentDeliveryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSetDepartmentDeliveryDialog::OnDeletePMSetDepartmentDeliveryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMSetDepartmentDeliveryDialog();
 	}
	return 0;
}
int CPMSetDepartmentDeliveryDialog::OnSavePMSetDepartmentDeliveryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMSetDepartmentDeliveryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSetDepartmentDeliveryDialog::OnCancelPMSetDepartmentDeliveryDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMSetDepartmentDeliveryDialog::OnPMSetDepartmentDeliveryDialogListLoadData(){
	return 0;
}
