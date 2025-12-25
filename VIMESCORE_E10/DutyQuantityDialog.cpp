#include "DutyQuantityDialog.h"
#include "MainFrame_E10.h"
/*static void _OnMaxDutyQuantityChangeFnc(CWnd *pWnd){
	((CDutyQuantityDialog *)pWnd)->OnMaxDutyQuantityChange();
} */
/*static void _OnMaxDutyQuantitySetfocusFnc(CWnd *pWnd){
	((CDutyQuantityDialog *)pWnd)->OnMaxDutyQuantitySetfocus();} */ 
/*static void _OnMaxDutyQuantityKillfocusFnc(CWnd *pWnd){
	((CDutyQuantityDialog *)pWnd)->OnMaxDutyQuantityKillfocus();
} */
static int _OnMaxDutyQuantityCheckValueFnc(CWnd *pWnd){
	return ((CDutyQuantityDialog *)pWnd)->OnMaxDutyQuantityCheckValue();
} 
/*static void _OnDutyQuantityChangeFnc(CWnd *pWnd){
	((CDutyQuantityDialog *)pWnd)->OnDutyQuantityChange();
} */
/*static void _OnDutyQuantitySetfocusFnc(CWnd *pWnd){
	((CDutyQuantityDialog *)pWnd)->OnDutyQuantitySetfocus();} */ 
