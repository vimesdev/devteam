#include "HMSWorkorder.h"
#include "MainFrm.h"
static void _OnTestDeviceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWorkorder* )pWnd)->OnTestDeviceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestDeviceSelendokFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnTestDeviceSelendok();
}
/*static void _OnTestDeviceSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnTestDeviceKillfocus();
}*/
/*static void _OnTestDeviceKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnTestDeviceKillfocus();
}*/
static long _OnTestDeviceLoadDataFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnTestDeviceLoadData();
}
/*static void _OnTestDeviceAddNewFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnTestDeviceAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnSIDChangeFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnSIDChange();
} */
/*static void _OnSIDSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnSIDSetfocus();} */ 
/*static void _OnSIDKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnSIDKillfocus();
} */
static int _OnSIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnSIDCheckValue();
} 
static void _OnAddWorkorderSelectFnc(CWnd *pWnd){
	CHMSWorkorder *pVw = (CHMSWorkorder *)pWnd;
	pVw->OnAddWorkorderSelect();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnYOBChangeFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnYOBChange();
} */
/*static void _OnYOBSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnYOBSetfocus();} */ 
/*static void _OnYOBKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnYOBKillfocus();
} */
static int _OnYOBCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnYOBCheckValue();
} 
/*static void _OnDepartmentChangeFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnDepartmentChange();
} */
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnDepartmentSetfocus();} */ 
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnDepartmentKillfocus();
} */
static int _OnDepartmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnDepartmentCheckValue();
} 
/*static void _OnRoomChangeFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnRoomChange();
} */
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnRoomSetfocus();} */ 
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSWorkorder *)pWnd)->OnRoomKillfocus();
} */
static int _OnRoomCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkorder *)pWnd)->OnRoomCheckValue();
} 
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSWorkorder*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSWorkorder*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSWorkorder*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnTestListDeleteItem();
} 
static long _OnWorkorderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSWorkorder*)pWnd)->OnWorkorderListLoadData();
} 
static void _OnWorkorderListDblClickFnc(CWnd *pWnd){
	((CHMSWorkorder*)pWnd)->OnWorkorderListDblClick();
} 
static void _OnWorkorderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSWorkorder*)pWnd)->OnWorkorderListSelectChange(nOldItem, nNewItem);
} 
static int _OnWorkorderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnWorkorderListDeleteItem();
} 
static int _OnAddHMSWorkorderFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnAddHMSWorkorder();
} 
static int _OnEditHMSWorkorderFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnEditHMSWorkorder();
} 
static int _OnDeleteHMSWorkorderFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnDeleteHMSWorkorder();
} 
static int _OnSaveHMSWorkorderFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnSaveHMSWorkorder();
} 
static int _OnCancelHMSWorkorderFnc(CWnd *pWnd){
	 return ((CHMSWorkorder*)pWnd)->OnCancelHMSWorkorder();
} 
CHMSWorkorder::CHMSWorkorder(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szTestDeviceKey.Empty();
}
CHMSWorkorder::~CHMSWorkorder(){
}
void CHMSWorkorder::OnCreateComponents(){
	m_wndWorkOrderInformation.Create(this, _T("Work Order Information"), 5, 5, 1020, 690);
	m_wndTestDeviceLabel.Create(this, _T("Test Device"), 10, 29, 110, 54);
	m_wndTestDevice.Create(this,115, 29, 510, 54); 
	m_wndSIDLabel.Create(this, _T("SID"), 210, 59, 250, 82);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 59, 110, 84);
	m_wndDocumentNo.Create(this,115, 59, 205, 84); 
	m_wndSID.Create(this,255, 59, 330, 84); 
	m_wndAddWorkorder.Create(this, _T("&Add Workorder"), 335, 59, 510, 84);
	m_wndYOBLabel.Create(this, _T("YOB"), 335, 89, 425, 111);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 89, 110, 114);
	m_wndPatientName.Create(this,115, 89, 330, 114); 
	m_wndYOB.Create(this,430, 89, 510, 114); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 119, 110, 144);
	m_wndDepartment.Create(this,115, 119, 330, 144); 
	m_wndRoomLabel.Create(this, _T("Room"), 335, 119, 425, 144);
	m_wndRoom.Create(this,430, 119, 510, 144); 
	m_wndTestList.Create(this,10, 149, 510, 686); 
	m_wndWorkorderList.Create(this,515, 29, 1015, 687); 

}
void CHMSWorkorder::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTestDevice.SetCheckValue(true);
	m_wndTestDevice.LimitText(35);
	m_wndDocumentNo.SetLimitText(16);
	//m_wndDocumentNo.SetCheckValue(true);
	m_wndDocumentNo.SetReadOnly(true);
	m_wndSID.SetLimitText(16);
	m_wndSID.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.SetReadOnly(true);
	m_wndYOB.SetLimitText(16);
	m_wndYOB.SetReadOnly(true);
	m_wndYOB.SetCheckValue(true);
	m_wndDepartment.SetLimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.SetReadOnly(true);
	m_wndRoom.SetLimitText(16);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.SetReadOnly(true);

	
	m_wndTestDevice.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestDevice.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndTestList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 80);
	m_wndTestList.InsertColumn(1, _T("Test Name"), CFMT_TEXT, 250);
	m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndTestList.InsertColumn(3, _T("Result"), CFMT_TEXT, 80);
	m_wndTestList.SetCheckBox(TRUE);

	m_wndWorkorderList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndWorkorderList.InsertColumn(1, _T("Barcode"), CFMT_NUMBER, 90);
	m_wndWorkorderList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 100);
	m_wndWorkorderList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 200);

}
void CHMSWorkorder::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTestDevice.SetEvent(WE_SELENDOK, _OnTestDeviceSelendokFnc);
	//m_wndTestDevice.SetEvent(WE_SETFOCUS, _OnTestDeviceSetfocusFnc);
	//m_wndTestDevice.SetEvent(WE_KILLFOCUS, _OnTestDeviceKillfocusFnc);
	m_wndTestDevice.SetEvent(WE_SELCHANGE, _OnTestDeviceSelectChangeFnc);
	m_wndTestDevice.SetEvent(WE_LOADDATA, _OnTestDeviceLoadDataFnc);
	//m_wndTestDevice.SetEvent(WE_ADDNEW, _OnTestDeviceAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndSID.SetEvent(WE_CHANGE, _OnSIDChangeFnc);
	//m_wndSID.SetEvent(WE_SETFOCUS, _OnSIDSetfocusFnc);
	//m_wndSID.SetEvent(WE_KILLFOCUS, _OnSIDKillfocusFnc);
	m_wndSID.SetEvent(WE_CHECKVALUE, _OnSIDCheckValueFnc);
	m_wndAddWorkorder.SetEvent(WE_CLICK, _OnAddWorkorderSelectFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndYOB.SetEvent(WE_CHANGE, _OnYOBChangeFnc);
	//m_wndYOB.SetEvent(WE_SETFOCUS, _OnYOBSetfocusFnc);
	//m_wndYOB.SetEvent(WE_KILLFOCUS, _OnYOBKillfocusFnc);
	m_wndYOB.SetEvent(WE_CHECKVALUE, _OnYOBCheckValueFnc);
	//m_wndDepartment.SetEvent(WE_CHANGE, _OnDepartmentChangeFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_CHECKVALUE, _OnDepartmentCheckValueFnc);
	//m_wndRoom.SetEvent(WE_CHANGE, _OnRoomChangeFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_CHECKVALUE, _OnRoomCheckValueFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndWorkorderList.SetEvent(WE_SELCHANGE, _OnWorkorderListSelectChangeFnc);
	m_wndWorkorderList.SetEvent(WE_LOADDATA, _OnWorkorderListLoadDataFnc);
	m_wndWorkorderList.SetEvent(WE_DBLCLICK, _OnWorkorderListDblClickFnc);
	m_wndWorkorderList.AddEvent(1, _T("Delete"), _OnWorkorderListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_ADD);

}
void CHMSWorkorder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndTestDevice.GetDlgCtrlID(), m_szTestDeviceKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndSID.GetDlgCtrlID(), m_szSID);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndYOB.GetDlgCtrlID(), m_nYOB);
	DDX_Text(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartment);
	DDX_Text(pDX, m_wndRoom.GetDlgCtrlID(), m_nRoom);

}
void CHMSWorkorder::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname) AS pname,") \
	_T("   hp_birthdate    AS yob,") \
	_T("   (SELECT DISTINCT sd_name FROM sys_dept WHERE sd_id=hpc_deptid") \
	_T("   )          AS departmemt,") \
	_T("   hpc_roomid AS roomid") \
	_T(" FROM hms_testorder") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=hpc_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno=hd_patientno)") \
	_T(" WHERE hpc_sid  =%ld and trim(hpc_groupid)=trim('%s') and trunc(hpc_orderdate)>= trunc(sysdate-1) "), str2long(m_szSID), m_szGroupID);
	rs.ExecSQL(szSQL);
