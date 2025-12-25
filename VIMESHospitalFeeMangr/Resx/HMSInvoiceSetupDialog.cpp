#include "HMSInvoiceSetupDialog.h"
#include "MainFrm.h"
/*static void _OnReceiveDateChangeFnc(CWnd *pWnd){
	((CHMSInvoiceSetupDialog *)pWnd)->OnReceiveDateChange();
} */
/*static void _OnReceiveDateSetfocusFnc(CWnd *pWnd){
	((CHMSInvoiceSetupDialog *)pWnd)->OnReceiveDateSetfocus();} */ 
/*static void _OnReceiveDateKillfocusFnc(CWnd *pWnd){
	((CHMSInvoiceSetupDialog *)pWnd)->OnReceiveDateKillfocus();
} */
static int _OnReceiveDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInvoiceSetupDialog *)pWnd)->OnReceiveDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInvoiceSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInvoiceSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInvoiceSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInvoiceSetupDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSInvoiceSetupDialog *pVw = (CHMSInvoiceSetupDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInvoiceSetupDialog *pVw = (CHMSInvoiceSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSInvoiceSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceSetupDialog*)pWnd)->OnAddHMSInvoiceSetupDialog();
} 
static int _OnEditHMSInvoiceSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceSetupDialog*)pWnd)->OnEditHMSInvoiceSetupDialog();
} 
static int _OnDeleteHMSInvoiceSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceSetupDialog*)pWnd)->OnDeleteHMSInvoiceSetupDialog();
} 
static int _OnSaveHMSInvoiceSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceSetupDialog*)pWnd)->OnSaveHMSInvoiceSetupDialog();
} 
static int _OnCancelHMSInvoiceSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSInvoiceSetupDialog*)pWnd)->OnCancelHMSInvoiceSetupDialog();
} 
CHMSInvoiceSetupDialog::CHMSInvoiceSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 325;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CHMSInvoiceSetupDialog::~CHMSInvoiceSetupDialog(){
}
void CHMSInvoiceSetupDialog::OnCreateComponents(){
	m_wndSetupInformation.Create(this, _T("Setup Information"), 5, 5, 315, 215);
	m_wndReceiveDateLabel.Create(this, _T("Receive Date"), 10, 30, 140, 55);
	m_wndReceiveDate.Create(this,145, 30, 245, 55); 
	m_wndList.Create(this,10, 60, 311, 211); 
	m_wndOK.Create(this, _T("&OK"), 160, 220, 235, 245);
	m_wndCancel.Create(this, _T("&Cancel"), 240, 220, 315, 245);

}
void CHMSInvoiceSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndReceiveDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiveDate.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Serial"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Book No"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Receive No"), CFMT_NUMBER, 80);
	m_hms_invfeectlTbl.SetTableName(_T("hms_invfeectl"));
	m_hms_invfeectlTbl.AddField(_T("hifc_userid"), dfText, 15); 
	m_hms_invfeectlTbl.AddField(_T("hifc_recvdate"), dfDate); 
	m_hms_invfeectlTbl.AddField(_T("hifc_examfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_drugfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_pcmsfee"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_advance"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_refund"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_remission"), dfText, 1); 
	m_hms_invfeectlTbl.AddField(_T("hifc_objects"), dfText, 15); 

}
void CHMSInvoiceSetupDialog::OnSetWindowEvents(){
	//m_wndReceiveDate.SetEvent(WE_CHANGE, _OnReceiveDateChangeFnc);
	//m_wndReceiveDate.SetEvent(WE_SETFOCUS, _OnReceiveDateSetfocusFnc);
	//m_wndReceiveDate.SetEvent(WE_KILLFOCUS, _OnReceiveDateKillfocusFnc);
	m_wndReceiveDate.SetEvent(WE_CHECKVALUE, _OnReceiveDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSInvoiceSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiveDate.GetDlgCtrlID(), m_szReceiveDate);

}
void CHMSInvoiceSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInvoiceSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInvoiceSetupDialog::SetDefaultValues(){

	m_szReceiveDate.Empty();

}
int CHMSInvoiceSetupDialog::SetMode(int nMode){
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
/*void CHMSInvoiceSetupDialog::OnReceiveDateChange(){
	
} */
/*void CHMSInvoiceSetupDialog::OnReceiveDateSetfocus(){
	
} */
/*void CHMSInvoiceSetupDialog::OnReceiveDateKillfocus(){
	
} */
int CHMSInvoiceSetupDialog::OnReceiveDateCheckValue(){
	return 0;
} 
void CHMSInvoiceSetupDialog::OnListDblClick(){
	
} 
void CHMSInvoiceSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInvoiceSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInvoiceSetupDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Serial")), 
			rs.GetValue(_T("BookNo")), 
			rs.GetValue(_T("ReceiveNo")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSInvoiceSetupDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInvoiceSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInvoiceSetupDialog::OnAddHMSInvoiceSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInvoiceSetupDialog::OnEditHMSInvoiceSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInvoiceSetupDialog::OnDeleteHMSInvoiceSetupDialog(){
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
 		OnCancelHMSInvoiceSetupDialog(); 
 	}
	return 0;
}
int CHMSInvoiceSetupDialog::OnSaveHMSInvoiceSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_invfeectlTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_invfeectlTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSInvoiceSetupDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInvoiceSetupDialog::OnCancelHMSInvoiceSetupDialog(){
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
int CHMSInvoiceSetupDialog::OnHMSInvoiceSetupDialogListLoadData(){
	return 0;
}
