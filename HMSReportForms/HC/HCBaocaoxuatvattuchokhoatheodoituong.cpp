#include "stdafx.h"
#include "HCBaocaoxuatvattuchokhoatheodoituong.h"
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

static int _OnCheckAllFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnCheckAll();
} 
static int _OnUnCheckAllFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnUnCheckAll();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCBaocaoxuatvattuchokhoatheodoituong* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCBaocaoxuatvattuchokhoatheodoituong* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnTypeAddNew();
}*/

static void _OnOriginalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHCBaocaoxuatvattuchokhoatheodoituong* )pWnd)->OnOriginalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOriginalSelendokFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnOriginalSelendok();
}
/*static void _OnOriginalSetfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnOriginalKillfocus();
}*/
/*static void _OnOriginalKillfocusFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnOriginalKillfocus();
}*/
static long _OnOriginalLoadDataFnc(CWnd *pWnd){
	return ((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnOriginalLoadData();
}
/*static void _OnOriginalAddNewFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd)->OnOriginalAddNew();
}*/


static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHCBaocaoxuatvattuchokhoatheodoituong *pVw = (CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHCBaocaoxuatvattuchokhoatheodoituong *pVw = (CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHCBaocaoxuatvattuchokhoatheodoituong *pVw = (CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHCBaocaoxuatvattuchokhoatheodoituong *pVw = (CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListFacLoadDataFnc(CWnd *pWnd){
	return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnListFacLoadData();
} 
static void _OnListFacDblClickFnc(CWnd *pWnd){
	((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnListFacDblClick();
} 
static void _OnListFacSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnListFacSelectChange(nOldItem, nNewItem);
} 
static int _OnListFacDeleteItemFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnListFacDeleteItem();
} 
static int _OnAddMABaocaoxuatvattuchokhoatheodoituongFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnAddMABaocaoxuatvattuchokhoatheodoituong();
} 
static int _OnEditMABaocaoxuatvattuchokhoatheodoituongFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnEditMABaocaoxuatvattuchokhoatheodoituong();
} 
static int _OnDeleteMABaocaoxuatvattuchokhoatheodoituongFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnDeleteMABaocaoxuatvattuchokhoatheodoituong();
} 
static int _OnSaveMABaocaoxuatvattuchokhoatheodoituongFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnSaveMABaocaoxuatvattuchokhoatheodoituong();
} 
static int _OnCancelMABaocaoxuatvattuchokhoatheodoituongFnc(CWnd *pWnd){
	 return ((CHCBaocaoxuatvattuchokhoatheodoituong*)pWnd)->OnCancelMABaocaoxuatvattuchokhoatheodoituong();
}

static void _OnPreviewV2SelectFnc(CWnd *pWnd){
	CHCBaocaoxuatvattuchokhoatheodoituong *pVw = (CHCBaocaoxuatvattuchokhoatheodoituong *)pWnd;
	pVw->OnPreviewV2Select();
} 

CHCBaocaoxuatvattuchokhoatheodoituong::CHCBaocaoxuatvattuchokhoatheodoituong(CWnd *pParent)
	{
	m_nDlgWidth = 585;
	m_nDlgHeight = 590;
//	m_szTitle=_T("Bao cao xuat thuoc cho khoa");
	SetDefaultValues();
}
CHCBaocaoxuatvattuchokhoatheodoituong::~CHCBaocaoxuatvattuchokhoatheodoituong()
{
}
void CHCBaocaoxuatvattuchokhoatheodoituong::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 506);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.SetCheckBox(true);
	m_wndStock.Create(this,95, 60, 570, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this,95, 90, 570, 115); 
	m_wndOriginalLabel.Create(this, _T("Original"), 10, 120, 90, 145);
	m_wndOriginal.Create(this,95, 120, 570, 145); 
	m_wndCheck.Create(this, _T("Sort by group"), 5, 512, 160, 537);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 380, 512, 490, 537);
	m_wndPrint.Create(this, _T("&Print(KHTH)"), 262, 512, 375, 537);
	m_wndExport.Create(this, _T("&Export"), 495, 512, 575, 537);
	m_wndListFac.Create(this,10, 150, 570, 502); 
	m_wndPreviewV2.Create(this, _T("Preview (PCNMT)"), 262, 541, 575, 566);
}
void CHCBaocaoxuatvattuchokhoatheodoituong::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndListFac.SetCheckBox(true);
	

}
void CHCBaocaoxuatvattuchokhoatheodoituong::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
	m_wndPreviewV2.SetEvent(WE_CLICK, _OnPreviewV2SelectFnc);

	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	OnListFacLoadData();
	SetMode(VM_EDIT);

}
void CHCBaocaoxuatvattuchokhoatheodoituong::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndOriginal.GetDlgCtrlID(), m_szOriginalKey);
	DDX_Check(pDX, m_wndCheck.GetDlgCtrlID(), m_bCheck);

}
void CHCBaocaoxuatvattuchokhoatheodoituong::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHCBaocaoxuatvattuchokhoatheodoituong::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CHCBaocaoxuatvattuchokhoatheodoituong::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szOriginalKey.Empty();

}
int CHCBaocaoxuatvattuchokhoatheodoituong::SetMode(int nMode){
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
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnFromDateChange(){
	
} */
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnFromDateSetfocus(){
	
} */
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnFromDateKillfocus(){
	
} */
int CHCBaocaoxuatvattuchokhoatheodoituong::OnFromDateCheckValue(){
	return 0;
}

void CHCBaocaoxuatvattuchokhoatheodoituong::OnPreviewV2Select()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnPrintBaocaoxuathuocchokhoatheodoituong_pcnmt();
	
} 
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnToDateChange(){
	
} */
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnToDateSetfocus(){
	
} */
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnToDateKillfocus(){
	
} */
int CHCBaocaoxuatvattuchokhoatheodoituong::OnToDateCheckValue(){
	return 0;
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnStockSelendok(){
	 
}
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnStockSetfocus(){
	
}*/
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnStockKillfocus(){
	
}*/
long CHCBaocaoxuatvattuchokhoatheodoituong::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0){
		szWhere.Format(_T(" AND msl_storage_id=%d"), ToInt(m_szStockKey));
	};
	//szWhere.AppendFormat(_T(" and pmssl_storage_id in(%s) "), pMF->m_szStorages);
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE 1=1 %s ORDER BY msl_type, msl_storage_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCBaocaoxuatvattuchokhoatheodoituong::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnTypeSelendok(){
	 
}
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnTypeSetfocus(){
	
}*/
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnTypeKillfocus(){
	
}*/
long CHCBaocaoxuatvattuchokhoatheodoituong::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CHCBaocaoxuatvattuchokhoatheodoituong::OnOriginalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnOriginalSelendok(){
	 
}
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnOriginalSetfocus(){
	
}*/
/*void CHCBaocaoxuatvattuchokhoatheodoituong::OnOriginalKillfocus(){
	
}*/
long CHCBaocaoxuatvattuchokhoatheodoituong::OnOriginalLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

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
void CHCBaocaoxuatvattuchokhoatheodoituong::OnOriginalAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
*/
void CHCBaocaoxuatvattuchokhoatheodoituong::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//UpdateData(true);
	OnPrintBaocaoxuathuocchokhoatheodoituong();
	//UpdateData(false);
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnPrintSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//UpdateData(true);
	OnPrintBaocaoxuathuocchokhoatheodoituong_khth();
	//UpdateData(false);
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnExportSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//UpdateData(true);
	OnExportBaocaoxuathuocchokhoatheodoituong();
	//UpdateData(false);
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 

