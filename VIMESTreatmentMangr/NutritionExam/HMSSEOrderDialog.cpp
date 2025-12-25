#include "HMSSEOrderDialog.h"
#include "../MainFrm.h"
#include "HMSSEOrderReplyDialog.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderDialog *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSEOrderDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSEOrderDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSEOrderDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSEOrderDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSEOrderDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSSEOrderDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDeptAddNew();
}*/
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderDialog *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CHMSSEOrderDialog *pVw = (CHMSSEOrderDialog *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnExamSelectFnc(CWnd *pWnd){
	CHMSSEOrderDialog *pVw = (CHMSSEOrderDialog *)pWnd;
	pVw->OnExamSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSSEOrderDialog *pVw = (CHMSSEOrderDialog *)pWnd;
	pVw->OnConfirmSelect();
} 
static int _OnAddHMSSEOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderDialog*)pWnd)->OnAddHMSSEOrderDialog();
} 
static int _OnEditHMSSEOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderDialog*)pWnd)->OnEditHMSSEOrderDialog();
} 
static int _OnDeleteHMSSEOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderDialog*)pWnd)->OnDeleteHMSSEOrderDialog();
} 
static int _OnSaveHMSSEOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderDialog*)pWnd)->OnSaveHMSSEOrderDialog();
} 
static int _OnCancelHMSSEOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderDialog*)pWnd)->OnCancelHMSSEOrderDialog();
} 
CHMSSEOrderDialog::CHMSSEOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nOrderID = 0;
}
CHMSSEOrderDialog::~CHMSSEOrderDialog(){
}
void CHMSSEOrderDialog::OnCreateComponents(){
	m_wndSpecialExamList.Create(this, _T("Special Exam List"), 5, 5, 1020, 395);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndList.Create(this,10, 60, 1015, 390); 
	m_wndDeptLabel.Create(this, _T("Dept"), 350, 30, 430, 55);
	m_wndDept.Create(this,435, 30, 555, 55); 
	m_wndDocNoLabel.Create(this, _T("DocNo"), 560, 30, 640, 55);
	m_wndDocNo.Create(this,645, 30, 725, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 730, 30, 810, 55);
	m_wndName.Create(this,815, 30, 930, 55); 
	m_wndFind.Create(this, _T("Find"), 935, 30, 1015, 55);
	m_wndExam.Create(this, _T("&Exam"), 845, 400, 930, 425);
	m_wndConfirm.Create(this, _T("&Confirm"), 935, 400, 1020, 425);

}
void CHMSSEOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(2, _T("Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(3, _T("DocNo"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(4, _T("Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Dept"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("CreatedBy"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(7, _T("Specialist"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(8, _T("Status"), CFMT_TEXT, 80);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndDept.InsertColumn(1, _T("Alias"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(2, _T("Name"), CFMT_TEXT, 150);

}
void CHMSSEOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndExam.SetEvent(WE_CLICK, _OnExamSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	//EnableControls();
	//EnableButtons(FALSE, -1);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

}
void CHMSSEOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSSEOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("DocNo")] =  m_nDocNo;
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("DocNo")].GetValue(m_nDocNo);
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CHMSSEOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSEOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSEOrderDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nDocNo=0;
	m_szName.Empty();

}
int CHMSSEOrderDialog::SetMode(int nMode){
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
/*void CHMSSEOrderDialog::OnFromDateChange(){
	
} */
/*void CHMSSEOrderDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSSEOrderDialog::OnFromDateKillfocus(){
	
} */
int CHMSSEOrderDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSSEOrderDialog::OnToDateChange(){
	
} */
/*void CHMSSEOrderDialog::OnToDateSetfocus(){
	
} */
/*void CHMSSEOrderDialog::OnToDateKillfocus(){
	
} */
int CHMSSEOrderDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSSEOrderDialog::OnListDblClick(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiComboBox * pDept = &pMF->m_wndTreatmentQueue.m_wndDepartment;
	if (!pDept->IsWindowEnabled())
	{
		return;
	}
	int nSel = m_wndList.GetCurSel();
	CHMSTreatmentQueue* pQueue = &pMF->m_wndTreatmentQueue;
	pQueue->m_wndDocumentNo.SetWindowText(m_wndList.GetItemText(nSel, 3));
	pDept->SetCurrent(0, m_wndList.GetItemText(nSel, 5));
	if (pQueue->OnPatientListLoadData() > 0)
	{
		CGuiDialog::OnCancel();
	}

} 
void CHMSSEOrderDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nOrderID = str2long(m_wndList.GetItemText(nNewItem, 0));
} 
int CHMSSEOrderDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSEOrderDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szWhere.Format(
		_T(" and trunc(hso_createddate) between to_date('%s', 'yyyy/mm/dd') and to_date('%s', 'yyyy/mm/dd')")
		, m_szFromDate, m_szToDate);
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hso_deptid = '%s'"), m_szDeptKey);
	}
	if (m_nDocNo > 0)
	{
		szWhere.AppendFormat(_T(" and hso_docno = %ld"), m_nDocNo);
	}
	if (!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and instr(lower(get_patientname(hso_docno)), lower('%s')) > 0"), m_szName);
	}
	szSQL.Format(
		_T(" SELECT hso_orderid AS id,") \
		_T("        hso_createddate AS createddate,") \
		_T("        hso_docno AS docno,") \
		_T("        Get_patientname (hso_docno) AS name,") \
		_T("        hso_deptid AS dept,") \
		_T("        hso_createdby AS createdby,") \
		_T("        hso_specialist AS specialist,") \
		_T("        hso_status AS status") \
		_T("   FROM hms_se_order")
		_T(" WHERE 1=1 %s"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			int2str(nIdx++), 
			rs.GetValue(_T("createddate")), 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Dept")), 
			rs.GetValue(_T("CreatedBy")), 
			rs.GetValue(_T("Specialist")), 
			rs.GetValue(_T("Status")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSSEOrderDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSEOrderDialog::OnDeptSelendok(){
	 
}
/*void CHMSSEOrderDialog::OnDeptSetfocus(){
	
}*/
/*void CHMSSEOrderDialog::OnDeptKillfocus(){
	
}*/
long CHMSSEOrderDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter = _T(" and sd_type = 'DT'");
	return pMF->LoadDepartment(&m_wndDept, m_szDeptKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSEOrderDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSEOrderDialog::OnDocNoChange(){
	
} */
/*void CHMSSEOrderDialog::OnDocNoSetfocus(){
	
} */
/*void CHMSSEOrderDialog::OnDocNoKillfocus(){
	
} */
int CHMSSEOrderDialog::OnDocNoCheckValue(){
	return 0;
} 
/*void CHMSSEOrderDialog::OnNameChange(){
	
} */
/*void CHMSSEOrderDialog::OnNameSetfocus(){
	
} */
/*void CHMSSEOrderDialog::OnNameKillfocus(){
	
} */
int CHMSSEOrderDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSSEOrderDialog::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CHMSSEOrderDialog::OnExamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSSEOrderReplyDialog dlg(this);
	if (m_wndList.GetCurSel() >= 0)
	{
		dlg.m_nOrderID = m_nOrderID;
	}
	dlg.DoModal();
} 
void CHMSSEOrderDialog::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nRet;
	szSQL.Format(_T("hms_se_order_confirm('%s', %ld)")
		, pMF->GetCurrentUser(), m_nOrderID);
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnListLoadData();
	}
} 
int CHMSSEOrderDialog::OnAddHMSSEOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSEOrderDialog::OnEditHMSSEOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSEOrderDialog::OnDeleteHMSSEOrderDialog(){
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
 		OnCancelHMSSEOrderDialog();
 	}
	return 0;
}
int CHMSSEOrderDialog::OnSaveHMSSEOrderDialog(){
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
 		//OnHMSSEOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSEOrderDialog::OnCancelHMSSEOrderDialog(){
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
int CHMSSEOrderDialog::OnHMSSEOrderDialogListLoadData(){
	return 0;
}
