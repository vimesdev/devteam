#include "stdafx.h"
#include "EMDanhSachBenhNhanChuyenKhamTuTYC.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnToDateCheckValue();
} 
static void _OnFRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC* )pWnd)->OnFRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFRoomSelendokFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFRoomSelendok();
}
/*static void _OnFRoomSetfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFRoomKillfocus();
}*/
/*static void _OnFRoomKillfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFRoomKillfocus();
}*/
static long _OnFRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFRoomLoadData();
}
/*static void _OnFRoomAddNewFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFRoomAddNew();
}*/
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnDeptAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnRoomAddNew();
}*/
static void _OnFromDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC* )pWnd)->OnFromDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFromDeptSelendokFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDeptSelendok();
}
/*static void _OnFromDeptSetfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDeptKillfocus();
}*/
/*static void _OnFromDeptKillfocusFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDeptKillfocus();
}*/
static long _OnFromDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDeptLoadData();
}
/*static void _OnFromDeptAddNewFnc(CWnd *pWnd){
	((CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd)->OnFromDeptAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDanhSachBenhNhanChuyenKhamTuTYC *pVw = (CEMDanhSachBenhNhanChuyenKhamTuTYC *)pWnd;
	pVw->OnExportSelect();
} 
CEMDanhSachBenhNhanChuyenKhamTuTYC::CEMDanhSachBenhNhanChuyenKhamTuTYC(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMDanhSachBenhNhanChuyenKhamTuTYC::~CEMDanhSachBenhNhanChuyenKhamTuTYC(){
}
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnCreateComponents(){
	m_wndParaclinicPatientList.Create(this, _T("Information"), 5, 5, 430, 210);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndFdeptLabel.Create(this, _T("Khoa chuyển đi"), 10, 60, 150, 85);
	m_wndFromDept.Create(this,155, 60, 425, 85); 
	m_wndFRoomLabel.Create(this, _T("Phòng chuyển di"), 10, 90, 150, 115);
	m_wndFRoom.Create(this,155, 90, 425, 115); 
	m_wndDeptLabel.Create(this, _T("Khoa chuyển đến"), 10, 120, 150, 145);
	m_wndDept.Create(this,155, 120, 425, 145); 
	m_wndRoomLabel.Create(this, _T("Phòng chuyển đến"), 10, 150, 150, 175);
	m_wndRoom.Create(this,155, 150, 425, 175); 
	m_wndExport.Create(this, _T("&Export"), 345, 180, 425, 205);
}
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);

	m_wndFRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndFromDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFromDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndFRoom.SetEvent(WE_SELENDOK, _OnFRoomSelendokFnc);
	//m_wndFRoom.SetEvent(WE_SETFOCUS, _OnFRoomSetfocusFnc);
	//m_wndFRoom.SetEvent(WE_KILLFOCUS, _OnFRoomKillfocusFnc);
	m_wndFRoom.SetEvent(WE_SELCHANGE, _OnFRoomSelectChangeFnc);
	m_wndFRoom.SetEvent(WE_LOADDATA, _OnFRoomLoadDataFnc);
	//m_wndFRoom.SetEvent(WE_ADDNEW, _OnFRoomAddNewFnc);
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndFromDept.SetEvent(WE_SELENDOK, _OnFromDeptSelendokFnc);
	//m_wndFromDept.SetEvent(WE_SETFOCUS, _OnFromDeptSetfocusFnc);
	//m_wndFromDept.SetEvent(WE_KILLFOCUS, _OnFromDeptKillfocusFnc);
	m_wndFromDept.SetEvent(WE_SELCHANGE, _OnFromDeptSelectChangeFnc);
	m_wndFromDept.SetEvent(WE_LOADDATA, _OnFromDeptLoadDataFnc);
	//m_wndFromDept.SetEvent(WE_ADDNEW, _OnFromDeptAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFRoom.GetDlgCtrlID(), m_szFRoomKey);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_TextEx(pDX, m_wndFromDept.GetDlgCtrlID(), m_szFromDeptKey);
}
void CEMDanhSachBenhNhanChuyenKhamTuTYC::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Room")] =  m_szRoomKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Room")].GetValue(m_szRoomKey);
	}

}
void CEMDanhSachBenhNhanChuyenKhamTuTYC::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szFRoomKey.Empty();
	m_szDeptKey.Empty();
	m_szRoomKey.Empty();
	m_szFromDeptKey.Empty();

}
int CEMDanhSachBenhNhanChuyenKhamTuTYC::SetMode(int nMode){
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
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDateChange(){
	
} */
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDateSetfocus(){
	
} */
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDateKillfocus(){
	
} */
int CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnToDateChange(){
	
} */
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnToDateSetfocus(){
	
} */
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnToDateKillfocus(){
	
} */
int CEMDanhSachBenhNhanChuyenKhamTuTYC::OnToDateCheckValue(){
	return 0;
} 
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFRoomSelendok(){
	 
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFRoomSetfocus(){
	
}*/
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFRoomKillfocus(){
	
}*/
long CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFRoom.IsSearchKey() && !m_szFRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s'"), m_szFRoomKey);
	};
	if (!m_szFromDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hrl_deptid = '%s'"), m_szFromDeptKey);
	m_wndFRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1  %s ORDER BY hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnRoomLoadData();
} 
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDeptSelendok(){
	OnRoomLoadData();
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDeptSetfocus(){
	
}*/
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDeptKillfocus(){
	
}*/
long CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type = 'KB'"));
	return pMF->LoadDepartment(&m_wndDept, m_szDeptKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnRoomSelendok(){
	 
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnRoomSetfocus(){
	
}*/
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnRoomKillfocus(){
	
}*/
long CEMDanhSachBenhNhanChuyenKhamTuTYC::OnRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
		szWhere.Format(_T(" and hrl_id='%s'"), m_szRoomKey);
	};
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hrl_deptid = '%s'"), m_szDeptKey);
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 %s ORDER BY hrl_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDeptSelendok(){
	 
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDeptSetfocus(){
	
}*/
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDeptKillfocus(){
	
}*/
long CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type = 'KB'"));
	return pMF->LoadDepartment(&m_wndFromDept, m_szFromDeptKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFromDept.IsSearchKey() && !m_szFromDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szFromDeptKey
};
	m_wndFromDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFromDept.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnFromDeptAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CEMDanhSachBenhNhanChuyenKhamTuTYC::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0, nIdx = 1, nGroup = 0, nTotal = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 17);	xls.SetColumnWidth(2, 26);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 17);	xls.SetColumnWidth(6, 10);	xls.SetColumnWidth(7, 25);	xls.SetColumnWidth(8, 10);	xls.SetColumnWidth(9, 10);	xls.SetColumnWidth(10, 25);	xls.SetColumnWidth(11, 8);	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);	xls.SetCellText(0, 2, _T("DANH SÁCH BỆNH NHÂN CHUYỂN KHÁM TỪ TYC"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 18);	xls.SetCellText(0, 4, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 4, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 4, _T("Họ tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 4, _T("Nam"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 4, _T("Nữ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 4, _T("Ngày khám"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 4, _T("Mã phòng khám đi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 4, _T("Phòng khám đi"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 4, _T("Chuyển đến khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 4, _T("Mã phòng khám đến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 4, _T("Phòng khám đến"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 4, _T("Trạng thái khám"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 4, _T("Chuyển tới khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(13, 4, _T("Chuyển tới phòng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(14, 4, _T("Số lượng đơn nếu có"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(15, 4, _T("Hướng điều trị"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(16, 4, _T("Khoa kết thúc"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(17, 4, _T("Hướng làm BA vào khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(18, 4, _T("Khoa vào thực tế"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(2, 2, 0, 11);	xls.SetMerge(3, 3, 0, 11);	szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T("deptid"), szNewDept);		if(szNewDept != szOldDept)			{				if(nGroup > 0)					{						xls.SetCellText(nCol+2, nRow, _T("Tổng khoa: "), FMT_TEXT, true);						xls.SetCellText(nCol+3, nRow, int2str(nGroup), FMT_NUMBER1, true);						nTotal += nGroup;						nGroup = 0;						nRow++;					}				xls.SetCellText(nCol+2, nRow, szNewDept, FMT_TEXT, true);				szOldDept = szNewDept;				nIdx = 1;				nRow++;			}		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		rs.GetValue(_T("docno"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);		rs.GetValue(_T("pname"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("psex"), szTemp);		rs.GetValue(_T("page"), tmpStr);		if(szTemp == _T("M"))			xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		else			xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("examdate"), tmpStr);		xls.SetCellText(nCol+5, nRow, CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), FMT_TEXT);		rs.GetValue(_T("froomid"), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("froomname"), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("deptid"), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("roomid"), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("roomname"), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("stuatus"), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("nextdept11111"), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("toname"), tmpStr);		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("qtydrug"), tmpStr);		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("huongdieutri"), tmpStr);		xls.SetCellText(nCol+15, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("enddept"), tmpStr);		xls.SetCellText(nCol+16, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("godept"), tmpStr);		xls.SetCellText(nCol+17, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("godept1"), tmpStr);		xls.SetCellText(nCol+18, nRow, tmpStr, FMT_TEXT);				nRow++;		nGroup++;		rs.MoveNext();	}	if(nGroup > 0)	{		xls.SetCellText(nCol+2, nRow, _T("Tổng khoa: "), FMT_TEXT, true);		xls.SetCellText(nCol+3, nRow, int2str(nGroup), FMT_NUMBER1, true);		nTotal += nGroup;		nRow++;	}	if(nTotal > 0)	{		xls.SetCellText(nCol+2, nRow, _T("Tổng cộng: "), FMT_TEXT, true);		xls.SetCellText(nCol+3, nRow, int2str(nTotal), FMT_NUMBER1, true);		nRow++;	}	EndWaitCursor();	xls.Save(_T("Exports\\DanhSachBenhNhanChuyenKhamTuTYC.xls"));
}

CString CEMDanhSachBenhNhanChuyenKhamTuTYC::GetQueryString(){
	CString szSQL, szWhere, szObjType;
	
	if (!m_szFromDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_fdeptid = '%s'"), m_szFromDeptKey);
	if (!m_szFRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_froomid = '%s'"), m_szFRoomKey);
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_deptid = '%s'"), m_szDeptKey);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" and he_roomid = '%s'"), m_szRoomKey);

	szSQL.Format(_T(" SELECT") \
		_T(" hd_docno AS docno,") \
		_T(" get_patientname(hd_docno) AS pname,") \
		_T(" hp_sex AS psex,") \
		_T(" hms_getage(hd_admitdate, hp_birthdate) AS page,") \
		_T(" he_examdate AS examdate,") \
		_T(" he_deptid AS deptid,") \
		_T(" he_roomid AS roomid,") \
		_T(" hms_getroomname(he_deptid, he_roomid) AS roomname,") \
		_T(" he_froomid AS froomid,") \
		_T(" hms_getroomname(he_fdeptid, he_froomid) AS froomname,") \
		_T(" he_status AS stuatus,") \
		_T("	 HMS_GETNEXTDEPT_ROOMNAME(he_docno,he_deptid, he_roomid, he_receptidx) AS toname, ") \
		_T("	HMS_GETNEXTDEPT(he_docno,he_deptid, he_roomid,he_receptidx) as nextdept, ") \
		_T(" (select count(*) from  VIMES.hms_pharmaorder where hpo_docno = he_docno and hpo_roomid= he_roomid and hpo_deptid= he_deptid) as qtydrug , ") \
		_T(" (select ss_desc from sys_sel where ss_code= hms_doc.hd_suggestion and ss_id='hms_suggestion') as huongdieutri, ") \
		_T(" hd_enddept as enddept, ") \
		_T(" hcr_admitdept as godept,  ") \
		_T("  case when  ") \
		_T(" (SELECT count(*) ") \
		_T(" FROM VIMES.hms_treatment_record ") \
		_T(" WHERE htr_docno=he_docno ") \
		_T(" ) > 0  then hcr_admitdept else null end as godept1 ") \
		_T(" FROM hms_exam ") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = he_docno)") \
		_T(" LEFT JOIN VIMES.hms_clinical_record ON (hcr_docno= hd_docno) ") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE 1=1") \
		_T(" AND he_examdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') %s ") \
		_T(" ORDER BY") \
		_T(" he_deptid,") \
		_T(" he_roomid,") \
		_T(" he_examdate,") \
		_T(" hd_docno"), m_szFromDate, m_szToDate, szWhere);
	_fmsg(_T("%s"),szSQL);

	return szSQL;
}
