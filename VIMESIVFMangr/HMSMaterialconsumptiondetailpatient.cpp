#include "HMSMaterialconsumptiondetailpatient.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSMaterialconsumptiondetailpatient *pVw = (CHMSMaterialconsumptiondetailpatient *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSMaterialconsumptiondetailpatient *pVw = (CHMSMaterialconsumptiondetailpatient *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSMaterialconsumptiondetailpatient *pVw = (CHMSMaterialconsumptiondetailpatient *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListDeleteItem();
} 
static void _OnFacCheckSelectFnc(CWnd *pWnd){
	 ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnFacCheckSelect();
}
static int _OnAddHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnAddHMSMaterialconsumptiondetailpatient();
} 
static int _OnEditHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnEditHMSMaterialconsumptiondetailpatient();
} 
static int _OnDeleteHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnDeleteHMSMaterialconsumptiondetailpatient();
} 
static int _OnSaveHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnSaveHMSMaterialconsumptiondetailpatient();
} 
static int _OnCancelHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnCancelHMSMaterialconsumptiondetailpatient();
} 
CHMSMaterialconsumptiondetailpatient::CHMSMaterialconsumptiondetailpatient(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 955;
	m_nDlgHeight = 660;
	SetDefaultValues();
}
CHMSMaterialconsumptiondetailpatient::~CHMSMaterialconsumptiondetailpatient(){
}
void CHMSMaterialconsumptiondetailpatient::OnCreateComponents(){
	m_wndReportCriteria.Create(this, _T("Report criteria"), 5, 5, 945, 595);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 365, 55); 
	m_wndPrint.Create(this, _T("&Print"), 775, 30, 855, 55);
	m_wndLoad.Create(this, _T("Load"), 690, 30, 770, 55);
	m_wndExport.Create(this, _T("&Export"), 860, 30, 940, 55);
	m_wndList.Create(this,10, 60, 940, 590); 
	m_wndFacCheck.Create(this, _T("All Fac"), 370, 30, 590, 55);
}
void CHMSMaterialconsumptiondetailpatient::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_szFromDate = pMF->m_wndPatientDocument.m_szAdmitDate;
	m_szToDate =pMF->m_wndPatientDocument.m_szDischargeDate;
	m_nColumn=0;
	OnListLoadData();
}
void CHMSMaterialconsumptiondetailpatient::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFacCheck.SetEvent(WE_CLICK, _OnFacCheckSelectFnc);

}
void CHMSMaterialconsumptiondetailpatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndFacCheck.GetDlgCtrlID(), m_bFacCheck);

}
void CHMSMaterialconsumptiondetailpatient::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMaterialconsumptiondetailpatient::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMaterialconsumptiondetailpatient::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bFacCheck=FALSE;
	m_nColumn=0;

}
int CHMSMaterialconsumptiondetailpatient::SetMode(int nMode){
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
/*void CHMSMaterialconsumptiondetailpatient::OnFromDateChange(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnFromDateSetfocus(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnFromDateKillfocus(){
	
} */
int CHMSMaterialconsumptiondetailpatient::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSMaterialconsumptiondetailpatient::OnToDateChange(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnToDateSetfocus(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnToDateKillfocus(){
	
} */
int CHMSMaterialconsumptiondetailpatient::OnToDateCheckValue(){
	return 0;
} 
void CHMSMaterialconsumptiondetailpatient::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nGetColumnCount; 
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
	if (m_bFacCheck == FALSE)
		szFac.Format(_T(" and hpo_deptid ='%s' "), pMF->m_szDept);

	szSQL.Format(_T(" select hpol_itemid,hpol_name") \
	_T(" from hms_pharmacyorder") \
	_T(" left join hms_pharmacyorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
	_T(" where hpo_docno = %d and hfe_discount >0 and hpo_type <> 'M' and hpo_status in('A','I') and hfe_group='A9000' %s") \
	_T(" group by hpol_itemid,hpol_name") \
	_T(" order by hpol_itemid "), pMF->m_wndPatientDocument.m_nDocumentNo, pMF->m_szDept);	
	rs.ExecSQL(szSQL);
	nGetColumnCount = rs.GetIntValue();


	if(!rpt.Init(_T("Reports/HMS/BANGKEVTYTBHYT.RPT")))
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("Department"), pMF->m_wndTreatmentQueue.m_wndDepartment.GetCurrent(1));

	rpt.GetReportHeader()->SetValue(_T("PatientName"), pMF->m_wndPatientDocument.m_szPatientName);
	rpt.GetReportHeader()->SetValue(_T("Age"), pMF->m_wndPatientDocument.m_szAge);
	rpt.GetReportHeader()->SetValue(_T("Sex"), pMF->m_wndPatientDocument.m_szSex);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), pMF->m_wndPatientDocument.m_szCardNo);
	rpt.GetReportHeader()->SetValue(_T("RoomName"),pMF->m_wndPatientDocument.m_wndBed.m_wndRoom.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("BedName"), pMF->m_wndPatientDocument.m_wndBed.m_wndBed.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"),pMF->m_wndPatientDocument.m_szDiagnostic);
	//Report Detail
	
	

	int nIndex = 1;
	CString szOldLine, szNewLine,szField;
	CReportSection* rptDetail;
	
	CReportSection*	rptPageHeader;
	long double grpCost[50];	
	double cost = 0;
	
	for(int i =0; i< 50; i++)
	{
		grpCost[i] = 0;
	}
	
	
	for (int i =0; i <= nGetColumnCount; i++)
	{			
		rpt.GetPageHeader()->SetValue(i+2,m_szNameDrug[i]);
	}
	
	rs.ExecSQL(m_szSQL);
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("Index"), tmpStr);
		rs.GetValue(_T("issuedate"), tmpStr);
		rptDetail->SetValue(_T("Date"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));		
		for(int i=0; i<= m_wndList.GetColumnCount();i++)
		{			
			rs.GetValue(m_szItemID[i], cost);
			grpCost[i] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(i+2, tmpStr);
		}		
		rs.MoveNext();
	}

	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	for(int i=0; i<= m_wndList.GetColumnCount();i++)
	{			
		szField.Format(_T("s%d"), i+1);
		FormatCurrency(grpCost[i], tmpStr);
		rptDetail->SetValue(szField, tmpStr);
	}		
	//Page Footer
	//Report Footer
	UpdateData(false);
	CString szTime;
	szTime = pMF->GetSysDateTime();
	szSysDate = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szTime.Mid(11,5),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	EndWaitCursor();

	rpt.PrintPreview();
	

} 
void CHMSMaterialconsumptiondetailpatient::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
} 
void CHMSMaterialconsumptiondetailpatient::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMaterialconsumptiondetailpatient::OnListDblClick(){
	
} 
void CHMSMaterialconsumptiondetailpatient::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMaterialconsumptiondetailpatient::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMaterialconsumptiondetailpatient::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, sz_sumcase, sz_sum, szTmp, szFac;
	BeginWaitCursor();
	UpdateData(true);
	szFac.Empty();
	if (m_bFacCheck == FALSE)
		szFac.Format(_T(" and hpo_deptid ='%s' "), pMF->m_szDept);

	szSQL.Format(_T(" select hpol_itemid,hpol_name") \
	_T(" from hms_pharmacyorder") \
	_T(" left join hms_pharmacyorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
	_T(" where hpo_docno = %d and hfe_discount >0 and hpo_type <> 'M' and hpo_status in('A','I') and hfe_group='A9000' %s") \
	_T(" group by hpol_itemid,hpol_name") \
	_T(" order by hpol_itemid "), pMF->m_wndPatientDocument.m_nDocumentNo, szFac);	
	rs.ExecSQL(szSQL);

	
	int m_nColumn=0;
	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T("Date"), CFMT_DATE, 100);
	while(!rs.IsEOF())
	{
		if (!sz_sum.IsEmpty())
			sz_sum +=_T(",");
		if (!sz_sumcase.IsEmpty())
			sz_sumcase += _T(",");

		sz_sum.AppendFormat(_T(" sum(A%s) as A%s "),rs.GetValue(_T("hpol_itemid")),rs.GetValue(_T("hpol_itemid")));
		sz_sumcase.AppendFormat(_T(" case when hpol_itemid='%s' then hpol_issueqty else 0 end as A%s "), rs.GetValue(_T("hpol_itemid")),rs.GetValue(_T("hpol_itemid")));		
		
		m_szItemID[m_nColumn] =_T("A") + rs.GetValue(_T("hpol_itemid"));
		m_szNameDrug[m_nColumn] = rs.GetValue(_T("hpol_name"));
		
		m_nColumn++;
		rs.GetValue(_T("hpol_name"),tmpStr);
		m_wndList.InsertColumn(m_nColumn, tmpStr, CFMT_NUMBER, 80);	
		

		rs.MoveNext();
	}
	
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	m_szSQL.Format(_T(" select issuedate, %s ") \
	_T(" from ( ") \
	_T(" select date(hpo_issuedate) as issuedate, %s") \
	_T(" from hms_pharmacyorder") \
	_T(" left join hms_pharmacyorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
	_T(" where hpo_docno = %d and hfe_discount >0 and hpo_type <> 'M' and hpo_status in('A','I') and hfe_group='A9000' %s") \
	_T(" order by hpol_itemid ") \
	_T(" ) as tbl") \
	_T(" group by issuedate") \
	_T(" order by issuedate "), sz_sum, sz_sumcase,pMF->m_wndPatientDocument.m_nDocumentNo, szFac);
	
	//_fmsg(_T("%s"), m_szSQL);

	UpdateData(false);
	int nTotal[50];
	for (int i=0; i< 50; i++)
	{
		nTotal[i] = 0;
	}


	nCount = rs.ExecSQL(m_szSQL);
	while(!rs.IsEOF()){
		int nItem = m_wndList.AddItems(  
			rs.GetValue(_T("issuedate")),
			NULL);
		for (int i =0; i < m_wndList.GetColumnCount()-1; i++)
		{
			rs.GetValue(m_szItemID[i],tmpStr);
			nTotal[i] += ToInt(tmpStr);
			m_wndList.SetItemText(nItem, i+1,tmpStr);
		}
		rs.MoveNext();	
	}
	
	TranslateString(_T("Total:"), tmpStr);
	int nItem = m_wndList.AddItems( tmpStr,	NULL);

	for (int i =0; i < m_wndList.GetColumnCount()-1; i++)
	{		
		tmpStr.Format(_T("%d"), nTotal[i]);
		m_wndList.SetItemText(nItem, i+1,tmpStr);
	}

	m_wndList.SetItemTextColor(nItem,RGB(100,100,255));
	m_wndList.EndLoad();
	EndWaitCursor();
	return nCount;
}
	void CHMSMaterialconsumptiondetailpatient::OnFacCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSMaterialconsumptiondetailpatient::OnAddHMSMaterialconsumptiondetailpatient(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMaterialconsumptiondetailpatient::OnEditHMSMaterialconsumptiondetailpatient(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMaterialconsumptiondetailpatient::OnDeleteHMSMaterialconsumptiondetailpatient(){
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
 		OnCancelHMSMaterialconsumptiondetailpatient(); 
 	}
	return 0;
}
int CHMSMaterialconsumptiondetailpatient::OnSaveHMSMaterialconsumptiondetailpatient(){
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
 		//OnHMSMaterialconsumptiondetailpatientListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMaterialconsumptiondetailpatient::OnCancelHMSMaterialconsumptiondetailpatient(){
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
int CHMSMaterialconsumptiondetailpatient::OnHMSMaterialconsumptiondetailpatientListLoadData(){
	return 0;
}
