#include "rptGeneralsurgeryoftenreportedDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptGeneralsurgeryoftenreportedDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralsurgeryoftenreportedDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CrptGeneralsurgeryoftenreportedDialog *pVw = (CrptGeneralsurgeryoftenreportedDialog *)pWnd;
	pVw->OnLoadReportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptGeneralsurgeryoftenreportedDialog *pVw = (CrptGeneralsurgeryoftenreportedDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptGeneralsurgeryoftenreportedDialog *pVw = (CrptGeneralsurgeryoftenreportedDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptGeneralsurgeryoftenreportedDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralsurgeryoftenreportedDialog*)pWnd)->OnAddrptGeneralsurgeryoftenreportedDialog();
} 
static int _OnEditrptGeneralsurgeryoftenreportedDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralsurgeryoftenreportedDialog*)pWnd)->OnEditrptGeneralsurgeryoftenreportedDialog();
} 
static int _OnDeleterptGeneralsurgeryoftenreportedDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralsurgeryoftenreportedDialog*)pWnd)->OnDeleterptGeneralsurgeryoftenreportedDialog();
} 
static int _OnSaverptGeneralsurgeryoftenreportedDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralsurgeryoftenreportedDialog*)pWnd)->OnSaverptGeneralsurgeryoftenreportedDialog();
} 
static int _OnCancelrptGeneralsurgeryoftenreportedDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralsurgeryoftenreportedDialog*)pWnd)->OnCancelrptGeneralsurgeryoftenreportedDialog();
} 
CrptGeneralsurgeryoftenreportedDialog::CrptGeneralsurgeryoftenreportedDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CrptGeneralsurgeryoftenreportedDialog::~CrptGeneralsurgeryoftenreportedDialog(){
}
void CrptGeneralsurgeryoftenreportedDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 400, 90);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 130, 55);
	m_wndReportPeriod.Create(this,135, 30, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 130, 85);
	m_wndFromDate.Create(this,135, 60, 220, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndLoadReport.Create(this, _T("&Load Report"), 134, 95, 219, 120);
	m_wndExport.Create(this, _T("&Export XLS"), 224, 95, 309, 120);
	m_wndClose.Create(this, _T("&Close"), 314, 95, 399, 120);

}
void CrptGeneralsurgeryoftenreportedDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
}
void CrptGeneralsurgeryoftenreportedDialog::OnSetWindowEvents(){
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
}
void CrptGeneralsurgeryoftenreportedDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CrptGeneralsurgeryoftenreportedDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptGeneralsurgeryoftenreportedDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptGeneralsurgeryoftenreportedDialog::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptGeneralsurgeryoftenreportedDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1); 
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
void CrptGeneralsurgeryoftenreportedDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptGeneralsurgeryoftenreportedDialog::OnReportPeriodSelendok(){
	 
}
/*void CrptGeneralsurgeryoftenreportedDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CrptGeneralsurgeryoftenreportedDialog::OnReportPeriodKillfocus(){
	
}*/
long CrptGeneralsurgeryoftenreportedDialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptGeneralsurgeryoftenreportedDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptGeneralsurgeryoftenreportedDialog::OnFromDateChange(){
	
} */
/*void CrptGeneralsurgeryoftenreportedDialog::OnFromDateSetfocus(){
	
} */
/*void CrptGeneralsurgeryoftenreportedDialog::OnFromDateKillfocus(){
	
} */
int CrptGeneralsurgeryoftenreportedDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptGeneralsurgeryoftenreportedDialog::OnToDateChange(){
	
} */
/*void CrptGeneralsurgeryoftenreportedDialog::OnToDateSetfocus(){
	
} */
/*void CrptGeneralsurgeryoftenreportedDialog::OnToDateKillfocus(){
	
} */
int CrptGeneralsurgeryoftenreportedDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptGeneralsurgeryoftenreportedDialog::OnLoadReportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CReport rpt;
	CString tmpStr;
	if(!rpt.Init(_T("Reports/HMS/PTTT/GENERALSURGERYREPORT.RPT")) )
	{		//ShowMessageBox(_T("Can not open file report"), MB_OK);		return ;
	}

	CString szSQL;
	CRecord rs(&pMF->m_db);

	UpdateData(true);
	szSQL.Format(_T(" SELECT hsd_tdeptid as deptid,") \
_T(" 	sum(mophienlon) as mophienlon,") \
_T(" 	sum(mophienvua) as mophienvua,") \
_T(" 	sum(mocapcuulon) as mocapcuulon,") \
_T(" 	sum(mocapcuuvua) as mocapcuuvua,") \
_T(" 	sum(moyeucaulon) as moyeucaulon,") \
_T(" 	sum(moyeucauvua) as moyeucauvua,") \
_T(" 	sum(tongcong) as tongcong") \
_T(" FROM") \
_T(" (") \
_T(" 	SELECT hsd_tdeptid,") \
_T(" 		case when hsd_category = 1 and hsd_normal='N' then 1 else 0 end as mophienlon,") \
_T(" 		case when hsd_category = 1 and hsd_normal='Y' then 1 else 0 end as mophienvua,") \
_T(" 		case when hsd_category = 2 and hsd_normal='N' then 1 else 0 end as mocapcuulon,") \
_T(" 		case when hsd_category = 2 and hsd_normal='Y' then 1 else 0 end as mocapcuuvua,") \
_T(" 		case when hsd_category = 3 and hsd_normal='N' then 1 else 0 end as moyeucaulon,") \
_T(" 		case when hsd_category = 3 and hsd_normal='Y' then 1 else 0 end as moyeucauvua,") \
_T(" 		case when hsd_category in(1, 2, 3) then 1 else 0 end as tongcong") \
_T(" 	FROM hms_patient_surgery") \
_T(" 	LEFT JOIN hms_surgery_detail ON(hsd_docno=hps_docno)") \
_T(" 	WHERE hsd_deptid ='%s' AND (hsd_date) between TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  and TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ORDER BY hsd_date") \
_T(" ) as tbl") \
_T(" GROUP BY deptid") \
_T(" ORDER BY deptid") ,pMF->m_szDepartment, m_szFromDate, m_szToDate);

