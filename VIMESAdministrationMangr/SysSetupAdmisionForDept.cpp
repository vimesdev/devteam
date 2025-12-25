#include "SysSetupAdmisionForDept.h"
#include "MainFrm.h"
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CSysSetupAdmisionForDept*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CSysSetupAdmisionForDept*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetupAdmisionForDept*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnDeptListDeleteItem();
} 
static long _OnAdmissionFormLoadDataFnc(CWnd *pWnd){
	return ((CSysSetupAdmisionForDept*)pWnd)->OnAdmissionFormLoadData();
} 
static void _OnAdmissionFormDblClickFnc(CWnd *pWnd){
	((CSysSetupAdmisionForDept*)pWnd)->OnAdmissionFormDblClick();
} 
static void _OnAdmissionFormSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetupAdmisionForDept*)pWnd)->OnAdmissionFormSelectChange(nOldItem, nNewItem);
} 
static int _OnAdmissionFormDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnAdmissionFormDeleteItem();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CSysSetupAdmisionForDept*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CSysSetupAdmisionForDept*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysSetupAdmisionForDept*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysSetupAdmisionForDept *pVw = (CSysSetupAdmisionForDept *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysSetupAdmisionForDept *pVw = (CSysSetupAdmisionForDept *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSysSetupAdmisionForDept *pVw = (CSysSetupAdmisionForDept *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSysSetupAdmisionForDeptFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnAddSysSetupAdmisionForDept();
} 
static int _OnEditSysSetupAdmisionForDeptFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnEditSysSetupAdmisionForDept();
} 
static int _OnDeleteSysSetupAdmisionForDeptFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnDeleteSysSetupAdmisionForDept();
} 
static int _OnSaveSysSetupAdmisionForDeptFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnSaveSysSetupAdmisionForDept();
} 
static int _OnCancelSysSetupAdmisionForDeptFnc(CWnd *pWnd){
	 return ((CSysSetupAdmisionForDept*)pWnd)->OnCancelSysSetupAdmisionForDept();
} 
CSysSetupAdmisionForDept::CSysSetupAdmisionForDept(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSysSetupAdmisionForDept::~CSysSetupAdmisionForDept(){
}
void CSysSetupAdmisionForDept::OnCreateComponents(){
	m_wndDeptListInfor.Create(this, _T("Dept List"), 10, 5, 300, 435);
	m_wndFormListSetUp.Create(this, _T("Form List SetUp"), 305, 5, 580, 435);
	m_wndSelectedListInfor.Create(this, _T("Selected List Infor"), 670, 5, 945, 435);
	m_wndDeptList.Create(this,15, 30, 295, 430); 
	m_wndAdmissionForm.Create(this,310, 30, 575, 430); 
	m_wndSelectedList.Create(this,675, 30, 940, 430); 
	m_wndAdd.Create(this, _T("==>"), 585, 170, 665, 195);
	m_wndDelete.Create(this, _T("<=="), 585, 200, 665, 225);
	m_wndClose.Create(this, _T("&Close"), 860, 440, 940, 465);

}
void CSysSetupAdmisionForDept::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndDeptList.InsertColumn(0, _T("DeptID"), CFMT_TEXT, 80);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndAdmissionForm.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndAdmissionForm.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndSelectedList.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndSelectedList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndSelectedList.InsertColumn(2, _T("Default"), CFMT_TEXT, 40);

}
void CSysSetupAdmisionForDept::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdmissionForm.SetEvent(WE_SELCHANGE, _OnAdmissionFormSelectChangeFnc);
	m_wndAdmissionForm.SetEvent(WE_LOADDATA, _OnAdmissionFormLoadDataFnc);
	m_wndAdmissionForm.SetEvent(WE_DBLCLICK, _OnAdmissionFormDblClickFnc);
	m_wndAdmissionForm.AddEvent(1, _T("Delete"), _OnAdmissionFormDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Set Default"), _OnSelectedListDeleteItemFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);
	OnDeptListLoadData();

}
void CSysSetupAdmisionForDept::OnDoDataExchange(CDataExchange* pDX){

}
void CSysSetupAdmisionForDept::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CSysSetupAdmisionForDept::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysSetupAdmisionForDept::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysSetupAdmisionForDept::SetDefaultValues(){


}
int CSysSetupAdmisionForDept::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3,4, -1);
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
void CSysSetupAdmisionForDept::OnDeptListDblClick(){
	
} 
void CSysSetupAdmisionForDept::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem <0)
		return ;

	m_szDeptID = m_wndDeptList.GetItemText(nNewItem,0);
	OnAdmissionFormLoadData();
	OnSelectedListLoadData();
	
	
} 
int CSysSetupAdmisionForDept::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysSetupAdmisionForDept::OnDeptListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select sd_id as deptid, sd_name as name from sys_dept where sd_type in ('KB','DT') and sd_isactive='Y' order by sd_id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("DeptID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	m_wndDeptList.SetCurSel(0);
	return nCount;

}
void CSysSetupAdmisionForDept::OnAdmissionFormDblClick(){
	OnAddSelect();
	
} 
void CSysSetupAdmisionForDept::OnAdmissionFormSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysSetupAdmisionForDept::OnAdmissionFormDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysSetupAdmisionForDept::OnAdmissionFormLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndAdmissionForm.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select has_id as id, has_name as name from hms_admission_setup  where has_id not in (select hasd_id from hms_admission_setup_dept where hasd_deptid = '%s'  ) "),m_szDeptID); 
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdmissionForm.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndAdmissionForm.EndLoad(); 
	return nCount;

}
void CSysSetupAdmisionForDept::OnSelectedListDblClick(){
	//OnDeleteSelect();
	
} 
void CSysSetupAdmisionForDept::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysSetupAdmisionForDept::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCel = m_wndSelectedList.GetCurSel();
	if(nCel <0)
		return -1;
	int nFormID=0;
	int nIndex=0;
	nFormID = str2int(m_wndSelectedList.GetItemText(nCel,0));

	szSQL.Format(_T("Update   hms_admission_setup_dept set hasd_default='N' where hasd_deptid ='%s'  ") , m_szDeptID);
	 rs.ExecSQL(szSQL);

	szSQL.Format(_T("Update   hms_admission_setup_dept set hasd_default='Y' where hasd_deptid ='%s' and hasd_id= %d ") , m_szDeptID, nFormID);

	int nRes = rs.ExecSQL(szSQL);
	if(nRes >0)
	{
		OnSelectedListLoadData();
	}

	 return 0;
} 
long CSysSetupAdmisionForDept::OnSelectedListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select has_id as id, has_name as name, hasd_default from hms_admission_setup_dept  ") \
				_T("		left join hms_admission_setup on (hasd_id = has_id) ") \
				_T("		where hasd_deptid = '%s' "), m_szDeptID);

nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		int nCel = m_wndSelectedList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("hasd_default")), 
			
			NULL);
		if(rs.GetValue(_T("hasd_default")) == _T("Y"))
		{
			m_wndSelectedList.SetItemBkColor(nCel, RGB(220, 220, 220), FALSE);
			m_wndSelectedList.SetItemTextColor(nCel, RGB(0, 0, 200), FALSE);
		}
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
}
void CSysSetupAdmisionForDept::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCel = m_wndAdmissionForm.GetCurSel();
	if(nCel <0)
		return;
	int nFormID=0;
	int nIndex=0;
	nIndex= m_wndSelectedList.GetItemCount() +1;
	
	nFormID = str2int(m_wndAdmissionForm.GetItemText(nCel,0));
	szSQL.Format(_T("INSERT INTO hms_admission_setup_dept(hasd_deptid, hasd_id, hasd_index, hasd_default)  ") \
				_T("	VALUES ('%s', %d, %d, 'N') "),m_szDeptID,nFormID,nIndex);
	int nRes = 0;
	nRes = pMF->ExecSQL(szSQL);
_tprintf(_T("\nnRes: %d"), nRes);
	if(nRes >0)
	{
		OnAdmissionFormLoadData();
		OnSelectedListLoadData();
	}
	

	
} 
void CSysSetupAdmisionForDept::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCel = m_wndSelectedList.GetCurSel();
	if(nCel <0)
		return;
	int nFormID=0;
	int nIndex=0;
	nFormID = str2int(m_wndSelectedList.GetItemText(nCel,0));
	szSQL.Format(_T("delete from  hms_admission_setup_dept where hasd_deptid ='%s' and hasd_id= %d ") , m_szDeptID, nFormID);

	int nRes = pMF->ExecSQL(szSQL);
	if(nRes >0)
	{
		OnAdmissionFormLoadData();
		OnSelectedListLoadData();
	}

	
} 
void CSysSetupAdmisionForDept::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CSysSetupAdmisionForDept::OnAddSysSetupAdmisionForDept(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysSetupAdmisionForDept::OnEditSysSetupAdmisionForDept(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysSetupAdmisionForDept::OnDeleteSysSetupAdmisionForDept(){
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
 		OnCancelSysSetupAdmisionForDept();
 	}
	return 0;
}
int CSysSetupAdmisionForDept::OnSaveSysSetupAdmisionForDept(){
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
 		//OnSysSetupAdmisionForDeptListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysSetupAdmisionForDept::OnCancelSysSetupAdmisionForDept(){
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
int CSysSetupAdmisionForDept::OnSysSetupAdmisionForDeptListLoadData(){
	return 0;
}
