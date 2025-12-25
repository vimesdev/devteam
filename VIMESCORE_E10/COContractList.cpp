#include "COContractList.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCOContractList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCOContractList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCOContractList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnListDeleteItem();
} 
static long _OnVoucherListLoadDataFnc(CWnd *pWnd){
	return ((CCOContractList*)pWnd)->OnVoucherListLoadData();
} 
static void _OnVoucherListDblClickFnc(CWnd *pWnd){
	((CCOContractList*)pWnd)->OnVoucherListDblClick();
} 
static void _OnVoucherListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCOContractList*)pWnd)->OnVoucherListSelectChange(nOldItem, nNewItem);
}
static int _OnVoucherListAddItemFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnVoucherListAddItem();
} 
static int _OnVoucherListEditItemFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnVoucherListEditItem();
} 
static int _OnVoucherListDeleteItemFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnVoucherListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CCOContractList *pVw = (CCOContractList *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCOContractList *pVw = (CCOContractList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCOContractList *pVw = (CCOContractList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCOContractList *pVw = (CCOContractList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddCOContractListFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnAddCOContractList();
} 
static int _OnEditCOContractListFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnEditCOContractList();
} 
static int _OnDeleteCOContractListFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnDeleteCOContractList();
} 
static int _OnSaveCOContractListFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnSaveCOContractList();
} 
static int _OnCancelCOContractListFnc(CWnd *pWnd){
	 return ((CCOContractList*)pWnd)->OnCancelCOContractList();
} 
CCOContractList::CCOContractList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCOContractList::~CCOContractList(){
}
#include "Resource.h"

void CCOContractList::OnCreateComponents(){
	m_wndVouchersList.Create(this, _T("Vouchers List"), 5, 355, 810, 590);
	m_wndContractList.Create(this, _T("Contract List"), 5, 5, 810, 350);
	m_wndList.Create(this,10, 30, 805, 345); 
	m_wndVoucherList.Create(this,10, 380, 805, 585); 
	m_wndView.Create(this, _T("&View"), 475, 595, 555, 620);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
}
void CCOContractList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Contract No"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Customer-Vendor"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Contract Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(4, _T("Contract Value"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(5, _T("Paid"), CFMT_NUMBER, 100);


	m_wndVoucherList.InsertColumn(0, _T("Voucher Type"), CFMT_TEXT, 200);
	m_wndVoucherList.InsertColumn(1, _T("Voucher No"), CFMT_TEXT, 120);
	m_wndVoucherList.InsertColumn(2, _T("Voucher Date"), CFMT_DATE, 90);
	m_wndVoucherList.InsertColumn(3, _T("Description"), CFMT_TEXT, 250);
	m_wndVoucherList.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 100);

}
void CCOContractList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	m_wndVoucherList.SetEvent(WE_SELCHANGE, _OnVoucherListSelectChangeFnc);
	m_wndVoucherList.SetEvent(WE_LOADDATA, _OnVoucherListLoadDataFnc);
	m_wndVoucherList.SetEvent(WE_DBLCLICK, _OnVoucherListDblClickFnc);
	m_wndVoucherList.AddEvent(1, _T("Add"), _OnVoucherListAddItemFnc);
	m_wndVoucherList.AddEvent(2, _T("Edit"), _OnVoucherListEditItemFnc);
	m_wndVoucherList.AddEvent(3, _T("Delete"), _OnVoucherListDeleteItemFnc, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	SetMode(VM_NONE);

}
void CCOContractList::OnDoDataExchange(CDataExchange* pDX){

}
void CCOContractList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCOContractList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CCOContractList::SetDefaultValues(){


}
int CCOContractList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CCOContractList::OnListDblClick(){
	
} 
void CCOContractList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CCOContractList::OnListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddCOContractList();
	 return 0;
} 
int CCOContractList::OnListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditCOContractList();
	 return 0;
} 
int CCOContractList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CCOContractList::OnListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ContractNo")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Customer-Vendor")), 
			rs.GetValue(_T("ContractDate")), 
			rs.GetValue(_T("ContractValue")), 
			rs.GetValue(_T("Paid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCOContractList::OnVoucherListDblClick(){
	
} 
void CCOContractList::OnVoucherListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CCOContractList::OnVoucherListAddItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

int CCOContractList::OnVoucherListEditItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

int CCOContractList::OnVoucherListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CCOContractList::OnVoucherListLoadData(){
/*
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndVoucherList.BeginLoad(); 
	m_wndVoucherList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVoucherList.AddItems(
			rs.GetValue(_T("VoucherType")), 
			rs.GetValue(_T("VoucherNo")), 
			rs.GetValue(_T("VoucherDate")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndVoucherList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCOContractList::OnViewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CCOContractList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CCOContractList::OnAddCOContractList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCOContractList::OnEditCOContractList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCOContractList::OnDeleteCOContractList(){
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
 		OnCancelCOContractList();
 	}
	return 0;
}
int CCOContractList::OnSaveCOContractList(){
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
 		//OnCOContractListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCOContractList::OnCancelCOContractList(){
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
int CCOContractList::OnCOContractListListLoadData(){
	return 0;
}
