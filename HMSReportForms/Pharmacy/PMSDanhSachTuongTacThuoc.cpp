#include "stdafx.h"
#include "PMSDanhSachTuongTacThuoc.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachTuongTacThuoc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachTuongTacThuoc *)pWnd)->OnToDateCheckValue();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CDanhSachTuongTacThuoc*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CDanhSachTuongTacThuoc*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhSachTuongTacThuoc*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhSachTuongTacThuoc*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CDanhSachTuongTacThuoc *pVw = (CDanhSachTuongTacThuoc *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CDanhSachTuongTacThuoc *pVw = (CDanhSachTuongTacThuoc *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CDanhSachTuongTacThuoc*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CDanhSachTuongTacThuoc*)pWnd)->OnListUnCheckAll();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CDanhSachTuongTacThuoc*)pWnd)->OnOutPatientSelect();
}
static void _OnHuy_Tuong_TacSelectFnc(CWnd *pWnd){
	 ((CDanhSachTuongTacThuoc*)pWnd)->OnHuy_Tuong_TacSelect();
}
CDanhSachTuongTacThuoc::CDanhSachTuongTacThuoc(CWnd *pWnd)
{

	m_nDlgWidth = 760;
	m_nDlgHeight = 520;
	SetDefaultValues();
}
CDanhSachTuongTacThuoc::~CDanhSachTuongTacThuoc()
{
}
void CDanhSachTuongTacThuoc::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 398);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 31, 300, 56);
	m_wndToDate.Create(this,305, 31, 425, 56); 
	m_wndDepartmentList.Create(this,10, 60, 425, 399);
	m_wndDepartmentList.SetCheckBox(true);
	m_wndOutPatient.Create(this, _T("OutPatient"), 5, 404, 139, 429);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 404, 425, 429);*/

	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 398);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 31, 300, 56);
	m_wndToDate.Create(this,305, 31, 425, 56); 
	m_wndDepartmentList.Create(this,10, 60, 425, 399);
	m_wndDepartmentList.SetCheckBox(true);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 0, 430, 0, 455);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 405, 425, 430);
	m_wndOutPatient.Create(this, _T("OutPatient"), 0, 0, 0, 0);	
	m_wndHuy_Tuong_Tac.Create(this, _T("Huy_Tuong_Tac"), 146, 406, 300, 431);

}
void CDanhSachTuongTacThuoc::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDepartmentList.InsertColumn(2, _T("Phân loại"), CFMT_TEXT, 100);

}
void CDanhSachTuongTacThuoc::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartmentList.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartmentList.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartmentList.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartmentList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndDepartmentList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);
	m_wndHuy_Tuong_Tac.SetEvent(WE_CLICK, _OnHuy_Tuong_TacSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = pMF->GetSysDate() += _T(" 00:00");
	m_szToDate = pMF->GetSysDate() += _T(" 23:59");
	//m_szFromDate = m_szToDate += _T(" 07:30");
	OnDepartmentLoadData();
	OnListCheckAll();
	UpdateData(false);

}
void CDanhSachTuongTacThuoc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndHuy_Tuong_Tac.GetDlgCtrlID(), m_bHuy_Tuong_Tac);

}
void CDanhSachTuongTacThuoc::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDanhSachTuongTacThuoc::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CDanhSachTuongTacThuoc::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bHuy_Tuong_Tac=FALSE;
	m_bOutPatient=FALSE;

}
int CDanhSachTuongTacThuoc::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CDanhSachTuongTacThuoc::OnFromDateChange(){
	
} */
/*void CDanhSachTuongTacThuoc::OnFromDateSetfocus(){
	
} */
/*void CDanhSachTuongTacThuoc::OnFromDateKillfocus(){
	
} */
int CDanhSachTuongTacThuoc::OnFromDateCheckValue(){
	return 0;
} 
/*void CDanhSachTuongTacThuoc::OnToDateChange(){
	
} */
/*void CDanhSachTuongTacThuoc::OnToDateSetfocus(){
	
} */
/*void CDanhSachTuongTacThuoc::OnToDateKillfocus(){
	
} */
int CDanhSachTuongTacThuoc::OnToDateCheckValue(){
	return 0;
}
void CDanhSachTuongTacThuoc::OnHuy_Tuong_TacSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhSachTuongTacThuoc::OnDepartmentDblClick(){
	
} 
void CDanhSachTuongTacThuoc::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhSachTuongTacThuoc::OnOutPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CDanhSachTuongTacThuoc::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhSachTuongTacThuoc::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name, sd_type as depttype from sys_dept where sd_type in ('DT','KB') and SD_ISACTIVE='Y' order by sd_type, sd_index"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("depttype")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
}
void CDanhSachTuongTacThuoc::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString szSQL, tmpStr, szOldDept, szNewDept;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, * rptGroup = NULL;
	if (!rpt.Init(_T("Reports\\HMS\\SOVAOVIEN_VIENTM.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), 
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	int nIdx=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("khoa"), szNewDept);
		if (szNewDept != szOldDept && !szNewDept.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
				tmpStr = szNewDept;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}

			szOldDept = szNewDept;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%d"), nIdx++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("soba"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("hovaten"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("namsinh"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("gioitinh"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("khoachuyenden"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			rs.GetValue(_T("chuandoankb"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			rs.GetValue(_T("chuandoankdt"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			rs.GetValue(_T("chucnangsong"), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			rs.GetValue(_T("diengiai"), tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
		}
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();	
} 
void CDanhSachTuongTacThuoc::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	
	if (!xls.Load(_T("Exports\\CHITIETTUONGTACTHUOC.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	
	szSQL = GetQueryString();	

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("sophieu"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tencap_tuongtac"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenthuoc1"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenthuoc2"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoatchat1"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hoatchat2"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ghi_chu"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoayeucau"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("tenbacsi"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("thoigian_chidinh"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}
	
	if (nTotal[11] > 0)
	{
		xls.SetCellText(10, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		for(int i = 11; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}
	
	xls.Save(_T("Exports\\CHITIETTUONGTACTHUOC2.xls"));
} 
int CDanhSachTuongTacThuoc::OnAddTMPatientListAdmitKTM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDanhSachTuongTacThuoc::OnEditTMPatientListAdmitKTM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDanhSachTuongTacThuoc::OnDeleteTMPatientListAdmitKTM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelTMPatientListAdmitKTM();
 	}
	return 0;
}
int CDanhSachTuongTacThuoc::OnSaveTMPatientListAdmitKTM(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnTMPatientListAdmitKTMListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDanhSachTuongTacThuoc::OnCancelTMPatientListAdmitKTM(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CDanhSachTuongTacThuoc::OnTMPatientListAdmitKTMListLoadData(){
	return 0;
}
CString CDanhSachTuongTacThuoc::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szDepts, szTemp;


	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), szTemp);

		}
	}
	if (m_bHuy_Tuong_Tac)
	{
	szWhere.AppendFormat(_T("NVL(lg.GHICHU_TUONGTAC,'N') in ('Hủy tương tác') and (MA_TUONG_TAC+MA_THUOC_1+MA_THUOC_2)>0 and lg.THOI_GIAN between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);	
	}
	else

	szWhere.AppendFormat(_T("NVL(lg.GHICHU_TUONGTAC,'N') not in ('Hủy tương tác') and (MA_TUONG_TAC+MA_THUOC_1+MA_THUOC_2)>0 and lg.THOI_GIAN between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);	
	/*szSQL.Format(_T(" WITH tbl1 as ") \
			_T(" (SELECT ph.hpo_docno as docno, ph.hpo_orderid as orderid,ph.hpo_doctor as doctor, ") \
			_T(" ph.hpo_storage_id as stockid, ph.HPO_DEPTID as deptid, tt.HPO_ORDERID as orderid1, ") \
			_T(" Get_productclassname(tt.hpo_drugcode_1) as drugcode1, clv.PRODUCT_NAME as productname1, lg.GHICHU_TUONGTAC AS ghichu ") \
			_T(" from hms_pharmaorderlinea_view phl") \
			_T(" LEFT JOIN hms_pharmaorder_view ph ON (ph.hpo_docno = phl.hpol_docno AND ph.hpo_orderid = phl.hpol_orderid AND ph.HPO_ORDERSTATUS not in 'C')") \
			_T(" LEFT JOIN m_product_classline_view clv ON (clv.product_id = phl.HPOL_PRODUCT_ID)") \
			_T(" LEFT JOIN TUONG_TAC_LOG lg ON (ph.hpo_docno = lg.SO_HOSO )") \
			_T(" INNER JOIN hms_tuongtacthuoc tt ON (tt.hpo_drugcode_1 = clv.line_id)") \
			_T(" WHERE %s AND ph.HPO_DEPTID in (%s) ") \
			_T(" ),") \
			_T(" tbl2 as") \
			_T(" (SELECT ph.hpo_docno as docno, ph.hpo_orderid as orderid, ph.hpo_doctor as doctor,") \
			_T(" ph.hpo_storage_id as stockid, ph.HPO_DEPTID as deptid,tt.HPO_ORDERID as orderid2, ") \
			_T(" Get_productclassname(tt.hpo_drugcode_2) as drugcode2, clv.PRODUCT_NAME as productname2, lg.GHICHU_TUONGTAC AS ghichu ") \
			_T(" from hms_pharmaorderlinea_view phl") \
			_T(" LEFT JOIN hms_pharmaorder_view ph ON (ph.hpo_docno = phl.hpol_docno AND ph.hpo_orderid = phl.hpol_orderid AND ph.HPO_ORDERSTATUS not in 'C')") \
			_T(" LEFT JOIN m_product_classline_view clv ON (clv.product_id = phl.HPOL_PRODUCT_ID)") \
			_T(" LEFT JOIN TUONG_TAC_LOG lg ON (ph.hpo_docno = lg.SO_HOSO )") \
			_T(" INNER JOIN hms_tuongtacthuoc tt ON (tt.hpo_drugcode_2 = clv.line_id)") \
			_T(" WHERE %s AND ph.HPO_DEPTID in (%s) ") \
			_T(" )") \
			_T(" SELECT tbl1.docno as sohoso,") \
			_T(" get_patientname(tbl1.docno) as patname,") \
			_T(" tbl2.orderid sophieu,") \
			_T(" GET_STORAGENAME(tbl1.stockid) as tenkho,") \
			_T(" GET_USERNAME(tbl1.doctor) as tenbacsi,") \
			_T(" tbl1.deptid as khoayeucau,") \
			_T(" tbl1.drugcode1 as hoatchat1,") \
			_T(" tbl2.drugcode2 as hoatchat2,") \
			_T(" tbl1.productname1 as tenthuoc1,") \
			_T(" tbl2.productname2 as tenthuoc2, ") \
			_T(" tbl1.ghichu       AS ghi_chu") \
			_T(" FROM tbl1, tbl2") \
			_T(" WHERE (") \
			_T(" tbl1.docno = tbl2.docno") \
			_T(" AND tbl1.orderid1 = tbl2.orderid2)") \
			_T(" GROUP BY ") \
			_T(" tbl1.docno,") \
			_T(" tbl1.orderid,") \
			_T(" tbl1.stockid,") \
			_T(" tbl1.doctor,") \
			_T(" tbl1.deptid,") \
			_T(" tbl1.drugcode1,") \
			_T(" tbl1.productname1,") \
			_T(" tbl1.ghichu,") \
			_T(" tbl2.docno,") \
			_T(" tbl2.orderid,") \
			_T(" tbl2.stockid,") \
			_T(" tbl2.doctor,") \
			_T(" tbl2.deptid,") \
			_T(" tbl2.drugcode2,") \
			_T(" tbl2.productname2") \
			//_T(" tbl2.ghichu") \//
			_T(" ") \
			_T(" ORDER BY tbl1.docno, tbl1.orderid"), szWhere, szDepts, szWhere, szDepts);*/

szSQL.Format(_T(" WITH tbl1 AS") \
			_T(" (select") \
			_T(" so_hoso as docno,") \
			_T(" 0 as sophieu,") \
			_T(" hpo_detail as tencap_tuongtac,") \
			_T(" product_name as tenthuoc1,") \
			_T(" product_classname as hoatchat1,") \
			_T(" lg.GHICHU_TUONGTAC as lydo,") \
			_T(" lg.KHOA as khoachidinh,") \
			_T(" lg.DOCTOR as bacsi,") \
			_T(" lg.THOI_GIAN as thoigian_chidinh") \
			_T(" from TUONG_TAC_LOG lg") \
			_T(" left join m_product_view ON (product_id=ma_thuoc_1)") \
			_T(" left join HMS_TUONGTACTHUOC ON (lg.MA_TUONG_TAC=hpo_orderid)") \
			_T(" WHERE %s AND lg.KHOA in (%s) ") \
			_T(" ),") \
			_T(" tbl2 AS") \
			_T(" (select") \
			_T(" so_hoso as docno,") \
			_T(" 0 as sophieu,") \
			_T(" hpo_detail as tencap_tuongtac,") \
			_T(" product_name as tenthuoc2,") \
			_T(" product_classname as hoatchat2,") \
			_T(" lg.GHICHU_TUONGTAC as lydo,") \
			_T(" lg.KHOA as khoachidinh,") \
			_T(" lg.DOCTOR as bacsi,") \
			_T(" lg.THOI_GIAN as thoigian_chidinh") \
			_T(" from TUONG_TAC_LOG lg") \
			_T(" left join m_product_view ON (product_id=ma_thuoc_2)") \
			_T(" left join HMS_TUONGTACTHUOC ON (lg.MA_TUONG_TAC=hpo_orderid)") \
			_T(" WHERE %s AND lg.KHOA in (%s) ") \
			_T(" )") \
			_T(" SELECT tbl1.docno              AS sohoso,") \
			_T("   0 as sophieu,") \
			_T("   get_patientname(tbl1.docno)  AS patname,  ") \
			_T("   tbl1.tencap_tuongtac          AS tencap_tuongtac,") \
			_T("   tbl1.tenthuoc1                AS tenthuoc1,") \
			_T("   tbl2.tenthuoc2                AS tenthuoc2,") \
			_T("   tbl1.hoatchat1                AS hoatchat1,") \
			_T("   tbl2.hoatchat2                AS hoatchat2,") \
			_T("   GET_USERNAME(tbl1.bacsi)      AS tenbacsi,") \
			_T("   tbl1.khoachidinh              AS khoayeucau,  ") \
			_T("   tbl1.lydo                     AS ghi_chu,") \
			_T("   to_char(tbl1.thoigian_chidinh, 'DD/MM/YYYY HH24:MI') as thoigian_chidinh") \
			_T(" FROM tbl1,") \
			_T("   tbl2") \
			_T(" WHERE ( tbl1.docno = tbl2.docno )") \
			_T(" GROUP BY ") \
			_T(" tbl1.docno,") \
			_T(" tbl1.tencap_tuongtac,") \
			_T(" tbl1.bacsi,") \
			_T(" tbl1.khoachidinh,") \
			_T(" tbl1.tenthuoc1,") \
			_T(" tbl2.tenthuoc2,") \
			_T(" tbl1.hoatchat1,") \
			_T(" tbl2.hoatchat2,") \
			_T(" tbl1.lydo,") \
			_T(" tbl1.thoigian_chidinh") \
			_T(" ORDER BY tbl1.docno"), szWhere, szDepts, szWhere, szDepts);
	return szSQL;
}

CString CDanhSachTuongTacThuoc::GetQueryString1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, szDepts, szTemp;

	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
		{
			m_wndDepartmentList.SetCurSel(i);
			szTemp = m_wndDepartmentList.GetItemText(i, 0);
			if (!szDepts.IsEmpty())
				szDepts += _T(", ");
			szDepts.AppendFormat(_T("'%s'"), szTemp);

		}
	}	
	szWhere.AppendFormat(_T("NVL(GHICHU_TUONGTAC,'N') in ('Hủy tương tác') and THOI_GIAN between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
		
	szSQL.Format(_T(" SELECT") \
				_T(" so_hoso as sohoso,") \
				_T(" get_patientname(so_hoso) as patname,") \
				_T(" ten_cap_tuongtac as hoatchat1,") \
				_T(" ghichu_tuongtac as ghi_chu,") \
				_T(" khoa as khoayeucau,") \
				_T(" GET_USERNAME(doctor)   AS tenbacsi,") \
				_T(" thoi_gian as thoigian_huy") \
				_T(" FROM TUONG_TAC_LOG WHERE %s and khoa in (%s)"), szWhere, szDepts);
				return szSQL;
}
int CDanhSachTuongTacThuoc::OnListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, TRUE);
	}
	return 0;
}

int CDanhSachTuongTacThuoc::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, FALSE);
	}
	return 0;
}