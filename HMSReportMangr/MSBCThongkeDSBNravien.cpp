#include "MSBCThongkeDSBNravien.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNravien *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNravien *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNravien *pVw = (CMSBCThongkeDSBNravien *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnAllSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnInPatientSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnOutPatientSelect();
}
static void _OnApprovalFeeSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnApprovalFeeSelect();
}
static void _OnUnapprovedFeeSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnUnapprovedFeeSelect();
}
static void _OnPaymentSelectFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnPaymentSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNravien *pVw = (CMSBCThongkeDSBNravien *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNravien*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCThongkeDSBNravien*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNravien*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNravien* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNravien *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNravien* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNravien *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRankSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNravien* )pWnd)->OnRankSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRankSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnRankSelendok();
}
/*static void _OnRankSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnRankKillfocus();
}*/
/*static void _OnRankKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnRankKillfocus();
}*/
static long _OnRankLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNravien *)pWnd)->OnRankLoadData();
}
/*static void _OnRankAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNravien *)pWnd)->OnRankAddNew();
}*/
static int _OnAddMSBCThongkeDSBNravienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNravien*)pWnd)->OnAddMSBCThongkeDSBNravien();
} 
static int _OnEditMSBCThongkeDSBNravienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNravien*)pWnd)->OnEditMSBCThongkeDSBNravien();
} 
static int _OnDeleteMSBCThongkeDSBNravienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNravien*)pWnd)->OnDeleteMSBCThongkeDSBNravien();
} 
static int _OnSaveMSBCThongkeDSBNravienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNravien*)pWnd)->OnSaveMSBCThongkeDSBNravien();
} 
static int _OnCancelMSBCThongkeDSBNravienFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNravien*)pWnd)->OnCancelMSBCThongkeDSBNravien();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNravien *pVw = (CMSBCThongkeDSBNravien *)pWnd;
	pVw->OnExportSelect();
} 
CMSBCThongkeDSBNravien::CMSBCThongkeDSBNravien(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCThongkeDSBNravien::~CMSBCThongkeDSBNravien(){
}
void CMSBCThongkeDSBNravien::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 9, 29, 81, 54);
	m_wndFromDate.Create(this,85, 29, 195, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 197, 29, 277, 54);
	m_wndToDate.Create(this,282, 29, 392, 54); 
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 143);
	m_wndDepartmentLab.Create(this, _T("Department"), 395, 29, 475, 54);
	m_wndDepartment.Create(this,480, 29, 618, 54); 
	m_wndRanklab.Create(this, _T("Rank"), 9, 58, 81, 83);
	m_wndRank.Create(this,84, 58, 194, 83); 
	m_wndObjectLabel.Create(this, _T("Object"), 197, 58, 277, 83);
	m_wndObject.Create(this,282, 58, 618, 83); 
	m_wndLoad.Create(this, _T("&Load"), 622, 29, 706, 83);
	m_wndPrint.Create(this, _T("&Print"), 709, 29, 789, 83);
	m_wndExport.Create(this, _T("Export"), 792, 29, 872, 83);
	m_wndAll.Create(this, _T("All"), 11, 87, 91, 112);
	m_wndInPatient.Create(this, _T("InPatient"), 96, 87, 176, 112);
	m_wndOutPatient.Create(this, _T("OutPatient"), 181, 87, 261, 112);
	m_wndApprovalFee.Create(this, _T("Approval Fee"), 12, 115, 113, 140);
	m_wndUnapprovedFee.Create(this, _T("Unapproved Fee"), 104, 115, 217, 140);
	m_wndPayment.Create(this, _T("Payment"), 218, 115, 298, 140);
	m_wndList.Create(this,4, 146, 1011, 614); 

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
	m_wndList.InsertColumn(10, _T("\x110\x1ECB\x61 \x63h\x1EC9"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(11, _T("Li\xEAn h\x1EC7"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRank.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRank.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CMSBCThongkeDSBNravien::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndRank.SetCheckValue(true);
	m_wndRank.LimitText(1024);









}
void CMSBCThongkeDSBNravien::OnSetWindowEvents(){
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
void CMSBCThongkeDSBNravien::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRank.GetDlgCtrlID(), m_szRankKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Check(pDX, m_wndApprovalFee.GetDlgCtrlID(), m_bApprovalFee);
	DDX_Check(pDX, m_wndUnapprovedFee.GetDlgCtrlID(), m_bUnapprovedFee);
	DDX_Check(pDX, m_wndPayment.GetDlgCtrlID(), m_bPayment);

}
void CMSBCThongkeDSBNravien::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCThongkeDSBNravien::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCThongkeDSBNravien::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();
	m_szRankKey.Empty();
	m_nAll=0;
	m_nInPatient=1;
	m_nOutPatient=1;
	m_bApprovalFee=FALSE;
	m_bUnapprovedFee=FALSE;
	m_bPayment=FALSE;

}
int CMSBCThongkeDSBNravien::SetMode(int nMode){
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
/*void CMSBCThongkeDSBNravien::OnFromDateChange(){
	
} */
/*void CMSBCThongkeDSBNravien::OnFromDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNravien::OnFromDateKillfocus(){
	
} */
int CMSBCThongkeDSBNravien::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCThongkeDSBNravien::OnToDateChange(){
	
} */
/*void CMSBCThongkeDSBNravien::OnToDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNravien::OnToDateKillfocus(){
	
} */
int CMSBCThongkeDSBNravien::OnToDateCheckValue(){
	return 0;
} 
void CMSBCThongkeDSBNravien::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCThongkeDSBNravien::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\THONGKEDSBNRAVIEN.RPT")))
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
		//diachi
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		//lienhe
		rs.GetValue(_T("contact"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CMSBCThongkeDSBNravien::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 12);	xls.SetColumnWidth(2, 26);	xls.SetColumnWidth(3, 11);	xls.SetColumnWidth(4, 15);	xls.SetColumnWidth(5, 17);	xls.SetColumnWidth(6, 18);	xls.SetColumnWidth(7, 19);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 18);	xls.SetColumnWidth(10, 45);	xls.SetColumnWidth(11, 35);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("\x42\xE1o \x63\xE1o th\x1ED1ng k\xEA \x64\x61nh s\xE1\x63h \x62\x1EC7nh nh\xE2n \x78u\x1EA5t vi\x1EC7n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 14);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("T\xEAn \x62\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("N\x103m sinh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("\x43\x1EA5p \x62\x1EAD\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("\x110\x1A1n v\x1ECB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("\x43h\x1EA5n \x111o\xE1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("V\xE0o kho\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 6, _T("Ng\xE0y r\x61"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 6, _T("\x110\x1ECB\x61 \x63h\x1EC9"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 6, _T("Li\xEAn h\x1EC7"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 11);	xls.SetMerge(3, 3, 0, 11);	szSQL=GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	int nIdx=1;	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"), nIdx++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("hd_docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT|FMT_CENTER);		rs.GetValue(_T("hovaten"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("CAPBAC"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HP_WORKPLACE"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("HD_DIAGNOSTIC"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("DOITUONG"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("htr_deptid"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("htr_dischargedate"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_DATETIME);
		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("contact"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\MSBCThongkeDSBNravien.xls"));

} 
void CMSBCThongkeDSBNravien::OnListDblClick(){
	
} 
void CMSBCThongkeDSBNravien::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCThongkeDSBNravien::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCThongkeDSBNravien::OnListLoadData(){
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
			rs.GetValue(_T("htr_dischargedate")),
			rs.GetValue(_T("address")),
			rs.GetValue(_T("contact")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CMSBCThongkeDSBNravien::OnAllSelect(){
	m_szCondition = _T("A");
	OnListLoadData();
}
void CMSBCThongkeDSBNravien::OnInPatientSelect(){
	m_szCondition = _T("I");
	OnListLoadData();
}
void CMSBCThongkeDSBNravien::OnOutPatientSelect(){
	m_szCondition = _T("E");
	OnListLoadData();
}
void CMSBCThongkeDSBNravien::OnApprovalFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bUnapprovedFee = false ;
	m_bPayment = false;
	UpdateData(false);
	OnListLoadData();
}
void CMSBCThongkeDSBNravien::OnUnapprovedFeeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bApprovalFee = false;
	m_bPayment = false;
	UpdateData(false);
	OnListLoadData();
}
void CMSBCThongkeDSBNravien::OnPaymentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_bApprovalFee = false;
	m_bUnapprovedFee = false ;
	UpdateData(false);
	OnListLoadData();
}
void CMSBCThongkeDSBNravien::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNravien::OnObjectSelendok(){
	 
}
/*void CMSBCThongkeDSBNravien::OnObjectSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNravien::OnObjectKillfocus(){
	
}*/
long CMSBCThongkeDSBNravien::OnObjectLoadData(){
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
/*void CMSBCThongkeDSBNravien::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNravien::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNravien::OnDepartmentSelendok(){
	 
}
/*void CMSBCThongkeDSBNravien::OnDepartmentSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNravien::OnDepartmentKillfocus(){
	
}*/
long CMSBCThongkeDSBNravien::OnDepartmentLoadData(){
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
/*void CMSBCThongkeDSBNravien::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNravien::OnRankSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNravien::OnRankSelendok(){
	 
}
/*void CMSBCThongkeDSBNravien::OnRankSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNravien::OnRankKillfocus(){
	
}*/
long CMSBCThongkeDSBNravien::OnRankLoadData(){
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
/*void CMSBCThongkeDSBNravien::OnRankAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CMSBCThongkeDSBNravien::OnAddMSBCThongkeDSBNravien(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCThongkeDSBNravien::OnEditMSBCThongkeDSBNravien(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCThongkeDSBNravien::OnDeleteMSBCThongkeDSBNravien(){
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
 		OnCancelMSBCThongkeDSBNravien();
 	}
	return 0;
}
int CMSBCThongkeDSBNravien::OnSaveMSBCThongkeDSBNravien(){
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
 		//OnMSBCThongkeDSBNravienListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCThongkeDSBNravien::OnCancelMSBCThongkeDSBNravien(){
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
int CMSBCThongkeDSBNravien::OnMSBCThongkeDSBNravienListLoadData(){
	return 0;
}
CString CMSBCThongkeDSBNravien::GetQueryString()
{
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere, szDept, szObject, szRank, szDept1,szFilter;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND (htr_deptid='%s' or htr_ctdeptid='%s' )"), m_szDepartmentKey, m_szDepartmentKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept1.AppendFormat(_T(" WHERE htr_deptid='%s' "), m_szDepartmentKey);
	if (!m_szRankKey.IsEmpty())
		szRank.AppendFormat(_T(" AND hp_rank = '%s'"), m_szRankKey);

	if (m_szCondition == _T("A"))
		szWhere.AppendFormat(_T(" and htr_outpatient IN('N','Y') "));
	//Trang thai noi tru
	if (m_szCondition == _T("I"))
		szWhere.AppendFormat(_T(" and htr_outpatient='N' "));
	//Trang thai ngoai tru
	if (m_szCondition == _T("E"))
		szWhere.AppendFormat(_T(" and htr_outpatient='Y' "));
	
	if (m_bApprovalFee)
		szFilter = _T(" AND HTRF_ACCEPTEDFEE='Y'");
	else if (m_bUnapprovedFee)
		szFilter = _T(" AND HTRF_ACCEPTEDFEE='N'");
	else if (m_bPayment)
		szFilter = _T(" AND HCRF_ACCEPTEDFEE='P'");

	szWhere.AppendFormat(_T(" AND htr_status='T' AND htr_suggestion <> 'M' AND ") \
		_T(" htr_dischargedate BETWEEN TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS') AND TO_TIMESTAMP ('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
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
_T("        htr_deptid,htr_dischargedate,") \
_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS address,") \
_T("		CASE WHEN hd_contacttel = hd_telephone THEN hd_telephone WHEN hd_contacttel <> hd_telephone THEN TRIM(hd_telephone || ' (' || hd_contacttel || ')') END AS contact") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE 1=1 %s %s %s %s %s) %s") \
_T(" ORDER BY typeid,htr_deptid,capbac"), szDept, szObject, szRank, szWhere,szFilter, szDept1);
	return szSQL;
}