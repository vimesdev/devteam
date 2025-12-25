#include "MSBCTinhhinhcanbocongchuc.h"
#include "MainFrm.h"
#include "ReportDocument.h"
static void _OnPossitionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMSBCTinhhinhcanbocongchuc* )pWnd)->OnPossitionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPossitionSelendokFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnPossitionSelendok();
}
/*static void _OnPossitionSetfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnPossitionKillfocus();
}*/
/*static void _OnPossitionKillfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnPossitionKillfocus();
}*/
static long _OnPossitionLoadDataFnc(CWnd *pWnd){
	return ((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnPossitionLoadData();
}
/*static void _OnPossitionAddNewFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnPossitionAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CMSBCTinhhinhcanbocongchuc *)pWnd)->OnToDateCheckValue();
} 
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CMSBCTinhhinhcanbocongchuc *pVw = (CMSBCTinhhinhcanbocongchuc *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CMSBCTinhhinhcanbocongchuc *pVw = (CMSBCTinhhinhcanbocongchuc *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddMSBCTinhhinhcanbocongchucFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhcanbocongchuc*)pWnd)->OnAddMSBCTinhhinhcanbocongchuc();
} 
static int _OnEditMSBCTinhhinhcanbocongchucFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhcanbocongchuc*)pWnd)->OnEditMSBCTinhhinhcanbocongchuc();
} 
static int _OnDeleteMSBCTinhhinhcanbocongchucFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhcanbocongchuc*)pWnd)->OnDeleteMSBCTinhhinhcanbocongchuc();
} 
static int _OnSaveMSBCTinhhinhcanbocongchucFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhcanbocongchuc*)pWnd)->OnSaveMSBCTinhhinhcanbocongchuc();
} 
static int _OnCancelMSBCTinhhinhcanbocongchucFnc(CWnd *pWnd){
	 return ((CMSBCTinhhinhcanbocongchuc*)pWnd)->OnCancelMSBCTinhhinhcanbocongchuc();
} 
CMSBCTinhhinhcanbocongchuc::CMSBCTinhhinhcanbocongchuc()
{

	m_nDlgWidth = 365;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CMSBCTinhhinhcanbocongchuc::~CMSBCTinhhinhcanbocongchuc(){
}
void CMSBCTinhhinhcanbocongchuc::OnCreateComponents(){
	m_wndReportEdition.Create(this, _T("Report Edition"), 10, 5, 355, 90);
	m_wndPossitionLabel.Create(this, _T("Possition"), 15, 30, 95, 55);
	m_wndPossition.Create(this,100, 30, 350, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 15, 60, 95, 85);
	m_wndFromDate.Create(this,100, 60, 180, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 185, 60, 265, 85);
	m_wndToDate.Create(this,270, 60, 350, 85); 
	m_wndPreview.Create(this, _T("&Preview"), 270, 95, 350, 120);
	//m_wndCancel.Create(this, _T("&Close"), 280, 95, 360, 120);
}
void CMSBCTinhhinhcanbocongchuc::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	EnableButtons(TRUE, 0,1, -1);
	m_wndPossition.SetCheckValue(true);
	m_wndPossition.LimitText(35);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
//	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	UpdateData(FALSE);

	m_wndPossition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPossition.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void CMSBCTinhhinhcanbocongchuc::OnSetWindowEvents(){
	m_wndPossition.SetEvent(WE_SELENDOK, _OnPossitionSelendokFnc);
	//m_wndPossition.SetEvent(WE_SETFOCUS, _OnPossitionSetfocusFnc);
	//m_wndPossition.SetEvent(WE_KILLFOCUS, _OnPossitionKillfocusFnc);
	m_wndPossition.SetEvent(WE_SELCHANGE, _OnPossitionSelectChangeFnc);
	m_wndPossition.SetEvent(WE_LOADDATA, _OnPossitionLoadDataFnc);
	//m_wndPossition.SetEvent(WE_ADDNEW, _OnPossitionAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CMSBCTinhhinhcanbocongchuc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPossition.GetDlgCtrlID(), m_szPossitionKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CMSBCTinhhinhcanbocongchuc::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMSBCTinhhinhcanbocongchuc::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMSBCTinhhinhcanbocongchuc::SetDefaultValues(){

	m_szPossitionKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CMSBCTinhhinhcanbocongchuc::SetMode(int nMode){
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
void CMSBCTinhhinhcanbocongchuc::OnPossitionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMSBCTinhhinhcanbocongchuc::OnPossitionSelendok(){
	 
}
/*void CMSBCTinhhinhcanbocongchuc::OnPossitionSetfocus(){
	
}*/
/*void CMSBCTinhhinhcanbocongchuc::OnPossitionKillfocus(){
	
}*/
long CMSBCTinhhinhcanbocongchuc::OnPossitionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPossition.IsSearchKey() && !m_szPossitionKey.IsEmpty()){
		szWhere.Format(_T(" and empl_position= %ld "), ToLong(m_szPossitionKey));
	};
	szSQL.Format(_T("SELECT ss_code as id,ss_desc as name FROM sys_sel WHERE ss_id='hrm_position' %s ORDER BY ss_code "), szWhere);
	m_wndPossition.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPossition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CMSBCTinhhinhcanbocongchuc::OnPossitionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CMSBCTinhhinhcanbocongchuc::OnFromDateChange(){
	
} */
/*void CMSBCTinhhinhcanbocongchuc::OnFromDateSetfocus(){
	
} */
/*void CMSBCTinhhinhcanbocongchuc::OnFromDateKillfocus(){
	
} */
int CMSBCTinhhinhcanbocongchuc::OnFromDateCheckValue(){
	return 0;
} 
/*void CMSBCTinhhinhcanbocongchuc::OnToDateChange(){
	
} */
/*void CMSBCTinhhinhcanbocongchuc::OnToDateSetfocus(){
	
} */
/*void CMSBCTinhhinhcanbocongchuc::OnToDateKillfocus(){
	
} */
int CMSBCTinhhinhcanbocongchuc::OnToDateCheckValue(){
	return 0;
} 
void CMSBCTinhhinhcanbocongchuc::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = pMF->GetSysDate(); 
	CRecord rs(&pMF->m_db);
	CReport rpt;
		if(!rpt.Init(_T("Reports\\HMS\\BCTHCANBOCONGCHUC.rpt"))) return;
	UpdateData(true);
	if (!m_szPossitionKey.IsEmpty()&& ToLong(m_szPossitionKey)> 0)
	{
		szWhere.Format(_T(" and empl_position= %ld "), ToLong(m_szPossitionKey));
	}
	szSQL.Format(_T(" SELECT empl_id ,") \
				_T(" trim(empl_surname||' '||empl_midname||' '||empl_firstname) as empl_name, ") \
				_T(" empl_birthdate, ") \
				_T(" (SELECT sd_name FROM sys_dept WHERE empl_dept=sd_id) as empl_dept, ") \
				_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id='hrm_position' AND trim(ss_code)= cast(empl_position as nvarchar2(38)) and rownum <= 1) as empl_position, ") \
				_T(" empl_idno as CMT , ") \
				_T(" empl_address") \
				_T(" FROM hrm_employee  ") \
				_T(" LEFT JOIN hrm_exemployee ON(empl_refid = empl_id)") \
				_T(" WHERE 1=1 and trunc_date(empl_entrancedate) <= CAST_STRING2DATE('%s') %s") \
				_T(" ORDER BY empl_dept"), m_szToDate, szWhere);
	rs.ExecSQL(szSQL);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"));
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"));
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	int nIndex = 1;
	CReportSection* rptDetail = rpt.GetDetail(); 
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
				tmpStr.Format(_T("%d"), nIndex++);
				rptDetail->SetValue(_T("1"), tmpStr);
				rs.GetValue(_T("empl_id"), tmpStr);
				rptDetail->SetValue(_T("1_1"), tmpStr);
				rs.GetValue(_T("empl_name"), tmpStr);
				rptDetail->SetValue(_T("2"), tmpStr);
				rs.GetValue(_T("empl_birthdate"),tmpStr);
				rptDetail->SetValue(_T("3"), CDate::Convert(rs.GetValue(_T("empl_birthdate")), yyyymmdd,ddmmyyyy));
				rs.GetValue(_T("CMT"), tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				rs.GetValue(_T("empl_address"), tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				rs.GetValue(_T("empl_dept"), tmpStr);
				rptDetail->SetValue(_T("5_0"), tmpStr);
				rs.GetValue(_T("empl_position"), tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				rs.GetValue(_T("trinhdo"), tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				rs.GetValue(_T("chuyenmon"), tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				rs.MoveNext();
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	rpt.PrintPreview();
} 
void CMSBCTinhhinhcanbocongchuc::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMSBCTinhhinhcanbocongchuc::OnAddMSBCTinhhinhcanbocongchuc(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CMSBCTinhhinhcanbocongchuc::OnEditMSBCTinhhinhcanbocongchuc(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CMSBCTinhhinhcanbocongchuc::OnDeleteMSBCTinhhinhcanbocongchuc(){
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
 		OnCancelMSBCTinhhinhcanbocongchuc(); 
 	}
	return 0;
}
int CMSBCTinhhinhcanbocongchuc::OnSaveMSBCTinhhinhcanbocongchuc(){
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
 		//OnMSBCTinhhinhcanbocongchucListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CMSBCTinhhinhcanbocongchuc::OnCancelMSBCTinhhinhcanbocongchuc(){
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
int CMSBCTinhhinhcanbocongchuc::OnMSBCTinhhinhcanbocongchucListLoadData(){
	return 0;
}
