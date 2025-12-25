#include "ProductResourceDialog.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductResourceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductResourceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductResourceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductResourceDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CProductResourceDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CProductResourceDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CProductResourceDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CProductResourceDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductResourceDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductResourceDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductResourceDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductResourceDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductResourceDialog *pVw = (CProductResourceDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductResourceDialog *pVw = (CProductResourceDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CProductResourceDialog *pVw = (CProductResourceDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductResourceDialog *pVw = (CProductResourceDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductResourceDialog *pVw = (CProductResourceDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSourceFeeSelectFnc(CWnd *pWnd){
	 ((CProductResourceDialog*)pWnd)->OnSourceFeeSelect();
}
static int _OnAddProductResourceDialogFnc(CWnd *pWnd){
	 return ((CProductResourceDialog*)pWnd)->OnAddProductResourceDialog();
} 
static int _OnEditProductResourceDialogFnc(CWnd *pWnd){
	 return ((CProductResourceDialog*)pWnd)->OnEditProductResourceDialog();
} 
static int _OnDeleteProductResourceDialogFnc(CWnd *pWnd){
	 return ((CProductResourceDialog*)pWnd)->OnDeleteProductResourceDialog();
} 
static int _OnSaveProductResourceDialogFnc(CWnd *pWnd){
	 return ((CProductResourceDialog*)pWnd)->OnSaveProductResourceDialog();
} 
static int _OnCancelProductResourceDialogFnc(CWnd *pWnd){
	 return ((CProductResourceDialog*)pWnd)->OnCancelProductResourceDialog();
} 
CProductResourceDialog::CProductResourceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 445;
	m_nDlgHeight = 435;
	SetDefaultValues();
}
CProductResourceDialog::~CProductResourceDialog(){
}
void CProductResourceDialog::OnCreateComponents(){
	m_wndGroupList.Create(this, _T("List source drug"), 5, 5, 435, 396);
	m_wndList.Create(this,10, 29, 430, 331); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 336, 90, 361);
	m_wndID.Create(this,95, 336, 175, 361); 
	m_wndNameLabel.Create(this, _T("Name"), 180, 336, 260, 361);
	m_wndName.Create(this,265, 336, 430, 361); 
	m_wndAdd.Create(this, _T("&Add"), 40, 400, 115, 425);
	m_wndEdit.Create(this, _T("&Edit"), 120, 400, 195, 425);
	m_wndDelete.Create(this, _T("&Delete"), 200, 400, 275, 425);
	m_wndSave.Create(this, _T("&Save"), 280, 400, 355, 425);
	m_wndCancel.Create(this, _T("&Cancel"), 360, 400, 435, 425);
	m_wndSourceFee.Create(this, _T("Source Fee"), 10, 366, 175, 391);

}
void CProductResourceDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(16);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Status"), CFMT_TEXT, 80);

	
	m_m_product_resourceTbl.SetTableName(_T("m_product_resource"));	
	m_m_product_resourceTbl.AddField(_T("pmo_createdby"), dfText, 15);	
	m_m_product_resourceTbl.AddField(_T("pmo_updatedby"), dfText, 15);
	m_m_product_resourceTbl.AddField(_T("pmo_id"), dfInteger, 15); 
	m_m_product_resourceTbl.AddField(_T("pmo_name"), dfText, 15); 
	m_m_product_resourceTbl.AddField(_T("pmo_isactive"), dfText, 1); 
	m_m_product_resourceTbl.AddField(_T("pmo_free"), dfText, 1);	
}
void CProductResourceDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSourceFee.SetEvent(WE_CLICK, _OnSourceFeeSelectFnc);
	OnListLoadData();

}
void CProductResourceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndSourceFee.GetDlgCtrlID(), m_bSourceFee);

}
void CProductResourceDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM m_product_resource WHERE pmo_id=%d ORDER BY pmo_id"), m_nID);	
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()){
		rs.GetValue(_T("pmo_id"), m_nID);
		rs.GetValue(_T("pmo_name"), m_szName);
		rs.GetValue(_T("pmo_free"), tmpStr);
		if (tmpStr ==_T("Y")) 
			m_bSourceFee=true;
		else
			m_bSourceFee =false;
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CProductResourceDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();	
	CString tmpStr;
	if (m_bSourceFee) tmpStr=_T("Y");		
	m_m_product_resourceTbl.SetValue(_T("pmo_id"), m_nID); 
	m_m_product_resourceTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser()); 	
	m_m_product_resourceTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser()); 	
	m_m_product_resourceTbl.SetValue(_T("pmo_name"), m_szName); 
	m_m_product_resourceTbl.SetValue(_T("pmo_free"), tmpStr); 
	m_m_product_resourceTbl.SetValue(_T("pmo_isactive"),_T("Y"));	

}
void CProductResourceDialog::SetDefaultValues(){	
	m_nID =0;
	m_szName.Empty();
	m_bSourceFee=FALSE;
}
int CProductResourceDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
			szSQL.Format(_T(" SELECT Max(pmo_id) +1 FROM m_product_resource "));
			rs.ExecSQL(szSQL);			
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_nID = rs.GetIntValue();
			m_wndName.SetFocus();
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
		m_wndID.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CProductResourceDialog::OnListDblClick(){
	
} 
void CProductResourceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0 ) return;
	m_nID = ToInt(m_wndList.GetItemText(nSel, 0));
	GetDataToScreen();
} 
int CProductResourceDialog::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CProductResourceDialog::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM m_product_resource ORDER BY pmo_id"));	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("pmo_id")), 
			rs.GetValue(_T("pmo_name")), 
			rs.GetValue(_T("pmo_free")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CProductResourceDialog::OnIDChange(){
	
} */
/*void CProductResourceDialog::OnIDSetfocus(){
	
} */
/*void CProductResourceDialog::OnIDKillfocus(){
	
} */
int CProductResourceDialog::OnIDCheckValue(){
	return 0;
} 
/*void CProductResourceDialog::OnNameChange(){
	
} */
/*void CProductResourceDialog::OnNameSetfocus(){
	
} */
/*void CProductResourceDialog::OnNameKillfocus(){
	
} */
int CProductResourceDialog::OnNameCheckValue(){
	return 0;
} 
void CProductResourceDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddProductResourceDialog();
} 
void CProductResourceDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditProductResourceDialog();
} 
void CProductResourceDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteProductResourceDialog();
} 
void CProductResourceDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductResourceDialog();
} 
void CProductResourceDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
} 
	void CProductResourceDialog::OnSourceFeeSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CProductResourceDialog::OnAddProductResourceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CProductResourceDialog::OnEditProductResourceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductResourceDialog::OnDeleteProductResourceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM m_product_resource WHERE  pmo_id=%d and pmo_id not in(select pi_resource_id from m_product_item where pi_resource_id=%d) "), m_nID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
		OnListLoadData();
 		OnCancelProductResourceDialog(); 
 	}
	return 0;
}
int CProductResourceDialog::OnSaveProductResourceDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_m_product_resourceTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE pmo_id=%d"), m_nID); 
 		szSQL = m_m_product_resourceTbl.GetUpdateSQL(_T("pmo_createdby,pmo_createddate,pmo_id")); 
 		szSQL += szWhere; 
 	} 
	////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnListLoadData();
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret;  	
}
int CProductResourceDialog::OnCancelProductResourceDialog(){
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
int CProductResourceDialog::OnProductResourceDialogListLoadData(){
	return 0;
}
