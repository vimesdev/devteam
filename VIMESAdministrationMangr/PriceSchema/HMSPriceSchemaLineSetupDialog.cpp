#include "HMSPriceSchemaLineSetupDialog.h"
#include "..\MainFrm.h"
static void _OnPriceSchemaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaLineSetupDialog* )pWnd)->OnPriceSchemaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPriceSchemaSelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnPriceSchemaSelendok();
}
/*static void _OnPriceSchemaSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnPriceSchemaKillfocus();
}*/
/*static void _OnPriceSchemaKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnPriceSchemaKillfocus();
}*/
static long _OnPriceSchemaLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnPriceSchemaLoadData();
}
/*static void _OnPriceSchemaAddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnPriceSchemaAddNew();
}*/
static void _OnExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaLineSetupDialog* )pWnd)->OnExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpenseSelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnExpenseSelendok();
}
/*static void _OnExpenseSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnExpenseKillfocus();
}*/
/*static void _OnExpenseKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnExpenseKillfocus();
}*/
static long _OnExpenseLoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnExpenseLoadData();
}
/*static void _OnExpenseAddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnExpenseAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLineSetupDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaLineSetupDialog *pVw = (CHMSPriceSchemaLineSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPriceSchemaLineSetupDialog *pVw = (CHMSPriceSchemaLineSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLineSetupDialog*)pWnd)->OnAddHMSPriceSchemaLineSetupDialog();
} 
static int _OnEditHMSPriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLineSetupDialog*)pWnd)->OnEditHMSPriceSchemaLineSetupDialog();
} 
static int _OnDeleteHMSPriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLineSetupDialog*)pWnd)->OnDeleteHMSPriceSchemaLineSetupDialog();
} 
static int _OnSaveHMSPriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLineSetupDialog*)pWnd)->OnSaveHMSPriceSchemaLineSetupDialog();
} 
static int _OnCancelHMSPriceSchemaLineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLineSetupDialog*)pWnd)->OnCancelHMSPriceSchemaLineSetupDialog();
} 
CHMSPriceSchemaLineSetupDialog::CHMSPriceSchemaLineSetupDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(nMode);
	m_nPriceSchemaLineID = 0;
	m_szTitle.Format(_T("%s expense")
		, nMode==VM_ADD?_T("Add"):_T("Edit"));
	SetWindowText(m_szTitle);
}
CHMSPriceSchemaLineSetupDialog::~CHMSPriceSchemaLineSetupDialog(){
}
void CHMSPriceSchemaLineSetupDialog::OnCreateComponents(){
	m_wndPriceSchemaLabel.Create(this, _T("Price Schema"), 5, 5, 85, 30);
	m_wndPriceSchema.Create(this,90, 5, 340, 30); 
	m_wndExpenseLabel.Create(this, _T("Expense"), 5, 35, 85, 60);
	m_wndExpense.Create(this,90, 35, 340, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 5, 65, 85, 90);
	m_wndQty.Create(this,90, 65, 170, 90); 
	m_wndAmountLabel.Create(this, _T("Amount"), 175, 65, 255, 90);
	m_wndAmount.Create(this,260, 65, 340, 90); 
	m_wndSave.Create(this, _T("Save"), 175, 95, 255, 120);
	m_wndClose.Create(this, _T("Close"), 260, 95, 340, 120);

}
void CHMSPriceSchemaLineSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPriceSchema.SetCheckValue(true);
	m_wndPriceSchema.LimitText(35);
	m_wndExpense.SetCheckValue(true);
	m_wndExpense.LimitText(35);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetReadOnly();

	m_wndPriceSchema.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPriceSchema.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndExpense.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndExpense.InsertColumn(2, _T("Type"), CFMT_TEXT, 100);
	m_wndExpense.InsertColumn(3, _T("Price"), CFMT_MONEY, 80);

}
void CHMSPriceSchemaLineSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPriceSchema.SetEvent(WE_SELENDOK, _OnPriceSchemaSelendokFnc);
	//m_wndPriceSchema.SetEvent(WE_SETFOCUS, _OnPriceSchemaSetfocusFnc);
	//m_wndPriceSchema.SetEvent(WE_KILLFOCUS, _OnPriceSchemaKillfocusFnc);
	m_wndPriceSchema.SetEvent(WE_SELCHANGE, _OnPriceSchemaSelectChangeFnc);
	m_wndPriceSchema.SetEvent(WE_LOADDATA, _OnPriceSchemaLoadDataFnc);
	//m_wndPriceSchema.SetEvent(WE_ADDNEW, _OnPriceSchemaAddNewFnc);
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
void CHMSPriceSchemaLineSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPriceSchema.GetDlgCtrlID(), m_szPriceSchemaKey);
	DDX_TextEx(pDX, m_wndExpense.GetDlgCtrlID(), m_szExpenseKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSPriceSchemaLineSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PriceSchema")] =  m_szPriceSchemaKey;
	m_jData[_T("Expense")] =  m_szExpenseKey;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Amount")] =  m_nAmount;
	}
	else
	{
			
	m_jData[_T("PriceSchema")].GetValue(m_szPriceSchemaKey);
	m_jData[_T("Expense")].GetValue(m_szExpenseKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	}

}
void CHMSPriceSchemaLineSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_price_schema_line_view") \
				_T(" WHERE psl_id = %ld"), m_nPriceSchemaLineID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("psl_schema_id"), m_szPriceSchemaKey);
		rs.GetValue(_T("psl_expense_id"), m_szExpenseKey);
		rs.GetValue(_T("psl_qty"), m_nQty);
		UpdateData(FALSE);
		OnQtyCheckValue();
	}
}
void CHMSPriceSchemaLineSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriceSchemaLineSetupDialog::SetDefaultValues(){

	m_szPriceSchemaKey.Empty();
	m_szExpenseKey.Empty();
	m_nQty=0;
	m_nAmount=0;

}
int CHMSPriceSchemaLineSetupDialog::SetMode(int nMode){
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
void CHMSPriceSchemaLineSetupDialog::OnPriceSchemaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
} 
void CHMSPriceSchemaLineSetupDialog::OnPriceSchemaSelendok(){
	 
}
/*void CHMSPriceSchemaLineSetupDialog::OnPriceSchemaSetfocus(){
	
}*/
/*void CHMSPriceSchemaLineSetupDialog::OnPriceSchemaKillfocus(){
	
}*/
long CHMSPriceSchemaLineSetupDialog::OnPriceSchemaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadPriceSchema(&m_wndPriceSchema, m_szPriceSchemaKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriceSchema.IsSearchKey() && !m_szPriceSchemaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPriceSchemaKey
};
	m_wndPriceSchema.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceSchema.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaLineSetupDialog::OnPriceSchemaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPriceSchemaLineSetupDialog::OnExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaLineSetupDialog::OnExpenseSelendok(){
	 
}
/*void CHMSPriceSchemaLineSetupDialog::OnExpenseSetfocus(){
	
}*/
/*void CHMSPriceSchemaLineSetupDialog::OnExpenseKillfocus(){
	
}*/
long CHMSPriceSchemaLineSetupDialog::OnExpenseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	if (!m_szPriceSchemaKey.IsEmpty() && GetMode() == VM_ADD)
	{
		szFilter.Format(_T(" and e_id not in (") \
						_T("  select psl_expense_id") \
						_T("  from hms_price_schema_line_view ") \
						_T("  where psl_schema_id = %ld)")
						, str2long(m_szPriceSchemaKey));
	}
	return pMF->LoadExpense(&m_wndExpense, m_szExpenseKey, szFilter);
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
/*void CHMSPriceSchemaLineSetupDialog::OnExpenseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPriceSchemaLineSetupDialog::OnQtyChange(){
	
} */
/*void CHMSPriceSchemaLineSetupDialog::OnQtySetfocus(){
	
} */
/*void CHMSPriceSchemaLineSetupDialog::OnQtyKillfocus(){
	
} */
int CHMSPriceSchemaLineSetupDialog::OnQtyCheckValue(){
	UpdateData();
	if (!m_szExpenseKey.IsEmpty())
	{
		float nPrice = str2float(m_wndExpense.GetCurrent(3));
		m_nAmount = nPrice*m_nQty;
	}
	UpdateData(FALSE);
	return 0;
} 
/*void CHMSPriceSchemaLineSetupDialog::OnAmountChange(){
	
} */
/*void CHMSPriceSchemaLineSetupDialog::OnAmountSetfocus(){
	
} */
/*void CHMSPriceSchemaLineSetupDialog::OnAmountKillfocus(){
	
} */
int CHMSPriceSchemaLineSetupDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSPriceSchemaLineSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSPriceSchemaLineSetupDialog();
} 
void CHMSPriceSchemaLineSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSPriceSchemaLineSetupDialog::OnAddHMSPriceSchemaLineSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPriceSchemaLineSetupDialog::OnEditHMSPriceSchemaLineSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriceSchemaLineSetupDialog::OnDeleteHMSPriceSchemaLineSetupDialog(){
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
 		OnCancelHMSPriceSchemaLineSetupDialog();
 	}
	return 0;
}
int CHMSPriceSchemaLineSetupDialog::OnSaveHMSPriceSchemaLineSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL.Format(_T("hms_price_schema_line_add('%s', %d, %d, %f)")
			, pMF->GetCurrentUser(), str2long(m_szPriceSchemaKey), 
			str2long(m_szExpenseKey), m_nQty);
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
		pMF->m_wndPriceSchemaFullView.OnExpenseListLoadData();
		SetMode(GetMode());
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPriceSchemaLineSetupDialog::OnCancelHMSPriceSchemaLineSetupDialog(){
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
int CHMSPriceSchemaLineSetupDialog::OnHMSPriceSchemaLineSetupDialogListLoadData(){
	return 0;
}
