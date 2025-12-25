#include "stdafx.h"
#include "RPTAllocationDepreciation.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAllocationDepreciation *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CRPTAllocationDepreciation *)pWnd)->OnToDateCheckValue();
} 
static void _OnSourcesSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CRPTAllocationDepreciation* )pWnd)->OnSourcesSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourcesSelendokFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnSourcesSelendok();
}
/*static void _OnSourcesSetfocusFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnSourcesKillfocus();
}*/
/*static void _OnSourcesKillfocusFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnSourcesKillfocus();
}*/
static long _OnSourcesLoadDataFnc(CWnd *pWnd){
	return ((CRPTAllocationDepreciation *)pWnd)->OnSourcesLoadData();
}
/*static void _OnSourcesAddNewFnc(CWnd *pWnd){
	((CRPTAllocationDepreciation *)pWnd)->OnSourcesAddNew();
}*/
static void _OnExportSelectFnc(CWnd *pWnd){
	CRPTAllocationDepreciation *pVw = (CRPTAllocationDepreciation *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CRPTAllocationDepreciation *pVw = (CRPTAllocationDepreciation *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddRPTAllocationDepreciationFnc(CWnd *pWnd){
	 return ((CRPTAllocationDepreciation*)pWnd)->OnAddRPTAllocationDepreciation();
} 
static int _OnEditRPTAllocationDepreciationFnc(CWnd *pWnd){
	 return ((CRPTAllocationDepreciation*)pWnd)->OnEditRPTAllocationDepreciation();
} 
static int _OnDeleteRPTAllocationDepreciationFnc(CWnd *pWnd){
	 return ((CRPTAllocationDepreciation*)pWnd)->OnDeleteRPTAllocationDepreciation();
} 
static int _OnSaveRPTAllocationDepreciationFnc(CWnd *pWnd){
	 return ((CRPTAllocationDepreciation*)pWnd)->OnSaveRPTAllocationDepreciation();
} 
static int _OnCancelRPTAllocationDepreciationFnc(CWnd *pWnd){
	 return ((CRPTAllocationDepreciation*)pWnd)->OnCancelRPTAllocationDepreciation();
} 
CRPTAllocationDepreciation::CRPTAllocationDepreciation(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CRPTAllocationDepreciation::~CRPTAllocationDepreciation(){
}
void CRPTAllocationDepreciation::OnCreateComponents(){
	m_wndInformationReport.Create(this, _T("Information report"), 5, 5, 450, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 310, 55);
	m_wndToDate.Create(this,315, 30, 445, 55); 
	m_wndSourcesLabel.Create(this, _T("Sources"), 10, 60, 90, 85);
	m_wndSources.Create(this,95, 60, 445, 85); 
	m_wndExport.Create(this, _T("&Export"), 370, 95, 450, 120);
	m_wndPrint.Create(this, _T("&Print"), 285, 95, 365, 120);

}
void CRPTAllocationDepreciation::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndSources.InsertColumn(0, _T("STT"), FMT_TEXT, 50);
	m_wndSources.InsertColumn(1, _T("Name"), FMT_TEXT, 250);



}
void CRPTAllocationDepreciation::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSources.SetEvent(WE_SELENDOK, _OnSourcesSelendokFnc);
	//m_wndSources.SetEvent(WE_SETFOCUS, _OnSourcesSetfocusFnc);
	//m_wndSources.SetEvent(WE_KILLFOCUS, _OnSourcesKillfocusFnc);
	m_wndSources.SetEvent(WE_SELCHANGE, _OnSourcesSelectChangeFnc);
	m_wndSources.SetEvent(WE_LOADDATA, _OnSourcesLoadDataFnc);
	//m_wndSources.SetEvent(WE_ADDNEW, _OnSourcesAddNewFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_ADD);

}
void CRPTAllocationDepreciation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndSources.GetDlgCtrlID(), m_szSourcesKey);

}
void CRPTAllocationDepreciation::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CRPTAllocationDepreciation::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CRPTAllocationDepreciation::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSourcesKey.Empty();

}
int CRPTAllocationDepreciation::SetMode(int nMode){
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
			m_szFromDate = pMF->GetSysDate();
			m_szFromDate += _T("00:00");
			m_szToDate = pMF->GetSysDateTime();
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
/*void CRPTAllocationDepreciation::OnFromDateChange(){
	
} */
/*void CRPTAllocationDepreciation::OnFromDateSetfocus(){
	
} */
/*void CRPTAllocationDepreciation::OnFromDateKillfocus(){
	
} */
int CRPTAllocationDepreciation::OnFromDateCheckValue(){
	return 0;
} 
/*void CRPTAllocationDepreciation::OnToDateChange(){
	
} */
/*void CRPTAllocationDepreciation::OnToDateSetfocus(){
	
} */
/*void CRPTAllocationDepreciation::OnToDateKillfocus(){
	
} */
int CRPTAllocationDepreciation::OnToDateCheckValue(){
	return 0;
} 
void CRPTAllocationDepreciation::OnSourcesSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CRPTAllocationDepreciation::OnSourcesSelendok(){
	 
}
/*void CRPTAllocationDepreciation::OnSourcesSetfocus(){
	
}*/
/*void CRPTAllocationDepreciation::OnSourcesKillfocus(){
	
}*/
long CRPTAllocationDepreciation::OnSourcesLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSources.IsSearchKey() && !m_szSourcesKey.IsEmpty()){
		szWhere.Format(_T(" WHERE fase_id='%s' "), m_szSourcesKey);
	}
	m_wndSources.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fase_id AS id, fase_desc AS description FROM fam_sources %s ORDER BY fase_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSources.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CRPTAllocationDepreciation::OnSourcesAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CRPTAllocationDepreciation::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);	CString szSQL, tmpStr, szTemp, szWhere;	UpdateData(TRUE);	BeginWaitCursor();	szWhere.Empty();	int nRow =0, nCol = 0;	CExcel xls;	xls.CreateSheet(1);	xls.SetWorksheet(0);	xls.SetColumnWidth(0, 8);	xls.SetColumnWidth(1, 21);	xls.SetColumnWidth(2, 8);	xls.SetColumnWidth(3, 8);	xls.SetColumnWidth(4, 8);	xls.SetColumnWidth(5, 17);	xls.SetColumnWidth(6, 16);	xls.SetColumnWidth(7, 8);	xls.SetColumnWidth(8, 8);	xls.SetColumnWidth(9, 8);	xls.SetColumnWidth(10, 8);	xls.SetColumnWidth(11, 8);	xls.SetColumnWidth(12, 8);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\xCAN TWQ\x110 \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 7, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 8, _T("\x31"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 9, _T("\x32"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 10, _T("\x33"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 11, _T("\x34"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 7, _T("\x43hi ti\xEAu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 8, _T("I - S\x1ED1 kh\x1EA5u h\x61o tr\xED\x63h th\xE1ng tr\x1B0\x1EDB\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 9, _T("II - S\x1ED1 KH TS\x43\x110 t\x103ng trong th\xE1ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 10, _T("III - S\x1ED1 KH TS\x43\x110 gi\x1EA3m trong th\xE1ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 11, _T("IV - S\x1ED1 KH tr\xED\x63h th\xE1ng n\xE0y (I + II + III)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 12, _T("\x43\x1ED9ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 14, _T("Ng\x1B0\x1EDDi l\x1EADp \x62\x1EA3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 15, _T("(K\xFD, h\x1ECD t\xEAn)"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 7, _T("T\x1EF7 l\x1EC7 kh\x1EA5u h\x61o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 3, _T("\x42\x1EA2NG PH\xC2N \x42\x1ED4 KH\x1EA4U H\x41O T\xC0I S\x1EA2N \x43\x1ED0 \x110\x1ECANH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	if(!m_szSourcesKey.IsEmpty())	{		xls.SetCellText(3, 4, _T("Th\x65o ngu\x1ED3n v\x1ED1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	}	xls.SetCellText(3, 7, _T("Nguy\xEAn gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 7, _T("S\x1ED1 kh\x1EA5u h\x61o"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 7, _T("\x43hi ph\xED s\x1EA3n \x78u\x1EA5t \x63hung"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 7, _T("\x43hi ph\xED s\x1EED \x64\x1EE5ng m\xE1y thi \x63\xF4ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 7, _T("\x43hi ph\xED \x62\xE1n h\xE0ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 7, _T("\x43hi ph\xED QL\x44N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 14, _T("Ng\xE0y\x2026th\xE1ng\x2026n\x103m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 7, _T("\x58\x44\x43\x42 \x64\x1EDF \x64\x61ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 7, _T("\x43hi ph\xED tr\x1EA3 tr\x1B0\x1EDB\x63 ng\x1EAFn h\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 7, _T("\x43hi ph\xED tr\x1EA3 tr\x1B0\x1EDB\x63 \x64\xE0i h\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 7, _T("\x43hi ph\xED ph\x1EA3i tr\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 2);	xls.SetMerge(1, 1, 0, 2);	xls.SetMerge(14, 14, 1, 2);	xls.SetMerge(15, 15, 1, 2);	xls.SetMerge(3, 3, 3, 9);	xls.SetMerge(4, 4, 3, 9);	xls.SetMerge(14, 14, 8, 11);		szSQL.Format(_T(""));	rs.ExecSQL(szSQL);	nRow = 17;	nCol = 0;	while(!rs.IsEOF()){		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+0, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		rs.GetValue(_T(""), tmpStr);		xls.SetCellText(nCol+12, nRow, tmpStr, FMT_TEXT);		nRow++;		rs.MoveNext();	}	EndWaitCursor();	xls.Save(_T("Exports\\phanbokhauhao.xls"));
} 
void CRPTAllocationDepreciation::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CRPTAllocationDepreciation::OnAddRPTAllocationDepreciation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CRPTAllocationDepreciation::OnEditRPTAllocationDepreciation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CRPTAllocationDepreciation::OnDeleteRPTAllocationDepreciation(){
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
 		OnCancelRPTAllocationDepreciation();
 	}
	return 0;
}
int CRPTAllocationDepreciation::OnSaveRPTAllocationDepreciation(){
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
 		//OnRPTAllocationDepreciationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CRPTAllocationDepreciation::OnCancelRPTAllocationDepreciation(){
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
int CRPTAllocationDepreciation::OnRPTAllocationDepreciationListLoadData(){
	return 0;
}
