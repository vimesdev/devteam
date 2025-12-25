#include "rptOutPatientListReport.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptOutPatientListReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptOutPatientListReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptOutPatientListReport *pVw = (CrptOutPatientListReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptOutPatientListReport *pVw = (CrptOutPatientListReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptOutPatientListReport *pVw = (CrptOutPatientListReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnAddrptOutPatientListReport();
} 
static int _OnEditrptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnEditrptOutPatientListReport();
} 
static int _OnDeleterptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnDeleterptOutPatientListReport();
} 
static int _OnSaverptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnSaverptOutPatientListReport();
} 
static int _OnCancelrptOutPatientListReportFnc(CWnd *pWnd){
	 return ((CrptOutPatientListReport*)pWnd)->OnCancelrptOutPatientListReport();
} 
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptOutPatientListReport* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CrptOutPatientListReport *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CrptOutPatientListReport *)pWnd)->OnICDAddNew();
}*/
CrptOutPatientListReport::CrptOutPatientListReport(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 95;
	SetDefaultValues();
}
CrptOutPatientListReport::~CrptOutPatientListReport(){
}
void CrptOutPatientListReport::OnCreateComponents(){
	m_wndrptOutPatientListReport.Create(this, _T("Report Parameters"), 5, 5, 350, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54);
	m_wndICDLabel.Create(this, _T("ICD"), 10, 59, 90, 84);
	m_wndICD.Create(this,95, 59, 345, 84); 
	m_wndPrint.Create(this, _T("&Preview"), 195, 95, 270, 120);
	m_wndExport.Create(this, _T("&Export"), 275, 95, 350, 120);	
}
void CrptOutPatientListReport::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1,2, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	
	m_wndICD.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndICD.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

}
void CrptOutPatientListReport::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);

	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);

	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CrptOutPatientListReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);

}
void CrptOutPatientListReport::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptOutPatientListReport::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptOutPatientListReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CrptOutPatientListReport::SetMode(int nMode){
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
/*void CrptOutPatientListReport::OnFromDateChange(){
	
} */
/*void CrptOutPatientListReport::OnFromDateSetfocus(){
	
} */
/*void CrptOutPatientListReport::OnFromDateKillfocus(){
	
} */
int CrptOutPatientListReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptOutPatientListReport::OnToDateChange(){
	
} */
/*void CrptOutPatientListReport::OnToDateSetfocus(){
	
} */
/*void CrptOutPatientListReport::OnToDateKillfocus(){
	
} */
int CrptOutPatientListReport::OnToDateCheckValue(){
	return 0;
} 

void CrptOutPatientListReport::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptOutPatientListReport::OnICDSelendok(){
	 
}
/*void CrptOutPatientListReport::OnICDSetfocus(){
	
}*/
/*void CrptOutPatientListReport::OnICDKillfocus(){
	
}*/
long CrptOutPatientListReport::OnICDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
		szWhere.Format(_T(" WHERE hi_icd ='%s' "), m_szICDKey);
	};
	m_wndICD.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd %s ") , szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptOutPatientListReport::OnICDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptOutPatientListReport::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	szSQL.Format(_T(" SELECT patientno, pname, age, sex, dtladdr, cardno,sum(TreatDay) as TreaDay,sum(NumberCount) as NumberCount ") \
	_T(" FROM (") \
	_T(" 	SELECT distinct hd_patientno as patientno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  ") \
	_T(" 		hms_getage(date(hd_admitdate), hp_birthdate) as age, sys_sel_getname('sys_sex', ") \
	_T(" 		hp_sex) as sex, hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr, hc_cardno as cardno,") \
	_T(" 		hop_treatdays as TreatDay, 1 as NumberCount,  hd_icd, hd_diagnostic") \
	_T(" 	FROM hms_patient ") \
	_T(" 	LEFT JOIN hms_doc ON (hd_patientno=hp_patientno) ") \
	_T(" 	LEFT JOIN hms_card ON(hc_patientno=hp_patientno and hc_idx=hd_cardidx) ") \
	_T(" 	INNER JOIN hms_outpatient ON(hop_docno=hd_docno)") \
	_T(" 	WHERE date(hd_admitdate) BETWEEN date('%s') AND date('%s') AND hop_deptid ='KB'") \
	_T(" ) As Tbl") \
	_T(" GROUP BY patientno, pname, age, sex, dtladdr, cardno ") \
	_T(" ORDER BY patientno, pname, age, sex, dtladdr, cardno"),m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	_fmsg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_OUTPATIENTLIST.RPT")) )
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
//	rpt.GetPageHeader()->SetValue(_T("pageno"), _T(" Chua co"));
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 0;
	while(!rs.IsEOF())
	{
		//rpt.AddDetail();
		rptDetail = rpt.AddDetail();
		nIndex++;	
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);		
		rs.GetValue(_T("patientno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("TreaDay"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("NumberCount"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CrptOutPatientListReport::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	if(!m_szICDKey.IsEmpty())
		szWhere.Format(_T(" and hd_icd ='%s' "), m_szICDKey);
	szSQL.Format(_T(" SELECT patientno,docno, pname, age, sex,Admitdate, dtladdr, cardno,(select hrl_name from hms_roomlist where hrl_deptid='KB' and hrl_id=hop_roomid) as RoomName, ") \
	_T("	hd_icd, hd_diagnostic,sum(TreatDay) as TreaDay,sum(NumberCount) as NumberCount ") \
	_T(" FROM (") \
	_T(" 	SELECT distinct hd_patientno as patientno,hd_docno as docno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,  ") \
	_T(" 		hms_getage(date(hd_admitdate), hp_birthdate) as age, sys_sel_getname('sys_sex', ") \
	_T(" 		hp_sex) as sex, hp_dtladdr || '-' || hms_getaddress(hp_provid,hp_distid,hp_villid) as  dtladdr, hc_cardno as cardno,") \
	_T(" 		hop_treatdays as TreatDay, 1 as NumberCount,  hd_icd, hd_diagnostic,date(hd_admitdate) as Admitdate,hop_roomid") \
	_T(" 	FROM hms_patient ") \
	_T(" 	LEFT JOIN hms_doc ON (hd_patientno=hp_patientno) ") \
	_T(" 	LEFT JOIN hms_card ON(hc_patientno=hp_patientno and hc_idx=hd_cardidx) ") \
	_T(" 	INNER JOIN hms_outpatient ON(hop_docno=hd_docno)") \
	_T(" 	WHERE date(hd_admitdate) BETWEEN date('%s') AND date('%s') AND hop_deptid ='KB' %s") \
	_T(" ) As Tbl") \
	_T(" GROUP BY patientno,docno,admitdate, pname, age, sex, dtladdr, cardno,hd_icd, hd_diagnostic, roomName ") \
	_T(" ORDER BY roomname,patientno, pname, age, sex, dtladdr, cardno,admitdate"),m_szFromDate, m_szToDate, szWhere);
	
	
	BeginWaitCursor();
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	
	
	

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	
	xls.SetColumnWidth(0,5);
	xls.SetColumnWidth(1,12);
	xls.SetColumnWidth(2,9);
	xls.SetColumnWidth(3,9);
	xls.SetColumnWidth(4,20);
	xls.SetColumnWidth(5,7);
	xls.SetColumnWidth(6,8);
	xls.SetColumnWidth(7,40);
	xls.SetColumnWidth(8,15);
	xls.SetColumnWidth(9,35);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,10);
	
	xls.SetRowHeight(8,30);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname,FMT_TEXT,true,12,0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name,FMT_TEXT,true,12,0);

	xls.SetCellMergedColumns(0,5,11);	
	xls.SetCellText(0, 5, _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N \x110I\x1EC0U TR\x1ECA NGO\x1EA0I TR\xDA"),FMT_TEXT,true,12,0);
	xls.SetCellMergedColumns(0,6,12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 6, tmpStr,FMT_TEXT,true,12,0);
	
	
	int nRow = 8, age=0;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT,true);	
	TranslateString(_T("Admit Date"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("M\xE3 \x62\x1EC7nh nh\xE2n"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellText(3,nRow,_T("M\xE3 HS"), FMT_TEXT,true);
	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("Age"), tmpStr);	
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);
	TranslateString(_T("\x110\x1ECB\x61 \x63h\x1EC9"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("Card"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellText(9,nRow,_T("\x43h\x1EA5n \x111o\xE1n"),FMT_TEXT,true);
	TranslateString(_T("T\x1ED5ng s\x1ED1 ng\xE0y \x110T"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);	
	TranslateString(_T("S\x1ED1 l\x1EA7n \x110T"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT,true);
	
	CString szOldLine, szNewLine;
	CString szOldPatientNo, szNewPatientNo;
	int nIndex = 0, nSTT;
	int c[11], m=0;
	for(int i =0; i<12;i++)
	{
		c[i]=0;
	}

	while(!rs.IsEOF())
	{	
		rs.GetValue(_T("roomName"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			nRow++;
			xls.MergeCell(nRow,2,nRow,6);
			xls.SetCellText(1, nRow,szNewLine,FMT_TEXT,true);
			szOldLine = szNewLine;
			//nIndex=1;
		}

		rs.GetValue(_T("PatientNo"), szNewPatientNo);
		if(szNewPatientNo != szOldPatientNo && !szNewPatientNo.IsEmpty())
		{			
			if(c[10]>0)
			{				
				nRow++;				
				xls.MergeCell(nRow,2,nRow,7);				
				xls.SetCellText(2, nRow,_T("\x43\x1ED9ng:"),FMT_TEXT,true);
				tmpStr.Format(_T("%d"), c[10]);
				xls.SetCellText(10, nRow,tmpStr,FMT_NUMBER1,true);
				tmpStr.Format(_T("%d"), c[11]);
				xls.SetCellText(11, nRow,tmpStr,FMT_NUMBER1,true);				
			}
			szOldPatientNo = szNewPatientNo;			
			xls.MergeCell(nRow-nSTT,0,nRow,0);

			c[10]=0;
			c[11]=0;
			nSTT=0;			
			nIndex++;
		}
		
		nRow++;
		nSTT++;	
		
		
		tmpStr.Format(_T("%d"), nIndex);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("Admitdate"), tmpStr);
		xls.SetCellText(1, nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("PatientNo"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("Docno"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dtladdr"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);
		tmpStr.Format(_T("%s [%s]"),rs.GetValue(_T("hd_diagnostic")),rs.GetValue(_T("hd_icd")));
		xls.SetCellText(9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("TreaDay"), m);
		c[10] +=m;
		tmpStr.Format(_T("%d"), m);
		xls.SetCellText(10, nRow, tmpStr, FMT_INTEGER);
		rs.GetValue(_T("NumberCount"), m);
		c[11] +=m;
		tmpStr.Format(_T("%d"), m);
		xls.SetCellText(11, nRow, tmpStr, FMT_INTEGER);
		rs.MoveNext();
	}
	
	
	xls.Save(_T("Exports\\Bao cao danh sach benh nhan lam dieu tri ngoai tru.xls"));	
	EndWaitCursor();	
	
} 

void CrptOutPatientListReport::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CrptOutPatientListReport::OnAddrptOutPatientListReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptOutPatientListReport::OnEditrptOutPatientListReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptOutPatientListReport::OnDeleterptOutPatientListReport(){
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
 		OnCancelrptOutPatientListReport(); 
 	}
	return 0;
}
int CrptOutPatientListReport::OnSaverptOutPatientListReport(){
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
 		//OnrptOutPatientListReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptOutPatientListReport::OnCancelrptOutPatientListReport(){
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
int CrptOutPatientListReport::OnrptOutPatientListReportListLoadData(){
	return 0;
}
