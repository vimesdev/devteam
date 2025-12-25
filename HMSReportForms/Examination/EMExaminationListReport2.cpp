#include "stdafx.h"
#include "EMExaminationListReport2.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMExaminationListReport2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMExaminationListReport2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMExaminationListReport2 *pVw = (CEMExaminationListReport2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMExaminationListReport2 *pVw = (CEMExaminationListReport2 *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMExaminationListReport2* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CEMExaminationListReport2 *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CEMExaminationListReport2 *)pWnd)->OnObjectAddNew();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMExaminationListReport2 *)pWnd)->OnRoomLoadData();
}
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CEMExaminationListReport2 *)pWnd)->OnGroupLoadData();
}
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CEMExaminationListReport2 *)pWnd)->OnDoctorLoadData();
}
static int _OnAddCEMExaminationListReport2Fnc(CWnd *pWnd){
	 return ((CEMExaminationListReport2*)pWnd)->OnAddCEMExaminationListReport2();
} 
static int _OnEditCEMExaminationListReport2Fnc(CWnd *pWnd){
	 return ((CEMExaminationListReport2*)pWnd)->OnEditCEMExaminationListReport2();
} 
static int _OnDeleteCEMExaminationListReport2Fnc(CWnd *pWnd){
	 return ((CEMExaminationListReport2*)pWnd)->OnDeleteCEMExaminationListReport2();
} 
static int _OnSaveCEMExaminationListReport2Fnc(CWnd *pWnd){
	 return ((CEMExaminationListReport2*)pWnd)->OnSaveCEMExaminationListReport2();
} 
static int _OnCancelCEMExaminationListReport2Fnc(CWnd *pWnd){
	 return ((CEMExaminationListReport2*)pWnd)->OnCancelCEMExaminationListReport2();
} 
CEMExaminationListReport2::CEMExaminationListReport2(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 135;
	SetDefaultValues();
}
CEMExaminationListReport2::~CEMExaminationListReport2()
{
}
void CEMExaminationListReport2::OnCreateComponents()
{
	m_wndExaminationListReport.Create(this, _T("Examination List Report"), 5, 5, 490, 180);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 60, 90, 85);
	m_wndObject.SetCheckBox(true);
	m_wndObject.Create(this,95, 60, 485, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 485, 115); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 120, 90, 145);
	m_wndGroup.Create(this,95, 120, 485, 145); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 150, 90, 175);
	m_wndDoctor.Create(this,95, 150, 485, 175); 
	m_wndPatient.Create(this, _T("Patient"), 5, 185, 105, 210);
	m_wndPrint.Create(this, _T("&Print"), 325, 185, 405, 210);
	m_wndExport.Create(this, _T("&Export"), 410, 185, 490, 210);

}
void CEMExaminationListReport2::OnInitializeComponents()
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

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Group"), CFMT_TEXT, 250);

	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
}
void CEMExaminationListReport2::OnSetWindowEvents()
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
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//AddEvent(1, _T("Add	Ctrl+A"), _OnAddCEMExaminationListReport2Fnc, 0, 'A', VK_CONTROL);
	//AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCEMExaminationListReport2Fnc, 0, 'E', VK_CONTROL);
	//AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCEMExaminationListReport2Fnc, 0, 'D', VK_CONTROL);
	//AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCEMExaminationListReport2Fnc, 0, 'S', VK_CONTROL);
	//AddEvent(0, _T("-"));
	//AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCEMExaminationListReport2Fnc, 0, 'T', VK_CONTROL);

	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = szSysDate;
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
//	UpdateData(false);
	SetMode(VM_EDIT);


}
void CEMExaminationListReport2::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);
	DDX_Check(pDX, m_wndPatient.GetDlgCtrlID(), m_bPatient);

}
void CEMExaminationListReport2::GetDataToScreen(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMExaminationListReport2::GetScreenToData(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();

}
void CEMExaminationListReport2::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szGroupKey.Empty();
	m_szDoctorKey.Empty();
	m_bPatient = FALSE;

}
int CEMExaminationListReport2::SetMode(int nMode){
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
/*void CEMExaminationListReport2::OnFromDateChange(){
	
} */
/*void CEMExaminationListReport2::OnFromDateSetfocus(){
	
} */
/*void CEMExaminationListReport2::OnFromDateKillfocus(){
	
} */
int CEMExaminationListReport2::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMExaminationListReport2::OnToDateChange(){
	
} */
/*void CEMExaminationListReport2::OnToDateSetfocus(){
	
} */
/*void CEMExaminationListReport2::OnToDateKillfocus(){
	
} */
int CEMExaminationListReport2::OnToDateCheckValue(){
	return 0;
} 

long CEMExaminationListReport2::OnRoomLoadData(){
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

long CEMExaminationListReport2::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT") \
		_T(" 1 AS id,") \
		_T(" 'Tim mạch, bệnh chuyển hóa' AS name") \
		_T(" FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 2 AS id,") \
		_T(" 'Bệnh cơ quan hô hấp' AS name") \
		_T(" FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 3 AS id,") \
		_T(" 'Bệnh cơ quan tiêu hóa' AS name") \
		_T(" FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 4 AS id,") \
		_T(" 'Ung thư các loại' AS name") \
		_T(" FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 5 AS id,") \
		_T(" 'Nhồi máu cơ tim' AS name") \
		_T(" FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT") \
		_T(" 6 AS id,") \
		_T(" 'Các bệnh khác' AS name") \
		_T(" FROM dual") \
		_T(" ORDER BY id"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CEMExaminationListReport2::OnDoctorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT su_userid AS id, su_name AS name FROM sys_user ORDER BY su_userid"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndDoctor.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndDoctor.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CEMExaminationListReport2::OnPrintSelect(){
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
	if (!rpt.Init(_T("Reports/HMS/HE_DANHSACHBENHNHANKHAMBENH2.rpt")))
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

		rs.GetValue(_T("telephone"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
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
void CEMExaminationListReport2::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(TRUE);
	if(m_bPatient)
		OnExport2();
	else
		OnExport1();
} 
void CEMExaminationListReport2::OnExport1(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nIdx = 0, nCol = 0, nRow = 0;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 =0;
	int c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0;
	szSQL = GetQueryString();
	int nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 30);

	xls.SetColumnWidth(6, 20);
	xls.SetColumnWidth(7, 20);
	xls.SetColumnWidth(8, 20);
	xls.SetColumnWidth(9, 20);
	xls.SetColumnWidth(10, 20);
	xls.SetColumnWidth(11, 20);
	xls.SetColumnWidth(12, 20);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 12);
	xls.SetCellMergedColumns(nCol, nRow + 3, 12);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("DANH SÁCH BỆNH NHÂN KHÁM BỆNH"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	



	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số hồ sơ"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Năm sinh"));
	arrCol.Add(_T("Cấp bậc"));
	arrCol.Add(_T("Đơn vị"));
	arrCol.Add(_T("Ngày khám"));
	arrCol.Add(_T("Chẩn đoán"));
	arrCol.Add(_T("Phát thuốc"));
	arrCol.Add(_T("Vào khoa"));
	arrCol.Add(_T("Đối tượng"));
	arrCol.Add(_T("Số thẻ"));
	arrCol.Add(_T("Số điện thoại"));

	nRow = 7;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	nRow = 8;
	while (!rs.IsEOF())
	{
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("workplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("examdate"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("diagno"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("drugdeliver"), tmpStr);
		if(!tmpStr.IsEmpty()) c4++;
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("drugquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c5++;

		rs.GetValue(_T("drugbhytquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c6++;

		rs.GetValue(_T("drugbhytquancothe"), tmpStr);
		if(!tmpStr.IsEmpty()) c7++;

		rs.GetValue(_T("inward"), tmpStr);
		if(!tmpStr.IsEmpty()) c8++;
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("inwardquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c9++;

		rs.GetValue(_T("inwardbhytquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c10++;

		rs.GetValue(_T("inwardquancothe"), tmpStr);
		if(!tmpStr.IsEmpty()) c11++;


		rs.GetValue(_T("hd_object"), tmpStr);
		if(tmpStr == _T("1")) 
		{
			c1++;
		}
		else if(tmpStr == _T("2")) 
		{
			c2++;
		}
		else if(tmpStr == _T("11"))
		{
			c3++;
		}


		rs.GetValue(_T("obj"), tmpStr);
		xls.SetCellText(nCol + 10, nRow,tmpStr , FMT_TEXT);

		rs.GetValue(_T("card_no"), tmpStr);
		xls.SetCellText(nCol + 11, nRow,tmpStr , FMT_TEXT);

		rs.GetValue(_T("telephone"), tmpStr);
		xls.SetCellText(nCol + 12, nRow,tmpStr , FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	CString szTemp;

	szTemp.Format(_T("Quân: %d"),c1++);
	xls.SetCellText(1, 4, szTemp, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(2, 4, 2);
	szTemp.Format(_T("Hưu: %d"),c2++);
	xls.SetCellText(2, 4, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("BHYT Quân nhân: %d"),c3++);
	xls.SetCellText(4, 4, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Tổng số: %d"),nIdx++);
	xls.SetCellText(5, 4, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Phát thuốc quân: %d"),c5++);
	xls.SetCellText(1, 5, szTemp, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(2, 5, 2);
	szTemp.Format(_T("Phát thuốc hưu: %d"),c6++);
	xls.SetCellText(2, 5, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Phát thuốc QCT(11): %d"),c7++);
	xls.SetCellText(4, 5, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Tổng phát thuốc: %d"),c4++);
	xls.SetCellText(5, 5, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Vào viện quân: %d"),c9++);
	xls.SetCellText(1, 6, szTemp, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(2, 6, 2);
	szTemp.Format(_T("Vào viện hưu: %d"),c10++);
	xls.SetCellText(2, 6, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Vào viện QCT(11): %d"),c11++);
	xls.SetCellText(4, 6, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Tổng vào viện: %d"),c8++);
	xls.SetCellText(5, 6, szTemp, FMT_TEXT, true, 12);


	xls.Save(_T("Exports\\Danh Sach Benh Nhan Kham Benh.xls"));


} 
void CEMExaminationListReport2::OnExport2(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	int nIdx = 0, nCol = 0, nRow = 0;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 =0;
	int c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0;
	szSQL = GetQueryString2();
	int nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 25);
	xls.SetColumnWidth(5, 30);

	xls.SetColumnWidth(6, 20);
	xls.SetColumnWidth(7, 20);
	xls.SetColumnWidth(8, 20);
	xls.SetColumnWidth(9, 20);
	xls.SetColumnWidth(10, 20);
	xls.SetColumnWidth(11, 20);
	xls.SetColumnWidth(12, 20);
	//Header
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 12);
	xls.SetCellMergedColumns(nCol, nRow + 3, 12);
	xls.SetCellText(nCol, nRow, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 1, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, _T("DANH SÁCH BỆNH NHÂN KHÁM BỆNH"), FMT_TEXT | FMT_CENTER, true, 11);	
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 3, tmpStr, FMT_TEXT | FMT_CENTER, false, 11);	



	CStringArray arrCol;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Số hồ sơ"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Năm sinh"));
	arrCol.Add(_T("Cấp bậc"));
	arrCol.Add(_T("Đơn vị"));
	arrCol.Add(_T("Ngày khám"));
	arrCol.Add(_T("Chẩn đoán"));
	arrCol.Add(_T("Phát thuốc"));
	arrCol.Add(_T("Vào khoa"));
	arrCol.Add(_T("Đối tượng"));
	arrCol.Add(_T("Số thẻ"));
	arrCol.Add(_T("Số điện thoại"));

	nRow = 7;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol+i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	nRow = 8;
	while (!rs.IsEOF())
	{
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("workplace"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T(" "), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("diagno"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("drugdeliver"), tmpStr);
		if(!tmpStr.IsEmpty()) c4++;
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("drugquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c5++;

		rs.GetValue(_T("drugbhytquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c6++;

		rs.GetValue(_T("drugbhytquancothe"), tmpStr);
		if(!tmpStr.IsEmpty()) c7++;

		rs.GetValue(_T("inward"), tmpStr);
		if(!tmpStr.IsEmpty()) c8++;
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("inwardquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c9++;

		rs.GetValue(_T("inwardbhytquan"), tmpStr);
		if(!tmpStr.IsEmpty()) c10++;

		rs.GetValue(_T("inwardquancothe"), tmpStr);
		if(!tmpStr.IsEmpty()) c11++;


		rs.GetValue(_T("hd_object"), tmpStr);
		if(tmpStr == _T("1")) 
		{
			c1++;
		}
		else if(tmpStr == _T("2")) 
		{
			c2++;
		}
		else if(tmpStr == _T("11"))
		{
			c3++;
		}


		rs.GetValue(_T("obj"), tmpStr);
		xls.SetCellText(nCol + 10, nRow,tmpStr , FMT_TEXT);

		rs.GetValue(_T("card_no"), tmpStr);
		xls.SetCellText(nCol + 11, nRow,tmpStr , FMT_TEXT);

		rs.GetValue(_T("telephone"), tmpStr);
		xls.SetCellText(nCol + 12, nRow,tmpStr , FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}

	CString szTemp;

	szTemp.Format(_T("Quân: %d"),c1++);
	xls.SetCellText(1, 4, szTemp, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(2, 4, 2);
	szTemp.Format(_T("Hưu: %d"),c2++);
	xls.SetCellText(2, 4, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("BHYT Quân nhân: %d"),c3++);
	xls.SetCellText(4, 4, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Tổng số: %d"),nIdx++);
	xls.SetCellText(5, 4, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Phát thuốc quân: %d"),c5++);
	xls.SetCellText(1, 5, szTemp, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(2, 5, 2);
	szTemp.Format(_T("Phát thuốc hưu: %d"),c6++);
	xls.SetCellText(2, 5, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Phát thuốc QCT(11): %d"),c7++);
	xls.SetCellText(4, 5, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Tổng phát thuốc: %d"),c4++);
	xls.SetCellText(5, 5, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Vào viện quân: %d"),c9++);
	xls.SetCellText(1, 6, szTemp, FMT_TEXT, true, 12);

	xls.SetCellMergedColumns(2, 6, 2);
	szTemp.Format(_T("Vào viện hưu: %d"),c10++);
	xls.SetCellText(2, 6, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Vào viện QCT(11): %d"),c11++);
	xls.SetCellText(4, 6, szTemp, FMT_TEXT, true, 12);

	szTemp.Format(_T("Tổng vào viện: %d"),c8++);
	xls.SetCellText(5, 6, szTemp, FMT_TEXT, true, 12);


	xls.Save(_T("Exports\\Danh Sach Benh Nhan Kham Benh.xls"));


} 
void CEMExaminationListReport2::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	
} 
void CEMExaminationListReport2::OnObjectSelendok(){
	 
}
/*void CEMExaminationListReport2::OnObjectSetfocus()
{
	
}*/
/*void CEMExaminationListReport2::OnObjectKillfocus()
{
	
}*/
long CEMExaminationListReport2::OnObjectLoadData()
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
/*void CEMExaminationListReport2::OnObjectAddNew(){
	CHMSMainFrame  *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	
} */
int CEMExaminationListReport2::OnAddCEMExaminationListReport2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMExaminationListReport2::OnEditCEMExaminationListReport2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame  *pMF = (CHMSMainFrame  *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMExaminationListReport2::OnDeleteCEMExaminationListReport2(){
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
 		OnCancelCEMExaminationListReport2();
 	}
	return 0;
}
int CEMExaminationListReport2::OnSaveCEMExaminationListReport2(){
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
 		//OnCEMExaminationListReport2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMExaminationListReport2::OnCancelCEMExaminationListReport2(){
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
int CEMExaminationListReport2::OnCEMExaminationListReport2ListLoadData()
{
	return 0;
}

CString CEMExaminationListReport2::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szStatus;
	CString szObjectID, szObjectName;
	
	/*if (m_nSoldier == 0)
		szWhere.AppendFormat(_T(" AND hd_object = '1'"));
	else
		szWhere.AppendFormat(_T(" AND hd_object = '2'"));
	szStatus.Format(_T(" AND hpo_orderstatus <> 'O'"));*/
	//if (m_bOnlyOrder)
	//	szStatus.Format(_T(" AND hpo_orderstatus IN('S', 'A')"));

	szWhere.Format(_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i=0 ; i<= m_wndObject.GetCount(); i++)
	 {
		 if(m_wndObject.GetCheck(i))
		 {
			 m_wndObject.SetCurSel(i);
		 	if(!szObjectID.IsEmpty())
					szObjectID += _T(",");						
					szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCheck(i,0));			
			if(!szObjectName.IsEmpty())
					szObjectName += _T(", ");						
			szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCheck(i, 0));
		 }
	 }
	
	 if(!m_szObjectKey.IsEmpty())	
		szWhere.AppendFormat(_T(" and hd_object in(%s)"), szObjectID);	
	else
		szObjectName.Format(_T("Tất cả các đối tượng"));
	 if (!m_szRoomKey.IsEmpty())
		 szWhere.AppendFormat(_T(" AND he_roomid = %s"), m_szRoomKey);
	 if (!m_szDoctorKey.IsEmpty())
		 szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), m_szDoctorKey);

	 if(m_szGroupKey == _T("1"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('E10', 'O24.1', 'R30.2', 'R30.3', 'E11', 'P71.5', 'I10', 'I10.1', 'I10.2', 'I10.3', 'O10', '', 'I50', 'I50.3', 'I50.4', 'I21', 'I25.2')"));
	 else if(m_szGroupKey == _T("2"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('M49.0', 'M90.0', 'A15', 'A15.0', 'A16.0', 'A16.10', 'A16.5', 'A18', 'A16.10', 'J20', 'J20.1', 'J20.2', 'J20.0', 'J20.4', 'J20.5', 'J40', 'J41', 'J41.0', 'J41.1', 'J41.8', 'J42', 'J02', 'J02.0', 'J02.8', 'J02.9', 'J31.2')"));
	 else if(m_szGroupKey == _T("3"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('H60', 'H60.9', 'H60.2', 'H62.0', 'H62.4', 'H65.1', 'H66.0', 'H66.1', 'H66.3', 'H66.9', 'J00', 'J30', 'J30.0', 'J30.3', 'J31', 'J90', 'J90.1', 'J90.2', 'J12', 'J15', 'J15.1', 'J15.8', 'J15.9', 'J18.9', 'J18', 'J32', 'J32.0', 'J32.0', 'J32.2', 'J32.3', 'J01', 'J01.0', 'J01.1', 'K79.7', 'I84', 'I84.1', 'I84.2', 'I84.5', 'K51.2', 'D01.2', 'K80', 'K80.1', 'K80.2', 'D13.4', 'K59.0')"));
	 else if(m_szGroupKey == _T("4"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('C09.2', 'C09.4', 'C09.5', 'C09.6', 'C09.7')"));
	 else if(m_szGroupKey == _T("5"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('I21', 'I21.1', 'I21.3', 'I21.4', 'I21.9', 'I22', 'I22.0', 'I22.1', 'I22.8', 'I22.9', 'I23', 'I23.0', 'I24.0', 'I25.2', 'U58.041', 'U58.042', 'U58.051', 'U58.052', 'Z03.4')"));
	 else if(m_szGroupKey == _T("6"))
		 szWhere.AppendFormat(_T("AND (hd_icd  not in ('E10', 'O24.1', 'R30.2', 'R30.3', 'E11', 'P71.5', 'I10', 'I10.1', 'I10.2', 'I10.3', 'O10', 'I50', 'I50.3', 'I50.4', 'I21', 'I25.2')") \
		 _T("         and hd_icd  not in ('M49.0', 'M90.0', 'A15', 'A15.0', 'A16.0', 'A16.10', 'A16.5', 'A18', 'A16.10', 'J20', 'J20.1', 'J20.2', 'J20.0', 'J20.4', 'J20.5', 'J40', 'J41', 'J41.0', 'J41.1', 'J41.8', 'J42', 'J02', 'J02.0', 'J02.8', 'J02.9', 'J31.2')") \
		 _T("         and hd_icd not in ('H60', 'H60.9', 'H60.2', 'H62.0', 'H62.4', 'H65.1', 'H66.0', 'H66.1', 'H66.3', 'H66.9', 'J00', 'J30', 'J30.0', 'J30.3', 'J31', 'J90', 'J90.1', 'J90.2', 'J12', 'J15', 'J15.1', 'J15.8', 'J15.9', 'J18.9', 'J18', 'J32', 'J32.0', 'J32.0', 'J32.2', 'J32.3', 'J01', 'J01.0', 'J01.1', 'K79.7', 'I84', 'I84.1', 'I84.2', 'I84.5', 'K51.2', 'D01.2', 'K80', 'K80.1', 'K80.2', 'D13.4', 'K59.0')") \
		 _T("         and hd_icd  not in ('C09.2', 'C09.4', 'C09.5', 'C09.6', 'C09.7')") \
		 _T("         and hd_icd not in ('I21', 'I21.1', 'I21.3', 'I21.4', 'I21.9', 'I22', 'I22.0', 'I22.1', 'I22.8', 'I22.9', 'I23', 'I23.0', 'I24.0', 'I25.2', 'U58.041', 'U58.042', 'U58.051', 'U58.052', 'Z03.4'))"));


	/*szSQL.Format(_T(" SELECT  distinct he_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         extract(year from hp_birthdate) as yob, get_objectname(hd_object) as obj,hd_object, ") \
				_T("         (select distinct ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as rank,") \
				_T("         hp_workplace as workplace,") \
				_T("         hd_diagnostic as diagno,") \
				_T("         case when hd_suggestion = 'D' and length(hd_indept) > 0 then hd_indept end as inward,") \
				_T("         case when hpo_orderid IS NOT NULL AND hpo_orderstatus IN('S', 'A') AND hd_status = 'T' then cast('X' as NVARCHAR2(1)) end as drugdeliver") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON (hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN hms_exam ON (he_docno = hd_docno)") \
				_T(" LEFT JOIN hms_pharmaorder ON (hpo_docno = he_docno)") \
				_T(" %s AND he_deptid = '%s' order by docno"),szWhere,  pMF->m_szDept);*/


	szSQL.Format(_T("  SELECT  distinct hd_docno as docno,    ") \
				_T("           trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,   ") \
				_T("           extract(year from hp_birthdate) as yob, get_objectname(hd_object) as obj,hd_object,    ") \
				_T("           get_syssel_desc('hms_rank', hp_rank) as rank, ") \
				_T("           hp_workplace as workplace,        ") \
				_T("           hd_diagnostic as diagno,     ") \
				_T("		   hd_cardno card_no,") \
				_T("		   he_examdate as examdate,") \
				_T("           case when hd_suggestion = 'D' and length(hd_indept) > 0 then hd_indept end as inward,   ") \
				_T("           case when hd_suggestion = 'D' and length(hd_indept) > 0 and hd_object in('1') then hd_indept end as inwardquan,   ") \
				_T("           case when hd_suggestion = 'D' and length(hd_indept) > 0 and hd_object in('2') then hd_indept end as inwardbhytquan,   ") \
				_T("           case when hd_suggestion = 'D' and length(hd_indept) > 0 and hd_object in ('11') then hd_indept end as inwardquancothe,   ") \
				_T("           case when hpo_orderid IS NOT NULL then cast('X' as NVARCHAR2(1)) end as drugdeliver , ") \
				_T("           case when hpo_orderid IS NOT NULL and hd_object in ('1') then cast('X' as NVARCHAR2(1)) end as drugquan, ") \
				_T("           case when hpo_orderid IS NOT NULL and hd_object in ('2') then cast('X' as NVARCHAR2(1)) end as drugbhytquan,") \
				_T("           case when hpo_orderid IS NOT NULL and hd_object in ('11') then cast('X' as NVARCHAR2(1)) end as drugbhytquancothe,") \
				_T("           CASE WHEN LENGTH(hd_telephone) > 0 THEN hd_telephone ELSE hd_contacttel END AS telephone") \
				_T("   FROM hms_patient ") \
				_T("   LEFT JOIN hms_doc ON (hd_patientno = hp_patientno) ") \
				_T("   LEFT JOIN hms_exam ON (hd_docno = he_docno)") \
				_T("   LEFT JOIN hms_clinical_record ON (hcr_docno = hd_docno)") \
				_T("   LEFT JOIN hms_pharmaorder ON (hpo_docno = hd_docno AND hpo_orderstatus IN ('S', 'A')) ") \
				_T("  %s AND he_deptid = '%s' AND he_status IN ('T', 'P')") \
				_T("         order by examdate, docno"), szWhere,  pMF->GetCurrentDepartmentID());
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}


CString CEMExaminationListReport2::GetQueryString2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere, szStatus;
	CString szObjectID, szObjectName;
	
	/*if (m_nSoldier == 0)
		szWhere.AppendFormat(_T(" AND hd_object = '1'"));
	else
		szWhere.AppendFormat(_T(" AND hd_object = '2'"));
	szStatus.Format(_T(" AND hpo_orderstatus <> 'O'"));*/
	//if (m_bOnlyOrder)
	//	szStatus.Format(_T(" AND hpo_orderstatus IN('S', 'A')"));

	szWhere.Format(_T(" WHERE he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i=0 ; i<= m_wndObject.GetCount(); i++)
	 {
		 if(m_wndObject.GetCheck(i))
		 {
			 m_wndObject.SetCurSel(i);
		 	if(!szObjectID.IsEmpty())
					szObjectID += _T(",");						
					szObjectID.AppendFormat(_T("'%s'"), m_wndObject.GetCheck(i,0));			
			if(!szObjectName.IsEmpty())
					szObjectName += _T(", ");						
			szObjectName.AppendFormat(_T("%s"), m_wndObject.GetCheck(i, 0));
		 }
	 }
	
	 if(!m_szObjectKey.IsEmpty())	
		szWhere.AppendFormat(_T(" and hd_object in(%s)"), szObjectID);	
	else
		szObjectName.Format(_T("Tất cả các đối tượng"));
	 if (!m_szRoomKey.IsEmpty())
		 szWhere.AppendFormat(_T(" AND he_roomid = %s"), m_szRoomKey);
	 if (!m_szDoctorKey.IsEmpty())
		 szWhere.AppendFormat(_T(" AND he_doctor = '%s'"), m_szDoctorKey);

	 if(m_szGroupKey == _T("1"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('E10', 'O24.1', 'R30.2', 'R30.3', 'E11', 'P71.5', 'I10', 'I10.1', 'I10.2', 'I10.3', 'O10', '', 'I50', 'I50.3', 'I50.4', 'I21', 'I25.2')"));
	 else if(m_szGroupKey == _T("2"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('M49.0', 'M90.0', 'A15', 'A15.0', 'A16.0', 'A16.10', 'A16.5', 'A18', 'A16.10', 'J20', 'J20.1', 'J20.2', 'J20.0', 'J20.4', 'J20.5', 'J40', 'J41', 'J41.0', 'J41.1', 'J41.8', 'J42', 'J02', 'J02.0', 'J02.8', 'J02.9', 'J31.2')"));
	 else if(m_szGroupKey == _T("3"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('H60', 'H60.9', 'H60.2', 'H62.0', 'H62.4', 'H65.1', 'H66.0', 'H66.1', 'H66.3', 'H66.9', 'J00', 'J30', 'J30.0', 'J30.3', 'J31', 'J90', 'J90.1', 'J90.2', 'J12', 'J15', 'J15.1', 'J15.8', 'J15.9', 'J18.9', 'J18', 'J32', 'J32.0', 'J32.0', 'J32.2', 'J32.3', 'J01', 'J01.0', 'J01.1', 'K79.7', 'I84', 'I84.1', 'I84.2', 'I84.5', 'K51.2', 'D01.2', 'K80', 'K80.1', 'K80.2', 'D13.4', 'K59.0')"));
	 else if(m_szGroupKey == _T("4"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('C09.2', 'C09.4', 'C09.5', 'C09.6', 'C09.7')"));
	 else if(m_szGroupKey == _T("5"))
		 szWhere.AppendFormat(_T("AND hd_icd IN('I21', 'I21.1', 'I21.3', 'I21.4', 'I21.9', 'I22', 'I22.0', 'I22.1', 'I22.8', 'I22.9', 'I23', 'I23.0', 'I24.0', 'I25.2', 'U58.041', 'U58.042', 'U58.051', 'U58.052', 'Z03.4')"));
	 else if(m_szGroupKey == _T("6"))
		 szWhere.AppendFormat(_T("AND (hd_icd  not in ('E10', 'O24.1', 'R30.2', 'R30.3', 'E11', 'P71.5', 'I10', 'I10.1', 'I10.2', 'I10.3', 'O10', 'I50', 'I50.3', 'I50.4', 'I21', 'I25.2')") \
		 _T("         and hd_icd  not in ('M49.0', 'M90.0', 'A15', 'A15.0', 'A16.0', 'A16.10', 'A16.5', 'A18', 'A16.10', 'J20', 'J20.1', 'J20.2', 'J20.0', 'J20.4', 'J20.5', 'J40', 'J41', 'J41.0', 'J41.1', 'J41.8', 'J42', 'J02', 'J02.0', 'J02.8', 'J02.9', 'J31.2')") \
		 _T("         and hd_icd not in ('H60', 'H60.9', 'H60.2', 'H62.0', 'H62.4', 'H65.1', 'H66.0', 'H66.1', 'H66.3', 'H66.9', 'J00', 'J30', 'J30.0', 'J30.3', 'J31', 'J90', 'J90.1', 'J90.2', 'J12', 'J15', 'J15.1', 'J15.8', 'J15.9', 'J18.9', 'J18', 'J32', 'J32.0', 'J32.0', 'J32.2', 'J32.3', 'J01', 'J01.0', 'J01.1', 'K79.7', 'I84', 'I84.1', 'I84.2', 'I84.5', 'K51.2', 'D01.2', 'K80', 'K80.1', 'K80.2', 'D13.4', 'K59.0')") \
		 _T("         and hd_icd  not in ('C09.2', 'C09.4', 'C09.5', 'C09.6', 'C09.7')") \
		 _T("         and hd_icd not in ('I21', 'I21.1', 'I21.3', 'I21.4', 'I21.9', 'I22', 'I22.0', 'I22.1', 'I22.8', 'I22.9', 'I23', 'I23.0', 'I24.0', 'I25.2', 'U58.041', 'U58.042', 'U58.051', 'U58.052', 'Z03.4'))"));


	/*szSQL.Format(_T(" SELECT  distinct he_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         extract(year from hp_birthdate) as yob, get_objectname(hd_object) as obj,hd_object, ") \
				_T("         (select distinct ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code = hp_rank) as rank,") \
				_T("         hp_workplace as workplace,") \
				_T("         hd_diagnostic as diagno,") \
				_T("         case when hd_suggestion = 'D' and length(hd_indept) > 0 then hd_indept end as inward,") \
				_T("         case when hpo_orderid IS NOT NULL AND hpo_orderstatus IN('S', 'A') AND hd_status = 'T' then cast('X' as NVARCHAR2(1)) end as drugdeliver") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON (hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN hms_exam ON (he_docno = hd_docno)") \
				_T(" LEFT JOIN hms_pharmaorder ON (hpo_docno = he_docno)") \
				_T(" %s AND he_deptid = '%s' order by docno"),szWhere,  pMF->m_szDept);*/


	szSQL.Format(_T("  SELECT  distinct hp_patientno as docno,    ") \
				_T("           trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,   ") \
				_T("           extract(year from hp_birthdate) as yob, get_objectname(hd_object) as obj,hd_object,    ") \
				_T("           get_syssel_desc('hms_rank', hp_rank) as rank, ") \
				_T("           hp_workplace as workplace,        ") \
				_T("           CASE WHEN LENGTH(hd_telephone) > 0 THEN hd_telephone ELSE hd_contacttel END AS telephone") \
				_T("   FROM hms_patient ") \
				_T("   LEFT JOIN hms_doc ON (hd_patientno = hp_patientno) ") \
				_T("   LEFT JOIN hms_exam ON (hd_docno = he_docno)") \
				_T("  %s AND he_deptid = '%s' AND he_status IN ('T', 'P')") \
				_T("         order by docno"), szWhere,  pMF->GetCurrentDepartmentID());
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

