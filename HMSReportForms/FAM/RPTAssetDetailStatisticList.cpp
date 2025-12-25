#include "stdafx.h"
#include "RPTAssetDetailStatisticList.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetDetailStatisticList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnTypeAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTAssetDetailStatisticList *pVw = (CRPTAssetDetailStatisticList *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTAssetDetailStatisticList *pVw = (CRPTAssetDetailStatisticList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnVendorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetDetailStatisticList* )pWnd)->OnVendorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorSelendokFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnVendorSelendok();
}
/*static void _OnVendorSetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnVendorKillfocus();
}*/
/*static void _OnVendorKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnVendorKillfocus();
}*/
static long _OnVendorLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnVendorLoadData();
}
/*static void _OnVendorAddNewFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnVendorAddNew();
}*/
static void _OnMfgCountrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetDetailStatisticList* )pWnd)->OnMfgCountrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMfgCountrySelendokFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnMfgCountrySelendok();
}
/*static void _OnMfgCountrySetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnMfgCountryKillfocus();
}*/
/*static void _OnMfgCountryKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnMfgCountryKillfocus();
}*/
static long _OnMfgCountryLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnMfgCountryLoadData();
}
/*static void _OnMfgCountryAddNewFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnMfgCountryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAssetDetailStatisticList* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnAssetNoChangeFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnAssetNoChange();
} */
/*static void _OnAssetNoSetfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnAssetNoSetfocus();} */ 
/*static void _OnAssetNoKillfocusFnc(CWnd *pWnd){
	((CRPTAssetDetailStatisticList *)pWnd)->OnAssetNoKillfocus();
} */
static int _OnAssetNoCheckValueFnc(CWnd *pWnd){
	return ((CRPTAssetDetailStatisticList *)pWnd)->OnAssetNoCheckValue();
} 
static int _OnAddRPTAssetDetailStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetDetailStatisticList*)pWnd)->OnAddRPTAssetDetailStatisticList();
} 
static int _OnEditRPTAssetDetailStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetDetailStatisticList*)pWnd)->OnEditRPTAssetDetailStatisticList();
} 
static int _OnDeleteRPTAssetDetailStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetDetailStatisticList*)pWnd)->OnDeleteRPTAssetDetailStatisticList();
} 
static int _OnSaveRPTAssetDetailStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetDetailStatisticList*)pWnd)->OnSaveRPTAssetDetailStatisticList();
} 
static int _OnCancelRPTAssetDetailStatisticListFnc(CWnd *pWnd){
	 return ((CRPTAssetDetailStatisticList*)pWnd)->OnCancelRPTAssetDetailStatisticList();
} 
CRPTAssetDetailStatisticList::CRPTAssetDetailStatisticList(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTAssetDetailStatisticList::~CRPTAssetDetailStatisticList(){
}
void CRPTAssetDetailStatisticList::OnCreateComponents(){
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
void CRPTAssetDetailStatisticList::OnInitializeComponents(){
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
void CRPTAssetDetailStatisticList::OnSetWindowEvents(){
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
void CRPTAssetDetailStatisticList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndVendor.GetDlgCtrlID(), m_szVendorKey);
	DDX_TextEx(pDX, m_wndMfgCountry.GetDlgCtrlID(), m_szMfgCountryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndAssetNo.GetDlgCtrlID(), m_szAssetNo);

}
void CRPTAssetDetailStatisticList::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTAssetDetailStatisticList::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTAssetDetailStatisticList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_szVendorKey.Empty();
	m_szMfgCountryKey.Empty();
	m_szDepartmentKey.Empty();
	m_szAssetNo.Empty();

}
int CRPTAssetDetailStatisticList::SetMode(int nMode){
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
/*void CRPTAssetDetailStatisticList::OnFromDateChange(){
	
} */
/*void CRPTAssetDetailStatisticList::OnFromDateSetfocus(){
	
} */
/*void CRPTAssetDetailStatisticList::OnFromDateKillfocus(){
	
} */
int CRPTAssetDetailStatisticList::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTAssetDetailStatisticList::OnToDateChange(){
	
} */
/*void CRPTAssetDetailStatisticList::OnToDateSetfocus(){
	
} */
/*void CRPTAssetDetailStatisticList::OnToDateKillfocus(){
	
} */
int CRPTAssetDetailStatisticList::OnToDateCheckValue(){
	return 0;
} 
void CRPTAssetDetailStatisticList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetDetailStatisticList::OnTypeSelendok(){
	 
}
/*void CRPTAssetDetailStatisticList::OnTypeSetfocus(){
	
}*/
/*void CRPTAssetDetailStatisticList::OnTypeKillfocus(){
	
}*/
long CRPTAssetDetailStatisticList::OnTypeLoadData(){
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
/*void CRPTAssetDetailStatisticList::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetDetailStatisticList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	int nIndex = 1;	xls.CreateSheet(1);	xls.SetWorksheet(0);		xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\xCAN TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("M\xE3 t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("T\xEAn t\xE0i s\x1EA3n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Mo\x64\x65l"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("S\x65i\x61l"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 3, _T("TH\x1ED0NG K\xCA \x43HI TI\x1EBET T\xC0I S\x1EA2N \x43\x1ED0 \x110\x1ECANH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("N\x1B0\x1EDB\x63 s\x1EA3n \x78u\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Nh\xE0 \x63ung \x63\x1EA5p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("H\xE3ng s\x1EA3n \x78u\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("N\x103m S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("Th\x1EDDi h\x1EA1n \x42H"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Nh\xF3m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("\x44\xF2ng \x111i\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("\x110i\x1EC7p \xE1p"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 4, _T("\x43\xF4ng su\x1EA5t"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(16, 4, _T("Ng\xE0y mu\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 4, _T("Ng\xE0y s\x1EED \x64\x1EE5ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 4, _T("Kho\x61 S\x44"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(19, 4, _T("Th\x1EDDi h\x1EA1n KH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(20, 4, _T("Gi\xE1 mu\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(3, 3, 5, 15);	if(!m_szTypeKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_type = '%s' "), m_szTypeKey);	}	if(!m_szVendorKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_vendorid = '%s' "), m_szVendorKey);	}	if(!m_szMfgCountryKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_mfgid = '%s' "), m_szMfgCountryKey);	}	if(!m_szDepartmentKey.IsEmpty())	{	    szWhere.AppendFormat(_T(" and fa_department = '%s'"), m_szDepartmentKey);	}	if(!m_szAssetNo.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_assetno = '%s'"), m_szAssetNo);	}	szSQL.Format(_T(" SELECT fa_assetno, ") \
				_T("        fa_name, ") \
				_T("        fa_model, ") \
				_T("        fa_serial, fa_category,") \
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
				_T("        fa_guaranteeduration           AS BH, ") \
				_T("        fa_quantity, ") \
				_T("        fa_purchasedate, ") \
				_T("        fa_department, ") \
				_T("        fa_capacity, fa_power,") \
				_T("        fa_voltage, ") \
				_T("        fa_powercircuit, ") \
				_T("        fa_mfgdate, ") \
				_T("        fa_madein, ") \
				_T("        fa_purchasedate, ") \
				_T("        fa_useddate, ") \
				_T("        fa_purchaseprice, fa_deprtime ") \
				_T(" FROM   fam_asset ") \
				_T(" WHERE  fa_createddate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND fa_org_id = 'FAM' %s"), m_szFromDate, m_szToDate, szWhere);
	rs.ExecSQL(szSQL);	nRow = 6;	nCol = 0;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nIndex++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_assetno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_name"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_model"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_serial"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_madein"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("vendor"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("mfg"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_mfgdate"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("BH"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_quantity"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("uom"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_category"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_powercircuit"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_voltage"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_power"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_purchasedate"), tmpStr);		xls.SetCellText(nCol+16, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("fa_useddate"), tmpStr);		xls.SetCellText(nCol+17, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy), FMT_TEXT);		rs.GetValue(_T("fa_department"), tmpStr);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_deprtime"), tmpStr);		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_purchaseprice"), tmpStr);		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\thongkechitiettscd.xls"));
} 
void CRPTAssetDetailStatisticList::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetDetailStatisticList::OnVendorSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetDetailStatisticList::OnVendorSelendok(){
	 
}
/*void CRPTAssetDetailStatisticList::OnVendorSetfocus(){
	
}*/
/*void CRPTAssetDetailStatisticList::OnVendorKillfocus(){
	
}*/
long CRPTAssetDetailStatisticList::OnVendorLoadData(){
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
/*void CRPTAssetDetailStatisticList::OnVendorAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetDetailStatisticList::OnMfgCountrySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetDetailStatisticList::OnMfgCountrySelendok(){
	 
}
/*void CRPTAssetDetailStatisticList::OnMfgCountrySetfocus(){
	
}*/
/*void CRPTAssetDetailStatisticList::OnMfgCountryKillfocus(){
	
}*/
long CRPTAssetDetailStatisticList::OnMfgCountryLoadData(){
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
/*void CRPTAssetDetailStatisticList::OnMfgCountryAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAssetDetailStatisticList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAssetDetailStatisticList::OnDepartmentSelendok(){
	 
}
/*void CRPTAssetDetailStatisticList::OnDepartmentSetfocus(){
	
}*/
/*void CRPTAssetDetailStatisticList::OnDepartmentKillfocus(){
	
}*/
long CRPTAssetDetailStatisticList::OnDepartmentLoadData(){
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
/*void CRPTAssetDetailStatisticList::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CRPTAssetDetailStatisticList::OnAssetNoChange(){
	
} */
/*void CRPTAssetDetailStatisticList::OnAssetNoSetfocus(){
	
} */
/*void CRPTAssetDetailStatisticList::OnAssetNoKillfocus(){
	
} */
int CRPTAssetDetailStatisticList::OnAssetNoCheckValue(){
	return 0;
} 
int CRPTAssetDetailStatisticList::OnAddRPTAssetDetailStatisticList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTAssetDetailStatisticList::OnEditRPTAssetDetailStatisticList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTAssetDetailStatisticList::OnDeleteRPTAssetDetailStatisticList(){
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
 		OnCancelRPTAssetDetailStatisticList();
 	}
	return 0;
}
int CRPTAssetDetailStatisticList::OnSaveRPTAssetDetailStatisticList(){
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
 		//OnRPTAssetDetailStatisticListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTAssetDetailStatisticList::OnCancelRPTAssetDetailStatisticList(){
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
int CRPTAssetDetailStatisticList::OnRPTAssetDetailStatisticListListLoadData(){
	return 0;
}
