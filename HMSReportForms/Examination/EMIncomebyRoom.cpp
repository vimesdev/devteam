#include "stdafx.h"
#include "EMIncomebyRoom.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMIncomebyRoom *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMIncomebyRoom* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMIncomebyRoom *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMIncomebyRoom *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMIncomebyRoom *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMIncomebyRoom* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMIncomebyRoom *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnRoomAddNew();
}*/
static void _OnPTTYCSelendokFnc(CWnd *pWnd){
	((CEMIncomebyRoom *)pWnd)->OnPTTYCSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMIncomebyRoom *pVw = (CEMIncomebyRoom *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CEMIncomebyRoom*)pWnd)->OnListLoadData();
} 
CEMIncomebyRoom::CEMIncomebyRoom(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMIncomebyRoom::~CEMIncomebyRoom()
{
}
void CEMIncomebyRoom::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 410, 115); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 10, 125, 140, 150);
	m_wndExport.Create(this, _T("&ExportXLS"), 335, 125, 415, 150);*/
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 415, 120);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 205, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 215, 30, 295, 55);
	m_wndReportPeriod.Create(this,300, 30, 410, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 205, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 295, 85);
	m_wndToDate.Create(this,300, 60, 410, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 410, 115); 
	m_wndPTTYC.Create(this, _T("Nhóm PK PTTYC"), 11, 401, 141, 426);
	m_wndExport.Create(this, _T("&ExportXLS"), 334, 401, 414, 426);
	m_wndList.Create(this,10, 121, 415, 396);
	m_wndList.SetCheckBox(TRUE);

}
void CEMIncomebyRoom::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	//m_wndDoctor.SetCheckValue(true);
	//m_wndDoctor.LimitText(35);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	//m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	//m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndList.InsertColumn(1, _T("Stock"), CFMT_TEXT, 500);

}

void CEMIncomebyRoom::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);	
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndPTTYC.SetEvent(WE_CLICK, _OnPTTYCSelendokFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_nYear = ToInt(szSysDate.Left(4));
	m_szReportPeriodKey.Format(_T("%d"), str2int(szSysDate.Mid(5, 2)));
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");	
	UpdateData(false);
	OnListLoadData();

}
void CEMIncomebyRoom::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Check(pDX, m_wndPTTYC.GetDlgCtrlID(), m_bPTTYC);
}
void CEMIncomebyRoom::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();
	//m_szDoctorKey.Empty();
	m_bPTTYC = FALSE;

}

