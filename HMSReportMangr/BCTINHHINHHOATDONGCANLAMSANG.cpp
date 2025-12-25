#include "BCTINHHINHHOATDONGCANLAMSANG.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHHOATDONGCANLAMSANG *pVw = (CBCTINHHINHHOATDONGCANLAMSANG *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTINHHINHHOATDONGCANLAMSANG *pVw = (CBCTINHHINHHOATDONGCANLAMSANG *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTINHHINHHOATDONGCANLAMSANG* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTINHHINHHOATDONGCANLAMSANG *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnOutPatientSelect();
}
static int _OnAddBCTINHHINHHOATDONGCANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnAddBCTINHHINHHOATDONGCANLAMSANG();
} 
static int _OnEditBCTINHHINHHOATDONGCANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnEditBCTINHHINHHOATDONGCANLAMSANG();
} 
static int _OnDeleteBCTINHHINHHOATDONGCANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnDeleteBCTINHHINHHOATDONGCANLAMSANG();
} 
static int _OnSaveBCTINHHINHHOATDONGCANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnSaveBCTINHHINHHOATDONGCANLAMSANG();
} 
static int _OnCancelBCTINHHINHHOATDONGCANLAMSANGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHHOATDONGCANLAMSANG*)pWnd)->OnCancelBCTINHHINHHOATDONGCANLAMSANG();
} 
CBCTINHHINHHOATDONGCANLAMSANG::CBCTINHHINHHOATDONGCANLAMSANG(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHHOATDONGCANLAMSANG::~CBCTINHHINHHOATDONGCANLAMSANG(){
}
void CBCTINHHINHHOATDONGCANLAMSANG::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1014, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 204, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 206, 30, 286, 55);
	m_wndToDate.Create(this,291, 30, 399, 55); 
	m_wndLoad.Create(this, _T("&Load"), 819, 30, 913, 55);
	m_wndExport.Create(this, _T("&Export"), 917, 30, 1001, 55);
	m_wndList.Create(this,5, 64, 1014, 614); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 589, 30, 669, 55);
	m_wndDepartment.Create(this,674, 30, 814, 55); 
	m_wndInPatient.Create(this, _T("InPatient"), 409, 30, 489, 55);
	m_wndOutPatient.Create(this, _T("OutPatient"), 501, 30, 581, 55);
	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("KHOA"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("S\x1ED1 Ng\x1B0\x1EDDi"), CFMT_NUMBER, 200);
	m_wndList.InsertColumn(3, _T("S\x1ED1 L\x1EA7n"), CFMT_NUMBER, 200);

}
void CBCTINHHINHHOATDONGCANLAMSANG::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);




	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CBCTINHHINHHOATDONGCANLAMSANG::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCTINHHINHHOATDONGCANLAMSANG::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CBCTINHHINHHOATDONGCANLAMSANG::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHHOATDONGCANLAMSANG::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHHOATDONGCANLAMSANG::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nInPatient=0;
	m_nOutPatient=1;

}
int CBCTINHHINHHOATDONGCANLAMSANG::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnFromDateChange(){
	
} */
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHHOATDONGCANLAMSANG::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnToDateChange(){
	
} */
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnToDateKillfocus(){
	
} */
int CBCTINHHINHHOATDONGCANLAMSANG::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHHOATDONGCANLAMSANG::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHHOATDONGCANLAMSANG::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt; 
	CRecord rs(&pMF->m_db); 
	UpdateData(true);
	CExcel xls; 
	int nCol = 0; 
	int nRow = 7; 
	CString szSQL, tmpStr;
	xls.CreateSheet(1); 
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 38);
	xls.SetColumnWidth(1, 30);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 8);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 18);
	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("T\xCCNH H\xCCNH HO\x1EA0T \x110\x1ED8NG \x43\x1EACN L\xC2M S\xC0NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, false, 11);
	xls.SetCellText(0, 6, _T("KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 6, _T("S\x1ED1 ng\x1B0\x1EDDi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 6, _T("S\x1ED1 l\x1EA7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetMerge(0, 0, 0, 0);
	xls.SetMerge(3, 3, 0, 2);
	xls.SetMerge(4, 4, 0, 2);
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("KHOA"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("SONGUOI"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("SOLAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		
		nRow++; 
		rs.MoveNext();	
	}
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("KHOA"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("SONGUOI"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("SOLAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		
		nRow++; 
		rs.MoveNext();	
	}
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("KHOA"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("SONGUOI"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("SOLAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		
		nRow++; 
		rs.MoveNext();	
	}
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("KHOA"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("SONGUOI"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("SOLAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		
		nRow++; 
		rs.MoveNext();	
	}
	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL); 
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("KHOA"), tmpStr);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT );

		rs.GetValue(_T("SONGUOI"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);

		rs.GetValue(_T("SOLAN"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER);
		
		nRow++; 
		rs.MoveNext();	
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\TINH HINH HOAT DONG CAN LAM SANG.xls"));
	
} 
void CBCTINHHINHHOATDONGCANLAMSANG::OnListDblClick(){
	
} 
void CBCTINHHINHHOATDONGCANLAMSANG::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTINHHINHHOATDONGCANLAMSANG::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHHOATDONGCANLAMSANG::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nIndex=1;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("SONGUOI")), 
			rs.GetValue(_T("SOLAN")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("SONGUOI")), 
			rs.GetValue(_T("SOLAN")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString2();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	while(!rs.IsEOF()){
		tmpStr.Format(_T(""));
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("SONGUOI")), 
			rs.GetValue(_T("SOLAN")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString3();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("SONGUOI")), 
			rs.GetValue(_T("SOLAN")),NULL);
		rs.MoveNext();
	}
	szSQL = GetQueryString4();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return 0;
	}
	while(!rs.IsEOF()){
		tmpStr.Format(_T(""));
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("KHOA")), 
			rs.GetValue(_T("SONGUOI")), 
			rs.GetValue(_T("SOLAN")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CBCTINHHINHHOATDONGCANLAMSANG::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHHOATDONGCANLAMSANG::OnDepartmentSelendok(){
	 
}
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnDepartmentSetfocus(){
	
}*/
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnDepartmentKillfocus(){
	
}*/
long CBCTINHHINHHOATDONGCANLAMSANG::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,szCondition;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	if (m_nInPatient == 0)
	{
		szCondition.Format(_T(" AND sd_type IN('DT') "));
	}
	else
	{
		szCondition.Format(_T(" AND sd_type IN('KB') "));
	}
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where 1=1 %s order by id"), szCondition);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCTINHHINHHOATDONGCANLAMSANG::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCTINHHINHHOATDONGCANLAMSANG::OnInPatientSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
void CBCTINHHINHHOATDONGCANLAMSANG::OnOutPatientSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
int CBCTINHHINHHOATDONGCANLAMSANG::OnAddBCTINHHINHHOATDONGCANLAMSANG(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHHOATDONGCANLAMSANG::OnEditBCTINHHINHHOATDONGCANLAMSANG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHHOATDONGCANLAMSANG::OnDeleteBCTINHHINHHOATDONGCANLAMSANG(){
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
 		OnCancelBCTINHHINHHOATDONGCANLAMSANG();
 	}
	return 0;
}
int CBCTINHHINHHOATDONGCANLAMSANG::OnSaveBCTINHHINHHOATDONGCANLAMSANG(){
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
 		//OnBCTINHHINHHOATDONGCANLAMSANGListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHHOATDONGCANLAMSANG::OnCancelBCTINHHINHHOATDONGCANLAMSANG(){
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
int CBCTINHHINHHOATDONGCANLAMSANG::OnBCTINHHINHHOATDONGCANLAMSANGListLoadData(){
	return 0;
}
CString CBCTINHHINHHOATDONGCANLAMSANG::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_DEPTID = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT (SELECT SD_NAME FROM SYS_DEPT WHERE SD_ID=HFL_DEPTID) KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID IN('C2','C3','C4','C14','C7','C17','A20') AND HPC_STATUS IN('S','T'))") \
_T(" GROUP BY HFL_DEPTID ORDER BY HFL_DEPTID DESC"),szWhere,szDept,szInOut);
	return szSQL;
}
CString CBCTINHHINHHOATDONGCANLAMSANG::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_DEPTID = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT 'Y h\x1ECD\x63 h\x1EA1t nh\xE2n \x41\x32\x30' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='A20' AND HPC_STATUS IN('S','T'))") \
_T(" GROUP BY HFL_DEPTID ORDER BY HFL_DEPTID DESC"),szWhere,szDept,szInOut);
	return szSQL;
}
CString CBCTINHHINHHOATDONGCANLAMSANG::GetQueryString2(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_DEPTID = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT 1 id,'- \x110i\x1EC1u tr\x1ECB Basedow' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='A20' AND HPC_STATUS IN('S','T') AND lower(hfl_name) like(chr(37)||lower('Basedow')||chr(37)))") \
_T(" UNION") \
_T(" SELECT 2 id,'- \x110i\x1EC1u tr\x1ECB K gi\xE1p' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='A20' AND HPC_STATUS IN('S','T') AND lower(hfl_name) like(chr(37)||lower('K gi\xE1p')||chr(37)))") \
_T(" UNION") \
_T(" SELECT 3 id,'- \x43h\x1EE5p PET/CT' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='A20' AND HPC_STATUS IN('S','T') AND lower(hfl_name) like(chr(37)||lower('PET/CT')||chr(37)))"),szWhere,szDept,szInOut,szWhere,szDept,szInOut,szWhere,szDept,szInOut);
	return szSQL;
}
CString CBCTINHHINHHOATDONGCANLAMSANG::GetQueryString3(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_DEPTID = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT '\x43h\x1EA5n \x111o\xE1n h\xECnh \x1EA3nh \x43\x38' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='C8' AND HPC_STATUS IN('S','T'))"),szWhere,szDept,szInOut);
	return szSQL;
}
CString CBCTINHHINHHOATDONGCANLAMSANG::GetQueryString4(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	if (m_nInPatient == 0)
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='I'" ));
	}
	else
	{
		szInOut.AppendFormat(_T(" AND HPC_CLASS='E'" ));
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_DEPTID = '%s'"), m_szDepartmentKey);
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN CAST_STRING2TIMESTAMP('%s') AND CAST_STRING2TIMESTAMP('%s')"), m_szFromDate,m_szToDate);
	szSQL.Format(_T(" SELECT 1 id,'- \x43h\x1EE5p' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='C8' AND SUBSTR(HPCL_ITEMID,1,3)='B21' AND HPC_STATUS IN('S','T'))") \
_T(" UNION") \
_T(" SELECT 2 id,'- CT Scanner' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='C8' AND SUBSTR(HPCL_ITEMID,1,3)='B22' AND HPC_STATUS IN('S','T'))") \
_T(" UNION") \
_T(" SELECT 3 id,'- MRI' KHOA,") \
_T("        COUNT(DISTINCT HPC_DOCNO) SONGUOI,") \
_T("        COUNT(DISTINCT HPCL_ORDERLINEID) SOLAN1,") \
_T("        SUM(HPCL_QTY) SOLAN") \
_T(" FROM(SELECT HFL_DEPTID,HPC_GROUPID,HFL_NAME,HPC_DOCNO,HPCL_ORDERLINEID,HPC_STATUS,HPC_ORDERID,HPCL_QTY") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPC_DOCNO=HPCL_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" LEFT JOIN HMS_FEE_LIST ON(HFL_GROUPID=HPC_GROUPID AND HFL_FEEID=HPCL_ITEMID)") \
_T(" WHERE 1=1 %s %s %s") \
_T("     AND HFL_DEPTID='C8' AND SUBSTR(HPCL_ITEMID,1,3)='B23' AND HPC_STATUS IN('S','T'))"),szWhere,szDept,szInOut,szWhere,szDept,szInOut,szWhere,szDept,szInOut);
	return szSQL;
}