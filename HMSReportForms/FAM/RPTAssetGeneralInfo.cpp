#include "stdafx.h"
#include "RPTAssetGeneralInfo.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetGeneralInfo *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetGeneralInfo *)pWnd)->OnToDateCheckValue();
} 
static void _OnSourcesSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetGeneralInfo* )pWnd)->OnSourcesSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourcesSelendokFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnSourcesSelendok();
}
/*static void _OnSourcesSetfocusFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnSourcesKillfocus();
}*/
/*static void _OnSourcesKillfocusFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnSourcesKillfocus();
}*/
static long _OnSourcesLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetGeneralInfo *)pWnd)->OnSourcesLoadData();
}
/*static void _OnSourcesAddNewFnc(CWnd *pWnd){
	((CRPTAssetGeneralInfo *)pWnd)->OnSourcesAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTAssetGeneralInfo *pVw = (CRPTAssetGeneralInfo *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTAssetGeneralInfo *pVw = (CRPTAssetGeneralInfo *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRPTAssetGeneralInfoFnc(CWnd *pWnd){
	 return ((CRPTAssetGeneralInfo*)pWnd)->OnAddRPTAssetGeneralInfo();
} 
static int _OnEditRPTAssetGeneralInfoFnc(CWnd *pWnd){
	 return ((CRPTAssetGeneralInfo*)pWnd)->OnEditRPTAssetGeneralInfo();
} 
static int _OnDeleteRPTAssetGeneralInfoFnc(CWnd *pWnd){
	 return ((CRPTAssetGeneralInfo*)pWnd)->OnDeleteRPTAssetGeneralInfo();
} 
static int _OnSaveRPTAssetGeneralInfoFnc(CWnd *pWnd){
	 return ((CRPTAssetGeneralInfo*)pWnd)->OnSaveRPTAssetGeneralInfo();
} 
static int _OnCancelRPTAssetGeneralInfoFnc(CWnd *pWnd){
	 return ((CRPTAssetGeneralInfo*)pWnd)->OnCancelRPTAssetGeneralInfo();
} 
CRPTAssetGeneralInfo::CRPTAssetGeneralInfo(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTAssetGeneralInfo::~CRPTAssetGeneralInfo(){
}
void CRPTAssetGeneralInfo::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information report"), 5, 5, 450, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 310, 55);
	m_wndToDate.Create(this,315, 30, 445, 55); 
	m_wndSourcesLabel.Create(this, _T("Sources"), 10, 60, 90, 85);
	m_wndSources.Create(this,95, 60, 445, 85); 
	m_wndExport.Create(this, _T("&Export"), 370, 95, 450, 120);
	m_wndPrint.Create(this, _T("&Print"), 285, 95, 365, 120);

}
void CRPTAssetGeneralInfo::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndSources.SetCheckValue(true);
	m_wndSources.LimitText(1024);

	m_wndSources.InsertColumn(0, _T("STT"), FMT_TEXT, 50);
	m_wndSources.InsertColumn(1, _T("Name"), FMT_TEXT, 250);

}
void CRPTAssetGeneralInfo::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSources.SetEvent(WE_SELENDOK, _OnSourcesSelendokFnc);
	//m_wndSources.SetEvent(WE_SETFOCUS, _OnSourcesSetfocusFnc);
	//m_wndSources.SetEvent(WE_KILLFOCUS, _OnSourcesKillfocusFnc);
	m_wndSources.SetEvent(WE_SELCHANGE, _OnSourcesSelectChangeFnc);
	m_wndSources.SetEvent(WE_LOADDATA, _OnSourcesLoadDataFnc);
	//m_wndSources.SetEvent(WE_ADDNEW, _OnSourcesAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_ADD);
}
void CRPTAssetGeneralInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSources.GetDlgCtrlID(), m_szSourcesKey);

}
void CRPTAssetGeneralInfo::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTAssetGeneralInfo::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTAssetGeneralInfo::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSourcesKey.Empty();

}
int CRPTAssetGeneralInfo::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate = pMF->GetSysDateTime();
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
/*void CRPTAssetGeneralInfo::OnFromDateChange(){
	
} */
/*void CRPTAssetGeneralInfo::OnFromDateSetfocus(){
	
} */
/*void CRPTAssetGeneralInfo::OnFromDateKillfocus(){
	
} */
int CRPTAssetGeneralInfo::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTAssetGeneralInfo::OnToDateChange(){
	
} */
/*void CRPTAssetGeneralInfo::OnToDateSetfocus(){
	
} */
/*void CRPTAssetGeneralInfo::OnToDateKillfocus(){
	
} */
int CRPTAssetGeneralInfo::OnToDateCheckValue(){
	return 0;
} 
void CRPTAssetGeneralInfo::OnSourcesSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetGeneralInfo::OnSourcesSelendok(){
	 
}
/*void CRPTAssetGeneralInfo::OnSourcesSetfocus(){
	
}*/
/*void CRPTAssetGeneralInfo::OnSourcesKillfocus(){
	
}*/
long CRPTAssetGeneralInfo::OnSourcesLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSources.IsSearchKey() && !m_szSourcesKey.IsEmpty()){
		szWhere.Format(_T(" WHERE fase_id='%s' "), m_szSourcesKey);
	}
	m_wndSources.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fase_id AS id, fase_desc AS description FROM fam_sources WHERE fase_org_id = '%s' %s ORDER BY fase_id"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSources.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTAssetGeneralInfo::OnSourcesAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetGeneralInfo::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	int nIndex = 1;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 12);
	xls.SetColumnWidth(2, 18);
	xls.SetColumnWidth(3, 28);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 12);
	xls.SetColumnWidth(10, 8);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\xCAN TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 5, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 5, _T("S\x1ED1 phi\x1EBFu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 3, _T("\x42\x1EA2NG K\xCA TH\xD4NG TIN \x43HUNG T\xC0I S\x1EA2N \x43\x1ED0 \x110\x1ECANH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	if(!m_szSourcesKey.IsEmpty())
	{
		xls.SetCellText(2, 4, _T("Th\x65o ngu\x1ED3n v\x1ED1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	}
	xls.SetCellText(2, 5, _T("M\xE3 t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 5, _T("T\xEAn t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 5, _T("Model"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 5, _T("Serial"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 5, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 5, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 5, _T("Ngu\x1ED3n v\x1ED1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 5, _T("Lo\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);

	xls.SetMerge(0, 0, 0, 2);
	xls.SetMerge(1, 1, 0, 2);
	xls.SetMerge(3, 3, 2, 6);
	xls.SetMerge(4, 4, 2, 6);

	if(!m_szSourcesKey.IsEmpty())
	{
		szWhere.Format(_T(" and st_source = '%s'"), m_szSourcesKey);
	}
	szSQL.Format(_T("	select st_orderno,stl_item_id, fal_assetname, stl_uom_id, stl_qtyorder, stl_unitprice, fal_model, stl_seri, ") \
					_T( " (select fase_desc from fam_sources where  fase_id = st_source) as fsource, fal_type ") \
					_T(" from storage_transactionline ") \
					_T(" left join storage_transaction ON(st_transaction_id = stl_transaction_id) ") \
					_T(" left join fam_asset_list ON(fal_assetno = stl_item_id) ") \
					_T(" where st_source is not null and st_orderdate between TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') %s"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF()){
	tmpStr.Format(_T("%d"), nIndex);
	xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);

	rs.GetValue(_T("st_orderno"), tmpStr);
	xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("stl_item_id"), tmpStr);
	xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("fal_assetname"), tmpStr);
	xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("fal_model"), tmpStr);
	xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("stl_seri"), tmpStr);
	xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("stl_uom_id"), tmpStr);
	xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("stl_qtyorder"), tmpStr);
	xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("stl_unitprice"), tmpStr);
	xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1);
	rs.GetValue(_T("fsource"), tmpStr);
	xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
	rs.GetValue(_T("fal_type"), tmpStr);
	xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
	nRow++;
	rs.MoveNext();
	nIndex++;
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\bangketscd.xls"));
} 
void CRPTAssetGeneralInfo::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRPTAssetGeneralInfo::OnAddRPTAssetGeneralInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTAssetGeneralInfo::OnEditRPTAssetGeneralInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTAssetGeneralInfo::OnDeleteRPTAssetGeneralInfo(){
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
 		OnCancelRPTAssetGeneralInfo();
 	}
	return 0;
}
int CRPTAssetGeneralInfo::OnSaveRPTAssetGeneralInfo(){
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
 		//OnRPTAssetGeneralInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTAssetGeneralInfo::OnCancelRPTAssetGeneralInfo(){
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
int CRPTAssetGeneralInfo::OnRPTAssetGeneralInfoListLoadData(){
	return 0;
}
