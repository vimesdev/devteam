#include "FilterOption.h"
#include "MainFrame_E10.h"
static void _OnFilterBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFilterOption* )pWnd)->OnFilterBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFilterBySelendokFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFilterBySelendok();
}
/*static void _OnFilterBySetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFilterByKillfocus();
}*/
/*static void _OnFilterByKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFilterByKillfocus();
}*/
static long _OnFilterByLoadDataFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnFilterByLoadData();
}
/*static void _OnFilterByAddNewFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFilterByAddNew();
}*/
static void _OnOperatorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFilterOption* )pWnd)->OnOperatorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperatorSelendokFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnOperatorSelendok();
}
/*static void _OnOperatorSetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnOperatorKillfocus();
}*/
/*static void _OnOperatorKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnOperatorKillfocus();
}*/
static long _OnOperatorLoadDataFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnOperatorLoadData();
}
/*static void _OnOperatorAddNewFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnOperatorAddNew();
}*/
static void _OnGroupBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFilterOption* )pWnd)->OnGroupBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupBySelendokFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnGroupBySelendok();
}
/*static void _OnGroupBySetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnGroupByKillfocus();
}*/
/*static void _OnGroupByKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnGroupByKillfocus();
}*/
static long _OnGroupByLoadDataFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnGroupByLoadData();
}
/*static void _OnGroupByAddNewFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnGroupByAddNew();
}*/
static void _OnSortBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFilterOption* )pWnd)->OnSortBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSortBySelendokFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortBySelendok();
}
/*static void _OnSortBySetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortByKillfocus();
}*/
/*static void _OnSortByKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortByKillfocus();
}*/
static long _OnSortByLoadDataFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnSortByLoadData();
}
/*static void _OnSortByAddNewFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortByAddNew();
}*/
static void _OnSortDirectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFilterOption* )pWnd)->OnSortDirectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSortDirectionSelendokFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortDirectionSelendok();
}
/*static void _OnSortDirectionSetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortDirectionKillfocus();
}*/
/*static void _OnSortDirectionKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortDirectionKillfocus();
}*/
static long _OnSortDirectionLoadDataFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnSortDirectionLoadData();
}
/*static void _OnSortDirectionAddNewFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnSortDirectionAddNew();
}*/
static void _OnDataPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFilterOption* )pWnd)->OnDataPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDataPeriodSelendokFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnDataPeriodSelendok();
}
/*static void _OnDataPeriodSetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnDataPeriodKillfocus();
}*/
/*static void _OnDataPeriodKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnDataPeriodKillfocus();
}*/
static long _OnDataPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnDataPeriodLoadData();
}
/*static void _OnDataPeriodAddNewFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnDataPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFilterOption *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFilterOption *)pWnd)->OnToDateCheckValue();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CFilterOption *pVw = (CFilterOption *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnDefaultSelectFnc(CWnd *pWnd){
	CFilterOption *pVw = (CFilterOption *)pWnd;
	pVw->OnDefaultSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CFilterOption *pVw = (CFilterOption *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFilterOption *pVw = (CFilterOption *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFilterOptionFnc(CWnd *pWnd){
	 return ((CFilterOption*)pWnd)->OnAddFilterOption();
} 
static int _OnEditFilterOptionFnc(CWnd *pWnd){
	 return ((CFilterOption*)pWnd)->OnEditFilterOption();
} 
static int _OnDeleteFilterOptionFnc(CWnd *pWnd){
	 return ((CFilterOption*)pWnd)->OnDeleteFilterOption();
} 
static int _OnSaveFilterOptionFnc(CWnd *pWnd){
	 return ((CFilterOption*)pWnd)->OnSaveFilterOption();
} 
static int _OnCancelFilterOptionFnc(CWnd *pWnd){
	 return ((CFilterOption*)pWnd)->OnCancelFilterOption();
} 
CFilterOption::CFilterOption(CWnd* pParent):
	CGuiPopup(pParent)
{

	m_nDlgWidth = 435;
	m_nDlgHeight = 275;
	SetDefaultValues();
}
CFilterOption::~CFilterOption(){
}
void CFilterOption::OnCreateComponents(){
	m_wndFilterOption.Create(this, _T("Filter Option"), 5, 5, 430, 240);
	m_wndFilterByLabel.Create(this, _T("Filter By"), 10, 29, 110, 54);
	m_wndFilterBy.Create(this,115, 29, 425, 54); 
	m_wndOperatorLabel.Create(this, _T("Operator"), 10, 59, 110, 84);
	m_wndOperator.Create(this,115, 59, 425, 84); 
	m_wndGroupByLabel.Create(this, _T("Group By"), 10, 89, 110, 114);
	m_wndGroupBy.Create(this,115, 89, 425, 114); 
	m_wndSortByLabel.Create(this, _T("Sort By"), 10, 119, 110, 144);
	m_wndSortBy.Create(this,115, 119, 425, 144); 
	m_wndSortDirectionLabel.Create(this, _T("Sort Direction"), 10, 149, 110, 174);
	m_wndSortDirection.Create(this,115, 149, 425, 174); 
	m_wndDataPeriodLabel.Create(this, _T("Data Period"), 10, 179, 110, 204);
	m_wndDataPeriod.Create(this,115, 179, 425, 204); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 209, 110, 234);
	m_wndFromDate.Create(this,115, 209, 215, 234); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 209, 320, 234);
	m_wndToDate.Create(this,325, 209, 425, 234); 
	m_wndClear.Create(this, _T("Clear"), 5, 245, 85, 270);
	m_wndDefault.Create(this, _T("&Default"), 180, 245, 260, 270);
	m_wndApply.Create(this, _T("&Apply"), 265, 245, 345, 270);
	m_wndClose.Create(this, _T("&Close"), 350, 245, 430, 270);

}
void CFilterOption::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFilterBy.SetCheckValue(true);
	m_wndFilterBy.LimitText(35);
	m_wndOperator.SetCheckValue(true);
	m_wndOperator.LimitText(35);
	m_wndGroupBy.SetCheckValue(true);
	m_wndGroupBy.LimitText(35);
	m_wndSortBy.SetCheckValue(true);
	m_wndSortBy.LimitText(35);
	m_wndSortDirection.SetCheckValue(true);
	m_wndSortDirection.LimitText(35);
	m_wndDataPeriod.SetCheckValue(true);
	m_wndDataPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndFilterBy.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFilterBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOperator.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOperator.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndGroupBy.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroupBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSortBy.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSortBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndSortDirection.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSortDirection.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDataPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDataPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFilterOption::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFilterBy.SetEvent(WE_SELENDOK, _OnFilterBySelendokFnc);
	//m_wndFilterBy.SetEvent(WE_SETFOCUS, _OnFilterBySetfocusFnc);
	//m_wndFilterBy.SetEvent(WE_KILLFOCUS, _OnFilterByKillfocusFnc);
	m_wndFilterBy.SetEvent(WE_SELCHANGE, _OnFilterBySelectChangeFnc);
	m_wndFilterBy.SetEvent(WE_LOADDATA, _OnFilterByLoadDataFnc);
	//m_wndFilterBy.SetEvent(WE_ADDNEW, _OnFilterByAddNewFnc);
	m_wndOperator.SetEvent(WE_SELENDOK, _OnOperatorSelendokFnc);
	//m_wndOperator.SetEvent(WE_SETFOCUS, _OnOperatorSetfocusFnc);
	//m_wndOperator.SetEvent(WE_KILLFOCUS, _OnOperatorKillfocusFnc);
	m_wndOperator.SetEvent(WE_SELCHANGE, _OnOperatorSelectChangeFnc);
	m_wndOperator.SetEvent(WE_LOADDATA, _OnOperatorLoadDataFnc);
	//m_wndOperator.SetEvent(WE_ADDNEW, _OnOperatorAddNewFnc);
	m_wndGroupBy.SetEvent(WE_SELENDOK, _OnGroupBySelendokFnc);
	//m_wndGroupBy.SetEvent(WE_SETFOCUS, _OnGroupBySetfocusFnc);
	//m_wndGroupBy.SetEvent(WE_KILLFOCUS, _OnGroupByKillfocusFnc);
	m_wndGroupBy.SetEvent(WE_SELCHANGE, _OnGroupBySelectChangeFnc);
	m_wndGroupBy.SetEvent(WE_LOADDATA, _OnGroupByLoadDataFnc);
	//m_wndGroupBy.SetEvent(WE_ADDNEW, _OnGroupByAddNewFnc);
	m_wndSortBy.SetEvent(WE_SELENDOK, _OnSortBySelendokFnc);
	//m_wndSortBy.SetEvent(WE_SETFOCUS, _OnSortBySetfocusFnc);
	//m_wndSortBy.SetEvent(WE_KILLFOCUS, _OnSortByKillfocusFnc);
	m_wndSortBy.SetEvent(WE_SELCHANGE, _OnSortBySelectChangeFnc);
	m_wndSortBy.SetEvent(WE_LOADDATA, _OnSortByLoadDataFnc);
	//m_wndSortBy.SetEvent(WE_ADDNEW, _OnSortByAddNewFnc);
	m_wndSortDirection.SetEvent(WE_SELENDOK, _OnSortDirectionSelendokFnc);
	//m_wndSortDirection.SetEvent(WE_SETFOCUS, _OnSortDirectionSetfocusFnc);
	//m_wndSortDirection.SetEvent(WE_KILLFOCUS, _OnSortDirectionKillfocusFnc);
	m_wndSortDirection.SetEvent(WE_SELCHANGE, _OnSortDirectionSelectChangeFnc);
	m_wndSortDirection.SetEvent(WE_LOADDATA, _OnSortDirectionLoadDataFnc);
	//m_wndSortDirection.SetEvent(WE_ADDNEW, _OnSortDirectionAddNewFnc);
	m_wndDataPeriod.SetEvent(WE_SELENDOK, _OnDataPeriodSelendokFnc);
	//m_wndDataPeriod.SetEvent(WE_SETFOCUS, _OnDataPeriodSetfocusFnc);
	//m_wndDataPeriod.SetEvent(WE_KILLFOCUS, _OnDataPeriodKillfocusFnc);
	m_wndDataPeriod.SetEvent(WE_SELCHANGE, _OnDataPeriodSelectChangeFnc);
	m_wndDataPeriod.SetEvent(WE_LOADDATA, _OnDataPeriodLoadDataFnc);
	//m_wndDataPeriod.SetEvent(WE_ADDNEW, _OnDataPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	m_wndDefault.SetEvent(WE_CLICK, _OnDefaultSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFilterOptionFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFilterOptionFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFilterOptionFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFilterOptionFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFilterOptionFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFilterOption::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFilterBy.GetDlgCtrlID(), m_szFilterByKey);
	DDX_TextEx(pDX, m_wndOperator.GetDlgCtrlID(), m_szOperatorKey);
	DDX_TextEx(pDX, m_wndGroupBy.GetDlgCtrlID(), m_szGroupByKey);
	DDX_TextEx(pDX, m_wndSortBy.GetDlgCtrlID(), m_szSortByKey);
	DDX_TextEx(pDX, m_wndSortDirection.GetDlgCtrlID(), m_szSortDirectionKey);
	DDX_TextEx(pDX, m_wndDataPeriod.GetDlgCtrlID(), m_szDataPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CFilterOption::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFilterOption::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CFilterOption::SetDefaultValues(){

	m_szFilterByKey.Empty();
	m_szOperatorKey.Empty();
	m_szGroupByKey.Empty();
	m_szSortByKey.Empty();
	m_szSortDirectionKey.Empty();
	m_szDataPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFilterOption::SetMode(int nMode){
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
void CFilterOption::OnFilterBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnFilterBySelendok(){
	 
}
/*void CFilterOption::OnFilterBySetfocus(){
	
}*/
/*void CFilterOption::OnFilterByKillfocus(){
	
}*/
long CFilterOption::OnFilterByLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFilterBy.IsSearchKey() && !m_szFilterByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFilterByKey
};
	m_wndFilterBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFilterBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFilterOption::OnFilterByAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFilterOption::OnOperatorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnOperatorSelendok(){
	 
}
/*void CFilterOption::OnOperatorSetfocus(){
	
}*/
/*void CFilterOption::OnOperatorKillfocus(){
	
}*/
long CFilterOption::OnOperatorLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperator.IsSearchKey() && !m_szOperatorKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOperatorKey
};
	m_wndOperator.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperator.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFilterOption::OnOperatorAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFilterOption::OnGroupBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnGroupBySelendok(){
	 
}
/*void CFilterOption::OnGroupBySetfocus(){
	
}*/
/*void CFilterOption::OnGroupByKillfocus(){
	
}*/
long CFilterOption::OnGroupByLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupBy.IsSearchKey() && !m_szGroupByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupByKey
};
	m_wndGroupBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFilterOption::OnGroupByAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFilterOption::OnSortBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnSortBySelendok(){
	 
}
/*void CFilterOption::OnSortBySetfocus(){
	
}*/
/*void CFilterOption::OnSortByKillfocus(){
	
}*/
long CFilterOption::OnSortByLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSortBy.IsSearchKey() && !m_szSortByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSortByKey
};
	m_wndSortBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSortBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFilterOption::OnSortByAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFilterOption::OnSortDirectionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnSortDirectionSelendok(){
	 
}
/*void CFilterOption::OnSortDirectionSetfocus(){
	
}*/
/*void CFilterOption::OnSortDirectionKillfocus(){
	
}*/
long CFilterOption::OnSortDirectionLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSortDirection.IsSearchKey() && !m_szSortDirectionKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSortDirectionKey
};
	m_wndSortDirection.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSortDirection.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFilterOption::OnSortDirectionAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CFilterOption::OnDataPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnDataPeriodSelendok(){
	 
}
/*void CFilterOption::OnDataPeriodSetfocus(){
	
}*/
/*void CFilterOption::OnDataPeriodKillfocus(){
	
}*/
long CFilterOption::OnDataPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDataPeriod.IsSearchKey() && !m_szDataPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDataPeriodKey
};
	m_wndDataPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDataPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFilterOption::OnDataPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CFilterOption::OnFromDateChange(){
	
} */
/*void CFilterOption::OnFromDateSetfocus(){
	
} */
/*void CFilterOption::OnFromDateKillfocus(){
	
} */
int CFilterOption::OnFromDateCheckValue(){
	return 0;
} 
/*void CFilterOption::OnToDateChange(){
	
} */
/*void CFilterOption::OnToDateSetfocus(){
	
} */
/*void CFilterOption::OnToDateKillfocus(){
	
} */
int CFilterOption::OnToDateCheckValue(){
	return 0;
} 
void CFilterOption::OnClearSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnDefaultSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CFilterOption::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CFilterOption::OnAddFilterOption(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFilterOption::OnEditFilterOption(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFilterOption::OnDeleteFilterOption(){
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
 		OnCancelFilterOption();
 	}
	return 0;
}
int CFilterOption::OnSaveFilterOption(){
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
 		//OnFilterOptionListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFilterOption::OnCancelFilterOption(){
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
int CFilterOption::OnFilterOptionListLoadData(){
	return 0;
}
