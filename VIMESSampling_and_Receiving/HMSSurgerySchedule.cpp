#include "HMSSurgerySchedule.h"
#include "HMSSampleScheduleInfoDialog.h"
#include "MainFrm.h"
#include "resource.h"
#include "ReportDocument.h"

#define IDC_CALCTRL 1188

static long _OnTodayScheduleListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgerySchedule*)pWnd)->OnTodayScheduleListLoadData();
} 
static void _OnTodayScheduleListDblClickFnc(CWnd *pWnd){
	((CHMSSurgerySchedule*)pWnd)->OnTodayScheduleListDblClick();
} 
static void _OnTodayScheduleListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
	((CHMSSurgerySchedule*)pWnd)->OnTodayScheduleListSelectChange(nOldItem, nNewItem);
} 
static int _OnTodayScheduleListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnTodayScheduleListDeleteItem();
} 
static long _OnScheduleListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgerySchedule*)pWnd)->OnScheduleListLoadData();
} 
static void _OnScheduleListDblClickFnc(CWnd *pWnd){
	((CHMSSurgerySchedule*)pWnd)->OnScheduleListDblClick();
} 
static void _OnScheduleListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSurgerySchedule*)pWnd)->OnScheduleListSelectChange(nOldItem, nNewItem);
} 
static int _OnScheduleListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnScheduleListDeleteItem();
} 
/*static void _OnCurrentDayChangeFnc(CWnd *pWnd){
	((CHMSSurgerySchedule *)pWnd)->OnCurrentDayChange();
} */
/*static void _OnCurrentDaySetfocusFnc(CWnd *pWnd){
	((CHMSSurgerySchedule *)pWnd)->OnCurrentDaySetfocus();} */ 
