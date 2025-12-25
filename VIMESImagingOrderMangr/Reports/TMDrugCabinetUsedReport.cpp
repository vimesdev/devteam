#include "stdafx.h"
#include "TMDrugCabinetUsedReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static const int m_nMaxCol = 37;

typedef struct tagItemInfo
{
	CString szItemID;
	CString szName;
	int nIndex;
	double nTotal;
	//bool bIsRep;
}COLUMNINFO;


static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDrugCabinetUsedReport* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CTMDrugCabinetUsedReport *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnStockAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDrugCabinetUsedReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDrugCabinetUsedReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDrugCabinetUsedReport* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CTMDrugCabinetUsedReport *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnObjectAddNew();
}*/
static void _OnDrugTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMDrugCabinetUsedReport* )pWnd)->OnDrugTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugTypeSelendokFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnDrugTypeSelendok();
}
/*static void _OnDrugTypeSetfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnDrugTypeKillfocus();
}*/
/*static void _OnDrugTypeKillfocusFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnDrugTypeKillfocus();
}*/
static long _OnDrugTypeLoadDataFnc(CWnd *pWnd){
	return ((CTMDrugCabinetUsedReport *)pWnd)->OnDrugTypeLoadData();
}
/*static void _OnDrugTypeAddNewFnc(CWnd *pWnd){
	((CTMDrugCabinetUsedReport *)pWnd)->OnDrugTypeAddNew();
}*/
static void _OnSurgeryAndOperationSelectFnc(CWnd *pWnd){
	 ((CTMDrugCabinetUsedReport*)pWnd)->OnSurgeryAndOperationSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMDrugCabinetUsedReport *pVw = (CTMDrugCabinetUsedReport *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDrugCabinetUsedReport *pVw = (CTMDrugCabinetUsedReport *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMDrugCabinetUsedReport *pVw = (CTMDrugCabinetUsedReport *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCTMDrugCabinetUsedReportFnc(CWnd *pWnd){
	 return ((CTMDrugCabinetUsedReport*)pWnd)->OnAddCTMDrugCabinetUsedReport();
} 
static int _OnEditCTMDrugCabinetUsedReportFnc(CWnd *pWnd){
	 return ((CTMDrugCabinetUsedReport*)pWnd)->OnEditCTMDrugCabinetUsedReport();
} 
static int _OnDeleteCTMDrugCabinetUsedReportFnc(CWnd *pWnd){
	 return ((CTMDrugCabinetUsedReport*)pWnd)->OnDeleteCTMDrugCabinetUsedReport();
} 
static int _OnSaveCTMDrugCabinetUsedReportFnc(CWnd *pWnd){
	 return ((CTMDrugCabinetUsedReport*)pWnd)->OnSaveCTMDrugCabinetUsedReport();
} 
static int _OnCancelCTMDrugCabinetUsedReportFnc(CWnd *pWnd){
	 return ((CTMDrugCabinetUsedReport*)pWnd)->OnCancelCTMDrugCabinetUsedReport();
} 
CTMDrugCabinetUsedReport::CTMDrugCabinetUsedReport(CWnd *pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CTMDrugCabinetUsedReport::~CTMDrugCabinetUsedReport(){
}
void CTMDrugCabinetUsedReport::OnCreateComponents()
{
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
	m_wndSurgeryAndOperation.Create(this, _T("Surgery and Operation"), 115, 180, 365, 205);

	m_wndPrintPreview.Create(this, _T("&Print Preview"), 205, 215, 285, 240);
	m_wndExport.Create(this, _T("&Export"), 290, 215, 370, 240);

}
void CTMDrugCabinetUsedReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);


	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);

	m_wndDrugType.SetCheckBox(TRUE);
	m_wndDrugType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDrugType.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndDrugType.InsertColumn(2, _T("group"), CFMT_TEXT, 0);

}
void CTMDrugCabinetUsedReport::OnSetWindowEvents(){
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
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate.Format(_T("%s 00:00:00"), pMF->GetSysDate());
	m_szToDate = pMF->GetSysDateTime();
	
	m_bSurgeryAndOperation = false;
	SetMode(VM_EDIT);
}
void CTMDrugCabinetUsedReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDrugType.GetDlgCtrlID(), m_szDrugTypeKey);
	DDX_Check(pDX, m_wndSurgeryAndOperation.GetDlgCtrlID(), m_bSurgeryAndOperation);

}
void CTMDrugCabinetUsedReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMDrugCabinetUsedReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMDrugCabinetUsedReport::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDrugTypeKey.Empty();
	m_bSurgeryAndOperation=FALSE;

}
int CTMDrugCabinetUsedReport::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
void CTMDrugCabinetUsedReport::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDrugCabinetUsedReport::OnStockSelendok(){
	 
}
/*void CTMDrugCabinetUsedReport::OnStockSetfocus(){
	
}*/
/*void CTMDrugCabinetUsedReport::OnStockKillfocus(){
	
}*/
long CTMDrugCabinetUsedReport::OnStockLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && str2int(m_szStockKey) > 0 )
	{
		szWhere.Format(_T(" and pmsl_stockid=%d"), str2int(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmsl_stockid as id, pmsl_name as name FROM pms_stocklist WHERE pmsl_type='C' and pmsl_deptid='%s' %s ORDER BY pmsl_stockid"), 
				 pMF->m_szDept, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMDrugCabinetUsedReport::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMDrugCabinetUsedReport::OnFromDateChange(){
	
} */
/*void CTMDrugCabinetUsedReport::OnFromDateSetfocus(){
	
} */
/*void CTMDrugCabinetUsedReport::OnFromDateKillfocus(){
	
} */
int CTMDrugCabinetUsedReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMDrugCabinetUsedReport::OnToDateChange(){
	
} */
/*void CTMDrugCabinetUsedReport::OnToDateSetfocus(){
	
} */
/*void CTMDrugCabinetUsedReport::OnToDateKillfocus(){
	
} */
int CTMDrugCabinetUsedReport::OnToDateCheckValue(){
	return 0;
} 
void CTMDrugCabinetUsedReport::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDrugCabinetUsedReport::OnObjectSelendok(){
	 
}
/*void CTMDrugCabinetUsedReport::OnObjectSetfocus(){
	
}*/
/*void CTMDrugCabinetUsedReport::OnObjectKillfocus(){
	
}*/
long CTMDrugCabinetUsedReport::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CTMDrugCabinetUsedReport::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMDrugCabinetUsedReport::OnDrugTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMDrugCabinetUsedReport::OnDrugTypeSelendok(){
	 
}
/*void CTMDrugCabinetUsedReport::OnDrugTypeSetfocus(){
	
}*/
/*void CTMDrugCabinetUsedReport::OnDrugTypeKillfocus(){
	
}*/
long CTMDrugCabinetUsedReport::OnDrugTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CTMDrugCabinetUsedReport::OnDrugTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CTMDrugCabinetUsedReport::OnSurgeryAndOperationSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CTMDrugCabinetUsedReport::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	static CReport rpt;
	CString tmpStr, szSQL;
	CString szObject, szObjectName, szWhere;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rsc(&pMF->m_db);
	if(!rpt.Init(_T("Reports/HMS/TM_SUDUNGTHUOCTUTRUCLS.RPT")))
		return;

	UpdateData(true);

	if(m_szStockKey.IsEmpty())
	{
		ShowMessageBox(_T("Request select a stock"));
		return;
	}

	BeginWaitCursor();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	//tmpStr.Empty();
	
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
	}

	szSQL.Format(_T(" SELECT distinct hpo_orderid as orderid, hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	date_part('year', hp_birthdate) as yearofbirth,") \
		_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	hp_sex as sex, ") \
		_T("	hpo_roomid as roomid, hpo_bedid as bedid, ")\
		_T(" 	hpo_issuedate as issuedate") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid) ") \
		_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid) ") \
		_T(" WHERE hpo_stockid=%d and hpo_status = 'I' and hpo_issuedate between '%s' and '%s' %s ") \
		_T(" ORDER BY hd_docno, hpo_issuedate"), str2int(m_szStockKey), m_szFromDate, m_szToDate, szWhere);

	//_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);

	double nQty = 0;
	int nIndex = 1, nIdx = 1;
	int nRoomID, nBedID;
	CString szOrderID, szDocNo;
	CString szTemp;
	COLUMNINFO colInfo;
	CArray<COLUMNINFO, COLUMNINFO&> m_arrItem;
	//CUIntArray m_arrTotal;

	m_arrItem.RemoveAll();

	while (!rs.IsEOF())
	{
		if (!szOrderID.IsEmpty())
			szOrderID += _T(",");
		szOrderID.AppendFormat(_T("%ld"), str2long(rs.GetValue(_T("orderid"))));
		rs.MoveNext();
	}

	if (!szOrderID.IsEmpty())
	{
		szSQL.Format(_T(" SELECT distinct pmi_id as id, pmi_name as drugname") \
					_T(" FROM hms_pharmacyorder") \
					_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
					_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
					_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
					_T(" WHERE hpo_orderid IN(%s)") \
					_T(" ORDER BY drugname, id"), szOrderID);
		rsc.ExecSQL(szSQL);

		_fmsg(_T("%s"), szSQL);


		while (!rsc.IsEOF())
		{ 
			//MessageBox(_T("OK"));
			/*if (nIndex <= m_nMaxCol)
			{
				szTemp.Format(_T("%d"), nIndex);
				rsc.GetValue(_T("drugname"), tmpStr);	
				rptDetail->SetValue(szTemp, tmpStr);
				nIndex++;
			}*/
			if (nIdx % m_nMaxCol == 1)
				nIdx = 1;
			colInfo.szItemID = rsc.GetValue(_T("id"));
			colInfo.szName = rsc.GetValue(_T("drugname"));
			colInfo.nIndex = nIdx;
			//colInfo.bIsRep = true;
			colInfo.nTotal = 0;
			m_arrItem.Add(colInfo);
			nIdx++;
			rsc.MoveNext();
		}
	}

	int nCount = 0;
	bool bCheck = false;
	//_msg(_T("%d"), m_arrItem.GetSize());
	int nMaxVal;

	while (nCount * m_nMaxCol < m_arrItem.GetSize())
	{

		rs.MoveFirst();
		nIndex = 1;
		szDocNo.Empty();
		szOrderID.Empty();

		if ((nCount + 1) * m_nMaxCol < m_arrItem.GetSize())
			nMaxVal = (nCount + 1) * m_nMaxCol;
		else
			nMaxVal = m_arrItem.GetSize();

		if (nCount > 0)
		{
			if (rptDetail)
				rptDetail->SetPageBreak(true);
		}

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

		for (int j = nCount * m_nMaxCol; j < nMaxVal; j++)
		{
			/*if (j > nCount * m_nMaxCol && j % m_nMaxCol == 0)
				break;*/
			colInfo = m_arrItem[j];
			szTemp.Format(_T("%d"), colInfo.nIndex);
			rptDetail->SetValue(szTemp, colInfo.szName);
		}

		while(!rs.IsEOF())
		{
			if (szDocNo.IsEmpty() || szDocNo != rs.GetValue(_T("docno")))
			{
				if (!szOrderID.IsEmpty())
				{
					szSQL.Format(_T(" SELECT pmi_id as id, pmi_name as drugname, ") \
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
								_T(" WHERE hpo_orderid IN(%s) ") \
								_T(" GROUP BY id, drugname, unit, unitprice, orgname ")\
								_T(" ORDER BY drugname, id, unit, unitprice, orgname"), szOrderID);

					rsl.ExecSQL(szSQL);
					//double nTotalAmount = 0;
					
					while (!rsl.IsEOF())
					{
						rsl.GetValue(_T("id"), tmpStr);
						for (int i = nCount * m_nMaxCol; i < nMaxVal; i++)
						{
							colInfo = m_arrItem[i];
							if (colInfo.szItemID == tmpStr)
							{
								szTemp.Format(_T("%d"), colInfo.nIndex);
								rptDetail->SetValue(szTemp, rsl.GetValue(_T("qty")));
								rsl.GetValue(_T("qty"), nQty);
								colInfo.nTotal += nQty;
								m_arrItem.SetAt(i, colInfo);
								//_msg(_T("%ld"), colInfo.nTotal);
								break;
							}
						}

						rsl.MoveNext();
					}
				}

				rptDetail = rpt.AddDetail();

				tmpStr.Format(_T("%d"), nIndex);
				rptDetail->SetValue(_T("Index"), tmpStr);

				rs.GetValue(_T("docno"), szDocNo);
				rptDetail->SetValue(_T("DocNo"), szDocNo);

				rs.GetValue(_T("pname"), tmpStr);
				rptDetail->SetValue(_T("PatientName"), tmpStr);

				rs.GetValue(_T("age"), tmpStr);
				rptDetail->SetValue(_T("Age"), tmpStr);

				rs.GetValue(_T("roomid"), nRoomID);
				rptDetail->SetValue(_T("RoomID"), pMF->GetRoomName(pMF->m_szDept, nRoomID));

				rs.GetValue(_T("bedid"), nBedID);
				rptDetail->SetValue(_T("BedID"), pMF->GetBedName(pMF->m_szDept, nRoomID, nBedID));

				szOrderID.Empty();
				nIndex++;
			}

			if (!szOrderID.IsEmpty())
				szOrderID += _T(",");
			szOrderID.AppendFormat(_T("%ld"), str2long(rs.GetValue(_T("orderid"))));
			
			rs.MoveNext();
		}

		if (!szOrderID.IsEmpty())
		{
			szSQL.Format(_T(" SELECT pmi_id as id, pmi_name as drugname, ") \
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
						_T(" WHERE hpo_orderid IN(%s) ") \
						_T(" GROUP BY id, drugname, unit, unitprice, orgname ")\
						_T(" ORDER BY drugname, id, unit, unitprice, orgname"), szOrderID);

			rsl.ExecSQL(szSQL);
			//double nTotalAmount = 0;
			while (!rsl.IsEOF())
			{
				rsl.GetValue(_T("id"), tmpStr);
				for (int l = nCount * m_nMaxCol; l < nMaxVal; l++)
				{
					colInfo = m_arrItem[l];
					if (colInfo.szItemID == tmpStr)
					{
						szTemp.Format(_T("%d"), colInfo.nIndex);
						rptDetail->SetValue(szTemp, rsl.GetValue(_T("qty")));
						rsl.GetValue(_T("qty"), nQty);
						colInfo.nTotal += nQty;
						m_arrItem.SetAt(l, colInfo);
						break;
					}
				}
				rsl.MoveNext();
			}
		}



		for (int k = nCount * m_nMaxCol; k < nMaxVal; k++)
		{
			/*if (k > nCount * m_nMaxCol && k % m_nMaxCol == 0)
				break;*/
			colInfo = m_arrItem[k];
			if (colInfo.nTotal > 0)
			{
				if (!bCheck)
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					bCheck = true;
				}
				szTemp.Format(_T("%.3f"), colInfo.nTotal);
				tmpStr.Format(_T("s%d"), colInfo.nIndex);
				CReportItem *pObj = rptDetail->GetItem(tmpStr);
				if (pObj)
				{
					pObj->SetBold(true);
					//pObj->SetStyle(FORMAT_NUMBER);
				}
				//rptDetail->GetItem(tmpStr)->SetBold(true);
				//MessageBox(long2str(colInfo.nTotal));
				//MessageBox(tmpStr);
				rptDetail->SetValue(tmpStr, szTemp);
			}
		}

		bCheck = false;
		nCount++;
	}
	
	//Page Footer
	//Report Footer
	CString szSysDate;
	szSysDate = pMF->GetSysDate();
	szTemp = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
    tmpStr.Format(szTemp, szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	//tmpStr.Format(_T("%.2f"), nTotalAmount);
	//rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	
	EndWaitCursor();

	rpt.PrintPreview();
	
} 
void CTMDrugCabinetUsedReport::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString tmpStr, szSQL;
	CString szObject, szObjectName, szWhere;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rsc(&pMF->m_db);
	CExcel xls;

	UpdateData(TRUE);
	if (m_szStockKey.IsEmpty())
	{
		ShowMessageBox(_T("Request select a stock"));
		return;
	}


	BeginWaitCursor();


	tmpStr.Empty();
	
	tmpStr = m_wndDrugType.GetCheckData(2);
	if (!tmpStr.IsEmpty())
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

	if (tmpStr.IsEmpty())
		tmpStr = m_szObjectKey;

	if (!tmpStr.IsEmpty())
	{
		tmpStr.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and hd_object in('%s') "), tmpStr);
	}

	szSQL.Format(_T(" SELECT distinct hpo_orderid as orderid, hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	date_part('year', hp_birthdate) as yearofbirth,") \
		_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" 	hp_sex as sex, ") \
		_T("	hpo_roomid as roomid, hpo_bedid as bedid, ")\
		_T(" 	hpo_issuedate as issuedate") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid) ") \
		_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid) ") \
		_T(" WHERE hpo_stockid=%d and hpo_status = 'I' and hpo_issuedate between '%s' and '%s' %s ") \
		_T(" ORDER BY hd_docno, hpo_issuedate"), str2int(m_szStockKey), m_szFromDate, m_szToDate, szWhere);

	_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);

	double nQty = 0;
	int nIndex = 1, nIdx = 6;
	int nRoomID, nBedID;
	CString szOrderID, szDocNo;
	CString szTemp;
	COLUMNINFO colInfo;
	CArray<COLUMNINFO, COLUMNINFO&> m_arrItem;
	//CUIntArray m_arrTotal;

	m_arrItem.RemoveAll();

	while (!rs.IsEOF())
	{
		if (!szOrderID.IsEmpty())
			szOrderID += _T(",");
		szOrderID.AppendFormat(_T("%ld"), str2long(rs.GetValue(_T("orderid"))));
		rs.MoveNext();
	}

	if (!szOrderID.IsEmpty())
	{
		szSQL.Format(_T(" SELECT distinct pmi_id as id, pmi_name as drugname") \
					_T(" FROM hms_pharmacyorder") \
					_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
					_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
					_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
					_T(" WHERE hpo_orderid IN(%s)") \
					_T(" ORDER BY drugname, id"), szOrderID);
		rsc.ExecSQL(szSQL);

		//_fmsg(_T("%s"), szSQL);


		while (!rsc.IsEOF())
		{ 
			colInfo.szItemID = rsc.GetValue(_T("id"));
			colInfo.szName = rsc.GetValue(_T("drugname"));
			colInfo.nIndex = nIdx;
			colInfo.nTotal = 0;
			m_arrItem.Add(colInfo);
			nIdx++;
			rsc.MoveNext();
		}
	}

	//_msg(_T("%d"), m_arrItem.GetSize());

	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 4);
	xls.SetColumnWidth(4, 9);
	xls.SetColumnWidth(5, 10);

	xls.SetRowHeight(8, 60);

	xls.SetCellMergedColumns(0, 0, 6);
	xls.SetCellMergedColumns(0, 1, 6);
	xls.SetCellMergedColumns(0, 2, 6);
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	xls.SetCellText(0, 0, tmpStr, FMT_TEXT, true, 12, 0);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	xls.SetCellText(0, 1, tmpStr, FMT_TEXT, true, 12, 0);
	tmpStr = pMF->GetCurrentDepartmentName();
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT, true, 12, 0);
	xls.SetCellMergedColumns(0, 3, 12);	
	xls.SetCellText(0, 4, _T("T\x1ED4NG H\x1EE2P S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 T\x1EE6 TR\x1EF0\x43"), FMT_TEXT, true, 16, 0);
	xls.SetCellMergedColumns(0, 4, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), 
				  CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), 
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT, true, 12, 0);

	tmpStr.Format(_T("Kho: %s"), m_wndStock.GetCurrent(1));
	xls.SetCellText(0, 6, tmpStr, FMT_TEXT, true, 12, 0);

	int nRow = 8, nCol = 0;

	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Doc No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Full Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Room"), tmpStr);
	xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Bed"), tmpStr);
	xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	for (int k = 0; k < m_arrItem.GetSize(); k++)
	{
		colInfo = m_arrItem[k];
		xls.SetCellText(nCol + 6 + k, nRow, colInfo.szName, FMT_TEXT, true);
	}

	rs.MoveFirst();
	nIndex = 1;
	szDocNo.Empty();
	szOrderID.Empty();

	while(!rs.IsEOF())
	{
		if (szDocNo.IsEmpty() || szDocNo != rs.GetValue(_T("docno")))
		{
			nRow++;
			if (!szOrderID.IsEmpty())
			{
				szSQL.Format(_T(" SELECT pmi_id as id, pmi_name as drugname, ") \
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
							_T(" WHERE hpo_orderid IN(%s) ") \
							_T(" GROUP BY id, drugname, unit, unitprice, orgname ")\
							_T(" ORDER BY drugname, id, unit, unitprice, orgname"), szOrderID);

				rsl.ExecSQL(szSQL);
				//double nTotalAmount = 0;
				
				while (!rsl.IsEOF())
				{
					rsl.GetValue(_T("id"), tmpStr);
					for (int i = 0; i < m_arrItem.GetSize(); i++)
					{
						colInfo = m_arrItem[i];
						if (colInfo.szItemID == tmpStr)
						{
							xls.SetCellText(colInfo.nIndex, nRow - 1, rsl.GetValue(_T("qty")), FMT_DECIMAL);
							rsl.GetValue(_T("qty"), nQty);
							colInfo.nTotal += nQty;
							m_arrItem.SetAt(i, colInfo);
							//_msg(_T("%ld"), colInfo.nTotal);
							break;
						}
					}

					rsl.MoveNext();
				}
			}

			tmpStr.Format(_T("%d"), nIndex);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

			rs.GetValue(_T("docno"), szDocNo);
			xls.SetCellText(nCol + 1, nRow, szDocNo, FMT_INTEGER);

			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("roomid"), nRoomID);
			xls.SetCellText(nCol + 4, nRow, pMF->GetRoomName(pMF->m_szDept, nRoomID), FMT_TEXT);

			rs.GetValue(_T("bedid"), nBedID);
			xls.SetCellText(nCol + 5, nRow, pMF->GetBedName(pMF->m_szDept, nRoomID, nBedID), FMT_TEXT);

			szOrderID.Empty();
			nIndex++;
		}

		if (!szOrderID.IsEmpty())
			szOrderID += _T(",");
		szOrderID.AppendFormat(_T("%ld"), str2long(rs.GetValue(_T("orderid"))));
		
		rs.MoveNext();
	}

	if (!szOrderID.IsEmpty())
	{
		szSQL.Format(_T(" SELECT pmi_id as id, pmi_name as drugname, ") \
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
					_T(" WHERE hpo_orderid IN(%s) ") \
					_T(" GROUP BY id, drugname, unit, unitprice, orgname ")\
					_T(" ORDER BY drugname, id, unit, unitprice, orgname"), szOrderID);

		rsl.ExecSQL(szSQL);
		//double nTotalAmount = 0;
		while (!rsl.IsEOF())
		{
			rsl.GetValue(_T("id"), tmpStr);
			for (int l = 0; l < m_arrItem.GetSize(); l++)
			{
				colInfo = m_arrItem[l];
				if (colInfo.szItemID == tmpStr)
				{
					xls.SetCellText(colInfo.nIndex, nRow, rsl.GetValue(_T("qty")), FMT_DECIMAL);
					rsl.GetValue(_T("qty"), nQty);
					colInfo.nTotal += nQty;
					m_arrItem.SetAt(l, colInfo);
					break;
				}
			}
			rsl.MoveNext();
		}
	}

	bool bCheck = false;
	nRow++;

	for (int j = 0; j < m_arrItem.GetSize(); j++)
	{
		colInfo = m_arrItem[j];
		if (colInfo.nTotal > 0)
		{
			if (!bCheck)
			{
				xls.SetCellMergedColumns(nCol, nRow, 6);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng"), FMT_TEXT | FMT_TEXT, true);
				bCheck = true;
			}
			szTemp.Format(_T("%.3f"), colInfo.nTotal);
			xls.SetCellText(colInfo.nIndex, nRow, szTemp, FMT_DECIMAL, true);
		}
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Tong hop su dung thuoc tu truc.xls"));
} 
void CTMDrugCabinetUsedReport::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		
} 
int CTMDrugCabinetUsedReport::OnAddCTMDrugCabinetUsedReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMDrugCabinetUsedReport::OnEditCTMDrugCabinetUsedReport(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDrugCabinetUsedReport::OnDeleteCTMDrugCabinetUsedReport(){
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
 		OnCancelCTMDrugCabinetUsedReport(); 
 	}
	return 0;
}
int CTMDrugCabinetUsedReport::OnSaveCTMDrugCabinetUsedReport(){
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
 		//OnCTMDrugCabinetUsedReportListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMDrugCabinetUsedReport::OnCancelCTMDrugCabinetUsedReport(){
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
int CTMDrugCabinetUsedReport::OnCTMDrugCabinetUsedReportListLoadData(){
	return 0;
}
