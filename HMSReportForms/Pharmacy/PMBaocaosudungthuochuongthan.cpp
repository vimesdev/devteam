#include "stdafx.h"
#include "PMBaocaosudungthuochuongthan.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"


/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnListSelectAllFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnListSelectAll();
} 

static int _OnListUnselectAllFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnListUnselectAll();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaosudungthuochuongthan* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnStockAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaosudungthuochuongthan* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan *)pWnd)->OnObjectAddNew();
}*/

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMBaocaosudungthuochuongthan *pVw = (CPMBaocaosudungthuochuongthan *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPMBaocaosudungthuochuongthan *pVw = (CPMBaocaosudungthuochuongthan *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMBaocaosudungthuochuongthan *pVw = (CPMBaocaosudungthuochuongthan *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMBaocaosudungthuochuongthan *pVw = (CPMBaocaosudungthuochuongthan *)pWnd;
	pVw->OnCloseSelect();
}
static long _OnStockListLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnStockListLoadData();
} 
static void _OnStockListDblClickFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan*)pWnd)->OnStockListDblClick();
} 
static void _OnStockListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMBaocaosudungthuochuongthan*)pWnd)->OnStockListSelectChange(nOldItem, nNewItem);
} 
static int _OnStockListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnStockListDeleteItem();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMBaocaosudungthuochuongthan*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CPMBaocaosudungthuochuongthan*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMBaocaosudungthuochuongthan*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnListFacDeleteItem();
} 
static int _OnAddPMBaocaosudungthuochuongthanFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnAddPMBaocaosudungthuochuongthan();
} 
static int _OnEditPMBaocaosudungthuochuongthanFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnEditPMBaocaosudungthuochuongthan();
} 
static int _OnDeletePMBaocaosudungthuochuongthanFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnDeletePMBaocaosudungthuochuongthan();
} 
static int _OnSavePMBaocaosudungthuochuongthanFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnSavePMBaocaosudungthuochuongthan();
} 
static int _OnCancelPMBaocaosudungthuochuongthanFnc(CWnd *pWnd){
	 return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnCancelPMBaocaosudungthuochuongthan();
}

static int _OnListReloadDataFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnListReloadData();
}

static int _OnStockListCheckAllFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnStockListCheckAll();
} 

static int _OnStockListUnCheckAllFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnStockListUnCheckAll();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnObjectListCheckAll();
} 

static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CPMBaocaosudungthuochuongthan*)pWnd)->OnObjectListUnCheckAll();
}

CPMBaocaosudungthuochuongthan::CPMBaocaosudungthuochuongthan(CWnd *pParent)
{
	m_nDlgWidth = 460;
	m_nDlgHeight = 580;
	SetDefaultValues();
}
CPMBaocaosudungthuochuongthan::~CPMBaocaosudungthuochuongthan(){
}
void CPMBaocaosudungthuochuongthan::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 450, 540);
	m_wndStockInfo.Create(this, _T("Stock List"), 10, 60, 445, 165);
	m_wndObjectInfo.Create(this, _T("Object"), 10, 170, 445, 330);
	m_wndDrugInfo.Create(this, _T("Drug List"), 10, 335, 445, 535);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 112, 55);
	m_wndFromDate.Create(this,117, 30, 237, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 242, 30, 322, 55);
	m_wndToDate.Create(this,327, 30, 447, 55); 
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 140, 545, 240, 570);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 245, 545, 345, 570);
	m_wndExport.Create(this, _T("&Export"), 350, 545, 450, 570);
	//m_wndClose.Create(this, _T("&Close"), 350, 545, 450, 570);
	m_wndStockList.Create(this,16, 84, 441, 160); 
	m_wndObjectList.Create(this,15, 195, 440, 325); 
	m_wndListFac.Create(this,15, 360, 440, 530);
}