/*static void _OnCurrentDayKillfocusFnc(CWnd *pWnd){
	((CHMSSurgerySchedule *)pWnd)->OnCurrentDayKillfocus();
} */
static int _OnCurrentDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgerySchedule *)pWnd)->OnCurrentDayCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSSurgerySchedule *pVw = (CHMSSurgerySchedule *)pWnd;
	pVw->OnLoadSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSSurgerySchedule *pVw = (CHMSSurgerySchedule *)pWnd;
	pVw->OnPrintSelect();
}
static void _OnWeekViewSelectFnc(CWnd *pWnd){
	  ((CHMSSurgerySchedule*)pWnd)->OnWeekViewSelect();
}
static void _OnMonthViewSelectFnc(CWnd *pWnd){
	  ((CHMSSurgerySchedule*)pWnd)->OnMonthViewSelect();
}
static int _OnAddHMSSurgeryScheduleFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnAddHMSSurgerySchedule();
} 
static int _OnEditHMSSurgeryScheduleFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnEditHMSSurgerySchedule();
} 
static int _OnDeleteHMSSurgeryScheduleFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnDeleteHMSSurgerySchedule();
} 
static int _OnSaveHMSSurgeryScheduleFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnSaveHMSSurgerySchedule();
} 
static int _OnCancelHMSSurgeryScheduleFnc(CWnd *pWnd){
	 return ((CHMSSurgerySchedule*)pWnd)->OnCancelHMSSurgerySchedule();
}
static int _OnReloadTodayListFnc(CWnd *pWnd){
	return ((CHMSSurgerySchedule*)pWnd)->OnReloadTodayList();
} 
CHMSSurgerySchedule::CHMSSurgerySchedule(){

	m_nDlgWidth = 1020;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CHMSSurgerySchedule::~CHMSSurgerySchedule(){
}
void CHMSSurgerySchedule::OnCreateComponents()
{
	m_wndTodayScheduleInfo.Create(this, _T("Today's Schedule"), 5, 5, 700, 155);
	m_wndSurgeryScheduleInfo.Create(this, _T("Duty Schedule Information"), 5, 160, 1010, 665);
	m_wndViewInfor.Create(this, _T("View Setting"), 705, 5, 1010, 155);
	m_wndTodayScheduleList.Create(this,10, 30, 695, 150); 
	//m_wndScheduleList.Create(this,10, 120, 1005, 635);
	m_wndCalendar.Create(NULL, NULL, WS_CHILD | WS_VISIBLE, CRect(10, 190, 1005, 660), this, IDC_CALCTRL);
	m_wndDay.Create(this, _T("Day"), 710, 30, 805, 55);
	m_wndCurrentDay.Create(this,810, 30, 920, 55);

	m_wndLoad.Create(this, _T("&Load"), 925, 30, 1005, 55);
	m_wndPrint.Create(this, _T("&Print"), 925, 60, 1005, 85);

	m_wndWeekView.Create(this, _T("Week View"), 710, 60, 805, 85);
	m_wndMonthView.Create(this, _T("Month View"), 810, 60, 920, 85);

}
void CHMSSurgerySchedule::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCurrentDay.SetMax(CDate(pMF->GetSysDate()));
	m_wndCurrentDay.SetCheckValue(true);


	m_wndTodayScheduleList.InsertColumn(0, _T("Nurses1"), CFMT_TEXT, 100);
	m_wndTodayScheduleList.InsertColumn(1, _T("Nurses2"), CFMT_TEXT, 100);
	m_wndTodayScheduleList.InsertColumn(2, _T("Nurses3"), CFMT_TEXT, 95);
	m_wndTodayScheduleList.InsertColumn(3, _T("Nurses4"), CFMT_TEXT, 95);
	m_wndTodayScheduleList.InsertColumn(4, _T("Nurses5"), CFMT_TEXT, 95);
	m_wndTodayScheduleList.InsertColumn(5, _T("Nurses6"), CFMT_TEXT, 95);
	m_wndTodayScheduleList.InsertColumn(6, _T("Nurses7"), CFMT_TEXT, 95);
	m_wndTodayScheduleList.InsertColumn(7, _T("Nurses8"), CFMT_TEXT, 95);


	m_ToolTip.Create(this);
	m_ToolTip.AddTool(&m_wndTodayScheduleList, _T(""));
	m_ToolTip.SetNotify(TRUE);
	m_ToolTip.SetBehaviour(PPTOOLTIP_MULTIPLE_SHOW);

	m_wndMonthView.ModifyStyle(WS_TABSTOP, 0);
	m_wndWeekView.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSSurgerySchedule::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTodayScheduleList.SetEvent(WE_SELCHANGE, _OnTodayScheduleListSelectChangeFnc);
	m_wndTodayScheduleList.SetEvent(WE_LOADDATA, _OnTodayScheduleListLoadDataFnc);
	m_wndTodayScheduleList.SetEvent(WE_DBLCLICK, _OnTodayScheduleListDblClickFnc);
	m_wndTodayScheduleList.SetWindowText(_T("Today's Schedule"));
	m_wndTodayScheduleList.AddEvent(1, _T("Reload"), _OnReloadTodayListFnc);
	m_wndScheduleList.SetEvent(WE_SELCHANGE, _OnScheduleListSelectChangeFnc);
	m_wndScheduleList.SetEvent(WE_LOADDATA, _OnScheduleListLoadDataFnc);
	m_wndScheduleList.SetEvent(WE_DBLCLICK, _OnScheduleListDblClickFnc);
	//m_wndScheduleList.AddEvent(1, _T("Delete"), _OnScheduleListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCurrentDay.SetEvent(WE_CHANGE, _OnCurrentDayChangeFnc);
	//m_wndCurrentDay.SetEvent(WE_SETFOCUS, _OnCurrentDaySetfocusFnc);
	//m_wndCurrentDay.SetEvent(WE_KILLFOCUS, _OnCurrentDayKillfocusFnc);
	m_wndCurrentDay.SetEvent(WE_CHECKVALUE, _OnCurrentDayCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndWeekView.SetEvent(WE_CLICK, _OnWeekViewSelectFnc);
	m_wndMonthView.SetEvent(WE_CLICK, _OnMonthViewSelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSSurgeryScheduleFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSSurgeryScheduleFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSSurgeryScheduleFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSSurgeryScheduleFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSSurgeryScheduleFnc, 0, 'T', VK_CONTROL);*/
	//SetMode(VM_NONE);

	CBitmap bmpImg;
	m_ImgList.Create(16, 16, ILC_COLOR24 | ILC_MASK, 0, 1);
	bmpImg.LoadBitmap(IDB_BMPREMINDER);
	m_ImgList.Add(&bmpImg, RGB(0, 255, 0));
	m_wndCalendar.SetImageList(&m_ImgList);

	m_szCurrentDay = pMF->GetSysDate();
	m_wndCalendar.SetCurrentDate(COleDateTime::GetCurrentTime());
	UpdateData(FALSE);

	OnTodayScheduleListLoadData();
	OnLoadData();

	//_msg(_T("%ld"), _GetNextID());
}
void CHMSSurgerySchedule::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndCurrentDay.GetDlgCtrlID(), m_szCurrentDay);
	DDX_Radio(pDX, m_wndWeekView.GetDlgCtrlID(), m_nWeekView);
	DDX_Radio(pDX, m_wndMonthView.GetDlgCtrlID(), m_nMonthView);

}

