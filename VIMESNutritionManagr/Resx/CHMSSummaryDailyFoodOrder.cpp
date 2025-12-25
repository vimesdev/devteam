#include "CHMSSummaryDailyFoodOrder.h"
#include "MainFrm.h"
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSSummaryDailyFoodOrder *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSSummaryDailyFoodOrder *)pWnd)->OnIssueDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSummaryDailyFoodOrder* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CCHMSSummaryDailyFoodOrder *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCHMSSummaryDailyFoodOrder *pVw = (CCHMSSummaryDailyFoodOrder *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CCHMSSummaryDailyFoodOrder *pVw = (CCHMSSummaryDailyFoodOrder *)pWnd;
	pVw->OnRefreshSelect();
} 
static void _OnFoodTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSummaryDailyFoodOrder* )pWnd)->OnFoodTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFoodTypeSelendokFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnFoodTypeSelendok();
}
/*static void _OnFoodTypeSetfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnFoodTypeKillfocus();
}*/
/*static void _OnFoodTypeKillfocusFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnFoodTypeKillfocus();
}*/
static long _OnFoodTypeLoadDataFnc(CWnd *pWnd){
	return ((CCHMSSummaryDailyFoodOrder *)pWnd)->OnFoodTypeLoadData();
}
/*static void _OnFoodTypeAddNewFnc(CWnd *pWnd){
	((CCHMSSummaryDailyFoodOrder *)pWnd)->OnFoodTypeAddNew();
}*/
static int _OnAddCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnAddCHMSSummaryDailyFoodOrder();
} 
static int _OnEditCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnEditCHMSSummaryDailyFoodOrder();
} 
static int _OnDeleteCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnDeleteCHMSSummaryDailyFoodOrder();
} 
static int _OnSaveCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnSaveCHMSSummaryDailyFoodOrder();
} 
static int _OnCancelCHMSSummaryDailyFoodOrderFnc(CWnd *pWnd){
	 return ((CCHMSSummaryDailyFoodOrder*)pWnd)->OnCancelCHMSSummaryDailyFoodOrder();
} 
CCHMSSummaryDailyFoodOrder::CCHMSSummaryDailyFoodOrder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 635;
	SetDefaultValues();
}
CCHMSSummaryDailyFoodOrder::~CCHMSSummaryDailyFoodOrder(){
}
void CCHMSSummaryDailyFoodOrder::OnCreateComponents(){
	m_wndOrderInformation.Create(this, _T("Order Information"), 5, 5, 1020, 60);
	m_wndGroupListDrug.Create(this, _T("Food Type List"), 5, 65, 1020, 625);
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 10, 30, 100, 55);
	m_wndOrderDate.Create(this,105, 30, 195, 55); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 200, 30, 290, 55);
	m_wndIssueDate.Create(this,295, 30, 385, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 390, 30, 480, 55);
	m_wndStatus.Create(this,485, 30, 625, 55); 
	m_wndPrint.Create(this, _T("&Preview"), 930, 30, 1015, 55);
	m_wndOrderList.Create(this,10, 90, 1015, 620); 
	m_wndRefresh.Create(this, _T("Refresh"), 845, 30, 925, 55);
	m_wndFoodTypeLabel.Create(this, _T("Food Type"), 630, 30, 710, 55);
	m_wndFoodType.Create(this,715, 30, 840, 55); 

}
void CCHMSSummaryDailyFoodOrder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndIssueDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndIssueDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndFoodType.SetCheckValue(true);
	m_wndFoodType.LimitText(35);






	m_wndFoodType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFoodType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CCHMSSummaryDailyFoodOrder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndIssueDate.SetEvent(WE_CHANGE, _OnIssueDateChangeFnc);
	//m_wndIssueDate.SetEvent(WE_SETFOCUS, _OnIssueDateSetfocusFnc);
	//m_wndIssueDate.SetEvent(WE_KILLFOCUS, _OnIssueDateKillfocusFnc);
	m_wndIssueDate.SetEvent(WE_CHECKVALUE, _OnIssueDateCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndFoodType.SetEvent(WE_SELENDOK, _OnFoodTypeSelendokFnc);
	//m_wndFoodType.SetEvent(WE_SETFOCUS, _OnFoodTypeSetfocusFnc);
	//m_wndFoodType.SetEvent(WE_KILLFOCUS, _OnFoodTypeKillfocusFnc);
	m_wndFoodType.SetEvent(WE_SELCHANGE, _OnFoodTypeSelectChangeFnc);
	m_wndFoodType.SetEvent(WE_LOADDATA, _OnFoodTypeLoadDataFnc);
	//m_wndFoodType.SetEvent(WE_ADDNEW, _OnFoodTypeAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSSummaryDailyFoodOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSSummaryDailyFoodOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSSummaryDailyFoodOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSSummaryDailyFoodOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSSummaryDailyFoodOrderFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCHMSSummaryDailyFoodOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndFoodType.GetDlgCtrlID(), m_szFoodTypeKey);

}
void CCHMSSummaryDailyFoodOrder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSSummaryDailyFoodOrder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSSummaryDailyFoodOrder::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szIssueDate.Empty();
	m_szStatusKey.Empty();
	m_szFoodTypeKey.Empty();

}
int CCHMSSummaryDailyFoodOrder::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CCHMSSummaryDailyFoodOrder::OnOrderDateChange(){
	
} */
/*void CCHMSSummaryDailyFoodOrder::OnOrderDateSetfocus(){
	
} */
/*void CCHMSSummaryDailyFoodOrder::OnOrderDateKillfocus(){
	
} */
int CCHMSSummaryDailyFoodOrder::OnOrderDateCheckValue(){
	return 0;
} 
/*void CCHMSSummaryDailyFoodOrder::OnIssueDateChange(){
	
} */
/*void CCHMSSummaryDailyFoodOrder::OnIssueDateSetfocus(){
	
} */
/*void CCHMSSummaryDailyFoodOrder::OnIssueDateKillfocus(){
	
} */
int CCHMSSummaryDailyFoodOrder::OnIssueDateCheckValue(){
	return 0;
} 
void CCHMSSummaryDailyFoodOrder::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSummaryDailyFoodOrder::OnStatusSelendok(){
	 
}
/*void CCHMSSummaryDailyFoodOrder::OnStatusSetfocus(){
	
}*/
/*void CCHMSSummaryDailyFoodOrder::OnStatusKillfocus(){
	
}*/
long CCHMSSummaryDailyFoodOrder::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSummaryDailyFoodOrder::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSummaryDailyFoodOrder::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSummaryDailyFoodOrder::OnOrderListDblClick(){
	
} 
void CCHMSSummaryDailyFoodOrder::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSSummaryDailyFoodOrder::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSSummaryDailyFoodOrder::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSSummaryDailyFoodOrder::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSummaryDailyFoodOrder::OnFoodTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSummaryDailyFoodOrder::OnFoodTypeSelendok(){
	 
}
/*void CCHMSSummaryDailyFoodOrder::OnFoodTypeSetfocus(){
	
}*/
/*void CCHMSSummaryDailyFoodOrder::OnFoodTypeKillfocus(){
	
}*/
long CCHMSSummaryDailyFoodOrder::OnFoodTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFoodType.IsSearchKey() && !m_szFoodTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFoodTypeKey
};
	m_wndFoodType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFoodType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSummaryDailyFoodOrder::OnFoodTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CCHMSSummaryDailyFoodOrder::OnAddCHMSSummaryDailyFoodOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSSummaryDailyFoodOrder::OnEditCHMSSummaryDailyFoodOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSSummaryDailyFoodOrder::OnDeleteCHMSSummaryDailyFoodOrder(){
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
 		OnCancelCHMSSummaryDailyFoodOrder();
 	}
	return 0;
}
int CCHMSSummaryDailyFoodOrder::OnSaveCHMSSummaryDailyFoodOrder(){
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
 		//OnCHMSSummaryDailyFoodOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSSummaryDailyFoodOrder::OnCancelCHMSSummaryDailyFoodOrder(){
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
int CCHMSSummaryDailyFoodOrder::OnCHMSSummaryDailyFoodOrderListLoadData(){
	return 0;
}
