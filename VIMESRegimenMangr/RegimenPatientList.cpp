#include "RegimenPatientList.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CRegimenPatientList *)pWnd)->OnNameCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRegimenPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRegimenPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRegimenPatientList *)pWnd)->OnToDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CRegimenPatientList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CRegimenPatientList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CRegimenPatientList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CRegimenPatientList*)pWnd)->OnListDeleteItem();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CRegimenPatientList *pVw = (CRegimenPatientList *)pWnd;
	pVw->OnSearchSelect();
} 
static int _OnAddRegimenPatientListFnc(CWnd *pWnd){
	 return ((CRegimenPatientList*)pWnd)->OnAddRegimenPatientList();
} 
static int _OnEditRegimenPatientListFnc(CWnd *pWnd){
	 return ((CRegimenPatientList*)pWnd)->OnEditRegimenPatientList();
} 
static int _OnDeleteRegimenPatientListFnc(CWnd *pWnd){
	 return ((CRegimenPatientList*)pWnd)->OnDeleteRegimenPatientList();
} 
static int _OnSaveRegimenPatientListFnc(CWnd *pWnd){
	 return ((CRegimenPatientList*)pWnd)->OnSaveRegimenPatientList();
} 
static int _OnCancelRegimenPatientListFnc(CWnd *pWnd){
	 return ((CRegimenPatientList*)pWnd)->OnCancelRegimenPatientList();
} 
CRegimenPatientList::CRegimenPatientList(CWnd *pParent):
	CGuiDialog(pParent){


	m_nDlgWidth = 1019;
	m_nDlgHeight = 673;
	SetDefaultValues();
}
CRegimenPatientList::~CRegimenPatientList(){
}
void CRegimenPatientList::OnCreateComponents(){
	m_wndClassInforGroupBox.Create(this, _T("Information"), 5, 5, 800, 60);
	m_wndNameLabel.Create(this, _T("Name"), 450, 30, 560, 55);
	m_wndName.Create(this,565, 30, 705, 55); 	
	m_wndList.Create(this,5, 65, 795, 575); 
	m_wndSearch.Create(this, _T("&Search"), 710, 30, 790, 55);
}
void CRegimenPatientList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER|CFMT_FIXSIZE, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(3, _T("YOB"), CFMT_TEXT|CFMT_CENTER|CFMT_FIXSIZE, 50);
	m_wndList.InsertColumn(4, _T("Sex"), CFMT_TEXT|CFMT_CENTER, 40);	
	m_wndList.InsertColumn(5, _T("Admit Date"), CFMT_DATETIME|CFMT_CENTER, 120);
	m_wndList.InsertColumn(6, _T("Discharge Date"), CFMT_DATETIME|CFMT_CENTER, 120);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT, 0);	
	m_wndList.InsertColumn(8, _T("Doctor"), CFMT_TEXT, 60);	
	m_wndList.InsertColumn(9, _T("Rel Phone"), CFMT_TEXT, 90);	
	m_wndList.InsertColumn(10, _T("Diagnostic"), CFMT_TEXT, 200);	
	m_wndList.InsertColumn(11, _T("Suggestion"), CFMT_TEXT, 90);
}
void CRegimenPatientList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
	m_wndList.AddEvent(1, _T("Export"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);

	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddRegimenPatientListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditRegimenPatientListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteRegimenPatientListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveRegimenPatientListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelRegimenPatientListFnc, 0, 'T', VK_CONTROL);*/

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	
	OnListLoadData();
	SetMode(VM_EDIT);

}
void CRegimenPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CRegimenPatientList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CRegimenPatientList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("ec_name"), m_szName);
	rs.GetValue(_T("ec_start_time"), m_szFromDate);
	rs.GetValue(_T("ec_end_time"), m_szToDate);

}
void CRegimenPatientList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_edu_classTbl.SetValue(_T("ec_createdby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_createddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_updatedby"), pMF->GetCurrentUser());
	m_edu_classTbl.SetValue(_T("ec_updateddate"), pMF->GetSysDateTime());
	m_edu_classTbl.SetValue(_T("ec_name"), m_szName);
	m_edu_classTbl.SetValue(_T("ec_start_time"), m_szFromDate);
	m_edu_classTbl.SetValue(_T("ec_end_time"), m_szToDate);
}
void CRegimenPatientList::SetDefaultValues(){

	m_szName.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CRegimenPatientList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 4, -1);
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
/*void CRegimenPatientList::OnNameChange(){
	
} */
/*void CRegimenPatientList::OnNameSetfocus(){
	
} */
/*void CRegimenPatientList::OnNameKillfocus(){
	
} */
int CRegimenPatientList::OnNameCheckValue(){
	OnListLoadData();
	return 0;
} 
/*void CRegimenPatientList::OnFromDateChange(){
	
} */
/*void CRegimenPatientList::OnFromDateSetfocus(){
	
} */
/*void CRegimenPatientList::OnFromDateKillfocus(){
	
} */
int CRegimenPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CRegimenPatientList::OnToDateChange(){
	
} */
/*void CRegimenPatientList::OnToDateSetfocus(){
	
} */
/*void CRegimenPatientList::OnToDateKillfocus(){
	
} */
int CRegimenPatientList::OnToDateCheckValue(){
	return 0;
} 
void CRegimenPatientList::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();

	long nID = ToLong(m_wndList.GetItemText(nSel, 0));

	pMF->m_wndRegimen.m_nID = nID;
	pMF->m_wndRegimen.GetDataToScreen();
	pMF->m_wndRegimenTab.SetActiveTab(1);
} 
void CRegimenPatientList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CRegimenPatientList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szItemData, tmpStr;
	CExcel xls;

	//szSQL = GetQueryString();
	BeginWaitCursor();
	
	

	int nRow = 5, nCol = 0;
	int nSheet = 0;
	int nLimitSheet = 40000;

	xls.CreateSheet(nSheet);
	xls.SetWorksheet(nSheet);	
	//nSheet++;

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 16);
	xls.SetColumnWidth(5, 18);
	
	xls.SetCellText(1, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT|FMT_CENTER, TRUE);		
	xls.SetCellText(1, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT|FMT_CENTER, TRUE);

	tmpStr.Format(_T("Mã phác đồ: %ld"), m_nID);
	xls.SetCellText(nCol+1, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("Tên phác đồ: %s"), m_szTen);
	xls.SetCellText(nCol+1, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 10);
	
	xls.SetCellText(nCol+1, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+2, nRow, _T("Số HS"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+3, nRow, _T("Họ và tên"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+4, nRow, _T("Tuổi"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+5, nRow, _T("Giới tính"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+6, nRow, _T("Ngày vào"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+7, nRow, _T("Ngày ra"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+8, nRow, _T("Bác sĩ"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+9, nRow, _T("Số ĐT"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+10, nRow, _T("Chẩn đoán"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol+11, nRow, _T("Hướng ĐT"), FMT_TEXT | FMT_CENTER, true, 10);

	nRow ++;
	long nIndex = 1;
	long double nTotal = 0.0;
	for(int i = 0; i < m_wndList.GetItemCount(); i++)
	{		
		for(int c = 0; c < m_wndList.GetColumnCount(); c++)
		{			
			szItemData = m_wndList.GetItemText( i, c);
            xls.SetCellText(c, nRow, szItemData, FMT_TEXT);
		}

		nRow++;
		nIndex++;

		rs.MoveNext();
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\Danhsachsudungphacdo.xls"));

	 return 0;
} 
long CRegimenPatientList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, tmpAge;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	UpdateData(true);

	if(!m_szName.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(trim(ten_phacdo)) like (lower('%s%s%s'))"),_T("%"), m_szName, _T("%"));
	}

	//szSQL.Format(_T("SELECT * FROM hms_phacdo LEFT JOIN hms_phacdo_apply ON(hms_phacdo_id=phacdo_id) WHERE docno > 0 AND hms_phacdo_id = %ld %s "), m_nID, szWhere);

	szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
	_T("   hd_docno          AS docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                       AS pname,") \
	_T("   extract(YEAR FROM hp_birthdate)       AS age,") \
	_T("	hms_getage(hd_admitdate, hp_birthdate) AS page, ") \
	_T("   get_selection_desc('sys_sex', hp_sex) AS sex,") \
	_T("   hms_getobjectname(hd_object)          AS object,") \
	_T(" 	case when length(hp_dtladdr) >0 then trim(hp_dtladdr||'-'||hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)))  ") \
	_T(" 	else hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) end as address,") \
	_T("   CASE") \
	_T("     WHEN hd_disrate > 0") \
	_T("     THEN TO_CHAR(hd_disrate,'999')") \
	_T("     ELSE ''") \
	_T("   END                                                  AS disrate,") \
	_T("   (htr_admitdate)                                 AS admitdate,") \
	_T("   (htr_dischargedate)                             AS dischargedate,") \
	_T("   htr_idx                                              AS idx,") \
	_T("   htr_status                                           AS status,") \
	_T("   coalesce(htr_recordno, hcr_recordno) AS indept_admitnumber,") \
	_T("   hcr_recordno as admitnumber,") \
	_T("   htr_emergency                                        AS emergency,") \
	_T("   hms_getActiveBed(htr_docno, htr_deptid)              AS bedName,") \
	_T("   get_selection_desc('hms_suggestion', htr_suggestion) AS suggestion,") \
	_T("   htr_doctor                                           AS doctor, ") \
	_T("   hd_telephone phone, hd_contacttel contact_tel,htr_maindisease as diagnostic,hfe_deposit_amount as deposit, ") \
	_T("   htr_deptid, htr_ctdeptid, substr(hd_cardno,1,15) as cardno ") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record") \
	_T(" ON(hcr_docno=hd_docno)") \
	_T(" LEFT JOIN hms_treatment_record") \
	_T(" ON(htr_docno         =hd_docno)") \
	_T(" LEFT JOIN hms_phacdo_apply ON(docno=htr_docno) ") \
	_T(" WHERE htr_docno > 0 ") \
	_T(" AND hms_phacdo_id = %ld ") \
	_T(" %s ") \
	_T(" ORDER BY admitdate,") \
	_T("   pname,") \
	_T("   htr_idx"), m_nID, szWhere);

	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			tmpAge, 
			rs.GetValue(_T("sex")),			
			rs.GetValue(_T("admitdate")), 
			rs.GetValue(_T("dischargedate")),
			rs.GetValue(_T("status")), 			
			rs.GetValue(_T("doctor")),			
			rs.GetValue(_T("contact_tel")),
			rs.GetValue(_T("diagnostic")),			
			rs.GetValue(_T("suggestion")),
			NULL);
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
}
void CRegimenPatientList::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	OnListLoadData();
} 
int CRegimenPatientList::OnAddRegimenPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRegimenPatientList::OnEditRegimenPatientList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRegimenPatientList::OnDeleteRegimenPatientList(){
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
 		OnCancelRegimenPatientList();
 	}
	return 0;
}
int CRegimenPatientList::OnSaveRegimenPatientList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_edu_classTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_edu_classTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnRegimenPatientListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRegimenPatientList::OnCancelRegimenPatientList(){
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
int CRegimenPatientList::OnRegimenPatientListListLoadData(){
	return 0;
}
