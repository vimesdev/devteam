#include "stdafx.h"
#include "RPTDataHealthStaffFilter.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTDataHealthStaffFilter *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTDataHealthStaffFilter *)pWnd)->OnToDateCheckValue();
} 
static void _OnSectionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTDataHealthStaffFilter* )pWnd)->OnSectionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSectionSelendokFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnSectionSelendok();
}
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnSectionKillfocus();
}*/
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnSectionKillfocus();
}*/
static long _OnSectionLoadDataFnc(CWnd *pWnd){
	return ((CRPTDataHealthStaffFilter *)pWnd)->OnSectionLoadData();
}
/*static void _OnSectionAddNewFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnSectionAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTDataHealthStaffFilter* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTDataHealthStaffFilter *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CRPTDataHealthStaffFilter *)pWnd)->OnDocumentNoCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTDataHealthStaffFilter* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTDataHealthStaffFilter *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTDataHealthStaffFilter *)pWnd)->OnTypeAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTDataHealthStaffFilter *pVw = (CRPTDataHealthStaffFilter *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTDataHealthStaffFilter *pVw = (CRPTDataHealthStaffFilter *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTDataHealthStaffFilter*)pWnd)->OnAddRPTTotalDataHealthStaff();
} 
static int _OnEditRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTDataHealthStaffFilter*)pWnd)->OnEditRPTTotalDataHealthStaff();
} 
static int _OnDeleteRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTDataHealthStaffFilter*)pWnd)->OnDeleteRPTTotalDataHealthStaff();
} 
static int _OnSaveRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTDataHealthStaffFilter*)pWnd)->OnSaveRPTTotalDataHealthStaff();
} 
static int _OnCancelRPTTotalDataHealthStaffFnc(CWnd *pWnd){
	 return ((CRPTDataHealthStaffFilter*)pWnd)->OnCancelRPTTotalDataHealthStaff();
}
static void _OnMustbeInjectSelectFnc(CWnd *pWnd)
{
	 ((CRPTDataHealthStaffFilter*)pWnd)->OnMustbeInjectSelect();
}

CRPTDataHealthStaffFilter::CRPTDataHealthStaffFilter(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTDataHealthStaffFilter::~CRPTDataHealthStaffFilter()
{
}
void CRPTDataHealthStaffFilter::OnCreateComponents()
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
	m_wndMustbeInject.Create(this, _T("Bệnh nhân phải tiêm"), 10, 127, 183, 152);

}
void CRPTDataHealthStaffFilter::OnInitializeComponents(){
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
void CRPTDataHealthStaffFilter::OnSetWindowEvents(){
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
	m_wndMustbeInject.SetEvent(WE_CLICK, _OnMustbeInjectSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTDataHealthStaffFilter::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSection.GetDlgCtrlID(), m_szSectionKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_szDocumentNo);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Check(pDX, m_wndMustbeInject.GetDlgCtrlID(), m_bMustbeInject);

}
void CRPTDataHealthStaffFilter::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTDataHealthStaffFilter::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTDataHealthStaffFilter::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSectionKey.Empty();
	m_szDocumentNo.Empty();
	m_szTypeKey.Empty();
	m_szDepartmentKey.Empty();
	m_bMustbeInject=FALSE;

}
int CRPTDataHealthStaffFilter::SetMode(int nMode){
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
/*void CRPTDataHealthStaffFilter::OnFromDateChange(){
	
} */
/*void CRPTDataHealthStaffFilter::OnFromDateSetfocus(){
	
} */
/*void CRPTDataHealthStaffFilter::OnFromDateKillfocus(){
	
} */
int CRPTDataHealthStaffFilter::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTDataHealthStaffFilter::OnToDateChange(){
	
} */
/*void CRPTDataHealthStaffFilter::OnToDateSetfocus(){
	
} */
/*void CRPTDataHealthStaffFilter::OnToDateKillfocus(){
	
} */
int CRPTDataHealthStaffFilter::OnToDateCheckValue(){
	return 0;
} 
void CRPTDataHealthStaffFilter::OnSectionSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTDataHealthStaffFilter::OnSectionSelendok(){
	 
}
/*void CRPTDataHealthStaffFilter::OnSectionSetfocus(){
	
}*/
/*void CRPTDataHealthStaffFilter::OnSectionKillfocus(){
	
}*/
long CRPTDataHealthStaffFilter::OnSectionLoadData(){
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
/*void CRPTDataHealthStaffFilter::OnSectionAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTDataHealthStaffFilter::OnDocumentNoChange(){
	
} */
/*void CRPTDataHealthStaffFilter::OnDocumentNoSetfocus(){
	
} */
/*void CRPTDataHealthStaffFilter::OnDocumentNoKillfocus(){
	
} */
int CRPTDataHealthStaffFilter::OnDocumentNoCheckValue(){
	return 0;
} 
void CRPTDataHealthStaffFilter::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTDataHealthStaffFilter::OnTypeSelendok(){
	 
}
/*void CRPTDataHealthStaffFilter::OnTypeSetfocus(){
	
}*/
/*void CRPTDataHealthStaffFilter::OnTypeKillfocus(){
	
}*/
long CRPTDataHealthStaffFilter::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndType.AddItems(_T("K"), _T("Khám"));
	m_wndType.AddItems(_T("N"), _T("Nằm viện"));
	return 0;
}
/*void CRPTDataHealthStaffFilter::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTDataHealthStaffFilter::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTDataHealthStaffFilter::OnDepartmentSelendok(){
	 
}
/*void CRPTDataHealthStaffFilter::OnDepartmentSetfocus(){
	
}*/
/*void CRPTDataHealthStaffFilter::OnDepartmentKillfocus(){
	
}*/
long CRPTDataHealthStaffFilter::OnDepartmentLoadData(){
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
void CRPTDataHealthStaffFilter::OnMustbeInjectSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
/*void CRPTDataHealthStaffFilter::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CRPTDataHealthStaffFilter::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTDataHealthStaffFilter::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
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
	if (!xls.Load(_T("Exports\\DANH_SACH_USER_XET_NGHIEM_VIEM_GAN_B.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 13);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 13);

	tmpStr.Format(_T("Từ %s Đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		

		rs.GetValue(_T("sohoso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoa"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("birthyear"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tenxn"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ketqua"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\DANH_SACH_USER_XET_NGHIEM_VIEM_GAN_B2.xls"));
}

int CRPTDataHealthStaffFilter::OnAddRPTTotalDataHealthStaff()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTDataHealthStaffFilter::OnEditRPTTotalDataHealthStaff(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTDataHealthStaffFilter::OnDeleteRPTTotalDataHealthStaff(){
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
int CRPTDataHealthStaffFilter::OnSaveRPTTotalDataHealthStaff(){
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
int CRPTDataHealthStaffFilter::OnCancelRPTTotalDataHealthStaff(){
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
int CRPTDataHealthStaffFilter::OnRPTTotalDataHealthStaffListLoadData(){							
	return 0;
}

CString CRPTDataHealthStaffFilter::GetQueryString()
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

	if(m_bMustbeInject)
	{
		szWhere.AppendFormat(_T("and (select count (*) from hms_testorderline where hpcl_docno=hd_docno and hpcl_itemid='B140018038' and hpcl_result like '%%Âm tính%%')>0 and (select count (*) from hms_testorderline where hpcl_docno=hd_docno and hpcl_itemid='B140018027' and (hpcl_result like '%%Âm tính%%' or hpcl_result like '%%<10%%'))>0"));
	}

	szSQL.Format(_T(" SELECT DISTINCT hd_docno          AS sohoso,") \
		_T("   get_patientname(hd_docno)       AS pname,") \
		_T("   hp_department                   AS khoa,") \
		_T("   Extract(YEAR FROM hp_birthdate) AS birthyear,") \
		_T("   hfl_name                        AS tenxn,") \
		_T("   hpcl_result                     AS ketqua") \
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
		_T(" WHERE he_roomid IN (102, 122, 123, 124)") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" AND hpcl_itemid IN") \
		_T("   (SELECT ss_code FROM sys_sel WHERE ss_id ='HMS_ITEM_ID'") \
		_T("   )") \
		_T(" AND hpc_status='T'") \
		_T(" ORDER BY khoa,") \
		_T("   sohoso"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}