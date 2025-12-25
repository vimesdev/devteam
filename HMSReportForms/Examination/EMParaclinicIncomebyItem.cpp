#include "stdafx.h"
#include "EMParaclinicIncomebyItem.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicIncomebyItem *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicIncomebyItem *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMParaclinicIncomebyItem* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CEMParaclinicIncomebyItem *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMParaclinicIncomebyItem* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CEMParaclinicIncomebyItem *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnItemAddNew();
}*/
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMParaclinicIncomebyItem* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CEMParaclinicIncomebyItem *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CEMParaclinicIncomebyItem *)pWnd)->OnClerkAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMParaclinicIncomebyItem *pVw = (CEMParaclinicIncomebyItem *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMParaclinicIncomebyItem *pVw = (CEMParaclinicIncomebyItem *)pWnd;
	pVw->OnExportSelect();
}
static void _OnLockedSelectFnc(CWnd *pWnd){
	 ((CEMParaclinicIncomebyItem*)pWnd)->OnLockedSelect();
}
static int _OnAddFMTestPatientListFnc(CWnd *pWnd){
	 return ((CEMParaclinicIncomebyItem*)pWnd)->OnAddFMTestPatientList();
} 
static int _OnEditFMTestPatientListFnc(CWnd *pWnd){
	 return ((CEMParaclinicIncomebyItem*)pWnd)->OnEditFMTestPatientList();
} 
static int _OnDeleteFMTestPatientListFnc(CWnd *pWnd){
	 return ((CEMParaclinicIncomebyItem*)pWnd)->OnDeleteFMTestPatientList();
} 
static int _OnSaveFMTestPatientListFnc(CWnd *pWnd){
	 return ((CEMParaclinicIncomebyItem*)pWnd)->OnSaveFMTestPatientList();
} 
static int _OnCancelFMTestPatientListFnc(CWnd *pWnd){
	 return ((CEMParaclinicIncomebyItem*)pWnd)->OnCancelFMTestPatientList();
} 
CEMParaclinicIncomebyItem::CEMParaclinicIncomebyItem(CWnd *pParent)
{
	m_nDlgWidth = 500;
	m_nDlgHeight = 220;
	SetDefaultValues();
}
CEMParaclinicIncomebyItem::~CEMParaclinicIncomebyItem(){
}
void CEMParaclinicIncomebyItem::OnCreateComponents()
{
	/*m_wndTestPatientList.Create(this, _T("Test Patient List"), 5, 5, 490, 150);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 485, 85); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 90, 90, 115);
	m_wndItem.Create(this,95, 90, 485, 115); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 120, 90, 145);
	m_wndClerk.Create(this,95, 120, 485, 145); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 300, 155, 410, 180);
	m_wndExport.Create(this, _T("&Export"), 415, 155, 490, 180);*/

	m_wndTestPatientList.Create(this, _T("Report Condition"), 5, 5, 430, 180);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 425, 85); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 90, 90, 115);
	m_wndItem.Create(this,95, 90, 425, 115); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 120, 90, 145);
	m_wndClerk.Create(this,95, 120, 425, 145); 
	m_wndLocked.Create(this, _T("Locked"), 315, 150, 425, 175);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 205, 185, 315, 210);
	m_wndExport.Create(this, _T("&Export"), 320, 185, 430, 210);
	m_wndLocked.EnableWindow(FALSE);
}

