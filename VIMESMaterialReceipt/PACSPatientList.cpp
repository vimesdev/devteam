#include "PACSPatientList.h"
#include "MainFrm.h"
static void _OnWaittingSelectFnc(CWnd *pWnd){
	  ((CPACSPatientList*)pWnd)->OnWaittingSelect();
}
static void _OnPerformedSelectFnc(CWnd *pWnd){
	  ((CPACSPatientList*)pWnd)->OnPerformedSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSPatientList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CPACSPatientList *pVw = (CPACSPatientList *)pWnd;
	pVw->OnRefreshSelect();
} 
/*static void _OnNumberChangeFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberChange();
} */
/*static void _OnNumberSetfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberSetfocus();} */ 
/*static void _OnNumberKillfocusFnc(CWnd *pWnd){
	((CPACSPatientList *)pWnd)->OnNumberKillfocus();
} */
static int _OnNumberCheckValueFnc(CWnd *pWnd){
	return ((CPACSPatientList *)pWnd)->OnNumberCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPACSPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPACSPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnAddPACSPatientList();
} 
static int _OnEditPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnEditPACSPatientList();
} 
static int _OnDeletePACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnDeletePACSPatientList();
} 
static int _OnSavePACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnSavePACSPatientList();
} 
static int _OnCancelPACSPatientListFnc(CWnd *pWnd){
	 return ((CPACSPatientList*)pWnd)->OnCancelPACSPatientList();
} 
CPACSPatientList::CPACSPatientList(){

	m_nDlgWidth = 1020;
	m_nDlgHeight = 655;
	SetDefaultValues();
}
CPACSPatientList::~CPACSPatientList(){
}
void CPACSPatientList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 180, 5, 1015, 90);
	m_wndStatus.Create(this, _T("Status"), 5, 5, 175, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 1015, 650);
	m_wndWaitting.Create(this, _T("Waitting"), 10, 29, 168, 54);
	m_wndPerformed.Create(this, _T("Performed"), 10, 59, 168, 84);
	m_wndDepartmentLabel.Create(this, _T("Department"), 185, 30, 285, 55);
	m_wndDepartment.Create(this,290, 30, 490, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 495, 30, 595, 55);
	m_wndFromDate.Create(this,600, 30, 710, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 715, 30, 815, 55);
	m_wndToDate.Create(this,820, 30, 930, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 185, 60, 285, 85);
	m_wndType.Create(this,290, 60, 490, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 495, 60, 595, 85);
	m_wndPatientName.Create(this,600, 60, 710, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 715, 60, 815, 85);
	m_wndDocumentNo.Create(this,820, 60, 930, 85); 
	m_wndRefresh.Create(this, _T("&Refresh"), 935, 60, 1010, 85);
	m_wndNumber.Create(this,935, 30, 1010, 55); 
	m_wndList.Create(this,10, 120, 1010, 645); 
}
void CPACSPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0, -1);
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(128);
//	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(128);
//	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndFromDate.SetNotEmpty(false);
//	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndToDate.SetNotEmpty(false);
	m_wndPatientName.SetLimitText(65);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetNotEmpty(false);
	m_wndDocumentNo.SetLimitText(8);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetNotEmpty(false);
	m_wndNumber.SetCurrencyFormat(true);
	

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 170);
	m_wndList.InsertColumn(2, _T("Age"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("Adress"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(5, _T("Department"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(6, _T("Room"), CFMT_TEXT, 170);


}
void CPACSPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWaitting.SetEvent(WE_CLICK, _OnWaittingSelectFnc);
	m_wndPerformed.SetEvent(WE_CLICK, _OnPerformedSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	//m_wndNumber.SetEvent(WE_CHANGE, _OnNumberChangeFnc);
	//m_wndNumber.SetEvent(WE_SETFOCUS, _OnNumberSetfocusFnc);
	//m_wndNumber.SetEvent(WE_KILLFOCUS, _OnNumberKillfocusFnc);
	m_wndNumber.SetEvent(WE_CHECKVALUE, _OnNumberCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Select"), _OnListSelectItemFnc, 0, VK_RETURN, 0);

	
	m_szFromDate.Format(_T("%s"), pMF->GetSysDate());
	m_szToDate.Format(_T("%s"), pMF->GetSysDate());
	m_wndPatientName.SetFocus();
	m_wndNumber.EnableWindow(false);
	UpdateData(FALSE);

}
void CPACSPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndWaitting.GetDlgCtrlID(), m_nWaitting);	
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumber.GetDlgCtrlID(), m_nNumber);

}
void CPACSPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSPatientList::SetDefaultValues(){
	m_nWaitting=0;
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szPatientName.Empty();
	m_nDocumentNo=0;
	m_nNumber=0;
}
int CPACSPatientList::SetMode(int nMode){
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

		m_wndNumber.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CPACSPatientList::OnWaittingSelect(){
	OnListLoadData();
}
void CPACSPatientList::OnPerformedSelect(){
	OnListLoadData();
}
void CPACSPatientList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnDepartmentSelendok(){
	 
}
/*void CPACSPatientList::OnDepartmentSetfocus(){
	
}*/
/*void CPACSPatientList::OnDepartmentKillfocus(){
	
}*/
long CPACSPatientList::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id ='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_id as id,sd_name as name FROM sys_dept WHERE sd_type IN('DT','KB') %s ORDER BY sd_index "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSPatientList::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientList::OnFromDateChange(){
	
} */
/*void CPACSPatientList::OnFromDateSetfocus(){
	
} */
/*void CPACSPatientList::OnFromDateKillfocus(){
	
} */
int CPACSPatientList::OnFromDateCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CPACSPatientList::OnToDateChange(){
	
} */
/*void CPACSPatientList::OnToDateSetfocus(){
	
} */
/*void CPACSPatientList::OnToDateKillfocus(){
	
} */
int CPACSPatientList::OnToDateCheckValue(){
	OnListLoadData();
	return 0;
} 
void CPACSPatientList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSPatientList::OnTypeSelendok(){
	 
}
/*void CPACSPatientList::OnTypeSetfocus(){
	
}*/
/*void CPACSPatientList::OnTypeKillfocus(){
	
}*/
long CPACSPatientList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szTypeKey);
	};
	szWhere.AppendFormat(_T(" and hfg_id in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE (substr(hfg_id, 1, 2) IN('B2','B3') or substr(hfg_id, 1, 3) IN('B1E','B1F')  ) %s ORDER BY hfg_id"), szWhere);
