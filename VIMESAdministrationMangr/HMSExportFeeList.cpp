#include "HMSExportFeeList.h"
#include "MainFrm.h"
#include "Excel.h"
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSExportFeeList *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSExportFeeList *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSExportFeeList *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExportFeeList *)pWnd)->OnApplyDateCheckValue();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSExportFeeList *pVw = (CHMSExportFeeList *)pWnd;
	pVw->OnExportSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	 ((CHMSExportFeeList*)pWnd)->OnAllSelect();
}
static void _OnInsuranceSelectFnc(CWnd *pWnd)
{
	 ((CHMSExportFeeList*)pWnd)->OnInsuranceSelect();
}


CHMSExportFeeList::CHMSExportFeeList(CWnd *pParent){

	m_nDlgWidth = 465;
	m_nDlgHeight = 208;
	SetDefaultValues();
}
CHMSExportFeeList::~CHMSExportFeeList(){
}
void CHMSExportFeeList::OnCreateComponents()
{
	
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 1, 343, 88);
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 8, 29, 133, 54);
	m_wndApplyDate.Create(this,134, 29, 234, 54); 
	m_wndExportXLS.Create(this, _T("ExportXLS"), 239, 29, 339, 54);
	m_wndAll.Create(this, _T("All"), 8, 58, 133, 83);
	m_wndInsurance.Create(this, _T("Insurance"), 239, 58, 339, 83);


}
void CHMSExportFeeList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);

}
void CHMSExportFeeList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	m_wndExportXLS.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndInsurance.SetEvent(WE_CLICK, _OnInsuranceSelectFnc);
	m_szApplyDate = AfxGetApp()->GetProfileString(_T("Formerly Data"), _T("Ins Apply Date"));
	UpdateData(FALSE);

}
void CHMSExportFeeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Check(pDX, m_wndAll.GetDlgCtrlID(), m_bAll);

}
void CHMSExportFeeList::SetDefaultValues(){

	m_szApplyDate.Empty();
	m_bAll=FALSE;

}
int CHMSExportFeeList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
/*void CHMSExportFeeList::OnApplyDateChange(){
	
} */
/*void CHMSExportFeeList::OnApplyDateSetfocus(){
	
} */
/*void CHMSExportFeeList::OnApplyDateKillfocus(){
	
} */

void CHMSExportFeeList::OnAllSelect()
	{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
    }
