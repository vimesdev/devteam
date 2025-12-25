#include "HMSPerforRoomOrderSetup.h"
#include "HMSMainFrame.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomOrderSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerforRoomOrderSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPerforRoomOrderSetup *)pWnd)->OnNameCheckValue();
} 
static long _OnPrefromRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomOrderSetup*)pWnd)->OnPrefromRoomLoadData();
} 
static void _OnPrefromRoomDblClickFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup*)pWnd)->OnPrefromRoomDblClick();
} 
static void _OnPrefromRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerforRoomOrderSetup*)pWnd)->OnPrefromRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnPrefromRoomDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnPrefromRoomDeleteItem();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPerforRoomOrderSetup* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnDeptKillfocus();
}*/
static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnDeptKillfocus();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomOrderSetup *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnDeptAddNew();
}*/
static void _OnWorkplaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPerforRoomOrderSetup* )pWnd)->OnWorkplaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWorkplaceSelendokFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnWorkplaceSelendok();
}
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnWorkplaceKillfocus();
}*/
static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnWorkplaceKillfocus();
}
static long _OnWorkplaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomOrderSetup *)pWnd)->OnWorkplaceLoadData();
}
/*static void _OnWorkplaceAddNewFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnWorkplaceAddNew();
}*/
static void _OnPrefromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPerforRoomOrderSetup* )pWnd)->OnPrefromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrefromDeptSelendokFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnPrefromDeptSelendok();
}
/*static void _OnPrefromDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnPrefromDeptKillfocus();
}*/
static void _OnPrefromDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnPrefromDeptKillfocus();
}
static long _OnPrefromDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomOrderSetup *)pWnd)->OnPrefromDeptLoadData();
}
/*static void _OnPrefromDeptAddNewFnc(CWnd *pWnd){
	((CHMSPerforRoomOrderSetup *)pWnd)->OnPrefromDeptAddNew();
}*/
static void _OnCheckSelectFnc(CWnd* pWnd) {
	CHMSPerforRoomOrderSetup* pVw = (CHMSPerforRoomOrderSetup*)pWnd;
	pVw->OnCheckSelect();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPerforRoomOrderSetup *pVw = (CHMSPerforRoomOrderSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPerforRoomOrderSetup *pVw = (CHMSPerforRoomOrderSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPerforRoomOrderSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnAddHMSPerforRoomOrderSetup();
} 
static int _OnEditHMSPerforRoomOrderSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnEditHMSPerforRoomOrderSetup();
} 
static int _OnDeleteHMSPerforRoomOrderSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnDeleteHMSPerforRoomOrderSetup();
} 
static int _OnSaveHMSPerforRoomOrderSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnSaveHMSPerforRoomOrderSetup();
} 
static int _OnCancelHMSPerforRoomOrderSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnCancelHMSPerforRoomOrderSetup();
} 


static int _OnListSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnListSelectAllItem();
} 
static int _OnListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnListUnSelectAllItem();
} 

static int _OnPrefromDeptSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnPrefromDeptSelectAllItem();
} 
static int _OnPrefromDeptUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomOrderSetup*)pWnd)->OnPrefromDeptUnSelectAllItem();
} 

