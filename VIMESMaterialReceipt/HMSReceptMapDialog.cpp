#include "HMSReceptMapDialog.h"
#include "MainFrm.h"
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSReceptMapDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSReceptMapDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSReceptMapDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSReceptMapDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSReceptMapDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSReceptMapDialog *)pWnd)->OnRoomAddNew();
}*/
static long _OnAssignedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSReceptMapDialog*)pWnd)->OnAssignedListLoadData();
} 
static void _OnAssignedListDblClickFnc(CWnd *pWnd){
	((CHMSReceptMapDialog*)pWnd)->OnAssignedListDblClick();
} 
static void _OnAssignedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSReceptMapDialog*)pWnd)->OnAssignedListSelectChange(nOldItem, nNewItem);
} 
static int _OnAssignedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSReceptMapDialog*)pWnd)->OnAssignedListDeleteItem();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSReceptMapDialog *pVw = (CHMSReceptMapDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSReceptMapDialog *pVw = (CHMSReceptMapDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSReceptMapDialogFnc(CWnd *pWnd){
	 return ((CHMSReceptMapDialog*)pWnd)->OnAddHMSReceptMapDialog();
} 
static int _OnEditHMSReceptMapDialogFnc(CWnd *pWnd){
	 return ((CHMSReceptMapDialog*)pWnd)->OnEditHMSReceptMapDialog();
} 
static int _OnDeleteHMSReceptMapDialogFnc(CWnd *pWnd){
	 return ((CHMSReceptMapDialog*)pWnd)->OnDeleteHMSReceptMapDialog();
} 
static int _OnSaveHMSReceptMapDialogFnc(CWnd *pWnd){
	 return ((CHMSReceptMapDialog*)pWnd)->OnSaveHMSReceptMapDialog();
} 
static int _OnCancelHMSReceptMapDialogFnc(CWnd *pWnd){
	 return ((CHMSReceptMapDialog*)pWnd)->OnCancelHMSReceptMapDialog();
} 
CHMSReceptMapDialog::CHMSReceptMapDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 766;
	m_nDlgHeight = 573;
	SetDefaultValues();
}
CHMSReceptMapDialog::~CHMSReceptMapDialog(){
}
void CHMSReceptMapDialog::OnCreateComponents(){
	m_wndRoomLabel.Create(this, _T("Room"), 5, 5, 105, 30);
	m_wndRoom.Create(this,110, 5, 635, 30); 
	m_wndAssignedList.Create(this,5, 35, 635, 240); 
	m_wndSave.Create(this, _T("&Save"), 476, 245, 556, 270);
	m_wndClose.Create(this, _T("&Close"), 561, 245, 641, 270);

}
void CHMSReceptMapDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndAssignedList.InsertColumn(0, _T("Order ID"), CFMT_TEXT, 100);
	m_wndAssignedList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndAssignedList.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 100);

}
void CHMSReceptMapDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndAssignedList.SetEvent(WE_SELCHANGE, _OnAssignedListSelectChangeFnc);
	m_wndAssignedList.SetEvent(WE_LOADDATA, _OnAssignedListLoadDataFnc);
	m_wndAssignedList.SetEvent(WE_DBLCLICK, _OnAssignedListDblClickFnc);
	m_wndAssignedList.AddEvent(1, _T("Delete"), _OnAssignedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);

}
void CHMSReceptMapDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CHMSReceptMapDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSReceptMapDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSReceptMapDialog::SetDefaultValues(){

	m_szRoomKey.Empty();

}
int CHMSReceptMapDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHMSReceptMapDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReceptMapDialog::OnRoomSelendok(){
	 
}
/*void CHMSReceptMapDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSReceptMapDialog::OnRoomKillfocus(){
	
}*/
long CHMSReceptMapDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szKey;
	int nSel = 0;
	szWhere.Empty();
	
	if(m_wndRoom.IsSearchKey() && ToInt(szKey) > 0){
		szWhere.Format(_T(" and hrl_id=%d "), ToInt(szKey));
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;

	if(pMF->m_szDept == _T("TYC"))
	{
		szWhere.AppendFormat(_T(" and NVL(hrl_isreq,'N')='Y' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hrl_deptid='%s' and NVL(hrl_isreq,'N')<>'Y' "), pMF->m_szDept);
	}
	if(m_szGroupID.Left(2) == _T("B2"))
	{
		szWhere.AppendFormat(_T(" and hrl_deptid='C8' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hrl_deptid <> 'C8' "));

	}
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name, hrl_deptid as deptid ") \
		_T("FROM hms_roomlist LEFT JOIN sys_dept ON(sd_id=hrl_deptid) ") \
		_T("WHERE hrl_section='HA' %s ORDER BY hrl_id "), szWhere);	
	_tprintf(_T("\r\n%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("deptid")),
			NULL);
		
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSReceptMapDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSReceptMapDialog::OnAssignedListDblClick(){
	
} 
void CHMSReceptMapDialog::OnAssignedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSReceptMapDialog::OnAssignedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSReceptMapDialog::OnAssignedListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, normindex, szWhere, szRoomID, szRoomName, szDeptID, szItemID;
	int nItem = 0, instid=0, nRoomID;
	m_wndAssignedList.BeginLoad(); 
	
	int nCount = 0;
	CString szStatus;

	szWhere.AppendFormat(_T(" and hpc_groupid in(select sup_permid from sys_userperm where sup_userid='%s' ) "), pMF->GetCurrentUser());
	//szWhere.AppendFormat(_T(" and (substr(hpc_groupid, 1,2) in('B2','B3') or substr(hpc_groupid, 1, 3) IN('B1E','B1F')) "));


	szSQL.Format(_T(" SELECT hpc_groupid, hpc_orderid as orderid, trunc_date(hpc_orderdate) as orderdate, hpc_deptid as orderdept, hpc_status, hpc_createdby as createdby, ") \
			_T("	hpcl_itemid as itemid, hpcl_practitioner as practitioner, trunc_date(hpcl_date) as performeddate, ") \
			_T("	hpcl_orderlineid as orderlineid, ") \
			_T(" 	hfl_name as name, ") \
			_T(" 	hfl_unit as unit, ") \
			_T(" 	hfl_numimg as numimg , ") \
			_T("	hpcl_receptno as receptno, ") \
			_T("	hpcl_proomid, hpcl_perform_deptid, ") \
			_T("	hpcl_statusmap as statusline, ") \
			_T(" 	hpcl_result as formid ") \
			_T(" FROM hms_pacsorder") \
			_T(" LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
			_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) ") \
			_T(" WHERE hpc_docno=%ld and hpc_status not in('O','T') and length(hpcl_itemid) > 0 %s ") \
			_T(" ORDER BY hpc_groupid,hpc_orderid, hfl_line "), m_nDocumentNo, szWhere);
	//_fmsg(_T("%s"), szSQL);

		rs.ExecSQL(szSQL);
		nItem = 1;
		while(!rs.IsEOF())
		{		
			rs.GetValue(_T("hpc_status"), szStatus);
			rs.GetValue(_T("itemid"), szItemID);
			rs.GetValue(_T("hpcl_perform_deptid"), szDeptID);
			rs.GetValue(_T("hpcl_proomid"), nRoomID);			
			
			// Kiem tra neu chua thuc hien thi tu dong lai so phong cua lan thuc hien truoc len
			if(nRoomID <=0){
				szSQL.Format(_T("SELECT hpcl_proomid, hpcl_perform_deptid ") \
					_T(" FROM hms_pacsorderline ") \
					_T(" WHERE hpcl_itemid='%s' and hpcl_perform_deptid='%s' ") \
					_T(" and hpcl_receptno > 0 and rownum = 1") \
					_T(" ORDER BY hpcl_proomid, hpcl_orderid, hpcl_orderlineid "), szItemID, pMF->m_szDeptID);
				rs2.ExecSQL(szSQL);				
				if(!rs2.IsEOF()){
					rs2.GetValue(_T("hpcl_perform_deptid"), szDeptID);
					rs2.GetValue(_T("hpcl_proomid"), nRoomID);
				}
			}

			szRoomID.Format(_T("%d"), nRoomID);
			szRoomName = pMF->GetRoomName(szDeptID, nRoomID);
		
			int nItem = m_wndAssignedList.AddItems(
					rs.GetValue(_T("orderid")),
					szRoomName,
					rs.GetValue(_T("name")),
					_T(""),
					rs.GetValue(_T("performeddate")),
					rs.GetValue(_T("createdby")), 
					rs.GetValue(_T("practitioner")), 
					rs.GetValue(_T("result")),
					rs.GetValue(_T("itemid")), 
					_T(""), 
					rs.GetValue(_T("orderlineid")),
					rs.GetValue(_T("statusline")), 
					szRoomID,
					rs.GetValue(_T("receptno")), 
					rs.GetValue(_T("numimg")), 
					szDeptID, 
					rs.GetValue(_T("hpc_groupid")),
					NULL);
			
//			m_wndAssignedList.SetCheck(nItem, TRUE);

			if(szStatus == _T("T")){
//				m_wndAssignedList.SetSubItemBkColor(nItem, 0, RGB(0, 128, 192), FALSE);
//				m_wndAssignedList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
			}
			rs.MoveNext();
		}

	
	m_wndAssignedList.EndLoad(); 
	
	

/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndAssignedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAssignedList.AddItems(
			rs.GetValue(_T("OrderID")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Qty")), NULL);
		rs.MoveNext();
	}
	m_wndAssignedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSReceptMapDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSReceptMapDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSReceptMapDialog::OnAddHMSReceptMapDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSReceptMapDialog::OnEditHMSReceptMapDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReceptMapDialog::OnDeleteHMSReceptMapDialog(){
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
 		OnCancelHMSReceptMapDialog();
 	}
	return 0;
}
int CHMSReceptMapDialog::OnSaveHMSReceptMapDialog(){
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
 		//OnHMSReceptMapDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSReceptMapDialog::OnCancelHMSReceptMapDialog(){
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
int CHMSReceptMapDialog::OnHMSReceptMapDialogListLoadData(){
	return 0;
}
