#include "CBCDANHSACHBENHNHANCHUYENKHOA.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANCHUYENKHOA *pVw = (CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCBCDANHSACHBENHNHANCHUYENKHOA *pVw = (CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANCHUYENKHOA* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANCHUYENKHOA* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCBCDANHSACHBENHNHANCHUYENKHOA* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CCBCDANHSACHBENHNHANCHUYENKHOA *)pWnd)->OnRankAddNew();
}*/
static int _OnAddCBCDANHSACHBENHNHANCHUYENKHOAFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnAddCBCDANHSACHBENHNHANCHUYENKHOA();
} 
static int _OnEditCBCDANHSACHBENHNHANCHUYENKHOAFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnEditCBCDANHSACHBENHNHANCHUYENKHOA();
} 
static int _OnDeleteCBCDANHSACHBENHNHANCHUYENKHOAFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnDeleteCBCDANHSACHBENHNHANCHUYENKHOA();
} 
static int _OnSaveCBCDANHSACHBENHNHANCHUYENKHOAFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnSaveCBCDANHSACHBENHNHANCHUYENKHOA();
} 
static int _OnCancelCBCDANHSACHBENHNHANCHUYENKHOAFnc(CWnd *pWnd){
	 return ((CCBCDANHSACHBENHNHANCHUYENKHOA*)pWnd)->OnCancelCBCDANHSACHBENHNHANCHUYENKHOA();
} 
CCBCDANHSACHBENHNHANCHUYENKHOA::CCBCDANHSACHBENHNHANCHUYENKHOA(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCBCDANHSACHBENHNHANCHUYENKHOA::~CCBCDANHSACHBENHNHANCHUYENKHOA(){
}
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 89);
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 29, 81, 54);
	m_wndFromDate.Create(this,85, 29, 195, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 197, 29, 277, 54);
	m_wndToDate.Create(this,282, 29, 392, 54); 
	m_wndLoad.Create(this, _T("&Load"), 622, 29, 706, 83);
	m_wndPrint.Create(this, _T("&Print"), 709, 29, 787, 83);
	m_wndList.Create(this,5, 93, 1012, 615); 
	m_wndObjectLabel.Create(this, _T("Object"), 197, 58, 277, 83);
	m_wndObject.Create(this,282, 58, 618, 83); 
	m_wndDepartmentLab.Create(this, _T("Department"), 395, 29, 475, 54);
	m_wndDepartment.Create(this,480, 29, 618, 54); 
	m_wndRanklab.Create(this, _T("Rank"), 9, 58, 81, 83);
	m_wndRank.Create(this,84, 58, 194, 83); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("T\xEAn \x42\x1EC7nh Nh\xE2n"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("N\x103m sinh"), CFMT_DATE, 80);
	m_wndList.InsertColumn(3, _T("\x43\x1EA5p \x62\x1EAD\x63"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("\x110\x1A1n v\x1ECB"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("\x43h\x1EA5n \x111o\xE1n"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("V\xE0o kho\x61"), CFMT_TEXT, 80);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);









}
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);

}
void CCBCDANHSACHBENHNHANCHUYENKHOA::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCBCDANHSACHBENHNHANCHUYENKHOA::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCBCDANHSACHBENHNHANCHUYENKHOA::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();

}
int CCBCDANHSACHBENHNHANCHUYENKHOA::SetMode(int nMode){
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
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnFromDateChange(){
	
} */
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnFromDateSetfocus(){
	
} */
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnFromDateKillfocus(){
	
} */
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnFromDateCheckValue(){
	return 0;
} 
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnToDateChange(){
	
} */
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnToDateSetfocus(){
	
} */
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnToDateKillfocus(){
	
} */
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnToDateCheckValue(){
	return 0;
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\DANHSACHCANBOCAOCAPCHUYENKHOA.RPT")))
		return;
	szSQL = GetQueryString();
	int ret =0;
	ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (ret <=0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	int nIdx=0;
	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);
		//tenbenhnhan
		rs.GetValue(_T("hovaten"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//namsinh
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//capbac
		rs.GetValue(_T("CAPBAC"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//donvi
		rs.GetValue(_T("HP_WORKPLACE"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//chandoan
		rs.GetValue(_T("HD_DIAGNOSTIC"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//doituong
		rs.GetValue(_T("DOITUONG"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//vaokhoa
		rs.GetValue(_T("htr_deptid"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnListDblClick(){
	
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCBCDANHSACHBENHNHANCHUYENKHOA::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("hovaten")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("CAPBAC")), 
			rs.GetValue(_T("HP_WORKPLACE")), 
			rs.GetValue(_T("HD_DIAGNOSTIC")), 
			rs.GetValue(_T("DOITUONG")), 
			rs.GetValue(_T("htr_deptid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnObjectSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnObjectSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnObjectKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANCHUYENKHOA::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		//szWhere.Format();
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as description FROM hms_object ORDER BY cast(id as integer)"));
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnDepartmentSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnDepartmentSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnDepartmentKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANCHUYENKHOA::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type = 'DT' order by id"), szWhere);
	_fmsg(_T("%s"),szSQL);
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
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCBCDANHSACHBENHNHANCHUYENKHOA::OnRankSelendok(){
	 
}
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnRankSetfocus(){
	
}*/
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnRankKillfocus(){
	
}*/
long CCBCDANHSACHBENHNHANCHUYENKHOA::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndRank.DeleteAllItems(); 
	szSQL.Format(_T("SELECT ss_code id,ss_desc name FROM sys_sel WHERE ss_id='hms_rank' and ss_code >12"), szWhere);
	_fmsg(_T("%s"),szSQL);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRank.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCBCDANHSACHBENHNHANCHUYENKHOA::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnAddCBCDANHSACHBENHNHANCHUYENKHOA(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnEditCBCDANHSACHBENHNHANCHUYENKHOA(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnDeleteCBCDANHSACHBENHNHANCHUYENKHOA(){
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
 		OnCancelCBCDANHSACHBENHNHANCHUYENKHOA();
 	}
	return 0;
}
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnSaveCBCDANHSACHBENHNHANCHUYENKHOA(){
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
 		//OnCBCDANHSACHBENHNHANCHUYENKHOAListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnCancelCBCDANHSACHBENHNHANCHUYENKHOA(){
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
int CCBCDANHSACHBENHNHANCHUYENKHOA::OnCBCDANHSACHBENHNHANCHUYENKHOAListLoadData(){
	return 0;
}
CString CCBCDANHSACHBENHNHANCHUYENKHOA::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s' )"), m_szDepartmentKey, m_szDepartmentKey);
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);
	szWhere.AppendFormat(_T(" AND ( htr_suggestion ='M') AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT * ") \
_T(" FROM(SELECT 1 typeid,hd_docno,") \
_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS hovaten,") \
_T("        extract(YEAR FROM hp_birthdate)       AS age,") \
_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as capbac,") \
_T("        hp_workplace,") \
_T("        hd_diagnostic,") \
_T("        hms_getobjectname(hd_object) AS doituong,") \
_T("        trunc_date(htr_admitdate) AS admitdate,") \
_T("        htr_deptid") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE  1=1 %s %s %s %s)") \
_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere);
	return szSQL;
}