#include "rptOperationPatientReportDialog.h"
#include "ReportDocument.h"
#include "../MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnListSelectAllFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnListSelectAll();
} 

static int _OnListUnselectAllFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnListUnselectAll();
}
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((rptOperationPatientReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	rptOperationPatientReportDialog *pVw = (rptOperationPatientReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	rptOperationPatientReportDialog *pVw = (rptOperationPatientReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	rptOperationPatientReportDialog *pVw = (rptOperationPatientReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	rptOperationPatientReportDialog *pVw = (rptOperationPatientReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPractitionerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOperationPatientReportDialog* )pWnd)->OnPractitionerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPractitionerSelendokFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnPractitionerSelendok();
}
/*static void _OnPractitionerSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnPractitionerKillfocus();
}*/
/*static void _OnPractitionerKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnPractitionerKillfocus();
}*/
static long _OnPractitionerLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientReportDialog *)pWnd)->OnPractitionerLoadData();
}
/*static void _OnPractitionerAddNewFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnPractitionerAddNew();
}*/
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((rptOperationPatientReportDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientReportDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog *)pWnd)->OnObjectAddNew();
}*/
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	  ((rptOperationPatientReportDialog*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	  ((rptOperationPatientReportDialog*)pWnd)->OnInpatientSelect();
}
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((rptOperationPatientReportDialog*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((rptOperationPatientReportDialog*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((rptOperationPatientReportDialog*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnRoomListDeleteItem();
} 
static void _OnAllHospitallSelectFnc(CWnd *pWnd){
	  ((rptOperationPatientReportDialog*)pWnd)->OnAllHospitallSelect();
}
static int _OnAddrptOperationPatientReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnAddrptOperationPatientReportDialog();
} 
static int _OnEditrptOperationPatientReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnEditrptOperationPatientReportDialog();
} 
static int _OnDeleterptOperationPatientReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnDeleterptOperationPatientReportDialog();
} 
static int _OnSaverptOperationPatientReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnSaverptOperationPatientReportDialog();
} 
static int _OnCancelrptOperationPatientReportDialogFnc(CWnd *pWnd){
	 return ((rptOperationPatientReportDialog*)pWnd)->OnCancelrptOperationPatientReportDialog();
} 
rptOperationPatientReportDialog::rptOperationPatientReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 535;
	m_nDlgHeight = 585;	
	m_szTitle="Bang ke danh sach benh nhan lam phau thuat - thu thuat";
	SetDefaultValues();
}
rptOperationPatientReportDialog::~rptOperationPatientReportDialog(){
}
void rptOperationPatientReportDialog::OnCreateComponents(){
	/*
	//SetWindowTitle(_T("Report"), true);
	m_wndReportFilter.Create(this, _T("Report Filter"), 6, 5, 526, 119);
	m_wndGroupRoom.Create(this, _T("Examination Room"), 5, 124, 526, 546);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 227, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 300, 29, 400, 54);
	m_wndToDate.Create(this,405, 29, 517, 54); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 190, 550, 270, 575);
	m_wndPrint.Create(this, _T("&Print"), 275, 550, 355, 575);
	m_wndExport.Create(this, _T("&Export"), 360, 550, 440, 575);
	m_wndClose.Create(this, _T("&Close"), 445, 550, 525, 575);
	m_wndPractitionerLabel.Create(this, _T("Practitioner"), 10, 59, 110, 84);
	m_wndPractitioner.Create(this,115, 59, 269, 84); 
	m_wndObjectLabel.Create(this, _T("Object"), 300, 59, 400, 84);
	m_wndObject.Create(this,405, 59, 519, 84); 
	m_wndOutpatient.Create(this, _T("Outpatient"), 11, 89, 137, 114);
	m_wndInpatient.Create(this, _T("Inpatient"), 182, 89, 308, 114);
	m_wndRoomList.Create(this,10, 147, 522, 543); 
	m_wndAllHospitall.Create(this, _T("All Hospitall"), 368, 89, 494, 114);	
	*/

	m_wndReportFilter.Create(this, _T("Report Condition"), 5, 5, 400, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 200, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 205, 30, 305, 55);
	m_wndReportPeriod.Create(this,310, 29, 395, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 200, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 60, 305, 85);
	m_wndToDate.Create(this,310, 60, 395, 85); 
	m_wndDeptLabel.Create(this, _T("Dept"), 10, 90, 110, 115);
	m_wndDept.Create(this,115, 90, 395, 115);
	m_wndDoctorLabel.Create(this, _T("Doctor"), 10, 120, 110, 145);
	m_wndDoctor.Create(this,115, 120, 395, 145);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 155, 230, 180);
	m_wndPrint.Create(this, _T("&Export"), 235, 155, 315, 180);
	m_wndClose.Create(this, _T("&Close"), 320, 155, 400, 180);

}
void rptOperationPatientReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(true);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndPractitioner.SetCheckValue(true);
	m_wndPractitioner.LimitText(35);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_szFromDate = pMF->GetSysDate() + _T("00:01");
	m_szToDate = pMF->GetSysDate()+ _T("23:59");

	m_wndPractitioner.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPractitioner.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndRoomList.SetCheckBox(true);
	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndRoomList.InsertColumn(1, _T("Desc"), CFMT_TEXT, 400);
	UpdateData(false);
}
void rptOperationPatientReportDialog::OnSetWindowEvents(){
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
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.AddEvent(1, _T("Select All"), _OnListSelectAllFnc);
	m_wndRoomList.AddEvent(2, _T("Unselect All"), _OnListUnselectAllFnc);

	m_wndAllHospitall.SetEvent(WE_CLICK, _OnAllHospitallSelectFnc);

}
void rptOperationPatientReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPractitioner.GetDlgCtrlID(), m_szPractitionerKey);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Radio(pDX, m_wndOutpatient.GetDlgCtrlID(), m_nOutpatient);
	DDX_Radio(pDX, m_wndInpatient.GetDlgCtrlID(), m_nInpatient);
	DDX_Radio(pDX, m_wndAllHospitall.GetDlgCtrlID(), m_nAllHospitall);

}
void rptOperationPatientReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void rptOperationPatientReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void rptOperationPatientReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szPractitionerKey.Empty();
	m_szObjectKey.Empty();
	m_nOutpatient=1;
	m_nInpatient=1;
	m_nAllHospitall=0;

}
int rptOperationPatientReportDialog::SetMode(int nMode){
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
/*void rptOperationPatientReportDialog::OnFromDateChange(){
	
} */
/*void rptOperationPatientReportDialog::OnFromDateSetfocus(){
	
} */
/*void rptOperationPatientReportDialog::OnFromDateKillfocus(){
	
} */
int rptOperationPatientReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void rptOperationPatientReportDialog::OnToDateChange(){
	
} */
/*void rptOperationPatientReportDialog::OnToDateSetfocus(){
	
} */
/*void rptOperationPatientReportDialog::OnToDateKillfocus(){
	
} */
int rptOperationPatientReportDialog::OnToDateCheckValue(){
	return 0;
} 
void rptOperationPatientReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintOperationPatientListReport();
	
} 
void rptOperationPatientReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PrintOperationPatientListReport();
} 
void rptOperationPatientReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void rptOperationPatientReportDialog::OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientReportDialog::OnPractitionerSelendok(){
	 
}
/*void rptOperationPatientReportDialog::OnPractitionerSetfocus(){
	
}*/
/*void rptOperationPatientReportDialog::OnPractitionerKillfocus(){
	
}*/
long rptOperationPatientReportDialog::OnPractitionerLoadData(){
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
/*void rptOperationPatientReportDialog::OnPractitionerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptOperationPatientReportDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void rptOperationPatientReportDialog::OnObjectSelendok(){
	 
}
/*void rptOperationPatientReportDialog::OnObjectSetfocus(){
	
}*/
/*void rptOperationPatientReportDialog::OnObjectKillfocus(){
	
}*/
long rptOperationPatientReportDialog::OnObjectLoadData(){
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
/*void rptOperationPatientReportDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void rptOperationPatientReportDialog::OnOutpatientSelect(){
	szSQL1.Format(_T(" select hrl_id as id, hrl_name as name from hms_roomlist left join sys_dept on(sd_id=hrl_deptid) where sd_type in('KB') order by hrl_id "));
	m_nFacid=1;
	OnRoomListLoadData();
}
void rptOperationPatientReportDialog::OnInpatientSelect(){
	szSQL1.Format(_T(" SELECT sd_id as id, sd_name as name from sys_dept where sd_type in('DT')"));	
	m_nFacid=2;
	OnRoomListLoadData();
}
void rptOperationPatientReportDialog::OnRoomListDblClick(){
	
} 
void rptOperationPatientReportDialog::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int rptOperationPatientReportDialog::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long rptOperationPatientReportDialog::OnRoomListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 	
	szSQL.Empty();
	szSQL=szSQL1;
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
}
void rptOperationPatientReportDialog::OnAllHospitallSelect(){
	szSQL1.Empty();
	m_nFacid=3;
	OnRoomListLoadData();
}
int rptOperationPatientReportDialog::OnAddrptOperationPatientReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int rptOperationPatientReportDialog::OnEditrptOperationPatientReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int rptOperationPatientReportDialog::OnDeleterptOperationPatientReportDialog(){
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
 		OnCancelrptOperationPatientReportDialog(); 
 	}
	return 0;
}
int rptOperationPatientReportDialog::OnSaverptOperationPatientReportDialog(){
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
 		//OnrptOperationPatientReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret;

}
int rptOperationPatientReportDialog::OnCancelrptOperationPatientReportDialog(){
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
int rptOperationPatientReportDialog::OnrptOperationPatientReportDialogListLoadData(){
	return 0;
}
int rptOperationPatientReportDialog::OnListSelectAll(){
	for (int i =0; i < m_wndRoomList.GetItemCount(); i++){
		m_wndRoomList.SetCheck(i, true);
	}
	return i;
}

int rptOperationPatientReportDialog::OnListUnselectAll(){
	for (int i =0; i < m_wndRoomList.GetItemCount(); i++){
		m_wndRoomList.SetCheck(i, false);
	}
	return i;
}

void rptOperationPatientReportDialog::PrintOperationPatientListReport(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere,szListRoom,szDeptID, szNameRoom;
	CString szDate, szSysDate;
	szSysDate= pMF->GetSysDate(); 
	CReport rpt; 
	UpdateData(true);

	for (int i=0; i< m_wndRoomList.GetItemCount(); i++){
		if(m_wndRoomList.GetCheck(i)){
			if(!szListRoom.IsEmpty())
				szListRoom += _T(",");
			szListRoom.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 0));

			if(!szDeptID.IsEmpty())
				szDeptID += _T(",");
			szDeptID.AppendFormat(_T("'%s'"), m_wndRoomList.GetItemText(i, 0));

			if(!szNameRoom.IsEmpty())
				szNameRoom += _T(",");
			szNameRoom.AppendFormat(_T("%s"), m_wndRoomList.GetItemText(i, 1));
		}
	}
	
	szWhere.Empty();
	if (m_nFacid==1)	
	{
		szWhere.Format( _T(" AND ho_depttype='E'"));
		if (!szListRoom.IsEmpty())	szWhere.AppendFormat( _T(" AND ho_roomid  IN(%s)"), szListRoom);
	}
	
	if (m_nFacid==2)
	{
		szWhere.Format( _T(" AND ho_depttype  IN('I')"));
		if (!szDeptID.IsEmpty())	szWhere.AppendFormat( _T(" AND ho_deptid  IN(%s)"), szDeptID);		
	}

	if(!m_szPractitionerKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_doctor='%s' "), m_szPractitionerKey);
	}
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
		_T(" sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_feegroup where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_doctor as doctor,") \
		_T(" ho_idx as idx") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_feelist ON (hfl_feeid=ho_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE date(ho_orderdate) BETWEEN date('%s') AND date('%s') AND ho_status <>'O' %s ") \
		_T(" ORDER BY patientname"), m_szFromDate, m_szToDate, szWhere); 
_fmsg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/HMS_OPERATIONPATIENTLIST.RPT")))
	return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;	
	long nOrderID, nDocno;
	while(!rs.IsEOF())
	{	
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("operatype"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);		
		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("performdate"), tmpStr);
		rptDetail->SetValue(_T("10"), CDate::Convert(rs.GetValue(_T("performdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("doctor"), tmpStr);
		rs.GetValue(_T("idx"), nOrderID);
		rs.GetValue(_T("docno"), nDocno);
		rptDetail->SetValue(_T("11"), pMF->GetDoctorName(tmpStr));

		szSQL.Format(_T(" SELECT 	hpol_idx as idx, pmi_id as id, ") \
			_T(" 	pmi_name as name,") \
			_T(" 	pmi_unit as unit,") \
			_T(" 	pmsi_vatprice as price,") \
			_T(" 	sum(hpol_issueqty) as qty,") \
			_T(" 	sum(hpol_issueqty*pmsi_vatprice) as amount") \
			_T(" FROM hms_operation ") \
			_T(" LEFT JOIN hms_pharmacyorder ON(hpo_docno=ho_docno and trim(hpo_feeid)=cast(ho_idx as text))") \
			_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
			_T(" LEFT JOIN pms_stockitems ON(pmsi_id=hpol_sitemid)") \
			_T(" LEFT JOIN pms_items ON(pmsi_itemid=pmi_id)") \
			_T(" WHERE ho_docno=%ld AND hpo_type='M' AND ho_idx=%ld") \
			_T(" GROUP BY id, name, unit, price, idx") \
			_T(" ORDER BY idx"),nDocno ,nOrderID);
		rsl.ExecSQL(szSQL);
		
		
		double nTotalAmount=0, nAmount=0;		
		int nItem = 1;
		CString szTmp;
		rsl.ExecSQL(szSQL);
		while(!rsl.IsEOF())
		{
			if (nAmount <=0){
				rptDetail = rpt.AddDetail();
				rptDetail->GetItem(_T("7"))->SetBold(true);
				rptDetail->GetItem(_T("8"))->SetBold(true);
				rptDetail->GetItem(_T("9"))->SetBold(true);
				rptDetail->GetItem(_T("10"))->SetBold(true);
				rptDetail->GetItem(_T("11"))->SetBold(true);
				rptDetail->GetItem(_T("11"))->SetTextAlign(2);
				rptDetail->GetItem(_T("7"))->SetTextAlign(1);
				rptDetail->GetItem(_T("8"))->SetTextAlign(1);
				
				TranslateString(_T("Drug Name"),tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				TranslateString(_T("Unit"),tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				TranslateString(_T("Price"),tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				TranslateString(_T("Qty"),tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);	
				TranslateString(_T("Total Amount"),tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);				
			}
			rptDetail = rpt.AddDetail();
			rptDetail->GetItem(_T("6"))->SetItalic(true);
			rptDetail->GetItem(_T("7"))->SetItalic(true);
			rptDetail->GetItem(_T("8"))->SetItalic(true);
			rptDetail->GetItem(_T("9"))->SetItalic(true);
			rptDetail->GetItem(_T("10"))->SetItalic(true);
			rptDetail->GetItem(_T("11"))->SetItalic(true);
			rptDetail->GetItem(_T("11"))->SetTextAlign(2);
			rptDetail->GetItem(_T("8"))->SetTextAlign(1);
			tmpStr.Format(_T("%d"), nItem++);
			rptDetail->SetValue(_T("6"), tmpStr);
			rsl.GetValue(_T("name"), tmpStr);			
			rptDetail->SetValue(_T("7"), tmpStr);
			rsl.GetValue(_T("unit"), tmpStr);			
			rptDetail->SetValue(_T("8"), tmpStr);
			rsl.GetValue(_T("price"), tmpStr);
			rptDetail->SetValue(_T("9"), tmpStr);
			rsl.GetValue(_T("qty"), tmpStr);
			rptDetail->SetValue(_T("10"), tmpStr);
			rsl.GetValue(_T("amount"), tmpStr);
			nAmount += ToFloat(tmpStr);
			rptDetail->SetValue(_T("11"), tmpStr);
			rsl.MoveNext();
		}
		if (nAmount> 0)
		{
			rptDetail = rpt.AddDetail();
			rptDetail->GetItem(_T("7"))->SetBold(true);
			rptDetail->GetItem(_T("8"))->SetBold(true);
			rptDetail->GetItem(_T("9"))->SetBold(true);
			rptDetail->GetItem(_T("10"))->SetBold(true);
			rptDetail->GetItem(_T("11"))->SetBold(true);
			rptDetail->GetItem(_T("11"))->SetTextAlign(2);
			rptDetail->GetItem(_T("7"))->SetTextAlign(1);
			TranslateString(_T("Total Amount"),tmpStr);
			rptDetail->SetValue(_T("7"), tmpStr);		
			TranslateString(_T("Total Amount"),tmpStr);
			rptDetail->SetValue(_T("11"), nAmount);				
		}
	
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	
	rpt.PrintPreview();
	
	
}
