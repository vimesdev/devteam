#include "HMSPacsReportDialog.h"
#include "ReportDocument.h"
#include "../MainFrm.h"
#include "Excel.h"

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
static void _OnListItemClickFnc(CWnd *pWnd){
	((CHMSPacsReportDialog*)pWnd)->OnListItemClick();	
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
	//m_wndTestGroupLabel.Create(this, _T("Test Group"), 10, 150, 110, 175);
	//m_wndTestGroup.Create(this,115, 150, 465, 175); 
	m_wndOrderDate.Create(this, _T("Order Date"), 116, 30, 242, 55);
	m_wndPerformDate.Create(this, _T("Perform Date"), 337, 30, 463, 55);
	m_wndListItem.Create(this,10, 150, 465, 436); 
	

	

}
void CHMSPacsReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
//	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndTestGroup.SetCheckValue(true);
	m_wndTestGroup.LimitText(35);
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate()+ _T("23:59");

	m_wndListItem.SetCheckBox(true);
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPractitioner.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndTestGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndTestGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	
	m_wndListItem.InsertColumn(0, _T("Desc"), CFMT_TEXT, 430);
	m_wndListItem.InsertColumn(1, _T("ID"), CFMT_TEXT, 0);
	m_wndListItem.InsertColumn(2, _T("ID"), CFMT_TEXT, 0);
	m_nPerformDate=0;
	OnListItemLoadData();
	UpdateData(false);
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
	m_wndListItem.SetEvent(WE_CHECKVALUE , _OnListItemClickFnc);
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
	m_nOrderDate=1;
	m_nPerformDate=1;

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
void CHMSPacsReportDialog::OnPrintPreviewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	switch (pMF->m_nReportID)
	{
		case 1:
			PrintDanhsachbenhnhanlamCLS();
			break;
		case 2:
			PrintTonghoptheotieuban();
			break;
	};
} 
void CHMSPacsReportDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	switch (pMF->m_nReportID)
	{
		case 1:
			PrintDanhsachbenhnhanlamCLS();
			break;
		case 2:
			PrintTonghoptheotieuban();
			break;
	};
	
} 
void CHMSPacsReportDialog::OnExportSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	switch (pMF->m_nReportID)
	{
		case 1:
			OnExportParaclinicalPatient();
			break;
		case 2:
			OnExportSumBySpecimen();
			break;
	}
} 
void CHMSPacsReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
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

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T(" SELECT sd_id as id, sd_name as name from sys_dept where sd_type in('KB','DT') %s"), szWhere);
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPractitioner.IsSearchKey() && !m_szPractitionerKey.IsEmpty()){
		szWhere.Format(_T(" AND su_userid ='%s'"), m_szPractitionerKey);
	};
	szSQL.Format(_T(" SELECT su_userid as id, su_name as name from sys_user as name left join sys_dept on(sd_id=su_deptid)where sd_type in('KB','DT') %s"), szWhere);
	m_wndPractitioner.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPractitioner.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

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

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
		szWhere.Format(_T(" AND ho_id=%s"), m_szObjectKey);
	};
	szSQL.Format(_T("SELECT ho_id as id, ho_desc as name from hms_object where ho_id in('1','9','2') %s ORDER BY cast(ho_id as integer)"), szWhere);
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
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

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if(m_wndTestGroup.IsSearchKey() && !m_szTestGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id ='%s' "), m_szTestGroupKey);
	};
	szSQL.Format(_T(" select hfg_id as id, hfg_name as name from hms_feegroup  where hfg_id in('B1000','B2000','B3000') %s") , szWhere);
	m_wndTestGroup.DeleteAllItems(); 
	int i=1,nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),i++);
		m_wndTestGroup.AddItems(
			tmpStr,			
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPacsReportDialog::OnTestGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPacsReportDialog::OnOrderDateSelect(){
	
}
void CHMSPacsReportDialog::OnPerformDateSelect(){
	
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
 //_fmsg(_T("%s"), szSQL); 
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
int CHMSPacsReportDialog::OnCancelHMSPacsReportDialog()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	
 	return 0;
} 
int CHMSPacsReportDialog::OnHMSPacsReportDialogListLoadData(){
	return 0;
}
void CHMSPacsReportDialog::OnListItemDblClick()
{
	int nSel=m_wndListItem.GetCurSel();
	if (nSel < 0) return;
	if (m_bCheckAll)
		m_bCheckAll=false;
	else
		m_bCheckAll=true;
	
	if (m_wndListItem.GetItemText(nSel,2)=="*")
	{
		for (int i=nSel+1; i<= m_wndListItem.GetItemCount(); i++){
			m_wndListItem.SetCheck(i-1,m_bCheckAll);
			if (m_wndListItem.GetItemText(i,2)=="*") 
				break;			
		}
	}

}
void CHMSPacsReportDialog::OnListItemClick()
{	
	int nSel= m_wndListItem.GetCurSel();
	if (nSel < 0) return;
	if (m_bCheckAll)
		m_bCheckAll=false;
	else	
		m_bCheckAll=true;
	m_wndListItem.SetCheck(nSel,m_bCheckAll);
} 
void CHMSPacsReportDialog::OnListItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPacsReportDialog::OnListItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPacsReportDialog::OnListItemLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr,tmpName;
	m_wndListItem.BeginLoad(); 
	m_wndListItem.DeleteAllItems(); 

	szSQL.Format(_T(" select hfg_id as id, hfg_name as name from hms_feegroup  where hfg_id like ('B1%s') or hfg_id like ('B2%s') or hfg_id like ('B3%s') order by hfg_id"), _T("%"),_T("%"),_T("%"));
	
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%s"),rs.GetValue(_T("id")));
		if (tmpStr==_T("B1000") || tmpStr==_T("B2000") || tmpStr==_T("B3000"))
		{
			tmpStr=_T("*");					
			tmpName.Format(_T("+ %s"), rs.GetValue(_T("name")));			
		}
		else
		{
			tmpStr.Empty();
			tmpName.Format(_T("      - %s"), rs.GetValue(_T("name")));
		}
		m_wndListItem.AddItems(
			tmpName,
			rs.GetValue(_T("id")),
			tmpStr,NULL);
		if (tmpStr==_T("*") )
		{
			
			m_wndListItem.SetItemBkColor(m_wndListItem.GetItemCount()-1, RGB(0, 107, 239), FALSE);
			m_wndListItem.SetItemTextColor(m_wndListItem.GetItemCount()-1, COLOR_WHITE, FALSE);
			
		}
		rs.MoveNext();
	}
	m_wndListItem.EndLoad(); 
	return nCount;
}

