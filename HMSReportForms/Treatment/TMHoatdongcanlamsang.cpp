#include "stdafx.h"
#include "HMSMainFrame.h"
#include "TMHoatdongcanlamsang.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMHoatdongcanlamsang *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMHoatdongcanlamsang *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CTMHoatdongcanlamsang *pVw = (CTMHoatdongcanlamsang *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMHoatdongcanlamsang *pVw = (CTMHoatdongcanlamsang *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTMHoatdongcanlamsang*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMHoatdongcanlamsang*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMHoatdongcanlamsang*)pWnd)->OnListDeleteItem();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMHoatdongcanlamsang* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CTMHoatdongcanlamsang *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnStatusAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMHoatdongcanlamsang* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTMHoatdongcanlamsang *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTMHoatdongcanlamsang *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddTMHoatdongcanlamsangFnc(CWnd *pWnd){
	 return ((CTMHoatdongcanlamsang*)pWnd)->OnAddTMHoatdongcanlamsang();
} 
static int _OnEditTMHoatdongcanlamsangFnc(CWnd *pWnd){
	 return ((CTMHoatdongcanlamsang*)pWnd)->OnEditTMHoatdongcanlamsang();
} 
static int _OnDeleteTMHoatdongcanlamsangFnc(CWnd *pWnd){
	 return ((CTMHoatdongcanlamsang*)pWnd)->OnDeleteTMHoatdongcanlamsang();
} 
static int _OnSaveTMHoatdongcanlamsangFnc(CWnd *pWnd){
	 return ((CTMHoatdongcanlamsang*)pWnd)->OnSaveTMHoatdongcanlamsang();
} 
static int _OnCancelTMHoatdongcanlamsangFnc(CWnd *pWnd){
	 return ((CTMHoatdongcanlamsang*)pWnd)->OnCancelTMHoatdongcanlamsang();
} 
CTMHoatdongcanlamsang::CTMHoatdongcanlamsang(CWnd *pWnd){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMHoatdongcanlamsang::~CTMHoatdongcanlamsang(){
}
void CTMHoatdongcanlamsang::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 410, 125);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 205, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 210, 30, 290, 55);
	m_wndToDate.Create(this,295, 30, 405, 55); 
	//m_wndLoad.Create(this, _T("&Load"), 230, 130, 315, 155);
	m_wndPrint.Create(this, _T("&Print"), 320, 130, 405, 155);
	m_wndStatusLabel.Create(this, _T("Status"), 10, 60, 90, 85);
	m_wndStatus.Create(this,95, 60, 405, 85); 
	m_wndDepartmentLab.Create(this, _T("Department"), 9, 90, 89, 115);
	m_wndDepartment.Create(this,94, 90, 405, 115); 

}
void CTMHoatdongcanlamsang::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CTMHoatdongcanlamsang::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CTMHoatdongcanlamsang::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CTMHoatdongcanlamsang::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMHoatdongcanlamsang::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMHoatdongcanlamsang::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();
	m_szDepartmentKey.Empty();

}
int CTMHoatdongcanlamsang::SetMode(int nMode){
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
/*void CTMHoatdongcanlamsang::OnFromDateChange(){
	
} */
/*void CTMHoatdongcanlamsang::OnFromDateSetfocus(){
	
} */
/*void CTMHoatdongcanlamsang::OnFromDateKillfocus(){
	
} */
int CTMHoatdongcanlamsang::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMHoatdongcanlamsang::OnToDateChange(){
	
} */
/*void CTMHoatdongcanlamsang::OnToDateSetfocus(){
	
} */
/*void CTMHoatdongcanlamsang::OnToDateKillfocus(){
	
} */
int CTMHoatdongcanlamsang::OnToDateCheckValue(){
	return 0;
} 
void CTMHoatdongcanlamsang::OnLoadSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMHoatdongcanlamsang::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szNewGroup, szOldGroup,szNewGroup1, szOldGroup1;
	CReportSection *rptDetail = NULL;
	CReportSection *rptSector = NULL;
	CReportSection *rptFooter = NULL;
	CRecord rs(&pMF->m_db);
	CString szCol, szData;
	if(!rpt.Init(_T("Reports/HMS/THONGKEHOATDONGCANLAMSANG.RPT")) )
		return ;
	CReportSection *pTemp = rpt.GetGroupHeader(1);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	BeginWaitCursor();
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	int nCONG[46];
	for(int i = 0 ; i<46; i++)
	{
		nCONG[i] = 0;
	}
	while(!rs.IsEOF()) 
	{	 
		rs.GetValue(_T("ID"), szNewGroup);
		if(szNewGroup !=szOldGroup)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("GROUPNAME")));
			rptDetail->SetValue(_T("GROUPNAME"), tmpStr);
			szOldGroup=szNewGroup;
		}
		rs.GetValue(_T("HPC_GROUPID"), szNewGroup1);
		if(szNewGroup1 !=szOldGroup1)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));
			tmpStr.Format(_T("%s"), rs.GetValue(_T("TYPE")));
			rptDetail->SetValue(_T("TYPE"), tmpStr);
			szOldGroup1=szNewGroup1;
			
			rs.GetValue(_T("QUANN"), tmpStr); 
			rptDetail->SetValue(_T("1"), tmpStr); 

			rs.GetValue(_T("BHQTNN"), tmpStr); 
			rptDetail->SetValue(_T("2"), tmpStr); 

			rs.GetValue(_T("BHQHN"), tmpStr); 
			rptDetail->SetValue(_T("3"), tmpStr); 

			rs.GetValue(_T("BHQDN"), tmpStr); 
			rptDetail->SetValue(_T("4"), tmpStr); 

			rs.GetValue(_T("BANN"), tmpStr); 
			rptDetail->SetValue(_T("5"), tmpStr); 

			rs.GetValue(_T("TEN"), tmpStr); 
			rptDetail->SetValue(_T("6"), tmpStr); 

			rs.GetValue(_T("CSN"), tmpStr); 
			rptDetail->SetValue(_T("7"), tmpStr); 

			rs.GetValue(_T("DVN"), tmpStr); 
			rptDetail->SetValue(_T("8"), tmpStr); 

			rs.GetValue(_T("BHKN"), tmpStr); 
			rptDetail->SetValue(_T("9"), tmpStr); 

			rs.GetValue(_T("BHTNN"), tmpStr); 
			rptDetail->SetValue(_T("10"), tmpStr); 

			rs.GetValue(_T("KHACN"), tmpStr); 
			rptDetail->SetValue(_T("11"), tmpStr); 

			rs.GetValue(_T("CONGN"), tmpStr); 
			rptDetail->SetValue(_T("12"), tmpStr); 

			rs.GetValue(_T("QUANN1"), tmpStr); 
			rptDetail->SetValue(_T("2_1"), tmpStr); 

			rs.GetValue(_T("BHQTNN1"), tmpStr); 
			rptDetail->SetValue(_T("2_2"), tmpStr); 

			rs.GetValue(_T("BHQHN1"), tmpStr); 
			rptDetail->SetValue(_T("2_3"), tmpStr); 

			rs.GetValue(_T("BHQDN1"), tmpStr); 
			rptDetail->SetValue(_T("2_4"), tmpStr); 

			rs.GetValue(_T("BANN1"), tmpStr); 
			rptDetail->SetValue(_T("2_5"), tmpStr); 

			rs.GetValue(_T("TEN1"), tmpStr); 
			rptDetail->SetValue(_T("2_6"), tmpStr); 

			rs.GetValue(_T("CSN1"), tmpStr); 
			rptDetail->SetValue(_T("2_7"), tmpStr); 

			rs.GetValue(_T("DVN1"), tmpStr); 
			rptDetail->SetValue(_T("2_8"), tmpStr); 

			rs.GetValue(_T("BHKN1"), tmpStr); 
			rptDetail->SetValue(_T("2_9"), tmpStr); 

			rs.GetValue(_T("BHTNN1"), tmpStr); 
			rptDetail->SetValue(_T("2_10"), tmpStr); 

			rs.GetValue(_T("KHACN1"), tmpStr); 
			rptDetail->SetValue(_T("2_11"), tmpStr); 

			rs.GetValue(_T("CONGN1"), tmpStr); 
			rptDetail->SetValue(_T("2_12"), tmpStr); 

			rs.GetValue(_T("QUANG"), tmpStr); 
			rptDetail->SetValue(_T("3_1"), tmpStr); 

			rs.GetValue(_T("BHQTNG"), tmpStr); 
			rptDetail->SetValue(_T("3_2"), tmpStr); 

			rs.GetValue(_T("BHQHG"), tmpStr); 
			rptDetail->SetValue(_T("3_3"), tmpStr); 

			rs.GetValue(_T("BHQDG"), tmpStr); 
			rptDetail->SetValue(_T("3_4"), tmpStr); 

			rs.GetValue(_T("BANG"), tmpStr); 
			rptDetail->SetValue(_T("3_5"), tmpStr); 

			rs.GetValue(_T("TEG"), tmpStr); 
			rptDetail->SetValue(_T("3_6"), tmpStr); 

			rs.GetValue(_T("CSG"), tmpStr); 
			rptDetail->SetValue(_T("3_7"), tmpStr); 

			rs.GetValue(_T("DVG"), tmpStr); 
			rptDetail->SetValue(_T("3_8"), tmpStr); 

			rs.GetValue(_T("BHKG"), tmpStr); 
			rptDetail->SetValue(_T("3_9"), tmpStr); 

			rs.GetValue(_T("BHTNG"), tmpStr); 
			rptDetail->SetValue(_T("3_10"), tmpStr); 

			rs.GetValue(_T("KHACG"), tmpStr); 
			rptDetail->SetValue(_T("3_11"), tmpStr); 

			rs.GetValue(_T("CONGG"), tmpStr); 
			rptDetail->SetValue(_T("3_12"), tmpStr);

			rs.GetValue(_T("QUANG1"), tmpStr); 
			rptDetail->SetValue(_T("4_1"), tmpStr); 

			rs.GetValue(_T("BHQTNG1"), tmpStr); 
			rptDetail->SetValue(_T("4_2"), tmpStr); 

			rs.GetValue(_T("BHQHG1"), tmpStr); 
			rptDetail->SetValue(_T("4_3"), tmpStr); 

			rs.GetValue(_T("BHQDG1"), tmpStr); 
			rptDetail->SetValue(_T("4_4"), tmpStr); 

			rs.GetValue(_T("BANG1"), tmpStr); 
			rptDetail->SetValue(_T("4_5"), tmpStr); 

			rs.GetValue(_T("TEG1"), tmpStr); 
			rptDetail->SetValue(_T("4_6"), tmpStr); 

			rs.GetValue(_T("CSG1"), tmpStr); 
			rptDetail->SetValue(_T("4_7"), tmpStr); 

			rs.GetValue(_T("DVG1"), tmpStr); 
			rptDetail->SetValue(_T("4_8"), tmpStr); 

			rs.GetValue(_T("BHKG1"), tmpStr); 
			rptDetail->SetValue(_T("4_9"), tmpStr); 

			rs.GetValue(_T("BHTNG1"), tmpStr); 
			rptDetail->SetValue(_T("4_10"), tmpStr); 

			rs.GetValue(_T("KHACG1"), tmpStr); 
			rptDetail->SetValue(_T("4_11"), tmpStr); 

			rs.GetValue(_T("CONGG1"), tmpStr); 
			rptDetail->SetValue(_T("4_12"), tmpStr);
		}
	 
		rs.MoveNext();	
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
	
} 
void CTMHoatdongcanlamsang::OnListDblClick(){
	
} 
void CTMHoatdongcanlamsang::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMHoatdongcanlamsang::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMHoatdongcanlamsang::OnListLoadData(){
/*
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("TenBenhNhan")), 
			rs.GetValue(_T("NamSinh")), 
			rs.GetValue(_T("CapBac")), 
			rs.GetValue(_T("Donvi")), 
			rs.GetValue(_T("Chandoan")), 
			rs.GetValue(_T("Doituong")), 
			rs.GetValue(_T("Vaokhoa")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CTMHoatdongcanlamsang::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMHoatdongcanlamsang::OnStatusSelendok(){
	 
}
/*void CTMHoatdongcanlamsang::OnStatusSetfocus(){
	
}*/
/*void CTMHoatdongcanlamsang::OnStatusKillfocus(){
	
}*/
long CTMHoatdongcanlamsang::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szStatusKey);
	};
	m_wndStatus.DeleteAllItems(); 
	szSQL.Format(_T("SELECT SS_CODE id,SS_DESC name FROM sys_sel where ss_id='hms_order_status' and ss_index in(0,2)"), szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMHoatdongcanlamsang::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CTMHoatdongcanlamsang::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CTMHoatdongcanlamsang::OnDepartmentSelendok(){
	 
}
/*void CTMHoatdongcanlamsang::OnDepartmentSetfocus(){
	
}*/
/*void CTMHoatdongcanlamsang::OnDepartmentKillfocus(){
	
}*/
long CTMHoatdongcanlamsang::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept order by id"), szWhere);
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
/*void CTMHoatdongcanlamsang::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
int CTMHoatdongcanlamsang::OnAddTMHoatdongcanlamsang(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMHoatdongcanlamsang::OnEditTMHoatdongcanlamsang(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMHoatdongcanlamsang::OnDeleteTMHoatdongcanlamsang(){
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
 		OnCancelTMHoatdongcanlamsang();
 	}
	return 0;
}
int CTMHoatdongcanlamsang::OnSaveTMHoatdongcanlamsang(){
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
 		//OnTMHoatdongcanlamsangListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMHoatdongcanlamsang::OnCancelTMHoatdongcanlamsang(){
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
int CTMHoatdongcanlamsang::OnTMHoatdongcanlamsangListLoadData(){
	return 0;
}
CString CTMHoatdongcanlamsang::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere,szDept,szStatus;
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HPC_DEPTID = '%s'"), m_szDepartmentKey);
	if (!m_szStatusKey.IsEmpty())
		szStatus.AppendFormat(_T(" AND HPC_STATUS = '%s'"), m_szStatusKey);
	szWhere.Format(_T(" AND HPC_ORDERDATE BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	szSQL.Format(_T(" SELECT 1 ID,'\x58\xE9t nghi\x1EC7m' GROUPNAME,HPC_GROUPID,") \
_T("        (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID=HFG_ID) TYPE,") \
_T("        QUANN,BHQTNN,BHQHN,BHQDN,BANN,TEN,CSN,DVN,BHKN,BHTNN,KHACN,CONGN,") \
_T("        QUANN1,BHQTNN1,BHQHN1,BHQDN1,BANN1,TEN1,CSN1,DVN1,BHKN1,BHTNN1,KHACN1,CONGN1,") \
_T("        QUANG,BHQTNG,BHQHG,BHQDG,BANG,TEG,CSG,DVG,BHKG,BHTNG,KHACG,CONGG,") \
_T("        QUANG1,BHQTNG1,BHQHG1,BHQDG1,BANG1,TEG1,CSG1,DVG1,BHKG1,BHTNG1,KHACG1,CONGG1") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        SUM(QUANN1) QUANN,SUM(BHQTNN1) BHQTNN,SUM(BHQHN1) BHQHN,SUM(BHQDN1) BHQDN,SUM(BANN1) BANN,SUM(TEN1) TEN,SUM(CSN1) CSN,SUM(DVN1) DVN,SUM(BHKN1) BHKN,SUM(BHTNN1) BHTNN,SUM(KHACN1) KHACN,") \
_T("       (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN,") \
_T("        SUM(QUANG1) QUANG,SUM(BHQTNG1) BHQTNG,SUM(BHQHG1) BHQHG,SUM(BHQDG1) BHQDG,SUM(BANG1) BANG,SUM(TEG1) TEG,SUM(CSG1) CSG,SUM(DVG1) DVG,SUM(BHKG1) BHKG,SUM(BHTNG1) BHTNG,SUM(KHACG1) KHACG,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS KHACG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_DEPTID,HPC_CLASS,HPC_OBJECT,HPC_GROUPID") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" WHERE 1=1 %s %s %s))") \
_T(" GROUP BY HPC_GROUPID)") \
_T(" LEFT JOIN(SELECT HPC_GROUPID,") \
_T("        SUM(QUANN1) QUANN1,SUM(BHQTNN1) BHQTNN1,SUM(BHQHN1) BHQHN1,SUM(BHQDN1) BHQDN1,SUM(BANN1) BANN1,SUM(TEN1) TEN1,SUM(CSN1) CSN1,SUM(DVN1) DVN1,SUM(BHKN1) BHKN1,SUM(BHTNN1) BHTNN1,SUM(KHACN1) KHACN1,") \
_T("       (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN1,") \
_T("        SUM(QUANG1) QUANG1,SUM(BHQTNG1) BHQTNG1,SUM(BHQHG1) BHQHG1,SUM(BHQDG1) BHQDG1,SUM(BANG1) BANG1,SUM(TEG1) TEG1,SUM(CSG1) CSG1,SUM(DVG1) DVG1,SUM(BHKG1) BHKG1,SUM(BHTNG1) BHTNG1,SUM(KHACG1) KHACG1,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG1") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS KHACG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_DEPTID,HPC_CLASS,HPC_OBJECT,HPCL_ORDERLINEID,HPCL_QTY,HPC_ORDERDATE,HPC_GROUPID") \
_T(" FROM HMS_TESTORDER") \
_T(" LEFT JOIN HMS_TESTORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" WHERE 1=1 %s %s %s))") \
_T(" GROUP BY HPC_GROUPID) USING(HPC_GROUPID)") \
_T(" UNION") \
_T(" SELECT 2 ID,'\x43h\x1EA5n \x111o\xE1n h\xECnh \x1EA3nh' GROUPNAME,HPC_GROUPID,") \
_T("        (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID=HFG_ID) TYPE,") \
_T("        QUANN,BHQTNN,BHQHN,BHQDN,BANN,TEN,CSN,DVN,BHKN,BHTNN,KHACN,CONGN,") \
_T("        QUANN1,BHQTNN1,BHQHN1,BHQDN1,BANN1,TEN1,CSN1,DVN1,BHKN1,BHTNN1,KHACN1,CONGN1,") \
_T("        QUANG,BHQTNG,BHQHG,BHQDG,BANG,TEG,CSG,DVG,BHKG,BHTNG,KHACG,CONGG,") \
_T("        QUANG1,BHQTNG1,BHQHG1,BHQDG1,BANG1,TEG1,CSG1,DVG1,BHKG1,BHTNG1,KHACG1,CONGG1") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        SUM(QUANN1) QUANN,SUM(BHQTNN1) BHQTNN,SUM(BHQHN1) BHQHN,SUM(BHQDN1) BHQDN,SUM(BANN1) BANN,SUM(TEN1) TEN,SUM(CSN1) CSN,SUM(DVN1) DVN,SUM(BHKN1) BHKN,SUM(BHTNN1) BHTNN,SUM(KHACN1) KHACN,") \
_T("       (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN,") \
_T("        SUM(QUANG1) QUANG,SUM(BHQTNG1) BHQTNG,SUM(BHQHG1) BHQHG,SUM(BHQDG1) BHQDG,SUM(BANG1) BANG,SUM(TEG1) TEG,SUM(CSG1) CSG,SUM(DVG1) DVG,SUM(BHKG1) BHKG,SUM(BHTNG1) BHTNG,SUM(KHACG1) KHACG,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS KHACG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_DEPTID,HPC_CLASS,HPC_OBJECT,HPC_GROUPID") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" WHERE HPC_GROUPID IN('B2100','B2200','B2300','B3100','B2400','B3200') %s %s %s))") \
_T(" GROUP BY HPC_GROUPID)") \
_T(" LEFT JOIN(SELECT HPC_GROUPID,") \
_T("        SUM(QUANN1) QUANN1,SUM(BHQTNN1) BHQTNN1,SUM(BHQHN1) BHQHN1,SUM(BHQDN1) BHQDN1,SUM(BANN1) BANN1,SUM(TEN1) TEN1,SUM(CSN1) CSN1,SUM(DVN1) DVN1,SUM(BHKN1) BHKN1,SUM(BHTNN1) BHTNN1,SUM(KHACN1) KHACN1,") \
_T("       (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN1,") \
_T("        SUM(QUANG1) QUANG1,SUM(BHQTNG1) BHQTNG1,SUM(BHQHG1) BHQHG1,SUM(BHQDG1) BHQDG1,SUM(BANG1) BANG1,SUM(TEG1) TEG1,SUM(CSG1) CSG1,SUM(DVG1) DVG1,SUM(BHKG1) BHKG1,SUM(BHTNG1) BHTNG1,SUM(KHACG1) KHACG1,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG1") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS KHACG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_DEPTID,HPC_CLASS,HPC_OBJECT,HPCL_ORDERLINEID,HPCL_QTY,HPC_ORDERDATE,HPC_GROUPID") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" WHERE HPC_GROUPID IN('B2100','B2200','B2300','B3100','B2400','B3200') %s %s %s))") \
_T(" GROUP BY HPC_GROUPID) USING(HPC_GROUPID)") \
_T(" UNION") \
_T(" SELECT 3 ID,'\x43h\x1EA5n \x111o\xE1n \x63h\x1EE9\x63 n\x103ng' GROUPNAME,HPC_GROUPID,") \
_T("        (SELECT HFG_NAME FROM HMS_FEE_GROUP WHERE HPC_GROUPID=HFG_ID) TYPE,") \
_T("        QUANN,BHQTNN,BHQHN,BHQDN,BANN,TEN,CSN,DVN,BHKN,BHTNN,KHACN,CONGN,") \
_T("        QUANN1,BHQTNN1,BHQHN1,BHQDN1,BANN1,TEN1,CSN1,DVN1,BHKN1,BHTNN1,KHACN1,CONGN1,") \
_T("        QUANG,BHQTNG,BHQHG,BHQDG,BANG,TEG,CSG,DVG,BHKG,BHTNG,KHACG,CONGG,") \
_T("        QUANG1,BHQTNG1,BHQHG1,BHQDG1,BANG1,TEG1,CSG1,DVG1,BHKG1,BHTNG1,KHACG1,CONGG1") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        SUM(QUANN1) QUANN,SUM(BHQTNN1) BHQTNN,SUM(BHQHN1) BHQHN,SUM(BHQDN1) BHQDN,SUM(BANN1) BANN,SUM(TEN1) TEN,SUM(CSN1) CSN,SUM(DVN1) DVN,SUM(BHKN1) BHKN,SUM(BHTNN1) BHTNN,SUM(KHACN1) KHACN,") \
_T("       (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN,") \
_T("        SUM(QUANG1) QUANG,SUM(BHQTNG1) BHQTNG,SUM(BHQHG1) BHQHG,SUM(BHQDG1) BHQDG,SUM(BANG1) BANG,SUM(TEG1) TEG,SUM(CSG1) CSG,SUM(DVG1) DVG,SUM(BHKG1) BHKG,SUM(BHTNG1) BHTNG,SUM(KHACG1) KHACG,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN 1 ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN 1 ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN 1 ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN 1 ELSE 0 END AS KHACG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_DEPTID,HPC_CLASS,HPC_OBJECT,HPC_GROUPID") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" WHERE HPC_GROUPID IN('B3300','B3400','B3500','B3600') %s %s %s))") \
_T(" GROUP BY HPC_GROUPID)") \
_T(" LEFT JOIN(SELECT HPC_GROUPID,") \
_T("        SUM(QUANN1) QUANN1,SUM(BHQTNN1) BHQTNN1,SUM(BHQHN1) BHQHN1,SUM(BHQDN1) BHQDN1,SUM(BANN1) BANN1,SUM(TEN1) TEN1,SUM(CSN1) CSN1,SUM(DVN1) DVN1,SUM(BHKN1) BHKN1,SUM(BHTNN1) BHTNN1,SUM(KHACN1) KHACN1,") \
_T("       (SUM(QUANN1)+SUM(BHQTNN1)+SUM(BHQHN1)+SUM(BHQDN1)+SUM(BANN1)+SUM(TEN1)+SUM(CSN1)+SUM(DVN1)+SUM(BHKN1)+SUM(BHTNN1)+SUM(KHACN1)) CONGN1,") \
_T("        SUM(QUANG1) QUANG1,SUM(BHQTNG1) BHQTNG1,SUM(BHQHG1) BHQHG1,SUM(BHQDG1) BHQDG1,SUM(BANG1) BANG1,SUM(TEG1) TEG1,SUM(CSG1) CSG1,SUM(DVG1) DVG1,SUM(BHKG1) BHKG1,SUM(BHTNG1) BHTNG1,SUM(KHACG1) KHACG1,") \
_T("        (SUM(QUANG1)+SUM(BHQTNG1)+SUM(BHQHG1)+SUM(BHQDG1)+SUM(BANG1)+SUM(TEG1)+SUM(CSG1)+SUM(DVG1)+SUM(BHKG1)+SUM(BHTNG1)+SUM(KHACG1)) CONGG1") \
_T(" FROM(SELECT HPC_GROUPID,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS QUANN1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQTNN1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQHN1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHQDN1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BANN1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS TEN1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS CSN1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS DVN1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHKN1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS BHTNN1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='I' THEN HPCL_QTY ELSE 0 END AS KHACN1,") \
_T("        CASE WHEN HPC_OBJECT=1 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS QUANG1,") \
_T("        CASE WHEN HPC_OBJECT=11 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQTNG1,") \
_T("        CASE WHEN HPC_OBJECT=2 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQHG1,") \
_T("        CASE WHEN HPC_OBJECT=10 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHQDG1,") \
_T("        CASE WHEN HPC_OBJECT=8 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BANG1,") \
_T("        CASE WHEN HPC_OBJECT IN(9,6) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS TEG1,") \
_T("        CASE WHEN HPC_OBJECT=3 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS CSG1,") \
_T("        CASE WHEN HPC_OBJECT=7 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS DVG1,") \
_T("        CASE WHEN HPC_OBJECT=4 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHKG1,") \
_T("        CASE WHEN HPC_OBJECT=5 AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS BHTNG1,") \
_T("        CASE WHEN HPC_OBJECT NOT IN(1,2,11,10,8,9,6,3,7,4,5) AND HPC_CLASS='E' THEN HPCL_QTY ELSE 0 END AS KHACG1") \
_T(" FROM(SELECT DISTINCT HPC_DOCNO,HPC_DEPTID,HPC_CLASS,HPC_OBJECT,HPCL_ORDERLINEID,HPCL_QTY,HPC_ORDERDATE,HPC_GROUPID") \
_T(" FROM HMS_PACSORDER") \
_T(" LEFT JOIN HMS_PACSORDERLINE ON(HPCL_DOCNO=HPC_DOCNO AND HPC_ORDERID=HPCL_ORDERID)") \
_T(" WHERE HPC_GROUPID IN('B3300','B3400','B3500','B3600') %s %s %s))") \
_T(" GROUP BY HPC_GROUPID) USING(HPC_GROUPID)"), szStatus,szDept, szWhere,
												 szStatus, szDept, szWhere, 
												 szStatus, szDept, szWhere, 
												 szStatus, szDept, szWhere, 
												 szStatus, szDept, szWhere, 
												 szStatus, szDept, szWhere);
	return szSQL;
}