#include "stdafx.h"
#include "HCPurchaseOrderReportDialog.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

static CString SetNumberDelim(CString szNumber)
{
	CString szRet;
	szRet = szNumber;
	int nPeriodPos = 0, nDecimalPos = szRet.Find(_T("."));
	if (nDecimalPos == -1)
	{
		nDecimalPos = szRet.GetLength();
	}
	else
	{
		szRet.Replace(_T("."), _T(","));
	}
	for (int i = nDecimalPos; i>=1; i--)
	{
		if (nPeriodPos > 0 && nPeriodPos%3==0)
		{
			szRet.Insert(i, _T("."));
		}
		nPeriodPos++;
	}
	return szRet;
}

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHCSPurchaseOrderReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHCSPurchaseOrderReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSPurchaseOrderReportDialog* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CHCSPurchaseOrderReportDialog *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStockListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSPurchaseOrderReportDialog* )pWnd)->OnStockListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockListSelendokFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnStockListSelendok();
}
/*static void _OnStockListSetfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnStockListKillfocus();
}*/
/*static void _OnStockListKillfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnStockListKillfocus();
}*/
static long _OnStockListLoadDataFnc(CWnd *pWnd){
	return ((CHCSPurchaseOrderReportDialog *)pWnd)->OnStockListLoadData();
}
/*static void _OnStockListAddNewFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnStockListAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSPurchaseOrderReportDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHCSPurchaseOrderReportDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCSPurchaseOrderReportDialog* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CHCSPurchaseOrderReportDialog *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CHCSPurchaseOrderReportDialog *)pWnd)->OnInvoiceTypeAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHCSPurchaseOrderReportDialog *pVw = (CHCSPurchaseOrderReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHCSPurchaseOrderReportDialog *pVw = (CHCSPurchaseOrderReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHCSPurchaseOrderReportDialog *pVw = (CHCSPurchaseOrderReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHCSPurchaseOrderReportDialog *pVw = (CHCSPurchaseOrderReportDialog *)pWnd;
	pVw->OnCloseSelect();
}
static int _OnAddPMSPurchaseOrderReportDialogFnc(CWnd *pWnd){
	 return ((CHCSPurchaseOrderReportDialog*)pWnd)->OnAddPMSPurchaseOrderReportDialog();
} 
static int _OnEditPMSPurchaseOrderReportDialogFnc(CWnd *pWnd){
	 return ((CHCSPurchaseOrderReportDialog*)pWnd)->OnEditPMSPurchaseOrderReportDialog();
} 
static int _OnDeletePMSPurchaseOrderReportDialogFnc(CWnd *pWnd){
	 return ((CHCSPurchaseOrderReportDialog*)pWnd)->OnDeletePMSPurchaseOrderReportDialog();
} 
static int _OnSavePMSPurchaseOrderReportDialogFnc(CWnd *pWnd){
	 return ((CHCSPurchaseOrderReportDialog*)pWnd)->OnSavePMSPurchaseOrderReportDialog();
} 
static int _OnCancelPMSPurchaseOrderReportDialogFnc(CWnd *pWnd){
	 return ((CHCSPurchaseOrderReportDialog*)pWnd)->OnCancelPMSPurchaseOrderReportDialog();
}

static void _OnPreviewV2SelectFnc(CWnd *pWnd)
{
	 CHCSPurchaseOrderReportDialog *pVw = (CHCSPurchaseOrderReportDialog *)pWnd;
	pVw->OnPreviewV2Select();
} 


CHCSPurchaseOrderReportDialog::CHCSPurchaseOrderReportDialog(CWnd *pParent, int bDetail)
	{
	m_bDetail = bDetail;
	m_nDlgWidth = 585;
	m_nDlgHeight = 185;
//	m_szTitle.Format(_T("Tong hop bien ban kiem ke phieu nhap kho"));
	SetDefaultValues();
}
CHCSPurchaseOrderReportDialog::~CHCSPurchaseOrderReportDialog()
{

}
void CHCSPurchaseOrderReportDialog::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 507);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 110, 85);
	m_wndSupplier.Create(this,115, 60, 570, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 110, 115);
	m_wndType.Create(this,115, 90, 290, 115); 
	m_wndInvoiceTypeLabel.Create(this, _T("Invoice Type"), 295, 90, 395, 115);
	m_wndInvoiceType.Create(this,400, 90, 570, 115); 
	m_wndStockList.Create(this,10, 120, 570, 503); 
	m_wndOrderBy.Create(this, _T("Theo ngày nhập"), 5, 513, 140, 538);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 385, 513, 495, 538);
	m_wndPrint.Create(this, _T("Print (KHTH)"), 270, 513, 380, 538);
	m_wndExport.Create(this, _T("&Export"), 500, 513, 575, 538);
	m_wndPreviewV2.Create(this, _T("Prevew (PCNMT)"), 270, 542, 575, 567);

	m_wndStockList.SetCheckBox(true);
}
void CHCSPurchaseOrderReportDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
//	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(35);
//	m_wndStockList.SetCheckValue(true);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndSupplier.InsertColumn(1, _T("Description"), CFMT_TEXT, 320);


	m_wndStockList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStockList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CHCSPurchaseOrderReportDialog::OnSetWindowEvents(){
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
	m_wndStockList.SetEvent(WE_SELENDOK, _OnStockListSelendokFnc);
	//m_wndStockList.SetEvent(WE_SETFOCUS, _OnStockListSetfocusFnc);
	//m_wndStockList.SetEvent(WE_KILLFOCUS, _OnStockListKillfocusFnc);
	m_wndStockList.SetEvent(WE_SELCHANGE, _OnStockListSelectChangeFnc);
	m_wndStockList.SetEvent(WE_LOADDATA, _OnStockListLoadDataFnc);
	//m_wndStockList.SetEvent(WE_ADDNEW, _OnStockListAddNewFnc);

	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPreviewV2.SetEvent(WE_CLICK, _OnPreviewV2SelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();		
	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	OnStockListLoadData();
	SetMode(VM_EDIT);

}
void CHCSPurchaseOrderReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStockList.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	//DDX_Check(pDX, m_wndGroupByDrug.GetDlgCtrlID(), m_bGroupbyDrug);
	DDX_Check(pDX, m_wndOrderBy.GetDlgCtrlID(), m_bOrderBy);
}
void CHCSPurchaseOrderReportDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CHCSPurchaseOrderReportDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHCSPurchaseOrderReportDialog::SetDefaultValues(){
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_szTypeKey.Empty();
	m_szInvoiceTypeKey.Empty();
	m_szStockKey.Empty();
	m_bOrderBy=FALSE;
}
int CHCSPurchaseOrderReportDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHCSPurchaseOrderReportDialog::OnFromDateChange(){
	
} */
/*void CHCSPurchaseOrderReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHCSPurchaseOrderReportDialog::OnFromDateKillfocus(){
	
} */
int CHCSPurchaseOrderReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHCSPurchaseOrderReportDialog::OnToDateChange(){
	
} */
/*void CHCSPurchaseOrderReportDialog::OnToDateSetfocus(){
	
} */
/*void CHCSPurchaseOrderReportDialog::OnToDateKillfocus(){
	
} */
int CHCSPurchaseOrderReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHCSPurchaseOrderReportDialog::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSPurchaseOrderReportDialog::OnSupplierSelendok(){
	 
}
/*void CHCSPurchaseOrderReportDialog::OnSupplierSetfocus(){
	
}*/
/*void CHCSPurchaseOrderReportDialog::OnSupplierKillfocus(){
	
}*/
long CHCSPurchaseOrderReportDialog::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
		szWhere.Format(_T(" AND adp_partner_id='%s' "), m_szSupplierKey);
	};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name FROM ad_partner WHERE 1=1 %s ORDER BY adp_partner_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHCSPurchaseOrderReportDialog::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCSPurchaseOrderReportDialog::OnStockListSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSPurchaseOrderReportDialog::OnStockListSelendok(){
	 
}
/*void CHCSPurchaseOrderReportDialog::OnStockListSetfocus(){
	
}*/
/*void CHCSPurchaseOrderReportDialog::OnStockListKillfocus(){
	
}*/
long CHCSPurchaseOrderReportDialog::OnStockListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND msl_type = 'A'"));
	return pMF->LoadStorageIntoListCtrl(&m_wndStockList, szFilter);
	//CRecord rs(&pMF->m_db);
	//CString szSQL, szWhere;
	//int nCount = 0;
	//szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE msl_type='A' %s ORDER BY msl_storage_id"), szWhere);
	//nCount = rs.ExecSQL(szSQL);
	//m_wndStockList.BeginLoad();
	//while(!rs.IsEOF()){ 
	//	m_wndStockList.AddItems(
	//		rs.GetValue(_T("id")), 
	//		rs.GetValue(_T("name")), NULL);
	//	rs.MoveNext();
	//}
	//m_wndStockList.EndLoad();
	//return nCount;

}
/*void CHCSPurchaseOrderReportDialog::OnStockListAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

void CHCSPurchaseOrderReportDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSPurchaseOrderReportDialog::OnTypeSelendok(){
	 
}
/*void CHCSPurchaseOrderReportDialog::OnTypeSetfocus(){
	
}*/
/*void CHCSPurchaseOrderReportDialog::OnTypeKillfocus(){
	
}*/
long CHCSPurchaseOrderReportDialog::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
		_T("                 product_type_name ") \
		_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
		_T("                ELSE mpt_product_type_id ") \
		_T("                END product_type_id, ") \
		_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
		_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ") \
		_T("                ELSE mpt_name ") \
		_T("                END product_type_name ") \
		_T("         FROM   m_product_type ") \
		_T("         WHERE  mpt_org_id = '%s' ") \
		_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
		_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndType.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndType.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHCSPurchaseOrderReportDialog::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCSPurchaseOrderReportDialog::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCSPurchaseOrderReportDialog::OnInvoiceTypeSelendok(){
	 
}
/*void CHCSPurchaseOrderReportDialog::OnInvoiceTypeSetfocus(){
	
}*/
/*void CHCSPurchaseOrderReportDialog::OnInvoiceTypeKillfocus(){
	
}*/
long CHCSPurchaseOrderReportDialog::OnInvoiceTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInvoiceTypeKey);
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  1 AS trans, CAST ('I' AS nvarchar2(1)) AS id, CAST ('N\x1ED9i \x62\x1ED9' AS nvarchar2(20)) AS name FROM dual") \
		_T(" UNION ALL") \
		_T(" SELECT  2 AS trans, CAST ('P' AS nvarchar2(1)) AS id, CAST ('Th\x61nh to\xE1n' AS nvarchar2(20)) AS name FROM dual"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHCSPurchaseOrderReportDialog::OnInvoiceTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCSPurchaseOrderReportDialog::OnPrintPreviewSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);	
	switch (m_bDetail)
	{
		case 1:
			OnPrintTonghopphieunhapkho(true);
			break;
		case 2:
			OnPrintTonghopphieunhapkhotheonhacungcap(true);
			break;
		case 3:
			OnPrintTonghopchitietphieunhapkho(true);
			break;
		case 4:
			OnPrintBienbankiemnhapphieunhapkho(true);
			break;
		case 5:
			OnPrintBangkenhapkhotheonhacungcap(true);
			break;
	}
} 
void CHCSPurchaseOrderReportDialog::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	switch (m_bDetail)
	{
		case 1:
			OnPrintTonghopphieunhapkho(true);
			break;
		case 2:
			OnPrintTonghopphieunhapkhotheonhacungcap1(true);
			break;
		case 3:
			OnPrintTonghopchitietphieunhapkho_khth(true);
			break;	
		case 4:
			OnPrintBienbankiemnhapphieunhapkho(true);
			break;
		case 5:
			OnPrintBangkenhapkhotheonhacungcap(true);
			break;
	}
} 
void CHCSPurchaseOrderReportDialog::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	
	switch (m_bDetail)
	{
		case 1:
			OnExportTonghopphieunhapkho(false);
			break;
		case 2:
			OnExportTonghopphieunhapkhotheonhacungcap(false);
			break;
		case 3:
			OnExportTonghopchitietphieunhapkho(false);
			break;
		case 4:
			OnExportBienbankiemnhapphieunhapkho(false);
			break;
		case 5:
			OnExportBangkenhapkhotheonhacungcap(false);
			break;
	}
	
} 
void CHCSPurchaseOrderReportDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	
} 
int CHCSPurchaseOrderReportDialog::OnAddPMSPurchaseOrderReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHCSPurchaseOrderReportDialog::OnEditPMSPurchaseOrderReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHCSPurchaseOrderReportDialog::OnDeletePMSPurchaseOrderReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSPurchaseOrderReportDialog(); 
 	}
	return 0;
}
int CHCSPurchaseOrderReportDialog::OnSavePMSPurchaseOrderReportDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
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
 		//OnPMSPurchaseOrderReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHCSPurchaseOrderReportDialog::OnCancelPMSPurchaseOrderReportDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
} 
int CHCSPurchaseOrderReportDialog::OnPMSPurchaseOrderReportDialogListLoadData(){
	return 0;
}


