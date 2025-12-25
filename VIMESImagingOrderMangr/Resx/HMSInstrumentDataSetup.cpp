#include "HMSInstrumentDataSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInstrumentDataSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInstrumentDataSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInstrumentDataSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetup*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetup *pVw = (CHMSInstrumentDataSetup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInstrumentDataSetup *pVw = (CHMSInstrumentDataSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInstrumentDataSetupFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetup*)pWnd)->OnAddHMSInstrumentDataSetup();
} 
static int _OnEditHMSInstrumentDataSetupFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetup*)pWnd)->OnEditHMSInstrumentDataSetup();
} 
static int _OnDeleteHMSInstrumentDataSetupFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetup*)pWnd)->OnDeleteHMSInstrumentDataSetup();
} 
static int _OnSaveHMSInstrumentDataSetupFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetup*)pWnd)->OnSaveHMSInstrumentDataSetup();
} 
static int _OnCancelHMSInstrumentDataSetupFnc(CWnd *pWnd){
	 return ((CHMSInstrumentDataSetup*)pWnd)->OnCancelHMSInstrumentDataSetup();
} 
CHMSInstrumentDataSetup::CHMSInstrumentDataSetup(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 545;
	SetDefaultValues();
}
CHMSInstrumentDataSetup::~CHMSInstrumentDataSetup(){
}
void CHMSInstrumentDataSetup::OnCreateComponents(){
	m_wndInstrumentDataInformation.Create(this, _T("Instrument Data Information"), 5, 5, 799, 513);
	m_wndList.Create(this,10, 28, 795, 508); 
	m_wndApply.Create(this, _T("&Apply"), 655, 518, 725, 540);
	m_wndClose.Create(this, _T("&Close"), 730, 518, 800, 540);

}
void CHMSInstrumentDataSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Test ID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Code In"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(4, _T("Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(5, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Male Index"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Female Index"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(8, _T("Min Index"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(9, _T("Max Index"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(10, _T("Print Index"), CFMT_NUMBER, 75);
	m_hms_instrument_itemTbl.SetTableName(_T("hms_instrument_item"));
	m_hms_instrument_itemTbl.AddField(_T("hii_instrumentid"), dfLong); 
	m_hms_instrument_itemTbl.AddField(_T("hii_index"), dfLong); 
	m_hms_instrument_itemTbl.AddField(_T("hii_code"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_codein"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_testid"), dfText, 7); 
	m_hms_instrument_itemTbl.AddField(_T("hii_name"), dfText, 35); 
	m_hms_instrument_itemTbl.AddField(_T("hii_unit"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_fnorm"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_mnorm"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_min"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_max"), dfText, 15); 
	m_hms_instrument_itemTbl.AddField(_T("hii_print"), dfLong); 
	m_hms_instrument_itemTbl.AddField(_T("hii_active"), dfText, 1); 

}
void CHMSInstrumentDataSetup::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSInstrumentDataSetup::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSInstrumentDataSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInstrumentDataSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInstrumentDataSetup::SetDefaultValues(){


}
int CHMSInstrumentDataSetup::SetMode(int nMode){ 
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
void CHMSInstrumentDataSetup::OnListDblClick(){
	
} 
void CHMSInstrumentDataSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentDataSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInstrumentDataSetup::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("TestID")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("CodeIn")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("MaleIndex")), 
			rs.GetValue(_T("FemaleIndex")), 
			rs.GetValue(_T("MinIndex")), 
			rs.GetValue(_T("MaxIndex")), 
			rs.GetValue(_T("PrintIndex")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSInstrumentDataSetup::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInstrumentDataSetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInstrumentDataSetup::OnAddHMSInstrumentDataSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSInstrumentDataSetup"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSInstrumentDataSetup::OnEditHMSInstrumentDataSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSInstrumentDataSetup"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSInstrumentDataSetup::OnDeleteHMSInstrumentDataSetup(){
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
 		OnCancelHMSInstrumentDataSetup(); 
 	}
return 0;
 } 
int CHMSInstrumentDataSetup::OnSaveHMSInstrumentDataSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_instrument_itemTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_instrument_itemTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSInstrumentDataSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInstrumentDataSetup::OnCancelHMSInstrumentDataSetup(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSInstrumentDataSetup::OnHMSInstrumentDataSetupListLoadData(){
	return 0;
}
