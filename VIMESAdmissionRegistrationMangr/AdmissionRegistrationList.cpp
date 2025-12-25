#include "AdmissionRegistrationList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTreatmentDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionRegistrationList* )pWnd)->OnTreatmentDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatmentDeptSelendokFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnTreatmentDeptSelendok();
}
/*static void _OnTreatmentDeptSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnTreatmentDeptKillfocus();
}*/
/*static void _OnTreatmentDeptKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnTreatmentDeptKillfocus();
}*/
static long _OnTreatmentDeptLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationList *)pWnd)->OnTreatmentDeptLoadData();
}
/*static void _OnTreatmentDeptAddNewFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnTreatmentDeptAddNew();
}*/

static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnPatientNameChange();
} 


/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CAdmissionRegistrationList *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationList *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdmissionRegistrationList *pVw = (CAdmissionRegistrationList *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionRegistrationList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdmissionRegistrationList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdmissionRegistrationList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdmissionRegistrationListFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationList*)pWnd)->OnAddAdmissionRegistrationList();
} 
static int _OnEditAdmissionRegistrationListFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationList*)pWnd)->OnEditAdmissionRegistrationList();
} 
static int _OnDeleteAdmissionRegistrationListFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationList*)pWnd)->OnDeleteAdmissionRegistrationList();
} 
static int _OnSaveAdmissionRegistrationListFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationList*)pWnd)->OnSaveAdmissionRegistrationList();
} 
static int _OnCancelAdmissionRegistrationListFnc(CWnd *pWnd){
	 return ((CAdmissionRegistrationList*)pWnd)->OnCancelAdmissionRegistrationList();
} 
CAdmissionRegistrationList::CAdmissionRegistrationList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CAdmissionRegistrationList::~CAdmissionRegistrationList(){
}
void CAdmissionRegistrationList::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List"), 5, 65, 790, 510);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 791, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 80, 55);
	m_wndFromDate.Create(this,85, 30, 170, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 30, 245, 55);
	m_wndToDate.Create(this,250, 30, 335, 55); 
	m_wndTreatmentDeptLabel.Create(this, _T("Treatment Dept"), 340, 30, 455, 55);
	m_wndTreatmentDept.Create(this,460, 30, 550, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 555, 30, 665, 55);
	m_wndPatientName.Create(this,670, 30, 755, 55); 
	m_wndFind.Create(this, _T("..."), 760, 30, 785, 55);
	m_wndList.Create(this,10, 90, 785, 505);

}
void CAdmissionRegistrationList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndToDate.SetCheckValue(true);
//	m_wndTreatmentDept.SetCheckValue(true);
	m_wndTreatmentDept.LimitText(35);
	m_wndPatientName.SetLimitText(35);