BEGIN_MESSAGE_MAP(CHMSSurgerySchedule, CGuiView)
    ON_NOTIFY(NM_DBLCLK, IDC_CALCTRL, OnCellDblClick)
    ON_NOTIFY(NM_CLICK, IDC_CALCTRL, OnCellClick)
	//ON_WM_MOUSEMOVE()
	ON_NOTIFY(UDM_TOOLTIP_DISPLAY, NULL, NotifyDisplayTooltip)
END_MESSAGE_MAP()

void CHMSSurgerySchedule::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgerySchedule::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSurgerySchedule::SetDefaultValues()
{

	m_szCurrentDay.Empty();
	m_nWeekView=0;
	m_nMonthView=1;

}
int CHMSSurgerySchedule::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
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
void CHMSSurgerySchedule::OnTodayScheduleListDblClick(){
	
} 
void CHMSSurgerySchedule::OnTodayScheduleListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgerySchedule::OnTodayScheduleListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgerySchedule::OnTodayScheduleListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szDate;
	CDate date;
	m_wndTodayScheduleList.BeginLoad(); 
	m_wndTodayScheduleList.DeleteAllItems();
	int nCount = 0;

	date.ParseDate(pMF->GetSysDate());

	szDate.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());


	szSQL.Format(_T(" SELECT (SELECT su_name FROM sys_user WHERE su_userid=hssl_user1) AS user1,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user2) AS user2,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user3) AS user3,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user4) AS user4,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user5) AS user5,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user6) AS user6,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user7) AS user7,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user8) AS user8,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user9) AS user9,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user10) AS user10,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user11) AS user11,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user12) AS user12,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user13) AS user13,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user14) AS user14,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user15) AS user15,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user16) AS user16,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user17) AS user17,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user18) AS user18,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user19) AS user19,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user20) AS user20") \
				_T(" FROM Hms_Sample_Schedule_Line") \
				_T(" LEFT JOIN Hms_Sample_Schedule ON(hss_idx=hssl_refidx)") \
				_T(" WHERE trunc_date(hss_starttime)=to_date('%s', 'YYYY-MM-DD')") \
				_T(" AND rownum=1 and hss_dept='%s'") \
				_T(" ORDER BY hss_starttime, hss_endtime DESC"), pMF->GetSysDate(),pMF->m_szDeptID);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndTodayScheduleList.AddItems(
			rs.GetValue(_T("user1")), 
			rs.GetValue(_T("user2")), 
			rs.GetValue(_T("user3")), 
			rs.GetValue(_T("user4")), 
			rs.GetValue(_T("user5")), 
			rs.GetValue(_T("user6")), 
			rs.GetValue(_T("user7")),
			rs.GetValue(_T("user8")),
			rs.GetValue(_T("user9")),
			rs.GetValue(_T("user10")),
			rs.GetValue(_T("user11")),
			rs.GetValue(_T("user12")),
			rs.GetValue(_T("user13")),
			rs.GetValue(_T("user14")),
			rs.GetValue(_T("user15")),
			rs.GetValue(_T("user16")),
			rs.GetValue(_T("user17")),
			rs.GetValue(_T("user18")),
			rs.GetValue(_T("user19")),
			rs.GetValue(_T("user20")), NULL);
		rs.MoveNext();
	}
	m_wndTodayScheduleList.EndLoad(); 
	return nCount;
}
void CHMSSurgerySchedule::OnScheduleListDblClick()
{
	
} 
void CHMSSurgerySchedule::OnScheduleListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSurgerySchedule::OnScheduleListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSurgerySchedule::OnScheduleListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndScheduleList.BeginLoad(); 
	m_wndScheduleList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndScheduleList.AddItems(
		rs.MoveNext();
	}
	m_wndScheduleList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSSurgerySchedule::OnCurrentDayChange(){
	
} */
/*void CHMSSurgerySchedule::OnCurrentDaySetfocus(){
	
} */
/*void CHMSSurgerySchedule::OnCurrentDayKillfocus(){
	
} */
int CHMSSurgerySchedule::OnCurrentDayCheckValue(){
	return 0;
} 
void CHMSSurgerySchedule::OnLoadSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	COleDateTime date;
	date.ParseDateTime(m_szCurrentDay);
	if (m_nWeekView == 0)
		m_wndCalendar.SetCurrentDate(date, 0, WV_WEEKVIEW);
	else
		m_wndCalendar.SetCurrentDate(date, 0, WV_MONTHVIEW);
	OnLoadData();
}
void CHMSSurgerySchedule::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_nOrderID < 0)
		return;
	PrintDutySchedule();
} 
void CHMSSurgerySchedule::OnWeekViewSelect()
{
	if (m_wndWeekView.GetCheck())
		m_wndCalendar.SetView(WV_WEEKVIEW);
	//UpdateData(TRUE);
	//OnLoadData();
}
void CHMSSurgerySchedule::OnMonthViewSelect()
{
	if (m_wndMonthView.GetCheck())
		m_wndCalendar.SetView(WV_MONTHVIEW);
	//UpdateData(TRUE);
	//OnLoadData();
}
int CHMSSurgerySchedule::OnAddHMSSurgerySchedule(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgerySchedule::OnEditHMSSurgerySchedule(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgerySchedule::OnDeleteHMSSurgerySchedule(){
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
 		OnCancelHMSSurgerySchedule(); 
 	}
	return 0;
}
int CHMSSurgerySchedule::OnSaveHMSSurgerySchedule(){
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
 		//OnHMSSurgeryScheduleListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSurgerySchedule::OnCancelHMSSurgerySchedule(){
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
int CHMSSurgerySchedule::OnHMSSurgeryScheduleListLoadData(){
	return 0;
}

int CHMSSurgerySchedule::OnReloadTodayList()
{
	OnTodayScheduleListLoadData();
	return 0;
}

void CHMSSurgerySchedule::OnLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp;
	COleDateTime dtS, dtE;
	CString szFromDate, szToDate;

	m_wndCalendar.GetDateRange(&dtS, &dtE);
	szFromDate.Format(_T("%.4d/%.2d/%.2d"), dtS.GetYear(), dtS.GetMonth(), dtS.GetDay());
	szToDate.Format(_T("%.4d/%.2d/%.2d"), dtE.GetYear(), dtE.GetMonth(), dtE.GetDay());
	szSQL.Format(_T("SELECT hssl_refidx AS ID, ")\
				 _T("hss_starttime AS StartTime, ")\
				 _T("hss_status AS Status ")\
				 _T("FROM Hms_Sample_Schedule ")\
				 _T("LEFT JOIN Hms_Sample_Schedule_Line ON(hssl_refidx=hss_idx) ")\
				 _T("WHERE trunc_date(hss_starttime) BETWEEN to_date('%s', 'YYYY-MM-DD') AND to_date('%s', 'YYYY-MM-DD') and hss_dept='%s'"),
				 szFromDate, szToDate, pMF->m_szDeptID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	m_wndCalendar.DeleteAllItems();

	long nIdx;
	int nItem = 0;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ID"), nIdx);
		rs.GetValue(_T("StartTime"), szTemp);

		dtS.ParseDateTime(szTemp);
		dtE.ParseDateTime(szTemp);

		nItem = m_wndCalendar.InsertItem(dtS, dtE, GetSubject(nIdx), 0, nIdx);
		if (rs.GetValue(_T("Status")) == _T("T"))
			m_wndCalendar.SetItemColor(nItem, RGB(132, 156, 231));
		else
			m_wndCalendar.SetItemColor(nItem, RGB(255, 148, 132));
		m_wndCalendar.SetItemData(nItem, 1);

		rs.MoveNext();
	}

}

void CHMSSurgerySchedule::OnCellDblClick(NMHDR *pNotifyStruct, LRESULT *pResult)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CHMSSampleScheduleInfoDialog dlg(this);
	COleDateTime dtDate;
	CString szDate;
	BOOL bAddMode = FALSE;
	NM_WVCELLDATA *pData = (NM_WVCELLDATA *)pNotifyStruct;

	if (pData->pItem == NULL)
	{
		bAddMode = TRUE;
		dtDate = pData->pCell->GetCellDate();

		CRecord rs(&pMF->m_db);
		CString szSQL, szTemp;
		szTemp.Format(_T("%.4d/%.2d/%.2d"), dtDate.GetYear(), dtDate.GetMonth(), dtDate.GetDay());
		szSQL.Format(_T("SELECT Count(*) FROM HMS_SAMPLE_SCHEDULE ")\
			_T("WHERE trunc_date(hss_starttime)=to_date('%s', 'YYYY-MM-DD') and HSS_DEPT='%s'"), szTemp, pMF->m_szDeptID);
		rs.ExecSQL(szSQL);		
		//_msg(_T("%s"),szSQL);
		if (rs.GetIntValue() > 0)
			return;

		dlg.m_DateTime = dtDate;
		dlg.SetMode(VM_ADD);
	}
	else
	{
		bAddMode = FALSE;
		dlg.m_nIdx = m_nOrderID;
		dlg.SetMode(VM_EDIT);
	}

	if (dlg.DoModal() == IDOK)
	{
		if (bAddMode)
		{
			int nItem = 0;
			m_nOrderID = dlg.m_nIdx;
			CString strSubject = GetSubject(m_nOrderID);
			COleDateTime dtS = dlg.GetFromTime();
			COleDateTime dtE = dlg.GetFromTime();
			nItem = m_wndCalendar.InsertItem(dtS, dtE, strSubject, 0, m_nOrderID);
			if (!dlg.m_bLockSchedule)
				m_wndCalendar.SetItemColor(nItem, RGB(255, 148, 132));
			else
				m_wndCalendar.SetItemColor(nItem, RGB(132, 156, 231));
			m_wndCalendar.SetItemData(nItem, 1);
		}
		else
		{
			pData->pItem->SetItemText(GetSubject(m_nOrderID));
			pData->pItem->SetStartTime(dlg.GetFromTime());
			pData->pItem->SetEndTime(dlg.GetFromTime());
			if (!dlg.m_bLockSchedule)
				pData->pItem->SetBkColor(RGB(255, 148, 132));
			else
				pData->pItem->SetBkColor(RGB(132, 156, 231));
			m_wndCalendar.RedrawControl();
		}
	}

	szDate.Format(_T("%.4d/%.2d/%.2d"), pData->pCell->GetCellDate().GetYear(),
		          pData->pCell->GetCellDate().GetMonth(), pData->pCell->GetCellDate().GetDay());

	if (CompareDate(szDate, pMF->GetSysDate()) == 0)
		OnTodayScheduleListLoadData();
}

