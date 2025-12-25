#include "HMSPerformDeptPermSetupDialog.h"
#include "MainFrm.h"
static long _OnExamTypeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnExamTypeListLoadData();
} 
static void _OnExamTypeListDblClickFnc(CWnd *pWnd){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnExamTypeListDblClick();
} 
static void _OnExamTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnExamTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnExamTypeListDeleteItem();
} 
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnUserListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPerformDeptPermSetupDialog *pVw = (CHMSPerformDeptPermSetupDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPerformDeptPermSetupDialog *pVw = (CHMSPerformDeptPermSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPerformDeptPermSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnAddHMSPerformDeptPermSetupDialog();
} 
static int _OnEditHMSPerformDeptPermSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnEditHMSPerformDeptPermSetupDialog();
} 
static int _OnDeleteHMSPerformDeptPermSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnDeleteHMSPerformDeptPermSetupDialog();
} 
static int _OnSaveHMSPerformDeptPermSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnSaveHMSPerformDeptPermSetupDialog();
} 
static int _OnCancelHMSPerformDeptPermSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSPerformDeptPermSetupDialog*)pWnd)->OnCancelHMSPerformDeptPermSetupDialog();
}
static int _OnListCheckAllFnc(CWnd* pWnd){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnListCheckAll();
	return 0;
}
static int _OnListUnCheckAllFnc(CWnd* pWnd){
	((CHMSPerformDeptPermSetupDialog*)pWnd)->OnListUnCheckAll();
	return 0;
}
CHMSPerformDeptPermSetupDialog::CHMSPerformDeptPermSetupDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPerformDeptPermSetupDialog::~CHMSPerformDeptPermSetupDialog(){
}
void CHMSPerformDeptPermSetupDialog::OnCreateComponents()
{
	m_wndUserInformation.Create(this, _T("User Information"), 5, 232, 320, 452);
	m_wndExamTypeInformation.Create(this, _T("Danh sách phòng"), 325, 6, 1020, 452);
	m_wndDepartmentInformation.Create(this, _T("Department List"), 5, 5, 320, 225);
	m_wndExamTypeList.Create(this,330, 31, 1016, 447); 
	m_wndUserList.Create(this,10, 257, 315, 447); 
	m_wndDeptList.Create(this,10, 30, 316, 220); 
	m_wndApply.Create(this, _T("&Apply"), 861, 458, 936, 483);
	m_wndClose.Create(this, _T("&Close"), 941, 458, 1016, 483);

}
void CHMSPerformDeptPermSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndUserList.InsertColumn(2, _T("XdeptID"), CFMT_TEXT, 80);

	m_wndExamTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndExamTypeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);
	m_wndExamTypeList.InsertColumn(2, _T("Khoa"), CFMT_TEXT, 50);
	m_wndExamTypeList.SetCheckBox(true);
	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);	
	//m_wndDeptList.SetCheckBox(true);
	m_wndUserList.SetCheckBox(true);
}
void CHMSPerformDeptPermSetupDialog::OnSetWindowEvents(){
	m_wndExamTypeList.SetEvent(WE_SELCHANGE, _OnExamTypeListSelectChangeFnc);
	m_wndExamTypeList.SetEvent(WE_LOADDATA, _OnExamTypeListLoadDataFnc);
	m_wndExamTypeList.SetEvent(WE_DBLCLICK, _OnExamTypeListDblClickFnc);
	//m_wndExamTypeList.AddEvent(1, _T("Delete"), _OnExamTypeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	//m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);
	//m_wndDeptList.AddEvent(1, _T("Delete"), _OnDeptListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndExamTypeList.AddEvent(1, _T("Chọn tất cả"), _OnListCheckAllFnc);
	m_wndExamTypeList.AddEvent(2, _T("Bỏ chọn tất cả"), _OnListUnCheckAllFnc);
	OnDeptListLoadData();
	OnExamTypeListLoadData();
	//OnUserListLoadData();

}
void CHMSPerformDeptPermSetupDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSPerformDeptPermSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPerformDeptPermSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPerformDeptPermSetupDialog::SetDefaultValues(){


}
int CHMSPerformDeptPermSetupDialog::SetMode(int nMode){
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
void CHMSPerformDeptPermSetupDialog::OnExamTypeListDblClick(){
	
} 
void CHMSPerformDeptPermSetupDialog::OnExamTypeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPerformDeptPermSetupDialog::OnExamTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
#include "StringToken.h"
long CHMSPerformDeptPermSetupDialog::OnExamTypeListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere;
	m_wndExamTypeList.BeginLoad(); 
	int nCount = 0;
	int nExamTypeID, nItem;

	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name,  hrl_deptid as deptid ") \
		_T("FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) ") \
		_T("WHERE (sd_id='%s' or sd_id= '%s') and hrl_section='HA' AND hrl_active ='Y' %s ORDER BY hrl_id "), m_szDeptID,m_szXDeptID , szWhere);	

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("id"), nExamTypeID);
		nItem = m_wndExamTypeList.AddItems
	(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
		    rs.GetValue(_T("deptid")), NULL);

		rs.MoveNext();
	}
	m_wndExamTypeList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSPerformDeptPermSetupDialog::OnUserListDblClick(){
	
} 
void CHMSPerformDeptPermSetupDialog::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);

	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nCount = 0;
	CArray<int, int&> ExamTypeList;

	szSQL.Format(_T("SELECT EX_PERFORMDEPT as ExamTypes FROM E_USERPERFORMDEPTPERM WHERE EX_USERID='%s' "), m_szUserID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("ExamTypes"), tmpStr);
		CStringToken token(tmpStr);
		for (int i =0; i < token.GetSize(); i++){
			int nExamTypeID;
			token.GetAt(i, nExamTypeID);
			ExamTypeList.Add(nExamTypeID);
		}
	}

	for (int i =0; i < m_wndExamTypeList.GetItemCount(); i++){
		int nExamType = str2int(m_wndExamTypeList.GetItemText(i, 0));
		bool found = false;
		for (int j =0; j < ExamTypeList.GetCount();j++){
			if(nExamType == ExamTypeList[j]){
				m_wndExamTypeList.SetCheck(i, true);
				found = true;
				break;
			}
		}
		if(!found){
			m_wndExamTypeList.SetCheck(i, false);
		}
	}
	//OnExamTypeListLoadData();

