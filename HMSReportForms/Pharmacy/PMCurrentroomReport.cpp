#include "stdafx.h"
#include "PMCurrentroomReport.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCurrentroomReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMCurrentroomReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMCurrentroomReport* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CPMCurrentroomReport *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnCurrentRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMCurrentroomReport* )pWnd)->OnCurrentRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrentRoomSelendokFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnCurrentRoomSelendok();
}
/*static void _OnCurrentRoomSetfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnCurrentRoomKillfocus();
}*/
/*static void _OnCurrentRoomKillfocusFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnCurrentRoomKillfocus();
}*/
static long _OnCurrentRoomLoadDataFnc(CWnd *pWnd){
	return ((CPMCurrentroomReport *)pWnd)->OnCurrentRoomLoadData();
}
/*static void _OnCurrentRoomAddNewFnc(CWnd *pWnd){
	((CPMCurrentroomReport *)pWnd)->OnCurrentRoomAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CPMCurrentroomReport *pVw = (CPMCurrentroomReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPMCurrentroomReportFnc(CWnd *pWnd){
	 return ((CPMCurrentroomReport*)pWnd)->OnAddPMCurrentroomReport();
} 
static int _OnEditPMCurrentroomReportFnc(CWnd *pWnd){
	 return ((CPMCurrentroomReport*)pWnd)->OnEditPMCurrentroomReport();
} 
static int _OnDeletePMCurrentroomReportFnc(CWnd *pWnd){
	 return ((CPMCurrentroomReport*)pWnd)->OnDeletePMCurrentroomReport();
} 
static int _OnSavePMCurrentroomReportFnc(CWnd *pWnd){
	 return ((CPMCurrentroomReport*)pWnd)->OnSavePMCurrentroomReport();
} 
static int _OnCancelPMCurrentroomReportFnc(CWnd *pWnd){
	 return ((CPMCurrentroomReport*)pWnd)->OnCancelPMCurrentroomReport();
} 
CPMCurrentroomReport::CPMCurrentroomReport(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMCurrentroomReport::~CPMCurrentroomReport(){
}
void CPMCurrentroomReport::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 13, 29, 93, 54);
	m_wndFromDate.Create(this,98, 29, 218, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 236, 29, 316, 54);
	m_wndReportCondition.Create(this, _T("Report Condition"), 4, 3, 450, 145);
	m_wndToDate.Create(this,321, 29, 441, 54); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 13, 67, 93, 92);
	m_wndDepartment.Create(this,98, 67, 441, 92);
	m_wndCurrentRoom.SetCheckBox(TRUE);
	m_wndCurrentRoomLabel.Create(this, _T("Current room"), 13, 106, 93, 131);
	m_wndCurrentRoom.Create(this,98, 106, 441, 131); 
	m_wndExport.Create(this, _T("Export"), 361, 158, 441, 183);

}
void CPMCurrentroomReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndCurrentRoom.SetCheckValue(true);
	m_wndCurrentRoom.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndCurrentRoom.InsertColumn(0, _T("ID"), CFMT_RIGHT, 80);
	m_wndCurrentRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);

}
void CPMCurrentroomReport::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndCurrentRoom.SetEvent(WE_SELENDOK, _OnCurrentRoomSelendokFnc);
	//m_wndCurrentRoom.SetEvent(WE_SETFOCUS, _OnCurrentRoomSetfocusFnc);
	//m_wndCurrentRoom.SetEvent(WE_KILLFOCUS, _OnCurrentRoomKillfocusFnc);
	m_wndCurrentRoom.SetEvent(WE_SELCHANGE, _OnCurrentRoomSelectChangeFnc);
	m_wndCurrentRoom.SetEvent(WE_LOADDATA, _OnCurrentRoomLoadDataFnc);
	//m_wndCurrentRoom.SetEvent(WE_ADDNEW, _OnCurrentRoomAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSQL;
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	//m_szDepartmentKey = pMF->GetDepartmentID();
	UpdateData(false);
}
void CPMCurrentroomReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndCurrentRoom.GetDlgCtrlID(), m_szCurrentRoomKey);

}
void CPMCurrentroomReport::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CurrentRoom")] =  m_szCurrentRoomKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("CurrentRoom")].GetValue(m_szCurrentRoomKey);
	}

}
void CPMCurrentroomReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMCurrentroomReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CPMCurrentroomReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szCurrentRoomKey.Empty();

}
int CPMCurrentroomReport::SetMode(int nMode){
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
/*void CPMCurrentroomReport::OnFromDateChange(){
	
} */
/*void CPMCurrentroomReport::OnFromDateSetfocus(){
	
} */
/*void CPMCurrentroomReport::OnFromDateKillfocus(){
	
} */
int CPMCurrentroomReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CPMCurrentroomReport::OnToDateChange(){
	
} */
/*void CPMCurrentroomReport::OnToDateSetfocus(){
	
} */
/*void CPMCurrentroomReport::OnToDateKillfocus(){
	
} */
int CPMCurrentroomReport::OnToDateCheckValue(){
	return 0;
} 
void CPMCurrentroomReport::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMCurrentroomReport::OnDepartmentSelendok(){
	 
}
/*void CPMCurrentroomReport::OnDepartmentSetfocus(){
	
}*/
/*void CPMCurrentroomReport::OnDepartmentKillfocus(){
	
}*/
long CPMCurrentroomReport::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	}

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept ") \
		_T("WHERE sd_type IN ('KB', 'DT') ORDER BY sd_id"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMCurrentroomReport::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMCurrentroomReport::OnCurrentRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMCurrentroomReport::OnCurrentRoomSelendok(){
	 
}
/*void CPMCurrentroomReport::OnCurrentRoomSetfocus(){
	
}*/
/*void CPMCurrentroomReport::OnCurrentRoomKillfocus(){
	
}*/
long CPMCurrentroomReport::OnCurrentRoomLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(TRUE);
	if(m_wndCurrentRoom.IsSearchKey() && !m_szCurrentRoomKey.IsEmpty())
		{
	 szWhere.AppendFormat(_T(" and id='%s' "), m_szCurrentRoomKey);
}
		szWhere.AppendFormat(_T("and hrl_deptid = '%s'"),m_szDepartmentKey);
	m_wndCurrentRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE 1=1 %s ORDER BY id "),szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCurrentRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMCurrentroomReport::OnCurrentRoomAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CPMCurrentroomReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	OnInitDataString();
	CRecord rs(&pMF->m_db), crs(&pMF->m_db);
	CExcel xls;
	CString szSQL, tmpStr, tmpStr2,szOldDrug, szNewDrug, szTemp;
	CStringToken token(m_szProductIDStr);
	double nTmp = 0;
	int nIdx = 1, nCol = 0, nRow = 0, i = 0, nOldCol = 0;
	long double nTotalAmt = 0;
	long double nTotal[100];
	for(int j = 0; j < 100; j++)
	{
		nTotal[j] = 0;
	}
	szSQL = GetQueryString();
	_msg(_T("%s"),szSQL);
	int nRet = rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 3);
	xls.SetCellMergedColumns(0, 1, 3);
	xls.SetCellMergedColumns(0, 2, 6);
	xls.SetCellMergedColumns(0, 3, 6);

	xls.SetColumnWidth(1,12);
	xls.SetColumnWidth(2,25);
	xls.SetColumnWidth(3,15);

	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("THỐNG KÊ PHÁT THUỐC THEO BUỒNG");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col
	xls.SetCellMergedRows(0, nRow, 3);
	xls.SetCellMergedRows(1, nRow, 3);
	xls.SetCellMergedRows(2, nRow, 3);
	xls.SetCellMergedRows(3, nRow, 3);
	
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Buồng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("Họ tên"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("Số hồ sơ"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	
	//Dynamic Col Material
	nCol = 4;
	szSQL = GetQueryString1();
	_msg(_T("%s"),szSQL);
	crs.ExecSQL(szSQL);
	i = 0;
	while (!crs.IsEOF())
	{
		crs.GetValue(_T("drugname"), szNewDrug);
		if (szNewDrug != szOldDrug)
		{
			
			xls.SetCellText(nCol++, nRow, crs.GetValue(_T("drugname")), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);;
			szOldDrug = szNewDrug;
		
		}
		crs.MoveNext();
	}
	nCol = 0;
	nRow = 7;
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("hrl_name")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("patient_name")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("docno")), FMT_TEXT);
		nCol = 4;
		for (int i = 0; i < token.GetSize(); i++)
		{
			token.GetAt(i, szTemp);
			tmpStr.Format(_T("PID_%s"), szTemp);
			rs.GetValue(tmpStr, nTmp);
			nTotal[i] += nTmp;
			xls.SetCellText(nCol++, nRow, double2str(nTmp), FMT_NUMBER1);
		}
        
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellMergedColumns(0,nRow,3);
	xls.SetCellText(0, nRow, _T("Tổng cộng"), FMT_TEXT | FMT_CENTER, true);
	if(nTotal>0)
	{
		for(int i = 0; i < token.GetSize(); i++)
		{
			nCol = 4;
			tmpStr.Format(_T("%f"), nTotal[i]);
			xls.SetCellText(nCol+i, nRow, tmpStr, FMT_NUMBER1,true);
		}
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Thongkethuoctheobuong.xls"));
} 
int CPMCurrentroomReport::OnAddPMCurrentroomReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMCurrentroomReport::OnEditPMCurrentroomReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMCurrentroomReport::OnDeletePMCurrentroomReport(){
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
 		OnCancelPMCurrentroomReport();
 	}
	return 0;
}
int CPMCurrentroomReport::OnSavePMCurrentroomReport(){
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
 		//OnPMCurrentroomReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMCurrentroomReport::OnCancelPMCurrentroomReport(){
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
int CPMCurrentroomReport::OnPMCurrentroomReportListLoadData(){
	return 0;
}
CString CPMCurrentroomReport::GetQueryString(){
	CString szSQL, szWhere, szWhere1, szWhere2, szField, szField1, szSumField, tmpStr, szTemp, szRoomID,szRoom;
	CStringToken token(m_szProductIDStr);
	for (int i = 0; i < token.GetSize(); i++)
	{
		token.GetAt(i, szTemp);
		tmpStr.Format(_T("PID_%s"), szTemp);
		if (!szSumField.IsEmpty())
			szSumField += _T(", ");
		szSumField.AppendFormat(_T("SUM(%s) %s"),tmpStr, tmpStr);
		if (!szField.IsEmpty())
			szField += _T(", ");
		szField.AppendFormat(_T("0 %s"), tmpStr);
		if (!szField1.IsEmpty())
			szField1 += _T(", ");
		szField1.AppendFormat(_T("CASE WHEN product_id = %s THEN hpol_qtyissue ELSE 0 END %s"), szTemp,  tmpStr);
	}
	szWhere1.AppendFormat(_T(" AND hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')")
		, m_szFromDate, m_szToDate);
	
	for (int i = 0; i < m_wndCurrentRoom.GetItemCount(); i++)
	{
		if (m_wndCurrentRoom.GetCheck(i))
		{
			m_wndCurrentRoom.SetCurSel(i);
			if (!szRoom.IsEmpty())
			{
				szRoom+= _T(", ");
			}
			szRoom.AppendFormat(_T("%s"), m_wndCurrentRoom.GetCurrent(0));
		}
	}
	if(!szRoom.IsEmpty())
		szWhere1.AppendFormat(_T(" AND hb_roomid IN (%s)"), szRoom);

	if (!m_szDepartmentKey.IsEmpty())
		szWhere1.AppendFormat(_T(" AND hb_deptid = '%s'"), m_szDepartmentKey);

	szSQL.Format(_T(" SELECT get_patientname(docno) as patient_name,") \
		_T("   docno,") \
		_T("   %s,") \
		_T("   hrl_name") \
		_T(" FROM") \
		_T("   (SELECT  hpo_docno as docno,hpo_roomid as roomid,hpo_deptid as deptid,%s") \
		_T(" from hms_ipharmaorder ") \
		_T(" 					 LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" LEFT JOIN hms_bed ON (hb_docno=hpo_docno AND hb_deptid = hpo_deptid AND hb_roomid = hpo_roomid AND hb_bedid = hpo_bedid)") \
		_T(" 					 LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
		_T(" 				   LEFT JOIN m_productitem_view ON(hpol_product_id = product_id and hpol_product_item_id = product_item_id)") \
		_T("  ") \
		_T("   WHERE  hpo_orderstatus in('A') %s ") \
		_T("   )") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON (hd_docno = docno)") \
		_T(" LEFT JOIN hms_roomlist") \
		_T(" ON (hrl_deptid = deptid") \
		_T(" AND hrl_id     = roomid)") \
		_T(" GROUP BY docno, ") \
		_T("   hrl_name") \
		_T(" ORDER BY hrl_name, docno"), szSumField, szField1, szWhere1 );
	_fmsg(_T("%s"),szSQL);
	return szSQL;
}
CString CPMCurrentroomReport::GetQueryString1(){
	CString szSQL, szWhere,szRoom;
	
	for (int i = 0; i < m_wndCurrentRoom.GetItemCount(); i++)
	{
		if (m_wndCurrentRoom.GetCheck(i))
		{
			m_wndCurrentRoom.SetCurSel(i);
			if (!szRoom.IsEmpty())
			{
				szRoom+= _T(", ");
			}
			szRoom.AppendFormat(_T("%s"), m_wndCurrentRoom.GetCurrent(0));
		}
	}
	if(!szRoom.IsEmpty())
		szWhere.AppendFormat(_T(" AND hb_roomid IN (%s)"), szRoom);

	if (!m_szDepartmentKey.IsEmpty())
	 		szWhere.AppendFormat(_T(" AND hb_deptid = '%s'"), m_szDepartmentKey);
	
	szWhere.AppendFormat(_T("AND  hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND  TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')"), 
		m_szFromDate, m_szToDate);
	szSQL.Format(_T(" select distinct") \
		_T("       product_name as drugname,") \
		_T("      product_id as productid") \
		_T("  FROM   ") \
		_T(" 					  hms_ipharmaorder") \
		_T(" 					 LEFT JOIN hms_ipharmaorderline ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
		_T(" 					 LEFT JOIN hms_bed ON (hb_docno=hpo_docno AND hb_deptid = hpo_deptid AND hb_roomid = hpo_roomid AND hb_bedid = hpo_bedid)") \
		_T(" 					 LEFT JOIN hms_treatment_record ON(htr_docno=hpo_docno AND htr_idx=hpo_refidx) ") \
		_T(" 				   LEFT JOIN m_productitem_view ON(hpol_product_id = product_id and hpol_product_item_id = product_item_id)") \
		_T(" 					 WHERE ") \
		_T("            hpo_orderstatus in('A') %s ") \
		_T(" 					 ORDER BY drugname"), szWhere);
	_fmsg(_T("%s"),szSQL);
	return szSQL;
}

void CPMCurrentroomReport::OnInitDataString(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL = GetQueryString1();
	rs.ExecSQL(szSQL);
	m_szProductIDStr.Empty();
	m_szProductNameStr.Empty();
	while (!rs.IsEOF())
	{
		if (!m_szProductIDStr.IsEmpty())
			m_szProductIDStr += _T(",");
		m_szProductIDStr += rs.GetValue(_T("productid"));
		if (!m_szProductNameStr.IsEmpty())
			m_szProductNameStr += _T(",");
		m_szProductNameStr += rs.GetValue(_T("drugname"));
		rs.MoveNext();
	}

}