void CHCSPurchaseOrderReportDialog::OnPrint(bool bPreview){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CReport rpt;
	CString tmpStr, szSQL,szWhere, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	UpdateData(TRUE);
	BeginWaitCursor();
	if(!m_bDetail)
	{
		//if(!rpt.Init(_T("Reports\\HMS\\PMS_GENERALPURCHASEORDERREPORT.RPT"),true) )
		//	return;

		//if(pMF->GetModuleID() == _T("PM"))
		//{
		//	if(!rpt.Init(_T("Reports/HMS/PMS_GENERALPURCHASEORDERREPORT.RPT"),true) )
		//		return;
		//}
		//else
		//{
		//	if(!rpt.Init(_T("Reports/HMS/PMS_GENERALPURCHASEORDERREPORT_MA.RPT"),true) )
		//		return;
		//}
		szReportTitle.Format(_T("%s_GENERALPURCHASEORDERREPORT"), pMF->GetModuleID());
		szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;
		rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
			CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
		//Page Header
		//Report Detail
		
		CString m_szStock,szStockName;
		for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
		{
			if(m_wndStockList.GetCheck(i))
			{
				m_wndStockList.SetCurSel(i);
				if(!m_szStock.IsEmpty())
				{
					m_szStock += _T(",");
					szStockName +=_T(", ");

				}
				m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
				szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
			}		
		}
		
		if(!m_szSupplierKey.IsEmpty())
			szWhere.AppendFormat(_T("and pmpo_suppid='%s' "), m_szSupplierKey);
		if(!m_szStockKey.IsEmpty())
			szWhere.AppendFormat(_T("and pmpo_stockid in(%s)"), m_szStock);

		szSQL.Format(_T(" SELECT 	pmpo_invoiceno as invoiceno,") \
			_T(" 	pmpo_date as invoicedate,") \
			_T(" 	(select distinct pms_name from pms_suppliers where pms_id=pmpo_suppid) as supplier,") \
			_T(" 	(select distinct pmsl_name from pms_stocklist where pmsl_stockid=pmpo_stockid) as stockname,") \
			_T(" 	pmpo_tax1  as vat,") \
			_T(" 	pmpo_subtotal as subamount,") \
			_T(" 	pmpo_tax1amt as vatamount,") \
			_T(" 	pmpo_total as amount, ") \
			_T(" 	pmpo_payment as payment") \
			_T(" FROM pms_purchaseinvoice ") \
			_T(" WHERE pmpo_status <>'O' ")
			_T(" AND (pmpo_date) between date('%s') and date('%s') %s "),
			m_szFromDate, m_szToDate, szWhere);
		rs.ExecSQL(szSQL);
		int nIndex=1;
		while (!rs.IsEOF())
		{
			rptDetail = rpt.AddDetail();
			tmpStr.Format(_T("%d"), nIndex++);
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("invoiceno"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);
			rs.GetValue(_T("invoicedate"), tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			rs.GetValue(_T("supplier"), tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			rs.GetValue(_T("stockname"), tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			rs.GetValue(_T("subamount"), tmpStr);
			nSubAmount+= ToDouble(tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			rs.GetValue(_T("vat"), tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			rs.GetValue(_T("vatamount"), tmpStr);
			nVatAmount+= ToDouble(tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			rs.GetValue(_T("amount"), tmpStr);
			nTotalAmount+= ToDouble(tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			nTotalPayment+= ToDouble(tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			rs.MoveNext();
		}


		
		//Page Footer
		//Report Footer
		rpt.GetReportFooter()->SetValue(_T("s6"), ToString(nSubAmount));
		rpt.GetReportFooter()->SetValue(_T("s7"), _T(""));
		rpt.GetReportFooter()->SetValue(_T("s8"), ToString(nVatAmount));
		rpt.GetReportFooter()->SetValue(_T("s9"), ToString(nTotalAmount));
		rpt.GetReportFooter()->SetValue(_T("s10"), ToString(nTotalPayment));

		CString szSysDate, szDate;
		szSysDate = pMF->GetSysDate(); 
		szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
		rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
		if(bPreview)
			rpt.PrintPreview();
		else
			rpt.Print();
	}
	else
	{
		CString szInvoiceNo, szWhere;
		CRecord prs(&pMF->m_db);

		CString m_szStock,szStockName;
		for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
		{
			if(m_wndStockList.GetCheck(i))
			{
				m_wndStockList.SetCurSel(i);
				if(!m_szStock.IsEmpty())
				{
					m_szStock += _T(",");
					szStockName +=_T(", ");

				}
				m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
				szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
			}		
		}
		
		if(!m_szSupplierKey.IsEmpty())
			szWhere.AppendFormat(_T("and pmpo_suppid='%s' "), m_szSupplierKey);
		if(!m_szStockKey.IsEmpty())
			szWhere.AppendFormat(_T("and pmpo_stockid in(%s)"), m_szStock);

		szSQL.Format(_T(" SELECT 	pmpo_invoiceno as invoiceno, pmpo_invoiceno||' ['||to_char(pmpo_date, 'dd/mm/yyyy')||']' as invoicename,") \
			_T(" 	(select distinct pms_name from pms_suppliers where pms_id=pmpo_suppid) as supplier,") \
			_T(" 	(select distinct pmsl_name from pms_stocklist where pmsl_stockid=pmpo_stockid) as stockname, ") \
			_T("	pmpo_total as amount ") \
			_T(" FROM pms_purchaseinvoice") \
			_T(" WHERE pmpo_date between date('%s') and date('%s') and pmpo_total > 0 %s ") \
			_T(" ORDER BY pmpo_date"), m_szFromDate, m_szToDate, szWhere);
		prs.ExecSQL(szSQL);

		//if(!rpt.Init(_T("Reports\\HMS\\PMS_DETAILPURCHASEORDERS.RPT"),true) )
		//	return;
		//if(pMF->GetModuleID() == _T("PM"))
		//{
		//	if(!rpt.Init(_T("Reports/HMS/PMS_DETAILPURCHASEORDERS.RPT"),true) )
		//		return;
		//}
		//else
		//{
		//	if(!rpt.Init(_T("Reports/HMS/PMS_DETAILPURCHASEORDERS_MA.RPT"),true) )
		//		return;
		//}
		CString szReportTitle, szPath;
		szReportTitle.Format(_T("%s_DETAILPURCHASEORDERS"), pMF->GetModuleID());
		szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;

		
		rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
		rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
			CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);

		while(!prs.IsEOF())
		{
			prs.GetValue(_T("invoiceno"), szInvoiceNo);
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			prs.GetValue(_T("invoicename"), tmpStr);
			rptDetail->SetValue(_T("Invoiceno"), tmpStr);
			prs.GetValue(_T("supplier"), tmpStr);
			rptDetail->SetValue(_T("Supplier"), tmpStr);
			prs.GetValue(_T("stockname"), tmpStr);
			rptDetail->SetValue(_T("Stockname"), tmpStr);
			prs.GetValue(_T("amount"), tmpStr);
			nTotalAmount += ToDouble(tmpStr);
			rptDetail->SetValue(_T("Amount"), tmpStr);

			szSQL.Format(_T(" SELECT 	pmi_id as id,") \
				_T(" 	pmi_name as name,") \
				_T(" 	pmi_unit as unit,") \
				_T(" 	pmsi_expdate as expdate,") \
				_T(" 	pmsi_lotno as lotno,") \
				_T(" 	pmsi_unitprice as unitprice,") \
				_T(" 	pmsi_vatprice as vatprice,") \
				_T(" 	pmpol_qty as qty,") \
				_T(" 	pmpol_qty*pmsi_unitprice as subamount,") \
				_T(" 	pmpol_qty*pmsi_vatprice as amount, ") \
				_T("	(select distinct sc_name from sys_country where sc_id=pmsi_countryid) as orgcountry ") \
				_T(" FROM pms_purchaseinvoice_line") \
				_T(" LEFT JOIN pms_stockitems ON(pmsi_id=pmpol_sitemid)") \
				_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
				_T(" WHERE pmpol_id='%s'") \
				_T(" ORDER BY pmpol_lineidx"), szInvoiceNo);

			//Page Header
			//Report Detail
			rs.ExecSQL(szSQL);
			int nIndex=1;
			while (!rs.IsEOF())
			{
				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), nIndex++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rs.GetValue(_T("name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rs.GetValue(_T("id"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rs.GetValue(_T("unit"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				rs.GetValue(_T("expdate"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rs.GetValue(_T("lotno"), tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				rs.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				rs.GetValue(_T("vatprice"), tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				rs.GetValue(_T("amount"), tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				rs.GetValue(_T("orgcountry"), tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				rs.MoveNext();
			}
			prs.MoveNext();
		}
		//Page Footer
		//Report Footer
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), ToString(nTotalAmount));
		CString szSysDate, szDate;
		szSysDate = pMF->GetSysDate(); 
		szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
		rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
		EndWaitCursor();
		if(bPreview)
			rpt.PrintPreview();
		else
			rpt.Print();
	}
}
void CHCSPurchaseOrderReportDialog::OnPrintTonghopphieunhapkho(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szSQL,szWhere, szRptName, szOldLine, szNewline, szMoney, szReportTitle, szPath, szdescription;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0, nSubGAmount=0, nVatGAmount=0, nTotalGAmount=0, nTotalGPayment=0;
	double nCost = 0.0;

	
	//if(!rpt.Init(_T("Reports/HMS/HC_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP_HC.RPT"),true) )
	//		return;	
	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP"), pMF->GetModuleID(), szZoneOfUser);
	}
	else
	{
		szReportTitle.Format(_T("%s_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	
	CString szStockName;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockName +=_T(", ");
			}		
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockName);
	szSQL = GetQueryTonghopphieunhapkho();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("supplier"), szNewline);
		if(szNewline != szOldLine)
		{
			if(nTotalAmount > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
				FormatCurrency(nSubAmount, tmpStr);
				rptDetail->SetValue(_T("s8"), tmpStr);
				rptDetail->SetValue(_T("s9"), _T(""));
				FormatCurrency(nVatAmount, tmpStr);
				rptDetail->SetValue(_T("s10"), tmpStr);
				FormatCurrency(nTotalAmount, tmpStr);
				rptDetail->SetValue(_T("s11"), tmpStr);
				FormatCurrency(nTotalPayment, tmpStr);
				rptDetail->SetValue(_T("s12"), tmpStr);
				nSubGAmount += nSubAmount;
				nVatGAmount += nVatAmount;
				nTotalGAmount += nTotalAmount;
				nTotalGPayment += nTotalPayment;
				nSubAmount = 0;
				nVatAmount = 0;
				nTotalAmount = 0;
				nTotalPayment = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewline);
			szOldLine = szNewline;
			nIndex = 1;
		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("orderno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("approveddate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("invoiceno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("invoicedate"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("supplier"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("stockname"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("productname"), tmpStr);
		rs.GetValue(_T("description"), szdescription);

		if (pMF->GetModuleID() == _T("PCNMT"))
		{
			rptDetail->SetValue(_T("13"), szdescription);
		}
		else
		{
			rptDetail->SetValue(_T("13"), tmpStr);
		}

		rs.GetValue(_T("subamount"), nCost);
		nSubAmount+= nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("vat"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("vatamount"), nCost);
		nVatAmount+= nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("amount"), nCost);
		nTotalAmount+= nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		nTotalPayment+= nCost;

		rptDetail->SetValue(_T("12"), tmpStr);
		rs.MoveNext();
	}


	
	//Page Footer
	//Report Footer
	if(nTotalAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
		FormatCurrency(nSubAmount, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		rptDetail->SetValue(_T("s9"), _T(""));
		FormatCurrency(nVatAmount, tmpStr);
		rptDetail->SetValue(_T("s10"), tmpStr);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s11"), tmpStr);
		FormatCurrency(nTotalPayment, tmpStr);
		rptDetail->SetValue(_T("s12"), tmpStr);
		nSubGAmount += nSubAmount;
		nVatGAmount += nVatAmount;
		nTotalGAmount += nTotalAmount;
		nTotalGPayment += nTotalPayment;
	}
	if(nTotalGAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
		FormatCurrency(nSubGAmount, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		rptDetail->SetValue(_T("s9"), _T(""));
		FormatCurrency(nVatGAmount, tmpStr);
		rptDetail->SetValue(_T("s10"), tmpStr);
		FormatCurrency(nTotalGAmount, tmpStr);
		rptDetail->SetValue(_T("s11"), tmpStr);
		FormatCurrency(nTotalGPayment, tmpStr);
		rptDetail->SetValue(_T("s12"), tmpStr);
	}


	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);

	szMoney.Format(_T("%.2f"), nTotalGAmount);
	MoneyToString(szMoney, tmpStr);
	
	//Nếu module HC thì đọc lại
	if (pMF->GetModuleID() == _T("HC"))
	{
		if(tmpStr.Find(_T("tỷ")) != -1)
		{
			tmpStr.Replace(_T("tỷ"), _T("tỷ, "));
		}
		
		if(tmpStr.Find(_T("triệu")) != -1)
		{
			tmpStr.Replace(_T("triệu"), _T("triệu, "));
		}

		if(tmpStr.Find(_T("nghìn")) != -1)
		{
			tmpStr.Replace(_T("nghìn"), _T("nghìn, "));
		}
		if(tmpStr.Find(_T("phẩy")) != -1)
		{
			tmpStr.Replace(_T("phẩy"), _T(", "));
		}

		if(tmpStr.Find(_T("không đồng")) != -1)
		{
			tmpStr.Replace(_T("không"), _T(""));
		}
	//_msg(_T("%s"), tmpStr);	
	}



	if (!tmpStr.IsEmpty())
		{
			tmpStr += _T(" đồng");
			rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
		}	

	EndWaitCursor();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

}

void CHCSPurchaseOrderReportDialog::OnExportTonghopphieunhapkho(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	BeginWaitCursor();
	CString tmpStr, szSQL, szTemp;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	double cost=0;
	int nRow = 0, nCol = 0;
	szSQL = GetQueryTonghopphieunhapkho();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0,5);

	xls.SetColumnWidth(1,10);

	xls.SetColumnWidth(2,15);

	xls.SetColumnWidth(3,9);

	xls.SetColumnWidth(4,13);

	xls.SetColumnWidth(5,47);

	xls.SetColumnWidth(6,23);

	xls.SetColumnWidth(7,15);

	xls.SetColumnWidth(8,4);
	xls.SetColumnWidth(9,13);
	xls.SetColumnWidth(10,15);
	xls.SetColumnWidth(11,15);

	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	TranslateString(_T("Purchase Order Synthesis"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellMergedColumns(0, 2, 9);
	xls.SetCellText(0, 2, tmpStr,FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellMergedColumns(0, 3, 9);
	xls.SetCellText(0, 3, tmpStr, &df);
	nRow = 3;
	if (!m_szStock.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("T\x1EEB kho: %s"), m_szStock);
		xls.SetCellMergedColumns(0, nRow, 9);
		xls.SetCellText(0, nRow, tmpStr, &cf);
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("STT"), &hf);

	TranslateString(_T("Phiếu nhập"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, &hf);

	TranslateString(_T("Ngày nhập"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, &hf);	

	TranslateString(_T("Tên phiếu"), tmpStr);	
	xls.SetCellText(3, nRow, tmpStr, &hf);

	TranslateString(_T("Ngày hóa đơn"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, &hf);

	TranslateString(_T("Tên công ty"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, &hf);

	TranslateString(_T("Stock Name"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, &hf);	
	TranslateString(_T("Money"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, &hf);
	TranslateString(_T("VAT"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, &hf);
	TranslateString(_T("Total VAT"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, &hf);
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, &hf);
	int nIndex=1;
	while (!rs.IsEOF())
	{
		nRow ++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("orderno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("approveddate"), tmpStr);
		xls.SetCellText(2, nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT);		
		rs.GetValue(_T("invoiceno"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("invoicedate"), tmpStr);
		xls.SetCellText(4, nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("supplier"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("Stockname"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("subamount"), cost);			
		tmpStr.Format(_T("%.2f"),cost);
		nSubAmount+=cost;
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2);
		
		rs.GetValue(_T("vat"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("vatamount"), cost);
		nTotalPayment+=cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER2);
		
		rs.GetValue(_T("amount"), cost);
		nTotalAmount+= cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER2);			
		rs.MoveNext();
	}
	
	nRow++;
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellMergedColumns(0, nRow, 5);
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	tmpStr.Format(_T("%.2f"),nSubAmount);
	xls.SetCellText(7,nRow,tmpStr,FMT_NUMBER1,true);

	tmpStr.Format(_T("%.2f"),nTotalPayment);
	xls.SetCellText(9,nRow,tmpStr,FMT_NUMBER1,true);
	
	tmpStr.Format(_T("%.2f"),nTotalAmount);
	//xls.SetCellText(10,nRow,tmpStr,FMT_NUMBER1,true);
	xls.SetCellText(10,nRow,SetNumberDelim(tmpStr),FMT_TEXT|FMT_RIGHT,true);

	xls.SetCellText(nCol+2, nRow+4, _T("Chủ nhiệm khoa"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+6, nRow+4, _T("Thủ khoa"), FMT_TEXT, true, 10);
	xls.SetCellText(nCol+10, nRow+4, _T("Người lập"), FMT_TEXT, true, 10);

	EndWaitCursor();
	xls.Save(_T("Exports\\Bangtonghopphieunhapkhotheonhacungcap.xls"));		
}

void CHCSPurchaseOrderReportDialog::OnPrintTonghopphieunhapkhotheonhacungcap(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL;
	CString szOldLine, szNewLine,szMemory, szAmount, szRptName, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	double grpCost = 0;
	double ttlCost, ttlCost1, ttlCost2;
	double cost = 0;
	int nItem = 1,nTotalItem=0, nSel = 0;
	ttlCost=ttlCost1=ttlCost2=0.0;
	szSQL = GetQueryTonghopphieunhapkhotheonhacungcap();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
		
	//if(!rpt.Init(_T("Reports/HMS/HC_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP_HC.RPT"),true) )
	//	return;	
	szReportTitle.Format(_T("%s_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	nSel = m_wndStockList.GetCurSel();
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStockList.GetItemText(nSel, 1));
	
	CString szStockName;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockName +=_T(", ");

			}
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("supplier"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if((nSubAmount + nTotalAmount)  > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);						
				FormatCurrency(nSubAmount, tmpStr);
				rptDetail->SetValue(_T("s4"), tmpStr);
				FormatCurrency(nTotalPayment, tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);	
				FormatCurrency(nTotalAmount, tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);
				ttlCost += nSubAmount;						
				ttlCost1+= nTotalAmount;
				ttlCost2+= nTotalPayment;
				nIndex=1;
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("supplier"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr );
			szOldLine = szNewLine;
			
			nItem=1;
			nSubAmount = 0;
			nTotalAmount=0;
			nTotalPayment=0;

		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("invoiceno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("invoicedate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));	

		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);	
		
		rs.GetValue(_T("amount"), cost);
		nTotalAmount+= cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("invoiceid"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);	

		
		rs.MoveNext();
	}

		ttlCost += nSubAmount;
		ttlCost1 += nTotalAmount;
		ttlCost2 +=nTotalPayment;
		
		if((nSubAmount + nTotalAmount+nTotalPayment) > 0 && nSubAmount != ttlCost){	
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			
			FormatCurrency(nTotalAmount, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
		}
		if((ttlCost + ttlCost1 + ttlCost2) > 0){				
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			
			FormatCurrency(ttlCost1, tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);				
		}
	
	
	//Page Footer
	//Report Footer		
	

	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 

	
	szMemory.Format(_T("%.2f"), ttlCost1);
	MoneyToString(szMemory, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);

	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();	
	EndWaitCursor();
}
void CHCSPurchaseOrderReportDialog::OnPrintTonghopphieunhapkhotheonhacungcap1(bool bPreview){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL;
	CString szOldLine, szNewLine,szMemory, szAmount, szRptName, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	double grpCost = 0;
	double ttlCost, ttlCost1, ttlCost2;
	double cost = 0;
	int nItem = 1,nTotalItem=0, nSel = 0;
	ttlCost=ttlCost1=ttlCost2=0.0;
	szSQL = GetQueryTonghopphieunhapkhotheonhacungcap();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	//szRptName.Format(_T("Reports\\HMS\\PMS_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP1.RPT"));
	//if(!rpt.Init(szRptName,true) )
	//	return;
	//if(pMF->GetModuleID() == _T("PM"))
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PMS_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP1.RPT"),true) )
	//		return;
	//}
	//else
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PMS_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP1_MA.RPT"),true) )
	//		return;
	//}
	szReportTitle.Format(_T("%s_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP1"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	nSel = m_wndStockList.GetCurSel();
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStockList.GetItemText(nSel, 1));

	CString szStockName;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockName +=_T(", ");

			}
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("supplier"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			if((nSubAmount + nTotalAmount)  > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);						
				FormatCurrency(nSubAmount, tmpStr);
				rptDetail->SetValue(_T("s4"), tmpStr);
				FormatCurrency(nTotalPayment, tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);	
				FormatCurrency(nTotalAmount, tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);
				ttlCost += nSubAmount;						
				ttlCost1+= nTotalAmount;
				ttlCost2+= nTotalPayment;
				nIndex=1;
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("supplier"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr );
			szOldLine = szNewLine;

			nItem=1;
			nSubAmount = 0;
			nTotalAmount=0;
			nTotalPayment=0;

		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("invoiceid"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("invoiceno"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("invoicedate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));			
		rs.GetValue(_T("subamount"), cost);			
		FormatCurrency(cost, tmpStr);
		nSubAmount+=cost;
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("vat"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("vatamount"), cost);
		nTotalPayment+=cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("amount"), cost);
		nTotalAmount+= cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);


		rs.MoveNext();
	}

	ttlCost += nSubAmount;
	ttlCost1 += nTotalAmount;
	ttlCost2 +=nTotalPayment;

	if((nSubAmount + nTotalAmount+nTotalPayment) > 0 && nSubAmount != ttlCost){	
		TranslateString(_T("Total Group"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		FormatCurrency(nSubAmount, tmpStr);
		rptDetail->SetValue(_T("s4"), tmpStr);
		FormatCurrency(nTotalPayment, tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s7"), tmpStr);
	}
	if((ttlCost + ttlCost1 + ttlCost2) > 0){				
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		FormatCurrency(ttlCost, tmpStr);
		rptDetail->SetValue(_T("s4"), tmpStr);
		FormatCurrency(ttlCost2, tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);				
		FormatCurrency(ttlCost1, tmpStr);
		rptDetail->SetValue(_T("s7"), tmpStr);				
	}


	//Page Footer
	//Report Footer		


	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 


	szMemory.Format(_T("%.2f"), ttlCost1);
	MoneyToString(szMemory, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);

	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();	
	EndWaitCursor();
}
void CHCSPurchaseOrderReportDialog::OnExportTonghopphieunhapkhotheonhacungcap(bool bPreview){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	BeginWaitCursor();
	CString tmpStr, szSQL, szAmount, szTemp;
	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	double ttlCost = 0, ttlCost1 = 0, ttlCost2 = 0, grpCost = 0;
	double cost = 0;
	int nItem = 1, nTotalItem=0, nCol = 0, nRow = 0;
	m_szStock.Empty();
	szSQL = GetQueryTonghopphieunhapkhotheonhacungcap();
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	CellFormat cf(&xls), df(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,15);
	xls.SetColumnWidth(3,12);
	xls.SetColumnWidth(4,25);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,12);
	xls.SetColumnWidth(7,25);

	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0,2,8);
	TranslateString(_T("Purchase Order Synthesis by Supplier"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT|FMT_CENTER,true, 12);
	xls.SetCellMergedColumns(0,3,8);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, &df);
	nRow = 3;
	if (!m_szStock.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("T\x1EEB kho: %s"), m_szStock);
		xls.SetCellMergedColumns(0, nRow, 7);
		xls.SetCellText(0, nRow, tmpStr, &cf);
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("STT"), &hf);	
	TranslateString(_T("Số phiếu"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, &hf);
	TranslateString(_T("InvoinceNo"), tmpStr);	
	xls.SetCellText(2, nRow, tmpStr, &hf);

	TranslateString(_T("Invoince Date"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, &hf);

	TranslateString(_T("Money"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, &hf);	
	TranslateString(_T("VAT(%)"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, &hf);	
	TranslateString(_T("Total VAT"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, &hf);
	TranslateString(_T("Money"), tmpStr);
	TranslateString(_T("Total VAT"), szAmount);
	tmpStr.AppendFormat(_T(" + %s"), szAmount);
	xls.SetCellText(7, nRow, tmpStr, &hf);
	
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("supplier"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			if((nSubAmount + nTotalAmount)  > 0)
			{
				nRow ++;
				xls.SetCellMergedColumns(1,nRow,3);
				TranslateString(_T("Total Group"), tmpStr);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
				tmpStr.Format(_T("%.2f"),nSubAmount);
				xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"),nTotalPayment);
				xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), nTotalAmount);
				xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2,true);
				ttlCost += nSubAmount;						
				ttlCost1+= nTotalAmount;
				ttlCost2+= nTotalPayment;
				nSubAmount = 0;
				nTotalAmount=0;
				nTotalPayment=0;
				nItem=1;
				nIndex=1;
			}
			nRow ++;
			xls.SetCellMergedColumns(0,nRow,8);
			rs.GetValue(_T("supplier"), tmpStr);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
			szOldLine = szNewLine;
			nItem=1;
		}
		nRow ++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("invoiceid"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("invoiceno"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("invoicedate"), tmpStr);
		xls.SetCellText(3, nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT);			
		rs.GetValue(_T("subamount"), cost);			
		tmpStr.Format(_T("%.2f"),cost);
		nSubAmount+=cost;
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2);
		
		rs.GetValue(_T("vat"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("vatamount"), cost);
		nTotalPayment+=cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2);
		
		rs.GetValue(_T("amount"), cost);
		nTotalAmount+= cost;
		tmpStr.Format(_T("%.2f"),cost);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2);

		
		rs.MoveNext();
	}

		ttlCost += nSubAmount;
		ttlCost1 += nTotalAmount;
		ttlCost2 +=nTotalPayment;
		
		if((nSubAmount + nTotalAmount+nTotalPayment) > 0){	
			nRow ++;
			xls.SetCellMergedColumns(1,nRow,3);
			TranslateString(_T("Total Group"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
			tmpStr.Format(_T("%.2f"),nSubAmount);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2,true);
			tmpStr.Format(_T("%.2f"),nTotalPayment);
			xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2,true);
			tmpStr.Format(_T("%.2f"), nTotalAmount);
			xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2,true);
		}
		if((ttlCost + ttlCost1 + ttlCost2) > 0){
			nRow ++;
			xls.SetCellMergedColumns(1,nRow,3);
			TranslateString(_T("Total Amount"), tmpStr);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
			tmpStr.Format(_T("%.2f"),ttlCost);
			xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2,true);
			tmpStr.Format(_T("%.2f"),ttlCost2);
			xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2,true);
			tmpStr.Format(_T("%.2f"), ttlCost1);
			xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2,true);			
				
		}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bangtonghopphieunhapkhotheonhacungcap.xls"));
		
}		

void CHCSPurchaseOrderReportDialog::OnPrintBangkenhapkhotheonhacungcap(bool bPreview){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szSQL,szWhere;
	CString szOldLine, szNewLine,szMemory, szAmount, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail;
	double grpCost[10],ttCost[10];
	double cost;
	int nItem = 1,nTotalItem=0;	
	for (int i=0; i < 10;i++){
		grpCost[i]=0;
		ttCost[i]=0;
	} 
	
	//if(!rpt.Init(_T("Reports\\HMS\\PMS_BANGKETINHHINHNHAPTHUOC.RPT"),true) )
	//		return;
	//if(pMF->GetModuleID() == _T("PM"))
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PMS_BANGKETINHHINHNHAPTHUOC.RPT"),true) )
	//		return;
	//}
	//else
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PMS_BANGKETINHHINHNHAPTHUOC_MA.RPT"),true) )
	//		return;
	//}

	szReportTitle.Format(_T("%s_BANGKETINHHINHNHAPTHUOC"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStockList.GetItemText(0, 1));
		
	CString szStockName;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockName +=_T(", ");

			}
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	szSQL = GetQueryBangkenhapkhotheonhacungcap();
	//MessageBox(szSQL);

	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		//QueryOpener(szSQL);
		return;
	}
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("supplier"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			if((grpCost[9])  > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);						
				FormatCurrency(grpCost[5], tmpStr);
				rptDetail->SetValue(_T("s5"), tmpStr);
				FormatCurrency(grpCost[6], tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);
				FormatCurrency(grpCost[7], tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);
				FormatCurrency(grpCost[8], tmpStr);
				rptDetail->SetValue(_T("s8"), tmpStr);
				FormatCurrency(grpCost[9], tmpStr);
				rptDetail->SetValue(_T("s9"), tmpStr);
				for (int i =0; i<10;i++){
					ttCost[i] += grpCost[i];
					grpCost[i]=0;
				}
				nItem=1;
				nIndex=1;
			}
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("supplier"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr );
			szOldLine = szNewLine;
			nItem=1;
		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("invoicedate"), tmpStr);
		rptDetail->SetValue(_T("2"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
		rs.GetValue(_T("importdate"), tmpStr);
		rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));			
		rs.GetValue(_T("invoiceno"), tmpStr);						
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("Thuoc"), cost);
		grpCost[5]+=cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("vattutieuhao"), cost);
		grpCost[6]+=cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		rs.GetValue(_T("Dichchuyen"), cost);
		grpCost[7]+= cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("Thuocdongy"), cost);
		grpCost[8]+= cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("Tongtien"), cost);
		grpCost[9]+= cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		
		rs.MoveNext();
	}
	for (int i=0;i<10;i++){
		ttCost[i] += grpCost[i];			
	}
		
		if((grpCost[9]) > 0){	
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			FormatCurrency(grpCost[5], tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
			FormatCurrency(grpCost[6], tmpStr);
			rptDetail->SetValue(_T("s6"), tmpStr);
			FormatCurrency(grpCost[7], tmpStr);
			rptDetail->SetValue(_T("s7"), tmpStr);
			FormatCurrency(grpCost[8], tmpStr);
			rptDetail->SetValue(_T("s8"), tmpStr);
			FormatCurrency(grpCost[9], tmpStr);
			rptDetail->SetValue(_T("s9"), tmpStr);
		}
		if((ttCost[9]) > 0){				
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			FormatCurrency(ttCost[5], tmpStr);
			rptDetail->SetValue(_T("s5"), tmpStr);
			FormatCurrency(ttCost[6], tmpStr);
			rptDetail->SetValue(_T("s6"), tmpStr);				
			FormatCurrency(ttCost[7], tmpStr);
			rptDetail->SetValue(_T("s7"), tmpStr);
			FormatCurrency(ttCost[8], tmpStr);
			rptDetail->SetValue(_T("s8"), tmpStr);
			FormatCurrency(ttCost[9], tmpStr);
			rptDetail->SetValue(_T("s9"), tmpStr);
		}
	
	
	//Page Footer
	//Report Footer		
	

	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 

	
	/*szMemory.Format(_T("%.2f"), ttCost1);
	MoneyToString(szMemory, tmpStr);
	*/
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();	
}
void CHCSPurchaseOrderReportDialog::OnExportBangkenhapkhotheonhacungcap(bool bPreview){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	CString tmpStr, szSQL, szTemp;
	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL;
	double grpCost[11],ttCost[11];
	double cost;
	int nItem = 1,nTotalItem=0;	
	for (int i=0; i <= 10;i++){
		grpCost[i]=0;
		ttCost[i]=0;
	} 
	szSQL = GetQueryBangkenhapkhotheonhacungcap();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);		
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);	
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,15);
	xls.SetColumnWidth(2,15);
	xls.SetColumnWidth(3,15);
	xls.SetColumnWidth(4,20);
	xls.SetColumnWidth(5,20);
	xls.SetColumnWidth(6,20);
	xls.SetColumnWidth(7,20);
	xls.SetColumnWidth(8,20);
	xls.SetColumnWidth(9,20);
	xls.SetColumnWidth(10,20);
	
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 11);
	TranslateString(_T("Drug Import Condition Record"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr,FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0,3,11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, &df);
	int nRow = 3;
	if (!m_szStockKey.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("T\x1EEB kho: %s"), m_szStock);
		xls.SetCellMergedColumns(0, nRow, 11);
		xls.SetCellText(0, nRow, tmpStr, &cf);
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("STT"), &hf);	
	TranslateString(_T("InvoinceNo"), tmpStr);	
	xls.SetCellText(1, nRow, tmpStr, &hf);	
	TranslateString(_T("Invoince Date"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, &hf);	
	TranslateString(_T("Import Date"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, &hf);	
	TranslateString(_T("Drug"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, &hf);	
	TranslateString(_T("Material"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, &hf);	
	TranslateString(_T("Hoa chat"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, &hf);	
	TranslateString(_T("Thu\x1ED1\x63 \x110Y"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, &hf);	
	TranslateString(_T("Thu\x1ED1\x63 n\x1ED9i"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, &hf);	
	TranslateString(_T("Thu\x1ED1\x63 ngo\x1EA1i"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, &hf);
	TranslateString(_T("Sub Total"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, &hf);

	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("supplier"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			if((grpCost[8])  > 0)
			{
				nRow ++;
				xls.SetCellMergedColumns(1,nRow,5);
				TranslateString(_T("Total Group"), tmpStr);
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);					
				/*tmpStr.Format(_T("%.2f"), grpCost[4]);
				xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), grpCost[5]);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), grpCost[6]);
				xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), grpCost[7]);
				xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), grpCost[8]);
				xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), grpCost[9]);
				xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER2,true);
				tmpStr.Format(_T("%.2f"), grpCost[10]);
				xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER2,true);
				for (int i =0; i<=10;i++){
					ttCost[i] += grpCost[i];
					grpCost[i]=0;
				}
				nItem=1;
				nIndex=1;*/
			}
			nRow ++;
			xls.SetCellMergedColumns(0,nRow,11);
			rs.GetValue(_T("supplier"), tmpStr);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
			szOldLine = szNewLine;
			nItem=1;
		}
		nRow ++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("invoiceno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("invoicedate"), tmpStr);
		xls.SetCellText(2, nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT);
		rs.GetValue(_T("importdate"), tmpStr);						
		xls.SetCellText(3, nRow, CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT);
		
		rs.GetValue(_T("Thuoc"), cost);
		grpCost[4]+=cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("vattutieuhao"), cost);
		grpCost[5]+=cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER2);
		
		rs.GetValue(_T("Dichchuyen"), cost);
		grpCost[6]+= cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("Thuocdongy"), cost);
		grpCost[7]+= cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("ThuocNoi"), cost);
		grpCost[8]+= cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("ThuocNgoai"), cost);
		grpCost[9]+= cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER2);

		rs.GetValue(_T("Tongtien"), cost);
		grpCost[10]+= cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER2);

		
		rs.MoveNext();
	}
	/*for (int i=0;i<=10;i++){
		ttCost[i] += grpCost[i];			
	}
		
	if((grpCost[10]) > 0){	
		nRow ++;
		xls.SetCellMergedColumns(1,nRow,5);
		TranslateString(_T("Total Group"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER,true);
		tmpStr.Format(_T("%.2f"), grpCost[4]);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), grpCost[5]);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), grpCost[6]);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), grpCost[7]);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), grpCost[8]);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), grpCost[9]);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), grpCost[10]);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER2,true);

	}
	if((ttCost[10]) > 0){				
		nRow ++;
		xls.SetCellMergedColumns(1,nRow,5);
		TranslateString(_T("Total Amount"), tmpStr);				
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER,true);				
		tmpStr.Format(_T("%.2f"), ttCost[4]);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), ttCost[5]);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), ttCost[6]);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), ttCost[7]);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), ttCost[8]);
		xls.SetCellText(8, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), ttCost[9]);
		xls.SetCellText(9, nRow, tmpStr, FMT_NUMBER2,true);
		tmpStr.Format(_T("%.2f"), ttCost[10]);
		xls.SetCellText(10, nRow, tmpStr, FMT_NUMBER2,true);
	}*/

		
	EndWaitCursor();
	xls.Save(_T("Exports\\Bang ke tong hop phieu nhap kho.xls"));

		
}
void CHCSPurchaseOrderReportDialog::OnPrintTonghopchitietphieunhapkho(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szRptName, szSumInWord, szMoney, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalAmount2 = 0, nTotalPayment=0, nCost = 0;
	UpdateData(TRUE);
	BeginWaitCursor();
	CString szInvoiceNo;

	CString szStockName, szStockID, szSupplierName, szSupplierID;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockID += _T(", ");
				szStockName +=_T(", ");

			}
			szStockID.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}


	//szRptName.Format(_T("Reports\\HMS\\HC_DETAILPURCHASEORDERS_HC.RPT"));
	//if(!rpt.Init(szRptName,true) )
	//	return;

	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_DETAILPURCHASEORDERS"), pMF->GetModuleID(), szZoneOfUser);	
	}
	else
	{
		szReportTitle.Format(_T("%s_DETAILPURCHASEORDERS"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
			if(!rpt.Init(szPath))
			return;

	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PartnerName"), m_wndSupplier.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockName);

	szSQL = GetQueryTonghopchitietphieunhapkho();
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		//QueryOpener(szSQL);
		return;
	}

	rs.ExecSQL(szSQL);

	int nIndex=1;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("Name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("Uom_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("qty"), nCost);
		tmpStr = SetNumberDelim(rs.GetValue(_T("qty")));
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("tax_price"), nCost);
		tmpStr = SetNumberDelim(rs.GetValue(_T("tax_price")));
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("total_amount"), nCost);
		nTotalAmount += nCost;
		tmpStr = SetNumberDelim(rs.GetValue(_T("total_amount")));
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("order_no"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("import_date"), tmpStr);
		rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.MoveNext();
	}

	tmpStr.Format(_T("%d kho\x1EA3n"), nIndex-1);
	rpt.GetReportFooter()->SetValue(_T("Count"), tmpStr);

	//tmpStr.Format(_T("%.2f"), floor(nTotalAmount+0.5));
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);	

	//szMoney.Format(_T("%.2f"), floor(nTotalAmount+0.5));
	szMoney.Format(_T("%.2f"), nTotalAmount);
	MoneyToString(szMoney, tmpStr);

	//Nếu module HC thì đọc lại
	if (pMF->GetModuleID() == _T("HC"))
	{
		if(tmpStr.Find(_T("tỷ")) != -1)
		{
			tmpStr.Replace(_T("tỷ"), _T("tỷ, "));
		}
		
		if(tmpStr.Find(_T("triệu")) != -1)
		{
			tmpStr.Replace(_T("triệu"), _T("triệu, "));
		}

		if(tmpStr.Find(_T("nghìn")) != -1)
		{
			tmpStr.Replace(_T("nghìn"), _T("nghìn, "));
		}
		if(tmpStr.Find(_T("phẩy")) != -1)
		{
			tmpStr.Replace(_T("phẩy"), _T(", "));
		}

		if(tmpStr.Find(_T("không đồng")) != -1)
		{
			tmpStr.Replace(_T("không"), _T(""));
		}
	//_msg(_T("%s"), tmpStr);	
	}

	

	if (!tmpStr.IsEmpty())
	{
		tmpStr += _T(" đồng");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	}

	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	//rpt.GetReportFooter()->SetValue(_T("UserName"), tmpStr);
	EndWaitCursor();
	//if(bPreview)
		rpt.PrintPreview();
	//else
	//	rpt.Print();
}

