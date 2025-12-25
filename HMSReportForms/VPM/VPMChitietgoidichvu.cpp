#include "stdafx.h"
#include "VPMChitietgoidichvu.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMChitietgoidichvu *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CVPMChitietgoidichvu *)pWnd)->OnToDateCheckValue();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVPMChitietgoidichvu* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CVPMChitietgoidichvu *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CVPMChitietgoidichvu *)pWnd)->OnDeptAddNew();
}*/
static void _OnOverSelectFnc(CWnd *pWnd){
	 ((CVPMChitietgoidichvu*)pWnd)->OnOverSelect();
}
static void _OnExportSelectFnc(CWnd *pWnd){
	CVPMChitietgoidichvu *pVw = (CVPMChitietgoidichvu *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddVPMChitietgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMChitietgoidichvu*)pWnd)->OnAddVPMChitietgoidichvu();
} 
static int _OnEditVPMChitietgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMChitietgoidichvu*)pWnd)->OnEditVPMChitietgoidichvu();
} 
static int _OnDeleteVPMChitietgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMChitietgoidichvu*)pWnd)->OnDeleteVPMChitietgoidichvu();
} 
static int _OnSaveVPMChitietgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMChitietgoidichvu*)pWnd)->OnSaveVPMChitietgoidichvu();
} 
static int _OnCancelVPMChitietgoidichvuFnc(CWnd *pWnd){
	 return ((CVPMChitietgoidichvu*)pWnd)->OnCancelVPMChitietgoidichvu();
} 
CVPMChitietgoidichvu::CVPMChitietgoidichvu(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CVPMChitietgoidichvu::~CVPMChitietgoidichvu(){
}
void CVPMChitietgoidichvu::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 22, 25, 102, 50);
	m_wndFromDate.Create(this,107, 25, 227, 50); 
	m_wndToDateLabel.Create(this, _T("To Date"), 246, 25, 326, 50);
	m_wndReportCondition.Create(this, _T("Report Condition"), 4, 2, 462, 134);
	m_wndToDate.Create(this,331, 25, 451, 50); 
	m_wndDeptLabel.Create(this, _T("Dept"), 22, 64, 102, 89);
	m_wndDept.Create(this,107, 64, 451, 89); 
	m_wndOver.Create(this, _T("Over"), 22, 101, 102, 126);
	m_wndExport.Create(this, _T("Export"), 371, 101, 451, 126);

}
void CVPMChitietgoidichvu::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CVPMChitietgoidichvu::OnSetWindowEvents(){
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
	m_wndOver.SetEvent(WE_CLICK, _OnOverSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CString szSysDate = pMF->GetSysDate();
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);

}
void CVPMChitietgoidichvu::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndOver.GetDlgCtrlID(), m_bOver);

}
void CVPMChitietgoidichvu::UpdateJson(BOOL bSave){
	
}
void CVPMChitietgoidichvu::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVPMChitietgoidichvu::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVPMChitietgoidichvu::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDeptKey.Empty();
	m_bOver=FALSE;

}
int CVPMChitietgoidichvu::SetMode(int nMode){
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
/*void CVPMChitietgoidichvu::OnFromDateChange(){
	
} */
/*void CVPMChitietgoidichvu::OnFromDateSetfocus(){
	
} */
/*void CVPMChitietgoidichvu::OnFromDateKillfocus(){
	
} */
int CVPMChitietgoidichvu::OnFromDateCheckValue(){
	return 0;
} 
/*void CVPMChitietgoidichvu::OnToDateChange(){
	
} */
/*void CVPMChitietgoidichvu::OnToDateSetfocus(){
	
} */
/*void CVPMChitietgoidichvu::OnToDateKillfocus(){
	
} */
int CVPMChitietgoidichvu::OnToDateCheckValue(){
	return 0;
} 
void CVPMChitietgoidichvu::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMChitietgoidichvu::OnDeptSelendok(){
	 
}
/*void CVPMChitietgoidichvu::OnDeptSetfocus(){
	
}*/
/*void CVPMChitietgoidichvu::OnDeptKillfocus(){
	
}*/
long CVPMChitietgoidichvu::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty())
	{
		szWhere.Format(_T(" and id='%s' "), m_szDeptKey);
	}
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")));
		rs.MoveNext();
	}
	return nCount;
}
/*void CVPMChitietgoidichvu::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CVPMChitietgoidichvu::OnOverSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CVPMChitietgoidichvu::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nCost = 0;

	CExcel xls;
	if (!xls.Load(_T("Exports\\BAOCAOCHITIETTINHHINHSUDUNGGOIDICHVU.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);

	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("patientname"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("deptid"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("relative"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("contacttel"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("begindate"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("enddate"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_DATETIME);

		rs.GetValue(_T("quantity"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("amount"), nTemp);
		nCost += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);
       
	
		rs.GetValue(_T("hour"), tmpStr);
		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);
		

		nRow++;
		rs.MoveNext();
	}

	if (nCost > 0)
	{
		xls.SetCellText(0, nRow, _T("Tổng cộng"), FMT_TEXT, true);
		xls.SetCellText(11, nRow, double2str(nCost), FMT_NUMBER1, true);			
	
		nRow++;
	}

	xls.Save(_T("Exports\\BAOCAOCHITIETTINHHINHSUDUNGGOIDICHVU2.xls"));
} 
int CVPMChitietgoidichvu::OnAddVPMChitietgoidichvu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVPMChitietgoidichvu::OnEditVPMChitietgoidichvu(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVPMChitietgoidichvu::OnDeleteVPMChitietgoidichvu(){
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
 		OnCancelVPMChitietgoidichvu();
 	}
	return 0;
}
int CVPMChitietgoidichvu::OnSaveVPMChitietgoidichvu(){
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
 		//OnVPMChitietgoidichvuListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVPMChitietgoidichvu::OnCancelVPMChitietgoidichvu(){
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
int CVPMChitietgoidichvu::OnVPMChitietgoidichvuListLoadData(){
	return 0;
}
CString CVPMChitietgoidichvu::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	if (!m_szDeptKey.IsEmpty())
	{
		szWhere.AppendFormat(_T("AND hfe_deptid = '%s'"), m_szDeptKey);
	}
	if (m_bOver)
		{
        szWhere.AppendFormat(_T("AND COALESCE(extract(DAY FROM systimestamp-hfe_enddate)*24+extract(hour FROM systimestamp-hfe_enddate), 0) <= 0"));
		}
	szSQL.Format(_T(" SELECT HFE_FEE_EXTRA_ID AS idx,") \
		_T("   hfe_status            AS status,") \
		_T("   get_patientname(hfe_docno) as patientname,hfel_unitprice as unit,") \
		_T("   hfe_docno as docno,") \
		_T("   hfe_deptid as deptid,(SELECT hd_contacttel FROM hms_doc WHERE hfe_docno=hd_docno) AS contacttel,") \
		_T("   (SELECT hr_name FROM hms_relative WHERE hr_relative_id=hfe_relative_id) AS relative,") \
		_T("   (SELECT hr_phone FROM hms_relative WHERE hr_relative_id=hfe_relative_id) AS phone,") \
		_T("   TO_CHAR(hfe_orderdate,'DD/MM/YYYY HH24:MI')                                                            AS begindate,") \
		_T("   TO_CHAR(hfe_enddate,'DD/MM/YYYY HH24:MI')                                                              AS enddate,") \
		_T("   COALESCE(extract(DAY FROM systimestamp-hfe_enddate)*24+extract(hour FROM systimestamp-hfe_enddate), 0) AS hour,") \
		_T("   hfel_quantity                                                                                          AS quantity,") \
		_T("   hfl_name                                                                                               AS pkg_name,") \
		_T("   hfel_cost                                                                                              AS amount") \
		_T(" FROM hms_fee_extra,") \
		_T("   hms_fee_extraline,") \
		_T("   hms_fee_list") \
		_T(" WHERE hfe_orderdate between to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T(" AND hfel_docno       = hfe_docno") \
		_T(" AND hfe_fee_extra_id = hfel_fee_extra_id") \
		_T(" AND hfel_itemid      = hfl_feeid") \
		_T(" AND hfe_type         ='S'") \
		_T(" ORDER BY hfel_fee_extraline_id"), m_szFromDate,m_szToDate,szWhere); 	
	return szSQL;
}