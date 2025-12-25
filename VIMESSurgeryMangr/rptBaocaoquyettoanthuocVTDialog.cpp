#include "rptBaocaoquyettoanthuocVTDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaocaoquyettoanthuocVTDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanthuocVTDialog *pVw = (CrptBaocaoquyettoanthuocVTDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanthuocVTDialog *pVw = (CrptBaocaoquyettoanthuocVTDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptBaocaoquyettoanthuocVTDialog *pVw = (CrptBaocaoquyettoanthuocVTDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnTypeListLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnTypeListLoadData();
} 
static void _OnTypeListDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnTypeListDblClick();
} 
static void _OnTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnTypeListDeleteItem();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnListFacDeleteItem();
} 
static int _OnAddrptBaocaoquyettoanthuocVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnAddrptBaocaoquyettoanthuocVTDialog();
} 
static int _OnEditrptBaocaoquyettoanthuocVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnEditrptBaocaoquyettoanthuocVTDialog();
} 
static int _OnDeleterptBaocaoquyettoanthuocVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnDeleterptBaocaoquyettoanthuocVTDialog();
} 
static int _OnSaverptBaocaoquyettoanthuocVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnSaverptBaocaoquyettoanthuocVTDialog();
} 
static int _OnCancelrptBaocaoquyettoanthuocVTDialogFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnCancelrptBaocaoquyettoanthuocVTDialog();
}

static int _OnCheckAllFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	 return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnUnCheckAll();
}

static int _OnObjectCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnObjectCheckAll();
}

static int _OnObjectUnCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnObjectUnCheckAll();
}

static int _OnTypeCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnTypeCheckAll();
}

static int _OnTypeUnCheckAllFnc(CWnd *pWnd){
	return ((CrptBaocaoquyettoanthuocVTDialog*)pWnd)->OnTypeUnCheckAll();
}

