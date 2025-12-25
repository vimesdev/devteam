#include "stdafx.h"
#include "CTXHDanhSach_DangDieuTri.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CDanhSachDieuTri *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CDanhSachDieuTri *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CDanhSachDieuTri *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachDieuTri *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CDanhSachDieuTri *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CDanhSachDieuTri *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CDanhSachDieuTri *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CDanhSachDieuTri *)pWnd)->OnToDateCheckValue();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CDanhSachDieuTri*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CDanhSachDieuTri*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CDanhSachDieuTri*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CDanhSachDieuTri*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CDanhSachDieuTri *pVw = (CDanhSachDieuTri *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CDanhSachDieuTri *pVw = (CDanhSachDieuTri *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CDanhSachDieuTri*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CDanhSachDieuTri*)pWnd)->OnListUnCheckAll();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CDanhSachDieuTri*)pWnd)->OnOutPatientSelect();
}
static void _OnByDocnoSelectFnc(CWnd *pWnd){
	 ((CDanhSachDieuTri*)pWnd)->OnByDocnoSelect();
}
CDanhSachDieuTri::CDanhSachDieuTri(CWnd *pWnd)
{

	m_nDlgWidth = 760;
	m_nDlgHeight = 520;
	SetDefaultValues();
}
CDanhSachDieuTri::~CDanhSachDieuTri()
{
}
void CDanhSachDieuTri::OnCreateComponents()
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
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 0, 0, 0, 0);
	m_wndExport.Create(this, _T("&ExportXLS"), 330, 404, 425, 429);
	m_wndOutPatient.Create(this, _T("OutPatient"), 5, 404, 139, 429);
	m_wndByDocno.Create(this, _T("Theo số hồ sơ"), 145, 404, 279, 429);
}
void CDanhSachDieuTri::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

}
void CDanhSachDieuTri::OnSetWindowEvents(){
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndByDocno.SetEvent(WE_CLICK, _OnByDocnoSelectFnc);
	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate += _T(" 07:30");
	OnDepartmentLoadData();
	OnListCheckAll();
	UpdateData(false);

}
void CDanhSachDieuTri::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndByDocno.GetDlgCtrlID(), m_bByDocno);

}
void CDanhSachDieuTri::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDanhSachDieuTri::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CDanhSachDieuTri::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bByDocno=FALSE;

}
int CDanhSachDieuTri::SetMode(int nMode){
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
/*void CDanhSachDieuTri::OnFromDateChange(){
	
} */
/*void CDanhSachDieuTri::OnFromDateSetfocus(){
	
} */
/*void CDanhSachDieuTri::OnFromDateKillfocus(){
	
} */
int CDanhSachDieuTri::OnFromDateCheckValue(){
	return 0;
} 
/*void CDanhSachDieuTri::OnToDateChange(){
	
} */
/*void CDanhSachDieuTri::OnToDateSetfocus(){
	
} */
/*void CDanhSachDieuTri::OnToDateKillfocus(){
	
} */
int CDanhSachDieuTri::OnToDateCheckValue(){
	return 0;
} 
void CDanhSachDieuTri::OnDepartmentDblClick(){
	
} 
void CDanhSachDieuTri::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CDanhSachDieuTri::OnOutPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CDanhSachDieuTri::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CDanhSachDieuTri::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartmentList.BeginLoad(); 
	m_wndDepartmentList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_type='DT' order by sd_index"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartmentList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartmentList.EndLoad(); 
	return nCount;
}
void CDanhSachDieuTri::OnPrintPreviewSelect(){
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
void CDanhSachDieuTri::OnByDocnoSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	
}
void CDanhSachDieuTri::OnExportSelect()
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
	if (!xls.Load(_T("Exports\\CTXH_DANHSACHDIEUTRI.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	
	if (m_bByDocno)
		{
		szSQL = GetQueryString1();	
		}
		else
		{
		szSQL = GetQueryString();	
		}
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("object"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("disrate"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("admitdate"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T(" "), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitnumber"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bedName"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("from_dept"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("contact_tel"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tengoi"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

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
	
	xls.Save(_T("Exports\\CTXH_DANHSACHDIEUTRI2X.xls"));
} 
int CDanhSachDieuTri::OnAddTMPatientListAdmitKTM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDanhSachDieuTri::OnEditTMPatientListAdmitKTM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDanhSachDieuTri::OnDeleteTMPatientListAdmitKTM(){
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
int CDanhSachDieuTri::OnSaveTMPatientListAdmitKTM(){
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
int CDanhSachDieuTri::OnCancelTMPatientListAdmitKTM(){
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
int CDanhSachDieuTri::OnTMPatientListAdmitKTMListLoadData(){
	return 0;
}
CString CDanhSachDieuTri::GetQueryString()
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

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and (htr_deptid in (%s))"), szDepts);
	}	

	if (m_bOutPatient)
	{
		szWhere.AppendFormat(_T(" AND htr_outpatient='Y' "));
	}
	else
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));

szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
			_T("   hd_docno          AS docno, htr_deptid as deptid,") \
			_T("   trim(hp_surname") \
			_T("   ||' '") \
			_T("   ||hp_midname") \
			_T("   ||' '") \
			_T("   ||hp_firstname)                       AS pname,") \
			_T("   extract(YEAR FROM hp_birthdate)       AS age,") \
			_T("   get_selection_desc('sys_sex', hp_sex) AS sex,") \
			_T("   hms_getobjectname(hd_object)          AS object,") \
	
			_T("   HD_CARDNO ||'||'|| hd_xcardno as cardno,") \

			_T("   case when NVL(HD_INSLINE, 'N') = 'Y' AND NVL(HD_EMERGENCY,'N')='N' THEN HC_DISCOUNT*(select HMS_INSOFFLINE from hms_config)/100 else cast(hd_disrate as integer) end as disrate, ") \
			_T("   (htr_admitdate)                                 AS admitdate,") \
			_T("   (htr_dischargedate)                             AS dischargedate,") \
			_T("   htr_idx                                              AS idx,") \
			_T("   htr_status                                           AS status,") \
			_T("   hcr_recordno                                         AS admitnumber,") \
			_T("   htr_emergency                                        AS emergency,") \
			_T("   hms_getActiveBed(htr_docno, htr_deptid)              AS bedName,") \
			_T("   get_selection_desc('hms_suggestion', htr_suggestion) AS suggestion,") \
			_T("   htr_doctor                                           AS doctor, ") \
			_T("   hd_telephone phone, hd_contacttel contact_tel, hfel_desc as tengoi,") \
			_T(" case when htr_idx=1 then hd_enddept else hcr_admitdept end as from_dept ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_clinical_record") \
			_T(" ON(hcr_docno=hd_docno)") \
			_T(" LEFT JOIN hms_treatment_record") \
			_T(" ON(htr_docno         =hd_docno)") \
			_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \

			_T(" LEFT JOIN hms_fee_extraline ON (htr_docno = HFEL_DOCNO)") \
			_T(" LEFT JOIN hms_fee_extra ON (hfe_docno = HFEL_DOCNO AND hfe_fee_extra_id = hfel_fee_extra_id)") \

			_T(" WHERE htr_docno > 0 AND htr_status='I' AND hfe_type IN('S','T') %s ") \
			_T(" ORDER BY htr_deptid, hfe_fee_extra_id, admitdate,") \
			_T("   pname,") \
			_T("   htr_idx"),  szWhere);
	return szSQL;
}
int CDanhSachDieuTri::OnListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, TRUE);
	}
	return 0;
}

int CDanhSachDieuTri::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, FALSE);
	}
	return 0;
}
CString CDanhSachDieuTri::GetQueryString1()
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

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and (htr_deptid in (%s))"), szDepts);
	}	

	if (m_bOutPatient)
	{
		szWhere.AppendFormat(_T(" AND htr_outpatient='Y' "));
	}
	else
		szWhere.AppendFormat(_T(" AND (htr_outpatient <> 'Y' OR htr_outpatient IS NULL) "));

				szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T("   (SELECT hp_patientno AS patientno,") \
				_T("     hd_docno           AS docno,") \
				_T("     htr_deptid         AS deptid,") \
				_T("     trim(hp_surname") \
				_T("     ||' '") \
				_T("     ||hp_midname") \
				_T("     ||' '") \
				_T("     ||hp_firstname)                       AS pname,") \
				_T("     extract(YEAR FROM hp_birthdate)       AS age,") \
				_T("     get_selection_desc('sys_sex', hp_sex) AS sex,") \
				_T("     hms_getobjectname(hd_object)          AS object,") \
				_T("     HD_CARDNO") \
				_T("     ||'||'") \
				_T("     || hd_xcardno AS cardno,") \
				_T("     CASE") \
				_T("       WHEN NVL(HD_INSLINE, 'N') = 'Y'") \
				_T("       AND NVL(HD_EMERGENCY,'N') ='N'") \
				_T("       THEN HC_DISCOUNT*") \
				_T("         (SELECT HMS_INSOFFLINE FROM hms_config") \
				_T("         )/100") \
				_T("       ELSE CAST(hd_disrate AS INTEGER)") \
				_T("     END                                                  AS disrate,") \
				_T("     (htr_admitdate)                                      AS admitdate,") \
				_T("     (htr_dischargedate)                                  AS dischargedate,") \
				_T("     htr_idx                                              AS idx,") \
				_T("     htr_status                                           AS status,") \
				_T("     hcr_recordno                                         AS admitnumber,") \
				_T("     htr_emergency                                        AS emergency,") \
				_T("     hms_getActiveBed(htr_docno, htr_deptid)              AS bedName,") \
				_T("     get_selection_desc('hms_suggestion', htr_suggestion) AS suggestion,") \
				_T("     htr_doctor                                           AS doctor,") \
				_T("     hd_telephone phone,") \
				_T("     hd_contacttel contact_tel,") \
				_T("     CASE") \
				_T("       WHEN htr_idx=1") \
				_T("       THEN hd_enddept") \
				_T("       ELSE hcr_admitdept") \
				_T("     END AS from_dept") \
				_T("   FROM hms_patient") \
				_T("   LEFT JOIN hms_doc") \
				_T("   ON(hd_patientno=hp_patientno)") \
				_T("   LEFT JOIN hms_clinical_record") \
				_T("   ON(hcr_docno=hd_docno)") \
				_T("   LEFT JOIN hms_treatment_record") \
				_T("   ON(htr_docno =hd_docno)") \
				_T("   LEFT JOIN hms_card") \
				_T("   ON(hc_patientno=hd_patientno") \
				_T("   AND hc_idx     =hd_cardidx)") \
				_T("   LEFT JOIN hms_fee_extraline") \
				_T("   ON (htr_docno = HFEL_DOCNO)") \
				_T("   LEFT JOIN hms_fee_extra") \
				_T("   ON (hfe_docno        = HFEL_DOCNO") \
				_T("   AND hfe_fee_extra_id = hfel_fee_extra_id)") \
				_T("   WHERE htr_docno      > 0") \
				_T("   AND htr_status       ='I'") \
				_T("   AND hfe_type        IN('S','T') %s") \
				_T("   ORDER BY htr_deptid,") \
				_T("     hfe_fee_extra_id,") \
				_T("     admitdate,") \
				_T("     pname,") \
				_T("     htr_idx") \
				_T("   )") \
				_T(" GROUP BY patientno,") \
				_T("   docno,") \
				_T("   deptid,") \
				_T("   pname,") \
				_T("   age,") \
				_T("   sex,") \
				_T("   object,") \
				_T("   cardno,") \
				_T("   disrate,") \
				_T("   admitdate,") \
				_T("   dischargedate,") \
				_T("   idx,") \
				_T("   status,") \
				_T("   admitnumber,") \
				_T("   emergency,") \
				_T("   bedName,") \
				_T("   suggestion,") \
				_T("   doctor,") \
				_T("   phone,") \
				_T("   contact_tel,") \
				_T("   from_dept") \
				_T(" ORDER BY deptid, admitdate, pname, idx"), szWhere);
	return szSQL;
}