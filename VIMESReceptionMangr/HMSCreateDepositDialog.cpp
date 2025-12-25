#include "HMSCreateDepositDialog.h"
#include "MainFrm.h"
static void _OnDepositAmountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCreateDepositDialog* )pWnd)->OnDepositAmountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepositAmountSelendokFnc(CWnd *pWnd){
	((CHMSCreateDepositDialog *)pWnd)->OnDepositAmountSelendok();
}
/*static void _OnDepositAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCreateDepositDialog *)pWnd)->OnDepositAmountKillfocus();
}*/
/*static void _OnDepositAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCreateDepositDialog *)pWnd)->OnDepositAmountKillfocus();
}*/
static long _OnDepositAmountLoadDataFnc(CWnd *pWnd){
	return ((CHMSCreateDepositDialog *)pWnd)->OnDepositAmountLoadData();
}
/*static void _OnDepositAmountAddNewFnc(CWnd *pWnd){
	((CHMSCreateDepositDialog *)pWnd)->OnDepositAmountAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCreateDepositDialog *pVw = (CHMSCreateDepositDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCreateDepositDialog *pVw = (CHMSCreateDepositDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCreateDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateDepositDialog*)pWnd)->OnAddHMSCreateDepositDialog();
} 
static int _OnEditHMSCreateDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateDepositDialog*)pWnd)->OnEditHMSCreateDepositDialog();
} 
static int _OnDeleteHMSCreateDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateDepositDialog*)pWnd)->OnDeleteHMSCreateDepositDialog();
} 
static int _OnSaveHMSCreateDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateDepositDialog*)pWnd)->OnSaveHMSCreateDepositDialog();
} 
static int _OnCancelHMSCreateDepositDialogFnc(CWnd *pWnd){
	 return ((CHMSCreateDepositDialog*)pWnd)->OnCancelHMSCreateDepositDialog();
} 
CHMSCreateDepositDialog::CHMSCreateDepositDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 65;
	SetDefaultValues();
}
CHMSCreateDepositDialog::~CHMSCreateDepositDialog()
{
}
void CHMSCreateDepositDialog::OnCreateComponents()
{
	m_wndDescGroupBox.Create(this, _T("THÔNG TIN HẠN MỨC TẠM GỬI"), 5, 4, 495, 60);
	m_wndMucTamGuiLabel.Create(this, _T("Số tiền tạm gửi"), 7, 29, 106, 59);
	m_wndDepositAmount.Create(this,111, 29, 495, 59); 
	m_wndSave.Create(this, _T("Save"), 330, 65, 410, 90);
	m_wndCancel.Create(this, _T("Cancel"), 414, 66, 494, 91);

}
void CHMSCreateDepositDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepositAmount.SetCheckValue(true);
	m_wndDepositAmount.LimitText(1024);

	m_wndDepositAmount.InsertColumn(0, _T("Mã"), CFMT_TEXT, 50);
	m_wndDepositAmount.InsertColumn(1, _T("Số tiền"), CFMT_MONEY, 100);


}
void CHMSCreateDepositDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepositAmount.SetEvent(WE_SELENDOK, _OnDepositAmountSelendokFnc);
	//m_wndDepositAmount.SetEvent(WE_SETFOCUS, _OnDepositAmountSetfocusFnc);
	//m_wndDepositAmount.SetEvent(WE_KILLFOCUS, _OnDepositAmountKillfocusFnc);
	m_wndDepositAmount.SetEvent(WE_SELCHANGE, _OnDepositAmountSelectChangeFnc);
	m_wndDepositAmount.SetEvent(WE_LOADDATA, _OnDepositAmountLoadDataFnc);
	//m_wndDepositAmount.SetEvent(WE_ADDNEW, _OnDepositAmountAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	if (pMF->m_szDept == _T("C11BCLC"))
	{
		m_szDepositAmountKey = _T("02");
	}
	UpdateData(FALSE);
	//OnDepositAmountLoadData();
	//SetMode(VM_NONE);

}
void CHMSCreateDepositDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepositAmount.GetDlgCtrlID(), m_szDepositAmountKey);

}
void CHMSCreateDepositDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DepositAmount")] =  m_szDepositAmountKey;
	}
	else
	{
			
	m_jData[_T("DepositAmount")].GetValue(m_szDepositAmountKey);
	}

}
void CHMSCreateDepositDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCreateDepositDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCreateDepositDialog::SetDefaultValues(){

	m_szDepositAmountKey.Empty();

}
int CHMSCreateDepositDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};		

		//m_szDepositAmountKey = _T("02");
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSCreateDepositDialog::OnDepositAmountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCreateDepositDialog::OnDepositAmountSelendok(){
	 
}
/*void CHMSCreateDepositDialog::OnDepositAmountSetfocus(){
	
}*/
/*void CHMSCreateDepositDialog::OnDepositAmountKillfocus(){
	
}*/
long CHMSCreateDepositDialog::OnDepositAmountLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepositAmount.IsSearchKey() && !m_szDepositAmountKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szDepositAmountKey);
	};
	szSQL.Format(_T("SELECT ss_code as codeid, ss_desc as deposit FROM sys_sel WHERE ss_id='hms_deposit_limit' %s ORDER BY ss_code "), szWhere);
	m_wndDepositAmount.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepositAmount.AddItems
	(
			rs.GetValue(_T("codeid")), 
			rs.GetValue(_T("deposit")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSCreateDepositDialog::OnDepositAmountAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCreateDepositDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	nDepositAmount = str2long(m_wndDepositAmount.GetCurrent(1));
	//_msg(_T("%ld"), nDepositAmount);	
	UpdateData(false);
	{
	  CGuiDialog::OnOK();
	}
	
} 
void CHMSCreateDepositDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSCreateDepositDialog::OnAddHMSCreateDepositDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCreateDepositDialog::OnEditHMSCreateDepositDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCreateDepositDialog::OnDeleteHMSCreateDepositDialog(){
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
 		OnCancelHMSCreateDepositDialog();
 	}
	return 0;
}
int CHMSCreateDepositDialog::OnSaveHMSCreateDepositDialog(){
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
 		//OnHMSCreateDepositDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCreateDepositDialog::OnCancelHMSCreateDepositDialog(){
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
int CHMSCreateDepositDialog::OnHMSCreateDepositDialogListLoadData(){
	return 0;
}
