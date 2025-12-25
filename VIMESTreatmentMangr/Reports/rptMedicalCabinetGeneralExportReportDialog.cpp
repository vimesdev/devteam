#include "rptMedicalCabinetGeneralExportReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptMedicalCabinetGeneralExportReportDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptMedicalCabinetGeneralExportReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnDrugTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptMedicalCabinetGeneralExportReportDialog* )pWnd)->OnDrugTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugTypeSelendokFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeSelendok();
}
/*static void _OnDrugTypeSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeKillfocus();
}*/
/*static void _OnDrugTypeKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeKillfocus();
}*/
static long _OnDrugTypeLoadDataFnc(CWnd *pWnd){
	return ((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeLoadData();
}
/*static void _OnDrugTypeAddNewFnc(CWnd *pWnd){
	((rptMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeAddNew();
}*/
static void _OnSurgeryAndOperationSelectFnc(CWnd *pWnd){
	 ((rptMedicalCabinetGeneralExportReportDialog*)pWnd)->OnSurgeryAndOperationSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptMedicalCabinetGeneralExportReportDialog *pVw = (rptMedicalCabinetGeneralExportReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptMedicalCabinetGeneralExportReportDialog *pVw = (rptMedicalCabinetGeneralExportReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptMedicalCabinetGeneralExportReportDialog *pVw = (rptMedicalCabinetGeneralExportReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetGeneralExportReportDialog*)pWnd)->OnAddrptMedicalCabinetGeneralExportReportDialog();
} 
static int _OnEditrptMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetGeneralExportReportDialog*)pWnd)->OnEditrptMedicalCabinetGeneralExportReportDialog();
} 
static int _OnDeleterptMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetGeneralExportReportDialog*)pWnd)->OnDeleterptMedicalCabinetGeneralExportReportDialog();
} 
static int _OnSaverptMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetGeneralExportReportDialog*)pWnd)->OnSaverptMedicalCabinetGeneralExportReportDialog();
} 
static int _OnCancelrptMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetGeneralExportReportDialog*)pWnd)->OnCancelrptMedicalCabinetGeneralExportReportDialog();
} 
rptMedicalCabinetGeneralExportReportDialog::rptMedicalCabinetGeneralExportReportDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 385;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
rptMedicalCabinetGeneralExportReportDialog::~rptMedicalCabinetGeneralExportReportDialog(){
}
void rptMedicalCabinetGeneralExportReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 370, 210);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 110, 55);
	m_wndStock.Create(this,115, 30, 365, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 10, 90, 110, 115);
	m_wndToDate.Create(this,115, 90, 255, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 110, 145);
	m_wndObject.Create(this,115, 120, 365, 145); 
	m_wndDrugTypeLabel.Create(this, _T("Drug Type"), 10, 150, 110, 175);
	m_wndDrugType.Create(this,115, 150, 365, 175); 
	m_wndSurgeryAndOperation.Create(this, _T("Surgery and Operation"), 114, 180, 364, 205);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 120, 215, 200, 240);
	m_wndExport.Create(this, _T("&Export"), 205, 215, 285, 240);
	m_wndClose.Create(this, _T("&Close"), 290, 215, 370, 240);
}
void rptMedicalCabinetGeneralExportReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndDrugType.SetCheckValue(true);
	m_wndDrugType.LimitText(35);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndDrugType.SetCheckBox(TRUE);
	m_wndDrugType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDrugType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndDrugType.InsertColumn(2, _T("group"), CFMT_TEXT, 0);
}
void rptMedicalCabinetGeneralExportReportDialog::OnSetWindowEvents(){
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDrugType.SetEvent(WE_SELENDOK, _OnDrugTypeSelendokFnc);
	//m_wndDrugType.SetEvent(WE_SETFOCUS, _OnDrugTypeSetfocusFnc);
	//m_wndDrugType.SetEvent(WE_KILLFOCUS, _OnDrugTypeKillfocusFnc);
	m_wndDrugType.SetEvent(WE_SELCHANGE, _OnDrugTypeSelectChangeFnc);
	m_wndDrugType.SetEvent(WE_LOADDATA, _OnDrugTypeLoadDataFnc);
	//m_wndDrugType.SetEvent(WE_ADDNEW, _OnDrugTypeAddNewFnc);
	m_wndSurgeryAndOperation.SetEvent(WE_CLICK, _OnSurgeryAndOperationSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate.Format(_T("%s 00:00:00"), pMF->GetSysDate());
	m_szToDate = pMF->GetSysDateTime();
	
	m_bSurgeryAndOperation = false;
	SetMode(VM_EDIT);

}
void rptMedicalCabinetGeneralExportReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDrugType.GetDlgCtrlID(), m_szDrugTypeKey);
	DDX_Check(pDX, m_wndSurgeryAndOperation.GetDlgCtrlID(), m_bSurgeryAndOperation);
}
void rptMedicalCabinetGeneralExportReportDialog::GetDataToScreen(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptMedicalCabinetGeneralExportReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptMedicalCabinetGeneralExportReportDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDrugTypeKey.Empty();
	m_bSurgeryAndOperation=FALSE;

}
int rptMedicalCabinetGeneralExportReportDialog::SetMode(int nMode){
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
void rptMedicalCabinetGeneralExportReportDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetGeneralExportReportDialog::OnStockSelendok(){
	 
}
/*void rptMedicalCabinetGeneralExportReportDialog::OnStockSetfocus(){
	
}*/
/*void rptMedicalCabinetGeneralExportReportDialog::OnStockKillfocus(){
	
}*/
long rptMedicalCabinetGeneralExportReportDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && str2int(m_szStockKey) > 0 ){
		szWhere.Format(_T(" and pmsl_stockid=%d"), str2int(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	//_msg(_T("%s"), szSQL);
	szSQL.Format(_T("SELECT pmsl_stockid as id, pmsl_name as name FROM pms_stocklist WHERE pmsl_type='C' and pmsl_deptid='%s' %s ORDER BY pmsl_stockid"), pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptMedicalCabinetGeneralExportReportDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptMedicalCabinetGeneralExportReportDialog::OnFromDateChange(){
	
} */
/*void rptMedicalCabinetGeneralExportReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptMedicalCabinetGeneralExportReportDialog::OnFromDateKillfocus(){
	
} */
int rptMedicalCabinetGeneralExportReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptMedicalCabinetGeneralExportReportDialog::OnToDateChange(){
	
} */
/*void rptMedicalCabinetGeneralExportReportDialog::OnToDateSetfocus(){
	
} */
/*void rptMedicalCabinetGeneralExportReportDialog::OnToDateKillfocus(){
	
} */
int rptMedicalCabinetGeneralExportReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptMedicalCabinetGeneralExportReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetGeneralExportReportDialog::OnObjectSelendok(){
	 
}
/*void rptMedicalCabinetGeneralExportReportDialog::OnObjectSetfocus(){
	
}*/
/*void rptMedicalCabinetGeneralExportReportDialog::OnObjectKillfocus(){
	
}*/
long rptMedicalCabinetGeneralExportReportDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && str2int(m_szObjectKey) > 0){
		szWhere.Format(_T(" WHERE ho_id=%d"), str2int(m_szObjectKey));
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object %s ORDER BY ho_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptMedicalCabinetGeneralExportReportDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptMedicalCabinetGeneralExportReportDialog::OnDrugTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetGeneralExportReportDialog::OnDrugTypeSelendok(){
	 
}
/*void rptMedicalCabinetGeneralExportReportDialog::OnDrugTypeSetfocus(){
	
}*/
/*void rptMedicalCabinetGeneralExportReportDialog::OnDrugTypeKillfocus(){
	
}*/
long rptMedicalCabinetGeneralExportReportDialog::OnDrugTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugType.IsSearchKey() && !m_szDrugTypeKey.IsEmpty()){
		szWhere.Format(_T(" and pmdt_id='%s' "), m_szDrugTypeKey);
	};
	m_wndDrugType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmdt_id as id, pmdt_name as name, pmdt_desc as group FROM pms_drugtype %s ORDER BY pmdt_index, pmdt_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("group")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void rptMedicalCabinetGeneralExportReportDialog::OnDrugTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void rptMedicalCabinetGeneralExportReportDialog::OnSurgeryAndOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptMedicalCabinetGeneralExportReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	static CReport rpt;
	CString tmpStr, szSQL;
	CString szObject, szObjectName, szWhere;
	CRecord rs(&pMF->m_db);
	if(!rpt.Init(_T("Reports/HMS/TM_BAOCAOTONGHOPXUATTHUOCTUTRUC.RPT")) )
		return;
	UpdateData(true);
	if(m_szStockKey.IsEmpty())
	{
		ShowMessageBox(_T("Request select a stock"));
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	tmpStr.Empty();
	rpt.GetReportHeader()->Format(_T("ReportDate"), CDate::Convert(m_szFromDate), CDate::Convert(m_szToDate));

	tmpStr.Empty();
	tmpStr = m_wndStock.GetCurrent(1);
	rpt.GetReportHeader()->SetValue(_T("StockName"), tmpStr);

	tmpStr.Empty();
	tmpStr = pMF->GetCurrentDepartmentName();
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	tmpStr.Empty();

	tmpStr = m_wndObject.GetCheckData(1);
	if(tmpStr.IsEmpty())
		tmpStr  = m_wndObject.GetCurrent(1);
	if(tmpStr.IsEmpty())
	{
		TranslateString(_T("All object"), tmpStr);
	}
	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	tmpStr.Empty();

	if(m_bSurgeryAndOperation)
	{
		TranslateString(_T("Used for surgery and operation"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Surgery"), tmpStr);
		tmpStr.Empty();
	}
	tmpStr = m_wndDrugType.GetCheckData(1);
	if(tmpStr.IsEmpty())
		tmpStr  = m_wndDrugType.GetCurrent(1);
	if(tmpStr.IsEmpty())
	{
		TranslateString(_T("All Types"), tmpStr);
	}
	rpt.GetReportHeader()->SetValue(_T("DrugType"), tmpStr);
	tmpStr.Empty();
	CReportSection* rptDetail;

	szWhere.Format(_T(" and hpo_issuedate between '%s' and '%s' "), m_szFromDate, m_szToDate);
	tmpStr = m_wndDrugType.GetCheckData(2);

	if(!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and pmi_typeid in(%s) "), tmpStr);
	}
	else
	{
		tmpStr = m_wndDrugType.GetCurrent(2);
		if(!tmpStr.IsEmpty()) szWhere.AppendFormat(_T(" and pmi_typeid in(%s) "), tmpStr);
	}
	if(m_bSurgeryAndOperation)
	{
		szWhere.AppendFormat(_T("and hpo_type='M'"));
	}
	tmpStr = m_wndObject.GetCheckData(0);
	if(tmpStr.IsEmpty())
		tmpStr = m_szObjectKey;

	if(!tmpStr.IsEmpty())
	{
		tmpStr.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and hd_object in('%s') "), tmpStr);

	szSQL.Format(_T(" SELECT pmi_name as drugname, ") \
				_T(" 	pmi_unit as unit, ") \
				_T(" 	sum(hpol_issueqty) as qty,") \
				_T(" 	pmsi_vatprice as unitprice,") \
				_T(" 	sum(hpol_issueqty*pmsi_vatprice) as money,") \
				_T(" 	sc_name as orgname") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
				_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
				_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
				_T(" LEFT JOIN sys_country ON(sc_id=pmsi_countryid)") \
				_T(" WHERE hpo_stockid=%d and hpo_deptid='%s'  and hpo_status='I' %s ") \
				_T(" GROUP BY drugname, unit, unitprice, orgname") \
				_T(" ORDER BY drugname , unit, unitprice, orgname "), str2int(m_szStockKey),pMF->m_szDept, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT pmi_name as drugname, ") \
					_T(" 	pmi_unit as unit, ") \
					_T(" 	sum(hpol_issueqty) as qty,") \
					_T(" 	pmsi_vatprice as unitprice,") \
					_T(" 	sum(hpol_issueqty*pmsi_vatprice) as money,") \
					_T(" 	sc_name as orgname") \
					_T(" FROM hms_pharmacyorder ") \
					_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
					_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
					_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
					_T(" LEFT JOIN sys_country ON(sc_id=pmsi_countryid)") \
					_T(" WHERE hpo_stockid=%d and hpo_deptid='%s'  and hpo_status='I' %s ") \
					_T(" GROUP BY drugname, unit, unitprice, orgname") \
					_T(" ORDER BY drugname, unit, unitprice, orgname"), str2int(m_szStockKey),pMF->m_szDept, szWhere);
	}

_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	double nTotalAmount = 0;
	int nIndex=1;
	while(!rs.IsEOF()){
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("drugname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("unitprice"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("money"), tmpStr);
		nTotalAmount += str2double(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.MoveNext();
	}
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	rpt.PrintPreview();
	
} // bao cao tong hop xuat thuoc tu tu truc
void rptMedicalCabinetGeneralExportReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr, szSQL, szFromDate, szToDate;
	CString szWhere;
	CString szObject, szObjectName;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 37);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 12);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 20);
	if(m_szStockKey.IsEmpty())
	{
		ShowMessageBox(_T("Request select a stock"));
		return;
	}
	tmpStr.Empty();
	tmpStr = m_wndStock.GetCurrent(1);
	int nRow = 4;
	int nCol = 0;
// lay ra ten kho
	xls.SetCellMergedColumns(nCol, nRow,6 );
	xls.SetCellText(nCol, nRow, _T("T\xEAn kho: ")+ tmpStr, FMT_TEXT, true, 12);
	tmpStr.Empty();
// lay ra ten khoa
	xls.SetCellMergedColumns(nCol, nRow + 1, 6);
	tmpStr = pMF->GetCurrentDepartmentName();
	xls.SetCellText(nCol, nRow+1,_T("T\xEAn kho\x61: ")+ tmpStr, FMT_TEXT, true, 12);
	tmpStr.Empty();
//lay ra ten doi tuong
	xls.SetCellMergedColumns(nCol, nRow+2, 6);
	tmpStr = m_wndObject.GetCheckData(1);
	if(tmpStr.IsEmpty())
		tmpStr  = m_wndObject.GetCurrent(1);
	if(tmpStr.IsEmpty())
	{
		TranslateString(_T("All object"), tmpStr);
	}
	xls.SetCellText(nCol, nRow+2, _T("\x110\x1ED1i t\x1B0\x1EE3ng: ")+ tmpStr, FMT_TEXT, true, 12);
	tmpStr.Empty();

	if(m_bSurgeryAndOperation)
	{
		xls.SetCellMergedColumns(nCol, nRow +4, 6);
		xls.SetCellText(nCol, nRow+4, _T(" X Thu\x1ED1\x63 \x64\xF9ng trong ph\x1EA9u thu\x1EADt th\x1EE7 thu\x1EADt"), FMT_TEXT, true, 12);
		tmpStr.Empty();
	}
	tmpStr = m_wndDrugType.GetCheckData(1);
	if(tmpStr.IsEmpty())
		tmpStr  = m_wndDrugType.GetCurrent(1);
	if(tmpStr.IsEmpty())
	{
		TranslateString(_T("All Types"), tmpStr);
	}
	xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	xls.SetCellText(nCol, nRow + 3, _T("Lo\x1EA1i: ")+ tmpStr,FMT_TEXT, true, 12);
	tmpStr.Empty();
	szWhere.Format(_T(" and hpo_issuedate between '%s' and '%s' "), m_szFromDate, m_szToDate);
	
	tmpStr = m_wndDrugType.GetCheckData(2);

	if(!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and pmi_typeid in(%s) "), tmpStr);
	}
	else
	{
		tmpStr = m_wndDrugType.GetCurrent(2);
		if(!tmpStr.IsEmpty())
			szWhere.AppendFormat(_T(" and pmi_typeid in(%s) "), tmpStr);
	}
	if(m_bSurgeryAndOperation)
	{
		szWhere.AppendFormat(_T(" and hpo_type='M' "));
	}
	tmpStr = m_wndObject.GetCheckData(0);
	if(tmpStr.IsEmpty())
		tmpStr = m_szObjectKey;
	if(!tmpStr.IsEmpty())
	{
		tmpStr.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and hd_object in('%s') "), tmpStr);

	szSQL.Format(_T(" SELECT pmi_name as drugname, ") \
				_T(" 	pmi_unit as unit, ") \
				_T(" 	sum(hpol_issueqty) as qty,") \
				_T(" 	pmsi_vatprice as unitprice,") \
				_T(" 	sum(hpol_issueqty*pmsi_vatprice) as money,") \
				_T(" 	sc_name as orgname") \
				_T(" FROM hms_doc ") \
				_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
				_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
				_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
				_T(" LEFT JOIN sys_country ON(sc_id=pmsi_countryid)") \
				_T(" WHERE hpo_stockid=%d and hpo_deptid='%s' and hpo_status='I' %s ") \
				_T(" GROUP BY drugname, unit, unitprice, orgname") \
				_T(" ORDER BY drugname, unit, unitprice, orgname"), str2int(m_szStockKey), pMF->m_szDept, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT pmi_name as drugname, ") \
					_T(" 	pmi_unit as unit, ") \
					_T(" 	sum(hpol_issueqty) as qty,") \
					_T(" 	pmsi_vatprice as unitprice,") \
					_T(" 	sum(hpol_issueqty*pmsi_vatprice) as money,") \
					_T(" 	sc_name as orgname") \
					_T(" FROM hms_pharmacyorder ") \
					_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
					_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
					_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
					_T(" LEFT JOIN sys_country ON(sc_id=pmsi_countryid)") \
					_T(" WHERE hpo_stockid=%d and hpo_deptid='%s' and hpo_status='I' %s ") \
					_T(" GROUP BY drugname, unit, unitprice, orgname") \
					_T(" ORDER BY drugname, unit, unitprice, orgname"), str2int(m_szStockKey),pMF->m_szDept, szWhere);
	}
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	tmpStr.IsEmpty();
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, FMT_CENTER, true, 11);
	xls.SetCellText(0,1, pMF->m_CompanyInfo.sc_name, FMT_CENTER, true, 11);
	xls.SetCellMergedColumns(0,2,6);
	xls.SetCellText(0, 2, _T("\x42\xC1O \x42\xC1O T\x1ED4NG H\x1EE2P \x58U\x1EA4T THU\x1ED0\x43 T\x1EEA T\x1EE6 TR\x1EF0\x43"),FMT_CENTER, true, 16);
	xls.SetCellMergedColumns(0,3,6);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0,3, tmpStr,FMT_CENTER,true,12);
	 nRow = 9;
	xls.SetCellText(0, nRow, _T("STT"), FMT_CENTER,true);	
	xls.SetCellText(1, nRow, _T("T\xEAn thu\x1ED1\x63 \ h\xE0m l\x1B0\x1EE3ng"), FMT_CENTER, true);
	xls.SetCellText(2, nRow, _T("\x110VT"), FMT_CENTER,true);	
	xls.SetCellText(3, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_CENTER,true);	
	xls.SetCellText(4, nRow, _T("\x110\x1A1n gi\xE1"), FMT_CENTER,true);	
	xls.SetCellText(5, nRow, _T("Th\xE0nh ti\x1EC1n"), FMT_CENTER,true);
	int nIndex = 1;
	double long nTotalAmount = 0.0;

	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);
 
		rs.GetValue(_T("drugname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		
		rs.GetValue(_T("unitprice"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("money"), tmpStr);
		nTotalAmount += ToDouble(tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);
		rs.MoveNext();
	}
	nRow++;	
	xls.SetCellMergedColumns(0,nRow,4);
	xls.SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_CENTER, true, 12);

	tmpStr.Format(_T("%.2f"), nTotalAmount);	
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true, 12);

	xls.Save(_T("Exports\\Bao cao tong hop xuat thuoc tu tu truc.xls"));
} 
void rptMedicalCabinetGeneralExportReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptMedicalCabinetGeneralExportReportDialog::OnAddrptMedicalCabinetGeneralExportReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptMedicalCabinetGeneralExportReportDialog::OnEditrptMedicalCabinetGeneralExportReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptMedicalCabinetGeneralExportReportDialog::OnDeleterptMedicalCabinetGeneralExportReportDialog(){
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
 		OnCancelrptMedicalCabinetGeneralExportReportDialog(); 
 	}
	return 0;
}
int rptMedicalCabinetGeneralExportReportDialog::OnSaverptMedicalCabinetGeneralExportReportDialog(){
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
 		//OnrptMedicalCabinetGeneralExportReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptMedicalCabinetGeneralExportReportDialog::OnCancelrptMedicalCabinetGeneralExportReportDialog(){
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
int rptMedicalCabinetGeneralExportReportDialog::OnrptMedicalCabinetGeneralExportReportDialogListLoadData(){
	return 0;
}