int CEMIncomebyRoom::SetMode(int nMode){
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

/*void CEMIncomebyRoom::OnYearChange(){
	
} */
/*void CEMIncomebyRoom::OnYearSetfocus(){
	
} */
/*void CEMIncomebyRoom::OnYearKillfocus(){
	
} */
int CEMIncomebyRoom::OnYearCheckValue(){
	return 0;
}
 
void CEMIncomebyRoom::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CEMIncomebyRoom::OnReportPeriodSelendok(){
	CString tmpStr;
	CDate dte;
	UpdateData(true);
	int nMonth = ToInt(m_szReportPeriodKey);
	if(nMonth > 0 && nMonth <= 12)
	{
		m_szFromDate.Format(_T("%.4d/%.2d/01"), m_nYear, nMonth);
		dte.ParseDate(m_szFromDate);
		m_szToDate.Format(_T("%.4d/%.2d/%.2d 23:59"), m_nYear, nMonth, dte.GetMonthLastDay());
	}
	if(nMonth == 13){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/03/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/03/%.2d 23:59" ), m_nYear,  dte.GetMonthLastDay());
	}
	if(nMonth == 14){
		m_szFromDate.Format(_T("%.4d/04/01"), m_nYear);
		tmpStr.Format(_T("%.4d/06/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/06/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 15){
		m_szFromDate.Format(_T("%.4d/07/01"), m_nYear);
		tmpStr.Format(_T("%.4d/09/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/09/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 16){
		m_szFromDate.Format(_T("%.4d/10/01"), m_nYear);
		tmpStr.Format(_T("%.4d/10/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());
	}
	if(nMonth == 17){
		m_szFromDate.Format(_T("%.4d/01/01"), m_nYear);
		tmpStr.Format(_T("%.4d/12/01"), m_nYear);
		dte.ParseDate(tmpStr);
		m_szToDate.Format(_T("%.4d/12/%.2d 23:59"), m_nYear, dte.GetMonthLastDay());		
	}	
	UpdateData(false);	 
	 	 
}

/*void CEMIncomebyRoom::OnReportPeriodSetfocus(){
	
}*/
/*void CEMIncomebyRoom::OnReportPeriodKillfocus(){
	
}*/
long CEMIncomebyRoom::OnReportPeriodLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && ToInt(m_szReportPeriodKey) > 0)
	{
		szWhere.Format(_T(" WHERE hpr_idx=%ld"), ToInt(m_szReportPeriodKey));
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_period_report %s ORDER BY hpr_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("hpr_idx")), 
			rs.GetValue(_T("hpr_name")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CEMIncomebyRoom::OnReportPeriodAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CEMIncomebyRoom::OnFromDateChange(){
	
} */
/*void CEMIncomebyRoom::OnFromDateSetfocus(){
	
} */
/*void CEMIncomebyRoom::OnFromDateKillfocus(){
	
} */
int CEMIncomebyRoom::OnFromDateCheckValue(){
	return 0;
}
 
/*void CEMIncomebyRoom::OnToDateChange(){
	
} */
/*void CEMIncomebyRoom::OnToDateSetfocus(){
	
} */
/*void CEMIncomebyRoom::OnToDateKillfocus(){
	
} */
int CEMIncomebyRoom::OnToDateCheckValue(){
	return 0;
}
 
void CEMIncomebyRoom::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
 
void CEMIncomebyRoom::OnRoomSelendok(){
	 
}

/*void CEMIncomebyRoom::OnRoomSetfocus(){
	
}*/
/*void CEMIncomebyRoom::OnRoomKillfocus(){
	
}*/
long CEMIncomebyRoom::OnRoomLoadData(){
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

/*void CEMIncomebyRoom::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

long CEMIncomebyRoom::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("Select msl_storage_id as ID, msl_name as Name FROM m_storagelist WHERE msl_isactive = 'Y'  and msl_org_id in('GL','PM')   AND msl_type = 'A'"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CEMIncomebyRoom::OnPTTYCSelect(){

}

void CEMIncomebyRoom::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;	
	CGuiMenu menu(this);
	HMENU hSubMenu = NULL;
	
	CRect rect;
	CStringArray arrFeeType;	
	menu.CreatePopupMenu();
	m_wndExport.GetWindowRect(&rect);
	TranslateString(_T("Export mẫu 1"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	TranslateString(_T("Export mẫu 2 - tách theo khu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);	

	int nPos = menu.TrackPopupMenu(TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_BOTTOMALIGN|TPM_NONOTIFY, rect.right, rect.top, this);
	switch (nPos)
	{
		case 1:
			OnExportSelect_Ver1();
			break;
		case 2:
			OnExportSelect_Ver2();
			break;		
	}	
	
}

void CEMIncomebyRoom::OnExportSelect_Ver1()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	CStringArray arrField;
	double nTmp = 0;
	double nTotal[9];
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < 9; i++)
		nTotal[i] = 0;
	arrField.Add(_T("so_luong"));
	arrField.Add(_T("tien_kham"));
	arrField.Add(_T("tien_thuoc"));
	arrField.Add(_T("tien_xn"));
	arrField.Add(_T("tien_xnktc"));
	arrField.Add(_T("tong_xn"));
	arrField.Add(_T("tong_pttt"));
	arrField.Add(_T("tong_tien"));
	arrField.Add(_T("binh_quan"));
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	for (int i = 0; i < 10; i++)
		xls.SetColumnWidth(i+4, 15);
	xls.SetColumnWidth(2, 35);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("S\x1ED0 L\x1AF\x1EE2NG TI\x1EC0N L\xC0M \x110\x1AF\x1EE2\x43 \x43\x1EE6\x41 T\x1EEANG \x42U\x1ED2NG");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("Buồng"), 4098, true);
	xls.SetCellText(2, 4, _T("Tên buồng"), 4098, true);
	xls.SetCellText(3, 4, _T("Số BN"), 4098, true);
	xls.SetCellText(4, 4, _T("Tiền khám"), 4098, true);
	xls.SetCellText(5, 4, _T("Tiền thuốc"), 4098, true);
	xls.SetCellText(6, 4, _T("Tiền XN thông thường"), 4098, true);
	xls.SetCellText(7, 4, _T("Tiền XN KTC"), 4098, true);
	xls.SetCellText(8, 4, _T("Tiền XN toàn bộ"), 4098, true);
	xls.SetCellText(9, 4, _T("Tiền PTTT"), 4098, true);
	xls.SetCellText(10, 4, _T("Tổng tiền làm được"), 4098, true);
	xls.SetCellText(11, 4, _T("Quân bình trên 1 BN"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("phong")), FMT_NUMBER1);
		xls.SetCellText(2, nRow, rs.GetValue(_T("tenphong")), FMT_TEXT);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			rs.GetValue(arrField.GetAt(i), nTmp);
			xls.SetCellText(i+3, nRow, double2str(nTmp), FMT_NUMBER1);
			nTotal[i] += nTmp;
		}
		nRow++;
		rs.MoveNext();
	}
	if (nTotal[0] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng:"), 4098, true);
		for (int i = 0; i < arrField.GetCount(); i++)
		{
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(i+3, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		//TB
		xls.SetCellText(arrField.GetCount() - 1 + 3, nRow, double2str((nTotal[7]-nTotal[2])/nTotal[0]), FMT_NUMBER1, true);
	}
	xls.Save(_T("Exports\\So luong tien lam duoc cua tung buong.xls"));
}

void CEMIncomebyRoom::OnExportSelect_Ver2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[15], nGroupTotal[15];
	for(int i = 0; i < 15; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\SOLUONGKHAMTHEOTUNGBUONG_MAU2.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 7;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("khoa"), szNewDept);
		if (szOldDept != szNewDept)
		{
			if (nGroupTotal[10] > 0)
			{
				xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);

				for(int i = 3; i < 11; i++)
				{
					xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
					nTotal[i] += nGroupTotal[i];
					nGroupTotal[i] = 0;
				}
				nRow++;
			}
			xls.SetCellText(0, nRow, szNewDept, FMT_TEXT, true);
			szOldDept = szNewDept;
			nIdx = 1;
			nRow++;
		}
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("phong"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("tenphong"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("so_luong"), nTemp);
		nGroupTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("tien_kham"), nTemp);
		nGroupTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_thuoc"), nTemp);
		nGroupTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_xn"), nTemp);
		nGroupTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tien_xnktc"), nTemp);
		nGroupTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);	
		
		rs.GetValue(_T("tong_xn"), nTemp);
		nGroupTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tong_pttt"), nTemp);
		nGroupTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tong_tien"), nTemp);
		nGroupTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("binh_quan"), nTemp);
		nGroupTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);	
			
		nRow++;
		rs.MoveNext();
	}

	if (nGroupTotal[10] > 0)
	{
		xls.SetCellText(1, nRow, _T("C\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 11; i++)
		{
			xls.SetCellText(i, nRow, double2str(nGroupTotal[i]), FMT_NUMBER1, true);
			nTotal[i] += nGroupTotal[i];
		}
		nRow++;
	}

	if (nTotal[10] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 3; i < 11; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
		}
		nRow++;
	}

	if (nTotal[3] > 0)
	{
		xls.SetCellText(11, nRow - 1, double2str((nTotal[10]-nTotal[5])/nTotal[3]), FMT_NUMBER1, true);
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\SOLUONGKHAMTHEOTUNGBUONG_MAU2X.xls"));
}
 
CString CEMIncomebyRoom::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szFeeSQL, szCountSQL, szWhere, szSubSQL, szSubWhere, szUser, szStock, szWhere1;
	szUser = pMF->GetCurrentUser();
	szUser.MakeLower();
	//szSubWhere.Format(_T(" AND hfe_deptid = '%s'"), pMF->GetCurrentDepartmentID());
	//szWhere.Format(_T(" AND instr(dept_id, '%s') > 0 AND hfe_date BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate);
	szWhere.Format(_T(" AND dept_id = '%s' AND hfe_date BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')"), pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND phong = '%s'"), m_szRoomKey);
	if (szUser != _T("bvtan") && szUser != _T("bvtanc14"))
	{
		szWhere.AppendFormat(_T(" AND doctor = '%s'"), szUser);
	}
	if (m_bPTTYC == TRUE)
		szWhere.AppendFormat(_T(" AND phong IN(33, 34, 35)"));
	else
		szWhere.AppendFormat(_T(" AND phong NOT IN(33, 34, 35)"));

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			m_wndList.SetCurSel(i);
			if (!szStock.IsEmpty())
				szStock += _T(",");
			szStock.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	if(!szStock.IsEmpty())
		szWhere1.AppendFormat(_T("AND HPO_STORAGE_ID IN(%s)"), szStock);

	szSubSQL.Format(_T("SELECT i.hfe_docno, dept_id, phong, tien_kham, tien_thuoc, tien_xn, tien_xnktc, tong_xn, tong_pttt, tong_tien FROM hms_fee_invoice i INNER JOIN ") \
					_T("(SELECT hfe_docno, hfe_invoiceno, hpo_deptid dept_id, hpo_roomid phong, hpo_doctor doctor,") \
					_T("		0 tien_kham, hfe_cost tien_thuoc, 0 tien_xn, 0 tien_xnktc, 0 tong_xn,0 tong_pttt, hfe_cost tong_tien ") \
					_T(" FROM hms_fee ") \
					_T(" LEFT JOIN hms_pharmaorder ON (hpo_docno = hfe_docno AND hfe_orderid = hpo_orderid)") \
					_T(" LEFT JOIN m_product_item ON (hfe_itemid = mpi_product_item_id) ") \
					_T(" LEFT JOIN m_product ON (mp_product_id = mpi_product_id) ") \
					_T(" WHERE hfe_status NOT IN ('O', 'C') AND hfe_type IN ('D', 'M') AND mp_org_id = 'PM' %s") \
					_T(" UNION ALL ") \
					_T(" SELECT hfe_docno, hfe_invoiceno, ") \
					_T("        case when hfe_type = 'E' Then he_deptid else case when hfe_type IN ('P', 'T') then hpc_deptid else ho_deptid end end dept_id, ") \
					_T("        case when hfe_type = 'E' Then he_roomid else case when hfe_type IN ('P', 'T') then hpc_roomid else ho_roomid end end phong, ") \
					_T("        case when hfe_type = 'E' Then he_doctor else case when hfe_type IN ('P', 'T') then hpc_doctor else ho_doctor end end doctor, ") \
					_T("		case when hfe_type = 'E' then hfe_cost else 0 end tien_kham, ") \
					_T("		0 tien_thuoc, case when hfe_type IN ('T', 'P') AND hfe_unitprice <= 700000 then hfe_cost else 0 end tien_xn, ") \
					_T("		case when hfe_type IN ('T', 'P') AND hfe_unitprice > 700000 then hfe_cost else 0 end  tien_xnktc, ") \
					_T("		case when hfe_type IN ('T', 'P') THEN hfe_cost else 0 END tong_xn, CASE WHEN hfe_type IN ('O') THEN hfe_cost ELSE 0 END tong_pttt, hfe_cost tong_tien FROM hms_fee ") \
					_T(" LEFT JOIN hms_exam ON (hfe_type = 'E' AND hfe_orderid = he_receptidx AND hfe_docno = he_docno) ") \
					_T(" LEFT JOIN hmsv_paraclinic ON (hfe_type IN ('T', 'P') AND hpc_docno = hfe_docno AND hpc_orderid = hfe_orderid) ") \
					_T(" LEFT JOIN hms_operation ON (hfe_type = 'O' AND ho_docno = hfe_docno AND ho_idx = hfe_orderid)") \
					_T(" WHERE hfe_type IN ('E', 'T', 'P', 'O') AND hfe_status NOT IN ('O', 'C')") \
					_T(" ) f ON (f.hfe_docno = i.hfe_docno AND f.hfe_invoiceno = i.hfe_invoiceno) WHERE hfe_status = 'P' %s")
					, szWhere1,szWhere);
	szFeeSQL.Format(_T(" SELECT dept_id, phong, SUM(tien_kham) tien_kham, SUM(tien_thuoc) tien_thuoc, SUM(tien_xn) tien_xn, ") \
					_T(" SUM(tien_xnktc) tien_xnktc, SUM(tong_xn) tong_xn, SUM(tong_pttt) tong_pttt,SUM(tong_tien) tong_tien FROM (%s) tbl0 GROUP BY dept_id, phong"), szSubSQL);
	szCountSQL.Format(_T("SELECT dept_id, phong, count(*) so_luong FROM (SELECT distinct hfe_docno, dept_id, phong FROM (%s) tbl1) tbl_distinct GROUP BY dept_id, phong"), szSubSQL);
	
	szSQL.Format(_T(" SELECT ") \
				_T("    CASE") \
				_T("       WHEN fee_tbl.dept_id='TYC'") \
				_T("       AND hrl_zone  ='KBTYC'") \
				_T("       THEN CAST('Phòng khám TYC' AS NVARCHAR2(81))") \
				_T("       WHEN fee_tbl.dept_id='TYC'") \
				_T("       AND hrl_zone  ='KSK'") \
				_T("       THEN CAST('Phòng khám sức khỏe TYC' AS NVARCHAR2(81))") \
				_T("       WHEN fee_tbl.dept_id='TYC'") \
				_T("       AND hrl_zone  ='PTTYC'") \
				_T("       THEN CAST('Phòng khám PTTYC' AS NVARCHAR2(81))") \
				_T("       ELSE fee_tbl.dept_id") \
				_T("    END AS khoa,fee_tbl.dept_id, hms_getroomname('%s', fee_tbl.phong) as tenphong, fee_tbl.phong as phong, count_tbl.so_luong as so_luong, fee_tbl.tien_kham as tien_kham , fee_tbl.tien_thuoc as tien_thuoc, fee_tbl.tien_xn as tien_xn, fee_tbl.tien_xnktc as tien_xnktc, fee_tbl.tong_xn as tong_xn , fee_tbl.tong_pttt as tong_pttt,fee_tbl.tong_tien as tong_tien, (fee_tbl.tong_tien - fee_tbl.tien_thuoc)/count_tbl.so_luong as binh_quan FROM (%s) fee_tbl LEFT JOIN (%s) count_tbl ON (fee_tbl.phong = count_tbl.phong)")\
				_T("	LEFT JOIN hms_roomlist") \
				_T("   ON(fee_tbl.dept_id  = hrl_deptid") \
				_T("   AND fee_tbl.phong = hrl_id)") \
				_T("   LEFT JOIN sys_dept") \
				_T("   ON (fee_tbl.dept_id=sd_id)")
				_T("   WHERE fee_tbl.phong > 0 ORDER BY khoa,phong"), pMF->GetCurrentDepartmentID(),szFeeSQL, szCountSQL);	 
		
	//_msg(_T("%s"), szSQL);
	return szSQL;
}