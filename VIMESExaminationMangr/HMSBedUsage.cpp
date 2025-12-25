#include "HMSBedUsage.h"
#include "MainFrm.h"
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedUsage* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSBedUsage *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSBedUsage *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSBedUsage *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedUsage *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSBedUsage *)pWnd)->OnDeptAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedUsage*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSBedUsage*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBedUsage*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBedUsage*)pWnd)->OnListDeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedUsage *pVw = (CHMSBedUsage *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAvailableSelectFnc(CWnd *pWnd){
	CHMSBedUsage *pVw = (CHMSBedUsage *)pWnd;
	pVw->OnAvailableSelect();
} 
static int _OnAddHMSBedUsageFnc(CWnd *pWnd){
	 return ((CHMSBedUsage*)pWnd)->OnAddHMSBedUsage();
} 
static int _OnEditHMSBedUsageFnc(CWnd *pWnd){
	 return ((CHMSBedUsage*)pWnd)->OnEditHMSBedUsage();
} 
static int _OnDeleteHMSBedUsageFnc(CWnd *pWnd){
	 return ((CHMSBedUsage*)pWnd)->OnDeleteHMSBedUsage();
} 
static int _OnSaveHMSBedUsageFnc(CWnd *pWnd){
	 return ((CHMSBedUsage*)pWnd)->OnSaveHMSBedUsage();
} 
static int _OnCancelHMSBedUsageFnc(CWnd *pWnd){
	 return ((CHMSBedUsage*)pWnd)->OnCancelHMSBedUsage();
} 

CHMSBedUsage::CHMSBedUsage(CWnd *pParent, CString szDeptKey):
	CGuiDialog(pParent){
	m_szDeptKey = szDeptKey;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSBedUsage::~CHMSBedUsage(){
}
void CHMSBedUsage::OnCreateComponents(){
	m_wndBedUsage.Create(this, _T("Bed Usage"), 5, 5, 520, 335);
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 30, 90, 55);
	m_wndDept.Create(this,95, 30, 515, 55); 
	m_wndAvailable.Create(this, _T("Available"), 5, 340, 165, 365);
	m_wndClose.Create(this, _T("&Close"), 440, 341, 520, 366);
	m_wndList.Create(this,10, 60, 515, 330); 
}
void CHMSBedUsage::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Used"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(3, _T("Emergency"), CFMT_TEXT, 75);
	m_wndList.InsertColumn(4, _T("Plan"), CFMT_TEXT, 75);

}
void CHMSBedUsage::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAvailable.SetEvent(WE_CLICK, _OnAvailableSelectFnc);
	UpdateData(FALSE);
	OnListLoadData();
}
void CHMSBedUsage::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndAvailable.GetDlgCtrlID(), m_bAvailable);
}
void CHMSBedUsage::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSBedUsage::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBedUsage::SetDefaultValues(){
	//m_szDeptKey.Empty();
	m_bAvailable = FALSE;

}
int CHMSBedUsage::SetMode(int nMode){
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
void CHMSBedUsage::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CHMSBedUsage::OnDeptSelendok(){
	OnListLoadData();
}
/*void CHMSBedUsage::OnDeptSetfocus(){
	
}*/
/*void CHMSBedUsage::OnDeptKillfocus(){
	
}*/
long CHMSBedUsage::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type = 'DT' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSBedUsage::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSBedUsage::OnListDblClick(){
	
} 
void CHMSBedUsage::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSBedUsage::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSBedUsage::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szHavingClause;
	int nPrevRoomID = 0, nNextRoomID = 0;
	m_wndList.BeginLoad(); 
	int nCount = 0, nItem = 0;
	szWhere.Format(_T(" AND hbl_deptid = '%s'"), m_szDeptKey);
	if (m_bAvailable)
		szHavingClause.Format(_T(" HAVING sum(case when hb_status = 'O' then 1 else 0 end) = 0"));
	szSQL.Format(_T("SELECT hbl_roomid roomid, hbl_id id, hbl_name name, sum(case when hb_status = 'O' then 1 else 0 end) used, ") \
				_T(" case when hbl_typeid = 'P' then 'X' else NULL end plan, ") \
				_T(" case when hbl_typeid = 'E' then 'X' else NULL end emergency ") \
				_T(" FROM hms_bedlist ") \
				_T(" LEFT JOIN hms_bed ON (hb_deptid = hbl_deptid AND hb_roomid = hbl_roomid AND hb_bedid = hbl_id) ") \
				_T(" WHERE 1=1 %s ") \
				_T(" GROUP BY hbl_roomid, hbl_id, hbl_name, hbl_typeid ") \
				_T(" %s") \
				_T(" ORDER BY hbl_roomid, hbl_id"), szWhere, szHavingClause);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("roomid"), nNextRoomID);
		if (nNextRoomID != nPrevRoomID)
		{
			nItem = m_wndList.AddItems(_T(""), pMF->GetRoomName(m_szDeptKey, nNextRoomID), NULL);
			m_wndList.SetItemBkColor(nItem, RGB(192, 192, 192), 0);
			nPrevRoomID = nNextRoomID;
		}
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Used")), 
			rs.GetValue(_T("Emergency")), 
			rs.GetValue(_T("Plan")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSBedUsage::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSBedUsage::OnAddHMSBedUsage(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSBedUsage::OnEditHMSBedUsage(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedUsage::OnDeleteHMSBedUsage(){
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
 		OnCancelHMSBedUsage();
 	}
	return 0;
}
int CHMSBedUsage::OnSaveHMSBedUsage(){
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
 		//OnHMSBedUsageListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSBedUsage::OnCancelHMSBedUsage(){
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
int CHMSBedUsage::OnHMSBedUsageListLoadData(){
	return 0;
}
void CHMSBedUsage::OnAvailableSelect(){
	OnListLoadData();
}