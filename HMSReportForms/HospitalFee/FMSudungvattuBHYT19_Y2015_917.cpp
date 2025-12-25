#include "stdafx.h"
#include "FMSudungvattuBHYT19_Y2015_917.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungvattuBHYT19_Y2015_917* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnStockAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungvattuBHYT19_Y2015_917* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnTypeAddNew();
}*/
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungvattuBHYT19_Y2015_917* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMSudungvattuBHYT19_Y2015_917* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnSourceAddNew();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917 *)pWnd)->OnItemLoadData();
}
static void _OnDrugPTTTSelectFnc(CWnd *pWnd){
	 ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnDrugPTTTSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnOutPatientSelect();
}
static void _OnOutInDeptSelectFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnOutInDeptSelect();
}
static void _OnOrderBySelectFnc(CWnd *pWnd){
	 ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnOrderBySelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFMSudungvattuBHYT19_Y2015_917 *pVw = (CFMSudungvattuBHYT19_Y2015_917 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMSudungvattuBHYT19_Y2015_917 *pVw = (CFMSudungvattuBHYT19_Y2015_917 *)pWnd;
	pVw->OnExportSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnListDeleteItem();
}
static int _OnAddFMSudungthuocBHYT20aFnc(CWnd *pWnd){
	 return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnAddFMSudungthuocBHYT20a();
} 
static int _OnEditFMSudungthuocBHYT20aFnc(CWnd *pWnd){
	 return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnEditFMSudungthuocBHYT20a();
} 
static int _OnDeleteFMSudungthuocBHYT20aFnc(CWnd *pWnd){
	 return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnDeleteFMSudungthuocBHYT20a();
} 
static int _OnSaveFMSudungthuocBHYT20aFnc(CWnd *pWnd){
	 return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnSaveFMSudungthuocBHYT20a();
} 
static int _OnCancelFMSudungthuocBHYT20aFnc(CWnd *pWnd){
	 return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnCancelFMSudungthuocBHYT20a();
}

static int _OnListCheckAllFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnListCheckAll();
}
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMSudungvattuBHYT19_Y2015_917*)pWnd)->OnListUnCheckAll();
}

CFMSudungvattuBHYT19_Y2015_917::CFMSudungvattuBHYT19_Y2015_917(CWnd *pParent)
{
	m_nDlgWidth = 460;
	m_nDlgHeight = 495;
	SetDefaultValues();
}
CFMSudungvattuBHYT19_Y2015_917::~CFMSudungvattuBHYT19_Y2015_917()
{
}
void CFMSudungvattuBHYT19_Y2015_917::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 550);
	m_wndDeptInfo.Create(this, _T("Dept"), 10, 180, 485, 455);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this, 95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this, 335, 30, 485, 55);  
	m_wndStockLabel.Create(this, _T("Stock"), 10, 60, 90, 85);
	m_wndStock.Create(this, 95, 60, 485, 85); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 90, 90, 115);
	m_wndType.Create(this, 95, 90, 485, 115); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 120, 90, 145);
	m_wndGroup.Create(this, 95, 120, 485, 145); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 150, 90, 175);
	m_wndItem.Create(this, 95, 150, 485, 175); 
	m_wndList.Create(this, 15, 205, 485, 420); 
	m_wndAll.Create(this, _T("All"), 15, 425, 95, 450);
	m_wndInPatient.Create(this, _T("InPatient"), 100, 425, 180, 450);
	m_wndOutPatient.Create(this, _T("OutPatient"), 185, 425, 265, 450);
	m_wndOutInDept.Create(this, _T("OutInDept"), 270, 425, 390, 450);
	m_wndDrugPTTT.Create(this, _T("Without Operation Material"), 10, 460, 195, 485);
	m_wndByDischargedDate.Create(this, _T("By Discharged Date"), 200, 460, 385, 485);
	m_wndOnlyCommander.Create(this, _T("Only Commander"), 10, 490, 195, 515);
	m_wndOrderBy.Create(this, _T("Sort by Category"), 200, 490, 385, 515);
	m_wndInsuranceApproval.Create(this, _T("Insurance Approval"), 10, 520, 195, 545);
	//m_wndInsuranceUnpaid.Create(this, _T("Insurance Unpaid"), 200, 520, 385, 545);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 225, 555, 325, 580);
	m_wndExport.Create(this, _T("&Export"), 385, 555, 480, 580);
}

