#include "HMSOptPatientList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOptPatientList *)pWnd)->OnFromDateCheckValue();
} 
static void _OnOrderingSelectFnc(CWnd *pWnd){
	  ((CHMSOptPatientList*)pWnd)->OnOrderingSelect();
}
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOptPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTerminatedSelectFnc(CWnd *pWnd){
	  ((CHMSOptPatientList*)pWnd)->OnTerminatedSelect();
}
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSOptPatientList *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSOptPatientList *)pWnd)->OnSearchCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSOptPatientList *pVw = (CHMSOptPatientList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOptPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOptPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOptPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOptPatientList*)pWnd)->OnListDeleteItem();
} 
static void _OnViewSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSOptPatientList*)pWnd)->OnViewSelectChange(nOld, nNew);
} 
static int _OnAddHMSOptPatientListFnc(CWnd *pWnd){
	 return ((CHMSOptPatientList*)pWnd)->OnAddHMSOptPatientList();
} 
static int _OnEditHMSOptPatientListFnc(CWnd *pWnd){
	 return ((CHMSOptPatientList*)pWnd)->OnEditHMSOptPatientList();
} 
static int _OnDeleteHMSOptPatientListFnc(CWnd *pWnd){
	 return ((CHMSOptPatientList*)pWnd)->OnDeleteHMSOptPatientList();
} 
static int _OnSaveHMSOptPatientListFnc(CWnd *pWnd){
	 return ((CHMSOptPatientList*)pWnd)->OnSaveHMSOptPatientList();
} 
static int _OnCancelHMSOptPatientListFnc(CWnd *pWnd){
	 return ((CHMSOptPatientList*)pWnd)->OnCancelHMSOptPatientList();
} 
CHMSOptPatientList::CHMSOptPatientList(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSOptPatientList::~CHMSOptPatientList(){
}
void CHMSOptPatientList::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndOrdering.Create(this, _T("Ordering"), 185, 30, 270, 55);
	m_wndToDateLabel.Create(this, _T("ToDate"), 10, 60, 90, 85);
	m_wndToDate.Create(this,95, 60, 180, 85); 
	m_wndTerminated.Create(this, _T("Terminated"), 185, 60, 270, 85);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 5, 275, 680);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 90, 90, 115);
	m_wndSearch.Create(this,95, 90, 240, 115); 
	m_wndSearch.Create(this, _T("@"), 245, 90, 270, 115);
	m_wndList.Create(this,10, 120, 270, 675); 
	m_wndView.Create(this,280, 5, 955, 680); 

}
void CHMSOptPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);



}
void CHMSOptPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndOrdering.SetEvent(WE_CLICK, _OnOrderingSelectFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndView.SetEvent(WE_SELCHANGE, _OnViewSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOptPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOptPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOptPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOptPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOptPatientListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSOptPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Radio(pDX, m_wndOrdering.GetDlgCtrlID(), m_nOrdering);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndTerminated.GetDlgCtrlID(), m_nTerminated);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);

}
void CHMSOptPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOptPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOptPatientList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_nOrdering=0;
	m_szToDate.Empty();
	m_nTerminated=0;
	m_szSearch.Empty();

}
int CHMSOptPatientList::SetMode(int nMode){
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
/*void CHMSOptPatientList::OnFromDateChange(){
	
} */
/*void CHMSOptPatientList::OnFromDateSetfocus(){
	
} */
/*void CHMSOptPatientList::OnFromDateKillfocus(){
	
} */
int CHMSOptPatientList::OnFromDateCheckValue(){
	return 0;
} 
void CHMSOptPatientList::OnOrderingSelect(){
	
}
/*void CHMSOptPatientList::OnToDateChange(){
	
} */
/*void CHMSOptPatientList::OnToDateSetfocus(){
	
} */
/*void CHMSOptPatientList::OnToDateKillfocus(){
	
} */
int CHMSOptPatientList::OnToDateCheckValue(){
	return 0;
} 
void CHMSOptPatientList::OnTerminatedSelect(){
	
}
/*void CHMSOptPatientList::OnSearchChange(){
	
} */
/*void CHMSOptPatientList::OnSearchSetfocus(){
	
} */
/*void CHMSOptPatientList::OnSearchKillfocus(){
	
} */
int CHMSOptPatientList::OnSearchCheckValue(){
	return 0;
} 
void CHMSOptPatientList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOptPatientList::OnListDblClick(){
	
} 
void CHMSOptPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOptPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOptPatientList::OnListLoadData(){
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
void CHMSOptPatientList::OnViewSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOptPatientList::OnAddHMSOptPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOptPatientList::OnEditHMSOptPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOptPatientList::OnDeleteHMSOptPatientList(){
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
 		OnCancelHMSOptPatientList();
 	}
	return 0;
}
int CHMSOptPatientList::OnSaveHMSOptPatientList(){
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
 		//OnHMSOptPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOptPatientList::OnCancelHMSOptPatientList(){
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
int CHMSOptPatientList::OnHMSOptPatientListListLoadData(){
	return 0;
}
