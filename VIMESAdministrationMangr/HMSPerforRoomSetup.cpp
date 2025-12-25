#include "HMSPerforRoomSetup.h"
#include "MainFrm.h"
#include "HMSUpdateExtraInforItemDialog.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerforRoomSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPerforRoomSetup *)pWnd)->OnNameCheckValue();
} 
static long _OnPrefromRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomSetup*)pWnd)->OnPrefromRoomLoadData();
} 
static void _OnPrefromRoomDblClickFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup*)pWnd)->OnPrefromRoomDblClick();
} 
static void _OnPrefromRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPerforRoomSetup*)pWnd)->OnPrefromRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnPrefromRoomDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnPrefromRoomDeleteItem();
} 
static void _OnFreeGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPerforRoomSetup* )pWnd)->OnFreeGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFreeGroupSelendokFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnFreeGroupSelendok();
}
/*static void _OnFreeGroupSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnFreeGroupKillfocus();
}*/
static void _OnFreeGroupKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnFreeGroupKillfocus();
}
static long _OnFreeGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomSetup *)pWnd)->OnFreeGroupLoadData();
}
/*static void _OnFreeGroupAddNewFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnFreeGroupAddNew();
}*/
static void _OnWorkplaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPerforRoomSetup* )pWnd)->OnWorkplaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWorkplaceSelendokFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnWorkplaceSelendok();
}
/*static void _OnWorkplaceSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnWorkplaceKillfocus();
}*/
static void _OnWorkplaceKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnWorkplaceKillfocus();
}
static long _OnWorkplaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomSetup *)pWnd)->OnWorkplaceLoadData();
}
/*static void _OnWorkplaceAddNewFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnWorkplaceAddNew();
}*/
static void _OnPrefromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPerforRoomSetup* )pWnd)->OnPrefromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPrefromDeptSelendokFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnPrefromDeptSelendok();
}
/*static void _OnPrefromDeptSetfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnPrefromDeptKillfocus();
}*/
static void _OnPrefromDeptKillfocusFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnPrefromDeptKillfocus();
}
static long _OnPrefromDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSPerforRoomSetup *)pWnd)->OnPrefromDeptLoadData();
}
/*static void _OnPrefromDeptAddNewFnc(CWnd *pWnd){
	((CHMSPerforRoomSetup *)pWnd)->OnPrefromDeptAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPerforRoomSetup *pVw = (CHMSPerforRoomSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPerforRoomSetup *pVw = (CHMSPerforRoomSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPerforRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnAddHMSPerforRoomSetup();
} 
static int _OnEditHMSPerforRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnEditHMSPerforRoomSetup();
} 
static int _OnDeleteHMSPerforRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnDeleteHMSPerforRoomSetup();
} 
static int _OnSaveHMSPerforRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnSaveHMSPerforRoomSetup();
} 
static int _OnCancelHMSPerforRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnCancelHMSPerforRoomSetup();
} 


static int _OnListSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnListSelectAllItem();
} 
static int _OnListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnListUnSelectAllItem();
} 

static int _OnPrefromDeptSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnPrefromDeptSelectAllItem();
} 
static int _OnPrefromDeptUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSPerforRoomSetup*)pWnd)->OnPrefromDeptUnSelectAllItem();
} 
CHMSPerforRoomSetup::CHMSPerforRoomSetup(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSPerforRoomSetup::~CHMSPerforRoomSetup(){
}
void CHMSPerforRoomSetup::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Thiết lập phòng thực hiện"), 5, 5, 800, 560);
	m_wndList.Create(this,10, 60, 425, 525); 	
	m_wndPrefromRoom.Create(this,430, 60, 795, 525); 
	m_wndFreeGroupLabel.Create(this, _T("Nhóm phí"), 10, 30, 90, 55);
	m_wndFreeGroup.Create(this,94, 31, 425, 56); 
	m_wndWorkplaceLabel.Create(this, _T("Cơ sở"), 430, 30, 510, 55);
	m_wndWorkplace.Create(this,515, 30, 615, 55); 
	m_wndPrefromDeptLabel.Create(this, _T("Khoa phòng"), 620, 30, 700, 55);
	m_wndPrefromDept.Create(this,705, 30, 795, 55);

	m_wndSave.Create(this, _T("&Save"), 625, 530, 705, 555);
	m_wndClose.Create(this, _T("&Close"), 710, 530, 790, 555);

	m_wndNameLabel.Create(this, _T("Name"), 10, 530, 110, 555);
	m_wndName.Create(this, 115, 530, 425, 555);

}
void CHMSPerforRoomSetup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	//m_wndName.SetCheckValue(true);
	m_wndFreeGroup.SetCheckValue(true);
	m_wndFreeGroup.LimitText(35);
	m_wndWorkplace.SetCheckValue(true);
	m_wndWorkplace.LimitText(35);
	m_wndPrefromDept.SetCheckValue(true);
	m_wndPrefromDept.LimitText(35);

	m_wndFreeGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFreeGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndWorkplace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWorkplace.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndPrefromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPrefromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(4, _T("Group"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Active"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Tỷ lệ"), CFMT_NUMBER, 50);
	m_wndList.SetCheckBox(true);

	m_wndPrefromRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPrefromRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndPrefromRoom.InsertColumn(2, _T("Dept"), CFMT_TEXT, 80);
	m_wndPrefromRoom.InsertColumn(3, _T("Active"), CFMT_TEXT, 50);
	m_wndPrefromRoom.InsertColumn(4, _T("roomid"), CFMT_TEXT, 0);
	m_wndPrefromRoom.InsertColumn(5, _T("Tối đa"), CFMT_NUMBER, 50);
	m_wndPrefromRoom.InsertColumn(6, _T("Mã máy"), CFMT_NUMBER, 120);
	m_wndPrefromRoom.SetCheckBox(true);

}
void CHMSPerforRoomSetup::OnSetWindowEvents(){
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
	m_wndFreeGroup.SetEvent(WE_SELENDOK, _OnFreeGroupSelendokFnc);
	//m_wndFreeGroup.SetEvent(WE_SETFOCUS, _OnFreeGroupSetfocusFnc);
	m_wndFreeGroup.SetEvent(WE_KILLFOCUS, _OnFreeGroupKillfocusFnc);
	m_wndFreeGroup.SetEvent(WE_SELCHANGE, _OnFreeGroupSelectChangeFnc);
	m_wndFreeGroup.SetEvent(WE_LOADDATA, _OnFreeGroupLoadDataFnc);
	//m_wndFreeGroup.SetEvent(WE_ADDNEW, _OnFreeGroupAddNewFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllItemFnc);
	m_wndList.AddEvent(2, _T("UnSelect All"), _OnListUnSelectAllItemFnc);


	m_wndPrefromRoom.AddEvent(1, _T("Select All"), _OnPrefromDeptSelectAllItemFnc);
	m_wndPrefromRoom.AddEvent(2, _T("UnSelect All"), _OnPrefromDeptUnSelectAllItemFnc);

	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPerforRoomSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPerforRoomSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPerforRoomSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPerforRoomSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPerforRoomSetupFnc, 0, 'T', VK_CONTROL);*/
	SetMode(VM_EDIT);

}
void CHMSPerforRoomSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndFreeGroup.GetDlgCtrlID(), m_szFreeGroupKey);
	DDX_TextEx(pDX, m_wndWorkplace.GetDlgCtrlID(), m_szWorkplaceKey);
	DDX_TextEx(pDX, m_wndPrefromDept.GetDlgCtrlID(), m_szPrefromDeptKey);
}
void CHMSPerforRoomSetup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("FreeGroup")] =  m_szFreeGroupKey;
	m_jData[_T("Workplace")] =  m_szWorkplaceKey;
	m_jData[_T("PrefromDept")] =  m_szPrefromDeptKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("FreeGroup")].GetValue(m_szFreeGroupKey);
	m_jData[_T("Workplace")].GetValue(m_szWorkplaceKey);
	m_jData[_T("PrefromDept")].GetValue(m_szPrefromDeptKey);
	}

}
void CHMSPerforRoomSetup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CHMSPerforRoomSetup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSPerforRoomSetup::SetDefaultValues(){

	m_szName.Empty();
	m_szFreeGroupKey.Empty();
	m_szWorkplaceKey = _T("01014");
	m_szPrefromDeptKey.Empty();
}
int CHMSPerforRoomSetup::SetMode(int nMode){
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
void CHMSPerforRoomSetup::OnListDblClick(){
	CHMSUpdateExtraInforItemDialog dlg(this);
	dlg.m_szType = _T("PFL");
	dlg.m_szMucphi = m_szItemID;
	dlg.m_szComment = m_szItemName;
	dlg.m_nRatio = m_nRatio;

	if (dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CHMSPerforRoomSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	m_szFeeID = m_wndList.GetItemText(nNewItem, 0);
	m_szItemID = m_wndList.GetItemText(nNewItem, 0);
	m_szItemName= m_wndList.GetItemText(nNewItem, 1);
	m_nRatio = ToFloat(m_wndList.GetItemText(nNewItem, 6));
	SetMode(VM_ADD);
	OnPrefromRoomLoadData();
} 
int CHMSPerforRoomSetup::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
}
long CHMSPerforRoomSetup::OnListLoadData(){
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad();
	int nCount = 0, nItem =0;

	UpdateData(true);

	if (!m_szFreeGroupKey.IsEmpty())
		szWhere.Format(_T(" AND hfl_groupid='%s' "), m_szFreeGroupKey);

	if (!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szName);
	}

	szSQL.Format(_T(" SELECT ") \
		_T(" 	hfl_feeid, hfl_groupid, hfl_name, hfl_line, hpr_feeid, hfl_ratio") \
		_T(" FROM") \
		_T(" 	hms_fee_list") \
		_T(" LEFT JOIN qms_perfromroom ON(hpr_deptid='%s' AND hpr_feeid = hfl_feeid) ") \
		_T(" WHERE") \
		_T(" 	substr(hfl_groupid, 1, 2) IN('B1','B2','B3','B4','B5') %s AND hfl_active ='Y'") \
		_T(" ORDER BY") \
		_T(" 	hfl_line,") \
		_T(" 	hfl_feeid"), m_szPrefromDeptKey, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("hfl_feeid")),
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			rs.GetValue(_T("hfl_servprice")),
			rs.GetValue(_T("hfl_groupid")),
			rs.GetValue(_T("hfl_active")),
			rs.GetValue(_T("hfl_ratio")),
			NULL);

		if (!rs.GetValue(_T("hpr_feeid")).IsEmpty())
		{
			m_wndList.SetCheck(nItem, true);
		}
		rs.MoveNext();
	}

	m_wndList.EndLoad();

	return 0;
}
/*void CHMSPerforRoomSetup::OnNameChange(){
	
} */
/*void CHMSPerforRoomSetup::OnNameSetfocus(){
	
} */
/*void CHMSPerforRoomSetup::OnNameKillfocus(){
	
} */
int CHMSPerforRoomSetup::OnNameCheckValue(){
	OnListLoadData();
	return 0;
} 

