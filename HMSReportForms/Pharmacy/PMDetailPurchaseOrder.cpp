#include "stdafx.h"
#include "PMDetailPurchaseOrder.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMDetailPurchaseOrder *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMDetailPurchaseOrder *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDetailPurchaseOrder* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMDetailPurchaseOrder *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnSupplierAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDetailPurchaseOrder* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMDetailPurchaseOrder *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnTypeAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDetailPurchaseOrder* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CPMDetailPurchaseOrder *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMDetailPurchaseOrder* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CPMDetailPurchaseOrder *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CPMDetailPurchaseOrder *)pWnd)->OnItemAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMDetailPurchaseOrder *pVw = (CPMDetailPurchaseOrder *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMDetailPurchaseOrder *pVw = (CPMDetailPurchaseOrder *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnNonStockFlagSelectFnc(CWnd *pWnd){
	 ((CPMDetailPurchaseOrder*)pWnd)->OnNonStockFlagSelect();
}


CPMDetailPurchaseOrder::CPMDetailPurchaseOrder(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMDetailPurchaseOrder::~CPMDetailPurchaseOrder(){
}
void CPMDetailPurchaseOrder::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 285, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 290, 30, 370, 55);
	m_wndToDate.Create(this,375, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 570, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this,95, 90, 285, 115); 
	m_wndStorageLabel.Create(this, _T("Storage"), 290, 90, 370, 115);
	m_wndStorage.SetCheckBox(TRUE);
	m_wndStorage.Create(this,375, 90, 570, 115); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 120, 90, 145);
	m_wndItem.Create(this,95, 120, 570, 145); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 350, 155, 460, 180);
	m_wndExport.Create(this, _T("&Export"), 465, 155, 575, 180);
	m_wndNonStockFlag.Create(this, _T("HÐ không qua kho"), 10, 155, 160, 180);

}
void CPMDetailPurchaseOrder::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);


	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndItem.Format(3, 2);
	m_wndItem.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("ID"), CFMT_TEXT, 80);
	m_wndItem.InsertColumn(2, _T("Name"), CFMT_TEXT, 350);

}

void CPMDetailPurchaseOrder::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndNonStockFlag.SetEvent(WE_CLICK, _OnNonStockFlagSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CPMDetailPurchaseOrder::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Check(pDX, m_wndNonStockFlag.GetDlgCtrlID(), m_bNonStockFlag);
}
void CPMDetailPurchaseOrder::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_szTypeKey.Empty();
	m_szStorageKey.Empty();
	m_bNonStockFlag=FALSE;
}

int CPMDetailPurchaseOrder::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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

/*void CPMDetailPurchaseOrder::OnFromDateChange(){
	
} */
/*void CPMDetailPurchaseOrder::OnFromDateSetfocus(){
	
} */
/*void CPMDetailPurchaseOrder::OnFromDateKillfocus(){
	
} */

void CPMDetailPurchaseOrder::OnNonStockFlagSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	AfxMessageBox(_T("Khi chọn chức năng này, bạn không cần chọn kho!"));		
}
int CPMDetailPurchaseOrder::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPMDetailPurchaseOrder::OnToDateChange(){
	
} */
/*void CPMDetailPurchaseOrder::OnToDateSetfocus(){
	
} */
/*void CPMDetailPurchaseOrder::OnToDateKillfocus(){
	
} */
int CPMDetailPurchaseOrder::OnToDateCheckValue(){
	return 0;
}
 
void CPMDetailPurchaseOrder::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPMDetailPurchaseOrder::OnSupplierSelendok(){
	 
}

/*void CPMDetailPurchaseOrder::OnSupplierSetfocus(){
	
}*/
/*void CPMDetailPurchaseOrder::OnSupplierKillfocus(){
	
}*/
long CPMDetailPurchaseOrder::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPMDetailPurchaseOrder::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMDetailPurchaseOrder::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPMDetailPurchaseOrder::OnTypeSelendok(){
	 
}

