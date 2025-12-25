#include "stdafx.h"
#include "CFMServicePackageIncomeList.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCFMServicePackageIncomeList* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportToExcelSelectFnc(CWnd *pWnd){
	CCFMServicePackageIncomeList *pVw = (CCFMServicePackageIncomeList *)pWnd;
	pVw->OnExportToExcelSelect();
} 
static long _OnObjectListLoadDataFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList*)pWnd)->OnObjectListLoadData();
} 
static void _OnObjectListDblClickFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList*)pWnd)->OnObjectListDblClick();
} 
static void _OnObjectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCFMServicePackageIncomeList*)pWnd)->OnObjectListSelectChange(nOldItem, nNewItem);
} 
static int _OnObjectListDeleteItemFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnObjectListDeleteItem();
} 
static long _OnDeptListLoadDataFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList*)pWnd)->OnDeptListLoadData();
} 
static void _OnDeptListDblClickFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList*)pWnd)->OnDeptListDblClick();
} 
static void _OnDeptListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCFMServicePackageIncomeList*)pWnd)->OnDeptListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptListDeleteItemFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnDeptListDeleteItem();
} 
static void _OnDeptSendSelectFnc(CWnd *pWnd){
	 ((CCFMServicePackageIncomeList*)pWnd)->OnDeptSendSelect();
}
static long _OnPackageListLoadDataFnc(CWnd *pWnd){
	return ((CCFMServicePackageIncomeList*)pWnd)->OnPackageListLoadData();
} 
static void _OnPackageListDblClickFnc(CWnd *pWnd){
	((CCFMServicePackageIncomeList*)pWnd)->OnPackageListDblClick();
} 
static void _OnPackageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCFMServicePackageIncomeList*)pWnd)->OnPackageListSelectChange(nOldItem, nNewItem);
} 
static int _OnPackageListDeleteItemFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnPackageListDeleteItem();
} 
static void _OnStayInSelectFnc(CWnd *pWnd){
	 ((CCFMServicePackageIncomeList*)pWnd)->OnStayInSelect();
}
static void _OnFinishStayInSelectFnc(CWnd *pWnd){
	 ((CCFMServicePackageIncomeList*)pWnd)->OnFinishStayInSelect();
}
static void _OnPostedSelectFnc(CWnd *pWnd){
	  ((CCFMServicePackageIncomeList*)pWnd)->OnPostedSelect();
}
static int _OnAddCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnAddCFMServicePackageIncomeList();
} 
static int _OnEditCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnEditCFMServicePackageIncomeList();
} 
static int _OnDeleteCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnDeleteCFMServicePackageIncomeList();
} 
static int _OnSaveCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnSaveCFMServicePackageIncomeList();
} 
static int _OnCancelCFMServicePackageIncomeListFnc(CWnd *pWnd){
	 return ((CCFMServicePackageIncomeList*)pWnd)->OnCancelCFMServicePackageIncomeList();
}
static int _OnObjectListCheckAllFnc(CWnd *pWnd)
{
	return ((CCFMServicePackageIncomeList*)pWnd)->OnObjectListCheckAll();
}
static int _OnObjectListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CCFMServicePackageIncomeList*)pWnd)->OnObjectListUnCheckAll();
}
static int _OnDeptListCheckAllFnc(CWnd *pWnd)
{
	return ((CCFMServicePackageIncomeList*)pWnd)->OnDeptListCheckAll();
}
static int _OnDeptListUnCheckAllFnc(CWnd *pWnd)
{
	return ((CCFMServicePackageIncomeList*)pWnd)->OnDeptListUnCheckAll();
}

