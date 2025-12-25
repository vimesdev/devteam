#include "CA_CashBook.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnToDateCheckValue();
} 
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPaymentMethodAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnObjectAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnOrderByAddNew();
}*/
static void _OnPosterSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCA_CashBook* )pWnd)->OnPosterSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPosterSelendokFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterSelendok();
}
/*static void _OnPosterSetfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterKillfocus();
}*/
/*static void _OnPosterKillfocusFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterKillfocus();
}*/
static long _OnPosterLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook *)pWnd)->OnPosterLoadData();
}
/*static void _OnPosterAddNewFnc(CWnd *pWnd){
	((CCA_CashBook *)pWnd)->OnPosterAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCA_CashBook *pVw = (CCA_CashBook *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnAccountListLoadDataFnc(CWnd *pWnd){
	return ((CCA_CashBook*)pWnd)->OnAccountListLoadData();
} 
static void _OnAccountListDblClickFnc(CWnd *pWnd){
	((CCA_CashBook*)pWnd)->OnAccountListDblClick();
} 
static void _OnAccountListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCA_CashBook*)pWnd)->OnAccountListSelectChange(nOldItem, nNewItem);
} 
static int _OnAccountListDeleteItemFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnAccountListDeleteItem();
} 
static int _OnAddCA_CashBookFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnAddCA_CashBook();
} 
static int _OnEditCA_CashBookFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnEditCA_CashBook();
} 
static int _OnDeleteCA_CashBookFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnDeleteCA_CashBook();
} 
static int _OnSaveCA_CashBookFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnSaveCA_CashBook();
} 
static int _OnCancelCA_CashBookFnc(CWnd *pWnd){
	 return ((CCA_CashBook*)pWnd)->OnCancelCA_CashBook();
} 
CCA_CashBook::CCA_CashBook(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCA_CashBook::~CCA_CashBook(){
}
void CCA_CashBook::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 465, 470);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 125, 55);
	m_wndYear.Create(this,130, 30, 250, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 255, 30, 345, 55);
	m_wndReportPeriod.Create(this,350, 30, 460, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 125, 85);
	m_wndFromDate.Create(this,130, 60, 250, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 255, 60, 345, 85);
	m_wndToDate.Create(this,350, 60, 460, 85); 
	m_wndPaymentMethodLabel.Create(this, _T("Payment Method"), 10, 90, 125, 115);
	m_wndPaymentMethod.Create(this,130, 90, 460, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 125, 145);
	m_wndObject.Create(this,130, 120, 460, 145); 
	m_wndOrderByLabel.Create(this, _T("OrderBy"), 10, 150, 125, 175);
	m_wndOrderBy.Create(this,130, 150, 460, 175); 
	m_wndStaffLabel.Create(this, _T("Staff"), 10, 180, 125, 205);
	m_wndPoster.Create(this,130, 180, 460, 205); 
	m_wndPrint.Create(this, _T("&Print"), 365, 475, 465, 500);
	m_wndAccountList.Create(this,10, 210, 460, 465); 

}
void CCA_CashBook::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(1024);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndOrderBy.SetCheckValue(true);
	m_wndOrderBy.LimitText(1024);
	m_wndPoster.SetCheckValue(true);
	m_wndPoster.LimitText(1024);













}
void CCA_CashBook::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndPoster.SetEvent(WE_SELENDOK, _OnPosterSelendokFnc);
	//m_wndPoster.SetEvent(WE_SETFOCUS, _OnPosterSetfocusFnc);
	//m_wndPoster.SetEvent(WE_KILLFOCUS, _OnPosterKillfocusFnc);
	m_wndPoster.SetEvent(WE_SELCHANGE, _OnPosterSelectChangeFnc);
	m_wndPoster.SetEvent(WE_LOADDATA, _OnPosterLoadDataFnc);
	//m_wndPoster.SetEvent(WE_ADDNEW, _OnPosterAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndAccountList.SetEvent(WE_SELCHANGE, _OnAccountListSelectChangeFnc);
	m_wndAccountList.SetEvent(WE_LOADDATA, _OnAccountListLoadDataFnc);
	m_wndAccountList.SetEvent(WE_DBLCLICK, _OnAccountListDblClickFnc);
	m_wndAccountList.AddEvent(1, _T("Delete"), _OnAccountListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCA_CashBookFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCA_CashBookFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCA_CashBookFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCA_CashBookFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCA_CashBookFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCA_CashBook::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_TextEx(pDX, m_wndPoster.GetDlgCtrlID(), m_szPosterKey);

}
void CCA_CashBook::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCA_CashBook::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCA_CashBook::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPaymentMethodKey.Empty();
	m_szObjectKey.Empty();
	m_szOrderByKey.Empty();
	m_szPosterKey.Empty();

}
int CCA_CashBook::SetMode(int nMode){
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
/*void CCA_CashBook::OnYearChange(){
	
} */
/*void CCA_CashBook::OnYearSetfocus(){
	
} */
/*void CCA_CashBook::OnYearKillfocus(){
	
} */
int CCA_CashBook::OnYearCheckValue(){
	return 0;
} 
void CCA_CashBook::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnReportPeriodSelendok(){
	 
}
/*void CCA_CashBook::OnReportPeriodSetfocus(){
	
}*/
/*void CCA_CashBook::OnReportPeriodKillfocus(){
	
}*/
long CCA_CashBook::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCA_CashBook::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCA_CashBook::OnFromDateChange(){
	
} */
/*void CCA_CashBook::OnFromDateSetfocus(){
	
} */
/*void CCA_CashBook::OnFromDateKillfocus(){
	
} */
int CCA_CashBook::OnFromDateCheckValue(){
	return 0;
} 
/*void CCA_CashBook::OnToDateChange(){
	
} */
/*void CCA_CashBook::OnToDateSetfocus(){
	
} */
/*void CCA_CashBook::OnToDateKillfocus(){
	
} */
int CCA_CashBook::OnToDateCheckValue(){
	return 0;
} 
void CCA_CashBook::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnPaymentMethodSelendok(){
	 
}
/*void CCA_CashBook::OnPaymentMethodSetfocus(){
	
}*/
/*void CCA_CashBook::OnPaymentMethodKillfocus(){
	
}*/
long CCA_CashBook::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCA_CashBook::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnObjectSelendok(){
	 
}
/*void CCA_CashBook::OnObjectSetfocus(){
	
}*/
/*void CCA_CashBook::OnObjectKillfocus(){
	
}*/
long CCA_CashBook::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCA_CashBook::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnOrderBySelendok(){
	 
}
/*void CCA_CashBook::OnOrderBySetfocus(){
	
}*/
/*void CCA_CashBook::OnOrderByKillfocus(){
	
}*/
long CCA_CashBook::OnOrderByLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrderBy.IsSearchKey() && !m_szOrderByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrderByKey
};
	m_wndOrderBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderBy.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCA_CashBook::OnOrderByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnPosterSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnPosterSelendok(){
	 
}
/*void CCA_CashBook::OnPosterSetfocus(){
	
}*/
/*void CCA_CashBook::OnPosterKillfocus(){
	
}*/
long CCA_CashBook::OnPosterLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPoster.IsSearchKey() && !m_szPosterKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPosterKey
};
	m_wndPoster.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPoster.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCA_CashBook::OnPosterAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCA_CashBook::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCA_CashBook::OnAccountListDblClick(){
	
} 
void CCA_CashBook::OnAccountListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCA_CashBook::OnAccountListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCA_CashBook::OnAccountListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndAccountList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAccountList.AddItems(
		rs.MoveNext();
	}
	m_wndAccountList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CCA_CashBook::OnAddCA_CashBook(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCA_CashBook::OnEditCA_CashBook(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCA_CashBook::OnDeleteCA_CashBook(){
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
 		OnCancelCA_CashBook();
 	}
	return 0;
}
int CCA_CashBook::OnSaveCA_CashBook(){
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
 		//OnCA_CashBookListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCA_CashBook::OnCancelCA_CashBook(){
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
int CCA_CashBook::OnCA_CashBookListLoadData(){
	return 0;
}
