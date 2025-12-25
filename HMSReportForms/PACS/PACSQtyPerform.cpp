#include "stdafx.h"
#include "PACSQtyPerform.h"
#include "HMSMainFrame.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSQtyPerform *)pWnd)->OnDateCheckValue();
}
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSQtyPerform* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnTypeKillfocus();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSQtyPerform* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSQtyPerform *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnGroupAddNew();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPACSQtyPerform *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnTypeAddNew();
}*/
static long _OnPerformListLoadDataFnc(CWnd *pWnd){
	return ((CPACSQtyPerform*)pWnd)->OnPerformListLoadData();
} 
static void _OnPerformListDblClickFnc(CWnd *pWnd){
	((CPACSQtyPerform*)pWnd)->OnPerformListDblClick();
} 
static void _OnPerformListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSQtyPerform*)pWnd)->OnPerformListSelectChange(nOldItem, nNewItem);
} 
static int _OnPerformListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnPerformListDeleteItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSQtyPerform *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSQtyPerform *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSQtyPerform *)pWnd)->OnToDateCheckValue();
} 
static long _OnDateListLoadDataFnc(CWnd *pWnd){
	return ((CPACSQtyPerform*)pWnd)->OnDateListLoadData();
} 
static void _OnDateListDblClickFnc(CWnd *pWnd){
	((CPACSQtyPerform*)pWnd)->OnDateListDblClick();
} 
static void _OnDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSQtyPerform*)pWnd)->OnDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnDateListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPACSQtyPerform *pVw = (CPACSQtyPerform *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPACSQtyPerform *pVw = (CPACSQtyPerform *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSQtyPerform *pVw = (CPACSQtyPerform *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSQtyPerform *pVw = (CPACSQtyPerform *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPACSQtyPerformFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnAddPACSQtyPerform();
} 
static int _OnEditPACSQtyPerformFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnEditPACSQtyPerform();
} 
static int _OnDeletePACSQtyPerformFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnDeletePACSQtyPerform();
} 
static int _OnSavePACSQtyPerformFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnSavePACSQtyPerform();
} 
static int _OnCancelPACSQtyPerformFnc(CWnd *pWnd){
	 return ((CPACSQtyPerform*)pWnd)->OnCancelPACSQtyPerform();
}
static int _OnInpatientCheckValueFnc(CWnd *pWnd){return ((CPACSQtyPerform*)pWnd)->OnInpatientCheckValue();}
static int _OnOutpatientCheckValueFnc(CWnd *pWnd){return ((CPACSQtyPerform*)pWnd)->OnOutpatientCheckValue();}
static int _OnIncountCheckValueFnc(CWnd *pWnd){return ((CPACSQtyPerform*)pWnd)->OnIncountCheckValue();}
static int _OnOutcountCheckValueFnc(CWnd *pWnd){return ((CPACSQtyPerform*)pWnd)->OnOutcountCheckValue();}
CPACSQtyPerform::CPACSQtyPerform(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPACSQtyPerform::~CPACSQtyPerform(){
}
void CPACSQtyPerform::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 3, 5, 513, 600);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 215, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 220, 30, 300, 55);
	m_wndType.Create(this,305, 30, 510, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 510, 85); 
	m_wndPerformList.Create(this,10, 90, 510, 390); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 395, 110, 420);
	m_wndFromDate.Create(this,115, 395, 255, 420); 
	m_wndToDateLabel.Create(this, _T("To Date"), 265, 395, 365, 420);
	m_wndToDate.Create(this,370, 395, 510, 420); 
	m_wndDateList.Create(this,10, 425, 510, 595); 
	m_wndSave.Create(this, _T("Save"), 345, 605, 425, 630);
	m_wndCancel.Create(this, _T("Cancel"), 430, 605, 510, 630);

}
void CPACSQtyPerform::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);

	m_tbl_qtyperform.SetTableName(_T("hms_qtyperform"));
	m_tbl_qtyperform.AddField(_T("hqp_date"), dfDate);
	m_tbl_qtyperform.AddField(_T("hqp_type"), dfLong);
	m_tbl_qtyperform.AddField(_T("hqp_group"), dfText);
	m_tbl_qtyperform.AddField(_T("hqp_inpatient"), dfLong);
	m_tbl_qtyperform.AddField(_T("hqp_incount"), dfLong);
	m_tbl_qtyperform.AddField(_T("hqp_outpatient"), dfLong);
	m_tbl_qtyperform.AddField(_T("hqp_outcount"), dfLong);
	m_tbl_qtyperform.AddField(_T("hqp_id"), dfLong);

	m_wndPerformList.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndPerformList.InsertColumn(1, _T("Object"), CFMT_TEXT, 180);
	m_wndPerformList.InsertColumn(2, _T("InPatient"), CFMT_NUMBER, 70);
	m_wndPerformList.InsertColumn(3, _T("InCount"), CFMT_NUMBER, 70);
	m_wndPerformList.InsertColumn(4, _T("OutPatient"), CFMT_NUMBER, 70);
	m_wndPerformList.InsertColumn(5, _T("OutCount"), CFMT_NUMBER, 70);
	m_wndPerformList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndPerformList.SetEditLabel(2, GUI_NUMBERCTRL);
	m_wndPerformList.SetEditLabel(3, GUI_NUMBERCTRL);
	m_wndPerformList.SetEditLabel(4, GUI_NUMBERCTRL);
	m_wndPerformList.SetEditLabel(5, GUI_NUMBERCTRL);
	CGuiNumberCtrl* pCtrl = NULL;
	pCtrl = (CGuiNumberCtrl*) m_wndPerformList.GetEditControl(2);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnInpatientCheckValueFnc);
	pCtrl = (CGuiNumberCtrl*) m_wndPerformList.GetEditControl(3);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnIncountCheckValueFnc);
	pCtrl = (CGuiNumberCtrl*) m_wndPerformList.GetEditControl(4);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnOutpatientCheckValueFnc);
	pCtrl = (CGuiNumberCtrl*) m_wndPerformList.GetEditControl(5);
	if (pCtrl) pCtrl->SetEvent(WE_CHECKVALUE, _OnOutcountCheckValueFnc);
	m_wndPerformList.SetDisplayColor(true);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDateList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDateList.InsertColumn(1, _T("Date"), CFMT_DATE, 150);

}
void CPACSQtyPerform::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndPerformList.SetEvent(WE_SELCHANGE, _OnPerformListSelectChangeFnc);
	m_wndPerformList.SetEvent(WE_LOADDATA, _OnPerformListLoadDataFnc);
	m_wndPerformList.SetEvent(WE_DBLCLICK, _OnPerformListDblClickFnc);
	m_wndPerformList.AddEvent(1, _T("Delete"), _OnPerformListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDateList.SetEvent(WE_SELCHANGE, _OnDateListSelectChangeFnc);
	m_wndDateList.SetEvent(WE_LOADDATA, _OnDateListLoadDataFnc);
	m_wndDateList.SetEvent(WE_DBLCLICK, _OnDateListDblClickFnc);
	m_wndDateList.AddEvent(1, _T("Delete"), _OnDateListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_szDate = m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szTypeKey = _T("1");
	m_szGroupKey = _T("B3200");
	OnDateListLoadData();
	OnPerformListLoadData();
	SetMode(VM_ADD);
}
void CPACSQtyPerform::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CPACSQtyPerform::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSQtyPerform::GetScreenToData(){
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSQtyPerform::SetDefaultValues(){

	m_szDate.Empty();
	m_szTypeKey = _T("1");
	m_szGroupKey = _T("B3200");
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nInPatient = 0;
	m_nInCount = 0;
	m_nOutPatient = 0;
	m_nOutCount = 0;

}
int CPACSQtyPerform::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 2, 3, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CPACSQtyPerform::OnDateChange(){
	
} */
/*void CPACSQtyPerform::OnDateSetfocus(){
	
} */
/*void CPACSQtyPerform::OnDateKillfocus(){
	
} */
int CPACSQtyPerform::OnDateCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPerformListLoadData();
	return 0;
}
void CPACSQtyPerform::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnDateListLoadData();
	OnPerformListLoadData();
} 
void CPACSQtyPerform::OnTypeSelendok(){
	 
}
/*void CPACSQtyPerform::OnTypeSetfocus(){
	
}*/
/*void CPACSQtyPerform::OnTypeKillfocus(){
	
}*/
long CPACSQtyPerform::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code ='%s' "), m_szTypeKey);
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_type_importC7' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSQtyPerform::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSQtyPerform::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnDateListLoadData();
	OnPerformListLoadData();
} 
void CPACSQtyPerform::OnGroupSelendok(){
	 
}
/*void CPACSQtyPerform::OnGroupSetfocus(){
	
}*/
/*void CPACSQtyPerform::OnGroupKillfocus(){
	
}*/
long CPACSQtyPerform::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name ") \
		_T("FROM hms_fee_group ") \
		_T("WHERE substr(hfg_id,1,2)='B3' AND hfg_id not in('B3000', 'B3100', 'B3700') ") \
		_T("ORDER BY hfg_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSQtyPerform::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSQtyPerform::OnPerformListDblClick(){
	m_wndPerformList.PostMessage(WM_KEYDOWN, VK_F2);
} 
void CPACSQtyPerform::OnPerformListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSQtyPerform::OnPerformListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSQtyPerform::OnPerformListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPerformList.BeginLoad(); 
	int nCount = 0;

	szWhere.Format(_T("AND hqp_date = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hqp_type = '%s' AND hqp_group = '%s'"), m_szDate, m_szTypeKey, m_szGroupKey);

	szSQL.Format(_T(" SELECT ") \
		_T(" ho_id AS id,") \
		_T(" ho_desc AS object,") \
		_T(" hqp_inpatient AS inpatient,") \
		_T(" hqp_incount AS incount,") \
		_T(" hqp_outpatient AS outpatient,") \
		_T(" hqp_outcount AS outcount") \
		_T(" FROM hms_object") \
		_T(" LEFT JOIN hms_qtyperform") \
		_T(" ON(ho_id = hqp_id)") \
		_T(" WHERE 1 = 1 %s") \
		_T(" ORDER BY CAST(ho_id AS integer)"), szWhere);

	nCount = rs.ExecSQL(szSQL);

	if(nCount == 0)
	{
		szSQL.Format(_T(" SELECT ") \
			_T(" ho_id AS id,") \
			_T(" ho_desc AS object,") \
			_T(" '' AS inpatient,") \
			_T(" '' AS incount,") \
			_T(" '' AS outpatient,") \
			_T(" '' AS outcount") \
			_T(" FROM hms_object") \
			_T(" WHERE 1 = 1") \
			_T(" ORDER BY CAST(ho_id AS integer)"));
		nCount = rs.ExecSQL(szSQL);
	}
	while(!rs.IsEOF()){ 
		m_wndPerformList.AddItems(
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Object")), 
			rs.GetValue(_T("InPatient")), 
			rs.GetValue(_T("InCount")), 
			rs.GetValue(_T("OutPatient")), 
			rs.GetValue(_T("OutCount")), 
			NULL);
		rs.MoveNext();
	}
	m_wndPerformList.EndLoad(); 
	return nCount;

}
/*void CPACSQtyPerform::OnFromDateChange(){
	
} */
/*void CPACSQtyPerform::OnFromDateSetfocus(){
	
} */
/*void CPACSQtyPerform::OnFromDateKillfocus(){
	
} */
int CPACSQtyPerform::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSQtyPerform::OnToDateChange(){
	
} */
/*void CPACSQtyPerform::OnToDateSetfocus(){
	
} */
/*void CPACSQtyPerform::OnToDateKillfocus(){
	
} */
int CPACSQtyPerform::OnToDateCheckValue(){
	OnDateListLoadData();
	return 0;
} 
void CPACSQtyPerform::OnDateListDblClick(){

	
} 
void CPACSQtyPerform::OnDateListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	if(nNewItem >= 0)
	{
		m_szDate = m_wndDateList.GetItemText(nNewItem, 1);
		UpdateData(FALSE);
	}
	OnPerformListLoadData();
	
} 
int CPACSQtyPerform::OnDateListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeletePACSQtyPerform();
	 return 0;
} 
long CPACSQtyPerform::OnDateListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDateList.BeginLoad(); 
	int nCount = 0, nIdx = 1;

	szSQL.Format(_T(" SELECT DISTINCT hqp_date AS pdate FROM hms_qtyperform WHERE hqp_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hqp_type = '%s' AND hqp_group = '%s' ORDER BY hqp_date"), m_szFromDate, m_szToDate, m_szTypeKey, m_szGroupKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDateList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("pdate")), NULL);
		rs.MoveNext();
	}
	m_wndDateList.EndLoad(); 
	return nCount;
}
void CPACSQtyPerform::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddPACSQtyPerform();
} 
void CPACSQtyPerform::OnEditSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditPACSQtyPerform();
} 
void CPACSQtyPerform::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSavePACSQtyPerform();
} 
void CPACSQtyPerform::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPACSQtyPerform::OnAddPACSQtyPerform(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSQtyPerform::OnEditPACSQtyPerform(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSQtyPerform::OnDeletePACSQtyPerform(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_szTypeKey.IsEmpty())
	{
		ShowMessageBox(_T("\x43h\x1B0\x61 \x63h\x1ECDn lo\x1EA1i"));
		m_wndType.SetFocus();
		return 0;
	}
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM hms_qtyperform WHERE hqp_date = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hqp_type = '%s' AND hqp_group = '%s'"), m_szDate, m_szTypeKey, m_szGroupKey);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_ADD);
		OnPerformListLoadData();
 		OnDateListLoadData();
 	}
	return 0;
}
int CPACSQtyPerform::OnSavePACSQtyPerform(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_szTypeKey.IsEmpty())
	{
		ShowMessageBox(_T("\x43h\x1B0\x61 \x63h\x1ECDn lo\x1EA1i"));
		m_wndType.SetFocus();
		return 0;
	}
	if(m_szGroupKey.IsEmpty())
	{
		ShowMessageBox(_T("\x43h\x1B0\x61 \x63h\x1ECDn nh\xF3m"));
		m_wndGroup.SetFocus();
		return 0;
	}
	CRecord rs(&pMF->m_db);
 	CString szSQL, szObject;
	int nInPatient = 0, nInCount = 0, nOutPatient = 0, nOutCount = 0;

	for (int i = 0; i < m_wndPerformList.GetItemCount(); i++)
		{
			szObject = m_wndPerformList.GetItemText(i, 0);

			nInPatient = 0, nInCount = 0, nOutPatient = 0, nOutCount = 0;

			if (ToInt(m_wndPerformList.GetItemText(i, 2)) > 0)
				nInPatient = ToInt(m_wndPerformList.GetItemText(i, 2));
			if (ToInt(m_wndPerformList.GetItemText(i, 3)) > 0)
				nInCount = ToInt(m_wndPerformList.GetItemText(i, 3));
			if (ToInt(m_wndPerformList.GetItemText(i, 4)) > 0)
				nOutPatient = ToInt(m_wndPerformList.GetItemText(i, 4));
			if (ToInt(m_wndPerformList.GetItemText(i, 5)) > 0)
				nOutCount = ToInt(m_wndPerformList.GetItemText(i, 5));

			szSQL.Format(_T("SELECT Count(*) FROM hms_qtyperform WHERE hqp_date = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hqp_id = %s AND hqp_type = '%s' AND hqp_group = '%s'"), m_szDate, szObject, m_szTypeKey, m_szGroupKey);
			rs.ExecSQL(szSQL);

			if (rs.GetIntValue() > 0)
			{
				szSQL.Format(_T("UPDATE hms_qtyperform SET hqp_inpatient = %d, hqp_incount = %d, hqp_outpatient = %d, hqp_outcount = %d ") \
					_T("WHERE hqp_date = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hqp_id = %s AND hqp_type = '%s' AND hqp_group = '%s'"), nInPatient, nInCount, nOutPatient, nOutCount, m_szDate, szObject, m_szTypeKey, m_szGroupKey);
				pMF->ExecSQL(szSQL);
			}
			else
			{
				m_tbl_qtyperform.SetValue(_T("hqp_date"), m_szDate);
				m_tbl_qtyperform.SetValue(_T("hqp_type"), m_szTypeKey);
				m_tbl_qtyperform.SetValue(_T("hqp_group"), m_szGroupKey);
				m_tbl_qtyperform.SetValue(_T("hqp_inpatient"), nInPatient);
				m_tbl_qtyperform.SetValue(_T("hqp_incount"), nInCount);
				m_tbl_qtyperform.SetValue(_T("hqp_outpatient"), nOutPatient);
				m_tbl_qtyperform.SetValue(_T("hqp_outcount"), nOutCount);
				m_tbl_qtyperform.SetValue(_T("hqp_id"), szObject);
				szSQL = m_tbl_qtyperform.GetInsertSQL();
				pMF->ExecSQL(szSQL);
			}
		}

		ShowMessageBox(_T("\x110\xE3 l\x1B0u"));
		OnPerformListLoadData();
		OnDateListLoadData();
		return 0;
}
int CPACSQtyPerform::OnCancelPACSQtyPerform(){
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
int CPACSQtyPerform::OnPACSQtyPerformListLoadData(){
	return 0;
}

int CPACSQtyPerform::OnInpatientCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}

int CPACSQtyPerform::OnOutpatientCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}

int CPACSQtyPerform::OnIncountCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}

int CPACSQtyPerform::OnOutcountCheckValue(){
	CGuiListCtrl *pList = (CGuiListCtrl*) (GetFocus()->GetParent());
	pList->PostMessage(WM_KEYDOWN, VK_F2);
	return 0;
}

