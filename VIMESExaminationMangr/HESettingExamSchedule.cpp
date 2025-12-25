#include "HESettingExamSchedule.h"
#include "MainFrm.h"
static void _OnDepartMentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHESettingExamSchedule* )pWnd)->OnDepartMentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartMentSelendokFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnDepartMentSelendok();
}
/*static void _OnDepartMentSetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnDepartMentKillfocus();
}*/
/*static void _OnDepartMentKillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnDepartMentKillfocus();
}*/
static long _OnDepartMentLoadDataFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnDepartMentLoadData();
}
/*static void _OnDepartMentAddNewFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnDepartMentAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHESettingExamSchedule*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHESettingExamSchedule*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHESettingExamSchedule*)pWnd)->OnListDeleteItem();
} 
/*static void _OnNumberAppointChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnNumberAppointChange();
} */
/*static void _OnNumberAppointSetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnNumberAppointSetfocus();} */ 
/*static void _OnNumberAppointKillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnNumberAppointKillfocus();
} */
static int _OnNumberAppointCheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnNumberAppointCheckValue();
} 
/*static void _OnRoomNameChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnRoomNameChange();
} */
/*static void _OnRoomNameSetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnRoomNameSetfocus();} */ 
/*static void _OnRoomNameKillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnRoomNameKillfocus();
} */
static int _OnRoomNameCheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnRoomNameCheckValue();
} 
static void _OnMorningSelectFnc(CWnd *pWnd){
	 ((CHESettingExamSchedule*)pWnd)->OnMorningSelect();
}
static void _OnAfternoonSelectFnc(CWnd *pWnd){
	 ((CHESettingExamSchedule*)pWnd)->OnAfternoonSelect();
}
/*static void _OnFTimeChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnFTimeChange();
} */
/*static void _OnFTimeSetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnFTimeSetfocus();} */ 
/*static void _OnFTimeKillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnFTimeKillfocus();
} */
static int _OnFTimeCheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnFTimeCheckValue();
} 
/*static void _OnToTimeChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnToTimeChange();
} */
/*static void _OnToTimeSetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnToTimeSetfocus();} */ 
/*static void _OnToTimeKillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnToTimeKillfocus();
} */
static int _OnToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnToTimeCheckValue();
} 
/*static void _OnFTime1ChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnFTime1Change();
} */
/*static void _OnFTime1SetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnFTime1Setfocus();} */ 
/*static void _OnFTime1KillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnFTime1Killfocus();
} */
static int _OnFTime1CheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnFTime1CheckValue();
} 
/*static void _OnToTime1ChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnToTime1Change();
} */
/*static void _OnToTime1SetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnToTime1Setfocus();} */ 
/*static void _OnToTime1KillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnToTime1Killfocus();
} */
static int _OnToTime1CheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnToTime1CheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHESettingExamSchedule *pVw = (CHESettingExamSchedule *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHESettingExamSchedule *pVw = (CHESettingExamSchedule *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHESettingExamSchedule *pVw = (CHESettingExamSchedule *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHESettingExamSchedule *pVw = (CHESettingExamSchedule *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnTimesChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnTimesChange();
} */
/*static void _OnTimesSetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnTimesSetfocus();} */ 
/*static void _OnTimesKillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnTimesKillfocus();
} */
static int _OnTimesCheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnTimesCheckValue();
} 
/*static void _OnTimes2ChangeFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnTimes2Change();
} */
/*static void _OnTimes2SetfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnTimes2Setfocus();} */ 
/*static void _OnTimes2KillfocusFnc(CWnd *pWnd){
	((CHESettingExamSchedule *)pWnd)->OnTimes2Killfocus();
} */
static int _OnTimes2CheckValueFnc(CWnd *pWnd){
	return ((CHESettingExamSchedule *)pWnd)->OnTimes2CheckValue();
} 
static int _OnAddHESettingExamScheduleFnc(CWnd *pWnd){
	 return ((CHESettingExamSchedule*)pWnd)->OnAddHESettingExamSchedule();
} 
static int _OnEditHESettingExamScheduleFnc(CWnd *pWnd){
	 return ((CHESettingExamSchedule*)pWnd)->OnEditHESettingExamSchedule();
} 
static int _OnDeleteHESettingExamScheduleFnc(CWnd *pWnd){
	 return ((CHESettingExamSchedule*)pWnd)->OnDeleteHESettingExamSchedule();
} 
static int _OnSaveHESettingExamScheduleFnc(CWnd *pWnd){
	 return ((CHESettingExamSchedule*)pWnd)->OnSaveHESettingExamSchedule();
} 
static int _OnCancelHESettingExamScheduleFnc(CWnd *pWnd){
	 return ((CHESettingExamSchedule*)pWnd)->OnCancelHESettingExamSchedule();
} 
CHESettingExamSchedule::CHESettingExamSchedule(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHESettingExamSchedule::~CHESettingExamSchedule(){
}
void CHESettingExamSchedule::OnCreateComponents(){
	m_wndDepartMentLabel.Create(this, _T("Department"), 5, 5, 85, 30);
	m_wndDepartMent.Create(this,90, 5, 340, 30); 
	m_wndList.Create(this,5, 35, 340, 345); 
	m_wndNumberAppointMentLabel.Create(this, _T("Number Appoint"), 345, 35, 485, 60);
	m_wndNumberAppoint.Create(this,490, 35, 570, 60); 
	m_wndRoomNameLabel.Create(this, _T("RoomName"), 345, 5, 485, 30);
	m_wndRoomName.Create(this,490, 5, 767, 30); 
	m_wndMorning.Create(this, _T("Morning"), 345, 65, 485, 90);
	m_wndAfternoon.Create(this, _T("Afternoon"), 345, 95, 485, 120);
	m_wndFromTimeLabel.Create(this, _T("From Time"), 490, 65, 570, 90);
	m_wndFTime.Create(this,575, 65, 625, 90); 
	m_wndToTimeLabel.Create(this, _T("To Time"), 632, 65, 712, 90);
	m_wndToTime.Create(this,717, 65, 767, 90); 
	m_wndTurnOfTimeLabel.Create(this, _T("Time"), 770, 65, 850, 90);
	m_wndTimes.Create(this,855, 65, 890, 90); 

	m_wndFromTime1Label.Create(this, _T("From Time"), 490, 95, 570, 120);
	m_wndFTime1.Create(this,575, 95, 625, 120); 
	m_wndToTime1Label.Create(this, _T("To Time"), 631, 95, 711, 120);
	m_wndToTime1.Create(this,716, 95, 766, 120); 
	m_wndTurnOfTime1Label.Create(this, _T("Time"), 770, 95, 850, 120);
	m_wndTimes2.Create(this,855, 95, 890, 120); 
	m_wndUpdate.Create(this, _T("&Update"), 557, 320, 637, 345);
	m_wndSave.Create(this, _T("&Save"), 642, 320, 722, 345);
	m_wndCancel.Create(this, _T("&Cancel"), 727, 320, 807, 345);
	m_wndClose.Create(this, _T("&Close"), 810, 320, 890, 345);
	


}
void CHESettingExamSchedule::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartMent.SetCheckValue(true);
	m_wndDepartMent.LimitText(35);
	m_wndNumberAppoint.SetLimitText(16);
	m_wndNumberAppoint.SetCheckValue(true);
	m_wndRoomName.SetLimitText(35);
	m_wndRoomName.SetCheckValue(true);
	//m_wndFTime.SetMax(CTime(pMF->GetSysTime()));
	//m_wndFTime.SetCheckValue(true);
	//m_wndToTime.SetMax(CTime(pMF->GetSysTime()));
	//m_wndToTime.SetCheckValue(true);
	//m_wndFTime1.SetMax(CTime(pMF->GetSysTime()));
	//m_wndFTime1.SetCheckValue(true);
	//m_wndToTime1.SetMax(CTime(pMF->GetSysTime()));
	//m_wndToTime1.SetCheckValue(true);


	m_wndDepartMent.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartMent.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("DeptID"), CFMT_TEXT, 0);

}
void CHESettingExamSchedule::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartMent.SetEvent(WE_SELENDOK, _OnDepartMentSelendokFnc);
	//m_wndDepartMent.SetEvent(WE_SETFOCUS, _OnDepartMentSetfocusFnc);
	//m_wndDepartMent.SetEvent(WE_KILLFOCUS, _OnDepartMentKillfocusFnc);
	m_wndDepartMent.SetEvent(WE_SELCHANGE, _OnDepartMentSelectChangeFnc);
	m_wndDepartMent.SetEvent(WE_LOADDATA, _OnDepartMentLoadDataFnc);
	//m_wndDepartMent.SetEvent(WE_ADDNEW, _OnDepartMentAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndNumberAppoint.SetEvent(WE_CHANGE, _OnNumberAppointChangeFnc);
	//m_wndNumberAppoint.SetEvent(WE_SETFOCUS, _OnNumberAppointSetfocusFnc);
	//m_wndNumberAppoint.SetEvent(WE_KILLFOCUS, _OnNumberAppointKillfocusFnc);
	m_wndNumberAppoint.SetEvent(WE_CHECKVALUE, _OnNumberAppointCheckValueFnc);
	//m_wndRoomName.SetEvent(WE_CHANGE, _OnRoomNameChangeFnc);
	//m_wndRoomName.SetEvent(WE_SETFOCUS, _OnRoomNameSetfocusFnc);
	//m_wndRoomName.SetEvent(WE_KILLFOCUS, _OnRoomNameKillfocusFnc);
	m_wndRoomName.SetEvent(WE_CHECKVALUE, _OnRoomNameCheckValueFnc);
	m_wndMorning.SetEvent(WE_CLICK, _OnMorningSelectFnc);
	m_wndAfternoon.SetEvent(WE_CLICK, _OnAfternoonSelectFnc);
	//m_wndFTime.SetEvent(WE_CHANGE, _OnFTimeChangeFnc);
	//m_wndFTime.SetEvent(WE_SETFOCUS, _OnFTimeSetfocusFnc);
	//m_wndFTime.SetEvent(WE_KILLFOCUS, _OnFTimeKillfocusFnc);
	m_wndFTime.SetEvent(WE_CHECKVALUE, _OnFTimeCheckValueFnc);
	//m_wndToTime.SetEvent(WE_CHANGE, _OnToTimeChangeFnc);
	//m_wndToTime.SetEvent(WE_SETFOCUS, _OnToTimeSetfocusFnc);
	//m_wndToTime.SetEvent(WE_KILLFOCUS, _OnToTimeKillfocusFnc);
	m_wndToTime.SetEvent(WE_CHECKVALUE, _OnToTimeCheckValueFnc);
	//m_wndFTime1.SetEvent(WE_CHANGE, _OnFTime1ChangeFnc);
	//m_wndFTime1.SetEvent(WE_SETFOCUS, _OnFTime1SetfocusFnc);
	//m_wndFTime1.SetEvent(WE_KILLFOCUS, _OnFTime1KillfocusFnc);
	m_wndFTime1.SetEvent(WE_CHECKVALUE, _OnFTime1CheckValueFnc);
	//m_wndToTime1.SetEvent(WE_CHANGE, _OnToTime1ChangeFnc);
	//m_wndToTime1.SetEvent(WE_SETFOCUS, _OnToTime1SetfocusFnc);
	//m_wndToTime1.SetEvent(WE_KILLFOCUS, _OnToTime1KillfocusFnc);
	m_wndToTime1.SetEvent(WE_CHECKVALUE, _OnToTime1CheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndTimes.SetEvent(WE_CHANGE, _OnTimesChangeFnc);
	//m_wndTimes.SetEvent(WE_SETFOCUS, _OnTimesSetfocusFnc);
	//m_wndTimes.SetEvent(WE_KILLFOCUS, _OnTimesKillfocusFnc);
	m_wndTimes.SetEvent(WE_CHECKVALUE, _OnTimesCheckValueFnc);
	//m_wndTimes2.SetEvent(WE_CHANGE, _OnTimes2ChangeFnc);
	//m_wndTimes2.SetEvent(WE_SETFOCUS, _OnTimes2SetfocusFnc);
	//m_wndTimes2.SetEvent(WE_KILLFOCUS, _OnTimes2KillfocusFnc);
	m_wndTimes2.SetEvent(WE_CHECKVALUE, _OnTimes2CheckValueFnc);
	OnListLoadData();

	SetMode(VM_VIEW);


}
void CHESettingExamSchedule::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartMent.GetDlgCtrlID(), m_szDepartMentKey);
	DDX_Text(pDX, m_wndNumberAppoint.GetDlgCtrlID(), m_nNumberAppoint);
	DDX_Text(pDX, m_wndRoomName.GetDlgCtrlID(), m_szRoomName);
	DDX_Check(pDX, m_wndMorning.GetDlgCtrlID(), m_bMorning);
	DDX_Check(pDX, m_wndAfternoon.GetDlgCtrlID(), m_bAfternoon);
	DDX_TextEx(pDX, m_wndFTime.GetDlgCtrlID(), m_szFTime);
	DDX_TextEx(pDX, m_wndToTime.GetDlgCtrlID(), m_szToTime);
	DDX_TextEx(pDX, m_wndFTime1.GetDlgCtrlID(), m_szFTime1);
	DDX_TextEx(pDX, m_wndToTime1.GetDlgCtrlID(), m_szToTime1);
	DDX_Text(pDX, m_wndTimes.GetDlgCtrlID(), m_nTimes);
	DDX_Text(pDX, m_wndTimes2.GetDlgCtrlID(), m_nTimes2);

}
void CHESettingExamSchedule::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DepartMent")] =  m_szDepartMentKey;
	m_jData[_T("NumberAppoint")] =  m_nNumberAppoint;
	m_jData[_T("RoomName")] =  m_szRoomName;
	m_jData[_T("Morning")] =  m_bMorning;
	m_jData[_T("Afternoon")] =  m_bAfternoon;
	m_jData[_T("FTime")] =  m_szFTime;
	m_jData[_T("ToTime")] =  m_szToTime;
	m_jData[_T("FTime1")] =  m_szFTime1;
	m_jData[_T("ToTime1")] =  m_szToTime1;
	m_jData[_T("Times")] =  m_nTimes;
	m_jData[_T("Times2")] =  m_nTimes2;
	}
	else
	{
			
	m_jData[_T("DepartMent")].GetValue(m_szDepartMentKey);
	m_jData[_T("NumberAppoint")].GetValue(m_nNumberAppoint);
	m_jData[_T("RoomName")].GetValue(m_szRoomName);
	m_jData[_T("Morning")].GetValue(m_bMorning);
	m_jData[_T("Afternoon")].GetValue(m_bAfternoon);
	m_jData[_T("FTime")].GetValue(m_szFTime);
	m_jData[_T("ToTime")].GetValue(m_szToTime);
	m_jData[_T("FTime1")].GetValue(m_szFTime1);
	m_jData[_T("ToTime1")].GetValue(m_szToTime1);
	m_jData[_T("Times")].GetValue(m_nTimes);
	m_jData[_T("Times2")].GetValue(m_nTimes2);
	}

}
void CHESettingExamSchedule::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szType;
	SetDefaultValues();
	szSQL.Format(_T("SELECT hrl_name, hrl_id,hrl_appointnumber  FROM hms_roomlist where hrl_deptid='%s' and hrl_id =%d "), m_szDepartMentKey, m_nRoomID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hrl_name"), m_szRoomName);
		rs.GetValue(_T("hrl_appointnumber"), m_nNumberAppoint);
		// kiem tra trong bảng sáng chiều
		szSQL.Format(_T("select hses_type, hses_time,hses_starttime, hses_endtime from hms_schedule_exam_setup  where hses_deptid = '%s' and hses_roomid =%d  "),m_szDepartMentKey,m_nRoomID);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hses_type"), szType);
			if(szType== _T("S"))
			{
				m_bMorning = true;
				rs.GetValue(_T("hses_starttime"), m_szFTime);
				rs.GetValue(_T("hses_endtime"), m_szToTime);
				rs.GetValue(_T("hses_time"), m_nTimes);
			}
			else
			{
				m_bAfternoon = true;
				rs.GetValue(_T("hses_starttime"), m_szFTime1);
				rs.GetValue(_T("hses_endtime"), m_szToTime1);
				rs.GetValue(_T("hses_time"), m_nTimes2);
			}
			
			rs.MoveNext();
		}
		UpdateData(false);

	}

}
void CHESettingExamSchedule::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHESettingExamSchedule::SetDefaultValues(){

	//m_szDepartMentKey.Empty();
	m_nNumberAppoint=0;
	m_szRoomName.Empty();
	m_bMorning=FALSE;
	m_bAfternoon=FALSE;
	m_szFTime.Empty();
	m_szToTime.Empty();
	m_szFTime1.Empty();
	m_szToTime1.Empty();
	m_nTimes=0;
	m_nTimes2=0;

}
int CHESettingExamSchedule::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
 			EnableButtons(TRUE, 1, 2,3, -1);
			if(!m_bMorning )
			{
				m_wndFTime.EnableWindow(false);
				m_wndToTime.EnableWindow(false);
				m_wndTimes.EnableWindow(false);
			}
			if(!m_bAfternoon)
			{
				m_wndFTime1.EnableWindow(false);
				m_wndToTime1.EnableWindow(false);
				m_wndTimes2.EnableWindow(false);
			}
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDepartMent.EnableWindow(true);
		m_wndRoomName.EnableWindow(false);
        m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHESettingExamSchedule::OnDepartMentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHESettingExamSchedule::OnDepartMentSelendok(){
	OnListLoadData();
	 
}
/*void CHESettingExamSchedule::OnDepartMentSetfocus(){
	
}*/
/*void CHESettingExamSchedule::OnDepartMentKillfocus(){
	
}*/
long CHESettingExamSchedule::OnDepartMentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartMent.IsSearchKey() && !m_szDepartMentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartMentKey);
	};
	m_wndDepartMent.DeleteAllItems(); 
	int nCount = 0;
	
	//szWhere.AppendFormat(_T(" and sd_id <> '%s' "), pMF->m_szDept);

	szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
		_T("FROM sys_dept WHERE sd_type='KB' and sd_isactive='Y' %s ORDER BY sd_id"), szWhere);
