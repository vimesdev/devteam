#include "stdafx.h"
#include "RPTTotalHealthStaff.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTotalHealthStaff *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTotalHealthStaff *)pWnd)->OnToDateCheckValue();
} 
static void _OnSectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTotalHealthStaff* )pWnd)->OnSectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSectionSelendokFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnSectionSelendok();
}
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnSectionKillfocus();
}*/
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnSectionKillfocus();
}*/
static long _OnSectionLoadDataFnc(CWnd *pWnd){
	return ((CRPTTotalHealthStaff *)pWnd)->OnSectionLoadData();
}
/*static void _OnSectionAddNewFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnSectionAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTotalHealthStaff* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTTotalHealthStaff *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CRPTTotalHealthStaff *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTotalHealthStaff* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTTotalHealthStaff *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTTotalHealthStaff *)pWnd)->OnTypeAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTTotalHealthStaff *pVw = (CRPTTotalHealthStaff *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTTotalHealthStaff *pVw = (CRPTTotalHealthStaff *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalHealthStaff*)pWnd)->OnAddRPTTotalDataHealthStaff();
} 
static int _OnEditRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalHealthStaff*)pWnd)->OnEditRPTTotalDataHealthStaff();
} 
static int _OnDeleteRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalHealthStaff*)pWnd)->OnDeleteRPTTotalDataHealthStaff();
} 
static int _OnSaveRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalHealthStaff*)pWnd)->OnSaveRPTTotalDataHealthStaff();
} 
static int _OnCancelRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTTotalHealthStaff*)pWnd)->OnCancelRPTTotalDataHealthStaff();
}
// static void _OnMustbeInjectSelectFnc(CWnd *pWnd)
// {
// 	 ((CRPTTotalHealthStaff*)pWnd)->OnMustbeInjectSelect();
// }

CRPTTotalHealthStaff::CRPTTotalHealthStaff(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTTotalHealthStaff::~CRPTTotalHealthStaff()
{
}
void CRPTTotalHealthStaff::OnCreateComponents()
{
	/*m_wndInformationReport.Create(this, _T("Information Report"), 5, 5, 490, 121);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 29, 485, 54); 
	m_wndSectionLabel.Create(this, _T("Section"), 10, 60, 90, 85);
	m_wndSection.Create(this,95, 59, 245, 84); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 250, 60, 330, 85);
	m_wndDocumentNo.Create(this,335, 60, 485, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this,95, 90, 245, 115);
	m_wndDepartmentLabel.Create(this, _T("Department"), 250, 90, 330, 115);
	m_wndDepartment.Create(this,335, 90, 485, 115);
	m_wndPrint.Create(this, _T("&Print"), 323, 126, 403, 151);
	m_wndExport.Create(this, _T("&Export"), 410, 126, 490, 151);*/
	m_wndInformationReport.Create(this, _T("Information Report"), 5, 5, 490, 119);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 29, 485, 54); 
	m_wndSectionLabel.Create(this, _T("Section"), 10, 60, 90, 85);
	m_wndSection.Create(this,95, 59, 245, 84); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 250, 60, 330, 85);
	m_wndDocumentNo.Create(this,335, 60, 485, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 250, 90, 330, 115);
	m_wndDepartment.Create(this,335, 90, 485, 115); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this,95, 90, 245, 115); 
	//m_wndPrint.Create(this, _T("&Print"), 323, 127, 403, 152);
	m_wndExport.Create(this, _T("&Export"), 410, 127, 490, 152);
	//m_wndMustbeInject.Create(this, _T("Bệnh nhân phải tiêm"), 10, 127, 183, 152);

}
void CRPTTotalHealthStaff::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndSection.SetCheckValue(true);
	m_wndSection.LimitText(35);
	m_wndDocumentNo.SetLimitText(35);
	//m_wndDocumentNo.SetCheckValue(true);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndSection.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSection.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRPTTotalHealthStaff::OnSetWindowEvents(){
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
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	//m_wndMustbeInject.SetEvent(WE_CLICK, _OnMustbeInjectSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTTotalHealthStaff::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSection.GetDlgCtrlID(), m_szSectionKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_Check(pDX, m_wndMustbeInject.GetDlgCtrlID(), m_bMustbeInject);

}
void CRPTTotalHealthStaff::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTTotalHealthStaff::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTTotalHealthStaff::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSectionKey.Empty();
	m_szDocumentNo.Empty();
	m_szTypeKey.Empty();
	m_szDepartmentKey.Empty();
	//m_bMustbeInject=FALSE;

}
int CRPTTotalHealthStaff::SetMode(int nMode){
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
/*void CRPTTotalHealthStaff::OnFromDateChange(){
	
} */
/*void CRPTTotalHealthStaff::OnFromDateSetfocus(){
	
} */
/*void CRPTTotalHealthStaff::OnFromDateKillfocus(){
	
} */
int CRPTTotalHealthStaff::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTTotalHealthStaff::OnToDateChange(){
	
} */
/*void CRPTTotalHealthStaff::OnToDateSetfocus(){
	
} */
/*void CRPTTotalHealthStaff::OnToDateKillfocus(){
	
} */
int CRPTTotalHealthStaff::OnToDateCheckValue(){
	return 0;
} 
void CRPTTotalHealthStaff::OnSectionSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTotalHealthStaff::OnSectionSelendok(){
	 
}
/*void CRPTTotalHealthStaff::OnSectionSetfocus(){
	
}*/
/*void CRPTTotalHealthStaff::OnSectionKillfocus(){
	
}*/
long CRPTTotalHealthStaff::OnSectionLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSection.IsSearchKey() && !m_szSectionKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szSectionKey);
	}
	m_wndSection.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_id IN ('C1.1','C1.2','C1.3','TYC') %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSection.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTTotalHealthStaff::OnSectionAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTTotalHealthStaff::OnDocumentNoChange(){
	
} */
/*void CRPTTotalHealthStaff::OnDocumentNoSetfocus(){
	
} */
/*void CRPTTotalHealthStaff::OnDocumentNoKillfocus(){
	
} */
int CRPTTotalHealthStaff::OnDocumentNoCheckValue(){
	return 0;
} 
void CRPTTotalHealthStaff::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTotalHealthStaff::OnTypeSelendok(){
	 
}
/*void CRPTTotalHealthStaff::OnTypeSetfocus(){
	
}*/
/*void CRPTTotalHealthStaff::OnTypeKillfocus(){
	
}*/
long CRPTTotalHealthStaff::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndType.AddItems(_T("K"), _T("Khám"));
	m_wndType.AddItems(_T("N"), _T("Nằm viện"));
	return 0;
}
/*void CRPTTotalHealthStaff::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTTotalHealthStaff::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTotalHealthStaff::OnDepartmentSelendok(){
	 
}
/*void CRPTTotalHealthStaff::OnDepartmentSetfocus(){
	
}*/
/*void CRPTTotalHealthStaff::OnDepartmentKillfocus(){
	
}*/
long CRPTTotalHealthStaff::OnDepartmentLoadData(){
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
/*void CRPTTotalHealthStaff::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
// void CRPTTotalHealthStaff::OnMustbeInjectSelect()
// {
// 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	
// }
void CRPTTotalHealthStaff::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTotalHealthStaff::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CRecord rs2(&pMF->m_db);	CRecord rs3(&pMF->m_db);	CRecord rs4(&pMF->m_db);	CRecord rs5(&pMF->m_db);	CRecord rs6(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	double nTotal = 0, nTotal2 = 0, nTotal3 = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 16);	xls.SetColumnWidth(2, 30);	xls.SetColumnWidth(3, 20);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("BÁO CÁO TỔNG HỢP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 16);	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd||hhmm, ddmmyyyy|hhmm),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("Tổng quân số tiếp đón"), FMT_TEXT | FMT_LEFT | FMT_WRAPING, true, 11);	xls.SetCellText(0, 5, _T("Tổng quân số xét nghiệm Sinh hóa, Huyết học, Miễn dịch"), FMT_TEXT | FMT_LEFT | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("Tổng quân số không làm xét nghiệm"), FMT_TEXT | FMT_LEFT | FMT_WRAPING, true, 11);	xls.SetCellText(0, 7, _T("Tổng quân số không làm xét nghiệm Sinh hóa, Huyết học, Miễn dịch"), FMT_TEXT | FMT_LEFT | FMT_WRAPING, true, 11);	xls.SetCellText(0, 8, _T("Tổng quân số làm thêm xét nghiệm"), FMT_TEXT | FMT_LEFT | FMT_WRAPING, true, 11);	xls.SetCellText(0, 10, _T("Danh sách quân số không làm xét nghiệm Sinh hóa, Huyết học, Miễn dịch"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 11, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 11, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 11, _T("Họ tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 11, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 3);	xls.SetMerge(1, 1, 0, 3);	xls.SetMerge(2, 2, 0, 3);	xls.SetMerge(3, 3, 0, 3);	xls.SetMerge(4, 4, 0, 3);	xls.SetMerge(5, 5, 0, 3);	xls.SetMerge(6, 6, 0, 3);	xls.SetMerge(7, 7, 0, 3);	xls.SetMerge(8, 8, 0, 3);	xls.SetMerge(10, 10, 0, 3);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	szSQL = GetQueryString2();	rs2.ExecSQL(szSQL);	szSQL = GetQueryString3();	rs3.ExecSQL(szSQL);	szSQL = GetQueryString4();	rs4.ExecSQL(szSQL);	szSQL = GetQueryString5();	rs5.ExecSQL(szSQL);	szSQL = GetQueryString6();	rs6.ExecSQL(szSQL);	while(!rs.IsEOF()){		rs.GetValue(_T("total"), nTotal);		xls.SetCellText(4, 4, double2str(nTotal), FMT_NUMBER1);		rs.MoveNext();	}	while(!rs2.IsEOF()){		rs2.GetValue(_T("totalXN"), nTotal2);		xls.SetCellText(4, 5, double2str(nTotal2), FMT_NUMBER1);		rs2.MoveNext();	}	while(!rs3.IsEOF()){		rs3.GetValue(_T("totalKXN"), tmpStr);		xls.SetCellText(4, 6, tmpStr, FMT_NUMBER1);		rs3.MoveNext();	}	nTotal3 = nTotal - nTotal2;	xls.SetCellText(4, 7, double2str(nTotal3), FMT_NUMBER1);	while(!rs5.IsEOF()){		rs5.GetValue(_T("totalTXN"), tmpStr);		xls.SetCellText(4, 8, tmpStr, FMT_NUMBER1);		rs5.MoveNext();	}	nRow = 12;	nCol = 0;	while(!rs4.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs4.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs4.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs4.GetValue(_T("khoa"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		nRow++;		rs4.MoveNext();	}	nRow++;	xls.SetMerge(nRow, nRow, 0, 3);	xls.SetCellText(0, nRow, _T("Danh sách quân số làm thêm xét nghiệm"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	nRow++;	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, nRow, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, nRow, _T("Họ tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	nRow++;	nIdx = 1;	while(!rs6.IsEOF()){		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs6.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs6.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs6.GetValue(_T("khoa"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		nRow++;		rs6.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\TotalHealthStaff.xls"));
}

int CRPTTotalHealthStaff::OnAddRPTTotalDataHealthStaff()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTTotalHealthStaff::OnEditRPTTotalDataHealthStaff(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTTotalHealthStaff::OnDeleteRPTTotalDataHealthStaff(){
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
 		OnCancelRPTTotalDataHealthStaff();
 	}
	return 0;
}
int CRPTTotalHealthStaff::OnSaveRPTTotalDataHealthStaff(){
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
 		//OnRPTTotalDataHealthStaffListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTTotalHealthStaff::OnCancelRPTTotalDataHealthStaff(){
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
int CRPTTotalHealthStaff::OnRPTTotalDataHealthStaffListLoadData(){							
	return 0;
}

CString CRPTTotalHealthStaff::GetQueryString()
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

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("K"))
			szWhere.AppendFormat(_T(" AND hd_suggestion NOT IN ('C', 'D')"));
		else
			szWhere.AppendFormat(_T(" AND hd_suggestion IN ('C', 'D')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT DISTINCT COUNT(hd_docno) AS total") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s "), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}
CString CRPTTotalHealthStaff::GetQueryString2()
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

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("K"))
			szWhere.AppendFormat(_T(" AND hd_suggestion NOT IN ('C', 'D')"));
		else
			szWhere.AppendFormat(_T(" AND hd_suggestion IN ('C', 'D')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT") \
		_T(" COUNT(hd_docno) AS totalXN") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT hd_docno") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_testorder") \
		_T(" ON(hpc_docno = hd_docno)") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpcl_orderid = hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid     = hpcl_itemid)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id = hfl_groupid)") \
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfg_name3 IN('Sinh hóa', 'Huyết học', 'Miễn dịch') %s )"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}
CString CRPTTotalHealthStaff::GetQueryString3()
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

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("K"))
			szWhere.AppendFormat(_T(" AND hd_suggestion NOT IN ('C', 'D')"));
		else
			szWhere.AppendFormat(_T(" AND hd_suggestion IN ('C', 'D')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT") \
		_T(" COUNT(hd_docno) AS totalKXN") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT hd_docno") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_testorder") \
		_T(" ON(hpc_docno = hd_docno)") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpcl_orderid = hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid     = hpcl_itemid)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id = hfl_groupid)") \
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpc_status='T'") \
		_T(" AND SUBSTR(hfl_groupid,1, 2) <> 'B1' %s ") \
		_T(" )"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}
CString CRPTTotalHealthStaff::GetQueryString4()
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

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("K"))
			szWhere.AppendFormat(_T(" AND hd_suggestion NOT IN ('C', 'D')"));
		else
			szWhere.AppendFormat(_T(" AND hd_suggestion IN ('C', 'D')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" hp_department AS khoa,") \
		_T(" SUM(count) AS count") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T(" hd_docno, hp_department,") \
		_T(" 1 AS count") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" UNION ALL") \
		_T(" SELECT DISTINCT") \
		_T(" hd_docno, hp_department,") \
		_T(" 1") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT DISTINCT hd_docno, hp_department") \
		_T(" FROM hms_exam") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_testorder") \
		_T(" ON(hpc_docno = hd_docno)") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpcl_orderid = hpc_orderid)") \
		_T(" LEFT JOIN hms_fee_list") \
		_T(" ON(hfl_feeid     = hpcl_itemid)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id = hfl_groupid)") \
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfg_name3 IN('Sinh hóa', 'Huyết học', 'Miễn dịch') %s ") \
		_T(" ) tbl ") \
		_T(" ) tbl2 ") \
		_T(" GROUP BY hd_docno, hp_department") \
		_T(" HAVING SUM(count) < 2") \
		_T(" ORDER BY hp_department, hd_docno"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}
CString CRPTTotalHealthStaff::GetQueryString5()
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

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("K"))
			szWhere.AppendFormat(_T(" AND hd_suggestion NOT IN ('C', 'D')"));
		else
			szWhere.AppendFormat(_T(" AND hd_suggestion IN ('C', 'D')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT SUM(COUNT) AS totalTXN") \
		_T(" FROM") \
		_T("   (SELECT hd_docno     AS docno,") \
		_T("     COUNT(hpc_orderid) AS totalorder,") \
		_T("     1                  AS COUNT") \
		_T("   FROM hms_exam") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = he_docno)") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON(hp_patientno = hd_patientno)") \
		_T("   LEFT JOIN hmsv_paraclinic") \
		_T("   ON(hpc_docno     = hd_docno)") \
		_T("   WHERE he_roomid IN (102, 122, 123, 124)") \
		_T("   AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("   GROUP BY hd_docno") \
		_T("   HAVING COUNT(hpc_orderid) > 7") \
		_T("   )"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}
CString CRPTTotalHealthStaff::GetQueryString6()
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

	if(!m_szTypeKey.IsEmpty())
	{
		if(m_szTypeKey == _T("K"))
			szWhere.AppendFormat(_T(" AND hd_suggestion NOT IN ('C', 'D')"));
		else
			szWhere.AppendFormat(_T(" AND hd_suggestion IN ('C', 'D')"));
	}

	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hp_department = '%s'"), m_szDepartmentKey);
	}

	szSQL.Format(_T(" SELECT docno,") \
		_T("   get_patientname(docno) AS pname,") \
		_T("   hp_department          AS khoa") \
		_T(" FROM") \
		_T("   (SELECT hd_docno AS docno,") \
		_T("     hp_department,") \
		_T("     COUNT(hpc_orderid) AS totalorder,") \
		_T("     1                  AS COUNT") \
		_T("   FROM hms_exam") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_docno = he_docno)") \
		_T("   LEFT JOIN hms_patient") \
		_T("   ON(hp_patientno = hd_patientno)") \
		_T("   LEFT JOIN hmsv_paraclinic") \
		_T("   ON(hpc_docno     = hd_docno)") \
		_T("   WHERE he_roomid IN (102, 122, 123, 124)") \
		_T("   AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("   GROUP BY hd_docno,") \
		_T("     hp_department") \
		_T("   HAVING COUNT(hpc_orderid) > 7") \
		_T("   )") \
		_T(" ORDER BY hp_department,") \
		_T("   docno"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}