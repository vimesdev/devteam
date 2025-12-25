#include "../Reports/rptBaocaothanhquyettoantheotheodoituong.h"
#include "../MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"

static int _OnCheckAllFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnUnCheckAll();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSefocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaothanhquyettoantheotheodoituong* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaothanhquyettoantheotheodoituong* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnTypeAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptBaocaothanhquyettoantheotheodoituong* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong *)pWnd)->OnGroupAddNew();
}*/
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnInsuranceSelect();
}
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnDiscountSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnServiceSelect();
}
static void _OnOtherSelectFnc(CWnd *pWnd){
	 ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnOtherSelect();
}

static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptBaocaothanhquyettoantheotheodoituong *pVw = (rptBaocaothanhquyettoantheotheodoituong *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptBaocaothanhquyettoantheotheodoituong *pVw = (rptBaocaothanhquyettoantheotheodoituong *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptBaocaothanhquyettoantheotheodoituong *pVw = (rptBaocaothanhquyettoantheotheodoituong *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptBaocaothanhquyettoantheotheodoituong *pVw = (rptBaocaothanhquyettoantheotheodoituong *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnListFacDeleteItem();
} 

static int _OnAddPMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnAddPMSReportConditionDialog();
} 
static int _OnEditPMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnEditPMSReportConditionDialog();
} 
static int _OnDeletePMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnDeletePMSReportConditionDialog();
} 
static int _OnSavePMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnSavePMSReportConditionDialog();
} 
static int _OnCancelPMSReportConditionDialogFnc(CWnd *pWnd){
	 return ((rptBaocaothanhquyettoantheotheodoituong*)pWnd)->OnCancelPMSReportConditionDialog();
} 
rptBaocaothanhquyettoantheotheodoituong::rptBaocaothanhquyettoantheotheodoituong(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 455;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
rptBaocaothanhquyettoantheotheodoituong::~rptBaocaothanhquyettoantheotheodoituong(){
}
void rptBaocaothanhquyettoantheotheodoituong::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 460, 495);
	m_wndObject.Create(this, _T("Object"), 10, 150, 455, 205);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 230, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 235, 30, 335, 55);
	m_wndToDate.Create(this,340, 30, 455, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 110, 85);
	m_wndStock.Create(this,115, 60, 455, 85); 
	m_wndType.SetCheckBox(true);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 110, 115);
	m_wndType.Create(this,115, 90, 455, 115);
	m_wndGroup.SetCheckBox(true);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 120, 110, 145);
	m_wndGroup.Create(this,115, 120, 455, 145);
	m_wndInsurance.Create(this, _T("Insurance"), 20, 175, 120, 200);
	m_wndDiscount.Create(this, _T("Discount"), 125, 175, 225, 200);
	m_wndService.Create(this, _T("Service"), 230, 175, 330, 200);
	m_wndOther.Create(this, _T("Other"), 335, 175, 435, 200);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 204, 500, 284, 525);
	m_wndExport.Create(this, _T("&Export"), 289, 500, 369, 525);
	m_wndClose.Create(this, _T("&Close"), 374, 500, 454, 525);
	m_wndListFac.Create(this,10, 210, 455, 490);
}
void rptBaocaothanhquyettoantheotheodoituong::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);
	
	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 20);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 20);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndListFac.SetCheckBox(true);
	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndListFac.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


}
void rptBaocaothanhquyettoantheotheodoituong::OnSetWindowEvents(){
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
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndDiscount.SetEvent(WE_CLICK, _OnDiscountSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndOther.SetEvent(WE_CLICK, _OnOtherSelectFnc);

	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);
	m_wndListFac.AddEvent(1, _T("Check All"), _OnCheckAllFnc, 0, VK_DELETE, 0);
	m_wndListFac.AddEvent(2, _T("UnCheck All"), _OnUnCheckAllFnc, 0, VK_DELETE, 0);

	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFromDate =  pMF->GetSysDate()+ "00:01";	
	m_szToDate =pMF->GetSysDate() + "23:59";
	OnListFacLoadData();
	SetMode(VM_EDIT);

}
void rptBaocaothanhquyettoantheotheodoituong::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);
	DDX_Check(pDX, m_wndOther.GetDlgCtrlID(), m_bOther);
}
void rptBaocaothanhquyettoantheotheodoituong::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptBaocaothanhquyettoantheotheodoituong::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptBaocaothanhquyettoantheotheodoituong::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szGroupKey.Empty();
	m_bInsurance=TRUE;
	m_bDiscount=TRUE;
	m_bService=TRUE;
	m_bOther=TRUE;

}
int rptBaocaothanhquyettoantheotheodoituong::SetMode(int nMode){
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
/*void rptBaocaothanhquyettoantheotheodoituong::OnFromDateChange(){
	
} */
/*void rptBaocaothanhquyettoantheotheodoituong::OnFromDateSetfocus(){
	
} */
/*void rptBaocaothanhquyettoantheotheodoituong::OnFromDateKillfocus(){
	
} */
int rptBaocaothanhquyettoantheotheodoituong::OnFromDateCheckValue(){
	return 0;
} 
/*void rptBaocaothanhquyettoantheotheodoituong::OnToDateChange(){
	
} */
/*void rptBaocaothanhquyettoantheotheodoituong::OnToDateSetfocus(){
	
} */
/*void rptBaocaothanhquyettoantheotheodoituong::OnToDateKillfocus(){
	
} */
int rptBaocaothanhquyettoantheotheodoituong::OnToDateCheckValue(){
	return 0;
} 
void rptBaocaothanhquyettoantheotheodoituong::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaothanhquyettoantheotheodoituong::OnStockSelendok(){
	 
}
/*void rptBaocaothanhquyettoantheotheodoituong::OnStockSetfocus(){
	
}*/
/*void rptBaocaothanhquyettoantheotheodoituong::OnStockKillfocus(){
	
}*/
long rptBaocaothanhquyettoantheotheodoituong::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND pmsl_stockid=%d"), ToInt(m_szStockKey));
	};
	szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), pMF->m_szStocks);
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmsl_stockid as id, pmsl_name as name FROM pms_stocklist where 1=1 %s ORDER BY pmsl_stockid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptBaocaothanhquyettoantheotheodoituong::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptBaocaothanhquyettoantheotheodoituong::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaothanhquyettoantheotheodoituong::OnTypeSelendok(){
	 
}
/*void rptBaocaothanhquyettoantheotheodoituong::OnTypeSetfocus(){
	
}*/
/*void rptBaocaothanhquyettoantheotheodoituong::OnTypeKillfocus(){
	
}*/
long rptBaocaothanhquyettoantheotheodoituong::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_feegroup WHERe substr(hfg_id,1, 1)='A' %s ORDER BY hfg_index, hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void rptBaocaothanhquyettoantheotheodoituong::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptBaocaothanhquyettoantheotheodoituong::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptBaocaothanhquyettoantheotheodoituong::OnGroupSelendok(){
	 
}
/*void rptBaocaothanhquyettoantheotheodoituong::OnGroupSetfocus(){
	
}*/
/*void rptBaocaothanhquyettoantheotheodoituong::OnGroupKillfocus(){
	
}*/
long rptBaocaothanhquyettoantheotheodoituong::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" WHERE pmg_id='%s' "), m_szGroupKey);
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmg_id as id, pmg_name as name FROM pms_group %s ORDER BY pmg_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}

