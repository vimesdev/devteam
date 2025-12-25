#include "HMSFeePriceSchemaLineSetupV3Dialog.h"
#include "../MainFrm.h"
static void _OnExpenseSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFeePriceSchemaLineSetupV3Dialog* )pWnd)->OnExpenseSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExpenseSelendokFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnExpenseSelendok();
}
/*static void _OnExpenseSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnExpenseKillfocus();
}*/
/*static void _OnExpenseKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnExpenseKillfocus();
}*/
static long _OnExpenseLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnExpenseLoadData();
}
/*static void _OnExpenseAddNewFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnExpenseAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnQtyCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaLineSetupV3Dialog *pVw = (CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaLineSetupV3Dialog *pVw = (CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSFeePriceSchemaLineSetupV3Dialog *pVw = (CHMSFeePriceSchemaLineSetupV3Dialog *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnList2LoadDataFnc(CWnd *pWnd){
	return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnList2LoadData();
} 
static void _OnList2DblClickFnc(CWnd *pWnd){
	((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnList2DblClick();
} 
static void _OnList2SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnList2SelectChange(nOldItem, nNewItem);
} 
static int _OnList2DeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnList2DeleteItem();
} 
static int _OnAddHMSFeePriceSchemaLineSetupV3DialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnAddHMSFeePriceSchemaLineSetupV3Dialog();
} 
static int _OnEditHMSFeePriceSchemaLineSetupV3DialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnEditHMSFeePriceSchemaLineSetupV3Dialog();
} 
static int _OnDeleteHMSFeePriceSchemaLineSetupV3DialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnDeleteHMSFeePriceSchemaLineSetupV3Dialog();
} 
static int _OnSaveHMSFeePriceSchemaLineSetupV3DialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnSaveHMSFeePriceSchemaLineSetupV3Dialog();
} 
static int _OnCancelHMSFeePriceSchemaLineSetupV3DialogFnc(CWnd *pWnd){
	 return ((CHMSFeePriceSchemaLineSetupV3Dialog*)pWnd)->OnCancelHMSFeePriceSchemaLineSetupV3Dialog();
} 
CHMSFeePriceSchemaLineSetupV3Dialog::CHMSFeePriceSchemaLineSetupV3Dialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CHMSFeePriceSchemaLineSetupV3Dialog::~CHMSFeePriceSchemaLineSetupV3Dialog(){
}
void CHMSFeePriceSchemaLineSetupV3Dialog::OnCreateComponents(){
	m_wndGroup.Create(this, _T("Group"), 5, 5, 515, 280);
	m_wndGroup2.Create(this, _T("Group 2"), 5, 285, 515, 515);
	m_wndExpenseLabel.Create(this, _T("Expense"), 10, 455, 90, 480);
	m_wndExpense.Create(this,95, 455, 340, 480); 
	m_wndQtyLabel.Create(this, _T("Qty"), 345, 455, 425, 480);
	m_wndQty.Create(this,430, 455, 510, 480); 
	m_wndSave.Create(this, _T("Save"), 344, 486, 424, 511);
	m_wndClose.Create(this, _T("Close"), 429, 486, 509, 511);
	m_wndList.Create(this,10, 310, 510, 450); 
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 90, 55);
	m_wndSearch.Create(this,95, 30, 255, 55); 
	m_wndFind.Create(this, _T("&Find"), 260, 31, 340, 56);
	m_wndList2.Create(this,10, 60, 510, 275); 

}
void CHMSFeePriceSchemaLineSetupV3Dialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExpense.SetCheckValue(true);
	m_wndExpense.LimitText(35);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);


	m_wndExpense.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExpense.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(3, _T("Price"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 100);



}
void CHMSFeePriceSchemaLineSetupV3Dialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList2.SetEvent(WE_SELCHANGE, _OnList2SelectChangeFnc);
	m_wndList2.SetEvent(WE_LOADDATA, _OnList2LoadDataFnc);
	m_wndList2.SetEvent(WE_DBLCLICK, _OnList2DblClickFnc);
	m_wndList2.AddEvent(1, _T("Delete"), _OnList2DeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CHMSFeePriceSchemaLineSetupV3Dialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndExpense.GetDlgCtrlID(), m_szExpenseKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CHMSFeePriceSchemaLineSetupV3Dialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Expense")] =  m_szExpenseKey;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Search")] =  m_szSearch;
	}
	else
	{
			
	m_jData[_T("Expense")].GetValue(m_szExpenseKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Search")].GetValue(m_szSearch);
	}

}
void CHMSFeePriceSchemaLineSetupV3Dialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeePriceSchemaLineSetupV3Dialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeePriceSchemaLineSetupV3Dialog::SetDefaultValues(){

	m_szExpenseKey.Empty();
	m_nQty=0;
	m_szSearch.Empty();

}
int CHMSFeePriceSchemaLineSetupV3Dialog::SetMode(int nMode){
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
void CHMSFeePriceSchemaLineSetupV3Dialog::OnExpenseSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnExpenseSelendok(){
	 
}
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnExpenseSetfocus(){
	
}*/
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnExpenseKillfocus(){
	
}*/
long CHMSFeePriceSchemaLineSetupV3Dialog::OnExpenseLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnExpenseAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnQtyChange(){
	
} */
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnQtySetfocus(){
	
} */
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnQtyKillfocus(){
	
} */
int CHMSFeePriceSchemaLineSetupV3Dialog::OnQtyCheckValue(){
	return 0;
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnListDblClick(){
	
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeePriceSchemaLineSetupV3Dialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeePriceSchemaLineSetupV3Dialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnSearchChange(){
	
} */
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnSearchSetfocus(){
	
} */
/*void CHMSFeePriceSchemaLineSetupV3Dialog::OnSearchKillfocus(){
	
} */
int CHMSFeePriceSchemaLineSetupV3Dialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnList2DblClick(){
	
} 
void CHMSFeePriceSchemaLineSetupV3Dialog::OnList2SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeePriceSchemaLineSetupV3Dialog::OnList2DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeePriceSchemaLineSetupV3Dialog::OnList2LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList2.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList2.AddItems(
		rs.MoveNext();
	}
	m_wndList2.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSFeePriceSchemaLineSetupV3Dialog::OnAddHMSFeePriceSchemaLineSetupV3Dialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeePriceSchemaLineSetupV3Dialog::OnEditHMSFeePriceSchemaLineSetupV3Dialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeePriceSchemaLineSetupV3Dialog::OnDeleteHMSFeePriceSchemaLineSetupV3Dialog(){
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
 		OnCancelHMSFeePriceSchemaLineSetupV3Dialog();
 	}
	return 0;
}
int CHMSFeePriceSchemaLineSetupV3Dialog::OnSaveHMSFeePriceSchemaLineSetupV3Dialog(){
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
 		//OnHMSFeePriceSchemaLineSetupV3DialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeePriceSchemaLineSetupV3Dialog::OnCancelHMSFeePriceSchemaLineSetupV3Dialog(){
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
int CHMSFeePriceSchemaLineSetupV3Dialog::OnHMSFeePriceSchemaLineSetupV3DialogListLoadData(){
	return 0;
}
