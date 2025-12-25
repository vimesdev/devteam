#include "stdafx.h"
#include "PMSBaocaochisoloccauthan.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMClasschisoloccauthan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMClasschisoloccauthan *)pWnd)->OnToDateCheckValue();
} 
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMClasschisoloccauthan*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CPMClasschisoloccauthan*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMClasschisoloccauthan*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CPMClasschisoloccauthan*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMClasschisoloccauthan *pVw = (CPMClasschisoloccauthan *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMClasschisoloccauthan *pVw = (CPMClasschisoloccauthan *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CPMClasschisoloccauthan*)pWnd)->OnListCheckAll();
}

static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CPMClasschisoloccauthan*)pWnd)->OnListUnCheckAll();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	 ((CPMClasschisoloccauthan*)pWnd)->OnOutPatientSelect();
}
static void _OnHuy_Tuong_TacSelectFnc(CWnd *pWnd){
	 ((CPMClasschisoloccauthan*)pWnd)->OnHuy_Tuong_TacSelect();
}
CPMClasschisoloccauthan::CPMClasschisoloccauthan(CWnd *pWnd)
{

	m_nDlgWidth = 760;
	m_nDlgHeight = 520;
	SetDefaultValues();
}
CPMClasschisoloccauthan::~CPMClasschisoloccauthan()
{
}
void CPMClasschisoloccauthan::OnCreateComponents()
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
	m_wndHuy_Tuong_Tac.Create(this, _T("Huy_Tuong_Tac"), 0, 0, 0, 0);

}
void CPMClasschisoloccauthan::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);

	m_wndDepartmentList.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartmentList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDepartmentList.InsertColumn(2, _T("Phân loại"), CFMT_TEXT, 100);

}
void CPMClasschisoloccauthan::OnSetWindowEvents(){
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
void CPMClasschisoloccauthan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndOutPatient.GetDlgCtrlID(), m_bOutPatient);
	DDX_Check(pDX, m_wndHuy_Tuong_Tac.GetDlgCtrlID(), m_bHuy_Tuong_Tac);

}
void CPMClasschisoloccauthan::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMClasschisoloccauthan::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMClasschisoloccauthan::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bHuy_Tuong_Tac=FALSE;
	m_bOutPatient=FALSE;

}
int CPMClasschisoloccauthan::SetMode(int nMode){
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
/*void CPMClasschisoloccauthan::OnFromDateChange(){
	
} */
/*void CPMClasschisoloccauthan::OnFromDateSetfocus(){
	
} */
/*void CPMClasschisoloccauthan::OnFromDateKillfocus(){
	
} */
int CPMClasschisoloccauthan::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMClasschisoloccauthan::OnToDateChange(){
	
} */
/*void CPMClasschisoloccauthan::OnToDateSetfocus(){
	
} */
/*void CPMClasschisoloccauthan::OnToDateKillfocus(){
	
} */
int CPMClasschisoloccauthan::OnToDateCheckValue(){
	return 0;
}
void CPMClasschisoloccauthan::OnHuy_Tuong_TacSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CPMClasschisoloccauthan::OnDepartmentDblClick(){
	
} 
void CPMClasschisoloccauthan::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CPMClasschisoloccauthan::OnOutPatientSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
int CPMClasschisoloccauthan::OnDepartmentDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMClasschisoloccauthan::OnDepartmentLoadData(){
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
void CPMClasschisoloccauthan::OnPrintPreviewSelect(){
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
void CPMClasschisoloccauthan::OnExportSelect()
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
	
	if (!xls.Load(_T("Exports\\CANHBAOCHISOLOCCAUTHAN.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	//xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
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

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_RIGHT);

		rs.GetValue(_T("ten_khoa"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("ma_ho_so"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("ho_ten"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tuoi"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioi_tinh"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_vao_vien"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_ra_vien"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("can_nang"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gia_tri_clcr"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("gia_tri_mdrd4"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		
		
		rs.GetValue(_T("icd"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chan_doan"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("thuoc_canh_bao"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_canh_bao"), tmpStr);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("muc_do_chap_thuan"), tmpStr);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("bac_sy_dt"), tmpStr);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ly_do_chi_dinh"), tmpStr);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}
	
	xls.Save(_T("Exports\\CANHBAOCHISOLOCCAUTHAN2.xls"));
} 
int CPMClasschisoloccauthan::OnAddTMPatientListAdmitKTM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMClasschisoloccauthan::OnEditTMPatientListAdmitKTM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMClasschisoloccauthan::OnDeleteTMPatientListAdmitKTM(){
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
int CPMClasschisoloccauthan::OnSaveTMPatientListAdmitKTM(){
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
int CPMClasschisoloccauthan::OnCancelTMPatientListAdmitKTM(){
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
int CPMClasschisoloccauthan::OnTMPatientListAdmitKTMListLoadData(){
	return 0;
}
CString CPMClasschisoloccauthan::GetQueryString()
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
	szSQL.Format(_T(" SELECT l_dept_id                 AS khoa,") \
		_T("   l_dept_name                             AS ten_khoa,") \
		_T("   l_doc_no                                AS ma_ho_so,") \
		_T("   l_patient_name                          AS ho_ten,") \
		_T("   l_age                                   AS tuoi,") \
		_T("   l_sex                                   AS gioi_tinh,") \
		_T("   TO_CHAR ( l_indate, 'dd/mm/yyyy' )      AS ngay_vao_vien,") \
		_T("   TO_CHAR ( l_outdate, 'dd/mm/yyyy' )     AS ngay_ra_vien,") \
		_T("   l_weight                                AS can_nang,") \
		_T("   l_crcl                                  AS gia_tri_clcr,") \
		_T("   l_mdrd4                                 AS gia_tri_mdrd4,") \
		_T("   l_icds                                  AS icd,") \
		_T("   l_diagnostic                            AS chan_doan,") \
		_T("   l_product_name                          AS thuoc_canh_bao,") \
		_T("   TO_CHAR ( l_createddate, 'dd/mm/yyyy' ) AS ngay_canh_bao,") \
		_T("   l_choice                                AS muc_do_chap_thuan,") \
		_T("   get_username (l_createdby)              AS bac_sy_dt,") \
		_T("   l_reason                                AS ly_do_chi_dinh") \
		_T(" FROM v_interaction_log") \
		_T(" WHERE l_hcl_idx       > 0") \
		_T(" AND l_createddate  BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND NVL ( l_crcl, 0 ) > 0"), m_szFromDate, m_szToDate);

	return szSQL;
}

CString CPMClasschisoloccauthan::GetQueryString1()
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
int CPMClasschisoloccauthan::OnListCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (!m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, TRUE);
	}
	return 0;
}

int CPMClasschisoloccauthan::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndDepartmentList.GetItemCount(); i++)
	{
		if (m_wndDepartmentList.GetCheck(i))
			m_wndDepartmentList.SetCheck(i, FALSE);
	}
	return 0;
}