void CFMSudungvattuBHYT19_Y2015_917::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	//m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(128);

	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(254);

	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(81);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 380);

	m_wndGroup.Format(3, 2);
	m_wndGroup.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(2, _T("CategoryID"), CFMT_TEXT, 400);

	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndItem.Format(3, 2);
	m_wndItem.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndItem.InsertColumn(1, _T("Code"), CFMT_TEXT, 150);
	m_wndItem.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.SetCheckBox(TRUE);
}
void CFMSudungvattuBHYT19_Y2015_917::OnSetWindowEvents()
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
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	m_wndDrugPTTT.SetEvent(WE_CLICK, _OnDrugPTTTSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndOutInDept.SetEvent(WE_CLICK, _OnOutInDeptSelectFnc);
	m_wndOrderBy.SetEvent(WE_CLICK, _OnOrderBySelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndList.SetWindowText(_T("Dept"));
	m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(2, _T("UnCheck All"), _OnListUnCheckAllFnc);

	m_mapLine[_T("I")] = _T("\x110\xFAng tuy\x1EBFn \x111\x103ng k\xFD t\x1EA1i \x62\x1EC7nh vi\x1EC7n");
	m_mapLine[_T("II")] = _T("\x110\xFAng tuy\x1EBFn \x111\x103ng k\xFD t\x1EA1i ngo\x1EA1i t\x1EC9nh");
	m_mapLine[_T("III")] = _T("\x42\x1EC7nh nh\xE2n tr\xE1i tuy\x1EBFn");

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate =  pMF->GetSysDate()+ _T("00:00");	
	m_szToDate =pMF->GetSysDate() + _T("23:59");
	UpdateData(false);

	OnListLoadData();
}
void CFMSudungvattuBHYT19_Y2015_917::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Check(pDX, m_wndDrugPTTT.GetDlgCtrlID(), m_bDrugPTTT);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndOutInDept.GetDlgCtrlID(), m_nOutInDept);
	DDX_Check(pDX, m_wndOrderBy.GetDlgCtrlID(), m_bOrderBy);
	DDX_Check(pDX, m_wndByDischargedDate.GetDlgCtrlID(), m_bByDischargedDate);
	DDX_Check(pDX, m_wndInsuranceApproval.GetDlgCtrlID(), m_bInsuranceApproval);
	DDX_Check(pDX, m_wndOnlyCommander.GetDlgCtrlID(), m_bOnlyCommander);

}
void CFMSudungvattuBHYT19_Y2015_917::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMSudungvattuBHYT19_Y2015_917::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMSudungvattuBHYT19_Y2015_917::SetDefaultValues()
{
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStockKey.Empty();
	m_szTypeKey.Empty();
	m_szGroupKey.Empty();
	m_szSourceKey.Empty();

	m_bDrugPTTT=FALSE;
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_nOutInDept=1;
	m_bOrderBy=FALSE;
	m_bByDischargedDate = FALSE;
	m_bInsuranceApproval = FALSE;
}
int CFMSudungvattuBHYT19_Y2015_917::SetMode(int nMode)
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
/*void CFMSudungvattuBHYT19_Y2015_917::OnFromDateChange(){
	
} */
/*void CFMSudungvattuBHYT19_Y2015_917::OnFromDateSetfocus(){
	
} */
/*void CFMSudungvattuBHYT19_Y2015_917::OnFromDateKillfocus(){
	
} */
int CFMSudungvattuBHYT19_Y2015_917::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMSudungvattuBHYT19_Y2015_917::OnToDateChange(){
	
} */
/*void CFMSudungvattuBHYT19_Y2015_917::OnToDateSetfocus(){
	
} */
/*void CFMSudungvattuBHYT19_Y2015_917::OnToDateKillfocus(){
	
} */
int CFMSudungvattuBHYT19_Y2015_917::OnToDateCheckValue(){
	return 0;
} 
void CFMSudungvattuBHYT19_Y2015_917::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungvattuBHYT19_Y2015_917::OnStockSelendok(){
	 
}
/*void CFMSudungvattuBHYT19_Y2015_917::OnStockSetfocus(){
	
}*/
/*void CFMSudungvattuBHYT19_Y2015_917::OnStockKillfocus(){
	
}*/