void CHMSSurgerySchedule::OnCellClick(NMHDR *pNMHDR, LRESULT *pResult)
{
	NM_WVCELLDATA *pData = (NM_WVCELLDATA *)pNMHDR;

	CObList m_CellList;
	POSITION pos = m_CellList.GetHeadPosition();

	if (pData->pItem != NULL)
	{
		m_nOrderID = pData->nItem;
		//_msg(_T("%d"), m_nOrderID);
	}
	else
	{
		m_nOrderID = -1;
		//_msg(_T("%d"), m_nOrderID);
	}
}

void CHMSSurgerySchedule::OnDeleteItem()
{
	if (m_nOrderID > 0)
	{
		CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT hss_status AS Status FROM Hms_Sample_Schedule WHERE hss_idx=%ld"), m_nOrderID);
		rs.ExecSQL(szSQL);

		if (rs.GetValue(_T("Status")) == _T("T"))
		{
			ShowMessageBox(_T("This Item is locked. Can not delete it!"), MB_ICONERROR | MB_OK);
			return;
		}
		if (ShowMessageBox(_T("Are you sure you want to delete this Item?"), MB_ICONQUESTION | MB_YESNO | MB_DEFBUTTON2) == IDYES)
		{
			szSQL.Format(_T("DELETE FROM Hms_Sample_Schedule_Line WHERE hssl_refidx=%ld"), m_nOrderID);
			int ret = pMF->ExecSQL(szSQL);
			if (ret >= 0)
			{
				szSQL.Format(_T("DELETE FROM Hms_Sample_Schedule WHERE hss_idx=%ld"), m_nOrderID);
				pMF->ExecSQL(szSQL);
				m_wndCalendar.DeleteItem(m_nOrderID);
				m_wndCalendar.RedrawControl();
			}
		}
	}
}

