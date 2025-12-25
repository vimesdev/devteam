#include "FAMSummaryAssetValueDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static void _OnFromMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMSummaryAssetValueDialog* )pWnd)->OnFromMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromMonthSelendokFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnFromMonthSelendok();
}
/*static void _OnFromMonthSetfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnFromMonthKillfocus();
}*/
/*static void _OnFromMonthKillfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnFromMonthKillfocus();
}*/
static long _OnFromMonthLoadDataFnc(CWnd *pWnd){
	return ((CFAMSummaryAssetValueDialog *)pWnd)->OnFromMonthLoadData();
}
/*static void _OnFromMonthAddNewFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnFromMonthAddNew();
}*/
static void _OnToMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMSummaryAssetValueDialog* )pWnd)->OnToMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnToMonthSelendokFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnToMonthSelendok();
}
/*static void _OnToMonthSetfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnToMonthKillfocus();
}*/
/*static void _OnToMonthKillfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnToMonthKillfocus();
}*/
static long _OnToMonthLoadDataFnc(CWnd *pWnd){
	return ((CFAMSummaryAssetValueDialog *)pWnd)->OnToMonthLoadData();
}
/*static void _OnToMonthAddNewFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnToMonthAddNew();
}*/
static void _OnYearSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMSummaryAssetValueDialog* )pWnd)->OnYearSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnYearSelendokFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnYearSelendok();
}
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnYearKillfocus();
}*/
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnYearKillfocus();
}*/
static long _OnYearLoadDataFnc(CWnd *pWnd){
	return ((CFAMSummaryAssetValueDialog *)pWnd)->OnYearLoadData();
}
/*static void _OnYearAddNewFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnYearAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMSummaryAssetValueDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CFAMSummaryAssetValueDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CFAMSummaryAssetValueDialog *)pWnd)->OnCategoryAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CFAMSummaryAssetValueDialog *pVw = (CFAMSummaryAssetValueDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFAMSummaryAssetValueDialog *pVw = (CFAMSummaryAssetValueDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFAMSummaryAssetValueDialog *pVw = (CFAMSummaryAssetValueDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMSummaryAssetValueDialog *pVw = (CFAMSummaryAssetValueDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMSummaryAssetValueDialogFnc(CWnd *pWnd){
	 return ((CFAMSummaryAssetValueDialog*)pWnd)->OnAddFAMSummaryAssetValueDialog();
} 
static int _OnEditFAMSummaryAssetValueDialogFnc(CWnd *pWnd){
	 return ((CFAMSummaryAssetValueDialog*)pWnd)->OnEditFAMSummaryAssetValueDialog();
} 
static int _OnDeleteFAMSummaryAssetValueDialogFnc(CWnd *pWnd){
	 return ((CFAMSummaryAssetValueDialog*)pWnd)->OnDeleteFAMSummaryAssetValueDialog();
} 
static int _OnSaveFAMSummaryAssetValueDialogFnc(CWnd *pWnd){
	 return ((CFAMSummaryAssetValueDialog*)pWnd)->OnSaveFAMSummaryAssetValueDialog();
} 
static int _OnCancelFAMSummaryAssetValueDialogFnc(CWnd *pWnd){
	 return ((CFAMSummaryAssetValueDialog*)pWnd)->OnCancelFAMSummaryAssetValueDialog();
} 
CFAMSummaryAssetValueDialog::CFAMSummaryAssetValueDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CFAMSummaryAssetValueDialog::~CFAMSummaryAssetValueDialog(){
}
void CFAMSummaryAssetValueDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 4, 6, 349, 181);
	m_wndFromMonthLabel.Create(this, _T("From Month"), 10, 30, 90, 55);
	m_wndFromMonth.Create(this,95, 30, 185, 55); 
	m_wndToMonthLabel.Create(this, _T("To Month"), 10, 60, 90, 85);
	m_wndToMonth.Create(this,95, 60, 185, 85); 
	m_wndYearLabel.Create(this, _T("Year"), 10, 90, 90, 115);
	m_wndYear.Create(this,95, 90, 185, 115); 
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 120, 90, 145);
	m_wndCategory.Create(this,95, 120, 345, 145); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 10, 150, 90, 175);
	m_wndPrint.Create(this, _T("&Print"), 95, 150, 175, 175);
	m_wndExport.Create(this, _T("&Export"), 180, 150, 260, 175);
	m_wndClose.Create(this, _T("&Close"), 265, 150, 345, 175);

}
void CFAMSummaryAssetValueDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromMonth.SetCheckValue(true);
	m_wndFromMonth.LimitText(35);
	m_wndToMonth.SetCheckValue(true);
	m_wndToMonth.LimitText(35);
	m_wndYear.SetCheckValue(true);
	m_wndYear.LimitText(35);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);


	m_wndFromMonth.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndFromMonth.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndToMonth.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndToMonth.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndYear.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndYear.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	SetWindowTitle(_T("Summary Fixed Asset Value"));
}
void CFAMSummaryAssetValueDialog::OnSetWindowEvents(){
	m_wndFromMonth.SetEvent(WE_SELENDOK, _OnFromMonthSelendokFnc);
	//m_wndFromMonth.SetEvent(WE_SETFOCUS, _OnFromMonthSetfocusFnc);
	//m_wndFromMonth.SetEvent(WE_KILLFOCUS, _OnFromMonthKillfocusFnc);
	m_wndFromMonth.SetEvent(WE_SELCHANGE, _OnFromMonthSelectChangeFnc);
	m_wndFromMonth.SetEvent(WE_LOADDATA, _OnFromMonthLoadDataFnc);
	//m_wndFromMonth.SetEvent(WE_ADDNEW, _OnFromMonthAddNewFnc);
	m_wndToMonth.SetEvent(WE_SELENDOK, _OnToMonthSelendokFnc);
	//m_wndToMonth.SetEvent(WE_SETFOCUS, _OnToMonthSetfocusFnc);
	//m_wndToMonth.SetEvent(WE_KILLFOCUS, _OnToMonthKillfocusFnc);
	m_wndToMonth.SetEvent(WE_SELCHANGE, _OnToMonthSelectChangeFnc);
	m_wndToMonth.SetEvent(WE_LOADDATA, _OnToMonthLoadDataFnc);
	//m_wndToMonth.SetEvent(WE_ADDNEW, _OnToMonthAddNewFnc);
	m_wndYear.SetEvent(WE_SELENDOK, _OnYearSelendokFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_SELCHANGE, _OnYearSelectChangeFnc);
	m_wndYear.SetEvent(WE_LOADDATA, _OnYearLoadDataFnc);
	//m_wndYear.SetEvent(WE_ADDNEW, _OnYearAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
}
void CFAMSummaryAssetValueDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromMonth.GetDlgCtrlID(), m_szFromMonthKey);
	DDX_TextEx(pDX, m_wndToMonth.GetDlgCtrlID(), m_szToMonthKey);
	DDX_TextEx(pDX, m_wndYear.GetDlgCtrlID(), m_szYearKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);

}
void CFAMSummaryAssetValueDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMSummaryAssetValueDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMSummaryAssetValueDialog::SetDefaultValues(){

	m_szFromMonthKey.Empty();
	m_szToMonthKey.Empty();
	m_szYearKey.Empty();
	m_szCategoryKey.Empty();

}
int CFAMSummaryAssetValueDialog::SetMode(int nMode){
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
void CFAMSummaryAssetValueDialog::OnFromMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMSummaryAssetValueDialog::OnFromMonthSelendok(){
	 
}
/*void CFAMSummaryAssetValueDialog::OnFromMonthSetfocus(){
	
}*/
/*void CFAMSummaryAssetValueDialog::OnFromMonthKillfocus(){
	
}*/
long CFAMSummaryAssetValueDialog::OnFromMonthLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndFromMonth.IsSearchKey() && !m_szFromMonthKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szFromMonthKey);
	}
	m_wndFromMonth.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='month' %s ORDER BY ss_index"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromMonth.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMSummaryAssetValueDialog::OnFromMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMSummaryAssetValueDialog::OnToMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMSummaryAssetValueDialog::OnToMonthSelendok(){
	 
}
/*void CFAMSummaryAssetValueDialog::OnToMonthSetfocus(){
	
}*/
/*void CFAMSummaryAssetValueDialog::OnToMonthKillfocus(){
	
}*/
long CFAMSummaryAssetValueDialog::OnToMonthLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndToMonth.IsSearchKey() && !m_szToMonthKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szToMonthKey);
	}
	m_wndToMonth.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='month' %s ORDER BY ss_index"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndToMonth.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMSummaryAssetValueDialog::OnToMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMSummaryAssetValueDialog::OnYearSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMSummaryAssetValueDialog::OnYearSelendok(){
	 
}
/*void CFAMSummaryAssetValueDialog::OnYearSetfocus(){
	
}*/
/*void CFAMSummaryAssetValueDialog::OnYearKillfocus(){
	
}*/
long CFAMSummaryAssetValueDialog::OnYearLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndYear.IsSearchKey() && !m_szYearKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szYearKey);
	}
	m_wndYear.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel WHERE ss_id='year' %s ORDER BY ss_code"),
		         szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndYear.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMSummaryAssetValueDialog::OnYearAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMSummaryAssetValueDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMSummaryAssetValueDialog::OnCategorySelendok(){
	 
}
/*void CFAMSummaryAssetValueDialog::OnCategorySetfocus(){
	
}*/
/*void CFAMSummaryAssetValueDialog::OnCategoryKillfocus(){
	
}*/
long CFAMSummaryAssetValueDialog::OnCategoryLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE famc_id='%s' "), m_szCategoryKey);
	}
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famc_id AS id, famc_name AS description FROM fam_category %s ORDER BY famc_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMSummaryAssetValueDialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMSummaryAssetValueDialog::OnPrintPreviewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint(true);
} 
void CFAMSummaryAssetValueDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnPrint();
} 
void CFAMSummaryAssetValueDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMSummaryAssetValueDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CFAMSummaryAssetValueDialog::OnPrint(bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	static CReport rpt;
	UpdateData(true);
	if (!rpt.Init(_T("Reports/FAM/FAM_BAOCAOTONGHOPGIATRITSCD.RPT")))
	{
		ShowMessageBox(_T("Can not open report file"), 0);
		return;
	}
	CString strTemp, szDate, szWhere, szSQL, szID;
	double nCost, nDepr;
	int nIndex = 0;
	double nTotalValue = 0, nToTalDepr = 0; 
	CRecord rs(&pMF->m_db);
	CRecord rsn(&pMF->m_db);
	szWhere.Empty();
	strTemp = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	//MessageBox(strTemp);
	szDate.Format(strTemp, m_szFromMonthKey, m_szToMonthKey, m_szYearKey);
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	strTemp = pMF->GetSysDate();
	CReportSection *rptDetail;
	if (!m_szCategoryKey.IsEmpty())
		szWhere.Format(_T(" WHERE famc_id='%s' "), m_szCategoryKey);
	szSQL.Format(_T("SELECT famc_id AS ID, famc_name AS Name FROM fam_category %s ORDER BY famc_id"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ID"), szID);
		rs.GetValue(_T("Name"), strTemp);
		szSQL.Format(_T("SELECT fa_currentvalue, fa_depreciation FROM fam_asset ")\
					 _T("LEFT JOIN fam_category ON(famc_id = fa_category) ")\
					 /*_T("LEFT JOIN fam_depreciation ON(fad_assetno = fa_assetno) ")\*/
					 _T("WHERE fa_category='%s'"), szID);
		rsn.ExecSQL(szSQL);
		if (rsn.GetRecordCount() > 0)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), strTemp);
		}
		while (!rsn.IsEOF())
		{
			rptDetail = rpt.AddDetail();
			strTemp.Format(_T("%d"), ++nIndex);
			rptDetail->SetValue(_T("1"), strTemp);
			strTemp.Empty();
			rptDetail->SetValue(_T("2"), strTemp);
			rsn.GetValue(_T("fa_currentvalue"), nCost);
			FormatCurrency(nCost, strTemp);
			rptDetail->SetValue(_T("3"), strTemp);
			rsn.GetValue(_T("fa_depreciation"), nDepr);
			FormatCurrency(nDepr, strTemp);
			rptDetail->SetValue(_T("4"), strTemp);
			strTemp.Format(_T("%.2f"), nCost - nDepr);
			FormatCurrency(nCost - nDepr, strTemp);
			rptDetail->SetValue(_T("5"), strTemp);
			nTotalValue += nCost;
			nToTalDepr += nDepr;
			rsn.MoveNext();
		}
		rs.MoveNext();
	}
	if (nTotalValue > 0)
	{
		//strTemp = rpt.GetGroupFooter(1)->GetValue(_T("ToTalGroup"));
		//CString szTemp;
		//szTemp.Format(_T("%d"), nTotalValue);
		//rpt.GetGroupFooter(1)->SetValue(_T("ToTalGroup"), strTemp);
		CString szTotalAmount;
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		FormatCurrency(nTotalValue, strTemp);
		rptDetail->SetValue(_T("S3"), strTemp);
		FormatCurrency(nToTalDepr, strTemp);
		rptDetail->SetValue(_T("S4"), strTemp);
		FormatCurrency(nTotalValue - nToTalDepr, strTemp);
		rptDetail->SetValue(_T("S5"), strTemp);
		//TranslateString(_T("Total Amount:"), szTotalAmount);
		//rptDetail->SetValue(_T("TotalGroup"), szTotalAmount);
	}
	CDate date;
	//strTemp = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	strTemp = pMF->GetSysDate();
	date.ParseDate(strTemp);
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), date.GetDay(), 
				  date.GetMonth(), date.GetYear());
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//MessageBox(_T("OK"));
	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}
int CFAMSummaryAssetValueDialog::OnAddFAMSummaryAssetValueDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMSummaryAssetValueDialog::OnEditFAMSummaryAssetValueDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMSummaryAssetValueDialog::OnDeleteFAMSummaryAssetValueDialog()
{
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
 		OnCancelFAMSummaryAssetValueDialog(); 
 	}
	return 0;
}
int CFAMSummaryAssetValueDialog::OnSaveFAMSummaryAssetValueDialog(){
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
 		//OnFAMSummaryAssetValueDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMSummaryAssetValueDialog::OnCancelFAMSummaryAssetValueDialog(){
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
int CFAMSummaryAssetValueDialog::OnFAMSummaryAssetValueDialogListLoadData(){
	return 0;
}
