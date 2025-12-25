#include "MSBCThongkeDSBNhiendien.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNhiendien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNhiendien *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNhiendien *pVw = (CMSBCThongkeDSBNhiendien *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNhiendien *pVw = (CMSBCThongkeDSBNhiendien *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCThongkeDSBNhiendien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNhiendien* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNhiendien *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNhiendien* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNhiendien *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNhiendien* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNhiendien *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNhiendien *)pWnd)->OnRankAddNew();
}*/
static void _OnCombinedTreatmentSelectFnc(CWnd *pWnd){
	 ((CMSBCThongkeDSBNhiendien*)pWnd)->OnCombinedTreatmentSelect();
}
static void _OnTreatingSelectFnc(CWnd *pWnd){
	  ((CMSBCThongkeDSBNhiendien*)pWnd)->OnTreatingSelect();
}
static void _OnDischargeDeptSelectFnc(CWnd *pWnd){
	  ((CMSBCThongkeDSBNhiendien*)pWnd)->OnDischargeDeptSelect();
}
static void _OnDischargedSelectFnc(CWnd *pWnd){
	  ((CMSBCThongkeDSBNhiendien*)pWnd)->OnDischargedSelect();
}
static int _OnAddMSBCThongkeDSBNhiendienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnAddMSBCThongkeDSBNhiendien();
} 
static int _OnEditMSBCThongkeDSBNhiendienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnEditMSBCThongkeDSBNhiendien();
} 
static int _OnDeleteMSBCThongkeDSBNhiendienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnDeleteMSBCThongkeDSBNhiendien();
} 
static int _OnSaveMSBCThongkeDSBNhiendienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnSaveMSBCThongkeDSBNhiendien();
} 
static int _OnCancelMSBCThongkeDSBNhiendienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNhiendien*)pWnd)->OnCancelMSBCThongkeDSBNhiendien();
} 
CMSBCThongkeDSBNhiendien::CMSBCThongkeDSBNhiendien(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCThongkeDSBNhiendien::~CMSBCThongkeDSBNhiendien(){
}
void CMSBCThongkeDSBNhiendien::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 89);
	m_wndFromDateLabel.Create(this, _T("From Date"), 229, 29, 301, 54);
	m_wndFromDate.Create(this,305, 29, 415, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 418, 29, 498, 54);
	m_wndToDate.Create(this,503, 29, 613, 54); 
	m_wndLoad.Create(this, _T("&Load"), 843, 29, 927, 83);
	m_wndPrint.Create(this, _T("\x58u\x1EA5t"), 930, 29, 1008, 83);
	m_wndList.Create(this,5, 93, 1012, 615); 
	m_wndObjectLabel.Create(this, _T("Object"), 616, 58, 696, 83);
	m_wndObject.Create(this,701, 58, 839, 83); 
	m_wndDepartmentLab.Create(this, _T("Department"), 616, 29, 696, 54);
	m_wndDepartment.Create(this,701, 29, 839, 54); 
	m_wndRanklab.Create(this, _T("Rank"), 418, 58, 498, 83);
	m_wndRank.Create(this,503, 58, 613, 83); 
	m_wndCombinedTreatment.Create(this, _T("Combined Treatment"), 229, 58, 414, 83);
	m_wndTreating.Create(this, _T("Treating"), 9, 29, 107, 54);
	m_wndDischargeDept.Create(this, _T("DischargeDept"), 114, 29, 224, 54);
	m_wndDischarged.Create(this, _T("Discharged"), 9, 58, 224, 83);

}
void CMSBCThongkeDSBNhiendien::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(35);


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
void CMSBCThongkeDSBNhiendien::OnSetWindowEvents(){
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
	m_wndTreating.SetEvent(WE_CLICK, _OnTreatingSelectFnc);
	m_wndDischargeDept.SetEvent(WE_CLICK, _OnDischargeDeptSelectFnc);
	m_wndDischarged.SetEvent(WE_CLICK, _OnDischargedSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
	m_wndTreating.SetCheck(true);
	m_szCondition = _T("I");

}
void CMSBCThongkeDSBNhiendien::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndTreating.GetDlgCtrlID(), m_nStatus);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Check(pDX, m_wndCombinedTreatment.GetDlgCtrlID(), m_bCombinedTreatment);
}
void CMSBCThongkeDSBNhiendien::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCThongkeDSBNhiendien::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCThongkeDSBNhiendien::SetDefaultValues(){

	m_nStatus=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();
	m_bCombinedTreatment=FALSE;
	

}
int CMSBCThongkeDSBNhiendien::SetMode(int nMode){
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
/*void CMSBCThongkeDSBNhiendien::OnFromDateChange(){
	
} */
/*void CMSBCThongkeDSBNhiendien::OnFromDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNhiendien::OnFromDateKillfocus(){
	
} */
int CMSBCThongkeDSBNhiendien::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCThongkeDSBNhiendien::OnToDateChange(){
	
} */
/*void CMSBCThongkeDSBNhiendien::OnToDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNhiendien::OnToDateKillfocus(){
	
} */
int CMSBCThongkeDSBNhiendien::OnToDateCheckValue(){
	return 0;
} 
void CMSBCThongkeDSBNhiendien::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCThongkeDSBNhiendien::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szNewGroup , szOldGroup;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 23);	xls.SetColumnWidth(2, 15);	xls.SetColumnWidth(3, 16);	xls.SetColumnWidth(4, 13);	xls.SetColumnWidth(5, 33);	xls.SetColumnWidth(6, 15);	xls.SetColumnWidth(7, 15);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("\x42\xE1o \x63\xE1o th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n hi\x1EC7n \x64i\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("T\xEAn \x42\x1EC7nh Nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("N\x103m sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("\x43h\x1EA5n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("V\xE0o kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(3, 3, 0, 7);	xls.SetMerge(4, 4, 0, 7);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	int nIdx=1;	while(!rs.IsEOF()){		rs.GetValue(_T("typeid"),szNewGroup);		if (szOldGroup != szNewGroup)
		{
			xls.SetCellText(0, nRow, rs.GetValue(_T("loai")), FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nRow++;
		}		tmpStr.Format(_T("%d"), nIdx++);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("hovaten"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("CAPBAC"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HP_WORKPLACE"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HD_DIAGNOSTIC"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("DOITUONG"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("htr_deptid"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\MSBCThongkeDSBNhiendien.xls"));
	
} 
void CMSBCThongkeDSBNhiendien::OnListDblClick(){
	
} 
void CMSBCThongkeDSBNhiendien::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCThongkeDSBNhiendien::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCThongkeDSBNhiendien::OnListLoadData(){
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
		rs.GetValue(_T("typeid"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("LOAI"), tmpStr);
			nItem = m_wndList.AddItems(szNewGroup, tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
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
void CMSBCThongkeDSBNhiendien::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNhiendien::OnObjectSelendok(){
	 
}
/*void CMSBCThongkeDSBNhiendien::OnObjectSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNhiendien::OnObjectKillfocus(){
	
}*/
long CMSBCThongkeDSBNhiendien::OnObjectLoadData(){
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
/*void CMSBCThongkeDSBNhiendien::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNhiendien::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNhiendien::OnDepartmentSelendok(){
	 
}
/*void CMSBCThongkeDSBNhiendien::OnDepartmentSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNhiendien::OnDepartmentKillfocus(){
	
}*/
long CMSBCThongkeDSBNhiendien::OnDepartmentLoadData(){
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
/*void CMSBCThongkeDSBNhiendien::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNhiendien::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNhiendien::OnRankSelendok(){
	 
}
/*void CMSBCThongkeDSBNhiendien::OnRankSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNhiendien::OnRankKillfocus(){
	
}*/
long CMSBCThongkeDSBNhiendien::OnRankLoadData(){
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
/*void CMSBCThongkeDSBNhiendien::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNhiendien::OnCombinedTreatmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	OnListLoadData();	
}
void CMSBCThongkeDSBNhiendien::OnTreatingSelect(){
	m_szCondition = _T("I");
	OnListLoadData();
}
void CMSBCThongkeDSBNhiendien::OnDischargeDeptSelect(){
	m_szCondition = _T("M");
	OnListLoadData();
}
void CMSBCThongkeDSBNhiendien::OnDischargedSelect(){
	m_szCondition = _T("T");
	OnListLoadData();
}
int CMSBCThongkeDSBNhiendien::OnAddMSBCThongkeDSBNhiendien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCThongkeDSBNhiendien::OnEditMSBCThongkeDSBNhiendien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCThongkeDSBNhiendien::OnDeleteMSBCThongkeDSBNhiendien(){
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
 		OnCancelMSBCThongkeDSBNhiendien();
 	}
	return 0;
}
int CMSBCThongkeDSBNhiendien::OnSaveMSBCThongkeDSBNhiendien(){
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
 		//OnMSBCThongkeDSBNhiendienListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCThongkeDSBNhiendien::OnCancelMSBCThongkeDSBNhiendien(){
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
int CMSBCThongkeDSBNhiendien::OnMSBCThongkeDSBNhiendienListLoadData(){
	return 0;
}
CString CMSBCThongkeDSBNhiendien::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank,szDept1;
	if(m_bCombinedTreatment){
		szWhere.AppendFormat(_T(" and htr_status='I' AND htr_combinedtreat='Y' "));
	}
	else
	{
		//Trang thai dang dieu tri
		if (m_szCondition == _T("I"))
			szWhere.AppendFormat(_T(" AND htr_status='I' "));

		//Trang thai chuyen khoa
		if (m_szCondition == _T("M"))
			szWhere.AppendFormat(_T(" AND ( htr_suggestion ='M') AND trunc(htr_dischargedate) between TO_DATE('%s', 'YYYY-MM-DD') and TO_DATE('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
		//Trang thai da ra vien
		if (m_szCondition == _T("T"))
			szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M' AND trunc(htr_dischargedate) between TO_DATE('%s', 'YYYY-MM-DD') and TO_DATE('%s', 'YYYY-MM-DD') "), m_szFromDate, m_szToDate);
	}
	if (!m_szDepartmentKey.IsEmpty())
		szDept1.AppendFormat(_T(" WHERE htr_deptid='%s'"), m_szDepartmentKey);
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s' )"), m_szDepartmentKey, m_szDepartmentKey);
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);
	szSQL.Format(_T(" SELECT * ") \
_T(" FROM(SELECT 1 typeid,hd_docno,") \
_T("        '\x43\x1EA5p t\xE1' loai,") \
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
_T(" WHERE  hp_rank IN (13,14) and htr_outpatient='N' and htr_deptid not in('A4') %s %s %s %s") \
_T(" UNION") \
_T(" SELECT 2 typeid,hd_docno,") \
_T("        '\x43\x1EA5p t\x1B0\x1EDBng' loai,") \
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
_T(" WHERE hp_rank IN (15,16,17,21,22,23,24) and htr_outpatient='N' and htr_deptid not in('A4') %s %s %s %s) %s ") \
_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere, szDept, szObject, szRank, szWhere,szDept1);
	return szSQL;
}
