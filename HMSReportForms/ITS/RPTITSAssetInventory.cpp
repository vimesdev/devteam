#include "stdafx.h"
#include "RPTITSAssetInventory.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTITSAssetInventory* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CRPTITSAssetInventory *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnToDateSetfocus();} */ 
static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnToDateKillfocus();
} 
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTITSAssetInventory *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTITSAssetInventory* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTITSAssetInventory *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTITSAssetInventory *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTITSAssetInventory *pVw = (CRPTITSAssetInventory *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTITSAssetInventory *pVw = (CRPTITSAssetInventory *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnByDepartmentSelectFnc(CWnd *pWnd){
	 ((CRPTITSAssetInventory*)pWnd)->OnByDepartmentSelect();
}
static int _OnAddRPTITSAssetInventoryFnc(CWnd *pWnd){
	 return ((CRPTITSAssetInventory*)pWnd)->OnAddRPTITSAssetInventory();
} 
static int _OnEditRPTITSAssetInventoryFnc(CWnd *pWnd){
	 return ((CRPTITSAssetInventory*)pWnd)->OnEditRPTITSAssetInventory();
} 
static int _OnDeleteRPTITSAssetInventoryFnc(CWnd *pWnd){
	 return ((CRPTITSAssetInventory*)pWnd)->OnDeleteRPTITSAssetInventory();
} 
static int _OnSaveRPTITSAssetInventoryFnc(CWnd *pWnd){
	 return ((CRPTITSAssetInventory*)pWnd)->OnSaveRPTITSAssetInventory();
} 
static int _OnCancelRPTITSAssetInventoryFnc(CWnd *pWnd){
	 return ((CRPTITSAssetInventory*)pWnd)->OnCancelRPTITSAssetInventory();
} 
CRPTITSAssetInventory::CRPTITSAssetInventory(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTITSAssetInventory::~CRPTITSAssetInventory(){
}
void CRPTITSAssetInventory::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 430, 90);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 240, 30, 340, 55);
	m_wndReportPeriod.Create(this,345, 30, 425, 55); 
	m_wndToDateLabel.Create(this, _T("Inventory Date"), 10, 30, 110, 55);
	m_wndToDate.Create(this,115, 30, 235, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 425, 85); 
	m_wndExport.Create(this, _T("&Export"), 350, 95, 430, 120);
	m_wndPrint.Create(this, _T("Print"), 265, 95, 345, 120);
	m_wndByDepartment.Create(this, _T("By Department"), 115, 95, 235, 120);

}
void CRPTITSAssetInventory::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndToDate.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRPTITSAssetInventory::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndByDepartment.SetEvent(WE_CLICK, _OnByDepartmentSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTITSAssetInventory::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CRPTITSAssetInventory::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTITSAssetInventory::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTITSAssetInventory::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_bByDepartment=FALSE;

}
int CRPTITSAssetInventory::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szToDate = pMF->GetSysDate();
			m_wndReportPeriod.EnableWindow(FALSE);
			m_wndToDate.SetFocus();
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
void CRPTITSAssetInventory::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTITSAssetInventory::OnReportPeriodSelendok(){
	 
}
/*void CRPTITSAssetInventory::OnReportPeriodSetfocus(){
	
}*/
/*void CRPTITSAssetInventory::OnReportPeriodKillfocus(){
	
}*/
long CRPTITSAssetInventory::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndReportPeriod.IsSearchKey() && ToDouble(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToDouble(m_szReportPeriodKey));
	}
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTITSAssetInventory::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTITSAssetInventory::OnToDateChange(){
	
} */
/*void CRPTITSAssetInventory::OnToDateSetfocus(){
	
} */
void CRPTITSAssetInventory::OnToDateKillfocus(){
	
}
int CRPTITSAssetInventory::OnToDateCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szRes;
	szSQL.Format(_T("FAM_TAKE_LASTYEAR('%s')"), m_szToDate);
	szRes = pMF->ExecDML(szSQL);
	m_szLastYear = szRes;
	return 0;
} 
void CRPTITSAssetInventory::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	szDept = m_wndDepartment.GetCurrent(1);
} 
void CRPTITSAssetInventory::OnDepartmentSelendok(){
	 
}
/*void CRPTITSAssetInventory::OnDepartmentSetfocus(){
	
}*/
/*void CRPTITSAssetInventory::OnDepartmentKillfocus(){
	
}*/
long CRPTITSAssetInventory::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTITSAssetInventory::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTITSAssetInventory::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szNewLine, szOldLine;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nStt = 1;	double grpCost[20];
	double grpLine[20];
	double cost = 0;
	
	for (int i =0; i <= 20; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 25);	xls.SetColumnWidth(2, 5);	xls.SetColumnWidth(3, 5);	xls.SetColumnWidth(4, 5);	xls.SetColumnWidth(5, 5);	xls.SetColumnWidth(6, 4);	xls.SetColumnWidth(7, 5);	xls.SetColumnWidth(8, 4);	xls.SetColumnWidth(9, 5);	xls.SetColumnWidth(10, 3);	xls.SetColumnWidth(11, 3);	xls.SetColumnWidth(12, 3);	xls.SetColumnWidth(13, 4);	xls.SetColumnWidth(14, 4);	xls.SetColumnWidth(15, 4);	xls.SetColumnWidth(16, 5);	xls.SetColumnWidth(17, 5);	xls.SetColumnWidth(18, 4);	xls.SetColumnWidth(19, 8);	xls.SetCellText(0, 1, _T("\x42\x1EA2NG T\x1ED4NG H\x1EE2P KI\x1EC2M K\xCA TR\x41NG THI\x1EBET \x42\x1ECA \x43NTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("T\x1ED5ng ki\x1EC3m k\xEA \x30h ---"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 0, _T("\x42\x1EC6NH VI\x1EC6N \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(1, 4, _T("T\xEAn nh\xF3m tr\x61ng \x62\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\x1ED3n k\x1EF3 ki\x1EC3m k\xEA \x30h %s"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("T\x103ng trong k\x1EF3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Gi\x1EA3m trong k\x1EF3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("T\x1ED3n k\x1EF3 ki\x1EC3m k\xEA \x30h %%s"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 5, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("Ph\xE2n th\x65o m\x1EE5\x63 \x111\xED\x63h s\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 5, _T("\x43H,QL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 5, _T("VP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 5, _T("HL"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 5, _T("Kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("Ph\xE2n th\x65o \x63\x1EA5p \x63h\x1EA5t l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 5, _T("\x43\x1EA5p\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 5, _T("\x43\x1EA5p \x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(16, 5, _T("\x43\x1EA5p \x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 0, _T("M?u 02/KK-TBCNTT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(17, 3, _T("\x110VT: Tri\x1EC7u \x111\x1ED3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 5, _T("\x43\x1EA5p \x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 5, _T("\x43\x1EA5p \x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(19, 4, _T("Ghi \x63h\xFA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 0);	xls.SetMerge(1, 1, 0, 19);	xls.SetMerge(2, 2, 0, 19);	xls.SetMerge(4, 5, 0, 0);	xls.SetMerge(4, 5, 1, 1);	xls.SetMerge(4, 4, 2, 3);	xls.SetMerge(4, 4, 4, 5);	xls.SetMerge(4, 4, 6, 7);	xls.SetMerge(4, 4, 8, 9);	xls.SetMerge(4, 4, 10, 13);	xls.SetMerge(4, 4, 14, 18);	xls.SetMerge(0, 0, 17, 19);	xls.SetMerge(3, 3, 17, 19);	xls.SetMerge(4, 5, 19, 19);	szSQL.Format(_T("SELECT fil_name, STORAGE_GET_UOMNAME(si_uom_id) as uomid, fi_note, fil_dept,") \
					_T("	sum(cap1+cap2+cap3+cap4+cap5) as tonkknow, ") \
					_T("	sum(CHQL) as CHQL, ") \
					_T("	sum(VP) as VP, ") \
					_T("	sum(HL) as HL, ") \
					_T("	sum(Khac) as Khac, ") \
					_T("	sum(cap1) as cap1, ") \
					_T("	sum(cap2) as cap2, ") \
					_T("	sum(cap3) as cap3, ") \
					_T("	sum(cap4) as cap4, ") \
					_T("	sum(cap5) as cap5, ") \
					_T("	sum(c1+c2+c3+c4+c5) as tonkkpast ") \
					_T(" FROM ") \
					_T("( ") \
					_T("SELECT fl.fil_name, si_uom_id, fi_note, fil_dept,") \
					_T("	CASE WHEN si_intent = '1' THEN 1 ELSE 0 END AS CHQL, ") \
					_T("	CASE WHEN si_intent = '2' THEN 1 ELSE 0 END AS VP, ") \
					_T("	CASE WHEN si_intent = '3' THEN 1 ELSE 0 END AS HL, ") \
					_T("	CASE WHEN si_intent = '4' THEN 1 ELSE 0 END AS Khac, ") \
					_T("	CASE WHEN fil_qtylevel = 1 THEN 1 ELSE 0 END AS cap1, ") \
					_T("	CASE WHEN fil_qtylevel = 2 THEN 1 ELSE 0 END AS cap2, ") \
					_T("	CASE WHEN fil_qtylevel = 3 THEN 1 ELSE 0 END AS cap3, ") \
					_T("	CASE WHEN fil_qtylevel = 4 THEN 1 ELSE 0 END AS cap4, ") \
					_T("	CASE WHEN fil_qtylevel = 5 THEN 1 ELSE 0 END AS cap5, ") \
					_T("	c1,c2,c3,c4,c5 ") \
					_T(" FROM ") \
					_T("fam_invent_line fl ") \
					_T(" LEFT JOIN fam_invent ON(fi_orderno = fl.fil_orderno) ") \
					_T(" LEFT JOIN storage_item ON(si_item_id = fl.fil_assetno) ") \
					_T(" LEFT JOIN  (select case when fil_qtylevel = 1 then 1 else 0 end as c1, ") \
					_T("	case when fil_qtylevel = 2 then 1 else 0 end as c2, ") \
					_T("	case when fil_qtylevel = 3 then 1 else 0 end as c3, ") \
					_T("	case when fil_qtylevel = 4 then 1 else 0 end as c4, ") \
					_T("	case when fil_qtylevel = 5 then 1 else 0 end as c5, ") \
					_T("	fil_assetno, fil_name ") \
					_T("	from fam_invent_line ") \
					_T("	left join fam_invent ON(fi_orderno = fil_orderno) ") \
					_T("	where fi_inventdate between to_timestamp('%s 00:00:00', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') ") \
					_T("	and fi_org_id = 'ITS') tbl ON (tbl.fil_assetno = fl.fil_assetno) ") \
					_T(" WHERE fi_inventdate between to_timestamp('%s 00:00:00', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') ") \
					_T("	AND fi_org_id = 'ITS' ") \
					_T(")   ") \
					_T(" GROUP BY fil_name, si_uom_id, fi_note, fil_dept, c1,c2,c3,c4,c5 ") \
					_T(" ORDER BY fil_name "), m_szLastYear, m_szLastYear, m_szToDate, m_szToDate);	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	double kkpast = 0, kknow = 0;	while(!rs.IsEOF()){		if(m_bByDepartment == TRUE)		{			rs.GetValue(_T("fil_dept"), szNewLine);			if(szNewLine != szOldLine)			{				xls.SetMerge(nRow, nRow, 0, 19);				xls.SetCellText(nCol, nRow, szNewLine, FMT_TEXT|FMT_CENTER, true, 10);				szOldLine = szNewLine;				nRow++;			}		}		tmpStr.Format(_T("%d"), nStt++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fil_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("tonkkpast"), cost);		grpCost[2] += cost;		grpLine[2] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		kkpast = ToDouble(rs.GetValue(_T("tonkkpast")));		kknow = ToDouble(rs.GetValue(_T("tonkknow")));		if(kknow > kkpast)		{				cost = kknow - kkpast;			grpCost[4] += cost;			grpLine[4] += cost;			tmpStr.Format(_T("%.0f"), cost);			xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);			rs.GetValue(_T(""), tmpStr);			xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		}		else if(kknow < kkpast)		{			cost = kknow - kkpast;			grpCost[6] += cost;			grpLine[6] += cost;			tmpStr.Format(_T("%.0f"), cost);			xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);			rs.GetValue(_T(""), tmpStr);			xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		}		else		{			xls.SetCellText(nCol+4, nRow, _T("0"), FMT_TEXT);			xls.SetCellText(nCol+5, nRow, _T("0"), FMT_TEXT);			xls.SetCellText(nCol+6, nRow, _T("0"), FMT_TEXT);			xls.SetCellText(nCol+7, nRow, _T("0"), FMT_TEXT);		}				rs.GetValue(_T("tonkknow"), cost);		grpCost[8] += cost;		grpLine[8] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("CHQL"), cost);		grpCost[10] += cost;		grpLine[10] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("VP"), cost);		grpCost[11] += cost;		grpLine[11] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HL"), cost);		grpCost[12] += cost;		grpLine[12] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("Khac"), cost);		grpCost[13] += cost;		grpLine[13] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cap1"), cost);		grpCost[14] += cost;		grpLine[14] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cap2"), cost);		grpCost[15] += cost;		grpLine[15] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cap3"), cost);		grpCost[16] += cost;		grpLine[16] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cap4"), cost);		grpCost[17] += cost;		grpLine[17] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("cap5"), cost);		grpCost[18] += cost;		grpLine[18] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	if (grpLine[2] > 0)
		{
			nRow++;
			CString szField, szAmount;
			TranslateString(_T("T\x1ED5ng \x63\x1ED9ng:"), szAmount);
			tmpStr.Format(_T("%s"), szAmount);
			//xls.SetCellMergedColumns(1,nRow,10);
			xls.SetCellText(1, nRow, tmpStr, FMT_TEXT, true);
			for (int i = 2; i <= 20; i++)
			{				
				tmpStr.Format(_T("%.2Lf"), grpLine[i]);
				xls.SetCellText(i, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER, true);
			}	
		}	nRow++;	EndWaitCursor();	if(m_bByDepartment == FALSE)	{		xls.Save(_T("Exports\\BangTHKKtrangthietbiCNTT.xls"));
	}else
		xls.Save(_T("Exports\\BangTHKKtrangthietbiCNTTtheokhoa.xls"));
} 
void CRPTITSAssetInventory::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CRPTITSAssetInventory::OnByDepartmentSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(m_bByDepartment == FALSE)
	{
		m_bByDepartment = TRUE;
	}else
	{
		m_bByDepartment = FALSE;
	}
	
}
int CRPTITSAssetInventory::OnAddRPTITSAssetInventory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTITSAssetInventory::OnEditRPTITSAssetInventory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTITSAssetInventory::OnDeleteRPTITSAssetInventory(){
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
 		OnCancelRPTITSAssetInventory();
 	}
	return 0;
}
int CRPTITSAssetInventory::OnSaveRPTITSAssetInventory(){
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
 		//OnRPTITSAssetInventoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTITSAssetInventory::OnCancelRPTITSAssetInventory(){
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
int CRPTITSAssetInventory::OnRPTITSAssetInventoryListLoadData(){
	return 0;
}
