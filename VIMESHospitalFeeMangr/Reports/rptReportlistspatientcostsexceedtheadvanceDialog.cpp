#include "rptReportlistspatientcostsexceedtheadvanceDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptReportlistspatientcostsexceedtheadvanceDialog* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd)->OnDeptAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptReportlistspatientcostsexceedtheadvanceDialog *pVw = (CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CrptReportlistspatientcostsexceedtheadvanceDialog *pVw = (CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptReportlistspatientcostsexceedtheadvanceDialog *pVw = (CrptReportlistspatientcostsexceedtheadvanceDialog *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddrptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnAddrptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnEditrptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnEditrptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnDeleterptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnDeleterptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnSaverptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnSaverptReportlistspatientcostsexceedtheadvanceDialog();
} 
static int _OnCancelrptReportlistspatientcostsexceedtheadvanceDialogFnc(CWnd *pWnd){
	 return ((CrptReportlistspatientcostsexceedtheadvanceDialog*)pWnd)->OnCancelrptReportlistspatientcostsexceedtheadvanceDialog();
} 
CrptReportlistspatientcostsexceedtheadvanceDialog::CrptReportlistspatientcostsexceedtheadvanceDialog(CWnd *pParent){
	m_nDlgWidth = 955;
	m_nDlgHeight = 660;
	SetDefaultValues();
	m_szTitle.Format(_T("The report lists patient costs exceed the advance"));
	m_rs = NULL;
}
CrptReportlistspatientcostsexceedtheadvanceDialog::~CrptReportlistspatientcostsexceedtheadvanceDialog(){
	if (!m_rs->IsEOF()) delete(m_rs);
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnCreateComponents(){
	m_wndReportCriteria.Create(this, _T("Conditions to report"), 5, 5, 945, 95);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 365, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 370, 30, 450, 55);
	m_wndDept.Create(this,455, 29, 684, 54); 
	m_wndFloorlevelLabel.Create(this, _T("Floor level"), 370, 60, 450, 85);
	m_wndLevel.Create(this,455, 60, 580, 85); 
	m_wndLoad.Create(this, _T("Load"), 689, 29, 769, 54);
	m_wndPrint.Create(this, _T("&Print"), 774, 29, 854, 54);	
	m_wndExport.Create(this, _T("&Export"), 859, 29, 939, 54);
	m_wndList.Create(this,5, 100, 945, 600); 
	m_wndAll.Create(this, _T("All"), 10, 60, 175, 85);
	m_wndOnlyThua.Create(this, _T("Only Lack of money"), 180, 60, 365, 85);
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_rs = new CRecord(&pMF->m_db);
	EnableControls(TRUE);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("InDate"), CFMT_DATE, 100);	
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);	
	m_wndList.InsertColumn(4, _T("Object"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("CardNo"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(6, _T("BN Ph\x1EA3i TT"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(7, _T("BHYT TT"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(8, _T("T\x1ED5ng \x63hi ph\xED"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(9, _T("TT T\x1EA1m ung"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(10, _T("Thua"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(11, _T("Thi\x1EBFu"), CFMT_MONEY, 80);	
	m_wndList.GetHeaderControl()->SetItemHeight(2);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_NUMBER, 90);
	m_wndDept.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);



}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szDeptKey = pMF->m_szDept;
	m_wndFromDate.EnableWindow(false);
	m_wndToDate.EnableWindow(false);
	//m_wndDept.EnableWindow(false);
	UpdateData(false);


}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOnlyThua.GetDlgCtrlID(), m_nOnlyThua);
	DDX_Text(pDX, m_wndLevel.GetDlgCtrlID(), m_nLevel);
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptReportlistspatientcostsexceedtheadvanceDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_nAll=1;
	m_nOnlyThua=0;
	m_nLevel =0;;

}
int CrptReportlistspatientcostsexceedtheadvanceDialog::SetMode(int nMode){
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
		m_wndDept.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateChange(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateSetfocus(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateKillfocus(){
	
} */
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateChange(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateSetfocus(){
	
} */
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateKillfocus(){
	
} */
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptSelendok(){
	 
}
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptSetfocus(){
	
}*/
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptKillfocus(){
	
}*/
long CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id ='%s' "), m_szDeptKey);
	};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type='DT' %s ") , szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnReportInpatientpatientlistreport();
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();
	UpdateData(false);
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnExportInpatientpatientlistreport();
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnListDblClick(){
	
} 
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptReportlistspatientcostsexceedtheadvanceDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString szSQL, szDept, tmpStr,szOldLine ,szNewLine,szWhere, szHaving;
	szDept.Empty();
	if (!m_szDeptKey.IsEmpty())
		szDept.Format(_T(" and deptid ='%s' "),m_szDeptKey);

	if (m_nAll ==0)
	{
		szHaving.Format(_T(" sum(cost) > 0 "));
	}
	else
	{
		szHaving.Format(_T(" sum(cost-(discount+patpaid+ttucost)+%ld) > 0 "), m_nLevel);
	}

	szSQL.Format(_T(" SELECT deptid,docno, pname,object,cardno ,admitdate, sum(cost) as cost, sum(patdebt) as patdebt, sum(patpaid) as patpaid,sum(discount) as discount ,") \
	_T(" 	sum(ttucost) as ttucost ,case when sum(cost-(discount+patpaid+ttucost)) > 0 then sum(cost-(discount+patpaid+ttucost)) else 0 end as Thieu, case when sum(ttucost-patdebt) > 0 then sum(ttucost-patdebt) else 0 end as Thua") \
	_T(" FROM (") \
	_T(" 	SELECT  distinct (select sd_name from sys_dept where sd_id=deptid) as deptid, docno as docno, 	") \
	_T(" 		(select min(date(htr_admitdate)) from hms_treatment_record where htr_docno = docno and htr_deptid=deptid) as admitdate,		 	") \
	_T(" 		pname, (select ho_desc from hms_object where ho_id=hd_object) as object, cardno, 	") \
	_T(" 		sum(patdebt) as patdebt, sum(patpaid) as patpaid,sum(discount) as discount,  		") \
	_T(" 		(select sum(hfi_patpaid) from hms_fee_invoice where hfi_docno = docno and hfi_type ='A' and hfi_patpaid > 0 and deptid=hfi_deptid) as ttucost, 	") \
	_T(" 		sum(cost) as cost 	     ") \
	_T(" 	FROM (	SELECT htr_deptid as deptid, hfe_docno as docno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  	 	 			") \
	_T(" 		htr_idx as idx,hd_object,hc_cardno as cardno,	 	 			") \
	_T(" 		(select distinct ss_desc from sys_sel where ss_id='sys_sex' and ss_code=hp_sex) as sex,   			") \
	_T(" 		hfe_discount as discount,") \
	_T(" 		hfe_patdebt as patdebt,	") \
	_T(" 		hfe_patpaid as patpaid,	") \
	_T(" 		hfe_cost as cost 	 		") \
	_T(" 	FROM hmsv_fee 			 		") \
	_T(" 	LEFT JOIN hms_doc ON(hd_docno=hfe_docno) 		") \
	_T(" 	LEFT JOIN hms_patient   ON(hd_patientno=hp_patientno)  		") \
	_T(" 	LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno and htr_deptid=hfe_deptid )		") \
	_T(" 	LEFT JOIN hms_clinical_record ON(hcr_docno=htr_docno)  		") \
	_T("	LEFT JOIN hms_card ON(hc_patientno=hp_patientno and hc_idx=hd_cardidx) ") \
	_T(" 	WHERE hcr_status ='I' and hfe_status ='O' %s  ") \
	_T(" 	) as tbl  ") \
	_T(" 	GROUP BY deptid,docno, pname,object ,admitdate,idx,cardno  ") \
	_T(" 	ORDER BY deptid,docno") \
	_T(" ) AS tbMain") \
	_T(" GROUP BY deptid,docno, pname,object ,admitdate, cardno") \
	_T(" HAVING %s   ") \
	_T(" ORDER BY deptid,docno"),szDept, szHaving);


	BeginWaitCursor();
	//_fmsg(_T("%s"), szSQL);
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0,nIndex=1, nItem;
	nCount = m_rs->ExecSQL(szSQL);
	while(!m_rs->IsEOF()){		
		if (m_szDeptKey.IsEmpty())
		{
			m_rs->GetValue(_T("deptid"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty())
			{			
				nItem = m_wndList.AddItems(_T(""),szNewLine,NULL);			
				m_wndList.SetItemTextColor(nItem, RGB(0,0,250), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 10, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);			
				szOldLine = szNewLine;
				nIndex=1;
			}
		}
		
		tmpStr.Format(_T("%d"), nIndex++);
		nItem = m_wndList.AddItems(
			tmpStr,
			CDate::Convert(m_rs->GetValue(_T("admitdate")),yyyymmdd,ddmmyyyy),			
			m_rs->GetValue(_T("docno")),
			m_rs->GetValue(_T("pname")),			
			m_rs->GetValue(_T("Object")),
			m_rs->GetValue(_T("cardno")),
			m_rs->GetValue(_T("patdebt")),
			m_rs->GetValue(_T("discount")),
			m_rs->GetValue(_T("Cost")),
			m_rs->GetValue(_T("TTucost")),
			m_rs->GetValue(_T("Thua")),
			m_rs->GetValue(_T("Thieu")),NULL);
		
		if(ToLong(m_rs->GetValue(_T("Thieu"))) > 0)
		{
			m_wndList.SetItemBkColor(nItem, RGB(200, 200, 200), false);
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), false);
		}
		m_rs->MoveNext();
	}
	m_wndList.EndLoad();
	m_rs->MoveFirst();
	EndWaitCursor();
	
	return nCount;

}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnAddrptReportlistspatientcostsexceedtheadvanceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnEditrptReportlistspatientcostsexceedtheadvanceDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnDeleterptReportlistspatientcostsexceedtheadvanceDialog(){
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
 		OnCancelrptReportlistspatientcostsexceedtheadvanceDialog(); 
 	}
	return 0;
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnSaverptReportlistspatientcostsexceedtheadvanceDialog(){
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
 		//OnrptReportlistspatientcostsexceedtheadvanceDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnCancelrptReportlistspatientcostsexceedtheadvanceDialog(){
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
int CrptReportlistspatientcostsexceedtheadvanceDialog::OnrptReportlistspatientcostsexceedtheadvanceDialogListLoadData(){
	return 0;
}
void CrptReportlistspatientcostsexceedtheadvanceDialog::OnReportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();	
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	if (m_rs->IsEOF()) return;

	if(!rpt.Init(_T("Reports/HMS/HT_DANHSACHBENHNHANVUOTMUCTAMUNG.RPT")))
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("DEPATMENT"), m_wndDept.GetCurrent(1));
	//Report Detail
	
	

	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	long double grpCost[17];
	long double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);

	for (int i =0; i <= 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

		while(!m_rs->IsEOF())
		{
			if (m_szDeptKey.IsEmpty())
			{
				m_rs->GetValue(_T("deptid"), szNewLine);
				if(szNewLine != szOldLine && !szNewLine.IsEmpty()){				
					
					rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
					rptDetail->SetValue(_T("GroupName"), szNewLine);
					szOldLine = szNewLine;
					nIndex=1;
				}
			}

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("0"), tmpStr);
			m_rs->GetValue(_T("admitdate"), tmpStr);
			rptDetail->SetValue(_T("1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));			
			m_rs->GetValue(_T("docno"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			m_rs->GetValue(_T("pname"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);			
			m_rs->GetValue(_T("Oject"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			m_rs->GetValue(_T("CardNo"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			m_rs->GetValue(_T("Patdebt"), cost);
			ttlCost[6] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			m_rs->GetValue(_T("discount"), cost);
			ttlCost[7] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			m_rs->GetValue(_T("TTucost"), cost);
			ttlCost[8] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			m_rs->GetValue(_T("Cost"), cost);
			ttlCost[9] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			m_rs->GetValue(_T("Thua"), cost);
			ttlCost[10] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			m_rs->GetValue(_T("Thieu"), cost);
			ttlCost[11] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);
			m_rs->MoveNext();
		}

		if (ttlCost[9] > 0)
		{	CString szTmp;
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			for (int i = 5; i< 12;i++)
			{
				szTmp.Format(_T("s%d"), i);
				FormatCurrency(ttlCost[i], tmpStr);
				rptDetail->SetValue(szTmp, tmpStr);
			}
		}
	//Page Footer
	//Report Footer
	UpdateData(false);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	m_rs->MoveFirst();
	EndWaitCursor();

	rpt.PrintPreview();
	
}

void CrptReportlistspatientcostsexceedtheadvanceDialog::OnExportInpatientpatientlistreport()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();	
	CString szSQL, tmpStr,tmpStr2 ,szFromDateLabel, szWhereDate, szWhere,szWhereObjects, szObjects;
	CString szDate, szSysDate;
	CString szFromDate, szToDate;
	CReport rpt; 
	UpdateData(true);
	szSysDate = pMF->GetSysDate(); 
	szFromDate = m_szFromDate;
	szToDate = m_szToDate;
	
	if (m_rs->IsEOF()) return;
	BeginWaitCursor();

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,12);
	xls.SetColumnWidth(2,9);
	xls.SetColumnWidth(3,25);
	xls.SetColumnWidth(4,14);
	xls.SetColumnWidth(5,20);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,12);
	xls.SetColumnWidth(8,12);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,12);
	xls.SetColumnWidth(11,12);
	xls.SetRowHeight(8,35);
		
	xls.SetCellMergedColumns(0,1,5);	
	xls.SetCellMergedColumns(0,2,5);	
	xls.SetCellMergedColumns(0,3,5);	
	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT | FMT_CENTER,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT | FMT_CENTER,true,12,0);
	xls.SetCellText(0, 3,m_wndDept.GetCurrent(1),FMT_TEXT |FMT_CENTER,true,10,0);
	xls.SetCellMergedColumns(0,5,12);	
	xls.SetCellText(0, 5, _T("\x42\xC1O \x43\xC1O \x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x43HI PH\xCD V\x1AF\x1EE2T QU\xC1 M\x1EE8\x43 T\x1EA0M \x1EE8NG"),FMT_TEXT|FMT_CENTER,true,16);
	xls.SetCellMergedColumns(0,6,12);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 6, tmpStr,FMT_TEXT|FMT_CENTER,true,12,0);
	
	
	int nRow = 8, age=0;
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Admitdate"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);	
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Oject"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);		
	TranslateString(_T("Card No"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Payable"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Insurance Receipt"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Total Cost"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Total Deposit"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Thua"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Thieu"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);
	

	int nIndex = 1;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail=NULL;
	long double grpCost[17];
	long double ttlCost[17];
	double cost = 0;
	CString szField, szAmount;
	TranslateString(_T("Total Group"), szAmount);

	for (int i =0; i <= 17; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}

		while(!m_rs->IsEOF())
		{
			if (m_szDeptKey.IsEmpty())
			{
				m_rs->GetValue(_T("deptid"), szNewLine);
				if(szNewLine != szOldLine && !szNewLine.IsEmpty()){				
					nRow++;					
					xls.SetCellText(0, nRow, szNewLine, FMT_TEXT,true);
					szOldLine = szNewLine;
					nIndex=1;
				}
			}

			nRow++;
			tmpStr.Format(_T("%d"), nIndex++);
			xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
			m_rs->GetValue(_T("admitdate"), tmpStr);			
			xls.SetCellText(1, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);			
			m_rs->GetValue(_T("docno"), tmpStr);
			xls.SetCellText(2, nRow,tmpStr, FMT_INTEGER);
			m_rs->GetValue(_T("pname"), tmpStr);
			xls.SetCellText(3, nRow,tmpStr, FMT_TEXT);		
			m_rs->GetValue(_T("Object"), tmpStr);
			xls.SetCellText(4, nRow,tmpStr, FMT_TEXT);
			m_rs->GetValue(_T("CardNo"), tmpStr);
			xls.SetCellText(5, nRow,tmpStr, FMT_TEXT);
			m_rs->GetValue(_T("Patdebt"), cost);
			ttlCost[6] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(6, nRow,tmpStr, FMT_NUMBER1);
			m_rs->GetValue(_T("Discount"), cost);	
			ttlCost[7] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(7, nRow,tmpStr, FMT_NUMBER1);
			m_rs->GetValue(_T("Cost"), cost);	
			ttlCost[8] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(8, nRow,tmpStr, FMT_NUMBER1);
			m_rs->GetValue(_T("TTucost"), cost);
			ttlCost[9] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(9, nRow,tmpStr, FMT_NUMBER1);
			m_rs->GetValue(_T("Thua"), cost);			
			ttlCost[10] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(10, nRow,tmpStr, FMT_NUMBER1);
			m_rs->GetValue(_T("Thieu"), cost);		
			ttlCost[11] += cost;
			tmpStr.Format(_T("%.2f"), cost);
			xls.SetCellText(11, nRow,tmpStr, FMT_NUMBER1);			
			m_rs->MoveNext();
		}
		if (ttlCost[7] > 0)
		{
			nRow++;
			xls.SetCellMergedColumns(1,nRow,5);
			xls.SetCellText(1,nRow,_T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT,TRUE);
			for (int i= 5;i<12;i++){				
				tmpStr.Format(_T("%.2f"), ttlCost[i]);
				xls.SetCellText(i,nRow,tmpStr,FMT_NUMBER1,TRUE);
			}
			
		}
	//Page Footer
	//Report Footer
	m_rs->MoveFirst();
	EndWaitCursor();
	xls.Save(_T("Exports\\Danh sach benh nhan dieu tri trong khoa vut muc tam ung.xls"));
	UpdateData(false);
	
}
