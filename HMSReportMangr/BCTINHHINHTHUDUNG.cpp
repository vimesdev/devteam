#include "BCTINHHINHTHUDUNG.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHTHUDUNG *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCTINHHINHTHUDUNG *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCTINHHINHTHUDUNG *pVw = (CBCTINHHINHTHUDUNG *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCTINHHINHTHUDUNG *pVw = (CBCTINHHINHTHUDUNG *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCTINHHINHTHUDUNG *pVw = (CBCTINHHINHTHUDUNG *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCTINHHINHTHUDUNG*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCTINHHINHTHUDUNG*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCTINHHINHTHUDUNG*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCTINHHINHTHUDUNG*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCTINHHINHTHUDUNGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHTHUDUNG*)pWnd)->OnAddBCTINHHINHTHUDUNG();
} 
static int _OnEditBCTINHHINHTHUDUNGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHTHUDUNG*)pWnd)->OnEditBCTINHHINHTHUDUNG();
} 
static int _OnDeleteBCTINHHINHTHUDUNGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHTHUDUNG*)pWnd)->OnDeleteBCTINHHINHTHUDUNG();
} 
static int _OnSaveBCTINHHINHTHUDUNGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHTHUDUNG*)pWnd)->OnSaveBCTINHHINHTHUDUNG();
} 
static int _OnCancelBCTINHHINHTHUDUNGFnc(CWnd *pWnd){
	 return ((CBCTINHHINHTHUDUNG*)pWnd)->OnCancelBCTINHHINHTHUDUNG();
} 
CBCTINHHINHTHUDUNG::CBCTINHHINHTHUDUNG(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCTINHHINHTHUDUNG::~CBCTINHHINHTHUDUNG(){
}
void CBCTINHHINHTHUDUNG::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	//m_wndPrint.Create(this, _T("&Print"), 620, 30, 710, 55);
	m_wndExport.Create(this, _T("&Export"), 525, 30, 615, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("\x110\x1A1n v\x1ECB kh\xE1m \ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(3, _T("BHQN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ\x110"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("BHQH"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA0N"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(7, _T("Tr\x1EBB<6T"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(9, _T("\x44\xE2n thu VP"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(10, _T("BHYT kh\xE1\x63"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(11, _T("BHTN"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(12, _T("BH N\x1EE3 th\x1EBB"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(13, _T("T\x1ED5ng s\x1ED1"), CFMT_MONEY, 70);

}
void CBCTINHHINHTHUDUNG::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCTINHHINHTHUDUNG::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate +=_T("23:59");
	UpdateData(false);

}
void CBCTINHHINHTHUDUNG::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCTINHHINHTHUDUNG::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCTINHHINHTHUDUNG::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCTINHHINHTHUDUNG::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCTINHHINHTHUDUNG::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CBCTINHHINHTHUDUNG::OnFromDateChange(){
	
} */
/*void CBCTINHHINHTHUDUNG::OnFromDateSetfocus(){
	
} */
/*void CBCTINHHINHTHUDUNG::OnFromDateKillfocus(){
	
} */
int CBCTINHHINHTHUDUNG::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCTINHHINHTHUDUNG::OnToDateChange(){
	
} */
/*void CBCTINHHINHTHUDUNG::OnToDateSetfocus(){
	
} */
/*void CBCTINHHINHTHUDUNG::OnToDateKillfocus(){
	
} */
int CBCTINHHINHTHUDUNG::OnToDateCheckValue(){
	return 0;
} 
void CBCTINHHINHTHUDUNG::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CBCTINHHINHTHUDUNG::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCTINHHINHTHUDUNG::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;	CRecord rs(&pMF->m_db); 	UpdateData(true);	CExcel xls; 	int nCol = 0; 	int nRow = 6; 	CString szSQL, tmpStr,szOldGroup, szNewGroup;	xls.CreateSheet(1); 	xls.SetWorksheet(0); 	xls.SetColumnWidth(0, 35); 	xls.SetColumnWidth(1, 6); 	xls.SetColumnWidth(2, 7); 	xls.SetColumnWidth(3, 7); 	xls.SetColumnWidth(4, 7); 	xls.SetColumnWidth(5, 7); 	xls.SetColumnWidth(6, 7); 	xls.SetColumnWidth(7, 15); 	xls.SetColumnWidth(8, 15); 	xls.SetColumnWidth(9, 12); 	xls.SetColumnWidth(10, 7); 	xls.SetColumnWidth(11, 10);	xls.SetColumnWidth(12, 10);	xls.SetCellText(0, 0, _T("\x42\x1ED8 QU\x1ED0\x43 PH\xD2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 10);	xls.SetCellText(0, 1, _T("\x42\x1EC6NH VI\x1EC6N TW QU\xC2N \x110\x1ED8I \x31\x30\x38"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 3, _T("T\xCCNH H\xCCNH THU DUNG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x110\x1EBFn ng\xE0y %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));	xls.SetCellText(0, 4, tmpStr, FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(0, 6, _T("\x110\x1A1n v\x1ECB kh\xE1m \ \x110\x1ED1i t\x1B0\x1EE3ng kh\xE1m"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(1, 6, _T("Qu\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(2, 6, _T("BHQN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(3, 6, _T("\x42HQ\x110"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(4, 6, _T("BHQH"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(5, 6, _T("\x42\x1EA1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(6, 6, _T("Tr\x1EBB <6T"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(7, 6, _T("\x43h\xEDnh s\xE1\x63h"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(8, 6, _T("\x44\xE2n thu VP"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(9, 6, _T("BHYT kh\xE1\x63"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(10, 6, _T("BHTN"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(11, 8, _T("BH N\x1EE3 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetCellText(12, 6, _T("T\x1ED5ng s\x1ED1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true, 11);	xls.SetMerge(0, 0, 0, 4);	xls.SetMerge(1, 1, 0, 4);	xls.SetMerge(3, 3, 0, 11);	xls.SetMerge(4, 4, 0, 11); 	szSQL = GetQueryString();	rs.ExecSQL(szSQL); 	_fmsg(_T("%s"),szSQL);	while(!rs.IsEOF()) 	{		rs.GetValue(_T("TYPE"), szNewGroup);
		if (szOldGroup != szNewGroup)
		{
			xls.SetCellText(0, nRow+1, rs.GetValue(_T("GROUPNAME")), FMT_TEXT, true);
			szOldGroup = szNewGroup;
			nRow++;
		}	rs.GetValue(_T("NAME"), tmpStr); 	xls.SetCellText(nCol + 0, nRow +1, tmpStr, FMT_TEXT);	 	rs.GetValue(_T("c1"), tmpStr); 	xls.SetCellText(nCol + 1, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c2"), tmpStr); 	xls.SetCellText(nCol + 2, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c3"), tmpStr); 	xls.SetCellText(nCol + 3, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c4"), tmpStr); 	xls.SetCellText(nCol + 4, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c5"), tmpStr); 	xls.SetCellText(nCol + 5, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c6"), tmpStr); 	xls.SetCellText(nCol + 6, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c7"), tmpStr); 	xls.SetCellText(nCol + 7, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c8"), tmpStr); 	xls.SetCellText(nCol + 8, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c9"), tmpStr); 	xls.SetCellText(nCol + 9, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c10"), tmpStr); 	xls.SetCellText(nCol + 10, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	rs.GetValue(_T("c11"), tmpStr); 	xls.SetCellText(nCol + 11, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	rs.GetValue(_T("c12"), tmpStr); 	xls.SetCellText(nCol + 12, nRow +1, tmpStr, FMT_NUMBER1 | FMT_CENTER);	 	nRow++; 	rs.MoveNext();		}
	EndWaitCursor();
	xls.Save(_T("Exports\\TINH HINH THU DUNG.xls"));	
	
} 
void CBCTINHHINHTHUDUNG::OnListDblClick(){
	
} 
void CBCTINHHINHTHUDUNG::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCTINHHINHTHUDUNG::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCTINHHINHTHUDUNG::OnListLoadData(){
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,c13=0,c14=0;
	int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0,d12=0,d13=0,d14=0;
	int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0,t10=0,t11=0,t12=0,t13=0,t14=0;
	UpdateData(TRUE);
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	CString szSQL,szSQL1,szSQL2, tmpStr, tmpStr1, szOldGroup, szNewGroup;
	szSQL = GetQueryString();
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	int nIndex=1;
	int nItem=1;
	while(!rs.IsEOF()){
		rs.GetValue(_T("TYPE"), szNewGroup);
		if(szNewGroup != szOldGroup && !szNewGroup.IsEmpty())
		{	
			rs.GetValue(_T("GROUPNAME"), tmpStr);
			nItem = m_wndList.AddItems(tmpStr, NULL);
			m_wndList.MergeCell(nItem, 0, nItem, 8);
			m_wndList.SetItemBkColor(nItem, RGB(255, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			szOldGroup = szNewGroup;
			nIndex=1;
		}
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr,
			rs.GetValue(_T("NAME")), 
			rs.GetValue(_T("c1")), 
			rs.GetValue(_T("c2")), 
			rs.GetValue(_T("c3")), 
			rs.GetValue(_T("c4")), 
			rs.GetValue(_T("c5")), 
			rs.GetValue(_T("c6")),
			rs.GetValue(_T("c7")), 
			rs.GetValue(_T("c8")), 
			rs.GetValue(_T("c9")),
			rs.GetValue(_T("c10")), 
			rs.GetValue(_T("c11")),
			rs.GetValue(_T("c12")),NULL);
		rs.MoveNext();
	}
	//-----------------------------------------
	szSQL1 = GetQueryString1();
	nCount = rs1.ExecSQL(szSQL1);
	_fmsg(_T("%s"),szSQL);
	//-----------------------------------------
	szSQL2 = GetQueryString2();
	nCount = rs2.ExecSQL(szSQL2);
	_fmsg(_T("%s"),szSQL);
	while(!rs1.IsEOF()||!rs2.IsEOF()){
		rs1.GetValue(_T("c1"),c1);
		rs1.GetValue(_T("c2"),c2);
		rs1.GetValue(_T("c3"),c3);
		rs1.GetValue(_T("c4"),c4);
		rs1.GetValue(_T("c5"),c5);
		rs1.GetValue(_T("c6"),c6);
		rs1.GetValue(_T("c7"),c7);
		rs1.GetValue(_T("c8"),c8);
		rs1.GetValue(_T("c9"),c9);
		rs1.GetValue(_T("c10"),c10);
		rs1.GetValue(_T("c11"),c11);
		rs1.GetValue(_T("c12"),c12);
		rs1.GetValue(_T("c13"),c13);
		rs1.GetValue(_T("c14"),c14);

		rs2.GetValue(_T("c1"),d1);
		rs2.GetValue(_T("c2"),d2);
		rs2.GetValue(_T("c3"),d3);
		rs2.GetValue(_T("c4"),d4);
		rs2.GetValue(_T("c5"),d5);
		rs2.GetValue(_T("c6"),d6);
		rs2.GetValue(_T("c7"),d7);
		rs2.GetValue(_T("c8"),d8);
		rs2.GetValue(_T("c9"),d9);
		rs2.GetValue(_T("c10"),d10);
		rs2.GetValue(_T("c11"),d11);
		rs2.GetValue(_T("c12"),d12);
		rs2.GetValue(_T("c13"),d13);
		rs2.GetValue(_T("c14"),d14);
		t1=c1-d1;t2=c2-d2;t3=c3-d3;t4=c4-d4;t5=c5-d5;t6=c6-d6;t7=c7-d7;t8=c8-d8;t9=c9-d9;t10=c10-d10;t11=c11-d11;t12=c12-d12;t13=c13-d13;t14=c14-d14;
		MessageBox(int2str(c1));
		tmpStr1.Format(_T("\x43\xF2n l\x1EA1i"));
		m_wndList.AddItems(tmpStr,
						tmpStr1,
						int2str(t1),
						int2str(t2),
						int2str(t3),
						int2str(t4),
						int2str(t5),
						int2str(t6),
						int2str(t7),
						int2str(t8),
						int2str(t9),
						int2str(t10),
						int2str(t11),
						int2str(t12),
						int2str(t13),
						int2str(t14),
						NULL);
		rs1.MoveNext();
		rs2.MoveNext();
	}
	
	//------------------------------------
	m_wndList.EndLoad(); 
	return nCount;
}
int CBCTINHHINHTHUDUNG::OnAddBCTINHHINHTHUDUNG(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCTINHHINHTHUDUNG::OnEditBCTINHHINHTHUDUNG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCTINHHINHTHUDUNG::OnDeleteBCTINHHINHTHUDUNG(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelBCTINHHINHTHUDUNG();
 	}
	return 0;
}
int CBCTINHHINHTHUDUNG::OnSaveBCTINHHINHTHUDUNG(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
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
 		//OnBCTINHHINHTHUDUNGListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCTINHHINHTHUDUNG::OnCancelBCTINHHINHTHUDUNG(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CBCTINHHINHTHUDUNG::OnBCTINHHINHTHUDUNGListLoadData(){
	return 0;
}
CString CBCTINHHINHTHUDUNG::GetQueryString(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szSQL.Format(_T(" SELECT type,") \
_T("        (SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_thudung' AND SS_CODE= CAST(TYPE AS NUMBER)) AS GROUPNAME,") \
_T("        id,(SELECT SS_DESC FROM SYS_SEL WHERE SS_ID='hms_thudung' AND SS_CODE= CAST(ID AS NUMBER)) AS NAME,") \
_T("        sum(c1) as c1,") \
_T(" 			 sum(c2) as c2,") \
_T(" 			 sum(c3) as c3,") \
_T(" 			 sum(c4) as c4,") \
_T(" 			 sum(c5) as c5,") \
_T(" 			 sum(c6) as c6,") \
_T(" 			 sum(c7) as c7,") \
_T(" 			 sum(c8) as c8,") \
_T(" 			 sum(c9) as c9,") \
_T(" 			 sum(c10) as c10,") \
_T(" 			 sum(c11) as c11,") \
_T(" 			 sum(c12) as c12  ") \
_T(" FROM(SELECT type,id,") \
_T("        case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT 11 type,1 id,docno,hd_object ") \
_T(" FROM(SELECT distinct htr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE htr_status ='I' AND htr_outpatient='N' and htr_deptid is not null") \
_T(" 	AND htr_admitdate < cast_string2timestamp('%s') ") \
_T(" UNION ALL") \
_T(" SELECT distinct htr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE htr_status ='T' AND htr_outpatient='N' and htr_deptid is not null") \
_T(" 	AND htr_dischargedate between cast_string2timestamp('%s') and cast_string2timestamp('%s'))") \
_T(" UNION ALL") \
_T(" SELECT 11 type,2 id,hcr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE hcr_status <> 'A' AND htr_outpatient='N'") \
_T(" 	AND htr_admitdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')") \
_T(" UNION ALL") \
_T(" SELECT 12 type,3 id,hcr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE htr_outpatient='N'") \
_T(" 	AND htr_status='T' AND htr_suggestion <> 'M' AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')") \
_T(" UNION ALL") \
_T(" SELECT 12 type,4 id,hcr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE htr_outpatient='N'") \
_T(" 	AND htr_status='T' AND htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) ") \
_T("   AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')))") \
_T(" GROUP BY type,id"), m_szFromDate,
						m_szFromDate,m_szToDate,
						m_szFromDate,m_szToDate,
						m_szFromDate,m_szToDate,
						m_szFromDate,m_szToDate);
	return szSQL;
}
CString CBCTINHHINHTHUDUNG::GetQueryString1(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szSQL.Format(_T(" SELECT sum(c1) as c1,") \
_T(" 			 sum(c2) as c2,") \
_T(" 			 sum(c3) as c3,") \
_T(" 			 sum(c4) as c4,") \
_T(" 			 sum(c5) as c5,") \
_T(" 			 sum(c6) as c6,") \
_T(" 			 sum(c7) as c7,") \
_T(" 			 sum(c8) as c8,") \
_T(" 			 sum(c9) as c9,") \
_T(" 			 sum(c10) as c10,") \
_T(" 			 sum(c11) as c11,") \
_T(" 			 sum(c12) as c12      ") \
_T(" FROM") \
_T(" (SELECT type,id,") \
_T("        case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT 11 type,1 id,docno,hd_object ") \
_T(" FROM(SELECT distinct deptid,docno,hd_object,admitdate,dischargedate") \
_T(" FROM(SELECT htr_deptid deptid,") \
_T("            hd_docno          AS docno,") \
_T("            hd_object,") \
_T("            trunc_date(htr_admitdate)                                 AS admitdate,") \
_T("            trunc_date(htr_dischargedate)                             AS dischargedate") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno)") \
_T(" WHERE htr_status='I' and htr_outpatient='N'") \
_T(" UNION") \
_T(" SELECT htr_ctdeptid,") \
_T("        hd_docno          AS docno,") \
_T("        hd_object,") \
_T("        trunc_date(htr_admitdate)                                 AS admitdate,") \
_T("        trunc_date(htr_dischargedate)                             AS dischargedate") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno)") \
_T(" WHERE htr_status='I' and htr_outpatient='N')") \
_T(" WHERE admitdate < cast_string2timestamp('%s')") \
_T(" UNION") \
_T(" SELECT * ") \
_T(" FROM(SELECT htr_deptid,") \
_T("            hd_docno          AS docno,") \
_T("            hd_object,") \
_T("            trunc_date(htr_admitdate)                                 AS admitdate,") \
_T("            trunc_date(htr_dischargedate)                             AS dischargedate") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno)") \
_T(" WHERE htr_status='T' and htr_outpatient='N'") \
_T(" UNION") \
_T(" SELECT htr_ctdeptid,") \
_T("        hd_docno          AS docno,") \
_T("        hd_object,") \
_T("        trunc_date(htr_admitdate)                                 AS admitdate,") \
_T("        trunc_date(htr_dischargedate)                             AS dischargedate") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hd_docno)") \
_T(" WHERE htr_status='T' and htr_outpatient='N'") \
_T(" )") \
_T(" WHERE admitdate < cast_string2timestamp('%s') and dischargedate >= cast_string2timestamp('%s')) ") \
_T(" WHERE deptid is not null") \
_T(" UNION ALL") \
_T(" SELECT 11 type,2 id,hcr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE hcr_status <> 'A' AND htr_outpatient='N'") \
_T(" 	AND htr_admitdate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')") \
_T(" ))"),m_szFromDate,
		 m_szFromDate,m_szToDate,
		 m_szFromDate,m_szToDate);
	return szSQL;
}

CString CBCTINHHINHTHUDUNG::GetQueryString2(){
	CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szWhere;
	szSQL.Format(_T(" SELECT sum(c1) as c1,") \
_T(" 			 sum(c2) as c2,") \
_T(" 			 sum(c3) as c3,") \
_T(" 			 sum(c4) as c4,") \
_T(" 			 sum(c5) as c5,") \
_T(" 			 sum(c6) as c6,") \
_T(" 			 sum(c7) as c7,") \
_T(" 			 sum(c8) as c8,") \
_T(" 			 sum(c9) as c9,") \
_T(" 			 sum(c10) as c10,") \
_T(" 			 sum(c11) as c11,") \
_T(" 			 sum(c12) as c12      ") \
_T(" FROM") \
_T(" (SELECT type,id,") \
_T("        case when hd_object=1 then 1 else 0 end as c1,") \
_T(" 			 case when hd_object=11 then 1 else 0 end as c2,") \
_T(" 			 case when hd_object=10 then 1 else 0 end as c3,") \
_T(" 			 case when hd_object=2 then 1 else 0 end as c4,") \
_T(" 			 case when hd_object=8 then 1 else 0 end as c5,") \
_T(" 			 case when hd_object in(6,9) then 1 else 0 end as c6,") \
_T(" 			 case when hd_object=3 then 1 else 0 end as c7,") \
_T(" 			 case when hd_object=7 then 1 else 0 end as c8,") \
_T(" 			 case when hd_object=4 then 1 else 0 end as c9,") \
_T(" 			 case when hd_object=5 then 1 else 0 end as c10,") \
_T(" 			 case when hd_object=12 then 1 else 0 end as c11,") \
_T(" 			 1 as c12 ") \
_T(" FROM(SELECT 12 type,3 id,hcr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE htr_outpatient='N'") \
_T(" 	AND htr_status='T' AND htr_suggestion <> 'M' AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')") \
_T(" UNION ALL") \
_T(" SELECT 12 type,4 id,hcr_docno as docno,hd_object") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
_T(" LEFT JOIN hms_treatment_record ON(htr_docno =hd_docno)") \
_T(" WHERE htr_outpatient='N'") \
_T(" 	AND htr_status='T' AND htr_suggestion = 'T' AND hcr_result IN ( 5, 6 ) ") \
_T("   AND htr_dischargedate BETWEEN cast_string2timestamp('%s') AND cast_string2timestamp('%s')") \
_T(" ))"),m_szFromDate,m_szToDate,
		m_szFromDate,m_szToDate);
	return szSQL;
}

