#include "stdafx.h"
#include "RPTAssetStatisticList.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetStatisticList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetStatisticList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetStatisticList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetStatisticList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnTypeAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTAssetStatisticList *pVw = (CRPTAssetStatisticList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTAssetStatisticList *pVw = (CRPTAssetStatisticList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetStatisticList* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetStatisticList *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnVendorAddNew();
}*/
static void _OnMfgCountrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetStatisticList* )pWnd)->OnMfgCountrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgCountrySelendokFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnMfgCountrySelendok();
}
/*static void _OnMfgCountrySetfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnMfgCountryKillfocus();
}*/
/*static void _OnMfgCountryKillfocusFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnMfgCountryKillfocus();
}*/
static long _OnMfgCountryLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetStatisticList *)pWnd)->OnMfgCountryLoadData();
}
/*static void _OnMfgCountryAddNewFnc(CWnd *pWnd){
	((CRPTAssetStatisticList *)pWnd)->OnMfgCountryAddNew();
}*/
static int _OnAddRPTAssetStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetStatisticList*)pWnd)->OnAddRPTAssetStatisticList();
} 
static int _OnEditRPTAssetStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetStatisticList*)pWnd)->OnEditRPTAssetStatisticList();
} 
static int _OnDeleteRPTAssetStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetStatisticList*)pWnd)->OnDeleteRPTAssetStatisticList();
} 
static int _OnSaveRPTAssetStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetStatisticList*)pWnd)->OnSaveRPTAssetStatisticList();
} 
static int _OnCancelRPTAssetStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetStatisticList*)pWnd)->OnCancelRPTAssetStatisticList();
} 
CRPTAssetStatisticList::CRPTAssetStatisticList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTAssetStatisticList::~CRPTAssetStatisticList(){
}
void CRPTAssetStatisticList::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information report"), 5, 5, 490, 120);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 350, 55);
	m_wndToDate.Create(this,355, 30, 485, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 110, 85);
	m_wndType.Create(this,115, 60, 485, 85); 
	m_wndExport.Create(this, _T("&Export"), 410, 125, 490, 150);
	m_wndPrint.Create(this, _T("&Print"), 325, 125, 405, 150);
	m_wndVendorLabel.Create(this, _T("Vendor"), 10, 90, 110, 115);
	m_wndVendor.Create(this,115, 90, 245, 115); 
	m_wndMfgCountryLabel.Create(this, _T("Mfg Country"), 250, 90, 350, 115);
	m_wndMfgCountry.Create(this,355, 90, 485, 115); 

}
void CRPTAssetStatisticList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndVendor.SetCheckValue(true);
	m_wndVendor.LimitText(1024);
	m_wndMfgCountry.SetCheckValue(true);
	m_wndMfgCountry.LimitText(1024);
	
	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVendor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndMfgCountry.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMfgCountry.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRPTAssetStatisticList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndVendor.SetEvent(WE_SELENDOK, _OnVendorSelendokFnc);
	//m_wndVendor.SetEvent(WE_SETFOCUS, _OnVendorSetfocusFnc);
	//m_wndVendor.SetEvent(WE_KILLFOCUS, _OnVendorKillfocusFnc);
	m_wndVendor.SetEvent(WE_SELCHANGE, _OnVendorSelectChangeFnc);
	m_wndVendor.SetEvent(WE_LOADDATA, _OnVendorLoadDataFnc);
	//m_wndVendor.SetEvent(WE_ADDNEW, _OnVendorAddNewFnc);
	m_wndMfgCountry.SetEvent(WE_SELENDOK, _OnMfgCountrySelendokFnc);
	//m_wndMfgCountry.SetEvent(WE_SETFOCUS, _OnMfgCountrySetfocusFnc);
	//m_wndMfgCountry.SetEvent(WE_KILLFOCUS, _OnMfgCountryKillfocusFnc);
	m_wndMfgCountry.SetEvent(WE_SELCHANGE, _OnMfgCountrySelectChangeFnc);
	m_wndMfgCountry.SetEvent(WE_LOADDATA, _OnMfgCountryLoadDataFnc);
	//m_wndMfgCountry.SetEvent(WE_ADDNEW, _OnMfgCountryAddNewFnc);
	SetMode(VM_EDIT);

}
void CRPTAssetStatisticList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndMfgCountry.GetDlgCtrlID(), m_szMfgCountryKey);

}
void CRPTAssetStatisticList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTAssetStatisticList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTAssetStatisticList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szVendorKey.Empty();
	m_szMfgCountryKey.Empty();

}
int CRPTAssetStatisticList::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00:00");
			m_szToDate = pMF->GetSysDateTime();
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
/*void CRPTAssetStatisticList::OnFromDateChange(){
	
} */
/*void CRPTAssetStatisticList::OnFromDateSetfocus(){
	
} */
/*void CRPTAssetStatisticList::OnFromDateKillfocus(){
	
} */
int CRPTAssetStatisticList::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTAssetStatisticList::OnToDateChange(){
	
} */
/*void CRPTAssetStatisticList::OnToDateSetfocus(){
	
} */
/*void CRPTAssetStatisticList::OnToDateKillfocus(){
	
} */
int CRPTAssetStatisticList::OnToDateCheckValue(){
	return 0;
} 
void CRPTAssetStatisticList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetStatisticList::OnTypeSelendok(){
	 
}
/*void CRPTAssetStatisticList::OnTypeSetfocus(){
	
}*/
/*void CRPTAssetStatisticList::OnTypeKillfocus(){
	
}*/
long CRPTAssetStatisticList::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(!m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND fast_id = '%s'"), m_szTypeKey);
	}
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' ORDER BY fast_id %s"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndType.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTAssetStatisticList::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetStatisticList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIndex = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 14);	xls.SetColumnWidth(2, 11);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 15);	xls.SetColumnWidth(7, 16);	xls.SetColumnWidth(8, 8);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\xCAN TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("TH\x1ED0NG K\xCA \x44\x41NH M\x1EE4\x43 T\xC0I S\x1EA2N \x43\x1ED0 \x110\x1ECANH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("M\xE3 t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Lo\x1EA1i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Nh\xE0 \x63ung \x63\x1EA5p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Nh\xE0 s\x1EA3n \x78u\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(3, 3, 0, 7);	if(!m_szTypeKey.IsEmpty())	{		szWhere.AppendFormat(_T(" fal_type = '%s' "), m_szTypeKey);	}	if(!m_szVendorKey.IsEmpty())	{		szWhere.AppendFormat(_T(" fal_vendorid = '%s' "), m_szVendorKey);	}	if(!m_szMfgCountryKey.IsEmpty())	{		szWhere.AppendFormat(_T(" fal_mfgid = '%s' "), m_szMfgCountryKey);	}	
		szSQL.Format(_T(" SELECT fal_assetno, ") \
			_T("        fal_assetname, ") \
			_T("        fal_type, fal_purchaseprice,") \
			_T("        (SELECT ss_desc ") \
			_T("         FROM   sys_sel ") \
			_T("         WHERE  ss_id = 'fam_uom' ") \
			_T("                AND ss_code = fal_unit) AS uom, ") \
			_T("        (SELECT famm_name ") \
			_T("         FROM   fam_manufacture ") \
			_T("         WHERE  famm_id = fal_mfgid)    AS mfg, ") \
			_T("        (SELECT fav_name ") \
			_T("         FROM   fam_vendor ") \
			_T("         WHERE  fav_id = fal_vendorid)  AS vendor ") \
			_T(" FROM   fam_asset_list ") \
			_T(" WHERE  fal_createddate BETWEEN to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s','YYYY/MM/DD HH24:MI:SS') AND fal_org_id = '%s' %s"), m_szFromDate, m_szToDate, pMF->GetModuleID(),szWhere);
	rs.ExecSQL(szSQL);	nRow = 6;	nCol = 0;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nIndex++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fal_assetno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fal_assetname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("uom"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fal_purchaseprice"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_NUMBER1);		rs.GetValue(_T("fal_type"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mfg"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("vendor"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\danhmuctscd.xls"));
} 
void CRPTAssetStatisticList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetStatisticList::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetStatisticList::OnVendorSelendok(){
	 
}
/*void CRPTAssetStatisticList::OnVendorSetfocus(){
	
}*/
/*void CRPTAssetStatisticList::OnVendorKillfocus(){
	
}*/
long CRPTAssetStatisticList::OnVendorLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndVendor.IsSearchKey() && !m_szVendorKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fav_id='%s' "), m_szVendorKey);
	}
	m_wndVendor.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fav_id AS id, fav_name AS name FROM fam_vendor %s ORDER BY fav_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndVendor.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTAssetStatisticList::OnVendorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetStatisticList::OnMfgCountrySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetStatisticList::OnMfgCountrySelendok(){
	 
}
/*void CRPTAssetStatisticList::OnMfgCountrySetfocus(){
	
}*/
/*void CRPTAssetStatisticList::OnMfgCountryKillfocus(){
	
}*/
long CRPTAssetStatisticList::OnMfgCountryLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndMfgCountry.IsSearchKey() && !m_szMfgCountryKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE sc_id='%s' "), m_szMfgCountryKey);
	}
	m_wndMfgCountry.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sc_id AS id, sc_name AS name FROM sys_country %s ORDER BY sc_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndMfgCountry.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	//UpdateData(TRUE);
	return nCount;
}
/*void CRPTAssetStatisticList::OnMfgCountryAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CRPTAssetStatisticList::OnAddRPTAssetStatisticList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTAssetStatisticList::OnEditRPTAssetStatisticList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTAssetStatisticList::OnDeleteRPTAssetStatisticList(){
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
 		OnCancelRPTAssetStatisticList();
 	}
	return 0;
}
int CRPTAssetStatisticList::OnSaveRPTAssetStatisticList(){
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
 		//OnRPTAssetStatisticListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTAssetStatisticList::OnCancelRPTAssetStatisticList(){
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
int CRPTAssetStatisticList::OnRPTAssetStatisticListListLoadData(){
	return 0;
}
