#include "rptBaocaoquyettoanVTDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

static int _OnCheckAllFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnUnCheckAll();
} 

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanVTDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanVTDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanVTDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanVTDialog *pVw = (CrptBaocaoquyettoanVTDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanVTDialog *pVw = (CrptBaocaoquyettoanVTDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanVTDialog *pVw = (CrptBaocaoquyettoanVTDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnListFacDeleteItem();
} 
static int _OnAddrptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnAddrptBaocaoquyettoanVTDialog();
} 
static int _OnEditrptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnEditrptBaocaoquyettoanVTDialog();
} 
static int _OnDeleterptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnDeleterptBaocaoquyettoanVTDialog();
} 
static int _OnSaverptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnSaverptBaocaoquyettoanVTDialog();
} 
static int _OnCancelrptBaocaoquyettoanVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnCancelrptBaocaoquyettoanVTDialog();
}

static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnTypeListLoadData();
} 
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnTypeListDblClick();
} 
static void _OnTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnTypeListDeleteItem();
}

static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanVTDialog*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnObjectListDeleteItem();
}

static int _OnObjectCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnObjectCheckAll();
}

static int _OnObjectUnCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnObjectUnCheckAll();
}

static int _OnTypeCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnTypeCheckAll();
}

static int _OnTypeUnCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanVTDialog*)pWnd)->OnTypeUnCheckAll();
}

