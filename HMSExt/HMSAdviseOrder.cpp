#include "HMSAdviseOrder.h"
#include "GuiMainFrame.h"
#include "HMSAdviseOrderDialog.h"
static void _OnPendingSelectFnc(CWnd *pWnd){
	  ((CHMSAdviseOrder*)pWnd)->OnPendingSelect();
}
static void _OnAdvisedSelectFnc(CWnd *pWnd){
	  ((CHMSAdviseOrder*)pWnd)->OnAdvisedSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdviseOrder* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdviseOrder *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdviseOrder *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdviseOrder *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdviseOrder *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdviseOrder *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdviseOrder *)pWnd)->OnRecordNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdviseOrder*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAdviseOrder*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAdviseOrder*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrder*)pWnd)->OnListDeleteItem();
} 




static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSAdviseOrder*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	 ((CHMSAdviseOrder*)pWnd)->OnInpatientSelect();
}


static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return (int)((CHMSAdviseOrder*)pWnd)->OnListLoadData();
}


static void _OnApproveSelectFnc(CWnd *pWnd){
	CHMSAdviseOrder *pVw = (CHMSAdviseOrder *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdviseOrder *pVw = (CHMSAdviseOrder *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSAdviseOrderFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrder*)pWnd)->OnAddHMSAdviseOrder();
} 
static int _OnEditHMSAdviseOrderFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrder*)pWnd)->OnEditHMSAdviseOrder();
} 
static int _OnDeleteHMSAdviseOrderFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrder*)pWnd)->OnDeleteHMSAdviseOrder();
} 
static int _OnSaveHMSAdviseOrderFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrder*)pWnd)->OnSaveHMSAdviseOrder();
} 
static int _OnCancelHMSAdviseOrderFnc(CWnd *pWnd){
	 return ((CHMSAdviseOrder*)pWnd)->OnCancelHMSAdviseOrder();
} 
CHMSAdviseOrder::CHMSAdviseOrder(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nOrderId= 0;
}
CHMSAdviseOrder::~CHMSAdviseOrder(){
}
void CHMSAdviseOrder::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndFilterInformation.Create(this, _T("Filter Information"), 275, 5, 800, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 800, 570);
	m_wndPending.Create(this, _T("Đợi tư vấn"), 10, 30, 135, 55);
	m_wndAdvised.Create(this, _T("Đã tư vấn"), 9, 60, 134, 85);
	
	m_wndDepartmentLabel.Create(this, _T("Department"), 280, 30, 360, 55);
	m_wndDepartment.Create(this,365, 30, 624, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 279, 60, 359, 85);
	m_wndFromDate.Create(this,364, 60, 449, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 454, 60, 534, 85);
	m_wndToDate.Create(this,539, 60, 624, 85); 
	m_wndDocNoLabel.Create(this, _T("Doc No"), 629, 30, 709, 55);
	m_wndDocNo.Create(this,714, 30, 794, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 629, 60, 709, 85);
	m_wndRecordNo.Create(this,714, 60, 794, 85); 
	m_wndList.Create(this,10, 120, 795, 565); 
	//m_wndOutpatient.Create(this, _T("Outpatient"), 5, 575, 135, 600);
	//m_wndInpatient.Create(this, _T("Inpatient"), 140, 575, 270, 600);
	//m_wndApprove.Create(this, _T("Approve"), 625, 575, 710, 600);
	//m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 800, 600);

}
void CHMSAdviseOrder::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(false);
	m_wndDepartment.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDocNo.SetNotEmpty(false);
	m_wndRecordNo.SetNotEmpty(false);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Record No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_LEFT, 150);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Department"), CFMT_LEFT, 50);
	m_wndList.InsertColumn(6, _T("Order Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(7, _T("Ngày tư vấn"), CFMT_DATE, 90);
	m_wndList.InsertColumn(8, _T("Generic"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(9, _T("Status"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(10, _T(""), CFMT_NUMBER, 0);	//treattime
	m_wndList.InsertColumn(11, _T(""), CFMT_NUMBER, 0);	//refidx

}
void CHMSAdviseOrder::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndPending.SetEvent(WE_CLICK, _OnPendingSelectFnc);
	m_wndAdvised.SetEvent(WE_CLICK, _OnAdvisedSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//
	m_wndList.AddEvent(3, _T("Refresh"), _OnListRefreshItemFnc, 0, VK_F5, 0);
	//
//	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
//	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAdviseOrderFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAdviseOrderFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAdviseOrderFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAdviseOrderFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAdviseOrderFnc, 0, 'T', VK_CONTROL);
	*/
	SetMode(VM_VIEW);

}
void CHMSAdviseOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndPending.GetDlgCtrlID(), m_nOptStatus);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	//DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	//DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);

}
void CHMSAdviseOrder::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdviseOrder::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CHMSAdviseOrder::SetDefaultValues(){

	m_nOptStatus=0;
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bInpatient=TRUE;
	m_bOutpatient=TRUE;
	m_nDocNo = 0;
	m_szRecordNo.Empty();

}
int CHMSAdviseOrder::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
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
			m_szFromDate = m_szToDate = pMF->GetSysDate();
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHMSAdviseOrder::OnPendingSelect(){
	OnListLoadData();
}
void CHMSAdviseOrder::OnAdvisedSelect(){
	OnListLoadData();
}
void CHMSAdviseOrder::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdviseOrder::OnDepartmentSelendok(){
	 
}
/*void CHMSAdviseOrder::OnDepartmentSetfocus(){
	
}*/
/*void CHMSAdviseOrder::OnDepartmentKillfocus(){
	
}*/


int LoadDepartmentList(CGuiMainFrame * pMF, CWnd *pWnd, CString szKey, CString szFilter=_T("")){
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox*) pWnd;

	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), szKey);
	};

	if(!szFilter.IsEmpty())
		szWhere.AppendFormat(_T(" %s "), szFilter);

	pCB->DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id, SD_ID_ALIAS as aliasid, sd_name ") \
		_T(" FROM sys_dept ") \
		_T("WHERE sd_isactive='Y' %s ") \
		_T("ORDER BY sd_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("sd_id")),
			rs.GetValue(_T("aliasid")), 
			rs.GetValue(_T("sd_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}


long CHMSAdviseOrder::OnDepartmentLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	return LoadDepartmentList(pMF, &m_wndDepartment, m_szDepartmentKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdviseOrder::OnDepartmentAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdviseOrder::OnFromDateChange(){
	
} */
/*void CHMSAdviseOrder::OnFromDateSetfocus(){
	
} */
/*void CHMSAdviseOrder::OnFromDateKillfocus(){
	
} */
int CHMSAdviseOrder::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSAdviseOrder::OnToDateChange(){
	
} */
/*void CHMSAdviseOrder::OnToDateSetfocus(){
	
} */
/*void CHMSAdviseOrder::OnToDateKillfocus(){
	
} */
int CHMSAdviseOrder::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSAdviseOrder::OnDocNoChange(){
	
} */
/*void CHMSAdviseOrder::OnDocNoSetfocus(){
	
} */
/*void CHMSAdviseOrder::OnDocNoKillfocus(){
	
} */
int CHMSAdviseOrder::OnDocNoCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSAdviseOrder::OnRecordNoChange(){
	
} */
/*void CHMSAdviseOrder::OnRecordNoSetfocus(){
	
} */
/*void CHMSAdviseOrder::OnRecordNoKillfocus(){
	
} */
int CHMSAdviseOrder::OnRecordNoCheckValue(){
	OnListLoadData();
	return 1;
} 
void CHMSAdviseOrder::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	m_nOrderId = str2long(m_wndList.GetItemText(nSel, 0));
	CString szType = m_wndList.GetItemText(nSel, 8);
	szType.MakeUpper();
	CHMSAdviseOrderDialog dlg(this, VM_EDIT, m_nOrderId);
	dlg.m_szType = szType;
	dlg.m_wndForm.m_fKey.m_nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));
	dlg.m_wndForm.m_fKey.m_nOrderId = str2long(m_wndList.GetItemText(nSel, 0));
	dlg.DoModal();
} 
void CHMSAdviseOrder::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAdviseOrder::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAdviseOrder::OnListLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(TRUE);

	m_wndList.BeginLoad(); 
	
	if(m_nOptStatus == 0)
	{
		szWhere.AppendFormat(_T(" and (status='S' and pending ='Y') "));
	}
	else 
		szWhere.AppendFormat(_T(" and (status='A' and pending='N') "));

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and deptid='%s' "), m_szDepartmentKey);
	}
	if(!m_szRecordNo.IsEmpty())
	{
		szWhere.Format(_T(" and recordno='%s' "), m_szRecordNo);
	}
	if(m_nDocNo > 0)
	{
		szWhere.Format(_T(" and docno=%ld "), m_nDocNo);
	}

	szSQL.Format(_T(" SELECT order_id, ") \
_T("     docno,") \
_T("     recordno,") \
_T("     hp_surname") \
_T("     || ' '") \
_T("     || hp_midname") \
_T("     || ' '") \
_T("     || hp_firstname                     AS pname,") \
_T("     EXTRACT(YEAR FROM hp_birthdate)     AS yob,") \
_T("     deptid,") \
_T("     order_date,") \
_T("     advise_date,") \
_T("	 genericname, ") \
_T(" 	 pending, ") \
_T("     treattime,") \
_T("     refidx ") \
_T(" FROM") \
_T("     hms_advise_order") \
_T("     LEFT JOIN hms_patient ON ( hp_patientno = patientno )") \
_T(" WHERE") \
_T("     order_date BETWEEN to_timestamp('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS')") \
_T(" %s ") \
_T(" ORDER BY") \
_T("     order_id"), m_szFromDate, m_szToDate, szWhere);

_tprintf(_T("%s"), szSQL);
	int nCount = rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);

	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			rs.GetValue(_T("order_id")),
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("recordno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("yob")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("order_date")),
			rs.GetValue(_T("advise_date")),
			rs.GetValue(_T("genericname")),
			rs.GetValue(_T("pending")),
			rs.GetValue(_T("treattime")),
			rs.GetValue(_T("refidx")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	
	return nCount;
}

void CHMSAdviseOrder::OnOutpatientSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CHMSAdviseOrder::OnInpatientSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnListLoadData();	
}
void CHMSAdviseOrder::OnApproveSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
} 
void CHMSAdviseOrder::OnCancelSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
} 
int CHMSAdviseOrder::OnAddHMSAdviseOrder(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdviseOrder::OnEditHMSAdviseOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdviseOrder::OnDeleteHMSAdviseOrder(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSAdviseOrder();
 	}
	return 0;
}
int CHMSAdviseOrder::OnSaveHMSAdviseOrder(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
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
 		//OnHMSAdviseOrderListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdviseOrder::OnCancelHMSAdviseOrder(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSAdviseOrder::OnHMSAdviseOrderListLoadData(){
	return 0;
}

void CHMSAdviseOrder::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
}