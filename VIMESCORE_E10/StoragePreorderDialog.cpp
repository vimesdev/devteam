#include "stdafx.h"
#include "StoragePreorderDialog.h"
#include "MainFrame_E10.h"
#include "HMSReasonDialog.h"

/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog *)pWnd)->OnOnHandCheckValue();
} 
/*static void _OnOrderedQuantityChangeFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOrderedQuantityChange();
} */
/*static void _OnOrderedQuantitySetfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOrderedQuantitySetfocus();} */ 
/*static void _OnOrderedQuantityKillfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnOrderedQuantityKillfocus();
} */
static int _OnOrderedQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog *)pWnd)->OnOrderedQuantityCheckValue();
} 
/*static void _OnPreorderQuantityChangeFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnPreorderQuantityChange();
} */
/*static void _OnPreorderQuantitySetfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnPreorderQuantitySetfocus();} */ 
/*static void _OnPreorderQuantityKillfocusFnc(CWnd *pWnd){
	((CStoragePreorderDialog *)pWnd)->OnPreorderQuantityKillfocus();
} */
static int _OnPreorderQuantityCheckValueFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog *)pWnd)->OnPreorderQuantityCheckValue();
} 
static void _OnOkSelectFnc(CWnd *pWnd){
	CStoragePreorderDialog *pVw = (CStoragePreorderDialog *)pWnd;
	pVw->OnOkSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStoragePreorderDialog *pVw = (CStoragePreorderDialog *)pWnd;
	pVw->OnCloseSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CStoragePreorderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CStoragePreorderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CStoragePreorderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnAddStoragePreorderDialog();
} 
static int _OnEditStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnEditStoragePreorderDialog();
} 
static int _OnDeleteStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnDeleteStoragePreorderDialog();
} 
static int _OnSaveStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnSaveStoragePreorderDialog();
} 
static int _OnCancelStoragePreorderDialogFnc(CWnd *pWnd){
	 return ((CStoragePreorderDialog*)pWnd)->OnCancelStoragePreorderDialog();
} 
CStoragePreorderDialog::CStoragePreorderDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 280;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CStoragePreorderDialog::~CStoragePreorderDialog(){
}
void CStoragePreorderDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Item Information"), 5, 5, 640, 62);
	m_wndOnHandLabel.Create(this, _T("Onhand quantity"), 10, 30, 130, 55);
	m_wndOnHand.Create(this, 135, 30, 215, 55);
	m_wndOrderedQuantityLabel.Create(this, _T("Ordered quantity"), 220, 30, 340, 55);
	m_wndOrderedQuantity.Create(this, 345, 30, 425, 55);
	m_wndPreorderQuantityLabel.Create(this, _T("Preorder quantity"), 430, 30, 550, 55);
	m_wndPreorderQuantity.Create(this, 555, 30, 635, 55);
	m_wndOk.Create(this, _T("&Ok"), 475, 70, 555, 95);
	m_wndClose.Create(this, _T("&Close"), 560, 70, 640, 95);
	m_wndList.Create(this, 5, 100, 640, 425);

}
void CStoragePreorderDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOnHand.SetLimitText(16);
	m_wndOnHand.SetCheckValue(true);
	m_wndOrderedQuantity.SetLimitText(16);
	m_wndOrderedQuantity.SetCheckValue(true);
	m_wndPreorderQuantity.SetLimitText(16);
	m_wndPreorderQuantity.SetCheckValue(true);
	m_wndOnHand.SetReadOnly(true);
	m_wndOrderedQuantity.SetReadOnly(true);

	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //idx
	m_wndList.InsertColumn(1, _T("UserId"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(3, _T("Qty OnHand"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Qty Order"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("PreOrder"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(6, _T("Note"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(7, _T("Computer Name"), CFMT_TEXT,150);


	m_storage_preorder_logTbl.SetTableName(_T("m_storage_preorder_log"));
	m_storage_preorder_logTbl.AddField(_T("mspl_userid"), dfText, 15); 
	m_storage_preorder_logTbl.AddField(_T("mspl_predate"), dfDateTime); 
	m_storage_preorder_logTbl.AddField(_T("mspl_computername"), dfText, 254); 
	m_storage_preorder_logTbl.AddField(_T("mspl_ip"), dfText, 124); 
	m_storage_preorder_logTbl.AddField(_T("mspl_product_item_id"), dfLong); 
	m_storage_preorder_logTbl.AddField(_T("mspl_qtyonhand"), dfLong);
	m_storage_preorder_logTbl.AddField(_T("mspl_qtyorder"), dfLong);
	m_storage_preorder_logTbl.AddField(_T("mspl_qtypreorder"), dfLong);
	m_storage_preorder_logTbl.AddField(_T("mspl_storage_id"), dfInteger);
	m_storage_preorder_logTbl.AddField(_T("mspl_note"), dfText, 512);

}
void CStoragePreorderDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	//m_wndOrderedQuantity.SetEvent(WE_CHANGE, _OnOrderedQuantityChangeFnc);
	//m_wndOrderedQuantity.SetEvent(WE_SETFOCUS, _OnOrderedQuantitySetfocusFnc);
	//m_wndOrderedQuantity.SetEvent(WE_KILLFOCUS, _OnOrderedQuantityKillfocusFnc);
	m_wndOrderedQuantity.SetEvent(WE_CHECKVALUE, _OnOrderedQuantityCheckValueFnc);
	//m_wndPreorderQuantity.SetEvent(WE_CHANGE, _OnPreorderQuantityChangeFnc);
	//m_wndPreorderQuantity.SetEvent(WE_SETFOCUS, _OnPreorderQuantitySetfocusFnc);
	//m_wndPreorderQuantity.SetEvent(WE_KILLFOCUS, _OnPreorderQuantityKillfocusFnc);
	m_wndPreorderQuantity.SetEvent(WE_CHECKVALUE, _OnPreorderQuantityCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOk.SetEvent(WE_CLICK, _OnOkSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW)
		GetDataToScreen();
	SetMode(nMode);


}
void CStoragePreorderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_Text(pDX, m_wndOrderedQuantity.GetDlgCtrlID(), m_nOrderedQuantity);
	DDX_Text(pDX, m_wndPreorderQuantity.GetDlgCtrlID(), m_nPreorderQuantity);

}
void CStoragePreorderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT msl_qtyonhand, msl_qtyordered, msl_qtypreordered FROM m_storageline WHERE msl_storage_id=%ld and msl_product_item_id=%ld"), 
		m_nStorageID, m_nProductItem_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("msl_qtyonhand"), m_nOnHand);
		rs.GetValue(_T("msl_qtyordered"), m_nOrderedQuantity);
		rs.GetValue(_T("msl_qtypreordered"), m_nPreorderQuantity);
		OnListLoadData();

	}

}
void CStoragePreorderDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	TCHAR  infoBuf[128];
	DWORD  bufCharCount = 128;
	CString szLocalHostName;
 
  // Get and display the name of the computer. 
	GetComputerName( infoBuf, &bufCharCount );
	szLocalHostName.Format(_T("%s"), infoBuf);

	m_storage_preorder_logTbl.SetValue(_T("mspl_userid"), pMF->GetCurrentUser()); 
	m_storage_preorder_logTbl.SetValue(_T("mspl_predate"), pMF->GetSysDateTime()); 
	m_storage_preorder_logTbl.SetValue(_T("mspl_computername"),szLocalHostName ); 
	//m_storage_preorder_logTbl.SetValue(_T("mspl_ip"), GetLocalIP() ); 
	m_storage_preorder_logTbl.SetValue(_T("mspl_product_item_id"), m_nProductItem_ID); 
	m_storage_preorder_logTbl.SetValue(_T("mspl_qtyonhand"), m_nOnHand);
	m_storage_preorder_logTbl.SetValue(_T("mspl_qtyorder"), m_nOrderedQuantity);
	m_storage_preorder_logTbl.SetValue(_T("mspl_qtypreorder"), m_nPreorderQuantity);
	m_storage_preorder_logTbl.SetValue(_T("mspl_storage_id"), m_nStorageID);
	m_storage_preorder_logTbl.SetValue(_T("mspl_note"), m_szNote);
}
void CStoragePreorderDialog::SetDefaultValues(){

	m_nOnHand=0;
	m_nOrderedQuantity=0;
	m_nPreorderQuantity=0;

}
int CStoragePreorderDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CStoragePreorderDialog::OnOnHandChange(){
	
} */
/*void CStoragePreorderDialog::OnOnHandSetfocus(){
	
} */
/*void CStoragePreorderDialog::OnOnHandKillfocus(){
	
} */
int CStoragePreorderDialog::OnOnHandCheckValue(){
	return 0;
} 
/*void CStoragePreorderDialog::OnOrderedQuantityChange(){
	
} */
/*void CStoragePreorderDialog::OnOrderedQuantitySetfocus(){
	
} */
/*void CStoragePreorderDialog::OnOrderedQuantityKillfocus(){
	
} */
int CStoragePreorderDialog::OnOrderedQuantityCheckValue(){
	return 0;
} 
/*void CStoragePreorderDialog::OnPreorderQuantityChange(){
	
} */
/*void CStoragePreorderDialog::OnPreorderQuantitySetfocus(){
	
} */
/*void CStoragePreorderDialog::OnPreorderQuantityKillfocus(){
	
} */
int CStoragePreorderDialog::OnPreorderQuantityCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT msl_qtyonhand, msl_qtyordered, msl_qtypreordered FROM m_storageline WHERE msl_storage_id=%ld and msl_product_item_id=%ld"), 
		m_nStorageID, m_nProductItem_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("msl_qtyonhand"), m_nOnHand);
		rs.GetValue(_T("msl_qtyordered"), m_nOrderedQuantity);
		//rs.GetValue(_T("msl_qtypreordered"), m_nPreorderQuantity);

	}

	if(m_nPreorderQuantity+m_nOrderedQuantity > m_nOnHand)
		return -1;
	return 0;
} 
void CStoragePreorderDialog::OnOkSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CHMSReasonDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
		m_szNote = dlg.m_szReason;
	}
	else
	{
		return;
	}

	if(OnSaveStoragePreorderDialog())
		CGuiDialog::OnOK();
} 
void CStoragePreorderDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CStoragePreorderDialog::OnListDblClick(){
	
} 
void CStoragePreorderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CStoragePreorderDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CStoragePreorderDialog::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" select * from  m_storage_preorder_log where mspl_storage_id= %d and mspl_product_item_id= %ld order by mspl_idx"),m_nStorageID,m_nProductItem_ID);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("mspl_idx")),
			rs.GetValue(_T("mspl_userid")),
			rs.GetValue(_T("mspl_predate")),
			rs.GetValue(_T("mspl_qtyonhand")),
			rs.GetValue(_T("mspl_qtyorder")),
			rs.GetValue(_T("mspl_qtypreorder")),
			rs.GetValue(_T("mspl_note")),
			rs.GetValue(_T("mspl_computername")),
			NULL
			);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
;
}
int CStoragePreorderDialog::OnAddStoragePreorderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CStoragePreorderDialog::OnEditStoragePreorderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CStoragePreorderDialog::OnDeleteStoragePreorderDialog(){
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
 		OnCancelStoragePreorderDialog();
 	}
	return 0;
}
int CStoragePreorderDialog::OnSaveStoragePreorderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL;
	szSQL.Format(_T("UPDATE m_storageline SET msl_qtypreordered=%ld ") \
		_T("WHERE msl_storage_id=%ld and msl_product_item_id=%ld "), 
		m_nPreorderQuantity, m_nStorageID, m_nProductItem_ID);
	
 	int ret = pMF->ExecSQL(szSQL);
	if(ret >0)
	{
		szSQL= m_storage_preorder_logTbl.GetInsertSQL();
		rs.ExecSQL(szSQL);
	}
 	return ret;
 	return 0;
}
int CStoragePreorderDialog::OnCancelStoragePreorderDialog(){
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
int CStoragePreorderDialog::OnStoragePreorderDialogListLoadData(){
	return 0;
}
