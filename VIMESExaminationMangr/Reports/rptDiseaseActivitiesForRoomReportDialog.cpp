#include "rptDiseaseActivitiesForRoomReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptDiseaseActivitiesForRoomReportDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((rptDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptDiseaseActivitiesForRoomReportDialog *pVw = (rptDiseaseActivitiesForRoomReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptDiseaseActivitiesForRoomReportDialog *pVw = (rptDiseaseActivitiesForRoomReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptDiseaseActivitiesForRoomReportDialog *pVw = (rptDiseaseActivitiesForRoomReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((rptDiseaseActivitiesForRoomReportDialog*)pWnd)->OnAddrptDiseaseActivitiesForRoomReportDialog();
} 
static int _OnEditrptDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((rptDiseaseActivitiesForRoomReportDialog*)pWnd)->OnEditrptDiseaseActivitiesForRoomReportDialog();
} 
static int _OnDeleterptDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((rptDiseaseActivitiesForRoomReportDialog*)pWnd)->OnDeleterptDiseaseActivitiesForRoomReportDialog();
} 
static int _OnSaverptDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((rptDiseaseActivitiesForRoomReportDialog*)pWnd)->OnSaverptDiseaseActivitiesForRoomReportDialog();
} 
static int _OnCancelrptDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((rptDiseaseActivitiesForRoomReportDialog*)pWnd)->OnCancelrptDiseaseActivitiesForRoomReportDialog();
} 
rptDiseaseActivitiesForRoomReportDialog::rptDiseaseActivitiesForRoomReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 409;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
rptDiseaseActivitiesForRoomReportDialog::~rptDiseaseActivitiesForRoomReportDialog(){
}
void rptDiseaseActivitiesForRoomReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 395, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 60, 110, 85);
	m_wndRoom.Create(this,115, 60, 395, 85); 
	m_wndPrintPreview.Create(this, _T("&Export XLS"), 150, 95, 230, 120);
	m_wndPrint.Create(this, _T("&Run"), 235, 95, 315, 120);
	m_wndClose.Create(this, _T("&Close"), 320, 95, 400, 120);

}
void rptDiseaseActivitiesForRoomReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_szFromDate = m_szToDate = pMF->GetSysDate();

}
void rptDiseaseActivitiesForRoomReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
}
void rptDiseaseActivitiesForRoomReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void rptDiseaseActivitiesForRoomReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptDiseaseActivitiesForRoomReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptDiseaseActivitiesForRoomReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();

}
int rptDiseaseActivitiesForRoomReportDialog::SetMode(int nMode){
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
/*void rptDiseaseActivitiesForRoomReportDialog::OnFromDateChange(){
	
} */
/*void rptDiseaseActivitiesForRoomReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptDiseaseActivitiesForRoomReportDialog::OnFromDateKillfocus(){
	
} */
int rptDiseaseActivitiesForRoomReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptDiseaseActivitiesForRoomReportDialog::OnToDateChange(){
	
} */
/*void rptDiseaseActivitiesForRoomReportDialog::OnToDateSetfocus(){
	
} */
/*void rptDiseaseActivitiesForRoomReportDialog::OnToDateKillfocus(){
	
} */
int rptDiseaseActivitiesForRoomReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptDiseaseActivitiesForRoomReportDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptDiseaseActivitiesForRoomReportDialog::OnRoomSelendok(){
	 
}
/*void rptDiseaseActivitiesForRoomReportDialog::OnRoomSetfocus(){
	
}*/
/*void rptDiseaseActivitiesForRoomReportDialog::OnRoomKillfocus(){
	
}*/
long rptDiseaseActivitiesForRoomReportDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0){
		szWhere.Format(_T(" AND hrl_id=%ld "), ToLong(m_szRoomKey));
	};
	if(!pMF->m_UserInfo.su_hms_xroom.IsEmpty())
		szWhere.AppendFormat(_T(" AND hrl_id in(%s) "), pMF->m_UserInfo.su_hms_xroom);

	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s' %s ORDER BY hrl_id "), pMF->m_szDept, szWhere);
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	if(nCount == 1){
		rs.GetValue(_T("id"), m_szRoomKey );
	}
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptDiseaseActivitiesForRoomReportDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptDiseaseActivitiesForRoomReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	if(!m_szRoomKey.IsEmpty())
		szWhere.Format(_T(" and he_roomid=%d"), str2int(m_szRoomKey));

	szSQL.Format(_T(" SELECT icd10, hi_name as disease, sum(exampat) as exampatient") \
_T(" FROM") \
_T(" (") \
_T(" 	SELECT he_icd10 as icd10, 1 as exampat") \
_T(" 	FROM hms_exam") \
_T(" 	WHERE 	he_status='T' ") \
_T(" 		and date(he_examdate) BETWEEN date('%s') and date('%s') %s") \
_T(" ) as tbl") \
_T(" LEFT JOIN hms_icd ON(hi_icd=icd10)") \
_T(" GROUP BY icd10, disease ORDER BY icd10 ") , m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
	
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 40);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 10);
	//xls.SetCellMergedColumns(0, 0, 5);
	//xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellText(0, 0, _T("\x42ÁO \x43ÁO TÌNH HÌNH \x42\x1EC6NH T\x1EACT PHÒNG KHÁM"),FMT_TEXT,true,18,0);
	tmpStr.Format(_T("T\x1EEB ngày  %s  \x111\x1EBFn ngày  %s "), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 1, tmpStr,FMT_TEXT, false, 10,0);
	
	tmpStr.Format(_T("Phòng khám: %s"), m_wndRoom.GetCurrent(1));

	xls.SetCellText(0, 2, tmpStr,FMT_TEXT,true,12,0);
	
	int nRow = 6;
	

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT, true, 10, 1);
	
	xls.SetCellText(1, nRow, _T("Mã \x62\x1EC7nh"), FMT_TEXT, true, 10, 1);
	
	xls.SetCellText(2, nRow, _T("Tên \x62\x1EC7nh"), FMT_TEXT, true, 10, 1);
	
	xls.SetCellText(3, nRow, _T("TS \x62\x1EC7nh nhân"), FMT_TEXT, true, 10, 1);
	
	xls.SetCellText(4, nRow, _T("Ghi \x63hú"), FMT_TEXT, true, 10, 1);
	
	int nIndex = 0;
	long nTotalPatient = 0;
	while(!rs.IsEOF())
	{
		nIndex++;	
		nRow++;
		tmpStr.Format(_T("%d"), nIndex);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1, false, 10, 1);
		rs.GetValue(_T("icd10"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, false, 10, 1);
		rs.GetValue(_T("disease"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT, false, 10, 1);
		rs.GetValue(_T("exampatient"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1, false, 10, 1);
		nTotalPatient += str2int(tmpStr);
		xls.SetCellText(4, nRow, _T(""), FMT_TEXT, false, 10, 1);
		
		rs.MoveNext();
	}
	//Report Footer
	nRow++;
	tmpStr = _T("T\x1ED5ng s\x1ED1");
	xls.SetCellText(0, nRow, _T(""), FMT_TEXT, true, 12, 1);
	xls.SetCellText(1, nRow, _T(""), FMT_TEXT, true, 12, 1);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT, true, 12, 1);
	tmpStr.Format(_T("%ld"), nTotalPatient);
	xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1, true, 12, 1);
	xls.SetCellText(4, nRow, _T(""), FMT_TEXT, true, 12, 1);
	xls.Save(_T("Exports\\BAOCAOTHEOMATBENH.XLS"));

} 
void rptDiseaseActivitiesForRoomReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	UpdateData(true);
	CReport rpt; 
	if(!m_szRoomKey.IsEmpty())
		szWhere.Format(_T(" and he_roomid=%d"), str2int(m_szRoomKey));

	szSQL.Format(_T(" SELECT icd10, hi_name as disease, sum(exampat) as exampatient") \
_T(" FROM") \
_T(" (") \
_T(" 	SELECT he_icd10 as icd10, 1 as exampat") \
_T(" 	FROM hms_exam") \
_T(" 	WHERE 	he_status='T' ") \
_T(" 		and date(he_examdate) BETWEEN date('%s') and date('%s') %s") \
_T(" ) as tbl") \
_T(" LEFT JOIN hms_icd ON(hi_icd=icd10)") \
_T(" GROUP BY icd10, disease ORDER BY icd10") , m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
	
	if(!rpt.Init(_T("Reports/HMS/HE_DISEASEACTIVITIESFORROOMREPORT.RPT")) )
	{
		return ;
	}
	//Report Header
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	rpt.GetReportHeader()->SetValue(_T("RoomName"), m_wndRoom.GetCurrent(1));
//	rpt.GetPageHeader()->SetValue(_T("pageno"), _T(" Chua co"));
	//Report Detail
	CReportSection* rptDetail = NULL;
	int nIndex = 0;
	long nTotalPatient = 0;
	while(!rs.IsEOF())
	{
		//rpt.AddDetail();
		rptDetail = rpt.AddDetail();
		nIndex++;	
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("disease"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("exampatient"), tmpStr);
		nTotalPatient += str2int(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.MoveNext();
	}
	//Report Footer
	tmpStr.Format(_T("%ld"), nTotalPatient);
	rpt.GetReportFooter()->SetValue(_T("Sum"), tmpStr);
	rpt.GetReportFooter()->Format(_T("PrintDate"),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.PrintPreview();



} 
void rptDiseaseActivitiesForRoomReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int rptDiseaseActivitiesForRoomReportDialog::OnAddrptDiseaseActivitiesForRoomReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptDiseaseActivitiesForRoomReportDialog::OnEditrptDiseaseActivitiesForRoomReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptDiseaseActivitiesForRoomReportDialog::OnDeleterptDiseaseActivitiesForRoomReportDialog(){
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
 		OnCancelrptDiseaseActivitiesForRoomReportDialog(); 
 	}
	return 0;
}
int rptDiseaseActivitiesForRoomReportDialog::OnSaverptDiseaseActivitiesForRoomReportDialog(){
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
 		//OnrptDiseaseActivitiesForRoomReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptDiseaseActivitiesForRoomReportDialog::OnCancelrptDiseaseActivitiesForRoomReportDialog(){
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
int rptDiseaseActivitiesForRoomReportDialog::OnrptDiseaseActivitiesForRoomReportDialogListLoadData(){
	return 0;
}