void CHMSExportFeeList::OnInsuranceSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
}
int CHMSExportFeeList::OnApplyDateCheckValue()
{
	return 0;
} 
void CHMSExportFeeList::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);	
	CString tmpStr, szSQL;
	CString szWhere, szInpatientCost;

	BeginWaitCursor();

	if (m_bAll)
	{
	szSQL.Format(_T(" SELECT hfg_name as hfl_groupid,hfl_feeid, hfl_idx, hfl_typeid, hfl_itype, hfl_name, hfl_name2, hfl_unit, hfl_deptid,HFL_CREATEDBY,HFL_UPDATEDBY,HFL_PERFORMPLACE,") \
				_T("        hfl_servprice, hfl_reqprice, hfl_insprice, hfl_polprice, hfl_retprice,") \
				_T("        hfl_inspaid, hfl_polpaid, hfl_diffpaid,hfl_salary, hfl_hitech, hfl_active, hfl_plasticsurgery, hfl_hitechmachine, ") \
				_T("		hfl_applydate, HFL_01072016PRICE, hcm_id_50 thong_tu_50, hcm_id_37 thong_tu_37, hcm_map_id ma_tuong_duong, hc_name ten_thong_tu_37, hfl_insmap, hfl_cicularmap") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid) ") \
				_T(" LEFT JOIN hms_circular_map ON (hcm_fee_id = hfl_feeid)") \
				_T(" LEFT JOIN hms_circular ON (hcm_id_37 = hc_item_id)") \
				_T(" WHERE hfl_servprice > 0 and HFG_ACTIVE ='Y' and hfl_active='Y'") \
				_T(" ORDER BY hfg_index, hfl_groupid, hfl_line"), szWhere);
	}
	else if (m_bInsurance)
	{
		szSQL.Format(_T(" SELECT hfg_name as hfl_groupid,hfl_feeid, hfl_idx, hfl_typeid, hfl_itype, hfl_name, hfl_name2, hfl_unit, hfl_deptid,") \
				_T("        hfl_servprice, hfl_reqprice, hfl_insprice, hfl_polprice, hfl_retprice,") \
				_T("        hfl_inspaid, hfl_polpaid, hfl_diffpaid,hfl_salary, hfl_hitech, hfl_active, hfl_plasticsurgery, hfl_hitechmachine, ") \
				_T("		hfl_applydate, HFL_01072016PRICE, hcm_id_50 thong_tu_50, hcm_id_37 thong_tu_37, hcm_map_id ma_tuong_duong,hfl_insmap as ma_bao_hiem,hfl_cicularmap as ma_bao_hiem2, hc_name ten_thong_tu_37, hfl_insmap, hfl_cicularmap") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid) ") \
				_T(" LEFT JOIN hms_circular_map ON (hcm_fee_id = hfl_feeid)") \
				_T(" LEFT JOIN hms_circular ON (hcm_id_37 = hc_item_id)") \
				_T(" WHERE hfl_servprice > 0 and hfl_insprice>0 and hfl_active='Y' and HFG_ACTIVE='Y'") \
				_T(" ORDER BY hfg_index, hfl_groupid, hfl_line"), szWhere);
	}
	else
	{
	szWhere.Format(_T(" AND hfl_applydate = to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), m_szApplyDate);
	szSQL.Format(_T(" SELECT hfg_name as hfl_groupid,hfl_feeid, hfl_idx, hfl_typeid, hfl_itype, hfl_name, hfl_name2, hfl_unit, hfl_deptid,") \
				_T("        hfl_servprice, hfl_reqprice, hfl_insprice, hfl_polprice, hfl_retprice,") \
				_T("        hfl_inspaid, hfl_polpaid, hfl_diffpaid,hfl_salary, hfl_hitech, hfl_active, hfl_plasticsurgery, hfl_hitechmachine, ") \
				_T("		hfl_applydate, HFL_01072016PRICE, hcm_id_50 thong_tu_50, hcm_id_37 thong_tu_37, hcm_map_id ma_tuong_duong, hc_name ten_thong_tu_37, hfl_insmap, hfl_cicularmap") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid) ") \
				_T(" LEFT JOIN hms_circular_map ON (hcm_fee_id = hfl_feeid)") \
				_T(" LEFT JOIN hms_circular ON (hcm_id_37 = hc_item_id)") \
				_T(" WHERE hfl_servprice > 0 and hfl_active='Y' %s") \
				_T(" ORDER BY hfg_index, hfl_groupid, hfl_line"), szWhere);
	}
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	//STT//
	xls.SetColumnWidth(0, 5);
	//Ma//
	xls.SetColumnWidth(1, 9);
	//Dien giai//
	xls.SetColumnWidth(2, 37);
	//Don vi//
	xls.SetColumnWidth(3, 6);
	//Khoa thuc hien//
	xls.SetColumnWidth(4, 12);
	//Gia dich vu//
	xls.SetColumnWidth(5, 12);
	//Gia BH//
	xls.SetColumnWidth(6, 13);
	//Gia chinh sach//
	xls.SetColumnWidth(7, 14);
	//Gia yeu cau//
	xls.SetColumnWidth(8, 12);
	//Tra khoa
	xls.SetColumnWidth(9, 13);
	//Quy BH tra
	xls.SetColumnWidth(10, 13);
	//Chinh sach tra//
	xls.SetColumnWidth(11, 14);
	//Tra chenh lech
	xls.SetColumnWidth(12, 14);
	//DVKT cao//
	xls.SetColumnWidth(13, 8);
	//Ten 2
	xls.SetColumnWidth(14, 8);
	//May gia tri cao
	xls.SetColumnWidth(15, 8);
	//PT tham my//
	xls.SetColumnWidth(16, 8);
	//Hoat dong//
	xls.SetColumnWidth(17, 8);
	//Ngay ap dung//
	xls.SetColumnWidth(18, 10);
	//Gia 0107//
	xls.SetColumnWidth(19, 15);
	//Ma TT50
	xls.SetColumnWidth(20, 15);
	//Ma TT 37//
	xls.SetColumnWidth(21, 15);
	//Ma tuong duong
	xls.SetColumnWidth(22, 15);
	//Ma bao hiem
	xls.SetColumnWidth(23, 15);
	//Ten thong tu 37
	xls.SetColumnWidth(24, 37);
	//Luong
	xls.SetColumnWidth(25, 10);
	//Nguoi tao
	xls.SetColumnWidth(26, 10);
	//Nguoi cap nhat
	xls.SetColumnWidth(27, 10);
	//Noi thuc hien
	xls.SetColumnWidth(28, 20);

	xls.SetColumnWidth(29, 37);
	xls.SetColumnWidth(30, 37);

	xls.SetColumnWidth(31, 15);
	xls.SetColumnWidth(32, 15);
	//xls.SetCellMergedColumns(0,3,12);
	xls.SetCellText(0, 3, _T("\x44\x41NH M\x1EE4\x43 PH\xCD \x42\x1EC6NH VI\x1EC6N"),FMT_TEXT,true,18,0);

	
	int nRow = 5;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("ID"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Desc"),tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Service Price"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Insurance Price"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Policy Price"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Request Price"), tmpStr);	
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Return Dept"), tmpStr);	
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Insurance Paid"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Policy Paid"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Diff Payment"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Hitech"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Name 2"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Hitech Machine"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Plastic Surgery"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Active"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Apply Date"), tmpStr);
	xls.SetCellText(18, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("0107 Price"), tmpStr);
	xls.SetCellText(19, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	xls.SetCellText(20, nRow, _T("M\xE3 TT \x35\x30"), 4098, true);
	xls.SetCellText(21, nRow, _T("M\xE3 TT \x33\x37"), 4098, true);
	xls.SetCellText(22, nRow, _T("M\xE3 t\x1B0\x1A1ng \x111\x1B0\x1A1ng"), 4098, true);
	xls.SetCellText(23, nRow, _T("Mã Bảo hiểm"), 4098, true);
	xls.SetCellText(24, nRow, _T("Mã bảo hiểm cũ /mã PX"), 4098, true);
	xls.SetCellText(25, nRow, _T("T\xEAn TT \x33\x37"), 4098, true);
	
	TranslateString(_T("Salary"), tmpStr);
	xls.SetCellText(26, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("HFL_CREATEDBY"), tmpStr);
	xls.SetCellText(27, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("HFL_UPDATEDBY"), tmpStr);
	xls.SetCellText(28, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("HFL_PERFORMPLACE"), tmpStr);
	xls.SetCellText(29, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Phân nhóm"), tmpStr);
	xls.SetCellText(30, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Mã BH 1"), tmpStr);
	xls.SetCellText(31, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Mã BH 2"), tmpStr);
	xls.SetCellText(32, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;

	
	double cost = 0;	
	
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("hfl_groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{			
			nRow++;
			xls.SetCellMergedColumns(0, nRow, 14);
			tmpStr.Format(_T("%s"),  szNewLine);			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,12,0);
			szOldLine = szNewLine;
			nIndex=1;
		}
		
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hfl_feeid"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_name"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_unit"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_deptid"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_servprice"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(5, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_insprice"), cost);		
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(6, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_polprice"), cost);		
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_reqprice"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_retprice"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(9, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_inspaid"), tmpStr);		
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_polpaid"), tmpStr);	
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_diffpaid"), tmpStr);			
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_hitech"), tmpStr);		
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_name2"), tmpStr);		
		xls.SetCellText(14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);		
		xls.SetCellText(15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);		
		xls.SetCellText(16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_active"), tmpStr);		
		xls.SetCellText(17, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_applydate"), tmpStr);
		xls.SetCellText(18, nRow, tmpStr, FMT_DATE);

		rs.GetValue(_T("HFL_01072016PRICE"), tmpStr);
		xls.SetCellText(19, nRow, tmpStr, FMT_NUMBER1);
		
		xls.SetCellText(20, nRow, rs.GetValue(_T("thong_tu_50")), FMT_TEXT);
		xls.SetCellText(21, nRow, rs.GetValue(_T("thong_tu_37")), FMT_TEXT);
		xls.SetCellText(22, nRow, rs.GetValue(_T("ma_tuong_duong")), FMT_TEXT);
		xls.SetCellText(23, nRow, rs.GetValue(_T("ma_bao_hiem")), FMT_TEXT);
		xls.SetCellText(24, nRow, rs.GetValue(_T("ma_bao_hiem2")), FMT_TEXT);
		xls.SetCellText(25, nRow, rs.GetValue(_T("ten_thong_tu_37")), FMT_TEXT);

		rs.GetValue(_T("hfl_salary"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(26, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("HFL_CREATEDBY"), tmpStr);		
		xls.SetCellText(27, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("HFL_UPDATEDBY"), tmpStr);		
		xls.SetCellText(28, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("HFL_PERFORMPLACE"), tmpStr);		
		xls.SetCellText(29, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_groupid"), tmpStr);		
		xls.SetCellText(30, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_insmap"), tmpStr);		
		xls.SetCellText(31, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_cicularmap"), tmpStr);		
		xls.SetCellText(32, nRow, tmpStr, FMT_TEXT);

		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Danhmucphibenhvien.xls"));
}