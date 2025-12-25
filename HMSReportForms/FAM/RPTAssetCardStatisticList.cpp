#include "stdafx.h"
#include "RPTAssetCardStatisticList.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetCardStatisticList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnTypeAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTAssetCardStatisticList *pVw = (CRPTAssetCardStatisticList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTAssetCardStatisticList *pVw = (CRPTAssetCardStatisticList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetCardStatisticList* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnVendorAddNew();
}*/
static void _OnMfgCountrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetCardStatisticList* )pWnd)->OnMfgCountrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgCountrySelendokFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnMfgCountrySelendok();
}
/*static void _OnMfgCountrySetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnMfgCountryKillfocus();
}*/
/*static void _OnMfgCountryKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnMfgCountryKillfocus();
}*/
static long _OnMfgCountryLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnMfgCountryLoadData();
}
/*static void _OnMfgCountryAddNewFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnMfgCountryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetCardStatisticList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnAssetNoChangeFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnAssetNoChange();
} */
/*static void _OnAssetNoSetfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnAssetNoSetfocus();} */ 
/*static void _OnAssetNoKillfocusFnc(CWnd *pWnd){
	((CRPTAssetCardStatisticList *)pWnd)->OnAssetNoKillfocus();
} */
static int _OnAssetNoCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetCardStatisticList *)pWnd)->OnAssetNoCheckValue();
} 
static int _OnAddRPTAssetCardStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetCardStatisticList*)pWnd)->OnAddRPTAssetCardStatisticList();
} 
static int _OnEditRPTAssetCardStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetCardStatisticList*)pWnd)->OnEditRPTAssetCardStatisticList();
} 
static int _OnDeleteRPTAssetCardStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetCardStatisticList*)pWnd)->OnDeleteRPTAssetCardStatisticList();
} 
static int _OnSaveRPTAssetCardStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetCardStatisticList*)pWnd)->OnSaveRPTAssetCardStatisticList();
} 
static int _OnCancelRPTAssetCardStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetCardStatisticList*)pWnd)->OnCancelRPTAssetCardStatisticList();
} 
CRPTAssetCardStatisticList::CRPTAssetCardStatisticList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTAssetCardStatisticList::~CRPTAssetCardStatisticList(){
}
void CRPTAssetCardStatisticList::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information report"), 5, 5, 490, 151);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 350, 55);
	m_wndToDate.Create(this,355, 30, 485, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 110, 85);
	m_wndType.Create(this,115, 60, 485, 85); 
	m_wndExport.Create(this, _T("&Export"), 410, 158, 490, 183);
	m_wndPrint.Create(this, _T("&Print"), 325, 158, 405, 183);
	m_wndVendorLabel.Create(this, _T("Vendor"), 10, 90, 110, 115);
	m_wndVendor.Create(this,115, 90, 245, 115); 
	m_wndMfgCountryLabel.Create(this, _T("Mfg Country"), 250, 90, 350, 115);
	m_wndMfgCountry.Create(this,355, 90, 485, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 110, 145);
	m_wndDepartment.Create(this,115, 120, 245, 145); 
	m_wndAssetNoLabel.Create(this, _T("Asset No"), 250, 120, 350, 145);
	m_wndAssetNo.Create(this,355, 120, 485, 145); 

}
void CRPTAssetCardStatisticList::OnInitializeComponents(){
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
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndAssetNo.SetLimitText(1024);
	m_wndAssetNo.SetCheckValue(true);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndVendor.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndVendor.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndMfgCountry.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMfgCountry.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRPTAssetCardStatisticList::OnSetWindowEvents(){
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
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndAssetNo.SetEvent(WE_CHANGE, _OnAssetNoChangeFnc);
	//m_wndAssetNo.SetEvent(WE_SETFOCUS, _OnAssetNoSetfocusFnc);
	//m_wndAssetNo.SetEvent(WE_KILLFOCUS, _OnAssetNoKillfocusFnc);
	m_wndAssetNo.SetEvent(WE_CHECKVALUE, _OnAssetNoCheckValueFnc);
	SetMode(VM_EDIT);

}
void CRPTAssetCardStatisticList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndMfgCountry.GetDlgCtrlID(), m_szMfgCountryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndAssetNo.GetDlgCtrlID(), m_szAssetNo);

}
void CRPTAssetCardStatisticList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTAssetCardStatisticList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTAssetCardStatisticList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szVendorKey.Empty();
	m_szMfgCountryKey.Empty();
	m_szDepartmentKey.Empty();
	m_szAssetNo.Empty();

}
int CRPTAssetCardStatisticList::SetMode(int nMode){
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
/*void CRPTAssetCardStatisticList::OnFromDateChange(){
	
} */
/*void CRPTAssetCardStatisticList::OnFromDateSetfocus(){
	
} */
/*void CRPTAssetCardStatisticList::OnFromDateKillfocus(){
	
} */
int CRPTAssetCardStatisticList::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTAssetCardStatisticList::OnToDateChange(){
	
} */
/*void CRPTAssetCardStatisticList::OnToDateSetfocus(){
	
} */
/*void CRPTAssetCardStatisticList::OnToDateKillfocus(){
	
} */
int CRPTAssetCardStatisticList::OnToDateCheckValue(){
	return 0;
} 
void CRPTAssetCardStatisticList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetCardStatisticList::OnTypeSelendok(){
	 
}
/*void CRPTAssetCardStatisticList::OnTypeSetfocus(){
	
}*/
/*void CRPTAssetCardStatisticList::OnTypeKillfocus(){
	
}*/
long CRPTAssetCardStatisticList::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(!m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T("fast_id = '%s'"), m_szTypeKey);
	}
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype ORDER BY fast_id %s"), szWhere);
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
/*void CRPTAssetCardStatisticList::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetCardStatisticList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	int nIndex = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 14);	xls.SetColumnWidth(2, 15);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 15);	xls.SetColumnWidth(6, 9);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 11);	xls.SetColumnWidth(10, 12);	xls.SetColumnWidth(11, 8);	xls.SetColumnWidth(12, 11);	xls.SetColumnWidth(13, 15);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\xCAN TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("TH\x1ED0NG K\xCA TH\x1EBA T\xC0I S\x1EA2N \x43\x1ED0 \x110\x1ECANH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("M\xE3 t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Mo\x64\x65l"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Serial"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Nh\xE0 \x63ung \x63\x1EA5p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Ngu\x1ED3n \x111i\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("\x44\xF2ng \x111i\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("\x43\xF4ng su\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("N\x103m s\x1EA3n \x78u\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("N\x1B0\x1EDB\x63 s\x1EA3n \x78u\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Ng\xE0y mu\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Ng\xE0y s\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("Nguy\xEAn gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(3, 3, 0, 12);	if(!m_szTypeKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_type = '%s' "), m_szTypeKey);	}	if(!m_szVendorKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_vendorid = '%s' "), m_szVendorKey);	}	if(!m_szMfgCountryKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_mfgid = '%s' "), m_szMfgCountryKey);	}	if(!m_szDepartmentKey.IsEmpty())	{	    szWhere.AppendFormat(_T(" and fa_department = '%s'"), m_szDepartmentKey);	}	if(!m_szAssetNo.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_assetno = '%s'"), m_szAssetNo);	}	szSQL.Format(_T(" SELECT fa_assetno, ") \
			_T("        fa_name, fa_model, fa_serial,") \
			_T("        (SELECT ss_desc ") \
			_T("         FROM   sys_sel ") \
			_T("         WHERE  ss_id = 'fam_uom' ") \
			_T("                AND ss_code = fa_unit) AS uom, ") \
			_T("        fa_type, ") \
			_T("        (SELECT famm_name ") \
			_T("         FROM   fam_manufacture ") \
			_T("         WHERE  famm_id = fa_mfgid)    AS mfg, ") \
			_T("        (SELECT fav_name ") \
			_T("         FROM   fam_vendor ") \
			_T("         WHERE  fav_id = fa_vendorid)  AS vendor, ") \
			_T("        fa_capacity, fa_power,") \
			_T("        fa_voltage, ") \
			_T("        fa_powercircuit, ") \
			_T("        fa_mfgdate, ") \
			_T("        fa_madein, ") \
			_T("        fa_purchasedate, ") \
			_T("        fa_useddate, ") \
			_T("        fa_purchaseprice ") \
			_T(" FROM   fam_asset ") \
			_T(" WHERE  fa_createddate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND fa_org_id = 'FAM' %s"), m_szFromDate, m_szToDate, szWhere);	rs.ExecSQL(szSQL);	nRow = 6;	nCol = 0;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nIndex++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_assetno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_name"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_model"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_serial"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("vendor"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_voltage"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_powercircuit"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_power"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_mfgdate"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_madein"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_purchasedate"), tmpStr);		xls.SetCellText(nCol+11, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("fa_useddate"), tmpStr);		xls.SetCellText(nCol+12, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("fa_purchaseprice"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\thongkethetscd.xls"));
} 
void CRPTAssetCardStatisticList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetCardStatisticList::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetCardStatisticList::OnVendorSelendok(){
	 
}
/*void CRPTAssetCardStatisticList::OnVendorSetfocus(){
	
}*/
/*void CRPTAssetCardStatisticList::OnVendorKillfocus(){
	
}*/
long CRPTAssetCardStatisticList::OnVendorLoadData(){
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
/*void CRPTAssetCardStatisticList::OnVendorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetCardStatisticList::OnMfgCountrySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetCardStatisticList::OnMfgCountrySelendok(){
	 
}
/*void CRPTAssetCardStatisticList::OnMfgCountrySetfocus(){
	
}*/
/*void CRPTAssetCardStatisticList::OnMfgCountryKillfocus(){
	
}*/
long CRPTAssetCardStatisticList::OnMfgCountryLoadData(){
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
/*void CRPTAssetCardStatisticList::OnMfgCountryAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetCardStatisticList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetCardStatisticList::OnDepartmentSelendok(){
	 
}
/*void CRPTAssetCardStatisticList::OnDepartmentSetfocus(){
	
}*/
/*void CRPTAssetCardStatisticList::OnDepartmentKillfocus(){
	
}*/
long CRPTAssetCardStatisticList::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTAssetCardStatisticList::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTAssetCardStatisticList::OnAssetNoChange(){
	
} */
/*void CRPTAssetCardStatisticList::OnAssetNoSetfocus(){
	
} */
/*void CRPTAssetCardStatisticList::OnAssetNoKillfocus(){
	
} */
int CRPTAssetCardStatisticList::OnAssetNoCheckValue(){
	return 0;
} 
int CRPTAssetCardStatisticList::OnAddRPTAssetCardStatisticList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTAssetCardStatisticList::OnEditRPTAssetCardStatisticList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTAssetCardStatisticList::OnDeleteRPTAssetCardStatisticList(){
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
 		OnCancelRPTAssetCardStatisticList();
 	}
	return 0;
}
int CRPTAssetCardStatisticList::OnSaveRPTAssetCardStatisticList(){
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
 		//OnRPTAssetCardStatisticListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTAssetCardStatisticList::OnCancelRPTAssetCardStatisticList(){
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
int CRPTAssetCardStatisticList::OnRPTAssetCardStatisticListListLoadData(){
	return 0;
}
