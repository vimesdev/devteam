#include "HMSDocApprove.h"
#include "MainFrame_E10.h"
static void _OnTerminatedSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnTerminatedSelect();
}
static void _OnApprovedFeesSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnApprovedFeesSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnApprovedSelect();
}
static void _OnCanceledSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnCanceledSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDocApprove* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnRecordNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDocApprove*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDocApprove*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDocApprove*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnListDeleteItem();
} 


static int _OnListPrintSummaryMaterialAndDrugFnc(CWnd *pWnd){
	 ((CHMSDocApprove*)pWnd)->OnPrintSummaryMaterialAndDrug();
	 return 0;
} 


static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSDocApprove*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	 ((CHMSDocApprove*)pWnd)->OnInpatientSelect();
}

static int _OnListApproveItemFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnListApproveItem();
} 


static int _OnListRefreshItemFnc(CWnd *pWnd){
	 return (int)((CHMSDocApprove*)pWnd)->OnListLoadData();
}

static int _OnListCancelItemFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnListCancelItem();
} 

static void _OnApproveSelectFnc(CWnd *pWnd){
	CHMSDocApprove *pVw = (CHMSDocApprove *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDocApprove *pVw = (CHMSDocApprove *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnAddHMSDocApprove();
} 
static int _OnEditHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnEditHMSDocApprove();
} 
static int _OnDeleteHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnDeleteHMSDocApprove();
} 
static int _OnSaveHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnSaveHMSDocApprove();
} 
static int _OnCancelHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnCancelHMSDocApprove();
} 
CHMSDocApprove::CHMSDocApprove(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDocApprove::~CHMSDocApprove(){
}
void CHMSDocApprove::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndFilterInformation.Create(this, _T("Filter Information"), 275, 5, 800, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 800, 570);
	m_wndTerminated.Create(this, _T("Terminated"), 10, 30, 135, 55);
	m_wndApprovedFees.Create(this, _T("Approved Fees"), 140, 30, 265, 55);
	m_wndApproved.Create(this, _T("_APPROVED_"), 9, 60, 134, 85);
	m_wndCanceled.Create(this, _T("Canceled"), 139, 60, 264, 85);
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
	m_wndOutpatient.Create(this, _T("Outpatient"), 5, 575, 135, 600);
	m_wndInpatient.Create(this, _T("Inpatient"), 140, 575, 270, 600);
	m_wndApprove.Create(this, _T("Approve"), 625, 575, 710, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 800, 600);

}
void CHMSDocApprove::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Record No"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_LEFT, 150);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Department"), CFMT_LEFT, 50);
	m_wndList.InsertColumn(6, _T("Admit Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(7, _T("Discharge Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(8, _T("Approved Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(9, _T(""), CFMT_NUMBER, 0);	//treattime
	m_wndList.InsertColumn(10, _T(""), CFMT_NUMBER, 0);	//refidx

}
void CHMSDocApprove::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);
	m_wndApprovedFees.SetEvent(WE_CLICK, _OnApprovedFeesSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndCanceled.SetEvent(WE_CLICK, _OnCanceledSelectFnc);
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
	m_wndList.AddEvent(1, _T("Approve"), _OnListApproveItemFnc, 0, VK_F2);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Cancel"), _OnListCancelItemFnc, 0, NULL, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Print patient's material and drugs summary"), _OnListPrintSummaryMaterialAndDrugFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Refresh"), _OnListRefreshItemFnc, 0, VK_F5, 0);
	//
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDocApproveFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDocApproveFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDocApproveFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDocApproveFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDocApproveFnc, 0, 'T', VK_CONTROL);
	*/
	SetMode(VM_VIEW);

}
void CHMSDocApprove::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndTerminated.GetDlgCtrlID(), m_nOptStatus);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);

}
void CHMSDocApprove::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDocApprove::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHMSDocApprove::SetDefaultValues(){

	m_nOptStatus=0;
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bInpatient=TRUE;
	m_bOutpatient=TRUE;
	m_nDocNo = 0;
	m_szRecordNo.Empty();

}
int CHMSDocApprove::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
void CHMSDocApprove::OnTerminatedSelect(){
	OnListLoadData();
}
void CHMSDocApprove::OnApprovedFeesSelect(){
	OnListLoadData();
}
void CHMSDocApprove::OnApprovedSelect(){
	OnListLoadData();
}
void CHMSDocApprove::OnCanceledSelect(){
	OnListLoadData();
}
void CHMSDocApprove::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHMSDocApprove::OnDepartmentSelendok(){
	 
}
/*void CHMSDocApprove::OnDepartmentSetfocus(){
	
}*/
/*void CHMSDocApprove::OnDepartmentKillfocus(){
	
}*/
long CHMSDocApprove::OnDepartmentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadDepartmentList(&m_wndDepartment, m_szDepartmentKey);
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
/*void CHMSDocApprove::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CHMSDocApprove::OnFromDateChange(){
	
} */
/*void CHMSDocApprove::OnFromDateSetfocus(){
	
} */
/*void CHMSDocApprove::OnFromDateKillfocus(){
	
} */
int CHMSDocApprove::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSDocApprove::OnToDateChange(){
	
} */
/*void CHMSDocApprove::OnToDateSetfocus(){
	
} */
/*void CHMSDocApprove::OnToDateKillfocus(){
	
} */
int CHMSDocApprove::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSDocApprove::OnDocNoChange(){
	
} */
/*void CHMSDocApprove::OnDocNoSetfocus(){
	
} */
/*void CHMSDocApprove::OnDocNoKillfocus(){
	
} */
int CHMSDocApprove::OnDocNoCheckValue(){
	OnListLoadData();
	return 1;
} 
/*void CHMSDocApprove::OnRecordNoChange(){
	
} */
/*void CHMSDocApprove::OnRecordNoSetfocus(){
	
} */
/*void CHMSDocApprove::OnRecordNoKillfocus(){
	
} */
int CHMSDocApprove::OnRecordNoCheckValue(){
	OnListLoadData();
	return 1;
} 
void CHMSDocApprove::OnListDblClick(){
	
} 
void CHMSDocApprove::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHMSDocApprove::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDocApprove::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(TRUE);

	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szTable = _T(" hms_doc_approve ");

	if(m_nDocNo > 0)
	{
		szWhere.AppendFormat(_T(" and hcr_docno= %ld"), m_nDocNo);
	}

	if(!m_szRecordNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(hcr_recordno) like(chr(37)||lower('%s')||chr(37)) "), m_szRecordNo);
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and htr_deptid ='%s' "), m_szDepartmentKey);
	}

	szWhere.AppendFormat(_T(" and hd_object in(1, 3, 8, 13) "));
	if (m_bInpatient && m_bOutpatient)
	{
	}
	else if (m_bOutpatient)
	{
		szWhere.AppendFormat(_T(" and htr_outpatient='Y' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and NVL(htr_outpatient, 'N')='N' "));
	}



	if(m_nOptStatus == 0)
	{
		szWhere.AppendFormat(_T(" and htr_status='T' and htr_docterm='N' "));
		szWhere.AppendFormat(_T(" and trunc(htr_dischargedate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		szWhere.AppendFormat(_T(" and htrf_acceptedfee ='N' "));
		m_wndApprove.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(FALSE);
		m_wndList.SetMenuState(1, FALSE);
		m_wndList.SetMenuState(2, FALSE);

			szSQL.Format(_T(" SELECT distinct hcr_docno    AS docno,") \
_T("   hcr_recordno      AS recordno,") \
_T("   htr_admitdate     AS admitdate ,") \
_T("   htr_dischargedate AS dischargedate,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname AS pname,") \
_T("   date_part('year', hp_birthdate) as yob,") \
_T("   hcr_dischargedept AS deptid, htr_treattime as treattime, htr_idx as refidx ") \
_T(" FROM hms_clinical_record") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno=hcr_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hcr_patientno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_status='T' and htr_docno = hcr_docno) ") \
_T(" WHERE hcr_docno > 0 %s ") \
_T(" ORDER BY hcr_docno"), szWhere);


	}
	if(m_nOptStatus == 1)
	{
		szWhere.AppendFormat(_T(" and htr_status='T' and  htr_docterm='N' and htrf_acceptedfee IN('Y','P') "));
		szWhere.AppendFormat(_T(" and trunc(htr_dischargedate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		m_wndApprove.EnableWindow(TRUE);
		m_wndCancel.EnableWindow(FALSE);
		m_wndList.SetMenuState(1, TRUE);
		m_wndList.SetMenuState(2, FALSE);

			szSQL.Format(_T(" SELECT distinct hcr_docno    AS docno,") \
_T("   hcr_recordno      AS recordno,") \
_T("   htr_admitdate     AS admitdate ,") \
_T("   htr_dischargedate AS dischargedate,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname AS pname,") \
_T("   date_part('year', hp_birthdate) as yob,") \
_T("   hcr_dischargedept AS deptid, htr_treattime as treattime, htr_idx as refidx ") \
_T(" FROM hms_clinical_record") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno=hcr_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hcr_patientno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_status='T' and htr_docno = hcr_docno) ") \
_T(" LEFT JOIN hms_fee_approve ON(hfe_docno = htr_docno and hfe_refidx=htr_idx) ") \
_T(" WHERE hcr_docno > 0 and hfe_docno > 0 %s ") \
_T(" ORDER BY hcr_docno"), szWhere);
//_msg(_T("%s"), szSQL);			

	}

	if(m_nOptStatus == 2)
	{
		szWhere.AppendFormat(_T(" and hda_docno > 0 and hda_isactive='Y' "));
		szWhere.AppendFormat(_T(" and trunc(hda_approveddate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		m_wndApprove.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(TRUE);
		m_wndList.SetMenuState(1, FALSE);
		m_wndList.SetMenuState(2, TRUE);

			szSQL.Format(_T(" SELECT distinct hcr_docno    AS docno,") \
_T("   hcr_recordno      AS recordno,") \
_T("   htr_admitdate     AS admitdate ,") \
_T("   htr_dischargedate AS dischargedate,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname AS pname,") \
_T("   date_part('year', hp_birthdate) as yob,") \
_T("   hcr_dischargedept AS deptid, hda_approveddate as approveddate, hda_approvedby, hda_updateddate, hda_updatedby, hda_treattime as treattime, htr_idx as refidx ") \
_T(" FROM hms_clinical_record") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno=hcr_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hcr_patientno)") \
_T(" LEFT JOIN hms_doc_approve ") \
_T(" ON(hda_docno          = hcr_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_status='T' and htr_docno = hcr_docno and htr_idx = hda_refidx ) ") \
_T(" WHERE hcr_docno > 0 %s ") \
_T(" ORDER BY hcr_docno"), szWhere);



	}

	if(m_nOptStatus == 3)
	{
		szWhere.AppendFormat(_T(" and hda_docno > 0 "));
		szWhere.AppendFormat(_T(" and trunc(hda_updateddate) between to_date('%s','YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		m_wndApprove.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(FALSE);

		m_wndList.SetMenuState(1, FALSE);
		m_wndList.SetMenuState(2, FALSE);
		
			szSQL.Format(_T(" SELECT distinct hcr_docno    AS docno,") \
_T("   hcr_recordno      AS recordno,") \
_T("   htr_admitdate     AS admitdate ,") \
_T("   htr_dischargedate AS dischargedate,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname AS pname,") \
_T("   date_part('year', hp_birthdate) as yob,") \
_T("   hcr_dischargedept AS deptid, hda_approveddate as approveddate, hda_approvedby, hda_updateddate, hda_updatedby, htr_idx as refidx  ") \
_T(" FROM hms_clinical_record") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno=hcr_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hcr_patientno)") \
_T(" LEFT JOIN hms_doc_approve_c ") \
_T(" ON(hda_docno          = hcr_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_status='T' and htr_docno = hcr_docno and htr_idx = hda_refidx  ) ") \
_T(" WHERE hcr_docno > 0 %s ") \
_T(" ORDER BY hcr_docno"), szWhere);



	}

_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);

	//_msg(_T("%s"), szSQL);

	CString tmpStr;
	int nIndex = 1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("recordno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("yob")),
			rs.GetValue(_T("deptid")),
			rs.GetValue(_T("admitdate")),
			rs.GetValue(_T("dischargedate")),
			rs.GetValue(_T("approveddate")),
			rs.GetValue(_T("treattime")),
			rs.GetValue(_T("refidx")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	
	return nCount;
}

void CHMSDocApprove::OnOutpatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
}
void CHMSDocApprove::OnInpatientSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();	
}
void CHMSDocApprove::OnApproveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListApproveItem();
} 
void CHMSDocApprove::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListCancelItem();
} 
int CHMSDocApprove::OnAddHMSDocApprove(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDocApprove::OnEditHMSDocApprove(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDocApprove::OnDeleteHMSDocApprove(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSDocApprove();
 	}
	return 0;
}
int CHMSDocApprove::OnSaveHMSDocApprove(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnHMSDocApproveListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDocApprove::OnCancelHMSDocApprove(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CHMSDocApprove::OnHMSDocApproveListLoadData()
{
	return 0;
}

#include "HMSDocApproveEntryDialog.h"

int CHMSDocApprove::OnListApproveItem()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	long nDocumentNo;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));
	int nRefIdx = str2int(m_wndList.GetItemText(nSel, 10));
	CHMSDocApproveEntryDialog dlg(this);

	if(dlg.DoModal() == IDOK)
	{
		szSQL.Format(_T("HMS_DOC_CLINICAL_APPROVE(%ld, '%s', '%s', '%s', %d) "),
			nDocumentNo, dlg.m_szApproveDate, dlg.m_szNote, pMF->GetCurrentUser(), nRefIdx);
_fmsg(_T("%s"), szSQL);
		int ret = str2int(pMF->ExecDML(szSQL));
		switch(ret)
		{
		case 0:
			ShowMessageBox(_T("Cannot approve document"));
			break;
		case -1:
			ShowMessageBox(_T("Cannot approve document"));
			break;
		case -2:
			ShowMessageBox(_T("Cannot approve document"));
			break;
		case -3:
			ShowMessageBox(_T("Cannot approve document"));
			break;
		case -100:
			ShowMessageBox(_T("Cannot approve document"));
			break;
		}
		if(ret > 0)
		{
			OnListLoadData();
		}
	}
	return 0;
}

int CHMSDocApprove::OnListCancelItem()
{

	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	long nDocumentNo;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));
	int nRefIdx = str2int(m_wndList.GetItemText(nSel, 10));

	CHMSDocApproveEntryDialog dlg(this, false);

	if(dlg.DoModal() == IDOK)
	{
		szSQL.Format(_T("HMS_DOC_CLINICAL_CANCEL(%ld, '%s', '%s', '%s', %d) "),
			nDocumentNo, dlg.m_szApproveDate, dlg.m_szNote, pMF->GetCurrentUser(), nRefIdx);

		int ret = str2int(pMF->ExecDML(szSQL));
		switch(ret)
		{
		case 0:
			ShowMessageBox(_T("Cannot cancel document"));
			break;
		case -1:
			ShowMessageBox(_T("Cannot cancel document"));
			break;
		case -2:
			ShowMessageBox(_T("Cannot cancel document"));
			break;
		case -3:
			ShowMessageBox(_T("Cannot cancel document"));
			break;
		case -100:
			ShowMessageBox(_T("Cannot cancel document"));
			break;
		}
		if(ret > 0)
		{
			OnListLoadData();
		}
	}
	return 0;

	return 0;
}

#include "HMSReportForms/PrintForms.h"
void CHMSDocApprove::OnPrintSummaryMaterialAndDrug()
{
	CPrintForms printer;
	int nTreatTime = 0;
	int nRefIdx =0;
	long nDocumentNo = 0;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;

	nDocumentNo = str2long(m_wndList.GetItemText(nSel, 1));
	nTreatTime = str2int(m_wndList.GetItemText(nSel, 9));
	nRefIdx = str2int(m_wndList.GetItemText(nSel, 10));

	printer.HMS_InwardDrugUsage(nDocumentNo, nTreatTime);
}
void CHMSDocApprove::OnResizeLayout()
{
	AddResize(&m_wndList, 100, 100);
}