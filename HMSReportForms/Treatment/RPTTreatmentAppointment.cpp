#include "stdafx.h"
#include "RPTTreatmentAppointment.h"
#include "HMSMainFrame.h"
#include "Excel.h"
/*static void _OnAppointmentDateChangeFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnAppointmentDateChange();
} */
/*static void _OnAppointmentDateSetfocusFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnAppointmentDateSetfocus();} */ 
/*static void _OnAppointmentDateKillfocusFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnAppointmentDateKillfocus();
} */
static int _OnAppointmentDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTTreatmentAppointment *)pWnd)->OnAppointmentDateCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTTreatmentAppointment* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTTreatmentAppointment *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTTreatmentAppointment *)pWnd)->OnTypeAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTTreatmentAppointment *pVw = (CRPTTreatmentAppointment *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddRPTTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CRPTTreatmentAppointment*)pWnd)->OnAddRPTTreatmentAppointment();
} 
static int _OnEditRPTTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CRPTTreatmentAppointment*)pWnd)->OnEditRPTTreatmentAppointment();
} 
static int _OnDeleteRPTTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CRPTTreatmentAppointment*)pWnd)->OnDeleteRPTTreatmentAppointment();
} 
static int _OnSaveRPTTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CRPTTreatmentAppointment*)pWnd)->OnSaveRPTTreatmentAppointment();
} 
static int _OnCancelRPTTreatmentAppointmentFnc(CWnd *pWnd){
	 return ((CRPTTreatmentAppointment*)pWnd)->OnCancelRPTTreatmentAppointment();
} 
CRPTTreatmentAppointment::CRPTTreatmentAppointment(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTTreatmentAppointment::~CRPTTreatmentAppointment(){
}
void CRPTTreatmentAppointment::OnCreateComponents(){
	m_wndAppointment.Create(this, _T("Appointment"), 5, 5, 510, 60);
	m_wndAppointmentDateLabel.Create(this, _T("Appointment Date"), 10, 30, 130, 55);
	m_wndAppointmentDate.Create(this,135, 30, 255, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 260, 30, 380, 55);
	m_wndType.Create(this,385, 30, 505, 55); 
	m_wndExport.Create(this, _T("Export"), 430, 67, 510, 92);

}
void CRPTTreatmentAppointment::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndAppointmentDate.SetCheckValue(true);
	m_wndType.LimitText(35);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CRPTTreatmentAppointment::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndAppointmentDate.SetEvent(WE_CHANGE, _OnAppointmentDateChangeFnc);
	//m_wndAppointmentDate.SetEvent(WE_SETFOCUS, _OnAppointmentDateSetfocusFnc);
	//m_wndAppointmentDate.SetEvent(WE_KILLFOCUS, _OnAppointmentDateKillfocusFnc);
	m_wndAppointmentDate.SetEvent(WE_CHECKVALUE, _OnAppointmentDateCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	
	SetMode(VM_ADD);

}
void CRPTTreatmentAppointment::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndAppointmentDate.GetDlgCtrlID(), m_szAppointmentDate);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CRPTTreatmentAppointment::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTTreatmentAppointment::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTTreatmentAppointment::SetDefaultValues(){

	m_szAppointmentDate.Empty();
	m_szTypeKey.Empty();

}
int CRPTTreatmentAppointment::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szAppointmentDate = pMF->GetSysDate();
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
/*void CRPTTreatmentAppointment::OnAppointmentDateChange(){
	
} */
/*void CRPTTreatmentAppointment::OnAppointmentDateSetfocus(){
	
} */
/*void CRPTTreatmentAppointment::OnAppointmentDateKillfocus(){
	
} */
int CRPTTreatmentAppointment::OnAppointmentDateCheckValue(){
	return 0;
} 
void CRPTTreatmentAppointment::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTTreatmentAppointment::OnTypeSelendok(){
	 
}
/*void CRPTTreatmentAppointment::OnTypeSetfocus(){
	
}*/
/*void CRPTTreatmentAppointment::OnTypeKillfocus(){
	
}*/
long CRPTTreatmentAppointment::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szTypeKey);
}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hta_type' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CRPTTreatmentAppointment::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTTreatmentAppointment::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldLine, szNewLine, szSQL2, szTmp;
	UpdateData(TRUE);
	BeginWaitCursor();
	szOldLine.Empty();
	szNewLine.Empty();
	szWhere.Empty();
	int nRow =0, nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	
	xls.SetColumnWidth(0, 4);
	xls.SetColumnWidth(1, 16);
	xls.SetColumnWidth(2, 8);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 11);
	xls.SetColumnWidth(5, 11);
	xls.SetColumnWidth(6, 8);
	xls.SetColumnWidth(7, 8);
	xls.SetColumnWidth(8, 8);
	xls.SetColumnWidth(9, 8);
	xls.SetColumnWidth(10, 11);
	xls.SetColumnWidth(11, 8);
	xls.SetColumnWidth(12, 8);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);

	szSQL2.Format(_T("SELECT to_date('%s','yyyy/mm/dd') - to_char(to_date('%s','yyyy/mm/dd'), 'D') + 2 as BeginOfWeek, ") \
				_T(" extract(month from to_date('%s','yyyy/mm/dd')) as mt,") \
				_T(" to_date('%s','yyyy/mm/dd') - to_char(to_date('%s','yyyy/mm/dd'), 'D') + 8 as EndOfWeek, ") \
				_T(" to_char(to_date('%s','yyyy/mm/dd'),'W') as numweek ") \
				_T(" FROM dual"), m_szAppointmentDate, m_szAppointmentDate, m_szAppointmentDate, m_szAppointmentDate, m_szAppointmentDate, m_szAppointmentDate);
	rs2.ExecSQL(szSQL2);
	
	szTmp.Format(_T("H\x1EB8N \x42\x1EC6NH NH\xC2N K GI\xC1P TH\xC1NG %s"), rs2.GetValue(_T("mt")));
	xls.SetCellText(0, 0, szTmp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);
	szTmp.Format(_T("TU\x1EA6N %s (%s - %s)"), rs2.GetValue(_T("numweek")), CDate::Convert(rs2.GetValue(_T("BeginOfWeek")), yyyymmdd, ddmmyyyy), CDate::Convert(rs2.GetValue(_T("EndOfWeek")), yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 1, szTmp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(0, 3, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(1, 3, _T("H\x1ECC T\xCAN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(2, 3, _T("MHS"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(3, 3, _T("N\x102M SINH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(4, 3, _T("\x110\x1ECA\x41 \x43H\x1EC8"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(5, 3, _T("\x110I\x1EC6N THO\x1EA0I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(6, 3, _T("TH\x1EC2"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(7, 3, _T("\x44I \x43\x102N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(8, 3, _T("TG/\x41-TG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(9, 3, _T("\x44\x1EF0 KI\x1EBEN \x110I\x1EC0U TR\x1ECA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(10, 3, _T("\x44\x1EF0 KI\x1EBEN \x43H\x1EA8N \x110O\xC1N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(11, 3, _T("\x44\x1EF0 KI\x1EBEN LI\x1EC0U I\x31\x33\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(12, 3, _T("\x42S H\x1EB8N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(13, 3, _T("\x44S H\x1EB8N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	xls.SetCellText(14, 3, _T("GHI \x43H\xDA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);
	
	xls.SetMerge(0, 0, 0, 14);
	xls.SetMerge(1, 1, 0, 14);
	
	szSQL.Format(_T(" SELECT GET_PATIENTNAME(hta_docno) as hovaten, hta_docid, extract(year from hp_birthdate) as namsinh, ") \
				_T(" GET_PROVINCE(hp_provid) as diachi, hta_phone as dt, hta_shape, ") \
				_T(" (select ss_desc from sys_sel where ss_id = 'hta_metastasis' and ss_code = hta_metastasis) as dican, ") \
				_T(" hta_tgatg, hta_sche_treatment, hta_type,") \
				_T(" (select ss_desc from sys_sel where ss_id = 'hta_schedule_diagnose' and ss_code = hta_sche_diagnose) as schediag, ") \
				_T(" hta_sche_i131, GET_USERNAME(hta_doctor_date) as doctor, GET_USERNAME(hta_pharmacist_date) as pharmacist, hta_note ") \
				_T(" FROM hms_treatment_appointment ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno = hta_patientno) ") \
				_T(" WHERE hta_appoint_date = to_date('%s', 'yyyy/mm/dd') ORDER BY hta_type"), m_szAppointmentDate);
	
	rs.ExecSQL(szSQL);
	nRow = 5;
	nCol = 0;
	int nCount = 1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("hta_type"), szNewLine);
		if(szNewLine != szOldLine)
		{
			if(szNewLine == _T("1")){
				szTemp.Format(_T("\x58\xC9T NGHI\x1EC6M %s"), CDate::Convert(m_szAppointmentDate, yyyymmdd, ddmmyyyy));
			}
			else if(szNewLine == _T("2")){
				szTemp.Format(_T("\x43H\x1EA8N \x110O\xC1N \x35 m\x43i(+/-)"));
			}
			else if(szNewLine == _T("3")){
				szTemp.Format(_T("\x43H\x1EA8N \x110O\xC1N \x35 m\x43i"));
			}
			xls.SetMerge(nRow, nRow, 0, 14);
			xls.SetCellText(nCol, nRow, szTemp, FMT_TEXT | FMT_CENTER, true, 10);

			szOldLine=szNewLine;
			nRow++;
		}
		
		tmpStr.Format(_T("%d"), nCount);
		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hovaten"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hta_docid"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("namsinh"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("diachi"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dt"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hta_shape"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("dican"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hta_tgatg"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hta_sche_treatment"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("schediag"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hta_sche_i131"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("doctor"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pharmacist"), tmpStr);
		xls.SetCellText(nCol+13, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("hta_note"), tmpStr);
		xls.SetCellText(nCol+14, nRow, tmpStr, FMT_TEXT);
		nRow++;
		nCount++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\henbenhnhankgiap.xls"));
	
} 
int CRPTTreatmentAppointment::OnAddRPTTreatmentAppointment(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTTreatmentAppointment::OnEditRPTTreatmentAppointment(){
  	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0; 
}
int CRPTTreatmentAppointment::OnDeleteRPTTreatmentAppointment(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND ") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelRPTTreatmentAppointment();
 	}
	return 0;
}
int CRPTTreatmentAppointment::OnSaveRPTTreatmentAppointment(){
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
 		//OnRPTTreatmentAppointmentListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTTreatmentAppointment::OnCancelRPTTreatmentAppointment(){
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
int CRPTTreatmentAppointment::OnRPTTreatmentAppointmentListLoadData(){
	return 0;
}
