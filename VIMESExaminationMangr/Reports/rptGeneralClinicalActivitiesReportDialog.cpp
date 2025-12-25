#include "rptGeneralClinicalActivitiesReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptGeneralClinicalActivitiesReportDialog *pVw = (CrptGeneralClinicalActivitiesReportDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptGeneralClinicalActivitiesReportDialog *pVw = (CrptGeneralClinicalActivitiesReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnAddrptGeneralClinicalActivitiesReportDialog();
} 
static int _OnEditrptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnEditrptGeneralClinicalActivitiesReportDialog();
} 
static int _OnDeleterptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnDeleterptGeneralClinicalActivitiesReportDialog();
} 
static int _OnSaverptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnSaverptGeneralClinicalActivitiesReportDialog();
} 
static int _OnCancelrptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnCancelrptGeneralClinicalActivitiesReportDialog();
} 
CrptGeneralClinicalActivitiesReportDialog::CrptGeneralClinicalActivitiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CrptGeneralClinicalActivitiesReportDialog::~CrptGeneralClinicalActivitiesReportDialog(){
	if (!m_rs->IsEOF()) delete m_rs;
}
void CrptGeneralClinicalActivitiesReportDialog::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndPreview.Create(this, _T("&Preview"), 196, 65, 271, 90);
	m_wndExport.Create(this, _T("&Export"), 275, 65, 350, 90);

}
void CrptGeneralClinicalActivitiesReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_rs = new CRecord(&pMF->m_db);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

}
void CrptGeneralClinicalActivitiesReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	SetMode(VM_EDIT);
}
void CrptGeneralClinicalActivitiesReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptGeneralClinicalActivitiesReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptGeneralClinicalActivitiesReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptGeneralClinicalActivitiesReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptGeneralClinicalActivitiesReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CrptGeneralClinicalActivitiesReportDialog::OnFromDateChange(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnFromDateKillfocus(){
	
} */
int CrptGeneralClinicalActivitiesReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptGeneralClinicalActivitiesReportDialog::OnToDateChange(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnToDateKillfocus(){
	
} */
int CrptGeneralClinicalActivitiesReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptGeneralClinicalActivitiesReportDialog::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
		CReport rpt;
	if(!rpt.Init(_T("Reports/Hoatdongkhambenh.rpt")) )
		return;
	UpdateData(true);
	szSQL.Format(_T(" SELECT 	'luotkham' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl1") \
				_T(" union all") \
				_T(" SELECT 	'khamsuckhoe' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_fee_list ON(hfl_feeid=he_examtype)") \
				_T(" 	WHERE 	he_status in('P','T')") \
				_T(" 		and hfl_subitem='1'") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 	'capcuu' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" 		and he_emergency='Y'") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 	'capdonthuoc' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	hpo_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(hpo_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hpo_status in('I','A') or hpo_payment='P')") \
				_T(" 		and hpo_type='P'") \
				_T(" 		and hpo_depttype='E'") \
				_T(" ) as tbl4") \
				_T(" union all") \
				_T(" SELECT 	'cochidinhcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	pcmso_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E' ") \
				_T(" 		") \
				_T(" ) as tbl5") \
				_T(" union all") \
				_T(" SELECT 	'chilamcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T("    LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E' and hpo_orderid is null ") \
				_T(" 		") \
				_T(" ) as tbl5_1") \
				_T(" union all") \
				_T(" SELECT 	'cotieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	ho_idx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' ") \
				_T(" ) as tbl6") \
				_T(" union all") \
				_T(" SELECT 	'chilamtieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct	hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T("    LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' and hpo_orderid is null ") \
				_T(" ) as tbl6_1") \
				_T(" union all") \
				_T(" SELECT 	'nhapvien' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl7") \
				_T(" union all") \
				_T(" SELECT 	'tuyenduoichuyenden' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and length(hd_transplaceid) > 0") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" ) as tbl8") \
				_T(" union all") \
				_T(" SELECT 	'chuyentuyentren' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status ='T'") \
				_T(" 		and hd_suggestion ='T'") \
				_T(" 		and length(hd_tohosid) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl9") \
				_T(" union all") \
				_T(" SELECT 	'nhapvienpleiku' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" 		and hp_distid= 60301") \
				_T(" ) as tbl10") \
				_T(" union all") \
				_T(" SELECT 	'tinhtrangvaovien_'||hp_status as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hp_status, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" 		and length(hp_status) > 0") \
				_T(" ) as tbl11") \
				_T(" group by hp_status") , 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate);
	
	rs.ExecSQL(szSQL);

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	CRecord rs1(&pMF->m_db);
	szSQL.Format(_T(" select sc_name as hospitalname,sc_pname as healthname from sys_company"));
	rs1.ExecSQL(szSQL);
	rs1.GetValue(_T("healthname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	rs1.GetValue(_T("hospitalname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	int nTotal[10];
	for (int i = 0; i < 10; i++)
		nTotal[i] = 0;
	int nIndex = 1;
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("typeid"), tmpStr);
		if(tmpStr.Find(_T("_")) != -1){
			tmpStr = pMF->GetSelectionString(_T("hms_patient_state"), tmpStr.Right(1));
		}
		else
		{
			TranslateString(tmpStr, tmpStr);
		}

		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("totalpatient"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		nTotal[0] += ToInt(tmpStr);

		rs.GetValue(_T("servobj1"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		nTotal[1] += ToInt(tmpStr);

		rs.GetValue(_T("insobj1"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		nTotal[2] += ToInt(tmpStr);

		rs.GetValue(_T("servobj2"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		nTotal[3] += ToInt(tmpStr);

		rs.GetValue(_T("insobj2"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		nTotal[4] += ToInt(tmpStr);

		rs.GetValue(_T("servobj3"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		nTotal[5] += ToInt(tmpStr);

		rs.GetValue(_T("insobj3"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		nTotal[6] += ToInt(tmpStr);

		rs.GetValue(_T("servobj4"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		nTotal[7] += ToInt(tmpStr);

		rs.GetValue(_T("insobj4"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		nTotal[8] += ToInt(tmpStr);
		rs.MoveNext();
	}
	if(nTotal[10] > 0)
	{
		FormatCurrency(nTotal[0], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum2"), tmpStr);
		FormatCurrency(nTotal[1], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum3"), tmpStr);
		FormatCurrency(nTotal[2], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum4"), tmpStr);
		FormatCurrency(nTotal[3], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum5"), tmpStr);
		FormatCurrency(nTotal[4], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum6"), tmpStr);
		FormatCurrency(nTotal[5], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum7"), tmpStr);
		FormatCurrency(nTotal[6], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum8"), tmpStr);
		FormatCurrency(nTotal[7], tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum9"), tmpStr);
		FormatCurrency(nTotal[8],tmpStr);
		rpt.GetReportFooter()->SetValue(_T("sum10"), tmpStr);
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rs.GetValue(_T("bacsi"),tmpStr);
	rpt.GetReportFooter() ->SetValue(_T("User1"), tmpStr);
	rpt.PrintPreview();
} 
void CrptGeneralClinicalActivitiesReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString tmpStr, szSQL;
	szSQL.Format(_T(" SELECT 	'luotkham' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl1") \
				_T(" union all") \
				_T(" SELECT 	'khamsuckhoe' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	he_receptidx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_fee_list ON(hfl_feeid=he_examtype)") \
				_T(" 	WHERE 	he_status in('P','T')") \
				_T(" 		and hfl_subitem='1'") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 	'capcuu' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	he_status in('P','T')") \
				_T(" 		and date(he_examdate) between date('%s') and date('%s')") \
				_T(" 		and he_emergency='Y'") \
				_T(" ) as tbl2") \
				_T(" union all") \
				_T(" SELECT 	'capdonthuoc' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	hpo_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(hpo_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hpo_status in('I','A') or hpo_payment='P')") \
				_T(" 		and hpo_type='P'") \
				_T(" 		and hpo_depttype='E'") \
				_T(" ) as tbl4") \
				_T(" union all") \
				_T(" SELECT 	'cochidinhcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	pcmso_orderid, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E'  ") \
				_T(" 		") \
				_T(" ) as tbl5") \
					_T(" union all") \
				_T(" SELECT 	'chilamcls' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(pcmso_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (pcmso_payment='P' or pcmso_status='T')") \
				_T(" 		and pcmso_depttype='E' and hpo_orderid is null ") \
				_T(" 		") \
				_T(" ) as tbl5_1") \
				_T(" union all") \
				_T(" SELECT 	'cotieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	ho_idx, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' ") \
				_T(" ) as tbl6") \
				_T(" union all") \
				_T(" SELECT 	'chilamtieuphau' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT distinct	hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when obj.ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when obj.ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_operation ON(ho_docno=hd_docno)") \
				_T(" 	LEFT JOIN hms_object as obj ON(ho_id=hd_object)") \
				_T(" 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(ho_orderdate) between date('%s') and date('%s')") \
				_T(" 		and (hfe_status='P' or ho_status='T')") \
				_T(" 		and ho_depttype='E' and hpo_orderid is null ") \
				_T(" ) as tbl61") \
				_T(" union all") \
				_T(" SELECT 	'nhapvien' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl7") \
				_T(" union all") \
				_T(" SELECT 	'tuyenduoichuyenden' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and length(hd_transplaceid) > 0") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" ) as tbl8") \
				_T(" union all") \
				_T(" SELECT 	'chuyentuyentren' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status ='T'") \
				_T(" 		and hd_suggestion ='T'") \
				_T(" 		and length(hd_tohosid) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" ) as tbl9") \
				_T(" union all") \
				_T(" SELECT 	'nhapvienpleiku' as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status ='T'") \
				_T(" 		and hd_suggestion ='A'") \
				_T(" 		and length(hd_indept) > 0") \
				_T(" 		and date(hd_enddate) between date('%s') and date('%s')") \
				_T(" 		and hp_distid= 60301") \
				_T(" ) as tbl10") \
				_T(" union all") \
				_T(" SELECT 	'tinhtrangvaovien_'||hp_status as typeid,") \
				_T(" 	sum(totalpatient) as totalpatient,") \
				_T(" 	sum(servobj1) as servobj1,") \
				_T(" 	sum(insobj1) as insobj1,") \
				_T(" 	sum(servobj2) as servobj2,") \
				_T(" 	sum(insobj2) as insobj2,") \
				_T(" 	sum(servobj3) as servobj3,") \
				_T(" 	sum(insobj3) as insobj3,") \
				_T(" 	sum(servobj4) as servobj4,") \
				_T(" 	sum(insobj4) as insobj4") \
				_T(" FROM ") \
				_T(" (	") \
				_T(" 	SELECT 	distinct hp_status, hd_docno as docno,") \
				_T(" 		1 as totalpatient,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj1,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) >= 365*6  then 1 else 0 end as insobj1,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as servobj2,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) >= 365*6 then 1 else 0 end as insobj2,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj3,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic=1  and (date(hd_admitdate)-hp_birthdate) < 365*6  then 1 else 0 end as insobj3,") \
				_T(" 		case when ho_type not in('I','D','C') and hp_ethnic<>1 and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as servobj4,") \
				_T(" 		case when ho_type in('I','D','C') and hp_ethnic<>1  and (date(hd_admitdate)-hp_birthdate) < 365*6 then 1 else 0 end as insobj4") \
				_T(" 	FROM hms_patient") \
				_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" 	LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" 	WHERE 	hd_status in('P','T')") \
				_T(" 		and date(hd_admitdate) between date('%s') and date('%s')") \
				_T(" 		and length(hp_status) > 0") \
				_T(" ) as tbl11") \
				_T(" group by hp_status") , 
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate,
					m_szFromDate, m_szToDate);
	m_rs->ExecSQL(szSQL);	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 30);
	//xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	//xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);
//	xls.SetCellMergedColumns(0,2,10);	
	xls.SetCellText(0, 4, _T("HOAT DONG KHAM BENH"),true,16,16);
//	xls.SetCellMergedColumns(0,4,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 5, tmpStr,FMT_TEXT,true,12,0);
	int nRow = 8;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	

	TranslateString(_T("Content"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);

	TranslateString(_T("Total"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);	

	xls.SetCellMergedColumns(3,7,2);
	xls.SetCellText(3, 7, _T("Tong so benh nhan kinh > = 6"),true,14);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);	

	xls.SetCellMergedColumns(5,7,2);
	xls.SetCellText(5, 7, _T("Benh nhan dan toc > = 6"),true,14);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(7,7,2);
	xls.SetCellText(7, 7, _T("Tre em kinh <6"),true,14);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedColumns(9,7,2);
	xls.SetCellText(9, 7, _T("Tre em dan toc <6"),true,16);
	TranslateString(_T("Collect Fee "), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);

	int nIndex = 1;
	int i=0,nTotal[10];
	for (i=0;i<9;i++)
	{
		nTotal[i]=0;
	}
	while(!m_rs->IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);

		m_rs->GetValue(_T("typeid"), tmpStr);
		if(tmpStr.Find(_T("_")) != -1){
			tmpStr = pMF->GetSelectionString(_T("hms_patient_state"), tmpStr.Right(1));
		}
		else
		{
			TranslateString(tmpStr, tmpStr);
		}
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		
		m_rs->GetValue(_T("totalpatient"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[0] +=ToInt(tmpStr);
		
		m_rs->GetValue(_T("servobj1"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[1] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj1"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[2] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj2"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[3] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj2"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[4] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj3"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[5] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj3"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[6] +=ToInt(tmpStr);

		m_rs->GetValue(_T("servobj4"), tmpStr);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[7] +=ToInt(tmpStr);

		m_rs->GetValue(_T("insobj4"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER1);
		if (!tmpStr.IsEmpty())nTotal[8] +=ToInt(tmpStr);

		m_rs->MoveNext();
	}
	m_rs->MoveFirst();
	nRow++;
	TranslateString(_T("Total"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
	for (int i = 0; i < 9; i++){		
		tmpStr.Format(_T("%d"),nTotal[i] );		
		xls.SetCellText(i+2, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\hoatdongkhambenh.xls"));
	EndWaitCursor();
} 
int CrptGeneralClinicalActivitiesReportDialog::OnAddrptGeneralClinicalActivitiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptGeneralClinicalActivitiesReportDialog::OnEditrptGeneralClinicalActivitiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptGeneralClinicalActivitiesReportDialog::OnDeleterptGeneralClinicalActivitiesReportDialog(){
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
 		OnCancelrptGeneralClinicalActivitiesReportDialog(); 
 	}
	return 0;
}
int CrptGeneralClinicalActivitiesReportDialog::OnSaverptGeneralClinicalActivitiesReportDialog(){
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
 		//OnrptGeneralClinicalActivitiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptGeneralClinicalActivitiesReportDialog::OnCancelrptGeneralClinicalActivitiesReportDialog(){
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
int CrptGeneralClinicalActivitiesReportDialog::OnrptGeneralClinicalActivitiesReportDialogListLoadData(){
	return 0;
}
