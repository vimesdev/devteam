#include "HMSAppointmentView.h"
#include "MainFrm.h"
#include "HMSAppointmentDialog.h"
#include "HMSReportForms/PrintForms.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSAppointmentView *pVw = (CHMSAppointmentView *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAppointmentView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAppointmentView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnListDeleteItem();
}

static int _OnListPrintItemFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnListPrintItem();
}


static void _OnAppointmentSelectFnc(CWnd *pWnd){
	CHMSAppointmentView *pVw = (CHMSAppointmentView *)pWnd;
	pVw->OnAppointmentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAppointmentView *pVw = (CHMSAppointmentView *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSAppointmentViewFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnAddHMSAppointmentView();
} 
static int _OnEditHMSAppointmentViewFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnEditHMSAppointmentView();
} 
static int _OnDeleteHMSAppointmentViewFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnDeleteHMSAppointmentView();
} 
static int _OnSaveHMSAppointmentViewFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnSaveHMSAppointmentView();
} 
static int _OnCancelHMSAppointmentViewFnc(CWnd *pWnd){
	 return ((CHMSAppointmentView*)pWnd)->OnCancelHMSAppointmentView();
} 
CHMSAppointmentView::CHMSAppointmentView(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSAppointmentView::~CHMSAppointmentView(){
}
void CHMSAppointmentView::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 310, 55);
	m_wndToDate.Create(this,315, 30, 435, 55); 
	m_wndSearch.Create(this, _T("Search"), 440, 30, 520, 55);
	m_wndList.Create(this,5, 65, 995, 565); 
	m_wndAppointment.Create(this, _T("Appointment"), 593, 570, 694, 595);
	m_wndPrint.Create(this, _T("&Print"), 699, 570, 800, 595);

}
void CHMSAppointmentView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("Date"), CFMT_RIGHT, 90);
	m_wndList.InsertColumn(1, _T("Room"), CFMT_CENTER, 50);
	m_wndList.InsertColumn(2, _T("Patient No"), CFMT_CENTER, 90);
	m_wndList.InsertColumn(3, _T("Document No"), CFMT_CENTER, 90);
	m_wndList.InsertColumn(4, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Exam Date"), CFMT_DATE, 90);
	m_wndList.InsertColumn(6, _T("Doctor"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Conclusion"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(8, _T("Note"), CFMT_TEXT, 100);
	m_wndList.SetSortHeader(false);	


}
void CHMSAppointmentView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Print"), _OnListPrintItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndAppointment.SetEvent(WE_CLICK, _OnAppointmentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAppointmentViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAppointmentViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAppointmentViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAppointmentViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAppointmentViewFnc, 0, 'T', VK_CONTROL);
*/
	m_szFromDate = pMF->GetSysDate();
	CDate dte;
	dte.ParseDate(m_szFromDate);
	dte += 30;
	m_szToDate = dte.GetDate();
	
	SetMode(VM_EDIT);

}
void CHMSAppointmentView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSAppointmentView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAppointmentView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAppointmentView::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSAppointmentView::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CHMSAppointmentView::OnFromDateChange(){
	
} */
/*void CHMSAppointmentView::OnFromDateSetfocus(){
	
} */
/*void CHMSAppointmentView::OnFromDateKillfocus(){
	
} */
int CHMSAppointmentView::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSAppointmentView::OnToDateChange(){
	
} */
/*void CHMSAppointmentView::OnToDateSetfocus(){
	
} */
/*void CHMSAppointmentView::OnToDateKillfocus(){
	
} */
int CHMSAppointmentView::OnToDateCheckValue(){
	return 0;
} 
void CHMSAppointmentView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CHMSAppointmentView::OnListDblClick(){
	
} 
void CHMSAppointmentView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAppointmentView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}


int CHMSAppointmentView::OnListPrintItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nDocumentNo ;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	nDocumentNo = str2long(m_wndList.GetItemText(nSel,3));
	pMF->PrintAppointmentSheet(nDocumentNo);
	 return 0;
}


long CHMSAppointmentView::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	
	UpdateData(TRUE);

	szSQL.Format(_T(" SELECT TO_CHAR(ha_date,'DD/MM/YYYY') as appointment_date, TO_CHAR(ha_date, 'HH24:MI') as appointment_time,") \
_T("   ha_roomid,") \
_T("   hd_patientno as patientno,") \
_T("   ha_docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   GET_USERNAME(hd_doctor) as doctor,") \
_T("   ha_note, ") \
_T(" hd_admitdate as examdate, ") \
_T(" hd_conclusion  as conclusion ") \
_T(" FROM hms_appointment") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_docno = ha_docno)") \
_T(" LEFT JOIN hms_patient") \
_T(" ON(hp_patientno = hd_patientno)") \
_T(" WHERE hd_admitdept='%s' and TRUNC(ha_date) BETWEEN TO_DATE('%s','YYYY-MM-DD') AND TO_DATE('%s','YYYY-MM-DD')") \
_T(" ORDER BY ha_date, ha_roomid") , pMF->m_UserInfo.su_hms_xdept, m_szFromDate, m_szToDate);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szOldDate, szNewDate;
	CString szOldTime, szNewTime;
	szOldDate.Empty();
	nCount = rs.ExecSQL(szSQL);


	while(!rs.IsEOF()){ 
		rs.GetValue(_T("appointment_date"), szNewDate);
		if(szNewDate != szOldDate)
		{
			tmpStr = szNewDate;
			m_wndList.AddItems(tmpStr, NULL);
			szOldDate = szNewDate.Left(10);
			szOldTime.Empty();
		}
		rs.GetValue(_T("appointment_time"), szNewTime);
		if(szOldTime != szNewTime)
		{
			tmpStr = szNewTime;
			szOldTime = szNewTime;
			

		}
		else
		{
			tmpStr = _T("-");
		}




		m_wndList.AddItems(tmpStr, 
			rs.GetValue(_T("ha_roomid")),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("ha_docno")),
			rs.GetValue(_T("pname")),
			rs.GetValue(_T("examdate")),
			rs.GetValue(_T("doctor")),
			rs.GetValue(_T("conclusion")),
			rs.GetValue(_T("note")),
			NULL);

		
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

	return 0;
}
void CHMSAppointmentView::OnAppointmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSAppointmentDialog dlg(this);
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CHMSAppointmentView::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPrintForms printer;
	printer.EM_OnPrintAppointmentList(m_szFromDate, m_szToDate);
} 
int CHMSAppointmentView::OnAddHMSAppointmentView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAppointmentView::OnEditHMSAppointmentView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAppointmentView::OnDeleteHMSAppointmentView(){
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
 		OnCancelHMSAppointmentView();
 	}
	return 0;
}
int CHMSAppointmentView::OnSaveHMSAppointmentView(){
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
 		//OnHMSAppointmentViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAppointmentView::OnCancelHMSAppointmentView(){
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
int CHMSAppointmentView::OnHMSAppointmentViewListLoadData(){
	return 0;
}
