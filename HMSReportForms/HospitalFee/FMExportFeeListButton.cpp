#include "stdafx.h"
#include "FMExportFeeListButton.h"
//#include "ParaclinicalInformation.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnSetupParameterSelectFnc(CWnd *pWnd){
	CFMExportFeeListButton *pVw = (CFMExportFeeListButton *)pWnd;
	pVw->OnSetupParameterSelect();
} 
static void _OnSetupParameter2SelectFnc(CWnd *pWnd){
	CFMExportFeeListButton *pVw = (CFMExportFeeListButton *)pWnd;
	pVw->OnSetupParameter2Select();
}
static int _OnAddFMExportFeeListButtonFnc(CWnd *pWnd){
	 return ((CFMExportFeeListButton*)pWnd)->OnAddFMExportFeeListButton();
} 
static int _OnEditFMExportFeeListButtonFnc(CWnd *pWnd){
	 return ((CFMExportFeeListButton*)pWnd)->OnEditFMExportFeeListButton();
} 
static int _OnDeleteFMExportFeeListButtonFnc(CWnd *pWnd){
	 return ((CFMExportFeeListButton*)pWnd)->OnDeleteFMExportFeeListButton();
} 
static int _OnSaveFMExportFeeListButtonFnc(CWnd *pWnd){
	 return ((CFMExportFeeListButton*)pWnd)->OnSaveFMExportFeeListButton();
} 
static int _OnCancelFMExportFeeListButtonFnc(CWnd *pWnd){
	 return ((CFMExportFeeListButton*)pWnd)->OnCancelFMExportFeeListButton();
}

CFMExportFeeListButton::CFMExportFeeListButton(CWnd *pParent){

	m_nDlgWidth = 580;
	m_nDlgHeight = 380;
	SetDefaultValues();
}
CFMExportFeeListButton::~CFMExportFeeListButton()
{
}
void CFMExportFeeListButton::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 4, 5, 574, 375);
	m_wndSetupParameter.Create(this, _T("Danh mục phí toàn bệnh viện không có khoa thực hiện"), 102, 100, 482, 199);
	m_wndSetupParameter2.Create(this, _T("Danh mục phí theo yêu cầu không có nơi thực hiện"), 102, 247, 482, 346);

}
void CFMExportFeeListButton::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
}
void CFMExportFeeListButton::OnSetWindowEvents(){
	m_wndSetupParameter.SetEvent(WE_CLICK, _OnSetupParameterSelectFnc);
	m_wndSetupParameter2.SetEvent(WE_CLICK, _OnSetupParameter2SelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFMExportFeeListButtonFnc, 0, 'A', VK_CONTROL);
	//AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFMExportFeeListButtonFnc, 0, 'E', VK_CONTROL);
	//AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFMExportFeeListButtonFnc, 0, 'D', VK_CONTROL);
	//AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFMExportFeeListButtonFnc, 0, 'S', VK_CONTROL);
	//AddEvent(0, _T("-"));
	//AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFMExportFeeListButtonFnc, 0, 'T', VK_CONTROL);
	SetWindowFont(&m_wndSetupParameter, GetFaceName(), GetFaceSize() + 30, TRUE);
	m_wndSetupParameter.SetForegroundWindow();
	SetWindowFont(&m_wndSetupParameter2, GetFaceName(), GetFaceSize() + 30, TRUE);
	m_wndSetupParameter2.SetForegroundWindow();

}
void CFMExportFeeListButton::OnDoDataExchange(CDataExchange* pDX){

}
void CFMExportFeeListButton::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CFMExportFeeListButton::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CFMExportFeeListButton::SetDefaultValues(){


}
int CFMExportFeeListButton::SetMode(int nMode){
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
void CFMExportFeeListButton::OnSetupParameterSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnExportSelect();
	//CParaclinicalInformation dlg(pMF);
	//dlg.DoModal();
} 

void CFMExportFeeListButton::OnSetupParameter2Select()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnExportSelect2();
	//CParaclinicalInformation dlg(pMF);
	//dlg.DoModal();
} 