void CHMSPacsReportDialog::PrintTonghoptheotieuban()
{	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,m_szGroups;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);

	if(!rpt.Init(_T("Reports/HMS/RPT_BAOCAOCLSTHEOTIEUBAN_CLS.RPT")) )	
	{
		return;
	}

	for (int i=0; i< m_wndListItem.GetItemCount(); i++){
		if(m_wndListItem.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	
	if (m_nPerformDate==0)
		szWhere.Format(_T(" pcmso_performdate between '%s' and '%s' and pcmso_status ='T' "), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T(" pcmso_orderdate between '%s' and '%s' and pcmso_status not in('O')"), m_szFromDate, m_szToDate);

	if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid in(%s) "), m_szGroups);

	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_deptid='%s' "), m_wndDepartment.GetCurrent(0));
	
	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_doctor='%s' "), m_wndPractitioner.GetCurrent(0));
	
	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
	
	szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_depts= hfl_deptid and hfg_id=groupid) as hfl_deptid,") \
				_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
				_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
				_T(" 	from (") \
				_T(" 		select hfl_deptid,hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
				_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
				_T(" 		from pcms_order ") \
				_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
				_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
				_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
				_T(" 		where %s") \
				_T(" 		group by hfl_deptid,groupid,pcmsname,hfl_unit,servprice, insprice") \
				_T(" ) as tb1 ") \
				_T(" where servprice > 0.0") \
				_T(" group by hfl_deptid,groupid,pcmsname,unit, servprice, insprice order by groupid;"), szWhere);

	UpdateData(false);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}	

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
//	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	tmpStr=m_wndDepartment.GetCurrent(1);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	tmpStr=m_wndPractitioner.GetCurrent(1);
	rpt.GetReportHeader()->SetValue(_T("doctor"), tmpStr);
	tmpStr=m_wndObject.GetCurrent(1);