void CHCSPurchaseOrderReportDialog::OnExportTonghopchitietphieunhapkho(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	CString tmpStr, szSQL, szTemp, szWhere, szStockID, szSumInWord;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalAmount2 = 0, nTotalPayment=0;
	double nCost = 0;
	int nIndex = 1;
	szSQL = GetQueryTonghopchitietphieunhapkho();
	BeginWaitCursor();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);	
		return;
	}
	CExcel xls;	
	CStringArray arrCol;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);		
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));
	xls.SetColumnWidth(0,8);
	xls.SetColumnWidth(1,25);
	xls.SetColumnWidth(2,12);
	xls.SetColumnWidth(3,12);
	xls.SetColumnWidth(4,12);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,20);
	xls.SetColumnWidth(7,14);
	
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 8);
	xls.SetCellText(0, 2, _T("L\x1EC6NH T\x1ED4NG H\x1EE2P NH\x1EACP KHO TH\x45O H\xD3\x41 \x110\x1A0N"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 3, tmpStr, &df);
	xls.SetCellMergedColumns(0, 4, 10);
	xls.SetCellText(0, 4, _T("S\x1ED1 h\xF3\x61 \x111\x1A1n: "), &cf);
	xls.SetCellMergedColumns(0, 5, 10);
	tmpStr.Format(_T("T\xEAn \x63\xF4ng ty: %s"), m_wndSupplier.GetCurrent(1));
	xls.SetCellText(0, 5, tmpStr, &cf);

	int nRow = 5;
	if (!m_szStock.IsEmpty())
	{
		nRow++;
		tmpStr.Format(_T("T\x1EEB kho: %s"), m_szStock);
		xls.SetCellMergedColumns(0, nRow, 10);
		xls.SetCellText(0, nRow, tmpStr, &cf);
	}
	nRow++;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("Tên vật chất vệ sinh"));
	arrCol.Add(_T("\x110VT"));
	arrCol.Add(_T("SL"));
	arrCol.Add(_T("\x110\x1A1n gi\xE1"));
	arrCol.Add(_T("Th\xE0nh ti\x1EC1n"));
	//arrCol.Add(_T("Phi\x1EBFu nh\x1EADp"));
	//arrCol.Add(_T("Ng\xE0y nh\x1EADp"));
	for (int i = 0; i < arrCol.GetCount(); i++)
		xls.SetCellText(i, nRow, arrCol.GetAt(i), &hf);
	for (int i = 0; i < m_wndStockList.GetItemCount(); i++){
		if (m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCheck(i);
			if (!szStockID.IsEmpty())
				szStockID += _T(", ");
			szStockID.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));
		}
	}
	CString szInvoiceNo;
	while(!rs.IsEOF())
	{
		//Page Header
		//Report Detail
		nRow ++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("Name"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("Uom_name"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);	

		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(3, nRow, SetNumberDelim(tmpStr), FMT_TEXT);

		rs.GetValue(_T("tax_price"), tmpStr);
		xls.SetCellText(4, nRow, SetNumberDelim(tmpStr), FMT_TEXT);

		rs.GetValue(_T("total_amount"), nCost);
		nTotalAmount += nCost;
		xls.SetCellText(5, nRow, SetNumberDelim(rs.GetValue(_T("total_amount"))), FMT_TEXT);

		//rs.GetValue(_T("order_no"), tmpStr);
		//xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);
		//rs.GetValue(_T("import_date"), tmpStr);
		//xls.SetCellText(7, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);
		rs.MoveNext();
	}
	nRow++;
	xls.SetCellMergedColumns(0, nRow, 3);
	tmpStr.Format(_T("S\x1ED1 kho\x1EA3n: %d kho\x1EA3n"), nIndex-1);
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	xls.SetCellMergedColumns(3, nRow, 2);
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_RIGHT, true);
	//tmpStr.Format(_T("%.2f"), floor(nTotalAmount+0.5));
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	//xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1, true);
	xls.SetCellText(5, nRow, SetNumberDelim(tmpStr), FMT_TEXT | FMT_RIGHT, true);
	nRow++;
	MoneyToString(tmpStr, szSumInWord);
	tmpStr.Format(_T("T\x1ED5ng ti\x1EC1n: %s \x111\x1ED3ng"), szSumInWord);
	xls.SetCellMergedColumns(0, nRow, 10);
	xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true);
	nRow++;
	nRow++;
	nRow++;
	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	xls.SetCellMergedColumns(6, nRow, 2);
	xls.SetCellText(6, nRow, szDate, FMT_TEXT | FMT_CENTER, true);
	nRow++;
	xls.SetCellMergedColumns(0, nRow, 2);
	xls.SetCellText(0, nRow, _T("Chủ nhiệm khoa C12"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellMergedColumns(0, nRow + 1, 2);
	xls.SetCellText(0, nRow + 1, _T("(K\xFD, ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);
	xls.SetCellMergedColumns(2, nRow, 2);
	xls.SetCellText(2, nRow, _T("Ng\x1B0\x1EDDi gi\x61o"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellMergedColumns(2, nRow + 1, 2);
	xls.SetCellText(2, nRow + 1, _T("(K\xFD, ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);
	xls.SetCellMergedColumns(4, nRow, 2);
	xls.SetCellText(4, nRow, _T("Ng\x1B0\x1EDDi nh\x1EADn"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellMergedColumns(4, nRow + 1, 2);
	xls.SetCellText(4, nRow + 1, _T("(K\xFD, ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);
	xls.SetCellMergedColumns(6, nRow, 2);
	xls.SetCellText(6, nRow, _T("Ng\x1B0\x1EDDi l\x1EADp phi\x1EBFu"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellMergedColumns(6, nRow + 1, 2);
	xls.SetCellText(6, nRow + 1, _T("(K\xFD, ghi r\xF5 h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER);
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	nRow++;
	xls.SetCellMergedColumns(0, nRow, 2);
	xls.SetCellText(0, nRow, _T("4// Nguyễn Thị Kim Phương"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellMergedColumns(6, nRow, 2);
	xls.SetCellText(6, nRow, pMF->GetUserName(pMF->GetCurrentUser()), FMT_TEXT | FMT_CENTER, true);

	EndWaitCursor();
	xls.Save(_T("Exports\\Chi Tiet Phieu Nhap Kho.xls"));
}


// Bien ban kiem nhap phieu nhap kho 
void CHCSPurchaseOrderReportDialog::OnPrintBienbankiemnhapphieunhapkho(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL;
	CString szOldLine, szNewLine, szAmount, szName, szOffice, szUserName, szRptName, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CRecord mrs(&pMF->m_db);
	CReportSection* rptDetail;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	double cost=0.0;
	double grpCost[15], ttCost[15];
	CString szInvoiceNo;
	CString szField;
	szSQL = GetQueryBienbankiemnhapphieunhapkho();
	BeginWaitCursor();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		//QueryOpener(szSQL);
		return;
	}
	for (int i=0;i<15; i++)
	{
		grpCost[i]=0;
		ttCost[i]=0;
	}
	//szRptName.Format(_T("Reports\\HMS\\PMS_BIENBANKIEMNHAP.RPT"));
	//if(!rpt.Init(szRptName,TRUE) )
	//	return;
	//if(pMF->GetModuleID() == _T("PM"))
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PMS_BIENBANKIEMNHAP.RPT"),true) )
	//		return;
	//}
	//else
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PMS_BIENBANKIEMNHAP_MA.RPT"),true) )
	//		return;
	//}
	szReportTitle.Format(_T("%s_BIENBANKIEMNHAP"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStockList.GetItemText(0, 1));
	rpt.GetReportHeader()->SetValue(_T("StockName1"), m_wndStockList.GetItemText(0, 1));
	rpt.GetReportHeader()->SetValue(_T("SupplierName"), m_wndSupplier.GetCurrent(1));
	//LAY DANH SACH BAN KIEM KE
	szSQL.Format(_T("SELECT * FROM m_member ORDER BY mm_id"));
	mrs.ExecSQL(szSQL);
	int n;
	while(!mrs.IsEOF())
	{
		mrs.GetValue(_T("mm_id"), n);
		szName.Format(_T("Member%d"), n);
		szUserName.Format(_T("username%d"),n);
		szOffice.Format(_T("office%d"), n);
		mrs.GetValue(_T("mm_name"), tmpStr);
		rpt.GetReportHeader()->SetValue(szName, tmpStr);
		rpt.GetReportFooter()->SetValue(szUserName, tmpStr);
		szName.Format(_T("Title%d"), n);
		mrs.GetValue(_T("mm_title"), tmpStr);
		rpt.GetReportHeader()->SetValue(szName, tmpStr);
		rpt.GetReportFooter()->SetValue(szOffice, tmpStr);
		mrs.MoveNext();
	}
	//Page Header
	//Report Detail
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("invoiceno"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{					
			if(grpCost[12] > 0)
			{
				TranslateString(_T("Total Amount"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);												
				for(int i=10;i<15; i++){
					szField.Format(_T("s%d"), i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szField, tmpStr);
					ttCost[i] += grpCost[i];
					grpCost[i]=0;
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("InvoiceNo"),szNewLine );	
			rs.GetValue(_T("Impdate"), tmpStr);
			rptDetail->SetValue(_T("InvoiceDate"),CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy) );					
			rs.GetValue(_T("suppliers"), tmpStr);
			rptDetail->SetValue(_T("Supplier"),tmpStr );	
			szInvoiceNo.AppendFormat(_T("%s, "),szNewLine);;
			szOldLine = szNewLine;
			nIndex=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("id"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		//rptDetail->SetValue(_T("8"), tmpStr);
		//rs.GetValue(_T("unitprice"), cost);	

		rs.GetValue(_T("expdate"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		rs.GetValue(_T("lotno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("unitprice"), cost);
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("subamount"), cost);
		grpCost[10] += cost;								
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("Vat"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("amountvat"), cost);
		grpCost[12] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);	

		rs.GetValue(_T("costamount"), cost);
		grpCost[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);

		rs.GetValue(_T("country"), tmpStr);
		rptDetail->SetValue(_T("14"), tmpStr);

		rs.GetValue(_T("orgcountry"), tmpStr);				
		rptDetail->SetValue(_T("16"), tmpStr);

		rs.GetValue(_T("barcode"), tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);

		rs.GetValue(_T("serial"), tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	for(int i=10;i<15;i++)
	{
		ttCost[i]+=grpCost[i];
	}

	if(grpCost[12] > 0)
	{
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);									
		for(int i=10;i<15; i++)
		{
			szField.Format(_T("s%d"), i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}						
	}
	
	if(ttCost[12] > 0)
	{
		TranslateString(_T("Total Sum"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);			
		for(int i=10;i<15; i++)
		{
			szField.Format(_T("s%d"), i);
			FormatCurrency(ttCost[i], tmpStr);
			rptDetail->SetValue(szField, tmpStr);
		}
	}
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), szInvoiceNo);
	szAmount.Format(_T("%.2f"), ttCost[13]);
	MoneyToString(szAmount, tmpStr);	
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr + _T(" \x111\x1ED3ng."));
	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
	EndWaitCursor();
}

void CHCSPurchaseOrderReportDialog::OnExportBienbankiemnhapphieunhapkho(bool bPreview){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 	
	UpdateData(true);
	CString tmpStr, szSQL, szTemp;
	CString szOldLine, szNewLine, szAmount, szName, szOffice, szUserName;
	CRecord rs(&pMF->m_db);
	CRecord mrs(&pMF->m_db);
	
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0;
	double cost=0.0;
	double grpCost[15], ttCost[15];
	//int i;
	CString szInvoiceNo;
	CString szField;
	
	for (int i = 0; i < 15; i++)
	{
		grpCost[i]=0;
		ttCost[i]=0;
	}
	
	BeginWaitCursor();
	szSQL = GetQueryBienbankiemnhapphieunhapkho();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	CExcel xls;	
	int nRow = 6;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 11);
	xls.SetColumnWidth(5, 7);
	xls.SetColumnWidth(6, 14);
	xls.SetColumnWidth(7, 20);
	xls.SetColumnWidth(8, 11);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 12);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 14);
	TranslateString(_T("Purchase Order Control Record"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr, FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellMergedColumns(0, 3, 14);
	xls.SetCellText(0, 3, tmpStr, &df);
	xls.SetCellText(1, 5, _T("T\x1ED5 ki\x1EC3m k\xEA g\x1ED3m:"),FMT_TEXT,true);
	//LAY DANH SACH BAN KIEM KE
	xls.SetCellText(0, 6, _T("STT"), &hf);
	xls.SetCellText(1, 6, _T("T\xEAn"), &hf);
	xls.SetCellText(2, 6, _T("\x43h\x1EE9\x63 v\x1EE5"), &hf);
	szSQL.Format(_T("SELECT mm_name as name, mm_title as title FROM m_member WHERE mm_name IS NOT NULL ORDER BY mm_id"));
	nRow = 6;
	mrs.ExecSQL(szSQL);
	while(!mrs.IsEOF()) 
	{
		nRow++;		
		mrs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(1,nRow, tmpStr,FMT_TEXT);	
		mrs.GetValue(_T("title"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr,FMT_TEXT);
		mrs.MoveNext();
	}
	nRow++;
	xls.SetCellMergedColumns(0, nRow, 13);
	xls.SetCellText(0, nRow, _T("N\x1ED9i \x64ung h\xF3\x61 \x111\x1A1n:"), &cf);
	if (!m_szSupplierKey.IsEmpty())
	{
		nRow++;
		xls.SetCellMergedColumns(0, nRow, 13);
		tmpStr.Format(_T("Nh\xE0 \x63ung \x63\x1EA5p: %s"), m_wndSupplier.GetCurrent(1));
		xls.SetCellText(0, nRow, tmpStr, &cf);	
	}
	if (!m_szStockKey.IsEmpty())
	{
		nRow++;
		xls.SetCellMergedColumns(0, nRow, 13);
		tmpStr.Format(_T("Kho: %s"), m_szStock);
		xls.SetCellText(0, nRow, tmpStr, &cf);	
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("STT"), &hf);	
	TranslateString(_T("Drug Name"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, &hf);	
	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, &hf);	
	TranslateString(_T("Qty"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, &hf);	
	TranslateString(_T("Price"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, &hf);
	//TranslateString(_T("Sub Total"), tmpStr);
	//xls.SetCellText(5, nRow, tmpStr, &hf);	
	TranslateString(_T("VAT(%)"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, &hf);
	TranslateString(_T("S\x1ED1 ti\x1EC1n VAT(%)"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, &hf);
	TranslateString(_T("T\x1ED5ng ti\x1EC1n"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, &hf);
	TranslateString(_T("Loot"), tmpStr);
	xls.SetCellText(8, nRow, tmpStr, &hf);
	TranslateString(_T("Exp Date"), tmpStr);
	xls.SetCellText(9, nRow, tmpStr, &hf);
	TranslateString(_T("Country"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, &hf);
	TranslateString(_T("H\xE3ng SX"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, &hf);
	TranslateString(_T("S\x1ED1 \x110K"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, &hf);	
	TranslateString(_T("S\x1ED1 \x111\x103ng k\xFD"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, &hf);	
	int nIndex = 1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("invoiceno"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{					
			if(grpCost[7] > 0)
			{
				nRow++;
				xls.SetCellMergedColumns(0, nRow, 6);
				TranslateString(_T("C\x1ED9ng:"), tmpStr);
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
				for (int i = 6; i < 12; i++)
				{
				
					tmpStr.Format(_T("%.2f"), grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
					ttCost[i] += grpCost[i];
					grpCost[i] = 0;
				}
			}

			nRow++;
			/*xls.SetCellMergedColumns(0,nRow,2);
			xls.SetCellMergedColumns(2,nRow,3);
			xls.SetCellMergedColumns(5,nRow,5);			*/		
			xls.SetCellText(0, nRow, _T("S\x1ED1 HD:") + szNewLine, FMT_TEXT, true);	
			rs.GetValue(_T("Impdate"), tmpStr);
			xls.SetCellText(2,nRow, _T("Ng\xE0y nh\x1EADp: ")+ CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy), FMT_TEXT, true);
			rs.GetValue(_T("suppliers"), tmpStr);
			xls.SetCellText(5, nRow, _T("Nh\xE0 \x63ung \x63\x1EA5p:") + tmpStr, FMT_TEXT, true);					
			szInvoiceNo.AppendFormat(_T("%s, "), szNewLine);
			szOldLine = szNewLine;
			nIndex = 1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("qty"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("unitprice"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);

		/*rs.GetValue(_T("subamount"), cost);
		grpCost[5] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(5,nRow,tmpStr, FMT_NUMBER1);*/
		rs.GetValue(_T("Vat"), cost);				
		tmpStr.Format(_T("%.2f"), cost);				
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("amountvat"), cost);
		grpCost[6] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("costamount"), cost);
		grpCost[7] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1);
					
		rs.GetValue(_T("lotno"), tmpStr);
		xls.SetCellText(8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("expdate"), tmpStr);
		if (tmpStr.Left(4) != _T("1752"))
			xls.SetCellText(9, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE);
		
		rs.GetValue(_T("country"), tmpStr);
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("orgcountry"), tmpStr);
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("barcode"), tmpStr);
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("serial"), tmpStr);
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT);

		rs.MoveNext();
	}
		//Page Footer
		//Report Footer
	for(int i = 6; i < 12; i++)
	{
		ttCost[i] += grpCost[i];
	}

	if (grpCost[6] > 0)
	{
		nRow++;
		xls.SetCellMergedColumns(0, nRow, 6);
		TranslateString(_T("C\x1ED9ng:"), tmpStr);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);									
		for (int i = 6; i < 12; i++)
		{				
			tmpStr.Format(_T("%.2f"),grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);
		}						
	}
	
	if(ttCost[6] > 0)
	{
		nRow++;
		xls.SetCellMergedColumns(0, nRow, 6);
		TranslateString(_T("Total Amount:"), tmpStr);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);
		for (int i = 6; i < 12; i++)
		{
			tmpStr.Format(_T("%.2f"), ttCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1, true);		
		}						
	}
	xls.SetCellMergedColumns(1, 4, 8);
	xls.SetCellText(1, 4, szInvoiceNo, FMT_TEXT);
	xls.Save(_T("Exports\\Bien Ban Kiem Nhap Phieu Nhap Kho.xls"));	
	EndWaitCursor();
}

CString CHCSPurchaseOrderReportDialog::GetQueryTonghopchitietphieunhapkho()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szOrder;
	CString szStock;
	UpdateData(true);
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}	
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));				
		}		
	}
	szWhere.Format(_T(" AND po_status = 'A' AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);
	
	if(!m_szInvoiceTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND po_saleperson_id = '%s' "), m_szInvoiceTypeKey);

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s)"), szStock);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());

	if(m_bOrderBy == TRUE)
		szOrder.Format(_T("po_approveddate,"));

	szSQL.Format(_T(" SELECT get_partnername(po_partner_id) partner_name,") \
				_T("   PRODUCT_PURCHASE_UOMNAME uom_name,") \
				_T("   product_countryname country_name,") \
				_T("   product_code AS code,") \
				_T("   product_name AS name,") \
				_T("   product_taxprice AS tax_price,") \
				_T("   SUM(pol_qtyorder) AS qty,") \
				_T("   SUM(pol_qtyorder*product_taxprice) AS total_amount,") \
				_T("   (SELECT msl_name FROM m_storagelist WHERE msl_storage_id = po_storage_id) AS storages") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON(product_item_id =pol_product_item_id)") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY product_code, product_name, product_taxprice, po_partner_id,") \
				_T(" PRODUCT_PURCHASE_UOMNAME, product_countryname, po_storage_id") \
				_T(" ORDER BY %s po_storage_id, name, partner_name"), szWhere, szOrder);
	return szSQL;
}

CString CHCSPurchaseOrderReportDialog::GetQueryTonghopphieunhapkho_pcnmt()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szStock;
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}
			_debug(_T("%s"), m_wndStockList.GetItemText(i, 0));
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));		
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);

	if(!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND product_groupid = '%s' "), m_szTypeKey);

	if(!m_szInvoiceTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND po_saleperson_id = '%s' "), m_szInvoiceTypeKey);

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s) "), szStock);

	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT distinct") \
				_T("   po_orderno                     AS orderno,") \
				_T("   po_approveddate                   AS approveddate,") \
				_T("   po_invoiceno invoiceno,") \
				_T("   po_invoicedate invoicedate,") \
				_T("   get_partnername(po_partner_id) AS supplier,") \
				_T("   get_storagename(po_storage_id) AS stockname,") \
				_T("   po_description AS description,") \
				_T("   po_tax_id                      AS vat,") \
				_T("   po_netamount                   AS subamount,") \
				_T("   po_taxamount                   AS vatamount,") \
				_T("   sum(pol_qtyorder*product_taxprice) over (partition BY po_purchase_order_id) AS amount, ") \
				_T("   First_value(product_name)") \
				_T("     OVER (") \
				_T("       partition BY po_purchase_order_id") \
				_T("       ORDER BY product_name ASC) AS productname,") \
				
				_T("    CASE") \
				_T("     WHEN po_resource_id = 6") \
				_T("     THEN CAST ('I. Kinh phí trên cấp(Tự chi)' AS NVARCHAR2(128))") \
				_T("     ELSE CAST ('II. Kinh phí tự cân đối' AS NVARCHAR2(128))") \
				_T("   END AS nguonchi") \

				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id=pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id=pol_product_item_id)") \
				_T(" WHERE po_status<>'O'") \
				_T(" AND (po_approveddate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
				_T(" ORDER BY nguonchi, supplier, approveddate"),m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}

CString CHCSPurchaseOrderReportDialog::GetQueryTonghopphieunhapkhotheonhacungcap()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szStock;
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));	
		}		
	}

	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s) "), szStock);

	if(!m_szInvoiceTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND po_saleperson_id = '%s' "), m_szInvoiceTypeKey);

	szWhere.AppendFormat(_T(" AND po_org_id = '%s' "), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT po_orderno                     AS invoiceid,") \
				_T("   po_invoiceno                   AS invoiceno,") \
				_T("   po_orderdate                   AS invoicedate,") \
				_T("   product_name                   AS name,") \
				_T("   get_partnername(po_partner_id) AS supplier,") \
				_T("   get_storagename(po_storage_id) AS stockname,") \
				_T("   po_tax_id                      AS vat,") \
				_T("   po_netamount                   AS subamount,") \
				_T("   po_taxamount                   AS vatamount,") \
				_T("   po_totalamount                 AS amount") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id=pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id=pol_product_item_id)") \
				_T(" WHERE") \
				_T("   po_status<>'O'") \
				_T("   AND (po_orderdate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
				_T("   ORDER BY supplier, invoiceno"),m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}

CString CHCSPurchaseOrderReportDialog::GetQueryBangkenhapkhotheonhacungcap(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szStock;
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));				
		}		
	}
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id ='%s' "), m_szSupplierKey);
	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s)"), szStock);
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT") \
				_T("   get_partnername(po_partner_id)                AS supplier,") \
				_T("   po_orderno                                    AS invoiceno,") \
				_T("   po_orderdate                                  AS invoicedate,") \
				_T("   po_approveddate                                 AS importdate,") \
				_T("   sum(thuoc)                                    AS thuoc,") \
				_T("   sum(Dichchuyen)                               AS Dichchuyen,") \
				_T("   sum(vattutieuhao)                             AS vattutieuhao,") \
				_T("   sum(Thuocnoi)                                 AS thuocnoi,") \
				_T("   sum(thuocngoai)                               AS thuocngoai,") \
				_T("   sum(thuocdongy)                               AS thuocdongy,") \
				_T("   sum(thuoc+vattutieuhao+Dichchuyen+thuocdongy) AS Tongtien") \
				_T(" FROM   (SELECT") \
				_T("           po_partner_id,") \
				_T("           po_orderno,") \
				_T("           po_orderdate,") \
				_T("           po_approveddate,") \
				_T("           CASE WHEN product_producttype NOT IN('A1200', 'A9000', 'A1300') THEN sum(pol_qtyorder*product_taxprice)") \
				_T("           ELSE 0") \
				_T("           END             AS thuoc,") \
				_T("           CASE WHEN product_producttype IN('A1200') THEN sum(pol_qtyorder*product_taxprice)") \
				_T("           ELSE 0") \
				_T("           END             AS Dichchuyen,") \
				_T("           CASE WHEN product_producttype IN('A9000') THEN sum(pol_qtyorder*product_taxprice)") \
				_T("           ELSE 0") \
				_T("           END             AS Vattutieuhao,") \
				_T("           CASE WHEN product_producttype IN('A1300') THEN sum(pol_qtyorder*product_taxprice)") \
				_T("           ELSE 0") \
				_T("           END             AS Thuocdongy,") \
				_T("           CASE WHEN product_countryid IN ('VN', 'VIE', '1') THEN sum(pol_qtyorder*product_taxprice)") \
				_T("           ELSE 0") \
				_T("           END             AS Thuocnoi,") \
				_T("           CASE WHEN product_countryid NOT IN ('VN', 'VIE', '1') THEN sum(pol_qtyorder*product_taxprice)") \
				_T("           ELSE 0") \
				_T("           END             AS Thuocngoai") \
				_T("         FROM   purchase_order") \
				_T("                LEFT JOIN purchase_orderline ON(po_purchase_order_id=pol_purchase_order_id)") \
				_T("                LEFT JOIN m_productitem_view3 ON(product_item_id=pol_product_item_id)") \
				_T("         WHERE  po_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T("                %s AND po_status<>'O'") \
				_T("         GROUP  BY po_orderno,") \
				_T("                   product_producttype,") \
				_T("                   po_orderdate,") \
				_T("                   po_approveddate,") \
				_T("                   po_partner_id,") \
				_T("                   product_countryid) tbl") \
				_T(" GROUP  BY po_orderno,") \
				_T("           po_orderdate,") \
				_T("           po_approveddate,") \
				_T("           po_partner_id") \
				_T(" ORDER  BY po_partner_id,") \
				_T("           po_approveddate "), m_szFromDate, m_szToDate, szWhere);
	//QueryOpener(szSQL);
	return szSQL;

}
CString CHCSPurchaseOrderReportDialog::GetQueryBienbankiemnhapphieunhapkho(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere;
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);
	
	CString szStock;
	szStock.Empty();
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(",");
				m_szStock += _T(", ");
			}
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));				
		}		
	}
	
	CString szType;
	szType.Empty();
	for (int i=0 ; i< m_wndType.GetCount(); i++)
	{
		if(m_wndType.GetCheck(i))
		{
			m_wndType.SetCurSel(i);
			if(!szType.IsEmpty())
			{
				szType += _T(", ");
			}
			szType.AppendFormat(_T("'%s'"), m_wndType.GetCurrent(0));				
		}		
	}
	

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s)"), szStock);

	if(!m_szTypeKey.IsEmpty())	
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);	
	szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT po_orderno                                           AS invoiceno,") \
	_T("   product_code                                                           AS id,") \
	_T("   get_taxrate(po_tax_id)                                                 AS Vat,") \
	_T("   po_orderdate                                                           AS Impdate,") \
	_T("   product_name                                                           AS name,") \
	_T("   get_uomname(product_uomid)                                             AS unit,") \
	_T("   product_expdate                                                        AS expdate,") \
	_T("   product_lotno                                                          AS lotno,") \
	_T("   product_unitprice                                                      AS unitprice,") \
	_T("   product_taxprice                                                       AS vatprice,") \
	_T("   sum(pol_qtyorder)                                                      AS qty,") \
	_T("   sum(pol_qtyorder)*product_unitprice                                    AS subamount,") \
	_T("   sum(pol_qtyorder)*product_taxprice-sum(pol_qtyorder)*product_unitprice AS amountvat,") \
	_T("   sum(pol_qtyorder)*product_taxprice                                     AS costamount,") \
	_T("   get_countryname(product_countryid)                                     AS country,") \
	_T("   get_manufacturename(product_manufactureid)                             AS orgcountry,") \
	_T("   get_partnername(po_partner_id)                                         AS suppliers,") \
	_T("   mp_serial AS serial") \
	_T(" FROM   purchase_order") \
	_T("        LEFT JOIN purchase_orderline ON(po_purchase_order_id=pol_purchase_order_id)") \
	_T("        LEFT JOIN m_productitem_view3 ON(product_item_id=pol_product_item_id)") \
	_T("		LEFT JOIN m_product ON(product_id = mp_product_id)  ") \
	_T(" WHERE  po_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
	_T("        AND po_status<>'O' %s") \
	_T(" GROUP  BY product_code,") \
	_T("           po_orderdate,") \
	_T("           po_tax_id,") \
	_T("           po_orderno,") \
	_T("           product_name,") \
	_T("           product_uomid,") \
	_T("           product_expdate,") \
	_T("           product_lotno,") \
	_T("           product_unitprice,") \
	_T("           product_taxprice,") \
	_T("           product_countryid,") \
	_T("           product_manufactureid,") \
	_T("           po_partner_id,") \
	_T("		   mp_serial") \
	_T(" ORDER  BY suppliers,") \
	_T("           Impdate,") \
	_T("           invoiceno "), m_szFromDate, m_szToDate, szWhere);
	return szSQL;
}BEGIN_MESSAGE_MAP(CHCSPurchaseOrderReportDialog, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CHCSPurchaseOrderReportDialog::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
void CHCSPurchaseOrderReportDialog::OnPrintTonghopchitietphieunhapkho_khth(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szSQL,szWhere, szRptName, szOldLine, szNewline, szMoney, szReportTitle, szPath;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0, nSubGAmount=0, nVatGAmount=0, nTotalGAmount=0, nTotalGPayment=0;
	double nCost = 0.0;	
	
	szReportTitle.Format(_T("%s_DETAILPURCHASEORDERSV1"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	
	CString szStockName;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockName +=_T(", ");
			}		
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockName);
	szSQL = GetQueryTonghopchitietphieunhapkho_khth();
	//_msg(_T("%s"), szSQL);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("product_categoryname"), szNewline);
		if(szNewline != szOldLine)
		{
			if(nTotalPayment > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));		
				FormatCurrency(nSubAmount, tmpStr);
				rptDetail->SetValue(_T("s8"), tmpStr);
				rptDetail->SetValue(_T("s9"), _T(""));
				FormatCurrency(nVatAmount, tmpStr);
				rptDetail->SetValue(_T("s10"), tmpStr);
				FormatCurrency(nTotalAmount, tmpStr);
				rptDetail->SetValue(_T("s11"), tmpStr);
				FormatCurrency(nTotalPayment, tmpStr);
				rptDetail->SetValue(_T("s12"), tmpStr);
				nSubGAmount += nSubAmount;
				nVatGAmount += nVatAmount;
				nTotalGAmount += nTotalAmount;
				nTotalGPayment += nTotalPayment;
				nSubAmount = 0;
				nVatAmount = 0;
				nTotalAmount = 0;
				nTotalPayment = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewline);
			szOldLine = szNewline;
			nIndex = 1;
		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("uom_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("tax_price"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		
		rs.GetValue(_T("vat"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("vatamount"), nCost);
		nVatAmount+= nCost;

		rs.GetValue(_T("total_amount"), nCost);
		nTotalAmount+= nCost;
		FormatCurrency(nCost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		nTotalPayment+= nCost;	
		
		rs.MoveNext();
	}
	
	//Page Footer
	//Report Footer
	if(nTotalPayment > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));		
		FormatCurrency(nSubAmount, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		rptDetail->SetValue(_T("s9"), _T(""));
		FormatCurrency(nVatAmount, tmpStr);
		rptDetail->SetValue(_T("s10"), tmpStr);
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s11"), tmpStr);
		FormatCurrency(nTotalPayment, tmpStr);
		rptDetail->SetValue(_T("s12"), tmpStr);
		nSubGAmount += nSubAmount;
		nVatGAmount += nVatAmount;
		nTotalGAmount += nTotalAmount;
		nTotalGPayment += nTotalPayment;
	}
	if(nTotalGPayment > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));		
		FormatCurrency(nSubGAmount, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		rptDetail->SetValue(_T("s9"), _T(""));
		FormatCurrency(nVatGAmount, tmpStr);
		rptDetail->SetValue(_T("s10"), tmpStr);
		FormatCurrency(nTotalGAmount, tmpStr);
		rptDetail->SetValue(_T("s11"), tmpStr);
		FormatCurrency(nTotalGPayment, tmpStr);
		rptDetail->SetValue(_T("s12"), tmpStr);
	}


	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);

	szMoney.Format(_T("%.2f"), nTotalGPayment);
	MoneyToString(szMoney, tmpStr);
	if (!tmpStr.IsEmpty())
		{
			tmpStr += _T(" đồng");
			rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
		}	

	EndWaitCursor();
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
CString CHCSPurchaseOrderReportDialog::GetQueryTonghopchitietphieunhapkho_khth(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szOrder;
	CString szStock;
	UpdateData(true);
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}	
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));				
		}		
	}
	szWhere.Format(_T(" AND po_status = 'A' AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);
	
	if(!m_szInvoiceTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND po_saleperson_id = '%s' "), m_szInvoiceTypeKey);

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s)"), szStock);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());

	if(m_bOrderBy == TRUE)
		szOrder.Format(_T("po_approveddate,"));

	szSQL.Format(_T(" SELECT ") \
				_T("   product_categoryid, product_categoryname, ") \
				_T("   PRODUCT_PURCHASE_UOMNAME uom_name,") \
				_T("   product_countryname country_name,") \
				_T("   product_code AS code,") \
				_T("   product_name AS name,") \
				_T("   product_taxprice AS tax_price,") \
				_T("   SUM(pol_qtyorder) AS qty,") \
				_T("   SUM(pol_qtyorder*product_taxprice) AS total_amount,") \
				_T("   (SELECT msl_name FROM m_storagelist WHERE msl_storage_id = po_storage_id) AS storages") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON(product_item_id =pol_product_item_id)") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY product_code, product_name, product_taxprice, po_partner_id, product_categoryid, product_categoryname, ") \
				_T(" PRODUCT_PURCHASE_UOMNAME, product_countryname, po_storage_id") \
				_T(" ORDER BY %s po_storage_id, product_categoryid, name"), szWhere, szOrder);
	return szSQL;
}