//	_msg(_T("%s"),szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartMent.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHESettingExamSchedule::OnDepartMentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHESettingExamSchedule::OnListDblClick(){
	
} 
void CHESettingExamSchedule::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nRoomID = str2int(m_wndList.GetItemText(nNewItem,0));
	if(m_nRoomID <0)
		return ;

	GetDataToScreen();
	
} 
int CHESettingExamSchedule::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHESettingExamSchedule::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select hrl_id, hrl_name, hrl_deptid from hms_roomlist where hrl_deptid = '%s' and hrl_active='Y' and nvl(hrl_section,'') <>'HA' "), m_szDepartMentKey);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hrl_id")), 
			rs.GetValue(_T("hrl_name")),
			rs.GetValue(_T("hrl_deptid")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	m_wndList.SetCurSel(0);
	return nCount;

}
/*void CHESettingExamSchedule::OnNumberAppointChange(){
	
} */
/*void CHESettingExamSchedule::OnNumberAppointSetfocus(){
	
} */
/*void CHESettingExamSchedule::OnNumberAppointKillfocus(){
	
} */
int CHESettingExamSchedule::OnNumberAppointCheckValue(){
	return 0;
} 
/*void CHESettingExamSchedule::OnRoomNameChange(){
	
} */
/*void CHESettingExamSchedule::OnRoomNameSetfocus(){
	
} */
/*void CHESettingExamSchedule::OnRoomNameKillfocus(){
	
} */
int CHESettingExamSchedule::OnRoomNameCheckValue(){
	return 0;
} 
	void CHESettingExamSchedule::OnMorningSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bMorning = !m_bMorning;
	if(m_bMorning)
	{
		m_wndFTime.EnableWindow(true);
		m_wndToTime.EnableWindow(true);
		m_wndTimes.EnableWindow(true);
	}
	else
	{
		m_wndFTime.EnableWindow(false);
		m_wndToTime.EnableWindow(false);
		m_wndTimes.EnableWindow(false);
	}
	
}
	void CHESettingExamSchedule::OnAfternoonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_bAfternoon = !m_bAfternoon;
	if(m_bAfternoon)
	{
		m_wndFTime1.EnableWindow(true);
		m_wndToTime1.EnableWindow(true);
		m_wndTimes2.EnableWindow(true);
	}
	else
	{
		m_wndFTime1.EnableWindow(false);
		m_wndToTime1.EnableWindow(false);
		m_wndTimes2.EnableWindow(false);
	}
	
}
/*void CHESettingExamSchedule::OnFTimeChange(){
	
} */
/*void CHESettingExamSchedule::OnFTimeSetfocus(){
	
} */
/*void CHESettingExamSchedule::OnFTimeKillfocus(){
	
} */
int CHESettingExamSchedule::OnFTimeCheckValue(){
	return 0;
} 
/*void CHESettingExamSchedule::OnToTimeChange(){
	
} */
/*void CHESettingExamSchedule::OnToTimeSetfocus(){
	
} */
/*void CHESettingExamSchedule::OnToTimeKillfocus(){
	
} */
int CHESettingExamSchedule::OnToTimeCheckValue(){
	return 0;
} 
/*void CHESettingExamSchedule::OnFTime1Change(){
	
} */
/*void CHESettingExamSchedule::OnFTime1Setfocus(){
	
} */
/*void CHESettingExamSchedule::OnFTime1Killfocus(){
	
} */
int CHESettingExamSchedule::OnFTime1CheckValue(){
	return 0;
} 
/*void CHESettingExamSchedule::OnToTime1Change(){
	
} */
/*void CHESettingExamSchedule::OnToTime1Setfocus(){
	
} */
/*void CHESettingExamSchedule::OnToTime1Killfocus(){
	
} */
int CHESettingExamSchedule::OnToTime1CheckValue(){
	return 0;
} 
void CHESettingExamSchedule::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
	
} 
void CHESettingExamSchedule::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHESettingExamSchedule();
	
} 
void CHESettingExamSchedule::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHESettingExamSchedule();
} 
void CHESettingExamSchedule::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
/*void CHESettingExamSchedule::OnTimesChange(){
	
} */
/*void CHESettingExamSchedule::OnTimesSetfocus(){
	
} */
/*void CHESettingExamSchedule::OnTimesKillfocus(){
	
} */
int CHESettingExamSchedule::OnTimesCheckValue(){
	return 0;
} 
/*void CHESettingExamSchedule::OnTimes2Change(){
	
} */
/*void CHESettingExamSchedule::OnTimes2Setfocus(){
	
} */
/*void CHESettingExamSchedule::OnTimes2Killfocus(){
	
} */
int CHESettingExamSchedule::OnTimes2CheckValue(){
	return 0;
} 
int CHESettingExamSchedule::OnAddHESettingExamSchedule(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHESettingExamSchedule::OnEditHESettingExamSchedule(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHESettingExamSchedule::OnDeleteHESettingExamSchedule(){
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
 		OnCancelHESettingExamSchedule();
 	}
	return 0;
}
int CHESettingExamSchedule::OnSaveHESettingExamSchedule(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	// update ngay hen mac dinh truoc
	szSQL.Format(_T("Update hms_roomlist set hrl_appointnumber =%d where hrl_deptid='%s' and hrl_id =%d "), m_nNumberAppoint, m_szDepartMentKey, m_nRoomID);

 	int ret = pMF->ExecSQL(szSQL);

	// xoa các thiết lập phía trước đi
	szSQL.Format(_T("delete from hms_schedule_exam_setup  where hses_deptid = '%s' and hses_roomid =%d "), m_szDepartMentKey,m_nRoomID); 
	pMF->ExecSQL(szSQL);
	if(m_bMorning)
	{
		szSQL.Format(_T("INSERT INTO hms_schedule_exam_setup( ") \
					_T("			hses_deptid, hses_roomid, hses_type, hses_time, hses_starttime,  ") \
					_T("			hses_endtime) ") \
					_T("	VALUES ('%s', %d, 'S', %d, '%s',  ") \
					_T("			'%s' )  "),m_szDepartMentKey, m_nRoomID, m_nTimes, m_szFTime, m_szToTime );

		pMF->ExecSQL(szSQL);
	}
	if(m_bAfternoon)
	{
		szSQL.Format(_T("INSERT INTO hms_schedule_exam_setup( ") \
					_T("			hses_deptid, hses_roomid, hses_type, hses_time, hses_starttime,  ") \
					_T("			hses_endtime) ") \
					_T("	VALUES ('%s', %d, 'C', %d, '%s',  ") \
					_T("			'%s' )  "),m_szDepartMentKey, m_nRoomID, m_nTimes2, m_szFTime1, m_szToTime1 );

		pMF->ExecSQL(szSQL);
	}
 	if(ret >0)
		SetMode(VM_VIEW);
	

	return 1;
}
int CHESettingExamSchedule::OnCancelHESettingExamSchedule(){
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
int CHESettingExamSchedule::OnHESettingExamScheduleListLoadData(){
	return 0;
}