void CEMParaclinicIncomebyItem::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(62);

	//m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1065);

	//m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(65);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndClerk.InsertColumn(1, _T("Name"), CFMT_TEXT, 270);

}
void CEMParaclinicIncomebyItem::OnSetWindowEvents()
{
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndLocked.SetEvent(WE_CLICK, _OnLockedSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CEMParaclinicIncomebyItem::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndLocked.GetDlgCtrlID(), m_bLocked);
}
void CEMParaclinicIncomebyItem::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMParaclinicIncomebyItem::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMParaclinicIncomebyItem::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();
	m_szClerkKey.Empty();
	m_bLocked=FALSE;

}
int CEMParaclinicIncomebyItem::SetMode(int nMode){
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
/*void CEMParaclinicIncomebyItem::OnFromDateChange(){
	
} */
/*void CEMParaclinicIncomebyItem::OnFromDateSetfocus(){
	
} */
/*void CEMParaclinicIncomebyItem::OnFromDateKillfocus(){
	
} */
int CEMParaclinicIncomebyItem::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMParaclinicIncomebyItem::OnToDateChange(){
	
} */
/*void CEMParaclinicIncomebyItem::OnToDateSetfocus(){
	
} */
/*void CEMParaclinicIncomebyItem::OnToDateKillfocus(){
	
} */
int CEMParaclinicIncomebyItem::OnToDateCheckValue(){
	return 0;
} 
void CEMParaclinicIncomebyItem::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMParaclinicIncomebyItem::OnGroupSelendok(){
	 
}
/*void CEMParaclinicIncomebyItem::OnGroupSetfocus(){
	
}*/
/*void CEMParaclinicIncomebyItem::OnGroupKillfocus(){
	
}*/

long CEMParaclinicIncomebyItem::OnGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	}

	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as description FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN ('B1', 'B2', 'B3') OR hfg_id IN ('B4000', 'B5000') ORDER BY hfg_id"));
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMParaclinicIncomebyItem::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CEMParaclinicIncomebyItem::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMParaclinicIncomebyItem::OnItemSelendok(){
	 
}
/*void CEMParaclinicIncomebyItem::OnItemSetfocus(){
	
}*/
/*void CEMParaclinicIncomebyItem::OnItemKillfocus(){
	
}*/
long CEMParaclinicIncomebyItem::OnItemLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szItemKey);
	}

	if (m_szGroupKey.IsEmpty())
	{
		m_wndGroup.SetToolTipMessage(_T("Pick an item."));
		return 0;
	}

	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as description ") \
		         _T("FROM hms_fee_list WHERE hfl_groupid='%s'"), m_szGroupKey);

	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMParaclinicIncomebyItem::OnItemAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMParaclinicIncomebyItem::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMParaclinicIncomebyItem::OnClerkSelendok(){
	 
}
/*void CEMParaclinicIncomebyItem::OnClerkSetfocus(){
	
}*/
/*void CEMParaclinicIncomebyItem::OnClerkKillfocus(){
	
}*/
long CEMParaclinicIncomebyItem::OnClerkLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty())
	{
		szWhere.Format(_T(" and lower(su_userid)=lower('%s') "), m_szClerkKey);
	};
	m_wndClerk.DeleteAllItems(); 
	szSQL.Format(_T("SELECT su_userid as userid, su_name as name FROM sys_user WHERE su_groupid in('A', 'F') %s ORDER BY su_userid"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("userid")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMParaclinicIncomebyItem::OnClerkAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMParaclinicIncomebyItem::OnLockedSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CEMParaclinicIncomebyItem::OnPrintPreviewSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	/*Declaration Section*/
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL;
	double nTmp = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewLev1;
	long double nTotal = 0, nGroupTotal1 = 0;
	szReportName = _T("");
	if (!rpt.Init(szReportName))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
		rptHeader->SetValue(_T("ReportDate"), tmpStr);
	}
	while (!rs.IsEOF())
	{
		/*Group Seperation*/
		rs.GetValue(_T("item_group"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1 > 0)
			{
				tmpStr.Format(_T("%f"), nGroupTotal1);
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(0));
				rptGroup->SetValue(_T("s4"), tmpStr);
				nTotal+= nGroupTotal1;
				nGroupTotal1 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));
			rptDetail->SetValue(_T("2"), rs.GetValue(_T("descr")));
			rptDetail->SetValue(_T("3"), rs.GetValue(_T("qty")));
			rs.GetValue(_T("amount"), nTmp);
			nGroupTotal1+= nTmp;
			rptDetail->SetValue(_T("4"), double2str(nTmp));
		}
		rs.MoveNext();
	}
	if (nGroupTotal1 > 0)
	{
		tmpStr.Format(_T("%f"), nGroupTotal1);
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(0));
		rptGroup->SetValue(_T("s4"), tmpStr);
		nTotal+= nGroupTotal1;
	}
	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CEMParaclinicIncomebyItem::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, szPrevMark, szCurMark;
	double nTmp = 0, nGrpAmt = 0;
	long double nTotalAmt = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(3, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 3);
	xls.SetCellMergedColumns(0, 3, 3);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x43\x1EACN L\xC2M S\xC0NG TH\x45O \x110\x1EC0 M\x1EE4\x43");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("T\xEAn"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), 4098, true);
	xls.SetCellText(3, 4, _T("Th\xE0nh ti\x1EC1n"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("item_group"), szCurMark);
		if (szCurMark != szPrevMark)
		{
			if (nGrpAmt > 0)
			{
				xls.SetCellText(2, nRow, _T("T\x1ED5ng nh\xF3m: "), 4098, true);
				tmpStr.Format(_T("%f"), nGrpAmt);
				xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1, true);
				nTotalAmt += nGrpAmt;
				nGrpAmt= 0;
				nRow++;
			}
			xls.SetCellText(1, nRow, rs.GetValue(_T("group_name")), 4098, true);
			nRow++;
			szPrevMark = szCurMark;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("descr")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("qty")), FMT_NUMBER1);
		rs.GetValue(_T("amount"), nTmp);
		nGrpAmt += nTmp;
		tmpStr.Format(_T("%f"), nTmp);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		xls.SetCellText(2, nRow, _T("T\x1ED5ng nh\xF3m: "), 4098, true);
		tmpStr.Format(_T("%f"), nGrpAmt);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1, true);
		nTotalAmt += nGrpAmt;
		nRow++;
	}
	if (nTotalAmt > 0)
	{
		xls.SetCellText(2, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), 4098, true);
		tmpStr.Format(_T("%f"), nTotalAmt);
		xls.SetCellText(3, nRow, tmpStr, FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\Can lam sang theo de muc.xls"));
	
} 
int CEMParaclinicIncomebyItem::OnAddFMTestPatientList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CEMParaclinicIncomebyItem::OnEditFMTestPatientList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMParaclinicIncomebyItem::OnDeleteFMTestPatientList(){
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
 		OnCancelFMTestPatientList(); 
 	}
	return 0;
}
int CEMParaclinicIncomebyItem::OnSaveFMTestPatientList(){
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
 		//OnFMTestPatientListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CEMParaclinicIncomebyItem::OnCancelFMTestPatientList(){
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
int CEMParaclinicIncomebyItem::OnFMTestPatientListListLoadData(){
	return 0;
}

CString CEMParaclinicIncomebyItem::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL, szWhere;
	szWhere.Empty();
	
	if (!m_szClerkKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fi.hfe_staff='%s' "), m_szClerkKey);
	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fe.hfe_group='%s' "), m_szGroupKey);
	if (!m_szItemKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND fe.hfe_itemid='%s' "), m_szItemKey);

	if (m_bLocked)
	{
		szWhere.AppendFormat(_T(" AND fi.hfe_locked='Y' "));
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') "),
			                 m_szFromDate, m_szToDate);
	}
	else
	{
		//szWhere.AppendFormat(_T(" AND fi.hfe_locked<>'Y' "));
		szWhere.AppendFormat(_T(" AND fi.hfe_date BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') "),
			                 m_szFromDate, m_szToDate);
	}

	szSQL.Format(_T(" SELECT fe.hfe_group item_group, fe.hfe_desc descr, ") \
				_T("		 (select hfg_name from hms_fee_group where hfg_id = fe.hfe_group) group_name,") \
				_T("         SUM(fe.hfe_quantity) qty, SUM(fe.hfe_patpaid) AS amount") \
				_T("  FROM hms_fee_invoice fi") \
				_T("  LEFT JOIN hms_fee fe ON(fi.hfe_invoiceno=fe.hfe_invoiceno AND fi.hfe_docno=fe.hfe_docno)") \
				_T("  WHERE fi.hfe_class IN ('E') %s") \
				_T("        AND fe.hfe_type IN('P','T') AND fi.hfe_status='P' AND fi.hfe_isreq = 'Y'") \
				_T(" GROUP BY fe.hfe_group, fe.hfe_desc") \
				_T(" ORDER BY fe.hfe_group, fe.hfe_desc"), szWhere);

	return szSQL;
}