_debug(_T("\r\n%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), m_nDocumentNo);
		rs.GetValue(_T("pname"), m_szPatientName);
		rs.GetValue(_T("yob"), m_nYOB);
		rs.GetValue(_T("departmemt"), m_szDepartment);
		rs.GetValue(_T("roomid"), m_nRoom);
		OnTestListLoadData();
		
	}
	else
	{
		SetDefaultValues();
		m_wndTestList.DeleteAllItems();
	}
	UpdateData(FALSE);

}
void CHMSWorkorder::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSWorkorder::SetDefaultValues(){

	
	m_nDocumentNo=0;
	m_szSID.Empty();
	m_szPatientName.Empty();
	m_nYOB=0;
	m_szDepartment.Empty();
	m_nRoom=0;

}
int CHMSWorkorder::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
			if(m_szTestDeviceKey.IsEmpty())
				m_wndTestDevice.SetFocus();
			else
			{
				m_wndSID.SetFocus();
			}
			m_wndTestList.DeleteAllItems();
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
void CHMSWorkorder::OnTestDeviceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkorder::OnTestDeviceSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(TRUE);
	szSQL.Format(_T("SELECT trim(limsi_groupid) as groupid FROM lims_instrument WHERE limsi_id=%d "), str2int(m_szTestDeviceKey));