void CHCSPurchaseOrderReportDialog::OnPreviewV2Select()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);	
	switch (m_bDetail)
	{
		case 1:
			OnPrintTonghopphieunhapkho_pcnmt(true);
			break;
		case 2:
			OnPrintTonghopphieunhapkhotheonhacungcap(true);
			break;
		case 3:
			OnPrintTonghopchitietphieunhapkho_pcnmt(true);
			break;
		case 4:
			OnPrintBienbankiemnhapphieunhapkho(true);
			break;
		case 5:
			OnPrintBangkenhapkhotheonhacungcap(true);
			break;
	}
	
} 

void CHCSPurchaseOrderReportDialog::OnPrintTonghopchitietphieunhapkho_pcnmt(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szRptName, szSumInWord, szMoney, szReportTitle, szPath, szOldLine, szNewline;
	CRecord rs(&pMF->m_db);
	
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalAmount2 = 0, nTotalPayment=0, nCost = 0, nTotalGAmount = 0;
	UpdateData(TRUE);
	BeginWaitCursor();
	CString szInvoiceNo;

	CString szStockName, szStockID, szSupplierName, szSupplierID;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockID += _T(", ");
				szStockName +=_T(", ");

			}
			szStockID.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}

	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_DETAILPURCHASEORDERSV2"), pMF->GetModuleID(), szZoneOfUser);	
	}
	else
	{
		szReportTitle.Format(_T("%s_DETAILPURCHASEORDERSV2"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
			if(!rpt.Init(szPath))
			return;

	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PartnerName"), m_wndSupplier.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockName);

	szSQL = GetQueryTonghopchitietphieunhapkho_pcnmt();
	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		//QueryOpener(szSQL);
		return;
	}

	rs.ExecSQL(szSQL);

	int nIndex=1;
	while (!rs.IsEOF())
	{
		
		rs.GetValue(_T("nguonchi"), szNewline);
		if(szNewline != szOldLine)
		{
			if(nTotalAmount > 0)
			{
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));

				FormatCurrency(nTotalAmount, tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);
				
				nTotalGAmount += nTotalAmount;				
				nTotalAmount = 0;
			
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewline);
			szOldLine = szNewline;
			nIndex = 1;
		}
		
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("Name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("Uom_name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("qty"), nCost);
		tmpStr = SetNumberDelim(rs.GetValue(_T("qty")));
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("tax_price"), nCost);
		tmpStr = SetNumberDelim(rs.GetValue(_T("tax_price")));
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("total_amount"), nCost);
		nTotalAmount += nCost;
		tmpStr = SetNumberDelim(rs.GetValue(_T("total_amount")));
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("order_no"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);

		rs.GetValue(_T("import_date"), tmpStr);
		rptDetail->SetValue(_T("8"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.MoveNext();
	}
	
	if(nTotalAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
		FormatCurrency(nTotalAmount, tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);		
		nTotalGAmount += nTotalAmount;
		
	}

	if(nTotalGAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));	
	
		FormatCurrency(nTotalGAmount, tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);		
	}

	tmpStr.Format(_T("%d kho\x1EA3n"), nIndex-1);
	rpt.GetReportFooter()->SetValue(_T("Count"), tmpStr);

	//tmpStr.Format(_T("%.2f"), floor(nTotalAmount+0.5));
	//tmpStr.Format(_T("%.2f"), nTotalAmount);
	//rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);	

	//szMoney.Format(_T("%.2f"), floor(nTotalAmount+0.5));
	szMoney.Format(_T("%.2f"), nTotalGAmount);
	MoneyToString(szMoney, tmpStr);

	//Nếu module HC thì đọc lại
	if (pMF->GetModuleID() == _T("HC"))
	{
		if(tmpStr.Find(_T("tỷ")) != -1)
		{
			tmpStr.Replace(_T("tỷ"), _T("tỷ, "));
		}
		
		if(tmpStr.Find(_T("triệu")) != -1)
		{
			tmpStr.Replace(_T("triệu"), _T("triệu, "));
		}

		if(tmpStr.Find(_T("nghìn")) != -1)
		{
			tmpStr.Replace(_T("nghìn"), _T("nghìn, "));
		}
		if(tmpStr.Find(_T("phẩy")) != -1)
		{
			tmpStr.Replace(_T("phẩy"), _T(", "));
		}

		if(tmpStr.Find(_T("không đồng")) != -1)
		{
			tmpStr.Replace(_T("không"), _T(""));
		}
	//_msg(_T("%s"), tmpStr);	
	}	

	if (!tmpStr.IsEmpty())
	{
		tmpStr += _T(" đồng");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
	}

	CString szSysDate, szDate;
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	//rpt.GetReportFooter()->SetValue(_T("UserName"), tmpStr);
	EndWaitCursor();
	//if(bPreview)
		rpt.PrintPreview();
	//else
	//	rpt.Print();
}

