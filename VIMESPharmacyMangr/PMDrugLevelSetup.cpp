#include "PMDrugLevelSetup.h"
#include "MainFrm.h"
static void _OnSearchDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDrugLevelSetup* )pWnd)->OnSearchDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSearchDeptSelendokFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchDeptSelendok();
}
/*static void _OnSearchDeptSetfocusFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
/*static void _OnSearchDeptKillfocusFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchDeptKillfocus();
}*/
static long _OnSearchDeptLoadDataFnc(CWnd *pWnd){
	return ((CPMDrugLevelSetup *)pWnd)->OnSearchDeptLoadData();
}
/*static void _OnSearchDeptAddNewFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchDeptAddNew();
}*/
static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchNameChange();
}
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CPMDrugLevelSetup *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CPMDrugLevelSetup *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPMDrugLevelSetup *pVw = (CPMDrugLevelSetup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnLevelISelectFnc(CWnd *pWnd){
	CPMDrugLevelSetup *pVw = (CPMDrugLevelSetup *)pWnd;
	pVw->OnLevelISelect();
} 
static void _OnLevelIISelectFnc(CWnd *pWnd){
	CPMDrugLevelSetup *pVw = (CPMDrugLevelSetup *)pWnd;
	pVw->OnLevelIISelect();
} 
static void _OnLevelIIISelectFnc(CWnd *pWnd){
	CPMDrugLevelSetup *pVw = (CPMDrugLevelSetup *)pWnd;
	pVw->OnLevelIIISelect();
}
static void _OnLevelIVSelectFnc(CWnd *pWnd){
	CPMDrugLevelSetup *pVw = (CPMDrugLevelSetup *)pWnd;
	pVw->OnLevelIVSelect();
} 
static long _OnUserListLoadDataFnc(CWnd *pWnd){
	return ((CPMDrugLevelSetup*)pWnd)->OnUserListLoadData();
} 
static void _OnUserListDblClickFnc(CWnd *pWnd){
	((CPMDrugLevelSetup*)pWnd)->OnUserListDblClick();
} 
static void _OnUserListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMDrugLevelSetup*)pWnd)->OnUserListSelectChange(nOldItem, nNewItem);
} 
static int _OnUserListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnUserListDeleteItem();
} 
static long _OnPermListLoadDataFnc(CWnd *pWnd){
	return ((CPMDrugLevelSetup*)pWnd)->OnPermListLoadData();
} 
static void _OnPermListDblClickFnc(CWnd *pWnd){
	((CPMDrugLevelSetup*)pWnd)->OnPermListDblClick();
} 
static void _OnPermListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMDrugLevelSetup*)pWnd)->OnPermListSelectChange(nOldItem, nNewItem);
} 
static int _OnPermListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnPermListDeleteItem();
} 
static int _OnAddPMDrugLevelSetupFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnAddPMDrugLevelSetup();
} 
static int _OnEditPMDrugLevelSetupFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnEditPMDrugLevelSetup();
} 
static int _OnDeletePMDrugLevelSetupFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnDeletePMDrugLevelSetup();
} 
static int _OnSavePMDrugLevelSetupFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnSavePMDrugLevelSetup();
} 
static int _OnCancelPMDrugLevelSetupFnc(CWnd *pWnd){
	 return ((CPMDrugLevelSetup*)pWnd)->OnCancelPMDrugLevelSetup();
} 
CPMDrugLevelSetup::CPMDrugLevelSetup(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMDrugLevelSetup::~CPMDrugLevelSetup(){
}
void CPMDrugLevelSetup::OnCreateComponents(){
	m_wndSearchDeptLabel.Create(this, _T("Search For Dept"), 10, 30, 115, 55);
	m_wndSearchDept.Create(this,120, 30, 400, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 10, 60, 115, 85);
	m_wndSearchName.Create(this,120, 60, 250, 85); 
	m_wndLevelI.Create(this, _T("Level I"), 5, 435, 75, 460);
	m_wndLevelII.Create(this, _T("Level II"), 80, 435, 150, 460);
	m_wndLevelIII.Create(this, _T("Level III"), 155, 435, 225, 460);
	m_wndLevelIV.Create(this, _T("Level IV"), 230, 435, 300, 460);
	m_wndApply.Create(this, _T("&Apply"), 330, 435, 405, 460);
	m_wndUserInformation.Create(this, _T("User Information"), 5, 5, 405, 280);
	m_wndPermissionInformation.Create(this, _T("Permission Information"), 5, 285, 405, 430);
	m_wndUserList.Create(this,10, 90, 400, 275); 
	m_wndPermList.Create(this,10, 310, 400, 425); 
	m_wndPermList.SetCheckBox(true);

}
void CPMDrugLevelSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchDept.SetCheckValue(true);
	m_wndSearchDept.LimitText(1024);
	m_wndSearchName.SetLimitText(1024);
	m_wndSearchName.SetCheckValue(true);


	m_wndSearchDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSearchDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndUserList.InsertColumn(0, _T("User ID"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(1, _T("Dept"), CFMT_TEXT, 80);
	m_wndUserList.InsertColumn(2, _T("User Name"), CFMT_TEXT, 200);


	m_wndPermList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPermList.InsertColumn(1, _T("Module"), CFMT_TEXT, 80);
	m_wndPermList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);

	m_sys_userpermTbl.SetTableName(_T("sys_userperm"));
	m_sys_userpermTbl.AddField(_T("sup_userid"), dfText, 15); 
	m_sys_userpermTbl.AddField(_T("sup_permid"), dfText, 11); 
	m_sys_userpermTbl.AddField(_T("sup_moduleid"), dfText, 11); 


}
void CPMDrugLevelSetup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchDept.SetEvent(WE_SELENDOK, _OnSearchDeptSelendokFnc);
	//m_wndSearchDept.SetEvent(WE_SETFOCUS, _OnSearchDeptSetfocusFnc);
	//m_wndSearchDept.SetEvent(WE_KILLFOCUS, _OnSearchDeptKillfocusFnc);
	m_wndSearchDept.SetEvent(WE_SELCHANGE, _OnSearchDeptSelectChangeFnc);
	m_wndSearchDept.SetEvent(WE_LOADDATA, _OnSearchDeptLoadDataFnc);
	//m_wndSearchDept.SetEvent(WE_ADDNEW, _OnSearchDeptAddNewFnc);
	m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndLevelI.SetEvent(WE_CLICK, _OnLevelISelectFnc);
	m_wndLevelII.SetEvent(WE_CLICK, _OnLevelIISelectFnc);
	m_wndLevelIII.SetEvent(WE_CLICK, _OnLevelIIISelectFnc);
	m_wndLevelIV.SetEvent(WE_CLICK, _OnLevelIVSelectFnc);
	m_wndUserList.SetEvent(WE_SELCHANGE, _OnUserListSelectChangeFnc);
	m_wndUserList.SetEvent(WE_LOADDATA, _OnUserListLoadDataFnc);
	m_wndUserList.SetEvent(WE_DBLCLICK, _OnUserListDblClickFnc);
	m_wndUserList.AddEvent(1, _T("Delete"), _OnUserListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPermList.SetEvent(WE_SELCHANGE, _OnPermListSelectChangeFnc);
	m_wndPermList.SetEvent(WE_LOADDATA, _OnPermListLoadDataFnc);
	m_wndPermList.SetEvent(WE_DBLCLICK, _OnPermListDblClickFnc);
	m_wndPermList.AddEvent(1, _T("Delete"), _OnPermListDeleteItemFnc, 0, VK_DELETE, 0);
	OnSearchDeptLoadData();

}
void CPMDrugLevelSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSearchDept.GetDlgCtrlID(), m_szSearchDeptKey);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Check(pDX, m_wndLevelI.GetDlgCtrlID(), m_bLevelI);
	DDX_Check(pDX, m_wndLevelII.GetDlgCtrlID(), m_bLevelII);
	DDX_Check(pDX, m_wndLevelIII.GetDlgCtrlID(), m_bLevelIII);
	DDX_Check(pDX, m_wndLevelIV.GetDlgCtrlID(), m_bLevelIV);

}
void CPMDrugLevelSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMDrugLevelSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPMDrugLevelSetup::SetDefaultValues(){

	m_szSearchDeptKey.Empty();
	m_szSearchName.Empty();
	m_szOldLevel.Empty();

}
int CPMDrugLevelSetup::SetMode(int nMode){
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
void CPMDrugLevelSetup::OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMDrugLevelSetup::OnSearchDeptSelendok(){
	 OnUserListLoadData();
}
/*void CPMDrugLevelSetup::OnSearchDeptSetfocus(){
	
}*/
/*void CPMDrugLevelSetup::OnSearchDeptKillfocus(){
	
}*/
long CPMDrugLevelSetup::OnSearchDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSearchDept.IsSearchKey() && !m_szSearchDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szSearchDeptKey);
	}
	szWhere.AppendFormat(_T(" AND sd_id IN ('C1.1', 'C1.2', 'C1.3','AB','KD')"));
	m_wndSearchDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSearchDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMDrugLevelSetup::OnSearchDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPMDrugLevelSetup::OnSearchNameChange(){
	OnUserListLoadData();
}
/*void CPMDrugLevelSetup::OnSearchNameSetfocus(){
	
} */
/*void CPMDrugLevelSetup::OnSearchNameKillfocus(){
	
} */
int CPMDrugLevelSetup::OnSearchNameCheckValue(){
	return 0;
} 
void CPMDrugLevelSetup::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szEvent, szDesc, szLevel, szPermID;
	int nCount = 0;
	if(m_szUserID.IsEmpty())
		return;

	szSQL.Format(_T(" DELETE FROM sys_userperm WHERE sup_userid='%s' AND ((sup_moduleid = 'EM' ") \
				 _T(" AND sup_permid IN ('05.06', '05.07', '05.08', '05.10')) OR (sup_moduleid = 'PM' AND sup_permid IN ('10.14')))"), m_szUserID);
	pMF->ExecSQL(szSQL);
	for (int i = 0; i < m_wndPermList.GetItemCount(); i++)
	{
		if (m_wndPermList.GetCheck(i))
		{
			m_sys_userpermTbl.SetValue(_T("sup_userid"), m_szUserID);
			szPermID = m_wndPermList.GetItemText(i, 0);
			m_sys_userpermTbl.SetValue(_T("sup_permid"), szPermID);
			m_sys_userpermTbl.SetValue(_T("sup_moduleid"), m_wndPermList.GetItemText(i, 1));
			szSQL.Format(_T("%s"), m_sys_userpermTbl.GetInsertSQL());
			pMF->ExecSQL(szSQL);
			if (!szLevel.IsEmpty())
				szLevel += _T(", ");
			szLevel.AppendFormat(_T("%s"), szPermID);
			nCount++;
		}
	}
	if (nCount > 0)
	{
		szEvent = _T("Edit Drug Level Permission");
		szDesc.Format(_T("%s: [%s]->[%s]"), m_szUserID, m_szOldLevel, szLevel);
		pMF->SystemLog(szEvent, szDesc);
		OnPermListLoadData();
		AfxMessageBox(_T("Permission apply successfull"));
	}
	
} 