//	if (tmpStr.IsEmpty) tmpStr=_T("Object All");
	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDate::Convert(m_szToDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CString szDate,szMoney;
	CReportSection* rptDetail;
	long double grpCost=0;
	long double ttlCost=0;
	double cost=0,costword = 0;
		
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			CString szField;
			if(grpCost > 0)
			{				
				TranslateString(_T("Total Groups"), tmpStr);
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("S6"), tmpStr);
				ttlCost += grpCost;
				nIndex=1;
				grpCost = 0;				
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(0));
			rs.GetValue(_T("hfl_deptid"), tmpStr);
			rptDetail->SetValue(_T("TestGroup"),tmpStr );
			szOldLine = szNewLine;			
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("pcmsname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("unit"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		
		rs.GetValue(_T("soluong"), cost);		
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("servprice"), cost);		
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		
		rs.GetValue(_T("sumservprice"), cost);
		grpCost += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		
		rs.MoveNext();
	}
	ttlCost += grpCost;
	
	if(grpCost > 0)
	{
		CString szField, szAmount;		
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));		
		FormatCurrency(grpCost, tmpStr);
		rptDetail->SetValue(_T("S6"), tmpStr);		
	
	}
	if(ttlCost > 0)
	{
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("TotalGroup"), szAmount);						
		FormatCurrency(ttlCost, tmpStr);
		rptDetail->SetValue(_T("S6"), tmpStr);	
		szMoney.Format(_T("%.2f"),ttlCost);
	}

	//Page Footer
	//Report Footer
	
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);			
	MoneyToString(szMoney, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), tmpStr);

	if(m_bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
	
}

