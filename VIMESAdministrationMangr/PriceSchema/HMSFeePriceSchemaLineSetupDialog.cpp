#include "HMSFeePriceSchemaLineSetupDialog.h"
#include "..\MainFrm.h"
static void _OnFeeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaLineSetupDialog* )pWnd)->OnFeeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnFeeSelendok();
}
/*static void _OnFeeSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnFeeKillfocus();
}*/
/*static void _OnFeeKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnFeeKillfocus();
}*/
static long _OnFeeLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnFeeLoadData();
}
/*static void _OnFeeAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnFeeAddNew();
}*/
static void _OnExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaLineSetupDialog* )pWnd)->OnExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpenseSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnExpenseSelendok();
}
/*static void _OnExpenseSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnExpenseKillfocus();
}*/
/*static void _OnExpenseKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnExpenseKillfocus();
}*/
static long _OnExpenseLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnExpenseLoadData();
}
/*static void _OnExpenseAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnExpenseAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaLineSetupDialog *pVw = (CHMSFeePriceSchemaLineSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaLineSetupDialog *pVw = (CHMSFeePriceSchemaLineSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeePriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupDialog*)pWnd)->OnAddHMSFeePriceSchemaLineSetupDialog();
} 
static int _OnEditHMSFeePriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupDialog*)pWnd)->OnEditHMSFeePriceSchemaLineSetupDialog();
} 
static int _OnDeleteHMSFeePriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupDialog*)pWnd)->OnDeleteHMSFeePriceSchemaLineSetupDialog();
} 
static int _OnSaveHMSFeePriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupDialog*)pWnd)->OnSaveHMSFeePriceSchemaLineSetupDialog();
} 
static int _OnCancelHMSFeePriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupDialog*)pWnd)->OnCancelHMSFeePriceSchemaLineSetupDialog();
} 
CHMSFeePriceSchemaLineSetupDialog::CHMSFeePriceSchemaLineSetupDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(nMode);
	m_szTitle.Format(_T("%s expense")
		, nMode==VM_ADD?_T("Add"):_T("Edit"));
	SetWindowText(m_szTitle);
}
CHMSFeePriceSchemaLineSetupDialog::~CHMSFeePriceSchemaLineSetupDialog(){
}
void CHMSFeePriceSchemaLineSetupDialog::OnCreateComponents(){
	m_wndFeeLabel.Create(this, _T("Fee"), 5, 5, 85, 30);
	m_wndFee.Create(this,90, 5, 340, 30); 
	m_wndExpenseLabel.Create(this, _T("Expense"), 5, 35, 85, 60);
	m_wndExpense.Create(this,90, 35, 340, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 5, 65, 85, 90);
	m_wndQty.Create(this,90, 65, 170, 90); 
	m_wndAmountLabel.Create(this, _T("Amount"), 175, 65, 255, 90);
	m_wndAmount.Create(this,260, 65, 340, 90); 
	m_wndSave.Create(this, _T("Save"), 175, 95, 255, 120);
	m_wndClose.Create(this, _T("Close"), 260, 95, 340, 120);

}
void CHMSFeePriceSchemaLineSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFee.SetCheckValue(true);
	m_wndFee.LimitText(35);
	m_wndExpense.SetCheckValue(true);
	m_wndExpense.LimitText(35);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetReadOnly();
	m_wndFee.SetReadOnly();

	m_wndFee.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFee.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndExpense.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndExpense.InsertColumn(2, _T("Type"), CFMT_TEXT, 150);
	m_wndExpense.InsertColumn(3, _T("Price"), CFMT_MONEY, 150);

}
void CHMSFeePriceSchemaLineSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFee.SetEvent(WE_SELENDOK, _OnFeeSelendokFnc);
	//m_wndFee.SetEvent(WE_SETFOCUS, _OnFeeSetfocusFnc);
	//m_wndFee.SetEvent(WE_KILLFOCUS, _OnFeeKillfocusFnc);
	m_wndFee.SetEvent(WE_SELCHANGE, _OnFeeSelectChangeFnc);
	m_wndFee.SetEvent(WE_LOADDATA, _OnFeeLoadDataFnc);
	//m_wndFee.SetEvent(WE_ADDNEW, _OnFeeAddNewFnc);
	m_wndExpense.SetEvent(WE_SELENDOK, _OnExpenseSelendokFnc);
	//m_wndExpense.SetEvent(WE_SETFOCUS, _OnExpenseSetfocusFnc);
	//m_wndExpense.SetEvent(WE_KILLFOCUS, _OnExpenseKillfocusFnc);
	m_wndExpense.SetEvent(WE_SELCHANGE, _OnExpenseSelectChangeFnc);
	m_wndExpense.SetEvent(WE_LOADDATA, _OnExpenseLoadDataFnc);
	//m_wndExpense.SetEvent(WE_ADDNEW, _OnExpenseAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(GetMode());
}
void CHMSFeePriceSchemaLineSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFee.GetDlgCtrlID(), m_szFeeKey);
	DDX_TextEx(pDX, m_wndExpense.GetDlgCtrlID(), m_szExpenseKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSFeePriceSchemaLineSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Fee")] =  m_szFeeKey;
	m_jData[_T("Expense")] =  m_szExpenseKey;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Amount")] =  m_nAmount;
	}
	else
	{
			
	m_jData[_T("Fee")].GetValue(m_szFeeKey);
	m_jData[_T("Expense")].GetValue(m_szExpenseKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	}

}
void CHMSFeePriceSchemaLineSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT psl_expense_id as expense_id, ") \
				_T("	psl_qty as qty") \
				_T(" FROM hms_price_schema_line_view") \
				_T(" WHERE psl_id = %ld"), m_nPriceSchemaLineID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("expense_id"), m_szExpenseKey);
		rs.GetValue(_T("qty"), m_nQty);
		UpdateData(FALSE);
	}
}
void CHMSFeePriceSchemaLineSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeePriceSchemaLineSetupDialog::SetDefaultValues(){

	//m_szFeeKey.Empty();
	m_szExpenseKey.Empty();
	m_nQty=0;
	m_nAmount=0;

}
int CHMSFeePriceSchemaLineSetupDialog::SetMode(int nMode){
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
			m_wndFee.EnableWindow(FALSE);
 			break;
 		case VM_EDIT: 
			EnableControls(FALSE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndQty.EnableWindow();
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
		EnableButtons(FALSE, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSFeePriceSchemaLineSetupDialog::OnFeeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaLineSetupDialog::OnFeeSelendok(){
	 
}
/*void CHMSFeePriceSchemaLineSetupDialog::OnFeeSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaLineSetupDialog::OnFeeKillfocus(){
	
}*/
long CHMSFeePriceSchemaLineSetupDialog::OnFeeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadFeeList(&m_wndFee, m_szFeeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFee.IsSearchKey() && !m_szFeeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFeeKey
};
	m_wndFee.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFee.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeePriceSchemaLineSetupDialog::OnFeeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFeePriceSchemaLineSetupDialog::OnExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaLineSetupDialog::OnExpenseSelendok(){
	 
}
/*void CHMSFeePriceSchemaLineSetupDialog::OnExpenseSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaLineSetupDialog::OnExpenseKillfocus(){
	
}*/
long CHMSFeePriceSchemaLineSetupDialog::OnExpenseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadExpense(&m_wndExpense, m_szExpenseKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndExpense.IsSearchKey() && !m_szExpenseKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szExpenseKey
};
	m_wndExpense.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExpense.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFeePriceSchemaLineSetupDialog::OnExpenseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFeePriceSchemaLineSetupDialog::OnQtyChange(){
	
} */
/*void CHMSFeePriceSchemaLineSetupDialog::OnQtySetfocus(){
	
} */
/*void CHMSFeePriceSchemaLineSetupDialog::OnQtyKillfocus(){
	
} */
int CHMSFeePriceSchemaLineSetupDialog::OnQtyCheckValue(){
	UpdateData();
	if (!m_szExpenseKey.IsEmpty())
	{
		float nPrice = str2float(m_wndExpense.GetCurrent(3));
		m_nAmount = nPrice*m_nQty;
	}
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSFeePriceSchemaLineSetupDialog::OnAmountChange(){
	
} */
/*void CHMSFeePriceSchemaLineSetupDialog::OnAmountSetfocus(){
	
} */
/*void CHMSFeePriceSchemaLineSetupDialog::OnAmountKillfocus(){
	
} */
int CHMSFeePriceSchemaLineSetupDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSFeePriceSchemaLineSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFeePriceSchemaLineSetupDialog();
} 
void CHMSFeePriceSchemaLineSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSFeePriceSchemaLineSetupDialog::OnAddHMSFeePriceSchemaLineSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeePriceSchemaLineSetupDialog::OnEditHMSFeePriceSchemaLineSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeePriceSchemaLineSetupDialog::OnDeleteHMSFeePriceSchemaLineSetupDialog(){
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
 		OnCancelHMSFeePriceSchemaLineSetupDialog();
 	}
	return 0;
}
int CHMSFeePriceSchemaLineSetupDialog::OnSaveHMSFeePriceSchemaLineSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("hms_fee_price_schema_addline('%s','%s',%ld,%f)")
			, pMF->GetCurrentUser(),m_szFeeKey, str2long(m_szExpenseKey)
			,m_nQty);
 	}
 	else if(GetMode() == VM_EDIT){
 		szSQL.Format(_T("hms_price_schema_line_edit('%s',%ld,%f)")
			, pMF->GetCurrentUser(), m_nPriceSchemaLineID, m_nQty);
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		if (GetMode() == VM_EDIT)
		{
			OnOK();
		}
		pMF->m_wndFeePriceSchemaView.OnExpenseListLoadData();
		pMF->m_wndFeePriceSchemaView.OnPendingExpenseListLoadData();
		if (GetMode() == VM_ADD)
		{
			/*
			pMF->m_wndFeePriceSchemaView.OnPendingListLoadData();
			pMF->m_wndFeePriceSchemaView.OnFeeListLoadData();
			*/
		}
		SetMode(VM_ADD);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeePriceSchemaLineSetupDialog::OnCancelHMSFeePriceSchemaLineSetupDialog(){
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
