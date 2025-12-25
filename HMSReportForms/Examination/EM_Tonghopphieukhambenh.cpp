#include "stdafx.h"
#include "EM_Tonghopphieukhambenh.h"
#include "HMSMainFrame.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTonghopphieukhambenh *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMTonghopphieukhambenh *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMTonghopphieukhambenh* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CEMTonghopphieukhambenh *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnDeptAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMTonghopphieukhambenh* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMTonghopphieukhambenh *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CEMTonghopphieukhambenh *)pWnd)->OnRoomAddNew();
}*/
static void _OnServiceSelectFnc(CWnd *pWnd){
	 ((CEMTonghopphieukhambenh*)pWnd)->OnServiceSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd){
	 ((CEMTonghopphieukhambenh*)pWnd)->OnInsuranceSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMTonghopphieukhambenh *pVw = (CEMTonghopphieukhambenh *)pWnd;
	pVw->OnExportSelect();
} 
CEMTonghopphieukhambenh::CEMTonghopphieukhambenh(CWnd* pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMTonghopphieukhambenh::~CEMTonghopphieukhambenh()
{
}
void CEMTonghopphieukhambenh::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 60, 90, 85);
	m_wndParaclinicPatientList.Create(this, _T("Paraclinic Patient List"), 5, 5, 430, 150);
	m_wndDept.Create(this,95, 60, 425, 85);	
	m_wndRoomLabel.Create(this, _T("Room"), 10, 90, 90, 115);
	m_wndRoom.SetCheckBox(true);
	m_wndRoom.Create(this,95, 90, 425, 115);	
	m_wndObject.Create(this, _T("Object"), 10, 120, 90, 145);
	m_wndService.Create(this, _T("Service"), 95, 120, 215, 145);
	m_wndInsurance.Create(this, _T("Insurance"), 220, 120, 340, 145);
	m_wndExport.Create(this, _T("&Export"), 345, 120, 425, 145);
}
void CEMTonghopphieukhambenh::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
}
void CEMTonghopphieukhambenh::OnSetWindowEvents(){
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
void CEMTonghopphieukhambenh::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Check(pDX, m_wndService.GetDlgCtrlID(), m_bService);
	DDX_Check(pDX, m_wndInsurance.GetDlgCtrlID(), m_bInsurance);

}
void CEMTonghopphieukhambenh::UpdateJson(BOOL bSave){
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
void CEMTonghopphieukhambenh::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_szRoomKey.Empty();
	m_bService=FALSE;
	m_bInsurance=FALSE;

}
int CEMTonghopphieukhambenh::SetMode(int nMode){
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
/*void CEMTonghopphieukhambenh::OnFromDateChange(){
	
} */
/*void CEMTonghopphieukhambenh::OnFromDateSetfocus(){
	
} */
/*void CEMTonghopphieukhambenh::OnFromDateKillfocus(){
	
} */
int CEMTonghopphieukhambenh::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMTonghopphieukhambenh::OnToDateChange(){
	
} */
/*void CEMTonghopphieukhambenh::OnToDateSetfocus(){
	
} */
/*void CEMTonghopphieukhambenh::OnToDateKillfocus(){
	
} */
int CEMTonghopphieukhambenh::OnToDateCheckValue(){
	return 0;
} 
void CEMTonghopphieukhambenh::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnRoomLoadData();
} 
void CEMTonghopphieukhambenh::OnDeptSelendok(){
	OnRoomLoadData();
}
/*void CEMTonghopphieukhambenh::OnDeptSetfocus(){
	
}*/
/*void CEMTonghopphieukhambenh::OnDeptKillfocus(){
	
}*/
long CEMTonghopphieukhambenh::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and sd_type = 'KB' and sd_id in ('C1.1', 'AB')"));
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
/*void CEMTonghopphieukhambenh::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CEMTonghopphieukhambenh::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CEMTonghopphieukhambenh::OnRoomSelendok(){
	 
}
/*void CEMTonghopphieukhambenh::OnRoomSetfocus(){
	
}*/
/*void CEMTonghopphieukhambenh::OnRoomKillfocus(){
	
}*/
long CEMTonghopphieukhambenh::OnRoomLoadData()
{
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
/*void CEMTonghopphieukhambenh::OnRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CEMTonghopphieukhambenh::OnServiceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CEMTonghopphieukhambenh::OnInsuranceSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CEMTonghopphieukhambenh::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDept, szNewDept;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
	CExcel xls;
	if (!xls.Load(_T("Exports\\TONGHOP_PHIEUKHAMBENH.xls"))) AfxMessageBox(_T("Load fail!"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);

	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 8;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);		
		
		rs.GetValue(_T("so_hs"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_INTEGER);
		
		rs.GetValue(_T("ho_ten_bn"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("tuoi"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("gioi"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("chan_doan"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tien_su_benh"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("qua_trinh"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ket_luan"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("don_thuoc"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ket_qua_cls"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);


		rs.GetValue(_T("chucnang_song"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);

		
			
		nRow++;
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\TONGHOP_PHIEUKHAMBENH2.xls"));
}

CString CEMTonghopphieukhambenh::GetQueryString()
{
	CString szSQL, szWhere, szObjType, szWhere1, szWhere2, szRoomID;
	szWhere.Format(_T(" and HD_ENDDATE between to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') and to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	if (!m_szDeptKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND hd_admitdept = '%s'"), m_szDeptKey);

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			if (!szRoomID.IsEmpty())
				szRoomID += _T(",");			
			szRoomID.AppendFormat(_T("'%s'"), m_wndRoom.GetCheck(i, 0));
		}
	}
	
	if (!szRoomID.IsEmpty())
	{
		szWhere2.AppendFormat(_T(" and he_roomid in (%s) "), szRoomID);
	}

	/*if (!m_szRoomKey.IsEmpty())
		szWhere2.AppendFormat(_T(" and he_roomid = '%s'"), m_szRoomKey);*/	

	szSQL.Format(_T(" SELECT SO_HO_SO AS so_hs, ") \
	_T("     HO_TEN AS ho_ten_bn, ") \
	_T("     hms_getagebydoc(so_ho_so) as tuoi, GIOI_TINH AS gioi, hd_diagnostic AS chan_doan, ") \
	_T("     (SELECT 'Bản thân: '||NVL(hdh_owner, '')||', Gia đình: '||NVL(hdh_family, '')||', Dị ứng: '||NVL(hdh_drugallergy, '') FROM hms_disease_hist WHERE hdh_docno = hd_docno) AS tien_su_benh,") \
	_T("     (SELECT 'QTBL:'||LISTAGG(CAST(he_medical AS VARCHAR2(4000)), '|') WITHIN GROUP (ORDER BY he_receptidx) FROM hms_exam WHERE he_docno = hd_docno)") \
	_T("     ||chr(10)||(SELECT 'Khám LS:'||LISTAGG(CAST(he_examine AS VARCHAR2(4000)), '|') WITHIN GROUP (ORDER BY he_receptidx) FROM hms_exam WHERE he_docno = hd_docno) AS qua_trinh, ") \
	_T("     hd_conclusion AS ket_luan, ") \
	_T("     (") \
	_T("     SELECT LISTAGG(CAST('BS: '||get_username(hpo_doctor)||'|'||") \
	_T("     (SELECT  listagg(cast(hpol_productname||'['||hpol_generic||']'||'|'||hpol_productuom||'|'||SUM(hpol_qtyorder)||'|'||'HDSD: '||(SELECT hpou_dousage FROM hms_pharmaorder_usage WHERE hpou_orderid=hpol_orderid and hpou_product_id=hpol_product_id) as varchar2(4000)), ',') within group (order by hpol_line)") \
	_T("     FROM hms_pharmaorderline_view WHERE hpol_orderid=hpo_orderid") \
	_T("     GROUP BY hpol_line, hpol_product_id,hpol_productname, hpol_generic, hpol_productuom, hpol_orderid") \
	_T("     ) as varchar2(4000)), ',') within group (order by hpo_orderid)") \
	_T("     FROM hms_pharmaorder") \
	_T("     where hpo_docno = hd_docno and hpo_ordertype = 'P'") \
	_T("     )") \
	_T("     AS don_thuoc, ") \
	_T("     (SELECT LISTAGG( cast(hfl_name||':'||hpcl_result as varchar(2000)),',')  WITHIN GROUP (ORDER BY hfl_name)  as nt ") \
	_T("		FROM  hms_testorder  ") \
	_T("			left JOIN hms_testorderline ON ( hpcl_orderid = hpc_orderid ) ") \
	_T("			LEFT JOIN hms_fee_list ON ( hpcl_itemid = hfl_feeid ) ") \
	_T("		WHERE ") \
	_T("			hpc_docno = hd_docno ") \
	_T("			AND hpc_groupid = 'B1200'  and hpc_status='T' ) AS ket_qua_cls, ") \
	_T(" (SELECT LISTAGG(CAST('Mạch' ") \
    _T("                   || ': ' ") \
    _T("                   || he_pulse ") \
     _T("                  || ';' ") \
    _T("                   || 'Nhiệt độ' ") \
     _T("                  || ': ' ") \
     _T("                  || he_temperature ") \
     _T("                  || ';' ") \
     _T("                  || 'Huyết áp' ") \
      _T("                 || ': ' ") \
      _T("                 || he_bloodpressure ") \
      _T("                 || '/' ") \
       _T("                || he_bloodpressurex ") \
      _T("                 || ';' ") \
     _T("                  || 'Nhịp thở' ") \
      _T("                 || ': ' ") \
      _T("                 || he_breathinterval ") \
      _T("                 || ';' ") \
      _T("                 || 'Cân nặng' ") \
     _T("                  || ': ' ") \
     _T("                  || he_weight ") \
      _T("                 || ';' ") \
     _T("                  || 'Chiều cao' ") \
     _T("                  || ': ' ") \
     _T("                  || he_height AS VARCHAR(2000) ),',') WITHIN GROUP( ") \
    _T("      ORDER BY he_receptidx ") \
   _T("   ) AS nt ") \
	_T(" FROM  hms_exam ") \
	_T("  WHERE he_docno = hd_docno and ( he_pulse >0 or he_temperature >0 or he_bloodpressure >0 or he_bloodpressure >0) ) as chucnang_song ") \
	_T(" FROM hms_doc ") \
	_T(" LEFT JOIN v_tthc_benh_nhan ON (hd_docno = so_ho_so)") \
	_T(" WHERE hd_status = 'T' AND hd_suggestion NOT IN ('C', 'D')") \
	_T(" %s") \
	_T(" AND (select count(*) from hms_exam where he_docno = hd_docno and he_deptid = hd_admitdept and hd_admitdept in ('C1.1','AB') %s) > 0 %s"), szWhere1, szWhere2, szWhere);	
	return szSQL;
}