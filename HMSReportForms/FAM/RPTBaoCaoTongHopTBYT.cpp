#include "stdafx.h"
#include "RPTBaoCaoTongHopTBYT.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDateCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTBaoCaoTongHopTBYT* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTBaoCaoTongHopTBYT* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CRPTBaoCaoTongHopTBYT *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CRPTBaoCaoTongHopTBYT *)pWnd)->OnTypeAddNew();
}*/
static void _OnInventoriedSelectFnc(CWnd *pWnd){
	  ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnInventoriedSelect();
}
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnAllSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTBaoCaoTongHopTBYT *pVw = (CRPTBaoCaoTongHopTBYT *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTBaoCaoTongHopTBYT *pVw = (CRPTBaoCaoTongHopTBYT *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddRPTBaoCaoTongHopTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnAddRPTBaoCaoTongHopTBYT();
} 
static int _OnEditRPTBaoCaoTongHopTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnEditRPTBaoCaoTongHopTBYT();
} 
static int _OnDeleteRPTBaoCaoTongHopTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnDeleteRPTBaoCaoTongHopTBYT();
} 
static int _OnSaveRPTBaoCaoTongHopTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnSaveRPTBaoCaoTongHopTBYT();
} 
static int _OnCancelRPTBaoCaoTongHopTBYTFnc(CWnd *pWnd){
	 return ((CRPTBaoCaoTongHopTBYT*)pWnd)->OnCancelRPTBaoCaoTongHopTBYT();
} 
CRPTBaoCaoTongHopTBYT::CRPTBaoCaoTongHopTBYT(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTBaoCaoTongHopTBYT::~CRPTBaoCaoTongHopTBYT(){
}
void CRPTBaoCaoTongHopTBYT::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("\x42\xE1o \x63\xE1o t\x1ED5ng h\x1EE3p thi\x1EBFt \x62\x1ECB y t\x1EBF"), 5, 5, 490, 120);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 90, 55);
	m_wndDate.Create(this,95, 30, 195, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 200, 30, 280, 55);
	m_wndDepartment.Create(this,285, 30, 485, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 60, 90, 85);
	m_wndType.Create(this,95, 60, 485, 85); 
	m_wndInventoried.Create(this, _T("Inventoried"), 95, 90, 195, 115);
	m_wndAll.Create(this, _T("All"), 200, 90, 300, 115);
	m_wndPrint.Create(this, _T("&Print"), 240, 125, 320, 150);
	m_wndExport.Create(this, _T("&Export"), 325, 125, 405, 150);

}
void CRPTBaoCaoTongHopTBYT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	CString szLabel;
	TranslateString(_T("\x42\xE1o \x63\xE1o t\x1ED5ng h\x1EE3p thi\x1EBFt \x62\x1ECB y t\x1EBF"), szLabel);
	SetWindowText(szLabel);



}
void CRPTBaoCaoTongHopTBYT::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndInventoried.SetEvent(WE_CLICK, _OnInventoriedSelectFnc);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	SetMode(VM_EDIT);

}
void CRPTBaoCaoTongHopTBYT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Radio(pDX, m_wndInventoried.GetDlgCtrlID(), m_nInventoried);
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nAll);

}
void CRPTBaoCaoTongHopTBYT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTBaoCaoTongHopTBYT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTBaoCaoTongHopTBYT::SetDefaultValues(){

	m_szDate.Empty();
	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_nInventoried=1;
	m_nAll=0;

}
int CRPTBaoCaoTongHopTBYT::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
			m_szDate = pMF->GetSysDate();
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
/*void CRPTBaoCaoTongHopTBYT::OnDateChange(){
	
} */
/*void CRPTBaoCaoTongHopTBYT::OnDateSetfocus(){
	
} */
/*void CRPTBaoCaoTongHopTBYT::OnDateKillfocus(){
	
} */
int CRPTBaoCaoTongHopTBYT::OnDateCheckValue(){
	return 0;
} 
void CRPTBaoCaoTongHopTBYT::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTBaoCaoTongHopTBYT::OnDepartmentSelendok(){
	 
}
/*void CRPTBaoCaoTongHopTBYT::OnDepartmentSetfocus(){
	
}*/
/*void CRPTBaoCaoTongHopTBYT::OnDepartmentKillfocus(){
	
}*/
long CRPTBaoCaoTongHopTBYT::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id , sd_name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTBaoCaoTongHopTBYT::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTBaoCaoTongHopTBYT::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTBaoCaoTongHopTBYT::OnTypeSelendok(){
	 
}
/*void CRPTBaoCaoTongHopTBYT::OnTypeSetfocus(){
	
}*/
/*void CRPTBaoCaoTongHopTBYT::OnTypeKillfocus(){
	
}*/
long CRPTBaoCaoTongHopTBYT::OnTypeLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" and famc_id='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT famc_id AS id, famc_name AS description FROM fam_category")\
				 _T(" WHERE 1=1 %s ORDER BY famc_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTBaoCaoTongHopTBYT::OnTypeAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTBaoCaoTongHopTBYT::OnInventoriedSelect(){
	m_nInventoried = 0;
	m_nAll = 1;
}
void CRPTBaoCaoTongHopTBYT::OnAllSelect(){
	m_nInventoried = 1;
	m_nAll = 0;
}
void CRPTBaoCaoTongHopTBYT::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTBaoCaoTongHopTBYT::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	double grpCost[11];
	double grpLine[11];
	double cost = 0;
	
	for (int i =0; i <= 11; i++)
	{
		grpCost[i] = 0;
		grpLine[i] = 0;
	}	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 35);	xls.SetColumnWidth(2, 12);	xls.SetColumnWidth(3, 12);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 8);	xls.SetColumnWidth(6, 8);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	CString szTemp;	szTemp.Format(_T("\x42\xC1O \x43\xC1O T\x1ED4NG H\x1EE2P TR\x41NG \x42\x1ECA Y T\x1EBE KHO\x41 %s"), m_szDepartmentKey);	xls.SetCellText(0, 0, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	szTemp.Format(_T("NG\xC0Y \x42\xC1O \x43\xC1O: %s"), CDate::Convert(m_szDate, yyyymmdd||ddmmyyyy));	xls.SetCellText(0, 1, szTemp, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 2, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 2, _T("T\xCAN M\xC1Y"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 2, _T("MO\x44\x45L"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 2, _T("N\x1AF\x1EDA\x43 S\x58"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 2, _T("S\x1ED0 L\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 2, _T("\x43\x1EA4P \x43H\x1EA4T L\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 3, _T("\x43\x1EA4P \x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 3, _T("\x43\x1EA4P \x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 3, _T("\x43\x1EA4P \x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 3, _T("\x43\x1EA4P \x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 3, _T("\x43\x1EA4P \x35"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 9);	xls.SetMerge(1, 1, 0, 9);	xls.SetMerge(2, 3, 0, 0);	xls.SetMerge(2, 3, 1, 1);	xls.SetMerge(2, 3, 2, 2);	xls.SetMerge(2, 3, 3, 3);	xls.SetMerge(2, 3, 4, 4);	xls.SetMerge(2, 2, 5, 9);		szSQL = GetQueryString();	rs.ExecSQL(szSQL);	nRow = 5;	nCol = 0;	int nCount = 1;	CString szCount;	while(!rs.IsEOF()){		szCount.Format(_T("%d"), nCount++);		xls.SetCellText(nCol+0, nRow, szCount, FMT_TEXT);		rs.GetValue(_T("fa_name"), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_model"), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("fa_madein"), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T("soluong"), cost);		grpCost[5] += cost;		grpLine[5] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		rs.GetValue(_T("cap1"), cost);		grpCost[6] += cost;		grpLine[6] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		rs.GetValue(_T("cap2"), cost);		grpCost[7] += cost;		grpLine[7] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		rs.GetValue(_T("cap3"), cost);		grpCost[8] += cost;		grpLine[8] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		rs.GetValue(_T("cap4"), cost);		grpCost[9] += cost;		grpLine[9] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		rs.GetValue(_T("cap5"), cost);		grpCost[10] += cost;		grpLine[10] += cost;		tmpStr.Format(_T("%.0f"), cost);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT | FMT_CENTER);		nRow++;		rs.MoveNext();			}	if (grpLine[5] > 0)
		{
			nRow++;
			CString szField, szAmount, szTmp2;
			TranslateString(_T("T\x1ED5ng \x63\x1ED9ng:"), szAmount);
			szTmp2.Format(_T("%s"), szAmount);
			//xls.SetCellMergedColumns(1,nRow,10);
			xls.SetCellText(1, nRow, szTmp2, FMT_TEXT, true);
			for (int i = 4; i <= 11; i++)
			{				
				szTmp2.Format(_T("%.2f"), grpLine[i]);
				xls.SetCellText(i-1, nRow, tmpStr, FMT_NUMBER1 | FMT_CENTER, true);
			}	
		}	nRow++;	xls.SetMerge(nRow, nRow, 1, 2);	xls.SetCellText(nCol+1, nRow, _T("\x43H\x1EE6 NHI\x1EC6M KHO\x41 TR\x41NG \x42\x1ECA"), FMT_CENTER, true);	CString szTmp3;	xls.SetMerge(nRow, nRow, 5, 9);	xls.SetMerge(nRow+1, nRow+1, 5, 9);	szTmp3.Format(_T("H\xE0 N\x1ED9i, ng\xE0y %s th\xE1ng %s n\x103m %s"), m_szDate.Right(2), m_szDate.Mid(5, 2), m_szDate.Left(4));	xls.SetCellText(nCol+5, nRow, szTmp3, FMT_CENTER);	xls.SetCellText(nCol+5, nRow+1, _T("NG\x1AF\x1EDCI \x42\xC1O \x43\xC1O"), FMT_CENTER, true);	EndWaitCursor();	xls.Save(_T("Exports\\Bao Cao Tong Hop TBYT.xls"));
} 

int CRPTBaoCaoTongHopTBYT::OnAddRPTBaoCaoTongHopTBYT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTBaoCaoTongHopTBYT::OnEditRPTBaoCaoTongHopTBYT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTBaoCaoTongHopTBYT::OnDeleteRPTBaoCaoTongHopTBYT(){
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
 		OnCancelRPTBaoCaoTongHopTBYT();
 	}
	return 0;
}
int CRPTBaoCaoTongHopTBYT::OnSaveRPTBaoCaoTongHopTBYT(){
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
 		//OnRPTBaoCaoTongHopTBYTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTBaoCaoTongHopTBYT::OnCancelRPTBaoCaoTongHopTBYT(){
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
int CRPTBaoCaoTongHopTBYT::OnRPTBaoCaoTongHopTBYTListLoadData(){
	return 0;
}
CString CRPTBaoCaoTongHopTBYT::GetQueryString(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL, szWhere;

	if(!m_szDepartmentKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_department = '%s'"), m_szDepartmentKey);	}	if(!m_szTypeKey.IsEmpty())	{		szWhere.AppendFormat(_T(" and fa_category = '%s'"), m_szTypeKey);	}
	
	if(m_nInventoried == 0 || m_nAll == 1)
	{
		szSQL.Format(_T(" SELECT fa_name, fa_category, fa_department, fa_model, fa_madein, sum(soluong) as soluong, ") \
					_T("	sum(cap1) as cap1, ") \
					_T("	sum(cap2) as cap2, ") \
					_T("	sum(cap3) as cap3, ") \
					_T("	sum(cap4) as cap4, ") \
					_T("	sum(cap5) as cap5 ") \
					_T(" FROM ( ") \
					_T(" SELECT distinct fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_madein, soluong, ") \
					_T("		CASE WHEN mqlvl = 1 THEN 1 ELSE 0 END AS cap1,  ") \
					_T("		CASE WHEN mqlvl = 2 THEN 1 ELSE 0 END AS cap2,  ") \
					_T("		CASE WHEN mqlvl = 3 THEN 1 ELSE 0 END AS cap3,  ") \
					_T("		CASE WHEN mqlvl = 4 THEN 1 ELSE 0 END AS cap4,  ") \
					_T("		CASE WHEN mqlvl = 5 THEN 1 ELSE 0 END AS cap5 ") \
					_T("	FROM(  ") \
					_T("		SELECT distinct max(mqlvl) as mqlvl, fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_madein,fa_quantity AS soluong ") \
					_T("		FROM ( ") \
					_T("			SELECT fil_assetno, max(fil_qtylevel) as mqlvl, SUBSTR(fa_assetno, 0, 14) AS fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_quantity, ") \
					_T("			(SELECT sc_name FROM sys_country WHERE sc_id = fa_madein) AS fa_madein, famc_name ") \
					_T("			FROM fam_invent_line  ") \
					_T("			LEFT JOIN fam_asset ON (fa_assetno = fil_assetno)  ") \
					_T("			LEFT JOIN fam_invent ON (fi_orderno = fil_orderno) ") \
					_T("			LEFT JOIN fam_category ON( famc_id = fa_category )  ") \
					_T("			WHERE fa_createddate <= to_timestamp ('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS') and fa_ustatus is null AND fa_org_id = 'FAM' AND fi_status = 'Y' %s ") \
					_T("			group by fil_assetno, fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_quantity, fa_madein, fil_qtylevel, famc_name ") \
					_T("			)  ") \
					_T("			GROUP BY fa_assetno, fa_name, fa_category, fa_department, fa_madein, fa_model, fa_quantity ") \
					_T("			ORDER BY fa_name ") \
					_T("		)) GROUP BY fa_name, fa_category, fa_department, fa_madein, fa_model ORDER BY fa_name"), m_szDate, szWhere);
	}else
	{
		szSQL.Format(_T("SELECT distinct fa_name,fa_category,fa_department,fa_model,fa_madein, ") \
					_T("	sum(soluong) as soluong, ") \
					_T("	sum(cap1) as cap1, ") \
					_T("	sum(cap2) as cap2, ") \
					_T("	sum(cap3) as cap3, ") \
					_T("	sum(cap4) as cap4, ") \
					_T("	sum(cap5) as cap5 ") \
					_T(" FROM (") \
					_T("	SELECT fa_assetno, fa_name, fa_category, fa_department, fa_model,") \
					_T("	(SELECT sc_name FROM sys_country WHERE sc_id = fa_madein) AS fa_madein, ") \
					_T("	fa_quantity AS soluong, ") \
					_T("	0 AS cap1, 0 AS cap2,0 AS cap3,0 AS cap4,0 AS cap5 ") \
					_T("	FROM fam_asset ") \
					_T("	LEFT JOIN fam_category ON( famc_id = fa_category ) ") \
					_T("	WHERE fa_createddate <= to_timestamp ('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS')  and fa_ustatus is null %s") \
					_T("	AND fa_assetno NOT IN (SELECT fil_assetno FROM fam_invent_line) ") \
					_T("	UNION ALL ") \
					_T("	SELECT fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_madein, soluong, ") \
					_T("		CASE WHEN mqlvl = 1 THEN 1 ELSE 0 END AS cap1,  ") \
					_T("		CASE WHEN mqlvl = 2 THEN 1 ELSE 0 END AS cap2,  ") \
					_T("		CASE WHEN mqlvl = 3 THEN 1 ELSE 0 END AS cap3,  ") \
					_T("		CASE WHEN mqlvl = 4 THEN 1 ELSE 0 END AS cap4,  ") \
					_T("		CASE WHEN mqlvl = 5 THEN 1 ELSE 0 END AS cap5 ") \
					_T("	FROM(  ") \
					_T("		SELECT distinct max(mqlvl) as mqlvl, fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_madein,sum(fa_quantity) AS soluong ") \
					_T("		FROM ( ") \
					_T("			SELECT fil_assetno, max(fil_qtylevel) as mqlvl, SUBSTR(fa_assetno, 0, 14) AS fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_quantity, ") \
					_T("			(SELECT sc_name FROM sys_country WHERE sc_id = fa_madein) AS fa_madein, famc_name ") \
					_T("			FROM fam_invent_line  ") \
					_T("			LEFT JOIN fam_asset ON (fa_assetno = fil_assetno)  ") \
					_T("			LEFT JOIN fam_invent ON (fi_orderno = fil_orderno) ") \
					_T("			LEFT JOIN fam_category ON( famc_id = fa_category )  ") \
					_T("			WHERE fa_createddate <= to_timestamp ('%s 23:59:59', 'YYYY/MM/DD HH24:MI:SS')  and fa_ustatus is null AND fa_org_id = 'FAM' AND fi_status = 'Y' %s ") \
					_T("			group by fil_assetno, fa_assetno, fa_name, fa_category, fa_department, fa_model, fa_quantity, fa_madein, fil_qtylevel, famc_name ") \
					_T("			)  ") \
					_T("			GROUP BY fa_assetno, fa_name, fa_category, fa_department, fa_madein, fa_model, fa_quantity ") \
					_T("			ORDER BY fa_name ") \
					_T("		)) GROUP BY fa_name,fa_category,fa_department,fa_model,fa_madein	ORDER BY fa_name"), m_szDate, szWhere, m_szDate, szWhere);
	}
	_fmsg(_T("%s"), szSQL);
	return szSQL;
}