CCFMServicePackageIncomeList::CCFMServicePackageIncomeList(CWnd *pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCFMServicePackageIncomeList::~CCFMServicePackageIncomeList()
{
}
void CCFMServicePackageIncomeList::OnCreateComponents()
{
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 4, 500, 524);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 115, 55);
	m_wndYear.Create(this,120, 29, 256, 54); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 263, 30, 359, 55);
	m_wndReportPeriod.Create(this,364, 29, 500, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 115, 85);
	m_wndFromDate.Create(this,120, 59, 256, 84); 
	m_wndToDateLabel.Create(this, _T("To Date"), 263, 60, 359, 85);
	m_wndToDate.Create(this,364, 60, 500, 85); 
	m_wndExportToExcel.Create(this, _T("&ExportToExcel"), 350, 530, 500, 555);
	m_wndObjectList.Create(this,10, 90, 501, 200); 
	m_wndDeptList.Create(this,10, 203, 501, 348); 
	m_wndDeptSend.Create(this, _T("DeptSend"), 5, 531, 195, 556);
	m_wndPackageList.Create(this,10, 354, 501, 526); 
	m_wndStayIn.Create(this, _T("Stayin"), 201, 531, 345, 556);
	m_wndFinishStayIn.Create(this, _T("Finish StayIn"), 5, 556, 195, 581);
	m_wndPosted.Create(this, _T("Posted"), 201, 556, 345, 581);
}
void CCFMServicePackageIncomeList::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);	
	m_wndReportPeriod.LimitText(35);	
	m_wndFromDate.SetCheckValue(true);	
	m_wndToDate.SetCheckValue(true);
	
	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndObjectList.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndObjectList.SetCheckBox(TRUE);

	m_wndDeptList.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDeptList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDeptList.SetCheckBox(TRUE);
	
	m_wndPackageList.InsertColumn(0, _T("id"), CFMT_TEXT, 90);
	m_wndPackageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndPackageList.InsertColumn(2, _T("Price"), CFMT_TEXT, 100);

	m_wndPackageList.SetCheckBox(TRUE);


}
void CCFMServicePackageIncomeList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExportToExcel.SetEvent(WE_CLICK, _OnExportToExcelSelectFnc);
	m_wndObjectList.SetEvent(WE_SELCHANGE, _OnObjectListSelectChangeFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndObjectList.SetEvent(WE_DBLCLICK, _OnObjectListDblClickFnc);	

	m_wndObjectList.AddEvent(1, _T("Check All"), _OnObjectListCheckAllFnc);
	m_wndObjectList.AddEvent(2, _T("UnCheck All"), _OnObjectListUnCheckAllFnc);

	m_wndDeptList.SetEvent(WE_SELCHANGE, _OnDeptListSelectChangeFnc);
	m_wndDeptList.SetEvent(WE_LOADDATA, _OnDeptListLoadDataFnc);
	m_wndDeptList.SetEvent(WE_DBLCLICK, _OnDeptListDblClickFnc);

	m_wndDeptList.AddEvent(1, _T("Check All"), _OnDeptListCheckAllFnc);
	m_wndDeptList.AddEvent(2, _T("UnCheck All"), _OnDeptListUnCheckAllFnc);

	m_wndDeptSend.SetEvent(WE_CLICK, _OnDeptSendSelectFnc);
	m_wndPackageList.SetEvent(WE_SELCHANGE, _OnPackageListSelectChangeFnc);
	m_wndPackageList.SetEvent(WE_LOADDATA, _OnPackageListLoadDataFnc);
	m_wndPackageList.SetEvent(WE_DBLCLICK, _OnPackageListDblClickFnc);
	
	m_wndStayIn.SetEvent(WE_CLICK, _OnStayInSelectFnc);
	m_wndFinishStayIn.SetEvent(WE_CLICK, _OnFinishStayInSelectFnc);
	m_wndPosted.SetEvent(WE_CLICK, _OnPostedSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCFMServicePackageIncomeListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCFMServicePackageIncomeListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCFMServicePackageIncomeListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCFMServicePackageIncomeListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCFMServicePackageIncomeListFnc, 0, 'T', VK_CONTROL);
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), ToInt(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");

	UpdateData(false);
	OnObjectListLoadData();
	OnDeptListLoadData();
	OnPackageListLoadData();

}
void CCFMServicePackageIncomeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndDeptSend.GetDlgCtrlID(), m_bDeptSend);
	DDX_Check(pDX, m_wndStayIn.GetDlgCtrlID(), m_bStayIn);
	DDX_Check(pDX, m_wndFinishStayIn.GetDlgCtrlID(), m_bFinishStayIn);
	DDX_Radio(pDX, m_wndPosted.GetDlgCtrlID(), m_nPosted);

}
void CCFMServicePackageIncomeList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("ReportPeriod")] =  m_szReportPeriodKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("DeptSend")] =  m_bDeptSend;
	m_jData[_T("StayIn")] =  m_bStayIn;
	m_jData[_T("FinishStayIn")] =  m_bFinishStayIn;
	m_jData[_T("Posted")] =  m_nPosted;
	}
	else
	{
			
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("ReportPeriod")].GetValue(m_szReportPeriodKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("DeptSend")].GetValue(m_bDeptSend);
	m_jData[_T("StayIn")].GetValue(m_bStayIn);
	m_jData[_T("FinishStayIn")].GetValue(m_bFinishStayIn);
	m_jData[_T("Posted")].GetValue(m_nPosted);
	}

}
void CCFMServicePackageIncomeList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCFMServicePackageIncomeList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CCFMServicePackageIncomeList::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bDeptSend=FALSE;
	m_bStayIn=FALSE;
	m_bFinishStayIn=FALSE;
	m_nPosted=1;

}
int CCFMServicePackageIncomeList::SetMode(int nMode){
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
/*void CCFMServicePackageIncomeList::OnYearChange(){
	
} */
/*void CCFMServicePackageIncomeList::OnYearSetfocus(){
	
} */
/*void CCFMServicePackageIncomeList::OnYearKillfocus(){
	
} */
int CCFMServicePackageIncomeList::OnYearCheckValue(){
	return 0;
} 
void CCFMServicePackageIncomeList::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CCFMServicePackageIncomeList::OnReportPeriodSelendok(){
	 
}
/*void CCFMServicePackageIncomeList::OnReportPeriodSetfocus(){
	
}*/
/*void CCFMServicePackageIncomeList::OnReportPeriodKillfocus(){
	
}*/
long CCFMServicePackageIncomeList::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCFMServicePackageIncomeList::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CCFMServicePackageIncomeList::OnFromDateChange(){
	
} */
/*void CCFMServicePackageIncomeList::OnFromDateSetfocus(){
	
} */
/*void CCFMServicePackageIncomeList::OnFromDateKillfocus(){
	
} */
int CCFMServicePackageIncomeList::OnFromDateCheckValue(){
	return 0;
} 
/*void CCFMServicePackageIncomeList::OnToDateChange(){
	
} */
/*void CCFMServicePackageIncomeList::OnToDateSetfocus(){
	
} */
/*void CCFMServicePackageIncomeList::OnToDateKillfocus(){
	
} */
int CCFMServicePackageIncomeList::OnToDateCheckValue(){
	return 0;
} 
void CCFMServicePackageIncomeList::OnExportToExcelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szTemp;

	UpdateData(TRUE);
	BeginWaitCursor();

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//1. STT//
	xls.SetColumnWidth(0, 5);
	//2. Khoa//
	xls.SetColumnWidth(1, 10);
	//3. Số hồ sơ//
	xls.SetColumnWidth(2, 10);
	//4. Họ tên BN//
	xls.SetColumnWidth(3, 20);
	//5. Họ tên người thân
	xls.SetColumnWidth(4, 20);
	//6. Năm sinh//
	xls.SetColumnWidth(5, 10);
	//7. Giới tính
	xls.SetColumnWidth(6, 10);
	//8. Điện thoại//
	xls.SetColumnWidth(7, 25);
	//9. Diễn giải//
	xls.SetColumnWidth(8, 30);
	//10. Số lượng//
	xls.SetColumnWidth(9, 12);
	//11. Số tiền//
	xls.SetColumnWidth(10, 12);
	//12. Ngày bắt đầu//
	xls.SetColumnWidth(11,15);
	//13. Ngày kết thúc//
	xls.SetColumnWidth(12,15);
	//14. Trạng thái
	xls.SetColumnWidth(13,12);

	int nRow = 1;
	int nCol = 0;
	int nIndex = 1;
	CString szOldLine, szNewLine;
	double nGroupTotal = 0, nTotal = 0;
	double nCost = 0;

	xls.SetRowHeight(6, 45);

	xls.SetCellMergedColumns(0, 1, 4);
	xls.SetCellMergedColumns(0, 2, 4);

	xls.SetCellMergedColumns(6, 1, 13);
	xls.SetCellMergedColumns(6, 2, 13);

	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(6, 1, _T("\x43\x1ED8NG H\xD2\x41 \x58\xC3 H\x1ED8I \x43H\x1EE6 NGH\x128\x41 VI\x1EC6T N\x41M"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(6, 2, _T("\x110\x1ED8\x43 L\x1EACP - T\x1EF0 \x44O - H\x1EA0NH PH\xDA\x43"), FMT_TEXT | FMT_CENTER, true);

	xls.SetCellMergedColumns(nCol, nRow + 3, 13);
	xls.SetCellMergedColumns(nCol, nRow + 4, 13);

	xls.SetCellText(nCol, nRow + 3, _T("THỐNG KÊ DOANH THU GÓI DỊCH VỤ THEO LOẠI"),
					FMT_TEXT | FMT_CENTER, true, 16, 0);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		          CDateTime::Convert(m_szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
				  CDateTime::Convert(m_szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);

	TranslateString(_T("Index"), tmpStr);
	xls.SetCellText(nCol, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Khoa"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 2, nRow + 5, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);	

	TranslateString(_T("Họ tên bệnh nhân"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Họ tên người thân"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Năm sinh"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Giới tính"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	TranslateString(_T("Số điện thoại"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 5, tmpStr, FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 8, nRow + 5, _T("Diễn giải"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	xls.SetCellText(nCol + 9, nRow + 5, _T("Số lượng"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 10, nRow + 5, _T("Thành tiền"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);	
	xls.SetCellText(nCol + 11, nRow + 5, _T("Ngày bắt đầu"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 12, nRow + 5, _T("Ngày kết thúc"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(nCol + 13, nRow + 5, _T("Trạng thái"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true, 11);

	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hfel_itemid"), szNewLine);

		if (!szNewLine.IsEmpty() && szNewLine != szOldLine)
		{
			if (nGroupTotal > 0)
			{
				nRow++;
				xls.SetCellText(nCol + 9, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_WRAPING, true);
				tmpStr.Format(_T("%.2lf"), nGroupTotal);
				xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
				nTotal += nGroupTotal;
				nGroupTotal = 0;
			}
			szOldLine = szNewLine;
		}

		nRow++;

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER | FMT_WRAPING);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);


		rs.GetValue(_T("relative"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		
		
		rs.GetValue(_T("gender"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		
		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);

		if (nGroupTotal == 0)
		{
		rs.GetValue(_T("hfel_desc"), tmpStr);
		xls.SetCellText(nCol + 8, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		}
		
		rs.GetValue(_T("hfel_quantity"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);

		rs.GetValue(_T("hfel_patpaid"), nCost);
		nGroupTotal += nCost;
		tmpStr.Format(_T("%.2f"), nCost);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING);	

		rs.GetValue(_T("begindate"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		

		rs.GetValue(_T("hfe_status"), tmpStr);
		xls.SetCellText(nCol + 13, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);		

		rs.MoveNext();
	}

	if (nGroupTotal > 0)
	{
		nRow++;
		xls.SetCellText(nCol + 9, nRow, _T("Tổng nhóm"), FMT_TEXT | FMT_WRAPING, true);
		tmpStr.Format(_T("%.2lf"), nGroupTotal);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
		nTotal += nGroupTotal;
		nGroupTotal = 0;
	}

	if (nTotal > 0)
	{
		nRow++;
		xls.SetCellText(nCol + 9, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_WRAPING, true);
		tmpStr.Format(_T("%.2lf"), nTotal);
		xls.SetCellText(nCol + 10, nRow, tmpStr, FMT_NUMBER1 | FMT_WRAPING, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\BAOCAODOANHTHUTHEOGOIDICHVU.xls"));
	return;	
} 
void CCFMServicePackageIncomeList::OnObjectListDblClick(){
	
} 
void CCFMServicePackageIncomeList::OnObjectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CCFMServicePackageIncomeList::OnObjectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCFMServicePackageIncomeList::OnObjectListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;

	//szWhere.Format(_T(" AND ho_type IN('S') "));

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ") \
				 _T("ORDER BY cast(ho_id as integer)"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
}
void CCFMServicePackageIncomeList::OnDeptListDblClick(){
	
} 
void CCFMServicePackageIncomeList::OnDeptListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CCFMServicePackageIncomeList::OnDeptListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCFMServicePackageIncomeList::OnDeptListLoadData()
{
CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndDeptList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		         _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' ORDER BY id "));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeptList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndDeptList.EndLoad();
	return nCount;
}
	void CCFMServicePackageIncomeList::OnDeptSendSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CCFMServicePackageIncomeList::OnPackageListDblClick(){
	
} 
void CCFMServicePackageIncomeList::OnPackageListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CCFMServicePackageIncomeList::OnPackageListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCFMServicePackageIncomeList::OnPackageListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndPackageList.BeginLoad();
	int nCount = 0;

	szSQL.Format(_T("select hfl_feeid AS id, hfl_name AS name, hfl_servprice AS price from hms_fee_list where hfl_typeid='X' and hfl_active='Y' ") \
		         _T("and hfl_feeid in (select ss_code from sys_sel where ss_id='HMS_SERVICE_PACKAGE')"));				 

	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF())
	{ 
		m_wndPackageList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
		    rs.GetValue(_T("price")), NULL);
		rs.MoveNext();
	}
	m_wndPackageList.EndLoad();
	return nCount;
}
	void CCFMServicePackageIncomeList::OnStayInSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CCFMServicePackageIncomeList::OnFinishStayInSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CCFMServicePackageIncomeList::OnPostedSelect(){
	
}
int CCFMServicePackageIncomeList::OnAddCFMServicePackageIncomeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCFMServicePackageIncomeList::OnEditCFMServicePackageIncomeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCFMServicePackageIncomeList::OnDeleteCFMServicePackageIncomeList(){
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
 		OnCancelCFMServicePackageIncomeList();
 	}
	return 0;
}
int CCFMServicePackageIncomeList::OnSaveCFMServicePackageIncomeList(){
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
 		//OnCFMServicePackageIncomeListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCFMServicePackageIncomeList::OnCancelCFMServicePackageIncomeList(){
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
int CCFMServicePackageIncomeList::OnCFMServicePackageIncomeListListLoadData(){
	return 0;
}
int CCFMServicePackageIncomeList::OnDeptListCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (!m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CCFMServicePackageIncomeList::OnDeptListUnCheckAll()
{
	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			m_wndDeptList.SetCheck(i, FALSE);
		}
	}
	return 0;
}


int CCFMServicePackageIncomeList::OnObjectListCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (!m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, TRUE);
		}
	}
	return 0;
}

int CCFMServicePackageIncomeList::OnObjectListUnCheckAll()
{
	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			m_wndObjectList.SetCheck(i, FALSE);
		}
	}
	return 0;
}
CString CCFMServicePackageIncomeList::GetQueryString()
{
	CString szSQL, szWhere, szDepts, szObjects, szPackages;

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	for (int i = 0; i < m_wndDeptList.GetItemCount(); i++)
	{
		if (m_wndDeptList.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("'%s'"), m_wndDeptList.GetItemText(i, 0));
		}
	}
	
	for (int i = 0; i < m_wndPackageList.GetItemCount(); i++)
	{
		if (m_wndPackageList.GetCheck(i))
		{
			if (!szPackages.IsEmpty())
				szPackages += _T(",");
			szPackages.AppendFormat(_T("'%s'"), m_wndPackageList.GetItemText(i, 0));
		}
	}	
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and object_id in(%s) "), szObjects);
	}

	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and deptid in(%s) "), szDepts);
	}
	if (!szPackages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfel_itemid in(%s) "), szPackages);
	}

	if (!m_bDeptSend && !m_bStayIn && !m_bFinishStayIn)
		return 0;

	if (m_bDeptSend)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('O','S')"));
	}
	if (m_bStayIn)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('I')"));
	}
	if (m_bFinishStayIn)
	{
		szWhere.AppendFormat(_T("and hfe_status in ('T') and hfe_enddate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"),m_szFromDate, m_szToDate);
	}
	szSQL.Format(_T(" SELECT * FROM") \
				_T(" (") \
				_T(" SELECT DISTINCT hd_docno AS docno,") \
				_T("   hd_patientno           AS patientno,") \
				_T("   CASE") \
				_T("     WHEN htr_deptid IS NOT NULL") \
				_T("     THEN htr_deptid") \
				_T("     ELSE hd_enddept") \
				_T("   END AS deptid,") \
				_T("   trim( hp_surname") \
				_T("   ||' '") \
				_T("   ||hp_midname") \
				_T("   ||' '") \
				_T("   ||hp_firstname)                                 AS pname,") \
				_T("   (SELECT hr_name FROM hms_relative WHERE hr_relative_id=hfe_relative_id) AS relative,") \
				_T("   TO_CHAR(hp_birthdate, 'YYYY')                   AS yob,") \
				_T("   hms_getsex(hp_sex)                              AS gender,") \
				_T("   hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
				_T("   hd_telephone") \
				_T("   ||','") \
				_T("   ||hd_contacttel AS phone,") \
				_T("   hfel_itemid, hfel_desc, hfel_quantity, hfel_patpaid, hfe_status,hfe_enddate,") \
				_T("   TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI')                                                            AS begindate,") \
				_T("   TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')                                                              AS enddate,") \
				_T("   (SELECT SUM(extract(DAY FROM systimestamp-hfe_enddate)*24+extract(hour FROM systimestamp-hfe_enddate))") \
				_T("   FROM hms_fee_extra") \
				_T("   WHERE hfe_docno=hd_docno") \
				_T("   ) AS ttl_hour") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON(hd_patientno = hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record") \
				_T(" ON(hcr_docno = hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record") \
				_T(" ON(hcr_docno = htr_docno)") \
				_T(" LEFT JOIN hms_fee_extra") \
				_T(" ON(hfe_docno  = hd_docno AND hfe_type  ='S')") \
				_T(" LEFT JOIN hms_fee_extraline ON (hd_docno=hfel_docno AND hfe_fee_extra_id=hfel_fee_extra_id)") \
				_T(" WHERE 1       =1") \
				_T(" ORDER BY hfel_desc") \
				_T(" ) WHERE 1=1 %s "),szWhere);
				//_msg(_T("%s"), szSQL);
	return szSQL;
}