void CHMSPacsReportDialog::PrintDanhsachbenhnhanlamCLS()
{	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, m_szGroups;
	szWhere.Empty();
	m_szGroups.Empty();

	if(!rpt.Init(_T("Reports/HMS/RPT_DANHSACHBENHNHANLAMCLS_CLS.RPT")) )
	{	
		return;
	}

	UpdateData(true);
	for (int i=0; i< m_wndListItem.GetItemCount(); i++){
		if(m_wndListItem.GetCheck(i)){
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	
	if (m_nPerformDate==0)		
		szWhere.Format(_T(" pcmso_performdate between '%s' and '%s' and pcmso_status ='T'"), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T(" pcmso_orderdate between '%s' and '%s' and pcmso_status not in('O')"), m_szFromDate, m_szToDate);

	if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid in(%s) "), m_szGroups);

	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_deptid='%s' "), m_wndDepartment.GetCurrent(0));
	
	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_doctor='%s' "), m_wndPractitioner.GetCurrent(0));
	
	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
		
	szSQL.Format(_T(" SELECT (SELECT hfg_name from hms_feegroup where hfg_id=pcmso_groupid) as groupid, hd_docno as docno, patname ,") \
				_T("	hp_age as age, sys_sel_getname('sys_sex',hp_sex) as sex, hc_cardno as card, to_char(resultdte, 'DD-MM-YYYY') as resultdte, ") \
				_T("	pcmso_practitioner, hp_vnaddrcde as address, sum(hfl_servprice) as cost, icd ") \
				_T(" FROM ( SELECT 	pcmso_groupid, hd_docno, ") \
				_T(" 		hp_surname||' '||hp_midname||' '||hp_firstname as patname, hms_getage(date(hd_admitdate),date(hp_birthdate)) as hp_age, hp_sex, ") \
				_T(" 		 hc_cardno, CASE WHEN pcmso_status ='S' THEN date(pcmso_orderdate) ELSE date(pcmso_performdate) END as ") \
				_T(" 		resultdte , pcmso_practitioner, hms_getaddress(hp_provid,hp_distid,hp_villid) as hp_vnaddrcde,") \
				_T("		hfl_servprice,(select hi_name from hms_icd where hi_icd=hd_icd) as icd ")\
				_T(" 	FROM hms_patient LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno) ") \
				_T("	LEFT JOIN pcms_order_line on(pcmso_orderid=pcmsol_orderid)") \
				_T("	LEFT JOIN hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)")\
				_T(" 	LEFT JOIN hms_card ON(hd_patientno=hc_patientno and hd_cardidx=hc_idx) ") \
				_T(" 	WHERE hd_docno > 0 and %s ") \
				_T(" 	) as tbl ") \
				_T(" GROUP BY  pcmso_groupid, patname, hp_age, hp_sex, hd_docno,hc_cardno,resultdte,pcmso_practitioner,hp_vnaddrcde,icd") \
				_T(" ORDER BY pcmso_groupid,patname, resultdte "),szWhere);


	UpdateData(false);
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF()){
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}
	

//	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
//	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ObjectGroup"), _T(""));
//	rpt.GetReportHeader()->SetValue(_T("ReportPeriod"), szReportPeriod);
	tmpStr=m_wndDepartment.GetCurrent(1);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	tmpStr=m_wndPractitioner.GetCurrent(1);
	rpt.GetReportHeader()->SetValue(_T("doctor"), tmpStr);
	tmpStr=m_wndObject.GetCurrent(1);
	if (tmpStr.IsEmpty()) tmpStr=_T("Object All");
	rpt.GetReportHeader()->SetValue(_T("Object"), tmpStr);
	tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportDate")), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd,ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), tmpStr);
	//Page Header
	//Report Detail
	int nIndex = 1;
	CString szOldLine, szNewLine;
	CString szField, szAmount;		
	CReportSection* rptDetail;
	long double grpCost=0.0;
	long double ttlCost=0.0;
	double cost = 0;
	
	while(!rs.IsEOF())
	{
		TranslateString(_T("Total Group"), szAmount);
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if(grpCost > 0){
				TranslateString(_T("Total Group"), szAmount);		
				rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));								
				rptDetail->SetValue(_T("TotalAmount"), szAmount);
				FormatCurrency(grpCost, tmpStr);
				rptDetail->SetValue(_T("S10"), tmpStr);
				ttlCost +=grpCost;
				grpCost=0;
			}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rs.GetValue(_T("groupid"), tmpStr);
			rptDetail->SetValue(_T("Groupname"),tmpStr );
			szOldLine = szNewLine;	
			nIndex=1;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);		
		rs.GetValue(_T("patname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);		
		rs.GetValue(_T("sex"), tmpStr);		
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("card"), tmpStr);		
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("resultdte"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);		
		rs.GetValue(_T("cost"), cost);
		grpCost += cost;
		FormatCurrency(cost, tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		rs.GetValue(_T("icd"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.MoveNext();
	}
	if (grpCost > 0)
	{
		TranslateString(_T("Total Group"), szAmount);		
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));								
		rptDetail->SetValue(_T("TotalAmount"), szAmount);
		FormatCurrency(grpCost, tmpStr);
		rptDetail->SetValue(_T("S10"), tmpStr);
		ttlCost +=grpCost;
		grpCost=0;
	}
	
	if (ttlCost > 0)
	{		
		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(0));		
		TranslateString(_T("Total Amount"), szAmount);
		rptDetail->SetValue(_T("TotalAmount"), szAmount);
		FormatCurrency(ttlCost, tmpStr);
		rptDetail->SetValue(_T("S10"), tmpStr);				
	}
	
	//Page Footer
	//Report Footer
	CString szDate;
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	if(m_bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

void CHMSPacsReportDialog::OnExportSumBySpecimen()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere,m_szGroups;
	szWhere.Empty();
	m_szGroups.Empty();
	UpdateData(true);

	for (int i=0; i< m_wndListItem.GetItemCount(); i++)
	{
		if(m_wndListItem.GetCheck(i))
		{
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	
	if (m_nPerformDate==0)
		szWhere.Format(_T(" pcmso_performdate between '%s' and '%s' and pcmso_status ='T' "), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T(" pcmso_orderdate between '%s' and '%s' and pcmso_status not in('O')"), m_szFromDate, m_szToDate);

	if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid in(%s) "), m_szGroups);

	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_deptid='%s' "), m_wndDepartment.GetCurrent(0));
	
	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_doctor='%s' "), m_wndPractitioner.GetCurrent(0));
	
	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
	
	szSQL.Format(_T(" select (select hfg_name from hms_feegroup where hfg_depts= hfl_deptid and hfg_id=groupid) as hfl_deptid,") \
				_T(" 	       groupid,pcmsname, unit, sum(soluong) as soluong, ") \
				_T(" 	       servprice, insprice,sum(soluong * servprice) as  sumservprice, sum(soluong * insprice) as suminsprice") \
				_T(" 	from (") \
				_T(" 		select hfl_deptid,hfl_groupid as groupid,hfl_name as pcmsname,hfl_unit as unit, ") \
				_T(" 			sum(1) as soluong, hfl_servprice as servprice, hfl_insprice as insprice") \
				_T(" 		from pcms_order ") \
				_T(" 		left join pcms_order_line on(pcmso_orderid=pcmsol_orderid) ") \
				_T(" 		left join hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)") \
				_T("		left join hms_doc on(hd_docno=pcmso_docno) ") \
				_T(" 		where %s") \
				_T(" 		group by hfl_deptid,groupid,pcmsname,hfl_unit,servprice, insprice") \
				_T(" ) as tb1 ") \
				_T(" where servprice > 0.0") \
				_T(" group by hfl_deptid,groupid,pcmsname,unit, servprice, insprice order by groupid;"), szWhere);

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK | MB_ICONEXCLAMATION);
		return ;
	}

	BeginWaitCursor();

	int nRow = 0;
	int nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 46);
	xls.SetColumnWidth(2, 10);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 18);
	xls.SetColumnWidth(5, 23);

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	xls.SetCellMergedColumns(nCol, nRow, 6);
	xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 12, 0);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	xls.SetCellMergedColumns(nCol, nRow + 1, 6);
	xls.SetCellText(nCol, nRow + 1, tmpStr, FMT_TEXT, true, 12, 0);
	xls.SetCellMergedColumns(nCol, nRow + 2, 6);
	xls.SetCellMergedColumns(nCol, nRow + 3, 6);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\xC1O \x43\xC1O \x43LS TH\x45O S\x1ED0 TI\xCAU \x42\x1EA2N"), FMT_TEXT, true, 16, 0);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, true, 12, 0);

	xls.SetCellMergedColumns(nCol, nRow + 5, 6);

	xls.SetCellText(nCol, nRow + 6, _T("STT"), FMT_TEXT, true, 11, 0);
	TranslateString(_T("Test Name"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	xls.SetCellText(nCol + 2, nRow + 6, _T("\x110VT"), FMT_TEXT, true, 11, 0);
	xls.SetCellText(nCol + 3, nRow + 6, _T("SL"), FMT_TEXT, true, 11, 0);
	xls.SetCellText(nCol + 4, nRow + 6, _T("\x110\x1A1n gi\xE1"), FMT_TEXT, true, 11, 0);
	TranslateString(_T("Money"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);

	int nIndex = 1;
	CString szOldLine, szNewLine;
	CString szDate, szMoney;
	long double grpCost = 0;
	long double ttlCost = 0;
	double cost = 0, costword = 0;
	
	nRow += 7;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if(grpCost > 0)
			{				
				TranslateString(_T("Total Group"), tmpStr);
				xls.SetCellMergedColumns(nCol, nRow, 3);
				xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);
				xls.SetCellText(nCol + 5, nRow, double2str(grpCost), FMT_NUMBER1, true, 11);
				ttlCost += grpCost;
				nIndex=1;
				grpCost = 0;
				nRow++;
			}

			rs.GetValue(_T("hfl_deptid"), tmpStr);
			xls.SetCellMergedColumns(nCol, nRow, 6);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 11);

			szOldLine = szNewLine;
			nRow++;
		}

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
	
		rs.GetValue(_T("pcmsname"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("unit"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("soluong"), cost);
		xls.SetCellText(nCol + 3, nRow, double2str(cost), FMT_NUMBER1);

		rs.GetValue(_T("servprice"), cost);
		xls.SetCellText(nCol + 4, nRow, double2str(cost), FMT_NUMBER1);
		
		rs.GetValue(_T("sumservprice"), cost);
		grpCost += cost;
		xls.SetCellText(nCol + 5, nRow, double2str(cost), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}
	ttlCost += grpCost;
	
	if(grpCost > 0)
	{
		CString szAmount;		
		TranslateString(_T("Total Groups"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 5, nRow, double2str(grpCost), FMT_NUMBER1, true, 11);
		nRow++;
	}
	if(ttlCost > 0)
	{
		CString szField, szAmount;
		TranslateString(_T("Total Amount"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 3);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 5, nRow, double2str(ttlCost), FMT_NUMBER1, true, 11);
		szMoney.Format(_T("%.2f"),ttlCost);
		nRow += 2;
	}
		
	MoneyToString(szMoney, tmpStr);
	xls.SetCellMergedColumns(nCol , nRow, 6);
	xls.SetCellText(nCol, nRow, _T("S\x1ED1 ti\x1EC1n \x62\x1EB1ng \x63h\x1EEF: ") + tmpStr, FMT_TEXT, true, 11);

	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao CLS theo so tieu ban.xls"));
}

void CHMSPacsReportDialog::OnExportParaclinicalPatient()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString tmpStr, szSQL, szWhere, m_szGroups;
	szWhere.Empty();
	m_szGroups.Empty();

	UpdateData(true);
	for (int i=0; i< m_wndListItem.GetItemCount(); i++)
	{
		if(m_wndListItem.GetCheck(i))
		{
			if(!m_szGroups.IsEmpty())
				m_szGroups += _T(",");
			m_szGroups.AppendFormat(_T("'%s'"), m_wndListItem.GetItemText(i, 1));
		}
	}
	
	if (m_nPerformDate==0)		
		szWhere.Format(_T(" pcmso_performdate between '%s' and '%s' and pcmso_status ='T'"), m_szFromDate, m_szToDate);
	else
		szWhere.Format(_T(" pcmso_orderdate between '%s' and '%s' and pcmso_status not in('O')"), m_szFromDate, m_szToDate);

	if(!m_szGroups.IsEmpty())
		szWhere.AppendFormat(_T(" and hfl_groupid in(%s) "), m_szGroups);

	if (!m_wndDepartment.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_deptid='%s' "), m_wndDepartment.GetCurrent(0));
	
	if (!m_wndPractitioner.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND pcmso_doctor='%s' "), m_wndPractitioner.GetCurrent(0));
	
	if (!m_wndObject.GetCurrent(0).IsEmpty())
		szWhere.AppendFormat(_T(" AND hd_object='%s' "), m_wndObject.GetCurrent(0));
		
	szSQL.Format(_T(" SELECT (SELECT hfg_name from hms_feegroup where hfg_id=pcmso_groupid) as groupid, hd_docno as docno, patname ,") \
				_T("	hp_age as age, sys_sel_getname('sys_sex',hp_sex) as sex, hc_cardno as card, to_char(resultdte, 'DD-MM-YYYY') as resultdte, ") \
				_T("	pcmso_practitioner, hp_vnaddrcde as address, sum(hfl_servprice) as cost, icd ") \
				_T(" FROM ( SELECT 	pcmso_groupid, hd_docno, ") \
				_T(" 		hp_surname||' '||hp_midname||' '||hp_firstname as patname, hms_getage(date(hd_admitdate),date(hp_birthdate)) as hp_age, hp_sex, ") \
				_T(" 		 hc_cardno, CASE WHEN pcmso_status ='S' THEN date(pcmso_orderdate) ELSE date(pcmso_performdate) END as ") \
				_T(" 		resultdte , pcmso_practitioner, hms_getaddress(hp_provid,hp_distid,hp_villid) as hp_vnaddrcde,") \
				_T("		hfl_servprice,(select hi_name from hms_icd where hi_icd=hd_icd) as icd ")\
				_T(" 	FROM hms_patient LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
				_T(" 	LEFT JOIN pcms_order ON(pcmso_docno=hd_docno) ") \
				_T("	LEFT JOIN pcms_order_line on(pcmso_orderid=pcmsol_orderid)") \
				_T("	LEFT JOIN hms_feelist on (hfl_groupid=pcmso_groupid and hfl_feeid=pcmsol_itemid)")\
				_T(" 	LEFT JOIN hms_card ON(hd_patientno=hc_patientno and hd_cardidx=hc_idx) ") \
				_T(" 	WHERE hd_docno > 0 and %s ") \
				_T(" 	) as tbl ") \
				_T(" GROUP BY  pcmso_groupid, patname, hp_age, hp_sex, hd_docno,hc_cardno,resultdte,pcmso_practitioner,hp_vnaddrcde,icd") \
				_T(" ORDER BY pcmso_groupid,patname, resultdte "), szWhere);

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK | MB_ICONEXCLAMATION);
		return ;
	}

	BeginWaitCursor();

	int nRow = 0;
	int nCol = 0;
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	xls.SetColumnWidth(0, 7);
	xls.SetColumnWidth(1, 10);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 8);
	xls.SetColumnWidth(4, 8);
	xls.SetColumnWidth(5, 23);
	xls.SetColumnWidth(6, 46);
	xls.SetColumnWidth(7, 11);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 55);

	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	xls.SetCellMergedColumns(nCol, nRow, 5);
	xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 12, 0);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	xls.SetCellMergedColumns(nCol, nRow + 1, 5);
	xls.SetCellText(nCol, nRow + 1, tmpStr, FMT_TEXT, true, 12, 0);
	xls.SetCellMergedColumns(nCol, nRow + 2, 10);
	xls.SetCellMergedColumns(nCol, nRow + 3, 7);
	xls.SetCellText(nCol, nRow + 3, _T("\x42\xC1O \x43\xC1O \x44\x41NH S\xC1\x43H \x42\x1EC6NH NH\xC2N L\xC0M \x43LS"), FMT_TEXT, true, 16, 0);
	tmpStr.Format(_T("Tu ngay %s Den ngay %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT, true, 12, 0);

	xls.SetCellMergedColumns(nCol, nRow + 5, 10);

	xls.SetCellText(nCol, nRow + 6, _T("STT"), FMT_TEXT, true, 11, 0);
	TranslateString(_T("Doc No"), tmpStr);
	xls.SetCellText(nCol + 1, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Full Name"), tmpStr);
	xls.SetCellText(nCol + 2, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Age"), tmpStr);
	xls.SetCellText(nCol + 3, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Sex"), tmpStr);
	xls.SetCellText(nCol + 4, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Card No"), tmpStr);
	xls.SetCellText(nCol + 5, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Address"), tmpStr);
	xls.SetCellText(nCol + 6, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Exam Date"), tmpStr);
	xls.SetCellText(nCol + 7, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Amount"), tmpStr);
	xls.SetCellText(nCol + 8, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);
	TranslateString(_T("Disease"), tmpStr);
	xls.SetCellText(nCol + 9, nRow + 6, tmpStr, FMT_TEXT, true, 11, 0);

	int nIndex = 1;
	CString szOldLine, szNewLine;
	CString szAmount;		
	long double grpCost = 0.0;
	long double ttlCost = 0.0;
	double cost = 0;
	
	nRow += 7;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{
			if(grpCost > 0)
			{
				TranslateString(_T("Total Group"), szAmount);
				xls.SetCellMergedColumns(nCol, nRow, 8);
				xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
				xls.SetCellText(nCol + 8, nRow, double2str(grpCost), FMT_NUMBER1, true, 11);
				ttlCost +=grpCost;
				grpCost=0;
				nRow++;
			}

			rs.GetValue(_T("groupid"), tmpStr);
			xls.SetCellMergedColumns(nCol, nRow, 10);
			xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT, true, 11);
			szOldLine = szNewLine;	
			nIndex=1;
			nRow++;
		}

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol + 1, nRow, tmpStr, FMT_INTEGER);
	
		rs.GetValue(_T("patname"), tmpStr);
		xls.SetCellText(nCol + 2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("age"), tmpStr);
		xls.SetCellText(nCol + 3, nRow, tmpStr, FMT_TEXT);
	
		rs.GetValue(_T("sex"), tmpStr);
		xls.SetCellText(nCol + 4, nRow, tmpStr, FMT_TEXT);
	
		rs.GetValue(_T("card"), tmpStr);
		xls.SetCellText(nCol + 5, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("address"), tmpStr);
		xls.SetCellText(nCol + 6, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("resultdte"), tmpStr);
		xls.SetCellText(nCol + 7, nRow, tmpStr, FMT_DATE);
				
		rs.GetValue(_T("cost"), cost);
		grpCost += cost;
	
		xls.SetCellText(nCol + 8, nRow, double2str(cost), FMT_NUMBER1);
		rs.GetValue(_T("icd"), tmpStr);
		xls.SetCellText(nCol + 9, nRow, tmpStr, FMT_TEXT);
		
		nRow++;
		rs.MoveNext();
	}
	if (grpCost > 0)
	{
		TranslateString(_T("Total Group"), szAmount);		
		
		xls.SetCellMergedColumns(nCol, nRow, 8);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		
		xls.SetCellText(nCol + 8, nRow, double2str(grpCost), FMT_NUMBER1, true, 11);
		ttlCost +=grpCost;
		grpCost=0;
		nRow++;
	}
	
	if (ttlCost > 0)
	{		
		TranslateString(_T("Total Amount"), szAmount);
		xls.SetCellMergedColumns(nCol, nRow, 8);
		xls.SetCellText(nCol, nRow, szAmount, FMT_TEXT | FMT_CENTER, true, 11);
		xls.SetCellText(nCol + 8, nRow, double2str(ttlCost), FMT_NUMBER1, true, 11);				
	}
	
	EndWaitCursor();
	xls.Save(_T("Exports\\Bao cao danh sach benh nhan lam CLS.xls"));
}