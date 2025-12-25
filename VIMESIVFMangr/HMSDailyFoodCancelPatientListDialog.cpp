#include "HMSDailyFoodCancelPatientListDialog.h"
#include "MainFrm.h"
#include "HMSDailyFoodOrder.h"
#include "HMSFoodModifyItemDialog.h"

static int _OnPatientListSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnPatientListSelectAllItem();
} 
static int _OnPatientListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnPatientListUnselectAllItem();
} 

static void _OnSheetSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodCancelPatientListDialog* )pWnd)->OnSheetSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSheetSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnSheetSelendok();
}
/*static void _OnSheetSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnSheetKillfocus();
}*/
/*static void _OnSheetKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnSheetKillfocus();
}*/
static long _OnSheetLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnSheetLoadData();
}
/*static void _OnSheetAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnSheetAddNew();
}*/
static void _OnDescSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodCancelPatientListDialog* )pWnd)->OnDescSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnDescSelendok();
}
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnDescKillfocus();
}*/
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnDescKillfocus();
}*/
static long _OnDescLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnDescLoadData();
}
/*static void _OnDescAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnDescAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodCancelPatientListDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyFoodCancelPatientListDialog *pVw = (CHMSDailyFoodCancelPatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDailyFoodCancelPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnAddHMSDailyFoodCancelPatientListDialog();
} 
static int _OnEditHMSDailyFoodCancelPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnEditHMSDailyFoodCancelPatientListDialog();
} 
static int _OnDeleteHMSDailyFoodCancelPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnDeleteHMSDailyFoodCancelPatientListDialog();
} 
static int _OnSaveHMSDailyFoodCancelPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnSaveHMSDailyFoodCancelPatientListDialog();
} 
static int _OnCancelHMSDailyFoodCancelPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodCancelPatientListDialog*)pWnd)->OnCancelHMSDailyFoodCancelPatientListDialog();
} 
CHMSDailyFoodCancelPatientListDialog::CHMSDailyFoodCancelPatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDailyFoodCancelPatientListDialog::~CHMSDailyFoodCancelPatientListDialog(){
}
void CHMSDailyFoodCancelPatientListDialog::OnCreateComponents(){
	m_wndGroupPatientList.Create(this, _T("Patient List"), 5, 35, 960, 570);	
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 645, 5, 765, 30);
	m_wndPatientName.Create(this,770, 5, 929, 30); 
	m_wndRefresh.Create(this, _T("@"), 934, 5, 959, 30);
	m_wndPatientList.Create(this,10, 60, 955, 570); 	
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 870, 600);
	m_wndClose.Create(this, _T("&Close"), 875, 575, 960, 600);
}
void CHMSDailyFoodCancelPatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSheet.SetCheckValue(true);
	m_wndSheet.LimitText(35);
	//m_wndDesc.SetCheckValue(true);
	m_wndDesc.LimitText(35);

	m_wndPatientList.SetCheckBox(true);
	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);	
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(3, _T("\x102n s\xE1ng"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(4, _T("\x102n tr\x1B0\x61"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(5, _T("\x102n t\x1ED1i"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(6, _T("Light_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(7, _T("lunch_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(8, _T("dinner_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(9, _T("Orderid"), CFMT_TEXT, 0);
	

	m_hms_feefodorderTbl.SetTableName(_T("HMS_FEEFOOD"));
	
	m_hms_feefodorderTbl.AddField(_T("hfo_org_id"), dfText, 15);
	m_hms_feefodorderTbl.AddField(_T("hfo_user_id"), dfText, 15);
	m_hms_feefodorderTbl.AddField(_T("hfo_reforder_id"), dfLong);
	m_hms_feefodorderTbl.AddField(_T("hfo_docno"), dfLong); 
	m_hms_feefodorderTbl.AddField(_T("hfo_deptid"), dfText, 7); 
	m_hms_feefodorderTbl.AddField(_T("hfo_refidx"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_roomid"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_bedid"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_ordertype"), dfText, 1); 
	m_hms_feefodorderTbl.AddField(_T("hfo_orderdate"), dfDateTime); 	
	m_hms_feefodorderTbl.AddField(_T("hfol_itemid"), dfText); 
	m_hms_feefodorderTbl.AddField(_T("hfol_qtyorder"), dfFloat); 
	m_hms_feefodorderTbl.AddField(_T("hfol_type"), dfText); 
	m_hms_feefodorderTbl.AddField(_T("hfol_desc"), dfText, 254); 

}
void CHMSDailyFoodCancelPatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSheet.SetEvent(WE_SELENDOK, _OnSheetSelendokFnc);
	//m_wndSheet.SetEvent(WE_SETFOCUS, _OnSheetSetfocusFnc);
	//m_wndSheet.SetEvent(WE_KILLFOCUS, _OnSheetKillfocusFnc);
	m_wndSheet.SetEvent(WE_SELCHANGE, _OnSheetSelectChangeFnc);
	m_wndSheet.SetEvent(WE_LOADDATA, _OnSheetLoadDataFnc);
	//m_wndSheet.SetEvent(WE_ADDNEW, _OnSheetAddNewFnc);
	m_wndDesc.SetEvent(WE_SELENDOK, _OnDescSelendokFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_SELCHANGE, _OnDescSelectChangeFnc);
	m_wndDesc.SetEvent(WE_LOADDATA, _OnDescLoadDataFnc);
	//m_wndDesc.SetEvent(WE_ADDNEW, _OnDescAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(VM_VIEW);
	OnPatientListLoadData();
	

}
void CHMSDailyFoodCancelPatientListDialog::OnDoDataExchange(CDataExchange* pDX){	
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
}
void CHMSDailyFoodCancelPatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyFoodCancelPatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_feefodorderTbl.SetValue(_T("hfo_org_id"), pMF->GetModuleID());	
	m_hms_feefodorderTbl.SetValue(_T("hfo_user_id"), pMF->GetCurrentUser());
	m_hms_feefodorderTbl.SetValue(_T("hfo_reforder_id"), m_nOID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_docno"), m_nDocumentNo);
	m_hms_feefodorderTbl.SetValue(_T("hfo_deptid"), pMF->m_szDept);
	m_hms_feefodorderTbl.SetValue(_T("hfo_refidx"), m_nRefIndex);
	m_hms_feefodorderTbl.SetValue(_T("hfo_roomid"), m_nRoomID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_bedid"), m_nBedID);	
	m_hms_feefodorderTbl.SetValue(_T("hfo_ordertype"), _T("D"));
	m_hms_feefodorderTbl.SetValue(_T("hfo_orderdate"), m_szOrderDate);
	m_hms_feefodorderTbl.SetValue(_T("hfol_itemid"), m_szSheetKey);
	m_hms_feefodorderTbl.SetValue(_T("hfol_qtyorder"), m_nQty);
	m_hms_feefodorderTbl.SetValue(_T("hfol_type"), _T("S"));
	m_hms_feefodorderTbl.SetValue(_T("hfol_desc"), m_szUsage);
}
void CHMSDailyFoodCancelPatientListDialog::SetDefaultValues(){

	m_szSheetKey.Empty();
	m_szDesc.Empty();
	m_nQty = 1;
	m_nPatientNo = 0;
	m_nDocumentNo = 0;
	m_nRoomID = 0;
	m_nBedID = 0;
	m_nRefIndex = 0;
	m_szPatientName.Empty();
	m_nOrderNoOld=0;

}
int CHMSDailyFoodCancelPatientListDialog::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, 6, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		
 		UpdateData(FALSE);
 		return nOldMode;
}

void CHMSDailyFoodCancelPatientListDialog::OnSheetSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodCancelPatientListDialog::OnSheetSelendok(){
	m_nOrderID = ToLong(m_wndSheet.GetCurrent(4));
	m_szDesc = m_wndSheet.GetCurrent(2);

	UpdateData(false);
	if(m_nOrderID > 0)
		OnPatientListLoadData();
}
/*void CHMSDailyFoodCancelPatientListDialog::OnSheetSetfocus(){
	
}*/
/*void CHMSDailyFoodCancelPatientListDialog::OnSheetKillfocus(){
	
}*/
long CHMSDailyFoodCancelPatientListDialog::OnSheetLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromDate, szToDate;
	
	szFromDate = pMF->GetSysDate();
	szToDate = pMF->GetSysDate();

	if(m_wndSheet.IsSearchKey() && m_szSheetKey){
		szWhere.Format(_T(" AND HFOS_SHEETNO='%s' "), m_szSheetKey);
	};
	
	if(m_bHaucan)
	{
		szWhere.AppendFormat(_T(" and hfos_depttype='HC' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfos_depttype<>'HC' "));
	}

	m_wndSheet.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT HFOS_ORDERID as ORDERID,") \
		_T(" HFOS_SHEETNO as SHEETNO, ") \
		_T("   trunc_date(HFOS_ORDERDATE) AS orderdate,") \
		_T("   HFOS_UPDATEDDATE                     AS issuedate,") \
		_T("   HFOS_DESCRIPTION as description,") \
		_T("   HFOS_ORDERSTATUS as status,") \
		_T("   m_transaction_getstatusdesc(HFOS_ORDERSTATUS) as statusdesc,") \
		_T("   HFOS_CREATEDBY as createdby ") \
		_T(" FROM HMS_FOODORDERSHEET ") \
		_T(" WHERE trunc_date(HFOS_ORDERDATE) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-5 AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')")
		_T(" ORDER BY HFOS_ORDERDATE DESC"), szFromDate, szToDate,szWhere);

	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndSheet.AddItems(			
			rs.GetValue(_T("SHEETNO")),			
			CDate::Convert(rs.GetValue(_T("orderDate")), yyyymmdd, ddmmyyyy), 
			rs.GetValue(_T("description")),
			rs.GetValue(_T("statusdesc")),
			rs.GetValue(_T("ORDERID")),
			rs.GetValue(_T("createdby")), 
			NULL);
		rs.MoveNext();
	}

	
	return nCount;
}
/*void CHMSDailyFoodCancelPatientListDialog::OnSheetAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyFoodCancelPatientListDialog::OnDescSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodCancelPatientListDialog::OnDescSelendok(){
	 
}
/*void CHMSDailyFoodCancelPatientListDialog::OnDescSetfocus(){
	
}*/
/*void CHMSDailyFoodCancelPatientListDialog::OnDescKillfocus(){
	
}*/
long CHMSDailyFoodCancelPatientListDialog::OnDescLoadData(){
	/*CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDesc.IsSearchKey() && m_szDescKey){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szDescKey);
	};
	
	m_wndDesc.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_idx,hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndDesc.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			rs.GetValue(_T("itemid")),			
			NULL);
		rs.MoveNext();
	}*/
	return 0;
}
/*void CHMSDailyFoodCancelPatientListDialog::OnDescAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDailyFoodCancelPatientListDialog::OnPatientNameChange(){
	
} */
/*void CHMSDailyFoodCancelPatientListDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDailyFoodCancelPatientListDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDailyFoodCancelPatientListDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSDailyFoodCancelPatientListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodCancelPatientListDialog::OnPatientListDblClick(){
	/*int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;

	CHMSFoodModifyItemDialog dlg(this, VM_EDIT);
	
	dlg.m_szLightKey = m_wndPatientList.GetItemText(nSel, 6);
	dlg.m_szLunchKey = m_wndPatientList.GetItemText(nSel, 7);
	dlg.m_szDinnerKey = m_wndPatientList.GetItemText(nSel, 8);
	if(dlg.DoModal() == IDOK)
	{
		m_wndPatientList.SetItemText(nSel, 3, dlg.m_szLightName);
		m_wndPatientList.SetItemText(nSel, 4, dlg.m_szLunchName);
		m_wndPatientList.SetItemText(nSel, 5, dlg.m_szDinnerName);
		m_wndPatientList.SetItemText(nSel, 6, dlg.m_szLightKey);
		m_wndPatientList.SetItemText(nSel, 7, dlg.m_szLunchKey);
		m_wndPatientList.SetItemText(nSel, 8, dlg.m_szDinnerKey);		

	}*/

} 
void CHMSDailyFoodCancelPatientListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodCancelPatientListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CHMSDailyFoodCancelPatientListDialog::OnPatientListSelectAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndPatientList.GetItemCount(); i++){
		m_wndPatientList.SetCheck(i, true);
	}
	return 0;
}