/*void CPMDetailPurchaseOrder::OnTypeSetfocus(){
	
}*/
/*void CPMDetailPurchaseOrder::OnTypeKillfocus(){
	
}*/
long CPMDetailPurchaseOrder::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems( o
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPMDetailPurchaseOrder::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMDetailPurchaseOrder::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CPMDetailPurchaseOrder::OnStorageSelendok(){
}

/*void CPMDetailPurchaseOrder::OnStorageSetfocus(){
	
}*/
/*void CPMDetailPurchaseOrder::OnStorageKillfocus(){
	
}*/
long CPMDetailPurchaseOrder::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}

/*void CPMDetailPurchaseOrder::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMDetailPurchaseOrder::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMDetailPurchaseOrder::OnItemSelendok(){
	 
}
/*void CPMDetailPurchaseOrder::OnItemSetfocus(){
	
}*/
/*void CPMDetailPurchaseOrder::OnItemKillfocus(){
	
}*/
long CPMDetailPurchaseOrder::OnItemLoadData(){	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	int nCount = 0;

	szWhere.AppendFormat(_T(" AND mp_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT  mp_code AS code,") \
			_T("   mp_name AS name,") \
			_T("   mp_product_id as id") \
			_T(" FROM m_product ") \
			_T(" WHERE  1=1 %s") \
			_T(" ORDER  BY name "), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("Name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMDetailPurchaseOrder::OnItemAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMDetailPurchaseOrder::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CString tmpStr;
	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	TranslateString(_T("Bảng kê nhập kho chi tiết"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	TranslateString(_T("Bảng kê nhập xuất tồn kho"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnPrint();
			break;
		case 2:
			OnPrintIMP();
			break;
	}

	return;

	
}
void CPMDetailPurchaseOrder::OnPrint(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	UpdateData(true);
	BeginWaitCursor();
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate, szStorages;
	long double nTotal = 0;
	//szReportName = _T("Reports\\HMS\\PMS_BANGKENHAPKHOCHITIET.RPT");
	//if (!rpt.Init(szReportName))
	//	return;
	if(pMF->GetModuleID() == _T("PM"))
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_BANGKENHAPKHOCHITIET.RPT"),true) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_BANGKENHAPKHOCHITIET_MA.RPT"),true) )
			return;
	}	

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		tmpStr = _T("Tất cả");
		for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
		{
			if (m_wndStorage.GetCheck(i))
			{
				m_wndStorage.SetCurSel(i);
				if (!szStorages.IsEmpty())
					szStorages += _T(", ");
				szStorages += m_wndStorage.GetCurrent(1);
			}
		}
		if (!szStorages.IsEmpty())
			rptHeader->SetValue(_T("StockName"), szStorages);
		else
			rptHeader->SetValue(_T("StockName"), tmpStr);
		if (!m_szItemKey.IsEmpty())
			rptHeader->SetValue(_T("ItemName"), m_wndItem.GetCurrent(2));
		else
			rptHeader->SetValue(_T("ItemName"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("partner_name")));
			rs.GetValue(_T("import_date"), tmpStr);
			rptDetail->SetValue(_T("4"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("order_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("qty")));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("unit_price")));
			rs.GetValue(_T("amount"), nTmp);
			nTotal+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("id")));
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("classname")));
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("lot_no")));
			rs.GetValue(_T("exp_date"), tmpStr);
			rptDetail->SetValue(_T("12"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("13"), rs.GetValue(_T("manufacture")));
			rptDetail->SetValue(_T("14"), rs.GetValue(_T("uom_name")));
		}
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		tmpStr.Format(_T("%f"), nTotal);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
	
}
void CPMDetailPurchaseOrder::OnPrintIMP(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	UpdateData(true);
	BeginWaitCursor();
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate, szStorages;
	long double nTotal = 0;
	//szReportName = _T("Reports\\HMS\\PMS_BANGKENHAPKHOCHITIET.RPT");
	//if (!rpt.Init(szReportName))
	//	return;
	if(pMF->GetModuleID() == _T("PM"))
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_BANGKENHAPKHOCHITIET_IMP.RPT"),true) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/PMS_BANGKENHAPKHOCHITIET_MA.RPT"),true) )
			return;
	}	

	szSQL = GetQueryString72();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
		tmpStr = _T("Tất cả");
		for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
		{
			if (m_wndStorage.GetCheck(i))
			{
				m_wndStorage.SetCurSel(i);
				if (!szStorages.IsEmpty())
					szStorages += _T(", ");
				szStorages += m_wndStorage.GetCurrent(1);
			}
		}
		if (!szStorages.IsEmpty())
			rptHeader->SetValue(_T("StockName"), szStorages);
		else
			rptHeader->SetValue(_T("StockName"), tmpStr);
		if (!m_szItemKey.IsEmpty())
			rptHeader->SetValue(_T("ItemName"), m_wndItem.GetCurrent(2));
		else
			rptHeader->SetValue(_T("ItemName"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("name")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("partner_name")));
			rs.GetValue(_T("import_date"), tmpStr);
			rptDetail->SetValue(_T("4"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("5"), rs.GetValue(_T("order_no")));
			rptDetail->SetValue(_T("6"), rs.GetValue(_T("qty")));
			rptDetail->SetValue(_T("7"), rs.GetValue(_T("unit_price")));
			rs.GetValue(_T("amount"), nTmp);
			nTotal+= nTmp;
			rptDetail->SetValue(_T("8"), double2str(nTmp));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("id")));
			rptDetail->SetValue(_T("10"), rs.GetValue(_T("classname")));
			rptDetail->SetValue(_T("11"), rs.GetValue(_T("lot_no")));
			rs.GetValue(_T("exp_date"), tmpStr);
			rptDetail->SetValue(_T("12"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("13"), rs.GetValue(_T("manufacture")));
			rptDetail->SetValue(_T("14"), rs.GetValue(_T("uom_name")));
			rptDetail->SetValue(_T("15"), rs.GetValue(_T("expqty")));
			rptDetail->SetValue(_T("16"), rs.GetValue(_T("period_qty")));
			
			
		}
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		tmpStr.Format(_T("%f"), nTotal);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();
	
}
 
