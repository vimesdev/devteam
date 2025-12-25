#include "stdafx.h"
#include "TMPatientListEmergencyKTM.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListEmergencyKTM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMPatientListEmergencyKTM *)pWnd)->OnToDateCheckValue();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMPatientListEmergencyKTM*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CTMPatientListEmergencyKTM*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMPatientListEmergencyKTM*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CTMPatientListEmergencyKTM*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMPatientListEmergencyKTM *pVw = (CTMPatientListEmergencyKTM *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMPatientListEmergencyKTM *pVw = (CTMPatientListEmergencyKTM *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CTMPatientListEmergencyKTM*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CTMPatientListEmergencyKTM*)pWnd)->OnListUnCheckAll();
}
CTMPatientListEmergencyKTM::CTMPatientListEmergencyKTM(CWnd *pWnd){

	m_nDlgWidth = 760;
	m_nDlgHeight = 520;
	SetDefaultValues();
}
CTMPatientListEmergencyKTM::~CTMPatientListEmergencyKTM(){
}
void CTMPatientListEmergencyKTM::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 285);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 31, 300, 56);
	m_wndToDate.Create(this,305, 31, 425, 56); 
	m_wndDepartmentList.Create(this,10, 60, 425, 280); 
	m_wndDepartmentList.SetCheckBox(true);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 230, 290, 325, 315);
	m_wndExport.Create(this, _T("&Export"), 330, 290, 425, 315);

}
void CTMPatientListEmergencyKTM::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 315);

}
void CTMPatientListEmergencyKTM::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndDepartmentList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate += _T(" 07:30");
	OnDepartmentLoadData();
	OnListCheckAll();
	UpdateData(false);

}
void CTMPatientListEmergencyKTM::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTMPatientListEmergencyKTM::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMPatientListEmergencyKTM::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMPatientListEmergencyKTM::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTMPatientListEmergencyKTM::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CTMPatientListEmergencyKTM::OnFromDateChange(){
	
} */
/*void CTMPatientListEmergencyKTM::OnFromDateSetfocus(){
	
} */
/*void CTMPatientListEmergencyKTM::OnFromDateKillfocus(){
	
} */
int CTMPatientListEmergencyKTM::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMPatientListEmergencyKTM::OnToDateChange(){
	
} */
/*void CTMPatientListEmergencyKTM::OnToDateSetfocus(){
	
} */
/*void CTMPatientListEmergencyKTM::OnToDateKillfocus(){
	
} */
int CTMPatientListEmergencyKTM::OnToDateCheckValue(){
	return 0;
} 
void CTMPatientListEmergencyKTM::OnDepartmentDblClick(){
	
} 
void CTMPatientListEmergencyKTM::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMPatientListEmergencyKTM::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMPatientListEmergencyKTM::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_id IN ('A2-A', 'A2-B', 'A2-C') order by  sd_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
}
void CTMPatientListEmergencyKTM::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString szSQL, tmpStr, szOldDept, szNewDept;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, * rptGroup = NULL;
	if (!rpt.Init(_T("Reports\\HMS\\DANHSACHBNDIENBIEN_VIENTM.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	int nIdx=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("khoa"), szNewDept);
		if (szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				tmpStr = szNewDept;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}

			szOldDept = szNewDept;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%d"), nIdx++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("soba"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("hovaten"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("namsinh"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("gioitinh"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("ngaykham"), tmpStr);
			rptDetail->SetValue(_T("6"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("diengiai"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			rs.GetValue(_T("chuandoankdt"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			rs.GetValue(_T("chucnangsong"), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
		}
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CTMPatientListEmergencyKTM::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMPatientListEmergencyKTM::OnAddTMPatientListAdmitKTM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMPatientListEmergencyKTM::OnEditTMPatientListAdmitKTM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMPatientListEmergencyKTM::OnDeleteTMPatientListAdmitKTM(){
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
 		OnCancelTMPatientListAdmitKTM();
 	}
	return 0;
}
int CTMPatientListEmergencyKTM::OnSaveTMPatientListAdmitKTM(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnTMPatientListAdmitKTMListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMPatientListEmergencyKTM::OnCancelTMPatientListAdmitKTM(){
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
int CTMPatientListEmergencyKTM::OnTMPatientListAdmitKTMListLoadData(){
	return 0;
}
CString CTMPatientListEmergencyKTM::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szDepts, szTemp;

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), szTemp);

		}
	}

	szSQL.Format(_T(" SELECT ") \
		_T("   htr_deptid khoa,") \
		_T("   htr_recordno soba,") \
		_T("   hd_docno hoso,") \
		_T("   get_patientname(hd_docno) hovaten,") \
		_T("   EXTRACT(YEAR FROM hp_birthdate) namsinh,") \
		_T("   hms_getsex(hp_sex) gioitinh,") \
		_T("   trunc_date(hsie_date) ngaykham,") \
		_T("   htr_maindisease chuandoankdt,") \
		_T("   hsie_desc diengiai,") \
		_T("   TRIM('Nh\x1ECBp Tim: ' || hsie_pulse || ', Nhi\x1EC7t \x110\x1ED9: ' || round(hsie_temperature, 1) ") \
		_T(" || ', Huy\x1EBFt \xC1p: ' || hsie_bloodpressure || '/' || hsie_bloodpressurex || ', Nh\x1ECBp Th\x1EDF: ' || hsie_breathinterval ") \
		_T(" ||', \x43\xE2n N\x1EB7ng: ' || hsie_weight || ', \x43hi\x1EC1u \x43\x61o: ' || hsie_height) chucnangsong") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON (hp_patientno = htr_patientno)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (htr_docno  = hd_docno)") \
		_T(" LEFT JOIN hms_siexam") \
		_T(" ON (hsie_docno = hd_docno AND hsie_deptid = htr_deptid)") \
		_T(" WHERE 1        =1") \
		_T(" AND htr_deptid IN(%s)") \
		_T(" AND htr_status NOT IN ('A', 'T')") \
		_T(" AND htr_emergency = 'Y'") \
		_T(" AND hsie_date BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24-MI-SS')") \
		_T(" ORDER BY khoa, soba, ngaykham"), szDepts, m_szFromDate, m_szToDate);
	return szSQL;
}
int CTMPatientListEmergencyKTM::OnListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, TRUE);
	}
	return 0;
}

int CTMPatientListEmergencyKTM::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, FALSE);
	}
	return 0;
}