void CPMBaocaosudungthuochuongthan::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	//m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(128);
	m_wndTitle.ModifyStyle(0, ES_CENTER);
	

	/*m_wndStock.SetCheckBox(TRUE);
	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);*/
	m_wndStockList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndStockList.InsertColumn(1, _T("Stock Name"), CFMT_TEXT, 300);
	m_wndStockList.SetCheckBox(TRUE);
	m_wndStockList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.SetCheckBox(TRUE);
	m_wndObjectList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndListFac.SetCheckBox(true);
	m_wndListFac.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndListFac.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 250);
	m_wndListFac.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	
	/*m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);*/

}
void CPMBaocaosudungthuochuongthan::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);

	m_wndListFac.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndListFac.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);
	m_wndListFac.AddEvent(0, _T("-"));
	m_wndListFac.AddEvent(3, _T("Reload Data"), _OnListReloadDataFnc);
	
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);

	m_wndStockList.SetEvent(WE_SELCHANGE, _OnStockListSelectChangeFnc);
	m_wndStockList.SetEvent(WE_LOADDATA, _OnStockListLoadDataFnc);
	m_wndStockList.SetEvent(WE_DBLCLICK, _OnStockListDblClickFnc);

	m_wndStockList.AddEvent(1, _T("Check All"), _OnStockListCheckAllFnc);
	m_wndStockList.AddEvent(2, _T("UnCheck All"), _OnStockListUnCheckAllFnc);

	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	//SetWindowFont(&m_wndTitle, GetFaceName(), GetFaceSize() + 3, true);
	//m_wndTitle.SetTextColor(RGB(0, 0, 250));

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T("SELECT hsd_id AS groupid FROM hms_surgery_drugtype ") \
		         _T("WHERE hsd_type='P' ORDER BY hsd_index"));

	rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), tmpStr);

		if (!m_szGroups.IsEmpty())
			m_szGroups += _T(",");

		m_szGroups.AppendFormat(_T("'%s'"), tmpStr);
		rs.MoveNext();
	}

	m_szFromDate = pMF->GetSysDate() + _T("00:00");
	m_szToDate = pMF->GetSysDateTime();

	OnStockListLoadData();
	//OnStockListCheckAll();

	OnObjectListLoadData();
	OnObjectListCheckAll();

	OnListFacLoadData();
	OnListSelectAll();
	
	UpdateData(FALSE);

	//MessageBox(_T("OK"));
}
void CPMBaocaosudungthuochuongthan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	//DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
}
void CPMBaocaosudungthuochuongthan::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMBaocaosudungthuochuongthan::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMBaocaosudungthuochuongthan::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szObjectKey.Empty();

}
int CPMBaocaosudungthuochuongthan::SetMode(int nMode)
{
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
/*void CPMBaocaosudungthuochuongthan::OnFromDateChange(){
	
} */
/*void CPMBaocaosudungthuochuongthan::OnFromDateSetfocus(){
	
} */
/*void CPMBaocaosudungthuochuongthan::OnFromDateKillfocus(){
	
} */
int CPMBaocaosudungthuochuongthan::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMBaocaosudungthuochuongthan::OnToDateChange(){
	
} */
/*void CPMBaocaosudungthuochuongthan::OnToDateSetfocus(){
	
} */
/*void CPMBaocaosudungthuochuongthan::OnToDateKillfocus(){
	
} */
int CPMBaocaosudungthuochuongthan::OnToDateCheckValue(){
	return 0;
} 
void CPMBaocaosudungthuochuongthan::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMBaocaosudungthuochuongthan::OnStockSelendok(){
	 
}
/*void CPMBaocaosudungthuochuongthan::OnStockSetfocus(){
	
}*/
/*void CPMBaocaosudungthuochuongthan::OnStockKillfocus(){
	
}*/
long CPMBaocaosudungthuochuongthan::OnStockLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0)
	{
		//szWhere.Format(_T(" AND pmsl_stockid=%d"), ToInt(m_szStockKey));
	}

	//szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStorages);
	//szWhere.AppendFormat(_T(" and msl_storage_id in(10,11) "));

	m_wndStock.DeleteAllItems();
	int nCount = 0;

	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name ") \
		         _T("FROM m_storagelist WHERE 1=1 AND msl_org_id IN('PM') %s ") \
				 _T("ORDER BY msl_storage_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMBaocaosudungthuochuongthan::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMBaocaosudungthuochuongthan::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMBaocaosudungthuochuongthan::OnObjectSelendok(){
	 
}
/*void CPMBaocaosudungthuochuongthan::OnObjectSetfocus(){
	
}*/
/*void CPMBaocaosudungthuochuongthan::OnObjectKillfocus(){
	
}*/
long CPMBaocaosudungthuochuongthan::OnObjectLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		//szWhere.Format(_T(" WHERE ho_id='%s' "), m_szObjectKey);
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object %s ORDER BY cast(ho_id as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nItem;
	while(!rs.IsEOF()){ 
		nItem = m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		m_wndObject.SetCheck(nItem, true);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMBaocaosudungthuochuongthan::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMBaocaosudungthuochuongthan::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPrintBaocaodanhsachbenhnhansudungthuochuongthan(true);
	//OnExportBaocaodanhsachbenhnhansudungthuochuongthan();
} 
void CPMBaocaosudungthuochuongthan::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//OnExportBaocaodanhsachbenhnhansudungthuochuongthan();
	OnPrintBaocaodanhsachbenhnhansudungthuochuongthan(true);
} 
void CPMBaocaosudungthuochuongthan::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnExportBaocaodanhsachbenhnhansudungthuochuongthan();
} 
void CPMBaocaosudungthuochuongthan::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
}
void CPMBaocaosudungthuochuongthan::OnStockListDblClick(){
	
} 
void CPMBaocaosudungthuochuongthan::OnStockListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPMBaocaosudungthuochuongthan::OnStockListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMBaocaosudungthuochuongthan::OnStockListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	m_wndStockList.BeginLoad(); 
	int nCount = 0;

	//szWhere.AppendFormat(_T(" AND msl_storage_id IN(%s) "), pMF->m_szStorages);
	//szWhere.AppendFormat(_T(" AND msl_storage_id IN(10,11) "));

	szSQL.Format(_T("SELECT msl_storage_id as ID, msl_name as StockName ") \
		         _T("FROM m_storagelist WHERE 1=1 AND msl_org_id IN('PM', 'GL') %s ") \
				 _T("ORDER BY msl_storage_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStockList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("StockName")), NULL);
		rs.MoveNext();
	}
	m_wndStockList.EndLoad(); 
	return nCount;
}
void CPMBaocaosudungthuochuongthan::OnObjectListDblClick(){
	
} 
void CPMBaocaosudungthuochuongthan::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPMBaocaosudungthuochuongthan::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMBaocaosudungthuochuongthan::OnObjectListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ho_id as ID, ") \
		         _T("ho_desc as Name ") \
				 _T("FROM hms_object ") \
				 _T("ORDER BY cast(ho_id as integer)"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}

	m_wndObjectList.EndLoad(); 
	return nCount;
}
void CPMBaocaosudungthuochuongthan::OnListFacDblClick(){
	
} 
void CPMBaocaosudungthuochuongthan::OnListFacSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPMBaocaosudungthuochuongthan::OnListFacDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMBaocaosudungthuochuongthan::OnListFacLoadData(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad();
	m_wndListFac.DeleteAllItems();
	int nCount = 0;

	szSQL.Format(_T(" SELECT distinct mp_code as ID, mp_name as Name, adu_name as Unit") \
				_T(" FROM m_storageline") \
				_T(" LEFT JOIN m_product ON(msl_product_id=mp_product_id)") \
				_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id)") \
				_T(" WHERE mp_producttype in(%s)") \
				_T(" AND msl_isactive='Y'") \
				_T(" ORDER BY mp_name"), m_szGroups);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListFac.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), NULL);
		rs.MoveNext();
	}
	m_wndListFac.EndLoad(); 
	return nCount;
}
int CPMBaocaosudungthuochuongthan::OnListSelectAll()
{
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, true);
	}
	return 0;
}

