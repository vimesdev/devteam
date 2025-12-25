#include "rptMedicalCabinetPatientExportReportDialog.h"
#include "../MainFrm.h"
#include "ReportDocument.h"

static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptMedicalCabinetPatientExportReportDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptMedicalCabinetPatientExportReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnDrugTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptMedicalCabinetPatientExportReportDialog* )pWnd)->OnDrugTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugTypeSelendokFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnDrugTypeSelendok();
}
/*static void _OnDrugTypeSetfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnDrugTypeKillfocus();
}*/
/*static void _OnDrugTypeKillfocusFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnDrugTypeKillfocus();
}*/
static long _OnDrugTypeLoadDataFnc(CWnd *pWnd){
	return ((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnDrugTypeLoadData();
}
/*static void _OnDrugTypeAddNewFnc(CWnd *pWnd){
	((rptMedicalCabinetPatientExportReportDialog *)pWnd)->OnDrugTypeAddNew();
}*/
static void _OnSurgeryAndOperationSelectFnc(CWnd *pWnd){
	 ((rptMedicalCabinetPatientExportReportDialog*)pWnd)->OnSurgeryAndOperationSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptMedicalCabinetPatientExportReportDialog *pVw = (rptMedicalCabinetPatientExportReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptMedicalCabinetPatientExportReportDialog *pVw = (rptMedicalCabinetPatientExportReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptMedicalCabinetPatientExportReportDialog *pVw = (rptMedicalCabinetPatientExportReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddrptMedicalCabinetPatientExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetPatientExportReportDialog*)pWnd)->OnAddrptMedicalCabinetPatientExportReportDialog();
} 
static int _OnEditrptMedicalCabinetPatientExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetPatientExportReportDialog*)pWnd)->OnEditrptMedicalCabinetPatientExportReportDialog();
} 
static int _OnDeleterptMedicalCabinetPatientExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetPatientExportReportDialog*)pWnd)->OnDeleterptMedicalCabinetPatientExportReportDialog();
} 
static int _OnSaverptMedicalCabinetPatientExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetPatientExportReportDialog*)pWnd)->OnSaverptMedicalCabinetPatientExportReportDialog();
} 
static int _OnCancelrptMedicalCabinetPatientExportReportDialogFnc(CWnd *pWnd){
	 return ((rptMedicalCabinetPatientExportReportDialog*)pWnd)->OnCancelrptMedicalCabinetPatientExportReportDialog();
} 
rptMedicalCabinetPatientExportReportDialog::rptMedicalCabinetPatientExportReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
rptMedicalCabinetPatientExportReportDialog::~rptMedicalCabinetPatientExportReportDialog(){
}
void rptMedicalCabinetPatientExportReportDialog::OnCreateComponents(){
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
void rptMedicalCabinetPatientExportReportDialog::OnInitializeComponents(){
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
void rptMedicalCabinetPatientExportReportDialog::OnSetWindowEvents(){
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
void rptMedicalCabinetPatientExportReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDrugType.GetDlgCtrlID(), m_szDrugTypeKey);
	DDX_Check(pDX, m_wndSurgeryAndOperation.GetDlgCtrlID(), m_bSurgeryAndOperation);

}
void rptMedicalCabinetPatientExportReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptMedicalCabinetPatientExportReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptMedicalCabinetPatientExportReportDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDrugTypeKey.Empty();
	m_bSurgeryAndOperation=FALSE;

}
int rptMedicalCabinetPatientExportReportDialog::SetMode(int nMode){
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
void rptMedicalCabinetPatientExportReportDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetPatientExportReportDialog::OnStockSelendok(){
	 
}
/*void rptMedicalCabinetPatientExportReportDialog::OnStockSetfocus(){
	
}*/
/*void rptMedicalCabinetPatientExportReportDialog::OnStockKillfocus(){
	
}*/
long rptMedicalCabinetPatientExportReportDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && str2int(m_szStockKey) > 0 ){
		szWhere.Format(_T(" and pmsl_stockid=%d"), str2int(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
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
/*void rptMedicalCabinetPatientExportReportDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void rptMedicalCabinetPatientExportReportDialog::OnFromDateChange(){
	
} */
/*void rptMedicalCabinetPatientExportReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptMedicalCabinetPatientExportReportDialog::OnFromDateKillfocus(){
	
} */
int rptMedicalCabinetPatientExportReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptMedicalCabinetPatientExportReportDialog::OnToDateChange(){
	
} */
/*void rptMedicalCabinetPatientExportReportDialog::OnToDateSetfocus(){
	
} */
/*void rptMedicalCabinetPatientExportReportDialog::OnToDateKillfocus(){
	
} */
int rptMedicalCabinetPatientExportReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptMedicalCabinetPatientExportReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetPatientExportReportDialog::OnObjectSelendok(){
	 
}
/*void rptMedicalCabinetPatientExportReportDialog::OnObjectSetfocus(){
	
}*/
/*void rptMedicalCabinetPatientExportReportDialog::OnObjectKillfocus(){
	
}*/
long rptMedicalCabinetPatientExportReportDialog::OnObjectLoadData(){
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
/*void rptMedicalCabinetPatientExportReportDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptMedicalCabinetPatientExportReportDialog::OnDrugTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetPatientExportReportDialog::OnDrugTypeSelendok(){
	 
}
/*void rptMedicalCabinetPatientExportReportDialog::OnDrugTypeSetfocus(){
	
}*/
/*void rptMedicalCabinetPatientExportReportDialog::OnDrugTypeKillfocus(){
	
}*/
long rptMedicalCabinetPatientExportReportDialog::OnDrugTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugType.IsSearchKey() && !m_szDrugTypeKey.IsEmpty()){
		szWhere.Format(_T(" and pmdt_id='%s' "), m_szDrugTypeKey);
	};
	m_wndDrugType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmdt_id as id, pmdt_name as name, pmdt_desc as group FROM pms_drugtype %s ORDER BY pmdt_index, pmdt_id"), szWhere);
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
/*void rptMedicalCabinetPatientExportReportDialog::OnDrugTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void rptMedicalCabinetPatientExportReportDialog::OnSurgeryAndOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void rptMedicalCabinetPatientExportReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	static CReport rpt;
	CString tmpStr, szSQL;
	CString szObject, szObjectName, szWhere;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	if(!rpt.Init(_T("Reports/HMS/TM_BAOCAOSUDUNGTHUOCTUTRUC.RPT")) )
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
	if(tmpStr.IsEmpty()){
		TranslateString(_T("All object"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	tmpStr.Empty();
	if(m_bSurgeryAndOperation){
		TranslateString(_T("Used for surgery and operation"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Surgery"), tmpStr);
		tmpStr.Empty();
	}

	tmpStr = m_wndDrugType.GetCheckData(1);
	if(tmpStr.IsEmpty())
		tmpStr  = m_wndDrugType.GetCurrent(1);
	if(tmpStr.IsEmpty()){
		TranslateString(_T("All Types"), tmpStr);
	}

	rpt.GetReportHeader()->SetValue(_T("DrugType"), tmpStr);
	tmpStr.Empty();

	//Page Header
	//Report Detail
	CReportSection* rptDetail;
	
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

	
	if(m_bSurgeryAndOperation){
		szWhere.AppendFormat(_T(" and hpo_type='M' "));
	}
	tmpStr = m_wndObject.GetCheckData(0);
	if(tmpStr.IsEmpty())
		tmpStr = m_szObjectKey;


	if(!tmpStr.IsEmpty())
	{
		tmpStr.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and hd_object in('%s') "), tmpStr);
	}

	szSQL.Format(_T(" SELECT distinct hpo_orderid as orderid, hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	date_part('year', hp_birthdate) as yearofbirth,") \
		_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	hp_sex as sex,") \
		_T(" 	hpo_issuedate as issuedate") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid) ") \
		_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid) ") \
		_T(" WHERE hpo_stockid=%d and hpo_status = 'I' and hpo_issuedate between '%s' and '%s' %s ") \
		_T(" ORDER BY hpo_issuedate"), str2int(m_szStockKey),m_szFromDate,m_szToDate,szWhere);

_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	double nTotalAmount = 0;
	int nIndex=1;
	CString szOrderID;
	while(!rs.IsEOF()){
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("pname"), tmpStr);
		rs.GetValue(_T("yearofbirth"), tmpStr);
		rptDetail->SetValue(_T("yearofbirth"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("sex"), pMF->GetSelectionString(_T("sys_sex"), tmpStr));
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("docno"), tmpStr);
		rs.GetValue(_T("orderid"), szOrderID);
		rptDetail->SetValue(_T("orderid"), szOrderID);
		rs.GetValue(_T("issuedate"), tmpStr);
		rptDetail->SetValue(_T("IssueDate"), CDateTime::Convert(tmpStr, yyyymmdd||hhmm, ddmmyyyy|hhmm));


		szSQL.Format(_T(" SELECT 	pmi_name as drugname, ") \
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
			_T(" WHERE hpo_orderid=%ld ") \
			_T(" GROUP BY drugname, unit, unitprice, orgname"), str2long(szOrderID));

		rsl.ExecSQL(szSQL);
		int nIndex = 1;
		double nTotalAmount = 0;
		while(!rsl.IsEOF()){

			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rsl.GetValue(_T("drugname"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rsl.GetValue(_T("unitprice"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rsl.GetValue(_T("money"), tmpStr);
			nTotalAmount += str2double(tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			rsl.GetValue(_T("orgname"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);

			rsl.MoveNext();
		}

		rs.MoveNext();
	}
	
	//Page Footer
	//Report Footer
	CDate sysDate;
	sysDate.ParseDate(pMF->GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	
	rpt.PrintPreview();
	
} 
void rptMedicalCabinetPatientExportReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptMedicalCabinetPatientExportReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int rptMedicalCabinetPatientExportReportDialog::OnAddrptMedicalCabinetPatientExportReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptMedicalCabinetPatientExportReportDialog::OnEditrptMedicalCabinetPatientExportReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptMedicalCabinetPatientExportReportDialog::OnDeleterptMedicalCabinetPatientExportReportDialog(){
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
 		OnCancelrptMedicalCabinetPatientExportReportDialog(); 
 	}
	return 0;
}
int rptMedicalCabinetPatientExportReportDialog::OnSaverptMedicalCabinetPatientExportReportDialog(){
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
 		//OnrptMedicalCabinetPatientExportReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int rptMedicalCabinetPatientExportReportDialog::OnCancelrptMedicalCabinetPatientExportReportDialog(){
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
int rptMedicalCabinetPatientExportReportDialog::OnrptMedicalCabinetPatientExportReportDialogListLoadData(){
	return 0;
}

