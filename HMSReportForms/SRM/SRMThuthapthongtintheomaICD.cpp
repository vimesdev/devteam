#include "stdafx.h"
#include "SRMThuthapthongtintheomaICD.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtintheomaICD *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtintheomaICD *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtintheomaICD *pVw = (CSRMThuthapthongtintheomaICD *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CSRMThuthapthongtintheomaICD *pVw = (CSRMThuthapthongtintheomaICD *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSRMThuthapthongtintheomaICD*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSRMThuthapthongtintheomaICD* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CSRMThuthapthongtintheomaICD *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSRMThuthapthongtintheomaICD *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnExamRoomSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtintheomaICD*)pWnd)->OnExamRoomSelect();
}
static void _OnInDeptSelectFnc(CWnd *pWnd){
	  ((CSRMThuthapthongtintheomaICD*)pWnd)->OnInDeptSelect();
}
static int _OnAddSRMThuthapthongtintheomaICDFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnAddSRMThuthapthongtintheomaICD();
} 
static int _OnEditSRMThuthapthongtintheomaICDFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnEditSRMThuthapthongtintheomaICD();
} 
static int _OnDeleteSRMThuthapthongtintheomaICDFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnDeleteSRMThuthapthongtintheomaICD();
} 
static int _OnSaveSRMThuthapthongtintheomaICDFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnSaveSRMThuthapthongtintheomaICD();
} 
static int _OnCancelSRMThuthapthongtintheomaICDFnc(CWnd *pWnd){
	 return ((CSRMThuthapthongtintheomaICD*)pWnd)->OnCancelSRMThuthapthongtintheomaICD();
} 
CSRMThuthapthongtintheomaICD::CSRMThuthapthongtintheomaICD(CWnd *pParent){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSRMThuthapthongtintheomaICD::~CSRMThuthapthongtintheomaICD(){
}
void CSRMThuthapthongtintheomaICD::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 8, 5, 408, 135);
	m_wndList.Create(this,0, 14, 1, 36); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 12, 41, 92, 66);
	m_wndFromDate.Create(this,97, 41, 206, 66); 
	m_wndToDateLabel.Create(this, _T("To Date"), 211, 41, 291, 66);
	m_wndToDate.Create(this,296, 41, 404, 66); 
	m_wndDepartmentLab.Create(this, _T("&Department"), 12, 71, 92, 96);
	m_wndDepartment.Create(this,97, 71, 404, 96); 
	m_wndExamRoom.Create(this, _T("Exam Room"), 10, 101, 100, 126);
	m_wndInDept.Create(this, _T("In Dept"), 105, 101, 185, 126);
	//m_wndLoad.Create(this, _T("&Load"), 215, 140, 309, 165);
	m_wndExport.Create(this, _T("&Export"), 314, 140, 398, 165);

}
void CSRMThuthapthongtintheomaICD::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CSRMThuthapthongtintheomaICD::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CSRMThuthapthongtintheomaICD::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndExamRoom.GetDlgCtrlID(), m_nExamRoom);
	DDX_Radio(pDX, m_wndInDept.GetDlgCtrlID(), m_nInDept);

}
void CSRMThuthapthongtintheomaICD::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSRMThuthapthongtintheomaICD::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSRMThuthapthongtintheomaICD::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_nExamRoom=0;
	m_nInDept=1;

}
int CSRMThuthapthongtintheomaICD::SetMode(int nMode){
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
/*void CSRMThuthapthongtintheomaICD::OnFromDateChange(){
	
} */
/*void CSRMThuthapthongtintheomaICD::OnFromDateSetfocus(){
	
} */
/*void CSRMThuthapthongtintheomaICD::OnFromDateKillfocus(){
	
} */
int CSRMThuthapthongtintheomaICD::OnFromDateCheckValue(){
	return 0;
} 
/*void CSRMThuthapthongtintheomaICD::OnToDateChange(){
	
} */
/*void CSRMThuthapthongtintheomaICD::OnToDateSetfocus(){
	
} */
/*void CSRMThuthapthongtintheomaICD::OnToDateKillfocus(){
	
} */
int CSRMThuthapthongtintheomaICD::OnToDateCheckValue(){
	return 0;
} 
void CSRMThuthapthongtintheomaICD::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CSRMThuthapthongtintheomaICD::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szDept, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\THUTHAPTHONGTINTHEOMAICD.RPT")))
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
void CSRMThuthapthongtintheomaICD::OnListDblClick(){
	
} 
void CSRMThuthapthongtintheomaICD::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CSRMThuthapthongtintheomaICD::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSRMThuthapthongtintheomaICD::OnListLoadData(){
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CSRMThuthapthongtintheomaICD::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CSRMThuthapthongtintheomaICD::OnDepartmentSelendok(){
	 
}
/*void CSRMThuthapthongtintheomaICD::OnDepartmentSetfocus(){
	
}*/
/*void CSRMThuthapthongtintheomaICD::OnDepartmentKillfocus(){
	
}*/
long CSRMThuthapthongtintheomaICD::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CSRMThuthapthongtintheomaICD::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CSRMThuthapthongtintheomaICD::OnExamRoomSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
void CSRMThuthapthongtintheomaICD::OnInDeptSelect(){
	UpdateData(true);
	m_szDepartmentKey.Empty();
	OnDepartmentLoadData();
}
int CSRMThuthapthongtintheomaICD::OnAddSRMThuthapthongtintheomaICD(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSRMThuthapthongtintheomaICD::OnEditSRMThuthapthongtintheomaICD(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSRMThuthapthongtintheomaICD::OnDeleteSRMThuthapthongtintheomaICD(){
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
 		OnCancelSRMThuthapthongtintheomaICD();
 	}
	return 0;
}
int CSRMThuthapthongtintheomaICD::OnSaveSRMThuthapthongtintheomaICD(){
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
 		//OnSRMThuthapthongtintheomaICDListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSRMThuthapthongtintheomaICD::OnCancelSRMThuthapthongtintheomaICD(){
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
int CSRMThuthapthongtintheomaICD::OnSRMThuthapthongtintheomaICDListLoadData(){
	return 0;
}
CString CSRMThuthapthongtintheomaICD::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
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
