#include "stdafx.h"
#include "EMThongkebenhnhan.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongkebenhnhan *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMThongkebenhnhan *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMThongkebenhnhan* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CEMThongkebenhnhan *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMThongkebenhnhan* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMThongkebenhnhan *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMThongkebenhnhan *)pWnd)->OnDeptAddNew();
}*/
static void _OnServiceSelectFnc(CWnd *pWnd){
	  ((CEMThongkebenhnhan*)pWnd)->OnServiceSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	  ((CEMThongkebenhnhan*)pWnd)->OnInsuranceSelect();
}
static void _OnBDCSSelectFnc(CWnd *pWnd){
	  ((CEMThongkebenhnhan*)pWnd)->OnBDCSSelect();
}
static void _OnExcelSelectFnc(CWnd *pWnd){
	CEMThongkebenhnhan *pVw = (CEMThongkebenhnhan *)pWnd;
	pVw->OnExcelSelect();
} 
static int _OnAddEMThongkebenhnhanFnc(CWnd *pWnd){
	 return ((CEMThongkebenhnhan*)pWnd)->OnAddEMThongkebenhnhan();
} 
static int _OnEditEMThongkebenhnhanFnc(CWnd *pWnd){
	 return ((CEMThongkebenhnhan*)pWnd)->OnEditEMThongkebenhnhan();
} 
static int _OnDeleteEMThongkebenhnhanFnc(CWnd *pWnd){
	 return ((CEMThongkebenhnhan*)pWnd)->OnDeleteEMThongkebenhnhan();
} 
static int _OnSaveEMThongkebenhnhanFnc(CWnd *pWnd){
	 return ((CEMThongkebenhnhan*)pWnd)->OnSaveEMThongkebenhnhan();
} 
static int _OnCancelEMThongkebenhnhanFnc(CWnd *pWnd){
	 return ((CEMThongkebenhnhan*)pWnd)->OnCancelEMThongkebenhnhan();
} 
CEMThongkebenhnhan::CEMThongkebenhnhan(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMThongkebenhnhan::~CEMThongkebenhnhan(){
}
void CEMThongkebenhnhan::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 20, 28, 100, 53);
	m_wndFromDate.Create(this,105, 28, 225, 53); 
	m_wndToDateLabel.Create(this, _T("To Date"), 238, 28, 318, 53);
	m_wndToDate.Create(this,323, 28, 443, 53); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 20, 61, 100, 86);
	m_wndReportCondition.Create(this, _T("Report Condition"), 3, 1, 452, 163);
	m_wndDepartment.Create(this,106, 61, 443, 86); 
	m_wndRoomLabel.Create(this, _T("Room"), 20, 94, 100, 119);
	m_wndRoom.Create(this,106, 94, 443, 119); 
	m_wndService.Create(this, _T("Service"), 160, 130, 240, 155);
	m_wndInsurance.Create(this, _T("Insurance"), 265, 130, 345, 155);
	m_wndBDCS.Create(this, _T("BÐCS"), 363, 130, 443, 155);
	m_wndExcel.Create(this, _T("Excel"), 363, 173, 443, 198);

}
void CEMThongkebenhnhan::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CEMThongkebenhnhan::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndBDCS.SetEvent(WE_CLICK, _OnBDCSSelectFnc);
	m_wndExcel.SetEvent(WE_CLICK, _OnExcelSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);

}
void CEMThongkebenhnhan::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Radio(pDX, m_wndService.GetDlgCtrlID(), m_nService);
	DDX_Radio(pDX, m_wndInsurance.GetDlgCtrlID(), m_nInsurance);
	DDX_Radio(pDX, m_wndBDCS.GetDlgCtrlID(), m_nBDCS);

}
void CEMThongkebenhnhan::UpdateJson(BOOL bSave){
	
}
void CEMThongkebenhnhan::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMThongkebenhnhan::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMThongkebenhnhan::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();
	m_nService=0;
	m_nInsurance=1;
	m_nBDCS=1;

}
int CEMThongkebenhnhan::SetMode(int nMode){
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
/*void CEMThongkebenhnhan::OnFromDateChange(){
	
} */
/*void CEMThongkebenhnhan::OnFromDateSetfocus(){
	
} */
/*void CEMThongkebenhnhan::OnFromDateKillfocus(){
	
} */
int CEMThongkebenhnhan::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMThongkebenhnhan::OnToDateChange(){
	
} */
/*void CEMThongkebenhnhan::OnToDateSetfocus(){
	
} */
/*void CEMThongkebenhnhan::OnToDateKillfocus(){
	
} */
int CEMThongkebenhnhan::OnToDateCheckValue(){
	return 0;
} 
void CEMThongkebenhnhan::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMThongkebenhnhan::OnDepartmentSelendok(){
	 
}
/*void CEMThongkebenhnhan::OnDepartmentSetfocus(){
	
}*/
/*void CEMThongkebenhnhan::OnDepartmentKillfocus(){
	
}*/
long CEMThongkebenhnhan::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_id in ('C1.1','TYC')  ORDER BY id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return 0;
}
/*void CEMThongkebenhnhan::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMThongkebenhnhan::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMThongkebenhnhan::OnDeptSelendok(){
	 
}
/*void CEMThongkebenhnhan::OnDeptSetfocus(){
	
}*/
/*void CEMThongkebenhnhan::OnDeptKillfocus(){
	
}*/
long CEMThongkebenhnhan::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s' "), m_szRoomKey);
	}
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 AND hrl_deptid = '%s' %s ORDER BY id "), pMF->GetCurrentDepartmentID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CEMThongkebenhnhan::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMThongkebenhnhan::OnServiceSelect(){
	
}
void CEMThongkebenhnhan::OnInsuranceSelect(){
	
}
void CEMThongkebenhnhan::OnBDCSSelect(){
	
}
void CEMThongkebenhnhan::OnExcelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiMenu menu(this);
	CString tmpStr;
	menu.CreatePopupMenu();
	tmpStr.Format(_T("Xuất C1.1"));
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	menu.AppendMenu(MF_SEPARATOR);
	tmpStr.Format(_T("Xuất TYC"));
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);
	CRect rect;
	m_wndExcel.GetWindowRect(&rect);
	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
	case 1:
		OnExcel1();
		break;
	case 2:
		OnExcel2();
		break;
	}
}
void CEMThongkebenhnhan::OnExcel1()
{
	CHMSMainFrame *pMF =(CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szTemp2;
	int nIndex = 1, nRow = 0,nCol=0;
	double nAmount = 0, nTotalAmount = 0;
	double nTotalGroup[113];
	

	szSQL = GetQuerySring();
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	CExcel xls;
	if (!xls.Load(_T("Exports\\ThongkebenhnhanC1.1.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
	tmpStr.Format(_T("Từ ngày %s Đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	for(int i=0;i <113;i++)
	{
		nTotalGroup[i]=0;
	}

	nRow = 8;	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIndex++), FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("patientname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("objectname"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("admitdept"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		nTotalGroup[0] += nAmount;

		rs.GetValue(_T("1"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[1] += nAmount;

		rs.GetValue(_T("2"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[2] += nAmount;

		rs.GetValue(_T("3"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[3] += nAmount;

		rs.GetValue(_T("4"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[4] += nAmount;

		rs.GetValue(_T("5"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[5] += nAmount;

		rs.GetValue(_T("6"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[6] += nAmount;

		rs.GetValue(_T("7"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[7] += nAmount;

		rs.GetValue(_T("8"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[8] += nAmount;

		rs.GetValue(_T("9"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[9] += nAmount;

		rs.GetValue(_T("10"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[10] += nAmount;

		rs.GetValue(_T("11"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[11] += nAmount;

		rs.GetValue(_T("12"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[12] += nAmount;

		rs.GetValue(_T("14"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[14] += nAmount;

		rs.GetValue(_T("15"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[15] += nAmount;

		rs.GetValue(_T("17"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[17] += nAmount;

		rs.GetValue(_T("19"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[19] += nAmount;

		rs.GetValue(_T("21"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[21] += nAmount;

		rs.GetValue(_T("23"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[23] += nAmount;

		rs.GetValue(_T("25"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[3] += nAmount;

		rs.GetValue(_T("27"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[27] += nAmount;

		rs.GetValue(_T("29"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[29] += nAmount;

		rs.GetValue(_T("31"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[31] += nAmount;

		rs.GetValue(_T("35"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[35] += nAmount;

		rs.GetValue(_T("36"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[36] += nAmount;

		rs.GetValue(_T("38"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[38] += nAmount;

		rs.GetValue(_T("39"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+30, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[39] += nAmount;

		rs.GetValue(_T("41"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+31, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[41] += nAmount;

		rs.GetValue(_T("43"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[43] += nAmount;

		rs.GetValue(_T("45"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[45] += nAmount;

		rs.GetValue(_T("50"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[50] += nAmount;

		rs.GetValue(_T("51"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+35, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[51] += nAmount;

		rs.GetValue(_T("52"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+36, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[52] += nAmount;

		rs.GetValue(_T("53"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+37, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[53] += nAmount;

		rs.GetValue(_T("54"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+38, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[54] += nAmount;

		rs.GetValue(_T("55"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+39, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[55] += nAmount;

		rs.GetValue(_T("56"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+40, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[56] += nAmount;

		rs.GetValue(_T("57"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+41, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[57] += nAmount;

		rs.GetValue(_T("58"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+42, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[58] += nAmount;

		rs.GetValue(_T("99"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+43, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[99] += nAmount;

		rs.GetValue(_T("100"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+44, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[100] += nAmount;

		rs.GetValue(_T("101"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+45, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[101] += nAmount;

		rs.GetValue(_T("102"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+46, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[102] += nAmount;

		rs.GetValue(_T("103"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+47, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[103] += nAmount;

		rs.GetValue(_T("104"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+48, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[104] += nAmount;

		rs.GetValue(_T("105"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+49, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[105] += nAmount;

		rs.GetValue(_T("106"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+50, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[106] += nAmount;

		rs.GetValue(_T("107"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+51, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[107] += nAmount;

		rs.GetValue(_T("108"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+52, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[108] += nAmount;

		rs.GetValue(_T("109"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+53, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[109] += nAmount;

		rs.GetValue(_T("110"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+54, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[110] += nAmount;

		rs.GetValue(_T("111"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+55, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[111] += nAmount;

		rs.GetValue(_T("112"), nAmount);
		tmpStr.Format(_T("%.2f"), nAmount);
		xls.SetCellText(nCol+56, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
		nTotalGroup[112] += nAmount;

		rs.GetValue(_T("examdate"), tmpStr);		xls.SetCellText(nCol+57, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT|FMT_WRAPING);

		rs.GetValue(_T("diagnostic"), tmpStr);		xls.SetCellText(nCol+58, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("suggestion"), tmpStr);		xls.SetCellText(nCol+59, nRow, tmpStr, FMT_TEXT);

		nRow++;		rs.MoveNext();
	}
	xls.SetCellMergedColumns(nCol, nRow, 5);
	xls.SetCellText(nCol, nRow, _T("Tổng:"), FMT_TEXT | FMT_RIGHT, true);

	for(int i = 1; i < 113; i++)
	{
		xls.SetCellText(nCol + 4 + i, nRow, int2str(nTotalGroup[i]), FMT_NUMBER1 | FMT_WRAPING,true);
		nTotalGroup[i] += nTotalGroup[i];
	}
	EndWaitCursor();	xls.Save(_T("Exports\\ThongkebenhnhanC1.11.xls"));
}
void CEMThongkebenhnhan::OnExcel2()
{
		CHMSMainFrame *pMF =(CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
		BeginWaitCursor();
		CRecord rs(&pMF->m_db);
		CString szSQL, tmpStr, szTemp, szTemp2;
		int nIndex = 1, nRow = 0,nCol=0;
		double nAmount = 0, nTotalAmount = 0;
		double nTotalGroup[113];


		szSQL = GetQuerySring1();
		_fmsg(_T("%s"),szSQL);
		rs.ExecSQL(szSQL);
		if (rs.IsEOF())
		{
			AfxMessageBox(_T("No Data."));
			return;
		}
		CExcel xls;
		if (!xls.Load(_T("Exports\\ThongkebenhnhanTYC.xls"))) AfxMessageBox(_T("Load fail!"));

		xls.SetWorksheet(0);
		xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
		xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);
		tmpStr.Format(_T("Từ ngày %s Đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
		xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

		for(int i=0;i <44;i++)
		{
			nTotalGroup[i]=0;
		}

		nRow = 8;		nCol = 0;
		while(!rs.IsEOF())
		{
			xls.SetCellText(nCol+0, nRow, int2str(nIndex++), FMT_TEXT);

			rs.GetValue(_T("docno"), tmpStr);			xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("patientname"), tmpStr);			xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("objectname"), tmpStr);			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("admitdept"), tmpStr);			xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

			nTotalGroup[0] += nAmount;

			rs.GetValue(_T("1"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+5, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[1] += nAmount;

			rs.GetValue(_T("2"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+6, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[2] += nAmount;

			rs.GetValue(_T("3"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+7, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[3] += nAmount;

			rs.GetValue(_T("4"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+8, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[4] += nAmount;

			rs.GetValue(_T("5"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+9, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[5] += nAmount;

			rs.GetValue(_T("6"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+10, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[6] += nAmount;

			rs.GetValue(_T("7"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+11, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[7] += nAmount;

			rs.GetValue(_T("8"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+12, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[8] += nAmount;

			rs.GetValue(_T("9"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+13, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[9] += nAmount;

			rs.GetValue(_T("10"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+14, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[10] += nAmount;

			rs.GetValue(_T("11"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+15, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[11] += nAmount;

			rs.GetValue(_T("12"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+16, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[12] += nAmount;

			rs.GetValue(_T("13"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+17, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[13] += nAmount;

			rs.GetValue(_T("14"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+18, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[14] += nAmount;

			rs.GetValue(_T("15"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+19, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[15] += nAmount;

			rs.GetValue(_T("16"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+20, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[16] += nAmount;

			rs.GetValue(_T("17"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+21, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[17] += nAmount;

			rs.GetValue(_T("18"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+22, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[18] += nAmount;

			rs.GetValue(_T("19"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+23, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[19] += nAmount;

			rs.GetValue(_T("20"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+24, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[20] += nAmount;

			rs.GetValue(_T("21"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+25, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[21] += nAmount;

			rs.GetValue(_T("22"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+26, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[22] += nAmount;

			rs.GetValue(_T("23"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+27, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[23] += nAmount;

			rs.GetValue(_T("24"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+28, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[24] += nAmount;

			rs.GetValue(_T("25"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+29, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[25] += nAmount;

			rs.GetValue(_T("26"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+30, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[26] += nAmount;

			rs.GetValue(_T("27"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+31, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[27] += nAmount;

			rs.GetValue(_T("28"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+32, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[28] += nAmount;

			rs.GetValue(_T("29"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+33, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[29] += nAmount;

			rs.GetValue(_T("30"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+34, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[30] += nAmount;

			rs.GetValue(_T("31"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+35, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[31] += nAmount;

			rs.GetValue(_T("32"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+36, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[32] += nAmount;

			rs.GetValue(_T("33"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+37, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[33] += nAmount;

			rs.GetValue(_T("34"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+38, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[34] += nAmount;

			rs.GetValue(_T("35"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+39, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[35] += nAmount;

			rs.GetValue(_T("36"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+40, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[36] += nAmount;

			rs.GetValue(_T("37"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+41, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[37] += nAmount;

			rs.GetValue(_T("38"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+42, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[38] += nAmount;

			rs.GetValue(_T("39"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+43, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[39] += nAmount;

			rs.GetValue(_T("40"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+44, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[40] += nAmount;

			rs.GetValue(_T("41"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+45, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[41] += nAmount;

			rs.GetValue(_T("42"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+46, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[42] += nAmount;

			rs.GetValue(_T("43"), nAmount);
			tmpStr.Format(_T("%.2f"), nAmount);
			xls.SetCellText(nCol+47, nRow, tmpStr, FMT_NUMBER1|FMT_WRAPING);
			nTotalGroup[43] += nAmount;

			

			rs.GetValue(_T("examdate"), tmpStr);			xls.SetCellText(nCol+48, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT|FMT_WRAPING);

			rs.GetValue(_T("diagnostic"), tmpStr);			xls.SetCellText(nCol+49, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("suggestion"), tmpStr);			xls.SetCellText(nCol+50, nRow, tmpStr, FMT_TEXT);

			nRow++;			rs.MoveNext();
		}
		xls.SetCellMergedColumns(nCol, nRow, 5);
		xls.SetCellText(nCol, nRow, _T("Tổng:"), FMT_TEXT | FMT_RIGHT, true);

		for(int i = 1; i < 44; i++)
		{
			xls.SetCellText(nCol + 4 + i, nRow, int2str(nTotalGroup[i]), FMT_NUMBER1 | FMT_WRAPING,true);
			nTotalGroup[i] += nTotalGroup[i];
		}
		EndWaitCursor();		xls.Save(_T("Exports\\ThongkebenhnhanTYC1.xls"));
}
int CEMThongkebenhnhan::OnAddEMThongkebenhnhan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMThongkebenhnhan::OnEditEMThongkebenhnhan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMThongkebenhnhan::OnDeleteEMThongkebenhnhan(){
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
 		OnCancelEMThongkebenhnhan();
 	}
	return 0;
}
int CEMThongkebenhnhan::OnSaveEMThongkebenhnhan(){
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
 		//OnEMThongkebenhnhanListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMThongkebenhnhan::OnCancelEMThongkebenhnhan(){
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
int CEMThongkebenhnhan::OnEMThongkebenhnhanListLoadData(){
	return 0;
}

CString CEMThongkebenhnhan::GetQuerySring()
{
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere;
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND hd_object in(9,2,5,6,4,10,11,12) "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND hd_object = 7 "));
	else if (m_nBDCS == 0)
		szWhere.AppendFormat(_T(" AND hd_object not in(9,2,5,6,4,10,11,12,7) "));

	if (!m_szRoomKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_roomid = '%s'"), m_szRoomKey);
	}

	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szDepartmentKey);
		

	}
	szSQL.Format(_T(" select * from") \
		_T(" (select docno ,patientname, objectname ,admitdept, dept, roomid, suggestion, diagnostic, first_value(examdate) OVER (PARTITION BY docno ORDER BY examdate DESC) as examdate from") \
		_T(" (select ") \
		_T("       hd_docno as docno,") \
		_T("      trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T("       get_objectname(hd_object) as objectname,") \
		_T("       (select sd_name from sys_dept where hd_admitdept = sd_id) as admitdept,") \
		_T("       he_roomid as roomid,") \
		_T("       (select sd_name from sys_dept where sd_id = he_deptid and sd_type = 'KB') as dept,") \
		_T("       hd_diagnostic as diagnostic,") \
		_T("     (he_examdate) as examdate,") \
		_T("       (select ss_desc from sys_sel where hd_suggestion = ss_code and ss_id = 'hms_suggestion') as suggestion") \
		_T(" from hms_patient") \
		_T(" left join hms_doc on (hp_patientno = hd_patientno)") \
		_T(" left join hms_exam on (hd_docno = he_docno)") \
		_T(" where he_examdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') and he_status <> 'O' %s ))") \
		_T(" pivot (count(roomid) for roomid in (1,2,3,4,5,6,7,8,9,10,11,12,14,15,17,19,21,23,25,27,29,31,33,35,36,38,39,41,43,45,50,51,52,53,54,56,57,58,99,100,101,102,103,104,105,106,107,108,109,110,111,112))"), m_szFromDate,m_szToDate, szWhere);
return szSQL;
}
CString CEMThongkebenhnhan::GetQuerySring1()
{
	CHMSMainFrame * pMF =(CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szWhere;
	if (m_nInsurance == 0)
		szWhere.AppendFormat(_T(" AND hd_object in(9,2,5,6,4,10,11,12) "));
	else if (m_nService == 0)
		szWhere.AppendFormat(_T(" AND hd_object = 7 "));
	else if (m_nBDCS == 0)
		szWhere.AppendFormat(_T(" AND hd_object not in(9,2,5,6,4,10,11,12,7) "));

	if (!m_szRoomKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_roomid = '%s'"), m_szRoomKey);
	}

	if (!m_szDepartmentKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_deptid = '%s'"), m_szDepartmentKey);


	}
	szSQL.Format(_T(" select * from") \
		_T(" (select docno ,patientname, objectname ,admitdept, dept, roomid, suggestion, diagnostic, first_value(examdate) OVER (PARTITION BY docno ORDER BY examdate DESC) as examdate from") \
		_T(" (select ") \
		_T("       hd_docno as docno,") \
		_T("      trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T("       get_objectname(hd_object) as objectname,") \
		_T("       (select sd_name from sys_dept where hd_admitdept = sd_id) as admitdept,") \
		_T("       he_roomid as roomid,") \
		_T("       (select sd_name from sys_dept where sd_id = he_deptid and sd_type = 'KB') as dept,") \
		_T("       hd_diagnostic as diagnostic,") \
		_T("     (he_examdate) as examdate,") \
		_T("       (select ss_desc from sys_sel where hd_suggestion = ss_code and ss_id = 'hms_suggestion') as suggestion") \
		_T(" from hms_patient") \
		_T(" left join hms_doc on (hp_patientno = hd_patientno)") \
		_T(" left join hms_exam on (hd_docno = he_docno)") \
		_T(" where he_examdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') and he_status <> 'O' %s ))") \
		_T(" pivot (count(roomid) for roomid in (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43))"), m_szFromDate,m_szToDate, szWhere);
	return szSQL;
}