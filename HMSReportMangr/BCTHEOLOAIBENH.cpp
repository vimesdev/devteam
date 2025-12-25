#include "BCTHEOLOAIBENH.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHEOLOAIBENH *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTHEOLOAIBENH *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTHEOLOAIBENH *pVw = (CBCTHEOLOAIBENH *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTHEOLOAIBENH *pVw = (CBCTHEOLOAIBENH *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTHEOLOAIBENH *pVw = (CBCTHEOLOAIBENH *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	//return ((CBCTHEOLOAIBENH*)pWnd)->OnListLoadData();
	return ((CBCTHEOLOAIBENH*)pWnd)->OnListLoadData_v2();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTHEOLOAIBENH*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTHEOLOAIBENH*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CBCTHEOLOAIBENH* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CBCTHEOLOAIBENH *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CBCTHEOLOAIBENH *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExamRoomSelectFnc(CWnd *pWnd){
	  ((CBCTHEOLOAIBENH*)pWnd)->OnExamRoomSelect();
}
static void _OnInDeptSelectFnc(CWnd *pWnd){
	  ((CBCTHEOLOAIBENH*)pWnd)->OnInDeptSelect();
}
static int _OnAddBCTHEOLOAIBENHFnc(CWnd *pWnd){
	 return ((CBCTHEOLOAIBENH*)pWnd)->OnAddBCTHEOLOAIBENH();
} 
static int _OnEditBCTHEOLOAIBENHFnc(CWnd *pWnd){
	 return ((CBCTHEOLOAIBENH*)pWnd)->OnEditBCTHEOLOAIBENH();
} 
static int _OnDeleteBCTHEOLOAIBENHFnc(CWnd *pWnd){
	 return ((CBCTHEOLOAIBENH*)pWnd)->OnDeleteBCTHEOLOAIBENH();
} 
static int _OnSaveBCTHEOLOAIBENHFnc(CWnd *pWnd){
	 return ((CBCTHEOLOAIBENH*)pWnd)->OnSaveBCTHEOLOAIBENH();
} 
static int _OnCancelBCTHEOLOAIBENHFnc(CWnd *pWnd){
	 return ((CBCTHEOLOAIBENH*)pWnd)->OnCancelBCTHEOLOAIBENH();
} 
CBCTHEOLOAIBENH::CBCTHEOLOAIBENH(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTHEOLOAIBENH::~CBCTHEOLOAIBENH(){
}
void CBCTHEOLOAIBENH::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1015, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 29, 91, 54);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 440, 55); 
	m_wndLoad.Create(this, _T("&Load"), 835, 30, 920, 55);
	m_wndExport.Create(this, _T("&Export"), 925, 30, 1010, 55);
	m_wndList.Create(this, 5, 65, 1015, 615); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 445, 30, 525, 55);
	m_wndDepartment.Create(this,530, 30, 830, 55); 

}
void CBCTHEOLOAIBENH::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Lo\x1EA1i \x62\x1EC7nh \x63\x1EA5p \x63\x1EE9u"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("M\xE3"), CFMT_TEXT, 50);

	m_wndList.InsertColumn(3, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("H\x1B0u"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(6, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("H\x1B0u"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(9, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(10, _T("H\x1B0u"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(11, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(12, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(13, _T("H\x1B0u"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(14, _T("\x43\x1ED9ng"), CFMT_MONEY, 50);

	m_wndList.InsertColumn(15, _T("Ng\xE0y \x110T \x42N kh\x1ECFi"), CFMT_DATE, 150);
	
	CString tmpStr;
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

	m_wndList.GetHeaderControl()->SetItemHeight(3);

	TranslateString(_T("T\x1ED5ng s\x1ED1"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 3, 1, 5, false, false);

	TranslateString(_T("Kh\x1ECFi r\x61 vi\x1EC7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 6, 1, 8, false, false);

	TranslateString(_T("T\x1EED vong"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 9, 1, 11, false, false);

	TranslateString(_T("\x43\xF2n l\x1EA1i"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 12, 1, 14, false, false);

	m_wndList.SetDisplayColor(true);
/**/
}
void CBCTHEOLOAIBENH::OnSetWindowEvents(){
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
	m_wndExamRoom.SetEvent(WE_CLICK, _OnExamRoomSelectFnc);
	m_wndInDept.SetEvent(WE_CLICK, _OnInDeptSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CBCTHEOLOAIBENH::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	//DDX_Radio(pDX, m_wndExamRoom.GetDlgCtrlID(), m_nExamRoom);
	//DDX_Radio(pDX, m_wndInDept.GetDlgCtrlID(), m_nInDept);

}
void CBCTHEOLOAIBENH::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTHEOLOAIBENH::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTHEOLOAIBENH::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nExamRoom=0;
	m_nInDept=1;

}
int CBCTHEOLOAIBENH::SetMode(int nMode){
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
/*void CBCTHEOLOAIBENH::OnFromDateChange(){
	
} */
/*void CBCTHEOLOAIBENH::OnFromDateSetfocus(){
	
} */
/*void CBCTHEOLOAIBENH::OnFromDateKillfocus(){
	
} */
int CBCTHEOLOAIBENH::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTHEOLOAIBENH::OnToDateChange(){
	
} */
/*void CBCTHEOLOAIBENH::OnToDateSetfocus(){
	
} */
/*void CBCTHEOLOAIBENH::OnToDateKillfocus(){
	
} */
int CBCTHEOLOAIBENH::OnToDateCheckValue(){
	return 0;
} 
void CBCTHEOLOAIBENH::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData_v2();
} 
void CBCTHEOLOAIBENH::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szDept, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BCTKTHDIEUTRITHEOLOAIBENHCUACANBOCAOCAP.RPT"))) return;
	int ret = rs.ExecSQL(GetQueryString_());
	if (ret <=0){
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL;
	int nCONG[14];
	for(int i = 0 ; i < 14; i++) nCONG[i] = 0;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("chuong"),szNewGroup);
		if(szNewGroup !=szOldGroup){
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			if (rptDetail) rptDetail->SetValue(_T("GroupName"), rs.GetValue(_T("ten_chuong")));
			szOldGroup = szNewGroup;
		}
		rptDetail = rpt.AddDetail();
		//loai benh cap cuu
		rs.GetValue(_T("NAME"), tmpStr);
		rptDetail->SetValue(_T("type"), tmpStr);
		//MA
		rs.GetValue(_T("MA"), tmpStr);
		rptDetail->SetValue(_T("1"), tmpStr);
		//QUAN
		rs.GetValue(_T("QUAN"), tmpStr);
		nCONG[1] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//HUU
		rs.GetValue(_T("HUU"), tmpStr);
		nCONG[2] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//CONG
		rs.GetValue(_T("CONG"), tmpStr);
		nCONG[3] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//QUAN
		rs.GetValue(_T("QUANT"), tmpStr);
		nCONG[4] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//HUU
		rs.GetValue(_T("HUUT"), tmpStr);
		nCONG[5] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//CONG
		rs.GetValue(_T("CONGT"), tmpStr);
		nCONG[6] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("QUANTV"), tmpStr);
		nCONG[7] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("HUUTV"), tmpStr);
		nCONG[8] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("CONGTV"), tmpStr);
		nCONG[9] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("QUANCL"), tmpStr);
		nCONG[10] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("HUUCL"), tmpStr);
		nCONG[11] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		//loai benh cap cuu
		rs.GetValue(_T("CONGCL"), tmpStr);
		nCONG[12] +=ToInt(tmpStr);
		rptDetail->SetValue(_T("13"), tmpStr);
		//loai benh cap cuu
		/*tmpStr = CDateTime::Convert(rs.GetValue(_T("HCR_ADMITDATE")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss);
		rptDetail->SetValue(_T("14"), tmpStr);*/
		rs.MoveNext();
	}
	CString  szField;
	for( int i = 2; i<=13; i++)
	{
		szField.Format(_T("s%d"), i);
		tmpStr.Format(_T("%d"), nCONG[i-1]);
		rpt.GetReportFooter()->SetValue(szField, tmpStr);
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 

void CBCTHEOLOAIBENH::OnExportSelect(){
	OnListLoadData_v2();
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CExcel xls;
	if (OnCheckBeforeExport(&xls) < 0) return;
	xls.SetWorksheet(0);
	for (int i = 0; i < m_wndList.GetItemCount(); i++){
		for (int j = 0; j < m_wndList.GetColumnCount(); j++)
			xls.SetCellText(j, i+7, m_wndList.GetItemText(i, j), (j==1||j==2)?FMT_TEXT:FMT_NUMBER1, IsLineGroup(i));
	}
	xls.Save(_T("Exports\\BAOCAOTHEOLOAIBENH.xls"));
}

int CBCTHEOLOAIBENH::OnCheckBeforeExport(CExcel* xls){
	if (!xls->Load(_T("Exports\\MAU_BAOCAOTHEOLOAIBENH.xls"))){
		AfxMessageBox(_T("MAU_BAOCAOTHEOLOAIBENH.xls"));
		return -1;
	}

	return 0;
}

bool CBCTHEOLOAIBENH::IsLineGroup(int nLine){
	if (m_wndList.GetItemText(nLine, 0) == _T(""))
		return true;
	return false;
}

void CBCTHEOLOAIBENH::OnListDblClick(){
	
} 
void CBCTHEOLOAIBENH::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTHEOLOAIBENH::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTHEOLOAIBENH::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, szWhere, szDept, tmpStr, szNewGroup, szOldGroup;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1,nItem=1;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("TYPEID"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("TYPE"), tmpStr);
			nItem = m_wndList.AddItems(_T(""),tmpStr, NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 13);
			m_wndList.SetItemBkColor(nItem, RGB(255, 128, 64), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
			rs.GetValue(_T("MA")), 
			rs.GetValue(_T("QUAN")), 
			rs.GetValue(_T("HUU")), 
			rs.GetValue(_T("CONG")), 
			rs.GetValue(_T("QUANT")), 
			rs.GetValue(_T("HUUT")), 
			rs.GetValue(_T("CONGT")),
			rs.GetValue(_T("QUANTV")), 
			rs.GetValue(_T("HUUTV")),
			rs.GetValue(_T("CONGTV")), 
			rs.GetValue(_T("QUANCL")),
			rs.GetValue(_T("HUUCL")), 
			rs.GetValue(_T("CONGCL")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

long CBCTHEOLOAIBENH::OnListLoadData_v2(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1, nItem = 1;
	CString szDept, tmpStr, szNewGroup, szOldGroup;
	nCount = rs.ExecSQL(GetQueryString_());
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("chuong"), szNewGroup);
		if(szNewGroup != szOldGroup){	
			nItem = m_wndList.AddItems(_T(""), rs.GetValue(_T("ten_chuong")), NULL);
			m_wndList.MergeCell(nItem, 1, nItem, 13);
			m_wndList.SetItemBkColor(nItem, RGB(255, 128, 64), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		nItem = m_wndList.AddItems(int2str(nIndex++), NULL);
		for (int i = 2; i < rs.GetFieldCount(); i++)
			m_wndList.SetItemText(nItem, i-1, rs.GetValue(rs.GetFieldName(i)));
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CBCTHEOLOAIBENH::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTHEOLOAIBENH::OnDepartmentSelendok(){
	 
}
/*void CBCTHEOLOAIBENH::OnDepartmentSetfocus(){
	
}*/
/*void CBCTHEOLOAIBENH::OnDepartmentKillfocus(){
	
}*/
long CBCTHEOLOAIBENH::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	//1.if (m_nExamRoom == 0) szCondition.Format(_T(" AND sd_type IN('KB') "));
	//else szCondition.Format(_T(" AND sd_type IN('DT') "));
	//2.szCondition.Format(_T(" AND sd_type IN ('%s')"), m_nExamRoom==0?_T("KB"):_T("DT"));
	//3.CString tmpStr = m_nExamRoom==0?_T("KB"):_T("DT");
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type IN ('DT') order by id"));
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CBCTHEOLOAIBENH::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CBCTHEOLOAIBENH::OnExamRoomSelect(){
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
void CBCTHEOLOAIBENH::OnInDeptSelect(){
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
int CBCTHEOLOAIBENH::OnAddBCTHEOLOAIBENH(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTHEOLOAIBENH::OnEditBCTHEOLOAIBENH(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTHEOLOAIBENH::OnDeleteBCTHEOLOAIBENH(){
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
 		OnCancelBCTHEOLOAIBENH();
 	}
	return 0;
}
int CBCTHEOLOAIBENH::OnSaveBCTHEOLOAIBENH(){
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
 		//OnBCTHEOLOAIBENHListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTHEOLOAIBENH::OnCancelBCTHEOLOAIBENH(){
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
int CBCTHEOLOAIBENH::OnBCTHEOLOAIBENHListLoadData(){
	return 0;
}
CString CBCTHEOLOAIBENH::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	
	if (m_nExamRoom == 0)
	{
		szInOut.AppendFormat(_T(" AND 1=1" ));
		if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND he_deptid = '%s'"), m_szDepartmentKey);
		szWhere.Format(_T(" AND he_examdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	}
	else
	{
		szInOut.AppendFormat(_T(" AND hcr_admitdept not in('C1.1','C1.2','C1.3')" ));
		if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);
		szWhere.Format(_T(" AND hcr_admitdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	}	
	
	szSQL.Format(_T(" SELECT hd_icd MA,") \
_T("        hic_id typeid,") \
_T("        substr(hic_name,8,100) AS TYPE,") \
_T("        hi_name NAME,") \
_T("        SUM(QUAN) QUAN,SUM(HUU) HUU,") \
_T("        SUM(QUAN+HUU) CONG,") \
_T("        SUM(QUANT) QUANT,SUM(HUUT) HUUT,") \
_T("        SUM(QUANT+HUUT) CONGT,") \
_T("        SUM(QUANTV) QUANTV,SUM(HUUTV) HUUTV,") \
_T("        SUM(QUANTV+HUUTV) CONGTV,") \
_T("        SUM(QUANCL) QUANCL,SUM(HUUCL) HUUCL,") \
_T("        SUM(QUANCL+HUUCL) CONGCL") \
_T(" FROM(SELECT hd_icd,") \
_T("        CASE WHEN hd_object=1 THEN 1 ELSE 0 END AS QUAN,") \
_T("        CASE WHEN hd_object=2 THEN 1 ELSE 0 END AS HUU,") \
_T("        CASE WHEN hd_object=1 AND hcr_suggestion='T' THEN 1 ELSE 0 END AS QUANT,") \
_T("        CASE WHEN hd_object=2 AND hcr_suggestion='T' THEN 1 ELSE 0 END AS HUUT,") \
_T("        CASE WHEN hd_object=1 AND hcr_suggestion in ('X','Y') THEN 1 ELSE 0 END AS QUANTV,") \
_T("        CASE WHEN hd_object=2 AND hcr_suggestion in ('X','Y') THEN 1 ELSE 0 END AS HUUTV,") \
_T("        CASE WHEN hd_object=1 AND hcr_suggestion not in ('T','X','Y') THEN 1 ELSE 0 END AS QUANCL,") \
_T("        CASE WHEN hd_object=2 AND hcr_suggestion not in ('T','X','Y') THEN 1 ELSE 0 END AS HUUCL") \
_T(" FROM(SELECT hd_icd,hd_object,hcr_admitdept,hcr_admitdate,hcr_status,hcr_suggestion,") \
_T(" 			 case when hd_areceptidx=he_receptidx then hcr_suggestion else cast(' ' as nvarchar2(1)) end as suggestion ") \
_T(" FROM hms_patient ") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record on(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_exam ON(hd_docno=he_docno)") \
_T(" WHERE he_status='T' AND hd_status = 'T' %s %s %s ))") \
_T(" LEFT JOIN hms_icd on(hi_icd=hd_icd)") \
_T(" LEFT JOIN hms_icd	 on(hic_id=hi_chapterid)") \
_T(" GROUP BY hd_icd,hic_id,hic_name,hi_name") \
_T(" ORDER BY hic_id"), szWhere,szDept,szInOut);
	return szSQL;
}

CString CBCTHEOLOAIBENH::GetQueryString_(){
	CString szSQL, szWhere, szDischargeWhere, szIndeptWhere, szIndeptSubSel;
	if (!m_szDepartmentKey.IsEmpty()) szWhere.AppendFormat(_T(" AND dept_id = '%s'"), m_szDepartmentKey);
	szDischargeWhere.AppendFormat(
		_T(" AND hcr_dischargedate BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
		, m_szFromDate, m_szToDate);
	szIndeptWhere.AppendFormat(_T(" AND hcr_dischargedate > to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')")
		, m_szToDate);
	szIndeptSubSel.AppendFormat(
		_T("(select htr_deptid from hms_treatment_record where htr_docno = hcr_docno ") \
		_T("  and htr_deptid = '%s' AND (htr_status = 'I' ") \
		_T("	OR (htr_status = 'T' AND (htr_admitdate <= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T("	AND htr_dischargedate >= to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')))))")
		, m_szDepartmentKey, m_szToDate, m_szFromDate);
	szIndeptSubSel = m_szDepartmentKey.IsEmpty()?_T("NULL"):szIndeptSubSel;
	szSQL.Format(_T("WITH tbl_discharge AS( ") \
	_T("	SELECT    hcr_result suggestion, hd_cardno card_no, hcr_mainicd icd, coalesce(hcr_sumtreat, extract(day from hcr_dischargedate-hcr_admitdate)) ngay_dt, ") \
	_T("			hd_docno so_hs, hd_object object, hcr_dischargedept dept_id, NVL(hp_rank, hd_rank) rank, htr_outpatient outpatient") \
	_T("         FROM      hms_clinical_record") \
	_T("         LEFT JOIN hms_doc ON ( hcr_docno = hd_docno )") \
	_T("		 LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
	_T("		 LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
	_T("         WHERE     hcr_status = 'T' %s AND hcr_mainicd IS NOT NULL),") \
	_T("     tbl_indept AS( ") \
	_T("	SELECT    NULL suggestion, hd_cardno card_no, hcr_admiticd icd, 0 ngay_dt, hd_docno so_hs, hd_object object, ") \
	_T("	%s dept_id, NVL(hp_rank, hd_rank) rank, htr_outpatient outpatient") \
	_T("         FROM      hms_clinical_record") \
	_T("         LEFT JOIN hms_doc ON ( hcr_docno = hd_docno )") \
	_T("		 LEFT JOIN hms_patient ON (hd_patientno = hp_patientno)") \
	_T("		 LEFT JOIN hms_treatment_record ON (hcr_docno = htr_docno AND hcr_refidx = htr_idx)") \
	_T("         WHERE     ( hcr_status = 'I'  OR ( hcr_status = 'T' %s ) )),") \
	_T("     tbl_treatment AS (") \
	_T("	SELECT    NVL(suggestion, 'N') suggestion, card_no, icd, hi_name icd_name, ngay_dt, so_hs, hi_chapterid chuong, hi_chapter_vietnamese ten_chuong") \
	_T("         FROM     (SELECT * FROM   tbl_discharge UNION ALL SELECT * FROM   tbl_indept)") \
	_T("         LEFT JOIN hms_icd ON ( icd = hi_icd )") \
	_T("         WHERE    rank BETWEEN 13 AND 24 AND ( object = 1  OR (object = 11 AND substr(card_no, 1, 2) = 'QN') OR (Substr(card_no, 1, 2) = 'HT' AND object = 2) ) AND NVL(outpatient, 'N') = 'N' %s),") \
	_T("     tbl_ngay_dt AS ( SELECT icd, SUM(ngay_dt) ngay_dt FROM   tbl_treatment GROUP  BY icd),") \
	_T("     tbl_main AS (") \
	_T("	SELECT chuong, ten_chuong, icd, icd_name, ( CASE WHEN suggestion IN ( '5', '6' ) THEN 'tv' ELSE CASE WHEN suggestion <> 'N' THEN 'rv' ELSE 'cl' END END )") \
	_T("                ||'_' ||( CASE WHEN Substr(card_no, 1, 2) = 'HT' THEN 'huu' ELSE 'quan' END ) col_desc") \
	_T("         FROM   tbl_treatment)") \
	_T("SELECT chuong, ten_chuong, icd_name, icd, tv_quan + rv_quan + cl_quan tong_quan, tv_huu + rv_huu + cl_huu tong_huu,") \
	_T("       tv_quan + tv_huu + rv_quan + rv_huu + cl_quan + cl_huu tong_cong,") \
	_T("       rv_quan, rv_huu, rv_quan + rv_huu rv_cong, tv_quan, tv_huu, tv_quan + tv_huu tv_cong, cl_quan, cl_huu, cl_quan + cl_huu cl_cong, ngay_dt ") \
	_T("FROM   tbl_main ") \
	_T("pivot( ") \
	_T(" count(*) ") \
	_T(" FOR col_desc IN ('tv_quan' tv_quan, 'tv_huu' tv_huu, 'rv_quan' rv_quan, 'rv_huu' rv_huu, 'cl_quan' cl_quan, 'cl_huu' cl_huu) ") \
	_T(") ") \
	_T(" FULL JOIN tbl_ngay_dt USING (icd) ") \
	_T(" ORDER BY chuong, icd"), szDischargeWhere, szIndeptSubSel, szIndeptWhere, szWhere);
	return szSQL;
}