#include "stdafx.h"
#include "RPTTotalResultHealthStaff.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTotalResultHealthStaff *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTotalResultHealthStaff *)pWnd)->OnToDateCheckValue();
} 
static void _OnSectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTotalResultHealthStaff* )pWnd)->OnSectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSectionSelendokFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnSectionSelendok();
}
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnSectionKillfocus();
}*/
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnSectionKillfocus();
}*/
static long _OnSectionLoadDataFnc(CWnd *pWnd){
	return ((CRPTTotalResultHealthStaff *)pWnd)->OnSectionLoadData();
}
/*static void _OnSectionAddNewFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnSectionAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTotalResultHealthStaff* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTTotalResultHealthStaff *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CRPTTotalResultHealthStaff *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CRPTTotalResultHealthStaff *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTTotalResultHealthStaff *pVw = (CRPTTotalResultHealthStaff *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTTotalResultHealthStaff *pVw = (CRPTTotalResultHealthStaff *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddRPTTotalResultHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalResultHealthStaff*)pWnd)->OnAddRPTTotalResultHealthStaff();
} 
static int _OnEditRPTTotalResultHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalResultHealthStaff*)pWnd)->OnEditRPTTotalResultHealthStaff();
} 
static int _OnDeleteRPTTotalResultHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalResultHealthStaff*)pWnd)->OnDeleteRPTTotalResultHealthStaff();
} 
static int _OnSaveRPTTotalResultHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalResultHealthStaff*)pWnd)->OnSaveRPTTotalResultHealthStaff();
} 
static int _OnCancelRPTTotalResultHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalResultHealthStaff*)pWnd)->OnCancelRPTTotalResultHealthStaff();
} 
CRPTTotalResultHealthStaff::CRPTTotalResultHealthStaff(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTTotalResultHealthStaff::~CRPTTotalResultHealthStaff(){
}
void CRPTTotalResultHealthStaff::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information Report"), 5, 5, 490, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 29, 485, 54); 
	m_wndSectionLabel.Create(this, _T("Section"), 10, 60, 90, 85);
	m_wndSection.Create(this,95, 60, 245, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 250, 60, 330, 85);
	m_wndDepartment.Create(this,335, 60, 485, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 90, 90, 115);
	m_wndDocumentNo.Create(this,95, 90, 245, 115); 
	m_wndPrint.Create(this, _T("&Print"), 323, 125, 403, 150);
	m_wndExport.Create(this, _T("&Export"), 410, 125, 490, 150);

}
void CRPTTotalResultHealthStaff::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndSection.SetCheckValue(true);
	m_wndSection.LimitText(35);
	m_wndDocumentNo.SetLimitText(35);
	//m_wndDocumentNo.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

	m_wndSection.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSection.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

}
void CRPTTotalResultHealthStaff::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSection.SetEvent(WE_SELENDOK, _OnSectionSelendokFnc);
	//m_wndSection.SetEvent(WE_SETFOCUS, _OnSectionSetfocusFnc);
	//m_wndSection.SetEvent(WE_KILLFOCUS, _OnSectionKillfocusFnc);
	m_wndSection.SetEvent(WE_SELCHANGE, _OnSectionSelectChangeFnc);
	m_wndSection.SetEvent(WE_LOADDATA, _OnSectionLoadDataFnc);
	//m_wndSection.SetEvent(WE_ADDNEW, _OnSectionAddNewFnc);
	//m_wndSection.SetEvent(WE_ADDNEW, _OnSectionAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTTotalResultHealthStaff::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSection.GetDlgCtrlID(), m_szSectionKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CRPTTotalResultHealthStaff::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTTotalResultHealthStaff::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTTotalResultHealthStaff::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSectionKey.Empty();
	m_szDocumentNo.Empty();
	m_szDepartmentKey.Empty();

}
int CRPTTotalResultHealthStaff::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate = pMF->GetSysDate();
			m_szToDate += _T("23:59");
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
/*void CRPTTotalResultHealthStaff::OnFromDateChange(){
	
} */
/*void CRPTTotalResultHealthStaff::OnFromDateSetfocus(){
	
} */
/*void CRPTTotalResultHealthStaff::OnFromDateKillfocus(){
	
} */
int CRPTTotalResultHealthStaff::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTTotalResultHealthStaff::OnToDateChange(){
	
} */
/*void CRPTTotalResultHealthStaff::OnToDateSetfocus(){
	
} */
/*void CRPTTotalResultHealthStaff::OnToDateKillfocus(){
	
} */
int CRPTTotalResultHealthStaff::OnToDateCheckValue(){
	return 0;
} 
void CRPTTotalResultHealthStaff::OnSectionSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTotalResultHealthStaff::OnSectionSelendok(){
	 
}
/*void CRPTTotalResultHealthStaff::OnSectionSetfocus(){
	
}*/
/*void CRPTTotalResultHealthStaff::OnSectionKillfocus(){
	
}*/
long CRPTTotalResultHealthStaff::OnSectionLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSection.IsSearchKey() && !m_szSectionKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szSectionKey);
	}
	m_wndSection.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type='KB' AND SD_ISACTIVE='Y' %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSection.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTTotalResultHealthStaff::OnSectionAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTTotalResultHealthStaff::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTotalResultHealthStaff::OnDepartmentSelendok(){
	 
}
/*void CRPTTotalResultHealthStaff::OnDepartmentSetfocus(){
	
}*/
/*void CRPTTotalResultHealthStaff::OnDepartmentKillfocus(){
	
}*/
long CRPTTotalResultHealthStaff::OnDepartmentLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTTotalResultHealthStaff::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTTotalResultHealthStaff::OnDocumentNoChange(){
	
} */
/*void CRPTTotalResultHealthStaff::OnDocumentNoSetfocus(){
	
} */
/*void CRPTTotalResultHealthStaff::OnDocumentNoKillfocus(){
	
} */
int CRPTTotalResultHealthStaff::OnDocumentNoCheckValue(){
	return 0;
} 
void CRPTTotalResultHealthStaff::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szYear;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/RPT_TONGHOPKQKTSUCKHOECANBO.RPT")) ) return ;

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd||hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	szYear = pMF->GetSysDate();
	tmpStr.Format(_T("TỔNG HỢP KẾT QUẢ KIỂM TRA SỨC KHỎE CÁN BỘ NHÂN VIÊN NĂM %s"), szYear.Mid(0, 4));
	rpt.GetReportHeader()->SetValue(_T("REPORTTITLE"), tmpStr);
	
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);

	int nTong = 0;
	int nIndex = 1;
	CReportSection* rptDetail;
	CReportSection *rptSector;
	CString szOldGrp, szNewGrp;

	if(rs.IsEOF())
	{
		MessageBox(_T("No Data"), 0,  MB_ICONERROR);
		return;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("khoa"), szNewGrp);
		if (szNewGrp != szOldGrp)
		{
			rptSector = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptSector->SetValue(_T("Khoa"), szNewGrp);
			szOldGrp = szNewGrp;
		}
		rptDetail = rpt.AddDetail();
		if (!rs.IsEOF())
		{
			tmpStr.Format(_T("%d"), nIndex);
			rptDetail->SetValue(_T("1"), tmpStr);

			rs.GetValue(_T("sohoso"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			
			rs.GetValue(_T("pname"),tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			
			rs.GetValue(_T("birthyear"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);

			rs.GetValue(_T("capbac"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);

			rs.GetValue(_T("chucvu"), tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);

			rs.GetValue(_T("khoa"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);

			rs.GetValue(_T("chieucao"), tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);

			rs.GetValue(_T("cannang"), tmpStr);				 
			rptDetail->SetValue(_T("9"), tmpStr);

			rs.GetValue(_T("huyetapmin"), tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);

			rs.GetValue(_T("huyetapmax"), tmpStr);
			rptDetail->SetValue(_T("10.1"), tmpStr);

			rs.GetValue(_T("tiensu"), tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);

			rs.GetValue(_T("xetnghiem"), tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);

			rs.GetValue(_T("chandoan"), tmpStr);
			rptDetail->SetValue(_T("13"), tmpStr);

			rs.GetValue(_T("phanloai"), tmpStr);
			rptDetail->SetValue(_T("14"), tmpStr);

			rs.MoveNext();
			nIndex++;
		}
	}	
	
	CString szDate;
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CRPTTotalResultHealthStaff::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szYear;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 17);
	xls.SetColumnWidth(3, 9);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 9);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 6);
	xls.SetColumnWidth(8, 6);
	xls.SetColumnWidth(9, 7);
	xls.SetColumnWidth(10, 11);
	xls.SetColumnWidth(11, 16);
	xls.SetColumnWidth(12, 17);
	xls.SetColumnWidth(13, 8);
	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIÊN TWQĐ 108"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("BÁO CÁO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING | FMT_BORDER, true, 11);
	szYear = pMF->GetSysDate();
	tmpStr.Format(_T("TỔNG HỢP KẾT QUẢ KIỂM TRA SỨC KHỎE CÁN BỘ NHÂN VIÊN NĂM %s"), szYear.Mid(0, 4));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING  | FMT_BORDER, true, 11);
	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("HỌ TÊN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 6, _T("NĂM SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 6, _T("QUÂN HÀM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 6, _T("CHỨC VỤ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 6, _T("ĐƠN VỊ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 6, _T("CHIỀU CAO"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 6, _T("CÂN NẶNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 6, _T("HUYẾT ÁP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 6, _T("TIỀN SỬ BỆNH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 6, _T("XÉT NGHIỆM"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 6, _T("CHẨN ĐOÁN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 6, _T("PHÂN LOẠI"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 0, 12);
	xls.SetMerge(4, 4, 0, 12);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	nRow = 7;
	nCol = 0;
	int nIndex = 1;
	CString szOldGrp, szNewGrp;
	while(!rs.IsEOF()){
		rs.GetValue(_T("khoa"), szNewGrp);
		if (szNewGrp != szOldGrp)
		{
			 xls.SetMerge(nRow, nRow, 0, 13);
			 xls.SetCellText(nCol, nRow, szNewGrp, FMT_TEXT);
			 szOldGrp = szNewGrp;;
			 nRow++;
		}
		tmpStr.Format(_T("%d"), nIndex);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("capbac"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("chucvu"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("chieucao"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("cannang"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("huyetap"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("tiensu"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("xetnghiem"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("chandoan"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("phanloai"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		nRow++;
		nIndex++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TongHopKiemTraSKCanBoNV.xls"));
} 
int CRPTTotalResultHealthStaff::OnAddRPTTotalResultHealthStaff(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTTotalResultHealthStaff::OnEditRPTTotalResultHealthStaff(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTTotalResultHealthStaff::OnDeleteRPTTotalResultHealthStaff(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelRPTTotalResultHealthStaff();
 	}
	return 0;
}
int CRPTTotalResultHealthStaff::OnSaveRPTTotalResultHealthStaff(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
 		//OnRPTTotalResultHealthStaffListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTTotalResultHealthStaff::OnCancelRPTTotalResultHealthStaff(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	return 0;
} 
int CRPTTotalResultHealthStaff::OnRPTTotalResultHealthStaffListLoadData(){
	return 0;
}

CString CRPTTotalResultHealthStaff::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;

	if(!m_szSectionKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szSectionKey);
	}

	if(!m_szDocumentNo.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hd_docno = '%s'"), m_szDocumentNo);
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT DISTINCT hd_docno          AS sohoso,") \
		_T("   hp_department                   AS khoa,") \
		_T("   get_patientname(hd_docno)       AS pname,") \
		_T("   EXTRACT(YEAR FROM hp_birthdate) AS birthyear,") \
		_T("   (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_rank' AND ss_code = hp_rank") \
		_T("   ) AS capbac,") \
		_T("   (SELECT ss_desc") \
		_T("   FROM sys_sel") \
		_T("   WHERE ss_id = 'hms_position'") \
		_T("   AND ss_code = hp_position") \
		_T("   )                 AS chucvu,") \
		_T("   he_height         AS chieucao,") \
		_T("   he_weight         AS cannang,") \
		_T("   he_bloodpressure  AS huyetapmin,") \
		_T("   he_bloodpressurex AS huyetapmax,") \
		_T("   hdh_owner         AS tiensu,") \
		_T("   (SELECT Listagg(TO_CHAR(hfg_name), ',') within GROUP (") \
		_T("   ORDER BY hfg_id)") \
		_T("   FROM hms_fee_group") \
		_T("   WHERE hfg_id IN") \
		_T("     (SELECT hpc_groupid") \
		_T("     FROM hmsv_paraclinic") \
		_T("     WHERE hpc_docno = hd_docno") \
		_T("     AND hpc_status  ='T'") \
		_T("     )") \
		_T("   )             AS xetnghiem,") \
		_T("   hd_diagnostic AS chandoan,") \
		_T("   (SELECT ss_desc") \
		_T("   FROM sys_sel") \
		_T("   WHERE ss_id = 'hms_suggestion'") \
		_T("   AND ss_code =hd_suggestion") \
		_T("   ) AS phanloai") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_disease_hist") \
		_T(" ON(hdh_patientno = hd_patientno AND hdh_docno = hd_docno)") \
		_T(" LEFT JOIN hmsv_paraclinic") \
		_T(" ON(hpc_docno     = hd_docno)") \
		//_T(" WHERE he_roomid IN (102, 122, 123, 124)") \//
		//_T(" WHERE (he_roomid IN (select ss_code from sys_sel where ss_id='khu_phongkham_sk_nv' and ss_desc IN ('C1.1', 'C1.2', 'C1.3', 'AB', 'TYC'))  OR NVL(HD_108STAFF, 'Y') = 'Y' )") \//
		_T(" WHERE (he_roomid IN (select ss_code from sys_sel where ss_id='khu_phongkham_sk_nv' and ss_desc IN ('C1.1', 'C1.2', 'C1.3', 'AB', 'TYC')))") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND hp_department is not null %s ") \
		_T(" ORDER BY hp_department,") \
		_T("   hd_docno"), m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);

	return szSQL;
}