#include "stdafx.h"
#include "MAPaidSupplierList.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

#include ".\MAPaidSupplierList.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnToDateCheckValue();
} 
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnSupplierLoadData();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAPaidSupplierList* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAPaidSupplierList* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAPaidSupplierList* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnSourceAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAPaidSupplierList* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CMAPaidSupplierList *)pWnd)->OnStatusAddNew();
}*/																									
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMAPaidSupplierList *pVw = (CMAPaidSupplierList *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAPaidSupplierList *pVw = (CMAPaidSupplierList *)pWnd;
	pVw->OnExportSelect();
}
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CMAPaidSupplierList *)pWnd)->OnSophieuCheckValue();
}
CMAPaidSupplierList::CMAPaidSupplierList(CWnd *pParent)
{
	
	m_nDlgWidth = 585;
	m_nDlgHeight = 359;
	SetDefaultValues();
}
CMAPaidSupplierList::~CMAPaidSupplierList(){
}
void CMAPaidSupplierList::OnCreateComponents(){
	
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 570, 85); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 90, 90, 115);
	m_wndStorage.SetCheckBox(true);
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 5, 575, 179);
	m_wndStorage.Create(this,95, 90, 570, 115); 
	m_wndItemGroupLabel.Create(this, _T("Item Group"), 10, 120, 90, 145);
	m_wndItemGroup.Create(this,95, 120, 290, 145); 
	m_wndSourceLabel.Create(this, _T("Source"), 295, 120, 375, 145);
	m_wndSource.Create(this,380, 120, 570, 145); 
	m_wndSophieuLabel.Create(this, _T("Sophieu"), 10, 150, 90, 175);
	m_wndSophieu.Create(this,95, 150, 290, 175); 
	m_wndStatusLabel.Create(this, _T("Status"), 295, 150, 375, 175);
	m_wndStatus.Create(this,380, 150, 570, 175); 																 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 395, 185, 490, 210);
	m_wndExport.Create(this, _T("&Export"), 495, 185, 575, 210);
	m_wndStatus.SetCheckBox(TRUE);
}
void CMAPaidSupplierList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	//m_wndItemGroup.SetCheckValue(true);
	m_wndItemGroup.LimitText(1024);
	//m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(1024);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndItemGroup.InsertColumn(1, _T("Code"), CFMT_TEXT, 150);

	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 60);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CMAPaidSupplierList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndItemGroup.SetEvent(WE_SELENDOK, _OnItemGroupSelendokFnc);
	//m_wndItemGroup.SetEvent(WE_SETFOCUS, _OnItemGroupSetfocusFnc);
	//m_wndItemGroup.SetEvent(WE_KILLFOCUS, _OnItemGroupKillfocusFnc);
	m_wndItemGroup.SetEvent(WE_SELCHANGE, _OnItemGroupSelectChangeFnc);
	m_wndItemGroup.SetEvent(WE_LOADDATA, _OnItemGroupLoadDataFnc);
	//m_wndItemGroup.SetEvent(WE_ADDNEW, _OnItemGroupAddNewFnc);
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc); 
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
	EnableControls();
}
void CMAPaidSupplierList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);	 
}
void CMAPaidSupplierList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemGroupKey.Empty();
	m_szSourceKey.Empty();
	m_szSupplierKey.Empty();
	m_szStorageKey.Empty();
	m_szSophieu.Empty();

}
int CMAPaidSupplierList::SetMode(int nMode){
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
/*void CMAPaidSupplierList::OnFromDateChange(){
	
} */
/*void CMAPaidSupplierList::OnFromDateSetfocus(){
	
} */
/*void CMAPaidSupplierList::OnFromDateKillfocus(){
	
} */
int CMAPaidSupplierList::OnSophieuCheckValue()
{
	return 0;
} 
int CMAPaidSupplierList::OnFromDateCheckValue(){
	return 0;
} 
/*void CMAPaidSupplierList::OnToDateChange(){
	
} */
/*void CMAPaidSupplierList::OnToDateSetfocus(){
	
} */
/*void CMAPaidSupplierList::OnToDateKillfocus(){
	
} */
int CMAPaidSupplierList::OnToDateCheckValue(){
	return 0;
} 
long CMAPaidSupplierList::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CMAPaidSupplierList::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CMAPaidSupplierList::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAPaidSupplierList::OnStorageSelendok(){
	 
}
long CMAPaidSupplierList::OnStorageLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMAPaidSupplierList::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAPaidSupplierList::OnItemGroupSelendok(){
	 
}
/*void CMAPaidSupplierList::OnItemGroupSetfocus(){
	
}*/
/*void CMAPaidSupplierList::OnItemGroupKillfocus(){
	
}*/
long CMAPaidSupplierList::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//return pMF->LoadProductTypeList(&m_wndType, m_szTypeKey);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T(" SELECT DISTINCT product_type_id, ") \
	_T("                 product_type_name ") \
	_T(" FROM   (SELECT CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'A0000' ") \
	_T("                ELSE mpt_product_type_id ") \
	_T("                END product_type_id, ") \
	_T("                CASE WHEN mpt_product_type_id IN ( 'A1100', 'A1130', 'A1140', 'A1160', ") \
	_T("                                              'A1170', 'A1180', 'A1190', 'A1400', 'A6000' ) THEN N'Thu\x1ED1\x63' ") \
	_T("                ELSE mpt_name ") \
	_T("                END product_type_name ") \
	_T("         FROM   m_product_type ") \
	_T("         WHERE  mpt_org_id = '%s' ") \
	_T("            AND mpt_isactive = 'Y' AND mpt_product_type_id <> 'A1000') ") \
	_T(" ORDER BY product_type_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	m_wndItemGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndItemGroup.AddItems(
			rs.GetValue(_T("product_type_id")),
			rs.GetValue(_T("product_type_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMAPaidSupplierList::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAPaidSupplierList::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAPaidSupplierList::OnSourceSelendok(){
	 
}
/*void CMAPaidSupplierList::OnSourceSetfocus(){
	
}*/
/*void CMAPaidSupplierList::OnSourceKillfocus(){
	
}*/
long CMAPaidSupplierList::OnSourceLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPaymentResourceList(&m_wndSource, m_szSourceKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMAPaidSupplierList::OnSourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAPaidSupplierList::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	BeginWaitCursor();
	CString szSQL, tmpStr, tmpStr2, szTemp1, szTemp2, szTemp3, szTemp4, szTemp5,szTemp5x, szTemp6, szTemp7, szTemp8, szTemp9, szTemp10, szTemp11;
	CString szMoney, szDate, szStorages, szSources;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader, *rptDetail, *rptFooter, *rptGroupFooter;
	int nIdx = 0;
	double nAmt = 0;
	double nTotalAmount = 0;
	if (!rpt.Init(_T("Reports\\HMS\\MA_BANGKETHANHTOANTRANOCACCONGTY.RPT")))
		return;
	szSQL = GetQueryString();
	
	//QueryOpener(szSQL);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
		return;
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptHeader->SetValue(_T("ReportDate"), tmpStr);

	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(1);
		}
	}
	if (!szStorages.IsEmpty())
		rptHeader->SetValue(_T("Storage"), szStorages);
	else
		rptHeader->SetValue(_T("Storage"), _T("To\xE0n \x62\x1ED9"));

	for (int i = 0; i < m_wndSource.GetItemCount(); i++)
	{
		if (m_wndSource.GetCheck(i))
		{
			m_wndSource.SetCurSel(i);
			if (!szSources.IsEmpty())
				szSources += _T(", ");
			szSources += m_wndSource.GetCurrent(1);
		}
	}
	if (!szSources.IsEmpty())
		rptHeader->SetValue(_T("Source"), szSources);
	else
		rptHeader->SetValue(_T("Source"), _T("To\xE0n \x62\x1ED9"));

	if (!m_szItemGroupKey.IsEmpty())
		rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
	else
		rptHeader->SetValue(_T("ItemType"), _T("To\xE0n \x62\x1ED9"));

	if (m_szFromDate.Left(10) != m_szToDate.Left(10))
		tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	else
		tmpStr.Format(_T("Ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy));
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.IsEmpty();
		rptDetail->SetValue(_T("1"), int2str(nIdx));

		if(!rs.GetValue(_T("nme")).IsEmpty())
		{
			szTemp1.Format(_T("- %s"), rs.GetValue(_T("nme")));
		}
		else
		{
			szTemp1.Format(_T(""));
		}

		if(!rs.GetValue(_T("addr")).IsEmpty())
		{
			szTemp2.Format(_T("- %s"), rs.GetValue(_T("addr")));
		}
		else
		{
			szTemp2.Format(_T(""));
		}

		if(!rs.GetValue(_T("code")).IsEmpty())
		{
			szTemp3.Format(_T("- H\x1EE3p \x110\x1ED3ng: %s"), rs.GetValue(_T("code")));
		}
		else
		{
			szTemp3.Format(_T(""));
		}

		if(!rs.GetValue(_T("contr")).IsEmpty())
		{
			szTemp4.Format(_T("- Theo quyết định thầu: %s"), rs.GetValue(_T("contr")));
		}
		else
		{
			szTemp4.Format(_T(""));
		}

		if(!rs.GetValue(_T("recno")).IsEmpty())
		{
			szTemp5x.Format(_T("- M\xE3 s\x1ED1: %s"), rs.GetValue(_T("recno")));
		}
		else
		{
			szTemp5x.Format(_T(""));
		}
		tmpStr.Format(rptDetail->GetValue(_T("2")), szTemp1, szTemp2, szTemp3, szTemp4, szTemp5x);

		rptDetail->SetValue(_T("2"), tmpStr);

		if(!rs.GetValue(_T("acc")).IsEmpty())
		{
			szTemp5.Format(_T("- S\x1ED1 TK: %s"), rs.GetValue(_T("acc")));
		}
		else
		{
			szTemp5.Format(_T(""));
		}

		if(!rs.GetValue(_T("banknme")).IsEmpty())
		{
			szTemp6.Format(_T("- %s"), rs.GetValue(_T("banknme")));
		}
		else
		{
			szTemp6.Format(_T(""));
		}

		if(!rs.GetValue(_T("bankbranch")).IsEmpty())
		{
			szTemp7.Format(_T("- \x43hi nh\xE1nh: %s"), rs.GetValue(_T("bankbranch")));
		}
		else
		{
			szTemp7.Format(_T(""));
		}

		if(!rs.GetValue(_T("citascode")).IsEmpty())
		{
			szTemp8.Format(_T("- Mã Citas: %s"), rs.GetValue(_T("citascode")));
		}
		else
		{
			szTemp8.Format(_T(""));
		}

		if(!rs.GetValue(_T("pcount")).IsEmpty())
		{
			szTemp9.Format(_T("- TT l\x1EA7n: %s"), rs.GetValue(_T("pcount")));
		}
		else
		{
			szTemp9.Format(_T(""));
		}

		if(!rs.GetValue(_T("maxdate")).IsEmpty())
		{
			rs.GetValue(_T("maxdate"), tmpStr);
			szTemp10.Format(_T("- Gi\x61o h\xE0ng: %s"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		}
		else
		{
			szTemp10.Format(_T(""));
		}	


		tmpStr.Format(rptDetail->GetValue(_T("3")), szTemp5, szTemp6, szTemp7, szTemp8, szTemp9, szTemp10);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("total"), nAmt);
		nTotalAmount+=nAmt;
		rptDetail->SetValue(_T("4"), double2str(nAmt));
		rptDetail->SetValue(_T("5"), rs.GetValue(_T("fnccode")));

		rs.MoveNext();
	}
	if(nTotalAmount > 0)
	{
		rptGroupFooter = rpt.AddDetail(rpt.GetGroupFooter(1));	
		rptGroupFooter->GetValue(_T("tongso"));
		rptGroupFooter->SetValue(_T("s4"), double2str(nTotalAmount));
	}

	rptFooter = rpt.GetReportFooter();
	if (!szSources.IsEmpty())
		{
			tmpStr.Format(_T("%s :"), szSources);
			rptFooter->SetValue(_T("S1"), tmpStr);
		}
	else
		rptFooter->SetValue(_T("S1"), _T("To\xE0n \x62\x1ED9: "));
	FormatCurrency(nTotalAmount, szMoney);
	tmpStr.Format(rptFooter->GetValue(_T("Statistic")), nIdx, szMoney);
	rptFooter->SetValue(_T("Statistic"), tmpStr);
	tmpStr.Format(_T("%s \x111\x1ED3ng"), szMoney);
	rptFooter->SetValue(_T("Amount"), tmpStr);
	szDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5,2), szDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMAPaidSupplierList::OnExportSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, szTemp;
	CRecord rs(&pMF->m_db);
	int nIdx = 0;
	double nTmp = 0;
	double nTotalAmt = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//Header Section
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 40);
	xls.SetColumnWidth(2, 40);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	//xls.SetColumnWidth(4, 15);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\x1EA2NG K\xCA TH\x41NH TO\xC1N TR\x1EA2 N\x1EE2 \x43\xC1\x43 \x43\xD4NG TY"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 5;
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("\x43\xF4ng ty - \x111\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+2, nRow, _T("T\xE0i kho\x1EA3n ng\xE2n h\xE0ng"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+3, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+4, nRow, _T("M\xE3 t\xE0i \x63h\xEDnh"), FMT_TEXT | FMT_CENTER, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		nIdx++;
		tmpStr.IsEmpty();
		xls.SetCellText(nCol, nRow, int2str(nIdx), FMT_TEXT | FMT_RIGHT);
		tmpStr = rs.GetValue(_T("nme"));
		if (!rs.GetValue(_T("addr")).IsEmpty())
			tmpStr.AppendFormat(_T(" - %s"), rs.GetValue(_T("addr")));
		if (!rs.GetValue(_T("contr")).IsEmpty())
			tmpStr.AppendFormat(_T(" - Th\x65o Q\x110 s\x1ED1: %s"), rs.GetValue(_T("contr")));
		if (!rs.GetValue(_T("code")).IsEmpty())
			tmpStr.AppendFormat(_T(" - H\x110 s\x1ED1: %s"), rs.GetValue(_T("code")));
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		if (!rs.GetValue(_T("acc")).IsEmpty())
			tmpStr.Format(_T(" - S\x1ED1 TK: %s"), rs.GetValue(_T("acc")));
		if (!rs.GetValue(_T("banknme")).IsEmpty())
			tmpStr.AppendFormat(_T(" - %s"), rs.GetValue(_T("banknme")));
		if (!rs.GetValue(_T("bankbranch")).IsEmpty())
			tmpStr.AppendFormat(_T(" - \x43hi nh\xE1nh: %s"), rs.GetValue(_T("bankbranch")));
		if (!rs.GetValue(_T("citascode")).IsEmpty())
			tmpStr.AppendFormat(_T(" - M\xE3 \x43it\x61s: %s"), rs.GetValue(_T("citascode")));
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("total"), nTmp);
		nTotalAmt += nTmp;
		xls.SetCellText(nCol + 3, nRow, double2str(nTmp), FMT_NUMBER1 | FMT_WRAPING);
			tmpStr.Format(_T("%s"), rs.GetValue(_T("fnccode")));
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		nRow++;
		rs.MoveNext();
	}
	if (nTotalAmt > 0)
	{
		xls.SetCellText(nCol+1, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT | FMT_WRAPING, true);
		xls.SetCellText(nCol+3, nRow, double2str(nTotalAmt), FMT_NUMBER1 | FMT_WRAPING, true);
		FormatCurrency(nTotalAmt, szTemp);
		tmpStr.Format(_T("K\x1EBFt to\xE1n \x62\x1EA3ng n\xE0y g\x1ED3m %d \x63\xF4ng ty v\x1EDBi t\x1ED5ng ti\x1EC1n l\xE0 %s \x111\x1ED3ng"), nIdx, szTemp);
		xls.SetCellMergedColumns(nCol+1, nRow+1, 3);
		xls.SetCellText(nCol+1, nRow+1, tmpStr, FMT_TEXT | FMT_WRAPING, true);
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BANG KE THANH TOAN TRA NO CAC CONG TY.xls"));
	
} 

CString CMAPaidSupplierList::GetQueryString(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL, szWhere, szStorages, szSources, szCheckData = m_wndStatus.GetCheckData(0);
	szWhere.Format(_T(" AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	for (int i = 0; i < m_wndStorage.GetItemCount(); i++)
	{
		if (m_wndStorage.GetCheck(i))
		{
			m_wndStorage.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages += m_wndStorage.GetCurrent(0);
		}
	}
	if(!szStorages.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s)"), szStorages);

	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);

	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);

	for (int i = 0; i < m_wndSource.GetItemCount(); i++)
	{
		if (m_wndSource.GetCheck(i))
		{
			m_wndSource.SetCurSel(i);
			if (!szSources.IsEmpty())
				szSources += _T(", ");
			szSources += m_wndSource.GetCurrent(0);
		}
	}
	if (!szSources.IsEmpty())
		szWhere.AppendFormat(_T(" AND pp_payment_resource_id IN (%s)"), szSources);
	
	if (!m_szSophieu.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(pp_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szSophieu);
	}
	if (szCheckData.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND pp_status = 'A' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND instr('%s', pp_status) > 0 "), szCheckData);
	}
	szSQL.Format(_T(" SELECT po_partner_id,") \
		_T("   adp_name             AS nme,") \
		_T("   adp_address          AS addr,") \
		_T("   CASE WHEN po_storage_id IN(15) THEN adp_financial_code2 ELSE adp_financial_code END AS fnccode,") \
		_T("   adp_bankaccount      AS acc,") \
		_T("   adb_name             AS banknme,") \
		_T("   adp_branch           AS bankbranch,") \
		_T("   adp_description      AS code,") \
		_T("   adp_citas_code       AS citascode,") \
		_T("   adp_contract_no      AS contr,") \
		_T("   SUM(ROUND(pol_totalamount)) AS total,") \
		_T("   pp_acctdate,") \
		_T("   pp_orderno") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON (po_purchase_order_id = pol_purchase_order_id)") \
		_T(" LEFT JOIN m_productitem_view3") \
		_T(" ON (product_item_id = pol_product_item_id)") \
		_T(" LEFT JOIN purchase_payment") \
		_T(" ON (po_refpayment_id=pp_purchase_payment_id)") \
		_T(" LEFT JOIN ad_partner") \
		_T(" ON (adp_partner_id=po_partner_id)") \
		_T(" LEFT JOIN ad_bank") \
		_T(" ON (adp_bank_id    =adb_bank_id)") \
		_T(" WHERE po_payment   = 'Y'") \
		_T(" AND product_org_id = '%s' %s") \
		_T(" GROUP BY po_partner_id,") \
		_T("   adp_name,") \
		_T("   adp_address,") \
		_T("   adp_financial_code, adp_financial_code2,") \
		_T("   adp_bankaccount,") \
		_T("   adb_name,") \
		_T("   adp_branch,") \
		_T("   adp_description,") \
		_T("   adp_citas_code,") \
		_T("   adp_contract_no,") \
		_T("   pp_acctdate,") \
		_T("   pp_orderno,") \
		_T("   po_storage_id") \
		_T(" ORDER BY po_partner_id,") \
		_T("   pp_acctdate"), pMF->GetModuleID(), szWhere);
	return szSQL;
}

void CMAPaidSupplierList::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAPaidSupplierList::OnStatusSelendok(){
	 
}
/*void CMAPaidSupplierList::OnStatusSetfocus(){
	
}*/
/*void CMAPaidSupplierList::OnStatusKillfocus(){
	
}*/
long CMAPaidSupplierList::OnStatusLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter = _T(" AND ss_code <> 'I'");
	return pMF->LoadSelectionList(&m_wndStatus, m_szStatusKey, _T("pms_order_status"), szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMAPaidSupplierList::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

BEGIN_MESSAGE_MAP(CMAPaidSupplierList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CMAPaidSupplierList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
