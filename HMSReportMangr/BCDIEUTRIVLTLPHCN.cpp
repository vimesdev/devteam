#include "BCDIEUTRIVLTLPHCN.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDIEUTRIVLTLPHCN *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CBCDIEUTRIVLTLPHCN *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CBCDIEUTRIVLTLPHCN *pVw = (CBCDIEUTRIVLTLPHCN *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CBCDIEUTRIVLTLPHCN *pVw = (CBCDIEUTRIVLTLPHCN *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CBCDIEUTRIVLTLPHCN *pVw = (CBCDIEUTRIVLTLPHCN *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CBCDIEUTRIVLTLPHCN*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CBCDIEUTRIVLTLPHCN*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnListDeleteItem();
} 
static int _OnAddBCDIEUTRIVLTLPHCNFnc(CWnd *pWnd){
	 return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnAddBCDIEUTRIVLTLPHCN();
} 
static int _OnEditBCDIEUTRIVLTLPHCNFnc(CWnd *pWnd){
	 return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnEditBCDIEUTRIVLTLPHCN();
} 
static int _OnDeleteBCDIEUTRIVLTLPHCNFnc(CWnd *pWnd){
	 return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnDeleteBCDIEUTRIVLTLPHCN();
} 
static int _OnSaveBCDIEUTRIVLTLPHCNFnc(CWnd *pWnd){
	 return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnSaveBCDIEUTRIVLTLPHCN();
} 
static int _OnCancelBCDIEUTRIVLTLPHCNFnc(CWnd *pWnd){
	 return ((CBCDIEUTRIVLTLPHCN*)pWnd)->OnCancelBCDIEUTRIVLTLPHCN();
} 
CBCDIEUTRIVLTLPHCN::CBCDIEUTRIVLTLPHCN(){

	m_nDlgWidth = 1021;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CBCDIEUTRIVLTLPHCN::~CBCDIEUTRIVLTLPHCN(){
}
void CBCDIEUTRIVLTLPHCN::OnCreateComponents(){
	m_wndReportFilterInfo.Create(this, _T("Report Condition"), 3, 6, 1012, 61);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndLoad.Create(this, _T("&Load"), 430, 30, 520, 55);
	m_wndPrint.Create(this, _T("&Print"), 525, 30, 615, 55);
	m_wndExport.Create(this, _T("&Export"), 620, 30, 710, 55);
	m_wndList.Create(this,3, 64, 1012, 614); 

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Qu\xE2n"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("BHQN"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(4, _T("\x42HQ\x110"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("BHQH"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("\x42\x1EA0N"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("Tr\x1EBB<6T"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(8, _T("CS"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(9, _T("\x44\xE2n thu VP"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(10, _T("BHYT kh\xE1\x63"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(11, _T("BHTN"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("T\x1ED5ng s\x1ED1"), CFMT_TEXT, 70);

}
void CBCDIEUTRIVLTLPHCN::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);



}
void CBCDIEUTRIVLTLPHCN::OnSetWindowEvents(){
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
void CBCDIEUTRIVLTLPHCN::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CBCDIEUTRIVLTLPHCN::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CBCDIEUTRIVLTLPHCN::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CBCDIEUTRIVLTLPHCN::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CBCDIEUTRIVLTLPHCN::SetMode(int nMode){
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
/*void CBCDIEUTRIVLTLPHCN::OnFromDateChange(){
	
} */
/*void CBCDIEUTRIVLTLPHCN::OnFromDateSetfocus(){
	
} */
/*void CBCDIEUTRIVLTLPHCN::OnFromDateKillfocus(){
	
} */
int CBCDIEUTRIVLTLPHCN::OnFromDateCheckValue(){
	return 0;
} 
/*void CBCDIEUTRIVLTLPHCN::OnToDateChange(){
	
} */
/*void CBCDIEUTRIVLTLPHCN::OnToDateSetfocus(){
	
} */
/*void CBCDIEUTRIVLTLPHCN::OnToDateKillfocus(){
	
} */
int CBCDIEUTRIVLTLPHCN::OnToDateCheckValue(){
	return 0;
} 
void CBCDIEUTRIVLTLPHCN::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDIEUTRIVLTLPHCN::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDIEUTRIVLTLPHCN::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CBCDIEUTRIVLTLPHCN::OnListDblClick(){
	
} 
void CBCDIEUTRIVLTLPHCN::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CBCDIEUTRIVLTLPHCN::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CBCDIEUTRIVLTLPHCN::OnListLoadData(){
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
int CBCDIEUTRIVLTLPHCN::OnAddBCDIEUTRIVLTLPHCN(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CBCDIEUTRIVLTLPHCN::OnEditBCDIEUTRIVLTLPHCN(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CBCDIEUTRIVLTLPHCN::OnDeleteBCDIEUTRIVLTLPHCN(){
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
 		OnCancelBCDIEUTRIVLTLPHCN();
 	}
	return 0;
}
int CBCDIEUTRIVLTLPHCN::OnSaveBCDIEUTRIVLTLPHCN(){
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
 		//OnBCDIEUTRIVLTLPHCNListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CBCDIEUTRIVLTLPHCN::OnCancelBCDIEUTRIVLTLPHCN(){
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
int CBCDIEUTRIVLTLPHCN::OnBCDIEUTRIVLTLPHCNListLoadData(){
	return 0;
}
