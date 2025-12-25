#include "ReportDrugMaterialUnpick.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

static int _OnCheckAllFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnUnCheckAll();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSefocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CReportDrugMaterialUnpick* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnStockAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CReportDrugMaterialUnpick* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnObjectAddNew();
}*/

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CReportDrugMaterialUnpick* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick *)pWnd)->OnTypeAddNew();
}*/

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CReportDrugMaterialUnpick *pVw = (CReportDrugMaterialUnpick *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CReportDrugMaterialUnpick *pVw = (CReportDrugMaterialUnpick *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CReportDrugMaterialUnpick *pVw = (CReportDrugMaterialUnpick *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CReportDrugMaterialUnpick *pVw = (CReportDrugMaterialUnpick *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CReportDrugMaterialUnpick*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnListFacDeleteItem();
}
static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnTypeListLoadData();
} 
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick*)pWnd)->OnTypeListDblClick();
} 
static void _OnTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CReportDrugMaterialUnpick*)pWnd)->OnTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnTypeListDeleteItem();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CReportDrugMaterialUnpick*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CReportDrugMaterialUnpick*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnObjectListDeleteItem();
}
static int _OnAddPMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnAddPMSReportConditionDialog();
} 
static int _OnEditPMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnEditPMSReportConditionDialog();
} 
static int _OnDeletePMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnDeletePMSReportConditionDialog();
} 
static int _OnSavePMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnSavePMSReportConditionDialog();
} 
static int _OnCancelPMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((CReportDrugMaterialUnpick*)pWnd)->OnCancelPMSReportConditionDialog();
}

static int _OnTypeListCheckAllFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnTypeListCheckAll();
}

static int _OnTypeListUnCheckAllFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnTypeListUnCheckAll();
}

static int _OnObjectListCheckAllFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnObjectListCheckAll();
}

static int _OnObjectListUnCheckAllFnc(CWnd *pWnd){
	return ((CReportDrugMaterialUnpick*)pWnd)->OnObjectListUnCheckAll();
}