CrptBaocaoquyettoanVTDialog::CrptBaocaoquyettoanVTDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 460;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
CrptBaocaoquyettoanVTDialog::~CrptBaocaoquyettoanVTDialog(){
}
void CrptBaocaoquyettoanVTDialog::OnCreateComponents()
{
	/*m_wndTitle.Create(this, _T("\x42\xE1o \x63\xE1o quy\x1EBFt to\xE1n v\x1EADt t\x1B0"), 5, 5, 450, 55);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 60, 450, 480);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 85, 110, 110);
	m_wndFromDate.Create(this,115, 85, 235, 110); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 85, 320, 110);
	m_wndToDate.Create(this,325, 85, 445, 110); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 115, 110, 140);
	m_wndStock.Create(this,115, 115, 445, 140); 
	m_wndType.SetCheckBox(true);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 145, 110, 170);
	m_wndType.Create(this,115, 145, 445, 170); 
	m_wndObject.SetCheckBox(true);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 175, 110, 200);
	m_wndObject.Create(this,115, 175, 445, 200); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 140, 485, 240, 510);
	m_wndExport.Create(this, _T("&Export"), 245, 485, 345, 510);
	m_wndClose.Create(this, _T("&Close"), 350, 485, 450, 510);
	m_wndListFac.Create(this,10, 205, 445, 475);*/

	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 450, 565);
	m_wndTypeInfo.Create(this, _T("Type"), 10, 90, 445, 220);
	m_wndObjectInfo.Create(this, _T("Object"), 10, 225, 445, 365);
	m_wndTableInfo.Create(this, _T("Table"), 10, 370, 445, 560);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 320, 55);
	m_wndToDate.Create(this,325, 30, 445, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.Create(this,115, 60, 445, 85); 
	m_wndTypeList.Create(this,15, 115, 440, 215); 
	m_wndObjectList.Create(this,15, 250, 440, 360); 
	m_wndListFac.Create(this,15, 395, 440, 555); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 140, 570, 240, 595);
	m_wndExport.Create(this, _T("&Export"), 245, 570, 345, 595);
	m_wndClose.Create(this, _T("&Close"), 350, 570, 450, 595);

}
void CrptBaocaoquyettoanVTDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(128);

	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(254);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	/*m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);*/

	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndListFac.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndListFac.SetCheckBox(TRUE);
	m_wndListFac.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndTypeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndTypeList.SetCheckBox(TRUE);
	m_wndTypeList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.SetCheckBox(TRUE);
	m_wndObjectList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CrptBaocaoquyettoanVTDialog::OnSetWindowEvents()
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
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);
	//m_wndListFac.AddEvent(1, _T("Delete"), _OnListFacDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndListFac.AddEvent(1, _T("Check All"), _OnCheckAllFnc);
	m_wndListFac.AddEvent(2, _T("UnCheck All"), _OnUnCheckAllFnc);

	m_wndTypeList.SetEvent(WE_SELCHANGE, _OnTypeListSelectChangeFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);

	m_wndTypeList.AddEvent(1, _T("Check All"), _OnTypeCheckAllFnc);
	m_wndTypeList.AddEvent(2, _T("UnCheck All"), _OnTypeUnCheckAllFnc);

	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectUnCheckAllFnc);


	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;

	szSQL.Format(_T("SELECT hsd_id AS groupid FROM hms_surgery_drugtype ") \
		         _T("WHERE hsd_type='M' ORDER BY hsd_index"));

	rs.ExecSQL(szSQL);

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), tmpStr);

		if (!m_szGroups.IsEmpty())
			m_szGroups += _T(",");

		m_szGroups.AppendFormat(_T("'%s'"), tmpStr);
		rs.MoveNext();
	}

	m_szFromDate =  pMF->GetSysDate()+ "00:00";	
	m_szToDate = pMF->GetSysDate() + "23:59";

	/*m_wndTitle.ModifyStyle(0, ES_CENTER);
	SetWindowFont(&m_wndTitle, GetFaceName(), GetFaceSize() + 4, true);	
	m_wndTitle.SetTextColor(RGB(0, 0, 250));*/

	OnObjectListLoadData();
	OnTypeListLoadData();
	OnListFacLoadData();

	SetMode(VM_EDIT);

	OnCheckAll();
	OnObjectCheckAll();
	OnTypeCheckAll();

}
void CrptBaocaoquyettoanVTDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	//DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
}
void CrptBaocaoquyettoanVTDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptBaocaoquyettoanVTDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptBaocaoquyettoanVTDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szObjectKey.Empty();

}
int CrptBaocaoquyettoanVTDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, 2, 3, -1); 
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
/*void CrptBaocaoquyettoanVTDialog::OnFromDateChange(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnFromDateSetfocus(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnFromDateKillfocus(){
	
} */
int CrptBaocaoquyettoanVTDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptBaocaoquyettoanVTDialog::OnToDateChange(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnToDateSetfocus(){
	
} */
/*void CrptBaocaoquyettoanVTDialog::OnToDateKillfocus(){
	
} */
int CrptBaocaoquyettoanVTDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptBaocaoquyettoanVTDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnStockSelendok(){
	
}
/*void CrptBaocaoquyettoanVTDialog::OnStockSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanVTDialog::OnStockKillfocus(){
	
}*/
long CrptBaocaoquyettoanVTDialog::OnStockLoadData()
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
	//szWhere.AppendFormat(_T(" and msl_storage_id in(10,11) "));
	
	m_wndStock.DeleteAllItems();
	int nCount = 0;

	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name ") \
		         _T("FROM m_storagelist WHERE 1=1 AND msl_org_id IN('GL','WM','PM') %s ") \
				 _T("ORDER BY msl_storage_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptBaocaoquyettoanVTDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanVTDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnTypeSelendok(){
	 
}
/*void CrptBaocaoquyettoanVTDialog::OnTypeSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanVTDialog::OnTypeKillfocus(){
	
}*/
long CrptBaocaoquyettoanVTDialog::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		//szWhere.Format(_T(" and hfg_id='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id,1, 1)='A' and hfg_id in('A3000','A9000') %s ORDER BY hfg_id "), szWhere);

	szSQL.Format(_T(" select distinct mpt_product_type_id as id,") \
				_T("        mpt_name as name") \
				_T(" from m_storageline") \
				_T(" left join m_product on(msl_product_id=mp_product_id)") \
				_T(" left join m_product_type on(mpt_product_type_id=mp_producttype)") \
				_T(" where msl_storage_id in(%s) and mp_isactive='Y'") \
				_T("       and mpt_product_type_id in(%s)") \
				_T(" order by mpt_product_type_id"),
				pMF->m_szStorages, m_szGroups);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CrptBaocaoquyettoanVTDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanVTDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanVTDialog::OnObjectSelendok(){
	 
}
/*void CrptBaocaoquyettoanVTDialog::OnObjectSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanVTDialog::OnObjectKillfocus(){
	
}*/
long CrptBaocaoquyettoanVTDialog::OnObjectLoadData(){
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
/*void CrptBaocaoquyettoanVTDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanVTDialog::OnPrintPreviewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrintBaocaoquyettoansudungthuoctheodoituong(true);
} 
void CrptBaocaoquyettoanVTDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnExportBaocaoquyettoansudungthuoctheodoituong();
} 
void CrptBaocaoquyettoanVTDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}

void CrptBaocaoquyettoanVTDialog::OnTypeListDblClick(){
	
} 
void CrptBaocaoquyettoanVTDialog::OnTypeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanVTDialog::OnTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaocaoquyettoanVTDialog::OnTypeListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTypeList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" select distinct mpt_product_type_id as id,") \
				_T("        mpt_name as name") \
				_T(" from m_storageline") \
				_T(" left join m_product on(msl_product_id=mp_product_id)") \
				_T(" left join m_product_type on(mpt_product_type_id=mp_producttype)") \
				_T(" where msl_storage_id in(%s) and msl_isactive='Y'") \
				_T("       and mpt_product_type_id in(%s)") \
				_T(" order by mpt_product_type_id"),
				pMF->m_szStorages, m_szGroups);

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

void CrptBaocaoquyettoanVTDialog::OnObjectListDblClick(){
	
} 
void CrptBaocaoquyettoanVTDialog::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanVTDialog::OnObjectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaocaoquyettoanVTDialog::OnObjectListLoadData()
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

void CrptBaocaoquyettoanVTDialog::OnListFacDblClick(){
	
} 
void CrptBaocaoquyettoanVTDialog::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanVTDialog::OnListFacDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CrptBaocaoquyettoanVTDialog::OnCheckAll()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, true);
	}
	 return 0;
} 
int CrptBaocaoquyettoanVTDialog::OnUnCheckAll()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, false);
	}
	 return 0;
}

int CrptBaocaoquyettoanVTDialog::OnObjectCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, TRUE);
	}
	return 0;
}

int CrptBaocaoquyettoanVTDialog::OnObjectUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, FALSE);
	}
	return 0;
}

int CrptBaocaoquyettoanVTDialog::OnTypeCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (!m_wndTypeList.GetCheck(i))
			m_wndTypeList.SetCheck(i, TRUE);
	}
	return 0;
}

int CrptBaocaoquyettoanVTDialog::OnTypeUnCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
			m_wndTypeList.SetCheck(i, FALSE);
	}
	return 0;
}

long CrptBaocaoquyettoanVTDialog::OnListFacLoadData(){
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
	return nCount;
}
int CrptBaocaoquyettoanVTDialog::OnAddrptBaocaoquyettoanVTDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptBaocaoquyettoanVTDialog::OnEditrptBaocaoquyettoanVTDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptBaocaoquyettoanVTDialog::OnDeleterptBaocaoquyettoanVTDialog(){
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
 		OnCancelrptBaocaoquyettoanVTDialog(); 
 	}
	return 0;
}
int CrptBaocaoquyettoanVTDialog::OnSaverptBaocaoquyettoanVTDialog(){
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
 		//OnrptBaocaoquyettoanVTDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptBaocaoquyettoanVTDialog::OnCancelrptBaocaoquyettoanVTDialog(){
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
int CrptBaocaoquyettoanVTDialog::OnrptBaocaoquyettoanVTDialogListLoadData(){
	return 0;
}
void CrptBaocaoquyettoanVTDialog::OnPrintBaocaoquyettoansudungthuoctheodoituong(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL, tmpStr2, m_szFacList, szWhere;
	CString szObject, szGroups, szObjectName, szType, szTypeName, szTableName;
	CString szStocks, szStockNames;
	szType.Empty();
	szTypeName.Empty();

	bool bNoCheckTable = false;
	bool bCheckMaterial = false;
	bool bCheckObject = false;

	int nCount = 0;

	if (!rpt.Init(_T("Reports/HMS/PTTT/QUYETTOANSUDUNGTHUOC-VTYT.RPT")))
	{
		/*CString MsgReport;
		MsgReport.Format(_T("Mau bao cao [%s] chua co. Lien he voi Adminstrator"),  _T("QUYETTOANSUDUNGTHUOC-VTYT.RPT"));
		AfxMessageBox(MsgReport);*/
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

	m_szStockName = szStockNames;
	
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
		
		 
	 for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	 {
		 if (m_wndTypeList.GetCheck(i))
		 {
			 //m_wndType.SetCurSel(i);
			 if(!szType.IsEmpty())
			 {
				szType += _T(",");
				szTypeName +=_T(", ");

			 }
			 szType.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));				
			 szTypeName.AppendFormat(_T("%s"), m_wndTypeList.GetItemText(i, 1));
		}		
	 }
	

	 if (!szType.IsEmpty())	
		szWhere.AppendFormat(_T(" and mp_producttype in(%s) "), szType);	
	else
		szTypeName.Format(_T("T\x1EA5t \x63\x1EA3 nh\xF3m v\x1EADt t\x1B0"));

	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if(!szGroups.IsEmpty())
				szGroups += _T(",");						
			szGroups.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 0));
					
			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
			nCount++;
		}
		else
			bNoCheckTable = true;
	}
	
	if (!szGroups.IsEmpty()) 
		szWhere.AppendFormat(_T(" and ho_opera_table in (%s)"), szGroups);

	if (bNoCheckTable || szGroups.IsEmpty())
	{
		szTableName = m_szFacList;
	}
	else
	{
		TranslateString(_T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x62\xE0n m\x1ED5"), tmpStr);
		szTableName =tmpStr;
	}

	if (!szObjectName.IsEmpty() && !bCheckObject)
		szObjectName.Format(_T("T\x1EA5t \x63\x1EA3 \x111\x1ED1i t\x1B0\x1EE3ng"));

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
	CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));

	tmpStr.Format(_T("\x42\xE1o \x63\xE1o quy\x1EBFt to\xE1n s\x1EED \x64\x1EE5ng v\x1EADt t\x1B0"));
	StringUpper(tmpStr, tmpStr2);
	rpt.GetReportHeader()->SetValue(_T("ReportName"), tmpStr2);

	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_szStockName);
	rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);
	rpt.GetReportHeader()->SetValue(_T("DrugType"), szTypeName);
	rpt.GetReportHeader()->SetValue(_T("TableName"), szTableName);
	
	tmpStr.Empty();
	tmpStr2.Empty();

	//Page Header
	//Report Detail
			/*szSQL.Format(_T(" SELECT pname ,Age ,docno, deptid, cardno, sum(amount) as amount ") \
			_T(" FROM (") \
			_T("	SELECT (SELECT sd_name FROM sys_dept where sd_id=ho_deptid) as deptid,") \
			_T("	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	ho_docno as docno,") \
			_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, 	") \
			_T(" 	ho_cardno as cardNo,sum(hpol_issueqty*hpol_unitprice) as amount") \
			_T(" FROM hms_patient") \
			_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
			_T("  LEFT JOIN hms_pharma_xorder ON(hpo_reforderid=ho_idx)") \
			_T("  LEFT JOIN hms_pharma_xorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T("  LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T("  LEFT JOIN m_product_view ON(pmsi_itemid=product_id)") \
			_T(" WHERE hpo_stockid IN(%s) and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T(" and ho_status IN('A','I','D') and substr(product_typeid, 1, 2) in('A3','A9','A4','A5','A7') %s") \
			_T(" GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ho_deptid, ho_cardno, product_typeid") \
			_T(" ) tblMain ") \
			_T(" GROUP BY pname ,Age ,docno, deptid, cardno") \
			_T(" ORDER BY deptid"), szStocks, m_szFromDate, m_szToDate, szWhere );*/

	   /*szSQL.Format(_T(" SELECT pname,") \
					_T("        Age,") \
					_T("        docno,") \
					_T("        deptid,") \
					_T("        cardno,") \
					_T("        sum(amount) as amount") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
					_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T("          ho_docno as docno,") \
					_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T("          ho_cardno as cardNo,") \
					_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
					_T("  FROM hms_patient") \
					_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
					_T("  LEFT JOIN hms_pharmaorder ON(hpo_reforder_id=ho_idx)") \
					_T("  LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
					_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
					_T("  WHERE hpo_storage_id in(%s)") \
					_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T("        and ho_status in('A','I','D') and substr(mp_producttype,1,2) in('A3','A9','A4','A5','A7') %s") \
					_T(" GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ho_deptid, ho_cardno, mp_producttype") \
					_T(" ) tblMain") \
					_T(" GROUP BY pname ,Age ,docno, deptid, cardno") \
					_T(" ORDER BY deptid"),
					szStocks, m_szFromDate, m_szToDate, szWhere);*/

	szSQL.Format(_T(" SELECT pname,") \
				_T("        age,") \
				_T("        docno,") \
				_T("        deptid,") \
				_T("        cardno,") \
				_T("        sum(amount) as amount") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
				_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("          ho_docno as docno,") \
				_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("          hd_cardno as cardno,") \
				_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
				_T("  LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and ho_status in('A','I','D','T') and mp_producttype in(%s) %s") \
				_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ho_deptid, hd_cardno, mp_producttype") \
				_T("  UNION ALL") \
				_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
				_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("          ho_docno as docno,") \
				_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("          hd_cardno as cardno,") \
				_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
				_T("  LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and ho_status in('A','I','D','T') and mp_producttype in(%s) %s") \
				_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ho_deptid, hd_cardno, mp_producttype") \
				_T(" ) tblMain") \
				_T(" GROUP BY pname, age, docno, deptid, cardno") \
				_T(" ORDER BY deptid"),
				szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere,
				szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere);
			
			CReportSection* rptDetail;
			CString szOldLine, szNewLine, szAmount;
			CRecord rs(&pMF->m_db);
			long double grpCost=0.0;
			long double ttlCost=0.0;
			double cost = 0;
			int nItem = 1;
			_fmsg(_T("%s"), szSQL);
			rs.ExecSQL(szSQL);

			if(rs.IsEOF()){
				ShowMessageBox(_T("No Data"), MB_OK);
				return ;
			}

					
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("deptid"), szNewLine);
				if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
					CString szField;
					if(grpCost > 0)
					{
						TranslateString(_T("Total Group"), szAmount);
						rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
						rptDetail->SetValue(_T("TotalGroup"), szAmount);						
						FormatCurrency(grpCost, tmpStr);
						rptDetail->SetValue(_T("s6"), tmpStr);
						ttlCost += grpCost;						
						grpCost = 0;								
					}

					rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));					
					rptDetail->SetValue(_T("GroupName"), szNewLine);
					szOldLine = szNewLine;
					nItem=1;
				}

				rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), nItem++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rs.GetValue(_T("id"), tmpStr);				
				rs.GetValue(_T("pname"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rs.GetValue(_T("docno"), tmpStr);
				rptDetail->SetValue(_T("3"), tmpStr);
				rs.GetValue(_T("age"), tmpStr);				
				rptDetail->SetValue(_T("4"), tmpStr);

				rs.GetValue(_T("cardno"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rs.GetValue(_T("amount"), cost);	
				grpCost += cost;
				FormatCurrency(cost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				rs.MoveNext();
			}
						
			ttlCost += grpCost;
			
			if(grpCost > 0){	
				TranslateString(_T("Total Group"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));	
				rptDetail->SetValue(_T("TotalGroup"), szAmount);
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);			
			}
			if(ttlCost > 0){				
				TranslateString(_T("Total Amount"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);
				FormatCurrency(ttlCost, tmpStr);
				rptDetail->SetValue(_T("s6"), tmpStr);
				ttlCost += grpCost;	
			}
			
			CString szTime;
			szTime = pMF->GetSysDateTime();
			szSysDate = pMF->GetSysDate(); 
			szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szTime.Right(8),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
			rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		//UpdateData(false);
		
			EndWaitCursor();
		rpt.PrintPreview();
			
}

void CrptBaocaoquyettoanVTDialog::OnExportBaocaoquyettoansudungthuoctheodoituong()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr,szType,m_szFacList,tmpStr2, szDate, szSysDate, szSQL,szName,szAmount,szFromDate,szToDate, szWhere;
	CString szObject, szGroups;
	CString szStocks, szStockNames;
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
	
	 m_szStockName = szStockNames;

	 for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	 {
		 if (m_wndObjectList.GetCheck(i))
		 {
			//m_wndObject.SetCurSel(i);
		 	if(!szObject.IsEmpty())
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
		 }
	 }
	

	if(!szType.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and mp_producttype in(%s)"), szType);
	}			
	
	bool bCheckOperationTable = false;
		
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if(!szGroups.IsEmpty())
				szGroups += _T(",");						
			szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
					
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
		
		if (!szGroups.IsEmpty())
			szWhere.AppendFormat(_T(" and ho_opera_table in (%s)"), szGroups);

		if (!bCheckOperationTable && !szGroups.IsEmpty())
		{
			//TranslateString(_T("All Department"), m_szFacList);
			//m_szFacList = _T("All Department");
			m_szFacList = _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x62\xE0n m\x1ED5");
		}

			
			//Page Header
			//Report Detail
			
			/*szSQL.Format(_T(" SELECT pname ,Age ,docno, deptid, cardno, sum(amount) as amount ") \
			_T(" FROM (") \
			_T("	SELECT (SELECT sd_name FROM sys_dept where sd_id=ho_deptid) as deptid,") \
			_T("	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T(" 	ho_docno as docno,") \
			_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
			_T(" 	ho_cardno as cardNo,sum(hpol_issueqty*hpol_unitprice) as amount") \
			_T(" FROM hms_patient") \
			_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
			_T("  LEFT JOIN hms_pharma_xorder ON(hpo_reforderid=ho_idx)") \
			_T("  LEFT JOIN hms_pharma_xorder_line ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T("  LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T("  LEFT JOIN m_product_view ON(pmsi_itemid=product_id)") \
			_T(" WHERE hpo_stockid IN(%s) and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
			_T(" and ho_status IN('A','I','D') and substr(product_typeid, 1, 2) in('A3','A9','A4','A5','A7') %s") \
			_T(" GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ho_deptid, ho_cardno, product_typeid") \
			_T(" ) tblMain ") \
			_T(" GROUP BY pname ,Age ,docno, deptid, cardno") \
			_T(" ORDER BY deptid"), szStocks, m_szFromDate, m_szToDate, szWhere );*/

		/*szSQL.Format(_T(" SELECT pname,") \
					_T("        Age,") \
					_T("        docno,") \
					_T("        deptid,") \
					_T("        cardno,") \
					_T("        rank,") \
					_T("        workplace,") \
					_T("        recordno,") \
					_T("        sum(amount) as amount") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
					_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T("          ho_docno as docno,") \
					_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T("          (select distinct ss_desc from sys_sel where ss_id='hms_rank' and ss_code=cast(hp_rank as nvarchar2(15))) as rank,") \
					_T("          hp_workplace as workplace,") \
					_T("          hcr_recordno as recordno,") \
					_T("          ho_cardno as cardNo,") \
					_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
					_T("  FROM hms_patient") \
					_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
					_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
					_T("  LEFT JOIN hms_pharmaorder ON(hpo_reforder_id=ho_idx)") \
					_T("  LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
					_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
					_T("  WHERE hpo_storage_id in(%s)") \
					_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T("        and ho_status in('A','I','D') and substr(mp_producttype,1,2) in('A3','A9','A4','A5','A7') %s") \
					_T(" GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate,") \
					_T("          ho_docno, ho_deptid, ho_cardno, mp_producttype, hp_rank, hp_workplace, hcr_recordno") \
					_T(" ) tblMain") \
					_T(" GROUP BY pname, Age, docno, deptid, cardno, rank, workplace, recordno") \
					_T(" ORDER BY deptid, pname"),
					szStocks, m_szFromDate, m_szToDate, szWhere);*/

		szSQL.Format(_T(" SELECT pname,") \
					_T("        age,") \
					_T("        docno,") \
					_T("        deptid,") \
					_T("        cardno,") \
					_T("        rank,") \
					_T("        workplace,") \
					_T("        recordno,") \
					_T("        sum(amount) as amount") \
					_T(" FROM") \
					_T(" (") \
					_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
					_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T("          ho_docno as docno,") \
					_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T("          (select distinct ss_desc from sys_sel where ss_id='hms_rank' and ss_code=cast(hp_rank as nvarchar2(15))) as rank,") \
					_T("          hp_workplace as workplace,") \
					_T("          hcr_recordno as recordno,") \
					_T("          hd_cardno as cardno,") \
					_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
					_T("  FROM hms_patient") \
					_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
					_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
					_T("  LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
					_T("  LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
					_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
					_T("  WHERE hpo_storage_id in(%s)") \
					_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T("        and ho_status in('A','I','D','T') and mp_producttype in(%s) %s") \
					_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate,") \
					_T("          ho_docno, ho_deptid, hd_cardno, mp_producttype, hp_rank, hp_workplace, hcr_recordno") \
					_T("  UNION ALL") \
					_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
					_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T("          ho_docno as docno,") \
					_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T("          (select distinct ss_desc from sys_sel where ss_id='hms_rank' and ss_code=cast(hp_rank as nvarchar2(15))) as rank,") \
					_T("          hp_workplace as workplace,") \
					_T("          hcr_recordno as recordno,") \
					_T("          hd_cardno as cardno,") \
					_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
					_T("  FROM hms_patient") \
					_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
					_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno )") \
					_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
					_T("  LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
					_T("  LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
					_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
					_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
					_T("  WHERE hpo_storage_id in(%s)") \
					_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
					_T("        and ho_status in('A','I','D','T') and mp_producttype in(%s) %s") \
					_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate,") \
					_T("           ho_docno, ho_deptid, hd_cardno, mp_producttype, hp_rank, hp_workplace, hcr_recordno") \
					_T(" ) tblMain") \
					_T(" GROUP BY pname, age, docno, deptid, cardno, rank, workplace, recordno") \
					_T(" ORDER BY deptid, pname"),
					szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere,
					szStocks, m_szFromDate, m_szToDate, m_szGroups, szWhere);
	

			//CReportSection* rptDetail;
			CString szOldLine, szNewLine;
			CRecord rs(&pMF->m_db);
			long double grpCost, grpCost1, grpCost2;
			long double ttlCost, ttlCost1, ttlCost2;
			double cost = 0;
			long qty=0;
			int nItem = 1;
			_fmsg(_T("%s"), szSQL);
			grpCost = grpCost1 = grpCost2 = 0;
			ttlCost = ttlCost1 = ttlCost2 = 0;

			rs.ExecSQL(szSQL);

			if(rs.IsEOF())
			{
				ShowMessageBox(_T("No Data"), MB_OK);
				return ;
			}

					
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 22);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 21);
	xls.SetColumnWidth(5, 11);
	xls.SetColumnWidth(6, 17);
	xls.SetColumnWidth(7, 11);
	xls.SetColumnWidth(8, 15);

	//xls.SetCellMergedColumns(0,3,9);
	//xls.SetCellMergedColumns(0,4,9);
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O QUY\x1EBET TO\xC1N S\x1EEC \x44\x1EE4NG V\x1EACT T\x1AF Y T\x1EBE"),FMT_TEXT,true,14,0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,12,0);

	

	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	xls.SetCellText(0, 7,_T("T\x1EEB kho: ") + m_szStockName);
	xls.SetCellText(0, 8, _T("\x42\xE0n m\x1ED5: ") + m_szFacList);

	int nRow = 10;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(1, nRow, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(3, nRow, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(4, nRow, _T("Th\x1EBB \x42HYT"), FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Rank"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Work Unit"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	TranslateString(_T("Admission No"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellText(8, nRow, _T("T\x1ED5ng ti\x1EC1n"), FMT_TEXT | FMT_CENTER, true, 11);	
	
			
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if(grpCost > 0)
			{			
				CString szField, szAmount;
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				//xls.SetCellMergedColumns(0,nRow,5);
				xls.SetCellText(0, nRow, szAmount, FMT_TEXT, true, 11, 0);
				tmpStr.Format(_T("%.2lf"), grpCost);
				xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1, true, 11, 0);	
				ttlCost += grpCost;
				grpCost = 0;								
				nItem=1;
			}
			nRow ++;
			CString szField, szAmount;			
			tmpStr.Format(_T("%s"), szNewLine);
			//xls.SetCellMergedColumns(0,nRow,5);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11, 0);
			szOldLine = szNewLine;
			nItem=1;
		}

		nRow++;
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("workplace"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT);

		/*rs.GetValue(_T("Drug"), cost);		
		tmpStr.Format(_T("%.2f"), cost);*/

		rs.GetValue(_T("amount"), cost);		
		tmpStr.Format(_T("%.2f"), cost);
		grpCost+=cost;
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1);		
		rs.MoveNext();
	}
	ttlCost += grpCost;

	if(grpCost > 0)
	{
		nRow++;
		TranslateString(_T("Total Group"), tmpStr);		
		//xls.SetCellMergedColumns(0,nRow,7);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,11,0);	
		tmpStr.Format(_T("%.2lf"), grpCost);
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1,true,11,0);
	}
	if(ttlCost > 0)
	{
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);		
		//xls.SetCellMergedColumns(0,nRow,7);
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,11,0);	
		tmpStr.Format(_T("%.2lf"), ttlCost);
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1,true,11,0);
	}

	//UpdateData(false);
	EndWaitCursor();
	xls.Save(_T("Exports\\Baocaoquyettoansudungvattu.xls"));
}

