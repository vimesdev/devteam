#include "PHANHEDIEUTRINOITRU.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CPHANHEDIEUTRINOITRU *pVw = (CPHANHEDIEUTRINOITRU *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd* pWnd){
	CPHANHEDIEUTRINOITRU *pVw = (CPHANHEDIEUTRINOITRU *)pWnd;
	pVw->OnExportSelect();	
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPHANHEDIEUTRINOITRU *pVw = (CPHANHEDIEUTRINOITRU *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPHANHEDIEUTRINOITRU*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPHANHEDIEUTRINOITRU* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPHANHEDIEUTRINOITRU* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPHANHEDIEUTRINOITRU* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankAddNew();
}*/
static void _OnCombinedTreatmentSelectFnc(CWnd *pWnd){
	 ((CPHANHEDIEUTRINOITRU*)pWnd)->OnCombinedTreatmentSelect();
}
static void _OnTreatingSelectFnc(CWnd *pWnd){
	  ((CPHANHEDIEUTRINOITRU*)pWnd)->OnTreatingSelect();
}
static void _OnDischargeDeptSelectFnc(CWnd *pWnd){
	  ((CPHANHEDIEUTRINOITRU*)pWnd)->OnDischargeDeptSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd){
	  ((CPHANHEDIEUTRINOITRU*)pWnd)->OnDischargedSelect();
}
static int _OnAddPHANHEDIEUTRINOITRUFnc(CWnd *pWnd){
	 return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnAddPHANHEDIEUTRINOITRU();
} 
static int _OnEditPHANHEDIEUTRINOITRUFnc(CWnd *pWnd){
	 return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnEditPHANHEDIEUTRINOITRU();
} 
static int _OnDeletePHANHEDIEUTRINOITRUFnc(CWnd *pWnd){
	 return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnDeletePHANHEDIEUTRINOITRU();
} 
static int _OnSavePHANHEDIEUTRINOITRUFnc(CWnd *pWnd){
	 return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnSavePHANHEDIEUTRINOITRU();
} 
static int _OnCancelPHANHEDIEUTRINOITRUFnc(CWnd *pWnd){
	 return ((CPHANHEDIEUTRINOITRU*)pWnd)->OnCancelPHANHEDIEUTRINOITRU();
} 
static void _OnRankIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPHANHEDIEUTRINOITRU* )pWnd)->OnRankIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankIDSelendokFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankIDSelendok();
}
/*static void _OnRankIDSetfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankIDKillfocus();
}*/
/*static void _OnRankIDKillfocusFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankIDKillfocus();
}*/
static long _OnRankIDLoadDataFnc(CWnd *pWnd){
	return ((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankIDLoadData();
}
/*static void _OnRankIDAddNewFnc(CWnd *pWnd){
	((CPHANHEDIEUTRINOITRU *)pWnd)->OnRankIDAddNew();
}*/
CPHANHEDIEUTRINOITRU::CPHANHEDIEUTRINOITRU(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPHANHEDIEUTRINOITRU::~CPHANHEDIEUTRINOITRU(){
}
void CPHANHEDIEUTRINOITRU::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1010, 90);
	m_wndTreating.Create(this, _T("Treating"), 10, 30, 110, 55);
	m_wndDischargeDept.Create(this, _T("DischargeDept"), 115, 30, 300, 55);
	m_wndFromDateLabel.Create(this, _T("From Date"), 305, 30, 385, 55);
	m_wndFromDate.Create(this,390, 30, 500, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 505, 30, 585, 55);
	m_wndToDate.Create(this,590, 30, 700, 55); 
	m_wndDepartmentLab.Create(this, _T("Department"), 705, 30, 785, 55);
	m_wndDepartment.Create(this,790, 30, 930, 55); 
	m_wndLoad.Create(this, _T("&Load"), 935, 30, 1005, 55);
	m_wndDischarged.Create(this, _T("Discharged"), 10, 60, 110, 85);
	m_wndCombinedTreatment.Create(this, _T("Combined Treatment"), 115, 60, 300, 85);
	m_wndRankIDLab.Create(this, _T("Rank ID"), 305, 60, 385, 85);
	m_wndRankID.Create(this,390, 60, 500, 85); 
	m_wndRanklab.Create(this, _T("Rank"), 505, 60, 585, 85);
	m_wndRank.Create(this,590, 60, 700, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 705, 60, 785, 85);
	m_wndObject.Create(this,790, 60, 930, 85); 
	m_wndExport.Create(this, _T("&Export"), 935, 60, 1005, 85);
	m_wndList.Create(this,5, 95, 1010, 615); 
	m_wndTreating.EnableWindow(FALSE);
	m_wndDischarged.EnableWindow(FALSE);
	m_wndDischargeDept.EnableWindow(FALSE);
	m_wndCombinedTreatment.EnableWindow(FALSE);

}
void CPHANHEDIEUTRINOITRU::OnInitializeComponents(){
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
	m_wndRankID.SetCheckValue(true);
	m_wndRankID.LimitText(35);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("S\x1ED1 h\x1ED3 s\x1A1"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("T\xEAn \x62\x1EC7nh nh\xE2n"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("YOB"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(4, _T("Gi\x1EDBi"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(6, _T("Rank ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(7, _T("\x43\x1EA5p \x62\x1EAD\x63"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Ng\xE0y v\xE0o"), CFMT_DATE, 80);
	m_wndList.InsertColumn(9, _T("Ng\xE0y r\x61"), CFMT_DATE, 80);
	m_wndList.InsertColumn(10, _T("Khoa \x111i\x1EC1u tr\x1ECB"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(11, _T("S\x1ED1 \x42\x41"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(12, _T("Ph\xF2ng-Gi\x1B0\x1EDDng"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(13, _T("\x42\xE1\x63 S\x129"), CFMT_TEXT, 70);
	


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndRankID.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndRankID.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CPHANHEDIEUTRINOITRU::OnSetWindowEvents(){
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
	m_wndRankID.SetEvent(WE_SELENDOK, _OnRankIDSelendokFnc);
	//m_wndRankID.SetEvent(WE_SETFOCUS, _OnRankIDSetfocusFnc);
	//m_wndRankID.SetEvent(WE_KILLFOCUS, _OnRankIDKillfocusFnc);
	m_wndRankID.SetEvent(WE_SELCHANGE, _OnRankIDSelectChangeFnc);
	m_wndRankID.SetEvent(WE_LOADDATA, _OnRankIDLoadDataFnc);
	//m_wndRankID.SetEvent(WE_ADDNEW, _OnRankIDAddNewFnc);
	m_wndCombinedTreatment.SetEvent(WE_CLICK, _OnCombinedTreatmentSelectFnc);
	m_wndTreating.SetEvent(WE_CLICK, _OnTreatingSelectFnc);
	m_wndDischargeDept.SetEvent(WE_CLICK, _OnDischargeDeptSelectFnc);
	m_wndDischarged.SetEvent(WE_CLICK, _OnDischargedSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
	//m_wndTreating.SetCheck(true);
	//m_szCondition = _T("I");

}
void CPHANHEDIEUTRINOITRU::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndRankID.GetDlgCtrlID(), m_szRankIDKey);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
	DDX_Radio(pDX, m_wndTreating.GetDlgCtrlID(), m_nTreating);

}
void CPHANHEDIEUTRINOITRU::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPHANHEDIEUTRINOITRU::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPHANHEDIEUTRINOITRU::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();
	m_szRankIDKey.Empty();
	m_bCombinedTreatment=FALSE;
	//m_nTreating = 0;
}
int CPHANHEDIEUTRINOITRU::SetMode(int nMode){
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
void CPHANHEDIEUTRINOITRU::OnRankIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPHANHEDIEUTRINOITRU::OnRankIDSelendok(){
	 
}
/*void CPHANHEDIEUTRINOITRU::OnRankIDSetfocus(){
	
}*/
/*void CPHANHEDIEUTRINOITRU::OnRankIDKillfocus(){
	
}*/
long CPHANHEDIEUTRINOITRU::OnRankIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndRankID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT id,name") \
_T(" FROM(SELECT 1,'hp_rank >= 15' id,'T\x1B0\x1EDBng' name") \
_T(" FROM dual") \
_T(" UNION") \
_T(" SELECT 2,'hp_rank IN(13,14)' id,'3// - 4//' name") \
_T(" FROM dual") \
_T(" UNION") \
_T(" SELECT 3,'hp_rank IN(1,2,3,4,5,6,7,8,9,10,11,12)' id,'2// - \x43.S\x129' name ") \
_T(" FROM dual)"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRankID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPHANHEDIEUTRINOITRU::OnRankIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPHANHEDIEUTRINOITRU::OnFromDateChange(){
	
} */
/*void CPHANHEDIEUTRINOITRU::OnFromDateSetfocus(){
	
} */
/*void CPHANHEDIEUTRINOITRU::OnFromDateKillfocus(){
	
} */
int CPHANHEDIEUTRINOITRU::OnFromDateCheckValue(){
	return 0;
} 
/*void CPHANHEDIEUTRINOITRU::OnToDateChange(){
	
} */
/*void CPHANHEDIEUTRINOITRU::OnToDateSetfocus(){
	
} */
/*void CPHANHEDIEUTRINOITRU::OnToDateKillfocus(){
	
} */
int CPHANHEDIEUTRINOITRU::OnToDateCheckValue(){
	return 0;
} 

void CPHANHEDIEUTRINOITRU::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CPHANHEDIEUTRINOITRU::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString tmpStr;
	if (OnCheckBeforeExport(&xls, &rs) < 0) return;
	xls.SetWorksheet(0);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT);
	OnExport(&xls, &rs);
} 
int CPHANHEDIEUTRINOITRU::OnCheckBeforeExport(CExcel* pXls, CRecord* pRs){
	if (!pXls->Load(_T("Exports\\MAU_DANHSACHBENHNHANCHUYENKHOA.xls"))){
		AfxMessageBox(_T("Exports\\MAU_DANHSACHBENHNHANCHUYENKHOA.xls"));
		return -1;
	}
	CString szSQL = GetQueryString();
	pRs->ExecSQL(szSQL);
	if (pRs->IsEOF()){
		AfxMessageBox(_T("No Data"));
		return -1;
	}
	return 0;
}
CString CPHANHEDIEUTRINOITRU::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szDept1, szObject, szRank, szRankID;
	if(m_bCombinedTreatment)
		szWhere.AppendFormat(_T(" and htr_status='I' AND htr_combinedtreat='Y' "));
	//Trang thai dang dieu tri
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND htr_status='I' AND  htr_admitdate <= cast_string2timestamp('%s')+1"),m_szFromDate);
	//Trang thai chuyen khoa
	if (m_szCondition == _T("M") || true)
		szWhere.AppendFormat(_T(" AND htr_suggestion ='M' AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s') "), m_szFromDate, m_szToDate);
	//Trang thai da ra vien
	if (m_szCondition == _T("T"))
		szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M' AND trunc(htr_dischargedate) BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s') "), m_szFromDate, m_szToDate);
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s' )"), m_szDepartmentKey, m_szDepartmentKey);
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);
	if (!m_szRankIDKey.IsEmpty())
		szRankID.AppendFormat(_T(" AND %s"), m_szRankIDKey);
	szSQL.Format(_T(" SELECT hd_docno AS docno, trim(hp_surname ||' ' ||hp_midname ||' ' ||hp_firstname) AS pname,") \
	_T("   extract(YEAR FROM hp_birthdate) AS age, get_selection_desc('sys_sex', hp_sex) AS sex, hms_getobjectname(hd_object) AS object,") \
	_T("   get_syssel_desc('hms_rank', hp_rank) AS rankname, to_char(htr_admitdate, 'DD/MM/YYYY') AS admitdate, to_char(htr_dischargedate, 'DD/MM/YYYY') AS dischargedate,") \
	_T("   case when htr_suggestion = 'M' then htr_deptid||' -> '||htr_tdeptid else hcr_admitdept end AS ctdeptid,") \
	_T("   hcr_recordno AS admitnumber, hms_getActiveBed(htr_docno, htr_deptid) AS bedName, get_username(htr_doctor) AS doctor") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
	_T(" LEFT JOIN hms_treatment_record ON(htr_docno         =hd_docno)") \
	_T(" LEFT JOIN sys_dept ON (sd_id = hcr_admitdept)") \
	_T(" WHERE htr_outpatient='N' %s %s %s %s %s AND sd_isactive = 'Y'") \
	_T(" ORDER BY admitdate, pname, htr_idx,hp_rank"), szDept, szObject, szRank, szWhere, szRankID);
	return szSQL;
}
void CPHANHEDIEUTRINOITRU::OnExport(CExcel* pXls, CRecord* pRs){
	int nRow = 7, nIndex = 1;
	while (!pRs->IsEOF()){
		pXls->SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
		for (int i = 0; i < pRs->GetFieldCount(); i++)
			pXls->SetCellText(i+1, nRow, pRs->GetValue(pRs->GetFieldName(i)), FMT_TEXT);
		nRow++;
		pRs->MoveNext();
	}
	pXls->Save(_T("Exports\\DANHSACHBENHNHANCHUYENKHOA.xls"));
}
void CPHANHEDIEUTRINOITRU::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPHANHEDIEUTRINOITRU::OnListDblClick(){
	
} 
void CPHANHEDIEUTRINOITRU::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
} 
int CPHANHEDIEUTRINOITRU::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPHANHEDIEUTRINOITRU::OnListLoadData(){
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
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("object")), 
			rs.GetValue(_T("rank")), 
			rs.GetValue(_T("rankname")), 
			rs.GetValue(_T("admitdate")),
			rs.GetValue(_T("dischargedate")),
			rs.GetValue(_T("ctdeptid")),
			rs.GetValue(_T("admitnumber")),
			rs.GetValue(_T("bedName")),
			rs.GetValue(_T("doctor")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CPHANHEDIEUTRINOITRU::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPHANHEDIEUTRINOITRU::OnObjectSelendok(){
	 
}
/*void CPHANHEDIEUTRINOITRU::OnObjectSetfocus(){
	
}*/
/*void CPHANHEDIEUTRINOITRU::OnObjectKillfocus(){
	
}*/
long CPHANHEDIEUTRINOITRU::OnObjectLoadData(){
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
/*void CPHANHEDIEUTRINOITRU::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPHANHEDIEUTRINOITRU::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPHANHEDIEUTRINOITRU::OnDepartmentSelendok(){
	 
}
/*void CPHANHEDIEUTRINOITRU::OnDepartmentSetfocus(){
	
}*/
/*void CPHANHEDIEUTRINOITRU::OnDepartmentKillfocus(){
	
}*/
long CPHANHEDIEUTRINOITRU::OnDepartmentLoadData(){
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
/*void CPHANHEDIEUTRINOITRU::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPHANHEDIEUTRINOITRU::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPHANHEDIEUTRINOITRU::OnRankSelendok(){
	 
}
/*void CPHANHEDIEUTRINOITRU::OnRankSetfocus(){
	
}*/
/*void CPHANHEDIEUTRINOITRU::OnRankKillfocus(){
	
}*/
long CPHANHEDIEUTRINOITRU::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRank.IsSearchKey() && !m_szRankKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndRank.DeleteAllItems(); 
	szSQL.Format(_T("SELECT ss_code id,ss_desc name FROM sys_sel WHERE ss_id='hms_rank'"), szWhere);
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
/*void CPHANHEDIEUTRINOITRU::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CPHANHEDIEUTRINOITRU::OnCombinedTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CPHANHEDIEUTRINOITRU::OnTreatingSelect(){
	m_szCondition = _T("I");
	OnListLoadData();
}
void CPHANHEDIEUTRINOITRU::OnDischargeDeptSelect(){
	m_szCondition = _T("M");
	OnListLoadData();
}
void CPHANHEDIEUTRINOITRU::OnDischargedSelect(){
	m_szCondition = _T("T");
	OnListLoadData();
}
int CPHANHEDIEUTRINOITRU::OnAddPHANHEDIEUTRINOITRU(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPHANHEDIEUTRINOITRU::OnEditPHANHEDIEUTRINOITRU(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPHANHEDIEUTRINOITRU::OnDeletePHANHEDIEUTRINOITRU(){
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
 		OnCancelPHANHEDIEUTRINOITRU();
 	}
	return 0;
}
int CPHANHEDIEUTRINOITRU::OnSavePHANHEDIEUTRINOITRU(){
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
 		//OnPHANHEDIEUTRINOITRUListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPHANHEDIEUTRINOITRU::OnCancelPHANHEDIEUTRINOITRU(){
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
int CPHANHEDIEUTRINOITRU::OnPHANHEDIEUTRINOITRUListLoadData(){
	return 0;
}

UINT CPHANHEDIEUTRINOITRU::CheckDataType(CString szInput){
	if (szInput.IsEmpty()) return FMT_TEXT;
	CDate dte;
	if (dte.ParseDate(szInput)) return FMT_DATE;
	if (str2long(szInput)) return FMT_NUMBER1;
	return FMT_TEXT;
}