#include "rptBaodanhsachbenhnhanchuathuphitheokhoa.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptBaodanhsachbenhnhanchuathuphitheokhoa *pVw = (CrptBaodanhsachbenhnhanchuathuphitheokhoa *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnOutPatientSelectFnc(CWnd *pWnd){
	  ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnOutPatientSelect();
}
static void _OnInPatientSelectFnc(CWnd *pWnd){
	  ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnInPatientSelect();
}
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptLoadData();
} 
static void _OnDeptDblClickFnc(CWnd *pWnd){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptDblClick();
} 
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptSelectChange(nOldItem, nNewItem);
} 
static int _OnDeptDeleteItemFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeptDeleteItem();
} 
static int _OnAddrptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnAddrptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnEditrptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnEditrptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnDeleterptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnDeleterptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnSaverptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnSaverptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
static int _OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoaFnc(CWnd *pWnd){
	 return ((CrptBaodanhsachbenhnhanchuathuphitheokhoa*)pWnd)->OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoa();
} 
CrptBaodanhsachbenhnhanchuathuphitheokhoa::CrptBaodanhsachbenhnhanchuathuphitheokhoa(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CrptBaodanhsachbenhnhanchuathuphitheokhoa::~CrptBaodanhsachbenhnhanchuathuphitheokhoa(){
}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 420, 455);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 210, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 215, 30, 315, 55);
	m_wndReportPeriod.Create(this,320, 30, 415, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 210, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 315, 85);
	m_wndToDate.Create(this,320, 60, 415, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 84, 466, 164, 491);
	m_wndPrint.Create(this, _T("&Print"), 169, 466, 249, 491);
	m_wndExport.Create(this, _T("&Export"), 254, 466, 334, 491);
	m_wndClose.Create(this, _T("&Close"), 339, 466, 419, 491);
	m_wndOutPatient.Create(this, _T("Out Patient"), 10, 90, 210, 115);
	m_wndInPatient.Create(this, _T("In Patient"), 215, 90, 415, 115);
	m_wndDept.Create(this,10, 120, 415, 450); 

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDept.InsertColumn(1, _T("Dept"), CFMT_TEXT, 400);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnSetWindowEvents(){
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
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
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndOutPatient.SetEvent(WE_CLICK, _OnOutPatientSelectFnc);
	m_wndInPatient.SetEvent(WE_CLICK, _OnInPatientSelectFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	m_wndDept.SetEvent(WE_DBLCLICK, _OnDeptDblClickFnc);
	m_wndDept.AddEvent(1, _T("Delete"), _OnDeptDeleteItemFnc, 0, VK_DELETE, 0);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Radio(pDX, m_wndOutPatient.GetDlgCtrlID(), m_nOutPatient);
	DDX_Radio(pDX, m_wndInPatient.GetDlgCtrlID(), m_nInPatient);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nOutPatient=0;
	m_nInPatient=0;

}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::SetMode(int nMode){
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
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearChange(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearSetfocus(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearKillfocus(){
	
} */
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnYearCheckValue(){
	return 0;
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodSelendok(){
	 
}
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodSetfocus(){
	
}*/
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodKillfocus(){
	
}*/
long CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodLoadData(){
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
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateChange(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateSetfocus(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateKillfocus(){
	
} */
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateChange(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateSetfocus(){
	
} */
/*void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateKillfocus(){
	
} */
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnToDateCheckValue(){
	return 0;
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnOutPatientSelect(){
	
}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnInPatientSelect(){
	
}
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptDblClick(){
	
} 
void CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeptLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDept.BeginLoad(); 
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Dept")), NULL);
		rs.MoveNext();
	}
	m_wndDept.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnAddrptBaodanhsachbenhnhanchuathuphitheokhoa(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnEditrptBaodanhsachbenhnhanchuathuphitheokhoa(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnDeleterptBaodanhsachbenhnhanchuathuphitheokhoa(){
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
 		OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoa(); 
 	}
	return 0;
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnSaverptBaodanhsachbenhnhanchuathuphitheokhoa(){
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
 		//OnrptBaodanhsachbenhnhanchuathuphitheokhoaListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnCancelrptBaodanhsachbenhnhanchuathuphitheokhoa(){
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
int CrptBaodanhsachbenhnhanchuathuphitheokhoa::OnrptBaodanhsachbenhnhanchuathuphitheokhoaListLoadData(){
	return 0;
}
