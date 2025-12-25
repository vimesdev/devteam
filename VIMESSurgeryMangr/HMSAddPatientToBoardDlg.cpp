#include "HMSAddPatientToBoardDlg.h"
#include "MainFrm.h"
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddPatientToBoardDlg* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddPatientToBoardDlg *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnRoomAddNew();
}*/

static void _OnOperationTableSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddPatientToBoardDlg* )pWnd)->OnOperationTableSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationTableSelendokFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnOperationTableSelendok();
}
/*static void _OnOperationTableSetfocusFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnOperationTableKillfocus();
}*/
/*static void _OnOperationTableKillfocusFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnOperationTableKillfocus();
}*/
static long _OnOperationTableLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddPatientToBoardDlg *)pWnd)->OnOperationTableLoadData();
}
/*static void _OnOperationTableAddNewFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnOperationTableAddNew();
}*/

static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddPatientToBoardDlg* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddPatientToBoardDlg *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSAddPatientToBoardDlg *)pWnd)->OnStatusAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAddPatientToBoardDlg *pVw = (CHMSAddPatientToBoardDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAddPatientToBoardDlg *pVw = (CHMSAddPatientToBoardDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAddPatientToBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSAddPatientToBoardDlg*)pWnd)->OnAddHMSAddPatientToBoardDlg();
} 
static int _OnEditHMSAddPatientToBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSAddPatientToBoardDlg*)pWnd)->OnEditHMSAddPatientToBoardDlg();
} 
static int _OnDeleteHMSAddPatientToBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSAddPatientToBoardDlg*)pWnd)->OnDeleteHMSAddPatientToBoardDlg();
} 
static int _OnSaveHMSAddPatientToBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSAddPatientToBoardDlg*)pWnd)->OnSaveHMSAddPatientToBoardDlg();
} 
static int _OnCancelHMSAddPatientToBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSAddPatientToBoardDlg*)pWnd)->OnCancelHMSAddPatientToBoardDlg();
} 
CHMSAddPatientToBoardDlg::CHMSAddPatientToBoardDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nRetTime = 0;
	m_szRetDept.Empty();
}
CHMSAddPatientToBoardDlg::~CHMSAddPatientToBoardDlg(){
}
void CHMSAddPatientToBoardDlg::OnCreateComponents(){
	m_wndSurgeryInfo.Create(this, _T("Surgery Info"), 5, 5, 805, 60);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 30, 120, 55);
	m_wndRoom.Create(this,125, 30, 305, 55); 
	m_wndOperationTableLabel.Create(this, _T("Operation Table"), 310, 30, 415, 55);
	m_wndOperationTable.Create(this,420, 30, 505, 55); 
	m_wndStatusLabel.Create(this, _T("Status"), 510, 30, 615, 55);
	m_wndStatus.Create(this,620, 30, 800, 55); 
	m_wndSave.Create(this, _T("Save"), 640, 65, 720, 90);
	m_wndClose.Create(this, _T("Close"), 724, 65, 804, 90);

}
void CHMSAddPatientToBoardDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(1024);
	m_wndOperationTable.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndOperationTable.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOperationTable.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_operation_boardTbl.AddField(_T("HOB_DOCNO"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_DATE"), dfDate); 
	m_hms_operation_boardTbl.AddField(_T("HOB_DEPTID"), dfText, 7); 
	m_hms_operation_boardTbl.AddField(_T("HOB_ROOMID"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_OPERATION_TABLE"), dfLong);
	m_hms_operation_boardTbl.AddField(_T("HOB_STATUS"), dfText, 1); 
	m_hms_operation_boardTbl.AddField(_T("HOB_RETTIME"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_RETDEPT"), dfText, 7);
	m_hms_operation_boardTbl.AddField(_T("HOB_CONSCIOUS_DATE"), dfDateTime);

	


}
void CHMSAddPatientToBoardDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	
	m_wndOperationTable.SetEvent(WE_SELENDOK, _OnOperationTableSelendokFnc);
	//m_wndOperationTable.SetEvent(WE_SETFOCUS, _OnOperationTableSetfocusFnc);
	//m_wndOperationTable.SetEvent(WE_KILLFOCUS, _OnOperationTableKillfocusFnc);
	m_wndOperationTable.SetEvent(WE_SELCHANGE, _OnOperationTableSelectChangeFnc);
	m_wndOperationTable.SetEvent(WE_LOADDATA, _OnOperationTableLoadDataFnc);
	//m_wndOperationTable.SetEvent(WE_ADDNEW, _OnOperationTableAddNewFnc);

	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CHMSAddPatientToBoardDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndOperationTable.GetDlgCtrlID(), m_szOperationTableKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CHMSAddPatientToBoardDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_operation_board WHERE hob_docno = %ld"), m_nDocNo);

	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hob_roomid"), m_szRoomKey);
		rs.GetValue(_T("hob_operation_table"), m_szOperationTableKey);
		rs.GetValue(_T("hob_status"), m_szStatusKey);
		rs.GetValue(_T("hob_rettime"), m_nRetTime);
		rs.GetValue(_T("hob_retdept"), m_szRetDept);
		rs.GetValue(_T("hob_conscious_date"), m_szConsciousTime);
		rs.GetValue(_T("hob_date"), m_szPerformDate);
		SetMode(VM_VIEW);
	}else
		SetMode(VM_ADD);

}
void CHMSAddPatientToBoardDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIndex = 0;
	if(m_szPerformDate.IsEmpty())
	{
		m_szPerformDate = pMF->GetSysDate();
	}
	m_hms_operation_boardTbl.SetValue(_T("HOB_DATE"), pMF->GetSysDate());
	m_hms_operation_boardTbl.SetValue(_T("HOB_PERFORMDATE"), m_szPerformDate);
	m_hms_operation_boardTbl.SetValue(_T("HOB_DOCNO"), m_nDocNo);
	m_hms_operation_boardTbl.SetValue(_T("HOB_ROOMID"), m_szRoomKey);
	m_hms_operation_boardTbl.SetValue(_T("HOB_DEPTID"), m_szDeptID);
	m_hms_operation_boardTbl.SetValue(_T("HOB_STATUS"), m_szStatusKey);
	m_hms_operation_boardTbl.SetValue(_T("HOB_OPERATION_TABLE"), m_szOperationTableKey);
	m_hms_operation_boardTbl.SetValue(_T("HOB_RETTIME"), m_nRetTime);
	m_hms_operation_boardTbl.SetValue(_T("HOB_RETDEPT"), m_szRetDept);
	
	if(m_szConsciousTime.IsEmpty())
		m_szConsciousTime = pMF->GetSysDateTime();

	m_hms_operation_boardTbl.SetValue(_T("HOB_CONSCIOUS_DATE"), m_szConsciousTime);
}
void CHMSAddPatientToBoardDlg::SetDefaultValues(){

	m_szRoomKey.Empty();
	m_szOperationTableKey.Empty();
	m_szStatusKey.Empty();

}
int CHMSAddPatientToBoardDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
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
void CHMSAddPatientToBoardDlg::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddPatientToBoardDlg::OnRoomSelendok(){
	 
}
/*void CHMSAddPatientToBoardDlg::OnRoomSetfocus(){
	
}*/
/*void CHMSAddPatientToBoardDlg::OnRoomKillfocus(){
	
}*/
long CHMSAddPatientToBoardDlg::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid IN('B5')  %s ORDER BY hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddPatientToBoardDlg::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */


void CHMSAddPatientToBoardDlg::OnOperationTableSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddPatientToBoardDlg::OnOperationTableSelendok(){
	 
}
/*void CHMSAddPatientToBoardDlg::OnOperationTableSetfocus(){
	
}*/
/*void CHMSAddPatientToBoardDlg::OnOperationTableKillfocus(){
	
}*/
long CHMSAddPatientToBoardDlg::OnOperationTableLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndOperationTable.IsSearchKey() && str2int(m_szOperationTableKey) > 0)
	{
		szWhere.Format(_T("WHERE hst_idx=%d"), str2int(m_szOperationTableKey));
	}
	m_wndOperationTable.DeleteAllItems(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT hst_idx as id, hst_name as name FROM hms_surgery_table %s ORDER BY hst_idx "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationTable.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddPatientToBoardDlg::OnOperationTableAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSAddPatientToBoardDlg::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddPatientToBoardDlg::OnStatusSelendok(){
	 
}
/*void CHMSAddPatientToBoardDlg::OnStatusSetfocus(){
	
}*/
/*void CHMSAddPatientToBoardDlg::OnStatusKillfocus(){
	
}*/
long CHMSAddPatientToBoardDlg::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
	}
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_operation_board' AND ss_code = 'W' ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAddPatientToBoardDlg::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAddPatientToBoardDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAddPatientToBoardDlg();
} 
void CHMSAddPatientToBoardDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSAddPatientToBoardDlg::OnAddHMSAddPatientToBoardDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAddPatientToBoardDlg::OnEditHMSAddPatientToBoardDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAddPatientToBoardDlg::OnDeleteHMSAddPatientToBoardDlg(){
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
 		OnCancelHMSAddPatientToBoardDlg();
 	}
	return 0;
}
int CHMSAddPatientToBoardDlg::OnSaveHMSAddPatientToBoardDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	
	szSQL.Format(_T("HMS_OPERATION_BOARD_CREATE(%s)"), m_hms_operation_boardTbl.FormatSQL());

 _fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnHMSAddPatientToBoardDlgListLoadData();
 		SetMode(VM_VIEW);
		CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAddPatientToBoardDlg::OnCancelHMSAddPatientToBoardDlg(){
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
int CHMSAddPatientToBoardDlg::OnHMSAddPatientToBoardDlgListLoadData(){
	return 0;
}
