#include "MSBCTheomaICD.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTheomaICD *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTheomaICD *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCTheomaICD *pVw = (CMSBCTheomaICD *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCTheomaICD *pVw = (CMSBCTheomaICD *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCTheomaICD*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCTheomaICD*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCTheomaICD*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCTheomaICD*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCTheomaICD* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMSBCTheomaICD *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMSBCTheomaICD *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExamRoomSelectFnc(CWnd *pWnd){
	  ((CMSBCTheomaICD*)pWnd)->OnExamRoomSelect();
}
static void _OnInDeptSelectFnc(CWnd *pWnd){
	  ((CMSBCTheomaICD*)pWnd)->OnInDeptSelect();
}
static int _OnAddMSBCTheomaICDFnc(CWnd *pWnd){
	 return ((CMSBCTheomaICD*)pWnd)->OnAddMSBCTheomaICD();
} 
static int _OnEditMSBCTheomaICDFnc(CWnd *pWnd){
	 return ((CMSBCTheomaICD*)pWnd)->OnEditMSBCTheomaICD();
} 
static int _OnDeleteMSBCTheomaICDFnc(CWnd *pWnd){
	 return ((CMSBCTheomaICD*)pWnd)->OnDeleteMSBCTheomaICD();
} 
static int _OnSaveMSBCTheomaICDFnc(CWnd *pWnd){
	 return ((CMSBCTheomaICD*)pWnd)->OnSaveMSBCTheomaICD();
} 
static int _OnCancelMSBCTheomaICDFnc(CWnd *pWnd){
	 return ((CMSBCTheomaICD*)pWnd)->OnCancelMSBCTheomaICD();
} 
CMSBCTheomaICD::CMSBCTheomaICD(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCTheomaICD::~CMSBCTheomaICD(){
}
void CMSBCTheomaICD::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 8, 5, 1017, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 204, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 206, 30, 286, 55);
	m_wndToDate.Create(this,291, 30, 399, 55); 
	m_wndLoad.Create(this, _T("&Load"), 819, 30, 913, 55);
	m_wndExport.Create(this, _T("&Export"), 917, 30, 1001, 55);
	m_wndList.Create(this,4, 64, 1013, 615); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 589, 30, 669, 55);
	m_wndDepartment.Create(this,674, 30, 814, 55); 
	m_wndExamRoom.Create(this, _T("Exam Room"), 408, 30, 498, 55);
	m_wndInDept.Create(this, _T("In Dept"), 501, 30, 581, 55);

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

}
void CMSBCTheomaICD::OnInitializeComponents(){
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
void CMSBCTheomaICD::OnSetWindowEvents(){
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
	m_wndExamRoom.SetEvent(WE_CLICK, _OnExamRoomSelectFnc);
	m_wndInDept.SetEvent(WE_CLICK, _OnInDeptSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);
}
void CMSBCTheomaICD::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndExamRoom.GetDlgCtrlID(), m_nExamRoom);
	DDX_Radio(pDX, m_wndInDept.GetDlgCtrlID(), m_nInDept);

}
void CMSBCTheomaICD::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCTheomaICD::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCTheomaICD::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nExamRoom=0;
	m_nInDept=1;

}
int CMSBCTheomaICD::SetMode(int nMode){
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
/*void CMSBCTheomaICD::OnFromDateChange(){
	
} */
/*void CMSBCTheomaICD::OnFromDateSetfocus(){
	
} */
/*void CMSBCTheomaICD::OnFromDateKillfocus(){
	
} */
int CMSBCTheomaICD::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCTheomaICD::OnToDateChange(){
	
} */
/*void CMSBCTheomaICD::OnToDateSetfocus(){
	
} */
/*void CMSBCTheomaICD::OnToDateKillfocus(){
	
} */
int CMSBCTheomaICD::OnToDateCheckValue(){
	return 0;
} 
void CMSBCTheomaICD::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCTheomaICD::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szDept, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BCTHEOMAICD.RPT")))
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
	int nCONG[14];
	for(int i = 0 ; i<14; i++)
	{
		nCONG[i] = 0;
	}
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("TYPEID"),szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("TYPE")));
			rptDetail->SetValue(_T("GroupName"), tmpStr);
			szOldGroup=szNewGroup;
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
void CMSBCTheomaICD::OnListDblClick(){
	
} 
void CMSBCTheomaICD::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCTheomaICD::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCTheomaICD::OnListLoadData(){
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
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
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
void CMSBCTheomaICD::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCTheomaICD::OnDepartmentSelendok(){
	 
}
/*void CMSBCTheomaICD::OnDepartmentSetfocus(){
	
}*/
/*void CMSBCTheomaICD::OnDepartmentKillfocus(){
	
}*/
long CMSBCTheomaICD::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere,szCondition;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	if (m_nExamRoom == 0)
	{
		szCondition.Format(_T(" AND sd_type IN('KB') "));
	}
	else
	{
		szCondition.Format(_T(" AND sd_type IN('DT') "));
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
/*void CMSBCTheomaICD::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCTheomaICD::OnExamRoomSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
void CMSBCTheomaICD::OnInDeptSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
int CMSBCTheomaICD::OnAddMSBCTheomaICD(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCTheomaICD::OnEditMSBCTheomaICD(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCTheomaICD::OnDeleteMSBCTheomaICD(){
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
 		OnCancelMSBCTheomaICD();
 	}
	return 0;
}
int CMSBCTheomaICD::OnSaveMSBCTheomaICD(){
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
 		//OnMSBCTheomaICDListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCTheomaICD::OnCancelMSBCTheomaICD(){
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
int CMSBCTheomaICD::OnMSBCTheomaICDListLoadData(){
	return 0;
}
CString CMSBCTheomaICD::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szInOut,szDept;
	
	if (m_nExamRoom == 0)
	{
		szInOut.AppendFormat(_T(" AND 1=1" ));
		if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND he_deptid = '%s'"), m_szDepartmentKey);
		szWhere.Format(_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	}
	else
	{
		szInOut.AppendFormat(_T(" AND hcr_admitdept not in('C1.1','C1.2','C1.3')" ));
		if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND hcr_admitdept = '%s'"), m_szDepartmentKey);
		szWhere.Format(_T(" AND hcr_admitdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
_T(" WHERE he_status='T' %s %s %s ))") \
_T(" LEFT JOIN hms_icd on(hi_icd=hd_icd)") \
_T(" LEFT JOIN hms_icdchapter on(hic_id=hi_chapterid)") \
_T(" GROUP BY hd_icd,hic_id,hic_name,hi_name") \
_T(" ORDER BY hic_id"), szWhere,szDept,szInOut);
	return szSQL;
}
