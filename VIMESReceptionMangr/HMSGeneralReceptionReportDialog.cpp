#include "HMSGeneralReceptionReportDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceptionReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceptionReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralReceptionReportDialog *pVw = (CHMSGeneralReceptionReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralReceptionReportDialog *pVw = (CHMSGeneralReceptionReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralReceptionReportDialog *pVw = (CHMSGeneralReceptionReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnAddHMSGeneralReceptionReportDialog();
} 
static int _OnEditHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnEditHMSGeneralReceptionReportDialog();
} 
static int _OnDeleteHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnDeleteHMSGeneralReceptionReportDialog();
} 
static int _OnSaveHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnSaveHMSGeneralReceptionReportDialog();
} 
static int _OnCancelHMSGeneralReceptionReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceptionReportDialog*)pWnd)->OnCancelHMSGeneralReceptionReportDialog();
} 
CHMSGeneralReceptionReportDialog::CHMSGeneralReceptionReportDialog(CWnd *pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 370;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSGeneralReceptionReportDialog::~CHMSGeneralReceptionReportDialog(){
}
void CHMSGeneralReceptionReportDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 80, 65, 170, 90);
	m_wndPrint.Create(this, _T("&Print"), 175, 65, 265, 90);
	m_wndClose.Create(this, _T("&Close"), 270, 65, 360, 90);

}
void CHMSGeneralReceptionReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
	//m_wndFromDate.SetMax(Cdate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(Cdate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(false);

}
void CHMSGeneralReceptionReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSGeneralReceptionReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSGeneralReceptionReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralReceptionReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralReceptionReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSGeneralReceptionReportDialog::SetMode(int nMode){
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
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSGeneralReceptionReportDialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralReceptionReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralReceptionReportDialog::OnToDateChange(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralReceptionReportDialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralReceptionReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralReceptionReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CHMSGeneralReceptionReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);	
} 

void CHMSGeneralReceptionReportDialog::OnPrint(bool bPreview){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSQL;
	CRecord rs(&pMF->m_db);
	if(!rpt.Init(_T("Reports/HMS/HR_GENERALRECEPTIONREPORT.RPT")) )
		return;

	UpdateData(true);
	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
//	rpt.GetReportHeader()->SetValue(_T("REPORTTITLE"), tmpStr);
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, 
			CDate::Convert(m_szFromDate,yyyymmdd,ddmmyyyy), 
			CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	szSQL.Format(_T(" SELECT 	he_roomid as roomid,") \
_T(" 	hrl_name as roomname,") \
_T(" 	sum(c1) as c1,") \
_T(" 	sum(c2) as c2,") \
_T(" 	sum(c3) as c3,") \
_T(" 	sum(c4) as c4,") \
_T(" 	sum(c5) as c5,") \
_T(" 	sum(c6) as c6,") \
_T(" 	sum(c7) as c7,") \
_T(" 	sum(c8) as c8,") \
_T(" 	sum(c9) as c9, ") \
_T(" 	sum(c1+c2+c3+c4+c5+c6+c7+c8+c9) as c10 ") \
_T(" FROM") \
_T(" (") \
_T("    SELECT he_deptid as deptid, he_roomid,") \
_T(" 	case when hd_object='1' then 1 else 0 end as c1,") \
_T(" 	case when hd_object='2' then 1 else 0 end as c2,") \
_T(" 	case when hd_object='3' then 1 else 0 end as c3,") \
_T(" 	case when hd_object='4' then 1 else 0 end as c4,") \
_T(" 	case when hd_object='5' then 1 else 0 end as c5,") \
_T(" 	case when hd_object='6' then 1 else 0 end as c6,") \
_T(" 	case when hd_object='7' then 1 else 0 end as c7,") \
_T(" 	case when hd_object='8' then 1 else 0 end as c8,") \
_T(" 	case when hd_object='9' then 1 else 0 end as c9") \
_T("    FROM hms_doc") \
_T("    LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
_T("    WHERE he_deptid='%s' AND CAST(he_examdate AS DATE) BETWEEN TO_date('%s', 'YYYY-MM-DD') AND TO_date('%s', 'YYYY-MM-DD') ") \
_T(" )  tbl") \
_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=deptid AND hrl_id=he_roomid)") \
_T(" GROUP by he_roomid, hrl_name") \
_T(" ORDER BY roomid"), pMF->m_szDept, m_szFromDate, m_szToDate);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	//Report Detail
	CReportSection* rptDetail;
	long nTotal[10];
	for (int i =0; i < 10; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);
		rs.GetValue(_T("c1"), tmpStr);
		nTotal[0] += ToLong(tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("c2"), tmpStr);
		nTotal[1] += ToLong(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("c3"), tmpStr);
		nTotal[2] += ToLong(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("c4"), tmpStr);
		nTotal[3] += ToLong(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("c5"), tmpStr);
		nTotal[4] += ToLong(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("c6"), tmpStr);
		nTotal[5] += ToLong(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("c7"), tmpStr);
		nTotal[6] += ToLong(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("c8"), tmpStr);
		nTotal[7] += ToLong(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("c9"), tmpStr);
		nTotal[8] += ToLong(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("c10"), tmpStr);
		nTotal[9] += ToLong(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.MoveNext();
	}
	if(nTotal[9] > 0)
	{
		rptDetail = rpt.AddDetail(0);
		TranslateString(_T("Total"), tmpStr);
		rptDetail->SetValue(_T("roomname"), tmpStr);
		for (int i =0; i < 10; i++){
			tmpStr.Format(_T("%d"), i+1);
			rptDetail->SetValue(tmpStr, ToString(nTotal[i]));
		}
	}
	//Page Footer
	//Report Footer
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//rpt.GetReportFooter()->SetValue(_T("ReportBy"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
void CHMSGeneralReceptionReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSGeneralReceptionReportDialog::OnAddHMSGeneralReceptionReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralReceptionReportDialog::OnEditHMSGeneralReceptionReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralReceptionReportDialog::OnDeleteHMSGeneralReceptionReportDialog(){
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
 		OnCancelHMSGeneralReceptionReportDialog(); 
 	}
	return 0;
}
int CHMSGeneralReceptionReportDialog::OnSaveHMSGeneralReceptionReportDialog(){
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
 		//OnHMSGeneralReceptionReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralReceptionReportDialog::OnCancelHMSGeneralReceptionReportDialog(){
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
int CHMSGeneralReceptionReportDialog::OnHMSGeneralReceptionReportDialogListLoadData(){
	return 0;
}