CString CHMSSurgerySchedule::GetSubject(long nIdx)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szTemp;
	CString szDoctors, szNurses, szNurses1;
	CString szValue;

		szNurses = _T("Người lấy mẫu: ");
	

	szSQL.Format(_T(" SELECT (SELECT su_name FROM sys_user WHERE su_userid=hssl_user1) AS user1,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user2) AS user2,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user3) AS user3,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user4) AS user4,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user5) AS user5,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user6) AS user6,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user7) AS user7,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user8) AS user8,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user9) AS user9,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user10) AS user10,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user11) AS user11,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user12) AS user12,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user13) AS user13,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user14) AS user14,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user15) AS user15,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user16) AS user16,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user17) AS user17,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user18) AS user18,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user19) AS user19,") \
				_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_user20) AS user20") \
				_T(" FROM Hms_Sample_Schedule_Line") \
				_T(" LEFT JOIN Hms_Sample_Schedule ON(hss_idx=hssl_refidx)") \
				_T(" WHERE hssl_refidx=%ld"), nIdx);

	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("user1"), szTemp);

		if (!rs.GetValue(_T("user2")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user2")));
		
		if (!rs.GetValue(_T("user3")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user3")));

		if (!rs.GetValue(_T("user4")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user4")));

		if (!rs.GetValue(_T("user5")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user5")));

		if (!rs.GetValue(_T("user6")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user6")));


		if (!rs.GetValue(_T("user7")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user7")));

		if (!rs.GetValue(_T("user8")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user8")));

		if (!rs.GetValue(_T("user9")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user9")));

		if (!rs.GetValue(_T("user10")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user10")));

		if (!rs.GetValue(_T("user11")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user11")));

		if (!rs.GetValue(_T("user12")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user12")));

		if (!rs.GetValue(_T("user13")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user14")));

		if (!rs.GetValue(_T("user15")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user15")));

		if (!rs.GetValue(_T("user16")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user16")));

		if (!rs.GetValue(_T("user17")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user17")));

		if (!rs.GetValue(_T("user18")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user18")));

		if (!rs.GetValue(_T("user19")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user19")));

		if (!rs.GetValue(_T("user20")).Trim().IsEmpty())
			szTemp += _T(", ");
		szTemp.AppendFormat(_T("%s"), rs.GetValue(_T("user20")));
		
		szNurses += szTemp;
	}

	if (!m_wndMonthView.GetCheck())
		szValue = szDoctors + _T("\n") + szNurses + _T("\n") + szNurses1;
	else
	{
		szValue = szDoctors + _T(" ") + szNurses + _T(" ") + szNurses1;
	}
	return szValue;
}

BOOL CHMSSurgerySchedule::PreTranslateMessage(MSG *pMsg)
{
	m_ToolTip.RelayEvent(pMsg);
	return CGuiView::PreTranslateMessage(pMsg);
}

void CHMSSurgerySchedule::NotifyDisplayTooltip(NMHDR * pNMHDR, LRESULT * result)
{
	*result = 0;

    NM_PPTOOLTIP_DISPLAY * pNotify = (NM_PPTOOLTIP_DISPLAY*)pNMHDR;
	CString szInfo = OnGetInfoTip(2, 0);
	if (!szInfo.Trim().IsEmpty())
	{
		pNotify->ti->nTransparency = 10;
		pNotify->ti->sTooltip = szInfo;
	}
	
}

CString CHMSSurgerySchedule::OnGetInfoTip(int nDescCol1, int nDescCol2, int nDescCol3)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nRow = -1, nCol = -1;
	CPoint point;
	CString szHeader, szValue;
	CString szTemp, szInfo;
	GetCursorPos(&point);
	m_wndTodayScheduleList.ScreenToClient(&point);
	LVHITTESTINFO lvhti = {0};
	lvhti.pt = point;
	nRow = m_wndTodayScheduleList.SubItemHitTest(&lvhti);
	nCol = lvhti.iSubItem;
	CDate date;
	date.ParseDate(pMF->GetSysDate());

	if (nRow > -1 && nCol > -1)
	{
		szHeader.Format(_T("L\x1ECB\x63h tr\x1EF1\x63 ng\xE0y %.2d/%.2d/%.4d"),
					    date.GetDay(), date.GetMonth(), date.GetYear());
		szTemp = m_wndTodayScheduleList.GetItemText(nRow, nCol);
		szValue.Format(_T("%s: %s\n"), GetColumnName(&m_wndTodayScheduleList, nCol), szTemp);

		szTemp.Empty();
		for (int i = 0; i < m_wndTodayScheduleList.GetColumnCount(); i++)
		{
			if (i != nCol)
			{
				szTemp.AppendFormat(_T("%s: %s\n"), GetColumnName(&m_wndTodayScheduleList, i),
									m_wndTodayScheduleList.GetItemText(nRow, i));
			}
		}
		
		szInfo.Format(_T("<center><h2><font color=blue size=20>%s</font></h2><br><hr color=red style=b></center><br>")\
					  _T("<font color=red size=16 style=b style=i>%s</font><font color=blue size=16 style=b>%s</font>"),
					  szHeader, szValue, szTemp);
	}

	return szInfo;
}

CString CHMSSurgerySchedule::GetColumnName(CGuiListCtrl *list, int nCol)
{
	CString szName;
	int nTotalCol;
	szName.Empty();
	CGuiHeaderCtrl *pHdr = list->GetHeaderControl();
	if (pHdr)
	{
		nTotalCol = pHdr->GetItemCount();
		if (nCol < nTotalCol)
		{
			HDITEM hdi;
			hdi.mask = HDI_TEXT;
			hdi.pszText = szName.GetBuffer(256);
			hdi.cchTextMax = 256;
			pHdr->GetItem(nCol, &hdi);
			szName.ReleaseBuffer();
		}
	}
	return szName;
}

void CHMSSurgerySchedule::PrintDutySchedule()
{
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szFromDate, szToDate;
	CRecord rs(&pMF->m_db);
	CRecord rst(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	
	static CReport rpt;
	CString tmpStr, tmpStr1;
	if(!rpt.Init(_T("Reports/HMS/PTTT/DUTIESREPORT.RPT")) )
	{		return;
	}

	CPoint point;
	GetCursorPos(&point);
	m_wndCalendar.ScreenToClient(&point);
	m_wndCalendar.SendMessageToParent(point.x, point.y, NM_CLICK);

	if (m_nOrderID < 0)
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}

	BeginWaitCursor();

	szSQL.Format(_T("SELECT hss_starttime AS StartTime, hss_endtime EndTime ")\
				 _T("FROM Hms_Sample_Schedule ")\
				 _T("WHERE hss_idx=%ld"), m_nOrderID);
	rst.ExecSQL(szSQL);


	if (!rst.IsEOF())
	{
		rst.GetValue(_T("StartTime"), szFromDate);
		rst.GetValue(_T("EndTime"), szToDate);
	}
	szSQL.Format(_T(" SELECT ") \
				_T("        ho_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age, ") \
				_T("        (select ho_desc from hms_object where ho_id=cast(ho_object as nvarchar2(2)) and rownum < 2) as objectname, ") \
				_T("        case when length(ho_comment) > 0 then ho_comment else hfl_name end as surgeryname,") \
				_T("        (select ham_name from hms_anesthesia_method where ham_idx=ho_anes_method and rownum < 2) as anaes_method,") \
				_T("        (select ham_name from hms_anesthesia_method where ham_idx=ho_anes_method2 and rownum < 2) as anaes_method1,") \
				_T("        ho_practitioner as surgeon,") \
				_T("        ho_anesthetist as anesthetish,") \
				_T("        ho_user5 as assist1,") \
				_T("        ho_anaes_method as assist2,") \
				_T("        ho_user7 as assist3,  ") \
				_T("        ho_type as category, ") \
				_T("        (SELECT ss_desc as name FROM sys_sel WHERE ss_code=ho_type AND ss_id='hms_operation_type') as categeryname,") \
				_T("        ho_subcategory as subcategory") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_operation ON(ho_docno=hcr_docno and ho_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=ho_itemid)") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid)") \
				_T(" WHERE ho_pdeptid='%s'") \
				_T(" AND ho_status = 'T' AND ((ho_performdate BETWEEN to_date('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_date('%s', 'YYYY-MM-DD HH24:MI:SS') ")\
				_T(" AND ho_performdate <> to_date('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')) ") \
				_T(" OR ho_performdate = to_date('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')) ") \
				_T(" ORDER BY ho_type, ho_performdate"), pMF->m_szDepartment, szFromDate, szToDate, szToDate.Left(10), szFromDate.Left(10));

//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	/*if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK);
		return;
	}*/

	
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);	
	rpt.GetReportHeader()->Format(_T("ReportDate"),
		                          CDateTime::Convert(szFromDate, yyyymmdd | hhmm, ddmmyyyy | hhmm),
								  CDateTime::Convert(szToDate, yyyymmdd | hhmm, ddmmyyyy | hhmm));
	rpt.GetReportHeader()->SetValue(_T("DutiesSheet"), _T(""));
	

	szSQL.Format(_T(" SELECT (SELECT su_name FROM sys_user WHERE su_userid=hssl_doctor) AS Doctor,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_doctor1) AS Doctor1,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse1) AS Nurse1,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse2) AS Nurse2,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse3) AS Nurse3,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse4) AS Nurse4,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse5) AS Nurse5,") \
			_T("        (SELECT su_name FROM sys_user WHERE su_userid=hssl_nurse6) AS Nurse6") \
			_T(" FROM Hms_Sample_Schedule_Line") \
			_T(" LEFT JOIN Hms_Sample_Schedule ON(hss_idx=hssl_refidx)") \
			_T(" WHERE hssl_refidx=%ld"), m_nOrderID);
	rss.ExecSQL(szSQL);

	if (!rss.IsEOF())
	{
		rss.GetValue(_T("Doctor"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("B1"), tmpStr);
		rss.GetValue(_T("Doctor1"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("B2"), tmpStr);
		rss.GetValue(_T("Nurse1"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Y1"), tmpStr);
		rss.GetValue(_T("Nurse2"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Y2"), tmpStr);
		rss.GetValue(_T("Nurse3"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Y3"), tmpStr);
		rss.GetValue(_T("Nurse4"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Y4"), tmpStr);
		rss.GetValue(_T("Nurse5"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Y5"), tmpStr);
		rss.GetValue(_T("Nurse6"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Y6"), tmpStr);
	}

	//Page Header
	//Report Detail
	int nIndex = 1;
	int nTotalSurgeryType[20];
	int nTotalHitech[20];
	int grpCost=0;
	CString szOldLine, szNewLine;
	CReportSection* rptDetail;
	for (int i =0; i < 11; i++) 
	{
		nTotalSurgeryType[i] = 0;
		nTotalHitech[i] = 0;
	}

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("categeryname"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), szNewLine);
			szOldLine = szNewLine;
			nIndex=1;
		}

		CReportSection* rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("Age"), tmpStr);
		rptDetail->SetValue(_T("2_0"), tmpStr);

		rs.GetValue(_T("objectname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("surgeryname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);

		rs.GetValue(_T("anaes_method"), tmpStr);		
		rs.GetValue(_T("anaes_method1"), tmpStr1);
		if (!tmpStr1.IsEmpty())
			tmpStr.AppendFormat(_T(",%s"), tmpStr1);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("surgeon"), tmpStr);
		rptDetail->SetValue(_T("7"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("anesthetish"), tmpStr);
		rptDetail->SetValue(_T("8"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("assist1"), tmpStr);
		rptDetail->SetValue(_T("9"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("assist2"), tmpStr);
		rptDetail->SetValue(_T("10"), pMF->GetDoctorName(tmpStr, true));

		rs.GetValue(_T("assist3"), tmpStr);
		rptDetail->SetValue(_T("11"), pMF->GetDoctorName(tmpStr, true));
		int n, hitech;
		rs.GetValue(_T("category"), n);
		rs.GetValue(_T("subcategory"), hitech);	
		
		if (hitech > 0)
			nTotalHitech[0] ++;
		nTotalSurgeryType[0]++;
		if(n > 0 && n < 11)
		{
			nTotalSurgeryType[n] ++;		  	
			if(hitech > 0 && hitech < 11)
			{				
				nTotalHitech[hitech] ++;
			}
		}		

		rs.MoveNext();
	}
	for (int i = 0; i < 11; i++)
	{
		tmpStr.Format(_T("T%d"), i+1);
		rpt.GetReportFooter()->SetValue(tmpStr, int2str(nTotalSurgeryType[i]));
		tmpStr.Format(_T("H%d"), i);
		rpt.GetReportFooter()->SetValue(tmpStr, int2str(nTotalHitech[i]));
	}
	
	//Page Footer
	//Report Footer
	CString szTime, szSysDate, szDate;
	szTime = pMF->GetSysDateTime();
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szTime.Right(8),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);

	EndWaitCursor();
	rpt.PrintPreview();

}