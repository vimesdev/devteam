#include "stdafx.h"
#include "HFFoodHCKTReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHFFoodHCKTReport *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHFFoodHCKTReport *)pWnd)->OnToDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHFFoodHCKTReport* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHFFoodHCKTReport *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHFFoodHCKTReport *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHFFoodHCKTReport *pVw = (CHFFoodHCKTReport *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHFFoodHCKTReport *pVw = (CHFFoodHCKTReport *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHFFoodHCKTReportFnc(CWnd *pWnd){
	 return ((CHFFoodHCKTReport*)pWnd)->OnAddHFFoodHCKTReport();
} 
static int _OnEditHFFoodHCKTReportFnc(CWnd *pWnd){
	 return ((CHFFoodHCKTReport*)pWnd)->OnEditHFFoodHCKTReport();
} 
static int _OnDeleteHFFoodHCKTReportFnc(CWnd *pWnd){
	 return ((CHFFoodHCKTReport*)pWnd)->OnDeleteHFFoodHCKTReport();
} 
static int _OnSaveHFFoodHCKTReportFnc(CWnd *pWnd){
	 return ((CHFFoodHCKTReport*)pWnd)->OnSaveHFFoodHCKTReport();
} 
static int _OnCancelHFFoodHCKTReportFnc(CWnd *pWnd){
	 return ((CHFFoodHCKTReport*)pWnd)->OnCancelHFFoodHCKTReport();
} 
CHFFoodHCKTReport::CHFFoodHCKTReport(CWnd *pParent){

	m_nDlgWidth = 475;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHFFoodHCKTReport::~CHFFoodHCKTReport(){
}
void CHFFoodHCKTReport::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 115, 55);
	m_wndFromDate.Create(this,120, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 460, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 115, 85);
	m_wndDepartment.Create(this,120, 60, 460, 85); 
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 465, 90);
	m_wndPrint.Create(this, _T("&Print"), 255, 95, 355, 120);
	m_wndExport.Create(this, _T("&Export"), 360, 95, 460, 120);

}
void CHFFoodHCKTReport::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


}
void CHFFoodHCKTReport::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHFFoodHCKTReportFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHFFoodHCKTReportFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHFFoodHCKTReportFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHFFoodHCKTReportFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHFFoodHCKTReportFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

	m_szFromDate = pMF->GetSysDate();
	m_szToDate = pMF->GetSysDate();
	UpdateData(false);

}
void CHFFoodHCKTReport::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);

}
void CHFFoodHCKTReport::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	}

}
void CHFFoodHCKTReport::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHFFoodHCKTReport::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHFFoodHCKTReport::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();

}
int CHFFoodHCKTReport::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHFFoodHCKTReport::OnFromDateChange(){
	
} */
/*void CHFFoodHCKTReport::OnFromDateSetfocus(){
	
} */
/*void CHFFoodHCKTReport::OnFromDateKillfocus(){
	
} */
int CHFFoodHCKTReport::OnFromDateCheckValue(){
	return 0;
} 
/*void CHFFoodHCKTReport::OnToDateChange(){
	
} */
/*void CHFFoodHCKTReport::OnToDateSetfocus(){
	
} */
/*void CHFFoodHCKTReport::OnToDateKillfocus(){
	
} */
int CHFFoodHCKTReport::OnToDateCheckValue(){
	return 0;
} 
void CHFFoodHCKTReport::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHFFoodHCKTReport::OnDepartmentSelendok(){
	 
}
/*void CHFFoodHCKTReport::OnDepartmentSetfocus(){
	
}*/
/*void CHFFoodHCKTReport::OnDepartmentKillfocus(){
	
}*/
long CHFFoodHCKTReport::OnDepartmentLoadData(){
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
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept_hc ") \
		_T("WHERE sd_type IN ('DT')  ORDER BY sd_index"));
	_fmsg(_T("%s"), szSQL);
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
/*void CHFFoodHCKTReport::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHFFoodHCKTReport::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString szDate, szSysDate;
	CString tmpStr, tmpStr2, szObjectID, 
		szObjectName, szTemp, szOldOrderID, szNewOrderID, szDept, szOldDept, szNewDept;;
	CString szSQL, szDeptType, szDeptType2, szWhereRoomID, szWhereRoomID2, szWhere, szWhere2, szWhere3,
		szListID, szRoomID, szRoomName, szHavingClause, szProductType, szObjects, szStocks;
	if(!rpt.Init(_T("Reports/HMS/HF_FOODHCKT.RPT"),true) )
	{
		return;
	}
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);

		
		//Page Header
		//Report Detail
		szSQL.Format(_T(" SELECT sd_id,tblxxx.* from sys_dept  ") \
					_T(" 						LEFT JOIN ( ") \
					_T(" 				SELECT hfo_deptid,") \
					_T("         sum(nSang) as nSang, ") \
					_T(" 				  sum(tSang) as tSang, ") \
					_T(" 				  sum(nTrua) as nTrua, ") \
					_T(" 				  sum(nChieu) as nChieu,") \
					_T("           sum(nTrua + nChieu) as nTC,") \
					_T("           sum(t_CT) as t_CT,") \
					_T("           sum(t_BN) as t_BN,") \
					_T("           sum(nnha) as nnha,") \
					_T("           sum(tnha) as tnha,") \
					_T("           sum(t_amount) as t_amount") \
					_T(" 				 FROM  ( ") \
					_T(" 				SELECT ") \
					_T(" 					 hfo_deptid,") \
					_T("            case when hfl_subgroup <> 'NN' and hfol_type='S' then hfol_qtyissue else 0 end as nSang, ") \
					_T("             case when hfl_subgroup <> 'NN' and hfol_type='S' then hfol_unitprice* hfol_qtyissue else 0 end as tSang,") \
					_T("             case when hfl_subgroup <> 'NN' and hfol_type='T'   then hfol_qtyissue else 0 end as nTrua, ") \
					_T(" 						case when hfl_subgroup <> 'NN' and hfol_type='C'   then hfol_qtyissue else 0 end as nChieu,") \
					_T("             case when hfl_subgroup <> 'NN' and hfol_type in ('C','T')   then hfol_unitprice* hfol_qtyissue else 0 end as t_CT,") \
					_T("               case when hfl_subgroup <> 'NN' then hfol_unitprice* hfol_qtyissue else 0 end as t_BN,") \
					_T("             case when hfl_subgroup='NN' and hfol_type='S'  then hfol_qtyissue else 0 end as nnha, ") \
					_T("           case when hfl_subgroup='NN' and hfol_type='S'  then hfol_unitprice* hfol_qtyissue else 0 end as tnha,") \
					_T("           hfol_unitprice* hfol_qtyissue as t_amount") \
					_T(" 					FROM hms_foodordersheet ") \
					_T(" 					LEFT JOIN hms_feefood ") \
					_T(" 					ON (hfo_reforder_id= hfos_orderid) ") \
					_T(" 					LEFT JOIN hms_feefoodline ") \
					_T(" 					ON (hfol_orderid= hfo_orderid) ") \
					_T(" 					LEFT JOIN hms_fee_list ON (hfl_feeid= hfol_itemid) ") \
					_T(" 					WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
					_T(" 											AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T("           AND hfos_depttype='HC'  AND hfo_ordertype   = 'D' AND hfl_typeid = 'F'  and hfe_refstatus <> 'C' ") \
					_T(" 					AND hfo_orderstatus = 'A' and hfl_groupid = 'FF000' and hfl_deptid='HCKT'   				  ") \
					_T(" 					) tbl ") \
					_T(" 				 GROUP BY hfo_deptid ") \
					_T(" 					)  tblxxx ON (hfo_deptid= sd_id) ") \
					_T(" 				 where sd_type ='DT' and  t_amount >0 ") \
					_T(" 				 order by sd_index1"), m_szFromDate, m_szToDate);
		_fmsg(_T("%s"), szSQL);

	CReportSection* rptDetail = NULL;
	CReportSection* rptGroup = NULL;
	CRecord rs(&pMF->m_db);
	int nCount = rs.ExecSQL(szSQL);
	if (nCount <= 0)
	{
		ShowMessage(150, MB_ICONSTOP);
		//_fmsg(_T("%s"), szSQL);
		//QueryOpener(szSQL);
		return;
	}
	long nItem = 1, nTotalOrder=0, nItemCount = 0;
	long nOrderID;
	double nTotalAmount=0, cost = 0, nAmount = 0, nDeptAmount = 0;
	double nTotal[15];
	for(int i=0; i< 15; i++)
	{
		nTotal[i]=0;
	}
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();
		if (rptDetail)
		{
			tmpStr.Format(_T("%ld"), nItem++);			
			rptDetail->SetValue(_T("1"), tmpStr);
			rs.GetValue(_T("sd_id"), tmpStr);
			rptDetail->SetValue(_T("2"), tmpStr);

			rs.GetValue(_T("nSang"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("3"), tmpStr);
			nTotal[3]= nTotal[3] + cost;

			rs.GetValue(_T("tSang"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("4"), tmpStr);
			nTotal[4]= nTotal[4] + cost;


			rs.GetValue(_T("nTrua"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("5"), tmpStr);
			nTotal[5]= nTotal[5] + cost;

			rs.GetValue(_T("nChieu"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("6"), tmpStr);
			nTotal[6]= nTotal[6] + cost;

			rs.GetValue(_T("nTC"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);
			nTotal[7]= nTotal[7] + cost;

			rs.GetValue(_T("t_CT"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("8"), tmpStr);
			nTotal[8]= nTotal[8] + cost;

			rs.GetValue(_T("t_BN"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			nTotal[9]= nTotal[9] + cost;

			rs.GetValue(_T("nnha"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			nTotal[10]= nTotal[10] + cost;

			rs.GetValue(_T("tnha"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);
			nTotal[11]= nTotal[11] + cost;


			rs.GetValue(_T("t_amount"), cost);
			FormatCurrency(cost, tmpStr);
			rptDetail->SetValue(_T("12"), tmpStr);
			nTotal[12]= nTotal[12] + cost;

		}
		rs.MoveNext();
	}
	CString szNameCol;
	if (nTotal[12] > 0)
	{			
		rptGroup = rpt.AddDetail(rpt.GetGroupFooter(1));	
		if (rptGroup)
		{
			for (int i =3; i < 13; i ++)
			{
				
				tmpStr.Format(_T("%f"),nTotal[i]);
				szNameCol.Format(_T("s%d"),i);
				rptGroup->GetItem(szNameCol)->SetBold(true);
				rptGroup->GetItem(szNameCol)->SetItalic(true);
				rptGroup->SetValue(szNameCol, tmpStr);
			}

		}
		
	}


	//Page Footer
	//Report Footer
	
	tmpStr.Format(_T("%ld"), nTotalOrder);
	rpt.GetReportFooter()->SetValue(_T("TotalOrder"), tmpStr);
	tmpStr.Format(_T("%.2f"), nTotalAmount);
	FormatCurrency(nTotalAmount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	tmpStr.Format(_T("%ld"), nItemCount);
	rpt.GetReportFooter()->SetValue(_T("TotalItem"), tmpStr);
	szSysDate = pMF->GetSysDate(); 
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	//rpt.GetReportFooter()->SetValue(_T("username"), tmpStr);
	rpt.PrintPreview();
	EndWaitCursor();


	
} 
void CHFFoodHCKTReport::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr;
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	int nCol=0;
	int nRow=0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("T?NG H?P QUÂN S? AN");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	//tmpStr.Format(_T("Ngày %s tháng %s nam %s"), m_szDate.Right(2) ,m_szDate.Mid(5,2), m_szDate.Left(4));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col

	/*xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellMergedRows(2, nRow, 2);
	xls.SetCellMergedRows(11, nRow, 2);
	xls.SetCellMergedRows(12, nRow, 2);
	xls.SetCellMergedRows(13, nRow, 2);
	xls.SetCellMergedRows(14, nRow, 2);
	xls.SetCellMergedRows(15, nRow, 2);
	xls.SetCellMergedRows(16, nRow, 2);

	xls.SetCellMergedColumns(3, nRow, 4);
	xls.SetCellMergedColumns(7, nRow, 4);*/
	xls.SetCellMergedRows(0,nRow,3);
	xls.SetCellMergedRows(1,nRow,3);
	xls.SetCellMergedRows(2,nRow,3);
	xls.SetCellMergedRows(3,nRow,3);
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("Khoa"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("NG Nhà"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("NG NHà VIP A"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	CString szSQL;
	CString szWhere,szNamefill;

	if(!m_szDepartmentKey.IsEmpty())
		szWhere.Format(_T(" and hfos_deptid ='%s' "),m_szDepartmentKey);

	

	szSQL.Format(_T("SELECT distinct  hfl_feeid, hfl_name ") \
				_T("	FROM hms_foodordersheet ") \
				_T("		LEFT JOIN hms_feefood ") \
				_T("		ON (hfo_reforder_id= hfos_orderid) ") \
				_T("		LEFT JOIN hms_feefoodline ") \
				_T("		ON (hfol_orderid= hfo_orderid) ") \
				_T("		LEFT JOIN hms_fee_list ") \
				_T("		ON (hfl_feeid= hfol_itemid) ") \
				_T("		WHERE hfo_orderdate BETWEEN TO_TIMESTAMP('%s 00:00:00', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T("			AND TO_TIMESTAMP('%s 23:59:59', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T("		AND hfos_depttype='HC' %s ") \
				_T("		AND hfo_ordertype = 'D' AND hfo_orderstatus='A' AND NVL(HFOS_DEPTTYPE_NN,'N')<>'HCNN' ") \
				_T("		AND hfl_typeid    = 'F' ") \
				_T("		AND hfl_groupid   = 'FF000' ") \
				_T("		AND hfl_deptid    ='HCKT' ") \
				_T("		AND hfl_subgroup <>'NN' ORDER BY hfl_feeid "),m_szFromDate,m_szToDate, m_szDepartmentKey);
	rs1.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if(rs1.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_OK | MB_ICONERROR);
		return;
	}
	nCol=4;
	CString szCase,szSum,szTmp;
	CStringArray arrCol;
	CStringArray arrNameID;
	CStringArray arrType;
	arrType.Add(_T("S"));
	arrType.Add(_T("T"));
	arrType.Add(_T("C"));
	for(int i =0; i < arrType.GetCount();i++)
	{
		rs1.MoveFirst();

			while(!rs1.IsEOF())
			{	
				if(!szSum.IsEmpty())
					szSum.AppendFormat(_T(","));
				szSum.AppendFormat(_T("sum(%s%s) as %s%s"),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")));
	

				if(!szCase.IsEmpty())
					szCase.AppendFormat(_T(","));
				szCase.AppendFormat(_T("case when hfl_subgroup <> 'NN' and hfol_type='%s' and  hfol_itemid='%s' then hfol_qtyissue else 0 end as %s%s"),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")),arrType.GetAt(i),rs1.GetValue(_T("hfl_feeid")));
				rs1.GetValue(_T("hfl_feeid"),szTmp);
				tmpStr.Format(_T("%s%s"),arrType.GetAt(i),szTmp);
				arrNameID.Add(tmpStr);
				arrCol.Add(rs1.GetValue(_T("hfl_name")));
				rs1.MoveNext();
			}
			arrCol.Add(_T("T?ng"));
			tmpStr.Format(_T("Sum%s"),arrType.GetAt(i));
			arrNameID.Add(tmpStr);
	}
	xls.SetCellMergedColumns(4,nRow,arrCol.GetCount());
	xls.SetCellText(4, nRow, _T("B?NH NHÂN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4, nRow +1, _T("SÁNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4 + rs1.GetRecordCount()+1,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4 + rs1.GetRecordCount()+1 , nRow +1, _T("TRUA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	xls.SetCellMergedColumns(4 + rs1.GetRecordCount() + rs1.GetRecordCount() +2 ,nRow+1,rs1.GetRecordCount()+1);
	xls.SetCellText(4 + rs1.GetRecordCount()+1 + rs1.GetRecordCount()+1, nRow +1, _T("T?I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	nRow +=2;
	nCol= 4;
	for (int i = 0; i < arrCol.GetCount(); i++)
	{
		xls.SetCellText(nCol++, nRow, arrCol.GetAt(i), FMT_TEXT | FMT_CENTER, true, 10); 
	}
	xls.SetCellText(nCol ++, nRow, _T("C?ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(nCol ++, nRow, _T("Ký nh?n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	rs1.MoveFirst();

		
	
	// AND hfo_orderstatus = 'A'
	
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{	
		_msg(_T("no data"));
		return ;
	}
	int nIndex=1;
	nCol=0;
	nRow++;

	double nCost=0;
	double nLine=0;
	double nGTotal[100];
	for(int i=0; i< 100; i++)
	{
		nGTotal[i]=0;
	}
	CString szQty;
	int nTmp=0;
	while(!rs.IsEOF())
	{	
		nCol=0;
		nLine=0;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("sd_id"),tmpStr);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
		nTmp=0;
		rs.GetValue(_T("nnKhac"),nCost);
		nGTotal[0] += nCost;
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("nnVIPA"),nCost);
		nGTotal[1] += nCost;
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nTmp=2;
		
		for(int i=0; i < arrNameID.GetCount(); i ++)
		{	
			
			tmpStr.Format(_T("%s"),arrNameID.GetAt(i));
			rs.GetValue(tmpStr,nCost);
			nGTotal[nTmp] += nCost;
			xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
			nTmp++;
		}
		xls.SetCellText(nCol ++, nRow,double2str(nLine) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nGTotal[nTmp] += nLine;
		nRow++;
		
		rs.MoveNext();
	}
	
	xls.SetCellText(0 , nRow,_T("T?NG") , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
	nCol=2;
	for(int i=0; i < 100;i++)
	{
		xls.SetCellText(nCol++ , nRow,double2str(nGTotal[i]) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, true);
	}

	
	EndWaitCursor();
	xls.Save(_T("Exports\\Tong hop quan so an HCKT.xls"));

	
} 
int CHFFoodHCKTReport::OnAddHFFoodHCKTReport(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHFFoodHCKTReport::OnEditHFFoodHCKTReport(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHFFoodHCKTReport::OnDeleteHFFoodHCKTReport(){
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
 		OnCancelHFFoodHCKTReport();
 	}
	return 0;
}
int CHFFoodHCKTReport::OnSaveHFFoodHCKTReport(){
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
 		//OnHFFoodHCKTReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHFFoodHCKTReport::OnCancelHFFoodHCKTReport(){
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
int CHFFoodHCKTReport::OnHFFoodHCKTReportListLoadData(){
	return 0;
}