int CPMBaocaosudungthuochuongthan::OnListUnselectAll()
{
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, false);
	}
	return 0;
}
int CPMBaocaosudungthuochuongthan::OnAddPMBaocaosudungthuochuongthan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMBaocaosudungthuochuongthan::OnEditPMBaocaosudungthuochuongthan(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMBaocaosudungthuochuongthan::OnDeletePMBaocaosudungthuochuongthan(){
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
 		OnCancelPMBaocaosudungthuochuongthan(); 
 	}
	return 0;
}
int CPMBaocaosudungthuochuongthan::OnSavePMBaocaosudungthuochuongthan(){
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
 		//OnPMBaocaosudungthuochuongthanListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMBaocaosudungthuochuongthan::OnCancelPMBaocaosudungthuochuongthan(){
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
int CPMBaocaosudungthuochuongthan::OnPMBaocaosudungthuochuongthanListLoadData(){
	return 0;
}
void CPMBaocaosudungthuochuongthan::OnPrintBaocaodanhsachbenhnhansudungthuochuongthan(bool m_nPreview)
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, szObjects, szWhere, szID, szObject, szObjectName;
	CString szCaseDrugID, m_szFacList, szGroups, szSumDept, szTotalSum;
	CString szStocks, szStockNames;

	if (!rpt.Init(_T("Reports\\HMS\\PMS_PRESCRIPTIONLISTREPORT.RPT")))
		return;

	UpdateData(TRUE);

	BeginWaitCursor();

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
				  CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

	szObject.Empty();
	szObjectName.Empty();
	szStocks.Empty();
	szStockNames.Empty();

	for (int i = 0; i < m_wndStockList.GetItemCount(); i++)
	{
		if (m_wndStockList.GetCheck(i))
		{
			if (!szStocks.IsEmpty())
				szStocks += _T(",");
			if (!szStockNames.IsEmpty())
				szStockNames += _T(", ");

			szStocks.AppendFormat(_T("%d"), ToInt(m_wndStockList.GetItemText(i, 0)));
			szStockNames.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}
	}
	
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockNames);
	
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	 {
		 if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if (!szObject.IsEmpty())
				szObject += _T(",");
			szObject.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 0));
			
			if (!szObjectName.IsEmpty())
				szObjectName += _T(", ");			
			szObjectName.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 1));
		}
	 }
	 

	 if (!szObject.IsEmpty())
	 {
		szWhere.Format(_T(" AND ho_object in(%s) "), szObject);
	 }
		

	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			szID.Format(_T("ID%s"), m_wndListFac.GetItemText(i, 0));
			if(!szGroups.IsEmpty())
				szGroups += _T(",");
			szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
			if (!szCaseDrugID.IsEmpty())
				szCaseDrugID +=_T(",");
			szCaseDrugID.AppendFormat(_T(" case when mp_code='%s' then sum(hpol_qtyissue) else 0 end as %s "),m_wndListFac.GetItemText(i, 0), szID);				

			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 1));
			if (!szSumDept.IsEmpty())
				szSumDept += _T(",");					
			szSumDept.AppendFormat(_T(" sum(%s) as %s"), szID,szID);
			if (!szTotalSum.IsEmpty())
				szTotalSum += _T("+");				
			szTotalSum.AppendFormat(_T(" sum(%s)"), szID);
		}			
	}

	rpt.GetReportHeader()->SetValue(_T("Object"), szObjects);

	szSQL.Format(_T(" SELECT (select distinct hst_name from hms_surgery_table where hst_idx=tableOpera) as tableOpera,") \
		_T("        docno,") \
		_T("        pname,") \
		_T("        age,") \
		_T("        CardNo,") \
		_T("        DeptID, %s") \
		_T(" FROM") \
		_T(" (") \
		_T("  SELECT distinct ho_opera_table as tableOpera,") \
		_T("         ho_docno as docno,") \
		_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("         case when ho_object<>7 then ho_cardno else null end as cardNo,") \
		_T("         ho_deptid as DeptId,") \
		_T("         hd_icd as ICD,") \
		_T("         hd_diagnostic as Diagnostic, %s") \
		_T("  FROM hms_patient") \
		_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
		_T("  LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
		_T("  LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
		_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
		_T("  WHERE ho_status in('A','I','D','T') and hpo_storage_id in(%s)") \
		_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("        and mp_producttype in(%s) %s") \
		_T("  GROUP BY ho_opera_table, ho_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hd_icd, hd_diagnostic, ho_object, ho_cardno, ho_deptid, mp_code, hpol_qtyissue") \
		_T("  UNION ALL") \
		_T("  SELECT distinct ho_opera_table as tableOpera,") \
		_T("         ho_docno as docno,") \
		_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("         case when ho_object<>7 then ho_cardno else null end as cardNo,") \
		_T("         ho_deptid as DeptId,") \
		_T("         hd_icd as ICD,") \
		_T("         hd_diagnostic as Diagnostic, %s") \
		_T("  FROM hms_patient") \
		_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
		_T("  LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
		_T("  LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
		_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
		_T("  WHERE ho_status in('A','I','D','T') and hpo_storage_id in(%s)") \
		_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("        and mp_producttype in(%s) %s") \
		_T("  GROUP BY ho_opera_table, ho_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hd_icd, hd_diagnostic, ho_object, ho_cardno, ho_deptid, mp_code, hpol_qtyissue") \
		_T(" ) TblTemp") \
		_T(" GROUP BY tableOpera, docno, pname, age, CardNo, DeptID") \
		_T(" HAVING %s > 0") \
		_T(" ORDER BY tableOpera, docno"),
		szSumDept,
		szCaseDrugID, szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere,
		szCaseDrugID, szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere,
		szTotalSum);

	CReportSection* rptDetail;
	//CReportSection* rptGroup;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szNewLine,szOldLine;
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	long nItem = 1, nTotalOrder = 0;
	//long nOrderID;

	double nTotalAmount=0;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("tableOpera"), szNewLine);

		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));			
			rptDetail->SetValue(_T("GroupName"), szNewLine);
			szOldLine = szNewLine;
			nItem = 1;
		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);		
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);		
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.MoveNext();
	}
	
	//Page Footer
	//Report Footer

	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	//tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	szSysDate = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		          szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);

	EndWaitCursor();

		rpt.PrintPreview();
}
void CPMBaocaosudungthuochuongthan::OnExportBaocaodanhsachbenhnhansudungthuochuongthan()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int m_nCountList = 0;
	CString tmpStr, szDate, szSysDate, szSQL, szObjects, szWhere, szObject, szObjectName;
	CString szCaseDrugID, szID, m_szFacList, szGroups, szSumDept, szTotalSum;
	CString szStocks, szStockNames;

	szObject.Empty();
	szTotalSum.Empty();
	szObjectName.Empty();
	szStocks.Empty();
	szStockNames.Empty();

	UpdateData(true);

	BeginWaitCursor();

	for (int i = 0; i < m_wndStockList.GetItemCount(); i++)
	{
		if (m_wndStockList.GetCheck(i))
		{
			if (!szStocks.IsEmpty())
				szStocks += _T(",");
			if (!szStockNames.IsEmpty())
				szStockNames += _T(", ");

			szStocks.AppendFormat(_T("%d"), ToInt(m_wndStockList.GetItemText(i, 0)));
			szStockNames.AppendFormat(_T("%s"), m_wndStockList.GetItemText(i, 1));
		}
	}
	
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	 {
		 if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if (!szObject.IsEmpty())
				szObject += _T(",");
			szObject.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 0));
			
			if (!szObjectName.IsEmpty())
				szObjectName += _T(", ");						
			szObjectName.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 1));
		}	
	 }
	 

	 if (!szObject.IsEmpty())
	 {
		szWhere.Format(_T(" AND ho_object in(%s) "), szObject);
	 }

	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			m_nCountList++;

			szID.Format(_T("ID%s"), m_wndListFac.GetItemText(i, 0));

			if (!szGroups.IsEmpty())
				szGroups += _T(",");

			szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));

			if (!szCaseDrugID.IsEmpty())
				szCaseDrugID +=_T(",");

			szCaseDrugID.AppendFormat(_T(" case when mp_code='%s' then sum(hpol_qtyissue) else 0 end as %s "),
				                      m_wndListFac.GetItemText(i, 0), szID);			

			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");

			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 1));

			if (!szSumDept.IsEmpty())
				szSumDept += _T(",");

			szSumDept.AppendFormat(_T(" sum(%s) as %s"), szID, szID);

			if (!szTotalSum.IsEmpty())
				szTotalSum += _T("+");

			szTotalSum.AppendFormat(_T(" sum(%s)"), szID);
		}			
	}
	
	//Page Header
	//Report Detail
	
	/*szSQL.Format(_T("SELECT (select hst_name from hms_surgery_table where hst_idx=tableOpera) as tableOpera,docno,pname,age,CardNo,DeptID, ") \
	_T(" %s") \
	_T(" FROM ( ") \
	_T("	SELECT distinct ho_opera_table as tableOpera,ho_docno as docno,") \
	_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, 	") \
	_T(" 	ho_cardno as cardNo, ho_deptid as DeptId, hd_icd as ICD, hd_diagnostic as Diagnostic,") \
	_T(" %s")	\
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
	_T(" LEFT JOIN hms_pharma_xorder ON(hpo_reforderid=ho_idx)") \
	_T(" LEFT JOIN hms_pharma_xorder_line ON(hpo_orderid=hpol_orderid)") \
	_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
	_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
	_T(" WHERE ho_pdeptid='%s' AND ho_status IN('A','I','D') and hpo_stockid in(%s)") \
	_T(" 	and ho_performdate between to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
	_T(" 	and pmi_typeid in('A1150','A1130','A1140') %s") \
	_T(" GROUP BY ho_opera_table, ho_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hd_icd, hd_diagnostic, ho_cardno, ho_deptid, pmi_id") \
	_T(" ) TblTemp ") \
	_T(" GROUP BY tableOpera, docno, pname, age, CardNo, DeptID") \
	_T(" HAVING %s > 0 ") \
	_T(" ORDER BY tableOpera, docno"),
	szSumDept,
	szCaseDrugID,
	pMF->m_szDepartment,
	szStocks,
	m_szFromDate, m_szToDate, szWhere,
	szTotalSum);*/

	/*szSQL.Format(_T(" SELECT (select distinct hst_name from hms_surgery_table where hst_idx=tableOpera) as tableOpera,") \
				_T("        docno,") \
				_T("        pname,") \
				_T("        age,") \
				_T("        CardNo,") \
				_T("        DeptID, %s") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT distinct ho_opera_table as tableOpera,") \
				_T("         ho_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         ho_cardno as cardNo,") \
				_T("         ho_deptid as DeptId,") \
				_T("         hd_icd as ICD,") \
				_T("         hd_diagnostic as Diagnostic, %s") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_pharmaorder ON(hpo_reforder_id=ho_idx)") \
				_T("  LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE ho_pdeptid='%s' AND ho_status IN('A','I','D') and hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
				_T("        and mp_producttype in('A1150','A1130','A1140') %s") \
				_T("  GROUP BY ho_opera_table, ho_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hd_icd, hd_diagnostic, ho_cardno, ho_deptid, mp_code, hpol_qtyissue") \
				_T(" ) TblTemp") \
				_T(" GROUP BY tableOpera, docno, pname, age, CardNo, DeptID") \
				_T(" HAVING %s > 0") \
				_T(" ORDER BY tableOpera, docno"),
				szSumDept,
				szCaseDrugID,
				pMF->m_szDepartment,
				szStocks,
				m_szFromDate, m_szToDate, szWhere,
				szTotalSum);*/

	szSQL.Format(_T(" SELECT (select distinct hst_name from hms_surgery_table where hst_idx=tableOpera) as tableOpera,") \
		_T("        docno,") \
		_T("        pname,") \
		_T("        age,") \
		_T("        CardNo,") \
		_T("        DeptID, %s") \
		_T(" FROM") \
		_T(" (") \
		_T("  SELECT distinct ho_opera_table as tableOpera,") \
		_T("         ho_docno as docno,") \
		_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("         case when ho_object<>7 then ho_cardno else null end as cardNo,") \
		_T("         ho_deptid as DeptId,") \
		_T("         hd_icd as ICD,") \
		_T("         hd_diagnostic as Diagnostic, %s") \
		_T("  FROM hms_patient") \
		_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
		_T("  LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
		_T("  LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
		_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
		_T("  WHERE ho_status in('A','I','D','T') and hpo_storage_id in(%s)") \
		_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("        and mp_producttype in(%s) %s") \
		_T("  GROUP BY ho_opera_table, ho_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hd_icd, hd_diagnostic, ho_object, ho_cardno, ho_deptid, mp_code, hpol_qtyissue") \
		_T("  UNION ALL") \
		_T("  SELECT distinct ho_opera_table as tableOpera,") \
		_T("         ho_docno as docno,") \
		_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("         case when ho_object<>7 then ho_cardno else null end as cardNo,") \
		_T("         ho_deptid as DeptId,") \
		_T("         hd_icd as ICD,") \
		_T("         hd_diagnostic as Diagnostic, %s") \
		_T("  FROM hms_patient") \
		_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
		_T("  LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
		_T("  LEFT JOIN hms_ipharmaorderline ON(hpo_orderid=hpol_orderid)") \
		_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
		_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
		_T("  WHERE ho_status in('A','I','D','T') and hpo_storage_id in(%s)") \
		_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T("        and mp_producttype in(%s) %s") \
		_T("  GROUP BY ho_opera_table, ho_docno, hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, hd_icd, hd_diagnostic, ho_object, ho_cardno, ho_deptid, mp_code, hpol_qtyissue") \
		_T(" ) TblTemp") \
		_T(" GROUP BY tableOpera, docno, pname, age, CardNo, DeptID") \
		_T(" HAVING %s > 0") \
		_T(" ORDER BY tableOpera, docno"),
		szSumDept,
		szCaseDrugID, szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere,
		szCaseDrugID, szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere,
		szTotalSum);

	//_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}

	CString szOldLine, szNewLine;

	double grpCost[40];
	double ttlCost[40];
	double ttgrpCost = 0;
	double cost = 0;
	double qty = 0;
	int nItem = 1;
	int nCulunm = 0;

	for (int i = 0; i < 40; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}
					
	CExcel xls;
	//xls.New();
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 5);

	//xls.SetColumnWidth(4, 17);

	xls.SetColumnWidth(4, 6);

	//xls.SetColumnWidth(6, 5);
	//xls.SetColumnWidth(7, 20);

	xls.SetRowHeight(10, 75);

	for (int i = 0; i < m_nCountList; i++)
	{
		xls.SetColumnWidth(5 + i, 10);
	}

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"),FMT_TEXT,true,11,0);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"),FMT_TEXT,true,11,0);
	TranslateString(_T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 H\x1AF\x1EDANG TH\x1EA6N"), tmpStr);
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT, true, 14, 0);
 
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));

	xls.SetCellText(0, 5, tmpStr, FMT_TEXT, true, 12, 0);

	szSysDate = pMF->GetSysDateTime();
	szDate.Format(CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));

	TranslateString(_T("From Stock"), tmpStr);
	xls.SetCellText(0, 7, tmpStr + _T(": ") + szStockNames);

	TranslateString(_T("\x110\x1ED1i t\x1B0\x1EE3ng"), tmpStr);
	xls.SetCellText(0, 8, tmpStr + _T(": ") + szObjectName);

	int nRow = 10;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING | FMT_BORDER, true, 11);
 
	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING | FMT_BORDER, true, 11);

	TranslateString(_T("Patient Name"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING | FMT_BORDER, true, 11);

	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING | FMT_BORDER, true, 11);

	//TranslateString(_T("Insurance Card"), tmpStr);
	//xls.SetCellText(4, nRow, tmpStr ,FMT_TEXT,true,11,0);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING | FMT_BORDER, true, 11);

	//TranslateString(_T("ICD"), tmpStr);
	//xls.SetCellText(6, nRow, tmpStr ,FMT_TEXT,true,11,0);

	//TranslateString(_T("Diagnostic"), tmpStr);
	//xls.SetCellText(7, nRow, tmpStr,FMT_TEXT,true,11,0);

	int j = 5;
	CString tmpStr1;

	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{				
			tmpStr1.Format(_T("%s"), m_wndListFac.GetItemText(i, 1));			
			xls.SetCellText(j, nRow, tmpStr1, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING | FMT_BORDER, true, 11);
			j++;
			nCulunm++;
		}    
	}	
			
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("tableOpera"), szNewLine);

		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if (ttgrpCost > 0)
			{			
				CString szField, szAmount;
				nRow++;
				j = 5;
				TranslateString(_T("Total Group"), szAmount);			
				xls.SetCellMergedColumns(0, nRow, 5);
				xls.SetCellText(0, nRow, szAmount, FMT_TEXT | FMT_CENTER | FMT_BORDER, true, 11);

				for (int i = 1; i < 5; i++)
					xls.SetCellText(i, nRow, _T(""), FMT_TEXT | FMT_BORDERBOTTOM);

				for (int i = 0; i < nCulunm; i++)
				{					
					tmpStr.Format(_T("%.2f"), grpCost[j]);
					if (grpCost[j] > 0)
						xls.SetCellText(j, nRow, tmpStr, FMT_DECIMAL | FMT_BORDER, true, 11);
					else
						xls.SetCellText(j, nRow, _T(""), FMT_BORDER, true, 11);
					ttlCost[j] += grpCost[j];
					grpCost[j] = 0;
					j++;
				}					
				nItem = 1;
			}
			
			nRow++;
			CString szField, szAmount;			
			tmpStr.Format(_T("%s"), szNewLine);
			//xls.SetCellMergedColumns(1,nRow,7);
			xls.SetCellMergedColumns(0, nRow, 5 + m_nCountList);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT | FMT_BORDER, true, 11);
			xls.SetCellText(5 + m_nCountList - 1, nRow, _T(""), FMT_TEXT | FMT_BORDER);  
			szOldLine = szNewLine;
			nItem = 1;
		}

		j = 5;
		nRow++;		
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING | FMT_BORDER, false, 10);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING | FMT_BORDER, false, 10);
 
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING | FMT_BORDER, false, 10);

		rs.GetValue(_T("age"), tmpStr);		
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING | FMT_BORDER, false, 10);

		//rs.GetValue(_T("CardNo"), tmpStr);
		//xls.SetCellText(4,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("DeptID"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING | FMT_BORDER, false, 10);

		//rs.GetValue(_T("ICD"), tmpStr);
		//xls.SetCellText(6,nRow,tmpStr, FMT_TEXT);

		//rs.GetValue(_T("Diagnostic"), tmpStr);
		//xls.SetCellText(7,nRow,tmpStr, FMT_TEXT);		
		j = 5;

		for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
		{	
			if (m_wndListFac.GetCheck(i))
			{
				tmpStr1.Format(_T("ID%s"), m_wndListFac.GetItemText(i,0));				
				rs.GetValue(tmpStr1, tmpStr);
				grpCost[j] += ToDouble(tmpStr);
				ttgrpCost += grpCost[j]; 
				if (tmpStr != _T("0"))
					xls.SetCellText(j, nRow, tmpStr, FMT_DECIMAL | FMT_BORDER, false, 10);
				else
					xls.SetCellText(j, nRow, _T(""), FMT_BORDER, false, 10);
				j++;
			}
		}		
		rs.MoveNext();
	}

		j = 5;
		if (ttgrpCost > 0)
		{			
			CString szField, szAmount;
			nRow++;
			j = 5;
			TranslateString(_T("Total Group"), szAmount);				
			xls.SetCellMergedColumns(0, nRow, 5);
			xls.SetCellText(0, nRow, szAmount, FMT_TEXT | FMT_CENTER | FMT_BORDER, true, 11);
			for (int i = 1; i < 5; i++)
				xls.SetCellText(i, nRow, _T(""), FMT_TEXT | FMT_BORDERBOTTOM);

			for (int i = 0; i < nCulunm; i++)
			{
				tmpStr.Format(_T("%.2f"), grpCost[j]);
				if (grpCost[j] > 0)
					xls.SetCellText(j, nRow, tmpStr, FMT_DECIMAL | FMT_BORDER, true, 11);
				else
					xls.SetCellText(j, nRow, _T(""), FMT_BORDER, true, 11);
				ttlCost[j] += grpCost[j];
				j++;
			}
		}
		
		j = 5;
		if (ttgrpCost > 0)
		{			
			CString szField, szAmount;
			nRow++;
			TranslateString(_T("Total Sum"), szAmount);
			xls.SetCellMergedColumns(0, nRow, 5);
			xls.SetCellText(0, nRow, szAmount, FMT_TEXT | FMT_CENTER | FMT_BORDER, true, 11);
			for (int i = 1; i < 5; i++)
					xls.SetCellText(i, nRow, _T(""), FMT_TEXT | FMT_BORDERBOTTOM);

			for (int i = 0; i < nCulunm; i++)
			{
				tmpStr.Format(_T("%.2f"), ttlCost[j]);
				if (ttlCost[j] > 0)
					xls.SetCellText(j, nRow, tmpStr, FMT_DECIMAL | FMT_BORDER, true, 11);	
				else
					xls.SetCellText(j, nRow, _T(""), FMT_BORDER, true, 11);	
				j++;
			}
		}
	
	EndWaitCursor();

	xls.Save(_T("Exports\\Baocaosudungthuochuongthan.xls"));
}

int CPMBaocaosudungthuochuongthan::OnListReloadData()
{
	OnListFacLoadData();
	return 0;
}

int CPMBaocaosudungthuochuongthan::OnStockListCheckAll()
{
	for (int i = 0; i < m_wndStockList.GetItemCount(); i++)
	{
		if (!m_wndStockList.GetCheck(i))
			m_wndStockList.SetCheck(i, true);
	}
	return 0;
}

int CPMBaocaosudungthuochuongthan::OnStockListUnCheckAll()
{
	for (int i = 0; i < m_wndStockList.GetItemCount(); i++)
	{
		if (m_wndStockList.GetCheck(i))
			m_wndStockList.SetCheck(i, false);
	}
	return 0;
}

int CPMBaocaosudungthuochuongthan::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, true);
	}
	return 0;
}

int CPMBaocaosudungthuochuongthan::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, false);
	}
	return 0;
}