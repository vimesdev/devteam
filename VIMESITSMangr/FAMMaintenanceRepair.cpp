#include "FAMMaintenanceRepair.h"
#include "FAMMaintenanceRepairDlg.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepair *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepair *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMMaintenanceRepair* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepair *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepair *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepair *pVw = (CFAMMaintenanceRepair *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepair*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CFAMMaintenanceRepair*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMMaintenanceRepair*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepair*)pWnd)->OnOrderListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepair *pVw = (CFAMMaintenanceRepair *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepair *pVw = (CFAMMaintenanceRepair *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepair *pVw = (CFAMMaintenanceRepair *)pWnd;
	pVw->OnDeleteSelect();
}
static void _OnViewSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepair *pVw = (CFAMMaintenanceRepair *)pWnd;
	pVw->OnViewSelect();
} 
static int _OnAddFAMMaintenanceRepairFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepair*)pWnd)->OnAddFAMMaintenanceRepair();
} 
static int _OnEditFAMMaintenanceRepairFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepair*)pWnd)->OnEditFAMMaintenanceRepair();
} 
static int _OnDeleteFAMMaintenanceRepairFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepair*)pWnd)->OnDeleteFAMMaintenanceRepair();
} 
static int _OnSaveFAMMaintenanceRepairFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepair*)pWnd)->OnSaveFAMMaintenanceRepair();
} 
static int _OnCancelFAMMaintenanceRepairFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepair*)pWnd)->OnCancelFAMMaintenanceRepair();
} 
CFAMMaintenanceRepair::CFAMMaintenanceRepair(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMMaintenanceRepair::~CFAMMaintenanceRepair(){
}
void CFAMMaintenanceRepair::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 6, 805, 91);
	m_wndMaintenance.Create(this, _T("Order List"), 5, 96, 805, 591);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 385, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 390, 30, 480, 55);
	m_wndToDate.Create(this,485, 30, 765, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 100, 85);
	m_wndType.Create(this,105, 60, 385, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 390, 60, 480, 85);
	m_wndOrderNo.Create(this,485, 60, 765, 85); 
	m_wndRefresh.Create(this, _T("@"), 770, 60, 800, 85);
	m_wndOrderList.Create(this,10, 121, 800, 586); 
	m_wndAdd.Create(this, _T("&Add"), 555, 595, 635, 620);
	m_wndEdit.Create(this, _T("&Edit"), 640, 595, 720, 620);
	m_wndDelete.Create(this, _T("&Delete"), 725, 595, 805, 620);
	m_wndView.Create(this, _T("View"), 470, 595, 550, 620);
}
void CFAMMaintenanceRepair::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderNo.SetLimitText(30);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndOrderList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 150);
	m_wndOrderList.InsertColumn(3, _T("Type"), CFMT_TEXT, 250);
	m_wndOrderList.InsertColumn(4, _T("Status"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(5, _T("mType"), CFMT_TEXT, 0);
	m_wndOrderList.InsertColumn(6, _T("User"), CFMT_TEXT, 0);

}
void CFAMMaintenanceRepair::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	
	SetMode(VM_VIEW);

}
void CFAMMaintenanceRepair::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);

}
void CFAMMaintenanceRepair::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMMaintenanceRepair::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMMaintenanceRepair::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szOrderNo.Empty();

}
int CFAMMaintenanceRepair::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, 2, 3, -1);
			m_szFromDate = m_szToDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate += _T("23:59");
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
/*void CFAMMaintenanceRepair::OnFromDateChange(){
	
} */
/*void CFAMMaintenanceRepair::OnFromDateSetfocus(){
	
} */
/*void CFAMMaintenanceRepair::OnFromDateKillfocus(){
	
} */
int CFAMMaintenanceRepair::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepair::OnToDateChange(){
	
} */
/*void CFAMMaintenanceRepair::OnToDateSetfocus(){
	
} */
/*void CFAMMaintenanceRepair::OnToDateKillfocus(){
	
} */
int CFAMMaintenanceRepair::OnToDateCheckValue(){
	return 0;
} 
void CFAMMaintenanceRepair::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMMaintenanceRepair::OnTypeSelendok(){
	 
}
/*void CFAMMaintenanceRepair::OnTypeSetfocus(){
	
}*/
/*void CFAMMaintenanceRepair::OnTypeKillfocus(){
	
}*/
long CFAMMaintenanceRepair::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description FROM sys_sel ")\
				_T("WHERE ss_id = 'fm_type' %s ORDER BY ss_index, ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMMaintenanceRepair::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMMaintenanceRepair::OnOrderNoChange(){
	
} */
/*void CFAMMaintenanceRepair::OnOrderNoSetfocus(){
	
} */
/*void CFAMMaintenanceRepair::OnOrderNoKillfocus(){
	
} */
int CFAMMaintenanceRepair::OnOrderNoCheckValue(){
	return 0;
} 
void CFAMMaintenanceRepair::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnOrderListLoadData();
} 
void CFAMMaintenanceRepair::OnOrderListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_szStatus == _T("N"))
	{
		OnEditSelect();
	}
	else
		OnViewSelect();
} 
void CFAMMaintenanceRepair::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderNo = m_wndOrderList.GetItemText(nNewItem, 1);
	m_szStatus = m_wndOrderList.GetItemText(nNewItem, 4);
	m_szType = m_wndOrderList.GetItemText(nNewItem, 5);
	SetMode(VM_EDIT);
} 
int CFAMMaintenanceRepair::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSelect();
	 return 0;
} 
long CFAMMaintenanceRepair::OnOrderListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIndex;
	szWhere.Empty();
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	if(!m_szFromDate.IsEmpty() && !m_szToDate.IsEmpty())
	{
		szWhere.Format(_T(" and fmr_orderdate between TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') and TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	szSQL.Format(_T("SELECT fmr_createdby, fmr_orderno, fmr_orderdate, fmr_status, fmr_type,") \
		_T(" (select ss_desc from sys_sel where ss_id = 'fm_type' and ss_code = fmr_type) as ftype ") \
		_T(" FROM fam_maintenance_repair WHERE fmr_org_id = '%s' %s"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szIndex.Format(_T("%d"), nIndex);
		m_wndOrderList.AddItems(
			szIndex,
			rs.GetValue(_T("fmr_orderno")),
			CDateTime::Convert(rs.GetValue(_T("fmr_orderdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss),
			rs.GetValue(_T("ftype")),
			rs.GetValue(_T("fmr_status")),
			rs.GetValue(_T("fmr_type")),
			rs.GetValue(_T("fmr_createdby")),
			NULL);
		rs.MoveNext();
		nIndex++;
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CFAMMaintenanceRepair::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("17.01")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		CFAMMaintenanceRepairDlg dlg(pMF);
		dlg.m_szOrderNo = m_szOrderNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
	
} 
void CFAMMaintenanceRepair::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("17.02")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not edit with current status."), 0, MB_ICONWARNING);
		}
		else
		{
			CFAMMaintenanceRepairDlg dlg(pMF);
			dlg.m_szStatus = m_szStatus;
			dlg.m_szOrderNo = m_szOrderNo;
			dlg.m_wndMRL.m_szType = m_szType;
			dlg.SetMode(VM_EDIT);
			dlg.DoModal();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
} 
void CFAMMaintenanceRepair::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(pMF->CheckPermission(_T("17.03")) || pMF->GetCurrentUser() == _T("admin") || pMF->GetCurrentUser() == m_szUser)
	{
		if(m_szStatus == _T("Y"))
		{
			MessageBox(_T("Can not delete with current status."), 0, MB_ICONWARNING);
		}else{
			OnDeleteFAMMaintenanceRepair();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return;
	}
}
void CFAMMaintenanceRepair::OnViewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFAMMaintenanceRepairDlg dlg(pMF);
	dlg.m_szOrderNo = m_szOrderNo;
	dlg.m_szStatus = m_szStatus;
	dlg.SetMode(VM_VIEW);
	dlg.DoModal();
}
int CFAMMaintenanceRepair::OnAddFAMMaintenanceRepair(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMMaintenanceRepair::OnEditFAMMaintenanceRepair(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMMaintenanceRepair::OnDeleteFAMMaintenanceRepair(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nCount;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(m_szStatus == _T("Y"))
		return -1;
	szSQL.Format(_T("SELECT count(*) FROM fam_maintenance_repair_l where fmrl_orderno = '%s'"), m_szOrderNo);
	rs.ExecSQL(szSQL);
	nCount = rs.GetIntValue();
	if(nCount > 1)
	{
		szSQL.Format(_T(" DELETE FROM fam_maintenance_repair_l WHERE fmrl_orderno = '%s'"), m_szOrderNo);
		pMF->ExecSQL(szSQL);
	}
	szSQL.Format(_T("DELETE FROM fam_maintenance_repair WHERE fmr_orderno = '%s' and fmr_org_id = '%s'"), m_szOrderNo, pMF->GetModuleID());
	_fmsg(_T("Del phieu : %s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnOrderListLoadData();
 	}
	return 0;
}
int CFAMMaintenanceRepair::OnSaveFAMMaintenanceRepair(){
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
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnFAMMaintenanceRepairListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMMaintenanceRepair::OnCancelFAMMaintenanceRepair(){
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
int CFAMMaintenanceRepair::OnFAMMaintenanceRepairListLoadData(){
	return 0;
}
