#include "HMSAppointmentScheduleList.h"
#include "MainFrm.h"
#include "HMSAppointmentScheduleDialog.h"


static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleList *)pWnd)->OnStatusLoadData();
}
static void _OnAppointmentWoDateSelectFnc(CWnd *pWnd){
	 ((CHMSAppointmentScheduleList*)pWnd)->OnAppointmentWoDateSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAppointmentScheduleList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnListDeleteItem();
} 
static int _OnListCreateItemFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnListCreateItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnListEditItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAppointmentScheduleList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSAppointmentScheduleList *)pWnd)->OnTypeAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSAppointmentScheduleList *pVw = (CHMSAppointmentScheduleList *)pWnd;
	pVw->OnRefreshSelect();
} 
static int _OnAddHMSAppointmentScheduleListFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnAddHMSAppointmentScheduleList();
} 
static int _OnEditHMSAppointmentScheduleListFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnEditHMSAppointmentScheduleList();
} 
static int _OnDeleteHMSAppointmentScheduleListFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnDeleteHMSAppointmentScheduleList();
} 
static int _OnSaveHMSAppointmentScheduleListFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnSaveHMSAppointmentScheduleList();
} 
static int _OnCancelHMSAppointmentScheduleListFnc(CWnd *pWnd){
	 return ((CHMSAppointmentScheduleList*)pWnd)->OnCancelHMSAppointmentScheduleList();
}
static int _OnMobileCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentScheduleList *)pWnd)->OnMobileCheckValue();
} 
CHMSAppointmentScheduleList::CHMSAppointmentScheduleList()
{

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSAppointmentScheduleList::~CHMSAppointmentScheduleList(){
}
void CHMSAppointmentScheduleList::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 96);
	m_wndAppointmentList.Create(this, _T("Danh sách bệnh nhân có lịch hẹn"), 5, 96, 1015, 576);
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 66, 90, 91);
	m_wndDocumentNo.Create(this,98, 66, 183, 91); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 185, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 270, 55);
	m_wndToDate.Create(this,275, 30, 365, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 370, 30, 450, 55);
	m_wndType.Create(this,455, 30, 676, 55); 
	m_wndRefresh.Create(this, _T("Search"), 945, 30, 1012, 91);
	m_wndStatusLabel.Create(this, _T("Status"), 681, 30, 761, 56);
	m_wndStatus.Create(this,766, 30, 940, 55); 
	m_wndMobileLabel.Create(this, _T("Mobile"), 190, 66, 270, 91);
	m_wndMobile.Create(this,275, 66, 450, 91);
	m_wndList.Create(this,10, 114, 1012, 572); 

}
void CHMSAppointmentScheduleList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);

	m_wndList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(1, _T("Idx"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(5, _T("Nội dung hẹn"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(7, _T("Note"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(8, _T("Approved By"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(9, _T("Approved Date"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(10, _T("Mobile"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(11, _T("Trạng thái"), CFMT_TEXT, 100);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CHMSAppointmentScheduleList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Tạo lịch hẹn"), _OnListCreateItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Sửa lịch hẹn"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Hủy lịch hẹn"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndMobile.SetEvent(WE_CHECKVALUE, _OnMobileCheckValueFnc);
	
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAppointmentScheduleListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAppointmentScheduleListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAppointmentScheduleListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAppointmentScheduleListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAppointmentScheduleListFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}
void CHMSAppointmentScheduleList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndMobile.GetDlgCtrlID(), m_szMobile);
	
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
}
void CHMSAppointmentScheduleList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CHMSAppointmentScheduleList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAppointmentScheduleList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAppointmentScheduleList::SetDefaultValues(){
	m_szStatusKey.Empty();	
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_nDocumentNo = 0;
	m_szMobile.Empty();
}
int CHMSAppointmentScheduleList::SetMode(int nMode){
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
int CHMSAppointmentScheduleList::OnMobileCheckValue(){
	return 0;
} 

void CHMSAppointmentScheduleList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
	
	{
		CHMSAppointmentScheduleDialog dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_VIEW);
		dlg.DoModal();	
	}
} 
void CHMSAppointmentScheduleList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAppointmentScheduleList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
	CString szSQL;
	if(ShowMessageBox(_T("Bạn chắc chắn muốn hủy lịch hẹn?"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1;
	else
	szSQL.Format(_T("UPDATE HMS_APPOINTMENT_SCHEDULE SET STATUS = 'C' WHERE DOCNO = %ld AND HMS_APPOINTMENT_ID = %ld AND status <> 'T'"), nDocNo, nIdx);
	int nRet = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
	return 0;
} 
long CHMSAppointmentScheduleList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szappointmenttype, sztrangthai;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1;
	szWhere.Empty();
	
	if (!m_szMobile.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND HD_TELEPHONE like (chr(37)||'%s'||chr(37))"), m_szMobile);
	}

	if (!m_szTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND typeid = '%s'"), m_szTypeKey);
	}
	if (m_nDocumentNo > 0)
	{
		szWhere.AppendFormat(_T(" AND docno = %ld"), m_nDocumentNo);
	}	
	else
	{
		szWhere.AppendFormat(_T(" AND categoryid = 'D'"));
		szWhere.AppendFormat(_T(" AND trunc(appointment_date) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
				_T("	AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szFromDate, m_szToDate);
	}
	if (!m_szStatusKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND status = '%s'"), m_szStatusKey);
	}
	szSQL.Format(_T("SELECT    docno AS documentno,") \
	_T("          Get_patientname(docno) AS patientname,") \
	_T("          extract(year from hp_birthdate) AS yob,") \
	_T("          typeid AS appointmentid,") \
	_T("          (SELECT ss_desc From sys_sel Where ss_id='hms_appointment_schedule' AND ss_code=typeid) AS appointment,") \
	_T("          appointment_date AS dte, ") \
	_T("		  HMS_APPOINTMENT_ID as idx, note, ") \
	_T("		  get_username(approvedby) as approved_by,") \
	_T("		  to_char(approveddate, 'dd/mm/yyyy hh24:mi') as approved_date,") \
	_T("		  (SELECT ss_desc From sys_sel Where ss_id='hms_order_status' AND ss_code=status) as trangthai, HD_TELEPHONE as mobile") \
	_T(" FROM      HMS_APPOINTMENT_SCHEDULE") \
	_T(" LEFT JOIN hms_doc ON ( docno = hd_docno )") \
	_T(" LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
	_T(" WHERE 1=1 %s") \
	_T(" ORDER BY appointment_date, appointment"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	
	//_msg(_T("%s"),szappointmenttype); 
	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("trangthai"), sztrangthai);
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("idx")), 
			int2str(nIndex++),
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("YOB")), 
			rs.GetValue(_T("Appointment")), 
			rs.GetValue(_T("Dte")), 
			rs.GetValue(_T("note")), 
			rs.GetValue(_T("approved_by")), 
			rs.GetValue(_T("approved_date")),
			rs.GetValue(_T("mobile")),
			rs.GetValue(_T("trangthai")),
			NULL);

		rs.GetValue (_T("appointmentid"), szappointmenttype);
		if (szappointmenttype == _T("1"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(207, 207, 207), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}
		
		if (szappointmenttype == _T("2"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(198 , 226 , 255), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}

		if (szappointmenttype == _T("3"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(121 , 205 , 205), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}
		
		if (szappointmenttype == _T("4"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(255, 239, 213), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}
		
		if (szappointmenttype == _T("5"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(238, 233, 191), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}

		if (szappointmenttype == _T("6"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(193, 205, 193), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}
		
		if (szappointmenttype == _T("7"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(240, 255, 255), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}

		if (szappointmenttype == _T("8"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(238, 213, 210), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}

		if (szappointmenttype == _T("9"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(202, 225, 255), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}

		if (szappointmenttype == _T("10"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(224, 255, 255), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}
		
		if (szappointmenttype == _T("11"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(193, 255, 193), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);	
		}

		if (szappointmenttype == _T("12"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(255, 127, 36), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(255, 255, 255), FALSE);	
		}

		if (sztrangthai == _T("Đã hủy"))
		{
		m_wndList.SetSubItemBkColor(nItem, 11, RGB(255, 48, 48), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 11, RGB(255, 255, 255), FALSE);	
		}

		rs.MoveNext();
	}	
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSAppointmentScheduleList::OnFromDateChange(){
	
} */
/*void CHMSAppointmentScheduleList::OnFromDateSetfocus(){
	
} */
/*void CHMSAppointmentScheduleList::OnFromDateKillfocus(){
	
} */
int CHMSAppointmentScheduleList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSAppointmentScheduleList::OnToDateChange(){
	
} */
/*void CHMSAppointmentScheduleList::OnToDateSetfocus(){
	
} */
/*void CHMSAppointmentScheduleList::OnToDateKillfocus(){
	
} */
int CHMSAppointmentScheduleList::OnToDateCheckValue(){
	return 0;
} 
void CHMSAppointmentScheduleList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentScheduleList::OnTypeSelendok(){
	 
}
/*void CHMSAppointmentScheduleList::OnTypeSetfocus(){
	
}*/
/*void CHMSAppointmentScheduleList::OnTypeKillfocus(){
	
}*/
long CHMSAppointmentScheduleList::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
	};
	m_wndType.DeleteAllItems(); 
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id = 'hms_appointment_schedule' order by cast(ss_code as integer)"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAppointmentScheduleList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAppointmentScheduleList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
int CHMSAppointmentScheduleList::OnAddHMSAppointmentScheduleList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	
	{
		CHMSAppointmentScheduleDialog dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.DoModal();
	}
	return 0;
}
int CHMSAppointmentScheduleList::OnEditHMSAppointmentScheduleList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAppointmentScheduleList::OnDeleteHMSAppointmentScheduleList(){
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
 		OnCancelHMSAppointmentScheduleList();
 	}
	return 0;
}
int CHMSAppointmentScheduleList::OnSaveHMSAppointmentScheduleList(){
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
 		//OnHMSAppointmentScheduleListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAppointmentScheduleList::OnCancelHMSAppointmentScheduleList(){
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
int CHMSAppointmentScheduleList::OnHMSAppointmentScheduleListListLoadData(){
	return 0;
}

int CHMSAppointmentScheduleList::OnListCreateItem()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	long nDocNo = 0;
	if (nSel < 0)
	{
		//return -1;
		nDocNo = pMF->m_nDocumentNo;
	}
	else
	{
		nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
	}

	CHMSAppointmentScheduleDialog dlg(this);
	dlg.m_nDocumentNo = nDocNo;
	dlg.SetMode(VM_ADD);
	dlg.DoModal();
	
	return 0;
}

int CHMSAppointmentScheduleList::OnListEditItem()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));	

	{
		CHMSAppointmentScheduleDialog dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_EDIT);
		dlg.DoModal();
	}
	return 0;
}

void CHMSAppointmentScheduleList::OnResizeLayout()
{
	AddLayoutControl(&m_wndSearchInformation, WS_RESIZEX, 0, 0, 100, 0);
	AddLayoutControl(&m_wndAppointmentList, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100);
	AddLayoutControl(&m_wndFromDate, WS_RESIZEX, 0, 0, 20, 0);
	AddLayoutControl(&m_wndToDateLabel, WS_REPOSX, 20, 0, 0, 0);
	AddLayoutControl(&m_wndToDate, WS_RESIZEX|WS_REPOSX, 20, 0, 20, 0);
	AddLayoutControl(&m_wndTypeLabel, WS_REPOSX, 40, 0, 0, 0);
	AddLayoutControl(&m_wndType, WS_RESIZEX|WS_REPOSX, 40, 0, 20, 0);
	AddLayoutControl(&m_wndStatusLabel, WS_REPOSX, 60, 0, 0, 0);
	AddLayoutControl(&m_wndStatus, WS_RESIZEX|WS_REPOSX, 60, 0, 20, 0);
	AddLayoutControl(&m_wndDocumentNoLabel, WS_REPOSX, 80, 0, 0, 0);
	AddLayoutControl(&m_wndDocumentNo, WS_RESIZEX|WS_REPOSX, 80, 0, 20, 0);
	AddLayoutControl(&m_wndRefresh, WS_REPOSX, 100, 0, 0, 0);
}

long CHMSAppointmentScheduleList::OnStatusLoadData()
{
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ss_code IN ('O', 'T', 'C')"));
	return pMF->LoadSelectionList(&m_wndStatus, _T("hms_order_status"), m_szStatusKey, szFilter);
}

void CHMSAppointmentScheduleList::OnAppointmentWoDateSelect()
{
	UpdateData();
	OnListLoadData();
}