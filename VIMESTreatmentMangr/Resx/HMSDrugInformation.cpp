#include "HMSDrugInformation.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugInformation *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugInformation *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CHMSDrugInformation *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugInformation *)pWnd)->OnSearchNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugInformation*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDrugInformation*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDrugInformation*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDrugInformation*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentDetailSelectFnc(CWnd *pWnd){
	 ((CHMSDrugInformation*)pWnd)->OnDepartmentDetailSelect();
}
static void _OnReturnedDrugsSelectFnc(CWnd *pWnd){
	 ((CHMSDrugInformation*)pWnd)->OnReturnedDrugsSelect();
}
static void _OnDrugLogSelectFnc(CWnd *pWnd){
	CHMSDrugInformation *pVw = (CHMSDrugInformation *)pWnd;
	pVw->OnDrugLogSelect();
} 
static void _OnPrescriptionSelectFnc(CWnd *pWnd){
	CHMSDrugInformation *pVw = (CHMSDrugInformation *)pWnd;
	pVw->OnPrescriptionSelect();
} 
static int _OnAddHMSDrugInformationFnc(CWnd *pWnd){
	 return ((CHMSDrugInformation*)pWnd)->OnAddHMSDrugInformation();
} 
static int _OnEditHMSDrugInformationFnc(CWnd *pWnd){
	 return ((CHMSDrugInformation*)pWnd)->OnEditHMSDrugInformation();
} 
static int _OnDeleteHMSDrugInformationFnc(CWnd *pWnd){
	 return ((CHMSDrugInformation*)pWnd)->OnDeleteHMSDrugInformation();
} 
static int _OnSaveHMSDrugInformationFnc(CWnd *pWnd){
	 return ((CHMSDrugInformation*)pWnd)->OnSaveHMSDrugInformation();
} 
static int _OnCancelHMSDrugInformationFnc(CWnd *pWnd){
	 return ((CHMSDrugInformation*)pWnd)->OnCancelHMSDrugInformation();
} 
CHMSDrugInformation::CHMSDrugInformation(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSDrugInformation::~CHMSDrugInformation(){
}
void CHMSDrugInformation::OnCreateComponents(){
	m_wndDrugInformation.Create(this, _T("Drug Information"), 5, 5, 615, 545);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 30, 260, 55);
	m_wndToDate.Create(this,265, 30, 345, 55); 
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 350, 30, 450, 55);
	m_wndSearchName.Create(this,455, 30, 609, 55); 
	m_wndList.Create(this,10, 60, 610, 540); 
	m_wndDepartmentDetail.Create(this, _T("Detail For Departments"), 10, 550, 190, 575);
	m_wndReturnedDrugs.Create(this, _T("Returned drugs"), 195, 550, 375, 575);
	m_wndDrugLog.Create(this, _T("&Drug Logs"), 400, 550, 510, 575);
	m_wndPrescription.Create(this, _T("&Prescription"), 515, 550, 610, 575);

}
void CHMSDrugInformation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndSearchName.SetLimitText(35);
	m_wndSearchName.SetCheckValue(true);



}
void CHMSDrugInformation::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartmentDetail.SetEvent(WE_CLICK, _OnDepartmentDetailSelectFnc);
	m_wndReturnedDrugs.SetEvent(WE_CLICK, _OnReturnedDrugsSelectFnc);
	m_wndDrugLog.SetEvent(WE_CLICK, _OnDrugLogSelectFnc);
	m_wndPrescription.SetEvent(WE_CLICK, _OnPrescriptionSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDrugInformationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDrugInformationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDrugInformationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDrugInformationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDrugInformationFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSDrugInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);
	DDX_Check(pDX, m_wndDepartmentDetail.GetDlgCtrlID(), m_bDepartmentDetail);
	DDX_Check(pDX, m_wndReturnedDrugs.GetDlgCtrlID(), m_bReturnedDrugs);

}
void CHMSDrugInformation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDrugInformation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDrugInformation::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szSearchName.Empty();
	m_bDepartmentDetail=FALSE;
	m_bReturnedDrugs=FALSE;

}
int CHMSDrugInformation::SetMode(int nMode){
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
/*void CHMSDrugInformation::OnFromDateChange(){
	
} */
/*void CHMSDrugInformation::OnFromDateSetfocus(){
	
} */
/*void CHMSDrugInformation::OnFromDateKillfocus(){
	
} */
int CHMSDrugInformation::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSDrugInformation::OnToDateChange(){
	
} */
/*void CHMSDrugInformation::OnToDateSetfocus(){
	
} */
/*void CHMSDrugInformation::OnToDateKillfocus(){
	
} */
int CHMSDrugInformation::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSDrugInformation::OnSearchNameChange(){
	
} */
/*void CHMSDrugInformation::OnSearchNameSetfocus(){
	
} */
/*void CHMSDrugInformation::OnSearchNameKillfocus(){
	
} */
int CHMSDrugInformation::OnSearchNameCheckValue(){
	return 0;
} 
void CHMSDrugInformation::OnListDblClick(){
	
} 
void CHMSDrugInformation::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDrugInformation::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDrugInformation::OnListLoadData(){
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
	void CHMSDrugInformation::OnDepartmentDetailSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDrugInformation::OnReturnedDrugsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDrugInformation::OnDrugLogSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugInformation::OnPrescriptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDrugInformation::OnAddHMSDrugInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDrugInformation::OnEditHMSDrugInformation(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDrugInformation::OnDeleteHMSDrugInformation(){
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
 		OnCancelHMSDrugInformation();
 	}
	return 0;
}
int CHMSDrugInformation::OnSaveHMSDrugInformation(){
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
 		//OnHMSDrugInformationListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDrugInformation::OnCancelHMSDrugInformation(){
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
int CHMSDrugInformation::OnHMSDrugInformationListLoadData(){
	return 0;
}
