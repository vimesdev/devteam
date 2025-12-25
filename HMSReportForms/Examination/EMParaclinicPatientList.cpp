#include "stdafx.h"
#include "EMParaclinicPatientList.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicPatientList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMParaclinicPatientList *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMParaclinicPatientList* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMParaclinicPatientList *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnDeptAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMParaclinicPatientList* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMParaclinicPatientList *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMParaclinicPatientList *)pWnd)->OnRoomAddNew();
}*/
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((CEMParaclinicPatientList*)pWnd)->OnServiceSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((CEMParaclinicPatientList*)pWnd)->OnInsuranceSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMParaclinicPatientList *pVw = (CEMParaclinicPatientList *)pWnd;
	pVw->OnExportSelect();
} 
CEMParaclinicPatientList::CEMParaclinicPatientList(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMParaclinicPatientList::~CEMParaclinicPatientList(){
}
void CEMParaclinicPatientList::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndParaclinicPatientList.Create(this, _T("Paraclinic Patient List"), 5, 5, 430, 150);
	m_wndDept.Create(this,95, 60, 425, 85); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.Create(this,95, 90, 425, 115); 
	m_wndObject.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndService.Create(this, _T("Service"), 95, 120, 215, 145);
	m_wndInsurance.Create(this, _T("Insurance"), 220, 120, 340, 145);
	m_wndExport.Create(this, _T("&Export"), 345, 120, 425, 145);

}
void CEMParaclinicPatientList::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
}
void CEMParaclinicPatientList::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
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
	m_wndService.SetEvent(WE_CLICK, _OnServiceSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CEMParaclinicPatientList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);

}
void CEMParaclinicPatientList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Room")] =  m_szRoomKey;
	m_jData[_T("Service")] =  m_bService;
	m_jData[_T("Insurance")] =  m_bInsurance;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Room")].GetValue(m_szRoomKey);
	m_jData[_T("Service")].GetValue(m_bService);
	m_jData[_T("Insurance")].GetValue(m_bInsurance);
	}

}
void CEMParaclinicPatientList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szRoomKey.Empty();
	m_bService=FALSE;
	m_bInsurance=FALSE;

}
int CEMParaclinicPatientList::SetMode(int nMode){
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
/*void CEMParaclinicPatientList::OnFromDateChange(){
	
} */
/*void CEMParaclinicPatientList::OnFromDateSetfocus(){
	
} */
/*void CEMParaclinicPatientList::OnFromDateKillfocus(){
	
} */
int CEMParaclinicPatientList::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMParaclinicPatientList::OnToDateChange(){
	
} */
/*void CEMParaclinicPatientList::OnToDateSetfocus(){
	
} */
/*void CEMParaclinicPatientList::OnToDateKillfocus(){
	
} */
int CEMParaclinicPatientList::OnToDateCheckValue(){
	return 0;
} 
void CEMParaclinicPatientList::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnRoomLoadData();
} 
void CEMParaclinicPatientList::OnDeptSelendok(){
	OnRoomLoadData();
}
/*void CEMParaclinicPatientList::OnDeptSetfocus(){
	
}*/
/*void CEMParaclinicPatientList::OnDeptKillfocus(){
	
}*/
long CEMParaclinicPatientList::OnDeptLoadData(){
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
/*void CEMParaclinicPatientList::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMParaclinicPatientList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMParaclinicPatientList::OnRoomSelendok(){
	 
}
/*void CEMParaclinicPatientList::OnRoomSetfocus(){
	
}*/
/*void CEMParaclinicPatientList::OnRoomKillfocus(){
	
}*/
long CEMParaclinicPatientList::OnRoomLoadData(){
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
/*void CEMParaclinicPatientList::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CEMParaclinicPatientList::OnServiceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CEMParaclinicPatientList::OnInsuranceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CEMParaclinicPatientList::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	CExcel xls;
	int nRow = 7, nCount = 0, nIndex = 1;
	if (!xls.Load(_T("Exports\\MAU_DSBenhNhanCLS.xls"))){
		AfxMessageBox(_T("MAU_DSBenhNhanCLS.xls"));
		return;
	}
	xls.SetWorksheet(0);
	CRecord rs(&pMF->m_db);
	CString szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF()){
		AfxMessageBox(_T("No Data!"));
		return;
	}
	while (!rs.IsEOF()){
		nCount += str2int(rs.GetValue(_T("so_luong")));
		xls.SetCellText(0, nRow, int2str(nIndex++), FMT_TEXT);
		for (int i = 0; i < rs.GetFieldCount(); i++)
			xls.SetCellText(i+1, nRow, rs.GetValue(rs.GetFieldName(i)), FMT_TEXT);
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(7, nRow, _T("T\x1ED5ng \x63\x1ED9ng:"), FMT_TEXT);
	xls.SetCellText(8, nRow, int2str(nCount), FMT_INTEGER);
	xls.Save(_T("Exports\\DSBenhNhanCLS.xls"));
}

CString CEMParaclinicPatientList::GetQueryString(){
	CString szSQL, szWhere, szObjType;
	szWhere.Format(_T(" and hpc_performdate between to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (!m_szDeptKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_deptid = '%s'"), m_szDeptKey);
	if (!m_szRoomKey.IsEmpty())
		szWhere.AppendFormat(_T(" and hpc_roomid = '%s'"), m_szRoomKey);
	if (m_bInsurance && m_bService){}
	else if (m_bInsurance || m_bService)
		szWhere.AppendFormat(_T(" and ho_type = '%s'"), m_bInsurance?_T("I"):_T("S"));
	szSQL.Format(_T("SELECT    hd_docno shs,") \
	_T("          Get_patientname(hd_docno) ten_bn,") \
	_T("          Hms_getagebydoc(hd_docno) tuoi,") \
	_T("          Sys_sel_getname('sys_sex', hp_sex) gioi,") \
	_T("          hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) dia_chi,") \
	_T("          Get_objectname(hd_object) doi_tuong,") \
	_T("          hfl_name ten_ky_thuat,") \
	_T("          Count(*) so_luong,") \
	_T("          Hms_getroomname(hpc_deptid, hpc_roomid) phong_chi_dinh,") \
	_T("          Get_departmentname(hpc_deptid) khoa_chi_dinh") \
	_T(" FROM      hms_pacsorder") \
	_T(" left join hms_pacsorderline ON ( hpc_orderid = hpcl_orderid AND hpc_docno = hpcl_docno )") \
	_T(" left join hms_fee_list ON ( hfl_feeid = hpcl_itemid )") \
	_T(" left join hms_doc ON ( hpc_docno = hd_docno )") \
	_T(" left join hms_patient ON ( hp_patientno = hd_patientno )") \
	_T(" left join hms_object ON ( hd_object = ho_id )") \
	_T(" WHERE     hpc_status = 'T' AND hpc_groupid IN ( 'B2200', 'B2300' ) AND ho_type IN ( 'I', 'S' ) %s") \
	_T(" GROUP     BY hd_docno,hp_sex,hp_provid,hp_distid,hp_villid,hd_object,hfl_name,hpc_deptid,hpc_roomid "),  szWhere);

	return szSQL;
}
