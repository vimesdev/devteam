#include "POAutoCreateItemDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog *)pWnd)->OnPatientNameCheckValue();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnPatientListDeleteItem();
} 
static long _OnMaterialListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListLoadData();
} 
static void _OnMaterialListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListDblClick();
} 
static void _OnMaterialListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListSelectChange(nOldItem, nNewItem);
} 
static int _OnMaterialListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnMaterialListDeleteItem();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog *pVw = (CPOAutoCreateItemDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPOAutoCreateItemDialog *pVw = (CPOAutoCreateItemDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnAddPOAutoCreateItemDialog();
} 
static int _OnEditPOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnEditPOAutoCreateItemDialog();
} 
static int _OnDeletePOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnDeletePOAutoCreateItemDialog();
} 
static int _OnSavePOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnSavePOAutoCreateItemDialog();
} 
static int _OnCancelPOAutoCreateItemDialogFnc(CWnd *pWnd){
	 return ((CPOAutoCreateItemDialog*)pWnd)->OnCancelPOAutoCreateItemDialog();
} 
CPOAutoCreateItemDialog::CPOAutoCreateItemDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPOAutoCreateItemDialog::~CPOAutoCreateItemDialog(){
}
void CPOAutoCreateItemDialog::OnCreateComponents(){
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 475, 570);
	m_wndSelectedItems.Create(this, _T("Selected Items"), 480, 5, 960, 570);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 130, 55);
	m_wndFromDate.Create(this,135, 30, 235, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 240, 30, 360, 55);
	m_wndToDate.Create(this,365, 30, 465, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 10, 60, 130, 85);
	m_wndDocumentNo.Create(this,135, 60, 235, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 240, 60, 360, 85);
	m_wndPatientName.Create(this,365, 60, 465, 85); 
	m_wndPatientList.Create(this,10, 90, 470, 280); 
	m_wndMaterialList.Create(this,10, 285, 470, 564); 
	m_wndSelectedList.Create(this,485, 29, 955, 564); 
	m_wndApply.Create(this, _T("&Apply"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);

}
void CPOAutoCreateItemDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);


	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 90);
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(3, _T("YOB"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(4, _T("Sex"), CFMT_TEXT, 40);
	m_wndPatientList.InsertColumn(5, _T("Department"), CFMT_TEXT, 70);


	m_wndMaterialList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndMaterialList.InsertColumn(1, _T("Material Name"), CFMT_TEXT, 280);
	m_wndMaterialList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 60);
	m_wndMaterialList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 40);
	m_wndMaterialList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndMaterialList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);


	m_wndSelectedList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndSelectedList.InsertColumn(1, _T("Material Name"), CFMT_TEXT, 280);
	m_wndSelectedList.InsertColumn(2, _T("Uom"), CFMT_TEXT, 60);
	m_wndSelectedList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 40);
	m_wndSelectedList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 80);
	m_wndSelectedList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 90);

}
void CPOAutoCreateItemDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMaterialList.SetEvent(WE_SELCHANGE, _OnMaterialListSelectChangeFnc);
	m_wndMaterialList.SetEvent(WE_LOADDATA, _OnMaterialListLoadDataFnc);
	m_wndMaterialList.SetEvent(WE_DBLCLICK, _OnMaterialListDblClickFnc);
	m_wndMaterialList.AddEvent(1, _T("Delete"), _OnMaterialListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPOAutoCreateItemDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CPOAutoCreateItemDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPOAutoCreateItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPOAutoCreateItemDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocumentNo=0;
	m_szPatientName.Empty();

}
int CPOAutoCreateItemDialog::SetMode(int nMode){
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
/*void CPOAutoCreateItemDialog::OnFromDateChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnFromDateSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnFromDateKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CPOAutoCreateItemDialog::OnToDateChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnToDateSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnToDateKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CPOAutoCreateItemDialog::OnDocumentNoChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnDocumentNoSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnDocumentNoKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CPOAutoCreateItemDialog::OnPatientNameChange(){
	
} */
/*void CPOAutoCreateItemDialog::OnPatientNameSetfocus(){
	
} */
/*void CPOAutoCreateItemDialog::OnPatientNameKillfocus(){
	
} */
int CPOAutoCreateItemDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CPOAutoCreateItemDialog::OnPatientListDblClick(){
	
} 
void CPOAutoCreateItemDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoCreateItemDialog::OnPatientListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPatientList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("YOB")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("Department")), NULL);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPOAutoCreateItemDialog::OnMaterialListDblClick(){
	
} 
void CPOAutoCreateItemDialog::OnMaterialListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog::OnMaterialListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoCreateItemDialog::OnMaterialListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMaterialList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMaterialList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("MaterialName")), 
			rs.GetValue(_T("Uom")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndMaterialList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPOAutoCreateItemDialog::OnSelectedListDblClick(){
	
} 
void CPOAutoCreateItemDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPOAutoCreateItemDialog::OnSelectedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("MaterialName")), 
			rs.GetValue(_T("Uom")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CPOAutoCreateItemDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPOAutoCreateItemDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPOAutoCreateItemDialog::OnAddPOAutoCreateItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPOAutoCreateItemDialog::OnEditPOAutoCreateItemDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPOAutoCreateItemDialog::OnDeletePOAutoCreateItemDialog(){
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
 		OnCancelPOAutoCreateItemDialog();
 	}
	return 0;
}
int CPOAutoCreateItemDialog::OnSavePOAutoCreateItemDialog(){
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
 		//OnPOAutoCreateItemDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPOAutoCreateItemDialog::OnCancelPOAutoCreateItemDialog(){
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
int CPOAutoCreateItemDialog::OnPOAutoCreateItemDialogListLoadData(){
	return 0;
}