void rptBaocaothanhquyettoantheotheodoituong::OnListFacDblClick(){
	
} 
void rptBaocaothanhquyettoantheotheodoituong::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int rptBaocaothanhquyettoantheotheodoituong::OnListFacDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long rptBaocaothanhquyettoantheotheodoituong::OnListFacLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	m_wndListFac.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept order by  sd_index, sd_type "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListFac.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndListFac.EndLoad(); 
	return nCount;}

/*void rptBaocaothanhquyettoantheotheodoituong::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void rptBaocaothanhquyettoantheotheodoituong::OnInsuranceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void rptBaocaothanhquyettoantheotheodoituong::OnDiscountSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void rptBaocaothanhquyettoantheotheodoituong::OnServiceSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void rptBaocaothanhquyettoantheotheodoituong::OnOtherSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int rptBaocaothanhquyettoantheotheodoituong::OnCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, true);
	}
	 return 0;
} 
int rptBaocaothanhquyettoantheotheodoituong::OnUnCheckAll(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, false);
	}
	 return 0;
} 

void rptBaocaothanhquyettoantheotheodoituong::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_szStockName = m_wndStock.GetCurrent(1);
	OnPrintBaocaosudungthuoctheodoituong(true);
	
} 
void rptBaocaothanhquyettoantheotheodoituong::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_szStockName = m_wndStock.GetCurrent(1);
	OnPrintBaocaosudungthuoctheodoituong(false);	

} 
void rptBaocaothanhquyettoantheotheodoituong::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_szStockName = m_wndStock.GetCurrent(1);
	OnExportBaocaosudungthuoctheodoituong();
	
} 
void rptBaocaothanhquyettoantheotheodoituong::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int rptBaocaothanhquyettoantheotheodoituong::OnAddPMSReportConditionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptBaocaothanhquyettoantheotheodoituong::OnEditPMSReportConditionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptBaocaothanhquyettoantheotheodoituong::OnDeletePMSReportConditionDialog(){
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
int rptBaocaothanhquyettoantheotheodoituong::OnSavePMSReportConditionDialog(){
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
int rptBaocaothanhquyettoantheotheodoituong::OnCancelPMSReportConditionDialog(){
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
int rptBaocaothanhquyettoantheotheodoituong::OnPMSReportConditionDialogListLoadData(){
	return 0;
}


void rptBaocaothanhquyettoantheotheodoituong::OnPrintBaocaosudungthuoctheodoituong(bool bPreview){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,szFacList,szDeptID, szWhere;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,m_szGroups;
	CString szType, szTypeName, szGroupID, szGroupName;
	
	if(!rpt.Init(_T("Reports/HMS/PMS_BAOCAOXUATTHUOCCHOKHOATHEODOITUONG.RPT"),true) )
	{
		return;
	}

	for (int i=0 ; i<= m_wndType.GetCount(); i++)
	{
		 if(m_wndType.GetCheck(i))
		 {
			 m_wndType.SetCurSel(i);
			 if(!szType.IsEmpty())
			 {
				szType += _T(",");
				szTypeName +=_T(", ");

			 }
			 szType.AppendFormat(_T("'%s'"), m_wndType.GetCurrent(0));				
			 szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		}		
	 }
	

	if(!szType.IsEmpty())	
		szWhere.AppendFormat(_T(" and pmi_typeid in(%s)"), szType);	
	else
		szTypeName.Format(_T("T\x1EA5t \x63\x1EA3 lo\x1EA1i thu\x1ED1\x63"));

	for (int i=0 ; i<= m_wndGroup.GetCount(); i++)
	{
		 if(m_wndGroup.GetCheck(i))
		 {
			 m_wndGroup.SetCurSel(i);
			 if(!szGroupID.IsEmpty())
			 {
				szGroupID += _T(",");
				szGroupName +=_T(", ");

			 }
			 szGroupID.AppendFormat(_T("'%s'"), m_wndGroup.GetCurrent(0));				
			 szGroupName.AppendFormat(_T("%s"), m_wndGroup.GetCurrent(1));
		}		
	 }
	

	if(!szGroupID.IsEmpty())	
		szWhere.AppendFormat(_T(" and pmi_groupid in(%s)"), szGroupID);	
	else
		szGroupName.Format(_T("T\x1EA5t \x63\x1EA3 lo\x1EA1i thu\x1ED1\x63"));


	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		if(m_wndListFac.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				szDeptID += _T(",");						
			szDeptID.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
			
			if (!szFacList.IsEmpty())
				szFacList+= _T(", ");
			szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
		}
	
	}
	if (!szDeptID.IsEmpty()) 
		szWhere.AppendFormat(_T(" and hpo_deptid in (%s)"), szDeptID);
	else
	{				
		TranslateString(_T("All Department"), tmpStr);
		szFacList =tmpStr;
	}


	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_szStockName);
	rpt.GetReportHeader()->SetValue(_T("Department"), szFacList);
	rpt.GetReportHeader()->SetValue(_T("InsFlag"),m_szInsFlag);
	rpt.GetReportHeader()->SetValue(_T("ChildFlag"),m_szChildFlag);
	rpt.GetReportHeader()->SetValue(_T("FreeFlag"),m_szFreeFlag);
	rpt.GetReportHeader()->SetValue(_T("ServiceFlag"),m_szServiceFlag);
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT hfg_name as typename,generic,name,unit, price,") \
	_T(" 	 	sum(insQty) as InsQty,") \
	_T(" 	 	sum(insQty)*Price as InsQtyAmount,") \
	_T(" 	 	sum(DistQty) as DistQty,") \
	_T(" 	 	sum(DistQty)*Price as DistQtyAmount,") \
	_T(" 	 	sum(SerQty) as SerQty,") \
	_T(" 	 	sum(SerQty)*Price as SerQtyAoumunt,") \
	_T("		sum(Chuathanhtoan) as Chuathanhtoan, ") \
	_T("		sum(Chuathanhtoan)*Price as ChuathanhtoanAmount, ") \
	_T(" 	 	sum(insQty+DistQty+SerQty) as TotalQty,") \
	_T(" 	 	sum(insQty+DistQty+SerQty) * Price as TotatAmount	") \
	_T(" 	  FROM (	") \
	_T(" 	 	SELECT pmi_typeid as typeid,pmg_name as generic, 		 	") \
	_T(" 	 		pmi_name as name, pmi_unit as unit,			") \
	_T(" 	 		case when ho_type in('I') and hpo_payment ='P' and date(hfi_recvdate) between date('%s') and date('%s') then hpol_issueqty else 0 end as InsQty, ") \
	_T(" 	 		case when ho_type in('C','D','Z') and hpo_payment ='P' and date(hfi_recvdate) between date('%s') and date('%s') then hpol_issueqty else 0 end as DistQty, ") \
	_T(" 	 		case when ho_type in('S','X') and hpo_payment ='P' and date(hfi_recvdate) between date('%s') and date('%s') then hpol_issueqty else 0 end as SerQty, ") \
	_T(" 	 		case when hpo_payment <> 'P' then hpol_issueqty else 0 end as Chuathanhtoan, ") \
	_T(" 	 		pmsi_vatprice as price 		 	") \
	_T(" 	 		") \
	_T(" 	 	FROM hms_patient LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
	_T(" 	 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
	_T(" 	 	LEFT JOIN hms_pharmacyorder_line ON (hpol_orderid=hpo_orderid) ") \
	_T("		LEFT JOIN hms_fee_invoice on(hfi_docno = hd_docno and hfi_invoiceno = hfe_invoiceno) ") \
	_T(" 	 	LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid) ") \
	_T(" 	 	LEFT JOIN pms_items ON(pmsi_itemid=pmi_id) ") \
	_T("		LEFT JOIN pms_generic ON(pmg_id=pmi_genericid) ") \
	_T(" 	 	LEFT JOIN hms_object ON(hd_object=ho_id) ") \
	_T(" 	 	WHERE 	hpo_type in('P','D','M','E') and hpo_status IN('A','I','D') %s ") \
	_T(" 	 ) as TbleMain") \
	_T(" 	 LEFT JOIN hms_feegroup ON(hfg_id=typeid)") \
	_T(" 	 GROUP BY hfg_index,typename,generic, name ,unit ,price ") \
	_T("	 HAVING sum(Chuathanhtoan + insQty+DistQty+SerQty)  > 0 ") \
	_T(" 	 ORDER BY hfg_index,typename,name"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere ); 

	CReportSection* rptDetail;
	CString szOldLine, szNewLine, szAmount;
	CRecord rs(&pMF->m_db);
	long double grpCost[15];
	long double ttlCost[15];
	double cost = 0;
	int nItem = 1;
	//_fmsg(_T("%s"), szSQL);

	for (int i = 0; i< 15;i++)
	{
		grpCost[i] = 0;
		ttlCost[15] = 0;
	}
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

			
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("pmi_typeid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost[15] > 0)
			{
				CString szFild;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);
				for (int i=7;i<16;i++)
				{
					szFild.Format(_T("s%d"),i);
					FormatCurrency(grpCost[i], tmpStr);
					rptDetail->SetValue(szFild, tmpStr);
					ttlCost[i] += grpCost[i];						
					grpCost[i] = 0;
				}
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("pmi_typeid"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr );
			szOldLine = szNewLine;
			nItem=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("id"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("price"), cost);
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("insQty"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("insQtyAmount"), cost);
		grpCost[7] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("DistQty"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("DistQtyAmount"), cost);
		grpCost[9] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("SerQty"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("SerQtyAmount"), cost);
		grpCost[11] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T("Chuathanhtoan"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		rs.GetValue(_T("ChuathanhtoanAmount"), cost);
		grpCost[13] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		rs.GetValue(_T("TotalQty"), cost);
		rptDetail->SetValue(_T("14"), tmpStr);
		rs.GetValue(_T("TotalAmount"), cost);
		grpCost[15] += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("15"), tmpStr);
		rs.MoveNext();
	}
				
	if(grpCost[15] > 0)
	{
		CString szFild;
		TranslateString(_T("\x43\x1ED9ng:"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i=7;i<16;i++)
		{
			szFild.Format(_T("s%d"),i);
			FormatCurrency(grpCost[i], tmpStr);
			rptDetail->SetValue(szFild, tmpStr);
			ttlCost[i] += grpCost[i];						
			grpCost[i] = 0;
		}
	}

	if(ttlCost[15] > 0){				
		CString szFild;
		TranslateString(_T("\x43\x1ED9ng:"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		for (int i=7;i<16;i++)
		{
			szFild.Format(_T("s%d"),i);
			FormatCurrency(ttlCost[i], tmpStr);
			rptDetail->SetValue(szFild, tmpStr);			
		}
	}
	
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

void rptBaocaothanhquyettoantheotheodoituong::OnExportBaocaosudungthuoctheodoituong(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr,szObjects,m_szFacList,tmpStr2, szDate, szSysDate, szSQL,szName,szAmount,szFromDate,szToDate, szWhere;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,szGroupsDept;
	CString szDeptID, szDeptNane, szType, szTypeName, szGroupID, szGroupName;	
			

	for (int i=0 ; i<= m_wndType.GetCount(); i++)
	{
		 if(m_wndType.GetCheck(i))
		 {
			 m_wndType.SetCurSel(i);
			 if(!szType.IsEmpty())
			 {
				szType += _T(",");
				szTypeName +=_T(", ");

			 }
			 szType.AppendFormat(_T("'%s'"), m_wndType.GetCurrent(0));				
			 szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		}		
	 }
	

	if(!szType.IsEmpty())	
		szWhere.AppendFormat(_T(" and pmi_typeid in(%s)"), szType);	
	else
		szTypeName.Format(_T("T\x1EA5t \x63\x1EA3 lo\x1EA1i thu\x1ED1\x63"));

	for (int i=0 ; i<= m_wndGroup.GetCount(); i++)
	{
		 if(m_wndGroup.GetCheck(i))
		 {
			 m_wndGroup.SetCurSel(i);
			 if(!szGroupID.IsEmpty())
			 {
				szGroupID += _T(",");
				szGroupName +=_T(", ");

			 }
			 szGroupID.AppendFormat(_T("'%s'"), m_wndGroup.GetCurrent(0));				
			 szGroupName.AppendFormat(_T("%s"), m_wndGroup.GetCurrent(1));
		}		
	 }
	

	if(!szGroupID.IsEmpty())	
		szWhere.AppendFormat(_T(" and pmi_groupid in(%s)"), szGroupID);	
	else
		szGroupName.Format(_T("T\x1EA5t \x63\x1EA3 lo\x1EA1i thu\x1ED1\x63"));

	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		if(m_wndListFac.GetCheck(i)){
			if(!szGroupsDept.IsEmpty())
				szGroupsDept += _T(",");						
			szGroupsDept.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
			
			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
		}
	
	}
	if (!szGroupsDept.IsEmpty()) 
		szWhere.AppendFormat(_T(" and hpo_deptid in (%s)"), szGroupsDept);
	else
		m_szFacList =_T("All Department");

	if (!m_szStockKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpo_stockid =%d"), ToInt(m_szStockKey));
		
	szSQL.Format(_T(" SELECT hfg_name as typename,generic,name,unit, price,") \
	_T(" 	 	sum(insQty) as InsQty,") \
	_T(" 	 	sum(insQty)*Price as InsQtyAmount,") \
	_T(" 	 	sum(DistQty) as DistQty,") \
	_T(" 	 	sum(DistQty)*Price as DistQtyAmount,") \
	_T(" 	 	sum(SerQty) as SerQty,") \
	_T(" 	 	sum(SerQty)*Price as SerQtyAoumunt,") \
	_T("		sum(Chuathanhtoan) as Chuathanhtoan, ") \
	_T("		sum(Chuathanhtoan)*Price as ChuathanhtoanAmount, ") \
	_T(" 	 	sum(insQty+DistQty+SerQty) as TotalQty,") \
	_T(" 	 	sum(insQty+DistQty+SerQty) * Price as TotatAmount	") \
	_T(" 	  FROM (	") \
	_T(" 	 	SELECT pmi_typeid as typeid,pmg_name as generic, 		 	") \
	_T(" 	 		pmi_name as name, pmi_unit as unit,			") \
	_T(" 	 		case when ho_type in('I') and hpo_payment ='P' and date(hfi_recvdate) between date('%s') and date('%s') then hpol_issueqty else 0 end as InsQty, ") \
	_T(" 	 		case when ho_type in('C','D','Z') and hpo_payment ='P' and date(hfi_recvdate) between date('%s') and date('%s') then hpol_issueqty else 0 end as DistQty, ") \
	_T(" 	 		case when ho_type in('S','X') and hpo_payment ='P' and date(hfi_recvdate) between date('%s') and date('%s') then hpol_issueqty else 0 end as SerQty, ") \
	_T(" 	 		case when hpo_payment <> 'P' then hpol_issueqty else 0 end as Chuathanhtoan, ") \
	_T(" 	 		pmsi_vatprice as price 		 	") \
	_T(" 	 		") \
	_T(" 	 	FROM hms_patient LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
	_T(" 	 	LEFT JOIN hms_pharmacyorder ON(hpo_docno=hd_docno) ") \
	_T(" 	 	LEFT JOIN hms_pharmacyorder_line ON (hpol_orderid=hpo_orderid) ") \
	_T("		LEFT JOIN hms_fee_invoice on(hfi_docno = hd_docno and hfi_invoiceno = hfe_invoiceno) ") \
	_T(" 	 	LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid) ") \
	_T(" 	 	LEFT JOIN pms_items ON(pmsi_itemid=pmi_id) ") \
	_T("		LEFT JOIN pms_generic ON(pmg_id=pmi_genericid) ") \
	_T(" 	 	LEFT JOIN hms_object ON(hd_object=ho_id) ") \
	_T(" 	 	WHERE 	hpo_type in('P','D','M','E') and hpo_status IN('A','I','D') %s ") \
	_T(" 	 ) as TbleMain") \
	_T(" 	 LEFT JOIN hms_feegroup ON(hfg_id=typeid)") \
	_T(" 	 GROUP BY hfg_index,typename,generic, name ,unit ,price ") \
	_T("	 HAVING sum(Chuathanhtoan + insQty+DistQty+SerQty)  > 0 ") \
	_T(" 	 ORDER BY hfg_index,typename,name"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szWhere ); 


	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	double grpCost[17];
	double ttlCost[17];
	double cost = 0;
	long qty=0;
	int nItem = 1;

	for (int i =0;i< 17;i++){
		grpCost[i]= 0;
		ttlCost[i] = 0;
	}
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

				
	CExcel xls;
	xls.CreateSheet(1);

	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0,3,9);
	xls.SetColumnWidth(1,22);
	xls.SetColumnWidth(2,22);
	xls.SetColumnWidth(3,12);
	xls.SetColumnWidth(4,12);
	xls.SetColumnWidth(5,12);
	xls.SetColumnWidth(6,10);
	xls.SetColumnWidth(7,12);	
	xls.SetColumnWidth(8,10);
	xls.SetColumnWidth(9,12);
	xls.SetColumnWidth(10,10);
	xls.SetColumnWidth(11,12);
	xls.SetColumnWidth(12,10);
	xls.SetColumnWidth(13,12);
	xls.SetColumnWidth(14,10);
	xls.SetColumnWidth(15,12);
	

	xls.SetRowHeight(10,30);	
	xls.SetCellText(0, 3, _T("\x42\xC1O \x43\xC1O TH\x41NH QUY\x1EBET TO\xC1N TH\x45O KHO\x41"),FMT_TEXT,true,14,0);
	xls.SetCellMergedColumns(0,4,9);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,12,0);



	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
				CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));


	xls.SetCellText(0, 7,_T("Kho:") + m_szStockName, true);
	xls.SetCellText(0, 8, _T("Kho\x61:g") +m_szFacList,true);
	xls.SetCellText(2, 9,_T("BHYT:") + m_szInsFlag,true);
	xls.SetCellText(4, 9,_T("Tr\x1EBB \x1EB9m:")+m_szChildFlag,true);
	xls.SetCellText(5, 9,_T("Mi\x1EC5n gi\x1EA3m:") +m_szFreeFlag,true);
	xls.SetCellText(6, 9,_T("\x44\x1ECB\x63h v\x1EE5:")+m_szServiceFlag,true);
	
	int nRow = 10;
	xls.SetCellText(0, nRow, _T("STT"),FMT_TEXT,true);
	xls.SetCellText(1, nRow, _T("M\xE3"),FMT_TEXT,true);
	xls.SetCellText(2, nRow, _T("T\xEAn thu\x1ED1\x63 / H\xE0m l\x1B0\x1EE3ng"),FMT_TEXT,true);
	xls.SetCellText(3, nRow, _T("\x110\x1A1n v\x1ECB"),FMT_TEXT,true);
	xls.SetCellText(4, nRow, _T("N\x1B0\x1EDB\x63 S\x58"),FMT_TEXT,true);	
	xls.SetCellText(5, nRow, _T("\x110\x1A1n gi\xE1"),FMT_TEXT,true);
		
	xls.SetCellMergedColumns(6,nRow,2);	
	TranslateString(_T("Th\x61nh to\xE1n BHYT"), tmpStr); // BHYT
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT,true);	
	xls.SetCellMergedColumns(8,nRow,2);
	TranslateString(_T("Th\x61nh to\xE1n tr\x1EBB \x65m"), tmpStr); //Tre em
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT,true);
	
	xls.SetCellMergedColumns(10,nRow,2);
	TranslateString(_T("Th\x61nh to\xE1n \x64\x1ECB\x63h v\x1EE5"), tmpStr); //Dich vu
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellMergedColumns(12,nRow,2);
	TranslateString(_T("T\x1ED5ng \x63\x1ED9ng \x111\xE3 th\x61nh to\xE1n"), tmpStr); //Tong cong da thanh toan
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT,true);
	xls.SetCellMergedColumns(14,nRow,2);
	TranslateString(_T("T\x1ED5ng \x63\x1ED9ng \x63h\x1B0\x61 th\x61nh to\xE1n"), tmpStr); // Chua thanh toan
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT,true);

	xls.SetCellMergedRows(0,nRow,2);
	xls.SetCellMergedRows(1,nRow,2);
	xls.SetCellMergedRows(2,nRow,2);	
	xls.SetCellMergedRows(3,nRow,2);
	xls.SetCellMergedRows(4,nRow,2);
	xls.SetCellMergedRows(5,nRow,2);
	
	
	nRow = 11;
	xls.SetCellText(6, nRow, _T("SL"),FMT_TEXT,true);
	xls.SetCellText(7, nRow, _T("Th\xE0nh ti\x1EC1n"),FMT_TEXT,true);
	
	xls.SetCellText(8, nRow, _T("SL"),FMT_TEXT,true);
	xls.SetCellText(9, nRow, _T("Th\xE0nh ti\x1EC1n"),FMT_TEXT,true);	

	xls.SetCellText(10, nRow, _T("SL"),FMT_TEXT,true);
	xls.SetCellText(11, nRow, _T("Th\xE0nh ti\x1EC1n"),FMT_TEXT,true);	
	
	xls.SetCellText(12, nRow, _T("SL"),FMT_TEXT,true);
	xls.SetCellText(13, nRow, _T("Th\xE0nh ti\x1EC1n"),FMT_TEXT,true);

	xls.SetCellText(14, nRow, _T("SL"),FMT_TEXT,true);
	xls.SetCellText(15, nRow, _T("Th\xE0nh ti\x1EC1n"),FMT_TEXT,true);

			
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("typename"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			if(grpCost[15] + grpCost[13] > 0)
			{			
				CString szField, szAmount;
				nRow ++;
				TranslateString(_T("\x43\x1ED9ng:"), szAmount);
				xls.SetCellMergedColumns(1,nRow,4);
				xls.SetCellText(1, nRow, szAmount, FMT_TEXT,true);
				for(int i=5;i<15;i++)
				{
					tmpStr.Format(_T("%.2f"), grpCost[i]);
					xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);
					ttlCost[i] += grpCost[i];
					grpCost[i] = 0;
					nItem=1;
				}
			}
			nRow ++;
			CString szField, szAmount;			
			tmpStr.Format(_T("%s"), szNewLine);
			xls.SetCellMergedColumns(0,nRow,15);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true);
			szOldLine = szNewLine;
			nItem=1;
		}

		nRow ++;		
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_NUMBER1);		
		rs.GetValue(_T("generic"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);		
		xls.SetCellText(3,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("countryid"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr, FMT_TEXT);		
		rs.GetValue(_T("price"), tmpStr);				
		xls.SetCellText(5,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("InsQty"),tmpStr);
		xls.SetCellText(6,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("InsQtyAmount"),cost);
		grpCost[7] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("DistQty"),tmpStr);
		xls.SetCellText(8,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("DistQtyAmount"),tmpStr);
		grpCost[9] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(9,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("SerQty"),tmpStr);
		xls.SetCellText(10,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("SerQtyAmount"),cost);
		grpCost[11] += cost;
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(11,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("TotalQty"), qty);
		tmpStr.Format(_T("%ld"), qty);
		xls.SetCellText(12,nRow,tmpStr, FMT_NUMBER1);				
		rs.GetValue(_T("TotatAmount"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost[13]+=cost;
		xls.SetCellText(13,nRow,tmpStr, FMT_NUMBER1);		

		rs.GetValue(_T("Chuathanhtoan"), qty);
		tmpStr.Format(_T("%ld"), qty);
		xls.SetCellText(14,nRow,tmpStr, FMT_NUMBER1);				
		rs.GetValue(_T("ChuathanhtoanAmount"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost[15]+=cost;
		xls.SetCellText(15,nRow,tmpStr, FMT_NUMBER1);		

		rs.MoveNext();
	}
	
	if(grpCost[15] + grpCost[13] > 0){
		nRow++;
		TranslateString(_T("Total Group"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,4);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		for(int i=6;i<15;i++)
		{
			tmpStr.Format(_T("%.2f"), grpCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);
			ttlCost[i] += grpCost[i];
		}
	}
	if(grpCost[15] + grpCost[13] > 0){
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,4);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true);
		for(int i=6;i<15;i++)
		{
			tmpStr.Format(_T("%.2f"), ttlCost[i]);
			xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1,true);			
		}
	}
	xls.Save(_T("Exports\\Baocaosudungthuoctheokhoavatheodoituong.xls"));
}