_debug(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), m_szGroupID);
_debug(_T("\r\n%s"), m_szGroupID);
		OnWorkorderListLoadData();
	}
}
/*void CHMSWorkorder::OnTestDeviceSetfocus(){
	
}*/
/*void CHMSWorkorder::OnTestDeviceKillfocus(){
	
}*/
long CHMSWorkorder::OnTestDeviceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestDevice.IsSearchKey() && str2int(m_szTestDeviceKey) > 0){
		szWhere.Format(_T(" and limsi_id=%d "), str2int(m_szTestDeviceKey));
	};
	m_wndTestDevice.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT limsi_id as id, limsi_name as name FROM lims_instrument WHERE trim(limsi_deptid)=trim('%s') "), pMF->m_szDeptID);
_debug(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestDevice.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSWorkorder::OnTestDeviceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSWorkorder::OnDocumentNoChange(){
	
} */
/*void CHMSWorkorder::OnDocumentNoSetfocus(){
	
} */
/*void CHMSWorkorder::OnDocumentNoKillfocus(){
	
} */
int CHMSWorkorder::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSWorkorder::OnSIDChange(){
	
} */
/*void CHMSWorkorder::OnSIDSetfocus(){
	
} */
/*void CHMSWorkorder::OnSIDKillfocus(){
	
} */
int CHMSWorkorder::OnSIDCheckValue(){
	if(m_szSID.IsEmpty())
		return -1;
	GetDataToScreen();
	return 0;
} 
void CHMSWorkorder::OnAddWorkorderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() != VM_ADD)
		return;
	if(m_nDocumentNo <= 0 || m_szTestDeviceKey.IsEmpty() || m_szSID.IsEmpty())
		return;