CHMSPerforRoomOrderSetup::CHMSPerforRoomOrderSetup(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPerforRoomOrderSetup::~CHMSPerforRoomOrderSetup(){
}
void CHMSPerforRoomOrderSetup::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Thiết lập phòng chỉ định"), 5, 5, 800, 560);	
	m_wndWorkplaceLabel.Create(this, _T("Cơ sở"), 10, 30, 90, 55);
	m_wndWorkplace.Create(this, 95, 30, 215, 55);
	m_wndPrefromDeptLabel.Create(this, _T("Khoa thực hiện"), 220, 30, 300, 55);
	m_wndPrefromDept.Create(this, 305, 30, 410, 55);	
	m_wndPrefromRoom.Create(this, 10, 60, 410, 525);
	m_wndDeptLabel.Create(this, _T("Khoa chỉ định"), 415, 30, 495, 55);
	m_wndDept.Create(this, 500, 30, 795, 55);	
	m_wndList.Create(this, 415, 60, 795, 525);
	m_wndNameLabel.Create(this, _T("Name"), 10, 530, 110, 555);
	m_wndName.Create(this, 115, 530, 410, 555);
	//m_wndCheck.Create(this, _T("Phòng chỉ định"), 415, 530, 510, 555);
	m_wndSave.Create(this, _T("&Save"), 625, 530, 705, 555);
	m_wndClose.Create(this, _T("&Close"), 710, 530, 790, 555);
}
void CHMSPerforRoomOrderSetup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	//m_wndName.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndWorkplace.SetCheckValue(true);
	m_wndWorkplace.LimitText(35);
	//m_wndPrefromDept.SetCheckValue(true);
	m_wndPrefromDept.LimitText(35);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndWorkplace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWorkplace.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPrefromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndPrefromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Dept"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Active"), CFMT_MONEY, 100);
	m_wndList.SetCheckBox(true);

	m_wndPrefromRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPrefromRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndPrefromRoom.InsertColumn(2, _T("Dept"), CFMT_TEXT, 100);
	m_wndPrefromRoom.InsertColumn(3, _T("Active"), CFMT_TEXT, 100);
	m_wndPrefromRoom.InsertColumn(4, _T("roomid"), CFMT_TEXT, 0);
	m_wndPrefromRoom.SetCheckBox(true);

}
void CHMSPerforRoomOrderSetup::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndPrefromRoom.SetEvent(WE_SELCHANGE, _OnPrefromRoomSelectChangeFnc);
	m_wndPrefromRoom.SetEvent(WE_LOADDATA, _OnPrefromRoomLoadDataFnc);
	m_wndPrefromRoom.SetEvent(WE_DBLCLICK, _OnPrefromRoomDblClickFnc);
	m_wndPrefromRoom.AddEvent(1, _T("Delete"), _OnPrefromRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndWorkplace.SetEvent(WE_SELENDOK, _OnWorkplaceSelendokFnc);
	//m_wndWorkplace.SetEvent(WE_SETFOCUS, _OnWorkplaceSetfocusFnc);
	m_wndWorkplace.SetEvent(WE_KILLFOCUS, _OnWorkplaceKillfocusFnc);
	m_wndWorkplace.SetEvent(WE_SELCHANGE, _OnWorkplaceSelectChangeFnc);
	m_wndWorkplace.SetEvent(WE_LOADDATA, _OnWorkplaceLoadDataFnc);
	//m_wndWorkplace.SetEvent(WE_ADDNEW, _OnWorkplaceAddNewFnc);
	m_wndPrefromDept.SetEvent(WE_SELENDOK, _OnPrefromDeptSelendokFnc);
	//m_wndPrefromDept.SetEvent(WE_SETFOCUS, _OnPrefromDeptSetfocusFnc);
	m_wndPrefromDept.SetEvent(WE_KILLFOCUS, _OnPrefromDeptKillfocusFnc);
	m_wndPrefromDept.SetEvent(WE_SELCHANGE, _OnPrefromDeptSelectChangeFnc);
	m_wndPrefromDept.SetEvent(WE_LOADDATA, _OnPrefromDeptLoadDataFnc);
	//m_wndPrefromDept.SetEvent(WE_ADDNEW, _OnPrefromDeptAddNewFnc);
	m_wndCheck.SetEvent(WE_CLICK, _OnCheckSelectFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllItemFnc);
	m_wndList.AddEvent(2, _T("UnSelect All"), _OnListUnSelectAllItemFnc);


	m_wndPrefromRoom.AddEvent(1, _T("Select All"), _OnPrefromDeptSelectAllItemFnc);
	m_wndPrefromRoom.AddEvent(2, _T("UnSelect All"), _OnPrefromDeptUnSelectAllItemFnc);

	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPerforRoomOrderSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPerforRoomOrderSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPerforRoomOrderSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPerforRoomOrderSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPerforRoomOrderSetupFnc, 0, 'T', VK_CONTROL);*/
	SetMode(VM_EDIT);

}
void CHMSPerforRoomOrderSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplaceKey);
	DDX_TextEx(pDX, m_wndPrefromDept.GetDlgCtrlID(), m_szPrefromDeptKey);
}
void CHMSPerforRoomOrderSetup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Workplace")] =  m_szWorkplaceKey;
	m_jData[_T("PrefromDept")] =  m_szPrefromDeptKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Workplace")].GetValue(m_szWorkplaceKey);
	m_jData[_T("PrefromDept")].GetValue(m_szPrefromDeptKey);
	}

}
void CHMSPerforRoomOrderSetup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPerforRoomOrderSetup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPerforRoomOrderSetup::SetDefaultValues(){

	m_szName.Empty();
	m_szDeptKey.Empty();
	m_szWorkplaceKey = _T("01014");
	m_szPrefromDeptKey.Empty();
}
int CHMSPerforRoomOrderSetup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			//SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
			EnableControls(TRUE);
			EnableButtons(TRUE, 1, -1);
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
void CHMSPerforRoomOrderSetup::OnListDblClick(){
	
} 
void CHMSPerforRoomOrderSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	m_szFeeID = m_wndList.GetItemText(nNewItem, 0);	
} 
int CHMSPerforRoomOrderSetup::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
long CHMSPerforRoomOrderSetup::OnListLoadData(){
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString szSQL, szWhere, szDeptID;
	m_wndList.BeginLoad();
	int nCount = 0, nItem =0, nRoomID =0;

	UpdateData(true);

	if (!m_szDeptKey.IsEmpty())
		szWhere.Format(_T(" AND hrl_deptid='%s'"), m_szDeptKey);	

	szSQL.Format(_T(" SELECT hrl_id,") \
		_T("   hrl_name,") \
		_T("   hrl_deptid") \
		_T(" FROM hms_roomlist") \
		_T(" LEFT JOIN sys_dept ON(sd_id=hrl_deptid)")
		_T(" WHERE 1=1 ") \
		_T(" %s") \
		_T(" AND hrl_active = 'Y'") \
		_T(" ORDER BY hrl_deptid, hrl_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("hrl_id")),
			rs.GetValue(_T("hrl_name")),
			rs.GetValue(_T("hrl_deptid")),
			rs.GetValue(_T("hrl_active")),
			NULL);

		rs.GetValue(_T("hrl_id"), nRoomID);
		rs.GetValue(_T("hrl_deptid"), szDeptID);

		szSQL.Format(_T("SELECT 'X' as checkroom") \
			_T(" FROM qms_perfromroom_order ") \
			_T(" WHERE hpr_order_deptid='%s'") \
			_T(" AND hpr_roomid=%d ") \
			_T(" AND instr(hpr_order_roomid, '['") \
			_T(" || %d") \
			_T(" || ']') > 0 "), szDeptID, m_nPerRoomID, nRoomID);
		rs1.ExecSQL(szSQL);
		
		if (rs1.GetValue(_T("checkroom")) == L"X")
		{
			m_wndList.SetCheck(nItem, true);
		}

		rs.MoveNext();
	}

	m_wndList.EndLoad();

	return 0;
}
/*void CHMSPerforRoomOrderSetup::OnNameChange(){
	
} */
/*void CHMSPerforRoomOrderSetup::OnNameSetfocus(){
	
} */
/*void CHMSPerforRoomOrderSetup::OnNameKillfocus(){
	
} */
int CHMSPerforRoomOrderSetup::OnNameCheckValue(){
	OnListLoadData();
	return 0;
} 
void CHMSPerforRoomOrderSetup::OnPrefromRoomDblClick(){
	
} 
void CHMSPerforRoomOrderSetup::OnPrefromRoomSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_nPerRoomID = ToInt(m_wndPrefromRoom.GetItemText(nNewItem, 0));	
	OnListLoadData();
	SetMode(VM_ADD);
} 
int CHMSPerforRoomOrderSetup::OnPrefromRoomDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPerforRoomOrderSetup::OnPrefromRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPrefromDept;
	m_wndPrefromRoom.BeginLoad();

	UpdateData(true);	

	/*szSQL.Format(_T(" SELECT hrl_id,") \
		_T("   hrl_name,") \
		_T("   hrl_deptid,") \
		_T("   (SELECT 'X'") \
		_T("   FROM qms_perfromroom_order") \
		_T("   WHERE hpr_perdeptid=hrl_deptid") \
		_T("   AND hpr_order_deptid ='%s' ") \
		_T("   AND instr(hpr_order_roomid, '['") \
		_T("     || hrl_id") \
		_T("     || ']')     > 0") \
		_T("   AND hpr_roomid =hrl_id") \
		_T("   ) AS checkroom") \
		_T(" FROM hms_roomlist") \
		_T(" LEFT JOIN qms_perfromroom_order") \
		_T(" ON(hpr_perdeptid=hrl_deptid") \
		_T(" AND hpr_roomid  =hrl_id)") \
		_T(" WHERE hrl_deptid='%s'") \
		_T(" AND hrl_active  ='Y'") \
		_T(" ORDER BY hrl_id"), m_szDeptKey, m_szPrefromDeptKey);*/

	szSQL.Format(_T(" SELECT hrl_id,") \
		_T("   hrl_name,") \
		_T("   hrl_deptid") \
		_T(" FROM hms_roomlist") \
		_T(" WHERE hrl_deptid='%s'") \
		_T(" AND hrl_active  ='Y'") \
		_T(" ORDER BY hrl_id"), m_szPrefromDeptKey);	
	//_msg(_T("%s"), szSQL);

	int nCount = 0, nRooomID, nItem =0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		nItem = m_wndPrefromRoom.AddItems(
			rs.GetValue(_T("hrl_id")),
			rs.GetValue(_T("hrl_name")),
			rs.GetValue(_T("hrl_deptid")),
			rs.GetValue(_T("hrl_active")),
			rs.GetValue(_T("checkroom")),
			NULL);		

		/*if (rs.GetValue(_T("checkroom"))==L"X")
		{
			m_wndPrefromRoom.SetCheck(nItem, true);
		}*/

		rs.MoveNext();
	}

	m_wndPrefromRoom.EndLoad(); 	
	return 0;
}
void CHMSPerforRoomOrderSetup::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPerforRoomOrderSetup::OnDeptSelendok(){	
	OnListLoadData();
}
/*void CHMSPerforRoomOrderSetup::OnDeptSetfocus(){
	
}*/
void CHMSPerforRoomOrderSetup::OnDeptKillfocus(){
	
}
long CHMSPerforRoomOrderSetup::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDeptKey);
	}

	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s AND sd_type in('KB','DT','HA','XN') ORDER BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	
	return 0;
}
/*void CHMSPerforRoomOrderSetup::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPerforRoomOrderSetup::OnWorkplaceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPerforRoomOrderSetup::OnWorkplaceSelendok(){
	UpdateData(true);
}
/*void CHMSPerforRoomOrderSetup::OnWorkplaceSetfocus(){
	
}*/
void CHMSPerforRoomOrderSetup::OnWorkplaceKillfocus(){
	
}
long CHMSPerforRoomOrderSetup::OnWorkplaceLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWorkplace.IsSearchKey() && !m_szWorkplaceKey.IsEmpty()){
		szWhere.Format(_T(" and sc_id='%s' "), m_szWorkplaceKey);
	}
	m_wndWorkplace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sc_id as id, sc_name as name FROM sys_company WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWorkplace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	
	return 0;
}
/*void CHMSPerforRoomOrderSetup::OnWorkplaceAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPerforRoomOrderSetup::OnPrefromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
void CHMSPerforRoomOrderSetup::OnPrefromDeptSelendok(){
	OnPrefromRoomLoadData();
}
/*void CHMSPerforRoomOrderSetup::OnPrefromDeptSetfocus(){
	
}*/
void CHMSPerforRoomOrderSetup::OnPrefromDeptKillfocus(){
	//_msg(_T("%s"), m_szPrefromDeptKey);
}
long CHMSPerforRoomOrderSetup::OnPrefromDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndPrefromDept.IsSearchKey() && !m_szPrefromDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szPrefromDeptKey);
	};
	m_wndPrefromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPrefromDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	
	return 0;
}
/*void CHMSPerforRoomOrderSetup::OnPrefromDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CHMSPerforRoomOrderSetup::OnCheckSelect() {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	if (m_bCheck) {
		m_bCheck = false;
	}
	else
	{
		m_bCheck = true;
	}

	OnListLoadData();
}

void CHMSPerforRoomOrderSetup::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSPerforRoomOrderSetup();
} 
void CHMSPerforRoomOrderSetup::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPerforRoomOrderSetup::OnAddHMSPerforRoomOrderSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPerforRoomOrderSetup::OnEditHMSPerforRoomOrderSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPerforRoomOrderSetup::OnDeleteHMSPerforRoomOrderSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSPerforRoomOrderSetup();
 	}
	return 0;
}
int CHMSPerforRoomOrderSetup::OnSaveHMSPerforRoomOrderSetup(){
	
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CString szFreeID, szPerDeptID, szOrderDeptID, szOrderRoomID, szEven;
	int nID, nPerRoomID, nItem =0;
	
	for (int j = 0; j < m_wndPrefromRoom.GetItemCount(); j++) {
		
		nItem = 0;
		nPerRoomID = m_nPerRoomID;
		szEven = L"N";
		szOrderRoomID.Empty();

		if (m_wndPrefromRoom.GetCheck(j))
		{
			nPerRoomID = ToInt(m_wndPrefromRoom.GetItemText(j, 0));
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
			{
				
				if (m_wndList.GetCheck(i)) {
					szEven = L"Y";

					szOrderDeptID = m_wndList.GetItemText(i, 2);

					if (!szOrderRoomID.IsEmpty())
						szOrderRoomID += _T(",");

					szOrderRoomID.AppendFormat(_T("[%s]"), m_wndList.GetItemText(i, 0));

					nItem++;
				}

				if (nItem > 0)	szEven = L"Y";
				if (szPerDeptID.IsEmpty()) szPerDeptID = m_szPrefromDeptKey;

				if (szOrderDeptID.IsEmpty()) szOrderDeptID = m_szDeptKey;

				if (nPerRoomID <= 0) nPerRoomID = m_nPerRoomID;

				szSQL.Format(_T("qms_perfromroom_order_insert('%s', %d, '%s', '%s', '%s', '%s')"), pMF->GetCurrentUser(), nPerRoomID, szPerDeptID, szOrderRoomID, szOrderDeptID, szEven);
				_tprintf(_T("\r\n%s"), szSQL);
				int ret = str2int(pMF->ExecDML(szSQL));
				if (ret > 0)
				{
					pMF->SetStatusText(_T("Lưu dữ liệu thành công!"), 0);
				}
				else
				{
					pMF->SetStatusText(_T("Lỗi sảy ra khi lưu dữ liệu!"), 0);
				}
			}
		}
	}

 	return 0;
}
int CHMSPerforRoomOrderSetup::OnCancelHMSPerforRoomOrderSetup(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSPerforRoomOrderSetup::OnHMSPerforRoomOrderSetupListLoadData(){
	return 0;
}

int CHMSPerforRoomOrderSetup::OnListSelectAllItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;
} 

int CHMSPerforRoomOrderSetup::OnListUnSelectAllItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;
} 

int CHMSPerforRoomOrderSetup::OnPrefromDeptSelectAllItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPrefromDept.GetItemCount(); i++){
		m_wndPrefromDept.SetCheck(i, true);
	}
	return 0;
} 

int CHMSPerforRoomOrderSetup::OnPrefromDeptUnSelectAllItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPrefromDept.GetItemCount(); i++){
		m_wndPrefromDept.SetCheck(i, false);
	}
	return 0;
} 

void CHMSPerforRoomOrderSetup::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndPrefromRoom, 100, 100);
	AddResize(&m_wndFeeInformation, 100, 100);

	AddBottom(&m_wndSave);
	AddBottom(&m_wndClose);
}