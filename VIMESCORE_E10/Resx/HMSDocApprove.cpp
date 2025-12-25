#include "HMSDocApprove.h"
#include "MainFrm.h"
static void _OnTerminatedSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnTerminatedSelect();
}
static void _OnApprovedFeesSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnApprovedFeesSelect();
}
static void _OnApprovedSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnApprovedSelect();
}
static void _OnCanceledSelectFnc(CWnd *pWnd){
	  ((CHMSDocApprove*)pWnd)->OnCanceledSelect();
}
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDocApprove* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnRecordNoChangeFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnRecordNoChange();
} */
/*static void _OnRecordNoSetfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnRecordNoSetfocus();} */ 
/*static void _OnRecordNoKillfocusFnc(CWnd *pWnd){
	((CHMSDocApprove *)pWnd)->OnRecordNoKillfocus();
} */
static int _OnRecordNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDocApprove *)pWnd)->OnRecordNoCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDocApprove*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDocApprove*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDocApprove*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnListDeleteItem();
} 
static void _OnOutpatientSelectFnc(CWnd *pWnd){
	 ((CHMSDocApprove*)pWnd)->OnOutpatientSelect();
}
static void _OnInpatientSelectFnc(CWnd *pWnd){
	 ((CHMSDocApprove*)pWnd)->OnInpatientSelect();
}
static void _OnApproveSelectFnc(CWnd *pWnd){
	CHMSDocApprove *pVw = (CHMSDocApprove *)pWnd;
	pVw->OnApproveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDocApprove *pVw = (CHMSDocApprove *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnAddHMSDocApprove();
} 
static int _OnEditHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnEditHMSDocApprove();
} 
static int _OnDeleteHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnDeleteHMSDocApprove();
} 
static int _OnSaveHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnSaveHMSDocApprove();
} 
static int _OnCancelHMSDocApproveFnc(CWnd *pWnd){
	 return ((CHMSDocApprove*)pWnd)->OnCancelHMSDocApprove();
} 
CHMSDocApprove::CHMSDocApprove(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDocApprove::~CHMSDocApprove(){
}
void CHMSDocApprove::OnCreateComponents(){
	m_wndStatus.Create(this, _T("Status"), 5, 5, 270, 90);
	m_wndFilterInformation.Create(this, _T("Filter Information"), 275, 5, 800, 90);
	m_wndPatientList.Create(this, _T("Patient List"), 5, 95, 800, 570);
	m_wndTerminated.Create(this, _T("Terminated"), 10, 30, 135, 55);
	m_wndApprovedFees.Create(this, _T("Approved Fees"), 140, 30, 265, 55);
	m_wndApproved.Create(this, _T("_APPROVED_"), 9, 60, 134, 85);
	m_wndCanceled.Create(this, _T("Canceled"), 139, 60, 264, 85);
	m_wndDepartmentLabel.Create(this, _T("Department"), 280, 30, 360, 55);
	m_wndDepartment.Create(this,365, 30, 624, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 279, 60, 359, 85);
	m_wndFromDate.Create(this,364, 60, 449, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 454, 60, 534, 85);
	m_wndToDate.Create(this,539, 60, 624, 85); 
	m_wndDocNoLabel.Create(this, _T("Doc No"), 629, 30, 709, 55);
	m_wndDocNo.Create(this,714, 30, 794, 55); 
	m_wndRecordNoLabel.Create(this, _T("Record No"), 629, 60, 709, 85);
	m_wndRecordNo.Create(this,714, 60, 794, 85); 
	m_wndList.Create(this,10, 120, 795, 565); 
	m_wndOutpatient.Create(this, _T("Outpatient"), 5, 575, 135, 600);
	m_wndInpatient.Create(this, _T("Inpatient"), 140, 575, 270, 600);
	m_wndApprove.Create(this, _T("Approve"), 625, 575, 710, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 715, 575, 800, 600);

}
void CHMSDocApprove::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDocNo.SetLimitText(16);
	m_wndDocNo.SetCheckValue(true);
	m_wndRecordNo.SetLimitText(35);
	m_wndRecordNo.SetCheckValue(true);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);



}
void CHMSDocApprove::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTerminated.SetEvent(WE_CLICK, _OnTerminatedSelectFnc);
	m_wndApprovedFees.SetEvent(WE_CLICK, _OnApprovedFeesSelectFnc);
	m_wndApproved.SetEvent(WE_CLICK, _OnApprovedSelectFnc);
	m_wndCanceled.SetEvent(WE_CLICK, _OnCanceledSelectFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndRecordNo.SetEvent(WE_CHANGE, _OnRecordNoChangeFnc);
	//m_wndRecordNo.SetEvent(WE_SETFOCUS, _OnRecordNoSetfocusFnc);
	//m_wndRecordNo.SetEvent(WE_KILLFOCUS, _OnRecordNoKillfocusFnc);
	m_wndRecordNo.SetEvent(WE_CHECKVALUE, _OnRecordNoCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOutpatient.SetEvent(WE_CLICK, _OnOutpatientSelectFnc);
	m_wndInpatient.SetEvent(WE_CLICK, _OnInpatientSelectFnc);
	m_wndApprove.SetEvent(WE_CLICK, _OnApproveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSDocApproveFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSDocApproveFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSDocApproveFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSDocApproveFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSDocApproveFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSDocApprove::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndTerminated.GetDlgCtrlID(), m_nTerminated);
	DDX_Radio(pDX, m_wndApprovedFees.GetDlgCtrlID(), m_nApprovedFees);
	DDX_Radio(pDX, m_wndApproved.GetDlgCtrlID(), m_nApproved);
	DDX_Radio(pDX, m_wndCanceled.GetDlgCtrlID(), m_nCanceled);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndRecordNo.GetDlgCtrlID(), m_szRecordNo);
	DDX_Check(pDX, m_wndOutpatient.GetDlgCtrlID(), m_bOutpatient);
	DDX_Check(pDX, m_wndInpatient.GetDlgCtrlID(), m_bInpatient);

}
void CHMSDocApprove::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDocApprove::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDocApprove::SetDefaultValues(){

	m_nTerminated=0;
	m_nApprovedFees=0;
	m_nApproved=0;
	m_nCanceled=0;
	m_szDepartmentKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nDocNo=0;
	m_szRecordNo.Empty();
	m_bOutpatient=FALSE;
	m_bInpatient=FALSE;

}
int CHMSDocApprove::SetMode(int nMode){
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
void CHMSDocApprove::OnTerminatedSelect(){
	
}
void CHMSDocApprove::OnApprovedFeesSelect(){
	
}
void CHMSDocApprove::OnApprovedSelect(){
	
}
void CHMSDocApprove::OnCanceledSelect(){
	
}
void CHMSDocApprove::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDocApprove::OnDepartmentSelendok(){
	 
}
/*void CHMSDocApprove::OnDepartmentSetfocus(){
	
}*/
/*void CHMSDocApprove::OnDepartmentKillfocus(){
	
}*/
long CHMSDocApprove::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDocApprove::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDocApprove::OnFromDateChange(){
	
} */
/*void CHMSDocApprove::OnFromDateSetfocus(){
	
} */
/*void CHMSDocApprove::OnFromDateKillfocus(){
	
} */
int CHMSDocApprove::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSDocApprove::OnToDateChange(){
	
} */
/*void CHMSDocApprove::OnToDateSetfocus(){
	
} */
/*void CHMSDocApprove::OnToDateKillfocus(){
	
} */
int CHMSDocApprove::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSDocApprove::OnDocNoChange(){
	
} */
/*void CHMSDocApprove::OnDocNoSetfocus(){
	
} */
/*void CHMSDocApprove::OnDocNoKillfocus(){
	
} */
int CHMSDocApprove::OnDocNoCheckValue(){
	return 0;
} 
/*void CHMSDocApprove::OnRecordNoChange(){
	
} */
/*void CHMSDocApprove::OnRecordNoSetfocus(){
	
} */
/*void CHMSDocApprove::OnRecordNoKillfocus(){
	
} */
int CHMSDocApprove::OnRecordNoCheckValue(){
	return 0;
} 
void CHMSDocApprove::OnListDblClick(){
	
} 
void CHMSDocApprove::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDocApprove::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDocApprove::OnListLoadData(){
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
	void CHMSDocApprove::OnOutpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSDocApprove::OnInpatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSDocApprove::OnApproveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDocApprove::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDocApprove::OnAddHMSDocApprove(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDocApprove::OnEditHMSDocApprove(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDocApprove::OnDeleteHMSDocApprove(){
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
 		OnCancelHMSDocApprove();
 	}
	return 0;
}
int CHMSDocApprove::OnSaveHMSDocApprove(){
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
 		//OnHMSDocApproveListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDocApprove::OnCancelHMSDocApprove(){
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
int CHMSDocApprove::OnHMSDocApproveListLoadData(){
	return 0;
}