CrptBaocaoquyettoanthuocVTDialog::CrptBaocaoquyettoanthuocVTDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 450;
	m_nDlgHeight = 600;
	SetDefaultValues();
}
CrptBaocaoquyettoanthuocVTDialog::~CrptBaocaoquyettoanthuocVTDialog(){
}
void CrptBaocaoquyettoanthuocVTDialog::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 440, 560);
	m_wndObjectInfo.Create(this, _T("Object"), 10, 230, 435, 365);
	m_wndDrugTypeInfo.Create(this, _T("Drug Type"), 10, 90, 435, 225);
	m_wndTableInfo.Create(this, _T("Table"), 10, 370, 435, 555);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 315, 55);
	m_wndToDate.Create(this,320, 30, 435, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.Create(this,115, 60, 435, 85); 
	m_wndPrint.Create(this, _T("&Print"), 130, 565, 230, 590);
	m_wndExport.Create(this, _T("&Export"), 235, 565, 335, 590);
	m_wndClose.Create(this, _T("&Close"), 340, 565, 440, 590);
	m_wndTypeList.Create(this,15, 115, 430, 220); 
	m_wndObjectList.Create(this,15, 255, 430, 360); 
	m_wndListFac.Create(this,15, 395, 430, 550); 

}
void CrptBaocaoquyettoanthuocVTDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(128);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 70);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndStock.SetCheckBox(TRUE);


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
	m_wndListFac.SetCheckBox(TRUE);
	m_wndListFac.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CrptBaocaoquyettoanthuocVTDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndTypeList.SetEvent(WE_SELCHANGE, _OnTypeListSelectChangeFnc);
	m_wndTypeList.SetEvent(WE_LOADDATA, _OnTypeListLoadDataFnc);
	m_wndTypeList.SetEvent(WE_DBLCLICK, _OnTypeListDblClickFnc);

	m_wndTypeList.AddEvent(1, _T("Check All"), _OnTypeCheckAllFnc);
	m_wndTypeList.AddEvent(2, _T("UnCheck All"), _OnTypeUnCheckAllFnc);

	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);

	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectUnCheckAllFnc);

	m_wndListFac.AddEvent(1, _T("Check All"), _OnCheckAllFnc);
	m_wndListFac.AddEvent(2, _T("UnCheck All"), _OnUnCheckAllFnc);

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

	m_szFromDate = pMF->GetSysDate()+ "00:00";	
	m_szToDate = pMF->GetSysDate() + "23:59";

	OnObjectListLoadData();
	OnTypeListLoadData();
	OnListFacLoadData();

	SetMode(VM_EDIT);

	OnCheckAll();
	OnObjectCheckAll();
	OnTypeCheckAll();

}
void CrptBaocaoquyettoanthuocVTDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CrptBaocaoquyettoanthuocVTDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptBaocaoquyettoanthuocVTDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptBaocaoquyettoanthuocVTDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();

}
int CrptBaocaoquyettoanthuocVTDialog::SetMode(int nMode){
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
/*void CrptBaocaoquyettoanthuocVTDialog::OnFromDateChange(){
	
} */
/*void CrptBaocaoquyettoanthuocVTDialog::OnFromDateSetfocus(){
	
} */
/*void CrptBaocaoquyettoanthuocVTDialog::OnFromDateKillfocus(){
	
} */
int CrptBaocaoquyettoanthuocVTDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptBaocaoquyettoanthuocVTDialog::OnToDateChange(){
	
} */
/*void CrptBaocaoquyettoanthuocVTDialog::OnToDateSetfocus(){
	
} */
/*void CrptBaocaoquyettoanthuocVTDialog::OnToDateKillfocus(){
	
} */
int CrptBaocaoquyettoanthuocVTDialog::OnToDateCheckValue(){
	return 0;
} 
void CrptBaocaoquyettoanthuocVTDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaocaoquyettoanthuocVTDialog::OnStockSelendok(){
	 
}
/*void CrptBaocaoquyettoanthuocVTDialog::OnStockSetfocus(){
	
}*/
/*void CrptBaocaoquyettoanthuocVTDialog::OnStockKillfocus(){
	
}*/
long CrptBaocaoquyettoanthuocVTDialog::OnStockLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0)
	{
		szWhere.Format(_T(" AND msl_storage_id=%d"), ToInt(m_szStockKey));
	}

	szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStorages);

	m_wndStock.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name ") \
		         _T("FROM m_storagelist WHERE 1=1 AND msl_org_id IN('GL','WM','PM') %s ") \
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
/*void CrptBaocaoquyettoanthuocVTDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptBaocaoquyettoanthuocVTDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;

	CString szSQL, szWhere;
	CString tmpStr, szDate, szSysDate, tmpStr2, szFacList;
	CString szObject, szGroups, szObjectName, szType, szTypeName, szTableName;
	CString szStocks, szStockNames;

	szType.Empty();
	szTypeName.Empty();

	int nCount = 0;
	bool bNoCheckTable = false;
	bool bCheckDrugType = false;
	bool bCheckObject = false;


	if (!rpt.Init(_T("Reports/HMS/PTTT/QUYETTOANSUDUNGTHUOC-VTYTBN.RPT")))
	{
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
	
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	 {
		 if (m_wndObjectList.GetCheck(i))
		 {
		 	if (!szObject.IsEmpty())
				szObject += _T(",");						
			szObject.AppendFormat(_T("%s"), m_wndObjectList.GetItemText(i, 0));
			
			if (!szObjectName.IsEmpty())
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
		szWhere.Format(_T(" AND ho_object in(%s) "), szObject);
	 }
		
	 for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	 {
		 if (m_wndTypeList.GetCheck(i))
		 {
			 if (!szType.IsEmpty())
			 {
				szType += _T(",");
				szTypeName +=_T(", ");

			 }
			 szType.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));				
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
		szTypeName.Format(_T("T\x1EA5t \x63\x1EA3 nh\xF3m thu\x1ED1\x63"));
			
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if(!szGroups.IsEmpty())
				szGroups += _T(",");						
			szGroups.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i, 0));
					
			if (!szFacList.IsEmpty())
				szFacList+= _T(", ");
			szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
		}
		else
			bNoCheckTable =true;
	}


	if (!szGroups.IsEmpty()) 
		szWhere.AppendFormat(_T(" and ho_opera_table in (%s)"), szGroups);
	
	if (bNoCheckTable || szGroups.IsEmpty())
		szTableName = szFacList;
	else
	{
		TranslateString(_T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x62\xE0n m\x1ED5"), tmpStr);
		szTableName = tmpStr;
	}
	

	if (!szObjectName.IsEmpty() && !bCheckObject) 
		szObjectName.Format(_T("T\x1EA5t \x63\x1EA3 \x111\x1ED1i t\x1B0\x1EE3ng"));

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	//tmpStr.Format(_T("\x42\xE1o \x63\xE1o quy\x1EBFt to\xE1n s\x1EED \x64\x1EE5ng thu\x1ED1\x63"));
	//rpt.GetReportHeader()->SetValue(_T("ReportName"),tmpStr);
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")),
		          CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
	              CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("StockName"), szStockNames);
	rpt.GetReportHeader()->SetValue(_T("Object"), szObjectName);
	rpt.GetReportHeader()->SetValue(_T("DrugType"), szTypeName);
	rpt.GetReportHeader()->SetValue(_T("TableName"), szTableName);
	

	szSQL.Format(_T(" SELECT pname,") \
				_T("        age,") \
				_T("        docno,") \
				_T("        deptid,") \
				_T("        cardno,") \
				_T("        sum(drugamt)  as drugamt,") \
				_T("        sum(materialamt) as materialamt,") \
				_T("        sum(amount) as amount") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
				_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("          ho_docno as docno,") \
				_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("          case when ho_object<>7 then ho_cardno else null end as cardno,") \
				_T("          case when mp_producttype not in(%s)") \
				_T("          then sum(hpol_qtyissue*hpol_unitprice) else 0 end as drugamt,") \
				_T("          case when mp_producttype in(%s)") \
				_T("          then sum(hpol_qtyissue*hpol_unitprice) else 0 end as materialamt,") \
				_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
				_T("  LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE ho_pdeptid='%s' and hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and ho_status in('A','I','D','T') %s") \
				_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ho_deptid, ho_object, ho_cardno, mp_producttype") \
				_T("  UNION ALL") \
				_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
				_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("          ho_docno as docno,") \
				_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("          case when ho_object<>7 then ho_cardno else null end as cardno,") \
				_T("          case when mp_producttype not in(%s)") \
				_T("          then sum(hpol_qtyissue*hpol_unitprice) else 0 end as drugamt,") \
				_T("          case when mp_producttype in(%s)") \
				_T("          then sum(hpol_qtyissue*hpol_unitprice) else 0 end as materialamt,") \
				_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
				_T("  LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE ho_pdeptid='%s' and hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and ho_status in('A','I','D','T') %s") \
				_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ") \
				_T("           ho_deptid, ho_object, ho_cardno, mp_producttype, hp_rank, hp_workplace") \
				_T(" ) tblMain") \
				_T(" GROUP BY pname, age, docno, deptid, cardno") \
				_T(" ORDER BY deptid"),
				m_szGroups, m_szGroups, pMF->m_szDepartment, szStocks, m_szFromDate, m_szToDate, szWhere,
				m_szGroups, m_szGroups, pMF->m_szDepartment, szStocks, m_szFromDate, m_szToDate, szWhere
				);

	//_msg(_T("%s"), szSQL);
			
		CReportSection* rptDetail;
		CString szOldLine, szNewLine, szAmount;
		CRecord rs(&pMF->m_db);
		long double grpCost[8];
		long double ttlCost[8];
		double cost = 0;
		int nItem = 1;

		_fmsg(_T("%s"), szSQL);

		rs.ExecSQL(szSQL);

		if (rs.IsEOF())
		{
			ShowMessageBox(_T("No Data"), MB_OK);
			return;
		}

		for (int i = 0; i < 8; i++)
		{
			grpCost[i] = 0;
			ttlCost[i] = 0;
		}
				
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("deptid"), szNewLine);
			if (szNewLine != szOldLine && !szNewLine.IsEmpty())
			{
				CString szField;
				if (grpCost[7] > 0)
				{
					TranslateString(_T("Total Group"), szAmount);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
					rptDetail->SetValue(_T("TotalGroup"), szAmount);

					for (int i = 5; i < 8; i++)
					{
						FormatCurrency(grpCost[i], tmpStr);
						tmpStr2.Format(_T("s%d"), i + 1);
						rptDetail->SetValue(tmpStr2, tmpStr);
						ttlCost[i] += grpCost[i];					
						grpCost[i] = 0;
					}
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

			rs.GetValue(_T("drugamt"), cost);	
			grpCost[5] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);

			rs.GetValue(_T("materialamt"), cost);	
			grpCost[6] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);

			rs.GetValue(_T("amount"), cost);	
			grpCost[7] += cost;
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);

			rs.MoveNext();
		}
					
		
		if (grpCost[7] > 0)
		{	
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));	
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			for (int i = 5; i < 8; i++)
			{
				FormatCurrency(grpCost[i], tmpStr);
				tmpStr2.Format(_T("s%d"), i + 1);
				rptDetail->SetValue(tmpStr2, tmpStr);
				ttlCost[i] += grpCost[i];					
				grpCost[i] = 0;
			}			
		}
		if (ttlCost[7] > 0)
		{				
			TranslateString(_T("Total Amount"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));
			rptDetail->SetValue(_T("TotalAmount"), szAmount);
			for (int i = 5; i < 8; i++)
			{
				FormatCurrency(ttlCost[i], tmpStr);
				tmpStr2.Format(_T("s%d"), i + 1);
				rptDetail->SetValue(tmpStr2, tmpStr);
			}
		}
		CString szTime;
		szTime = pMF->GetSysDateTime();
		szSysDate = pMF->GetSysDate(); 
		szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
			          szTime.Right(8), szSysDate.Right(2), szSysDate.Mid(5,2), szSysDate.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
		
		EndWaitCursor();
		rpt.PrintPreview();
} 
void CrptBaocaoquyettoanthuocVTDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	CString szSQL, szWhere;
	CString tmpStr, szType, szFacList, tmpStr2, szDate, szSysDate, szName, szAmount, szFromDate, szToDate;
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

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	 {
		 if (m_wndObjectList.GetCheck(i))
		 {
		 	if (!szObject.IsEmpty())
				szObject += _T(",");					
			szObject.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}	
	 }
	 

	 if (!szObject.IsEmpty())
	 {
		szWhere.Format(_T(" and ho_object in(%s) "), szObject);
	 }
		
		 
	 for (int i = 0 ; i < m_wndTypeList.GetItemCount(); i++)
	 {
		 if (m_wndTypeList.GetCheck(i))
		 {
		 	if(!szType.IsEmpty())
				szType += _T(",");						
			szType.AppendFormat(_T("'%s'"), m_wndTypeList.GetItemText(i, 0));
		 }
	 }
	

	if (!szType.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and mp_producttype in(%s)"), szType);
	}			
	
	bool bCheckOperationTable = false;
		
	for (int i = 0; i < m_wndListFac.GetItemCount(); i++)
	{
		if (m_wndListFac.GetCheck(i))
		{
			if (!szGroups.IsEmpty())
				szGroups += _T(",");						
			szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
					
			if (!szFacList.IsEmpty())
				szFacList += _T(", ");
			szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
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
		szFacList = _T("T\x1EA5t \x63\x1EA3 \x63\xE1\x63 \x62\xE0n m\x1ED5");
	}

	szSQL.Format(_T(" SELECT pname,") \
				_T("        age,") \
				_T("        docno,") \
				_T("        deptid,") \
				_T("        cardno,") \
				_T("        rank,") \
				_T("        workplace,") \
				_T("        recordno,") \
				_T("        sum(drugamt) as drugamt,") \
				_T("        sum(materialamt) as materialamt,") \
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
				_T("          case when ho_object<>7 then ho_cardno else null end as cardno,") \
				_T("          case when mp_producttype not in(%s)") \
				_T(" 		  then sum(hpol_qtyissue*hpol_unitprice) else 0 end as drugamt,") \
				_T(" 		  case when mp_producttype in(%s)") \
				_T(" 		  then sum(hpol_qtyissue*hpol_unitprice) else 0 end as materialamt,") \
				_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_pharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
				_T("  LEFT JOIN hms_pharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE ho_pdeptid='%s' and hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and ho_status in('A','I','D','T') %s") \
				_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno,") \
				_T("           ho_deptid, ho_object, ho_cardno, mp_producttype, hp_rank, hp_workplace, hcr_recordno") \
				_T("  UNION ALL") \
				_T("  SELECT (SELECT distinct sd_name FROM sys_dept WHERE sd_id=ho_deptid) as deptid,") \
				_T("          trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("          ho_docno as docno,") \
				_T("          hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("          (select distinct ss_desc from sys_sel where ss_id='hms_rank' and ss_code=cast(hp_rank as nvarchar2(15))) as rank,") \
				_T("          hp_workplace as workplace,") \
				_T("          hcr_recordno as recordno,") \
				_T("          case when ho_object<>7 then ho_cardno else null end as cardno,") \
				_T("          case when mp_producttype not in(%s)") \
				_T(" 		  then sum(hpol_qtyissue*hpol_unitprice) else 0 end as drugamt,") \
				_T(" 		  case when mp_producttype in(%s)") \
				_T(" 		  then sum(hpol_qtyissue*hpol_unitprice) else 0 end as materialamt,") \
				_T("          sum(hpol_qtyissue*hpol_unitprice) as amount") \
				_T("  FROM hms_patient") \
				_T("  LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("  LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T("  LEFT JOIN hms_operation ON(ho_docno=hd_docno and ho_patientno=hd_patientno)") \
				_T("  LEFT JOIN hms_ipharmaorder ON(hpo_reference_id=ho_idx and ho_docno=hpo_docno)") \
				_T("  LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T("  LEFT JOIN m_product_item ON(mpi_product_item_id=hpol_product_item_id)") \
				_T("  LEFT JOIN m_product ON(mp_product_id=hpol_product_id)") \
				_T("  WHERE ho_pdeptid='%s' and hpo_storage_id in(%s)") \
				_T("        and ho_performdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
				_T("        and ho_status in('A','I','D','T') %s") \
				_T("  GROUP BY hp_surname, hp_midname, hp_firstname, hd_admitdate, hp_birthdate, ho_docno, ") \
				_T("           ho_deptid, ho_object, ho_cardno, mp_producttype, hp_rank, hp_workplace, hcr_recordno") \
				_T(" ) tblMain") \
				_T(" GROUP BY pname, age, docno, deptid, cardno, rank, workplace, recordno") \
				_T(" ORDER BY deptid, pname"),
				m_szGroups, m_szGroups, pMF->m_szDepartment, szStocks, m_szFromDate, m_szToDate, szWhere,
				m_szGroups, m_szGroups, pMF->m_szDepartment, szStocks, m_szFromDate, m_szToDate, szWhere
				);

	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	long double grpCost[11];
	long double ttlCost[11];
	double cost = 0;
	long qty = 0;
	int nItem = 1;
	_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return ;
	}

	for (int i = 0; i < 11; i++)
	{
		grpCost[i] = 0;
		ttlCost[i] = 0;
	}
					
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 18);
	xls.SetColumnWidth(2, 9);
	xls.SetColumnWidth(3, 5);
	xls.SetColumnWidth(4, 21);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 17);
	xls.SetColumnWidth(7, 6);

	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 15);
	xls.SetColumnWidth(10, 15);

	xls.SetRowHeight(10, 50);

	xls.SetCellMergedColumns(0, 3, 11);
	xls.SetCellMergedColumns(0, 4, 11);

	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O QUY\x1EBET TO\xC1N S\x1EEC \x44\x1EE4NG THU\x1ED0\x43 - VTYT"),
		            FMT_TEXT | FMT_CENTER, true, 14, 0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), 
		          CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
				CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	xls.SetCellText(0, 7,_T("T\x1EEB kho: ") + szStockNames);
	xls.SetCellText(0, 8, _T("\x42\xE0n m\x1ED5: ") + szFacList);

	int nRow = 10;

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(1, nRow, _T("H\x1ECD v\xE0 t\xEAn"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Document No"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(3, nRow, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(4, nRow, _T("Th\x1EBB \x42HYT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Rank"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Work Unit"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Admission No"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(8, nRow, _T("Ti\x1EC1n thu\x1ED1\x63"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(9, nRow, _T("Ti\x1EC1n v\x1EADt t\x1B0"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);	

	xls.SetCellText(10, nRow, _T("T\x1ED5ng ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);	
	
			
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szNewLine);
		if (szNewLine != szOldLine && !szNewLine.IsEmpty())
		{	
			if (grpCost[10] > 0)
			{			
				CString szField, szAmount;
				nRow++;
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellText(0, nRow, szAmount, FMT_TEXT, true, 11, 0);

				for (int i = 8; i < 11; i++)
				{
					tmpStr.Format(_T("%.2lf"), grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_CURRENCY1, true, 11, 0);			
					ttlCost[i] += grpCost[i];
					grpCost[i] = 0;
				}

				nItem = 1;
			}
			nRow++;
			CString szField, szAmount;			
			tmpStr.Format(_T("%s"), szNewLine);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11, 0);
			szOldLine = szNewLine;
			nItem = 1;
		}

		nRow++;		
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);		
		xls.SetCellText(2, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("cardno"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("rank"), tmpStr);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("workplace"), tmpStr);
		xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("recordno"), tmpStr);
		xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("drugamt"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		grpCost[8] += cost;
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1 | FMT_WRAPING);

		rs.GetValue(_T("materialamt"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		grpCost[9] += cost;
		xls.SetCellText(9, nRow, tmpStr, FMT_CURRENCY1 | FMT_WRAPING);	

		rs.GetValue(_T("amount"), cost);	
		tmpStr.Format(_T("%.2f"), cost);
		grpCost[10] += cost;
		xls.SetCellText(10, nRow, tmpStr, FMT_CURRENCY1 | FMT_WRAPING);	

		rs.MoveNext();
	}

	if (grpCost[10] > 0)
	{
		nRow++;
		TranslateString(_T("Total Group"), tmpStr);		
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11, 0);	
		for (int i = 8; i < 11; i++)
		{
			tmpStr.Format(_T("%.2lf"), grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_CURRENCY1, true, 11, 0);			
			ttlCost[i] += grpCost[i];
			grpCost[i] = 0;
		}
	}
	if (ttlCost[10] > 0)
	{
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);		
		xls.SetCellText(0, nRow, tmpStr, FMT_TEXT, true, 11, 0);	
		for (int i = 8; i < 11; i++)
		{
			tmpStr.Format(_T("%.2lf"), ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_CURRENCY1, true, 11, 0);
		}
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BaocaoquyettoansudungthuocVT.xls"));	
} 
void CrptBaocaoquyettoanthuocVTDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CrptBaocaoquyettoanthuocVTDialog::OnTypeListDblClick(){
	
} 
void CrptBaocaoquyettoanthuocVTDialog::OnTypeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanthuocVTDialog::OnTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaocaoquyettoanthuocVTDialog::OnTypeListLoadData()
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
	while(!rs.IsEOF())
	{ 
		m_wndTypeList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndTypeList.EndLoad(); 
	return nCount;
}
void CrptBaocaoquyettoanthuocVTDialog::OnObjectListDblClick(){
	
} 
void CrptBaocaoquyettoanthuocVTDialog::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanthuocVTDialog::OnObjectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaocaoquyettoanthuocVTDialog::OnObjectListLoadData()
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
void CrptBaocaoquyettoanthuocVTDialog::OnListFacDblClick(){
	
} 
void CrptBaocaoquyettoanthuocVTDialog::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaocaoquyettoanthuocVTDialog::OnListFacDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaocaoquyettoanthuocVTDialog::OnListFacLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hst_idx as ID, hst_name as Name ") \
		         _T("FROM hms_surgery_table ") \
				 _T("ORDER BY hst_idx"));

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
int CrptBaocaoquyettoanthuocVTDialog::OnAddrptBaocaoquyettoanthuocVTDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CrptBaocaoquyettoanthuocVTDialog::OnEditrptBaocaoquyettoanthuocVTDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptBaocaoquyettoanthuocVTDialog::OnDeleterptBaocaoquyettoanthuocVTDialog(){
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
 		OnCancelrptBaocaoquyettoanthuocVTDialog();
 	}
	return 0;
}
int CrptBaocaoquyettoanthuocVTDialog::OnSaverptBaocaoquyettoanthuocVTDialog(){
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
 		//OnrptBaocaoquyettoanthuocVTDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CrptBaocaoquyettoanthuocVTDialog::OnCancelrptBaocaoquyettoanthuocVTDialog(){
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
int CrptBaocaoquyettoanthuocVTDialog::OnrptBaocaoquyettoanthuocVTDialogListLoadData(){
	return 0;
}

int CrptBaocaoquyettoanthuocVTDialog::OnCheckAll()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i = 0; i< m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, true);
	}
	 return 0;
} 
int CrptBaocaoquyettoanthuocVTDialog::OnUnCheckAll()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i = 0; i< m_wndListFac.GetItemCount(); i++)
	{
		m_wndListFac.SetCheck(i, false);
	}
	 return 0;
}

int CrptBaocaoquyettoanthuocVTDialog::OnObjectCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, TRUE);
	}
	return 0;
}

int CrptBaocaoquyettoanthuocVTDialog::OnObjectUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
			m_wndObjectList.SetCheck(i, FALSE);
	}
	return 0;
}

int CrptBaocaoquyettoanthuocVTDialog::OnTypeCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (!m_wndTypeList.GetCheck(i))
			m_wndTypeList.SetCheck(i, TRUE);
	}
	return 0;
}

int CrptBaocaoquyettoanthuocVTDialog::OnTypeUnCheckAll()
{
	for (int i = 0; i < m_wndTypeList.GetItemCount(); i++)
	{
		if (m_wndTypeList.GetCheck(i))
			m_wndTypeList.SetCheck(i, FALSE);
	}
	return 0;
}
