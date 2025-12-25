#include "stdafx.h"
#include "MASSupplierPaymentListEX.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"

#include ".\MASSupplierPaymentList.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnToDateCheckValue();
} 
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnSupplierLoadData();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMASSupplierPaymentListEX* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnStorageAddNew();
}*/
static void _OnItemGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMASSupplierPaymentListEX* )pWnd)->OnItemGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemGroupSelendokFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnItemGroupSelendok();
}
/*static void _OnItemGroupSetfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnItemGroupKillfocus();
}*/
/*static void _OnItemGroupKillfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnItemGroupKillfocus();
}*/
static long _OnItemGroupLoadDataFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnItemGroupLoadData();
}
/*static void _OnItemGroupAddNewFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnItemGroupAddNew();
}*/
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMASSupplierPaymentListEX* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CMASSupplierPaymentListEX *)pWnd)->OnSourceAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CMASSupplierPaymentListEX *pVw = (CMASSupplierPaymentListEX *)pWnd;
	pVw->OnPrintPreviewSelect();
}
static int _OnSophieuCheckValueFnc(CWnd *pWnd){
	return ((CMASSupplierPaymentListEX *)pWnd)->OnSophieuCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMASSupplierPaymentListEX *pVw = (CMASSupplierPaymentListEX *)pWnd;
	pVw->OnExportSelect();
} 
CMASSupplierPaymentListEX::CMASSupplierPaymentListEX(CWnd *pParent)
{

	m_nDlgWidth = 585;
	m_nDlgHeight = 359;
	SetDefaultValues();
}
CMASSupplierPaymentListEX::~CMASSupplierPaymentListEX(){
}
void CMASSupplierPaymentListEX::OnCreateComponents(){
	
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
	m_wndSource.SetCheckBox(true);
	m_wndSource.Create(this,380, 120, 570, 145); 
	m_wndSophieuLabel.Create(this, _T("Số phiếu ĐNTT"), 10, 150, 90, 175);
	m_wndSophieu.Create(this,95, 150, 569, 175); 
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 395, 185, 490, 210);
	m_wndExport.Create(this, _T("&Export"), 495, 185, 575, 210);

}
void CMASSupplierPaymentListEX::OnInitializeComponents(){
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

	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 60);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndItemGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CMASSupplierPaymentListEX::OnSetWindowEvents(){
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
	m_wndSophieu.SetEvent(WE_CHECKVALUE, _OnSophieuCheckValueFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CMASSupplierPaymentListEX::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndItemGroup.GetDlgCtrlID(), m_szItemGroupKey);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndSophieu.GetDlgCtrlID(), m_szSophieu);

}
void CMASSupplierPaymentListEX::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szItemGroupKey.Empty();
	m_szSourceKey.Empty();
	m_szSupplierKey.Empty();
	m_szStorageKey.Empty();
	m_szSophieu.Empty();

}
int CMASSupplierPaymentListEX::SetMode(int nMode){
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
int CMASSupplierPaymentListEX::OnSophieuCheckValue()
{
	return 0;
} 
/*void CMASSupplierPaymentListEX::OnFromDateChange(){
	
} */
/*void CMASSupplierPaymentListEX::OnFromDateSetfocus(){
	
} */
/*void CMASSupplierPaymentListEX::OnFromDateKillfocus(){
	
} */
int CMASSupplierPaymentListEX::OnFromDateCheckValue(){
	return 0;
} 
/*void CMASSupplierPaymentListEX::OnToDateChange(){
	
} */
/*void CMASSupplierPaymentListEX::OnToDateSetfocus(){
	
} */
/*void CMASSupplierPaymentListEX::OnToDateKillfocus(){
	
} */
int CMASSupplierPaymentListEX::OnToDateCheckValue(){
	return 0;
} 
long CMASSupplierPaymentListEX::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
}
void CMASSupplierPaymentListEX::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMASSupplierPaymentListEX::OnStorageSelendok(){
	 
}
long CMASSupplierPaymentListEX::OnStorageLoadData(){
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
/*void CMASSupplierPaymentListEX::OnStorageAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMASSupplierPaymentListEX::OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMASSupplierPaymentListEX::OnItemGroupSelendok(){
	 
}
/*void CMASSupplierPaymentListEX::OnItemGroupSetfocus(){
	
}*/
/*void CMASSupplierPaymentListEX::OnItemGroupKillfocus(){
	
}*/
long CMASSupplierPaymentListEX::OnItemGroupLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
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
	int nCount = rs.ExecSQL(szSQL);
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
/*void CMASSupplierPaymentListEX::OnItemGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMASSupplierPaymentListEX::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMASSupplierPaymentListEX::OnSourceSelendok(){
	 
}
/*void CMASSupplierPaymentListEX::OnSourceSetfocus(){
	
}*/
/*void CMASSupplierPaymentListEX::OnSourceKillfocus(){
	
}*/
long CMASSupplierPaymentListEX::OnSourceLoadData(){
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
/*void CMASSupplierPaymentListEX::OnSourceAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMASSupplierPaymentListEX::OnPrintPreviewSelect()
{
	
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, *rptFooter = NULL;;
	double nTmp = 0;
	int nIdx = 1, nIdx2 = 0;
	CString szSQL, tmpStr, szReportName, szDate, szOldLev1, szNewLev1, szField, szTemp, szStorages, szSources, szMoney;
	double nTotal = 0, nGroupTotal1 = 0, nTotal2 = 0, nGroupTotal2 = 0;
	if (!rpt.Init(_T("Reports/HMS/MA_BANGKETHANHTOANCONGNO_VER1.0.RPT")))
		return;
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		//rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
		rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
		rptHeader->SetValue(_T("DeptName"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

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
			rptHeader->SetValue(_T("Storage"), _T("Toàn bộ"));
		if (!m_szItemGroupKey.IsEmpty())
			rptHeader->SetValue(_T("ItemType"), m_wndItemGroup.GetCurrent(1));
		else
			rptHeader->SetValue(_T("ItemType"), _T("Toàn bộ"));
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
			rptHeader->SetValue(_T("Source"), _T("Toàn bộ"));
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partnername"), szNewLev1);
		if (szOldLev1 != szNewLev1)
		{
			if (nGroupTotal1 > 0 || nGroupTotal2 > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%f"), nGroupTotal1);
				rptGroup->SetValue(_T("s6"), tmpStr);
				tmpStr.Format(_T("%f"), nGroupTotal2);
				rptGroup->SetValue(_T("s7"), tmpStr);

				if(nGroupTotal2 > 0)
				{
					rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
					tmpStr.Format(_T("%f"), nGroupTotal1 - nGroupTotal2);
					rptGroup->SetValue(_T("s6"), tmpStr);
				}

				nTotal+= nGroupTotal1;
				nTotal2+= nGroupTotal2;
				nGroupTotal1 = 0;
				nGroupTotal2 = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewLev1);
			nIdx2++;
			szOldLev1 = szNewLev1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			rptDetail->SetValue(_T("1"), int2str(nIdx++));

			rptDetail->SetValue(_T("2"), rs.GetValue(_T("invoiceno")));

			rs.GetValue(_T("invoicedate"), tmpStr);
			rptDetail->SetValue(_T("3"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("4"), rs.GetValue(_T("orderno")));

			rs.GetValue(_T("importdate"), tmpStr);
			rptDetail->SetValue(_T("5"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));		

			rs.GetValue(_T("amount"), nTmp);
			nGroupTotal1+= nTmp;
			rptDetail->SetValue(_T("6"), double2str(nTmp));

			rs.GetValue(_T("tru_vao_con_no"), nTmp);
			nGroupTotal2+= nTmp;
			rptDetail->SetValue(_T("7"), double2str(nTmp));
			
			rptDetail->SetValue(_T("8"), rs.GetValue(_T("tk_ngan_hang")));
			rptDetail->SetValue(_T("9"), rs.GetValue(_T("so_hop_dong")));

			rptDetail->SetValue(_T("10"), rs.GetValue(_T("ngay_hop_dong")));

			rptDetail->SetValue(_T("11"), rs.GetValue(_T("hieu_luc")));
			rptDetail->SetValue(_T("12"), rs.GetValue(_T("gia_tri")));
			rptDetail->SetValue(_T("13"), rs.GetValue(_T("gia_tri_da_thuc_hien")));
			rptDetail->SetValue(_T("14"), rs.GetValue(_T("tk_trich_tt")));
		}
		rs.MoveNext();
	}
	if (nGroupTotal1 > 0 || nGroupTotal2 > 0)
	{
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nGroupTotal1);
		rptGroup->SetValue(_T("s6"), tmpStr);
		tmpStr.Format(_T("%f"), nGroupTotal2);
		rptGroup->SetValue(_T("s7"), tmpStr);

		if(nGroupTotal2 > 0)
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			tmpStr.Format(_T("%f"), nGroupTotal1 - nGroupTotal2);
			rptGroup->SetValue(_T("s6"), tmpStr);
		}

		nTotal+= nGroupTotal1;
		nTotal2+= nGroupTotal2;
	}
	if (nIdx2 > 1)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("s6"), ToString(nTotal));
		rptDetail->SetValue(_T("s7"), ToString(nTotal2));

		if(nTotal2 > 0)
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
			tmpStr.Format(_T("T\x1ED5ng \x63\x1ED9ng \x63\xE1\x63 \x63\xF4ng ty:"));
			tmpStr.Format(_T("%f"), nTotal - nTotal2);
			rptGroup->SetValue(_T("s6"), tmpStr);
		}
	}	
	rptDetail = rpt.GetReportFooter();
	rptDetail->SetValue(_T("TotalItem"), int2str(nIdx2++));	
	tmpStr.Format(_T("%f"), nTotal-nTotal2);

	rptDetail->SetValue(_T("TotalAmount"), tmpStr);
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//l1..l4
		int nIdx = 1;
		for (int i = 0; i < rs.GetFieldCount(); i++)
		{
			szTemp = rs.GetFieldName(i);
			szField.Format(_T("%s%s"), szTemp.Left(1), szTemp.Right(szTemp.GetLength()-1).MakeLower());
			rs.GetValue(szField, nTmp);
			if (nTmp > 0)
			{
				tmpStr.Format(_T("l%d"), nIdx);
				TranslateString(szField, szTemp);
				szTemp.AppendFormat(_T(" :"));
				rptDetail->SetValue(tmpStr, szTemp);
				tmpStr.Format(_T("s%d"), nIdx);
				FormatCurrency(nTmp, szTemp);
				szTemp += _T(" đồng.");
				rptDetail->SetValue(tmpStr, szTemp);
				nIdx++;
			}
		}
	}
	rptFooter = rpt.GetReportFooter();
	szMoney.Format(_T("%.2f"), floor(nTotal-nTotal2));
	MoneyToString(szMoney, tmpStr);
	#ifdef UNICODE
	if(!tmpStr.IsEmpty()
		)
		tmpStr += _T(" \x111\x1ED3ng.");
	#else
		if(!tmpStr.IsEmpty())
			tmpStr += _T(" ®ång.");
	#endif
	rptFooter->SetValue(_T("SumInWord"), tmpStr);

	tmpStr = pMF->GetSysDate();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Right(2), tmpStr.Mid(5,2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CMASSupplierPaymentListEX::OnExportSelect()
{
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CString szSQL, tmpStr, szTemp, szOrderID;
	CString szOldLine, szNewLine;
	CRecord rs(&pMF->m_db);
	int nIdx = 0, nIndex = 1;
	double nTmp = 0, nGrpAmt = 0;
	double nTotalAmt = 0;
	szSQL = GetQueryString1();
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
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 12);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 15);
	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 2);
	xls.SetCellMergedColumns(nCol, nRow + 2, 2);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("\x44\x41NH S\xC1\x43H TH\x41NH TO\xC1N N\x1EE2 \x43\xC1\x43 \x43\xD4NG TY"), FMT_TEXT | FMT_CENTER, true, 12);
	xls.SetCellMergedColumns(nCol, nRow + 4, 7);
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
	//Col Head
	nRow = 5;
	xls.SetCellText(nCol, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol+1, nRow, _T("S\x1ED1 h\xF3\x61 \x111\x1A1n"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+2, nRow, _T("Ng\xE0y h\xF3\x61 \x111\x1A1n"), FMT_TEXT | FMT_CENTER, true);
	xls.SetCellText(nCol+3, nRow, _T("S\x1ED1 phi\x1EBFu nh\x1EADp"), FMT_TEXT | FMT_CENTER , true);
	xls.SetCellText(nCol+4, nRow, _T("Ng\xE0y nh\x1EADp"), FMT_TEXT | FMT_CENTER , true);
	xls.SetCellText(nCol+5, nRow, _T("S\x1ED1 ti\x1EC1n"), FMT_TEXT | FMT_CENTER , true);
	xls.SetCellText(nCol+6, nRow, _T("S\x1ED1 UNC"), FMT_TEXT | FMT_CENTER , true);
	xls.SetCellText(nCol+7, nRow, _T("K\xFD nh\x1EADn"), FMT_TEXT | FMT_CENTER , true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partnername"), szNewLine);
		if (szNewLine != szOldLine)
		{
			if (nGrpAmt > 0)
			{
				xls.SetCellMergedColumns(nCol, nRow, 5);
				xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT | FMT_CENTER, true);
				tmpStr.Format(_T("%.2f"), nGrpAmt);
				xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
				nRow++;
				nTotalAmt += nGrpAmt;
				nGrpAmt = 0;
			}
			xls.SetCellMergedColumns(nCol, nRow, 8);
			xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT | FMT_CENTER, true);
			szOldLine = szNewLine;
			nIdx++;
			nRow++;
			nIndex = 1;
		}
		xls.SetCellText(nCol, nRow, int2str(nIndex), FMT_TEXT | FMT_RIGHT);
		if (!szOrderID.IsEmpty())
			szOrderID += _T(", ");
		szOrderID += rs.GetValue(_T("id"));
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("invoiceno")), FMT_TEXT);
		rs.GetValue(_T("invoicedate"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT | FMT_CENTER);
		xls.SetCellText(nCol + 3, nRow, rs.GetValue(_T("orderno")), FMT_TEXT);
		rs.GetValue(_T("importdate"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT | FMT_CENTER);
		rs.GetValue(_T("amount"), nTmp);
		nGrpAmt += nTmp;
		xls.SetCellText(nCol + 5, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	if (nGrpAmt > 0)
	{
		xls.SetCellMergedColumns(nCol, nRow, 5);
		xls.SetCellText(nCol, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		tmpStr.Format(_T("%.2f"), nGrpAmt);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_NUMBER1);
		nRow++;
		nTotalAmt += nGrpAmt;
	}
	if (nTotalAmt > 0)
	{
		szTemp.Format(_T("%f"), nTotalAmt);
		tmpStr.Format(_T("K\x1EBFt to\xE1n \x62\x1EA3ng n\xE0y g\x1ED3m %d \x63\xF4ng ty v\x1EDBi t\x1ED5ng ti\x1EC1n l\xE0 %s"), nIdx, szTemp);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);
	}
	//Detail by group

	//szSQL = GetQueryString2();
	//rs.ExecSQL(szSQL);
	//if (!rs.IsEOF())
	//{
	//	nRow++;
	//	rs.GetValue(_T("thuoc"), nTmp);
	//	szTemp.Format(_T("%ld"), nTmp);
	//	if (szTemp.IsEmpty())
	//		szTemp = _T("0");
	//	tmpStr.Format(_T("Thu\x1ED1\x63: %s \x111\x1ED3ng"), szTemp);
	//	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
	//	nRow++;
	//	rs.GetValue(_T("hoachat"), nTmp);
	//	szTemp.Format(_T("%ld"), nTmp);
	//	if (szTemp.IsEmpty())
	//		szTemp = _T("0");
	//	tmpStr.Format(_T("H\xF3\x61 \x63h\x1EA5t: %s \x111\x1ED3ng"), szTemp);
	//	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
	//	nRow++;
	//	rs.GetValue(_T("bbg"), nTmp);
	//	szTemp.Format(_T("%ld"), nTmp);
	//	if (szTemp.IsEmpty())
	//		szTemp = _T("0");
	//	tmpStr.Format(_T("\x42\xF4ng \x62\x103ng g\x1EA1\x63: %s \x111\x1ED3ng"), szTemp);
	//	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
	//	nRow++;
	//	rs.GetValue(_T("duoclieu"), nTmp);
	//	szTemp.Format(_T("%ld"), nTmp);
	//	if (szTemp.IsEmpty())
	//		szTemp = _T("0");
	//	tmpStr.Format(_T("\x44\x1B0\x1EE3\x63 li\x1EC7u: %s \x111\x1ED3ng"), szTemp);
	//	xls.SetCellText(nCol, nRow, tmpStr, FMT_NUMBER1);
	//}

	EndWaitCursor();
	xls.Save(_T("Exports\\BANG KE THANH TOAN NO CAC CONG TY.xls"));
} 

CString CMASSupplierPaymentListEX::GetQueryString1()
{
	CString szSQL, szWhere, szWhere2, szStorages, szSources;

	szWhere.Format(_T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	szWhere2.Format(_T("AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);

	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
		szWhere2.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
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
		szWhere2.AppendFormat(_T(" AND mt_storage_id IN(%s)"), szStorages);

	if (!m_szItemGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
		szWhere2.AppendFormat(_T(" AND product_groupid = '%s'"), m_szItemGroupKey);
	
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
	    //szWhere2.AppendFormat(_T(" AND mt_resource_id IN (%s)"), szSources);
	
	if (!m_szSophieu.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(pp_orderno) like(chr(37)||lower('%s')||chr(37)) "), m_szSophieu);
		//szWhere2.Format(_T(" AND 1=1 "));
	}

	//szSQL.Format(_T(" SELECT po_purchase_order_id as id,") \
	//			_T("   po_invoiceno AS invoiceno,") \
	//			_T("   trunc(po_invoicedate) AS invoicedate,") \
	//			_T("   po_orderno AS orderno,") \
	//			_T("   trunc(po_approveddate) AS importdate,") \
	//			_T("   sum(pol_totalamount)  AS amount,") \
	//			_T("   Get_partnername(po_partner_id) AS partnername") \
	//			/*_T("   First_value(product_name)") \
	//			_T("     OVER (") \
	//			_T("       partition BY po_purchase_order_id") \
	//			_T("       ORDER BY product_name ASC) AS productname") \*/
	//			_T(" FROM   purchase_order") \
	//			_T(" LEFT JOIN purchase_orderline ON (po_purchase_order_id = pol_purchase_order_id)") \
	//			_T(" LEFT JOIN m_productitem_view3 ON (product_item_id = pol_product_item_id)") \
	//			_T(" LEFT JOIN purchase_payment ON (po_refpayment_id=pp_purchase_payment_id)") \
	//			_T(" WHERE  po_payment = 'Y' %s") \
	//			_T(" GROUP BY po_purchase_order_id, po_invoiceno, po_invoicedate, ") \
	//			_T("		  po_orderno, po_approveddate, po_partner_id") \
	//			_T(" ORDER  BY po_partner_id, po_approveddate "), szWhere);
	
		szSQL.Format(_T(" SELECT ptype,") \
		_T("   id,") \
		_T("   invoiceno,") \
		_T("   invoicedate,") \
		_T("   orderno,") \
		_T("   importdate,") \
		_T("   amount,") \
		_T("   tru_vao_con_no,") \
		_T("   partnername,  ") \
		_T("   tk_ngan_hang, ") \
		_T("   so_hop_dong, ") \
		_T("   ngay_hop_dong, ") \
		_T("   hieu_luc, ") \
		_T("   gia_tri, ") \
		_T("   gia_tri_da_thuc_hien, ") \
		_T("   tk_trich_tt,") \
		_T("   typename,") \
		_T("   pcount") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT 1                         AS ptype,") \
		_T("   po_purchase_order_id           AS id,") \
		_T("   po_invoiceno                   AS invoiceno,") \
		_T("   TRUNC(po_invoicedate)          AS invoicedate,") \
		_T("   po_orderno                     AS orderno,") \
		_T("   TRUNC(po_approveddate)         AS importdate,") \
		_T("   SUM(pol_totalamount)           AS amount,") \
		_T("   Get_partnername(po_partner_id) AS partnername,") \
		_T("   0                              AS tru_vao_con_no,") \
		_T("   (SELECT adp_bankaccount FROM ad_partner WHERE adp_partner_id = po_partner_id") \
		_T("   )                                     AS tk_ngan_hang,") \
		_T("   adc_contract_no                       AS so_hop_dong,") \
		_T("   TO_CHAR(adc_signeddate, 'dd/mm/yyyy') AS ngay_hop_dong,") \
		_T("   adc_duration                          AS hieu_luc,") \
		_T("   adc_amount                            AS gia_tri,") \
		_T("   (SELECT SUM(po_totalamount)") \
		_T("   FROM purchase_order") \
		_T("   LEFT JOIN purchase_payment") \
		_T("   ON ( po_refpayment_id = pp_purchase_payment_id )") \
		_T("   WHERE po_contract_id  = adc_contract_id") \
		_T("   AND pp_status         = 'A'") \
		_T("   )                     AS gia_tri_da_thuc_hien,") \
		_T("   adc_bank_account      AS tk_trich_tt,") \
		_T("   MIN(product_typename) AS typename,") \
		_T("   COUNT(pol_line)       AS pcount") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON (po_purchase_order_id = pol_purchase_order_id)") \
		_T(" LEFT JOIN m_productitem_view3") \
		_T(" ON (product_item_id = pol_product_item_id)") \
		_T(" LEFT JOIN purchase_payment") \
		_T(" ON (po_refpayment_id=pp_purchase_payment_id)") \
		_T(" LEFT JOIN ad_contract") \
		_T(" ON ( adc_contract_id = po_contract_id )") \
		_T(" WHERE po_payment     = 'Y' %s ") \
		_T(" GROUP BY po_purchase_order_id,") \
		_T("   po_invoiceno,") \
		_T("   po_invoicedate,") \
		_T("   po_orderno,") \
		_T("   po_approveddate,") \
		_T("   po_partner_id,") \
		_T("   adc_contract_no,") \
		_T("   adc_signeddate,") \
		_T("   adc_duration,") \
		_T("   adc_amount,") \
		_T("   adc_bank_account,") \
		_T("   po_contract_id,") \
		_T("   adc_contract_id") \
		_T(" UNION ALL") \
		_T(" SELECT 2                         AS ptype,") \
		_T("   mt_transaction_id              AS id,") \
		_T("   CAST('' AS NVARCHAR2(1))       AS invoiceno,") \
		_T("   CAST('' AS DATE)               AS invoicedate,") \
		_T("   mt_orderno                     AS orderno,") \
		_T("   TRUNC(mt_payment_date)         AS importdate,") \
		_T("   0                              AS amount,") \
		_T("   Get_partnername(mt_partner_id) AS partnername,") \
		_T("   SUM(ROUND(mtl_ttlamount))      AS tru_vao_con_no,") \
		_T("   CAST('' AS NVARCHAR2(1))       AS tk_ngan_hang,") \
		_T("   CAST('' AS NVARCHAR2(1))       AS so_hop_dong,") \
		_T("   ''                             AS ngay_hop_dong,") \
		_T("   0                              AS hieu_luc,") \
		_T("   0                              AS gia_tri,") \
		_T("   0                              AS gia_tri_da_thuc_hien,") \
		_T("   CAST('' AS NVARCHAR2(1))       AS tk_trich_tt,") \
		_T("   MIN(product_typename)          AS typename,") \
		_T("   COUNT(mtl_line)                AS pcount") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id = mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view3") \
		_T(" ON (product_item_id   = mtl_product_item_id)") \
		_T(" WHERE mt_doctype      = 'PRO'") \
		_T(" AND mt_payment        = 'Y'") \
		_T(" AND product_org_id    = 'MA'") \
		_T(" AND mt_payment_method = 'UNC' %s") \
		_T(" GROUP BY mt_transaction_id,") \
		_T("   mt_orderno,") \
		_T("   mt_payment_date,") \
		_T("   mt_partner_id") \
		_T(" )") \
		_T(" ORDER BY partnername,") \
		_T(" ptype,") \
		_T(" importdate"), szWhere, szWhere2);

	return szSQL;
}

