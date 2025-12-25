#include "stdafx.h"
#include "ReportDebtMaterial.h"
#include "MainFrm.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CReportDebtMaterial *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CReportDebtMaterial *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CReportDebtMaterial* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CReportDebtMaterial *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CReportDebtMaterial *)pWnd)->OnStorageAddNew();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CReportDebtMaterial*)pWnd)->OnDepartmentLoadData();
} 
static void _OnDepartmentDblClickFnc(CWnd *pWnd){
	((CReportDebtMaterial*)pWnd)->OnDepartmentDblClick();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CReportDebtMaterial*)pWnd)->OnDepartmentSelectChange(nOldItem, nNewItem);
} 
static int _OnDepartmentDeleteItemFnc(CWnd *pWnd){
	 return ((CReportDebtMaterial*)pWnd)->OnDepartmentDeleteItem();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CReportDebtMaterial *pVw = (CReportDebtMaterial *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CReportDebtMaterial *pVw = (CReportDebtMaterial *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddReportDebtMaterialFnc(CWnd *pWnd){
	 return ((CReportDebtMaterial*)pWnd)->OnAddReportDebtMaterial();
} 
static int _OnEditReportDebtMaterialFnc(CWnd *pWnd){
	 return ((CReportDebtMaterial*)pWnd)->OnEditReportDebtMaterial();
} 
static int _OnDeleteReportDebtMaterialFnc(CWnd *pWnd){
	 return ((CReportDebtMaterial*)pWnd)->OnDeleteReportDebtMaterial();
} 
static int _OnSaveReportDebtMaterialFnc(CWnd *pWnd){
	 return ((CReportDebtMaterial*)pWnd)->OnSaveReportDebtMaterial();
} 
static int _OnCancelReportDebtMaterialFnc(CWnd *pWnd){
	 return ((CReportDebtMaterial*)pWnd)->OnCancelReportDebtMaterial();
}
static int _OnDepartmentCheckAllFnc(CWnd *pWnd){
	((CReportDebtMaterial*)pWnd)->OnDepartmentCheckAll();
	return 0;
}
static int _OnDepartmentUncheckAllFnc(CWnd *pWnd){
	((CReportDebtMaterial*)pWnd)->OnDepartmentUncheckAll();
	return 0;
}
CReportDebtMaterial::CReportDebtMaterial(CWnd *pParent):
CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CReportDebtMaterial::~CReportDebtMaterial(){
}
void CReportDebtMaterial::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 1, 431, 366);
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 25, 85, 50);
	m_wndFromDate.Create(this,90, 25, 210, 50); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 25, 300, 50);
	m_wndToDate.Create(this,305, 25, 425, 50); 
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 55, 85, 80);
	m_wndStorage.Create(this,90, 55, 425, 80);
	m_wndDepartment.Create(this,5, 85, 425, 360);
	m_wndDepartment.SetCheckBox(TRUE);
	m_wndPreview.Create(this, _T("&Preview"), 220, 370, 320, 395);
	m_wndExport.Create(this, _T("&Export"), 325, 370, 425, 395);

}
void CReportDebtMaterial::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndStorage.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT|CFMT_RIGHT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);

}
void CReportDebtMaterial::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	m_wndDepartment.SetEvent(WE_DBLCLICK, _OnDepartmentDblClickFnc);
	m_wndDepartment.AddEvent(1, _T("Check All"), _OnDepartmentCheckAllFnc);
	m_wndDepartment.AddEvent(2, _T("UnCheck All"), _OnDepartmentUncheckAllFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	OnDepartmentLoadData();
	UpdateData(FALSE);

}
void CReportDebtMaterial::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CReportDebtMaterial::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CReportDebtMaterial::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CReportDebtMaterial::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();

}
int CReportDebtMaterial::SetMode(int nMode){
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
/*void CReportDebtMaterial::OnFromDateChange(){
	
} */
/*void CReportDebtMaterial::OnFromDateSetfocus(){
	
} */
/*void CReportDebtMaterial::OnFromDateKillfocus(){
	
} */
int CReportDebtMaterial::OnFromDateCheckValue(){
	return 0;
} 
/*void CReportDebtMaterial::OnToDateChange(){
	
} */
/*void CReportDebtMaterial::OnToDateSetfocus(){
	
} */
/*void CReportDebtMaterial::OnToDateKillfocus(){
	
} */
int CReportDebtMaterial::OnToDateCheckValue(){
	return 0;
} 
void CReportDebtMaterial::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CReportDebtMaterial::OnStorageSelendok(){
	 
}
/*void CReportDebtMaterial::OnStorageSetfocus(){
	
}*/
/*void CReportDebtMaterial::OnStorageKillfocus(){
	
}*/
long CReportDebtMaterial::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CReportDebtMaterial::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CReportDebtMaterial::OnDepartmentDblClick(){
	
} 
void CReportDebtMaterial::OnDepartmentSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CReportDebtMaterial::OnDepartmentDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CReportDebtMaterial::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartment.BeginLoad(); 
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T(" select sd_id as id, sd_name as name from sys_dept where sd_id IN ('B5') order by  sd_name"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDepartment.EndLoad(); 
	return nCount;
}
void CReportDebtMaterial::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CReport rpt;
	if (!rpt.Init(_T("Reports\\HMS\\MA_BAOCAOVATTUNOHANG.RPT")))
		return;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szSysDate, szOldOrder, szNewOrder;
	CReportSection* rptDetail = NULL, *rptHeader = NULL, *rptGroup = NULL, *rptFooter = NULL;
	int nIdx = 1;
	long double nAmount = 0, nAmount1 = 0, nAmount2 = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONSTOP | MB_OK);
		return;
	}
	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rptHeader->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	//rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(rptHeader->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), 
		CDate::Convert(m_szToDate), yyyymmdd, ddmmyyyy);
	rptHeader->SetValue(_T("ReportDate"), tmpStr);

	tmpStr = _T("To\xE0n \x62\x1ED9");
	if (!m_szStorageKey.IsEmpty())
		rptHeader->SetValue(_T("StockName"), m_wndStorage.GetCurrent(1));
	else
		rptHeader->SetValue(_T("StockName"), tmpStr);



	while (!rs.IsEOF())
	{
		rs.GetValue(_T("orderno"), szNewOrder);
		if (szOldOrder != szNewOrder)
		{
			if (nAmount > 0)
			{
				rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));
				tmpStr.Format(_T("%f"), nAmount);
				rptGroup->SetValue(_T("s1"), tmpStr);
				tmpStr.Format(_T("%f"), nAmount1);
				rptGroup->SetValue(_T("s2"), tmpStr);
				tmpStr.Format(_T("%f"), nAmount2);
				rptGroup->SetValue(_T("s3"), tmpStr);
				nAmount = 0;
				nAmount1 = 0;
				nAmount2 = 0;

			}
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
				rptGroup->SetValue(_T("GroupName"), szNewOrder);
			nIdx = 1;
			szOldOrder = szNewOrder;
		}

		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), int2str(nIdx++));
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("c1")));
		rptDetail->SetValue(_T("3"), rs.GetValue(_T("c2")));
		rptDetail->SetValue(_T("4"), rs.GetValue(_T("c3")));
		rs.GetValue(_T("c4"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		nAmount += str2double(tmpStr);
		rptDetail->SetValue(_T("6"), rs.GetValue(_T("c5")));
		rptDetail->SetValue(_T("7"), rs.GetValue(_T("c6")));
		rptDetail->SetValue(_T("8"), rs.GetValue(_T("c7")));
		rs.GetValue(_T("c8"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		nAmount1 += str2double(tmpStr);
		rptDetail->SetValue(_T("10"), rs.GetValue(_T("c9")));
		rptDetail->SetValue(_T("11"), rs.GetValue(_T("c10")));
		rptDetail->SetValue(_T("12"), rs.GetValue(_T("c11")));
		rs.GetValue(_T("c12"), tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		nAmount2 += str2double(tmpStr);
		rs.MoveNext();
	}
	if(nAmount > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		tmpStr.Format(_T("%f"), nAmount);
		rptDetail->SetValue(_T("s1"), tmpStr);
		tmpStr.Format(_T("%f"), nAmount1);
		rptDetail->SetValue(_T("s2"), tmpStr);
		tmpStr.Format(_T("%f"), nAmount2);
		rptDetail->SetValue(_T("s3"), tmpStr);
	}
	rptFooter = rpt.GetReportFooter();
	szSysDate = pMF->GetSysDateTime();
	tmpStr.Format(rptFooter->GetValue(_T("PrintDate")), szSysDate.Mid(11, 5),szSysDate.Mid(8,2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rptFooter->SetValue(_T("PrintDate"), tmpStr);
	//rptFooter->SetValue(_T("Username"), pMF->GetUserName(pMF->GetCurrentUser()));
	EndWaitCursor();
	rpt.PrintPreview();
} 
void CReportDebtMaterial::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CReportDebtMaterial::OnAddReportDebtMaterial(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CReportDebtMaterial::OnEditReportDebtMaterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CReportDebtMaterial::OnDeleteReportDebtMaterial(){
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
 		OnCancelReportDebtMaterial();
 	}
	return 0;
}
int CReportDebtMaterial::OnSaveReportDebtMaterial(){
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
 		//OnReportDebtMaterialListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CReportDebtMaterial::OnCancelReportDebtMaterial(){
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
int CReportDebtMaterial::OnReportDebtMaterialListLoadData(){
	return 0;
}
CString CReportDebtMaterial::GetQueryString(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere, szDepts;
	szWhere.Format(_T(" AND mt_approveddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if(!m_szStorageKey.IsEmpty())
		szWhere.AppendFormat(_T("AND mt_storage_id = '%s' "), m_szStorageKey);
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			if (!szDepts.IsEmpty())
			{
				szDepts += _T(", ");
			}
			szDepts.AppendFormat(_T("'%s'"), m_wndDepartment.GetItemText(i, 0));
		}
	}
	if (!szDepts.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND mt_department_to_id IN (%s)"), szDepts);
	}
	szSQL.Format(_T(" SELECT") \
		_T(" ordernoBS orderno,") \
		_T(" pdnameBS c1,") \
		_T(" qtyorderBS c2,") \
		_T(" unitpriceBS c3,") \
		_T(" totalamountBS c4,") \
		_T(" pdnameTC c5,") \
		_T(" qtyorderTC c6,") \
		_T(" unitpriceTC c7,") \
		_T(" totalamountTC c8,") \
		_T(" pdnameNH c9,") \
		_T(" qtyorderNH c10,") \
		_T(" unitpriceNH c11,") \
		_T(" totalamountNH c12") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" mt_orderno AS ordernoBS,") \
		_T(" product_name AS pdnameBS,") \
		_T(" mtl_qtyorder AS qtyorderBS,") \
		_T(" mtl_saleprice AS unitpriceBS,") \
		_T(" mtl_ttlamount AS totalamountBS,") \
		_T(" mtl_transactionline_id AS idBS,") \
		_T(" product_id AS pdidBS") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id = mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtl_product_item_id = product_item_id)") \
		_T(" WHERE mt_status        = 'A' %s") \
		_T(" AND NVL(mtl_client_id, 'X')  <> 'REP'") \
		_T(" AND mtl_status IN('N', 'R')") \
		_T(" ) tbl") \
		_T(" LEFT JOIN") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" ordernoTC,") \
		_T(" pdnameTC,") \
		_T(" qtyorderTC,") \
		_T(" unitpriceTC,") \
		_T(" totalamountTC,") \
		_T(" idTC") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT mt_orderno       AS ordernoTC,") \
		_T(" product_name            AS pdnameTC,") \
		_T(" mtlr_qtyorder           AS qtyorderTC,") \
		_T(" mtl_saleprice           AS unitpriceTC,") \
		_T(" mtl_ttlamount           AS totalamountTC,") \
		_T(" mtlr_transactionline_id AS idTC") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline_ref") \
		_T(" ON(mt_transaction_id = mtlr_transaction_id)") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mtl_transactionline_id = mtlr_reftransactionline_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtlr_refproduct_item_id = product_item_id)") \
		_T(" WHERE mt_status            = 'A' %s") \
		_T(" AND mtl_client_id   = 'REP'") \
		_T(" AND mtl_status      = 'Y'") \
		_T(" UNION ALL") \
		_T(" SELECT mt_orderno       AS ordernoTC,") \
		_T(" product_name            AS pdnameTC,") \
		_T(" mtl_qtydelivery         AS qtyorderTC,") \
		_T(" mtl_saleprice           AS unitpriceTC,") \
		_T(" mtl_qtydelivery * mtl_saleprice              AS totalamountTC,") \
		_T(" mtl_transactionline_id  AS idTC") \
		_T(" FROM m_transaction") \
		_T(" LEFT JOIN m_transactionline") \
		_T(" ON(mt_transaction_id = mtl_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtl_product_item_id = product_item_id)") \
		_T(" WHERE mt_status            = 'A'") \
		_T(" AND mtl_status      = 'R'") \
		_T(" AND  mtl_qtydelivery > 0 %s") \
		_T(" )) tbl1 ON(ordernoTC = ordernoBS AND  idTC = idBS) ") \
		_T(" LEFT JOIN") \
		_T(" (SELECT ") \
		_T(" mt_orderno AS ordernoNH,") \
		_T(" product_name AS pdnameNH,") \
		_T(" mtd_qtydebit AS qtyorderNH,") \
		_T(" product_saleprice2 AS unitpriceNH,") \
		_T(" product_saleprice2 * mtd_qtydebit AS totalamountNH,") \
		_T(" mtd_product_id pdidNH") \
		_T(" FROM m_transaction idNH") \
		_T(" LEFT JOIN m_transaction_debit") \
		_T(" ON(mt_transaction_id = mtd_transaction_id)") \
		_T(" LEFT JOIN m_productitem_view") \
		_T(" ON(mtd_product_item_id = product_item_id)") \
		_T(" WHERE mt_status        = 'A' %s") \
		_T(" ) tbl2 ON(ordernoBS = ordernoNH AND pdidNH = pdidBS)") \
		_T(" ORDER BY ordernoBS, pdnameBS, pdnameTC, pdnameNH"), szWhere, szWhere, szWhere, szWhere);
	return szSQL;
}
void CReportDebtMaterial::OnDepartmentCheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (!m_wndDepartment.GetCheck(i))
		{
			m_wndDepartment.SetCheck(i, TRUE);
		}
	}
	return;
}

void CReportDebtMaterial::OnDepartmentUncheckAll()
{
	for (int i = 0; i < m_wndDepartment.GetItemCount(); i++)
	{
		if (m_wndDepartment.GetCheck(i))
		{
			m_wndDepartment.SetCheck(i, FALSE);
		}
	}
	return;
}