CReportDrugMaterialUnpick::CReportDrugMaterialUnpick(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 450;
	m_nDlgHeight = 600;	
	SetDefaultValues();
}
CReportDrugMaterialUnpick::~CReportDrugMaterialUnpick(){
}
void CReportDrugMaterialUnpick::OnCreateComponents()
{

	m_wndObjectInfo.Create(this, _T("Object"), 10, 230, 435, 365);
	m_wndDrugTypeInfo.Create(this, _T("Drug Type"), 10, 90, 435, 225);
	m_wndTableInfo.Create(this, _T("Table"), 10, 370, 435, 555);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 440, 560);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 315, 55);
	m_wndToDate.Create(this,320, 30, 435, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.SetCheckBox(true);
	m_wndStock.Create(this,115, 60, 435, 85); 
	m_wndPrint.Create(this, _T("&Print"), 130, 565, 230, 590);
	m_wndExport.Create(this, _T("&Export"), 235, 565, 335, 590);
	m_wndClose.Create(this, _T("&Close"), 340, 565, 440, 590);
	m_wndTypeList.Create(this,15, 115, 430, 220);
	m_wndObjectList.Create(this,15, 255, 430, 360);
	m_wndListFac.Create(this,15, 395, 430, 550);
}
void CReportDrugMaterialUnpick::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);

	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(128);

	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	
	//m_wndStock.SetCheckBox(TRUE);
	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTypeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndTypeList.SetCheckBox(TRUE);
	m_wndTypeList.ModifyStyle(0, LVS_NOSORTHEADER);


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.SetCheckBox(TRUE);
	m_wndObjectList.ModifyStyle(0, LVS_NOSORTHEADER);


	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndListFac.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndListFac.SetCheckBox(true);
	m_wndListFac.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CReportDrugMaterialUnpick::OnSetWindowEvents()
{
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
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);	

	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);	

	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);

	m_wndListFac.AddEvent(1, _T("Check All"), _OnCheckAllFnc);
	m_wndListFac.AddEvent(2, _T("UnCheck All"), _OnUnCheckAllFnc);

	m_wndTypeList.SetEvent(WE_SELCHANGE, _OnTypeListSelectChangeFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);

	m_wndTypeList.AddEvent(1, _T("Check All"), _OnTypeListCheckAllFnc);
	m_wndTypeList.AddEvent(2, _T("UnCheck All"), _OnTypeListUnCheckAllFnc);

	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate = pMF->GetSysDate()+ _T("00:00");
	m_szToDate = pMF->GetSysDate() + _T("23:59");

	OnListFacLoadData();
	OnTypeListLoadData();
	OnObjectListLoadData();

	OnCheckAll();
	OnObjectListCheckAll();
	OnTypeListCheckAll();

	SetMode(VM_EDIT);
}
void CReportDrugMaterialUnpick::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	//DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);	
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
}
void CReportDrugMaterialUnpick::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CReportDrugMaterialUnpick::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CReportDrugMaterialUnpick::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szObjectKey.Empty();
	m_bReport=FALSE;
}
int CReportDrugMaterialUnpick::SetMode(int nMode)
{
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
 			EnableButtons(FALSE, 0, 1, 2, -1); 
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
/*void CReportDrugMaterialUnpick::OnFromDateChange(){
	
} */
/*void CReportDrugMaterialUnpick::OnFromDateSetfocus(){
	
} */
/*void CReportDrugMaterialUnpick::OnFromDateKillfocus(){
	
} */
int CReportDrugMaterialUnpick::OnFromDateCheckValue(){
	return 0;
} 
/*void CReportDrugMaterialUnpick::OnToDateChange(){
	
} */
/*void CReportDrugMaterialUnpick::OnToDateSetfocus(){
	
} */
/*void CReportDrugMaterialUnpick::OnToDateKillfocus(){
	
} */
int CReportDrugMaterialUnpick::OnToDateCheckValue(){
	return 0;
} 
void CReportDrugMaterialUnpick::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CReportDrugMaterialUnpick::OnStockSelendok(){
	 
}
/*void CReportDrugMaterialUnpick::OnStockSetfocus(){
	
}*/
/*void CReportDrugMaterialUnpick::OnStockKillfocus(){
	
}*/
long CReportDrugMaterialUnpick::OnStockLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0)
	{
		//szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStockKey));
	}

	szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStorages);
	_debug(_T("%s"), pMF->m_szStorages);
	//szWhere.AppendFormat(_T(" and msl_storage_id in(10,11) "));
	
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name ") \
		         _T("FROM m_storagelist WHERE 1=1 AND msl_org_id IN('GL','WM','PM') %s ") \
				 _T("ORDER BY msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
_debug(_T("%s"), szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CReportDrugMaterialUnpick::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CReportDrugMaterialUnpick::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CReportDrugMaterialUnpick::OnTypeSelendok(){
	 
}
/*void CReportDrugMaterialUnpick::OnTypeSetfocus(){
	
}*/
/*void CReportDrugMaterialUnpick::OnTypeKillfocus(){
	
}*/
long CReportDrugMaterialUnpick::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		//szWhere.Format(_T(" and hfg_id='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id,1, 1)='A' %s ORDER BY hfg_id "), szWhere);

	szSQL.Format(_T(" select distinct mpt_product_type_id as id,") \
				_T("        mpt_name as name") \
				_T(" from m_storageline") \
				_T(" left join m_product on(msl_product_id=mp_product_id)") \
				_T(" left join m_product_type on(mpt_product_type_id=mp_producttype)") \
				_T(" where msl_storage_id in(%s) and msl_isactive='Y'") \
				_T(" order by mpt_product_type_id"),
				pMF->m_szStorages);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CReportDrugMaterialUnpick::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CReportDrugMaterialUnpick::OnListFacDblClick(){
	
} 
void CReportDrugMaterialUnpick::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CReportDrugMaterialUnpick::OnListFacDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CReportDrugMaterialUnpick::OnListFacLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	m_wndListFac.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select hst_idx as id, hst_name as name from hms_surgery_table order by  hst_idx "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListFac.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndListFac.EndLoad(); 
	return nCount;}

