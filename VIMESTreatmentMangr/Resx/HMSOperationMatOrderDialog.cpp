#include "HMSOperationMatOrderDialog.h"
#include "MainFrm.h"
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMatOrderDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMatOrderDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnPerformDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationMatOrderDialog* )pWnd)->OnPerformDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnPerformDeptSelendok();
}
/*static void _OnPerformDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnPerformDeptKillfocus();
}*/
/*static void _OnPerformDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnPerformDeptKillfocus();
}*/
static long _OnPerformDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMatOrderDialog *)pWnd)->OnPerformDeptLoadData();
}
/*static void _OnPerformDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationMatOrderDialog *)pWnd)->OnPerformDeptAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationMatOrderDialog *pVw = (CHMSOperationMatOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationMatOrderDialog *pVw = (CHMSOperationMatOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSOperationMatOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMatOrderDialog*)pWnd)->OnAddHMSOperationMatOrderDialog();
} 
static int _OnEditHMSOperationMatOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMatOrderDialog*)pWnd)->OnEditHMSOperationMatOrderDialog();
} 
static int _OnDeleteHMSOperationMatOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMatOrderDialog*)pWnd)->OnDeleteHMSOperationMatOrderDialog();
} 
static int _OnSaveHMSOperationMatOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMatOrderDialog*)pWnd)->OnSaveHMSOperationMatOrderDialog();
} 
static int _OnCancelHMSOperationMatOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationMatOrderDialog*)pWnd)->OnCancelHMSOperationMatOrderDialog();
} 
CHMSOperationMatOrderDialog::CHMSOperationMatOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 255;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSOperationMatOrderDialog::~CHMSOperationMatOrderDialog(){
}
void CHMSOperationMatOrderDialog::OnCreateComponents(){
	m_wndOrderNoLabel.Create(this, _T("Order No"), 5, 5, 125, 30);
	m_wndOrderNo.Create(this,130, 5, 250, 30); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 5, 31, 125, 56);
	m_wndOrderDate.Create(this,130, 31, 250, 56); 
	m_wndPerformDeptLabel.Create(this, _T("Perform Dept"), 5, 57, 125, 82);
	m_wndPerformDept.Create(this,130, 57, 250, 82); 
	m_wndSave.Create(this, _T("&Save"), 84, 89, 164, 114);
	m_wndClose.Create(this, _T("&Close"), 169, 89, 249, 114);

}
void CHMSOperationMatOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(20);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDept.SetCheckValue(true);
	m_wndPerformDept.LimitText(7);


	m_wndPerformDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_op_materialTbl.SetTableName(_T("hms_op_material"));
	m_hms_op_materialTbl.AddField(_T("HOM_OP_MATERIAL_ID"), dfLong); 
	m_hms_op_materialTbl.AddField(_T("HOM_CREATEDBY"), dfText, 20); 
	m_hms_op_materialTbl.AddField(_T("HOM_CREATEDDATE"), dfDateTime); 
	m_hms_op_materialTbl.AddField(_T("HOM_UPDATEDBY"), dfText, 20); 
	m_hms_op_materialTbl.AddField(_T("HOM_UPDATEDDATE"), dfDateTime); 
	m_hms_op_materialTbl.AddField(_T("HOM_ISACTIVE"), dfText, 1); 
	m_hms_op_materialTbl.AddField(_T("HOM_ORDERNO"), dfText, 20); 
	m_hms_op_materialTbl.AddField(_T("HOM_ORDERDATE"), dfDate); 
	m_hms_op_materialTbl.AddField(_T("HOM_ORDER_DEPTID"), dfText, 7); 
	m_hms_op_materialTbl.AddField(_T("HOM_PERFORM_DEPTID"), dfText, 7); 
	m_hms_op_materialTbl.AddField(_T("HOM_STATUS"), dfText, 1); 

}
void CHMSOperationMatOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndPerformDept.SetEvent(WE_SELENDOK, _OnPerformDeptSelendokFnc);
	//m_wndPerformDept.SetEvent(WE_SETFOCUS, _OnPerformDeptSetfocusFnc);
	//m_wndPerformDept.SetEvent(WE_KILLFOCUS, _OnPerformDeptKillfocusFnc);
	m_wndPerformDept.SetEvent(WE_SELCHANGE, _OnPerformDeptSelectChangeFnc);
	m_wndPerformDept.SetEvent(WE_LOADDATA, _OnPerformDeptLoadDataFnc);
	//m_wndPerformDept.SetEvent(WE_ADDNEW, _OnPerformDeptAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSOperationMatOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDept.GetDlgCtrlID(), m_szPerformDeptKey);

}
void CHMSOperationMatOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HOM_ORDERNO"), m_szOrderNo);
	rs.GetValue(_T("HOM_ORDERDATE"), m_szOrderDate);
	rs.GetValue(_T("HOM_PERFORM_DEPTID"), m_szPerformDeptKey);

}
void CHMSOperationMatOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_op_materialTbl.SetValue(_T("HOM_ORDERNO"), m_szOrderNo);
	m_hms_op_materialTbl.SetValue(_T("HOM_ORDERDATE"), m_szOrderDate);
	m_hms_op_materialTbl.SetValue(_T("HOM_PERFORM_DEPTID"), m_szPerformDeptKey);

}
void CHMSOperationMatOrderDialog::SetDefaultValues(){

	m_szOrderNo.Empty();
	m_szOrderDate.Empty();
	m_szPerformDeptKey.Empty();

}
int CHMSOperationMatOrderDialog::SetMode(int nMode){
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
/*void CHMSOperationMatOrderDialog::OnOrderNoChange(){
	
} */
/*void CHMSOperationMatOrderDialog::OnOrderNoSetfocus(){
	
} */
/*void CHMSOperationMatOrderDialog::OnOrderNoKillfocus(){
	
} */
int CHMSOperationMatOrderDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CHMSOperationMatOrderDialog::OnOrderDateChange(){
	
} */
/*void CHMSOperationMatOrderDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSOperationMatOrderDialog::OnOrderDateKillfocus(){
	
} */
int CHMSOperationMatOrderDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSOperationMatOrderDialog::OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMatOrderDialog::OnPerformDeptSelendok(){
	 
}
/*void CHMSOperationMatOrderDialog::OnPerformDeptSetfocus(){
	
}*/
/*void CHMSOperationMatOrderDialog::OnPerformDeptKillfocus(){
	
}*/
long CHMSOperationMatOrderDialog::OnPerformDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDept.IsSearchKey() && !m_szPerformDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPerformDeptKey
};
	m_wndPerformDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSOperationMatOrderDialog::OnPerformDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationMatOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMatOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMatOrderDialog::OnAddHMSOperationMatOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationMatOrderDialog::OnEditHMSOperationMatOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationMatOrderDialog::OnDeleteHMSOperationMatOrderDialog(){
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
 		OnCancelHMSOperationMatOrderDialog();
 	}
	return 0;
}
int CHMSOperationMatOrderDialog::OnSaveHMSOperationMatOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_op_materialTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_op_materialTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSOperationMatOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationMatOrderDialog::OnCancelHMSOperationMatOrderDialog(){
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
int CHMSOperationMatOrderDialog::OnHMSOperationMatOrderDialogListLoadData(){
	return 0;
}
