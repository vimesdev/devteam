#include "HMSMedicalCabinetGeneralExportReportDialog.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetGeneralExportReportDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetGeneralExportReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnDrugTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMedicalCabinetGeneralExportReportDialog* )pWnd)->OnDrugTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugTypeSelendokFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeSelendok();
}
/*static void _OnDrugTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeKillfocus();
}*/
/*static void _OnDrugTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeKillfocus();
}*/
static long _OnDrugTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeLoadData();
}
/*static void _OnDrugTypeAddNewFnc(CWnd *pWnd){
	((CHMSMedicalCabinetGeneralExportReportDialog *)pWnd)->OnDrugTypeAddNew();
}*/
static void _OnSurgeryAndOperationSelectFnc(CWnd *pWnd){
	 ((CHMSMedicalCabinetGeneralExportReportDialog*)pWnd)->OnSurgeryAndOperationSelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetGeneralExportReportDialog *pVw = (CHMSMedicalCabinetGeneralExportReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetGeneralExportReportDialog *pVw = (CHMSMedicalCabinetGeneralExportReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSMedicalCabinetGeneralExportReportDialog *pVw = (CHMSMedicalCabinetGeneralExportReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetGeneralExportReportDialog*)pWnd)->OnAddHMSMedicalCabinetGeneralExportReportDialog();
} 
static int _OnEditHMSMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetGeneralExportReportDialog*)pWnd)->OnEditHMSMedicalCabinetGeneralExportReportDialog();
} 
static int _OnDeleteHMSMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetGeneralExportReportDialog*)pWnd)->OnDeleteHMSMedicalCabinetGeneralExportReportDialog();
} 
static int _OnSaveHMSMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetGeneralExportReportDialog*)pWnd)->OnSaveHMSMedicalCabinetGeneralExportReportDialog();
} 
static int _OnCancelHMSMedicalCabinetGeneralExportReportDialogFnc(CWnd *pWnd){
	 return ((CHMSMedicalCabinetGeneralExportReportDialog*)pWnd)->OnCancelHMSMedicalCabinetGeneralExportReportDialog();
} 
CHMSMedicalCabinetGeneralExportReportDialog::CHMSMedicalCabinetGeneralExportReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 255;
	SetDefaultValues();
}
CHMSMedicalCabinetGeneralExportReportDialog::~CHMSMedicalCabinetGeneralExportReportDialog(){
}
void CHMSMedicalCabinetGeneralExportReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 370, 210);
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 110, 55);
	m_wndStock.Create(this,115, 30, 365, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 255, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 10, 90, 110, 115);
	m_wndToDate.Create(this,115, 90, 255, 115); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 120, 110, 145);
	m_wndObject.Create(this,115, 120, 365, 145); 
	m_wndDrugTypeLabel.Create(this, _T("Drug Type"), 10, 150, 110, 175);
	m_wndDrugType.Create(this,115, 150, 365, 175); 
	m_wndSurgeryAndOperation.Create(this, _T("Surgery and Operation"), 114, 180, 364, 205);
	m_wndPrintPreview.Create(this, _T("&Print Preview"), 120, 215, 200, 240);
	m_wndExport.Create(this, _T("&Export"), 205, 215, 285, 240);
	m_wndClose.Create(this, _T("&Close"), 290, 215, 370, 240);

}
void CHMSMedicalCabinetGeneralExportReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndDrugType.SetCheckValue(true);
	m_wndDrugType.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndDrugType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDrugType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

}
void CHMSMedicalCabinetGeneralExportReportDialog::OnSetWindowEvents(){
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndDrugType.SetEvent(WE_SELENDOK, _OnDrugTypeSelendokFnc);
	//m_wndDrugType.SetEvent(WE_SETFOCUS, _OnDrugTypeSetfocusFnc);
	//m_wndDrugType.SetEvent(WE_KILLFOCUS, _OnDrugTypeKillfocusFnc);
	m_wndDrugType.SetEvent(WE_SELCHANGE, _OnDrugTypeSelectChangeFnc);
	m_wndDrugType.SetEvent(WE_LOADDATA, _OnDrugTypeLoadDataFnc);
	//m_wndDrugType.SetEvent(WE_ADDNEW, _OnDrugTypeAddNewFnc);
	m_wndSurgeryAndOperation.SetEvent(WE_CLICK, _OnSurgeryAndOperationSelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSMedicalCabinetGeneralExportReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndDrugType.GetDlgCtrlID(), m_szDrugTypeKey);
	DDX_Check(pDX, m_wndSurgeryAndOperation.GetDlgCtrlID(), m_bSurgeryAndOperation);

}
void CHMSMedicalCabinetGeneralExportReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMedicalCabinetGeneralExportReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMedicalCabinetGeneralExportReportDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szDrugTypeKey.Empty();
	m_bSurgeryAndOperation=FALSE;

}
int CHMSMedicalCabinetGeneralExportReportDialog::SetMode(int nMode){
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
void CHMSMedicalCabinetGeneralExportReportDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetGeneralExportReportDialog::OnStockSelendok(){
	 
}
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnStockSetfocus(){
	
}*/
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnStockKillfocus(){
	
}*/
long CHMSMedicalCabinetGeneralExportReportDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnFromDateChange(){
	
} */
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSMedicalCabinetGeneralExportReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnToDateChange(){
	
} */
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnToDateKillfocus(){
	
} */
int CHMSMedicalCabinetGeneralExportReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSMedicalCabinetGeneralExportReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetGeneralExportReportDialog::OnObjectSelendok(){
	 
}
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnObjectKillfocus(){
	
}*/
long CHMSMedicalCabinetGeneralExportReportDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMedicalCabinetGeneralExportReportDialog::OnDrugTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetGeneralExportReportDialog::OnDrugTypeSelendok(){
	 
}
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnDrugTypeSetfocus(){
	
}*/
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnDrugTypeKillfocus(){
	
}*/
long CHMSMedicalCabinetGeneralExportReportDialog::OnDrugTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugType.IsSearchKey() && !m_szDrugTypeKey.IsEmpty()){
	};
	m_wndDrugType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSMedicalCabinetGeneralExportReportDialog::OnDrugTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSMedicalCabinetGeneralExportReportDialog::OnSurgeryAndOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSMedicalCabinetGeneralExportReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetGeneralExportReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMedicalCabinetGeneralExportReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMedicalCabinetGeneralExportReportDialog::OnAddHMSMedicalCabinetGeneralExportReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMedicalCabinetGeneralExportReportDialog::OnEditHMSMedicalCabinetGeneralExportReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMedicalCabinetGeneralExportReportDialog::OnDeleteHMSMedicalCabinetGeneralExportReportDialog(){
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
 		OnCancelHMSMedicalCabinetGeneralExportReportDialog(); 
 	}
	return 0;
}
int CHMSMedicalCabinetGeneralExportReportDialog::OnSaveHMSMedicalCabinetGeneralExportReportDialog(){
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
 		//OnHMSMedicalCabinetGeneralExportReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMedicalCabinetGeneralExportReportDialog::OnCancelHMSMedicalCabinetGeneralExportReportDialog(){
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
int CHMSMedicalCabinetGeneralExportReportDialog::OnHMSMedicalCabinetGeneralExportReportDialogListLoadData(){
	return 0;
}