/*void CReportDrugMaterialUnpick::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CReportDrugMaterialUnpick::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CReportDrugMaterialUnpick::OnObjectSelendok(){
	
}
/*void CReportDrugMaterialUnpick::OnObjectSetfocus(){
	
}*/
/*void CReportDrugMaterialUnpick::OnObjectKillfocus(){
	
}*/
long CReportDrugMaterialUnpick::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CReportDrugMaterialUnpick::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

int CReportDrugMaterialUnpick::OnCheckAll()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, true);
	}
	 return 0;
} 
int CReportDrugMaterialUnpick::OnUnCheckAll()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, false);
	}
	 return 0;
} 

void CReportDrugMaterialUnpick::OnPrintPreviewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(TRUE);
	//m_szStockName = m_wndStock.GetCurrent(1);	
	OnPrintBaocaosudungthuoctheodoituong(true);	
} 
void CReportDrugMaterialUnpick::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(TRUE);
	//m_szStockName = m_wndStock.GetCurrent(1);
	OnPrintBaocaosudungthuoctheodoituong(false);
} 
void CReportDrugMaterialUnpick::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData(TRUE);
	//m_szStockName = m_wndStock.GetCurrent(1);	
	OnExportBaocaosudungthuoctheodoituong();
	
} 
void CReportDrugMaterialUnpick::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

void CReportDrugMaterialUnpick::OnTypeListDblClick(){
	
} 
void CReportDrugMaterialUnpick::OnTypeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CReportDrugMaterialUnpick::OnTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CReportDrugMaterialUnpick::OnTypeListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTypeList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T(" select distinct mpt_product_type_id as ID,") \
				_T("        mpt_name as Name") \
				_T(" from m_storageline") \
				_T(" left join m_product on(msl_product_id=mp_product_id)") \
				_T(" left join m_product_type on(mpt_product_type_id=mp_producttype)") \
				_T(" where msl_storage_id in(%s) and msl_isactive='Y'") \
				_T(" order by mpt_product_type_id"), pMF->m_szStorages);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndTypeList.EndLoad(); 
	return nCount;
}
void CReportDrugMaterialUnpick::OnObjectListDblClick(){
	
} 
void CReportDrugMaterialUnpick::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CReportDrugMaterialUnpick::OnObjectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CReportDrugMaterialUnpick::OnObjectListLoadData()
{

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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

int CReportDrugMaterialUnpick::OnAddPMSReportConditionDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CReportDrugMaterialUnpick::OnEditPMSReportConditionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CReportDrugMaterialUnpick::OnDeletePMSReportConditionDialog(){
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
 		OnCancelPMSReportConditionDialog(); 
 	}
	return 0;
}
int CReportDrugMaterialUnpick::OnSavePMSReportConditionDialog(){
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
 		//OnPMSReportConditionDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CReportDrugMaterialUnpick::OnCancelPMSReportConditionDialog(){
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
int CReportDrugMaterialUnpick::OnPMSReportConditionDialogListLoadData(){
	return 0;
}



void CReportDrugMaterialUnpick::OnPrintBaocaosudungthuoctheodoituong(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, tmpStr2, m_szFacList, szWhere;
	CString  szObject, m_szGroups, szObjectName, szType, szTypeName, szTableName;
	CString szStocks, szStockNames;
	int nCount = 0;

	bool nCheckAllTable = false;
	bool bCheckObject = false;
	bool bCheckDrugType = false;

	if (!rpt.Init(_T("Reports/HMS/PTTT/REPORTDRUGMATERIALUNPICK.RPT")))
	{
		//CString MsgReport;
		//MsgReport.Format(_T("Mau bao cao [%s] chua co. Lien he voi Adminstrator"),  _T("PMS_BAOCAOXUATTHUOCCHOKHOATHEODOITUONG.RPT"));
		//AfxMessageBox(MsgReport);
		return;
	}

	UpdateData(true);

	BeginWaitCursor();

	for (int i = 0; i < m_wndStock.GetCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStocks.IsEmpty())
				szStocks += _T(",");
			if (!szStockNames.IsEmpty())
				szStockNames += _T(", ");

			szStocks.AppendFormat(_T("%d"), ToInt(m_wndStock.GetCheck(i, 0)));
			szStockNames.AppendFormat(_T("%s"), m_wndStock.GetCheck(i, 1));
		}
	}
	
