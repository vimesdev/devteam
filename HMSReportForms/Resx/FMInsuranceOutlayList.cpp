#include "FMInsuranceOutlayList.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnClerkAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnStatusAddNew();
}*/
static void _OnOrderBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMInsuranceOutlayList* )pWnd)->OnOrderBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrderBySelendokFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderBySelendok();
}
/*static void _OnOrderBySetfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByKillfocus();
}*/
/*static void _OnOrderByKillfocusFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByKillfocus();
}*/
static long _OnOrderByLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList *)pWnd)->OnOrderByLoadData();
}
/*static void _OnOrderByAddNewFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList *)pWnd)->OnOrderByAddNew();
}*/
static void _OnWithoutGeneralSelectFnc(CWnd *pWnd){
	 ((CFMInsuranceOutlayList*)pWnd)->OnWithoutGeneralSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMInsuranceOutlayList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMInsuranceOutlayList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMInsuranceOutlayList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMInsuranceOutlayList *pVw = (CFMInsuranceOutlayList *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnAddFMInsuranceOutlayList();
} 
static int _OnEditFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnEditFMInsuranceOutlayList();
} 
static int _OnDeleteFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnDeleteFMInsuranceOutlayList();
} 
static int _OnSaveFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnSaveFMInsuranceOutlayList();
} 
static int _OnCancelFMInsuranceOutlayListFnc(CWnd *pWnd){
	 return ((CFMInsuranceOutlayList*)pWnd)->OnCancelFMInsuranceOutlayList();
} 
CFMInsuranceOutlayList::CFMInsuranceOutlayList(){

	m_nDlgWidth = 435;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CFMInsuranceOutlayList::~CFMInsuranceOutlayList(){
}
void CFMInsuranceOutlayList::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 535);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 215, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 220, 30, 300, 55);
	m_wndReportPeriod.Create(this,305, 30, 425, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 215, 85); 
	m_wndToDate.Create(this,305, 60, 425, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 60, 300, 85);
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 90, 115);
	m_wndClerk.Create(this,95, 90, 215, 115); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 90, 300, 115);
	m_wndStatus.Create(this,305, 90, 425, 115); 
	m_wndOrderByLabel.Create(this, _T("Order By"), 10, 120, 90, 145);
	m_wndOrderBy.Create(this,95, 120, 215, 145); 
	m_wndWithoutGeneral.Create(this, _T("Without General"), 220, 120, 425, 145);
	m_wndList.Create(this,10, 150, 425, 530); 
	m_wndMarkAll.Create(this, _T("Mark All"), 5, 540, 85, 565);
	m_wndUnMark.Create(this, _T("UnMark"), 90, 540, 170, 565);
	m_wndPrint.Create(this, _T("&Print"), 260, 540, 340, 565);
	m_wndExport.Create(this, _T("Export XLS"), 345, 540, 425, 565);

}
void CFMInsuranceOutlayList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(1024);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndOrderBy.SetCheckValue(true);
	m_wndOrderBy.LimitText(35);






	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndOrderBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOrderBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CFMInsuranceOutlayList::OnSetWindowEvents(){
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
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndOrderBy.SetEvent(WE_SELENDOK, _OnOrderBySelendokFnc);
	//m_wndOrderBy.SetEvent(WE_SETFOCUS, _OnOrderBySetfocusFnc);
	//m_wndOrderBy.SetEvent(WE_KILLFOCUS, _OnOrderByKillfocusFnc);
	m_wndOrderBy.SetEvent(WE_SELCHANGE, _OnOrderBySelectChangeFnc);
	m_wndOrderBy.SetEvent(WE_LOADDATA, _OnOrderByLoadDataFnc);
	//m_wndOrderBy.SetEvent(WE_ADDNEW, _OnOrderByAddNewFnc);
	m_wndWithoutGeneral.SetEvent(WE_CLICK, _OnWithoutGeneralSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMInsuranceOutlayListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMInsuranceOutlayListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMInsuranceOutlayListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMInsuranceOutlayListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMInsuranceOutlayListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFMInsuranceOutlayList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndOrderBy.GetDlgCtrlID(), m_szOrderByKey);
	DDX_Check(pDX, m_wndWithoutGeneral.GetDlgCtrlID(), m_bWithoutGeneral);

}
void CFMInsuranceOutlayList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMInsuranceOutlayList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMInsuranceOutlayList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_szStatusKey.Empty();
	m_szOrderByKey.Empty();
	m_bWithoutGeneral=FALSE;

}
int CFMInsuranceOutlayList::SetMode(int nMode){
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
/*void CFMInsuranceOutlayList::OnYearChange(){
	
} */
/*void CFMInsuranceOutlayList::OnYearSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnYearKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnYearCheckValue(){
	return 0;
} 
void CFMInsuranceOutlayList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnReportPeriodSelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnReportPeriodSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnReportPeriodKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnReportPeriodLoadData(){
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
/*void CFMInsuranceOutlayList::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFMInsuranceOutlayList::OnFromDateChange(){
	
} */
/*void CFMInsuranceOutlayList::OnFromDateSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnFromDateKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMInsuranceOutlayList::OnToDateChange(){
	
} */
/*void CFMInsuranceOutlayList::OnToDateSetfocus(){
	
} */
/*void CFMInsuranceOutlayList::OnToDateKillfocus(){
	
} */
int CFMInsuranceOutlayList::OnToDateCheckValue(){
	return 0;
} 
void CFMInsuranceOutlayList::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnClerkSelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnClerkSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnClerkKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szClerkKey
};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMInsuranceOutlayList::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceOutlayList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnStatusSelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnStatusSetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnStatusKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnStatusLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMInsuranceOutlayList::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFMInsuranceOutlayList::OnOrderBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnOrderBySelendok(){
	 
}
/*void CFMInsuranceOutlayList::OnOrderBySetfocus(){
	
}*/
/*void CFMInsuranceOutlayList::OnOrderByKillfocus(){
	
}*/
long CFMInsuranceOutlayList::OnOrderByLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMInsuranceOutlayList::OnOrderByAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CFMInsuranceOutlayList::OnWithoutGeneralSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CFMInsuranceOutlayList::OnListDblClick(){
	
} 
void CFMInsuranceOutlayList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceOutlayList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMInsuranceOutlayList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CFMInsuranceOutlayList::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFMInsuranceOutlayList::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFMInsuranceOutlayList::OnAddFMInsuranceOutlayList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMInsuranceOutlayList::OnEditFMInsuranceOutlayList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMInsuranceOutlayList::OnDeleteFMInsuranceOutlayList(){
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
 		OnCancelFMInsuranceOutlayList();
 	}
	return 0;
}
int CFMInsuranceOutlayList::OnSaveFMInsuranceOutlayList(){
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
 		//OnFMInsuranceOutlayListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMInsuranceOutlayList::OnCancelFMInsuranceOutlayList(){
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
int CFMInsuranceOutlayList::OnFMInsuranceOutlayListListLoadData(){
	return 0;
}
