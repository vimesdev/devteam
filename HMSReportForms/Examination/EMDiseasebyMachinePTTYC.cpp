#include "stdafx.h"
#include "EMDiseasebyMachinePTTYC.h"
#include "MainFrame_E10.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CEMDiseasebyMachinePTTYC *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CEMDiseasebyMachinePTTYC* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CEMDiseasebyMachinePTTYC *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDiseasebyMachinePTTYC *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CEMDiseasebyMachinePTTYC *)pWnd)->OnToDateCheckValue();
}
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CEMDiseasebyMachinePTTYC*)pWnd)->OnRoomLoadData();
} 
static void _OnRoomDblClickFnc(CWnd *pWnd){
	((CEMDiseasebyMachinePTTYC*)pWnd)->OnRoomDblClick();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMDiseasebyMachinePTTYC*)pWnd)->OnRoomSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomDeleteItemFnc(CWnd *pWnd){
	return ((CEMDiseasebyMachinePTTYC*)pWnd)->OnRoomDeleteItem();
} 
static void _OnTheoBNSelectFnc(CWnd *pWnd){
	CEMDiseasebyMachinePTTYC *pVw = (CEMDiseasebyMachinePTTYC *)pWnd;
	pVw->OnTheoBNSelect();
} 
static void _OnTheoVPSelectFnc(CWnd *pWnd){
	CEMDiseasebyMachinePTTYC *pVw = (CEMDiseasebyMachinePTTYC *)pWnd;
	pVw->OnTheoVPSelect();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CEMDiseasebyMachinePTTYC *pVw = (CEMDiseasebyMachinePTTYC *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CEMDiseasebyMachinePTTYC *pVw = (CEMDiseasebyMachinePTTYC *)pWnd;
	pVw->OnExportSelect();
} 
CEMDiseasebyMachinePTTYC::CEMDiseasebyMachinePTTYC(CWnd *pParent){

	m_nDlgWidth = 500;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CEMDiseasebyMachinePTTYC::~CEMDiseasebyMachinePTTYC(){
}
void CEMDiseasebyMachinePTTYC::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 490, 395);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 245, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 250, 30, 330, 55);
	m_wndReportPeriod.Create(this,335, 30, 485, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 245, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 60, 330, 85);
	m_wndToDate.Create(this,335, 60, 485, 85);
	m_wndRoom.Create(this,10, 90, 485, 390); 
	m_wndRoom.SetCheckBox(TRUE);
	m_wndTheoBN.Create(this, _T("Chi tiết theo BN"), 10, 400, 150, 425);
	m_wndTheoVP.Create(this, _T("Chi tiết theo VP"), 155, 400, 295, 425);
	//m_wndPrintPreview.Create(this, _T("Print Pre&view"), 300, 400, 410, 425);
	m_wndExport.Create(this, _T("&Export"), 415, 400, 490, 425);

}
void CEMDiseasebyMachinePTTYC::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

	m_wndReportPeriod.InsertColumn(0, _T("ID"), FMT_INTEGER, 30);
	m_wndReportPeriod.InsertColumn(1, _T("Name"), FMT_TEXT, 80);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 100);
	m_wndRoom.InsertColumn(1, _T("Room"), CFMT_TEXT, 250);

}
void CEMDiseasebyMachinePTTYC::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	m_wndRoom.SetEvent(WE_DBLCLICK, _OnRoomDblClickFnc);
	m_wndRoom.AddEvent(1, _T("Delete"), _OnRoomDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndTheoBN.SetEvent(WE_CLICK, _OnTheoBNSelectFnc);
	m_wndTheoVP.SetEvent(WE_CLICK, _OnTheoVPSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	CDate dte;
	dte.ParseDate(pMF->GetSysDate());
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	m_nYear = dte.GetYear();
	m_szReportPeriodKey.Format(_T("%d"), dte.GetMonth());
	UpdateData(false);
	OnRoomLoadData();

}
void CEMDiseasebyMachinePTTYC::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndTheoBN.GetDlgCtrlID(), m_bTheoBN);
	DDX_Check(pDX, m_wndTheoVP.GetDlgCtrlID(), m_bTheoVP);

}
void CEMDiseasebyMachinePTTYC::SetDefaultValues(){

	m_nYear = 0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bTheoBN = FALSE;
	m_bTheoVP = FALSE;

}
int CEMDiseasebyMachinePTTYC::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CEMDiseasebyMachinePTTYC::OnYearChange(){
	
} */
/*void CEMDiseasebyMachinePTTYC::OnYearSetfocus(){
	
} */
/*void CEMDiseasebyMachinePTTYC::OnYearKillfocus(){
	
} */
int CEMDiseasebyMachinePTTYC::OnYearCheckValue(){
	return 0;
} 
void CEMDiseasebyMachinePTTYC::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} 
void CEMDiseasebyMachinePTTYC::OnReportPeriodSelendok(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	pMF->OnReportPeriodSelendok(&m_szFromDate, &m_szToDate, m_szReportPeriodKey);
	UpdateData(false);	 
}
/*void CEMDiseasebyMachinePTTYC::OnReportPeriodSetfocus(){
	
}*/
/*void CEMDiseasebyMachinePTTYC::OnReportPeriodKillfocus(){
	
}*/
long CEMDiseasebyMachinePTTYC::OnReportPeriodLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadReportPeriodList(&m_wndReportPeriod, m_szReportPeriodKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CEMDiseasebyMachinePTTYC::OnReportPeriodAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CEMDiseasebyMachinePTTYC::OnFromDateChange(){
	
} */
/*void CEMDiseasebyMachinePTTYC::OnFromDateSetfocus(){
	
} */
/*void CEMDiseasebyMachinePTTYC::OnFromDateKillfocus(){
	
} */
int CEMDiseasebyMachinePTTYC::OnFromDateCheckValue(){
	return 0;
} 
/*void CEMDiseasebyMachinePTTYC::OnToDateChange(){
	
} */
/*void CEMDiseasebyMachinePTTYC::OnToDateSetfocus(){
	
} */
/*void CEMDiseasebyMachinePTTYC::OnToDateKillfocus(){
	
} */
int CEMDiseasebyMachinePTTYC::OnToDateCheckValue(){
	return 0;
} 
void CEMDiseasebyMachinePTTYC::OnRoomDblClick(){
	
} 
void CEMDiseasebyMachinePTTYC::OnRoomSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CEMDiseasebyMachinePTTYC::OnRoomDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CEMDiseasebyMachinePTTYC::OnRoomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoom.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id AS id, hrl_name AS name FROM hms_roomlist WHERE hrl_deptid = 'TYC' ORDER BY hrl_id"));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndRoom.EndLoad(); 
	return nCount;

}
void CEMDiseasebyMachinePTTYC::OnTheoBNSelect(){
	UpdateData(TRUE);
	if(m_bTheoBN)
		m_bTheoVP = FALSE;
	UpdateData(FALSE);
}
void CEMDiseasebyMachinePTTYC::OnTheoVPSelect(){
	UpdateData(TRUE);
	if(m_bTheoVP)
		m_bTheoBN = FALSE;
	UpdateData(FALSE);
}
void CEMDiseasebyMachinePTTYC::OnPrintPreviewSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CReportSection* rptDetail;
	if (!rpt.Init(_T("Reports\\HMS\\c15.RPT")))
		return;
	CString szSQL, szWhere;
	CString tmpStr, szPos, szRooms;
	int nTemp = 0, nTmp = 0, j = 0, nExam_Count = 0;
	double nAmt = 0, nTotal = 0, nTotalExamCost = 0;
	CStringArray arrMac;
	CRecord rs(&pMF->m_db);

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 0));
		}
	}
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND he_roomid IN(%s)"), szRooms);
	else
		szWhere.AppendFormat(_T("AND he_roomid IN(33,34,35)"));

	//BN kham
	szSQL.Format(_T(" SELECT COUNT(DISTINCT hd_docno) AS examqty,") \
		_T(" SUM(hfe_quantity*hfe_unitprice) AS price") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON (hd_docno   =he_docno)") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON (hfe_docno = he_docno)") \
		_T(" WHERE he_deptid IN('TYC') ") \
		_T(" AND he_status IN ('T', 'P')") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfe_group = 'D0000' %s"), m_szFromDate, m_szToDate, szWhere);

	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() == 0)
		return;
	arrMac.Add(_T("CO2"));
	arrMac.Add(_T("F1"));
	arrMac.Add(_T("HE"));
	arrMac.Add(_T("Q1"));
	arrMac.Add(_T("YAG1"));
	arrMac.Add(_T("YAGXD"));

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_szHospitalName);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	rptDetail = rpt.AddDetail();
	rs.GetValue(_T("examqty"), nExam_Count);
	rs.GetValue(_T("price"), nTotalExamCost);
	rptDetail->SetValue(_T("1"), int2str(nExam_Count));
	//BN dieu tri
	szSQL.Format(_T(" SELECT") \
		_T("   Count(distinct ho_docno) as treatqty") \
		_T(" FROM   hms_operation") \
		_T(" WHERE  ho_pdeptid='PTTYC'") \
		_T("		AND ho_status <> 'O'") \
		_T("		AND ho_payment = 'P'") \
		_T("		AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("        AND ho_recordno IS NOT NULL"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		rptDetail->SetValue(_T("2"), rs.GetValue(_T("treatqty")));
	//BN dieu tri chi tiet
	szSQL.Format(_T(" SELECT") \
		_T("   ho_recordno as recordno,") \
		_T("   Count(DISTINCT ho_docno) as cnt") \
		_T(" FROM   hms_operation") \
		_T(" WHERE  ho_pdeptid='PTTYC'") \
		_T("        AND ho_recordno IS NOT NULL") \
		_T("		AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("        AND ho_status <> 'O'") \
		_T("		AND ho_payment = 'P'") \
		_T(" GROUP  BY ho_recordno") \
		_T(" ORDER BY ho_recordno"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		j = 0;
		for (int i = 0 ; i < arrMac.GetCount(); i++)
		{
			if (arrMac.GetAt(i) == _T("HE"))
				j = i - 1;
			rs.GetValue(_T("recordno"), tmpStr);
			if (tmpStr == arrMac.GetAt(i))
			{
				rs.GetValue(_T("cnt"), nTemp);
				if (tmpStr != _T("HE"))
					rptDetail->SetValue(int2str(j+3), rs.GetValue(_T("cnt")));
				rptDetail->SetValue(int2str(i+8), rs.GetValue(_T("cnt")));
				if (tmpStr == _T("CO2") || tmpStr == _T("HE"))
					nTmp += nTemp;
				break;
			}
			j++;
		}
		rs.MoveNext();
	}
	rptDetail->SetValue(_T("3"), nTmp);
	//So tien
	szSQL.Format(_T(" SELECT") \
		_T("   ho_recordno as recordno,") \
		_T("   Sum(hfe_cost) as cost") \
		_T(" FROM   hms_operation") \
		_T("        LEFT JOIN hms_fee ON (hfe_docno=ho_docno") \
		_T("                              AND ho_itemid=hfe_itemid AND hfe_orderid = ho_idx)") \
		_T(" WHERE  ho_pdeptid='PTTYC'") \
		_T("        AND ho_recordno IS NOT NULL") \
		_T("        AND ho_payment='P'") \
		_T("		AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP  BY ho_recordno") \
		_T(" ORDER BY ho_recordno"), m_szFromDate, m_szToDate);

	j = 0;
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		for (int i = 0 ; i < arrMac.GetCount(); i++)
		{
			rs.GetValue(_T("recordno"), tmpStr);
			if (tmpStr == arrMac.GetAt(i))
			{
				rs.GetValue(_T("cost"), nAmt);
				rptDetail->SetValue(int2str(i+14), double2str(nAmt));
				nTotal += nAmt;
				break;
			}
		}
		rs.MoveNext();
	}	
	rptDetail->SetValue(_T("20"), double2str(nTotalExamCost));
	nTotal += nTotalExamCost;
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), double2str(nTotal));
	rpt.PrintPreview();
} 
void CEMDiseasebyMachinePTTYC::OnExportSelect(){
	if(m_bTheoBN)
		{
			OnExport();
			return;
		}
	if(m_bTheoVP)
		{
			OnExport2();
			return;
		}

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere, szRooms;
	CStringArray arrMac;
	double nAmt = 0, nTotal = 0, nTotalExamCost = 0;
	int nCol = 0, nRow = 0, j = 0, nTemp = 0, nTmp = 0;
	CellFormat cf(&xls);
	cf.SetBold(true);
	cf.SetCellStyle(FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING);
	//xls.SetColumnWidth(0, 1);

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 0));
		}
	}
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND he_roomid IN(%s)"), szRooms);
	else
		szWhere.AppendFormat(_T("AND he_roomid IN(33,34,35)"));

	//BN kham
	szSQL.Format(_T(" SELECT COUNT(DISTINCT hd_docno) AS examqty,") \
		_T(" SUM(hfe_quantity*hfe_unitprice) AS price") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_exam") \
		_T(" ON (hd_docno   =he_docno)") \
		_T(" LEFT JOIN hms_fee") \
		_T(" ON (hfe_docno = he_docno)") \
		_T(" WHERE he_deptid IN('TYC') ") \
		_T(" AND he_status IN ('T', 'P')") \
		_T(" AND he_examdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" AND hfe_group = 'D0000' %s"), m_szFromDate, m_szToDate, szWhere);

	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() == 0)
		return;
	arrMac.Add(_T("CO2"));
	arrMac.Add(_T("F1"));
	arrMac.Add(_T("Q1"));
	arrMac.Add(_T("YAG1"));
	arrMac.Add(_T("YAGXD"));
	arrMac.Add(_T("MT"));
	arrMac.Add(_T("VBEAM"));
	arrMac.Add(_T("ULTRA"));
	arrMac.Add(_T("ULTRAS"));
	arrMac.Add(_T("PCL"));
	arrMac.Add(_T("ENDY"));
	arrMac.Add(_T("MD"));
	arrMac.Add(_T("TIEM"));
	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 3, 15);
	xls.SetCellMergedColumns(nCol, nRow + 4, 15);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 2, pMF->GetDepartmentName(pMF->GetCurrentUser()), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO MẶT BỆNH THEO MÁY"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
	//Column
	xls.SetCellMergedRows(nCol, nRow + 5, 2);
	xls.SetCellMergedRows(nCol + 1, nRow + 5, 2);
	//xls.SetCellMergedRows(nCol + 39, nRow + 5, 2);
	xls.SetCellMergedColumns(nCol + 2, nRow + 5, 13);
	xls.SetCellMergedColumns(nCol + 15, nRow + 5, 13);
	xls.SetCellMergedColumns(nCol + 28, nRow + 5, 13);

	xls.SetCellText(nCol, nRow + 5, _T("BN Khám"), &cf);
	xls.SetCellText(nCol + 1, nRow + 5, _T("BN ÐT"), &cf);
	xls.SetCellText(nCol + 2, nRow + 5, _T("Các mặt bệnh"), &cf);
	xls.SetCellText(nCol + 2, nRow + 6, _T("U nhỏ"), &cf);
	xls.SetCellText(nCol + 3, nRow + 6, _T("Sẹo"), &cf);
	xls.SetCellText(nCol + 4, nRow + 6, _T("RLST Da"), &cf);
	xls.SetCellText(nCol + 5, nRow + 6, _T("U máu"), &cf);
	xls.SetCellText(nCol + 6, nRow + 6, _T("UM+TL"), &cf);
	xls.SetCellText(nCol + 7, nRow + 6, _T("Mổ tê"), &cf);
	xls.SetCellText(nCol + 8, nRow + 6, _T("VBEAM"), &cf);
	xls.SetCellText(nCol + 9, nRow + 6, _T("ULTRA"), &cf);
	xls.SetCellText(nCol + 10, nRow + 6, _T("ULTRAS"), &cf);
	xls.SetCellText(nCol + 11, nRow + 6, _T("PCL"), &cf);
	xls.SetCellText(nCol + 12, nRow + 6, _T("ENDY"), &cf);
	xls.SetCellText(nCol + 13, nRow + 6, _T("MD"), &cf);
	xls.SetCellText(nCol + 14, nRow + 6, _T("TIEM"), &cf);

	xls.SetCellText(nCol + 15, nRow + 5, _T("Bệnh nhân điều trị"), &cf);
	xls.SetCellText(nCol + 15, nRow + 6, _T("CO2"), &cf);
	xls.SetCellText(nCol + 16, nRow + 6, _T("F"), &cf);
	xls.SetCellText(nCol + 17, nRow + 6, _T("Q.S"), &cf);
	xls.SetCellText(nCol + 18, nRow + 6, _T("YA"), &cf);
	xls.SetCellText(nCol + 19, nRow + 6, _T("YAD"), &cf);
	xls.SetCellText(nCol + 20, nRow + 6, _T("MT"), &cf);
	xls.SetCellText(nCol + 21, nRow + 6, _T("VBEAM"), &cf);
	xls.SetCellText(nCol + 22, nRow + 6, _T("ULTRA"), &cf);
	xls.SetCellText(nCol + 23, nRow + 6, _T("ULTRAS"), &cf);
	xls.SetCellText(nCol + 24, nRow + 6, _T("PCL"), &cf);
	xls.SetCellText(nCol + 25, nRow + 6, _T("ENDY"), &cf);
	xls.SetCellText(nCol + 26, nRow + 6, _T("MD"), &cf);
	xls.SetCellText(nCol + 27, nRow + 6, _T("TIEM"), &cf);

	xls.SetCellText(nCol + 28, nRow + 5, _T("Số tiền"), &cf);
	xls.SetCellText(nCol + 28, nRow + 6, _T("CO2"), &cf);
	xls.SetCellText(nCol + 29, nRow + 6, _T("F"), &cf);
	xls.SetCellText(nCol + 30, nRow + 6, _T("Q.S"), &cf);
	xls.SetCellText(nCol + 31, nRow + 6, _T("YAG"), &cf);
	xls.SetCellText(nCol + 32, nRow + 6, _T("YAG-XD"), &cf);
	xls.SetCellText(nCol + 33, nRow + 6, _T("MT"), &cf);
	xls.SetCellText(nCol + 34, nRow + 6, _T("VBEAM"), &cf);
	xls.SetCellText(nCol + 35, nRow + 6, _T("ULTRA"), &cf);
	xls.SetCellText(nCol + 36, nRow + 6, _T("ULTRAS"), &cf);
	xls.SetCellText(nCol + 37, nRow + 6, _T("PCL"), &cf);
	xls.SetCellText(nCol + 38, nRow + 6, _T("ENDY"), &cf);
	xls.SetCellText(nCol + 39, nRow + 6, _T("MD"), &cf);
	xls.SetCellText(nCol + 40, nRow + 6, _T("TIEM"), &cf);
	xls.SetCellText(nCol + 41, nRow + 6, _T("Tiền khám"), &cf);
	xls.SetCellText(nCol + 42, nRow + 5, _T("Tổng"), &cf);
	nRow = 7;
	xls.SetCellText(nCol, nRow, rs.GetValue(_T("examqty")), FMT_NUMBER1);
	rs.GetValue(_T("price"), nTotalExamCost);
	//BN dieu tri
	szSQL.Format(_T(" SELECT") \
		_T("   Count(distinct ho_docno) as treatqty") \
		_T(" FROM   hms_operation") \
		_T(" WHERE  ho_pdeptid='PTTYC'") \
		_T("		AND ho_status <> 'O'") \
		_T("		AND ho_payment = 'P'") \
		_T("		AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("        AND ho_recordno IS NOT NULL"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
		xls.SetCellText(nCol + 1, nRow, rs.GetValue(_T("treatqty")), FMT_NUMBER1);
	//BN dieu tri chi tiet
	szSQL.Format(_T(" SELECT") \
		_T("   ho_recordno as recordno,") \
		_T("   Count(DISTINCT ho_docno) as cnt") \
		_T(" FROM   hms_operation") \
		_T(" WHERE  ho_pdeptid='PTTYC'") \
		_T("        AND ho_recordno IS NOT NULL") \
		_T("		AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("        AND ho_status <> 'O'") \
		_T("		AND ho_payment = 'P'") \
		_T(" GROUP  BY ho_recordno") \
		_T(" ORDER BY ho_recordno"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		for (int i = 0 ; i < arrMac.GetCount(); i++)
		{
			rs.GetValue(_T("recordno"), tmpStr);
			if (tmpStr == arrMac.GetAt(i))
			{
				rs.GetValue(_T("cnt"), nTemp);
				xls.SetCellText(nCol + i + 2, nRow, rs.GetValue(_T("cnt")), FMT_NUMBER1);
				xls.SetCellText(nCol + i + 15, nRow, rs.GetValue(_T("cnt")), FMT_NUMBER1);
			}
		}
		rs.MoveNext();
	}

	//So tien
	szSQL.Format(_T(" SELECT") \
		_T("   ho_recordno as recordno,") \
		_T("   Sum(hfe_cost) as cost") \
		_T(" FROM   hms_operation") \
		_T("        LEFT JOIN hms_fee ON (hfe_docno=ho_docno") \
		_T("                              AND ho_itemid=hfe_itemid AND hfe_orderid = ho_idx)") \
		_T(" WHERE  ho_pdeptid='PTTYC'") \
		_T("        AND ho_recordno IS NOT NULL") \
		_T("        AND ho_payment='P'") \
		_T("		AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T(" GROUP  BY ho_recordno") \
		_T(" ORDER BY ho_recordno"), m_szFromDate, m_szToDate);

	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		for (int i = 0 ; i < arrMac.GetCount(); i++)
		{
			rs.GetValue(_T("recordno"), tmpStr);
			if (tmpStr == arrMac.GetAt(i))
			{
				rs.GetValue(_T("cost"), nAmt);
				xls.SetCellText(nCol + i + 28, nRow, double2str(nAmt), FMT_NUMBER1);
				nTotal += nAmt;
				break;
			}
			xls.SetCellText(41, nRow, double2str(nTotalExamCost), FMT_NUMBER1);
		}
		rs.MoveNext();
	}	
	nTotal += nTotalExamCost;
	xls.SetCellText(nCol + 42, nRow, double2str(nTotal), FMT_NUMBER1);
	xls.Save(_T("Exports\\Bao cao mat benh theo may.xls"));
} 
void CEMDiseasebyMachinePTTYC::OnExport(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere, szRooms;
	CStringArray arrMac;
	double nAmt = 0, nTemp = 0;
	int nCol = 0, nRow = 0, j = 0, nTmp = 0;
	double nTotal[17];
	for(int i = 0; i < 17; i++)
		{
			nTotal[i] = 0;
		}
	CellFormat cf(&xls);
	cf.SetBold(true);
	cf.SetCellStyle(FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 10);
	xls.SetColumnWidth(18, 10);
	xls.SetColumnWidth(19, 10);
	xls.SetColumnWidth(20, 10);
	xls.SetColumnWidth(21, 10);
	xls.SetColumnWidth(22, 10);
	xls.SetColumnWidth(23, 10);
	xls.SetColumnWidth(24, 10);
	xls.SetColumnWidth(25, 10);
	xls.SetColumnWidth(26, 10);
	xls.SetColumnWidth(27, 10);
	xls.SetColumnWidth(28, 10);
	xls.SetColumnWidth(29, 10);

	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 3, 28);
	xls.SetCellMergedColumns(nCol, nRow + 4, 28);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 2, pMF->GetDepartmentName(pMF->GetCurrentUser()), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO MẶT BỆNH THEO MÁY"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
	//Column
	xls.SetCellMergedRows(nCol, nRow + 5, 2);
	xls.SetCellMergedRows(nCol + 1, nRow + 5, 2);
	xls.SetCellMergedColumns(nCol + 2, nRow + 5, 14);
	xls.SetCellMergedColumns(nCol + 16, nRow + 5, 14);

	xls.SetCellText(nCol, nRow + 5, _T("Số hồ sơ"), &cf);
	xls.SetCellText(nCol + 1, nRow + 5, _T("Họ và tên"), &cf);
	xls.SetCellText(nCol + 2, nRow + 5, _T("Các mặt bệnh"), &cf);
	xls.SetCellText(nCol + 2, nRow + 6, _T("U nhỏ"), &cf);
	xls.SetCellText(nCol + 3, nRow + 6, _T("Sẹo"), &cf);
	xls.SetCellText(nCol + 4, nRow + 6, _T("RLST Da"), &cf);
	xls.SetCellText(nCol + 5, nRow + 6, _T("U máu"), &cf);
	xls.SetCellText(nCol + 6, nRow + 6, _T("UM+TL"), &cf);
	xls.SetCellText(nCol + 7, nRow + 6, _T("Mổ tê"), &cf);
	xls.SetCellText(nCol + 8, nRow + 6, _T("VBEAM"), &cf);
	xls.SetCellText(nCol + 9, nRow + 6, _T("ULTRA"), &cf);
	xls.SetCellText(nCol + 10, nRow + 6, _T("ULTRAS"), &cf);
	xls.SetCellText(nCol + 11, nRow + 6, _T("PCL"), &cf);
	xls.SetCellText(nCol + 12, nRow + 6, _T("ENDY"), &cf);
	xls.SetCellText(nCol + 13, nRow + 6, _T("MD"), &cf);
	xls.SetCellText(nCol + 14, nRow + 6, _T("INJT"), &cf);
	xls.SetCellText(nCol + 15, nRow + 6, _T("TIEM"), &cf);

	xls.SetCellText(nCol + 16, nRow + 5, _T("Bệnh nhân điều trị"), &cf);
	xls.SetCellText(nCol + 16, nRow + 6, _T("CO2"), &cf);
	xls.SetCellText(nCol + 17, nRow + 6, _T("F"), &cf);
	xls.SetCellText(nCol + 18, nRow + 6, _T("Q.S"), &cf);
	xls.SetCellText(nCol + 19, nRow + 6, _T("YA"), &cf);
	xls.SetCellText(nCol + 20, nRow + 6, _T("YAD"), &cf);
	xls.SetCellText(nCol + 21, nRow + 6, _T("MT"), &cf);
	xls.SetCellText(nCol + 22, nRow + 6, _T("VBEAM"), &cf);
	xls.SetCellText(nCol + 23, nRow + 6, _T("ULTRA"), &cf);
	xls.SetCellText(nCol + 24, nRow + 6, _T("ULTRAS"), &cf);
	xls.SetCellText(nCol + 25, nRow + 6, _T("PCL"), &cf);
	xls.SetCellText(nCol + 26, nRow + 6, _T("ENDY"), &cf);
	xls.SetCellText(nCol + 27, nRow + 6, _T("MD"), &cf);
	xls.SetCellText(nCol + 28, nRow + 6, _T("INJT"), &cf);
	xls.SetCellText(nCol + 29, nRow + 6, _T("TIEM"), &cf);
	nRow = 7;

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 0));
		}
	}
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_roomid IN(%s)"), szRooms);
	else
		szWhere.AppendFormat(_T("AND ho_roomid IN(0,33,34,35)"));

	//BN dieu tri
	szSQL.Format(_T(" SELECT ho_docno,") \
		_T("   pname,") \
		_T("   SUM(CO2)    AS CO2,") \
		_T("   SUM(F)      AS F,") \
		_T("   SUM(QS)     AS QS,") \
		_T("   SUM(YA)     AS YA,") \
		_T("   SUM(YAD)    AS YAD,") \
		_T("   SUM(MT)     AS MT,") \
		_T("   SUM(VBEAM)  AS VBEAM,") \
		_T("   SUM(ULTRA)  AS ULTRA,") \
		_T("   SUM(ULTRAS) AS ULTRAS,") \
		_T("   SUM(PCL)    AS PCL,") \
		_T("   SUM(ENDY)   AS ENDY,") \
		_T("   SUM(MD)     AS MD,") \
		_T("   SUM(INJT)   AS INJT,") \
		_T("   SUM(TIEM)   AS TIEM") \
		_T(" FROM") \
		_T("   ( SELECT DISTINCT ho_docno,") \
		_T("     get_patientname(ho_docno) AS pname,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'CO2'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS CO2,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'F1'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS F,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'Q1'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS QS,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'YAG1'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS YA,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'YAGXD'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS YAD,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'MT'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS MT,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'VBEAM'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS VBEAM,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'ULTRA'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ULTRA,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'ULTRAS'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ULTRAS,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'PCL'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS PCL,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'ENDY'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS ENDY,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'MD'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS MD,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'INJT'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS INJT,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'TIEM'") \
		_T("       THEN 1") \
		_T("       ELSE 0") \
		_T("     END AS TIEM") \
		_T("   FROM hms_operation") \
		_T("   WHERE ho_pdeptid ='PTTYC'") \
		_T("   AND ho_recordno IS NOT NULL") \
		_T("   AND ho_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   AND ho_status <> 'O'") \
		_T("   AND ho_payment = 'P'") \
		_T("   %s") \
		_T("   ) tbl") \
		_T(" GROUP BY ho_docno,") \
		_T("   pname") \
		_T(" ORDER BY ho_docno,") \
		_T("   pname"), m_szFromDate, m_szToDate, szWhere);
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
		{
			rs.GetValue(_T("ho_docno"), tmpStr);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("pname"), tmpStr);
			xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);

			rs.GetValue(_T("CO2"), nTmp);
			nTotal[0] += nTmp;
			xls.SetCellText(nCol + 2, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 16, nRow, double2str(nTmp), FMT_NUMBER1);

			rs.GetValue(_T("F"), nTmp);
			nTotal[1] += nTmp;
			xls.SetCellText(nCol + 3, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 17, nRow, double2str(nTmp), FMT_NUMBER1);

			rs.GetValue(_T("QS"), nTmp);
			nTotal[2] += nTmp;
			xls.SetCellText(nCol + 4, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 18, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("YA"), nTmp);
			nTotal[3] += nTmp;
			xls.SetCellText(nCol + 5, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 19, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("YAD"), nTmp);
			nTotal[4] += nTmp;
			xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 20, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("MT"), nTmp);
			nTotal[5] += nTmp;
			xls.SetCellText(nCol + 7, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 21, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("VBEAM"), nTmp);
			nTotal[6] += nTmp;
			xls.SetCellText(nCol + 8, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 22, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("ULTRA"), nTmp);
			nTotal[7] += nTmp;
			xls.SetCellText(nCol + 9, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 23, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("ULTRAS"), nTmp);
			nTotal[8] += nTmp;
			xls.SetCellText(nCol + 10, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 24, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("PCL"), nTmp);
			nTotal[9] += nTmp;
			xls.SetCellText(nCol + 11, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 25, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("ENDY"), nTmp);
			nTotal[10] += nTmp;
			xls.SetCellText(nCol + 12, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 26, nRow, double2str(nTmp), FMT_NUMBER1);
			rs.GetValue(_T("MD"), nTmp);
			nTotal[11] += nTmp;
			xls.SetCellText(nCol + 13, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 27, nRow, double2str(nTmp), FMT_NUMBER1);

			rs.GetValue(_T("INJT"), nTmp);
			nTotal[12] += nTmp;
			xls.SetCellText(nCol + 14, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 28, nRow, double2str(nTmp), FMT_NUMBER1);
			
			rs.GetValue(_T("TIEM"), nTmp);
			nTotal[13] += nTmp;
			xls.SetCellText(nCol + 15, nRow, double2str(nTmp), FMT_NUMBER1);
			xls.SetCellText(nCol + 29, nRow, double2str(nTmp), FMT_NUMBER1);


			nRow++;
			rs.MoveNext();
		}

		xls.SetCellText(nCol + 1, nRow, _T("Tổng cộng"), FMT_TEXT, true);

		for(int i = 0; i < 14; i++)
			{
				xls.SetCellText(nCol + 2 + i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
				xls.SetCellText(nCol + 16 + i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
			}

	xls.Save(_T("Exports\\Bao cao mat benh theo may theo BN.xls"));
} 
void CEMDiseasebyMachinePTTYC::OnExport2(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szWhere, szRooms;
	CStringArray arrMac;
	double nAmt = 0, nTemp = 0;
	int nCol = 0, nRow = 0, j = 0, nTmp = 0;
	double nTotal[16];
	for(int i = 0; i < 15; i++)
	{
		nTotal[i] = 0;
	}

	CellFormat cf(&xls);
	cf.SetBold(true);
	cf.SetCellStyle(FMT_TEXT | FMT_CENTER | FMT_VCENTER | FMT_WRAPING);
	xls.SetColumnWidth(0, 6);
	xls.SetColumnWidth(1, 25);
	xls.SetColumnWidth(2, 15);
	xls.SetColumnWidth(3, 15);
	xls.SetColumnWidth(4, 15);
	xls.SetColumnWidth(5, 15);
	xls.SetColumnWidth(6, 15);
	xls.SetColumnWidth(7, 15);
	xls.SetColumnWidth(8, 15);
	xls.SetColumnWidth(9, 15);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(11, 15);
	xls.SetColumnWidth(12, 15);
	xls.SetColumnWidth(13, 15);
	xls.SetColumnWidth(14, 15);
	xls.SetColumnWidth(15, 15);
	xls.SetColumnWidth(16, 15);

	xls.SetCellMergedColumns(nCol, nRow, 3);
	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 3, 17);
	xls.SetCellMergedColumns(nCol, nRow + 4, 17);
	xls.SetCellText(nCol, nRow, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 2, pMF->GetDepartmentName(pMF->GetCurrentUser()), FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 3, _T("BÁO CÁO MẶT BỆNH THEO MÁY"), FMT_TEXT | FMT_CENTER, true, 12);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, false, 10);
	//Column
	xls.SetCellMergedRows(nCol, nRow + 5, 2);
	xls.SetCellMergedRows(nCol + 1, nRow + 5, 2);
	xls.SetCellMergedRows(nCol + 16, nRow + 5, 2);
	xls.SetCellMergedColumns(nCol + 2, nRow + 5, 13);

	xls.SetCellText(nCol, nRow + 5, _T("Số hồ sơ"), &cf);
	xls.SetCellText(nCol + 1, nRow + 5, _T("Họ và tên"), &cf);
	xls.SetCellText(nCol + 2, nRow + 5, _T("Số tiền"), &cf);
	xls.SetCellText(nCol + 2, nRow + 6, _T("CO2"), &cf);
	xls.SetCellText(nCol + 3, nRow + 6, _T("F"), &cf);
	xls.SetCellText(nCol + 4, nRow + 6, _T("Q.S"), &cf);
	xls.SetCellText(nCol + 5, nRow + 6, _T("YAG"), &cf);
	xls.SetCellText(nCol + 6, nRow + 6, _T("YAG-XD"), &cf);
	xls.SetCellText(nCol + 7, nRow + 6, _T("MT"), &cf);
	xls.SetCellText(nCol + 8, nRow + 6, _T("VBEAM"), &cf);
	xls.SetCellText(nCol + 9, nRow + 6, _T("ULTRA"), &cf);
	xls.SetCellText(nCol + 10, nRow + 6, _T("ULTRAS"), &cf);
	xls.SetCellText(nCol + 11, nRow + 6, _T("PCL"), &cf);
	xls.SetCellText(nCol + 12, nRow + 6, _T("ENDY"), &cf);
	xls.SetCellText(nCol + 13, nRow + 6, _T("MD"), &cf);
	xls.SetCellText(nCol + 14, nRow + 6, _T("INJT"), &cf);
	xls.SetCellText(nCol + 15, nRow + 6, _T("TIEM"), &cf);
	xls.SetCellText(nCol + 16, nRow + 5, _T("Tổng"), &cf);
	nRow = 7;

	for (int i = 0; i < m_wndRoom.GetItemCount(); i++)
	{
		if (m_wndRoom.GetCheck(i))
		{
			m_wndRoom.SetCurSel(i);
			if (!szRooms.IsEmpty())
				szRooms += _T(",");
			szRooms.AppendFormat(_T("%s"), m_wndRoom.GetItemText(i, 0));
		}
	}
	if(!szRooms.IsEmpty())
		szWhere.AppendFormat(_T("AND ho_roomid IN(%s)"), szRooms);
	else
		szWhere.AppendFormat(_T("AND ho_roomid IN(0,33,34,35)"));

	//BN dieu tri
	szSQL.Format(_T(" SELECT ho_docno,") \
		_T("   pname,") \
		_T("   SUM(CO2)                                                                                                      AS CO2,") \
		_T("   SUM(F)                                                                                                        AS F,") \
		_T("   SUM(QS)                                                                                                       AS QS,") \
		_T("   SUM(YA)                                                                                                       AS YA,") \
		_T("   SUM(YAD)                                                                                                      AS YAD,") \
		_T("   SUM(MT)                                                                                                       AS MT,") \
		_T("   SUM(VBEAM)                                                                                                    AS VBEAM,") \
		_T("   SUM(ULTRA)                                                                                                    AS ULTRA,") \
		_T("   SUM(ULTRAS)                                                                                                   AS ULTRAS,") \
		_T("   SUM(PCL)                                                                                                      AS PCL,") \
		_T("   SUM(ENDY)                                                                                                     AS ENDY,") \
		_T("   SUM(MD)                                                                                                       AS MD,") \
		_T("   SUM(INJT)                                                                                                     AS INJT,") \
		_T("   SUM(TIEM)                                                                                                     AS TIEM,") \
		_T("   SUM(CO2)+SUM(F)+SUM(QS)+SUM(YA)+SUM(YAD)+SUM(MT)+SUM(VBEAM)+SUM(ULTRA)+SUM(ULTRAS)+SUM(PCL)+SUM(ENDY)+SUM(MD)+SUM(INJT)+SUM(TIEM) AS Total") \
		_T(" FROM") \
		_T("   ( SELECT DISTINCT ho_docno,") \
		_T("     get_patientname(ho_docno) AS pname,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'CO2'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS CO2,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'F1'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS F,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'Q1'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS QS,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'YAG1'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS YA,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'YAGXD'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS YAD,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'MT'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS MT,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'VBEAM'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS VBEAM,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'ULTRA'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS ULTRA,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'ULTRAS'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS ULTRAS,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'PCL'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS PCL,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'ENDY'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS ENDY,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'MD'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS MD,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'INJT'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS INJT,") \
		_T("     CASE") \
		_T("       WHEN ho_recordno = 'TIEM'") \
		_T("       THEN hfe_cost") \
		_T("       ELSE 0") \
		_T("     END AS TIEM") \
		_T("   FROM hms_operation") \
		_T("   LEFT JOIN hms_fee") \
		_T("   ON (hfe_docno    =ho_docno") \
		_T("   AND ho_itemid    =hfe_itemid") \
		_T("   AND hfe_orderid  = ho_idx)") \
		_T("   WHERE ho_pdeptid ='PTTYC'") \
		_T("   AND ho_recordno IS NOT NULL") \
		_T("   AND ho_payment   ='P'") \
		_T("   AND hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
		_T("   %s") \
		_T("   ) tbl") \
		_T(" GROUP BY ho_docno,") \
		_T("   pname") \
		_T(" ORDER BY ho_docno,") \
		_T("   pname"), m_szFromDate, m_szToDate, szWhere);
		_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("ho_docno"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		rs.GetValue(_T("CO2"), nTmp);
		nTotal[0] += nTmp;
		xls.SetCellText(nCol + 2, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("F"), nTmp);
		nTotal[1] += nTmp;
		xls.SetCellText(nCol + 3, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("QS"), nTmp);
		nTotal[2] += nTmp;
		xls.SetCellText(nCol + 4, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("YA"), nTmp);
		nTotal[3] += nTmp;
		xls.SetCellText(nCol + 5, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("YAD"), nTmp);
		nTotal[4] += nTmp;
		xls.SetCellText(nCol + 6, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("MT"), nTmp);
		nTotal[5] += nTmp;
		xls.SetCellText(nCol + 7, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("VBEAM"), nTmp);
		nTotal[6] += nTmp;
		xls.SetCellText(nCol + 8, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("ULTRA"), nTmp);
		nTotal[7] += nTmp;
		xls.SetCellText(nCol + 9, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("ULTRAS"), nTmp);
		nTotal[8] += nTmp;
		xls.SetCellText(nCol + 10, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("PCL"), nTmp);
		nTotal[9] += nTmp;
		xls.SetCellText(nCol + 11, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("ENDY"), nTmp);
		nTotal[10] += nTmp;
		xls.SetCellText(nCol + 12, nRow, double2str(nTmp), FMT_NUMBER1);
		rs.GetValue(_T("MD"), nTmp);
		nTotal[11] += nTmp;
		xls.SetCellText(nCol + 13, nRow, double2str(nTmp), FMT_NUMBER1);
		
		rs.GetValue(_T("INJT"), nTmp);
		nTotal[12] += nTmp;
		xls.SetCellText(nCol + 14, nRow, double2str(nTmp), FMT_NUMBER1);
		
		rs.GetValue(_T("TIEM"), nTmp);
		nTotal[13] += nTmp;
		xls.SetCellText(nCol + 15, nRow, double2str(nTmp), FMT_NUMBER1);

		rs.GetValue(_T("Total"), nTmp);
		nTotal[14] += nTmp;
		xls.SetCellText(nCol + 16, nRow, double2str(nTmp), FMT_NUMBER1);
		nRow++;
		rs.MoveNext();
	}

	xls.SetCellText(nCol + 1, nRow, _T("Tổng cộng"), FMT_TEXT, true);
	for(int i = 0; i < 15; i++)
	{
		xls.SetCellText(nCol + 2 + i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);
	}
	

	xls.Save(_T("Exports\\Bao cao mat benh theo may theo VP.xls"));
} 