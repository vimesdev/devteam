#include "HMSOperationListSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSOperationSetupDialog.h"
#include "HMSAdditionFeeSetupDialog.h"
#include "HMSParaclinicalSetupDialog_new.h"
#include "HMSParaclinicalSetupDialog_new2.h"
#include "HMSUpdatePacsGroupDialog.h"

static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationListSetup*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CHMSOperationListSetup*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationListSetup*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationListSetup*)pWnd)->OnFeeListDeleteItem();
} 
static int _OnFeeListRefreshFnc(CWnd *pWnd){
	return ((CHMSOperationListSetup*)pWnd)->OnFeeListLoadData();
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	return ((CHMSOperationListSetup*)pWnd)->OnListShowLogItem();
}
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationListSetup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationListSetup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnGroupAddNew();
}*/
static void _OnFindChangeFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnFindChange();
} 
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CHMSOperationListSetup *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationListSetup *)pWnd)->OnFindCheckValue();
} 
static void _OnApplyDateLabelSelectFnc(CWnd *pWnd){
	CHMSOperationListSetup *pVw = (CHMSOperationListSetup *)pWnd;
	pVw->OnApplyDateLabelSelect();
} 
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationListSetup *)pWnd)->OnApplyDateCheckValue();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationListSetup *pVw = (CHMSOperationListSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSOperationListSetup *pVw = (CHMSOperationListSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationListSetup *pVw = (CHMSOperationListSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationListSetup*)pWnd)->OnAddHMSOperationListSetup();
} 
static int _OnEditHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationListSetup*)pWnd)->OnEditHMSOperationListSetup();
} 
static int _OnDeleteHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationListSetup*)pWnd)->OnDeleteHMSOperationListSetup();
} 
static int _OnSaveHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationListSetup*)pWnd)->OnSaveHMSOperationListSetup();
} 
static int _OnCancelHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CHMSOperationListSetup*)pWnd)->OnCancelHMSOperationListSetup();
} 
static void _OnInactiveSelectFnc(CWnd *pWnd){
	((CHMSOperationListSetup*)pWnd)->OnInactiveSelect();
}
static int _OnListEditOldPriceFnc(CWnd *pWnd){
	((CHMSOperationListSetup*)pWnd)->OnListEditOldPrice();
	return 0;
}
static int _OnUpdatePacsGroupFnc(CWnd* pWnd){
	((CHMSOperationListSetup*)pWnd)->OnUpdatePacsGroup();
	return 0;
}

CHMSOperationListSetup::CHMSOperationListSetup(){
	m_nDlgWidth = 815;
	m_nDlgHeight = 595;
	SetDefaultValues();
}
CHMSOperationListSetup::~CHMSOperationListSetup(){
}

void CHMSOperationListSetup::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 805, 60);
	//m_wndFeeList.Create(this,5, 65, 805, 565); 
	m_wndFeeList.Create(this, 5, 65, 805, 440); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 30, 90, 55);
	m_wndGroup.Create(this,95, 30, 295, 55); 
	m_wndFindLabel.Create(this, _T("Find"), 300, 30, 380, 55);
	m_wndFind.Create(this,385, 30, 600, 55); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 605, 30, 715, 55);
	m_wndApplyDate.Create(this,720, 30, 800, 55); 
	m_wndAdd.Create(this, _T("&Add"), 570, 570, 645, 595);
	m_wndEdit.Create(this, _T("&Edit"), 650, 570, 725, 595);
	m_wndDelete.Create(this, _T("&Delete"), 730, 570, 805, 595);
	m_wndInactive.Create(this, _T("Inactive"), 5, 570, 165, 595);
	m_wndMapCircular.m_nStyle = 0;
	m_wndMapCircular.Create(this, CRect(5, 445, 805, 570));
}

void CHMSOperationListSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndApplyDate.SetCheckValue(true);
	m_wndFeeList.InsertColumn(0, _T("Map ID"), CFMT_TEXT, 90);
	m_wndFeeList.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	m_wndFeeList.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndFeeList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndFeeList.InsertColumn(4, _T("Service Price"), CFMT_MONEY, 100);
	m_wndFeeList.InsertColumn(5, _T("Insurance Price"), CFMT_MONEY, 100);
	m_wndFeeList.InsertColumn(6, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndFeeList.InsertColumn(7, _T("Dept ID"), CFMT_TEXT, 80);
	m_wndFeeList.InsertColumn(8, _T("Apply Date"), CFMT_DATE, 80);
	m_wndFeeList.InsertColumn(9, _T("Salary"), CFMT_MONEY, 85);
	m_wndFeeList.InsertColumn(10, _T("Nhóm BH"), CFMT_TEXT, 350);
	m_wndFind.SetLimitText(35);
	m_wndFind.SetCheckValue(true);
	m_wndFind.SetNotEmpty(false);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	
	m_wndMapCircular.OnInitDialog();
}
void CHMSOperationListSetup::OnSetWindowEvents(){
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.SetWindowText(_T("Fee Entry"));
	m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFeeList.AddEvent(0, _T("-"), NULL);
	m_wndFeeList.AddEvent(2, _T("Refresh"), _OnFeeListRefreshFnc, 0, VK_F5);
	m_wndFeeList.AddEvent(0, _T("-"), NULL);
	m_wndFeeList.AddEvent(3, _T("Show table of fixed charges"), _OnListShowLogItemFnc);
	m_wndFeeList.AddEvent(0, _T("-"), NULL);
	m_wndFeeList.AddEvent(4, _T("Edit Old Price"), _OnListEditOldPriceFnc);
	
	m_wndFeeList.AddEvent(0, _T("-"), NULL);
	m_wndFeeList.AddEvent(5, _T("Thiết lập mục phí phân loại theo PACS"), _OnUpdatePacsGroupFnc);
	

	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndApplyDateLabel.SetEvent(WE_CLICK, _OnApplyDateLabelSelectFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationListSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationListSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationListSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationListSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationListSetupFnc, 0, 'T', VK_CONTROL);
*/
	//OnFeeListLoadData();
}
void CHMSOperationListSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Check(pDX, m_wndApplyDateLabel.GetDlgCtrlID(), m_bApplyDate);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Check(pDX, m_wndInactive.GetDlgCtrlID(), m_bInactive);

}
void CHMSOperationListSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationListSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
void CHMSOperationListSetup::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szFind.Empty();
	m_szApplyDate.Empty();
	m_bInactive = FALSE;

}
int CHMSOperationListSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndGroup.EnableWindow(TRUE);
		m_wndFind.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CHMSOperationListSetup::OnFeeListDblClick(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return;
	m_szID = m_wndFeeList.GetItemText(nSel, 1);
	//CHMSAdditionFeeSetupDialog dlg(pMF);
	CHMSParaclinicalSetupDialog_new dlg(this);
	dlg.m_szType = _T("O");

	dlg.m_szID = m_szID;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK){
		OnFeeListLoadData();
	}
} 
void CHMSOperationListSetup::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0) 
	{
		m_wndEdit.EnableWindow(false);
		m_wndDelete.EnableWindow(false);
		return;
	}
	m_szID = m_wndFeeList.GetItemText(nNewItem, 1);
	m_wndEdit.EnableWindow(true);
	m_wndDelete.EnableWindow(true);
	m_wndMapCircular.m_szFeeID = m_szID;
	m_wndMapCircular.m_szName = m_wndFeeList.GetItemText(nNewItem, 2);
	m_wndMapCircular.GetDataToScreen();
} 
int CHMSOperationListSetup::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSOperationListSetup();
	 return 0;
} 
long CHMSOperationListSetup::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szPacscode;
	m_wndFeeList.BeginLoad(); 
	int nCount = 0;
	if(!m_szGroupKey.IsEmpty())
		szWhere.Format(_T(" AND hfl_groupid='%s' "), m_szGroupKey);
	if(!m_szFind.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "),  m_szFind);
	if (m_bApplyDate && !m_szApplyDate.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfl_applydate = to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szApplyDate);
	if (m_bInactive)
		szWhere.AppendFormat(_T(" AND hfl_active = 'N'"));
	szSQL.Format(	_T(" SELECT *") \
					_T(" FROM hms_fee_list") \
					_T(" LEFT JOIN hms_circular_map ON (hfl_feeid = hcm_fee_id)") \
					_T(" LEFT JOIN sys_sel ON (hfl_manhom = ss_code and ss_id = 'hms_4210_manhom')") \
					_T(" WHERE substr(hfl_groupid, 1, 2) IN('B4','B5') %s ") \
					_T(" ORDER BY hfl_line, hfl_feeid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("HFL_PACSNAME"), szPacscode);
		int nItem = m_wndFeeList.AddItems(
			rs.GetValue(_T("hcm_map_id")),
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")),
			rs.GetValue(_T("hfl_deptid")),
			CDate::Convert(rs.GetValue(_T("hfl_applydate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("hfl_salary")),
			rs.GetValue(_T("ss_desc")),
			NULL);

		if (!szPacscode.IsEmpty())
		{
			m_wndFeeList.SetSubItemBkColor(nItem, 1, RGB(0, 139, 0), FALSE);
			m_wndFeeList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
}
void CHMSOperationListSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSOperationListSetup::OnGroupSelendok(){
	OnFeeListLoadData();
}
/*void CHMSOperationListSetup::OnGroupSetfocus(){
	
}*/
/*void CHMSOperationListSetup::OnGroupKillfocus(){
	
}*/
long CHMSOperationListSetup::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B4','B5') ") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationListSetup::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
void CHMSOperationListSetup::OnFindChange(){
	//OnFeeListLoadData();	
} 
/*void CHMSOperationListSetup::OnFindSetfocus(){
	
} */
/*void CHMSOperationListSetup::OnFindKillfocus(){
	
} */
int CHMSOperationListSetup::OnFindCheckValue(){
	OnFeeListLoadData();
	return 1;
} 
void CHMSOperationListSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CHMSParaclinicalSetupDialog_new dlg(this);
	dlg.m_szType = _T("O");
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	
} 
void CHMSOperationListSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0)
		return;

	CHMSParaclinicalSetupDialog_new dlg(this);
	dlg.m_szType = _T("O");
	dlg.m_szID = m_wndFeeList.GetItemText(nSel, 1);
	dlg.SetMode(VM_EDIT);
	dlg.DoModal();
} 
void CHMSOperationListSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSOperationListSetup();
} 
int CHMSOperationListSetup::OnAddHMSOperationListSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
 
} 
int CHMSOperationListSetup::OnEditHMSOperationListSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;
} 
int CHMSOperationListSetup::OnDeleteHMSOperationListSetup(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL, tmpStr; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	tmpStr.Format(_T("This is item fee active. Can not delete item fee [%s]!"), m_szID);
	szSQL.Format(_T(" select count(*) from hms_operation  where ho_itemid ='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0){
		ShowMessageBox(tmpStr, MB_OK|MB_ICONWARNING);
		return -1;
	}
 	szSQL.Format(_T("DELETE FROM  hms_fee_list WHERE hfl_feeid='%s' AND hfl_feeid NOT IN( SELECT ho_itemid FROM hms_operation WHERE ho_itemid='%s') "), m_szID, m_szID);
//_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndFeeList.DeleteItem(m_wndFeeList.GetCurSel());
 		SetMode(VM_NONE); 
 		OnCancelHMSOperationListSetup(); 
 	}
	return 0;
 } 
