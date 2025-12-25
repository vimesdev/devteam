#include "stdafx.h"
#include "PMCompareImportandPayment.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCompareImportandPayment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCompareImportandPayment *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMCompareImportandPayment* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CPMCompareImportandPayment *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnSupplierAddNew();
}*/
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMCompareImportandPayment* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMCompareImportandPayment *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMCompareImportandPayment *)pWnd)->OnStockAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CPMCompareImportandPayment *pVw = (CPMCompareImportandPayment *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static int _OnAddPMCompareImportandPaymentFnc(CWnd *pWnd){
	 return ((CPMCompareImportandPayment*)pWnd)->OnAddPMCompareImportandPayment();
} 
static int _OnEditPMCompareImportandPaymentFnc(CWnd *pWnd){
	 return ((CPMCompareImportandPayment*)pWnd)->OnEditPMCompareImportandPayment();
} 
static int _OnDeletePMCompareImportandPaymentFnc(CWnd *pWnd){
	 return ((CPMCompareImportandPayment*)pWnd)->OnDeletePMCompareImportandPayment();
} 
static int _OnSavePMCompareImportandPaymentFnc(CWnd *pWnd){
	 return ((CPMCompareImportandPayment*)pWnd)->OnSavePMCompareImportandPayment();
} 
static int _OnCancelPMCompareImportandPaymentFnc(CWnd *pWnd){
	 return ((CPMCompareImportandPayment*)pWnd)->OnCancelPMCompareImportandPayment();
} 
CPMCompareImportandPayment::CPMCompareImportandPayment(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMCompareImportandPayment::~CPMCompareImportandPayment(){
}
void CPMCompareImportandPayment::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 575, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 395, 55);
	m_wndToDate.Create(this,400, 30, 570, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 110, 85);
	m_wndSupplier.Create(this,115, 60, 570, 85); 
	m_wndStockLabel.Create(this, _T("Stock"), 10, 90, 110, 115);
	m_wndStock.SetCheckBox(TRUE);
	m_wndStock.Create(this,115, 90, 570, 115); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 465, 125, 575, 150);

}
void CPMCompareImportandPayment::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndSupplier.SetCheckValue(true);
	m_wndSupplier.LimitText(1024);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(1024);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER | CFMT_RIGHT, 100);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);



}
void CPMCompareImportandPayment::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSupplier.SetEvent(WE_SELENDOK, _OnSupplierSelendokFnc);
	//m_wndSupplier.SetEvent(WE_SETFOCUS, _OnSupplierSetfocusFnc);
	//m_wndSupplier.SetEvent(WE_KILLFOCUS, _OnSupplierKillfocusFnc);
	m_wndSupplier.SetEvent(WE_SELCHANGE, _OnSupplierSelectChangeFnc);
	m_wndSupplier.SetEvent(WE_LOADDATA, _OnSupplierLoadDataFnc);
	//m_wndSupplier.SetEvent(WE_ADDNEW, _OnSupplierAddNewFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMCompareImportandPaymentFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMCompareImportandPaymentFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMCompareImportandPaymentFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMCompareImportandPaymentFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMCompareImportandPaymentFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);

}
void CPMCompareImportandPayment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CPMCompareImportandPayment::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMCompareImportandPayment::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMCompareImportandPayment::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();
	m_szStockKey.Empty();

}
int CPMCompareImportandPayment::SetMode(int nMode){
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
/*void CPMCompareImportandPayment::OnFromDateChange(){
	
} */
/*void CPMCompareImportandPayment::OnFromDateSetfocus(){
	
} */
/*void CPMCompareImportandPayment::OnFromDateKillfocus(){
	
} */
int CPMCompareImportandPayment::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMCompareImportandPayment::OnToDateChange(){
	
} */
/*void CPMCompareImportandPayment::OnToDateSetfocus(){
	
} */
/*void CPMCompareImportandPayment::OnToDateKillfocus(){
	
} */
int CPMCompareImportandPayment::OnToDateCheckValue(){
	return 0;
} 
void CPMCompareImportandPayment::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMCompareImportandPayment::OnSupplierSelendok(){
	 
}
/*void CPMCompareImportandPayment::OnSupplierSetfocus(){
	
}*/
/*void CPMCompareImportandPayment::OnSupplierKillfocus(){
	
}*/
long CPMCompareImportandPayment::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSupplier.IsSearchKey() && !m_szSupplierKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSupplierKey
};
	m_wndSupplier.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSupplier.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CPMCompareImportandPayment::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMCompareImportandPayment::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMCompareImportandPayment::OnStockSelendok(){
	 
}
/*void CPMCompareImportandPayment::OnStockSetfocus(){
	
}*/
/*void CPMCompareImportandPayment::OnStockKillfocus(){
	
}*/
long CPMCompareImportandPayment::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStockKey
};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
}
/*void CPMCompareImportandPayment::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMCompareImportandPayment::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	CReportSection* rptDetail = NULL,* rptHeader = NULL, * rptGroup = NULL, * rptFooter = NULL;
	double nTmp = 0, nAmt = 0;
	int nIdx = 1;
	CString szSQL, tmpStr, szDate, szOldGroup, szNewGroup;
	long double nTotal[10];
	for (int i = 0; i <= 9; i++)
	{
		nTotal[i] = 0;
	}
	if (!rpt.Init(_T("Reports\\HMS\\PMCOMPAREIMPORTANDPAYMENT.RPT")))
		return;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);

	if (pMF->GetCurrentUser() == _T("donglp"))
	{
		_msg(_T("%s"), szSQL);
	}

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptHeader->SetValue(_T("ReportDate"), tmpStr);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("partner"), szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			if (rptGroup)
			{
				tmpStr.Format(_T("%f"), nTotal[0]);
				rptGroup->SetValue(_T("s3"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[1]);
				rptGroup->SetValue(_T("s4"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[2]);
				rptGroup->SetValue(_T("s5"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[3]);
				rptGroup->SetValue(_T("s6"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[4]);
				rptGroup->SetValue(_T("s7"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[5]);
				rptGroup->SetValue(_T("s8"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[6]);
				rptGroup->SetValue(_T("s9"), tmpStr);
				tmpStr.Format(_T("%f"), nTotal[7]);
				rptGroup->SetValue(_T("s10"), tmpStr);
				nTotal[0] = 0;
				nTotal[1] = 0;
				nTotal[2] = 0;
				nTotal[3] = 0;
				nTotal[4] = 0;
				nTotal[5] = 0;
				nTotal[6] = 0;
				nTotal[7] = 0;
			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(0));
			rptGroup->SetValue(_T("GroupName"), szNewGroup);
			nIdx = 1;
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("product_typename")));
		rs.GetValue(_T("ttlamt"), nTmp);
		nTotal[0]+= nTmp;
		rptDetail->SetValue(_T("3"), double2str(nTmp));
		rs.GetValue(_T("import_amount"), nTmp);
		nTotal[1]+= nTmp;
		rptDetail->SetValue(_T("4"), double2str(nTmp));
		rs.GetValue(_T("paid_amounttt"), nTmp);
		nTotal[2]+= nTmp;
		rptDetail->SetValue(_T("5"), double2str(nTmp));
		rs.GetValue(_T("paid_amounttcd"), nTmp);
		nTotal[3]+= nTmp;
		rptDetail->SetValue(_T("6"), double2str(nTmp));
		rs.GetValue(_T("ttpaid"), nTmp);
		nTotal[4]+= nTmp;
		rptDetail->SetValue(_T("7"), double2str(nTmp));
		rs.GetValue(_T("ttdebit"), nTmp);
		nTotal[5]+= nTmp;
		rptDetail->SetValue(_T("8"), double2str(nTmp));
		rs.GetValue(_T("return_amount"), nTmp);
		nTotal[6]+= nTmp;
		rptDetail->SetValue(_T("9"), double2str(nTmp));
		rs.GetValue(_T("ttlreamt"), nTmp);
		nTotal[7]+= nTmp;
		rptDetail->SetValue(_T("10"), double2str(nTmp));
		rs.MoveNext();
	}

	if (rptGroup)
	{
		tmpStr.Format(_T("%f"), nTotal[0]);
		rptGroup->SetValue(_T("s3"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[1]);
		rptGroup->SetValue(_T("s4"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[2]);
		rptGroup->SetValue(_T("s5"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[3]);
		rptGroup->SetValue(_T("s6"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[4]);
		rptGroup->SetValue(_T("s7"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[5]);
		rptGroup->SetValue(_T("s8"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[6]);
		rptGroup->SetValue(_T("s9"), tmpStr);
		tmpStr.Format(_T("%f"), nTotal[7]);
		rptGroup->SetValue(_T("s10"), tmpStr);
	}

	rptFooter = rpt.GetReportFooter();
	szDate = pMF->GetSysDate();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szDate.Right(2), szDate.Mid(5,2), szDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
int CPMCompareImportandPayment::OnAddPMCompareImportandPayment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMCompareImportandPayment::OnEditPMCompareImportandPayment(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMCompareImportandPayment::OnDeletePMCompareImportandPayment(){
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
 		OnCancelPMCompareImportandPayment();
 	}
	return 0;
}
int CPMCompareImportandPayment::OnSavePMCompareImportandPayment(){
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
 		//OnPMCompareImportandPaymentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMCompareImportandPayment::OnCancelPMCompareImportandPayment(){
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
int CPMCompareImportandPayment::OnPMCompareImportandPaymentListLoadData(){
	return 0;
}

CString CPMCompareImportandPayment::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szStorages;
	if (!m_szSupplierKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND po_partner_id = '%s'"), m_szSupplierKey);
		szWhere1.AppendFormat(_T(" AND mt_partner_id = '%s'"), m_szSupplierKey);
	}
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
	if(!szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND po_storage_id IN(%s) "), szStorages);
		szWhere1.AppendFormat(_T(" AND mt_storage_id IN(%s) "), szStorages);
	}

	szSQL.Format(_T(" SELECT NVL(get_partnername(partner), 'Tự mua') AS partner,") \
		_T("   product_groupid,") \
		_T("   product_typename,") \
		_T("   ROUND(SUM(ttlamt), 0)         AS ttlamt,") \
		_T("   ROUND(SUM(ttlreamt), 0)       AS ttlreamt,") \
		_T("   ROUND(SUM(import_amount), 0)  AS import_amount,") \
		_T("   ROUND(SUM(paid_amounttt), 0)  AS paid_amounttt,") \
		_T("   ROUND(SUM(paid_amounttcd), 0) AS paid_amounttcd,") \
		_T("   ROUND(SUM(return_amount), 0)  AS return_amount,") \
		_T("   ROUND(SUM(paid_amounttt + paid_amounttcd - return_amount), 0) AS ttpaid,") \
		_T("   ROUND(SUM(ttlamt - ttlreamt + import_amount - paid_amounttt - paid_amounttcd + return_amount), 0) AS ttdebit") \
		_T(" FROM") \
		_T("   (SELECT") \
		_T("     CASE") \
		_T("       WHEN partner = 'X'") \
		_T("       THEN 1") \
		_T("       ELSE 2") \
		_T("     END AS orderby,") \
		_T("     partner,") \
		_T("     product_groupid,") \
		_T("     CASE") \
		_T("       WHEN product_groupid IN ( 'A0000' )") \
		_T("       THEN CAST('Thuốc' AS NVARCHAR2(10))") \
		_T("       ELSE product_typename") \
		_T("     END product_typename,") \
		_T("     SUM(ttlamt - ttlreamtb + 0) AS ttlamt,") \
		_T("     SUM(ttlreamt)			AS ttlreamt,") \
		_T("     SUM(import_amount)     AS import_amount,") \
		_T("     SUM(paid_amounttt)     AS paid_amounttt,") \
		_T("     SUM(paid_amounttcd)    AS paid_amounttcd,") \
		_T("     SUM(return_amount)     AS return_amount") \
		_T("   FROM") \
		_T("     (SELECT pol_totalamount AS ttlamt,") \
		_T("       0                     AS ttlreamtb,") \
		_T("       0                     AS ttlreamtc,") \
		_T("       0                     AS ttlreamt,") \
		_T("       0                     AS import_amount,") \
		_T("       0                     AS paid_amounttt,") \
		_T("       0                     AS paid_amounttcd,") \
		_T("       0                     AS return_amount,") \
		_T("       CASE") \
		_T("         WHEN NVL(po_saleperson_id, 'P') = 'P'") \
		_T("         THEN CAST('X' AS NVARCHAR2(1))") \
		_T("         ELSE po_partner_id") \
		_T("       END                 AS partner,") \
		_T("       pol_product_item_id AS productid") \
		_T(" FROM purchase_order") \
		_T(" LEFT JOIN purchase_orderline") \
		_T(" ON (po_purchase_order_id = pol_purchase_order_id)") \
		_T(" LEFT JOIN purchase_payment") \
		_T(" ON (pp_purchase_payment_id = po_refpayment_id)") \
		_T(" WHERE po_status        = 'A'") \
		_T(" AND NVL(po_saleperson_id, 'P') = 'P'") \
		_T(" AND (po_approveddate   < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND (po_payment        = 'N'") \
		_T(" OR (po_payment         = 'Y'") \
		_T(" AND pp_acctdate       >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))) %s") \
		_T("     UNION ALL") \
		_T(" SELECT 0,") \
		_T("      mtl_ttlamount AS ttlreamtb,") \
		_T("       0,0,0,0,0,0,") \
		_T("       CASE") \
		_T("         WHEN mt_partner_id NOT IN('708', 'CHT', 'NT1')") \
		_T("         THEN CAST('X' AS NVARCHAR2(1))") \
		_T("         ELSE mt_partner_id") \
		_T("       END AS partner,") \
		_T("       mtl_product_item_id") \
		_T("     FROM m_transaction") \
		_T("     LEFT JOIN m_transactionline") \
		_T("     ON(mt_transaction_id   = mtl_transaction_id)") \
		_T("     WHERE mt_org_id          = 'PM'") \
		_T("     AND mt_doctype         = 'PRO' and mt_status ='A' ") \
		_T("     AND NVL(mtl_ttlamount, 0) > 0") \
		_T("     AND mt_partner_id NOT IN('KD', '708', 'CHT', 'NT1')") \
		_T("     AND mt_approveddate       < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("	    and (nvl(mt_payment,'N') <>'Y'  ") \
       _T("   OR ( mt_payment='Y' and mt_payment_date    >  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) ) ") \
		_T("     AND nvl(mt_payment_method,'N')     = 'UNC' %s ") \
		_T("     UNION ALL") \
		_T(" SELECT 0,0,") \
		_T("       0 AS ttlreamtc,") \
		_T("       0,0,0,0,0,") \
		_T("       CASE") \
		_T("         WHEN mt_partner_id NOT IN('708', 'CHT', 'NT1')") \
		_T("         THEN CAST('X' AS NVARCHAR2(1))") \
		_T("         ELSE mt_partner_id") \
		_T("       END AS partner,") \
		_T("       mtl_product_item_id") \
		_T("     FROM m_transaction") \
		_T("     LEFT JOIN m_transactionline") \
		_T("     ON(mt_transaction_id   = mtl_transaction_id)") \
		_T("     WHERE mt_org_id        = 'PM'") \
		_T("     AND mt_doctype         = 'PRO' and mt_status ='A' ") \
		_T("     AND mt_partner_id NOT IN('KD', '708', 'CHT', 'NT1')") \
		_T("     AND ((mt_approveddate < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("     AND ((mt_payment     <> 'Y'") \
		_T("     AND mt_payment_method = 'UNC')") \
		_T("     OR mt_payment_date   IS NULL))") \
		_T("     OR (mt_payment        = 'Y'") \
		_T("     AND nvl(mt_payment_method,'N') = 'UNC'") \
		_T("     AND mt_payment_date < TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')))") \
		_T("     %s") \
		_T("     UNION ALL") \
		_T(" SELECT 0,0,0,") \
		_T("       mtl_ttlamount AS ttlreamt,") \
		_T("       0,0,0,0,") \
		_T("       CASE") \
		_T("         WHEN mt_partner_id NOT IN('708', 'CHT', 'NT1')") \
		_T("         THEN CAST('X' AS NVARCHAR2(1))") \
		_T("         ELSE mt_partner_id") \
		_T("       END AS partner,") \
		_T("       mtl_product_item_id") \
		_T("     FROM m_transaction") \
		_T("     LEFT JOIN m_transactionline") \
		_T("     ON(mt_transaction_id   = mtl_transaction_id)") \
		_T("     WHERE mt_org_id          = 'PM'") \
		_T("     AND mt_doctype         = 'PRO' and mt_status ='A' ") \
		_T("     AND NVL(mtl_ttlamount, 0) > 0") \
		_T("     AND mt_partner_id NOT IN('KD', '708', 'CHT', 'NT1')") \
		_T("   AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND nvl(mt_payment_method,'N')   <>  'TM' %s") \
		_T("     UNION ALL") \
		_T("     SELECT 0          AS ttlamt,") \
		_T("       0               AS ttlreamtb,") \
		_T("       0               AS ttlreamtc,") \
		_T("       0               AS ttlreamt,") \
		_T("       pol_totalamount AS import_amount,") \
		_T("       0               AS paid_amounttt,") \
		_T("       0               AS paid_amounttcd,") \
		_T("       0               AS return_amount,") \
		_T("       CASE") \
		_T("         WHEN po_partner_id NOT IN('708', 'CHT', 'NT1')") \
		_T("         THEN CAST('X' AS NVARCHAR2(1))") \
		_T("         ELSE po_partner_id") \
		_T("       END                 AS partner,") \
		_T("       pol_product_item_id AS productid") \
		_T("     FROM purchase_order") \
		_T("     LEFT JOIN purchase_orderline") \
		_T("     ON(po_purchase_order_id = pol_purchase_order_id)") \
		_T("     WHERE po_status         = 'A'") \
		_T("     AND po_org_id           = 'PM'") \
		_T("     AND (po_partner_id IN('708', 'CHT', 'NT1') OR NVL(po_saleperson_id, 'P') = 'P')") \
		_T("     AND po_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T("     UNION ALL") \
		_T("     SELECT 0 AS ttlamt,") \
		_T("       0      AS ttlreamtb,") \
		_T("       0      AS ttlreamtc,") \
		_T("       0      AS ttlreamt,") \
		_T("       0      AS import_amount,") \
		_T("       CASE") \
		_T("         WHEN pp_payment_resource_id = 5") \
		_T("         THEN pol_totalamount") \
		_T("         ELSE 0") \
		_T("       END,") \
		_T("       CASE") \
		_T("         WHEN pp_payment_resource_id = 1") \
		_T("         THEN pol_totalamount") \
		_T("         ELSE 0") \
		_T("       END,") \
		_T("       0,") \
		_T("       CASE") \
		_T("         WHEN NVL(po_saleperson_id, 'P') = 'P'") \
		_T("         THEN CAST('X' AS NVARCHAR2(1))") \
		_T("         ELSE po_partner_id") \
		_T("       END                 AS partner,") \
		_T("       pol_product_item_id AS productid") \
		_T("     FROM purchase_payment") \
		_T("     LEFT JOIN purchase_order") \
		_T("     ON(pp_purchase_payment_id = po_refpayment_id)") \
		_T("     LEFT JOIN purchase_orderline") \
		_T("     ON(po_purchase_order_id = pol_purchase_order_id)") \
		_T("     WHERE pp_status        IN ( 'P', 'A' )") \
		_T("     AND po_org_id           = 'PM'") \
		_T("     AND po_payment          = 'Y'") \
		_T("     AND NVL(po_saleperson_id, 'P') = 'P'") \
		_T("     AND pp_acctdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s") \
		_T(" UNION ALL") \
		_T(" SELECT 0,0,0,0,0,0,0,") \
		_T("   mtl_ttlamount AS return_amount,") \
		_T("   CASE") \
		_T("     WHEN mt_partner_id NOT IN('708', 'CHT', 'NT1')") \
		_T("     THEN CAST('X' AS NVARCHAR2(1))") \
		_T("     ELSE mt_partner_id") \
		_T("   END AS partner,") \
		_T("   mtl_product_item_id") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id   = mtl_transaction_id)") \
		_T(" WHERE mt_org_id          = 'PM'") \
		_T(" AND mt_doctype         = 'PRO' and mt_status ='A' ") \
		_T(" AND mt_partner_id NOT IN('KD', '708', 'CHT', 'NT1')") \
		_T("   AND mt_payment_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T("	AND mt_payment             = 'Y' ") \
        _T("  AND nvl(mt_payment_method,'N') ='UNC' %s ") \
		_T("  )") \
		_T("   LEFT JOIN m_productitem_view3") \
		_T("   ON(productid = product_item_id)") \
		_T("   GROUP BY partner,") \
		_T("     product_groupid,") \
		_T("     product_typename") \
		_T("   )") \
		_T(" GROUP BY orderby,") \
		_T("   partner,") \
		_T("   product_groupid,") \
		_T("   product_typename") \
		_T(" ORDER BY orderby,") \
		_T("   partner,") \
		_T("   product_groupid,") \
		_T("   product_typename"), m_szFromDate, m_szFromDate, szWhere, m_szFromDate, m_szFromDate,szWhere1, m_szFromDate, m_szFromDate, szWhere1, m_szFromDate, m_szToDate, szWhere1, m_szFromDate, m_szToDate, szWhere, 
		m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate, szWhere1);
		//_msg(_T("%s"), szSQL);
		return szSQL;
}