/*static void _OnDutyQuantityKillfocusFnc(CWnd *pWnd){
	((CDutyQuantityDialog *)pWnd)->OnDutyQuantityKillfocus();
} */
static int _OnDutyQuantityCheckValueFnc(CWnd *pWnd){
	return ((CDutyQuantityDialog *)pWnd)->OnDutyQuantityCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CDutyQuantityDialog *pVw = (CDutyQuantityDialog *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CDutyQuantityDialog *pVw = (CDutyQuantityDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddDutyQuantityDialogFnc(CWnd *pWnd){
	 return ((CDutyQuantityDialog*)pWnd)->OnAddDutyQuantityDialog();
} 
static int _OnEditDutyQuantityDialogFnc(CWnd *pWnd){
	 return ((CDutyQuantityDialog*)pWnd)->OnEditDutyQuantityDialog();
} 
static int _OnDeleteDutyQuantityDialogFnc(CWnd *pWnd){
	 return ((CDutyQuantityDialog*)pWnd)->OnDeleteDutyQuantityDialog();
} 
static int _OnSaveDutyQuantityDialogFnc(CWnd *pWnd){
	 return ((CDutyQuantityDialog*)pWnd)->OnSaveDutyQuantityDialog();
} 
static int _OnCancelDutyQuantityDialogFnc(CWnd *pWnd){
	 return ((CDutyQuantityDialog*)pWnd)->OnCancelDutyQuantityDialog();
} 
CDutyQuantityDialog::CDutyQuantityDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 280;
	m_nDlgHeight = 130;
	m_nStorageID = 0;
	m_nProductItemId = 0;
	m_nMaxDutyQuantity = 0;
	SetDefaultValues();
}
CDutyQuantityDialog::~CDutyQuantityDialog(){
}
void CDutyQuantityDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Item Information"), 5, 5, 270, 90);
	m_wndMaxDutyQuantityLabel.Create(this, _T("Max duty quantity"), 10, 30, 120, 55);
	m_wndMaxDutyQuantity.Create(this,125, 30, 265, 55); 
	m_wndDutyQuantityLabel.Create(this, _T("Duty Quantity"), 10, 60, 120, 85);
	m_wndDutyQuantity.Create(this,125, 60, 265, 85); 
	m_wndOk.Create(this, _T("&Ok"), 105, 95, 185, 120);
	m_wndClose.Create(this, _T("&Close"), 190, 95, 270, 120);

}
void CDutyQuantityDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndMaxDutyQuantity.SetLimitText(16);
	m_wndMaxDutyQuantity.SetCheckValue(true);
	m_wndDutyQuantity.SetLimitText(16);
	m_wndDutyQuantity.SetCheckValue(true);
	m_m_storage_dutyTbl.SetTableName(_T("m_storage_duty"));
	m_m_storage_dutyTbl.AddField(_T("msd_storage_id"), dfLong); 
	m_m_storage_dutyTbl.AddField(_T("msd_product_item_id"), dfLong); 
	m_m_storage_dutyTbl.AddField(_T("msd_qtyorder_limit"), dfLong); 
}
void CDutyQuantityDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndMaxDutyQuantity.SetEvent(WE_CHANGE, _OnMaxDutyQuantityChangeFnc);
	//m_wndMaxDutyQuantity.SetEvent(WE_SETFOCUS, _OnMaxDutyQuantitySetfocusFnc);
	//m_wndMaxDutyQuantity.SetEvent(WE_KILLFOCUS, _OnMaxDutyQuantityKillfocusFnc);
	m_wndMaxDutyQuantity.SetEvent(WE_CHECKVALUE, _OnMaxDutyQuantityCheckValueFnc);
	//m_wndDutyQuantity.SetEvent(WE_CHANGE, _OnDutyQuantityChangeFnc);
	//m_wndDutyQuantity.SetEvent(WE_SETFOCUS, _OnDutyQuantitySetfocusFnc);
	//m_wndDutyQuantity.SetEvent(WE_KILLFOCUS, _OnDutyQuantityKillfocusFnc);
	m_wndDutyQuantity.SetEvent(WE_CHECKVALUE, _OnDutyQuantityCheckValueFnc);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CDutyQuantityDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndMaxDutyQuantity.GetDlgCtrlID(), m_nMaxDutyQuantity);
	DDX_Text(pDX, m_wndDutyQuantity.GetDlgCtrlID(), m_nDutyQuantity);

}
void CDutyQuantityDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT msd_qtyorder_limit qty_limit, msl_qtyonhand-msl_qtyordered max_qty FROM m_storageline ") \
				_T("LEFT JOIN m_storage_duty ON (msd_storage_id = msl_storage_id AND msd_product_item_id = msl_product_item_id) ") \
				_T("WHERE msl_storage_id = %d AND msl_product_item_id = %ld"), m_nStorageID, m_nProductItemId);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("qty_limit"), m_nDutyQuantity);
		rs.GetValue(_T("max_qty"), m_nMaxDutyQuantity);
	}
	if (m_nDutyQuantity > 0)
		SetMode(VM_EDIT);
	else
		SetMode(VM_ADD);
}
void CDutyQuantityDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_m_storage_dutyTbl.SetValue(_T("msd_storage_id"), m_nStorageID);
	m_m_storage_dutyTbl.SetValue(_T("msd_product_item_id"), m_nProductItemId);
	if (GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" WHERE msd_storage_id = %d AND msd_product_item_id = %ld "), m_nStorageID, m_nProductItemId);
		m_m_storage_dutyTbl.Open(&pMF->m_db, szWhere);
	}
	m_m_storage_dutyTbl.SetValue(_T("msd_qtyorder_limit"), m_nDutyQuantity);
}
void CDutyQuantityDialog::SetDefaultValues(){
	m_nDutyQuantity=0;

}
int CDutyQuantityDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
		m_wndMaxDutyQuantity.EnableWindow(false);
		m_wndOk.EnableWindow(true);
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CDutyQuantityDialog::OnMaxDutyQuantityChange(){
	
} */
/*void CDutyQuantityDialog::OnMaxDutyQuantitySetfocus(){
	
} */
/*void CDutyQuantityDialog::OnMaxDutyQuantityKillfocus(){
	
} */
int CDutyQuantityDialog::OnMaxDutyQuantityCheckValue(){
	return 0;
} 
/*void CDutyQuantityDialog::OnDutyQuantityChange(){
	
} */
/*void CDutyQuantityDialog::OnDutyQuantitySetfocus(){
	
} */
/*void CDutyQuantityDialog::OnDutyQuantityKillfocus(){
	
} */
int CDutyQuantityDialog::OnDutyQuantityCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nMaxQty = 0;
	UpdateData(true);
	if (m_nDutyQuantity <= 0 || m_nDutyQuantity > m_nMaxDutyQuantity)
		return -1;
	//Real time
	szSQL.Format(_T("SELECT msl_qtyonhand - msl_qtyordered max_qty FROM m_storageline WHERE msl_storage_id = %d AND msl_product_item_id = %ld"), m_nStorageID, m_nProductItemId);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		rs.GetValue(_T("max_qty"), nMaxQty);
	if (m_nDutyQuantity <= 0 || m_nDutyQuantity > nMaxQty)
		return -1;
	return 0;

} 
void CDutyQuantityDialog::OnOkSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveDutyQuantityDialog();
} 
void CDutyQuantityDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CDutyQuantityDialog::OnAddDutyQuantityDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDutyQuantityDialog::OnEditDutyQuantityDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDutyQuantityDialog::OnDeleteDutyQuantityDialog(){
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
 		OnCancelDutyQuantityDialog();
 	}
	return 0;
}
int CDutyQuantityDialog::OnSaveDutyQuantityDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_m_storage_dutyTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE msd_storage_id = %d AND msd_product_item_id = %ld"), m_nStorageID, m_nProductItemId);
 		szSQL = m_m_storage_dutyTbl.GetUpdateSQL(_T("msd_storage_id, msd_product_item_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		OnOK();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDutyQuantityDialog::OnCancelDutyQuantityDialog(){
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
int CDutyQuantityDialog::OnDutyQuantityDialogListLoadData(){
	return 0;
}
