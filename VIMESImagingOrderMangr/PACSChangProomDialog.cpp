#include "PACSChangProomDialog.h"
#include "MainFrm.h"
static void _OnPerformRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSChangProomDialog* )pWnd)->OnPerformRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformRoomSelendokFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformRoomSelendok();
}
/*static void _OnPerformRoomSetfocusFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformRoomKillfocus();
}*/
/*static void _OnPerformRoomKillfocusFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformRoomKillfocus();
}*/
static long _OnPerformRoomLoadDataFnc(CWnd *pWnd){
	return ((CPACSChangProomDialog *)pWnd)->OnPerformRoomLoadData();
}
/*static void _OnPerformRoomAddNewFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformRoomAddNew();
}*/
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CPACSChangProomDialog *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSChangProomDialog *)pWnd)->OnPerformDateCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPACSChangProomDialog *pVw = (CPACSChangProomDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSChangProomDialog *pVw = (CPACSChangProomDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCPACSChangProomDialogFnc(CWnd *pWnd){
	 return ((CPACSChangProomDialog*)pWnd)->OnAddCPACSChangProomDialog();
} 
static int _OnEditCPACSChangProomDialogFnc(CWnd *pWnd){
	 return ((CPACSChangProomDialog*)pWnd)->OnEditCPACSChangProomDialog();
} 
static int _OnDeleteCPACSChangProomDialogFnc(CWnd *pWnd){
	 return ((CPACSChangProomDialog*)pWnd)->OnDeleteCPACSChangProomDialog();
} 
static int _OnSaveCPACSChangProomDialogFnc(CWnd *pWnd){
	 return ((CPACSChangProomDialog*)pWnd)->OnSaveCPACSChangProomDialog();
} 
static int _OnCancelCPACSChangProomDialogFnc(CWnd *pWnd){
	 return ((CPACSChangProomDialog*)pWnd)->OnCancelCPACSChangProomDialog();
} 
CPACSChangProomDialog::CPACSChangProomDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPACSChangProomDialog::~CPACSChangProomDialog(){
}
void CPACSChangProomDialog::OnCreateComponents(){
	m_wndPerformRoomLabel.Create(this, _T("Phòng thực hiện"), 10, 30, 125, 55);
	m_wndPerformRoom.Create(this,130, 30, 494, 55); 
	m_wndPerformDateLael.Create(this, _T("Ngày thực hiện"), 10, 60, 125, 85);
	m_wndPerformDate.Create(this,130, 60, 494, 85); 
	m_wndApply.Create(this, _T("&Apply"), 330, 95, 410, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 415, 95, 495, 120);
	m_wndChangeOrder.Create(this, _T("Chuyển phòng thực hiện"), 5, 5, 500, 90);

}
void CPACSChangProomDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPerformRoom.SetCheckValue(true);
	m_wndPerformRoom.LimitText(1024);
	m_wndPerformDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPerformDate.SetCheckValue(true);

	m_wndPerformRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndPerformRoom.InsertColumn(2, _T("Mã máy"), CFMT_TEXT, 90);
	m_wndPerformRoom.InsertColumn(3, _T("Khoa"), CFMT_TEXT, 90);



}
void CPACSChangProomDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPerformRoom.SetEvent(WE_SELENDOK, _OnPerformRoomSelendokFnc);
	//m_wndPerformRoom.SetEvent(WE_SETFOCUS, _OnPerformRoomSetfocusFnc);
	//m_wndPerformRoom.SetEvent(WE_KILLFOCUS, _OnPerformRoomKillfocusFnc);
	m_wndPerformRoom.SetEvent(WE_SELCHANGE, _OnPerformRoomSelectChangeFnc);
	m_wndPerformRoom.SetEvent(WE_LOADDATA, _OnPerformRoomLoadDataFnc);
	//m_wndPerformRoom.SetEvent(WE_ADDNEW, _OnPerformRoomAddNewFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_szPerformDate = pMF->GetSysDate();

	SetMode(VM_NONE);

}
void CPACSChangProomDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPerformRoom.GetDlgCtrlID(), m_szPerformRoomKey);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);

}
void CPACSChangProomDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PerformRoom")] =  m_szPerformRoomKey;
	m_jData[_T("PerformDate")] =  m_szPerformDate;
	}
	else
	{
			
	m_jData[_T("PerformRoom")].GetValue(m_szPerformRoomKey);
	m_jData[_T("PerformDate")].GetValue(m_szPerformDate);
	}

}
void CPACSChangProomDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSChangProomDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSChangProomDialog::SetDefaultValues(){

	m_szPerformRoomKey.Empty();
	m_szPerformDate.Empty();

}
int CPACSChangProomDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			//SetDefaultValues();
 			break;
 		};
		m_wndPerformRoom.EnableWindow(true);
		m_wndPerformDate.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CPACSChangProomDialog::OnPerformRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSChangProomDialog::OnPerformRoomSelendok(){
	 
}
/*void CPACSChangProomDialog::OnPerformRoomSetfocus(){
	
}*/
/*void CPACSChangProomDialog::OnPerformRoomKillfocus(){
	
}*/
long CPACSChangProomDialog::OnPerformRoomLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformRoom.IsSearchKey() && !m_szPerformRoomKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hrl_id ='%s' "), m_szPerformRoomKey);
	};
	szWhere.Format(_T(" AND NVL(HRL_ACTIVE, 'N') ='Y' "));
	m_wndPerformRoom.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T(" SELECT sd_id as id,sd_name as name FROM sys_dept WHERE sd_type IN('DT','KB') %s ORDER BY sd_index "), szWhere);
	if (pMF->m_szZoneID == _T("PTTYC") || !pMF->m_UserInfo.su_hms_xdepts.IsEmpty())
	{	
	szSQL.Format(_T(" SELECT hrl_id AS id,") \
	_T("   hrl_name    AS name, ") \
	_T("   hrl_deptid as deptid ") \
	_T(" FROM hms_roomlist") \
	_T(" LEFT JOIN sys_dept") \
	_T(" ON(sd_id                          =hrl_deptid)") \
	_T(" WHERE 1=1") \
	_T(" AND hrl_section                   ='HA'") \
	_T(" AND hrl_active                    ='Y'") \
	_T(" and ((sd_id='%s')") \
	_T(" OR CAST(hrl_id AS NVARCHAR2(3)) IN") \
	_T("   (SELECT                         *") \
	_T("   FROM TABLE") \
	_T("     (SELECT split_str(EX_PERFORMDEPT)") \
	_T("     FROM E_USERPERFORMDEPTPERM") \
	_T("     WHERE EX_USERID='%s'") \
	_T("     )") \
	_T("   ))") \
	_T(" and hrl_deptid ='%s'") \
	_T(" %s ORDER BY hrl_deptid, hrl_id"), pMF->m_szDept, pMF->GetCurrentUser() , pMF->m_szDept, szWhere);
	}
	else
		szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid,  ") \
			_T(" ma_shortname as serialcode ") \
		_T(" FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) ") \
			_T(" LEFT JOIN hms_machine_list_for_ins") \
			_T(" ON (hrl_deptid = ma_deptid and hrl_id = ma_roomid )") \
		_T("WHERE (sd_id='%s') and hrl_section='HA' AND hrl_active ='Y' %s ORDER BY hrl_deptid, hrl_id "), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndPerformRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("serialcode")),
			rs.GetValue(_T("deptid")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CPACSChangProomDialog::OnPerformRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSChangProomDialog::OnPerformDateChange(){
	
} */
/*void CPACSChangProomDialog::OnPerformDateSetfocus(){
	
} */
/*void CPACSChangProomDialog::OnPerformDateKillfocus(){
	
} */
int CPACSChangProomDialog::OnPerformDateCheckValue(){
	return 0;
} 
void CPACSChangProomDialog::OnApplySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOK();
	
} 
void CPACSChangProomDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CPACSChangProomDialog::OnAddCPACSChangProomDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSChangProomDialog::OnEditCPACSChangProomDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSChangProomDialog::OnDeleteCPACSChangProomDialog(){
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
 		OnCancelCPACSChangProomDialog();
 	}
	return 0;
}
int CPACSChangProomDialog::OnSaveCPACSChangProomDialog(){
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
 		//OnCPACSChangProomDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSChangProomDialog::OnCancelCPACSChangProomDialog(){
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
int CPACSChangProomDialog::OnCPACSChangProomDialogListLoadData(){
	return 0;
}
