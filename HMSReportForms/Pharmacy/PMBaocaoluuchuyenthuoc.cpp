#include "stdafx.h"
#include "PMBaocaoluuchuyenthuoc.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMBaocaoluuchuyenthuoc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaoluuchuyenthuoc* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaoluuchuyenthuoc *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnStockAddNew();
}*/
static void _OnToStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaoluuchuyenthuoc* )pWnd)->OnToStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToStockSelendokFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToStockSelendok();
}
/*static void _OnToStockSetfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToStockKillfocus();
}*/
/*static void _OnToStockKillfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToStockKillfocus();
}*/
static long _OnToStockLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToStockLoadData();
}
/*static void _OnToStockAddNewFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnToStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaoluuchuyenthuoc* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaoluuchuyenthuoc *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnTypeAddNew();
}*/
static void _OnSoureSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaoluuchuyenthuoc* )pWnd)->OnSoureSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSoureSelendokFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnSoureSelendok();
}
/*static void _OnSoureSetfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnSoureKillfocus();
}*/
/*static void _OnSoureKillfocusFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnSoureKillfocus();
}*/
static long _OnSoureLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaoluuchuyenthuoc *)pWnd)->OnSoureLoadData();
}
/*static void _OnSoureAddNewFnc(CWnd *pWnd){
	((CPMBaocaoluuchuyenthuoc *)pWnd)->OnSoureAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMBaocaoluuchuyenthuoc *pVw = (CPMBaocaoluuchuyenthuoc *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMBaocaoluuchuyenthuoc *pVw = (CPMBaocaoluuchuyenthuoc *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMBaocaoluuchuyenthuoc *pVw = (CPMBaocaoluuchuyenthuoc *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMBaocaoluuchuyenthuocFnc(CWnd *pWnd){
	 return ((CPMBaocaoluuchuyenthuoc*)pWnd)->OnAddPMBaocaoluuchuyenthuoc();
} 
static int _OnEditPMBaocaoluuchuyenthuocFnc(CWnd *pWnd){
	 return ((CPMBaocaoluuchuyenthuoc*)pWnd)->OnEditPMBaocaoluuchuyenthuoc();
} 
static int _OnDeletePMBaocaoluuchuyenthuocFnc(CWnd *pWnd){
	 return ((CPMBaocaoluuchuyenthuoc*)pWnd)->OnDeletePMBaocaoluuchuyenthuoc();
} 
static int _OnSavePMBaocaoluuchuyenthuocFnc(CWnd *pWnd){
	 return ((CPMBaocaoluuchuyenthuoc*)pWnd)->OnSavePMBaocaoluuchuyenthuoc();
} 
static int _OnCancelPMBaocaoluuchuyenthuocFnc(CWnd *pWnd){
	 return ((CPMBaocaoluuchuyenthuoc*)pWnd)->OnCancelPMBaocaoluuchuyenthuoc();
} 
CPMBaocaoluuchuyenthuoc::CPMBaocaoluuchuyenthuoc(CWnd *pParent)
	{

	m_nDlgWidth = 475;
	m_nDlgHeight = 270;
	SetDefaultValues();
}
CPMBaocaoluuchuyenthuoc::~CPMBaocaoluuchuyenthuoc(){
}
void CPMBaocaoluuchuyenthuoc::OnCreateComponents(){
	//CString tmpStr;
	//StringUpper(_T("Report export drug from stock to stock"), tmpStr);
	//m_wndReportName.Create(this, tmpStr, 5, 5, 470, 55);
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 60, 470, 235);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 85, 110, 110);
	m_wndFromDate.Create(this,115, 85, 235, 110); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 85, 340, 110);
	m_wndToDate.Create(this,345, 85, 465, 110); 
	m_wndStockLabel.Create(this, _T("From Stock"), 10, 115, 110, 140);
	m_wndStock.Create(this,115, 115, 465, 140); 
	m_wndToStock.SetCheckBox(true);
	m_wndToStockLabel.Create(this, _T("To Stock"), 10, 145, 110, 170);
	m_wndToStock.Create(this,115, 145, 465, 170);	
	m_wndType.SetCheckBox(true);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 175, 110, 200);
	m_wndType.Create(this,115, 175, 465, 200); 
	m_wndSourceLabel.Create(this, _T("Source"), 10, 205, 110, 230);
	m_wndSoure.Create(this,115, 205, 465, 230); 
	
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 265, 240, 365, 265);
	m_wndExport.Create(this, _T("&Export"), 370, 240, 470, 265);

}
void CPMBaocaoluuchuyenthuoc::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndToStock.SetCheckValue(true);
	m_wndToStock.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndSoure.SetCheckValue(true);
	m_wndSoure.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndToStock.SetCheckValue(true);
	m_wndToStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 70);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);


	m_wndSoure.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndSoure.InsertColumn(1, _T("Description"), CFMT_TEXT, 120);

}
void CPMBaocaoluuchuyenthuoc::OnSetWindowEvents(){
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
	m_wndToStock.SetEvent(WE_SELENDOK, _OnToStockSelendokFnc);
	//m_wndToStock.SetEvent(WE_SETFOCUS, _OnToStockSetfocusFnc);
	//m_wndToStock.SetEvent(WE_KILLFOCUS, _OnToStockKillfocusFnc);
	m_wndToStock.SetEvent(WE_SELCHANGE, _OnToStockSelectChangeFnc);
	m_wndToStock.SetEvent(WE_LOADDATA, _OnToStockLoadDataFnc);
	//m_wndToStock.SetEvent(WE_ADDNEW, _OnToStockAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndSoure.SetEvent(WE_SELENDOK, _OnSoureSelendokFnc);
	//m_wndSoure.SetEvent(WE_SETFOCUS, _OnSoureSetfocusFnc);
	//m_wndSoure.SetEvent(WE_KILLFOCUS, _OnSoureKillfocusFnc);
	m_wndSoure.SetEvent(WE_SELCHANGE, _OnSoureSelectChangeFnc);
	m_wndSoure.SetEvent(WE_LOADDATA, _OnSoureLoadDataFnc);
	//m_wndSoure.SetEvent(WE_ADDNEW, _OnSoureAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate =  pMF->GetSysDate()+ _T("00:01");
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	OnStockLoadData();
	OnToStockLoadData();
	SetMode(VM_EDIT);

}
void CPMBaocaoluuchuyenthuoc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndToStock.GetDlgCtrlID(), m_szToStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndSoure.GetDlgCtrlID(), m_szSoureKey);

}
void CPMBaocaoluuchuyenthuoc::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMBaocaoluuchuyenthuoc::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMBaocaoluuchuyenthuoc::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szToStockKey.Empty();
	m_szTypeKey.Empty();
	m_szSoureKey.Empty();

}
int CPMBaocaoluuchuyenthuoc::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1,2, -1); 
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
/*void CPMBaocaoluuchuyenthuoc::OnFromDateChange(){
	
} */
/*void CPMBaocaoluuchuyenthuoc::OnFromDateSetfocus(){
	
} */
/*void CPMBaocaoluuchuyenthuoc::OnFromDateKillfocus(){
	
} */
int CPMBaocaoluuchuyenthuoc::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMBaocaoluuchuyenthuoc::OnToDateChange(){
	
} */
/*void CPMBaocaoluuchuyenthuoc::OnToDateSetfocus(){
	
} */
/*void CPMBaocaoluuchuyenthuoc::OnToDateKillfocus(){
	
} */
int CPMBaocaoluuchuyenthuoc::OnToDateCheckValue(){
	return 0;
} 
void CPMBaocaoluuchuyenthuoc::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMBaocaoluuchuyenthuoc::OnStockSelendok(){
	 
}
/*void CPMBaocaoluuchuyenthuoc::OnStockSetfocus(){
	
}*/
/*void CPMBaocaoluuchuyenthuoc::OnStockKillfocus(){
	
}*/
long CPMBaocaoluuchuyenthuoc::OnStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
		szWhere.Format(_T("and msl_storageid=%d"), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;

	if(pMF->GetModuleID() == _T("PM"))
	{
		szWhere.Format(_T(" AND msl_org_id = 'PM'"));
	}
	else
	{
		szWhere.Format(_T(" AND msl_org_id = 'MA'"));
	}

	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1 = 1 %s ORDER BY msl_storage_id"),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMBaocaoluuchuyenthuoc::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMBaocaoluuchuyenthuoc::OnToStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMBaocaoluuchuyenthuoc::OnToStockSelendok(){
	 
}
/*void CPMBaocaoluuchuyenthuoc::OnToStockSetfocus(){
	
}*/
/*void CPMBaocaoluuchuyenthuoc::OnToStockKillfocus(){
	
}*/
long CPMBaocaoluuchuyenthuoc::OnToStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndToStock.IsSearchKey() && !m_szToStockKey.IsEmpty()){
		//szWhere.Format(_T(" AND pmsl_stockid =%d"), ToInt(m_szStockKey);
	};
	m_wndToStock.DeleteAllItems(); 
	int nCount = 0;

	if(pMF->GetModuleID() == _T("PM"))
	{
		szWhere.Format(_T(" AND msl_org_id = 'PM'"));
	}
	else
	{
		szWhere.Format(_T(" AND msl_org_id = 'MA'"));
	}

	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1 = 1 AND msl_storage_id not in (%d) %s ORDER BY msl_storage_id"), ToInt(m_szStockKey),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMBaocaoluuchuyenthuoc::OnToStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMBaocaoluuchuyenthuoc::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMBaocaoluuchuyenthuoc::OnTypeSelendok(){
	 
}
/*void CPMBaocaoluuchuyenthuoc::OnTypeSetfocus(){
	
}*/
/*void CPMBaocaoluuchuyenthuoc::OnTypeKillfocus(){
	
}*/
long CPMBaocaoluuchuyenthuoc::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere;
	CRecord rs(&pMF->m_db);
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		//szWhere.Format(_T(" and hfg_id='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERe substr(hfg_id,1, 1)='A' %s ORDER BY hfg_index "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMBaocaoluuchuyenthuoc::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMBaocaoluuchuyenthuoc::OnSoureSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMBaocaoluuchuyenthuoc::OnSoureSelendok(){
	 
}
/*void CPMBaocaoluuchuyenthuoc::OnSoureSetfocus(){
	
}*/
/*void CPMBaocaoluuchuyenthuoc::OnSoureKillfocus(){
	
}*/
long CPMBaocaoluuchuyenthuoc::OnSoureLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSoure.IsSearchKey() && !m_szSoureKey.IsEmpty()){
		szWhere.Format(_T(" and pmo_id =%d "), ToInt(m_szSoureKey));
	};
	m_wndSoure.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT pmo_id as id, pmo_name as name FROM pms_original WHERE pmo_active ='Y' ORDER BY id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSoure.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMBaocaoluuchuyenthuoc::OnSoureAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMBaocaoluuchuyenthuoc::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnPrintPreview();
} 
void CPMBaocaoluuchuyenthuoc::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnExport();
} 
void CPMBaocaoluuchuyenthuoc::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
int CPMBaocaoluuchuyenthuoc::OnAddPMBaocaoluuchuyenthuoc(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPMBaocaoluuchuyenthuoc::OnEditPMBaocaoluuchuyenthuoc(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMBaocaoluuchuyenthuoc::OnDeletePMBaocaoluuchuyenthuoc(){
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
 		OnCancelPMBaocaoluuchuyenthuoc(); 
 	}
	return 0;
}
int CPMBaocaoluuchuyenthuoc::OnSavePMBaocaoluuchuyenthuoc(){
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
 		//OnPMBaocaoluuchuyenthuocListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPMBaocaoluuchuyenthuoc::OnCancelPMBaocaoluuchuyenthuoc(){
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
int CPMBaocaoluuchuyenthuoc::OnPMBaocaoluuchuyenthuocListLoadData(){
	return 0;
}
void CPMBaocaoluuchuyenthuoc::OnPrintPreview(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,m_szToStockList, szWhere, szDeptID;
	CString m_szGroups, szFromStock, szType, szTypeName;
	UpdateData(true);
	if(pMF->GetModuleID() == _T("PM"))
	{
		if (!rpt.Init(_T("Reports\\HMS\\PMS_THONGKELUUCHUYENTHUOC.RPT")))
			return;
	}
	else
	{
		if (!rpt.Init(_T("Reports\\HMS\\MAS_THONGKELUUCHUYENVATTU.RPT")))
			return;
	}
	szWhere.Empty();			
			
	if (!m_szStockKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND expstockid = %s"),m_szStockKey);
	}

	
	 for (int i=0 ; i<= m_wndToStock.GetCount(); i++)
	 {
		 if(m_wndToStock.GetCheck(i)){
			 m_wndToStock.SetCurSel(i);
		 	if(!szFromStock.IsEmpty())
					szFromStock += _T(",");						
					szFromStock.AppendFormat(_T("%s"), m_wndToStock.GetCurrent(0));			
		 
		 	if (!m_szToStockList.IsEmpty())
				m_szToStockList += _T(", ");
			m_szToStockList.AppendFormat(_T("%s"), m_wndToStock.GetCurrent(1));
		}
	 }
	

	 for (int i=0 ; i<= m_wndType.GetCount(); i++)
	 {
		 if(m_wndType.GetCheck(i)){
			 m_wndType.SetCurSel(i);
		 	if(!szType.IsEmpty())
					szType += _T(",");						
					szType.AppendFormat(_T("%s"), m_wndType.GetCurrent(0));			
			if(!szTypeName.IsEmpty())
					szTypeName += _T(", ");						
			szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		 }
	 }
	
	if(!m_szTypeKey.IsEmpty())	
		szWhere.AppendFormat(_T("  and product_producttype in('%s')"), szType);
	

	if(!m_szSoureKey.IsEmpty())
	{
		//szWhere.AppendFormat(_T(" and pmsi_originalid= %d"), ToInt(m_szSoureKey));
	}
	
	if(pMF->GetModuleID() == _T("PM"))
	{
		szWhere.AppendFormat(_T("  and product_org_id = 'PM'"));
	}
	else
	{
		szWhere.AppendFormat(_T("  and product_org_id = 'MA'"));
	}

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
				CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("ToStock"), m_szToStockList);
	rpt.GetReportHeader()->SetValue(_T("Type"), m_wndType.GetCurrent(1));
	rpt.GetReportHeader()->SetValue(_T("Soucre"), m_wndSoure.GetCurrent(1));
		
	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT idx AS idx,") \
		_T(" typename,") \
		_T(" typeid,") \
		_T(" name,") \
		_T(" unit,") \
		_T(" price,") \
		_T(" SUM(expqty)         AS qty,") \
		_T(" SUM(expqty) * price AS amount") \
		_T(" FROM") \
		_T(" (SELECT hfg_index AS idx,") \
		_T(" hfg_name        AS typename,") \
		_T(" product_producttype      AS typeid,") \
		_T(" product_name        AS name,") \
		_T(" GET_UOMNAME(product_purchase_uomid)        AS unit,") \
		_T(" product_vatprice   AS price,") \
		_T(" expqty") \
		_T(" FROM mev") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (sitemid = product_item_id)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id     = product_producttype)") \
		_T(" WHERE iotype IN('MOV') AND impstockid IN (%s) %s") \
		_T(" AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ) tbl") \
		_T(" GROUP BY idx,") \
		_T(" typeid,") \
		_T(" typename,") \
		_T(" name,") \
		_T(" unit,") \
		_T(" price") \
		_T(" ORDER BY idx,") \
		_T(" typeid"),szFromStock, szWhere, m_szFromDate, m_szToDate );
	CReportSection* rptDetail;
	CString szOldLine, szNewLine, szAmount;
	double grpCost=0.0;
	double ttlCost=0.0;
	double cost = 0;
	int nItem = 1;
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

					
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("typeid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
			CString szField;
			if(grpCost > 0)
			{
				TranslateString(_T("Total"), szAmount);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				rptDetail->SetValue(_T("TotalGroup"), szAmount);						
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("s7"), tmpStr);
				ttlCost += grpCost;
				grpCost = 0;								
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("typename"), tmpStr);
			rptDetail->SetValue(_T("GroupName"),tmpStr );
			szOldLine = szNewLine;
			nItem=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);		
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("price"), cost);
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("qty"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("amount"), cost);	
		grpCost += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.MoveNext();
	}
						
	ttlCost += grpCost;
			
	if(grpCost > 0){	
		TranslateString(_T("Total"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		FormatCurrency(grpCost, tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);			
	}
	if(ttlCost > 0){				
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		FormatCurrency(ttlCost, tmpStr);
		rptDetail->SetValue(_T("s6"), tmpStr);
		ttlCost += grpCost;	
	}
			
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	//UpdateData(false);		
	rpt.PrintPreview();
			
}

void CPMBaocaoluuchuyenthuoc::OnExport(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CReport rpt;	
	int m_nCountList=0;
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,szFromStock, szWhere, szDeptID;
	CString  m_szToStockList, szSumTotal, szTotalAmount,szSumQty, szType, szTypeName;	
	
			
	UpdateData(true);	
		szWhere.Empty();			
			
	if (!m_szStockKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND expstockid = %s "), m_szStockKey);
	}

	
	 for (int i=0 ; i<= m_wndToStock.GetCount(); i++)
	 {
		 if(m_wndToStock.GetCheck(i)){
			 m_wndToStock.SetCurSel(i);
		 	if(!szFromStock.IsEmpty())
					szFromStock += _T(",");						
					szFromStock.AppendFormat(_T("%s"), m_wndToStock.GetCurrent(0));
			
			if (!m_szToStockList.IsEmpty())
				m_szToStockList += _T(", ");
			m_szToStockList.AppendFormat(_T("%s"), m_wndToStock.GetCurrent(1));
		}
	 }
	

	 for (int i=0 ; i<= m_wndType.GetCount(); i++)
	 {
		 if(m_wndType.GetCheck(i)){
			 m_wndType.SetCurSel(i);
		 	if(!szType.IsEmpty())
					szType += _T(",");						
					szType.AppendFormat(_T("%s"), m_wndType.GetCurrent(0));			
			if(!szTypeName.IsEmpty())
					szTypeName += _T(", ");						
			szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		 }
	 }
	
	if(!m_szTypeKey.IsEmpty())	
		szWhere.AppendFormat(_T(" and product_producttype in('%s')"), szType);
	

	if(!m_szSoureKey.IsEmpty())
	{
		//szWhere.AppendFormat(_T(" and pmsi_originalid= %d"), ToInt(m_szSoureKey));
	}

	if(pMF->GetModuleID() == _T("PM"))
	{
		szWhere.AppendFormat(_T("  and product_org_id = 'PM'"));
	}
	else
	{
		szWhere.AppendFormat(_T("  and product_org_id = 'MA'"));
	}

	//Page Header
	//Report Detail
	szSQL.Format(_T(" SELECT idx AS idx,") \
		_T(" typename,") \
		_T(" typeid,") \
		_T(" name,") \
		_T(" unit,") \
		_T(" price,") \
		_T(" SUM(expqty)         AS qty,") \
		_T(" SUM(expqty) * price AS amount") \
		_T(" FROM") \
		_T(" (SELECT hfg_index AS idx,") \
		_T(" hfg_name        AS typename,") \
		_T(" product_producttype      AS typeid,") \
		_T(" product_name        AS name,") \
		_T(" GET_UOMNAME(product_purchase_uomid)        AS unit,") \
		_T(" product_vatprice   AS price,") \
		_T(" expqty") \
		_T(" FROM mev") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON (sitemid = product_item_id)") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id     = product_producttype)") \
		_T(" WHERE iotype IN('MOV') AND impstockid IN (%s) %s") \
		_T(" AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" ) tbl") \
		_T(" GROUP BY idx,") \
		_T(" typeid,") \
		_T(" typename,") \
		_T(" name,") \
		_T(" unit,") \
		_T(" price") \
		_T(" ORDER BY idx,") \
		_T(" typeid"),szFromStock, szWhere, m_szFromDate, m_szToDate );
	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	double grpCost=0.0;
	double ttlCost=0.0;
	double cost = 0;
	long qty=0;
	int nItem = 1;
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

					
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0,3,5+m_nCountList +2);	
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"),FMT_TEXT,true,11,0);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TWQ\x110 \x31\x30\x38"),FMT_TEXT,true,11,0);

	if(pMF->GetModuleID() == _T("PM"))
	{
		xls.SetCellText(0, 3, _T("Th\x1ED1ng k\xEA thu\x1ED1\x63 l\x1B0u \x63huy\x1EC3n"),FMT_TEXT,true,14,0);
	}
	else
	{
		xls.SetCellText(0, 3, _T("Th\x1ED1ng k\xEA l\x1B0u \x63huy\x1EC3n v\x1EADt t\x1B0 \x2013 v\x103n ph\xF2ng ph\x1EA9m"),FMT_TEXT,true,14,0);
	}

	xls.SetCellText(0, 3, _T("Th\x1ED1ng k\xEA thu\x1ED1\x63 l\x1B0u \x63huy\x1EC3n"),FMT_TEXT,true,14,0);
	xls.SetCellMergedColumns(0,4,9);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 4, tmpStr,FMT_TEXT,true,12,0);

	

	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
				CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	TranslateString(_T("From Stock"), tmpStr);
	xls.SetCellText(0, 7,tmpStr + _T(":") + m_wndStock.GetCurrent(1));
	TranslateString(_T("To Stock"), tmpStr);
	xls.SetCellText(0, 8,tmpStr + _T(":") +m_szToStockList);
	TranslateString(_T("Type"), tmpStr);
	xls.SetCellText(0, 9,tmpStr + _T(":") + m_wndType.GetCurrent(1));

	int nRow = 10;
	xls.SetCellText(0, nRow, _T("STT"),FMT_TEXT,true,11,0);	
	TranslateString(_T("Drug Name"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr,FMT_TEXT,true,11,0);
	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr,FMT_TEXT,true,11,0);	
	TranslateString(_T("Price"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr,FMT_TEXT,true,11,0);
	TranslateString(_T("Qty"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr,FMT_TEXT,true,11,0);	
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr,FMT_TEXT,true,11,0);	
	
			
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("typeid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
			if(grpCost > 0)
			{			
				CString szField, szAmount;
				nRow ++;
				TranslateString(_T("Total"), szAmount);
				xls.SetCellMergedColumns(1,nRow,4);
				xls.SetCellText(1, nRow, szAmount, FMT_TEXT,true,11,0);
				tmpStr.Format(_T("%.2f"), grpCost);
				xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1,true,11,0);
				ttlCost += grpCost;
				grpCost = 0;								
				nItem=1;
			}
			nRow ++;			
			xls.SetCellMergedColumns(0,nRow,5);
			rs.GetValue(_T("typename"), tmpStr);
			xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,11,0);
			szOldLine = szNewLine;
			nItem=1;
		}

		nRow ++;		
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_NUMBER1);	
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);		
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr, FMT_NUMBER1);		
		rs.GetValue(_T("qty"), qty);
		tmpStr.Format(_T("%ld"), qty);
		xls.SetCellText(4,nRow,tmpStr, FMT_NUMBER1);				
		rs.GetValue(_T("Amount"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost+=cost;
		xls.SetCellText(5,nRow,tmpStr, FMT_NUMBER1);	
	
		rs.MoveNext();
	}
	ttlCost += grpCost;
	if(grpCost > 0){
		nRow++;
		TranslateString(_T("Total"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,4);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
		tmpStr.Format(_T("%.2f"), grpCost);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1,true,11,0);		
	}
	if(ttlCost > 0){
		nRow++;
		TranslateString(_T("Total Amount"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,4);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
		tmpStr.Format(_T("%.2f"), ttlCost);
		xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1,true,11,0);		
	}
	if(pMF->GetModuleID() == _T("PM"))
	{
		xls.Save(_T("Exports\\Thongkeluuchuyenthuoc.xls"));
	}
	else
	{
		xls.Save(_T("Exports\\Thongkeluuchuyenvattu.xls"));
	}
}