int CFMExportFeeListButton::OnAddFMExportFeeListButton(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFMExportFeeListButton::OnEditFMExportFeeListButton(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMExportFeeListButton::OnDeleteFMExportFeeListButton(){
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
 		OnCancelFMExportFeeListButton(); 
 	}
	return 0;
}
int CFMExportFeeListButton::OnSaveFMExportFeeListButton(){
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
 		//OnFMExportFeeListButtonListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFMExportFeeListButton::OnCancelFMExportFeeListButton(){
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
int CFMExportFeeListButton::OnFMExportFeeListButtonListLoadData(){
	return 0;
}
void CFMExportFeeListButton::OnExportSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);	
	CString tmpStr, szSQL;
	CString szWhere, szInpatientCost;

	BeginWaitCursor();	
	szSQL.Format(_T(" SELECT hfg_name as hfl_groupid,hfl_feeid, hfl_idx, hfl_typeid, hfl_itype, hfl_name, hfl_name2, hfl_unit, hfl_deptid,") \
				_T("        hfl_servprice, hfl_reqprice, hfl_insprice, hfl_polprice, hfl_retprice,") \
				_T("        hfl_inspaid, hfl_polpaid, hfl_diffpaid, hfl_hitech, hfl_active, hfl_plasticsurgery, hfl_hitechmachine, ") \
				_T("		hfl_applydate, HFL_01072016PRICE, hcm_id_50 thong_tu_50, hcm_id_37 thong_tu_37, hcm_map_id ma_tuong_duong, hc_name ten_thong_tu_37") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid) ") \
				_T(" LEFT JOIN hms_circular_map ON (hcm_fee_id = hfl_feeid)") \
				_T(" LEFT JOIN hms_circular ON (hcm_id_37 = hc_item_id)") \
				_T(" WHERE hfl_servprice > 0 AND hfl_active='Y' AND Hfl_Deptid is null %s") \
				_T(" ORDER BY hfg_index, hfl_groupid, hfl_line"), szWhere);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 37);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 13);
	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 13);
	xls.SetColumnWidth(10, 13);
	xls.SetColumnWidth(11, 14);
	xls.SetColumnWidth(12, 14);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 10);
	xls.SetColumnWidth(19, 15);
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
	xls.SetCellText(23, nRow, _T("T\xEAn TT \x33\x37"), 4098, true);
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
		xls.SetCellText(23, nRow, rs.GetValue(_T("ten_thong_tu_37")), FMT_TEXT);
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Danhmucphibenhvien.xls"));
}
void CFMExportFeeListButton::OnExportSelect2()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);	
	CString tmpStr, szSQL;
	CString szWhere, szInpatientCost;

	BeginWaitCursor();	
	szSQL.Format(_T(" SELECT hfg_name as hfl_groupid,hfl_feeid, hfl_idx, hfl_typeid, hfl_itype, hfl_name, hfl_name2, hfl_unit, hfl_deptid,") \
				_T("        hfl_servprice, hfl_reqprice, hfl_insprice, hfl_polprice, hfl_retprice,") \
				_T("        hfl_inspaid, hfl_polpaid, hfl_diffpaid, hfl_hitech, hfl_active, hfl_plasticsurgery, hfl_hitechmachine, ") \
				_T("		hfl_applydate, HFL_01072016PRICE, hcm_id_50 thong_tu_50, hcm_id_37 thong_tu_37, hcm_map_id ma_tuong_duong, hc_name ten_thong_tu_37") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid) ") \
				_T(" LEFT JOIN hms_circular_map ON (hcm_fee_id = hfl_feeid)") \
				_T(" LEFT JOIN hms_circular ON (hcm_id_37 = hc_item_id)") \
				_T(" WHERE hfl_servprice > 0 AND hfl_active='Y' AND Hfl_Deptid='PTTYC' and hfl_performplace is NULL %s") \
				_T(" ORDER BY hfg_index, hfl_groupid, hfl_line"), szWhere);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 37);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 13);
	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 13);
	xls.SetColumnWidth(10, 13);
	xls.SetColumnWidth(11, 14);
	xls.SetColumnWidth(12, 14);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	xls.SetColumnWidth(18, 10);
	xls.SetColumnWidth(19, 15);
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
	xls.SetCellText(23, nRow, _T("T\xEAn TT \x33\x37"), 4098, true);
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
		xls.SetCellText(23, nRow, rs.GetValue(_T("ten_thong_tu_37")), FMT_TEXT);
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\Danhmucphibenhvien.xls"));
}
