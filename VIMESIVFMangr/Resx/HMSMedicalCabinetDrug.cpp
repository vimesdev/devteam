#include "HMSMedicalCabinetDrug.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug *)pWnd)->OnToDateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnAddDrugSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnAddDrugSelect();
} 
static void _OnDeleteDrugSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnDeleteDrugSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetDrug *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetDrug *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSheetOrderReturnSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnSheetOrderReturnSelect();
} 
static void _OnStorageDetailSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetDrug *pVw = (CHMSMedicalCabinetDrug *)pWnd;
	pVw->OnStorageDetailSelect();
} 
static int _OnAddHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnAddHMSMedicalCabinetDrug();
} 
static int _OnEditHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnEditHMSMedicalCabinetDrug();
} 
static int _OnDeleteHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnDeleteHMSMedicalCabinetDrug();
} 
static int _OnSaveHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnSaveHMSMedicalCabinetDrug();
} 
static int _OnCancelHMSMedicalCabinetDrugFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetDrug*)pWnd)->OnCancelHMSMedicalCabinetDrug();
} 
CHMSMedicalCabinetDrug::CHMSMedicalCabinetDrug(){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSMedicalCabinetDrug::~CHMSMedicalCabinetDrug(){
}
void CHMSMedicalCabinetDrug::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 999, 245);
	m_wndDrugInformation.Create(this, _T("Drug Informations"), 5, 250, 999, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 120, 55);
	m_wndFromDate.Create(this,125, 29, 245, 54); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 29, 360, 54);
	m_wndToDate.Create(this,365, 29, 485, 54); 
	m_wndLoad.Create(this, _T("@"), 765, 30, 800, 55);
	m_wndPatientList.Create(this,10, 60, 995, 240); 
	m_wndDrugList.Create(this,10, 275, 995, 565); 
	m_wndAddDrug.Create(this, _T("&Add Drug"), 585, 575, 685, 600);
	m_wndDeleteDrug.Create(this, _T("&DeleteDrug"), 690, 575, 790, 600);
	m_wndConfirm.Create(this, _T("&Confirm"), 795, 575, 895, 600);
	m_wndPrint.Create(this, _T("&Print"), 900, 575, 1000, 600);
	m_wndPatientNameLable.Create(this, _T("Patien Name"), 490, 29, 600, 54);
	m_wndPatientName.Create(this,605, 30, 760, 55); 
	m_wndSheetOrderReturn.Create(this, _T("Sheet Cabinet"), 135, 575, 260, 600);
	m_wndStorageDetail.Create(this, _T("Storage Detail"), 5, 575, 130, 600);

}
void CHMSMedicalCabinetDrug::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);





}
void CHMSMedicalCabinetDrug::OnSetWindowEvents(){
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
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddDrug.SetEvent(WE_CLICK, _OnAddDrugSelectFnc);
	m_wndDeleteDrug.SetEvent(WE_CLICK, _OnDeleteDrugSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSheetOrderReturn.SetEvent(WE_CLICK, _OnSheetOrderReturnSelectFnc);
	m_wndStorageDetail.SetEvent(WE_CLICK, _OnStorageDetailSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSMedicalCabinetDrugFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSMedicalCabinetDrugFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSMedicalCabinetDrugFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSMedicalCabinetDrugFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSMedicalCabinetDrugFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSMedicalCabinetDrug::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSMedicalCabinetDrug::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinetDrug::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinetDrug::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPatientName.Empty();

}
int CHMSMedicalCabinetDrug::SetMode(int nMode){
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
/*void CHMSMedicalCabinetDrug::OnFromDateChange(){
	
} */
/*void CHMSMedicalCabinetDrug::OnFromDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrug::OnFromDateKillfocus(){
	
} */
int CHMSMedicalCabinetDrug::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSMedicalCabinetDrug::OnToDateChange(){
	
} */
/*void CHMSMedicalCabinetDrug::OnToDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrug::OnToDateKillfocus(){
	
} */
int CHMSMedicalCabinetDrug::OnToDateCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetDrug::OnLoadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrug::OnPatientListDblClick(){
	
} 
void CHMSMedicalCabinetDrug::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetDrug::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMedicalCabinetDrug::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSMedicalCabinetDrug::OnDrugListDblClick(){
	
} 
void CHMSMedicalCabinetDrug::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetDrug::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMedicalCabinetDrug::OnDrugListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSMedicalCabinetDrug::OnAddDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrug::OnDeleteDrugSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrug::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrug::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSMedicalCabinetDrug::OnPatientNameChange(){
	
} */
/*void CHMSMedicalCabinetDrug::OnPatientNameSetfocus(){
	
} */
/*void CHMSMedicalCabinetDrug::OnPatientNameKillfocus(){
	
} */
int CHMSMedicalCabinetDrug::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetDrug::OnSheetOrderReturnSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetDrug::OnStorageDetailSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetDrug::OnAddHMSMedicalCabinetDrug(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSMedicalCabinetDrug::OnEditHMSMedicalCabinetDrug(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetDrug::OnDeleteHMSMedicalCabinetDrug(){
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
 		OnCancelHMSMedicalCabinetDrug();
 	}
	return 0;
}
int CHMSMedicalCabinetDrug::OnSaveHMSMedicalCabinetDrug(){
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
 		//OnHMSMedicalCabinetDrugListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSMedicalCabinetDrug::OnCancelHMSMedicalCabinetDrug(){
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
int CHMSMedicalCabinetDrug::OnHMSMedicalCabinetDrugListLoadData(){
	return 0;
}
