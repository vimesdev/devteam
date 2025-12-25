#include "LISC2ARecomSurgeryExport.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "stdafx.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLISC2ARecomSurgeryExport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLISC2ARecomSurgeryExport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLISC2ARecomSurgeryExport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLISC2ARecomSurgeryExport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLISC2ARecomSurgeryExport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLISC2ARecomSurgeryExport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLISC2ARecomSurgeryExport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLISC2ARecomSurgeryExport *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CLISC2ARecomSurgeryExport *pVw = (CLISC2ARecomSurgeryExport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddLISC2ARecomSurgeryExportFnc(CWnd *pWnd){
	 return ((CLISC2ARecomSurgeryExport*)pWnd)->OnAddLISC2ARecomSurgeryExport();
} 
static int _OnEditLISC2ARecomSurgeryExportFnc(CWnd *pWnd){
	 return ((CLISC2ARecomSurgeryExport*)pWnd)->OnEditLISC2ARecomSurgeryExport();
} 
static int _OnDeleteLISC2ARecomSurgeryExportFnc(CWnd *pWnd){
	 return ((CLISC2ARecomSurgeryExport*)pWnd)->OnDeleteLISC2ARecomSurgeryExport();
} 
static int _OnSaveLISC2ARecomSurgeryExportFnc(CWnd *pWnd){
	 return ((CLISC2ARecomSurgeryExport*)pWnd)->OnSaveLISC2ARecomSurgeryExport();
} 
static int _OnCancelLISC2ARecomSurgeryExportFnc(CWnd *pWnd){
	 return ((CLISC2ARecomSurgeryExport*)pWnd)->OnCancelLISC2ARecomSurgeryExport();
} 
CLISC2ARecomSurgeryExport::CLISC2ARecomSurgeryExport(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CLISC2ARecomSurgeryExport::~CLISC2ARecomSurgeryExport(){
}
void CLISC2ARecomSurgeryExport::OnCreateComponents(){
	m_wndGeneralDepartmentUsage.Create(this, _T("Import Sheet List"), 5, 4, 575, 59);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 290, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 295, 30, 375, 55);
	m_wndToDate.Create(this,380, 30, 570, 55); 
	m_wndExport.Create(this, _T("&Export"), 496, 65, 576, 90);

}
void CLISC2ARecomSurgeryExport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CLISC2ARecomSurgeryExport::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	SetMode(VM_EDIT);

}
void CLISC2ARecomSurgeryExport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CLISC2ARecomSurgeryExport::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CLISC2ARecomSurgeryExport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLISC2ARecomSurgeryExport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLISC2ARecomSurgeryExport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CLISC2ARecomSurgeryExport::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 4, -1);
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
/*void CLISC2ARecomSurgeryExport::OnFromDateChange(){
	
} */
/*void CLISC2ARecomSurgeryExport::OnFromDateSetfocus(){
	
} */
/*void CLISC2ARecomSurgeryExport::OnFromDateKillfocus(){
	
} */
int CLISC2ARecomSurgeryExport::OnFromDateCheckValue(){
	return 0;
} 
/*void CLISC2ARecomSurgeryExport::OnToDateChange(){
	
} */
/*void CLISC2ARecomSurgeryExport::OnToDateSetfocus(){
	
} */
/*void CLISC2ARecomSurgeryExport::OnToDateKillfocus(){
	
} */
int CLISC2ARecomSurgeryExport::OnToDateCheckValue(){
	return 0;
} 
void CLISC2ARecomSurgeryExport::OnExportSelect(){
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0;
	double nTemp = 0, nTemp1 = 0;


	CExcel xls;
	if (!xls.Load(_T("Exports\\Template\\DSDenghiPTTTC2A_Tmp.xls"))) AfxMessageBox(_T("Chua có File DSDenghiPTTTC2A_Tmp.xls trong thư mục Exports\\Template!"));
	xls.SetWorksheet(0);

	//xls.SetCellText(0, 0, _T("B? QU?C PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, _T("B?NH VI?N TWQÐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd | hhmmss, ddmmyyyy | hhmmss));
	xls.SetCellText(0, 3, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 5;
	nCol = 0;
	int nIndex = 1;
	while (!rs.IsEOF())
	{
		xls.SetCellText(nCol, nRow, int2str(nIndex++), FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("dept"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tencd"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phanloai"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("pdate"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);

		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\DSDenghiPTTTC2A.xls"));
	
} 
int CLISC2ARecomSurgeryExport::OnAddLISC2ARecomSurgeryExport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLISC2ARecomSurgeryExport::OnEditLISC2ARecomSurgeryExport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLISC2ARecomSurgeryExport::OnDeleteLISC2ARecomSurgeryExport(){
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
 		OnCancelLISC2ARecomSurgeryExport();
 	}
	return 0;
}
int CLISC2ARecomSurgeryExport::OnSaveLISC2ARecomSurgeryExport(){
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
 		//OnLISC2ARecomSurgeryExportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLISC2ARecomSurgeryExport::OnCancelLISC2ARecomSurgeryExport(){
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
int CLISC2ARecomSurgeryExport::OnLISC2ARecomSurgeryExportListLoadData(){
	return 0;
}


CString CLISC2ARecomSurgeryExport::GetQueryString()
{

	CString szSQL, szWhere;


	szSQL.Format(_T(" select get_patientname(hd_docno) as pname, hd_docno as docno, ") \
		_T(" hfl_name as tencd, hpc_deptid as dept,") \
		_T(" get_feegroupname(hfl_groupid) as phanloai, ") \
		_T(" to_char(hpc_performdate, 'dd/mm/yyyy hh24:mi:ss') as pdate ") \
		_T(" FROM hms_doc ") \
		_T(" left join hms_testorder on(hd_docno = hpc_docno) ") \
		_T(" left join hms_testorderline on(hpc_orderid = hpcl_orderid)  ") \
		_T(" left join hms_fee_list on (hfl_feeid = hpcl_itemid) ") \
		_T(" WHERE ") \
		_T(" hpc_orderdate between to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') ") \
		_T(" and to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')") \
		_T(" and hfl_feeid in ('B11009617', 'B114031595') ") \
		_T(" and hpcl_status = 'T' and hpc_pdeptid = 'C2' "), m_szFromDate, m_szToDate);
	return szSQL;
}