int CHCBaocaoxuatvattuchokhoatheodoituong::OnCheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, true);
	}
	 return 0;
} 
int CHCBaocaoxuatvattuchokhoatheodoituong::OnUnCheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		m_wndListFac.SetCheck(i, false);
	}
	 return 0;
} 

void CHCBaocaoxuatvattuchokhoatheodoituong::OnListFacDblClick(){
	
} 
void CHCBaocaoxuatvattuchokhoatheodoituong::OnListFacSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CHCBaocaoxuatvattuchokhoatheodoituong::OnListFacDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 

long CHCBaocaoxuatvattuchokhoatheodoituong::OnListFacLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListFac.BeginLoad(); 
	m_wndListFac.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept order by  sd_index,sd_type "));
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
int CHCBaocaoxuatvattuchokhoatheodoituong::OnAddMABaocaoxuatvattuchokhoatheodoituong(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHCBaocaoxuatvattuchokhoatheodoituong::OnEditMABaocaoxuatvattuchokhoatheodoituong(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHCBaocaoxuatvattuchokhoatheodoituong::OnDeleteMABaocaoxuatvattuchokhoatheodoituong(){
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
 		OnCancelMABaocaoxuatvattuchokhoatheodoituong(); 
 	}
	return 0;
}
int CHCBaocaoxuatvattuchokhoatheodoituong::OnSaveMABaocaoxuatvattuchokhoatheodoituong(){
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
 		//OnMABaocaoxuatvattuchokhoatheodoituongListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHCBaocaoxuatvattuchokhoatheodoituong::OnCancelMABaocaoxuatvattuchokhoatheodoituong(){
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
int CHCBaocaoxuatvattuchokhoatheodoituong::OnMABaocaoxuatvattuchokhoatheodoituongListLoadData(){
	return 0;
}

void CHCBaocaoxuatvattuchokhoatheodoituong::OnPrintBaocaoxuathuocchokhoatheodoituong()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,m_szFacList, szWhere, szDeptID, szOrderby, szReportTitle, szPath;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;
	CString szType, szTypeName, szStorages;
	
	/*if(!rpt.Init(_T("Reports/HMS/PM_BAOCAOTINHHINHSUDUNGTAIDONVI.RPT"),true) )
	{
		return;
	}*/
	//if(pMF->GetModuleID() == _T("PM"))
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PM_BAOCAOTINHHINHSUDUNGTAIDONVI.RPT"),true) )
	//		return;
	//}
	//else if (pMF->GetModuleID() == _T("MA"))
	//{
	//	if(!rpt.Init(_T("Reports/HMS/PM_BAOCAOTINHHINHSUDUNGTAIDONVI_MA.RPT"),true) )
	//		return;
	//}	
	//else 
	//{
	//	if(!rpt.Init(_T("Reports/HMS/HC_BAOCAOTINHHINHSUDUNGTAIDONVI_HC.RPT"),true) )
	//		return;
	//}
	
	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	
	
	/*szReportTitle.Format(_T("%s_BAOCAOTINHHINHSUDUNGTAIDONVI"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
	if(!rpt.Init(szPath))
		return;*/

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_BAOCAOTINHHINHSUDUNGTAIDONVI"), pMF->GetModuleID(), szZoneOfUser);	
	}
	else
	{
		szReportTitle.Format(_T("%s_BAOCAOTINHHINHSUDUNGTAIDONVI"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
			if(!rpt.Init(szPath))
			return;


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
		szWhere.AppendFormat(_T(" and storage_id IN(%s) "), szStorages);
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
			szCaseDept.AppendFormat(_T(" case when department_to_id='%s' then qtyexport else 0 end as %s "),m_wndListFac.GetItemText(i, 0),szDeptID);				
					
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


	szSQL.Format(_T(" SELECT idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte,") \
		_T("   %s, %s, %s") \
		_T(" FROM") \
		_T("   (SELECT product_categoryid AS idx,") \
		_T("     product_categoryname     AS groupname,") \
		_T("     product_code             AS id,") \
		_T("     product_name             AS name,") \
		_T("     product_uomname          AS unit,") \
		_T(" CASE WHEN storage_id = 15 THEN product_saleprice1") \
		_T(" WHEN storage_id = 5 THEN product_saleprice2") \
		_T(" WHEN storage_id = 6 THEN product_saleprice3") \
		_T(" ELSE product_vatprice END AS price,") \
		_T("     product_lotno            AS lot,") \
		_T("     product_expdate          AS expdte, %s") \
		_T("   FROM m_export_view3 i") \
		_T("   LEFT JOIN m_productitem_view j") \
		_T("   ON(j.product_item_id=i.product_item_id)") \
		_T("   WHERE qtyexport     > 0") \
		_T("   AND department_to_id       IN(%s)") \
		_T("   AND approved_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("   ) tbl") \
		_T(" GROUP BY idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte %s"), szSumDept ,szSumQty, szTotalAmount, szCaseDept, m_szGroups, m_szFromDate, m_szToDate, szWhere, szOrderby);

	CReportSection* rptDetail;
	CString szOldLine, szNewLine, szAmount, szMoney;
	CRecord rs(&pMF->m_db);
	double grpCost=0.0;
	double ttlCost=0.0;
	double cost = 0;
	int nItem = 1;
	int nItemCount=0;
	int TotalItem=0;
	_fmsg(_T("%s"), szSQL);
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
		rptDetail->SetValue(_T("6"), SetNumberDelim(tmpStr));
		rs.GetValue(_T("price"), cost);
		//FormatCurrency(cost, tmpStr);
		tmpStr = SetNumberDelim(rs.GetValue(_T("price")));
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("totalAmount"), cost);	
		grpCost += cost;
		ttlCost += cost;
		//FormatCurrency(cost, tmpStr);
		tmpStr = SetNumberDelim(rs.GetValue(_T("totalAmount")));
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();
	}
	TotalItem += nItem - 1;				
	if (m_bCheck)
	{
		if(grpCost > 0){	
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			//FormatCurrency(grpCost, tmpStr);
			tmpStr.Format(_T("%.0f"), floor(grpCost+0.5));
			rptDetail->SetValue(_T("8"), SetNumberDelim(tmpStr));			
		}
	}
	if(ttlCost > 0){				
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		//FormatCurrency(ttlCost, tmpStr);
		tmpStr.Format(_T("%.0f"), floor(ttlCost+0.5));
		rptDetail->SetValue(_T("s8"), SetNumberDelim(tmpStr));
	}
			
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	
	tmpStr.Format(_T("%ld"), TotalItem);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);

	tmpStr.Format(_T("%.0f"), floor(ttlCost+0.5));
	rpt.GetReportFooter()->SetValue(_T("ttlCost"), tmpStr);	

	szMoney.Format(_T("%.0f"), floor(ttlCost+0.5));
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

void CHCBaocaoxuatvattuchokhoatheodoituong::OnExportBaocaoxuathuocchokhoatheodoituong(){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CString tmpStr, szSQL, m_szFacList, szWhere, szDeptID, szTemp;
	CString  m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;	
	CString szType, szTypeName, szStorages, szOrderby;		
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
		szWhere.AppendFormat(_T(" and storage_id IN(%s) "), szStorages);
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

	for (int i=0; i< m_wndListFac.GetItemCount(); i++){
		if(m_wndListFac.GetCheck(i))
		{
			szDeptID.Format(_T("\"%s\""),m_wndListFac.GetItemText(i, 0));
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");						
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListFac.GetItemText(i, 0));
			if (!szCaseDept.IsEmpty())
				szCaseDept +=_T(",");
			szCaseDept.AppendFormat(_T(" case when department_to_id='%s' then qtyexport else 0 end as %s "),m_wndListFac.GetItemText(i, 0),szDeptID);				
					
			if(!szSumDept.IsEmpty())
				szSumDept += _T(",");						
			szSumDept.AppendFormat(_T(" sum(%s) as %s"), szDeptID,szDeptID);

			if(!szSumTotal.IsEmpty())
				szSumTotal += _T("+");						
			szSumTotal.AppendFormat(_T("%s"), szDeptID);					

			if (!m_szFacList.IsEmpty())
				m_szFacList+= _T(", ");
			m_szFacList.AppendFormat(_T("%s"), m_wndListFac.GetItemText(i,1));

			m_nCountList++;
		}			
	}

	szTotalAmount.Format(_T(" sum(%s) * price as totalAmount "), szSumTotal);
	szSumQty.Format(_T(" sum(%s) as expqty "), szSumTotal);

	if (m_bCheck)
		szOrderby.Format(_T("ORDER BY idx,groupname,name"));
	else
		szOrderby.Format(_T("ORDER BY name"));
	
	//Page Header
	//Report Detail
			
	szSQL.Format(_T(" SELECT idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte,") \
		_T("   %s, %s, %s") \
		_T(" FROM") \
		_T("   (SELECT product_categoryid AS idx,") \
		_T("     product_categoryname     AS groupname,") \
		_T("     product_code             AS id,") \
		_T("     product_name             AS name,") \
		_T("     product_uomname          AS unit,") \
		_T(" CASE WHEN storage_id = 15 THEN product_saleprice1") \
		_T(" WHEN storage_id = 5 THEN product_saleprice2") \
		_T(" WHEN storage_id = 6 THEN product_saleprice3") \
		_T(" ELSE product_vatprice END AS price,") \
		_T("     product_lotno            AS lot,") \
		_T("     product_expdate          AS expdte, %s") \
		_T("   FROM m_export_view3 i") \
		_T("   LEFT JOIN m_productitem_view j") \
		_T("   ON(j.product_item_id=i.product_item_id)") \
		_T("   WHERE qtyexport     > 0") \
		_T("   AND department_to_id       IN(%s)") \
		_T("   AND approved_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("   ) tbl") \
		_T(" GROUP BY idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte %s"), szSumDept ,szSumQty, szTotalAmount, szCaseDept, m_szGroups, m_szFromDate, m_szToDate, szWhere, szOrderby);

	CString szOldLine, szNewLine;
	CString szOldGroupName, szNewGroupName;
	CRecord rs(&pMF->m_db);
	double grpCost=0.0, ttlCost = 0.0;
	double cost = 0;
	long qty=0;
	int nItem = 1;

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CellFormat df(&xls), cf(&xls), hf(&xls);
	df.SetItalic(true);
	df.SetCellStyle(FMT_TEXT | FMT_CENTER);
	hf.SetBold(true);
	hf.SetCellStyle(FMT_TEXT | FMT_CENTER);
	cf.SetFontName(_T("Segoe UI"));

	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 20);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellMergedColumns(0, 2, 11);
	TranslateString(_T("Department Drug Export Report"), szTemp);
	StringUpper(szTemp, tmpStr);
	xls.SetCellText(0, 2, tmpStr,FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(0,3,11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	xls.SetCellText(0, 3, tmpStr, &df);
	int nRow = 3;
	if (!m_szStockKey.IsEmpty())
	{
		nRow++;
		TranslateString(_T("From Stock"), tmpStr);
		xls.SetCellMergedColumns(0, nRow, 11);
		xls.SetCellText(0, nRow, tmpStr + _T(":") + m_wndStock.GetCurrent(1), &cf);
	}
	if (!m_szFacList.IsEmpty())
	{
		nRow++;
		TranslateString(_T("Dept"), tmpStr);
		xls.SetCellMergedColumns(0, nRow, 11);
		xls.SetCellText(0, nRow, tmpStr + _T(":") +m_szFacList, &cf);
	}
	if (!m_szTypeKey.IsEmpty())
	{
		nRow++;
		TranslateString(_T("Type"), tmpStr);
		xls.SetCellMergedColumns(0, nRow, 11);
		xls.SetCellText(0, nRow, tmpStr + _T(":")+ pMF->GetSelectionString(_T("pms_export_type"), m_szTypeKey), &cf);
	}
	nRow++;
	xls.SetCellText(0, nRow, _T("STT"), &hf);
	TranslateString(_T("ID"), tmpStr);
	xls.SetCellText(1, nRow, tmpStr, &hf);
	TranslateString(_T("Drug Name"), tmpStr);
	xls.SetCellText(2, nRow, tmpStr, &hf);
	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, &hf);
	TranslateString(_T("Country"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr + _T("SX"), &hf);
	TranslateString(_T("Price"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr,  &hf);
	int j=6;
	CString tmpStr1;
	for (int i=0;i< m_wndListFac.GetItemCount(); i++)
	{
		if(m_wndListFac.GetCheck(i))
		{				
			tmpStr1.Format(_T("%s"), m_wndListFac.GetItemText(i,0));			
			xls.SetCellText(j,nRow, tmpStr1,&hf);
			j++;
		}    
	}
	TranslateString(_T("Total Export"), tmpStr);
	xls.SetCellText(5+m_nCountList+1, nRow, tmpStr,&hf);
	TranslateString(_T("Total Amount"), tmpStr);
	xls.SetCellText(5+ m_nCountList+2, nRow, tmpStr,&hf);	
	
	nRow++;
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
					xls.SetCellMergedColumns(1,nRow,5+m_nCountList);
					xls.SetCellText(1, nRow, szAmount, FMT_TEXT,true,11,0);
					tmpStr.Format(_T("%.2f"), grpCost);
					xls.SetCellText(5+m_nCountList+2, nRow, tmpStr, FMT_NUMBER1,true,11,0);
					nRow++;
					ttlCost += grpCost;
					grpCost = 0;
					nItem=1;
				}			
				xls.SetCellMergedColumns(1,nRow,5+m_nCountList +2);	
				tmpStr.Format(_T("%s) %s"), szNewLine, rs.GetValue(_T("groupname")));
				xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,10,0);
				nRow++;
				szOldLine = szNewLine;
				nItem=1;
			}
		}
	
		tmpStr.Format(_T("%d"), nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_NUMBER1);		
		rs.GetValue(_T("id"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("name"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("unit"), tmpStr);		
		xls.SetCellText(3,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("Countryid"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr, FMT_TEXT);
		rs.GetValue(_T("price"), tmpStr);
		xls.SetCellText(5,nRow, SetNumberDelim(tmpStr), FMT_TEXT);		
		j=6;
		for (int i=0;i< m_wndListFac.GetItemCount(); i++)
		{
			if(m_wndListFac.GetCheck(i))
			{					
				tmpStr1.Format(_T("%s"), m_wndListFac.GetItemText(i,0));
				rs.GetValue(tmpStr1, tmpStr);
				if (tmpStr != _T("0"))
				{
					xls.SetCellText(j,nRow, SetNumberDelim(tmpStr),FMT_TEXT);
				}
				j++;
			}    
		}
		
		rs.GetValue(_T("expqty"), qty);
		tmpStr.Format(_T("%ld"), qty);
		xls.SetCellText(5+ m_nCountList+1,nRow,SetNumberDelim(tmpStr), FMT_TEXT);				
		rs.GetValue(_T("totalAmount"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		grpCost+=cost;
		xls.SetCellText(5+ m_nCountList+2,nRow,SetNumberDelim(tmpStr), FMT_TEXT);		
		nRow++;
		rs.MoveNext();
	}
	ttlCost += grpCost;
	if (m_bCheck)
	{
		if(grpCost > 0){
			TranslateString(_T("\x43\x1ED9ng:"), tmpStr);		
			xls.SetCellMergedColumns(1,nRow,5+m_nCountList+1);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
			tmpStr.Format(_T("%.0f"), floor(grpCost+0.5));
			xls.SetCellText(5+m_nCountList +2, nRow, SetNumberDelim(tmpStr), FMT_TEXT,true,11,0);		
		}
	}
	if(ttlCost > 0){
		TranslateString(_T("T\x1ED5ng ti\x1EC1n:"), tmpStr);		
		xls.SetCellMergedColumns(1,nRow,5+m_nCountList+1);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT,true,11,0);
		tmpStr.Format(_T("%.0f"), floor(ttlCost+0.5));
		xls.SetCellText(5+m_nCountList +2, nRow, SetNumberDelim(tmpStr), FMT_TEXT,true,11,0);		
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Baocaoxuatthuocchokhoa.xls"));
}
BEGIN_MESSAGE_MAP(CHCBaocaoxuatvattuchokhoatheodoituong, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CHCBaocaoxuatvattuchokhoatheodoituong::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}

void CHCBaocaoxuatvattuchokhoatheodoituong::OnPrintBaocaoxuathuocchokhoatheodoituong_khth()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,m_szFacList, szWhere, szDeptID, szOrderby, szReportTitle, szPath;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;
	CString szType, szTypeName, szStorages;
	
	
	szReportTitle.Format(_T("%s_BAOCAOTINHHINHSUDUNGTAIDONVIV1"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
	if(!rpt.Init(szPath))
		return;


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
		szWhere.AppendFormat(_T(" and storage_id IN(%s) "), szStorages);
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
			szCaseDept.AppendFormat(_T(" case when department_to_id='%s' then qtyexport else 0 end as %s "),m_wndListFac.GetItemText(i, 0),szDeptID);				
					
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
		szOrderby.Format(_T("idx,groupname,name"));
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

	szSQL.Format(_T(" SELECT idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte,") \
		_T("   %s, %s, %s") \
		_T(" FROM") \
		_T("   (SELECT product_categoryid AS idx,") \
		_T("     product_categoryname     AS groupname,") \
		_T("     product_code             AS id,") \
		_T("     product_name             AS name,") \
		_T("     product_uomname          AS unit,") \
		_T(" CASE WHEN storage_id = 15 THEN product_saleprice1") \
		_T(" WHEN storage_id = 5 THEN product_saleprice2") \
		_T(" WHEN storage_id = 6 THEN product_saleprice3") \
		_T(" ELSE product_vatprice END AS price,") \
		_T("     product_lotno            AS lot,") \
		_T("     product_expdate          AS expdte, %s") \
		_T("   FROM m_export_view3 i") \
		_T("   LEFT JOIN m_productitem_view j") \
		_T("   ON(j.product_item_id=i.product_item_id)") \
		_T("   WHERE qtyexport     > 0") \
		_T("   AND department_to_id       IN(%s)") \
		_T("   AND approved_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("   ) tbl") \
		_T(" GROUP BY idx,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte %s"), szSumDept ,szSumQty, szTotalAmount, szCaseDept, m_szGroups, m_szFromDate, m_szToDate, szWhere, szOrderby);

	
	CString szRptName, szOldLine, szNewline, szMoney;
	CRecord rs(&pMF->m_db);
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nSubAmount=0, nVatAmount=0, nTotalAmount=0, nTotalPayment=0, nSubGAmount=0, nVatGAmount=0, nTotalGAmount=0, nTotalGPayment=0;
	double nCost = 0.0;	

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF()){
		ShowMessage(150, MB_ICONSTOP);
		return ;
	}

	int nIndex=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("groupname"), szNewline);
		if(szNewline != szOldLine)
		{
			if(nTotalPayment > 0)
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

		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("expqty"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("price"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		
		rs.GetValue(_T("vat"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);

		rs.GetValue(_T("vatamount"), nCost);
		nVatAmount+= nCost;

		rs.GetValue(_T("totalamount"), nCost);
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
	if(nTotalGPayment > 0)
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
	rpt.PrintPreview();
			
}

void CHCBaocaoxuatvattuchokhoatheodoituong::OnPrintBaocaoxuathuocchokhoatheodoituong_pcnmt()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	CString tmpStr, szDate, szSysDate, szSQL,tmpStr2,szObjects,m_szFacList, szWhere, szDeptID, szOrderby, szReportTitle, szPath;
	CString  m_szServiceFlag,m_szInsFlag,m_szChildFlag,m_szFreeFlag,m_szGroups, szCaseDept, szSumDept, szSumTotal, szTotalAmount,szSumQty;
	CString szType, szTypeName, szStorages;
	
	
	CString szZoneOfUser;
	szZoneOfUser = pMF->GetZoneOfUser(pMF->GetCurrentUser());	
	
	/*szReportTitle.Format(_T("%s_BAOCAOTINHHINHSUDUNGTAIDONVI"), pMF->GetModuleID());

	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
	if(!rpt.Init(szPath))
		return;*/

	if (pMF->GetModuleID() == _T("PCNMT") && szZoneOfUser == _T("THUVIEN"))
	{
		szReportTitle.Format(_T("%s_%s_BAOCAOTINHHINHSUDUNGTAIDONVI"), pMF->GetModuleID(), szZoneOfUser);	
	}
	else
	{
		szReportTitle.Format(_T("%s_BAOCAOTINHHINHSUDUNGTAIDONVI"), pMF->GetModuleID());
	}
	szPath.Format(_T("Reports/HMS/%s.RPT"), szReportTitle);
			if(!rpt.Init(szPath))
			return;


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
		szWhere.AppendFormat(_T(" and storage_id IN(%s) "), szStorages);
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
			szCaseDept.AppendFormat(_T(" case when department_to_id='%s' then qtyexport else 0 end as %s "),m_wndListFac.GetItemText(i, 0),szDeptID);				
					
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
		szOrderby.Format(_T("ORDER BY nguonchi, name"));
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

	szSQL.Format(_T(" SELECT idx,") \
		_T(" CASE WHEN nguonchi = 'A' ") \
		_T("   THEN CAST ('I. Kinh phí trên cấp(Tự chi)' as nvarchar2(128))") \
		_T("   else CAST ('II. Kinh phí tự cân đối' as nvarchar2(128)) end as v_nguonchi,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte,") \
		_T("   %s, %s, %s") \
		_T(" FROM") \
		_T("   (SELECT product_categoryid AS idx,") \
		_T("  CASE") \
		_T("     WHEN po_resource_id = 6") \
		_T("     THEN CAST ('A' AS NVARCHAR2(1))") \
		_T("     ELSE CAST ('B' AS NVARCHAR2(1))") \
		_T("     END AS nguonchi,") \

		_T("     product_categoryname     AS groupname,") \
		_T("     product_code             AS id,") \
		_T("     product_name             AS name,") \
		_T("     product_uomname          AS unit,") \
		_T(" CASE WHEN storage_id = 15 THEN product_saleprice1") \
		_T(" WHEN storage_id = 5 THEN product_saleprice2") \
		_T(" WHEN storage_id = 6 THEN product_saleprice3") \
		_T(" ELSE product_vatprice END AS price,") \
		_T("     product_lotno            AS lot,") \
		_T("     product_expdate          AS expdte, %s") \
		_T("   FROM m_export_view3 i") \
		_T("   LEFT JOIN m_productitem_view j") \
		_T("   ON(j.product_item_id=i.product_item_id)") \
		_T(" LEFT JOIN purchase_orderline") \
		_T("   ON (i.product_item_id=pol_product_item_id)") \
		_T("   LEFT JOIN purchase_order") \
		_T("   ON (po_purchase_order_id=pol_purchase_order_id)") \
		_T("   WHERE qtyexport     > 0") \
		_T("   AND department_to_id       IN(%s)") \
		_T("   AND approved_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("   ) tbl") \
		_T(" GROUP BY idx, nguonchi,") \
		_T("   groupname,") \
		_T("   id,") \
		_T("   name,") \
		_T("   unit,") \
		_T("   price,") \
		_T("   lot,") \
		_T("   expdte %s"), szSumDept ,szSumQty, szTotalAmount, szCaseDept, m_szGroups, m_szFromDate, m_szToDate, szWhere, szOrderby);

	CReportSection* rptDetail;
	CString szOldLine, szNewLine, szAmount, szMoney;
	CRecord rs(&pMF->m_db);
	double grpCost=0.0;
	double ttlCost=0.0;
	double cost = 0;
	int nItem = 1;
	int nItemCount=0;
	int TotalItem=0;
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return ;
	}

	while(!rs.IsEOF())
	{
		if (1==1)
		{
			rs.GetValue(_T("v_nguonchi"), szNewLine);
			if(szNewLine != szOldLine && !szNewLine.IsEmpty()){
				CString szField;
				if(grpCost > 0)
				{
					TranslateString(_T("Total Group"), szAmount);
					rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
					rptDetail->SetValue(_T("TotalGroup"), szAmount);						
					FormatCurrency(grpCost, tmpStr);
					rptDetail->SetValue(_T("s8"), tmpStr);				
					grpCost = 0;								
				}
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
				tmpStr.Format(_T("%s"), szNewLine);
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
		rptDetail->SetValue(_T("6"), SetNumberDelim(tmpStr));
		rs.GetValue(_T("price"), cost);
		//FormatCurrency(cost, tmpStr);
		tmpStr = SetNumberDelim(rs.GetValue(_T("price")));
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("totalAmount"), cost);	
		grpCost += cost;
		ttlCost += cost;
		//FormatCurrency(cost, tmpStr);
		tmpStr = SetNumberDelim(rs.GetValue(_T("totalAmount")));
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();
	}
	TotalItem += nItem - 1;				
	if (1==1)
	{
		if(grpCost > 0){	
			TranslateString(_T("Total Group"), szAmount);
			rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));	
			rptDetail->SetValue(_T("TotalGroup"), szAmount);
			//FormatCurrency(grpCost, tmpStr);
			tmpStr.Format(_T("%.0f"), floor(grpCost+0.5));
			rptDetail->SetValue(_T("s8"), SetNumberDelim(tmpStr));			
		}
	}
	if(ttlCost > 0){				
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);
		//FormatCurrency(ttlCost, tmpStr);
		tmpStr.Format(_T("%.0f"), floor(ttlCost+0.5));
		rptDetail->SetValue(_T("s8"), SetNumberDelim(tmpStr));
	}
			
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	tmpStr = pMF->GetUserName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	
	tmpStr.Format(_T("%ld"), TotalItem);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);

	tmpStr.Format(_T("%.0f"), floor(ttlCost+0.5));
	rpt.GetReportFooter()->SetValue(_T("ttlCost"), tmpStr);	

	szMoney.Format(_T("%.0f"), floor(ttlCost+0.5));
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