void CPMDrugLevelSetup::OnLevelISelect(){
	OnUserListLoadData();
}

void CPMDrugLevelSetup::OnLevelIISelect(){
	OnUserListLoadData();
}

void CPMDrugLevelSetup::OnLevelIIISelect(){
	OnUserListLoadData();
}
void CPMDrugLevelSetup::OnLevelIVSelect(){
	OnUserListLoadData();
}
void CPMDrugLevelSetup::OnUserListDblClick(){
	
} 
void CPMDrugLevelSetup::OnUserListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szUserID = m_wndUserList.GetItemText(nNewItem, 0);
	OnPermListLoadData();
} 
int CPMDrugLevelSetup::OnUserListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMDrugLevelSetup::OnUserListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString szLevel;
	m_wndUserList.BeginLoad(); 
	int nCount = 0;
	szWhere.Format(_T(" AND (su_deptid IN ('C1.1', 'C1.2', 'C1.3','AB') OR su_hms_xdept IN ('C1.1', 'C1.2', 'C1.3','AB'))"));
	if (!m_szSearchDeptKey.IsEmpty())
		szWhere.Format(_T(" AND (su_deptid = '%s' OR su_hms_xdept = '%s')"), m_szSearchDeptKey, m_szSearchDeptKey);
	if (!m_szSearchName.IsEmpty())
		szWhere.AppendFormat(_T(" AND (lower(su_name) LIKE (chr(37)||lower('%s')||chr(37))") \
		_T(" OR lower(su_userid) LIKE (chr(37)||lower('%s')||chr(37)))"), m_szSearchName, m_szSearchName);
	if (m_bLevelI)
	{
		if (!szLevel.IsEmpty())
			szLevel += _T(", ");
		szLevel += _T("'05.06'");
	}
	if (m_bLevelII)
	{
		if (!szLevel.IsEmpty())
			szLevel += _T(", ");
		szLevel += _T("'05.07'");
	}
	if (m_bLevelIII)
	{
		if (!szLevel.IsEmpty())
			szLevel += _T(", ");
		szLevel += _T("'05.08'");
	}
	if (m_bLevelIV)
	{
		if (!szLevel.IsEmpty())
			szLevel += _T(", ");
		szLevel += _T("'05.10'");
	}
	if (!szLevel.IsEmpty())
		szWhere.AppendFormat(_T(" AND (sup_moduleid = 'EM' AND sup_permid IN (%s))"), szLevel);
	szWhere.AppendFormat(_T(" AND su_isactive = 'Y'"));
	szSQL.Format(_T(" SELECT distinct su_userid userid, su_deptid dept, su_name username ") \
				 _T(" FROM sys_user ") \
				 _T(" LEFT JOIN sys_userperm ON (su_userid = sup_userid)") \
				 _T(" WHERE 1=1 %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUserList.AddItems(
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("Dept")), 
			rs.GetValue(_T("UserName")), NULL);
		rs.MoveNext();
	}
	m_wndUserList.EndLoad(); 
	return nCount;
}
void CPMDrugLevelSetup::OnPermListDblClick(){
	
} 
void CPMDrugLevelSetup::OnPermListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPMDrugLevelSetup::OnPermListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMDrugLevelSetup::OnPermListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_szOldLevel.Empty();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szModule, szPermID, szSub, tmpStr;
	m_wndPermList.BeginLoad(); 
	int nCount = 0, nItem = 0;
	szWhere.Format(_T(" AND (sp_moduleid = 'EM' AND sp_id IN ('05.06', '05.07', '05.08', '05.10'))") \
				   _T(" OR (sp_moduleid = 'PM' AND sp_id = '10.14')"));
	szSQL.Format(_T(" SELECT distinct sp_id, sp_moduleid, sp_name, ") \
				 _T("		 case when sp_id = sup_permid then 'Y' else 'N' end as sp_permflg") \
				 _T(" FROM sys_permission ") \
				 _T(" LEFT JOIN sys_userperm ON (sp_moduleid = sup_moduleid AND sp_id = sup_permid AND sup_userid = '%s')") \
				 _T(" WHERE 1=1 %s") \
				 _T(" ORDER BY sp_moduleid, sp_id"), m_szUserID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("sp_moduleid"), szModule);
		rs.GetValue(_T("sp_permflg"), tmpStr);
		rs.GetValue(_T("sp_id"), szPermID);
		szSub.Empty();
		for(int i=0; i < szPermID.GetLength(); i++)
		{
			szSub += _T(" ");
		}
		nItem = m_wndPermList.AddItems(
			szPermID,
			rs.GetValue(_T("sp_moduleid")),
			szSub+rs.GetValue(_T("sp_name")), NULL);
		if(tmpStr == _T("Y"))
		{
			m_wndPermList.SetCheck(nItem, TRUE);
			if (!m_szOldLevel.IsEmpty())
				m_szOldLevel += _T(", ");
			m_szOldLevel.AppendFormat(_T("%s"), szPermID);
		}
		if(szPermID.GetLength() == 2)
			m_wndPermList.SetItemBkColor(nItem, COLOR_BORDER, FALSE);
		tmpStr.Empty();
		rs.MoveNext();
	}
	m_wndPermList.EndLoad(); 
	return nCount;
}
int CPMDrugLevelSetup::OnAddPMDrugLevelSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMDrugLevelSetup::OnEditPMDrugLevelSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMDrugLevelSetup::OnDeletePMDrugLevelSetup(){
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
 		OnCancelPMDrugLevelSetup();
 	}
	return 0;
}
int CPMDrugLevelSetup::OnSavePMDrugLevelSetup(){
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
 		//OnPMDrugLevelSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMDrugLevelSetup::OnCancelPMDrugLevelSetup(){
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
int CPMDrugLevelSetup::OnPMDrugLevelSetupListLoadData(){
	return 0;
}
