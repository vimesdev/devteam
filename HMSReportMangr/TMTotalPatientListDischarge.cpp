#include "stdafx.h"
#include "TMTotalPatientListDischarge.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CTMTotalPatientListDischarge *pVw = (CTMTotalPatientListDischarge *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnOutPatientSelect();
}
static void _OnApprovalFeeSelectFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnApprovalFeeSelect();
}
static void _OnUnapprovedFeeSelectFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnUnapprovedFeeSelect();
}
static void _OnPaymentSelectFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnPaymentSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMTotalPatientListDischarge *pVw = (CTMTotalPatientListDischarge *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMTotalPatientListDischarge*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMTotalPatientListDischarge*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMTotalPatientListDischarge* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnObjectAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMTotalPatientListDischarge* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnRankAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMTotalPatientListDischarge* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTMTotalPatientListDischarge *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddTMPatientListDischargeFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge*)pWnd)->OnAddTMPatientListDischarge();
} 
static int _OnEditTMPatientListDischargeFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge*)pWnd)->OnEditTMPatientListDischarge();
} 
static int _OnDeleteTMPatientListDischargeFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge*)pWnd)->OnDeleteTMPatientListDischarge();
} 
static int _OnSaveTMPatientListDischargeFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge*)pWnd)->OnSaveTMPatientListDischarge();
} 
static int _OnCancelTMPatientListDischargeFnc(CWnd *pWnd){
	return ((CTMTotalPatientListDischarge*)pWnd)->OnCancelTMPatientListDischarge();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMTotalPatientListDischarge *pVw = (CTMTotalPatientListDischarge *)pWnd;
	pVw->OnExportSelect();
} 
CTMTotalPatientListDischarge::CTMTotalPatientListDischarge(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMTotalPatientListDischarge::~CTMTotalPatientListDischarge(){
}
void CTMTotalPatientListDischarge::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 1, 1, 501, 201);
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 25, 85, 50);
	m_wndFromDate.Create(this,90, 25, 240, 50); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 25, 330, 50);
	m_wndToDate.Create(this,335, 25, 485, 50); 
	m_wndRanklab.Create(this, _T("Rank"), 5, 60, 85, 85);
	m_wndRank.Create(this,90, 60, 240, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 250, 60, 330, 85);
	m_wndObject.Create(this,335, 60, 485, 85); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 95, 85, 120);
	m_wndDepartment.Create(this,90, 95, 485, 120); 
	m_wndAll.Create(this, _T("All"), 5, 130, 85, 155);
	m_wndInPatient.Create(this, _T("InPatient"), 140, 130, 220, 155);
	m_wndOutPatient.Create(this, _T("OutPatient"), 300, 130, 380, 155);
	m_wndApprovalFee.Create(this, _T("Approval Fee"), 5, 165, 85, 190);
	m_wndUnapprovedFee.Create(this, _T("Unapproved Fee"), 140, 165, 260, 190);
	m_wndPayment.Create(this, _T("Payable"), 300, 165, 380, 190);
	m_wndPrint.Create(this, _T("Print"), 320, 205, 400, 230);
	m_wndExport.Create(this, _T("Export"), 405, 205, 485, 230);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("S\x1ED1 h\x1ED3 s\x1A1"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("T\xEAn \x42\x1EC7nh Nh\xE2n"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("N\x103m sinh"), CFMT_DATE, 80);
	m_wndList.InsertColumn(4, _T("\x43\x1EA5p \x62\x1EAD\x63"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("\x110\x1A1n v\x1ECB"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("\x43h\x1EA5n \x111o\xE1n"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("V\xE0o kho\x61"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Ng\xE0y r\x61"), CFMT_DATE, 100);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CTMTotalPatientListDischarge::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	//m_wndToDate.SetCheckValue(true);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	//m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

}
void CTMTotalPatientListDischarge::OnSetWindowEvents(){
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
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndRank.SetEvent(WE_SELENDOK, _OnRankSelendokFnc);
	//m_wndRank.SetEvent(WE_SETFOCUS, _OnRankSetfocusFnc);
	//m_wndRank.SetEvent(WE_KILLFOCUS, _OnRankKillfocusFnc);
	m_wndRank.SetEvent(WE_SELCHANGE, _OnRankSelectChangeFnc);
	m_wndRank.SetEvent(WE_LOADDATA, _OnRankLoadDataFnc);
	//m_wndRank.SetEvent(WE_ADDNEW, _OnRankAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndApprovalFee.SetEvent(WE_CLICK, _OnApprovalFeeSelectFnc);
	m_wndUnapprovedFee.SetEvent(WE_CLICK, _OnUnapprovedFeeSelectFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CTMTotalPatientListDischarge::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndApprovalFee.GetDlgCtrlID(), m_bApprovalFee);
	DDX_Check(pDX, m_wndUnapprovedFee.GetDlgCtrlID(), m_bUnapprovedFee);
	DDX_Check(pDX, m_wndPayment.GetDlgCtrlID(), m_bPayment);

}
void CTMTotalPatientListDischarge::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMTotalPatientListDischarge::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTMTotalPatientListDischarge::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szRankKey.Empty();
	m_szDepartmentKey.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bApprovalFee=FALSE;
	m_bUnapprovedFee=FALSE;
	m_bPayment=FALSE;

}
int CTMTotalPatientListDischarge::SetMode(int nMode){
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
/*void CTMTotalPatientListDischarge::OnFromDateChange(){
	
} */
/*void CTMTotalPatientListDischarge::OnFromDateSetfocus(){
	
} */
/*void CTMTotalPatientListDischarge::OnFromDateKillfocus(){
	
} */
int CTMTotalPatientListDischarge::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMTotalPatientListDischarge::OnToDateChange(){
	
} */
/*void CTMTotalPatientListDischarge::OnToDateSetfocus(){
	
} */
/*void CTMTotalPatientListDischarge::OnToDateKillfocus(){
	
} */
int CTMTotalPatientListDischarge::OnToDateCheckValue(){
	return 0;
} 
void CTMTotalPatientListDischarge::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CTMTotalPatientListDischarge::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\BAOCAOTONGKETRAVIEN.RPT")))
		return;
	szSQL = GetQueryString();
	int ret =0;
	ret = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);15007337;
	if (ret <=0)
	{
		if (ret < 0)
			_msg(_T("%s"), szSQL);
		else
			_fmsg(_T("%s"), szSQL);
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	CReportSection *rptDetail = NULL, * rptGroup = NULL;
	int nIdx=1;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("loai"), szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
			if (rptGroup)
			{
					tmpStr = szNewGroup;
				rptGroup->SetValue(_T("GroupName"), tmpStr);
			}

			szOldGroup = szNewGroup;
			nIdx = 1;
		}
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
		tmpStr.Format(_T("%d"), nIdx++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("soba"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("hoso"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("hovaten"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("ngayra"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("doituong"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("benhan"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("giayravien"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("phoithanhtoan"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("thebhyt"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("cmt"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		rs.GetValue(_T("giaytokhac"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);
		}
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CTMTotalPatientListDischarge::OnExportSelect(){

}
 
void CTMTotalPatientListDischarge::OnListDblClick(){
	
} 
void CTMTotalPatientListDischarge::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTMTotalPatientListDischarge::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMTotalPatientListDischarge::OnListLoadData(){
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
			rs.GetValue(_T("hd_docno")), 
			rs.GetValue(_T("hovaten")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("CAPBAC")), 
			rs.GetValue(_T("HP_WORKPLACE")), 
			rs.GetValue(_T("HD_DIAGNOSTIC")), 
			rs.GetValue(_T("DOITUONG")), 
			rs.GetValue(_T("htr_deptid")),
			rs.GetValue(_T("htr_dischargedate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CTMTotalPatientListDischarge::OnAllSelect(){
	m_szCondition = _T("A");
	//OnListLoadData();
}
void CTMTotalPatientListDischarge::OnInPatientSelect(){
	m_szCondition = _T("I");
	//OnListLoadData();
}
void CTMTotalPatientListDischarge::OnOutPatientSelect(){
	m_szCondition = _T("E");
	//OnListLoadData();
}
void CTMTotalPatientListDischarge::OnApprovalFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bUnapprovedFee = false ;
	m_bPayment = false;
	UpdateData(false);
}
void CTMTotalPatientListDischarge::OnUnapprovedFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bApprovalFee = false;
	m_bPayment = false;
	UpdateData(false);
}
void CTMTotalPatientListDischarge::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bApprovalFee = false;
	m_bUnapprovedFee = false ;
	UpdateData(false);
}
void CTMTotalPatientListDischarge::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMTotalPatientListDischarge::OnObjectSelendok(){
	 
}
/*void CTMTotalPatientListDischarge::OnObjectSetfocus(){
	
}*/
/*void CTMTotalPatientListDischarge::OnObjectKillfocus(){
	
}*/
long CTMTotalPatientListDischarge::OnObjectLoadData(){
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
/*void CTMTotalPatientListDischarge::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMTotalPatientListDischarge::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMTotalPatientListDischarge::OnRankSelendok(){
	 
}
/*void CTMTotalPatientListDischarge::OnRankSetfocus(){
	
}*/
/*void CTMTotalPatientListDischarge::OnRankKillfocus(){
	
}*/
long CTMTotalPatientListDischarge::OnRankLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
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
/*void CTMTotalPatientListDischarge::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CTMTotalPatientListDischarge::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTMTotalPatientListDischarge::OnDepartmentSelendok(){
	 
}
/*void CTMTotalPatientListDischarge::OnDepartmentSetfocus(){
	
}*/
/*void CTMTotalPatientListDischarge::OnDepartmentKillfocus(){
	
}*/
long CTMTotalPatientListDischarge::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 AND sd_type IN('DT') %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMTotalPatientListDischarge::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CTMTotalPatientListDischarge::OnAddTMPatientListDischarge(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMTotalPatientListDischarge::OnEditTMPatientListDischarge(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMTotalPatientListDischarge::OnDeleteTMPatientListDischarge(){
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
 		OnCancelTMPatientListDischarge();
 	}
	return 0;
}
int CTMTotalPatientListDischarge::OnSaveTMPatientListDischarge(){
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
 		//OnTMPatientListDischargeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMTotalPatientListDischarge::OnCancelTMPatientListDischarge(){
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
int CTMTotalPatientListDischarge::OnTMPatientListDischargeListLoadData(){
	return 0;
}
CString CTMTotalPatientListDischarge::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank, szDept1, szFilter;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);

	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);

	if(!m_szDepartmentKey.IsEmpty())
	szDept.AppendFormat(_T(" AND htr_deptid='%s'"), m_szDepartmentKey);

	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'N') IN('N','Y') "));
	//Trang thai noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'N')='N' "));
	//Trang thai ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" AND NVL(htr_outpatient, 'N')='Y' "));
	
	if (m_bApprovalFee)
		szFilter = _T(" AND htrf_acceptedfee='Y'");
	else if (m_bUnapprovedFee)
		szFilter = _T(" AND htrf_acceptedfee='N'");
	else if (m_bPayment)
		szFilter = _T(" AND htrf_acceptedfee='P'");

	szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M' AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT DISTINCT ")\
		_T("	 CASE WHEN ho_type IN('S') THEN '\x110\x1ED1i t\x1B0\x1EE3ng \x64\x1ECB\x63h v\x1EE5' WHEN ho_type IN('C', 'I') THEN '\x110\x1ED1i t\x1B0\x1EE3ng \x62\x1EA3o hi\x1EC3m' WHEN ho_type IN('D', 'P') THEN '\x110\x1ED1i t\x1B0\x1EE3ng \x63h\xEDnh s\xE1\x63h' END loai,") \
		_T("	 htr_recordno soba,") \
		_T("     hd_docno hoso,") \
		_T("     get_patientname(hd_docno) hovaten,") \
		_T("     htr_dischargedate ngayra,") \
		_T("     get_objectname(hd_object) doituong,") \
		_T("     CASE WHEN hhc_record = 'Y' THEN 'X' END benhan,") \
		_T("     CASE WHEN hhc_dischargedsheet = 'Y' THEN 'X' END giayravien,") \
		_T("     CASE WHEN hhc_paymentsheet = 'Y' THEN 'X' END phoithanhtoan,") \
		_T("     CASE WHEN hhc_inscard = 'Y' THEN 'X' END thebhyt,") \
		_T("     CASE WHEN hhc_idcard = 'Y' THEN 'X' END cmt,") \
		_T("     CASE WHEN hhc_others = 'Y' THEN hhc_desc END giaytokhac") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(ho_id = hd_object)") \
		_T("   LEFT JOIN hms_exam") \
		_T("   ON(hd_docno=he_docno)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno=hd_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno =hd_docno") \
		_T("   AND htr_idx  =hcr_refidx)") \
		_T("   LEFT JOIN hms_handin_content ON(hhc_docno =htr_docno)") \
		_T("   WHERE 1             =1 AND NVL(htr_outpatient, 'N') = 'N' %s %s %s %s %s") \
		_T("   UNION ALL")\
		_T("	 SELECT DISTINCT ")\
		_T("	 CASE WHEN ho_type IN('S') THEN '\x110\x1ED1i t\x1B0\x1EE3ng \x64\x1ECB\x63h v\x1EE5' WHEN ho_type IN('C', 'I') THEN '\x110\x1ED1i t\x1B0\x1EE3ng \x62\x1EA3o hi\x1EC3m' WHEN ho_type IN('D', 'P') THEN '\x110\x1ED1i t\x1B0\x1EE3ng \x63h\xEDnh s\xE1\x63h' END loai,") \
		_T("	 htr_recordno soba,") \
		_T("     hd_docno hoso,") \
		_T("     get_patientname(hd_docno) hovaten,") \
		_T("     htr_dischargedate ngayra,") \
		_T("     get_objectname(hd_object) doituong,") \
		_T("     CASE WHEN hhc_record = 'Y' THEN 'X' END benhan,") \
		_T("     CASE WHEN hhc_dischargedsheet = 'Y' THEN 'X' END giayravien,") \
		_T("     CASE WHEN hhc_paymentsheet = 'Y' THEN 'X' END phoithanhtoan,") \
		_T("     CASE WHEN hhc_inscard = 'Y' THEN 'X' END thebhyt,") \
		_T("     CASE WHEN hhc_idcard = 'Y' THEN 'X' END cmt,") \
		_T("     CASE WHEN hhc_others = 'Y' THEN hhc_desc END giaytokhac") \
		_T("   FROM hms_patient") \
		_T("   LEFT JOIN hms_doc") \
		_T("   ON(hd_patientno=hp_patientno)") \
		_T("   LEFT JOIN hms_object") \
		_T("   ON(ho_id = hd_object)") \
		_T("   LEFT JOIN hms_exam") \
		_T("   ON(hd_docno=he_docno)") \
		_T("   LEFT JOIN hms_clinical_record") \
		_T("   ON(hcr_docno=hd_docno)") \
		_T("   LEFT JOIN hms_treatment_record") \
		_T("   ON(htr_docno =hd_docno AND hcr_refidx = htr_idx)") \
		_T("   LEFT JOIN hms_handin_content ON(hhc_docno =htr_docno)") \
		_T("   WHERE 1             =1 AND NVL(htr_outpatient, 'N') = 'Y' %s %s %s %s %s") \
		_T("   ORDER BY loai, ngayra"), szDept, szObject, szRank, szWhere,szFilter, szDept, szObject, szRank, szWhere,szFilter);
	return szSQL;
}