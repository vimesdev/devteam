#include "MSBCThongkeDSBNtuvong.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNtuvong *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNtuvong *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNtuvong *pVw = (CMSBCThongkeDSBNtuvong *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CMSBCThongkeDSBNtuvong *pVw = (CMSBCThongkeDSBNtuvong *)pWnd;
	pVw->OnPrintSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMSBCThongkeDSBNtuvong*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnListDeleteItem();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNtuvong* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNtuvong *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnObjectAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCThongkeDSBNtuvong* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CMSBCThongkeDSBNtuvong *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMSBCThongkeDSBNtuvong *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnAddMSBCThongkeDSBNtuvongFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnAddMSBCThongkeDSBNtuvong();
} 
static int _OnEditMSBCThongkeDSBNtuvongFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnEditMSBCThongkeDSBNtuvong();
} 
static int _OnDeleteMSBCThongkeDSBNtuvongFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnDeleteMSBCThongkeDSBNtuvong();
} 
static int _OnSaveMSBCThongkeDSBNtuvongFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnSaveMSBCThongkeDSBNtuvong();
} 
static int _OnCancelMSBCThongkeDSBNtuvongFnc(CWnd *pWnd){
	 return ((CMSBCThongkeDSBNtuvong*)pWnd)->OnCancelMSBCThongkeDSBNtuvong();
} 
CMSBCThongkeDSBNtuvong::CMSBCThongkeDSBNtuvong(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMSBCThongkeDSBNtuvong::~CMSBCThongkeDSBNtuvong(){
}
void CMSBCThongkeDSBNtuvong::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 5, 5, 1012, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 82, 55);
	m_wndFromDate.Create(this,86, 30, 196, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 395, 55); 
	m_wndLoad.Create(this, _T("&Load"), 813, 30, 897, 55);
	m_wndPrint.Create(this, _T("&Print"), 902, 30, 980, 55);
	m_wndList.Create(this,5, 64, 1012, 615); 
	m_wndObjectLabel.Create(this, _T("Object"), 401, 30, 481, 55);
	m_wndObject.Create(this,486, 30, 581, 55); 
	m_wndDepartmentLab.Create(this, _T("Department"), 585, 29, 665, 54);
	m_wndDepartment.Create(this,670, 29, 808, 54); 

}
void CMSBCThongkeDSBNtuvong::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("T\xEAn \x62\x1EC7nh nh\xE2n"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(2, _T("N\x103m sinh"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("\x43\x1EA5p \x62\x1EAD\x63"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("\x110\x1A1n v\x1ECB"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Ng\xE0y gi\x1EDD v\xE0o vi\x1EC7n"), CFMT_DATETIME, 150);
	m_wndList.InsertColumn(6, _T("Ng\xE0y gi\x1EDD t\x1EED vong"), CFMT_DATETIME, 150);
	m_wndList.InsertColumn(7, _T("\x43h\x1EA5n \x111o\xE1n"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CMSBCThongkeDSBNtuvong::OnSetWindowEvents(){
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
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CMSBCThongkeDSBNtuvong::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CMSBCThongkeDSBNtuvong::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCThongkeDSBNtuvong::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCThongkeDSBNtuvong::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDepartmentKey.Empty();

}
int CMSBCThongkeDSBNtuvong::SetMode(int nMode){
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
/*void CMSBCThongkeDSBNtuvong::OnFromDateChange(){
	
} */
/*void CMSBCThongkeDSBNtuvong::OnFromDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNtuvong::OnFromDateKillfocus(){
	
} */
int CMSBCThongkeDSBNtuvong::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCThongkeDSBNtuvong::OnToDateChange(){
	
} */
/*void CMSBCThongkeDSBNtuvong::OnToDateSetfocus(){
	
} */
/*void CMSBCThongkeDSBNtuvong::OnToDateKillfocus(){
	
} */
int CMSBCThongkeDSBNtuvong::OnToDateCheckValue(){
	return 0;
} 
void CMSBCThongkeDSBNtuvong::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CMSBCThongkeDSBNtuvong::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szObject, szDept, tmpStr, szNewGroup, szOldGroup;
	if (!rpt.Init(_T("Reports\\HMS\\THONGKEDSBNTUVONG.RPT")))
		return;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HCR_ADMITDEPT = '%s'"), m_szDepartmentKey);
	szSQL.Format(_T(" SELECT GET_PATIENTNAME(HD_DOCNO) HOVATEN,") \
_T("        Extract(year FROM hp_birthdate) NAMSINH,") \
_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as CAPBAC,") \
_T("        HP_WORKPLACE DONVI,") \
_T("        HD_ADMITDATE NGAYVAOVIEN,") \
_T("        CASE WHEN HD_SUGGESTION IN('X','Y') THEN HD_ENDDATE ELSE HCR_DISCHARGEDATE END NGAYTUVONG,") \
_T("        HD_DIAGNOSTIC CHANDOAN") \
_T(" FROM HMS_PATIENT ") \
_T(" LEFT JOIN HMS_DOC ON(HD_PATIENTNO=HP_PATIENTNO)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" WHERE (HD_SUGGESTION IN('X','Y')") \
_T(" AND HD_ENDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
_T(" OR") \
_T(" (HCR_STATUS = 'T' AND HCR_RESULT IN('5', '6')") \
_T(" AND HCR_DISCHARGEDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) %s %s"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szObject, szDept);
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
		rs.GetValue(_T("HOVATEN"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		//namsinh
		rs.GetValue(_T("NAMSINH"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		//capbac
		rs.GetValue(_T("CAPBAC"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		//donvi
		rs.GetValue(_T("DONVI"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		//NGAY VAO VIEN
		rs.GetValue(_T("NGAYVAOVIEN"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		//NGAY TU VONG
		rs.GetValue(_T("NGAYTUVONG"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		//CHAN DOAN
		rs.GetValue(_T("CHANDOAN"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.MoveNext();
	}
	CString szSysDate;
	szSysDate = pMF->GetSysDate(); 
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	rpt.PrintPreview();
} 
void CMSBCThongkeDSBNtuvong::OnListDblClick(){
	
} 
void CMSBCThongkeDSBNtuvong::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCThongkeDSBNtuvong::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CMSBCThongkeDSBNtuvong::OnListLoadData(){
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL, szWhere, szObject, szDept, tmpStr, szNewGroup, szOldGroup;
	if (!m_szObjectKey.IsEmpty())
		szObject.AppendFormat(_T(" AND hd_object = '%s'"), m_szObjectKey);
	if (!m_szDepartmentKey.IsEmpty())
		szDept.AppendFormat(_T(" AND HCR_ADMITDEPT = '%s'"), m_szDepartmentKey);
	szSQL.Format(_T(" SELECT GET_PATIENTNAME(HD_DOCNO) HOVATEN,") \
_T("        Extract(year FROM hp_birthdate) NAMSINH,") \
_T("        (SELECT ss_desc FROM sys_sel where ss_id='hms_rank' and ss_code=hp_rank) as CAPBAC,") \
_T("        HP_WORKPLACE DONVI,") \
_T("        HD_ADMITDATE NGAYVAOVIEN,") \
_T("        CASE WHEN HD_SUGGESTION IN('X','Y') THEN HD_ENDDATE ELSE HCR_DISCHARGEDATE END NGAYTUVONG,") \
_T("        HD_DIAGNOSTIC CHANDOAN") \
_T(" FROM HMS_PATIENT ") \
_T(" LEFT JOIN HMS_DOC ON(HD_PATIENTNO=HP_PATIENTNO)") \
_T(" LEFT JOIN HMS_CLINICAL_RECORD ON(HCR_DOCNO=HD_DOCNO)") \
_T(" WHERE (HD_SUGGESTION IN('X','Y')") \
_T(" AND HD_ENDDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
_T(" OR") \
_T(" (HCR_STATUS = 'T' AND HCR_RESULT IN('5', '6')") \
_T(" AND HCR_DISCHARGEDATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')) %s %s"), m_szFromDate, m_szToDate, m_szFromDate, m_szToDate, szObject, szDept);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("HOVATEN")), 
			rs.GetValue(_T("NAMSINH")), 
			rs.GetValue(_T("CAPBAC")), 
			rs.GetValue(_T("DONVI")), 
			rs.GetValue(_T("NGAYVAOVIEN")), 
			rs.GetValue(_T("NGAYTUVONG")), 
			rs.GetValue(_T("CHANDOAN")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CMSBCThongkeDSBNtuvong::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNtuvong::OnObjectSelendok(){
	 
}
/*void CMSBCThongkeDSBNtuvong::OnObjectSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNtuvong::OnObjectKillfocus(){
	
}*/
long CMSBCThongkeDSBNtuvong::OnObjectLoadData(){
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
/*void CMSBCThongkeDSBNtuvong::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CMSBCThongkeDSBNtuvong::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCThongkeDSBNtuvong::OnDepartmentSelendok(){
	 
}
/*void CMSBCThongkeDSBNtuvong::OnDepartmentSetfocus(){
	
}*/
/*void CMSBCThongkeDSBNtuvong::OnDepartmentKillfocus(){
	
}*/
long CMSBCThongkeDSBNtuvong::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T("and sd_id = '%s'"), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	szSQL.Format(_T("select sd_id as id, sd_name as name from sys_dept where sd_type = 'DT' order by id"), szWhere);
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
/*void CMSBCThongkeDSBNtuvong::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CMSBCThongkeDSBNtuvong::OnAddMSBCThongkeDSBNtuvong(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMSBCThongkeDSBNtuvong::OnEditMSBCThongkeDSBNtuvong(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCThongkeDSBNtuvong::OnDeleteMSBCThongkeDSBNtuvong(){
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
 		OnCancelMSBCThongkeDSBNtuvong();
 	}
	return 0;
}
int CMSBCThongkeDSBNtuvong::OnSaveMSBCThongkeDSBNtuvong(){
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
 		//OnMSBCThongkeDSBNtuvongListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMSBCThongkeDSBNtuvong::OnCancelMSBCThongkeDSBNtuvong(){
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
int CMSBCThongkeDSBNtuvong::OnMSBCThongkeDSBNtuvongListLoadData(){
	return 0;
}