_fmsg(_T("%s"), szSQL);		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSPatientList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSPatientList::OnPatientNameChange(){
	
} */
/*void CPACSPatientList::OnPatientNameSetfocus(){
	
} */
/*void CPACSPatientList::OnPatientNameKillfocus(){
	
} */
int CPACSPatientList::OnPatientNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CPACSPatientList::OnDocumentNoChange(){
	
} */
/*void CPACSPatientList::OnDocumentNoSetfocus(){
	
} */
/*void CPACSPatientList::OnDocumentNoKillfocus(){
	
} */

/*void CPACSPatientList::OnNumberChange(){
	
} */
/*void CPACSPatientList::OnNumberSetfocus(){
	
} */
/*void CPACSPatientList::OnNumberKillfocus(){
	
} */
int CPACSPatientList::OnNumberCheckValue(){
	return 0;
} 
int CPACSPatientList::OnDocumentNoCheckValue(){
	OnListLoadData();
	return 0;
} 
void CPACSPatientList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CPACSPatientList::OnListDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	long nDocumentNo = ToLong(m_wndList.GetItemText(nSel, 0));
	
	pMF->m_bTabActiveImage=false;
	pMF->SetActivePane(1);
	
} 
void CPACSPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
//int CPACSPatientList::OnListSelectItem(){
//	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	 return 0;
//} 
long CPACSPatientList::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	UpdateData(true);
	if(!m_szPatientName.IsEmpty())
	{
//		CString tmpStr;
//		InitCap(m_szPatientName, tmpStr);
//		szWhere.Format(_T(" AND lower(trim(hp_surname||' '||hp_midname||' '||hp_firstname)) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	
	if(m_nWaitting == 1){
		szWhere.AppendFormat(_T(" AND hpc_status='T' AND (hpc_performdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hpc_status='S' AND (hpc_orderdate) between TO_TIMESTAMP('%s 00:00:00','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s 23:59:59','YYYY-MM-DD HH24:MI:SS') "), m_szFromDate, m_szToDate);
	}

	if(!m_szDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND hpc_deptid='%s' "), m_szDepartmentKey);
	}
	if(!m_szTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hpc_groupid='%s'"), m_szTypeKey);
	}

	if(m_nDocumentNo > 0){
		szWhere.Format(_T(" AND hpc_docno=%ld"), m_nDocumentNo);
	}
	
	szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F','B1G')) "));

	szSQL.Format(_T(" SELECT distinct hd_docno as docno, ") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hms_getage(trunc(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	(select distinct ss_desc from sys_sel where ss_id='hrm_sex' and ss_code=hp_sex) as sex,") \
		_T(" 	hd_object as objectid,") \
		_T(" 	hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
		_T(" 	hd_diagnostic as diagnostic,") \
		_T(" 	trunc(hpc_orderdate) as orderdate,") \
		_T(" 	hpc_doctor as doctor,") \
		_T(" 	(select distinct sd_name from sys_dept where sd_id=hpc_deptid and rownum < 2) as dept,") \
		_T(" 	(select distinct hrl_name from hms_roomlist where hrl_deptid=hpc_deptid and hrl_id= hpc_roomid) as roomid") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pacsorder ON(hpc_docno=hd_docno)") \
		_T(" WHERE 	hpc_status IN('S','P','T')") \
		_T(" AND hpc_orderid > 0 ") \
		_T(" %s "), szWhere);
_fmsg(_T("%s"), szSQL);

	CString szFirstName, szMidName, szSurName, szSearchName, tmpStr;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		m_wndList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Age")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Address")),
			rs.GetValue(_T("dept")),
			rs.GetValue(_T("roomid")),			
			NULL);
		rs.MoveNext();
	}
	m_nNumber = nCount;
	m_wndList.EndLoad();
	UpdateData(false);
	return nCount;


}
int CPACSPatientList::OnAddPACSPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSPatientList::OnEditPACSPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSPatientList::OnDeletePACSPatientList(){
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
 		OnCancelPACSPatientList(); 
 	}
	return 0;
}
int CPACSPatientList::OnSavePACSPatientList(){
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
 		//OnPACSPatientListListLoadData(); 
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSPatientList::OnCancelPACSPatientList()
{
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
int CPACSPatientList::OnPACSPatientListListLoadData(){
	return 0;
}
