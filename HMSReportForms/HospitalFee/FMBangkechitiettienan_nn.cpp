#include "stdafx.h"
#include "FMBangkechitiettienan_nn.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBangkechitiettienannn *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMBangkechitiettienannn *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFMBangkechitiettienannn* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CFMBangkechitiettienannn *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CFMBangkechitiettienannn *)pWnd)->OnObjectAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMBangkechitiettienannn *pVw = (CFMBangkechitiettienannn *)pWnd;
	pVw->OnExportSelect();
}

static void _OnChedoanSelectFnc(CWnd *pWnd)
{
	 ((CFMBangkechitiettienannn*)pWnd)->OnChedoanSelect();
}

static long _OnObjectListLoadDataFnc(CWnd *pWnd)
{
	return ((CFMBangkechitiettienannn*)pWnd)->OnObjectListLoadData();
}

static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CFMBangkechitiettienannn*)pWnd)->OnInsuranceSelect();
}
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CFMBangkechitiettienannn*)pWnd)->OnServiceSelect();
}
static void _OnPolicySelectFnc(CWnd *pWnd){
	  ((CFMBangkechitiettienannn*)pWnd)->OnPolicySelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CFMBangkechitiettienannn*)pWnd)->OnAllSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMBangkechitiettienannn *pVw = (CFMBangkechitiettienannn *)pWnd;
	pVw->OnPrintSelect();
}
static void _OnOtherFoodLevelSelectFnc(CWnd *pWnd)
{
	 ((CFMBangkechitiettienannn*)pWnd)->OnOtherFoodLevelSelect();
}
static void _OnOtherFeeSelectFnc(CWnd *pWnd){
	 ((CFMBangkechitiettienannn*)pWnd)->OnOtherFeeSelect();
}

