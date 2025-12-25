#include "HMSGeneralReceivableEFReportDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralReceivableEFReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralReceivableEFReportDialog *pVw = (CHMSGeneralReceivableEFReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralReceivableEFReportDialog *pVw = (CHMSGeneralReceivableEFReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralReceivableEFReportDialog *pVw = (CHMSGeneralReceivableEFReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnAddHMSGeneralReceivableEFReportDialog();
} 
static int _OnEditHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnEditHMSGeneralReceivableEFReportDialog();
} 
static int _OnDeleteHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnDeleteHMSGeneralReceivableEFReportDialog();
} 
static int _OnSaveHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnSaveHMSGeneralReceivableEFReportDialog();
} 
static int _OnCancelHMSGeneralReceivableEFReportDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralReceivableEFReportDialog*)pWnd)->OnCancelHMSGeneralReceivableEFReportDialog();
} 
CHMSGeneralReceivableEFReportDialog::CHMSGeneralReceivableEFReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 370;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CHMSGeneralReceivableEFReportDialog::~CHMSGeneralReceivableEFReportDialog(){
}
void CHMSGeneralReceivableEFReportDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 360, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 180, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 30, 265, 55);
	m_wndToDate.Create(this,270, 30, 355, 55); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 80, 65, 170, 90);
	m_wndPrint.Create(this, _T("&Print"), 175, 65, 265, 90);
	m_wndClose.Create(this, _T("&Close"), 270, 65, 360, 90);

}
void CHMSGeneralReceivableEFReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
//	m_wndFromDate.SetMax(Cdate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(Cdate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(false);
}
void CHMSGeneralReceivableEFReportDialog::OnSetWindowEvents(){
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
void CHMSGeneralReceivableEFReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSGeneralReceivableEFReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralReceivableEFReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralReceivableEFReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSGeneralReceivableEFReportDialog::SetMode(int nMode){
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
/*void CHMSGeneralReceivableEFReportDialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralReceivableEFReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralReceivableEFReportDialog::OnToDateChange(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralReceivableEFReportDialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralReceivableEFReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralReceivableEFReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 

void CHMSGeneralReceivableEFReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);
} 
void CHMSGeneralReceivableEFReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 

void CHMSGeneralReceivableEFReportDialog::OnPrint(bool bPreview){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSQL;
	CRecord rs(&pMF->m_db);
	int nItem = 1;
	if(!rpt.Init(_T("Reports/HMS/HR_GENERALRECEIVEABLEEXAMFEE.RPT")) )
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

	szSQL.Format(_T(" SELECT he_roomid as roomid,") \
_T(" 	hrl_name as roomname,") \
_T(" 	examtype as examtype,") \
_T("	sum(numexam) as totalexam, ") \
_T(" 	sum(numexam*price) as money") \
_T(" FROM") \
_T(" (") \
_T(" SELECT 	he_deptid, he_roomid,") \
_T(" 	hfl_name as examtype,") \
_T(" 	1 as numexam,") \
_T(" 	hfl_servprice as price") \
_T(" FROM hms_doc ") \
_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno) ") \
_T(" LEFT JOIN hms_object ON(ho_id=hd_object) ") \
_T(" LEFT JOIN hms_fee_list ON(hfl_groupid='D0000' AND he_examtype=hfl_feeid)") \
_T(" WHERE he_hasfee='Y'  AND ho_type='S' ") \
_T(" 	AND he_deptid='%s' ") \
_T(" 	AND CAST(he_examdate AS DATE) between TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s', 'YYYY-MM-DD')") \
_T(" ) as tbl") \
_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=he_deptid AND hrl_id=he_roomid)") \
_T(" GROUP BY roomid, examtype, roomname ") \
_T(" ORDER BY roomid, examtype, roomname") , pMF->m_szDept, m_szFromDate, m_szToDate);
//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	//Report Detail
	CReportSection* rptDetail;
	CString oldRoomID, newRoomID;
	long nTotal[2];
	for (int i =0; i < 2; i++)
		nTotal[i] = 0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();

		rs.GetValue(_T("roomid"), newRoomID);
		if(oldRoomID != newRoomID)
		{
			tmpStr.Format(_T("%d"), nItem++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("roomname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			oldRoomID = newRoomID;
		}
		else
		{
			rptDetail->SetValue(_T("1"), _T(""));
			rptDetail->SetValue(_T("2"), _T(" - "));
		}
		rs.GetValue(_T("examtype"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("totalexam"), tmpStr);
		nTotal[0] += ToLong(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("money"), tmpStr);
		nTotal[1] += ToLong(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.MoveNext();
	}
	if(nTotal[9] > 0)
	{
		rptDetail = rpt.AddDetail(0);
		TranslateString(_T("Total"), tmpStr);
		rptDetail->SetValue(_T("1"), _T(""));
		rptDetail->SetValue(_T("2"), _T(""));
		rptDetail->SetValue(_T("3"), tmpStr);
		//FormatCurrency(nTotal[0], tmpStr);
		tmpStr.Format(_T("%d"), nTotal[0]);
		rptDetail->SetValue(_T("4"), tmpStr);
		tmpStr.Format(_T("%ld"), nTotal[1]);
		rptDetail->SetValue(_T("5"), tmpStr);		
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
int CHMSGeneralReceivableEFReportDialog::OnAddHMSGeneralReceivableEFReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralReceivableEFReportDialog::OnEditHMSGeneralReceivableEFReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralReceivableEFReportDialog::OnDeleteHMSGeneralReceivableEFReportDialog(){
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
 		OnCancelHMSGeneralReceivableEFReportDialog(); 
 	}
	return 0;
}
int CHMSGeneralReceivableEFReportDialog::OnSaveHMSGeneralReceivableEFReportDialog(){
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
 		//OnHMSGeneralReceivableEFReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralReceivableEFReportDialog::OnCancelHMSGeneralReceivableEFReportDialog(){
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
int CHMSGeneralReceivableEFReportDialog::OnHMSGeneralReceivableEFReportDialogListLoadData(){
	return 0;
}