CString CHCSPurchaseOrderReportDialog::GetQueryTonghopchitietphieunhapkho_pcnmt()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szOrder;
	CString szStock;
	UpdateData(true);
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}	
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));				
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));				
		}		
	}
	szWhere.Format(_T(" AND po_status = 'A' AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);
	
	if(!m_szInvoiceTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND po_saleperson_id = '%s' "), m_szInvoiceTypeKey);

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s)"), szStock);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szTypeKey);
	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());

	if(m_bOrderBy == TRUE)
		szOrder.Format(_T("po_approveddate,"));

	szSQL.Format(_T(" SELECT get_partnername(po_partner_id) partner_name,") \
				_T("   PRODUCT_PURCHASE_UOMNAME uom_name,") \
				_T("   product_countryname country_name,") \
				_T("   product_code AS code,") \
				_T("   product_name AS name,") \
				_T("   product_taxprice AS tax_price,") \
				_T("   SUM(pol_qtyorder) AS qty,") \
				_T("   SUM(pol_qtyorder*product_taxprice) AS total_amount,") \
				_T("   (SELECT msl_name FROM m_storagelist WHERE msl_storage_id = po_storage_id) AS storages,") \
				_T(" CASE WHEN po_resource_id = 6 ") \
				_T("   THEN CAST ('I. Kinh phí trên cấp(Tự chi)' as nvarchar2(128))") \
				_T("   else CAST ('II. Kinh phí tự cân đối' as nvarchar2(128)) end as nguonchi") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON(product_item_id =pol_product_item_id)") \
				_T(" WHERE 1=1 %s") \
				_T(" GROUP BY product_code, product_name, product_taxprice, po_partner_id,") \
				_T(" PRODUCT_PURCHASE_UOMNAME, product_countryname, po_storage_id, po_resource_id") \
				_T(" ORDER BY %s po_resource_id desc, po_storage_id, name, partner_name"), szWhere, szOrder);
	return szSQL;
}
void CHCSPurchaseOrderReportDialog::OnPrintTonghopphieunhapkho_pcnmt(bool bPreview)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPrevMark, szCurMark, szPrevMark1, szCurMark1, szCurDate, szPath, szReportTitle, szMoney;
	double nTmp = 0, nGrpTtl = 0, nGrpTtl1 = 0;
	long double nTotal = 0;
	int nIdx = 1;

	CReport rpt;
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptGroup = NULL;
	CStringArray arrDat;
	
	//if(!rpt.Init(_T("Reports/HMS/HC_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAP_HC.RPT"),true) )
	//		return;	
	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAPV2"), pMF->GetModuleID(), szZoneOfUser);
	}
	else
	{
		szReportTitle.Format(_T("%s_BANGTONGHOPPHIEUNHAPKHOTHEONHACUNGCAPV2"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
		if(!rpt.Init(szPath))
			return;


	rpt.GetReportHeader()->SetValue(_T("HEAlTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	
	CString szStockName;
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStockName.IsEmpty())
			{
				szStockName +=_T(", ");
			}		
			szStockName.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockName);
	szSQL = GetQueryTonghopphieunhapkho_pcnmt();
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}

	arrDat.Add(_T("I. Kinh phí trên cấp(Tự chi)"));
	arrDat.Add(_T("II. Kinh phí tự cân đối"));
	
	//Header Section
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("nguonchi"), szCurMark);
		rs.GetValue(_T("supplier"), szCurMark1);
		if (szCurMark != szPrevMark)
		{
			if (nGrpTtl1 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
				}
				nGrpTtl1 = 0;
			}
			if (nGrpTtl > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), arrDat.GetAt(str2int(szPrevMark)));
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl));
				}
				nGrpTtl = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szCurMark);
			szPrevMark = szCurMark;
			szPrevMark1.Empty();
		}
		if (szCurMark1 != szPrevMark1)
		{
			if (nGrpTtl1 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				if (rptGroup)
				{
					tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
					rptGroup->SetValue(_T("TotalGroup"), tmpStr);
					rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
				}
				nGrpTtl1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szCurMark1);
			szPrevMark1 = szCurMark1;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("orderno")));
		tmpStr = CDate::Convert(rs.GetValue(_T("approveddate")));
		rptDetail->SetValue(_T("3"), tmpStr);
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("description")));

		rs.GetValue(_T("amount"), nTmp);

		nGrpTtl += nTmp;
		nGrpTtl1 += nTmp;
		nTotal += nTmp;
		FormatCurrency(nTmp, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("invoiceno")));
	
		rs.MoveNext();
	}
	if (nGrpTtl1 > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark1);
			rptGroup->SetValue(_T("TotalGroup"), tmpStr);
			rptGroup->SetValue(_T("s5"), double2str(nGrpTtl1));
		}
	}
	if (nGrpTtl > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%s %s"), rptGroup->GetValue(_T("TotalGroup")), szPrevMark);
			rptGroup->SetValue(_T("TotalGroup"), tmpStr);
			rptGroup->SetValue(_T("s5"), double2str(nGrpTtl));
		}
	}
	if (nTotal > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		if (rptGroup)
		{
			tmpStr.Format(_T("%f"), nTotal);
			rptGroup->SetValue(_T("s5"), tmpStr);
		}
	}
	rptGroup = rpt.GetReportFooter();
	if (rptGroup)
	{
		szCurDate = pMF->GetSysDate();
		tmpStr.Format(rptGroup->GetValue(_T("PrintDate")), szCurDate.Right(2), szCurDate.Mid(5, 2), szCurDate.Left(4));
		rptGroup->SetValue(_T("PrintDate"), tmpStr);
	}
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));

	szMoney.Format(_T("%.2f"), nTotal);
	MoneyToString(szMoney, tmpStr);
	
	//Nếu module HC thì đọc lại
	if (pMF->GetModuleID() == _T("HC"))
	{
		if(tmpStr.Find(_T("tỷ")) != -1)
		{
			tmpStr.Replace(_T("tỷ"), _T("tỷ, "));
		}
		
		if(tmpStr.Find(_T("triệu")) != -1)
		{
			tmpStr.Replace(_T("triệu"), _T("triệu, "));
		}

		if(tmpStr.Find(_T("nghìn")) != -1)
		{
			tmpStr.Replace(_T("nghìn"), _T("nghìn, "));
		}
		if(tmpStr.Find(_T("phẩy")) != -1)
		{
			tmpStr.Replace(_T("phẩy"), _T(", "));
		}

		if(tmpStr.Find(_T("không đồng")) != -1)
		{
			tmpStr.Replace(_T("không"), _T(""));
		}
	//_msg(_T("%s"), tmpStr);	
	}
	if (!tmpStr.IsEmpty())
		{
			tmpStr += _T(" đồng");
			rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);
		}

	EndWaitCursor();	
	rpt.PrintPreview();

}
CString CHCSPurchaseOrderReportDialog::GetQueryTonghopphieunhapkho()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CString szStock;
	m_szStock.Empty();
	for (int i=0 ; i< m_wndStockList.GetItemCount(); i++)
	{
		if(m_wndStockList.GetCheck(i))
		{
			m_wndStockList.SetCurSel(i);
			if(!szStock.IsEmpty())
			{
				szStock += _T(", ");
				m_szStock += _T(", ");
			}
			_debug(_T("%s"), m_wndStockList.GetItemText(i, 0));
			szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 0));		
			m_szStock.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}		
	}
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T("and po_partner_id='%s' "), m_szSupplierKey);

	if(!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND product_groupid = '%s' "), m_szTypeKey);

	if(!m_szInvoiceTypeKey.IsEmpty())
		szWhere.AppendFormat(_T("AND po_saleperson_id = '%s' "), m_szInvoiceTypeKey);

	if(!szStock.IsEmpty())
		szWhere.AppendFormat(_T("and po_storage_id in(%s) "), szStock);

	szWhere.AppendFormat(_T(" AND po_org_id = '%s'"), pMF->GetModuleID());
	szSQL.Format(_T(" SELECT distinct") \
				_T("   po_orderno                     AS orderno,") \
				_T("   po_approveddate                   AS approveddate,") \
				_T("   po_invoiceno invoiceno,") \
				_T("   po_invoicedate invoicedate,") \
				_T("   get_partnername(po_partner_id) AS supplier,") \
				_T("   get_storagename(po_storage_id) AS stockname,") \
				_T("   po_description AS description,") \
				_T("   po_tax_id                      AS vat,") \
				_T("   po_netamount                   AS subamount,") \
				_T("   po_taxamount                   AS vatamount,") \
				_T("   sum(pol_qtyorder*product_taxprice) over (partition BY po_purchase_order_id) AS amount, ") \
				_T("   First_value(product_name)") \
				_T("     OVER (") \
				_T("       partition BY po_purchase_order_id") \
				_T("       ORDER BY product_name ASC) AS productname") \
				_T(" FROM   purchase_order") \
				_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id=pol_purchase_order_id)") \
				_T(" LEFT JOIN m_productitem_view3 ON (product_item_id=pol_product_item_id)") \
				_T(" WHERE po_status<>'O'") \
				_T(" AND (po_approveddate) BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
				_T(" ORDER BY supplier, approveddate"),m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	return szSQL;
}