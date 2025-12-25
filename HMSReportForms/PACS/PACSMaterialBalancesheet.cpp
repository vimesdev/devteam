#include "stdafx.h"
#include "PACSMaterialBalancesheet.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

static int _OnCheckAllFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnUnCheckAll();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSMaterialBalancesheet *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPACSMaterialBalancesheet *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMaterialBalancesheet* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPACSMaterialBalancesheet *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMaterialBalancesheet* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPACSMaterialBalancesheet *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnTypeAddNew();
}*/

static void _OnOriginalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSMaterialBalancesheet* )pWnd)->OnOriginalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOriginalSelendokFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnOriginalSelendok();
}
/*static void _OnOriginalSetfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnOriginalKillfocus();
}*/
/*static void _OnOriginalKillfocusFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnOriginalKillfocus();
}*/
static long _OnOriginalLoadDataFnc(CWnd *pWnd){
	return ((CPACSMaterialBalancesheet *)pWnd)->OnOriginalLoadData();
}
/*static void _OnOriginalAddNewFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet *)pWnd)->OnOriginalAddNew();
}*/


static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPACSMaterialBalancesheet *pVw = (CPACSMaterialBalancesheet *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSMaterialBalancesheet *pVw = (CPACSMaterialBalancesheet *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSMaterialBalancesheet *pVw = (CPACSMaterialBalancesheet *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPACSMaterialBalancesheet *pVw = (CPACSMaterialBalancesheet *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CPACSMaterialBalancesheet*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CPACSMaterialBalancesheet*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSMaterialBalancesheet*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnListFacDeleteItem();
} 
static int _OnAddPACSMaterialBalancesheetFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnAddPACSMaterialBalancesheet();
} 
static int _OnEditPACSMaterialBalancesheetFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnEditPACSMaterialBalancesheet();
} 
static int _OnDeletePACSMaterialBalancesheetFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnDeletePACSMaterialBalancesheet();
} 
static int _OnSavePACSMaterialBalancesheetFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnSavePACSMaterialBalancesheet();
} 
static int _OnCancelPACSMaterialBalancesheetFnc(CWnd *pWnd){
	 return ((CPACSMaterialBalancesheet*)pWnd)->OnCancelPACSMaterialBalancesheet();
} 
CPACSMaterialBalancesheet::CPACSMaterialBalancesheet(CWnd *pParent)
	{

	m_nDlgWidth = 585;
	m_nDlgHeight = 590;
//	m_szTitle=_T("Bao cao xuat thuoc cho khoa");
	SetDefaultValues();
}
CPACSMaterialBalancesheet::~CPACSMaterialBalancesheet(){
}
void CPACSMaterialBalancesheet::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 550);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,95, 60, 425, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this,95, 90, 425, 115); 
	m_wndOriginalLabel.Create(this, _T("Original"), 10, 120, 90, 145);
	m_wndOriginal.Create(this,95, 120, 425, 145); 
	m_wndCheck.Create(this, _T("Sort by group"), 5, 555, 160, 580);
	//m_wndPrintPreview.Create(this, _T("&Print Preview"), 240, 555, 340, 580);
	m_wndExport.Create(this, _T("&Export"), 345, 555, 425, 580);
	m_wndListFac.Create(this,10, 150, 425, 545);

}
void CPACSMaterialBalancesheet::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER|CFMT_RIGHT, 80);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndOriginal.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndOriginal.InsertColumn(1, _T("Description"), CFMT_TEXT, 120);


	m_wndListFac.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndListFac.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndListFac.SetCheckBox(TRUE);
	

}
void CPACSMaterialBalancesheet::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	m_wndOriginal.SetEvent(WE_SELENDOK, _OnOriginalSelendokFnc);
	//m_wndOriginal.SetEvent(WE_SETFOCUS, _OnOriginalSetfocusFnc);
	//m_wndOriginal.SetEvent(WE_KILLFOCUS, _OnOriginalKillfocusFnc);
	m_wndOriginal.SetEvent(WE_SELCHANGE, _OnOriginalSelectChangeFnc);
	m_wndOriginal.SetEvent(WE_LOADDATA, _OnOriginalLoadDataFnc);
	//m_wndOriginal.SetEvent(WE_ADDNEW, _OnOriginalAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndListFac.SetEvent(WE_SELCHANGE, _OnListFacSelectChangeFnc);
	m_wndListFac.SetEvent(WE_LOADDATA, _OnListFacLoadDataFnc);
	m_wndListFac.SetEvent(WE_DBLCLICK, _OnListFacDblClickFnc);	
	m_wndListFac.AddEvent(1, _T("Check All"), _OnCheckAllFnc, 0, VK_DELETE, 0);
	m_wndListFac.AddEvent(2, _T("UnCheck All"), _OnUnCheckAllFnc, 0, VK_DELETE, 0);
	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	OnListFacLoadData();
	UpdateData(FALSE);

}
void CPACSMaterialBalancesheet::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndOriginal.GetDlgCtrlID(), m_szOriginalKey);
	DDX_Check(pDX, m_wndCheck.GetDlgCtrlID(), m_bCheck);

}
void CPACSMaterialBalancesheet::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSMaterialBalancesheet::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPACSMaterialBalancesheet::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szOriginalKey.Empty();

}
int CPACSMaterialBalancesheet::SetMode(int nMode){
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
/*void CPACSMaterialBalancesheet::OnFromDateChange(){
	
} */
/*void CPACSMaterialBalancesheet::OnFromDateSetfocus(){
	
} */
/*void CPACSMaterialBalancesheet::OnFromDateKillfocus(){
	
} */
int CPACSMaterialBalancesheet::OnFromDateCheckValue(){
	return 0;
} 
/*void CPACSMaterialBalancesheet::OnToDateChange(){
	
} */
/*void CPACSMaterialBalancesheet::OnToDateSetfocus(){
	
} */
/*void CPACSMaterialBalancesheet::OnToDateKillfocus(){
	
} */
int CPACSMaterialBalancesheet::OnToDateCheckValue(){
	return 0;
} 
void CPACSMaterialBalancesheet::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMaterialBalancesheet::OnStockSelendok(){
	 
}
/*void CPACSMaterialBalancesheet::OnStockSetfocus(){
	
}*/
/*void CPACSMaterialBalancesheet::OnStockKillfocus(){
	
}*/
long CPACSMaterialBalancesheet::OnStockLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStorages;

	szSQL.Format(_T("SELECT mup_stocks FROM m_userperm WHERE mup_userid='%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("mup_stocks"), szStorages);

	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND msl_storage_id= '%s'"), m_szStockKey);
	};
	//szWhere.AppendFormat(_T(" and pmssl_storage_id in(%s) "), pMF->m_szStorages);
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE msl_org_id = 'MA' AND msl_storage_id IN(%s) %s ORDER BY msl_type, msl_storage_id"), szStorages, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSMaterialBalancesheet::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSMaterialBalancesheet::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMaterialBalancesheet::OnTypeSelendok(){
	 
}
/*void CPACSMaterialBalancesheet::OnTypeSetfocus(){
	
}*/
/*void CPACSMaterialBalancesheet::OnTypeKillfocus(){
	
}*/
long CPACSMaterialBalancesheet::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id='pms_export_type' and ss_code in('B','C')  %s"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPACSMaterialBalancesheet::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPACSMaterialBalancesheet::OnOriginalSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPACSMaterialBalancesheet::OnOriginalSelendok(){
	 
}
/*void CPACSMaterialBalancesheet::OnOriginalSetfocus(){
	
}*/
/*void CPACSMaterialBalancesheet::OnOriginalKillfocus(){
	
}*/
long CPACSMaterialBalancesheet::OnOriginalLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOriginal.IsSearchKey() && !m_szOriginalKey.IsEmpty()){
		szWhere.Format(_T(" and mpr_product_resource_id=%d"), str2int(m_szOriginalKey));
	};
	szWhere.AppendFormat(_T(" AND mpr_org_id = '%s'"), pMF->GetModuleID());
	m_wndOriginal.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM m_product_resource WHERE mpr_isactive='Y' %s ORDER BY mpr_product_resource_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOriginal.AddItems(
			rs.GetValue(_T("mpr_product_resource_id")), 
			rs.GetValue(_T("mpr_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*
void CPACSMaterialBalancesheet::OnOriginalAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
*/
void CPACSMaterialBalancesheet::OnPrintPreviewSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//UpdateData(true);
	OnPrintBaocaoxuathuocchokhoatheodoituong();
	//UpdateData(false);
} 
void CPACSMaterialBalancesheet::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//UpdateData(true);
	OnExportBaocaoxuathuocchokhoatheodoituong();
	//UpdateData(false);
} 
void CPACSMaterialBalancesheet::OnExportSelect(){

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//UpdateData(true);
	OnExportBaocaoxuathuocchokhoatheodoituong();
	//UpdateData(false);
} 
void CPACSMaterialBalancesheet::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 

int CPACSMaterialBalancesheet::OnCheckAll()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, true);
	}
	 return 0;
} 
int CPACSMaterialBalancesheet::OnUnCheckAll(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, false);
	}
	 return 0;
} 