// 	szStocks.AppendFormat(_T("%d"), str2int(m_szStockKey));
// 	szStockNames.AppendFormat(_T("%s"), m_wndStock.GetCurrent(1));
	
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		 if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if(!szObject.IsEmpty())
				szObject += _T(",");						
			szObject.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 0));
			
			if(!szObjectName.IsEmpty())
				szObjectName += _T(", ");
			szObjectName.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 1));
		 }
		 else
		 {
			 if (!bCheckObject)
				 bCheckObject = true;
		 }
	 }

	 if (!szObject.IsEmpty())
	 {
		szWhere.Format(_T(" and ho_object in(%s) "), szObject);		
	 }
		
	 if (!bCheckObject && !szObjectName.IsEmpty())
		szObjectName.Format(_T("T\x1EA5t \x63\x1EA3 \x111\x1ED1i t\x1B0\x1EE3ng"));

	 for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	 {
		 if (m_wndTypeList.GetCheck(i))
		 {
			//m_wndType.SetCurSel(i);
		 	if (!szType.IsEmpty())
				szType += _T(",");						
			szType.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));
			
			if (!szTypeName.IsEmpty())
				szTypeName += _T(", ");						
			szTypeName.AppendFormat(_T("%s"), m_wndTypeList.GetItemText(i, 1));
		 }
		 else
		 {
			 if (!bCheckDrugType)
				 bCheckDrugType = true;
		 }
	 }

	if (!szType.IsEmpty())
		szWhere.AppendFormat(_T(" and mp_producttype in(%s)"), szType);	
	
	if (!bCheckDrugType && !szType.IsEmpty())
		szTypeName.Format(_T("T\x1EA5t \x63\x1EA3 thu\x1ED1\x63 v\xE0 v\x1EADt t\x1B0"));

	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if (!m_szGroups.IsEmpty())
				m_szGroups += _T(",");						
			m_szGroups.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 0));
					
			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
		}
		else
			nCheckAllTable = true;
	}
	
	if (!m_szGroups.IsEmpty()) 
		szWhere.AppendFormat(_T(" and ho_opera_table in(%s)"), m_szGroups);
	
	if (nCheckAllTable || m_szGroups.IsEmpty())
	{
		szTableName = m_szFacList;
	}
	else
	{				
		szTableName.Format(_T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x62\xE0n m\x1ED5"));		
	}


	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
	CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockNames);
	rpt.GetReportHeader()->SetValue(_T("TableName"), szTableName);
	rpt.GetReportHeader()->SetValue(_T("DrugType"), szTypeName);
	rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);

	szSQL.Format(
		_T(" SELECT") \
		_T("     (SELECT DISTINCT hfg_name AS name") \
		_T("     FROM hms_fee_group") \
		_T("     WHERE hfg_id=mp_producttype") \
		_T("     )                                 AS product_typeid,") \
		_T(" product_code AS code,") \
		_T(" product_name AS pdname,") \
		_T(" product_uomname AS uomname,") \
		_T(" SUM(hpol_qtyorder) AS qty,") \
		_T(" hpol_unitprice AS price,") \
		_T(" SUM(hpol_unitprice * hpol_qtyorder) AS amount") \
		_T(" FROM hms_operation") \
		_T(" LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
		_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN hms_medical_transaction ON(hpo_orderid=hmt_orderid and hpol_product_id =hmt_product_id)") \
		_T(" LEFT JOIN m_productitem_view ON(hpol_product_item_id = product_item_id)") \
		_T(" LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
		_T(" WHERE hmt_cstorage_id in(%s)") \
		_T(" AND ho_status = 'T'") \
		_T(" AND hmt_status <> 'T'") \
		_T(" AND hmt_deptid in('B5','PTTYC') ") \
		_T(" AND hmt_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" GROUP BY") \
		_T("   mp_producttype,") \
		_T("   product_code,") \
		_T("   product_name,") \
		_T("   product_uomname,") \
		_T("   hpol_unitprice") \
		_T(" ORDER BY") \
		_T("   mp_producttype,") \
		_T("   pdname"), szStocks, m_szFromDate, m_szToDate, szWhere);

			CReportSection* rptDetail;
			CString szOldLine, szNewLine, szAmount;
			CRecord rs(&pMF->m_db);
			long double grpCost=0.0;
			long double ttlCost=0.0;
			double cost = 0;
			int nItem = 1;
			//_msg(_T("%s"), szSQL);
			rs.ExecSQL(szSQL);

			if(rs.IsEOF())
			{
				ShowMessageBox(_T("No Data"), MB_OK);
				return ;
			}

					
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("product_typeid"), szNewLine);
				if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
					CString szField;
					if(grpCost > 0)
					{
						TranslateString(_T("Total Group"), szAmount);
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
						rptDetail->SetValue(_T("TotalGroup"), szAmount);						
						FormatCurrency(grpCost, tmpStr);
						rptDetail->SetValue(_T("s7"), tmpStr);
						ttlCost += grpCost;						
						grpCost = 0;								
					}

					rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
					rs.GetValue(_T("product_typeid"), tmpStr);
					rptDetail->SetValue(_T("GroupName"),tmpStr );
					szOldLine = szNewLine;
					nItem=1;
				}

				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), nItem++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rs.GetValue(_T("code"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rs.GetValue(_T("pdname"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rs.GetValue(_T("uomname"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				rs.GetValue(_T("price"), cost);
				FormatCurrency(cost, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);

				rs.GetValue(_T("qty"), tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				rs.GetValue(_T("amount"), cost);	
				grpCost += cost;
				FormatCurrency(cost, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				rs.MoveNext();
			}
						
			ttlCost += grpCost;
			
			if (grpCost > 0)
			{	
				TranslateString(_T("Total Group"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
				rptDetail->SetValue(_T("TotalGroup"), szAmount);
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);			
			}
			if (ttlCost > 0)
			{				
				TranslateString(_T("Total Amount"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);
				FormatCurrency(ttlCost, tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);
				ttlCost += grpCost;	
			}
			
			CString szTime;
			szTime = pMF->GetSysDateTime();
			szSysDate = pMF->GetSysDate(); 
			szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szTime.Right(8),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
			rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
			//	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
		//UpdateData(false);
			EndWaitCursor();
		rpt.PrintPreview();			
}
void CReportDrugMaterialUnpick::OnExportBaocaosudungthuoctheodoituong()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szType, m_szFacList, tmpStr2, szDate, szSysDate, szSQL;
	CString szName, szAmount, szFromDate, szToDate, szWhere;
	CString szObject, m_szGroups, szTypeName;
	CString szStocks, szStockNames;

	UpdateData(TRUE);

	BeginWaitCursor();
	
	for (int i = 0; i < m_wndStock.GetCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			if (!szStocks.IsEmpty())
				szStocks += _T(",");
			if (!szStockNames.IsEmpty())
				szStockNames += _T(", ");

			szStocks.AppendFormat(_T("%d"), ToInt(m_wndStock.GetCheck(i, 0)));
			szStockNames.AppendFormat(_T("%s"), m_wndStock.GetCheck(i, 1));
		}
	}

// 	szStocks.AppendFormat(_T("%d"), str2int(m_szStockKey));
// 	szStockNames.AppendFormat(_T("%s"), m_wndStock.GetCurrent(1));
	
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	 {
		 if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if (!szObject.IsEmpty())
				szObject += _T(",");						
			szObject.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		 }	
	 }
	 

	 if (!szObject.IsEmpty())
	 {
		szWhere.Format(_T(" and ho_object in(%s) "), szObject);
	 }
		
		 
	 for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	 {
		 if (m_wndTypeList.GetCheck(i))
		 {
			//m_wndType.SetCurSel(i);
		 	if (!szType.IsEmpty())
				szType += _T(",");						
			szType.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));

			if(!szTypeName.IsEmpty())
				szTypeName += _T(",");						
			szTypeName.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 1));
		}
	 }
	

	if (!szType.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and mp_producttype in(%s) "), szType);
	}			
	
	bool bCheckOperationTable = false;
		
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if (!m_szGroups.IsEmpty())
				m_szGroups += _T(",");						
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
					
			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
		}
		else
		{
			if (!bCheckOperationTable)
				bCheckOperationTable = true;
		}
	}
		
	if (!m_szGroups.IsEmpty()) 
		szWhere.AppendFormat(_T(" and ho_opera_table in(%s) "), m_szGroups);
	
 	if (!bCheckOperationTable && !m_szGroups.IsEmpty())
	{
		//TranslateString(_T("All Department"), m_szFacList);
		m_szFacList = _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x62\xE0n m\x1ED5");
	}

			
			//Page Header
			//Report Detail
			
	/*szSQL.Format(_T(" SELECT (SELECT hfg_name as name FROM hms_fee_group where hfg_id= product_typeid) as product_typeid,") \
		_T("            product_id as id, ") \
		_T("		 	product_name as name,") \
		_T(" 		 	product_unit as unit,") \
		_T("			(select sc_name from sys_country where sc_id=product_countryid) as country,") \
		_T("			pmsi_expdate as exdate,") \
		_T(" 		 	hpol_unitprice as price,") \
		_T("			sum(hpol_issueqty) as qty,")\
		_T(" 		 	sum(hpol_issueqty*hpol_unitprice) as amount") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_pharma_xorder ON(hpo_reforderid=ho_idx)") \
		_T(" LEFT JOIN hms_pharma_xorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
		_T(" LEFT JOIN m_product_view ON(pmsi_itemid=product_id)") \
		_T(" WHERE hpo_stockid in(%s) and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" and ho_status IN('A','I','D') %s") \
		_T(" GROUP BY product_typeid, product_id, product_name, product_unit, product_countryid, pmsi_expdate, hpol_unitprice") \
		_T(" ORDER BY product_typeid"), szStocks, m_szFromDate, m_szToDate, szWhere);*/

	/*szSQL.Format(_T(" SELECT (SELECT distinct hfg_name as name FROM hms_fee_group where hfg_id=mp_producttype) as product_typeid,") \
				_T("       mp_code as id,") \
				_T("       mp_name as name,") \
				_T("       adu_name as unit,") \
				_T("       hpol_unitprice as price,") \
				_T("       sum(hpol_qtyissue) as qty,") \
				_T("       sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_pharmaorder ON(hpo_reforder_id=ho_idx)") \
				_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T(" LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id)") \
				_T(" WHERE hpo_storage_id in(%s)") \
				_T("       and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T("       and ho_status in('A','I','D') %s") \
				_T(" GROUP BY mp_producttype, mp_code, mp_name, adu_name, hpol_unitprice") \
				_T(" ORDER BY mp_producttype, mp_name"),
				szStocks, m_szFromDate, m_szToDate, szWhere);*/

	if(!m_bReport)
	{
		szSQL.Format(_T(" SELECT mp_producttype, ") \
			_T("        product_typeid,") \
			_T("        id,") \
			_T("        name,") \
			_T("        unit,") \
			_T("        price,") \
			_T("        sum(qty) as qty,") \
			_T("        sum(amount) as amount") \
			_T(" FROM") \
			_T(" (") \
			_T("   SELECT mp_producttype, ") \
			_T("         (SELECT distinct hfg_name as name FROM hms_fee_group where hfg_id=mp_producttype) as product_typeid,") \
			_T("         mp_code as id,") \
			_T("         mp_name as name,") \
			_T("         adu_name as unit,") \
			_T("         round(hpol_unitprice, 2) as price,") \
			_T("         sum(hpol_qtyissue) as qty,") \
			_T("         sum(hpol_qtyissue*hpol_unitprice) as amount") \
			_T("   FROM hms_patient") \
			_T("   LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
			_T("   LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
			_T("   LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
			_T("   LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T("   LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
			_T("   LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
			_T("   LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id)") \
			_T("   WHERE hpo_storage_id in(%s)") \
			_T("         and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T("         and ho_status in('A','I','D','T') %s") \
			_T("   GROUP BY mp_producttype, mp_code, mp_name, adu_name, hpol_unitprice") \
			_T("   UNION ALL") \
			_T("   SELECT mp_producttype, ") \
			_T("         (SELECT distinct hfg_name as name FROM hms_fee_group where hfg_id=mp_producttype) as product_typeid,") \
			_T("         mp_code as id,") \
			_T("         mp_name as name,") \
			_T("         adu_name as unit,") \
			_T("         round(hpol_unitprice, 2) as price,") \
			_T("         sum(hpol_qtyissue) as qty,") \
			_T("         sum(hpol_qtyissue*hpol_unitprice) as amount") \
			_T("   FROM hms_patient") \
			_T("   LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
			_T("   LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
			_T("   LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
			_T("   LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T("   LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
			_T("   LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
			_T("   LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id)") \
			_T("   WHERE hpo_storage_id in(%s)") \
			_T("         and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T("         and ho_status in('A','I','D','T') %s") \
			_T("   GROUP BY mp_producttype, mp_code, mp_name, adu_name, hpol_unitprice") \
			_T(" )") \
			_T(" GROUP BY mp_producttype, product_typeid, id, name, unit, price") \
			_T(" ORDER BY mp_producttype, name"),
			szStocks, m_szFromDate, m_szToDate, szWhere,
			szStocks, m_szFromDate, m_szToDate, szWhere);
	}
	else
	{
		szSQL.Format(_T(" SELECT mp_producttype,") \
			_T("   product_typeid,") \
			_T("   id,") \
			_T("   name,") \
			_T("   unit,") \
			_T("   price,") \
			_T("   SUM(qty)    AS qty,") \
			_T("   SUM(amount) AS amount") \
			_T(" FROM") \
			_T("   (SELECT mp_producttype,") \
			_T("     (SELECT DISTINCT hfg_name AS name") \
			_T("     FROM hms_fee_group") \
			_T("     WHERE hfg_id=mp_producttype") \
			_T("     )                                 AS product_typeid,") \
			_T("     mp_code                           AS id,") \
			_T("     mp_name                           AS name,") \
			_T("     adu_name                          AS unit,") \
			_T("     round(hpol_unitprice, 2)                    AS price,") \
			_T("     SUM(hpol_qtyissue)                AS qty,") \
			_T("     SUM(hpol_qtyissue*hpol_unitprice) AS amount") \
			_T("   FROM hms_patient") \
			_T("  LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
			_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
			_T(" LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
			_T(" LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN hms_medical_transaction_view ON (hpo_orderid=hmt_orderid and hpol_product_id =hmt_product_id)") \
			_T(" LEFT JOIN m_transaction ON (hmt_reftransaction_id= mt_transaction_id)") \
			_T(" LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
			_T(" LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
			_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id)") \
			_T("   WHERE hpo_storage_id in(%s)") \
			_T("   AND mt_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
			_T("   AND ho_status      IN('A','I','D','T') %s") \
			_T("   GROUP BY mp_producttype,") \
			_T("     mp_code,") \
			_T("     mp_name,") \
			_T("     adu_name,") \
			_T("     hpol_unitprice") \
			_T("   UNION ALL") \
			_T("   SELECT mp_producttype,") \
			_T("     (SELECT DISTINCT hfg_name AS name") \
			_T("     FROM hms_fee_group") \
			_T("     WHERE hfg_id=mp_producttype") \
			_T("     )                                 AS product_typeid,") \
			_T("     mp_code                           AS id,") \
			_T("     mp_name                           AS name,") \
			_T("     adu_name                          AS unit,") \
			_T("     round(hpol_unitprice, 2)                    AS price,") \
			_T("     SUM(hpol_qtyissue)                AS qty,") \
			_T("     SUM(hpol_qtyissue*hpol_unitprice) AS amount") \
			_T("   FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
			_T(" LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
			_T(" LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
			_T(" LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN hms_medical_transaction_view ON (hpo_orderid=hmt_orderid and hpol_product_id =hmt_product_id)") \
			_T(" LEFT JOIN m_transaction ON (hmt_reftransaction_id= mt_transaction_id)") \
			_T(" LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
			_T(" LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
			_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_product_uom_id)") \
			_T("   WHERE hpo_storage_id in(%s)") \
			_T("   AND mt_orderdate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
			_T("   AND ho_status      IN('A','I','D','T') %s") \
			_T("   GROUP BY mp_producttype,") \
			_T("     mp_code,") \
			_T("     mp_name,") \
			_T("     adu_name,") \
			_T("     hpol_unitprice") \
			_T("   )") \
			_T(" GROUP BY mp_producttype,") \
			_T("   product_typeid,") \
			_T("   id,") \
			_T("   name,") \
			_T("   unit,") \
			_T("   price") \
			_T(" ORDER BY mp_producttype,") \
			_T("   name"),
			szStocks, m_szFromDate, m_szToDate, szWhere,
			szStocks, m_szFromDate, m_szToDate, szWhere);
	}

	//CReportSection* rptDetail;
	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	long double grpCost=0.0;
	long double ttlCost=0.0;
	double cost = 0;
	long qty=0;
	int nItem = 1;
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}

					
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 33);
	xls.SetColumnWidth(3, 7);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 11);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 15);

	//xls.SetCellMergedRows(0, 1, 3);

	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 \x43HO KHO\x41 TH\x45O \x110\x1ED0I T\x1AF\x1EE2NG"),FMT_TEXT,true,14,0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,12,0);

	

	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
				CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	xls.SetCellText(0, 7,_T("T\x1EEB kho: ") + szStockNames);
	xls.SetCellText(0, 8, _T("\x42\xE0n m\x1ED5: ") + m_szFacList);
	
	int nRow = 10;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(1, nRow, _T("M\xE3 thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(2, nRow, _T("T\xEAn thu\x1ED1\x63 / H\xE0m l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(4, nRow, _T("N\x1B0\x1EDB\x63 S\x58"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(5, nRow, _T("H\x1EA1n S\x44"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(6, nRow, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(7, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(8, nRow, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER, true, 11);	
	
			
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("product_typeid"), szNewLine);
		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if (grpCost > 0)
			{			
				CString szField, szAmount;
				nRow ++;
				TranslateString(_T("Total Group"), szAmount);
				//xls.SetCellMergedColumns(0,nRow,8);
				xls.SetCellText(0, nRow, szAmount, FMT_TEXT, true, 11, 0);
				tmpStr.Format(_T("%.2f"), grpCost);
				xls.SetCellText(8, nRow, tmpStr, FMT_DECIMAL, true, 11, 0);
				ttlCost += grpCost;
				grpCost = 0;								
				nItem=1;
			}
			nRow ++;
			CString szField, szAmount;			
			tmpStr.Format(_T("%s"), szNewLine);
			//xls.SetCellMergedColumns(0,nRow,9);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,11,0);
			szOldLine = szNewLine;
			nItem=1;
		}

		nRow++;		
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);		
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("country"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("exdate"), tmpStr);
		if (!tmpStr.IsEmpty())
			xls.SetCellText(5, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_DATE);

		rs.GetValue(_T("price"), tmpStr);				
		xls.SetCellText(6,nRow,tmpStr, FMT_DECIMAL);

		rs.GetValue(_T("qty"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7, nRow, tmpStr, FMT_DECIMAL);

		rs.GetValue(_T("Amount"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost +=cost;
		xls.SetCellText(8, nRow, tmpStr, FMT_DECIMAL);		
		rs.MoveNext();
	}
	ttlCost += grpCost;
	if(grpCost > 0)
	{
		nRow++;
		TranslateString(_T("Total Group"), tmpStr);		
		//xls.SetCellMergedColumns(0,nRow,7);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11, 0);
		tmpStr.Format(_T("%.2f"), grpCost);
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1, true, 11, 0);		
	}
	if(ttlCost > 0)
	{
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);		
		//xls.SetCellMergedColumns(0,nRow,7);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11, 0);
		tmpStr.Format(_T("%.2f"), ttlCost);
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1, true, 11, 0);		
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Baocaosudungthuoctheokhoavatheodoituong.xls"));
}

int CReportDrugMaterialUnpick::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, TRUE);
	}
	return 0;
}

int CReportDrugMaterialUnpick::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, FALSE);
	}
	return 0;
}

int CReportDrugMaterialUnpick::OnTypeListCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (!m_wndTypeList.GetCheck(i))
			m_wndTypeList.SetCheck(i, TRUE);
	}
	return 0;
}

int CReportDrugMaterialUnpick::OnTypeListUnCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
			m_wndTypeList.SetCheck(i, FALSE);
	}
	return 0;
}