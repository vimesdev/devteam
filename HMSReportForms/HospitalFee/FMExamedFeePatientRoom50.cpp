#include "stdafx.h"
#include "FMExamedFeePatientRoom50.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExamedFeePatientRoom50 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFMExamedFeePatientRoom50 *)pWnd)->OnToDateCheckValue();
} 
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CFMExamedFeePatientRoom50*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CFMExamedFeePatientRoom50*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFMExamedFeePatientRoom50*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CFMExamedFeePatientRoom50*)pWnd)->OnRoomListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CFMExamedFeePatientRoom50 *pVw = (CFMExamedFeePatientRoom50 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CFMExamedFeePatientRoom50 *pVw = (CFMExamedFeePatientRoom50 *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddFMExamedFeePatientRoom50Fnc(CWnd *pWnd){
	 return ((CFMExamedFeePatientRoom50*)pWnd)->OnAddFMExamedFeePatientRoom50();
} 
static int _OnEditFMExamedFeePatientRoom50Fnc(CWnd *pWnd){
	 return ((CFMExamedFeePatientRoom50*)pWnd)->OnEditFMExamedFeePatientRoom50();
} 
static int _OnDeleteFMExamedFeePatientRoom50Fnc(CWnd *pWnd){
	 return ((CFMExamedFeePatientRoom50*)pWnd)->OnDeleteFMExamedFeePatientRoom50();
} 
static int _OnSaveFMExamedFeePatientRoom50Fnc(CWnd *pWnd){
	 return ((CFMExamedFeePatientRoom50*)pWnd)->OnSaveFMExamedFeePatientRoom50();
} 
static int _OnCancelFMExamedFeePatientRoom50Fnc(CWnd *pWnd){
	 return ((CFMExamedFeePatientRoom50*)pWnd)->OnCancelFMExamedFeePatientRoom50();
}
static int _OnRoomListCheckAllFnc(CWnd *pWnd){
	return ((CFMExamedFeePatientRoom50*)pWnd)->OnRoomListCheckAll();
}
static int _OnRoomListUnCheckAllFnc(CWnd *pWnd){
	return ((CFMExamedFeePatientRoom50*)pWnd)->OnRoomListUnCheckAll();
}


CFMExamedFeePatientRoom50::CFMExamedFeePatientRoom50(CWnd *pParent){

	m_nDlgWidth = 475;
	m_nDlgHeight = 455;
	SetDefaultValues();
}
CFMExamedFeePatientRoom50::~CFMExamedFeePatientRoom50(){
}
void CFMExamedFeePatientRoom50::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 7, 7, 467, 347);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 115, 55);
	m_wndFromDate.Create(this,120, 30, 240, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 245, 30, 335, 55);
	m_wndToDate.Create(this,340, 30, 460, 55); 
	m_wndRoomList.Create(this,10, 60, 460, 345);
	m_wndRoomList.SetCheckBox(true);
	m_wndPrint.Create(this, _T("&Print"), 255, 350, 355, 375);
	m_wndExport.Create(this, _T("&Export"), 360, 350, 460, 375);

}
void CFMExamedFeePatientRoom50::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 380);
	m_wndRoomList.AddEvent(1, _T("Check All"), _OnRoomListCheckAllFnc);
	m_wndRoomList.AddEvent(2, _T("UnCheck All"), _OnRoomListUnCheckAllFnc);
}
void CFMExamedFeePatientRoom50::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(false);
	OnRoomListLoadData();
}
void CFMExamedFeePatientRoom50::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CFMExamedFeePatientRoom50::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFMExamedFeePatientRoom50::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMExamedFeePatientRoom50::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CFMExamedFeePatientRoom50::SetMode(int nMode){
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
/*void CFMExamedFeePatientRoom50::OnFromDateChange(){
	
} */
/*void CFMExamedFeePatientRoom50::OnFromDateSetfocus(){
	
} */
/*void CFMExamedFeePatientRoom50::OnFromDateKillfocus(){
	
} */
int CFMExamedFeePatientRoom50::OnFromDateCheckValue(){
	return 0;
} 
/*void CFMExamedFeePatientRoom50::OnToDateChange(){
	
} */
/*void CFMExamedFeePatientRoom50::OnToDateSetfocus(){
	
} */
/*void CFMExamedFeePatientRoom50::OnToDateKillfocus(){
	
} */
int CFMExamedFeePatientRoom50::OnToDateCheckValue(){
	return 0;
} 
void CFMExamedFeePatientRoom50::OnRoomListDblClick(){
	
} 
void CFMExamedFeePatientRoom50::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CFMExamedFeePatientRoom50::OnRoomListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFMExamedFeePatientRoom50::OnRoomListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hrl_id as ID, hrl_name as Name ") \
		_T("FROM hms_roomlist WHERE hrl_deptid IN('C1.1')") \
		_T("ORDER BY hrl_deptid, hrl_id"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
}
void CFMExamedFeePatientRoom50::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CFMExamedFeePatientRoom50::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 8);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(6, 25);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 7);
	xls.SetCellMergedColumns(0, 3, 7);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("\x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N KH\xC1M NGO\xC0I GI\x1EDC");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 5, _T("STT"), 4098, true);
	xls.SetCellText(1, 5, _T("T\xEAn \x42N"), 4098, true);
	xls.SetCellText(2, 5, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 5, _T("Tr\x1EA1ng th\xE1i"), 4098, true);
	xls.SetCellText(4, 5, _T("Ng\xE0y kh\xE1m"), 4098, true);
	xls.SetCellText(5, 5, _T("Ng\xE0y thu"), 4098, true);
	xls.SetCellText(6, 5, _T("Ng\x1B0\x1EDDi thu"), 4098, true);
	xls.SetCellText(7, 5, _T("Ph\xF2ng"), 4098, true);
	xls.SetCellText(8, 5, _T("Ki\x1EC3u kh\xE1m"), 4098, true);
	xls.SetCellText(9, 5, _T("Ph\xED kh\xE1m"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("doc_no")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("status")), FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("exam_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);
		tmpStr = CDate::Convert(rs.GetValue(_T("recieve_date")), yyyymmdd, ddmmyyyy);
		xls.SetCellText(5, nRow, tmpStr, FMT_TEXT);	
		xls.SetCellText(6, nRow, rs.GetValue(_T("staff")), FMT_TEXT);
		xls.SetCellText(7, nRow, rs.GetValue(_T("room")), FMT_TEXT);
		xls.SetCellText(8, nRow, rs.GetValue(_T("descr")), FMT_TEXT);
		xls.SetCellText(9, nRow, rs.GetValue(_T("exam_fee")), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}
	xls.Save(_T("Exports\\Danh sach bn thu phi kham phong laser.xls"));
} 
int CFMExamedFeePatientRoom50::OnAddFMExamedFeePatientRoom50(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMExamedFeePatientRoom50::OnEditFMExamedFeePatientRoom50(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMExamedFeePatientRoom50::OnDeleteFMExamedFeePatientRoom50(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelFMExamedFeePatientRoom50();
 	}
	return 0;
}
int CFMExamedFeePatientRoom50::OnSaveFMExamedFeePatientRoom50(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnFMExamedFeePatientRoom50ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMExamedFeePatientRoom50::OnCancelFMExamedFeePatientRoom50(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CFMExamedFeePatientRoom50::OnFMExamedFeePatientRoom50ListLoadData(){
	return 0;
}
CString CFMExamedFeePatientRoom50::GetQueryString(){
	CString szSQL, szWhere, szRooms;
	szWhere.Format(_T(" AND ife.HFE_DATE BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), m_szFromDate, m_szToDate);
	
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
		{
			m_wndRoomList.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(", ");
			szRooms += m_wndRoomList.GetItemText(i, 0);
		}
	}
	if(!szRooms.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND he_roomid IN(%s) "), szRooms);
	}

	szSQL.Format(_T(" SELECT    Get_patientname(he_docno)                    patient_name, ") \
		_T("           he_docno                                     doc_no, ") \
		_T("           Get_syssel_desc('hms_doc_status', he_status) status, ") \
		_T("           he_examdate exam_date, ") \
		_T("           ife.hfe_date recieve_date, ") \
		_T("           ife.hfe_staff staff, ") \
		_T("           vfe.hfe_desc descr, ") \
		_T("           he_deptid ") \
		_T("           ||'|' ") \
		_T("           ||he_roomid room, ") \
		_T("           hfe_cost exam_fee ") \
		_T(" FROM      hms_exam ") \
		_T(" LEFT JOIN hms_fee vfe ON ( hfe_docno = he_docno ") \
		_T(" AND hfe_orderid = he_receptidx ) ") \
		_T(" LEFT JOIN HMS_FEE_INVOICE ife ON (vfe.hfe_docno=ife.hfe_docno AND vfe.HFE_INVOICENO = ife.HFE_INVOICENO) ") \
		_T(" WHERE he_hasfee = 'Y' ") \
		_T(" AND vfe.hfe_status   = 'P' AND he_deptid='C1.1'") \
		_T(" AND hfe_object = 7 %s"), szWhere);
	return szSQL;
}
int CFMExamedFeePatientRoom50::OnRoomListCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (!m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, TRUE);
	}

	return 0;
}
int CFMExamedFeePatientRoom50::OnRoomListUnCheckAll()
{
	for (int i = 0; i < m_wndRoomList.GetItemCount(); i++)
	{
		if (m_wndRoomList.GetCheck(i))
			m_wndRoomList.SetCheck(i, FALSE);
	}

	return 0;
}