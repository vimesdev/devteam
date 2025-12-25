#include "HMSMaterialconsumptiondetailpatient.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMaterialconsumptiondetailpatient *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSMaterialconsumptiondetailpatient *pVw = (CHMSMaterialconsumptiondetailpatient *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSMaterialconsumptiondetailpatient *pVw = (CHMSMaterialconsumptiondetailpatient *)pWnd;
	pVw->OnLoadSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSMaterialconsumptiondetailpatient *pVw = (CHMSMaterialconsumptiondetailpatient *)pWnd;
	pVw->OnExportSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnListDeleteItem();
} 
static void _OnFacCheckSelectFnc(CWnd *pWnd){
	 ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnFacCheckSelect();
}
static int _OnAddHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnAddHMSMaterialconsumptiondetailpatient();
} 
static int _OnEditHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnEditHMSMaterialconsumptiondetailpatient();
} 
static int _OnDeleteHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnDeleteHMSMaterialconsumptiondetailpatient();
} 
static int _OnSaveHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnSaveHMSMaterialconsumptiondetailpatient();
} 
static int _OnCancelHMSMaterialconsumptiondetailpatientFnc(CWnd *pWnd){
	 return ((CHMSMaterialconsumptiondetailpatient*)pWnd)->OnCancelHMSMaterialconsumptiondetailpatient();
} 
CHMSMaterialconsumptiondetailpatient::CHMSMaterialconsumptiondetailpatient(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 955;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSMaterialconsumptiondetailpatient::~CHMSMaterialconsumptiondetailpatient(){
}
void CHMSMaterialconsumptiondetailpatient::OnCreateComponents(){
	m_wndReportCriteria.Create(this, _T("Report criteria"), 5, 5, 945, 595);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 280, 55);
	m_wndToDate.Create(this,285, 30, 365, 55); 
	m_wndPrint.Create(this, _T("&Print"), 775, 30, 855, 55);
	m_wndLoad.Create(this, _T("Load"), 690, 30, 770, 55);
	m_wndExport.Create(this, _T("&Export"), 860, 30, 940, 55);
	m_wndList.Create(this,10, 60, 940, 590); 
	m_wndFacCheck.Create(this, _T("All Fac"), 370, 30, 590, 55);

}
void CHMSMaterialconsumptiondetailpatient::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);



}
void CHMSMaterialconsumptiondetailpatient::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFacCheck.SetEvent(WE_CLICK, _OnFacCheckSelectFnc);

}
void CHMSMaterialconsumptiondetailpatient::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndFacCheck.GetDlgCtrlID(), m_bFacCheck);

}
void CHMSMaterialconsumptiondetailpatient::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMaterialconsumptiondetailpatient::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMaterialconsumptiondetailpatient::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bFacCheck=FALSE;

}
int CHMSMaterialconsumptiondetailpatient::SetMode(int nMode){
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
/*void CHMSMaterialconsumptiondetailpatient::OnFromDateChange(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnFromDateSetfocus(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnFromDateKillfocus(){
	
} */
int CHMSMaterialconsumptiondetailpatient::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSMaterialconsumptiondetailpatient::OnToDateChange(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnToDateSetfocus(){
	
} */
/*void CHMSMaterialconsumptiondetailpatient::OnToDateKillfocus(){
	
} */
int CHMSMaterialconsumptiondetailpatient::OnToDateCheckValue(){
	return 0;
} 
void CHMSMaterialconsumptiondetailpatient::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMaterialconsumptiondetailpatient::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMaterialconsumptiondetailpatient::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMaterialconsumptiondetailpatient::OnListDblClick(){
	
} 
void CHMSMaterialconsumptiondetailpatient::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMaterialconsumptiondetailpatient::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMaterialconsumptiondetailpatient::OnListLoadData(){
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
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
	void CHMSMaterialconsumptiondetailpatient::OnFacCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSMaterialconsumptiondetailpatient::OnAddHMSMaterialconsumptiondetailpatient(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMaterialconsumptiondetailpatient::OnEditHMSMaterialconsumptiondetailpatient(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMaterialconsumptiondetailpatient::OnDeleteHMSMaterialconsumptiondetailpatient(){
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
 		OnCancelHMSMaterialconsumptiondetailpatient(); 
 	}
	return 0;
}
int CHMSMaterialconsumptiondetailpatient::OnSaveHMSMaterialconsumptiondetailpatient(){
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
 		//OnHMSMaterialconsumptiondetailpatientListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMaterialconsumptiondetailpatient::OnCancelHMSMaterialconsumptiondetailpatient(){
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
int CHMSMaterialconsumptiondetailpatient::OnHMSMaterialconsumptiondetailpatientListLoadData(){
	return 0;
}