void CPACSMaterialBalancesheet::OnListFacDblClick(){
	
} 
void CPACSMaterialBalancesheet::OnListFacSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CPACSMaterialBalancesheet::OnListFacDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 

long CPACSMaterialBalancesheet::OnListFacLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	m_wndListFac.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_id = 'C8' order by  sd_index,sd_type "));
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
int CPACSMaterialBalancesheet::OnAddPACSMaterialBalancesheet(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSMaterialBalancesheet::OnEditPACSMaterialBalancesheet(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSMaterialBalancesheet::OnDeletePACSMaterialBalancesheet(){
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
 		OnCancelPACSMaterialBalancesheet(); 
 	}
	return 0;
}
int CPACSMaterialBalancesheet::OnSavePACSMaterialBalancesheet(){
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
 		//OnPACSMaterialBalancesheetListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSMaterialBalancesheet::OnCancelPACSMaterialBalancesheet(){
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
int CPACSMaterialBalancesheet::OnPACSMaterialBalancesheetListLoadData(){
	return 0;
}

void CPACSMaterialBalancesheet::OnPrintBaocaoxuathuocchokhoatheodoituong(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,m_szFacList, szWhere, szDeptID, szOrderby;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;
	CString szType, szTypeName, szStorages;
	
	if(!rpt.Init(_T("Reports/HMS/PM_BAOCAOTINHHINHSUDUNGTAIDONVI.RPT"),true) )
	{
		return;
	}
	szWhere.Empty();
	
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and expstockid IN(%s) "), szStorages);
	}

	for (int i=0 ; i<= m_wndType.GetCount(); i++)
	{
		 if(m_wndType.GetCheck(i)){
			 m_wndType.SetCurSel(i);
		 	if(!szType.IsEmpty())
					szType += _T(",");						
					szType.AppendFormat(_T("'%s'"), m_wndType.GetCurrent(0));			
			if(!szTypeName.IsEmpty())
					szTypeName += _T(", ");						
			szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		 }
	 }
	
	if(!m_szTypeKey.IsEmpty())	
	{
		if (m_szTypeKey == _T("B"))
			szWhere.AppendFormat(_T(" and iotype = 'DMO'"));
		else if (m_szTypeKey == _T("C"))
			szWhere.AppendFormat(_T(" and iotype = 'CSO'"));
	}	
	
	if(!m_szOriginalKey.IsEmpty())
		szWhere.AppendFormat(_T(" and product_resourceid=%d"), str2int(m_szOriginalKey));
	//szWhere.AppendFormat(_T(" AND product_org_id = '%s'"), pMF->GetModuleID());
	
	for (int i=0; i< m_wndListFac.GetItemCount(); i++)
	{
		if(m_wndListFac.GetCheck(i))
		{
			szDeptID.Format(_T("\"ID%s\""),m_wndListFac.GetItemText(i, 0));

			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");						
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
			if (!szCaseDept.IsEmpty())
				szCaseDept +=_T(",");
			szCaseDept.AppendFormat(_T(" case when deptid='%s' then expqty else 0 end as %s "),m_wndListFac.GetItemText(i, 0),szDeptID);				
					
			if(!szSumDept.IsEmpty())
				szSumDept += _T(",");						
			szSumDept.AppendFormat(_T(" sum(%s) as %s"), szDeptID,szDeptID);

			if(!szSumTotal.IsEmpty())
				szSumTotal += _T("+");						
				szSumTotal.AppendFormat(_T("%s"), szDeptID);					

			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));
			}			
	}
	if (m_szFacList.IsEmpty())
	{
		AfxMessageBox(_T("Choose a department!"), MB_ICONASTERISK);
		return;
	}
	if (!szSumTotal.IsEmpty())
	{
		szTotalAmount.Format(_T(" sum(%s) * price as totalAmount "), szSumTotal);
		szSumQty.Format(_T(" sum(%s) as expqty "), szSumTotal);
	}
	if (m_bCheck)
		szOrderby.Format(_T("ORDER BY idx,groupname,name"));
	else
		szOrderby.Format(_T("ORDER BY name"));
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDateTime(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm ),
		CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	if (!m_szStockKey.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("StockName"), m_wndStock.GetCurrent(1));
	else
		rpt.GetReportHeader()->SetValue(_T("StockName"), _T("To\xE0n \x62\x1ED9"));
	if (!m_szFacList.IsEmpty())
		if (m_szFacList.Find(',') > 0)
			rpt.GetReportHeader()->SetValue(_T("Department"), _T("Nhi\x1EC1u kho\x61"));
		else
			rpt.GetReportHeader()->SetValue(_T("Department"), m_szFacList);
	else
		rpt.GetReportHeader()->SetValue(_T("Department"), _T("To\xE0n \x62\x1ED9"));

	//rpt.GetReportHeader()->SetValue(_T("Department"), m_szFacList);
	rpt.GetReportHeader()->SetValue(_T("InsFlag"),m_szInsFlag);
	rpt.GetReportHeader()->SetValue(_T("ChildFlag"),m_szChildFlag);
	rpt.GetReportHeader()->SetValue(_T("FreeFlag"),m_szFreeFlag);
	rpt.GetReportHeader()->SetValue(_T("ServiceFlag"),m_szServiceFlag);
	//Page Header
	//Report Detail
		

	szSQL.Format(_T(" SELECT idx,groupname,id, name,unit,price, lot, expdte, %s,%s, %s FROM (") \
	_T(" 	SELECT product_categoryid as idx, product_categoryname as groupname,product_code as id, product_name as name,product_uomname as unit,") \
	_T("	product_vatprice as price, product_lotno as lot, product_expdate as expdte,") \
	_T("	%s") \
	_T(" 	FROM mev ") \
	_T(" 	LEFT JOIN m_productitem_view ON(product_item_id=sitemid)") \
	_T(" 	WHERE expqty > 0 AND deptid in(%s) and expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
	_T(" 	) tbl") \
	_T(" GROUP BY idx,groupname,id, name,unit,price, lot, expdte") \
	_T(" %s"),szSumDept,szSumQty, szTotalAmount, szCaseDept, m_szGroups, m_szFromDate, m_szToDate,szWhere, szOrderby);
	CReportSection* rptDetail;
	CString szOldLine, szNewLine, szAmount;
	CRecord rs(&pMF->m_db);
	double grpCost=0.0;
	double ttlCost=0.0;
	double cost = 0;
	int nItem = 1;
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessage(150, MB_ICONSTOP);
		return ;
	}

	while(!rs.IsEOF())
	{
		if (m_bCheck)
		{
			rs.GetValue(_T("idx"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{
					TranslateString(_T("Total Group"), szAmount);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->SetValue(_T("TotalGroup"), szAmount);						
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s8"), tmpStr);
					ttlCost += grpCost;						
					grpCost = 0;								
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				tmpStr.Format(_T("%s. %s"), szNewLine, rs.GetValue(_T("groupname")));
				rptDetail->SetValue(_T("GroupName"),tmpStr );
				szOldLine = szNewLine;
				nItem=1;
			}
		}
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nItem++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//rs.GetValue(_T("name"), tmpStr);
		//rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("lot"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("expdte"), tmpStr);
		rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("expqty"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("price"), cost);
		//FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("7"), double2str(cost));
		rs.GetValue(_T("totalAmount"), cost);	
		grpCost += cost;
		//FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("8"), double2str(cost));
		rs.MoveNext();
	}
						
	ttlCost += grpCost;
	if (m_bCheck)
	{
		if(grpCost > 0){	
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			FormatCurrency(grpCost, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);			
		}
	}
	if(ttlCost > 0){				
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		FormatCurrency(ttlCost, tmpStr);
		rptDetail->SetValue(_T("s8"), tmpStr);
		ttlCost += grpCost;	
	}
			
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	EndWaitCursor();
	rpt.PrintPreview();
			
}

void CPACSMaterialBalancesheet::OnExportBaocaoxuathuocchokhoatheodoituong(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CString tmpStr, szSQL, szWhere, szTemp, szOrderby, m_szDepts;
	CString szType, szTypeName, szStorages;		
	int m_nCountList=0;
	for (int i = 0; i < m_wndStock.GetItemCount(); i++)
	{
		if (m_wndStock.GetCheck(i))
		{
			m_wndStock.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStock.GetCurrent(0);
		}
	}
	if (!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and expstockid IN(%s) "), szStorages);
	}

	for (int i=0 ; i<= m_wndType.GetCount(); i++)
	 {
		 if(m_wndType.GetCheck(i)){
			 m_wndType.SetCurSel(i);
		 	if(!szType.IsEmpty())
					szType += _T(",");						
					szType.AppendFormat(_T("'%s'"), m_wndType.GetCurrent(0));			
			if(!szTypeName.IsEmpty())
					szTypeName += _T(", ");						
			szTypeName.AppendFormat(_T("%s"), m_wndType.GetCurrent(1));
		 }
	 }
	
	if(!m_szTypeKey.IsEmpty())	
	{
		if (m_szTypeKey == _T("B"))
			szWhere.AppendFormat(_T(" and iotype = 'DMO'"));
		else if (m_szTypeKey == _T("C"))
			szWhere.AppendFormat(_T(" and iotype = 'CSO'"));
	}
	
	if(!m_szOriginalKey.IsEmpty())
		szWhere.AppendFormat(_T(" and product_resourceid=%d"), str2int(m_szOriginalKey));

	for (int i=0; i< m_wndListFac.GetItemCount(); i++)
	{
		if(!m_szDepts.IsEmpty())
			m_szDepts += _T(",");						
		m_szDepts.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));			
	}

	if (m_bCheck)
		szOrderby.Format(_T("ORDER BY idx,groupname,name"));
	else
		szOrderby.Format(_T("ORDER BY name"));
			
	szSQL.Format(_T(" SELECT idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   0                AS toncu,") \
		_T("   SUM(qty)         AS linhmoi,") \
		_T("   SUM(qty)         AS cong,") \
		_T("   SUM(qty)         AS soluong,") \
		_T("   SUM(qty) * price AS thanhtien,") \
		_T("   0                AS cuoithang") \
		_T(" FROM") \
		_T("   (SELECT product_categoryid AS idx,") \
		_T("     product_categoryname     AS groupname,") \
		_T("     product_code             AS id,") \
		_T("     product_name             AS name,") \
		_T("     product_uomname          AS unit,") \
		_T("     product_vatprice         AS price,") \
		_T("     expqty                   AS qty") \
		_T("   FROM mev") \
		_T("   LEFT JOIN m_productitem_view") \
		_T("   ON(product_item_id=sitemid)") \
		_T("   WHERE expqty > 0 AND product_org_id = 'MA' AND substr(expinvoice, 1, 2) = 'TT' AND deptid in(%s)") \
		_T("   AND expdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   %s") \
		_T("   ) tbl") \
		_T(" GROUP BY idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price %s"), m_szDepts, m_szFromDate, m_szToDate, szWhere, szOrderby);
	CString szOldLine, szNewLine;
	CString szOldGroupName, szNewGroupName;
	CRecord rs(&pMF->m_db);
	double grpCost=0.0, ttlCost = 0.0;
	double cost = 0;
	long qty=0;
	int nItem = 1;

	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 5);	xls.SetColumnWidth(1, 40);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 10);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 20);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 20);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 2, _T("T\x1ED4NG H\x1EE2P QUY\x1EBET TO\xC1N V\x1EACT T\x1AF TI\xCAU H\x41O \x42\x1EC6NH NH\xC2N \x44\x1ECA\x43H V\x1EE4"),FMT_TEXT | FMT_CENTER, true, 14);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 4, _T("T\xEAn v\x1EADt t\x1B0 ti\xEAu h\x61o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(2, 4, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(3, 4, _T("T\x1ED3n \x63\x169"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(4, 4, _T("L\x129nh m\x1EDBi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(5, 4, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 4, _T("S\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(6, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(7, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 4, _T("T\x1ED3n \x63u\x1ED1i th\xE1ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(8, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(9, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetMerge(0, 0, 0, 1);	xls.SetMerge(1, 1, 0, 1);	xls.SetMerge(2, 2, 0, 9);	xls.SetMerge(3, 3, 0, 9);	xls.SetMerge(4, 5, 0, 0);	xls.SetMerge(4, 5, 1, 1);	xls.SetMerge(4, 5, 2, 2);	xls.SetMerge(4, 5, 3, 3);	xls.SetMerge(4, 5, 4, 4);	xls.SetMerge(4, 5, 5, 5);	xls.SetMerge(4, 4, 6, 7);	xls.SetMerge(4, 4, 8, 9);
	
	int nRow = 6;	int nCol = 0;

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	while(!rs.IsEOF())
	{
		if (m_bCheck)
		{
			rs.GetValue(_T("idx"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){	
				if(grpCost > 0)
				{			
					CString szField, szAmount;
					TranslateString(_T("\x43\x1ED9ng:"), szAmount);
					xls.SetCellText(1, nRow, szAmount, FMT_TEXT,true,11,0);
					tmpStr.Format(_T("%.2f"), grpCost);
					xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1,true,11,0);
					nRow++;
					ttlCost += grpCost;
					grpCost = 0;
					nItem=1;
				}			
				xls.SetCellMergedColumns(0,nRow,10);	
				tmpStr.Format(_T("%s) %s"), szNewLine, rs.GetValue(_T("groupname")));
				xls.SetCellText(0, nRow, tmpStr, FMT_TEXT,true,10,0);
				nRow++;
				szOldLine = szNewLine;
				nItem=1;
			}
		}
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_NUMBER1);		
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("toncu"), tmpStr);		
		xls.SetCellText(3,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("linhmoi"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr, FMT_NUMBER1);
		rs.GetValue(_T("cong"), tmpStr);
		xls.SetCellText(5,nRow,tmpStr, FMT_NUMBER1);		
		rs.GetValue(_T("soluong"), qty);
		xls.SetCellText(6,nRow,tmpStr, FMT_NUMBER1);				
		rs.GetValue(_T("thanhtien"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost+=cost;
		xls.SetCellText(7,nRow,tmpStr, FMT_NUMBER1);	
		rs.GetValue(_T("cuoithang"), tmpStr);
		xls.SetCellText(8,nRow,tmpStr, FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	ttlCost += grpCost;
	if (m_bCheck)
	{
		if(grpCost > 0){
			TranslateString(_T("\x43\x1ED9ng:"), tmpStr);		
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
			tmpStr.Format(_T("%.2f"), grpCost);
			xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1,true,11,0);
			nRow++;
		}
	}
	if(ttlCost > 0){
		TranslateString(_T("T\x1ED5ng ti\x1EC1n:"), tmpStr);		
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
		tmpStr.Format(_T("%.2f"), ttlCost);
		xls.SetCellText(7, nRow, tmpStr, FMT_NUMBER1,true,11,0);		
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Quyettoanvattutieuhao.xls"));
}
BEGIN_MESSAGE_MAP(CPACSMaterialBalancesheet, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CPACSMaterialBalancesheet::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
