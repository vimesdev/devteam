#include "stdafx.h"
#include "MAMaterialPayment.h"
#include "MainFrame_E10.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialPayment *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMAMaterialPayment *)pWnd)->OnToDateCheckValue();
} 
static void _OnSupplierSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMAMaterialPayment* )pWnd)->OnSupplierSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSupplierSelendokFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnSupplierSelendok();
}
/*static void _OnSupplierSetfocusFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnSupplierKillfocus();
}*/
/*static void _OnSupplierKillfocusFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnSupplierKillfocus();
}*/
static long _OnSupplierLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialPayment *)pWnd)->OnSupplierLoadData();
}
/*static void _OnSupplierAddNewFnc(CWnd *pWnd){
	((CMAMaterialPayment *)pWnd)->OnSupplierAddNew();
}*/
static long _OnStorageListLoadDataFnc(CWnd *pWnd){
	return ((CMAMaterialPayment*)pWnd)->OnStorageListLoadData();
} 
static void _OnStorageListDblClickFnc(CWnd *pWnd){
	((CMAMaterialPayment*)pWnd)->OnStorageListDblClick();
} 
static void _OnStorageListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMAMaterialPayment*)pWnd)->OnStorageListSelectChange(nOldItem, nNewItem);
} 
static int _OnStorageListDeleteItemFnc(CWnd *pWnd){
	 return ((CMAMaterialPayment*)pWnd)->OnStorageListDeleteItem();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMAMaterialPayment *pVw = (CMAMaterialPayment *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddMAMaterialPaymentFnc(CWnd *pWnd){
	 return ((CMAMaterialPayment*)pWnd)->OnAddMAMaterialPayment();
} 
static int _OnEditMAMaterialPaymentFnc(CWnd *pWnd){
	 return ((CMAMaterialPayment*)pWnd)->OnEditMAMaterialPayment();
} 
static int _OnDeleteMAMaterialPaymentFnc(CWnd *pWnd){
	 return ((CMAMaterialPayment*)pWnd)->OnDeleteMAMaterialPayment();
} 
static int _OnSaveMAMaterialPaymentFnc(CWnd *pWnd){
	 return ((CMAMaterialPayment*)pWnd)->OnSaveMAMaterialPayment();
} 
static int _OnCancelMAMaterialPaymentFnc(CWnd *pWnd){
	 return ((CMAMaterialPayment*)pWnd)->OnCancelMAMaterialPayment();
} 
CMAMaterialPayment::CMAMaterialPayment(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMAMaterialPayment::~CMAMaterialPayment(){
}
void CMAMaterialPayment::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 430, 315);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndSupplierLabel.Create(this, _T("Supplier"), 10, 60, 90, 85);
	m_wndSupplier.Create(this,95, 60, 425, 85); 
	m_wndStorageList.Create(this,10, 90, 425, 310); 
	m_wndStorageList.SetCheckBox(TRUE);
	m_wndExport.Create(this, _T("&Export"), 345, 320, 425, 345);

}
void CMAMaterialPayment::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
// 	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndFromDate.SetCheckValue(true);
// 	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
// 	m_wndToDate.SetCheckValue(true);
// 	m_wndSupplier.SetCheckValue(true);
// 	m_wndSupplier.LimitText(1024);

	m_wndSupplier.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSupplier.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndStorageList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndStorageList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CMAMaterialPayment::OnSetWindowEvents(){
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
	m_wndStorageList.SetEvent(WE_SELCHANGE, _OnStorageListSelectChangeFnc);
	m_wndStorageList.SetEvent(WE_LOADDATA, _OnStorageListLoadDataFnc);
	m_wndStorageList.SetEvent(WE_DBLCLICK, _OnStorageListDblClickFnc);
	m_wndStorageList.AddEvent(1, _T("Delete"), _OnStorageListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	OnStorageListLoadData();
	UpdateData(false);

}
void CMAMaterialPayment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSupplier.GetDlgCtrlID(), m_szSupplierKey);

}
void CMAMaterialPayment::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMAMaterialPayment::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CMAMaterialPayment::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSupplierKey.Empty();

}
int CMAMaterialPayment::SetMode(int nMode){
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
/*void CMAMaterialPayment::OnFromDateChange(){
	
} */
/*void CMAMaterialPayment::OnFromDateSetfocus(){
	
} */
/*void CMAMaterialPayment::OnFromDateKillfocus(){
	
} */
int CMAMaterialPayment::OnFromDateCheckValue(){
	return 0;
} 
/*void CMAMaterialPayment::OnToDateChange(){
	
} */
/*void CMAMaterialPayment::OnToDateSetfocus(){
	
} */
/*void CMAMaterialPayment::OnToDateKillfocus(){
	
} */
int CMAMaterialPayment::OnToDateCheckValue(){
	return 0;
} 
void CMAMaterialPayment::OnSupplierSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMAMaterialPayment::OnSupplierSelendok(){
	 
}
/*void CMAMaterialPayment::OnSupplierSetfocus(){
	
}*/
/*void CMAMaterialPayment::OnSupplierKillfocus(){
	
}*/
long CMAMaterialPayment::OnSupplierLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND adp_org_id = 'MA'"));
	return pMF->LoadPartnerList(&m_wndSupplier, m_szSupplierKey, szFilter);
}
/*void CMAMaterialPayment::OnSupplierAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CMAMaterialPayment::OnStorageListDblClick(){
	
} 
void CMAMaterialPayment::OnStorageListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CMAMaterialPayment::OnStorageListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CMAMaterialPayment::OnStorageListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" AND msl_org_id = 'MA'"));
	return pMF->LoadStorageIntoListCtrl(&m_wndStorageList, szFilter);
}
void CMAMaterialPayment::OnExportSelect(){
	UpdateData();
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, szStorages;

	for (int i = 0; i < m_wndStorageList.GetItemCount();i++)
	{
		if (m_wndStorageList.GetCheck(i))
		{
			m_wndStorageList.SetCurSel(i);
			if (!szStorages.IsEmpty())
				szStorages += _T(", ");
			szStorages.AppendFormat(_T("'%s'"), m_wndStorageList.GetItemText(i, 0));
		}
	}

	szSQL.Format(_T("push_materialpayment(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), q'$%s$', '%s', 'MA')"), m_szFromDate, m_szToDate, szStorages, m_szSupplierKey);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet <= 0) return;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	rs.ExecSQL(_T("SELECT * FROM tr_materialpayment_columns"));
	WriteHeader(&xls, &rs);
	rs.ExecSQL(_T("SELECT * FROM tr_materialpayment"));
	WriteDetail(&xls, &rs);
	xls.Save(_T("Exports\\Thanh toan VTTH.xls"));
}

void CMAMaterialPayment::WriteHeader(CExcel* pXls, CRecord* pRs){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr.Empty();
	int nCol = 1, nRow = 0, nMerge = 0, i = 1;

	pXls->SetCellText(0, 0, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT, true);
	pXls->SetCellText(0, 1, pMF->GetDepartmentName(pMF->GetDepartmentID()), FMT_TEXT, true);

	pXls->SetCellText(0, 2, _T("TH\x41NH TO\xC1N VTTH \x43HO \x43\xC1\x43 \x43\xD4NGG TY"), FMT_TEXT, true, 16);

	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	pXls->SetCellText(0, 3, tmpStr, FMT_TEXT, true);

	pXls->SetColumnWidth(0, 70);
	pXls->SetCellText(0, 4, _T("T\xEAn \x63\xF4ng ty"), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);

	nRow = 4;
	while (!pRs->IsEOF()){
		if (pRs->GetValue(_T("storage_id")) != tmpStr){
			pXls->SetCellMergedColumns(nCol-nMerge, nRow, nMerge);
			pXls->SetCellText(nCol, nRow, pRs->GetValue(_T("storage_name")), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
			tmpStr = pRs->GetValue(_T("storage_id"));
			nMerge = 0;
		}
		pXls->SetColumnWidth(i++, 15);
		pXls->SetCellText(nCol++, nRow+1, pRs->GetValue(_T("date_desc")), FMT_TEXT|FMT_CENTER|FMT_WRAPING, true);
		nMerge++;
		pRs->MoveNext();
	}
}

void CMAMaterialPayment::WriteDetail(CExcel* pXls, CRecord* pRs){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	tmpStr.Empty();
	int nRow = 5;
	while (!pRs->IsEOF()){
		if (pRs->GetValue(_T("partner_id")) != tmpStr){
			nRow++;
			tmpStr = pRs->GetValue(_T("partner_id"));
			pXls->SetCellText(0, nRow, pRs->GetValue(_T("partner_name")), FMT_TEXT);
		}
		pXls->SetCellText(str2int(pRs->GetValue(_T("data_position"))), nRow, pRs->GetValue(_T("total_amount")), FMT_NUMBER1);
		pRs->MoveNext();
	}
}
int CMAMaterialPayment::OnAddMAMaterialPayment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMAMaterialPayment::OnEditMAMaterialPayment(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMAMaterialPayment::OnDeleteMAMaterialPayment(){
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
 		OnCancelMAMaterialPayment();
 	}
	return 0;
}
int CMAMaterialPayment::OnSaveMAMaterialPayment(){
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
 		//OnMAMaterialPaymentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMAMaterialPayment::OnCancelMAMaterialPayment(){
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
int CMAMaterialPayment::OnMAMaterialPaymentListLoadData(){
	return 0;
}