#include "stdafx.h"
#include "TM_TTTIEMTRUYEN.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTM_TTTIEMTRUYEN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTM_TTTIEMTRUYEN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTM_TTTIEMTRUYEN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTM_TTTIEMTRUYEN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTM_TTTIEMTRUYEN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTM_TTTIEMTRUYEN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTM_TTTIEMTRUYEN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTM_TTTIEMTRUYEN *)pWnd)->OnToDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CTM_TTTIEMTRUYEN *pVw = (CTM_TTTIEMTRUYEN *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddTM_TTTIEMTRUYENFnc(CWnd *pWnd){
	 return ((CTM_TTTIEMTRUYEN*)pWnd)->OnAddTM_TTTIEMTRUYEN();
} 
static int _OnEditTM_TTTIEMTRUYENFnc(CWnd *pWnd){
	 return ((CTM_TTTIEMTRUYEN*)pWnd)->OnEditTM_TTTIEMTRUYEN();
} 
static int _OnDeleteTM_TTTIEMTRUYENFnc(CWnd *pWnd){
	 return ((CTM_TTTIEMTRUYEN*)pWnd)->OnDeleteTM_TTTIEMTRUYEN();
} 
static int _OnSaveTM_TTTIEMTRUYENFnc(CWnd *pWnd){
	 return ((CTM_TTTIEMTRUYEN*)pWnd)->OnSaveTM_TTTIEMTRUYEN();
} 
static int _OnCancelTM_TTTIEMTRUYENFnc(CWnd *pWnd){
	 return ((CTM_TTTIEMTRUYEN*)pWnd)->OnCancelTM_TTTIEMTRUYEN();
} 
CTM_TTTIEMTRUYEN::CTM_TTTIEMTRUYEN(CWnd *pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CTM_TTTIEMTRUYEN::~CTM_TTTIEMTRUYEN(){
}
void CTM_TTTIEMTRUYEN::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 5, 85, 30);
	m_wndFromDate.Create(this,90, 5, 210, 30); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 5, 295, 30);
	m_wndToDate.Create(this,300, 5, 420, 30); 
	m_wndExport.Create(this, _T("&Export"), 340, 35, 420, 60);

}
void CTM_TTTIEMTRUYEN::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CTM_TTTIEMTRUYEN::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTM_TTTIEMTRUYENFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTM_TTTIEMTRUYENFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTM_TTTIEMTRUYENFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTM_TTTIEMTRUYENFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTM_TTTIEMTRUYENFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_ADD);

}
void CTM_TTTIEMTRUYEN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTM_TTTIEMTRUYEN::UpdateJson(BOOL bSave){
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
void CTM_TTTIEMTRUYEN::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTM_TTTIEMTRUYEN::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTM_TTTIEMTRUYEN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTM_TTTIEMTRUYEN::SetMode(int nMode){
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
			m_szFromDate= pMF->GetSysDate() + _T(" 00:00");
			m_szToDate= pMF->GetSysDate() + _T(" 23:59");

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
/*void CTM_TTTIEMTRUYEN::OnFromDateChange(){
	
} */
/*void CTM_TTTIEMTRUYEN::OnFromDateSetfocus(){
	
} */
/*void CTM_TTTIEMTRUYEN::OnFromDateKillfocus(){
	
} */
int CTM_TTTIEMTRUYEN::OnFromDateCheckValue(){
	return 0;
} 
/*void CTM_TTTIEMTRUYEN::OnToDateChange(){
	
} */
/*void CTM_TTTIEMTRUYEN::OnToDateSetfocus(){
	
} */
/*void CTM_TTTIEMTRUYEN::OnToDateKillfocus(){
	
} */
int CTM_TTTIEMTRUYEN::OnToDateCheckValue(){
	return 0;
} 
void CTM_TTTIEMTRUYEN::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szPreviousID, szCurrentID, szPreviousGroup, szCurrentGroup;
	CStringArray arrCol;
	int nCol = 0, nRow = 0, nIdx = 1;
	double nCost = 0;
	long double nTiem = 0, nTruyen = 0, nTmau = 0;

	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 15);
	xls.SetColumnWidth(1, 20);
	xls.SetColumnWidth(2, 30);
	xls.SetColumnWidth(3, 30);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 15);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 9);
	xls.SetCellMergedColumns(0, 3, 9);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	xls.SetCellText(0, 2, _T("BÁO CÁO TIÊM TRUYỀN- TRUYỀN MÁU"), 4098, true);
	tmpStr.Format(_T("Ðến ngày %s"), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098);
	arrCol.Add(_T("Số Hồ sơ"));
	arrCol.Add(_T("Tên bệnh nhân"));
	arrCol.Add(_T("Tên thuốc"));
	arrCol.Add(_T("Cách sử dụng"));
	arrCol.Add(_T("SL TIêm"));
	arrCol.Add(_T("SL truyền"));
	arrCol.Add(_T("Truyền máu"));
	arrCol.Add(_T("Đơn vị"));
	for (int i = 0; i < arrCol.GetCount(); i ++)
	{
		xls.SetCellText(nCol + i,  4, arrCol.GetAt(i), 4098, true);
	}
	nRow = 5;

	szSQL.Format(_T(" select  ") \
					_T("   hpo_docno as docno,") \
					_T("   get_patientname(hpo_docno) as pname,") \
					_T("   product_name ,") \
					_T("   HPOL_DOUSAGE,") \
					_T("   case when lower(HPOL_DOUSAGE) like '%%tiêm%%' then hpol_qtyissue else 0 end as nTiem,") \
					_T("   case when lower(HPOL_DOUSAGE) like '%%truyền%%' then hpol_qtyissue else 0 end as nTruyen,") \
					_T("   0 as ntruyenmau,product_uomname ") \
					_T(" from VIMES.hms_ipharmaorder") \
					_T(" left join VIMES.hms_ipharmaorderline on (hpol_orderid = hpo_orderid)") \
					_T(" left join m_productitem_view on (product_item_id= hpol_product_item_id)") \
					_T(" where hpo_deptid ='%s' ") \
					_T(" and hpo_orderdate between to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') and  to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
					_T(" and hpo_org_id <>'BB' ") \
					_T(" and  product_uomid ") \
					_T("           in (select adu_uom_id ") \
					_T("           from VIMES.ad_uom  ") \
					/*_T("           where lower(adu_name) like '%%lọ%%' ") \
					_T("                 or   lower(adu_name) like '%%ống%%'") \
					_T("                 or   lower(adu_name) like '%%chai%%')        ") \*/
					_T(" WHERE lower(adu_name) in (SELECT lower(ss_vndesc) FROM sys_sel WHERE ss_id = 'DS_TIEMTRUYEN'))") \
					_T(" UNION ALL") \
					_T(" SELECT hbo_docno AS docno,") \
					_T("   get_patientname(hbo_docno),") \
					_T("   mp_name,") \
					_T("   hbo_reason,") \
					_T("   0,0,") \
					_T("   hbol_qty AS truyenmau,") \
					_T("   GET_UOMNAME(mp_product_uom_id) AS product_purchase_uomname") \
					_T(" FROM hms_blood_orderline") \
					_T(" LEFT JOIN hms_blood_order") \
					_T(" ON (HBOL_ORDERID=hbo_orderid)") \
					_T(" LEFT JOIN hms_testorder ON (hbo_docno=hpc_docno AND hbo_orderid=hpc_orderid)") \
					_T(" LEFT JOIN m_product") \
					_T(" ON ( mp_product_id = hbol_itemid )") \
					_T(" WHERE hbo_deptid   ='%s'") \
					_T(" AND hbo_orderdate BETWEEN to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS') AND to_timestamp('%s', 'YYYY/MM/DD HH24:MI:SS')") \
					_T(" AND hpc_sid >0 ORDER BY docno") ,pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate,pMF->GetCurrentDepartmentID(), m_szFromDate, m_szToDate);
	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	while (!rs.IsEOF())
	{
		xls.SetCellText(0, nRow, rs.GetValue(_T("docno")), FMT_TEXT);
		xls.SetCellText(1, nRow, rs.GetValue(_T("pname")), FMT_TEXT);
		xls.SetCellText(2, nRow, rs.GetValue(_T("product_name")), FMT_TEXT);
		xls.SetCellText(3, nRow, rs.GetValue(_T("HPOL_DOUSAGE")), FMT_TEXT);
		xls.SetCellText(4, nRow, rs.GetValue(_T("nTiem")), FMT_NUMBER1);
		xls.SetCellText(5, nRow, rs.GetValue(_T("nTruyen")), FMT_NUMBER1);
		xls.SetCellText(6, nRow, rs.GetValue(_T("ntruyenmau")), FMT_NUMBER1);
		xls.SetCellText(7, nRow, rs.GetValue(_T("product_uomname")), FMT_TEXT);
		
		rs.GetValue(_T("nTiem"), nCost);
		nTiem += nCost;
		
		rs.GetValue(_T("nTruyen"), nCost);
		nTruyen += nCost;

		rs.GetValue(_T("ntruyenmau"), nCost);
		nTmau += nCost;
		nRow++;
		rs.MoveNext();
	}
	tmpStr.Format(_T("%f"), nTiem);
	xls.SetCellText(4, nRow, tmpStr, FMT_NUMBER1);
	
	tmpStr.Format(_T("%f"), nTruyen);
	xls.SetCellText(5, nRow, tmpStr, FMT_NUMBER1);

	tmpStr.Format(_T("%f"), nTmau);
	xls.SetCellText(6, nRow, tmpStr, FMT_NUMBER1);
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao thu thuat tiem truyen.xls"));
	
} 
int CTM_TTTIEMTRUYEN::OnAddTM_TTTIEMTRUYEN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTM_TTTIEMTRUYEN::OnEditTM_TTTIEMTRUYEN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTM_TTTIEMTRUYEN::OnDeleteTM_TTTIEMTRUYEN(){
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
 		OnCancelTM_TTTIEMTRUYEN();
 	}
	return 0;
}
int CTM_TTTIEMTRUYEN::OnSaveTM_TTTIEMTRUYEN(){
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
 		//OnTM_TTTIEMTRUYENListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTM_TTTIEMTRUYEN::OnCancelTM_TTTIEMTRUYEN(){
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
int CTM_TTTIEMTRUYEN::OnTM_TTTIEMTRUYENListLoadData(){
	return 0;
}
