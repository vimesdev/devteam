#include "HMSPaymentSourceDialog.h"
#include "MainFrm.h"
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSPaymentSourceDialog *pVw = (CHMSPaymentSourceDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPaymentSourceDialog *pVw = (CHMSPaymentSourceDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPaymentSourceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPaymentSourceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPaymentSourceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceDialog*)pWnd)->OnAddHMSPaymentSourceDialog();
} 
static int _OnEditHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceDialog*)pWnd)->OnEditHMSPaymentSourceDialog();
} 
static int _OnDeleteHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceDialog*)pWnd)->OnDeleteHMSPaymentSourceDialog();
} 
static int _OnSaveHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceDialog*)pWnd)->OnSaveHMSPaymentSourceDialog();
} 
static int _OnCancelHMSPaymentSourceDialogFnc(CWnd *pWnd){
	 return ((CHMSPaymentSourceDialog*)pWnd)->OnCancelHMSPaymentSourceDialog();
} 
CHMSPaymentSourceDialog::CHMSPaymentSourceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPaymentSourceDialog::~CHMSPaymentSourceDialog(){
}
void CHMSPaymentSourceDialog::OnCreateComponents(){
	m_wndPaymentSource.Create(this, _T("Payment Source"), 5, 5, 600, 450);
	m_wndOK.Create(this, _T("&OK"), 437, 453, 517, 478);
	m_wndClose.Create(this, _T("&Close"), 520, 453, 600, 478);
	m_wndList.Create(this,10, 30, 595, 445); 

}
void CHMSPaymentSourceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Amount"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(3, _T("Payment Source"), CFMT_TEXT, 100);

}
void CHMSPaymentSourceDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSPaymentSourceDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPaymentSourceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPaymentSourceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPaymentSourceDialog::SetDefaultValues(){


}
int CHMSPaymentSourceDialog::SetMode(int nMode){
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
void CHMSPaymentSourceDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentSourceDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPaymentSourceDialog::OnListDblClick(){
	
} 
void CHMSPaymentSourceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPaymentSourceDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPaymentSourceDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")), 
			rs.GetValue(_T("PaymentSource")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPaymentSourceDialog::OnAddHMSPaymentSourceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPaymentSourceDialog::OnEditHMSPaymentSourceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPaymentSourceDialog::OnDeleteHMSPaymentSourceDialog(){
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
 		OnCancelHMSPaymentSourceDialog();
 	}
	return 0;
}
int CHMSPaymentSourceDialog::OnSaveHMSPaymentSourceDialog(){
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
 		//OnHMSPaymentSourceDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPaymentSourceDialog::OnCancelHMSPaymentSourceDialog(){
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
int CHMSPaymentSourceDialog::OnHMSPaymentSourceDialogListLoadData(){
	return 0;
}
