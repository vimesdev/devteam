#include "stdafx.h"
#include "LIMSQuanLyChatLuongCLS.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSQuanLyChatLuongCLS *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSQuanLyChatLuongCLS *)pWnd)->OnToDateCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSQuanLyChatLuongCLS* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CLIMSQuanLyChatLuongCLS *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnGroupAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSQuanLyChatLuongCLS* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CLIMSQuanLyChatLuongCLS *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnDeptAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSQuanLyChatLuongCLS* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CLIMSQuanLyChatLuongCLS *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnObjectAddNew();
}*/
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CLIMSQuanLyChatLuongCLS* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CLIMSQuanLyChatLuongCLS *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS *)pWnd)->OnStatusAddNew();
}*/
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CLIMSQuanLyChatLuongCLS*)pWnd)->OnAllSelect();
}
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CLIMSQuanLyChatLuongCLS*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	((CLIMSQuanLyChatLuongCLS*)pWnd)->OnInPatientSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CLIMSQuanLyChatLuongCLS *pVw = (CLIMSQuanLyChatLuongCLS *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSQuanLyChatLuongCLS *pVw = (CLIMSQuanLyChatLuongCLS *)pWnd;
	pVw->OnExportSelect();
} 
CLIMSQuanLyChatLuongCLS::CLIMSQuanLyChatLuongCLS(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CLIMSQuanLyChatLuongCLS::~CLIMSQuanLyChatLuongCLS(){
}
void CLIMSQuanLyChatLuongCLS::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 10, 60, 90, 85);
	m_wndGroup.Create(this,95, 60, 425, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 90, 115);
	m_wndTestActivities.Create(this, _T("Test Activities"), 5, 5, 430, 150);
	m_wndDept.Create(this,95, 90, 425, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndObject.SetCheckBox(TRUE);
	m_wndObject.Create(this,95, 120, 215, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 220, 120, 300, 145);
	m_wndStatus.Create(this,305, 120, 425, 145); 
	m_wndAll.Create(this, _T("All"), 5, 155, 140, 180);
	m_wndOutPatient.Create(this, _T("OutPatient"), 145, 155, 280, 180);
	m_wndInPatient.Create(this, _T("InPatient"), 285, 155, 405, 180);
	m_wndPrint.Create(this, _T("&Print"), 270, 185, 350, 210);
	m_wndExport.Create(this, _T("&Export"), 355, 185, 435, 210);

}
void CLIMSQuanLyChatLuongCLS::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	//m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	//m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	//m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

}
void CLIMSQuanLyChatLuongCLS::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	CString szSQL;
	UpdateData(false);

}
void CLIMSQuanLyChatLuongCLS::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);

}
void CLIMSQuanLyChatLuongCLS::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szGroupKey.Empty();
	m_szDeptKey.Empty();
	m_szObjectKey.Empty();
	m_szStatusKey.Empty();
	m_nAll = 0;
	m_nOutPatient = 1;
	m_nInPatient = 1;

}
int CLIMSQuanLyChatLuongCLS::SetMode(int nMode){
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
/*void CLIMSQuanLyChatLuongCLS::OnFromDateChange(){
	
} */
/*void CLIMSQuanLyChatLuongCLS::OnFromDateSetfocus(){
	
} */
/*void CLIMSQuanLyChatLuongCLS::OnFromDateKillfocus(){
	
} */
int CLIMSQuanLyChatLuongCLS::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSQuanLyChatLuongCLS::OnToDateChange(){
	
} */
/*void CLIMSQuanLyChatLuongCLS::OnToDateSetfocus(){
	
} */
/*void CLIMSQuanLyChatLuongCLS::OnToDateKillfocus(){
	
} */
int CLIMSQuanLyChatLuongCLS::OnToDateCheckValue(){
	return 0;
} 
void CLIMSQuanLyChatLuongCLS::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSQuanLyChatLuongCLS::OnGroupSelendok(){
	 
}
/*void CLIMSQuanLyChatLuongCLS::OnGroupSetfocus(){
	
}*/
/*void CLIMSQuanLyChatLuongCLS::OnGroupKillfocus(){
	
}*/
long CLIMSQuanLyChatLuongCLS::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	if (!m_szPermGroupID.IsEmpty())
		szWhere.AppendFormat(_T(" AND hfg_id IN (%s)"), m_szPermGroupID);
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE substr(hfg_id , 1, 2) = 'B1' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSQuanLyChatLuongCLS::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSQuanLyChatLuongCLS::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSQuanLyChatLuongCLS::OnDeptSelendok(){
	 
}
/*void CLIMSQuanLyChatLuongCLS::OnDeptSetfocus(){
	
}*/
/*void CLIMSQuanLyChatLuongCLS::OnDeptKillfocus(){
	
}*/
long CLIMSQuanLyChatLuongCLS::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSQuanLyChatLuongCLS::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSQuanLyChatLuongCLS::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSQuanLyChatLuongCLS::OnObjectSelendok(){
	 
}
/*void CLIMSQuanLyChatLuongCLS::OnObjectSetfocus(){
	
}*/
/*void CLIMSQuanLyChatLuongCLS::OnObjectKillfocus(){
	
}*/
long CLIMSQuanLyChatLuongCLS::OnObjectLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
	}
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name FROM hms_object WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSQuanLyChatLuongCLS::OnObjectAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSQuanLyChatLuongCLS::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CLIMSQuanLyChatLuongCLS::OnStatusSelendok(){
	 
}
/*void CLIMSQuanLyChatLuongCLS::OnStatusSetfocus(){
	
}*/
/*void CLIMSQuanLyChatLuongCLS::OnStatusKillfocus(){
	
}*/
long CLIMSQuanLyChatLuongCLS::OnStatusLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code = '%s' "), m_szStatusKey);
	}
	szWhere.AppendFormat(_T(" AND ss_code IN ('T')"));
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_order_status' %s ORDER BY ss_index "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CLIMSQuanLyChatLuongCLS::OnStatusAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CLIMSQuanLyChatLuongCLS::OnAllSelect(){
	
}
void CLIMSQuanLyChatLuongCLS::OnOutPatientSelect(){
	
}
void CLIMSQuanLyChatLuongCLS::OnInPatientSelect(){

}
void CLIMSQuanLyChatLuongCLS::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 
}
void CLIMSQuanLyChatLuongCLS::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 8);	xls.SetColumnWidth(2, 26);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 17);	xls.SetColumnWidth(5, 17);	xls.SetColumnWidth(6, 17);	xls.SetColumnWidth(7, 17);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 10);	xls.SetColumnWidth(10, 10);	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 11);	xls.SetCellText(0, 1, pMF->m_CompanyInfo.sc_pname, FMT_TEXT, true, 12, 0);
	xls.SetCellText(0, 2, pMF->m_CompanyInfo.sc_name, FMT_TEXT, true, 12, 0);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"),
		CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss),
		CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 12, 0);	xls.SetCellText(0, 2, _T("BÁO CÁO QUẢN LÝ CHẤT LƯỢNG CẬN LÂM SÀNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 18);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Họ và tên bệnh nhân"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Tuổi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Barcode"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Đối tượng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Khoa gửi mẫu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Thời gian nhận mẫu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("Tình trạng mẫu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 5, _T("Đạt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 5, _T("Không đạt"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 5, _T("Khắc phục"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Người gửi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Người nhận"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 12);	xls.SetMerge(3, 3, 0, 12);	xls.SetMerge(4, 5, 0, 0);	xls.SetMerge(4, 5, 1, 1);	xls.SetMerge(4, 5, 2, 2);	xls.SetMerge(4, 5, 3, 3);	xls.SetMerge(4, 5, 4, 4);	xls.SetMerge(4, 5, 5, 5);	xls.SetMerge(4, 5, 6, 6);	xls.SetMerge(4, 5, 7, 7);	xls.SetMerge(4, 4, 8, 10);	xls.SetMerge(4, 5, 11, 11);	xls.SetMerge(4, 5, 12, 12);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 7;	nCol = 0;	CString szNewGroup, szOldGroup;	while(!rs.IsEOF()){		rs.GetValue(_T("pdeptid"), szNewGroup);
		if (szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{
			xls.SetCellMergedColumns(nCol, nRow, 13);
			xls.SetCellText(nCol, nRow, szNewGroup, FMT_TEXT, true);
			nIdx = 1;
			szOldGroup = szNewGroup;
			nRow++;
		}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("age"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("barcode"), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pobject"), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("deptid"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("doctor"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		xls.SetCellText(nCol+12, nRow, szNewGroup, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\BCQuanLyChatLuongCLS.xls"));
}

CString CLIMSQuanLyChatLuongCLS::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere, tmpStr, szObjects;
	if (m_nAll == 1)
		szWhere.AppendFormat(_T(" AND hpc_deptid IN('C1.1', 'C1.2', 'C1.3', 'TYC')"));
	else if (m_nAll == 2)
		szWhere.AppendFormat(_T(" AND hpc_deptid NOT IN('C1.1', 'C1.2', 'C1.3', 'TYC')"));

	if (!m_szGroupKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_groupid = '%s'"), m_szGroupKey);
	
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND su_deptid = '%s'"), m_szDeptKey);
	
	for (int i = 0; i < m_wndObject.GetItemCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			m_wndObject.SetCurSel(i);
			if (!szObjects.IsEmpty())
				szObjects += _T(", ");
			szObjects += m_wndObject.GetCurrent(0);
		}
	}
	if (!szObjects.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hd_object IN (%s)"), szObjects);
	}
	
	if (!m_szStatusKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND hpc_status = '%s' AND hpcl_status = '%s'"), m_szStatusKey);
	else
		szWhere.AppendFormat(_T(" AND hpc_status = 'T' AND hpcl_status = 'T'"), m_szStatusKey);

	szSQL.Format(_T(" SELECT DISTINCT") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" hms_getage(hd_admitdate, hp_birthdate) AS age,") \
		_T(" hpc_sid AS barcode,") \
		_T(" hms_getobjectname(hd_object) AS pobject,") \
		_T(" (SELECT sd_name FROM sys_dept WHERE sd_id = hpc_deptid) AS deptid,") \
		_T(" (SELECT sd_name FROM sys_dept WHERE sd_id = su_deptid) AS pdeptid,") \
		_T(" get_username(hpc_doctor) AS doctor,") \
		_T(" su_deptid") \
		_T(" FROM hms_testorder") \
		_T(" LEFT JOIN hms_testorderline") \
		_T(" ON(hpc_orderid = hpcl_orderid)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = hpc_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN sys_user") \
		_T(" ON(su_userid = hpc_practitioner)") \
		_T(" WHERE hpc_performdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hpc_sid > 0 %s") \
		_T(" ORDER BY") \
		_T(" su_deptid,") \
		_T(" hpc_sid"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"), szSQL);

	return szSQL;
}