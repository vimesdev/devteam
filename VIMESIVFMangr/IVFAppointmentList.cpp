#include "IVFAppointmentList.h"
#include "MainFrm.h"
#include "IVFAppointmentDialog.h"
#include "IVFAppointmentDialog2.h"

static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CIVFAppointmentList *)pWnd)->OnStatusLoadData();
}
static void _OnAppointmentWoDateSelectFnc(CWnd *pWnd){
	 ((CIVFAppointmentList*)pWnd)->OnAppointmentWoDateSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFAppointmentList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFAppointmentList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFAppointmentList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnListDeleteItem();
} 
static int _OnListCreateItemFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnListCreateItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnListEditItem();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFAppointmentList *)pWnd)->OnToDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFAppointmentList* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CIVFAppointmentList *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CIVFAppointmentList *)pWnd)->OnTypeAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CIVFAppointmentList *pVw = (CIVFAppointmentList *)pWnd;
	pVw->OnRefreshSelect();
} 
static int _OnAddIVFAppointmentListFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnAddIVFAppointmentList();
} 
static int _OnEditIVFAppointmentListFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnEditIVFAppointmentList();
} 
static int _OnDeleteIVFAppointmentListFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnDeleteIVFAppointmentList();
} 
static int _OnSaveIVFAppointmentListFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnSaveIVFAppointmentList();
} 
static int _OnCancelIVFAppointmentListFnc(CWnd *pWnd){
	 return ((CIVFAppointmentList*)pWnd)->OnCancelIVFAppointmentList();
} 
CIVFAppointmentList::CIVFAppointmentList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CIVFAppointmentList::~CIVFAppointmentList(){
}
void CIVFAppointmentList::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 185, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 190, 30, 270, 55);
	m_wndToDate.Create(this,275, 30, 365, 55); 
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1015, 60);
	m_wndTypeLabel.Create(this, _T("Type"), 370, 30, 450, 55);
	m_wndAppointmentList.Create(this, _T("Appointment List"), 5, 65, 1015, 570);
	m_wndType.Create(this,455, 30, 615, 55); 
	m_wndStatus.Create(this,705, 30, 805, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 810, 30, 890, 55);
	m_wndDocumentNo.Create(this,895, 30, 980, 55); 
	m_wndRefresh.Create(this, _T("Refresh"), 985, 30, 1010, 55);
	m_wndStatusLabel.Create(this, _T("Status"), 620, 30, 700, 56);
	m_wndAppointmentWoDate.Create(this, _T("Appointment wo Date"), 5, 575, 205, 600);
	m_wndList.Create(this,10, 90, 1010, 565); 
}
void CIVFAppointmentList::OnInitializeComponents(){
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
	m_wndList.InsertColumn(5, _T("Appointment"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(6, _T("Note"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(7, _T("Approved By"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(8, _T("Approved Date"), CFMT_TEXT, 125);
	m_wndList.InsertColumn(9, _T("TypeID"), CFMT_TEXT, 50);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CIVFAppointmentList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Create Appointment"), _OnListCreateItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Edit Appointment"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndAppointmentWoDate.SetEvent(WE_CLICK, _OnAppointmentWoDateSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFAppointmentListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFAppointmentListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFAppointmentListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFAppointmentListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFAppointmentListFnc, 0, 'T', VK_CONTROL);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}
void CIVFAppointmentList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Check(pDX, m_wndAppointmentWoDate.GetDlgCtrlID(), m_bAppointmentWoDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
}
void CIVFAppointmentList::UpdateJson(BOOL bSave){
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
void CIVFAppointmentList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFAppointmentList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFAppointmentList::SetDefaultValues(){
	m_szStatusKey.Empty();
	m_bAppointmentWoDate = FALSE;
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szTypeKey.Empty();
	m_nDocumentNo = 0;
}
int CIVFAppointmentList::SetMode(int nMode){
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
void CIVFAppointmentList::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
	if (m_bAppointmentWoDate)
	{
		CIVFAppointmentDialog2 dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_VIEW);
		dlg.DoModal();	
	}
	else
	{
		CIVFAppointmentDialog dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_VIEW);
		dlg.DoModal();	
	}
} 
void CIVFAppointmentList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFAppointmentList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	CString szSQL;
	szSQL.Format(_T("DELETE FROM ivf_appointment WHERE IVF_APPOINTMENT_ID = %ld"), nIdx);
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
	return 0;
} 
long CIVFAppointmentList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szappointmenttype;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1;
	szWhere.Empty();
	if (!m_szTypeKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND typeid = '%s'"), m_szTypeKey);
	}
	if (m_nDocumentNo > 0)
	{
		szWhere.AppendFormat(_T(" AND docno = %ld"), m_nDocumentNo);
	}
	if (m_bAppointmentWoDate)
	{
		szWhere.AppendFormat(_T(" AND categoryid = 'T'"));
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
	_T("          ivf_get_sel('ivf_appointment_type', typeid) AS appointment,") \
	_T("          appointment_date AS dte, ") \
	_T("		  IVF_APPOINTMENT_ID as idx, note, ") \
	_T("		  get_username(approvedby) as approved_by,") \
	_T("		  to_char(approveddate, 'dd/mm/yyyy hh24:mi') as approved_date") \
	_T(" FROM      ivf_appointment") \
	_T(" LEFT JOIN hms_doc ON ( docno = hd_docno )") \
	_T(" LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
	_T(" WHERE 1=1 %s") \
	_T(" ORDER BY appointment_date, appointment"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	
	//_msg(_T("%s"),szappointmenttype); 
	while(!rs.IsEOF())
	{ 
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

		rs.MoveNext();
	}	
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CIVFAppointmentList::OnFromDateChange(){
	
} */
/*void CIVFAppointmentList::OnFromDateSetfocus(){
	
} */
/*void CIVFAppointmentList::OnFromDateKillfocus(){
	
} */
int CIVFAppointmentList::OnFromDateCheckValue(){
	return 0;
} 
/*void CIVFAppointmentList::OnToDateChange(){
	
} */
/*void CIVFAppointmentList::OnToDateSetfocus(){
	
} */
/*void CIVFAppointmentList::OnToDateKillfocus(){
	
} */
int CIVFAppointmentList::OnToDateCheckValue(){
	return 0;
} 
void CIVFAppointmentList::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFAppointmentList::OnTypeSelendok(){
	 
}
/*void CIVFAppointmentList::OnTypeSetfocus(){
	
}*/
/*void CIVFAppointmentList::OnTypeKillfocus(){
	
}*/
long CIVFAppointmentList::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadIVFSelectionList(&m_wndType, _T("ivf_appointment_type"), m_szTypeKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFAppointmentList::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFAppointmentList::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
int CIVFAppointmentList::OnAddIVFAppointmentList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	if (m_bAppointmentWoDate)
	{
		CIVFAppointmentDialog2 dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.DoModal();
	}
	else
	{
		CIVFAppointmentDialog dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.DoModal();
	}
	return 0;
}
int CIVFAppointmentList::OnEditIVFAppointmentList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFAppointmentList::OnDeleteIVFAppointmentList(){
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
 		OnCancelIVFAppointmentList();
 	}
	return 0;
}
int CIVFAppointmentList::OnSaveIVFAppointmentList(){
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
 		//OnIVFAppointmentListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFAppointmentList::OnCancelIVFAppointmentList(){
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
int CIVFAppointmentList::OnIVFAppointmentListListLoadData(){
	return 0;
}

int CIVFAppointmentList::OnListCreateItem()
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
	if (m_bAppointmentWoDate)
	{
		CIVFAppointmentDialog2 dlg(this);
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}
	else
	{
		CIVFAppointmentDialog dlg(this);
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_ADD);
		dlg.DoModal();
	}
	return 0;
}

int CIVFAppointmentList::OnListEditItem()
{
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}
	long nIdx = str2long(m_wndList.GetItemText(nSel, 0));
	long nDocNo = str2long(m_wndList.GetItemText(nSel, 2));
	if (m_bAppointmentWoDate)
	{
		CIVFAppointmentDialog2 dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_EDIT);
		dlg.DoModal();
	}
	else
	{
		CIVFAppointmentDialog dlg(this);
		dlg.m_nIdx = nIdx;
		dlg.m_nDocumentNo = nDocNo;
		dlg.SetMode(VM_EDIT);
		dlg.DoModal();
	}
	return 0;
}

void CIVFAppointmentList::OnResizeLayout()
{
	AddResize(&m_wndAppointmentList, 100, 100);
	AddResize(&m_wndList, 100, 100);
	AddBottom(&m_wndAppointmentWoDate, 10, true);
}

long CIVFAppointmentList::OnStatusLoadData()
{
	CMainFrame * pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and ss_code IN ('O', 'T')"));
	return pMF->LoadSelectionList(&m_wndStatus, _T("hms_order_status"), m_szStatusKey, szFilter);
}

void CIVFAppointmentList::OnAppointmentWoDateSelect()
{
	UpdateData();
	OnListLoadData();
}