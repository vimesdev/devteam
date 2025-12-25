#include "BCMAUVACHEPHAM.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAM *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAM *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCMAUVACHEPHAM *pVw = (CBCMAUVACHEPHAM *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCMAUVACHEPHAM *pVw = (CBCMAUVACHEPHAM *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCMAUVACHEPHAM *pVw = (CBCMAUVACHEPHAM *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCMAUVACHEPHAM*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCMAUVACHEPHAM*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCMAUVACHEPHAM*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAM*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCMAUVACHEPHAMFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAM*)pWnd)->OnAddBCMAUVACHEPHAM();
} 
static int _OnEditBCMAUVACHEPHAMFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAM*)pWnd)->OnEditBCMAUVACHEPHAM();
} 
static int _OnDeleteBCMAUVACHEPHAMFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAM*)pWnd)->OnDeleteBCMAUVACHEPHAM();
} 
static int _OnSaveBCMAUVACHEPHAMFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAM*)pWnd)->OnSaveBCMAUVACHEPHAM();
} 
static int _OnCancelBCMAUVACHEPHAMFnc(CWnd *pWnd){
	 return ((CBCMAUVACHEPHAM*)pWnd)->OnCancelBCMAUVACHEPHAM();
} 
CBCMAUVACHEPHAM::CBCMAUVACHEPHAM(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCMAUVACHEPHAM::~CBCMAUVACHEPHAM(){
}
void CBCMAUVACHEPHAM::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

	CString tmpStr;
	m_wndList.ModifyStyle(4, LVS_NOSORTHEADER);
	m_wndList.GetHeaderControl()->SetItemHeight(3);
	m_wndList.SetDisplayColor(true);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);

	m_wndList.InsertColumn(1, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), CFMT_TEXT, 70);

	m_wndList.InsertColumn(2, _T("S\x1ED1 ng\x1B0\x1EDDi"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(3, _T("250"), CFMT_NUMBER, 65);
	m_wndList.InsertColumn(4, _T("350"), CFMT_NUMBER, 65);
	TranslateString(_T("S\x1ED1 l\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 3, 2, 4, false, true);
	m_wndList.InsertColumn(5, _T("S\x1ED1 l\x1B0\x1EE3ng(ml)"), CFMT_NUMBER, 85);
	TranslateString(_T("M\xE1u to\xE0n ph\x1EA7n v\xE0 kh\x1ED1i h\x1ED3ng \x63\x1EA7u"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 2, 1, 5, false, true);

	m_wndList.InsertColumn(6, _T("S\x1ED1 ng\x1B0\x1EDDi"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(7, _T("150"), CFMT_NUMBER, 75);	
	m_wndList.InsertColumn(8, _T("250"), CFMT_NUMBER, 75);
	TranslateString(_T("S\x1ED1 l\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 7, 2, 8, false, true);
	m_wndList.InsertColumn(9, _T("S\x1ED1 l\x1B0\x1EE3ng"), CFMT_NUMBER, 75);
	TranslateString(_T("Huy\x1EBFt t\x1B0\x1A1ng"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 6, 1, 9, false, true);

	m_wndList.InsertColumn(10, _T("S\x1ED1 ng\x1B0\x1EDDi"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(11, _T("TC M\xE1y"), CFMT_NUMBER, 75);	
	m_wndList.InsertColumn(12, _T("TC Pool"), CFMT_NUMBER, 75);
	TranslateString(_T("S\x1ED1 l\x1EA7n"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 1, 11, 2, 12, false, true);
	m_wndList.InsertColumn(13, _T("S\x1ED1 l\x1B0\x1EE3ng"), CFMT_NUMBER, 75);
	TranslateString(_T("Ti\x1EC3u \x63\x1EA7u"), tmpStr);
	m_wndList.GetHeaderControl()->MergeCell(tmpStr, 0, 10, 1, 13, false, true);

	m_wndList.InsertColumn(14, _T("T\x1ED5ng s\x1ED1 ng\x1B0\x1EDDi"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(15, _T("T\x1ED5ng s\x1ED1 l\x1EA7n"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(16, _T("T\x1ED5ng s\x1ED1 l\x1B0\x1EE3ng"), CFMT_NUMBER, 100);
}
void CBCMAUVACHEPHAM::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCMAUVACHEPHAM::OnSetWindowEvents(){
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
void CBCMAUVACHEPHAM::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCMAUVACHEPHAM::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCMAUVACHEPHAM::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCMAUVACHEPHAM::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCMAUVACHEPHAM::SetMode(int nMode){
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
/*void CBCMAUVACHEPHAM::OnFromDateChange(){
	
} */
/*void CBCMAUVACHEPHAM::OnFromDateSetfocus(){
	
} */
/*void CBCMAUVACHEPHAM::OnFromDateKillfocus(){
	
} */
int CBCMAUVACHEPHAM::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCMAUVACHEPHAM::OnToDateChange(){
	
} */
/*void CBCMAUVACHEPHAM::OnToDateSetfocus(){
	
} */
/*void CBCMAUVACHEPHAM::OnToDateKillfocus(){
	
} */
int CBCMAUVACHEPHAM::OnToDateCheckValue(){
	return 0;
} 
void CBCMAUVACHEPHAM::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCMAUVACHEPHAM::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCMAUVACHEPHAM::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCMAUVACHEPHAM::OnListDblClick(){
	
} 
void CBCMAUVACHEPHAM::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCMAUVACHEPHAM::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCMAUVACHEPHAM::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CBCMAUVACHEPHAM::OnAddBCMAUVACHEPHAM(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCMAUVACHEPHAM::OnEditBCMAUVACHEPHAM(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCMAUVACHEPHAM::OnDeleteBCMAUVACHEPHAM(){
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
 		OnCancelBCMAUVACHEPHAM();
 	}
	return 0;
}
int CBCMAUVACHEPHAM::OnSaveBCMAUVACHEPHAM(){
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
 		//OnBCMAUVACHEPHAMListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCMAUVACHEPHAM::OnCancelBCMAUVACHEPHAM(){
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
int CBCMAUVACHEPHAM::OnBCMAUVACHEPHAMListLoadData(){
	return 0;
}