//	OnDeptListLoadData();
} 
int CHMSPerformDeptPermSetupDialog::OnUserListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPerformDeptPermSetupDialog::OnUserListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndUserList.BeginLoad(); 
	int nCount = 0;
	if(!m_szDeptID.IsEmpty())
		szWhere.AppendFormat(_T(" and su_deptid='%s'"), m_szDeptID);
	if (!m_szUserKey.IsEmpty())
		szWhere.AppendFormat(_T(" and su_userid = '%s'"), m_szUserKey);
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name, su_hms_xdept as XdeptID FROM sys_user WHERE 0=0 %s ORDER BY su_userid "), szWhere);
_debug(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserList.AddItems(
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("XdeptID")), NULL);
		rs.MoveNext();
	}
	m_wndUserList.EndLoad(); 
	return nCount;

}
void CHMSPerformDeptPermSetupDialog::OnDeptListDblClick(){
	
} 
void CHMSPerformDeptPermSetupDialog::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szDeptID = m_wndDeptList.GetItemText(nNewItem, 0);
	m_szXDeptID = m_wndUserList.GetItemText(nNewItem, 2);
	OnUserListLoadData();
	OnExamTypeListLoadData();
} 
int CHMSPerformDeptPermSetupDialog::OnDeptListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPerformDeptPermSetupDialog::OnDeptListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDept, tmpStr, szWhere;
	m_wndDeptList.BeginLoad(); 
	int nCount = 0;
	int nItem;
	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T("AND sd_id = '%s'"), m_szDeptKey);
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type in('DT','KB','XN','HA') %s ORDER BY sd_type, sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 	
		rs.GetValue(_T("id"), szDept);
		nItem = m_wndDeptList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);

		rs.MoveNext();
	}
	m_wndDeptList.EndLoad(); 
	return nCount;

}
void CHMSPerformDeptPermSetupDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szExamTypes, szDepts;
	szDepts.Format(_T("\"%s\""), m_szDeptID);
	szSQL.Format(_T("DELETE FROM E_USERPERFORMDEPTPERM WHERE EX_USERID='%s' "), m_szUserID);
	pMF->ExecSQL(szSQL);
	for (int i =0; i < m_wndExamTypeList.GetItemCount(); i++){
		if(m_wndExamTypeList.GetCheck(i)){
			if(!szExamTypes.IsEmpty())
				szExamTypes += _T(",");
			szExamTypes.AppendFormat(_T("%s"), m_wndExamTypeList.GetItemText(i, 0));
		}
	}
	int nCount = 0;
	CString szUser;
	for (int i =0; i < m_wndUserList.GetItemCount(); i++)
	{
		if(m_wndUserList.GetCheck(i))
		{
			szUser = m_wndUserList.GetItemText(i, 0);
			szSQL.Format(_T("DELETE FROM E_USERPERFORMDEPTPERM WHERE EX_USERID='%s' "), szUser);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("INSERT INTO E_USERPERFORMDEPTPERM values('%s', '%s', '%s', '%s') "), szUser, szExamTypes, szDepts, pMF->GetModuleID());
			int ret = pMF->ExecSQL(szSQL);
			if(ret)
				nCount++;
		}
	}
	if(nCount > 0)
	{
		ShowMessageBox(_T("Apply Successful."), MB_OK);
	}
} 
void CHMSPerformDeptPermSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CHMSPerformDeptPermSetupDialog::OnAddHMSPerformDeptPermSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPerformDeptPermSetupDialog::OnEditHMSPerformDeptPermSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPerformDeptPermSetupDialog::OnDeleteHMSPerformDeptPermSetupDialog(){
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
 		OnCancelHMSPerformDeptPermSetupDialog(); 
 	}
	return 0;
}
int CHMSPerformDeptPermSetupDialog::OnSaveHMSPerformDeptPermSetupDialog(){
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
 		//OnHMSPerformDeptPermSetupDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPerformDeptPermSetupDialog::OnCancelHMSPerformDeptPermSetupDialog(){
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
int CHMSPerformDeptPermSetupDialog::OnHMSPerformDeptPermSetupDialogListLoadData(){
	return 0;
}
void CHMSPerformDeptPermSetupDialog::OnListCheckAll()
{
	for (int i = 0;i < m_wndExamTypeList.GetItemCount(); i++)
		if (!m_wndExamTypeList.GetCheck(i))
			m_wndExamTypeList.SetCheck(i, true);
}

void CHMSPerformDeptPermSetupDialog::OnListUnCheckAll(){
	for (int i = 0;i < m_wndExamTypeList.GetItemCount(); i++)
		if (m_wndExamTypeList.GetCheck(i))
			m_wndExamTypeList.SetCheck(i, false);
}
