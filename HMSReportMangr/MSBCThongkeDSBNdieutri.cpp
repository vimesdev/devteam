#include "MSBCThongkeDSBNdieutri.h"
#include "ReportDocument.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNdieutri *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNdieutri *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNdieutri *pVw = (CMSBCThongkeDSBNdieutri *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNdieutri *pVw = (CMSBCThongkeDSBNdieutri *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCThongkeDSBNdieutri*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNdieutri* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNdieutri *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNdieutri* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNdieutri *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNdieutri* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNdieutri *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri *)pWnd)->OnRankAddNew();
}*/
static void _OnCombinedTreatmentSelectFnc(CWnd *pWnd){
	 ((CMSBCThongkeDSBNdieutri*)pWnd)->OnCombinedTreatmentSelect();
}
static int _OnAddMSBCThongkeDSBNdieutriFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnAddMSBCThongkeDSBNdieutri();
} 
static int _OnEditMSBCThongkeDSBNdieutriFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnEditMSBCThongkeDSBNdieutri();
} 
static int _OnDeleteMSBCThongkeDSBNdieutriFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnDeleteMSBCThongkeDSBNdieutri();
} 
static int _OnSaveMSBCThongkeDSBNdieutriFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnSaveMSBCThongkeDSBNdieutri();
} 
static int _OnCancelMSBCThongkeDSBNdieutriFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNdieutri*)pWnd)->OnCancelMSBCThongkeDSBNdieutri();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNdieutri*)pWnd)->OnOutPatientSelect();
}
CMSBCThongkeDSBNdieutri::CMSBCThongkeDSBNdieutri(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCThongkeDSBNdieutri::~CMSBCThongkeDSBNdieutri(){
}
void CMSBCThongkeDSBNdieutri::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("Ng\xE0y \x111i\x1EC1u tr\x1ECB :"), 10, 29, 82, 54);
	m_wndFromDate.Create(this,86, 29, 196, 54); 
	m_wndDepartmentLab.Create(this, _T("Department"), 199, 29, 279, 54);
	m_wndDepartment.Create(this,284, 29, 422, 54); 
	m_wndObjectLabel.Create(this, _T("Object"), 425, 29, 505, 54);
	m_wndObject.Create(this,510, 29, 648, 54); 
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 4, 5, 1011, 117);
	m_wndPrint.Create(this, _T("\x58u\x1EA5t"), 741, 28, 819, 82);
	m_wndCombinedTreatment.Create(this, _T("Combined Treatment"), 10, 58, 195, 83);
	m_wndRanklab.Create(this, _T("Rank"), 199, 58, 279, 83);
	m_wndRank.Create(this,284, 58, 422, 83); 
	m_wndLoad.Create(this, _T("&Load"), 653, 29, 737, 83);
	m_wndAll.Create(this, _T("All"), 10, 87, 90, 112);
	m_wndInPatient.Create(this, _T("InPatient"), 94, 87, 174, 112);
	m_wndOutPatient.Create(this, _T("OutPatient"), 178, 87, 258, 112);
	m_wndList.Create(this,5, 124, 1012, 615); 


	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("T\xEAn \x42\x1EC7nh Nh\xE2n"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("N\x103m sinh"), CFMT_DATE, 80);
	m_wndList.InsertColumn(3, _T("\x43\x1EA5p \x62\x1EAD\x63"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("\x110\x1A1n v\x1ECB"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("\x43h\x1EA5n \x111o\xE1n"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("V\xE0o kho\x61"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("Disdate"), CFMT_DATE, 80);
	m_wndList.InsertColumn(11, _T("Li\xEAn h\x1EC7"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CMSBCThongkeDSBNdieutri::OnInitializeComponents(){
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
void CMSBCThongkeDSBNdieutri::OnSetWindowEvents(){
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
	m_wndCombinedTreatment.SetEvent(WE_CLICK, _OnCombinedTreatmentSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
	m_wndAll.SetCheck(true);
	m_szCondition = _T("A");

}
void CMSBCThongkeDSBNdieutri::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);

}
void CMSBCThongkeDSBNdieutri::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCThongkeDSBNdieutri::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCThongkeDSBNdieutri::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();
	m_bCombinedTreatment=FALSE;
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;


}
int CMSBCThongkeDSBNdieutri::SetMode(int nMode){
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
/*void CMSBCThongkeDSBNdieutri::OnFromDateChange(){
	
} */
/*void CMSBCThongkeDSBNdieutri::OnFromDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNdieutri::OnFromDateKillfocus(){
	
} */
int CMSBCThongkeDSBNdieutri::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCThongkeDSBNdieutri::OnToDateChange(){
	
} */
/*void CMSBCThongkeDSBNdieutri::OnToDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNdieutri::OnToDateKillfocus(){
	
} */
int CMSBCThongkeDSBNdieutri::OnToDateCheckValue(){
	return 0;
} 
void CMSBCThongkeDSBNdieutri::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCThongkeDSBNdieutri::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szNewGroup , szOldGroup;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 23);	xls.SetColumnWidth(2, 15);	xls.SetColumnWidth(3, 16);	xls.SetColumnWidth(4, 13);	xls.SetColumnWidth(5, 33);	xls.SetColumnWidth(6, 15);	xls.SetColumnWidth(7, 15);	xls.SetColumnWidth(8, 35);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("\x42\xE1o \x63\xE1o th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n nh\x1EADp kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("Ng\xE0y \x111i\x1EC1u tr\x1ECB %s "),CDateTime::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("T\xEAn \x42\x1EC7nh Nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("N\x103m sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("\x43h\x1EA5n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("V\xE0o kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("Li\xEAn h\x1EC7"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(3, 3, 0, 8);	xls.SetMerge(4, 4, 0, 8);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	int nIdx=1;	while(!rs.IsEOF()){		tmpStr.Format(_T("%d"), nIdx++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hovaten"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("CAPBAC"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HP_WORKPLACE"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HD_DIAGNOSTIC"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("DOITUONG"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("htr_deptid"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("contact"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\MSBCThongkeDSBNdieutri.xls"));
	
} 
void CMSBCThongkeDSBNdieutri::OnListDblClick(){
	
} 
void CMSBCThongkeDSBNdieutri::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCThongkeDSBNdieutri::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCThongkeDSBNdieutri::OnListLoadData(){
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
			rs.GetValue(_T("htr_deptid")),
			rs.GetValue(_T("dischargedate")), 
			rs.GetValue(_T("contact")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CMSBCThongkeDSBNdieutri::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNdieutri::OnObjectSelendok(){
	 
}
/*void CMSBCThongkeDSBNdieutri::OnObjectSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNdieutri::OnObjectKillfocus(){
	
}*/
long CMSBCThongkeDSBNdieutri::OnObjectLoadData(){
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
/*void CMSBCThongkeDSBNdieutri::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNdieutri::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNdieutri::OnDepartmentSelendok(){
	 
}
/*void CMSBCThongkeDSBNdieutri::OnDepartmentSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNdieutri::OnDepartmentKillfocus(){
	
}*/
long CMSBCThongkeDSBNdieutri::OnDepartmentLoadData(){
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
/*void CMSBCThongkeDSBNdieutri::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNdieutri::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNdieutri::OnRankSelendok(){
	 
}
/*void CMSBCThongkeDSBNdieutri::OnRankSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNdieutri::OnRankKillfocus(){
	
}*/
long CMSBCThongkeDSBNdieutri::OnRankLoadData(){
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
/*void CMSBCThongkeDSBNdieutri::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNdieutri::OnCombinedTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();	
}
void CMSBCThongkeDSBNdieutri::OnAllSelect(){
	m_szCondition = _T("A");
	OnListLoadData();
}
void CMSBCThongkeDSBNdieutri::OnInPatientSelect(){
	m_szCondition = _T("I");
	OnListLoadData();
}
void CMSBCThongkeDSBNdieutri::OnOutPatientSelect(){
	m_szCondition = _T("E");
	OnListLoadData();
}
int CMSBCThongkeDSBNdieutri::OnAddMSBCThongkeDSBNdieutri(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCThongkeDSBNdieutri::OnEditMSBCThongkeDSBNdieutri(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCThongkeDSBNdieutri::OnDeleteMSBCThongkeDSBNdieutri(){
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
 		OnCancelMSBCThongkeDSBNdieutri();
 	}
	return 0;
}
int CMSBCThongkeDSBNdieutri::OnSaveMSBCThongkeDSBNdieutri(){
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
 		//OnMSBCThongkeDSBNdieutriListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCThongkeDSBNdieutri::OnCancelMSBCThongkeDSBNdieutri(){
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
int CMSBCThongkeDSBNdieutri::OnMSBCThongkeDSBNdieutriListLoadData(){
	return 0;
}
CString CMSBCThongkeDSBNdieutri::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank,szDept1;
	if(m_bCombinedTreatment){
		szWhere.AppendFormat(_T(" AND htr_combinedtreat='Y' "));
	}
	else
	{
		//Trang thai dieu tri toan vien
		if (m_szCondition == _T("A"))
			szWhere.AppendFormat(_T(" AND 1=1"));

		//Trang thai dieu tri noi tru
		if (m_szCondition == _T("I"))
			szWhere.AppendFormat(_T(" AND htr_OutPatient='N'"));

		//Trang thai dieu tri ngoai tru
		if (m_szCondition == _T("E"))
			szWhere.AppendFormat(_T(" AND htr_OutPatient='Y'"));

	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept1.AppendFormat(_T(" WHERE htr_deptid='%s'"), m_szDepartmentKey);
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s' )"), m_szDepartmentKey, m_szDepartmentKey);
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);
	/*szSQL.Format(_T(" SELECT * ") \
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
_T(" WHERE htr_deptid not in('A4') %s %s %s %s) %s ") \
_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere, szDept1);*/
	szSQL.Format(_T(" SELECT distinct * ") \
		_T(" FROM(SELECT distinct 1 typeid,hd_docno,") \
		_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS hovaten,") \
		_T("        extract(YEAR FROM hp_birthdate)       AS age,") \
		_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as capbac,") \
		_T("        hp_workplace,") \
		_T("        hd_diagnostic,") \
		_T("        hms_getobjectname(hd_object) AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid,") \
		_T("		CASE WHEN hd_contacttel = hd_telephone THEN hd_telephone WHEN hd_contacttel <> hd_telephone THEN TRIM(hd_telephone || ' (' || hd_contacttel || ')') END AS contact") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='I' %s %s %s %s AND htr_admitdate < TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT distinct 1 typeid,hd_docno,") \
		_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS hovaten,") \
		_T("        extract(YEAR FROM hp_birthdate)       AS age,") \
		_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as capbac,") \
		_T("        hp_workplace,") \
		_T("        hd_diagnostic,") \
		_T("        hms_getobjectname(hd_object) AS doituong,") \
		_T("        trunc_date(htr_admitdate) AS admitdate,") \
		_T("        trunc_date(hcr_dischargedate) AS dischargedate,") \
		_T("        htr_deptid,") \
		_T("		CASE WHEN hd_contacttel = hd_telephone THEN hd_telephone WHEN hd_contacttel <> hd_telephone THEN TRIM(hd_telephone || ' (' || hd_contacttel || ')') END AS contact") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
		_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
		_T(" WHERE htr_deptid not in('A4') AND htr_status='T' %s %s %s %s AND htr_admitdate < TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND htr_dischargedate >= TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS'))") \
		_T(" ORDER BY dischargedate"),szDept,szObject, szRank, szWhere,m_szFromDate,
												szDept,szObject, szRank, szWhere,m_szFromDate,m_szFromDate);
	return szSQL;
}