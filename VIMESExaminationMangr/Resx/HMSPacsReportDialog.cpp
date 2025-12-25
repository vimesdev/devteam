#include "HMSPacsReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSPacsReportDialog *pVw = (CHMSPacsReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPacsReportDialog *pVw = (CHMSPacsReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSPacsReportDialog *pVw = (CHMSPacsReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPacsReportDialog *pVw = (CHMSPacsReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPacsReportDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPacsReportDialog* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPacsReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnTestGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPacsReportDialog* )pWnd)->OnTestGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTestGroupSelendokFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnTestGroupSelendok();
}
/*static void _OnTestGroupSetfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnTestGroupKillfocus();
}*/
/*static void _OnTestGroupKillfocusFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnTestGroupKillfocus();
}*/
static long _OnTestGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog *)pWnd)->OnTestGroupLoadData();
}
/*static void _OnTestGroupAddNewFnc(CWnd *pWnd){
	((CHMSPacsReportDialog *)pWnd)->OnTestGroupAddNew();
}*/
static void _OnOrderDateSelectFnc(CWnd *pWnd){
	  ((CHMSPacsReportDialog*)pWnd)->OnOrderDateSelect();
}
static void _OnPerformDateSelectFnc(CWnd *pWnd){
	  ((CHMSPacsReportDialog*)pWnd)->OnPerformDateSelect();
}
static long _OnListItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSPacsReportDialog*)pWnd)->OnListItemLoadData();
} 
static void _OnListItemDblClickFnc(CWnd *pWnd){
	((CHMSPacsReportDialog*)pWnd)->OnListItemDblClick();
} 
static void _OnListItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPacsReportDialog*)pWnd)->OnListItemSelectChange(nOldItem, nNewItem);
} 
static int _OnListItemDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPacsReportDialog*)pWnd)->OnListItemDeleteItem();
} 
static int _OnAddHMSPacsReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPacsReportDialog*)pWnd)->OnAddHMSPacsReportDialog();
} 
static int _OnEditHMSPacsReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPacsReportDialog*)pWnd)->OnEditHMSPacsReportDialog();
} 
static int _OnDeleteHMSPacsReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPacsReportDialog*)pWnd)->OnDeleteHMSPacsReportDialog();
} 
static int _OnSaveHMSPacsReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPacsReportDialog*)pWnd)->OnSaveHMSPacsReportDialog();
} 
static int _OnCancelHMSPacsReportDialogFnc(CWnd *pWnd){
	 return ((CHMSPacsReportDialog*)pWnd)->OnCancelHMSPacsReportDialog();
} 
CHMSPacsReportDialog::CHMSPacsReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 480;
	m_nDlgHeight = 480;
	SetDefaultValues();
}
CHMSPacsReportDialog::~CHMSPacsReportDialog(){
}
void CHMSPacsReportDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Filter"), 5, 5, 470, 442);
	m_wndFromDateLabel.Create(this, _T("From Date"), 11, 60, 111, 85);
	m_wndFromDate.Create(this,116, 60, 228, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 258, 60, 346, 85);
	m_wndToDate.Create(this,351, 60, 463, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 134, 446, 214, 471);
	m_wndPrint.Create(this, _T("&Print"), 219, 446, 299, 471);
	m_wndExport.Create(this, _T("&Export"), 304, 446, 384, 471);
	m_wndClose.Create(this, _T("&Close"), 389, 446, 469, 471);
	m_wndDepartmentLabel.Create(this, _T("Department"), 11, 90, 111, 115);
	m_wndDepartment.Create(this,116, 90, 465, 115); 
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 11, 120, 111, 145);
	m_wndPractitioner.Create(this,116, 120, 270, 145); 
	m_wndObjectLabel.Create(this, _T("Object"), 275, 120, 346, 145);
	m_wndObject.Create(this,351, 120, 465, 145); 
	m_wndTestGroupLabel.Create(this, _T("Test Group"), 10, 150, 110, 175);
	m_wndTestGroup.Create(this,115, 150, 465, 175); 
	m_wndOrderDate.Create(this, _T("Order Date"), 116, 30, 242, 55);
	m_wndPerformDate.Create(this, _T("Perform Date"), 337, 30, 463, 55);
	m_wndListItem.Create(this,10, 181, 465, 436); 

}
void CHMSPacsReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndTestGroup.SetCheckValue(true);
	m_wndTestGroup.LimitText(35);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPractitioner.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndListItem.InsertColumn(0, _T("Desc"), CFMT_TEXT, 400);

}
void CHMSPacsReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndPractitioner.SetEvent(WE_SELENDOK, _OnPractitionerSelendokFnc);
	//m_wndPractitioner.SetEvent(WE_SETFOCUS, _OnPractitionerSetfocusFnc);
	//m_wndPractitioner.SetEvent(WE_KILLFOCUS, _OnPractitionerKillfocusFnc);
	m_wndPractitioner.SetEvent(WE_SELCHANGE, _OnPractitionerSelectChangeFnc);
	m_wndPractitioner.SetEvent(WE_LOADDATA, _OnPractitionerLoadDataFnc);
	//m_wndPractitioner.SetEvent(WE_ADDNEW, _OnPractitionerAddNewFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndTestGroup.SetEvent(WE_SELENDOK, _OnTestGroupSelendokFnc);
	//m_wndTestGroup.SetEvent(WE_SETFOCUS, _OnTestGroupSetfocusFnc);
	//m_wndTestGroup.SetEvent(WE_KILLFOCUS, _OnTestGroupKillfocusFnc);
	m_wndTestGroup.SetEvent(WE_SELCHANGE, _OnTestGroupSelectChangeFnc);
	m_wndTestGroup.SetEvent(WE_LOADDATA, _OnTestGroupLoadDataFnc);
	//m_wndTestGroup.SetEvent(WE_ADDNEW, _OnTestGroupAddNewFnc);
	m_wndOrderDate.SetEvent(WE_CLICK, _OnOrderDateSelectFnc);
	m_wndPerformDate.SetEvent(WE_CLICK, _OnPerformDateSelectFnc);
	m_wndListItem.SetEvent(WE_SELCHANGE, _OnListItemSelectChangeFnc);
	m_wndListItem.SetEvent(WE_LOADDATA, _OnListItemLoadDataFnc);
	m_wndListItem.SetEvent(WE_DBLCLICK, _OnListItemDblClickFnc);
	m_wndListItem.AddEvent(1, _T("Delete"), _OnListItemDeleteItemFnc, 0, VK_DELETE, 0);

}
void CHMSPacsReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndTestGroup.GetDlgCtrlID(), m_szTestGroupKey);
	DDX_Radio(pDX, m_wndOrderDate.GetDlgCtrlID(), m_nOrderDate);
	DDX_Radio(pDX, m_wndPerformDate.GetDlgCtrlID(), m_nPerformDate);

}
void CHMSPacsReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPacsReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPacsReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szDepartmentKey.Empty();
	m_szPractitionerKey.Empty();
	m_szObjectKey.Empty();
	m_szTestGroupKey.Empty();
	m_nOrderDate=0;
	m_nPerformDate=0;

}
int CHMSPacsReportDialog::SetMode(int nMode){
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
/*void CHMSPacsReportDialog::OnFromDateChange(){
	
} */
/*void CHMSPacsReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSPacsReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSPacsReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPacsReportDialog::OnToDateChange(){
	
} */
/*void CHMSPacsReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSPacsReportDialog::OnToDateKillfocus(){
	
} */
int CHMSPacsReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSPacsReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSPacsReportDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSPacsReportDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSPacsReportDialog::OnDepartmentLoadData(){
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
/*void CHMSPacsReportDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPacsReportDialog::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnPractitionerSelendok(){
	 
}
/*void CHMSPacsReportDialog::OnPractitionerSetfocus(){
	
}*/
/*void CHMSPacsReportDialog::OnPractitionerKillfocus(){
	
}*/
long CHMSPacsReportDialog::OnPractitionerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
	};
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPacsReportDialog::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPacsReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnObjectSelendok(){
	 
}
/*void CHMSPacsReportDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSPacsReportDialog::OnObjectKillfocus(){
	
}*/
long CHMSPacsReportDialog::OnObjectLoadData(){
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
/*void CHMSPacsReportDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPacsReportDialog::OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPacsReportDialog::OnTestGroupSelendok(){
	 
}
/*void CHMSPacsReportDialog::OnTestGroupSetfocus(){
	
}*/
/*void CHMSPacsReportDialog::OnTestGroupKillfocus(){
	
}*/
long CHMSPacsReportDialog::OnTestGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
	};
	m_wndTestGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTestGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPacsReportDialog::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPacsReportDialog::OnOrderDateSelect(){
	
}
void CHMSPacsReportDialog::OnPerformDateSelect(){
	
}
void CHMSPacsReportDialog::OnListItemDblClick(){
	
} 
void CHMSPacsReportDialog::OnListItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPacsReportDialog::OnListItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPacsReportDialog::OnListItemLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListItem.BeginLoad(); 
	m_wndListItem.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListItem.AddItems(
			rs.GetValue(_T("Desc")), NULL);
		rs.MoveNext();
	}
	m_wndListItem.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSPacsReportDialog::OnAddHMSPacsReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPacsReportDialog::OnEditHMSPacsReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPacsReportDialog::OnDeleteHMSPacsReportDialog(){
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
 		OnCancelHMSPacsReportDialog(); 
 	}
	return 0;
}
int CHMSPacsReportDialog::OnSaveHMSPacsReportDialog(){
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
 		//OnHMSPacsReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPacsReportDialog::OnCancelHMSPacsReportDialog(){
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
int CHMSPacsReportDialog::OnHMSPacsReportDialogListLoadData(){
	return 0;
}
