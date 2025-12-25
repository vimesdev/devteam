#include "AccTaxCalculationsDialog.h"
#include "MainFrame_E10.h"
/*static void _OnUntaxesAmountChangeFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnUntaxesAmountChange();
} */
/*static void _OnUntaxesAmountSetfocusFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnUntaxesAmountSetfocus();} */ 
/*static void _OnUntaxesAmountKillfocusFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnUntaxesAmountKillfocus();
} */
static int _OnUntaxesAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCalculationsDialog *)pWnd)->OnUntaxesAmountCheckValue();
} 
static void _OnTaxRateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAccTaxCalculationsDialog* )pWnd)->OnTaxRateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTaxRateSelendokFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxRateSelendok();
}
/*static void _OnTaxRateSetfocusFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxRateKillfocus();
}*/
/*static void _OnTaxRateKillfocusFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxRateKillfocus();
}*/
static long _OnTaxRateLoadDataFnc(CWnd *pWnd){
	return ((CAccTaxCalculationsDialog *)pWnd)->OnTaxRateLoadData();
}
/*static void _OnTaxRateAddNewFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxRateAddNew();
}*/
/*static void _OnTaxAmountChangeFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxAmountChange();
} */
/*static void _OnTaxAmountSetfocusFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxAmountSetfocus();} */ 
/*static void _OnTaxAmountKillfocusFnc(CWnd *pWnd){
	((CAccTaxCalculationsDialog *)pWnd)->OnTaxAmountKillfocus();
} */
static int _OnTaxAmountCheckValueFnc(CWnd *pWnd){
	return ((CAccTaxCalculationsDialog *)pWnd)->OnTaxAmountCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CAccTaxCalculationsDialog *pVw = (CAccTaxCalculationsDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CAccTaxCalculationsDialog *pVw = (CAccTaxCalculationsDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddAccTaxCalculationsDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCalculationsDialog*)pWnd)->OnAddAccTaxCalculationsDialog();
} 
static int _OnEditAccTaxCalculationsDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCalculationsDialog*)pWnd)->OnEditAccTaxCalculationsDialog();
} 
static int _OnDeleteAccTaxCalculationsDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCalculationsDialog*)pWnd)->OnDeleteAccTaxCalculationsDialog();
} 
static int _OnSaveAccTaxCalculationsDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCalculationsDialog*)pWnd)->OnSaveAccTaxCalculationsDialog();
} 
static int _OnCancelAccTaxCalculationsDialogFnc(CWnd *pWnd){
	 return ((CAccTaxCalculationsDialog*)pWnd)->OnCancelAccTaxCalculationsDialog();
} 
CAccTaxCalculationsDialog::CAccTaxCalculationsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 260;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CAccTaxCalculationsDialog::~CAccTaxCalculationsDialog(){
}
void CAccTaxCalculationsDialog::OnCreateComponents(){
	m_wndUntaxesAmountLabel.Create(this, _T("Untaxes Amount"), 10, 30, 130, 55);
	m_wndUntaxesAmount.Create(this,135, 30, 245, 55); 
	m_wndTaxRateLabel.Create(this, _T("Tax Rate"), 10, 60, 130, 85);
	m_wndTaxCalculations.Create(this, _T("Tax Calculations"), 5, 5, 250, 120);
	m_wndTaxRate.Create(this,135, 60, 245, 85); 
	m_wndTaxAmountLabel.Create(this, _T("Tax Amount"), 10, 90, 130, 115);
	m_wndTaxAmount.Create(this,135, 90, 245, 115); 
	m_wndOK.Create(this, _T("&OK"), 85, 125, 165, 150);
	m_wndCancel.Create(this, _T("&Cancel"), 170, 125, 250, 150);

}
void CAccTaxCalculationsDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndUntaxesAmount.SetLimitText(16);
	m_wndUntaxesAmount.SetReadOnly(TRUE);
	m_wndTaxRate.SetCheckValue(true);
	m_wndTaxRate.LimitText(35);
	m_wndTaxAmount.SetLimitText(16);
	m_wndTaxAmount.SetCheckValue(true);


	m_wndTaxRate.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTaxRate.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndTaxRate.InsertColumn(2, _T("rate"), CFMT_TEXT, 0);

}
void CAccTaxCalculationsDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndUntaxesAmount.SetEvent(WE_CHANGE, _OnUntaxesAmountChangeFnc);
	//m_wndUntaxesAmount.SetEvent(WE_SETFOCUS, _OnUntaxesAmountSetfocusFnc);
	//m_wndUntaxesAmount.SetEvent(WE_KILLFOCUS, _OnUntaxesAmountKillfocusFnc);
	m_wndUntaxesAmount.SetEvent(WE_CHECKVALUE, _OnUntaxesAmountCheckValueFnc);
	m_wndTaxRate.SetEvent(WE_SELENDOK, _OnTaxRateSelendokFnc);
	//m_wndTaxRate.SetEvent(WE_SETFOCUS, _OnTaxRateSetfocusFnc);
	//m_wndTaxRate.SetEvent(WE_KILLFOCUS, _OnTaxRateKillfocusFnc);
	m_wndTaxRate.SetEvent(WE_SELCHANGE, _OnTaxRateSelectChangeFnc);
	m_wndTaxRate.SetEvent(WE_LOADDATA, _OnTaxRateLoadDataFnc);
	//m_wndTaxRate.SetEvent(WE_ADDNEW, _OnTaxRateAddNewFnc);
	//m_wndTaxAmount.SetEvent(WE_CHANGE, _OnTaxAmountChangeFnc);
	//m_wndTaxAmount.SetEvent(WE_SETFOCUS, _OnTaxAmountSetfocusFnc);
	//m_wndTaxAmount.SetEvent(WE_KILLFOCUS, _OnTaxAmountKillfocusFnc);
	m_wndTaxAmount.SetEvent(WE_CHECKVALUE, _OnTaxAmountCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	if(m_nUntaxesAmount <= 0)
	{
		m_wndUntaxesAmount.SetReadOnly(FALSE);
	}
	SetMode(VM_EDIT);

}
void CAccTaxCalculationsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndUntaxesAmount.GetDlgCtrlID(), m_nUntaxesAmount);
	DDX_TextEx(pDX, m_wndTaxRate.GetDlgCtrlID(), m_szTaxRateKey);
	DDX_Text(pDX, m_wndTaxAmount.GetDlgCtrlID(), m_nTaxAmount);

}
void CAccTaxCalculationsDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAccTaxCalculationsDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAccTaxCalculationsDialog::SetDefaultValues(){

	m_nUntaxesAmount=0;
	m_szTaxRateKey.Empty();
	m_nTaxAmount=0;

}
int CAccTaxCalculationsDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CAccTaxCalculationsDialog::OnUntaxesAmountChange(){
	
} */
/*void CAccTaxCalculationsDialog::OnUntaxesAmountSetfocus(){
	
} */
/*void CAccTaxCalculationsDialog::OnUntaxesAmountKillfocus(){
	
} */
int CAccTaxCalculationsDialog::OnUntaxesAmountCheckValue(){
	return 0;
} 
void CAccTaxCalculationsDialog::OnTaxRateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAccTaxCalculationsDialog::OnTaxRateSelendok(){
	 UpdateData(TRUE);
	 m_nTaxAmount = m_nUntaxesAmount*str2float(m_wndTaxRate.GetCurrent(2))/100.0;
	 UpdateData(FALSE);
}
/*void CAccTaxCalculationsDialog::OnTaxRateSetfocus(){
	
}*/
/*void CAccTaxCalculationsDialog::OnTaxRateKillfocus(){
	
}*/
long CAccTaxCalculationsDialog::OnTaxRateLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadTaxList(&m_wndTaxRate, m_szTaxRateKey);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTaxRate.IsSearchKey() && !m_szTaxRateKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTaxRateKey
};
	m_wndTaxRate.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaxRate.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAccTaxCalculationsDialog::OnTaxRateAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAccTaxCalculationsDialog::OnTaxAmountChange(){
	
} */
/*void CAccTaxCalculationsDialog::OnTaxAmountSetfocus(){
	
} */
/*void CAccTaxCalculationsDialog::OnTaxAmountKillfocus(){
	
} */
int CAccTaxCalculationsDialog::OnTaxAmountCheckValue(){
	return 0;
} 
void CAccTaxCalculationsDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiDialog::OnOK();
} 
void CAccTaxCalculationsDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CAccTaxCalculationsDialog::OnAddAccTaxCalculationsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAccTaxCalculationsDialog::OnEditAccTaxCalculationsDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccTaxCalculationsDialog::OnDeleteAccTaxCalculationsDialog(){
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
 		OnCancelAccTaxCalculationsDialog();
 	}
	return 0;
}
int CAccTaxCalculationsDialog::OnSaveAccTaxCalculationsDialog(){
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
 		//OnAccTaxCalculationsDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAccTaxCalculationsDialog::OnCancelAccTaxCalculationsDialog(){
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
int CAccTaxCalculationsDialog::OnAccTaxCalculationsDialogListLoadData(){
	return 0;
}
