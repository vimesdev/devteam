#include "HMSOperationInfoBoardDlg.h"
#include "MainFrm.h"
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationInfoBoardDlg* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnRoomAddNew();
}*/
/*static void _OnOperationTableChangeFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnOperationTableChange();
} */
/*static void _OnOperationTableSetfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnOperationTableSetfocus();} */ 
/*static void _OnOperationTableKillfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnOperationTableKillfocus();
} */
static int _OnOperationTableCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg *)pWnd)->OnOperationTableCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationInfoBoardDlg* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnStatusKillfocus();
}*/
static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnStatusKillfocus();
}
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnConsciousDateChangeFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnConsciousDateChange();
} */
/*static void _OnConsciousDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnConsciousDateSetfocus();} */ 
/*static void _OnConsciousDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnConsciousDateKillfocus();
} */
static int _OnConsciousDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg *)pWnd)->OnConsciousDateCheckValue();
} 
/*static void _OnReturnTimeChangeFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnTimeChange();
} */
/*static void _OnReturnTimeSetfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnTimeSetfocus();} */ 
/*static void _OnReturnTimeKillfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnTimeKillfocus();
} */
static int _OnReturnTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnTimeCheckValue();
} 
static void _OnReturnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationInfoBoardDlg* )pWnd)->OnReturnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReturnDeptSelendokFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnDeptSelendok();
}
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnDeptKillfocus();
}*/
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnDeptKillfocus();
}*/
static long _OnReturnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnDeptLoadData();
}
/*static void _OnReturnDeptAddNewFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg *)pWnd)->OnReturnDeptAddNew();
}*/
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationInfoBoardDlg *pVw = (CHMSOperationInfoBoardDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationInfoBoardDlg *pVw = (CHMSOperationInfoBoardDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationInfoBoardDlg *pVw = (CHMSOperationInfoBoardDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOperationInfoBoardDlg *pVw = (CHMSOperationInfoBoardDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationInfoBoardDlg *pVw = (CHMSOperationInfoBoardDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationInfoBoardDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationInfoBoardDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationInfoBoardDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationInfoBoardDlg*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSOperationInfoBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSOperationInfoBoardDlg*)pWnd)->OnAddHMSOperationInfoBoardDlg();
} 
static int _OnEditHMSOperationInfoBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSOperationInfoBoardDlg*)pWnd)->OnEditHMSOperationInfoBoardDlg();
} 
static int _OnDeleteHMSOperationInfoBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSOperationInfoBoardDlg*)pWnd)->OnDeleteHMSOperationInfoBoardDlg();
} 
static int _OnSaveHMSOperationInfoBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSOperationInfoBoardDlg*)pWnd)->OnSaveHMSOperationInfoBoardDlg();
} 
static int _OnCancelHMSOperationInfoBoardDlgFnc(CWnd *pWnd){
	 return ((CHMSOperationInfoBoardDlg*)pWnd)->OnCancelHMSOperationInfoBoardDlg();
} 
CHMSOperationInfoBoardDlg::CHMSOperationInfoBoardDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSOperationInfoBoardDlg::~CHMSOperationInfoBoardDlg(){
}
void CHMSOperationInfoBoardDlg::OnCreateComponents(){
	
	m_wndSurgeryInfo.Create(this, _T("Surgery Info"), 5, 310, 805, 395);
	m_wndRoomLabel.Create(this, _T("Room"), 10, 335, 120, 360);
	m_wndRoom.Create(this,125, 335, 290, 360); 
	m_wndOperationTableLabel.Create(this, _T("Operation Table"), 295, 335, 430, 360);
	m_wndOperationTable.Create(this,435, 335, 520, 360); 
	m_wndStatusLabel.Create(this, _T("Status"), 525, 335, 630, 360);
	m_wndStatus.Create(this,635, 335, 800, 360); 
	m_wndConsciousDateLabel.Create(this, _T("Conscious Date"), 10, 365, 120, 390);
	m_wndConsciousDate.Create(this,125, 365, 290, 390); 
	m_wndReturnTimeLabel.Create(this, _T("Th\x1EDDi gi\x61n v\x1EC1 kho\x61"), 295, 365, 430, 390);
	m_wndReturnTime.Create(this,435, 365, 520, 390); 
	m_wndReturnDeptLabel.Create(this, _T("Kho\x61 ti\x1EBFp nh\x1EADn"), 525, 365, 630, 390);
	m_wndReturnDept.Create(this,635, 365, 800, 390); 
	m_wndEdit.Create(this, _T("Edit"), 385, 400, 465, 425);
	m_wndDelete.Create(this, _T("Delete"), 470, 400, 550, 425);
	m_wndSave.Create(this, _T("Save"), 555, 400, 635, 425);
	m_wndCancel.Create(this, _T("Cancel"), 640, 400, 720, 425);
	m_wndClose.Create(this, _T("Close"), 725, 400, 805, 425);
	m_wndList.Create(this,5, 5, 805, 305); 
	
}
void CHMSOperationInfoBoardDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(22);
	m_wndOperationTable.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1);
	m_wndReturnTime.SetLimitText(22);
	m_wndReturnDept.LimitText(7);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReturnDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReturnDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("Room ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Table No"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(4, _T("Department"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Status"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Return Time"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Return Dept"), CFMT_TEXT, 100);

	m_hms_operation_boardTbl.SetTableName(_T("hms_operation_board"));
	m_hms_operation_boardTbl.AddField(_T("HOB_OPERATION_BOARD_ID"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_DATE"), dfDateTime); 
	m_hms_operation_boardTbl.AddField(_T("HOB_DOCNO"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_ROOMID"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_OPERATION_TABLE"), dfLong);
	m_hms_operation_boardTbl.AddField(_T("HOB_DEPTID"), dfText, 7); 
	m_hms_operation_boardTbl.AddField(_T("HOB_STATUS"), dfText, 1); 
	m_hms_operation_boardTbl.AddField(_T("HOB_RETTIME"), dfLong); 
	m_hms_operation_boardTbl.AddField(_T("HOB_RETDEPT"), dfText, 7);
	m_hms_operation_boardTbl.AddField(_T("HOB_CONSCIOUS_DATE"), dfDateTime);

}
void CHMSOperationInfoBoardDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndOperationTable.SetEvent(WE_CHANGE, _OnOperationTableChangeFnc);
	//m_wndOperationTable.SetEvent(WE_SETFOCUS, _OnOperationTableSetfocusFnc);
	//m_wndOperationTable.SetEvent(WE_KILLFOCUS, _OnOperationTableKillfocusFnc);
	m_wndOperationTable.SetEvent(WE_CHECKVALUE, _OnOperationTableCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndConsciousDate.SetEvent(WE_CHANGE, _OnConsciousDateChangeFnc);
	//m_wndConsciousDate.SetEvent(WE_SETFOCUS, _OnConsciousDateSetfocusFnc);
	//m_wndConsciousDate.SetEvent(WE_KILLFOCUS, _OnConsciousDateKillfocusFnc);
	m_wndConsciousDate.SetEvent(WE_CHECKVALUE, _OnConsciousDateCheckValueFnc);
	//m_wndReturnTime.SetEvent(WE_CHANGE, _OnReturnTimeChangeFnc);
	//m_wndReturnTime.SetEvent(WE_SETFOCUS, _OnReturnTimeSetfocusFnc);
	//m_wndReturnTime.SetEvent(WE_KILLFOCUS, _OnReturnTimeKillfocusFnc);
	m_wndReturnTime.SetEvent(WE_CHECKVALUE, _OnReturnTimeCheckValueFnc);
	m_wndReturnDept.SetEvent(WE_SELENDOK, _OnReturnDeptSelendokFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_SELCHANGE, _OnReturnDeptSelectChangeFnc);
	m_wndReturnDept.SetEvent(WE_LOADDATA, _OnReturnDeptLoadDataFnc);
	//m_wndReturnDept.SetEvent(WE_ADDNEW, _OnReturnDeptAddNewFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
//	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	GetDataToScreen();
	OnListLoadData();

}
void CHMSOperationInfoBoardDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndOperationTable.GetDlgCtrlID(), m_nOperationTable);
	DDX_TextEx(pDX, m_wndConsciousDate.GetDlgCtrlID(), m_szConsciousDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Text(pDX, m_wndReturnTime.GetDlgCtrlID(), m_nReturnTime);
	DDX_TextEx(pDX, m_wndReturnDept.GetDlgCtrlID(), m_szReturnDeptKey);

}
void CHMSOperationInfoBoardDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM HMS_OPERATION_BOARD WHERE  hob_docno = %ld"), m_nDocNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HOB_ROOMID"), m_szRoomKey);
		rs.GetValue(_T("HOB_OPERATION_TABLE"), m_nOperationTable);
		rs.GetValue(_T("HOB_STATUS"), m_szStatusKey);
		rs.GetValue(_T("HOB_RETTIME"), m_nReturnTime);
		rs.GetValue(_T("HOB_RETDEPT"), m_szReturnDeptKey);

		SetMode(VM_VIEW);

	}
	/*else
		SetMode(VM_ADD);*/

}
void CHMSOperationInfoBoardDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIndex = 0;
	szSQL.Format(_T(" SELECT coalesce(max(hob_operation_board_id), 0)+1 as boardid FROM HMS_OPERATION_BOARD  "));
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("boardid"), nIndex);
	_fmsg(_T("%s---%d"),szSQL, nIndex);
	m_hms_operation_boardTbl.SetValue(_T("HOB_OPERATION_BOARD_ID"), nIndex);
	m_hms_operation_boardTbl.SetValue(_T("HOB_DATE"), pMF->GetSysDate());
	m_hms_operation_boardTbl.SetValue(_T("HOB_DOCNO"), m_nDocNo);
	m_hms_operation_boardTbl.SetValue(_T("HOB_ROOMID"), m_szRoomKey);
	m_hms_operation_boardTbl.SetValue(_T("HOB_DEPTID"), m_szDeptID);
	m_hms_operation_boardTbl.SetValue(_T("HOB_STATUS"), m_szStatusKey);
	m_hms_operation_boardTbl.SetValue(_T("HOB_RETTIME"), m_nReturnTime);
	m_hms_operation_boardTbl.SetValue(_T("HOB_RETDEPT"), m_szReturnDeptKey);
	m_hms_operation_boardTbl.SetValue(_T("HOB_OPERATION_TABLE"), m_nOperationTable);
	m_hms_operation_boardTbl.SetValue(_T("HOB_CONSCIOUS_DATE"), m_szConsciousDate);
}
void CHMSOperationInfoBoardDlg::SetDefaultValues(){
	m_szRoomKey.Empty();
	m_szStatusKey.Empty();
	m_szConsciousDate.Empty();
	m_nReturnTime=0;
	m_szReturnDeptKey.Empty();
	m_szOperationTable.Empty();
	m_nOperationTable = 0;
}
int CHMSOperationInfoBoardDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 4,-1);
 			SetDefaultValues();
			m_szConsciousDate = pMF->GetSysDateTime();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, 4,-1);
			m_szConsciousDate = pMF->GetSysDateTime();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3,-1);
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
void CHMSOperationInfoBoardDlg::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationInfoBoardDlg::OnRoomSelendok(){
	 
}
/*void CHMSOperationInfoBoardDlg::OnRoomSetfocus(){
	
}*/
/*void CHMSOperationInfoBoardDlg::OnRoomKillfocus(){
	
}*/
long CHMSOperationInfoBoardDlg::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid IN('B5','PTTYC')  %s ORDER BY hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSOperationInfoBoardDlg::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationInfoBoardDlg::OnOperationTableChange(){
	
} */
/*void CHMSOperationInfoBoardDlg::OnOperationTableSetfocus(){
	
} */
/*void CHMSOperationInfoBoardDlg::OnOperationTableKillfocus(){
	
} */
int CHMSOperationInfoBoardDlg::OnOperationTableCheckValue(){
	return 0;
} 
void CHMSOperationInfoBoardDlg::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationInfoBoardDlg::OnStatusSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSOperationInfoBoardDlg::OnStatusSetfocus(){
	
}*/
void CHMSOperationInfoBoardDlg::OnStatusKillfocus(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatusKey != _T("P"))
	{
		m_szConsciousDate.Empty();
		UpdateData(FALSE);
		m_wndConsciousDate.EnableWindow(FALSE);
		m_wndReturnTime.EnableWindow(FALSE);
	}
}
long CHMSOperationInfoBoardDlg::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szStatusKey);
	}
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_operation_board' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationInfoBoardDlg::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSOperationInfoBoardDlg::OnConsciousDateChange(){
	
} */
/*void CHMSOperationInfoBoardDlg::OnConsciousDateSetfocus(){
	
} */
/*void CHMSOperationInfoBoardDlg::OnConsciousDateKillfocus(){
	
} */
int CHMSOperationInfoBoardDlg::OnConsciousDateCheckValue(){
	return 0;
} 
/*void CHMSOperationInfoBoardDlg::OnReturnTimeChange(){
	
} */
/*void CHMSOperationInfoBoardDlg::OnReturnTimeSetfocus(){
	
} */
/*void CHMSOperationInfoBoardDlg::OnReturnTimeKillfocus(){
	
} */
int CHMSOperationInfoBoardDlg::OnReturnTimeCheckValue(){
	return 0;
} 
void CHMSOperationInfoBoardDlg::OnReturnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationInfoBoardDlg::OnReturnDeptSelendok(){
	 
}
/*void CHMSOperationInfoBoardDlg::OnReturnDeptSetfocus(){
	
}*/
/*void CHMSOperationInfoBoardDlg::OnReturnDeptKillfocus(){
	
}*/
long CHMSOperationInfoBoardDlg::OnReturnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReturnDept.IsSearchKey() && !m_szReturnDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szReturnDeptKey);
	}
	m_wndReturnDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReturnDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationInfoBoardDlg::OnReturnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSOperationInfoBoardDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSOperationInfoBoardDlg();
} 
void CHMSOperationInfoBoardDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSOperationInfoBoardDlg();
} 
void CHMSOperationInfoBoardDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSOperationInfoBoardDlg();
} 
void CHMSOperationInfoBoardDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSOperationInfoBoardDlg();
} 
void CHMSOperationInfoBoardDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSOperationInfoBoardDlg::OnListDblClick(){
	
} 
void CHMSOperationInfoBoardDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nDocNo = ToLong(m_wndList.GetItemText(nNewItem, 2));
	GetDataToScreen();
} 
int CHMSOperationInfoBoardDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationInfoBoardDlg::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hob_docno, get_patientname(hob_docno) as pname, hob_roomid, hob_deptid, hob_rettime, hob_retdept, ") \
		_T(" (select ss_desc from sys_sel where ss_id = 'hms_operation_board' and ss_code = hob_status) as hob_status, ") \
		_T(" hob_operation_table FROM HMS_OPERATION_BOARD WHERE to_date(hob_date) = to_date('%s', 'yyyy/mm/dd')"), pMF->GetSysDate());
	_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hob_roomid")),
			rs.GetValue(_T("hob_operation_table")),
			rs.GetValue(_T("hob_docno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("hob_deptid")),
			rs.GetValue(_T("hob_status")),
			rs.GetValue(_T("hob_rettime")),
			rs.GetValue(_T("hob_retdept")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSOperationInfoBoardDlg::OnAddHMSOperationInfoBoardDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationInfoBoardDlg::OnEditHMSOperationInfoBoardDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	m_wndRoom.SetFocus();
	return 0;  
}
int CHMSOperationInfoBoardDlg::OnDeleteHMSOperationInfoBoardDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T(" DELETE FROM hms_operation_board WHERE hob_docno = %ld "), m_nDocNo);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_VIEW);
		OnListLoadData();
 		OnCancelHMSOperationInfoBoardDlg();
 	}
	return 0;
}
int CHMSOperationInfoBoardDlg::OnSaveHMSOperationInfoBoardDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_operation_boardTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE hob_docno = %ld"), m_nDocNo);
 		szSQL = m_hms_operation_boardTbl.GetUpdateSQL(_T("hob_operation_board_id,hob_date,hob_docno"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSOperationInfoBoardDlgListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationInfoBoardDlg::OnCancelHMSOperationInfoBoardDlg(){
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
int CHMSOperationInfoBoardDlg::OnHMSOperationInfoBoardDlgListLoadData(){
	return 0;
}
