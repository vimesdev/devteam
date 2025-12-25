#include "HMSAdviceDialog.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdviceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAdviceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdviceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdviceDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnAdviceChangeFnc(CWnd *pWnd){
	((CHMSAdviceDialog *)pWnd)->OnAdviceChange();
} */
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CHMSAdviceDialog *)pWnd)->OnAdviceSetfocus();} */ 
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CHMSAdviceDialog *)pWnd)->OnAdviceKillfocus();
} */
static int _OnAdviceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdviceDialog *)pWnd)->OnAdviceCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSAdviceDialog *pVw = (CHMSAdviceDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdviceDialog *pVw = (CHMSAdviceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdviceDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviceDialog*)pWnd)->OnAddHMSAdviceDialog();
} 
static int _OnEditHMSAdviceDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviceDialog*)pWnd)->OnEditHMSAdviceDialog();
} 
static int _OnDeleteHMSAdviceDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviceDialog*)pWnd)->OnDeleteHMSAdviceDialog();
} 
static int _OnSaveHMSAdviceDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviceDialog*)pWnd)->OnSaveHMSAdviceDialog();
} 
static int _OnCancelHMSAdviceDialogFnc(CWnd *pWnd){
	 return ((CHMSAdviceDialog*)pWnd)->OnCancelHMSAdviceDialog();
} 
CHMSAdviceDialog::CHMSAdviceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 410;
	m_nDlgHeight = 430;
	SetDefaultValues();
}
CHMSAdviceDialog::~CHMSAdviceDialog(){
}
void CHMSAdviceDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 555, 385); 
	m_wndAdviceLabel.Create(this, _T("Advice"), 5, 390, 85, 415);
	m_wndAdvice.Create(this,5, 420, 555, 515, TRUE, FALSE, TRUE); 
	m_wndApply.Create(this, _T("&Apply"), 378, 520, 463, 545);
	m_wndClose.Create(this, _T("&Close"), 468, 520, 553, 545);
}
void CHMSAdviceDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
	m_wndAdvice.SetLimitText(254);
	m_wndAdvice.SetCheckValue(true);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Advice"), CFMT_TEXT, 450);
}
void CHMSAdviceDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndAdvice.SetEvent(WE_CHANGE, _OnAdviceChangeFnc);
	//m_wndAdvice.SetEvent(WE_SETFOCUS, _OnAdviceSetfocusFnc);
	//m_wndAdvice.SetEvent(WE_KILLFOCUS, _OnAdviceKillfocusFnc);
	m_wndAdvice.SetEvent(WE_CHECKVALUE, _OnAdviceCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
}
void CHMSAdviceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdvice);

}
void CHMSAdviceDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdviceDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSAdviceDialog::SetDefaultValues(){

	m_szAdvice.Empty();

}
int CHMSAdviceDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
void CHMSAdviceDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	if(!m_szAdvice.IsEmpty())
		m_szAdvice += _T("\r\n");
	m_szAdvice += m_wndList.GetItemText(nSel, 1);
	m_wndList.DeleteItem(nSel);	
	UpdateData(false);
} 
void CHMSAdviceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdviceDialog::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAdviceDialog::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as advice FROM sys_sel where ss_id='hms_advice_drug' ORDER BY ss_code "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("advice")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*void CHMSAdviceDialog::OnAdviceChange(){
	
} */
/*void CHMSAdviceDialog::OnAdviceSetfocus(){
	
} */
/*void CHMSAdviceDialog::OnAdviceKillfocus(){
	
} */
int CHMSAdviceDialog::OnAdviceCheckValue(){
	return 0;
} 
void CHMSAdviceDialog::OnApplySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	UpdateData(true);
	szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_advice='%s' WHERE hpo_orderid=%ld"), m_szAdvice, m_nOrderID);
	pMF->ExecSQL(szSQL);
	CGuiDialog::OnOK();
} 
void CHMSAdviceDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSAdviceDialog::OnAddHMSAdviceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAdviceDialog::OnEditHMSAdviceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdviceDialog::OnDeleteHMSAdviceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSAdviceDialog(); 
 	}
	return 0;
}
int CHMSAdviceDialog::OnSaveHMSAdviceDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnHMSAdviceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSAdviceDialog::OnCancelHMSAdviceDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSAdviceDialog::OnHMSAdviceDialogListLoadData(){
	return 0;
}