long CFMSudungvattuBHYT19_Y2015_917::OnStockLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndStock.IsSearchKey() && ToInt(m_szStockKey) > 0)
	{
		szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStockKey));
	}
	CString szStorages;
	//szStorages = pMF->m_szStoragePerm;
	if (!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_storage_id in(%s) "), szStorages);
	//szWhere.AppendFormat(_T(" AND msl_storage_id in(%s) "), pMF->m_szStorages);

	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, ") \
		         _T("msl_name as name ") \
		         _T("FROM m_storagelist ") \
				 _T("WHERE msl_org_id in('GL','PM','WM') and msl_isactive='Y' %s ") \
				 _T("ORDER BY msl_storage_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFMSudungvattuBHYT19_Y2015_917::OnStockAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungvattuBHYT19_Y2015_917::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungvattuBHYT19_Y2015_917::OnTypeSelendok(){
	 
}
/*void CFMSudungvattuBHYT19_Y2015_917::OnTypeSetfocus(){
	
}*/
/*void CFMSudungvattuBHYT19_Y2015_917::OnTypeKillfocus(){
	
}*/
long CFMSudungvattuBHYT19_Y2015_917::OnTypeLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" and mpt_product_type_id='%s' "), m_szTypeKey);
	}

	//szWhere.AppendFormat(_T(" AND hfg_moduleid = '%s'"), pMF->GetModuleID());

	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select mpt_product_type_id as id,") \
				_T("        mpt_name as name") \
				_T(" from m_product_type") \
				_T(" where substr(mpt_product_type_id, 1, 1)='A'") \
				_T(" order by id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFMSudungvattuBHYT19_Y2015_917::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungvattuBHYT19_Y2015_917::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungvattuBHYT19_Y2015_917::OnGroupSelendok(){
	 
}
/*void CFMSudungvattuBHYT19_Y2015_917::OnGroupSetfocus(){
	
}*/
/*void CFMSudungvattuBHYT19_Y2015_917::OnGroupKillfocus(){
	
}*/
long CFMSudungvattuBHYT19_Y2015_917::OnGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND pmg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT mpc_product_category_id as categoryid,") \
				_T("        mpc_code as id,") \
				_T("        mpc_name as name") \
				_T(" FROM m_product_category") \
				_T(" WHERE mpc_level > 0") \
				_T(" CONNECT BY PRIOR mpc_product_category_id=mpc_parent_id") \
				_T(" ORDER SIBLINGS BY mpc_product_category_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("categoryid")), 
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFMSudungvattuBHYT19_Y2015_917::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CFMSudungvattuBHYT19_Y2015_917::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMSudungvattuBHYT19_Y2015_917::OnSourceSelendok(){
	 
}
/*void CFMSudungvattuBHYT19_Y2015_917::OnSourceSetfocus(){
	
}*/
/*void CFMSudungvattuBHYT19_Y2015_917::OnSourceKillfocus(){
	
}*/
long CFMSudungvattuBHYT19_Y2015_917::OnSourceLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFMSudungvattuBHYT19_Y2015_917::OnSourceAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CFMSudungvattuBHYT19_Y2015_917::OnItemLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nCount = 0;
	if (!m_szStockKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND msl_storage_id = %s"), m_szStockKey);
	if (!m_szTypeKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_producttype = '%s'"), m_szTypeKey);
	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND mp_product_category_id = '%s'"), m_szGroupKey);
	szSQL.Format(_T(" SELECT distinct mp_product_id product_id, mp_code product_code, mp_name product_name ") \
				 _T(" FROM m_product ") \
				 _T(" LEFT JOIN m_storageline ON (msl_product_id = mp_product_id)") \
				 _T(" WHERE mp_org_id = 'MA' AND MP_ISACTIVE='Y' %s ORDER BY mp_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndItem.AddItems(
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("product_code")),
			rs.GetValue(_T("product_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

	void CFMSudungvattuBHYT19_Y2015_917::OnDrugPTTTSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CFMSudungvattuBHYT19_Y2015_917::OnAllSelect(){
		UpdateData(TRUE);
		OnListLoadData();
	}
	void CFMSudungvattuBHYT19_Y2015_917::OnInPatientSelect(){
		UpdateData(TRUE);
		OnListLoadData();
	}
	void CFMSudungvattuBHYT19_Y2015_917::OnOutPatientSelect(){
		UpdateData(TRUE);
		OnListLoadData();
	}
	void CFMSudungvattuBHYT19_Y2015_917::OnOutInDeptSelect(){
		UpdateData(TRUE);
		OnListLoadData();
	}
void CFMSudungvattuBHYT19_Y2015_917::OnOrderBySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

void CFMSudungvattuBHYT19_Y2015_917::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	long double grpCost = 0;
	long double ttlCost = 0;
	double cost = 0;
	int qty = 0;
	int nItem = 1;
	int nRow = 0;

	szSQL.Format(_T(" SELECT ma_vat_tu,") \
		_T("   ten_vat_tu,") \
		_T("   ten_thuongmai,") \
		_T("   quy_cach,") \
		_T("   don_gia_bv,") \
		_T("   don_vi_tinh,") \
		_T("   tyle_tt,") \
		_T("   don_gia,") \
		_T("   SUM(outqty)     AS outqty,") \
		_T("   SUM(intqty)     AS intqty,") \
		_T("   SUM(thanh_tien) AS thanh_tien") \
		_T(" FROM") \
		_T("   (SELECT ma_vat_tu,") \
		_T("     ten_vat_tu,") \
		_T("     mp_name          AS ten_thuongmai,") \
		_T("     mp_specification AS quy_cach,") \
		_T("     don_gia_bv,") \
		_T("     don_vi_tinh,") \
		_T("     tyle_tt,") \
		_T("     CASE") \
		_T("       WHEN ma_loai_kcb IN (1,2)") \
		_T("       THEN b.so_luong") \
		_T("       ELSE 0") \
		_T("     END AS outqty,") \
		_T("     CASE") \
		_T("       WHEN ma_loai_kcb = 3") \
		_T("       THEN b.so_luong") \
		_T("       ELSE 0") \
		_T("     END AS intqty,") \
		_T("     don_gia,") \
		_T("     thanh_tien") \
		_T("   FROM bh_thongtinchitiet_tonghop a,") \
		_T("     bh_bang_ctdv b") \
		_T("   LEFT JOIN m_product_item") \
		_T("   ON(CAST(mpi_product_item_id AS NVARCHAR2(20)) = ma_vat_tu_cs)") \
		_T("   LEFT JOIN m_product") \
		_T("   ON(mpi_product_id = mp_product_id)") \
		_T("   WHERE to_timestamp(ngay_ttoan,'yyyymmddhh24mi') BETWEEN to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss')") \
		_T("   AND to_timestamp('%s', 'yyyy/mm/dd|hh24:mi:ss')") \
		_T("   AND a.ma_lk  = b.ma_lk") \
		_T("   AND ma_nhom IN(10, 11)") \
		_T("   ) tbl") \
		_T(" GROUP BY ma_vat_tu,") \
		_T("   ten_vat_tu,") \
		_T("   ten_thuongmai,") \
		_T("   quy_cach,") \
		_T("   don_gia_bv,") \
		_T("   don_vi_tinh,") \
		_T("   tyle_tt,") \
		_T("   don_gia") \
		_T(" ORDER BY ma_vat_tu"), m_szFromDate, m_szToDate);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 14);
	xls.SetColumnWidth(2, 25);
	xls.SetColumnWidth(3, 25);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 14);
	xls.SetColumnWidth(10, 14);

	xls.SetCellText(0, nRow, _T("stt"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(1, nRow, _T("ma_vtyt"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(2, nRow, _T("ten_vtyt"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(3, nRow, _T("ten_thuongmai"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(4, nRow, _T("quy_cach"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(5, nRow, _T("don_vi"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(6, nRow, _T("gia_mua"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(7, nRow, _T("sl_noitru"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(8, nRow, _T("sl_ngoaitru"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(9, nRow, _T("gia_thanhtoan"),FMT_TEXT|FMT_WRAPING,true);
	xls.SetCellText(10, nRow, _T("thanh_tien"),FMT_TEXT|FMT_WRAPING,true);

	long double ttInsQty = 0, ttOutQty = 0;
	long double totalCost = 0;
	long double totalInsLineCost = 0;
	grpCost = ttlCost = cost = 0;
	nRow++;

	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"),nItem++);
		xls.SetCellText(0,nRow,tmpStr, FMT_TEXT);	

		rs.GetValue(_T("ma_vat_tu"), tmpStr);
		xls.SetCellText(1,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("ten_vat_tu"), tmpStr);
		xls.SetCellText(2,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("ten_thuongmai"), tmpStr);
		xls.SetCellText(3,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("quy_cach"), tmpStr);
		xls.SetCellText(4,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("don_vi_tinh"), tmpStr);		
		xls.SetCellText(5,nRow,tmpStr, FMT_TEXT);

		rs.GetValue(_T("don_gia_bv"), tmpStr);				
		xls.SetCellText(6,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("outqty"), qty);
		tmpStr.Format(_T("%d"), qty);
		xls.SetCellText(8,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("intqty"), qty);
		tmpStr.Format(_T("%d"), qty);
		xls.SetCellText(7,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("don_gia"), tmpStr);				
		xls.SetCellText(9,nRow,tmpStr, FMT_NUMBER1);

		rs.GetValue(_T("thanh_tien"), cost);				
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(10,nRow,tmpStr, FMT_NUMBER1);

		rs.MoveNext();
		nRow++;
	}

	EndWaitCursor();
	tmpStr.Format(_T("Exports\\19_%s%s_file19.xls"), m_szFromDate.Left(4), m_szFromDate.Mid(5,2));
	xls.Save(tmpStr);
}

void CFMSudungvattuBHYT19_Y2015_917::OnPrintDetail(){

}

void CFMSudungvattuBHYT19_Y2015_917::OnExportSelect(){	
	CGuiMenu menu(this);
	CString tmpStr;
	
	menu.CreatePopupMenu();
	TranslateString(_T("Export to Excel 19 Template"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);

	TranslateString(_T("Xuất Danh sách bệnh nhân sử dụng theo từng vật tư"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	
	CRect rect;
	m_wndExport.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExport1();	
			break;
		case 2:
			OnExport2();	
			break;		
	}	

}

void CFMSudungvattuBHYT19_Y2015_917::OnExport1(){	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);

	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szOldGroup, szNewGroup, szOldChap, szNewChap, szOldLine, szNewLine, szDate, szMoney;
	CString tmpStr, szTemp;

	int nCol = 0, nRow = 0, nIdx = 1;
	double nCost = 0;
	long double nGroupCost = 0, nChapCost = 0, nLineCost = 0, nTotalCost = 0;

	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}

	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 50);
	xls.SetColumnWidth(3, 50);
	xls.SetColumnWidth(4, 20);
	xls.SetColumnWidth(5, 20);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 12);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 15);

	//Column Header
	CStringArray arrCol, arrFeeGrp, arrTitle;
	arrCol.Add(_T("STT"));
	arrCol.Add(_T("MA_VTYT"));
	arrCol.Add(_T("TEN_VTYT"));
	arrCol.Add(_T("TEN_THUONG_MAI"));
	arrCol.Add(_T("QUY_CACH"));
	arrCol.Add(_T("DON_VI"));
	arrCol.Add(_T("GIA_MUA"));
	arrCol.Add(_T("SL_NOITRU"));
	arrCol.Add(_T("SL_NGOAITRU"));
	arrCol.Add(_T("GIA_THANHTOAN"));	
	arrCol.Add(_T("THANH_TIEN"));	

	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(i, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}

	nRow++;

	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("mp_atccode")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("ten_vattu")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("ten_vattu")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("")), FMT_TEXT);
		xls.SetCellText(5, nRow, rs.GetValue(_T("don_vi")), FMT_TEXT);
		xls.SetCellText(6, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
		xls.SetCellText(7, nRow, rs.GetValue(_T("qtynoi")), FMT_NUMBER1);
		xls.SetCellText(8, nRow, rs.GetValue(_T("qtyngoai")), FMT_NUMBER1);
		xls.SetCellText(9, nRow, rs.GetValue(_T("unit_price")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nCost);
		nGroupCost += nCost;
		xls.SetCellText(10, nRow, double2str(nCost), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Thong Ke Tien Vat Tu Theo Quy chuyen len cong bao hiem.xls"));
}
void CFMSudungvattuBHYT19_Y2015_917::OnExport2(){	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0, ntotal=0;
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\DANHSACHBENHNHAN_SUDUNG_VATTU19.xls"))) AfxMessageBox(_T("Chưa có file này trong thu mục Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	

	szSQL = GetQueryString_Check();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
		
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("khoayeucau"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT | FMT_CENTER);

		rs.GetValue(_T("ProductName"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("soluong"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);
			
		nRow++;
		rs.MoveNext();
	}
	if (ntotal > 0)
	{
		xls.SetCellText(2, nRow, _T("Tổng cộng"), FMT_TEXT, true);		
		xls.SetCellText(3, nRow, double2str(ntotal), FMT_NUMBER1, true);					
		nRow++;
	}
	
	xls.Save(_T("Exports\\DANHSACHBENHNHAN_SUDUNG_VATTU192.xls"));

}

void CFMSudungvattuBHYT19_Y2015_917::OnListDblClick(){
	
} 
void CFMSudungvattuBHYT19_Y2015_917::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMSudungvattuBHYT19_Y2015_917::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMSudungvattuBHYT19_Y2015_917::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	if (m_nOutPatient == 0)
		szWhere.Format(_T(" AND sd_type IN('KB') "));

	if (m_nInPatient == 0)
		szWhere.Format(_T(" AND sd_type IN('DT') "));

	if (m_nAll == 0)
		szWhere.Format(_T(" AND sd_type IN('KB','DT') "));

	if (m_nOutInDept == 0)
		szWhere.Format(_T(" AND sd_type IN('DT') "));

	szSQL.Format(_T("SELECT sd_id AS ID, sd_name AS Name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 %s ") \
				 _T("ORDER BY sd_id"), szWhere);
	//MessageBox(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CFMSudungvattuBHYT19_Y2015_917::OnAddFMSudungthuocBHYT20a(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMSudungvattuBHYT19_Y2015_917::OnEditFMSudungthuocBHYT20a(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMSudungvattuBHYT19_Y2015_917::OnDeleteFMSudungthuocBHYT20a(){
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
 		OnCancelFMSudungthuocBHYT20a(); 
 	}
	return 0;
}
int CFMSudungvattuBHYT19_Y2015_917::OnSaveFMSudungthuocBHYT20a(){
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
 		//OnFMSudungthuocBHYT20aListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMSudungvattuBHYT19_Y2015_917::OnCancelFMSudungthuocBHYT20a(){
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
int CFMSudungvattuBHYT19_Y2015_917::OnFMSudungthuocBHYT20aListLoadData(){
	return 0;
}

CString CFMSudungvattuBHYT19_Y2015_917::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szWhere3;

	if(m_nAll == 1)
	{
		szWhere2.Format(_T("AND 0 = 1"));
		szWhere3.Format(_T("AND 0 = 1"));
	}
	if(m_nAll == 2)
	{
		szWhere.Format(_T("AND 0 = 1"));
		szWhere3.Format(_T("AND 0 = 1"));
	}
	if(m_nAll == 3)
	{
		szWhere.Format(_T("AND 0 = 1"));
		szWhere2.Format(_T("AND 0 = 1"));
	}

	szSQL.Format(_T(" SELECT mp_atccode,") \
		_T("   item_name AS ten_vattu,") \
		_T("   '' AS quy_cach,") \
		_T("   don_vi,") \
		_T("   SUM(qtynoi)   AS qtynoi,") \
		_T("   SUM(qtyngoai)   AS qtyngoai,") \
		_T("   unit_price AS unit_price,") \
		_T("   SUM(amount) AS amount") \
		_T(" FROM") \
		_T("   (SELECT f.hfe_group AS group_id,") \
		_T("     Get_feegroupname(f.hfe_group) AS group_name,") \
		_T("     mp_atccode,") \
		_T("     f.hfe_desc AS item_name,") \
		_T("     f.hfe_unit AS don_vi,") \
		_T("     hfe_quantity AS qtynoi,") \
		_T("     0 AS qtyngoai,") \
		_T("     ROUND(f.hfe_insprice, 2) AS unit_price,") \
		_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (hd_docno = hfe_docno)") \
		_T("   LEFT JOIN hms_card") \
		_T("   ON (hc_patientno = hd_patientno") \
		_T("   AND hc_idx       = hd_cardidx)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON (hcr_docno = hd_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno = htr_docno)") \
		_T("   LEFT JOIN Hms_Fee_Approve fa") \
		_T("   ON (hcr_docno=fa.hfe_docno") \
		_T("   AND htr_idx  =fa.Hfe_Refidx)") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON ( f.hfe_docno    = i.hfe_docno") \
		_T("   AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("   AND i.HFE_INVOICENO =fa.HFE_INVOICENO)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON ( i.hfe_objectid = ho_id )") \
		_T("   LEFT JOIN m_productitem_view_bh") \
		_T("   ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view") \
		_T("   ON (hpo_orderid               = f.hfe_orderid)") \
		_T("   WHERE f.hfe_type             IN ('D', 'M')") \
		_T("   AND hfe_hitech                = 'N'") \
		_T("   AND (product_org_id           = 'MA')") \
		_T("   AND hfe_category             IN ('N','BQP')") \
		_T("   AND i.hfe_class              IN ('A', 'I')") \
		_T("   AND NVL(htr_outpatient, 'X') <> 'Y'") \
		_T("   AND ho_type                  IN ('I', 'C')") \
		_T("   AND f.hfe_status             <> 'C'") \
		_T("   AND f.hfe_discount            > 0") \
		_T("   AND hd_status                 = 'T'") \
		_T("   AND LENGTH(hc_cardno)         > 0") \
		_T("   AND i.hfe_status             IN ('P')") \
		_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') %s") \
		_T("   UNION ALL") \
		_T("   SELECT f.hfe_group AS group_id,") \
		_T("     Get_feegroupname(f.hfe_group) AS group_name,") \
		_T("     mp_atccode,") \
		_T("     f.hfe_desc AS item_name,") \
		_T("     f.hfe_unit AS don_vi,") \
		_T("     0 AS qtynoi,") \
		_T("     hfe_quantity AS qtyngoai,") \
		_T("     ROUND(f.hfe_insprice, 2) AS unit_price,") \
		_T("     ROUND(f.hfe_inspaid, 2) AS amount") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (hd_docno = hfe_docno)") \
		_T("   LEFT JOIN hms_card") \
		_T("   ON (hc_patientno = hd_patientno") \
		_T("   AND hc_idx       = hd_cardidx)") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON ( f.hfe_docno    = i.hfe_docno") \
		_T("   AND f.hfe_invoiceno = i.hfe_invoiceno)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON ( i.hfe_objectid = ho_id )") \
		_T("   LEFT JOIN m_productitem_view_bh") \
		_T("   ON ( CAST(hfe_itemid AS NVARCHAR2(15)) = product_item_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view") \
		_T("   ON (hpo_orderid       = f.hfe_orderid)") \
		_T("   WHERE f.hfe_type     IN ('D', 'M')") \
		_T("   AND hfe_hitech        = 'N'") \
		_T("   AND (product_org_id   = 'MA')") \
		_T("   AND hfe_category     IN ('N','BQP')") \
		_T("   AND i.hfe_class       = 'E'") \
		_T("   AND ho_type          IN ('I', 'C')") \
		_T("   AND f.hfe_status     <> 'C'") \
		_T("   AND f.hfe_discount    > 0") \
		_T("   AND hd_status         = 'T'") \
		_T("   AND LENGTH(hc_cardno) > 0") \
		_T("   AND i.hfe_status     IN ('P')") \
		_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') %s ") \
		_T("  UNION ALL") \
		_T("   SELECT f.hfe_group AS group_id,") \
		_T("     Get_feegroupname(f.hfe_group) AS group_name,") \
		_T("     mp_atccode,") \
		_T("     f.hfe_desc AS item_name,") \
		_T("     f.hfe_unit AS don_vi,") \
		_T("     0 AS qtynoi,") \
		_T("     hfe_quantity AS qtyngoai,") \
		_T("     CASE") \
		_T("       WHEN f.hfe_feegroup = 'OPT'") \
		_T("       THEN ROUND(f.hfe_unitprice, 2)") \
		_T("       ELSE ROUND(f.hfe_insprice, 2)") \
		_T("     END unit_price,") \
		_T("     CASE") \
		_T("       WHEN f.hfe_feegroup = 'OPT'") \
		_T("       THEN ROUND(f.hfe_cost, 2)") \
		_T("       ELSE ROUND(f.hfe_inspaid, 2)") \
		_T("     END amount") \
		_T("   FROM hms_fee f") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON (hd_docno = hfe_docno)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON (hcr_docno = hd_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON (hcr_docno     = htr_docno") \
		_T("   AND htr_treattime = f.hfe_treattime)") \
		_T("   LEFT JOIN hms_fee_invoice i") \
		_T("   ON ( f.hfe_docno    = i.hfe_docno") \
		_T("   AND f.hfe_invoiceno = i.hfe_invoiceno") \
		_T("   AND i.hfe_treattime = htr_treattime)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON ( i.hfe_objectid = ho_id )") \
		_T("   LEFT JOIN m_product_item") \
		_T("   ON ( CAST(hfe_itemid AS INTEGER) = mpi_product_item_id )") \
		_T("   LEFT JOIN m_product") \
		_T("   ON ( mp_product_id = mpi_product_id )") \
		_T("   LEFT JOIN hms_pharmaorder_view") \
		_T("   ON (hpo_orderid              = f.hfe_orderid)") \
		_T("   WHERE f.hfe_type            IN ('D', 'M')") \
		_T("   AND hfe_hitech               = 'N'") \
		_T("   AND (mp_org_id               = 'MA')") \
		_T("   AND hfe_category            IN ('N','BQP')") \
		_T("   AND i.hfe_class             IN ('A', 'I')") \
		_T("   AND NVL(htr_outpatient, 'X') = 'Y'") \
		_T("   AND ho_type                 IN ('I', 'C')") \
		_T("   AND f.hfe_discount           > 0") \
		_T("   AND i.hfe_status             = 'P'") \
		_T("   AND i.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') %s ") \
		_T("   )") \
		_T(" GROUP BY group_id,") \
		_T("   group_name,") \
		_T("   mp_atccode,") \
		_T("   item_name,") \
		_T("   don_vi,") \
		_T("   unit_price") \
		_T(" ORDER BY group_id,") \
		_T("   item_name"), m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere2, m_szFromDate, m_szToDate, szWhere3);
	
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}

CString CFMSudungvattuBHYT19_Y2015_917::GetQueryString_Check()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szWhere2, szWhere3;


		if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" HPOL_PRODUCT_ID = '%s'"), m_szItemKey);		

		szSQL.Format(_T(" SELECT") \
		_T(" hpol_docno as docno,") \
		_T(" GET_PATIENTNAME(hpol_docno) as patname,") \
		_T(" HPO_DEPTID as khoayeucau,") \
		_T(" HPOL_PRODUCT_ID as product_id,") \
		_T(" MP_NAME as ProductName,") \
		_T(" SUM(HPOL_QTYISSUE) as soluong") \
		_T(" FROM ") \
		_T(" HMS_IPHARMAORDER_VIEW_TB") \
		_T(" LEFT JOIN HMS_PHARMAORDER_VIEW_TB ON (hpo_docno=hpol_docno AND hpo_orderid=hpol_orderid)") \
		_T(" LEFT JOIN m_product ON (MP_PRODUCT_ID=HPOL_PRODUCT_ID)") \
		_T(" WHERE HPO_ORDERSTATUS = 'A' %s") \
		_T(" AND HPO_APPROVEDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP BY hpol_docno, HPO_DEPTID, HPOL_PRODUCT_ID,MP_NAME") \
		_T(" ORDER BY hpol_docno"), szWhere, m_szFromDate, m_szToDate);

	//_msg(_T("%s"), szSQL);
	return szSQL;
}


int CFMSudungvattuBHYT19_Y2015_917::OnListCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (!m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CFMSudungvattuBHYT19_Y2015_917::OnListUnCheckAll()
{
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCheck(i, FALSE);
		}
	}
	return 0;
}