int CHMSOperationListSetup::OnSaveHMSOperationListSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSOperationListSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOperationListSetup::OnCancelHMSOperationListSetup(){
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
int CHMSOperationListSetup::OnHMSOperationListSetupListLoadData(){
	return 0;
}
#include "HMSFeeListEditDetailDialog.h"
int CHMSOperationListSetup::OnListShowLogItem(){
	CHMSFeeListEditDetailDialog dlg(this);
	dlg.m_szFeeID=m_szID;
	dlg.DoModal();
	return 0;
}

void CHMSOperationListSetup::OnApplyDateLabelSelect(){
	UpdateData(true);
	m_wndApplyDate.EnableWindow(m_bApplyDate);
	OnFeeListLoadData();
}

int CHMSOperationListSetup::OnApplyDateCheckValue(){
	OnFeeListLoadData();
	return 0;
}

void CHMSOperationListSetup::OnInactiveSelect(){
	OnFeeListLoadData();
}

void CHMSOperationListSetup::OnListEditOldPrice(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return;
	m_szID = m_wndFeeList.GetItemText(nSel, 1);
	CHMSParaclinicalSetupDialog_new2 dlg(this);
	dlg.m_szType = _T("O");

	dlg.m_szID = m_szID;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK){
		OnFeeListLoadData();
	}
}
int CHMSOperationListSetup::OnUpdatePacsGroup()
{
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return 0;
	CString szID = m_wndFeeList.GetItemText(nSel, 1);

	CHMSUpdatePacsGroupDialog dlg(this);
	
	dlg.m_szID = szID;
	dlg.SetMode(VM_EDIT);
	if(dlg.DoModal() == IDOK)
	{
		int nSel = m_wndFeeList.GetCurSel();
		OnFeeListLoadData();
		m_wndFeeList.SetCurSel(nSel);
	}
	 return 0;
}