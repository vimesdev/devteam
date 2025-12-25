#include "HMSPatientSurgeryReportListDialog.h"
#include "MainFrm.h"
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnSurgeryCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnSurgeryCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeryCategorySelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategorySelendok();
}
/*static void _OnSurgeryCategorySetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
/*static void _OnSurgeryCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryKillfocus();
}*/
static long _OnSurgeryCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryLoadData();
}
/*static void _OnSurgeryCategoryAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeryCategoryAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnOperationTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnOperationTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationTypeSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnOperationTypeSelendok();
}
/*static void _OnOperationTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnOperationTypeKillfocus();
}*/
/*static void _OnOperationTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnOperationTypeKillfocus();
}*/
static long _OnOperationTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnOperationTypeLoadData();
}
/*static void _OnOperationTypeAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnOperationTypeAddNew();
}*/
static void _OnSurgeonSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPatientSurgeryReportListDialog* )pWnd)->OnSurgeonSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSurgeonSelendokFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonSelendok();
}
/*static void _OnSurgeonSetfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonKillfocus();
}*/
/*static void _OnSurgeonKillfocusFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonKillfocus();
}*/
static long _OnSurgeonLoadDataFnc(CWnd *pWnd){
	return ((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonLoadData();
}
/*static void _OnSurgeonAddNewFnc(CWnd *pWnd){
	((CHMSPatientSurgeryReportListDialog *)pWnd)->OnSurgeonAddNew();
}*/
static void _OnLoadReportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog *pVw = (CHMSPatientSurgeryReportListDialog *)pWnd;
	pVw->OnLoadReportSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog *pVw = (CHMSPatientSurgeryReportListDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPatientSurgeryReportListDialog *pVw = (CHMSPatientSurgeryReportListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnAddHMSPatientSurgeryReportListDialog();
} 
static int _OnEditHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnEditHMSPatientSurgeryReportListDialog();
} 
static int _OnDeleteHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnDeleteHMSPatientSurgeryReportListDialog();
} 
static int _OnSaveHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnSaveHMSPatientSurgeryReportListDialog();
} 
static int _OnCancelHMSPatientSurgeryReportListDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientSurgeryReportListDialog*)pWnd)->OnCancelHMSPatientSurgeryReportListDialog();
} 
CHMSPatientSurgeryReportListDialog::CHMSPatientSurgeryReportListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 275;
	SetDefaultValues();
}
CHMSPatientSurgeryReportListDialog::~CHMSPatientSurgeryReportListDialog(){
}
void CHMSPatientSurgeryReportListDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 399, 240);
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 10, 30, 130, 55);
	m_wndReportPeriod.Create(this,135, 30, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 130, 85);
	m_wndFromDate.Create(this,135, 60, 220, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 225, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 130, 115);
	m_wndObject.Create(this,135, 90, 395, 115); 
	m_wndSurgeryCategoryLabel.Create(this, _T("Surgery Category"), 10, 120, 130, 145);
	m_wndSurgeryCategory.Create(this,135, 120, 395, 145); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 150, 130, 175);
	m_wndDepartment.Create(this,135, 150, 395, 175); 
	m_wndOperationTypeLabel.Create(this, _T("Operation Type"), 10, 180, 130, 205);
	m_wndOperationType.Create(this,135, 180, 395, 205); 
	m_wndSurgeonLabel.Create(this, _T("Surgeon"), 10, 210, 130, 235);
	m_wndSurgeon.Create(this,135, 210, 395, 235); 
	m_wndLoadReport.Create(this, _T("&Load Report"), 165, 245, 240, 270);
	m_wndExport.Create(this, _T("&Export XLS"), 245, 245, 320, 270);
	m_wndClose.Create(this, _T("&Close"), 325, 245, 400, 270);

}
void CHMSPatientSurgeryReportListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndSurgeryCategory.SetCheckValue(true);
	m_wndSurgeryCategory.LimitText(35);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndOperationType.SetCheckValue(true);
	m_wndOperationType.LimitText(35);
	m_wndSurgeon.SetCheckValue(true);
	m_wndSurgeon.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSurgeryCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgeryCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndOperationType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndOperationType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSurgeon.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSurgeon.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSPatientSurgeryReportListDialog::OnSetWindowEvents(){
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
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
	m_wndSurgeryCategory.SetEvent(WE_SELENDOK, _OnSurgeryCategorySelendokFnc);
	//m_wndSurgeryCategory.SetEvent(WE_SETFOCUS, _OnSurgeryCategorySetfocusFnc);
	//m_wndSurgeryCategory.SetEvent(WE_KILLFOCUS, _OnSurgeryCategoryKillfocusFnc);
	m_wndSurgeryCategory.SetEvent(WE_SELCHANGE, _OnSurgeryCategorySelectChangeFnc);
	m_wndSurgeryCategory.SetEvent(WE_LOADDATA, _OnSurgeryCategoryLoadDataFnc);
	//m_wndSurgeryCategory.SetEvent(WE_ADDNEW, _OnSurgeryCategoryAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndOperationType.SetEvent(WE_SELENDOK, _OnOperationTypeSelendokFnc);
	//m_wndOperationType.SetEvent(WE_SETFOCUS, _OnOperationTypeSetfocusFnc);
	//m_wndOperationType.SetEvent(WE_KILLFOCUS, _OnOperationTypeKillfocusFnc);
	m_wndOperationType.SetEvent(WE_SELCHANGE, _OnOperationTypeSelectChangeFnc);
	m_wndOperationType.SetEvent(WE_LOADDATA, _OnOperationTypeLoadDataFnc);
	//m_wndOperationType.SetEvent(WE_ADDNEW, _OnOperationTypeAddNewFnc);
	m_wndSurgeon.SetEvent(WE_SELENDOK, _OnSurgeonSelendokFnc);
	//m_wndSurgeon.SetEvent(WE_SETFOCUS, _OnSurgeonSetfocusFnc);
	//m_wndSurgeon.SetEvent(WE_KILLFOCUS, _OnSurgeonKillfocusFnc);
	m_wndSurgeon.SetEvent(WE_SELCHANGE, _OnSurgeonSelectChangeFnc);
	m_wndSurgeon.SetEvent(WE_LOADDATA, _OnSurgeonLoadDataFnc);
	//m_wndSurgeon.SetEvent(WE_ADDNEW, _OnSurgeonAddNewFnc);
	m_wndLoadReport.SetEvent(WE_CLICK, _OnLoadReportSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSPatientSurgeryReportListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndSurgeryCategory.GetDlgCtrlID(), m_szSurgeryCategoryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndOperationType.GetDlgCtrlID(), m_szOperationTypeKey);
	DDX_TextEx(pDX, m_wndSurgeon.GetDlgCtrlID(), m_szSurgeonKey);

}
void CHMSPatientSurgeryReportListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientSurgeryReportListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientSurgeryReportListDialog::SetDefaultValues(){

	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szSurgeryCategoryKey.Empty();
	m_szDepartmentKey.Empty();
	m_szOperationTypeKey.Empty();
	m_szSurgeonKey.Empty();

}
int CHMSPatientSurgeryReportListDialog::SetMode(int nMode){
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
void CHMSPatientSurgeryReportListDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnReportPeriodSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientSurgeryReportListDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnFromDateChange(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnFromDateKillfocus(){
	
} */
int CHMSPatientSurgeryReportListDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPatientSurgeryReportListDialog::OnToDateChange(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnToDateSetfocus(){
	
} */
/*void CHMSPatientSurgeryReportListDialog::OnToDateKillfocus(){
	
} */
int CHMSPatientSurgeryReportListDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSPatientSurgeryReportListDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnObjectSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnObjectKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnObjectLoadData(){
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
/*void CHMSPatientSurgeryReportListDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnSurgeryCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnSurgeryCategorySelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryCategorySetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryCategoryKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnSurgeryCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeryCategory.IsSearchKey() && !m_szSurgeryCategoryKey.IsEmpty()){
	};
	m_wndSurgeryCategory.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeryCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeryCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientSurgeryReportListDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnOperationTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnOperationTypeSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnOperationTypeSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnOperationTypeKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnOperationTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationType.IsSearchKey() && !m_szOperationTypeKey.IsEmpty()){
	};
	m_wndOperationType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientSurgeryReportListDialog::OnOperationTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnSurgeonSelendok(){
	 
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeonSetfocus(){
	
}*/
/*void CHMSPatientSurgeryReportListDialog::OnSurgeonKillfocus(){
	
}*/
long CHMSPatientSurgeryReportListDialog::OnSurgeonLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSurgeon.IsSearchKey() && !m_szSurgeonKey.IsEmpty()){
	};
	m_wndSurgeon.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSurgeon.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPatientSurgeryReportListDialog::OnSurgeonAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPatientSurgeryReportListDialog::OnLoadReportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientSurgeryReportListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientSurgeryReportListDialog::OnAddHMSPatientSurgeryReportListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientSurgeryReportListDialog::OnEditHMSPatientSurgeryReportListDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientSurgeryReportListDialog::OnDeleteHMSPatientSurgeryReportListDialog(){
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
 		OnCancelHMSPatientSurgeryReportListDialog(); 
 	}
	return 0;
}
int CHMSPatientSurgeryReportListDialog::OnSaveHMSPatientSurgeryReportListDialog(){
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
 		//OnHMSPatientSurgeryReportListDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientSurgeryReportListDialog::OnCancelHMSPatientSurgeryReportListDialog(){
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
int CHMSPatientSurgeryReportListDialog::OnHMSPatientSurgeryReportListDialogListLoadData(){
	return 0;
}
