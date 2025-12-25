#include "stdafx.h"
#include "TMSudungthuoctutruc.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"

static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSudungthuoctutruc* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CTMSudungthuoctutruc *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnStockAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMSudungthuoctutruc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMSudungthuoctutruc *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSudungthuoctutruc* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CTMSudungthuoctutruc *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnObjectAddNew();
}*/
static void _OnDrugTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMSudungthuoctutruc* )pWnd)->OnDrugTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugTypeSelendokFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnDrugTypeSelendok();
}
/*static void _OnDrugTypeSetfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnDrugTypeKillfocus();
}*/
/*static void _OnDrugTypeKillfocusFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnDrugTypeKillfocus();
}*/
static long _OnDrugTypeLoadDataFnc(CWnd *pWnd){
	return ((CTMSudungthuoctutruc *)pWnd)->OnDrugTypeLoadData();
}
/*static void _OnDrugTypeAddNewFnc(CWnd *pWnd){
	((CTMSudungthuoctutruc *)pWnd)->OnDrugTypeAddNew();
}*/
static void _OnSurgeryAndOperationSelectFnc(CWnd *pWnd){
	 ((CTMSudungthuoctutruc*)pWnd)->OnSurgeryAndOperationSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CTMSudungthuoctutruc *pVw = (CTMSudungthuoctutruc *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMSudungthuoctutruc *pVw = (CTMSudungthuoctutruc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTMSudungthuoctutruc *pVw = (CTMSudungthuoctutruc *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCTMSudungthuoctutrucFnc(CWnd *pWnd){
	 return ((CTMSudungthuoctutruc*)pWnd)->OnAddCTMSudungthuoctutruc();
} 
static int _OnEditCTMSudungthuoctutrucFnc(CWnd *pWnd){
	 return ((CTMSudungthuoctutruc*)pWnd)->OnEditCTMSudungthuoctutruc();
} 
static int _OnDeleteCTMSudungthuoctutrucFnc(CWnd *pWnd){
	 return ((CTMSudungthuoctutruc*)pWnd)->OnDeleteCTMSudungthuoctutruc();
} 
static int _OnSaveCTMSudungthuoctutrucFnc(CWnd *pWnd){
	 return ((CTMSudungthuoctutruc*)pWnd)->OnSaveCTMSudungthuoctutruc();
} 
static int _OnCancelCTMSudungthuoctutrucFnc(CWnd *pWnd){
	 return ((CTMSudungthuoctutruc*)pWnd)->OnCancelCTMSudungthuoctutruc();
} 
CTMSudungthuoctutruc::CTMSudungthuoctutruc(CWnd *pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CTMSudungthuoctutruc::~CTMSudungthuoctutruc(){
}
void CTMSudungthuoctutruc::OnCreateComponents(){
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
	/*m_wndPrintPreview.Create(this, _T("&Print Preview"), 205, 215, 285, 240);*/
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 270, 215, 370, 240);

}
void CTMSudungthuoctutruc::OnInitializeComponents(){
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


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 280);


	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);

	m_wndDrugType.SetCheckBox(TRUE);
	m_wndDrugType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndDrugType.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);

}
void CTMSudungthuoctutruc::OnSetWindowEvents(){
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
void CTMSudungthuoctutruc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDrugType.GetDlgCtrlID(), m_szDrugTypeKey);
	DDX_Check(pDX, m_wndSurgeryAndOperation.GetDlgCtrlID(), m_bSurgeryAndOperation);

}
void CTMSudungthuoctutruc::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMSudungthuoctutruc::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMSudungthuoctutruc::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDrugTypeKey.Empty();
	m_bSurgeryAndOperation=FALSE;

}
int CTMSudungthuoctutruc::SetMode(int nMode){
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
void CTMSudungthuoctutruc::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSudungthuoctutruc::OnStockSelendok(){
	 
}
/*void CTMSudungthuoctutruc::OnStockSetfocus(){
	
}*/
/*void CTMSudungthuoctutruc::OnStockKillfocus(){
	
}*/
long CTMSudungthuoctutruc::OnStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && str2int(m_szStockKey) > 0 ){
		szWhere.Format(_T(" and msl_storageid=%d"), str2int(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1 = 1 %s ORDER BY msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMSudungthuoctutruc::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CTMSudungthuoctutruc::OnFromDateChange(){
	
} */
/*void CTMSudungthuoctutruc::OnFromDateSetfocus(){
	
} */
/*void CTMSudungthuoctutruc::OnFromDateKillfocus(){
	
} */
int CTMSudungthuoctutruc::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMSudungthuoctutruc::OnToDateChange(){
	
} */
/*void CTMSudungthuoctutruc::OnToDateSetfocus(){
	
} */
/*void CTMSudungthuoctutruc::OnToDateKillfocus(){
	
} */
int CTMSudungthuoctutruc::OnToDateCheckValue(){
	return 0;
} 
void CTMSudungthuoctutruc::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSudungthuoctutruc::OnObjectSelendok(){
	 
}
/*void CTMSudungthuoctutruc::OnObjectSetfocus(){
	
}*/
/*void CTMSudungthuoctutruc::OnObjectKillfocus(){
	
}*/
long CTMSudungthuoctutruc::OnObjectLoadData(){
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
/*void CTMSudungthuoctutruc::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMSudungthuoctutruc::OnDrugTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSudungthuoctutruc::OnDrugTypeSelendok(){
	 
}
/*void CTMSudungthuoctutruc::OnDrugTypeSetfocus(){
	
}*/
/*void CTMSudungthuoctutruc::OnDrugTypeKillfocus(){
	
}*/
long CTMSudungthuoctutruc::OnDrugTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugType.IsSearchKey() && !m_szDrugTypeKey.IsEmpty()){
		szWhere.Format(_T(" and mpt_product_type_id ='%s' "), m_szDrugTypeKey);
	};
	m_wndDrugType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpt_product_type_id as id, mpt_name as name FROM m_product_type %s ORDER BY mpt_product_type_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CTMSudungthuoctutruc::OnDrugTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CTMSudungthuoctutruc::OnSurgeryAndOperationSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CTMSudungthuoctutruc::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
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
	
	tmpStr = m_wndDrugType.GetCheckData(0);
	if(!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and product_producttype in('%s') "), tmpStr);
	}
	else
	{
		tmpStr = m_wndDrugType.GetCurrent(0);
		if(!tmpStr.IsEmpty())
			szWhere.AppendFormat(_T(" and product_producttype in('%s') "), tmpStr);
	}

	
	if(m_bSurgeryAndOperation){
		szWhere.AppendFormat(_T(" and hpo_ordertype ='M' "));
	}
	tmpStr = m_wndObject.GetCheckData(0);
	if(tmpStr.IsEmpty())
		tmpStr = m_szObjectKey;


	if(!tmpStr.IsEmpty())
	{
		tmpStr.Replace(_T(","), _T("','"));
		szWhere.AppendFormat(_T(" and hd_object in('%s') "), tmpStr);
	}

	szSQL.Format(_T(" SELECT DISTINCT hpo_orderid AS orderid,") \
		_T(" hd_docno                  AS docno,") \
		_T(" trim(hp_surname") \
		_T(" ||' '") \
		_T(" ||hp_midname") \
		_T(" ||' '") \
		_T(" ||hp_firstname)                              AS pname,") \
		_T(" date_part('year', hp_birthdate)              AS yearofbirth,") \
		_T(" hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T(" hp_sex                                       AS sex,") \
		_T(" hpo_approvedate                               AS issuedate") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_ipharmaorder") \
		_T(" ON(hpo_docno=hd_docno)") \
		_T(" LEFT JOIN hms_ipharmaorderline") \
		_T(" ON(hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN m_storagelist") \
		_T(" ON (msl_storage_id=hpol_storage_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (hpol_product_item_id = product_item_id)") \
		_T(" WHERE hpol_storage_id = %s") \
		_T(" AND hpo_orderstatus   = 'A'") \
		_T(" AND hpo_approvedate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" ORDER BY hpo_approvedate"), m_szStockKey,m_szFromDate,m_szToDate,szWhere);

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


		szSQL.Format(_T(" SELECT product_name AS drugname,") \
			_T(" GET_UOMNAME(product_purchase_uomid) AS unit,") \
			_T(" SUM(hpol_qtyissue) AS qty,") \
			_T(" product_vatprice AS unitprice,") \
			_T(" SUM(hpol_qtyissue* product_vatprice) AS money,") \
			_T(" product_countryname AS orgname") \
			_T(" FROM") \
			_T(" hms_ipharmaorder") \
			_T(" LEFT JOIN hms_ipharmaorderline") \
			_T(" ON(hpo_orderid=hpol_orderid)") \
			_T(" LEFT JOIN m_storagelist") \
			_T(" ON (msl_storage_id    =hpol_storage_id)") \
			_T(" LEFT JOIN m_productitem_view") \
			_T(" ON (hpol_product_item_id = product_item_id)") \
			_T(" WHERE hpo_orderid=%s") \
			_T(" GROUP BY product_name,") \
			_T(" product_purchase_uomid,") \
			_T(" product_vatprice,") \
			_T(" product_countryname"), szOrderID);

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
void CTMSudungthuoctutruc::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMSudungthuoctutruc::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		
} 
int CTMSudungthuoctutruc::OnAddCTMSudungthuoctutruc(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTMSudungthuoctutruc::OnEditCTMSudungthuoctutruc(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMSudungthuoctutruc::OnDeleteCTMSudungthuoctutruc(){
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
 		OnCancelCTMSudungthuoctutruc(); 
 	}
	return 0;
}
int CTMSudungthuoctutruc::OnSaveCTMSudungthuoctutruc(){
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
 		//OnCTMSudungthuoctutrucListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMSudungthuoctutruc::OnCancelCTMSudungthuoctutruc(){
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
int CTMSudungthuoctutruc::OnCTMSudungthuoctutrucListLoadData(){
	return 0;
}