_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return;
	}

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->m_szDept));
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));
	//Page Header
	//Report Detail
	CReportSection* rptDetail;
	int nTotal[8];
	int nIndex = 1;
	for (int i =0; i < 8; i++)
		nTotal[i] = 0;

	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("deptid"), tmpStr);			
		rptDetail->SetValue(_T("1"), tmpStr);
		
		rs.GetValue(_T("mophienlon"), tmpStr);
		nTotal[0] += str2int(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("mophienvua"), tmpStr);
		nTotal[1] += str2int(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);


		rs.GetValue(_T("mocapcuulon"), tmpStr);
		nTotal[2] += str2int(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("mocapcuuvua"), tmpStr);
		nTotal[3] += str2int(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("moyeucaulon"), tmpStr);
		nTotal[4] += str2int(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("moyeucauvua"), tmpStr);
		nTotal[5] += str2int(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);


		rs.GetValue(_T("tongcong"), tmpStr);
		nTotal[6] += str2int(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();
	}
	if(nTotal[6] > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		for (int i =0; i <= 6; i++)
		{
			tmpStr.Format(_T("s%d"), i+2);
			rptDetail->SetValue(tmpStr, int2str(nTotal[i]));
		}
	}

	szSQL.Format(_T(" SELECT hitech_operation, hho_name as name,") \
_T(" 	sum(surgery) as totalsurgery") \
_T(" FROM hms_hitech_operation ") \
_T(" LEFT JOIN ") \
_T(" (") \
_T(" 	SELECT hsd_subcategory as hitech_operation, 1 as surgery") \
_T(" 	FROM hms_surgery_detail") \
_T(" 	WHERE hsd_deptid ='%s' AND date(hsd_date) between date('2010-09-17')  and date('2010-09-24') ") \
_T(" 		and hsd_category=4") \
_T(" 	ORDER BY hsd_date") \
_T(" ) as tbl") \
_T(" ON(hho_idx=hitech_operation)") \
_T(" GROUP BY hitech_operation, hho_name") \
_T(" ORDER BY hitech_operation"),pMF->m_szDepartment, m_szFromDate, m_szToDate);
	
	rs.ExecSQL(szSQL);
	rpt.AddDetail(rpt.GetGroupHeader(1));
	nTotal[0] = 0;
	nIndex = 1;
	while(!rs.IsEOF()){

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));	 
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);			
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("totalsurgery"), tmpStr);
		nTotal[0] += str2int(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.MoveNext();
	}

	if(nTotal[0] > 0){
		CString szLabel;
		TranslateString(_T("Total"), szLabel);
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
		rptDetail->GetItem(_T("2"))->SetBold(true);
		rptDetail->GetItem(_T("2"))->SetText(szLabel);
		tmpStr.Format(_T("%d"), nTotal[0]);
		rptDetail->SetValue(_T("3"), tmpStr);
		rptDetail->GetItem(_T("3"))->SetBold(true);
	}

	szSQL.Format(_T(" SELECT ham_name as name,") \
_T(" 	sum(surgery) as totalsurgery,") \
_T(" 	sum(goodresult) as good,") \
_T(" 	sum(sideeffectresult) as sideeffect,") \
_T(" 	sum(dieresult) as die") \
_T(" FROM hms_anesthesia_method") \
_T(" LEFT JOIN") \
_T(" (") \
_T(" 	SELECT hsd_anes_method as anes_method, 1 as surgery,") \
_T(" 		case when hsd_anes_result=1 then 1 else 0 end as goodresult,") \
_T(" 		case when hsd_anes_result=2 then 1 else 0 end as sideeffectresult,") \
_T(" 		case when hsd_anes_result=3 then 1 else 0 end as dieresult") \
_T(" 	FROM hms_surgery_detail") \
_T(" 	WHERE hsd_deptid ='%s' AND date(hsd_date) between date('%s')  and date('%s') ") \
_T(" 	UNION ALL") \
_T(" 	SELECT hsd_anes_method2 as anes_method, 1 as surgery,") \
_T(" 		case when hsd_anes_result=1 then 1 else 0 end as goodresult,") \
_T(" 		case when hsd_anes_result=2 then 1 else 0 end as sideeffectresult,") \
_T(" 		case when hsd_anes_result=3 then 1 else 0 end as dieresult") \
_T(" 	FROM hms_surgery_detail") \
_T(" 	WHERE hsd_deptid = '%s' AND date(hsd_date) between date('%s')  and date('%s') ") \
_T(" ) as tbl") \
_T(" ON (ham_idx=anes_method)") \
_T(" GROUP BY anes_method, ham_name") \
_T(" ORDER BY anes_method"),pMF->m_szDepartment, m_szFromDate, m_szToDate,pMF->m_szDepartment, m_szFromDate, m_szToDate);


	rs.ExecSQL(szSQL);

	rpt.AddDetail(rpt.GetGroupHeader(3));
	while(!rs.IsEOF()){

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));	 
		rs.GetValue(_T("name"), tmpStr);					
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("totalsurgery"), tmpStr);			
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("good"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sideeffect"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("die"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.MoveNext();
	}


	//Page Footer
	//Report Footer
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
	rpt.PrintPreview();

} 
void CrptGeneralsurgeryoftenreportedDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptGeneralsurgeryoftenreportedDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CrptGeneralsurgeryoftenreportedDialog::OnAddrptGeneralsurgeryoftenreportedDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptGeneralsurgeryoftenreportedDialog::OnEditrptGeneralsurgeryoftenreportedDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptGeneralsurgeryoftenreportedDialog::OnDeleterptGeneralsurgeryoftenreportedDialog(){
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
 		OnCancelrptGeneralsurgeryoftenreportedDialog(); 
 	}
	return 0;
}
int CrptGeneralsurgeryoftenreportedDialog::OnSaverptGeneralsurgeryoftenreportedDialog(){
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
 		//OnrptGeneralsurgeryoftenreportedDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptGeneralsurgeryoftenreportedDialog::OnCancelrptGeneralsurgeryoftenreportedDialog(){
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
int CrptGeneralsurgeryoftenreportedDialog::OnrptGeneralsurgeryoftenreportedDialogListLoadData(){
	return 0;
}
