#include "stdafx.h"
#include "EMRoom51ReportByDoctor.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEEMRoom51ReportByDoctor *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEEMRoom51ReportByDoctor *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEEMRoom51ReportByDoctor *pVw = (CEEMRoom51ReportByDoctor *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEEMRoom51ReportByDoctor *pVw = (CEEMRoom51ReportByDoctor *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEEMRoom51ReportByDoctor* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CEEMRoom51ReportByDoctor *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CEEMRoom51ReportByDoctor *)pWnd)->OnObjectAddNew();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEEMRoom51ReportByDoctor *)pWnd)->OnRoomLoadData();
}
static int _OnAddCEEMRoom51ReportByDoctorFnc(CWnd *pWnd){
	 return ((CEEMRoom51ReportByDoctor*)pWnd)->OnAddCEEMRoom51ReportByDoctor();
} 
static int _OnEditCEEMRoom51ReportByDoctorFnc(CWnd *pWnd){
	 return ((CEEMRoom51ReportByDoctor*)pWnd)->OnEditCEEMRoom51ReportByDoctor();
} 
static int _OnDeleteCEEMRoom51ReportByDoctorFnc(CWnd *pWnd){
	 return ((CEEMRoom51ReportByDoctor*)pWnd)->OnDeleteCEEMRoom51ReportByDoctor();
} 
static int _OnSaveCEEMRoom51ReportByDoctorFnc(CWnd *pWnd){
	 return ((CEEMRoom51ReportByDoctor*)pWnd)->OnSaveCEEMRoom51ReportByDoctor();
} 
static int _OnCancelCEEMRoom51ReportByDoctorFnc(CWnd *pWnd){
	 return ((CEEMRoom51ReportByDoctor*)pWnd)->OnCancelCEEMRoom51ReportByDoctor();
} 
CEEMRoom51ReportByDoctor::CEEMRoom51ReportByDoctor(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 135;
	SetDefaultValues();
}
CEEMRoom51ReportByDoctor::~CEEMRoom51ReportByDoctor()
{
}
void CEEMRoom51ReportByDoctor::OnCreateComponents()
{
	m_wndExaminationListReport.Create(this, _T("Report Parameters"), 5, 5, 580, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 80, 55);
	m_wndFromDate.Create(this,85, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 296, 30, 366, 55);
	m_wndToDate.Create(this,370, 30, 575, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 80, 85);
	m_wndObject.Create(this,85, 60, 575, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 80, 115);
	m_wndRoom.Create(this,85, 90, 575, 115); 
	m_wndPrint.Create(this, _T("&Print"), 371, 125, 469, 150);
	m_wndExport.Create(this, _T("&Export Excel"), 477, 125, 575, 150);
}
void CEEMRoom51ReportByDoctor::OnInitializeComponents()
{
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CEEMRoom51ReportByDoctor::OnSetWindowEvents()
{
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//AddEvent(1, _T("Add	Ctrl+A"), _OnAddCEEMRoom51ReportByDoctorFnc, 0, 'A', VK_CONTROL);
	//AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCEEMRoom51ReportByDoctorFnc, 0, 'E', VK_CONTROL);
	//AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCEEMRoom51ReportByDoctorFnc, 0, 'D', VK_CONTROL);
	//AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCEEMRoom51ReportByDoctorFnc, 0, 'S', VK_CONTROL);
	//AddEvent(0, _T("-"));
	//AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCEEMRoom51ReportByDoctorFnc, 0, 'T', VK_CONTROL);

	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = szSysDate;
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
//	UpdateData(false);
	SetMode(VM_EDIT);


}
void CEEMRoom51ReportByDoctor::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CEEMRoom51ReportByDoctor::GetDataToScreen(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEEMRoom51ReportByDoctor::GetScreenToData(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();

}
void CEEMRoom51ReportByDoctor::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();

}
int CEEMRoom51ReportByDoctor::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame  *pMF = (CHMSMainFrame  *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 0, 1,2, -1);
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
/*void CEEMRoom51ReportByDoctor::OnFromDateChange(){
	
} */
/*void CEEMRoom51ReportByDoctor::OnFromDateSetfocus(){
	
} */
/*void CEEMRoom51ReportByDoctor::OnFromDateKillfocus(){
	
} */
int CEEMRoom51ReportByDoctor::OnFromDateCheckValue(){
	return 0;
} 
/*void CEEMRoom51ReportByDoctor::OnToDateChange(){
	
} */
/*void CEEMRoom51ReportByDoctor::OnToDateSetfocus(){
	
} */
/*void CEEMRoom51ReportByDoctor::OnToDateKillfocus(){
	
} */
int CEEMRoom51ReportByDoctor::OnToDateCheckValue(){
	return 0;
} 

long CEEMRoom51ReportByDoctor::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hrl_id id, hrl_name name FROM hms_roomlist WHERE hrl_deptid = '%s' ORDER BY hrl_id"), pMF->GetCurrentDepartmentID());
	int nCount = rs.ExecSQL(szSQL);
	m_wndRoom.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CEEMRoom51ReportByDoctor::OnPrintSelect(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();

	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate;
	int nIdx = 0, nDrug = 0, nInward = 0;
	double nAmount = 0, nTotal = 0;
	szSQL = GetQueryString();
	//QueryOpener(szSQL);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	if (!rpt.Init(_T("Reports/HMS/HE_TONGHOPKHAMTHEOBACSI.rpt")))
		return;
	int nRes = rs.GetRecordCount();
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	FormatCurrency(nRes, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TotalPatient"), tmpStr);
	CReportSection *rptDetail;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
		
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		
		rs.GetValue(_T("pname"), tmpStr);	
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("yob"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("rank"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("workplace"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		rs.GetValue(_T("diagno"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("drugdeliver"), tmpStr);
		//_debug(_T("drug:%s"), tmpStr);
		if (!tmpStr.IsEmpty())
			nDrug++;
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("inward"), tmpStr);
		//_debug(_T("in:%s"), tmpStr);
		if (!tmpStr.IsEmpty())
			nInward++;
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.MoveNext();
	}
	tmpStr.Format(_T("%d"), nDrug);
	rpt.GetReportHeader()->SetValue(_T("Drug"), tmpStr);
	tmpStr.Format(_T("%d"), nInward);
	rpt.GetReportHeader()->SetValue(_T("Inward"), tmpStr);
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CEEMRoom51ReportByDoctor::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;nRow = 6;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_msg(_T("%s"), szSQL);
		if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 4);	xls.SetColumnWidth(1, 20);	xls.SetColumnWidth(2, 9);	xls.SetColumnWidth(3, 17);	xls.SetColumnWidth(4, 19);	xls.SetColumnWidth(5, 11);	xls.SetColumnWidth(6, 22);	xls.SetColumnWidth(7, 7);		
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 2, _T("TH\x1ED0NG K\xCA KH\xC1M TH\x45O T\xCAN \x42\xC1\x43 S\x128"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 13);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 4, _T("\x42\xE1\x63 s\x129 kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 4, _T("S\x1ED1 l\x1B0\x1EE3ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 4, _T("\x43ho \x111\x1A1n \x111i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 4, _T("V\x1EC1 nh\xE0 kh\xF4ng \x64\xF9ng thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 4, _T("Nh\x1EADp vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 4, _T("\x42\xE1\x63 s\x129 k\xEA \x111\x1A1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 4, _T("S\x1ED1 \x111\x1A1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 11);	xls.SetMerge(3, 3, 0, 11);
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_NUMBER1 | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("bacsi_kham_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("tongsokham")), FMT_INTEGER);
		xls.SetCellText(3, nRow, rs.GetValue(_T("tongcho_don")), FMT_INTEGER);
		xls.SetCellText(4, nRow, rs.GetValue(_T("tongvenha_khongdon")), FMT_INTEGER);
		xls.SetCellText(5, nRow, rs.GetValue(_T("tongnhap_vien")), FMT_INTEGER);
		xls.SetCellText(6, nRow, rs.GetValue(_T("bacsi_kedon")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("tongsodon")), FMT_INTEGER);		
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\THONG KE KHAM THEO BAC SI PHONG 51.xls"));	
} 
void CEEMRoom51ReportByDoctor::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	
} 
void CEEMRoom51ReportByDoctor::OnObjectSelendok(){
	 
}
/*void CEEMRoom51ReportByDoctor::OnObjectSetfocus()
{
	
}*/
/*void CEEMRoom51ReportByDoctor::OnObjectKillfocus()
{
	
}*/
long CEEMRoom51ReportByDoctor::OnObjectLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
			szWhere.Format(_T(" where ho_id='%s'"), m_szObjectKey);
	};
			m_wndObject.DeleteAllItems(); 
			szSQL.Format(_T(" select ho_id as id, ho_desc as name from hms_object %s order by cast(ho_id as integer)"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CEEMRoom51ReportByDoctor::OnObjectAddNew(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	
} */
int CEEMRoom51ReportByDoctor::OnAddCEEMRoom51ReportByDoctor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEEMRoom51ReportByDoctor::OnEditCEEMRoom51ReportByDoctor(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEEMRoom51ReportByDoctor::OnDeleteCEEMRoom51ReportByDoctor(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelCEEMRoom51ReportByDoctor();
 	}
	return 0;
}
int CEEMRoom51ReportByDoctor::OnSaveCEEMRoom51ReportByDoctor(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *)AfxGetMainWnd();
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
 		//OnCEEMRoom51ReportByDoctorListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEEMRoom51ReportByDoctor::OnCancelCEEMRoom51ReportByDoctor(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *)AfxGetMainWnd();
 	return 0;
} 
int CEEMRoom51ReportByDoctor::OnCEEMRoom51ReportByDoctorListLoadData()
{
	return 0;
}

CString CEEMRoom51ReportByDoctor::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szStatus;
	CString szObjectID, szObjectName;
	
	szWhere.Format(_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	 if(!m_szObjectKey.IsEmpty())	
		szWhere.AppendFormat(_T(" and hd_object=%s"), m_szObjectKey);	
	else
		szObjectName.Format(_T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x111\x1ED1i t\x1B0\x1EE3ng"));
	 if (!m_szRoomKey.IsEmpty())
		 szWhere.AppendFormat(_T(" AND he_roomid = %s"), m_szRoomKey);

	szSQL.Format(_T(" SELECT") \
				_T(" bacsi_kham_name,") \
				_T(" tongsokham,") \
				_T(" tongcho_don,") \
				_T(" tongvenha_khongdon,") \
				_T(" tongnhap_vien,") \
				_T(" bacsi_kedon,") \
				_T(" tongsodon") \
				_T(" from") \
				_T(" (") \
				_T(" select ") \
				_T(" bacsi_kham_name,") \
				_T(" sum(sokham) as tongsokham,") \
				_T(" sum(cho_don) as tongcho_don,") \
				_T(" sum(venha_khongdon) as tongvenha_khongdon,") \
				_T(" sum(nhap_vien) as tongnhap_vien,") \
				_T(" bacsi_kedon,") \
				_T(" sum(sodon) as tongsodon") \
				_T(" from") \
				_T(" (") \
				_T(" select ") \
				_T(" distinct(he_doctor) as bacsi_kham_id,") \
				_T(" he_docno as docno,") \
				_T(" Get_Username(he_doctor) as bacsi_kham_name,") \
				_T(" he_status as trangthaikham,") \
				_T(" case when he_status in ('P','T') then 1 else 0 end as sokham,") \
				_T(" case when HD_SUGGESTION='E' then 1 else 0 end as cho_don,") \
				_T(" case when HD_SUGGESTION='A' then 1 else 0 end as venha_khongdon,") \
				_T(" case when HD_SUGGESTION='D' then 1 else 0 end as nhap_vien,") \
				_T(" get_username(hpo_doctor) as bacsi_kedon,") \
				_T(" case when hpo_orderstatus in ('S','A') and hpo_ordertype='P' and hpo_orderid>0 then 1 else 0 end as sodon") \
				_T(" from hms_exam ") \
				_T(" left join hms_doc on (he_docno=hd_docno)") \
				_T(" left join Hms_Pharmaorder on (he_docno=hpo_docno and he_deptid=hpo_deptid)") \
				_T(" %s") \
				_T(" and he_status in ('P','T') and he_deptid='%s' ") \
				_T(" )tmp") \
				_T(" group by bacsi_kham_name,bacsi_kedon") \
				_T(" order by bacsi_kham_name") \
				_T(" )tmp1") \
				_T(" where (tongsokham+tongcho_don+tongvenha_khongdon+tongnhap_vien+tongsodon)>0") \
				_T(" group by  bacsi_kham_name,") \
				_T(" tongsokham,") \
				_T(" tongcho_don,") \
				_T(" tongvenha_khongdon,") \
				_T(" tongnhap_vien,") \
				_T(" bacsi_kedon,") \
				_T(" tongsodon") \
				_T(" order by bacsi_kham_name"),szWhere, pMF->GetCurrentDepartmentID());
	return szSQL;
}