CString CMASSupplierPaymentListEX::GetQueryString2(){
	CString szSQL, szWhere, szStorages, szSources;
	szWhere.Format(_T("AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss') AND TO_TIMESTAMP('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	if(!m_szSupplierKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
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
	szSQL.Format(_T(" SELECT SUM(thuoc) drug, ") \
				_T("        SUM(hoachat) chemicals, ") \
				_T("        SUM(bbg) cotton, ") \
				_T("        SUM(duoclieu) herb,") \
				_T("        SUM(tpdd) compound,") \
				_T("        SUM(ycu) instrument") \
				_T(" FROM   (SELECT CASE WHEN (instr(product_producttype, 'A11') > 0 OR product_producttype IN ('A1400', 'A6000'))") \
				_T("                     THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS thuoc, ") \
				_T("                CASE WHEN instr(product_producttype, 'A12') > 0 THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS hoachat, ") \
				_T("                CASE WHEN product_producttype = 'A1500' THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS bbg, ") \
				_T("                CASE WHEN product_producttype = 'A1302' THEN pol_totalamount ") \
				_T("                ELSE 0 ") \
				_T("                END AS duoclieu, ") \
				_T("				CASE WHEN product_producttype = 'A1301' THEN pol_totalamount") \
				_T("				ELSE 0") \
				_T("				END AS tpdd,") \
				_T("				CASE WHEN product_producttype = 'A1600' THEN pol_totalamount") \
				_T("				ELSE 0") \
				_T("				END AS ycu") \
				_T("         FROM   purchase_orderline, ") \
				_T("                m_productitem_view3, ") \
				_T("				purchase_order,") \
				_T("				purchase_payment") \
				_T("         WHERE  pol_product_item_id = product_item_id ") \
				_T("			AND po_purchase_order_id = pol_purchase_order_id") \
				_T("			AND po_refpayment_id=pp_purchase_payment_id AND po_payment = 'Y' %s) "), szWhere);
	return szSQL;
}
BEGIN_MESSAGE_MAP(CMASSupplierPaymentListEX, CGuiView)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CMASSupplierPaymentListEX::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndFromDate.SetFocus();
}