int CHMSDailyFoodCancelPatientListDialog::OnPatientListUnselectAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndPatientList.GetItemCount(); i++){
		m_wndPatientList.SetCheck(i, false);
	}
	return 0;
}
long CHMSDailyFoodCancelPatientListDialog::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPatientList.BeginLoad(); 
	
	if(m_bHaucan)
	{
		szWhere.Format(_T(" and hfe_refstatus='Y' "));
	}
	else
	{
		szWhere.Format(_T(" and hfe_refstatus<>'Y' "));
	}

	szSQL.Format(_T(" SELECT DISTINCT docno,") \
_T("   pname, firstname, ") \
_T("   recordno,") \
_T("   objectname,") \
_T("   orderid,") \
_T("   (SELECT DISTINCT hfoc_itemid") \
_T("   FROM hms_feefoodcancel") \
_T("   WHERE hfoc_orderid=orderid") \
_T("   AND hfoc_type     ='S'") \
_T("   AND rownum        = 1") \
_T("   ) AS Light_item,") \
_T("   (SELECT DISTINCT hfl_name") \
_T("   FROM hms_feefoodcancel") \
_T("   LEFT JOIN hms_fee_list") \
_T("   ON(hfl_feeid      =hfoc_itemid)") \
_T("   WHERE hfoc_orderid=orderid") \
_T("   AND hfoc_type     ='S'") \
_T("   AND rownum        = 1") \
_T("   ) AS Light_name,") \
_T("   (SELECT DISTINCT hfoc_itemid") \
_T("   FROM hms_feefoodcancel") \
_T("   WHERE hfoc_orderid=orderid") \
_T("   AND hfoc_type     ='T'") \
_T("   AND rownum        = 1") \
_T("   ) AS lunch_item,") \
_T("   (SELECT DISTINCT hfl_name") \
_T("   FROM hms_feefoodcancel") \
_T("   LEFT JOIN hms_fee_list") \
_T("   ON(hfl_feeid      =hfoc_itemid)") \
_T("   WHERE hfoc_orderid=orderid") \
_T("   AND hfoc_type     ='T'") \
_T("   AND rownum        = 1") \
_T("   ) AS lunch_name,") \
_T("   (SELECT DISTINCT hfoc_itemid") \
_T("   FROM hms_feefoodcancel") \
_T("   WHERE hfoc_orderid=orderid") \
_T("   AND hfoc_type     ='C'") \
_T("   AND rownum        = 1") \
_T("   ) AS dinner_item,") \
_T("   (SELECT DISTINCT hfl_name") \
_T("   FROM hms_feefoodcancel") \
_T("   LEFT JOIN hms_fee_list") \
_T("   ON(hfl_feeid      =hfoc_itemid)") \
_T("   WHERE hfoc_orderid=orderid") \
_T("   AND hfoc_type     ='C'") \
_T("   AND rownum        = 1") \
_T("   ) AS dinner_name") \
_T(" FROM") \
_T("   (SELECT htr_docno AS docno,") \
_T("     trim(hp_surname") \
_T("     ||' '") \
_T("     ||hp_midname") \
_T("     ||' '") \
_T("     ||hp_firstname)              AS pname,") \
_T("	hp_firstname as firstname, ") \
_T("    htr_recordno                 AS recordno,") \
_T("     hms_getobjectname(hd_object) AS objectname,") \
_T("     hfoc_orderid             AS orderid") \
_T("   FROM hms_patient") \
_T("   LEFT JOIN hms_doc") \
_T("   ON(hd_patientno=hp_patientno)") \
_T("   LEFT JOIN hms_treatment_record") \
_T("   ON(htr_docno=hd_docno)") \
_T("   LEFT JOIN hms_feefoodcancel") \
_T("   ON(hfoc_docno    =htr_docno)") \
_T("   WHERE htr_deptid   ='%s' AND hfoc_status ='C'") \
_T("   ) tbl") \
_T(" ORDER BY firstname"), pMF->GetDepartmentID(), szWhere);


	_fmsg(_T("%s"), szSQL);
	m_wndPatientList.BeginLoad();
	CString szEmergency, tmpStr;
	CString szDischargeDate;
	
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}


	int nCount = 0,  nItem=1, nIdx = 1;;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		tmpStr.Format(_T("%d"), nIdx++);
		nItem = m_wndPatientList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")),			
			rs.GetValue(_T("pname")), 		
			rs.GetValue(_T("light_name")), 
			rs.GetValue(_T("lunch_name")), 
			rs.GetValue(_T("dinner_name")), 
			rs.GetValue(_T("light_item")), 
			rs.GetValue(_T("dinner_item")), 
			rs.GetValue(_T("dinner_item")),
			rs.GetValue(_T("orderid")),			
			NULL);
		m_wndPatientList.SetCheck(nItem, true);

		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;

}

void CHMSDailyFoodCancelPatientListDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{
		m_wndPatientList.SetCheck(i, TRUE);
	}
	
} 
void CHMSDailyFoodCancelPatientListDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{
		m_wndPatientList.SetCheck(i, FALSE);
	}
} 
void CHMSDailyFoodCancelPatientListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;	
} 
void CHMSDailyFoodCancelPatientListDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i = m_wndSelectedList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndSelectedList.GetCheck(i))
		{
			m_wndSelectedList.DeleteItem(i);
		}
	}

} 
void CHMSDailyFoodCancelPatientListDialog::OnSelectedListDblClick(){
	int nSel = m_wndSelectedList.GetCurSel();
	if(nSel < 0) return;
	CHMSFoodModifyItemDialog dlg(this, VM_EDIT);
	
	/*dlg.m_szSheetKey = m_wndSelectedList.GetItemText(nSel, 7);
	dlg.m_szDescKey = m_wndSelectedList.GetItemText(nSel, 8);
	if(dlg.DoModal() == IDOK)
	{
		m_wndSelectedList.SetItemText(nSel, 5, dlg.m_szSheetName);
		m_wndSelectedList.SetItemText(nSel, 6, dlg.m_szDescName);
		m_wndSelectedList.SetItemText(nSel, 7, dlg.m_szSheetKey);
		m_wndSelectedList.SetItemText(nSel, 8, dlg.m_szDescKey);
		

	}*/
} 
void CHMSDailyFoodCancelPatientListDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodCancelPatientListDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodCancelPatientListDialog::OnSelectedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
*/
	return 0;
}

void CHMSDailyFoodCancelPatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nOrderID = 0;
	bool bAddFlag = false;
	CString szMfgID;
	
	if(!IsValidateData()) 
 		return ; 

	if(ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD t\x1EA1o phi\x1EBFu \x63\x1EAFt \x103n \x63ho nh\x1EEFng \x62\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 \x63h\x1ECDn."), MB_YESNO) == IDNO)
		return;	
	
	
	int nQty = 1;
	CString szFoodType, szDescription, szItemID;
	
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{
		if(m_wndPatientList.GetCheck(i)){
			nOrderID = ToLong(m_wndPatientList.GetItemText(i, 9));
			szSQL.Format(_T(" UPDATE hms_feefoodcancel SET hfoc_status='O', hfoc_retorder_id=%ld  WHERE hfoc_orderid=%ld and hfoc_status='C'"), m_nOID,nOrderID);
			pMF->ExecSQL(szSQL);
		}
	}
	
	OnOK();	
	
} 
void CHMSDailyFoodCancelPatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 

int CHMSDailyFoodCancelPatientListDialog::OnAddHMSDailyFoodCancelPatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyFoodCancelPatientListDialog::OnEditHMSDailyFoodCancelPatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyFoodCancelPatientListDialog::OnDeleteHMSDailyFoodCancelPatientListDialog(){
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
 		OnCancelHMSDailyFoodCancelPatientListDialog();
 	}
	return 0;
}
int CHMSDailyFoodCancelPatientListDialog::OnSaveHMSDailyFoodCancelPatientListDialog(){
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
 		//OnHMSDailyFoodCancelPatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyFoodCancelPatientListDialog::OnCancelHMSDailyFoodCancelPatientListDialog(){
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
int CHMSDailyFoodCancelPatientListDialog::OnHMSDailyFoodCancelPatientListDialogListLoadData(){
	return 0;
}