//	m_wndPatientName.SetCheckValue(true);

	m_wndTreatmentDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTreatmentDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(3, _T("Birth year"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(5, _T("Num Inward"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("Inward time"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(7, _T("Inward Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(8, _T("Food Mode"), CFMT_TEXT, 100);

}
void CAdmissionRegistrationList::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndTreatmentDept.SetEvent(WE_SELENDOK, _OnTreatmentDeptSelendokFnc);
	//m_wndTreatmentDept.SetEvent(WE_SETFOCUS, _OnTreatmentDeptSetfocusFnc);
	//m_wndTreatmentDept.SetEvent(WE_KILLFOCUS, _OnTreatmentDeptKillfocusFnc);
	m_wndTreatmentDept.SetEvent(WE_SELCHANGE, _OnTreatmentDeptSelectChangeFnc);
	m_wndTreatmentDept.SetEvent(WE_LOADDATA, _OnTreatmentDeptLoadDataFnc);
	//m_wndTreatmentDept.SetEvent(WE_ADDNEW, _OnTreatmentDeptAddNewFnc);
	m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
/*	
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAdmissionRegistrationListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAdmissionRegistrationListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAdmissionRegistrationListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAdmissionRegistrationListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAdmissionRegistrationListFnc, 0, 'T', VK_CONTROL);
*/
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	m_szToDate = m_szFromDate = pMF->GetSysDate();
	SetMode(VM_VIEW);
	
}
void CAdmissionRegistrationList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndTreatmentDept.GetDlgCtrlID(), m_szTreatmentDeptKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CAdmissionRegistrationList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdmissionRegistrationList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdmissionRegistrationList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTreatmentDeptKey.Empty();
	m_szPatientName.Empty();

}
int CAdmissionRegistrationList::SetMode(int nMode){
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
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1);
			m_wndFromDate.SetFocus();
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
/*void CAdmissionRegistrationList::OnFromDateChange(){
	
} */
/*void CAdmissionRegistrationList::OnFromDateSetfocus(){
	
} */
/*void CAdmissionRegistrationList::OnFromDateKillfocus(){
	
} */
int CAdmissionRegistrationList::OnFromDateCheckValue(){
	return 0;
} 
/*void CAdmissionRegistrationList::OnToDateChange(){
	
} */
/*void CAdmissionRegistrationList::OnToDateSetfocus(){
	
} */
/*void CAdmissionRegistrationList::OnToDateKillfocus(){
	
} */
int CAdmissionRegistrationList::OnToDateCheckValue(){
	return 0;
} 
void CAdmissionRegistrationList::OnTreatmentDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionRegistrationList::OnTreatmentDeptSelendok(){
	 
}
/*void CAdmissionRegistrationList::OnTreatmentDeptSetfocus(){
	
}*/
/*void CAdmissionRegistrationList::OnTreatmentDeptKillfocus(){
	
}*/
long CAdmissionRegistrationList::OnTreatmentDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTreatmentDept.IsSearchKey() && str2int(m_szTreatmentDeptKey) > 0){
		szWhere.Format(_T("and sd_id='%s'"), m_szTreatmentDeptKey);
	};
	m_wndTreatmentDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type='DT' %s ORDER BY name"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatmentDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdmissionRegistrationList::OnTreatmentDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CAdmissionRegistrationList::OnPatientNameChange(){
	UpdateData(true);
	m_wndList.Search(2, m_szPatientName, SEARCH_WORD);	
}

/*void CAdmissionRegistrationList::OnPatientNameSetfocus(){
	
} */
/*void CAdmissionRegistrationList::OnPatientNameKillfocus(){
	
} */
int CAdmissionRegistrationList::OnPatientNameCheckValue(){
	return 0;
} 
void CAdmissionRegistrationList::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CAdmissionRegistrationList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
	pMF->m_wndAdmissionRegistration.LoadData(nDocNo);
	pMF->SetActivePane(1);
} 
void CAdmissionRegistrationList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionRegistrationList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CAdmissionRegistrationList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szInwardDate;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	UpdateData(true);
	if(!m_szTreatmentDeptKey.IsEmpty())
		szWhere.Format(_T(" and hcr_admitdept='%s'"), m_szTreatmentDeptKey);

	
	szSQL.Format(_T("SELECT hd_docno as docno, ") \
				_T("		trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
				_T(" 		extract(year from hp_birthdate) as yob, ") \
				_T("		hp_sex as sex, ") \
				_T(" 		trunc(hd_admitdate) as examdte, ") \
				_T(" 		(select sd_name from sys_dept where sd_id=hd_admitdept) as facname, ") \
				_T(" 		hcr_recordno as numinward, ") \
				_T("		hcr_treattime as inwardtime, ") \
				_T("		hcr_admitdate as inwardate ") \
				/*_T("		hd_foodmode as foodmode ") \*/
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
				_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno) ") \
				_T(" WHERE hd_status IN('P', 'I','T') and trunc(hd_admitdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND hd_suggestion IN ('C', 'D') %s ") \
				_T(" ORDER BY pname "), m_szFromDate, m_szToDate, szWhere);
_tprintf(_T("\r\n%s"), szSQL);
//_msg(_T("%s"), szSQL);
	int nIndex = 1;
	CString tmpStr;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("inwardate"), szInwardDate);
		if(CompareDate(szInwardDate, _T("1900-01-01")) <=0)
			szInwardDate.Empty();
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("yob")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("NumInward")), 
			rs.GetValue(_T("Inwardtime")), 
			szInwardDate, 
			rs.GetValue(_T("FoodMode")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CAdmissionRegistrationList::OnAddAdmissionRegistrationList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdmissionRegistrationList::OnEditAdmissionRegistrationList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdmissionRegistrationList::OnDeleteAdmissionRegistrationList(){
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
 		OnCancelAdmissionRegistrationList(); 
 	}
	return 0;
}
int CAdmissionRegistrationList::OnSaveAdmissionRegistrationList(){
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
 		//OnAdmissionRegistrationListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdmissionRegistrationList::OnCancelAdmissionRegistrationList(){
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
int CAdmissionRegistrationList::OnAdmissionRegistrationListListLoadData(){
	return 0;
}


BOOL CAdmissionRegistrationList::PreTranslateMessage(MSG *pMsg){
	if(GetFocus() == &m_wndList)
	{
		if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN){
			OnListDblClick();
			return TRUE;
		}
	}
	return CGuiView::PreTranslateMessage(pMsg);
}