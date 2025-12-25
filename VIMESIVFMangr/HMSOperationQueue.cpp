#include "HMSOperationQueue.h"
#include "HMSOperationOrderFromDept.h"
#include "MainFrm.h"
static void _OnAdmissionSelectFnc(CWnd *pWnd){
	  ((CHMSOperationQueue*)pWnd)->OnAdmissionSelect();
}
static void _OnTransferSelectFnc(CWnd *pWnd){
	  ((CHMSOperationQueue*)pWnd)->OnTransferSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationQueue *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationQueue *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationQueue *)pWnd)->OnRecordNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationQueue *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationQueue *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefrehSelectFnc(CWnd *pWnd){
	CHMSOperationQueue *pVw = (CHMSOperationQueue *)pWnd;
	pVw->OnRefrehSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationQueue*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSOperationQueue*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationQueue*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationQueue*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSOperationQueue* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationQueue *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSOperationQueue *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddHMSOperationQueueFnc(CWnd *pWnd){
	 return ((CHMSOperationQueue*)pWnd)->OnAddHMSOperationQueue();
} 
static int _OnEditHMSOperationQueueFnc(CWnd *pWnd){
	 return ((CHMSOperationQueue*)pWnd)->OnEditHMSOperationQueue();
} 
static int _OnDeleteHMSOperationQueueFnc(CWnd *pWnd){
	 return ((CHMSOperationQueue*)pWnd)->OnDeleteHMSOperationQueue();
} 
static int _OnSaveHMSOperationQueueFnc(CWnd *pWnd){
	 return ((CHMSOperationQueue*)pWnd)->OnSaveHMSOperationQueue();
} 
static int _OnCancelHMSOperationQueueFnc(CWnd *pWnd){
	 return ((CHMSOperationQueue*)pWnd)->OnCancelHMSOperationQueue();
} 
CHMSOperationQueue::CHMSOperationQueue(){

	m_nDlgWidth = 975;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSOperationQueue::~CHMSOperationQueue(){
}
void CHMSOperationQueue::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 135, 90);
	m_wndSearchInformation.Create(this, _T("Search Information"), 140, 5, 965, 90);
	m_wndPatientListGroupBox.Create(this, _T("Patients List"), 5, 95, 965, 590);
	m_wndAdmission.Create(this, _T("Waiting"), 10, 30, 130, 55);
	m_wndTransfer.Create(this, _T("Performed"), 10, 60, 130, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 145, 30, 245, 55);
	m_wndToDateLabel.Create(this, _T("To Date"), 375, 30, 475, 55);
	m_wndFromDate.Create(this,250, 30, 370, 55); 
	m_wndToDate.Create(this,480, 30, 600, 55); 
	m_wndRecordNotLabel.Create(this, _T("Record No"), 145, 60, 245, 85);
	m_wndRecordNo.Create(this,250, 60, 370, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 375, 60, 475, 85);
	m_wndDocumentNo.Create(this,480, 60, 600, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 605, 60, 705, 85);
	m_wndPatientName.Create(this,710, 60, 865, 85); 
	m_wndRefreh.Create(this, _T("@"), 870, 60, 895, 85);
	m_wndPatientList.Create(this,10, 120, 960, 585); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 605, 30, 705, 55);
	m_wndDepartment.Create(this,710, 30, 865, 55); 

}
void CHMSOperationQueue::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(3, _T("Age"), CFMT_TEXT|CFMT_CENTER, 40);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndPatientList.InsertColumn(5, _T("Object"), CFMT_TEXT, 120);	
	m_wndPatientList.InsertColumn(6, _T("Send Date"), CFMT_DATE|CFMT_CENTER, 90);
	m_wndPatientList.InsertColumn(7, _T("Performed"), CFMT_DATE|CFMT_CENTER, 90);	
	m_wndPatientList.InsertColumn(8, _T("Desc"), CFMT_TEXT, 260);
	m_wndPatientList.InsertColumn(9, _T("IDX"), CFMT_TEXT, 0);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CHMSOperationQueue::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdmission.SetEvent(WE_CLICK, _OnAdmissionSelectFnc);
	m_wndTransfer.SetEvent(WE_CLICK, _OnTransferSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefreh.SetEvent(WE_CLICK, _OnRefrehSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationQueueFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationQueueFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationQueueFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationQueueFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationQueueFnc, 0, 'T', VK_CONTROL);
	SetDefaultValues();
	m_szFromDate = pMF->GetSysDate() + _T("00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");
	SetMode(VM_EDIT);
	OnPatientListLoadData();
}
void CHMSOperationQueue::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAdmission.GetDlgCtrlID(), m_nStatus);	
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_nRecordNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
}
void CHMSOperationQueue::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationQueue::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationQueue::SetDefaultValues(){

	m_nStatus = 0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nRecordNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
	m_szDepartmentKey.Empty();
}
int CHMSOperationQueue::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
		m_wndRefreh.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSOperationQueue::OnAdmissionSelect(){
	m_nStatus = 1;
	OnPatientListLoadData();
}
void CHMSOperationQueue::OnTransferSelect(){
	m_nStatus = 1;
	OnPatientListLoadData();
}
/*void CHMSOperationQueue::OnFromDateChange(){
	
} */
/*void CHMSOperationQueue::OnFromDateSetfocus(){
	
} */
/*void CHMSOperationQueue::OnFromDateKillfocus(){
	
} */
int CHMSOperationQueue::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSOperationQueue::OnToDateChange(){
	
} */
/*void CHMSOperationQueue::OnToDateSetfocus(){
	
} */
/*void CHMSOperationQueue::OnToDateKillfocus(){
	
} */
int CHMSOperationQueue::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSOperationQueue::OnRecordNoChange(){
	
} */
/*void CHMSOperationQueue::OnRecordNoSetfocus(){
	
} */
/*void CHMSOperationQueue::OnRecordNoKillfocus(){
	
} */
int CHMSOperationQueue::OnRecordNoCheckValue(){
	return 0;
} 
/*void CHMSOperationQueue::OnDocumentNoChange(){
	
} */
/*void CHMSOperationQueue::OnDocumentNoSetfocus(){
	
} */
/*void CHMSOperationQueue::OnDocumentNoKillfocus(){
	
} */
int CHMSOperationQueue::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSOperationQueue::OnPatientNameChange(){
	
} */
/*void CHMSOperationQueue::OnPatientNameSetfocus(){
	
} */
/*void CHMSOperationQueue::OnPatientNameKillfocus(){
	
} */
int CHMSOperationQueue::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSOperationQueue::OnRefrehSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPatientListLoadData();
} 
void CHMSOperationQueue::OnPatientListDblClick(){
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0)
	{
		ShowMessageBox(_T("You must select an item"), MB_OK);
		return;
	}
	m_nDocumentNo = ToLong(m_wndPatientList.GetItemText(nSel, 1));
	m_nOrderID = ToLong(m_wndPatientList.GetItemText(nSel, 9));

	((CHMSOperationOrderFromDept*)m_wndOrder)->m_nDocumentNo = m_nDocumentNo;
	((CHMSOperationOrderFromDept*)m_wndOrder)->m_nOrderID = m_nOrderID;
	((CHMSOperationOrderFromDept*)m_wndOrder)->GetDataToScreen();
	((CGuiTabCtrl*)GetParent())->SetCurSel(1);
} 
void CHMSOperationQueue::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationQueue::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationQueue::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szSheetNo;
	UpdateData(true);
	
	if(!m_szPatientName.IsEmpty()){
		m_nDocumentNo = 0;
	}


	//Trang thai dang doi
	if(m_nStatus == 0){
		szWhere.AppendFormat(_T("AND trunc_date(ho_orderdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND ho_status IN('O','S')"), m_szFromDate, m_szToDate);

	}
	//Trang thai da thuc hien
	else if(m_nStatus == 1){
		szWhere.AppendFormat(_T(" AND trunc_date(ho_performdate) between to_date('%s', 'yyyy/mm/dd hh24:mi:ss') and to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND ho_status='T' "), m_szFromDate, m_szToDate);
	}
	
	if(!m_szDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND ho_deptid ='%s' "), m_szDepartmentKey);
	}

	if(m_nDocumentNo > 0){
		szWhere.Format(_T(" AND ho_docno=%ld"), m_nDocumentNo);
		m_szPatientName.Empty();
	}
	

	szSQL.Format(_T(" SELECT DISTINCT hp_patientno as patientno,	") \
					_T(" 	hd_docno as docno,") \
					_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T(" 	(SELECT distinct ss_desc FROM sys_sel WHERE ss_id='hrm_sex' AND ss_code=hp_sex AND ROWNUM = 1) as sex,") \
					_T("	(SELECT distinct ho_desc FROM hms_object WHERE ho_id=hd_object AND ROWNUM = 1) as object,") \
					_T("	trunc_date(ho_orderdate) as orderdate, ") \
					_T("	trunc_date(ho_performdate) as performdate, ") \
					_T("	(SELECT distinct hfl_name FROM hms_fee_list WHERE hfl_feeid=ho_itemid AND ROWNUM = 1) as operationname,") \
					_T("	ho_status as status, ") \
					_T("	ho_idx as OperationID, ") \
					_T("	htr_emergency as emergency ") \
					_T(" FROM hms_patient ") \
					_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
					_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno) ") \
					_T(" LEFT JOIN hms_operation ON(ho_docno=htr_docno) ") \
					_T(" WHERE ho_pdeptid='%s'   %s ") \
					_T(" ORDER BY orderdate,pname "), pMF->m_szDept, szWhere);
	_fmsg(_T("%s"), szSQL);
	m_wndPatientList.BeginLoad(); 
	int nCount = 0, nItem=1;
	CString szEmergency, tmpStr;
	CString szDischargeDate;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

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

		tmpStr.Format(_T("%d"), nItem++);
		rs.GetValue(_T("dischargedate"), szDischargeDate);
		if(m_nStatus == 1)
			szDischargeDate.Empty();

		m_wndPatientList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")),			
			CDate::Convert(rs.GetValue(_T("orderdate")), yyyymmdd, ddmmyyyy),
			CDate::Convert(szDischargeDate, yyyymmdd, ddmmyyyy),			
			rs.GetValue(_T("Operationname")),
			rs.GetValue(_T("OperationID")),
			NULL);

		rs.GetValue(_T("emergency"), szEmergency);
		if(szEmergency == _T("Y")){
			m_wndPatientList.SetItemBkColor(m_wndPatientList.GetItemCount()-1, RGB(128, 0, 0), FALSE);
			m_wndPatientList.SetItemTextColor(m_wndPatientList.GetItemCount()-1, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	
	m_wndPatientList.EndLoad(); 
	UpdateData(false);
	return nCount;
}
void CHMSOperationQueue::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationQueue::OnDepartmentSelendok(){
	 
}
/*void CHMSOperationQueue::OnDepartmentSetfocus(){
	
}*/
/*void CHMSOperationQueue::OnDepartmentKillfocus(){
	
}*/
long CHMSOperationQueue::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey) ;
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id, sd_name FROM sys_dept WHERE sd_type ='DT' %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSOperationQueue::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSOperationQueue::OnAddHMSOperationQueue(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationQueue::OnEditHMSOperationQueue(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationQueue::OnDeleteHMSOperationQueue(){
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
 		OnCancelHMSOperationQueue();
 	}
	return 0;
}
int CHMSOperationQueue::OnSaveHMSOperationQueue(){
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
 		//OnHMSOperationQueueListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationQueue::OnCancelHMSOperationQueue(){
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
int CHMSOperationQueue::OnHMSOperationQueueListLoadData(){
	return 0;
}