CFMBangkechitiettienannn::CFMBangkechitiettienannn()
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFMBangkechitiettienannn::~CFMBangkechitiettienannn()
{
}
void CFMBangkechitiettienannn::OnCreateComponents()
{
	m_wndBangketienanchitiet.Create(this, _T("Bảng kê thu chi tiết tiền ăn"), 5, 5, 440, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 220, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 435, 55); 
	m_wndObjectLabel.Create(this, _T("Suất ăn"), 10, 60, 90, 85);
	m_wndObject.Create(this,95, 60, 435, 85); 
	m_wndChedoan.Create(this, _T("Chế độ ăn Sond"), 10, 407, 160, 432);
	m_wndPrint.Create(this, _T("&Print"), 253, 407, 333, 432);
	m_wndExport.Create(this, _T("&ExportXLS"), 343, 407, 435, 432);
	m_wndObjectList.Create(this,10, 96, 435, 371); 
	m_wndInsurance.Create(this, _T("Bảo hiểm"), 10, 376, 100, 401);
	m_wndService.Create(this, _T("Dịch vụ"), 107, 376, 187, 401);
	m_wndPolicy.Create(this, _T("BHQuân"), 193, 376, 273, 401);
	m_wndAll.Create(this, _T("Tất cả"), 279, 376, 359, 401);
	m_wndOtherFoodLevel.Create(this, _T("Các mức ăn khác"), 10, 437, 160, 462);
	m_wndOtherFee.Create(this, _T("Phí khác"), 10, 468, 160, 493);

}
void CFMBangkechitiettienannn::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Bữa sáng"), CFMT_TEXT, 150);
	m_wndObject.InsertColumn(2, _T("Bữa trưa/tối"), CFMT_TEXT, 150);
	m_wndObject.InsertColumn(3, _T("Ngày áp dụng"), CFMT_DATE, 150);
	m_wndObject.InsertColumn(4, _T("Hoạt động"), CFMT_TEXT, 100);


	m_wndObjectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndObjectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_wndObjectList.SetCheckBox(TRUE);
}
void CFMBangkechitiettienannn::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	m_wndObjectList.SetEvent(WE_LOADDATA, _OnObjectListLoadDataFnc);
	m_wndChedoan.SetEvent(WE_CLICK, _OnChedoanSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndPolicy.SetEvent(WE_CLICK, _OnPolicySelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndOtherFee.SetEvent(WE_CLICK, _OnOtherFeeSelectFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndOtherFoodLevel.SetEvent(WE_CLICK, _OnOtherFoodLevelSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	OnObjectListLoadData();
	UpdateData(0);
}
void CFMBangkechitiettienannn::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Check(pDX, m_wndChedoan.GetDlgCtrlID(), m_bChedoan);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndPolicy.GetDlgCtrlID(), m_nPolicy);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Check(pDX, m_wndOtherFoodLevel.GetDlgCtrlID(), m_bOtherFoodLevel);
	DDX_Check(pDX, m_wndOtherFee.GetDlgCtrlID(), m_bOtherFee);
}
void CFMBangkechitiettienannn::SetDefaultValues()
{

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_bChedoan=FALSE;
	m_nInsurance=1;
	m_nService=1;
	m_nPolicy=1;
	m_nAll=0;
	m_bOtherFoodLevel=FALSE;
	m_bOtherFee=FALSE;

}
int CFMBangkechitiettienannn::SetMode(int nMode){
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
/*void CFMBangkechitiettienannn::OnFromDateChange(){
	
} */
/*void CFMBangkechitiettienannn::OnFromDateSetfocus(){
	
} */
/*void CFMBangkechitiettienannn::OnFromDateKillfocus(){
	
} */
int CFMBangkechitiettienannn::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMBangkechitiettienannn::OnToDateChange(){
	
} */
/*void CFMBangkechitiettienannn::OnToDateSetfocus(){
	
} */
/*void CFMBangkechitiettienannn::OnToDateKillfocus(){
	
} */
int CFMBangkechitiettienannn::OnToDateCheckValue(){
	return 0;
} 
void CFMBangkechitiettienannn::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMBangkechitiettienannn::OnObjectSelendok(){
	 
}
/*void CFMBangkechitiettienannn::OnObjectSetfocus(){
	
}*/
/*void CFMBangkechitiettienannn::OnObjectKillfocus(){
	
}*/

void CFMBangkechitiettienannn::OnInsuranceSelect(){
	
}
void CFMBangkechitiettienannn::OnServiceSelect(){
	
}
void CFMBangkechitiettienannn::OnPolicySelect(){
	
}
void CFMBangkechitiettienannn::OnAllSelect(){
	
}

void CFMBangkechitiettienannn::OnChedoanSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMBangkechitiettienannn::OnOtherFoodLevelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CFMBangkechitiettienannn::OnOtherFeeSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}

long CFMBangkechitiettienannn::OnObjectLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" and ef_type='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ef_type, FEE_LEVEL_SANG, FEE_LEVEL_TC, EF_APPLYDATE, EF_ACTIVE from HMS_CONFIG_EXTRA_FEEFOOD %s ORDER BY ef_type "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndObject.AddItems(
			rs.GetValue(_T("ef_type")),
			rs.GetValue(_T("FEE_LEVEL_SANG")),
			rs.GetValue(_T("FEE_LEVEL_TC")),
			rs.GetValue(_T("EF_APPLYDATE")),
			rs.GetValue(_T("EF_ACTIVE")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}

long CFMBangkechitiettienannn::OnObjectListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	m_wndObjectList.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T("SELECT ho_id AS ID, ") \
		         _T("ho_desc AS Name, ") \
				 _T("ho_type AS Type ") \
		         _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ") \
				 _T("ORDER BY cast(ho_id as integer)"),
				 szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObjectList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndObjectList.EndLoad(); 
	return nCount;
	
	return 0;
}


void CFMBangkechitiettienannn::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	CReport rpt;
	CString szSQL, tmpStr, szSysDate, szRptName, szPreviousType, szCurrentType;
	CRecord rs(&pMF->m_db);
	
	szSQL = GetQueryStringallforfrint();
	
	int nIdx = 0;
	double nAmount = 0;
	double nthanhtien = 0, nlttp = 0, nthue = 0, nnhancong = 0;

	long double nthanhtiengroup = 0, nlttpgroup = 0, nthuegroup = 0, nnhanconggroup = 0;

	int nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		return;
	}
	szRptName.Format(_T("Reports/HMS/HF_BANGKETHUCHITIETTIENAN.RPT"));

	if (!rpt.Init(szRptName))
		return;

	rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szHospitalName);

	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	
	CReportSection *rptDetail;
	while (!rs.IsEOF())
	{

		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("c1"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("c2"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("c3"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		
		rs.GetValue(_T("c4"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
	
		rs.GetValue(_T("c5"), nthanhtien);
		nthanhtiengroup += nthanhtien;
		rptDetail->SetValue(_T("6"), double2str(nthanhtien));
		
		rs.GetValue(_T("c6"), nlttp);
		nlttpgroup += nlttp;
		rptDetail->SetValue(_T("7"), double2str(nlttp));

		rs.GetValue(_T("c7"), nthue);
		nthuegroup += nthue;
		rptDetail->SetValue(_T("8"), double2str(nthue));
		
		rs.GetValue(_T("c8"), nnhancong);
		nnhanconggroup += nnhancong;
		rptDetail->SetValue(_T("9"), double2str(nnhancong));

		rs.MoveNext();
	}
	if (nthanhtiengroup > 0)
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));

		tmpStr.Format(_T("%f"), nthanhtiengroup);
		rptDetail->SetValue(_T("s6"), tmpStr);

		tmpStr.Format(_T("%f"), nlttpgroup);
		rptDetail->SetValue(_T("s7"), tmpStr);

		tmpStr.Format(_T("%f"), nthuegroup);
		rptDetail->SetValue(_T("s8"), tmpStr);

		tmpStr.Format(_T("%f"), nnhanconggroup);
		rptDetail->SetValue(_T("s9"), tmpStr);
		
	}

	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	tmpStr = pMF->GetDoctorName(pMF->GetCurrentUser());
	rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	EndWaitCursor();
	rpt.PrintPreview();	
}

void CFMBangkechitiettienannn::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CGuiMenu menu(this);
	CString tmpStr;
	CRect rect;
	int nPos = 0;
	m_wndExport.GetWindowRect(&rect);
	_debug(_T("right: %d|top: %d"), rect.right, rect.top);
	menu.CreatePopupMenu();
	TranslateString(_T("Export mẫu chi tiết"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export mẫu tổng hợp"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	TranslateString(_T("Export mẫu tổng hợp theo khoa"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	nPos = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTALIGN, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportdetail();
			break;
		case 2:
			OnExporttotal();
			break;
		case 3:
			OnExporttotalall();
			break;
		
	}
} 
void CFMBangkechitiettienannn::OnExporttotal()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	AfxMessageBox(_T("Báo cáo chỉ tính suất ăn người nhà. Báo cáo lấy theo thời gian post quỹ!"));	
	CExcel xls;
	if (!xls.Load(_T("Exports\\Bangkechitiettienannn.xls"))) AfxMessageBox(_T("Chưa có File Bangkechitiettienan.xls trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c3"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c4"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c5"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c6"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("c7"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c8"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("c9"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bangkechitiettienan2.xls"));
} 
void CFMBangkechitiettienannn::OnExportdetail()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	AfxMessageBox(_T("Bug fix and performance improvement!"));	
	CExcel xls;
	if (!xls.Load(_T("Exports\\Bangkechitiettienanchitiet.xls"))) AfxMessageBox(_T("Chưa có File Bangkechitiettienanchitiet.xls trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("c3"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c4"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c5"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c6"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c7"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c8"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c9"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("c10"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c11"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("c12"), nTemp);
		nGroupTotal[12] += nTemp;
		xls.SetCellText(nCol+12, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[7] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 4; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bangkechitiettienanchitiet2.xls"));
} 
int CFMBangkechitiettienannn::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	BeginWaitCursor();
	rs->ExecSQL(GetQueryString());
	EndWaitCursor();
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data."));
		return -1;
	}
	if (!xls->Load(_T("Exports\\FM_Mau_BNconphichuathu.xls"))){
		AfxMessageBox(_T("Exports\\FM_Mau_BNconphichuathu.xls"));
		return -1;
	}
	return 0;
}
CString CFMBangkechitiettienannn::GetQueryString()
{
	
	CString szSQL, szWhere, szObjectFilter, szObjects;

	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" )"), m_szObjectKey, m_szObjectKey);		
	}

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in(%s) "), szObjects);
	}

	if(m_nInsurance == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') and iv.hfe_objectid not in ('11') "));
	}
	else if(m_nService == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
	}
	else if (m_nPolicy == 0)
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in ('11') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C','S','D', 'P') "));
	}

	if (m_bChedoan)
	{
		szWhere.AppendFormat(_T(" AND hfl_index1 = 202"));
	}
	szWhere.AppendFormat(_T(" and iv.HFE_DEPTID not in ('PTTYC', 'TYC') and nvl(HFL_FEEFOOD_NN,'N') = 'Y' "));

	if (m_bOtherFoodLevel)
	{
	szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1, ") \
		_T(" buaan as c2,") \
		_T(" SUM(thanhtien) as c3,") \
		_T(" SUM(fee_lttp) as c4,") \
		_T(" SUM(FEE_THUE) as c5,") \
		_T(" SUM(FEE_NHANCONG) as c6,") \
		_T(" SUM(FEE_CHATDOT) as c7,") \
		_T(" SUM(FEE_DUNGCU) as c8,") \
		_T(" SUM(FEE_BAOHO) as c9") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND fe.hfe_unitprice NOT IN (select cast (ss_desc as int) from sys_sel where ss_id='cacbuachinh')") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND fe.hfe_unitprice NOT IN (select cast (ss_desc as int) from sys_sel where ss_id='cacbuachinh')") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa, buaan") \
		_T(" ORDER BY khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);
		}
		else
		{
		szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1, ") \
		_T(" buaan as c2,") \
		_T(" SUM(thanhtien) as c3,") \
		_T(" SUM(fee_lttp) as c4,") \
		_T(" SUM(FEE_THUE) as c5,") \
		_T(" SUM(FEE_NHANCONG) as c6,") \
		_T(" SUM(FEE_CHATDOT) as c7,") \
		_T(" SUM(FEE_DUNGCU) as c8,") \
		_T(" SUM(FEE_BAOHO) as c9") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa, buaan") \
		_T(" ORDER BY khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);
		}

	return szSQL;
}
CString CFMBangkechitiettienannn::GetQueryString1()
{
	CString szSQL, szWhere, szObjectFilter, szObjects;

	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" )"), m_szObjectKey, m_szObjectKey);		
	}

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in(%s)"), szObjects);
	}

	if(m_nInsurance == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') and iv.hfe_objectid not in ('11') "));
	}
	else if(m_nService == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
	}
	else if (m_nPolicy == 0)
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in ('11') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C','S','D', 'P') "));
	}

	if (m_bChedoan)
	{
		szWhere.AppendFormat(_T(" AND hfl_index1 = 202"));
	}

	szWhere.AppendFormat(_T(" and iv.HFE_DEPTID not in ('PTTYC', 'TYC') and nvl(HFL_FEEFOOD_NN,'N') = 'Y'"));



	if (m_bOtherFoodLevel)
	{
	szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1, ") \
		_T(" sohoso as c2, ") \
		_T(" buaan as c3,") \
		_T("  SUM(soluong)      as c4,") \
		_T("   dongia            as c5,") \
		_T(" SUM(thanhtien) as c6,") \
		_T(" SUM(fee_lttp) as c7,") \
		_T(" SUM(FEE_THUE) as c8,") \
		_T(" SUM(FEE_NHANCONG) as c9,") \
		_T(" SUM(FEE_CHATDOT) as c10,") \
		_T(" SUM(FEE_DUNGCU) as c11,") \
		_T(" SUM(FEE_BAOHO) as c12") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa, iv.hfe_docno as sohoso,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T("  fe.hfe_quantity as soluong,") \
		_T("  Fe.Hfe_Unitprice as dongia,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND fe.hfe_unitprice NOT IN (select cast (ss_desc as int) from sys_sel where ss_id='cacbuachinh')") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,iv.hfe_docno as sohoso,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T("  fe.hfe_quantity as soluong,") \
		_T("  Fe.Hfe_Unitprice as dongia,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F' AND 0>1") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND fe.hfe_unitprice NOT IN (select cast (ss_desc as int) from sys_sel where ss_id='cacbuachinh')") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa, sohoso, buaan, soluong, dongia ") \
		_T(" ORDER BY sohoso, buaan, khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);
		}
		else if (m_bOtherFee)
		{
		szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1,") \
		_T(" sohoso as c2,") \
		_T(" buaan as c3,") \
		_T(" SUM(soluong)      as c4,") \
		_T(" dongia            as c5,") \
		_T(" SUM(thanhtien) as c6,") \
		_T(" 0 as c7,") \
		_T(" 0 as c8,") \
		_T(" 0 as c9,") \
		_T(" 0 as c10,") \
		_T(" 0 as c11,") \
		_T(" 0 as c12") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT") \
		_T("   fe.hfe_deptid as khoa,") \
		_T("   iv.hfe_docno AS sohoso,") \
		_T("   fe.hfe_desc as buaan,") \
		_T("   fe.hfe_quantity  AS soluong,") \
		_T("   Fe.Hfe_Unitprice AS dongia,") \
		_T("   fe.hfe_patpaid   AS thanhtien") \
		_T("   FROM hms_fee fe") \
		_T("   LEFT JOIN hms_fee_invoice iv") \
		_T("   ON (fe.hfe_docno     = iv.hfe_docno") \
		_T("   AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T("   LEFT JOIN HMS_OBJECT") \
		_T("   ON (iv.hfe_objectid=ho_id)") \
		_T("   WHERE fe.hfe_type='X'") \
		_T("   AND fe.hfe_group      ='F0000'") \
		_T("   AND fe.HFE_CATEGORY  <> 'Y'") \
		_T("   AND iv.hfe_posted     = 'Y' %s") \
		_T("   AND fe.hfe_itemid IN") \
		_T("     (SELECT ss_code FROM sys_sel WHERE ss_id='phiankhac'") \
		_T("     )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T("   )") \
		_T("   GROUP BY khoa, sohoso, buaan, soluong, dongia") \
		_T("   ORDER BY sohoso, buaan, khoa"), szWhere, m_szFromDate, m_szToDate);		
		}
		else
		{
		szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1, ") \
		_T(" sohoso as c2, ") \
		_T(" buaan as c3,") \
		_T("  SUM(soluong)      as c4,") \
		_T("   dongia            as c5,") \
		_T(" SUM(thanhtien) as c6,") \
		_T(" SUM(fee_lttp) as c7,") \
		_T(" SUM(FEE_THUE) as c8,") \
		_T(" SUM(FEE_NHANCONG) as c9,") \
		_T(" SUM(FEE_CHATDOT) as c10,") \
		_T(" SUM(FEE_DUNGCU) as c11,") \
		_T(" SUM(FEE_BAOHO) as c12") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa, iv.hfe_docno as sohoso,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T("  fe.hfe_quantity as soluong,") \
		_T("  Fe.Hfe_Unitprice as dongia,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,iv.hfe_docno as sohoso,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T("  fe.hfe_quantity as soluong,") \
		_T("  Fe.Hfe_Unitprice as dongia,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa, sohoso, buaan, soluong, dongia ") \
		_T(" ORDER BY sohoso, buaan, khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);		
		}

	return szSQL;
}
void CFMBangkechitiettienannn::OnExporttotalall()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
	{
		nTotal[i] = 0;
		nGroupTotal[i] = 0;
	}
	AfxMessageBox(_T("Báo cáo chỉ tính suất ăn người nhà. Báo cáo lấy theo thời gian post quỹ!"));	
	CExcel xls;
	if (!xls.Load(_T("Exports\\Bangkechitiettienantheokhoath.xls"))) AfxMessageBox(_T("Chưa có File Bangkechitiettienantheokhoath.xls trong thư mục Export!"));	
	xls.SetWorksheet(0);

	xls.SetCellText(0, 0, _T("BỘ QUỐC PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, _T("BỆNH VIỆN TWQĐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryStringall();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 10;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);
		
		rs.GetValue(_T("c1"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c2"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("c3"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c4"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c5"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c6"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c7"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("c8"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);


		rs.GetValue(_T("c9"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[3] > 0)
	{
		xls.SetCellText(1, nRow, _T("Cộng"), FMT_TEXT, true);
		for(int i = 3; i < 30; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Bangkechitiettienantheokhoath2.xls"));
}
CString CFMBangkechitiettienannn::GetQueryStringall()
{
	
	CString szSQL, szWhere, szObjectFilter, szObjects;

	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" )"), m_szObjectKey, m_szObjectKey);		
	}

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in(%s) "), szObjects);
	}

	if(m_nInsurance == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') and iv.hfe_objectid not in ('11') "));
	}
	else if(m_nService == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
	}
	else if (m_nPolicy == 0)
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in ('11') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C','S','D', 'P') "));
	}

	if (m_bChedoan)
	{
		szWhere.AppendFormat(_T(" AND hfl_index1 = 202"));
	}
	
	szWhere.AppendFormat(_T(" and iv.HFE_DEPTID not in ('PTTYC', 'TYC') and nvl(HFL_FEEFOOD_NN,'N') = 'Y' "));

	if (m_bOtherFoodLevel)
	{
	szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1, ") \
		//_T(" buaan as c2,") \//
		_T(" SUM(thanhtien) as c3,") \
		_T(" SUM(fee_lttp) as c4,") \
		_T(" SUM(FEE_THUE) as c5,") \
		_T(" SUM(FEE_NHANCONG) as c6,") \
		_T(" SUM(FEE_CHATDOT) as c7,") \
		_T(" SUM(FEE_DUNGCU) as c8,") \
		_T(" SUM(FEE_BAOHO) as c9") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND fe.hfe_unitprice NOT IN (select cast (ss_desc as int) from sys_sel where ss_id='cacbuachinh')") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND fe.hfe_unitprice NOT IN (select cast (ss_desc as int) from sys_sel where ss_id='cacbuachinh')") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa") \
		_T(" ORDER BY khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);
		}
		else
		{
		szSQL.Format(_T(" SELECT") \
		_T(" khoa as c1, ") \
		//_T(" buaan as c2,") \//
		_T(" SUM(thanhtien) as c3,") \
		_T(" SUM(fee_lttp) as c4,") \
		_T(" SUM(FEE_THUE) as c5,") \
		_T(" SUM(FEE_NHANCONG) as c6,") \
		_T(" SUM(FEE_CHATDOT) as c7,") \
		_T(" SUM(FEE_DUNGCU) as c8,") \
		_T(" SUM(FEE_BAOHO) as c9") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa") \
		_T(" ORDER BY khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);		
		}
	return szSQL;
}
CString CFMBangkechitiettienannn::GetQueryStringallforfrint()
{
	
	CString szSQL, szWhere, szObjectFilter, szObjects;

	if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='%s' AND ef_active='Y')") \
		_T(" )"), m_szObjectKey, m_szObjectKey);		
	}

	for (int i = 0; i < m_wndObjectList.GetItemCount(); i++)
	{
		if (m_wndObjectList.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObjectList.GetItemText(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in(%s) "), szObjects);
	}

	if(m_nInsurance == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C') and iv.hfe_objectid not in ('11') "));
	}
	else if(m_nService == 0)
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('S') "));
	}
	else if (m_nPolicy == 0)
	{
		szWhere.AppendFormat(_T(" and iv.hfe_objectid in ('11') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" AND ho_type in ('I', 'C','S','D', 'P') "));
	}

	if (m_bChedoan)
	{
		szWhere.AppendFormat(_T(" AND hfl_index1 = 202"));
	}

	szSQL.Format(_T(" SELECT khoa         AS c1,") \
		_T("   buaan             AS c2,") \
		_T("   SUM(soluong)      AS c3,") \
		_T("   dongia            AS c4,") \
		_T("   SUM(thanhtien)    AS c5,") \
		_T("   SUM(fee_lttp)     AS c6,") \
		_T("   SUM(FEE_THUE)     AS c7,") \
		_T("   SUM(FEE_NHANCONG) AS c8,") \
		_T("   SUM(FEE_CHATDOT)  AS c9,") \
		_T("   SUM(FEE_DUNGCU)   AS c10,") \
		_T("   SUM(FEE_BAOHO)    AS c11") \
		_T(" FROM") \
		_T(" (") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_quantity  AS soluong,") \
		_T(" Fe.Hfe_Unitprice AS dongia,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='A' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" UNION ALL") \
		_T(" SELECT ") \
		_T(" CASE WHEN hfo_depttype = 'DT' THEN fe.hfe_deptid ELSE hcr_admitdept END as khoa,") \
		_T(" CASE WHEN hfol_type = 'S' THEN CAST(('Bữa sáng') as NVARCHAR2(21))") \
		_T(" WHEN hfol_type = 'T' THEN CAST(('Bữa trưa') as NVARCHAR2(21))") \
		_T(" ELSE CAST(('Bữa tối') as NVARCHAR2(21))") \
		_T(" END AS buaan,") \
		_T(" fe.hfe_quantity  AS soluong,") \
		_T(" Fe.Hfe_Unitprice AS dongia,") \
		_T(" fe.hfe_patpaid as thanhtien,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_LTTP_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_LTTP_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as fee_lttp,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_THUE_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_THUE_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_THUE,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_NHANCONG_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_NHANCONG_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_NHANCONG,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_CHATDOT_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_CHATDOT_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_CHATDOT,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_DUNGCU_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_DUNGCU_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_DUNGCU,") \
		_T(" CASE WHEN hfol_type = 'S'") \
		_T(" THEN (SELECT FEE_BAOHO_SANG*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" ELSE (SELECT FEE_BAOHO_TC*fe.hfe_quantity FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y') ") \
		_T(" END as FEE_BAOHO") \
		_T(" FROM hms_fee fe") \
		_T(" LEFT JOIN hms_fee_invoice iv ON (fe.hfe_docno = iv.hfe_docno AND fe.hfe_invoiceno = iv.hfe_invoiceno)") \
		_T(" LEFT JOIN HMS_OBJECT") \
		_T(" ON (iv.hfe_objectid=ho_id)") \
		_T(" LEFT JOIN hms_feefoodline ON (fe.hfe_docno = HFOL_DOCNO AND fe.hfe_orderline = hfol_orderlineid)") \
		_T(" LEFT JOIN hms_feefood ON (fe.hfe_docno = hfo_docno AND hfo_orderid=hfol_orderid)") \
		_T(" LEFT JOIN HMS_CLINICAL_RECORD ON (fe.hfe_docno=hcr_docno)") \
		_T(" LEFT JOIN hms_fee_list ON(hfl_feeid        =hfol_itemid)") \
		_T(" WHERE fe.hfe_type = 'F'") \
		_T(" AND fe.hfe_group='FF000'") \
		_T(" AND fe.HFE_CATEGORY <> 'Y'") \
		_T(" AND iv.hfe_posted = 'Y'") \
		_T(" %s") \
		_T(" AND ") \
		_T(" (fe.hfe_unitprice IN (SELECT FEE_LEVEL_SANG FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" OR fe.hfe_unitprice IN (SELECT FEE_LEVEL_TC FROM HMS_CONFIG_EXTRA_FEEFOOD WHERE EF_TYPE='S' AND ef_active='Y')") \
		_T(" )") \
		_T(" AND iv.HFE_POSTEDDATE BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')") \
		_T(" )") \
		_T(" GROUP BY khoa, buaan, dongia") \
		_T(" ORDER BY khoa"), szWhere, m_szFromDate, m_szToDate, szWhere, m_szFromDate, m_szToDate);

	return szSQL;
}