void CHMSPerforRoomSetup::OnPrefromRoomDblClick(){
	CHMSUpdateExtraInforItemDialog dlg(this);
	dlg.m_szType = _T("PF");
	dlg.m_szMucphi = m_szItemName;
	dlg.m_nRoomID = m_nRoomID;
	dlg.m_nDefaultQty = m_nLimited;
	dlg.m_szDeptID = m_szPrefromDeptKey;

	if (dlg.DoModal() == IDOK)
	{
		m_wndList.SetCurSel(0);
		OnPrefromRoomLoadData();
	}
} 
void CHMSPerforRoomSetup::OnPrefromRoomSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	m_nRoomID = ToInt(m_wndPrefromRoom.GetItemText(nNewItem, 0));
	m_szItemName = m_wndPrefromRoom.GetItemText(nNewItem, 1);
	m_nLimited = ToLong(m_wndPrefromRoom.GetItemText(nNewItem, 5));
} 
int CHMSPerforRoomSetup::OnPrefromRoomDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPerforRoomSetup::OnPrefromRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPrefromDept;
	m_wndPrefromRoom.BeginLoad();

	UpdateData(true);

	szSQL.Format(_T(" SELECT hrl_id,") \
		_T("   hrl_name,") \
		_T("   hrl_deptid,") \
		_T("   hrl_active,") \
		_T("   hrl_limited, ma_machinecode,") \
		_T("   (SELECT 'X'") \
		_T("   FROM qms_perfromroom") \
		_T("   WHERE hpr_deptid=hrl_deptid") \
		_T("   AND instr(hpr_roomid, '[' ") \
		_T("   || hrl_id ") \
		_T("   || ']') > 0        ") \
		_T("   AND hpr_feeid   = '%s'") \
		_T("   ) AS checkroom") \
		_T(" FROM hms_roomlist") \
		_T(" LEFT JOIN hms_machine_list_for_ins ON (ma_deptid = hrl_deptid and ma_roomid = hrl_id)") \
		_T(" WHERE hrl_deptid ='%s'") \
		_T(" AND hrl_active   ='Y'") \
		_T(" ORDER BY hrl_id"), m_szFeeID, m_szPrefromDeptKey);
	
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
			rs.GetValue(_T("hrl_limited")),
			rs.GetValue(_T("ma_machinecode")),
			NULL);		

		if (rs.GetValue(_T("checkroom")) == L"X")
		{
			m_wndPrefromRoom.SetCheck(nItem, true);
		}

		rs.MoveNext();
	}

	m_wndPrefromRoom.EndLoad(); 	
	return 0;
}
void CHMSPerforRoomSetup::OnFreeGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPerforRoomSetup::OnFreeGroupSelendok(){
	OnListLoadData();
}
/*void CHMSPerforRoomSetup::OnFreeGroupSetfocus(){
	
}*/
void CHMSPerforRoomSetup::OnFreeGroupKillfocus(){
	
}
long CHMSPerforRoomSetup::OnFreeGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFreeGroup.IsSearchKey() && !m_szFreeGroupKey.IsEmpty()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szFreeGroupKey);
	}

	m_wndFreeGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3','B4','B5') %s") \
		_T(" ORDER BY hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFreeGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	
	return 0;
}
/*void CHMSPerforRoomSetup::OnFreeGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPerforRoomSetup::OnWorkplaceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPerforRoomSetup::OnWorkplaceSelendok(){
	UpdateData(true);
}
/*void CHMSPerforRoomSetup::OnWorkplaceSetfocus(){
	
}*/
void CHMSPerforRoomSetup::OnWorkplaceKillfocus(){
	
}
long CHMSPerforRoomSetup::OnWorkplaceLoadData(){
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
/*void CHMSPerforRoomSetup::OnWorkplaceAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPerforRoomSetup::OnPrefromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
} 
void CHMSPerforRoomSetup::OnPrefromDeptSelendok(){
	OnListLoadData();
	OnPrefromRoomLoadData();
}
/*void CHMSPerforRoomSetup::OnPrefromDeptSetfocus(){
	
}*/
void CHMSPerforRoomSetup::OnPrefromDeptKillfocus(){
	//_msg(_T("%s"), m_szPrefromDeptKey);
}
long CHMSPerforRoomSetup::OnPrefromDeptLoadData(){
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
/*void CHMSPerforRoomSetup::OnPrefromDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPerforRoomSetup::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSPerforRoomSetup();
} 
void CHMSPerforRoomSetup::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPerforRoomSetup::OnAddHMSPerforRoomSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPerforRoomSetup::OnEditHMSPerforRoomSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPerforRoomSetup::OnDeleteHMSPerforRoomSetup(){
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
 		OnCancelHMSPerforRoomSetup();
 	}
	return 0;
}
int CHMSPerforRoomSetup::OnSaveHMSPerforRoomSetup(){
	
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CString szFreeID, szDeptID, szRoomID, tmpStr, szEven;
	int nID, nItem = 0;
	
	for (int j = 0; j < m_wndList.GetItemCount(); j++) {
		nItem = 0;
		szEven = L"N";
		szRoomID.Empty();

		szFreeID = m_wndList.GetItemText(j, 0);
		if (m_wndList.GetCheck(j)) {
			for (int i = 0; i < m_wndPrefromRoom.GetItemCount(); i++)
			{				
				if (m_wndPrefromRoom.GetCheck(i)) {
					nID = ToInt(m_wndPrefromRoom.GetItemText(i, 0));
					szDeptID = m_wndPrefromRoom.GetItemText(i, 2);
					if (!szRoomID.IsEmpty())
						szRoomID += _T(",");

					szRoomID.AppendFormat(_T("[%s]"), m_wndPrefromRoom.GetItemText(i, 0));

					nItem++;
				}
			}

			if(nItem > 0)
				szEven = L"Y";
			if (szDeptID.IsEmpty()) szDeptID = m_szPrefromDeptKey;

			if (szFreeID.IsEmpty()) szFreeID = m_szFeeID;

			szSQL.Format(_T("qms_perfromroom_insert('%s', '%s', '%s', '%s', '%s')"), pMF->GetCurrentUser(), szRoomID, szDeptID, szFreeID, szEven);
			_tprintf(_T("\r\n%s"), szSQL);
			int ret = str2int(pMF->ExecDML(szSQL));
			if (ret > 0)
			{
				pMF->SetStatusText(_T("Lưu dữ liệu thành công!"), 0);
			}
		}
	}

 	return 0;
}
int CHMSPerforRoomSetup::OnCancelHMSPerforRoomSetup(){
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
int CHMSPerforRoomSetup::OnHMSPerforRoomSetupListLoadData(){
	return 0;
}

int CHMSPerforRoomSetup::OnListSelectAllItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;
} 

int CHMSPerforRoomSetup::OnListUnSelectAllItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;
} 

int CHMSPerforRoomSetup::OnPrefromDeptSelectAllItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPrefromDept.GetItemCount(); i++){
		m_wndPrefromDept.SetCheck(i, true);
	}
	return 0;
} 

int CHMSPerforRoomSetup::OnPrefromDeptUnSelectAllItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPrefromDept.GetItemCount(); i++){
		m_wndPrefromDept.SetCheck(i, false);
	}
	return 0;
} 

void CHMSPerforRoomSetup::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndPrefromRoom, 100, 100);
	AddResize(&m_wndFeeInformation, 100, 100);

	AddBottom(&m_wndSave);
	AddBottom(&m_wndClose);
}