void CPMDetailPurchaseOrder::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	long double nTotal = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 20);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 20);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 14);
	xls.SetCellMergedColumns(0, 3, 14);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("BẢNG KÊ NHẬP KHO CHI TIẾT");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("Mã thuốc"), 4098, true);
	xls.SetCellText(2, 4, _T("Tên hàng"), 4098, true);
	xls.SetCellText(3, 4, _T("Tên hoạt chất"), 4098, true);
	xls.SetCellText(4, 4, _T("Số lô"), 4098, true);
	xls.SetCellText(5, 4, _T("Hạn dùng"), 4098, true);
	xls.SetCellText(6, 4, _T("Tên công ty"), 4098, true);
	xls.SetCellText(7, 4, _T("Ngày nhập"), 4098, true);
	xls.SetCellText(8, 4, _T("Số nhập lệnh"), 4098, true);
	xls.SetCellText(9, 4, _T("Đơn vị"), 4098, true);
	xls.SetCellText(10, 4, _T("SL"), 4098, true);
	xls.SetCellText(11, 4, _T("Đơn giá"), 4098, true);
	xls.SetCellText(12, 4, _T("Thành tiền"), 4098, true);
	xls.SetCellText(13, 4, _T("Hãng sản xuất"), 4098, true);
	xls.SetCellText(14, 4, _T("Quyết định thầu"), 4098, true);

	xls.SetCellText(15, 4, _T("mpei_ma_hoat_chat"), 4098, true);
	xls.SetCellText(16, 4, _T("mpei_ten_thuoc"), 4098, true);
	xls.SetCellText(17, 4, _T("mpei_don_gia"), 4098, true);
	xls.SetCellText(18, 4, _T("mpei_so_luong"), 4098, true);
	xls.SetCellText(19, 4, _T("mpei_hang_sx"), 4098, true);
	xls.SetCellText(20, 4, _T("mpei_nha_thau"), 4098, true);
	xls.SetCellText(21, 4, _T("mpei_cong_bo"), 4098, true);

	xls.SetCellText(22, 4, _T("Quyết định thầu"), 4098, true);
	xls.SetCellText(23, 4, _T("Số hợp đồng"), 4098, true);
	xls.SetCellText(24, 4, _T("Ngày ký HĐ"), 4098, true);
	xls.SetCellText(25, 4, _T("Ký hiệu"), 4098, true);
	xls.SetCellText(26, 4, _T("Số hóa đơn"), 4098, true);
	xls.SetCellText(27, 4, _T("Ngày hóa đơn"), 4098, true);
	xls.SetCellText(28, 4, _T("Thầu năm"), 4098, true);



	
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("id")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("name")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("classname")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("lot_no")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("exp_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("partner_name")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("import_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);
		xls.SetCellText(8, nRow, rs.GetValue(_T("order_no")), FMT_TEXT);
		xls.SetCellText(9, nRow, rs.GetValue(_T("uom_name")), FMT_TEXT);
		xls.SetCellText(10, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
		xls.SetCellText(11, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nTmp);
		nTotal += nTmp;
		xls.SetCellText(12, nRow, double2str(nTmp), FMT_NUMBER1);
		xls.SetCellText(13, nRow, rs.GetValue(_T("manufacture")), FMT_TEXT);
		xls.SetCellText(14, nRow, rs.GetValue(_T("quyetdinh")), FMT_TEXT);
		xls.SetCellText(15, nRow, rs.GetValue(_T("mpei_ma_hoat_chat")), FMT_TEXT);
		xls.SetCellText(16, nRow, rs.GetValue(_T("mpei_ten_thuoc")), FMT_TEXT);
		xls.SetCellText(17, nRow, rs.GetValue(_T("mpei_don_gia")), FMT_TEXT);
		xls.SetCellText(18, nRow, rs.GetValue(_T("mpei_so_luong")), FMT_TEXT);
		xls.SetCellText(19, nRow, rs.GetValue(_T("mpei_hang_sx")), FMT_TEXT);
		xls.SetCellText(20, nRow, rs.GetValue(_T("mpei_nha_thau")), FMT_TEXT);
		xls.SetCellText(21, nRow, rs.GetValue(_T("mpei_cong_bo")), FMT_TEXT);

		xls.SetCellText(22, nRow, rs.GetValue(_T("quyetdinhthau")), FMT_TEXT);
		xls.SetCellText(23, nRow, rs.GetValue(_T("sohopdong")), FMT_TEXT);		
		xls.SetCellText(24, nRow, rs.GetValue(_T("ngayky")), FMT_TEXT);
		xls.SetCellText(25, nRow, rs.GetValue(_T("kyhieu")), FMT_TEXT);
		xls.SetCellText(26, nRow, rs.GetValue(_T("sohoadon")), FMT_TEXT);
		xls.SetCellText(27, nRow, rs.GetValue(_T("ngayhoadon")), FMT_TEXT);
		xls.SetCellText(28, nRow, rs.GetValue(_T("thaunam")), FMT_TEXT);

		
		nRow++;
		rs.MoveNext();
	}
	if (nTotal > 0)
	{
		xls.SetCellText(11, nRow, _T("Tổng cộng"), 4098, true);
		tmpStr.Format(_T("%f"), nTotal);
		xls.SetCellText(12, nRow, tmpStr, FMT_NUMBER1, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\AutoExcel.xls"));
	
}
 
CString CPMDetailPurchaseOrder::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szStorages;
	szWhere.Format(_T(" AND po_status = 'A' AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
		, m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if(!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);
	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_producttype = '%s'"), m_szTypeKey);
	if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND pol_product_id = %s"), m_szItemKey);

	if (m_bNonStockFlag)
		szWhere.AppendFormat(_T("and po_storage_id = 0"));

	szSQL.Format(_T(" SELECT po_approveddate import_date, ") \
				_T("   get_partnername(po_partner_id) partner_name,") \
				_T("   po_orderno order_no,") \
				_T("   mp_code AS id,") \
				_T("   mp_name AS name,") \
				/*_T("   mpi_taxprice AS unit_price,") \
				_T("   sum(pol_qtyimport) AS qty,") \
				_T("   sum(pol_qtyimport * mpi_taxprice) AS amount,") \*/

				_T("  case when mp_product_uom_rate >1 and mpi_taxprice = mpi_giatt then") \
				_T("   mpi_taxprice / mp_product_uom_rate else") \
				_T("   mpi_taxprice end                      AS unit_price,") \
				_T("   SUM(pol_qtyimport)                AS qty,") \
				_T("   case when mp_product_uom_rate >1 and mpi_taxprice = mpi_giatt then") \
				_T("   SUM(pol_qtyimport * mpi_taxprice)/mp_product_uom_rate") \
				_T("   else SUM(pol_qtyimport * mpi_taxprice) end AS amount,") \

				_T("   pol_expdate AS exp_date,") \
				_T("   pol_lotno AS lot_no,") \
				_T("   mpc_name AS classname,") \
				_T("   (SELECT adm_name FROM ad_manufacture WHERE adm_manufacture_id = mp_manufacture_id) AS manufacture,") \
				_T("   adu_name AS uom_name,mpei_quyet_dinh as quyetdinh, ") \
				_T("   mpei_ma_hoat_chat, mpei_ten_thuoc, mpei_don_gia, mpei_so_luong, mpei_hang_sx, mpei_nha_thau, mpei_cong_bo, ") \
				
				_T("   adcp_quyetdinhpheduyet as quyetdinhthau,") \
				_T("   adc_contract_no as sohopdong,") \
				_T("   to_char(ADC_SIGNEDDATE, 'DD/MM/YYYY') as ngayky,") \
				_T("   po_kyhieu       AS kyhieu,") \
				_T("   po_invoiceno as sohoadon,") \
				_T("   to_char(PO_INVOICEDATE, 'DD/MM/YYYY') as ngayhoadon, adcp_year as thaunam") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T(" LEFT JOIN ad_contract_package ON (PO_CONTRACTPKG_ID=adcp_contract_package_id  AND NVL(adcp_isactive,'X')='Y')") \
				_T(" left join AD_CONTRACT ON (po_contract_id=adc_contract_id)") \
				_T(" LEFT JOIN m_product_item ON(mpi_product_item_id=pol_product_item_id)") \
				_T(" LEFT JOIN m_product_extra_info ON (mpei_id=MPI_PRODUCTEXTRA_ID) ") \
				_T(" LEFT JOIN m_product ON(mp_product_id=mpi_product_id)") \
				_T(" LEFT JOIN m_product_class ON(mpc_product_class_id=mp_product_class_id)") \
				_T(" LEFT JOIN ad_uom ON(adu_uom_id   = mp_product_uom_id)") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY mp_code, mp_name, mpi_taxprice, mpi_giatt, mp_product_uom_rate, po_partner_id, po_approveddate, ") \
				_T("	po_orderno, pol_expdate, pol_lotno, mpc_name, mp_manufacture_id, adu_name,mpei_quyet_dinh,mpei_ma_hoat_chat, mpei_ten_thuoc, mpei_don_gia, mpei_so_luong, mpei_hang_sx, mpei_nha_thau, mpei_cong_bo, ") \
				_T("	adcp_quyetdinhpheduyet, adc_contract_no, po_invoiceno, po_kyhieu, PO_INVOICEDATE, ADC_SIGNEDDATE,adcp_year") \
				_T(" ORDER BY po_orderno, partner_name, po_approveddate, mp_name"), szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}
CString CPMDetailPurchaseOrder::GetQueryString72()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szStorages;
	szWhere.Format(_T(" AND po_status = 'A' AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ")
		, m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
		
	if(!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);	

	if (!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_producttype = '%s'"), m_szTypeKey);
	if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND pol_product_id = %s"), m_szItemKey);

	if (m_bNonStockFlag)
		szWhere.AppendFormat(_T("and po_storage_id = 0"));
	
	szSQL.Format(_T(" select * from ( ") \
				_T(" SELECT  ") \
				_T("   get_partnername(po_partner_id) partner_name,") \
				_T("   mp_code AS id,") \
				_T("   mp_name AS name,") \
				_T("   sum(pol_qtyimport) AS qty,") \
				_T("   (SELECT adm_name FROM ad_manufacture WHERE adm_manufacture_id = mp_manufacture_id) AS manufacture,") \
				_T("   adu_name AS uom_name,mpi_product_item_id ") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T(" LEFT JOIN m_product_item ON(mpi_product_item_id=pol_product_item_id)") \
				_T(" LEFT JOIN m_product_extra_info ON (mpei_id=MPI_PRODUCTEXTRA_ID) ") \
				_T(" LEFT JOIN m_product ON(mp_product_id=mpi_product_id)") \
				_T(" LEFT JOIN m_product_class ON(mpc_product_class_id=mp_product_class_id)") \
				_T(" LEFT JOIN ad_uom ON(adu_uom_id   = mp_product_uom_id)") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY mp_code, mp_name, po_partner_id, ") \
				_T("	 mp_manufacture_id, adu_name,mpi_product_item_id ") \
				_T(" ORDER BY  mp_name") \
				_T(" ) xtt ") \
				_T(" LEFT JOIN (") \
				_T(" select item_id,period_qty") \
				_T(" from ") \
				_T(" (") \
				_T(" SELECT item_id, sum(period_qty) as period_qty") \
				_T("     FROM (") \
				_T("       SELECT") \
				_T("          item_id,") \
				_T("          COALESCE(imp_qty-exp_qty, 0) period_qty") \
				_T("        FROM   (SELECT") \
				_T("                  impstockid AS storage_id,") \
				_T("                  impdate    AS io_date,") \
				_T("                  sitemid item_id,") \
				_T("                  impqty imp_qty,") \
				_T("                  0          AS exp_qty") \
				_T("                FROM   miv") \
				_T("                WHERE 1=1 and  impstockid in (%s) ") \
				_T("                and sitemid in ( select pol_product_item_id ") \
				_T("                           FROM purchase_order LEFT JOIN purchase_orderline  ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T("                           where  po_status = 'A'") \
				_T("                         AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("                         AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("                         AND po_org_id = 'PM'") \
				_T("                            )") \
				_T("                         and impdate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("                UNION ALL") \
				_T("                SELECT") \
				_T("                  expstockid,") \
				_T("                  expdate,") \
				_T("                  sitemid,") \
				_T("                  0,") \
				_T("                  expqty") \
				_T("                FROM   mev") \
				_T("                WHERE 1=1 and  expstockid in (%s) ") \
				_T("                and expdate <= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("                and sitemid in ( select pol_product_item_id ") \
				_T("                                   FROM purchase_order LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T("                                   where  po_status = 'A'") \
				_T("                     AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("                     AND po_org_id = 'PM'") \
				_T("                        )") \
				_T("         ) ptbl") \
				_T("        ") \
				_T(" ) tblx") \
				_T(" GROUP BY  item_id") \
				_T(" ) ttl") \
				_T(" ) on (mpi_product_item_id = item_id)") \
				_T(" LEFT JOIN (select sitemid, sum(expqty) as expqty") \
				_T("       from mev ") \
				_T("       where expstockid in (%s) and iotype <> 'MOV'") \
				_T("       and expdate between  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("                   AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("       group by sitemid ) tblx ON (mpi_product_item_id = sitemid) ")
				, szWhere, szStorages, m_szFromDate,m_szToDate,m_szToDate,szStorages,m_szToDate,m_szFromDate,m_szToDate,szStorages,m_szFromDate,m_szToDate);
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}