//	pMF->DownloadOrder(str2int(m_szTestDeviceKey), m_szGroupID, m_nDocumentNo, str2long(m_szSID));
	OnWorkorderListLoadData();
	SetMode(VM_ADD);
} 
/*void CHMSWorkorder::OnPatientNameChange(){
	
} */
/*void CHMSWorkorder::OnPatientNameSetfocus(){
	
} */
/*void CHMSWorkorder::OnPatientNameKillfocus(){
	
} */
int CHMSWorkorder::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSWorkorder::OnYOBChange(){
	
} */
/*void CHMSWorkorder::OnYOBSetfocus(){
	
} */
/*void CHMSWorkorder::OnYOBKillfocus(){
	
} */
int CHMSWorkorder::OnYOBCheckValue(){
	return 0;
} 
/*void CHMSWorkorder::OnDepartmentChange(){
	
} */
/*void CHMSWorkorder::OnDepartmentSetfocus(){
	
} */
/*void CHMSWorkorder::OnDepartmentKillfocus(){
	
} */
int CHMSWorkorder::OnDepartmentCheckValue(){
	return 0;
} 
/*void CHMSWorkorder::OnRoomChange(){
	
} */
/*void CHMSWorkorder::OnRoomSetfocus(){
	
} */
/*void CHMSWorkorder::OnRoomKillfocus(){
	
} */
int CHMSWorkorder::OnRoomCheckValue(){
	return 0;
} 
void CHMSWorkorder::OnTestListDblClick(){
	
} 
void CHMSWorkorder::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSWorkorder::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSWorkorder::OnTestListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndTestList.BeginLoad(); 
	int nCount = 0;
	int nIndex=1;
	szSQL.Format(_T("SELECT hfl_name as name, hfl_unit as unit, hpcl_result as result " )
	_T(" FROM hms_testorder ") \
	_T("LEFT JOIN hmsv_test_line ON(hpcl_orderid=hpc_orderid) ") \
	_T("LEFT JOIN hms_fee_list ON(hfl_feeid=hpcl_itemid) ") \
	_T("WHERE hpc_docno=%ld and hpc_sid=%ld ") \
	_T(" and trim(hfl_groupid)=trim('%s') and length(hpcl_itemid) > 0 ORDER BY hfl_line "), m_nDocumentNo, str2long(m_szSID),  m_szGroupID);
_debug(_T("\r\n%s"), szSQL);	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndTestList.AddItems(
			tmpStr, 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Result")), 
			NULL);
		m_wndTestList.SetCheck(nItem, TRUE);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad(); 
	return nCount;
}
void CHMSWorkorder::OnWorkorderListDblClick(){
	
} 
void CHMSWorkorder::OnWorkorderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSWorkorder::OnWorkorderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSWorkorder::OnWorkorderListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndWorkorderList.BeginLoad(); 

	int nCount = 0;
	int nIndex = 1;
	
	szSQL.Format(_T("SELECT limso_docno as docno, limso_barcode as barcode, limso_pname as pname ") \
		_T(" FROM lims_order ")\
		_T(" WHERE limso_instid=%d and trim(limso_groupid)=trim('%s') ") \
		_T(" and limso_status='W' and date(limso_createddate)=sysdate "), 
		str2int(m_szTestDeviceKey), m_szGroupID);


	nCount = rs.ExecSQL(szSQL);
	
_debug(_T("%s"), szSQL);

	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndWorkorderList.AddItems(
			tmpStr, 
			rs.GetValue(_T("barcode")), 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), NULL);

		rs.MoveNext();
	}
	m_wndWorkorderList.EndLoad(); 
	return nCount;
}
int CHMSWorkorder::OnAddHMSWorkorder(){
//	if(GetMode() != VM_ADD)
//		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	m_wndTestDevice.SetFocus();

	return 0; 
}
int CHMSWorkorder::OnEditHMSWorkorder(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSWorkorder::OnDeleteHMSWorkorder(){
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
 		OnCancelHMSWorkorder(); 
 	}
	return 0;
}
int CHMSWorkorder::OnSaveHMSWorkorder(){
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
 		//OnHMSWorkorderListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSWorkorder::OnCancelHMSWorkorder(){
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
int CHMSWorkorder::OnHMSWorkorderListLoadData(){
	return 0;
}
