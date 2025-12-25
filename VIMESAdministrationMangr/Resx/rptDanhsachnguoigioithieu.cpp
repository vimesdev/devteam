#include "rptDanhsachnguoigioithieu.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptDanhsachnguoigioithieu *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptDanhsachnguoigioithieu* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptDanhsachnguoigioithieu *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptDanhsachnguoigioithieu *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptDanhsachnguoigioithieu *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptDanhsachnguoigioithieu *pVw = (CrptDanhsachnguoigioithieu *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptDanhsachnguoigioithieu *pVw = (CrptDanhsachnguoigioithieu *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CrptDanhsachnguoigioithieu *pVw = (CrptDanhsachnguoigioithieu *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptDanhsachnguoigioithieu* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CrptDanhsachnguoigioithieu *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnObjectAddNew();
}*/
static void _OnUserSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptDanhsachnguoigioithieu* )pWnd)->OnUserSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUserSelendokFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnUserSelendok();
}
/*static void _OnUserSetfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnUserKillfocus();
}*/
/*static void _OnUserKillfocusFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnUserKillfocus();
}*/
static long _OnUserLoadDataFnc(CWnd *pWnd){
	return ((CrptDanhsachnguoigioithieu *)pWnd)->OnUserLoadData();
}
/*static void _OnUserAddNewFnc(CWnd *pWnd){
	((CrptDanhsachnguoigioithieu *)pWnd)->OnUserAddNew();
}*/
static int _OnAddrptDanhsachnguoigioithieuFnc(CWnd *pWnd){
	 return ((CrptDanhsachnguoigioithieu*)pWnd)->OnAddrptDanhsachnguoigioithieu();
} 
static int _OnEditrptDanhsachnguoigioithieuFnc(CWnd *pWnd){
	 return ((CrptDanhsachnguoigioithieu*)pWnd)->OnEditrptDanhsachnguoigioithieu();
} 
static int _OnDeleterptDanhsachnguoigioithieuFnc(CWnd *pWnd){
	 return ((CrptDanhsachnguoigioithieu*)pWnd)->OnDeleterptDanhsachnguoigioithieu();
} 
static int _OnSaverptDanhsachnguoigioithieuFnc(CWnd *pWnd){
	 return ((CrptDanhsachnguoigioithieu*)pWnd)->OnSaverptDanhsachnguoigioithieu();
} 
static int _OnCancelrptDanhsachnguoigioithieuFnc(CWnd *pWnd){
	 return ((CrptDanhsachnguoigioithieu*)pWnd)->OnCancelrptDanhsachnguoigioithieu();
} 
CrptDanhsachnguoigioithieu::CrptDanhsachnguoigioithieu(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 360;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CrptDanhsachnguoigioithieu::~CrptDanhsachnguoigioithieu(){
}
void CrptDanhsachnguoigioithieu::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 350, 150);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 93, 55);
	m_wndYear.Create(this,98, 30, 178, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 180, 30, 260, 55);
	m_wndReportPeriod.Create(this,265, 30, 345, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 93, 85);
	m_wndFromDate.Create(this,98, 60, 178, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 60, 260, 85);
	m_wndToDate.Create(this,265, 60, 345, 85); 
	m_wndPrint.Create(this, _T("&Print"), 115, 155, 190, 180);
	m_wndExport.Create(this, _T("&Export"), 194, 155, 269, 180);
	m_wndClose.Create(this, _T("&Close"), 275, 155, 350, 180);
	m_wndObjectLabel.Create(this, _T("Object"), 10, 90, 93, 115);
	m_wndObject.Create(this,98, 90, 348, 115); 
	m_wndUserLabel.Create(this, _T("User"), 10, 120, 93, 145);
	m_wndUser.Create(this,98, 120, 348, 145); 

}
void CrptDanhsachnguoigioithieu::OnInitializeComponents(){
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
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);
	m_wndUser.SetCheckValue(true);
	m_wndUser.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndObject.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndObject.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndUser.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndUser.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CrptDanhsachnguoigioithieu::OnSetWindowEvents(){
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
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	m_wndUser.SetEvent(WE_SELENDOK, _OnUserSelendokFnc);
	//m_wndUser.SetEvent(WE_SETFOCUS, _OnUserSetfocusFnc);
	//m_wndUser.SetEvent(WE_KILLFOCUS, _OnUserKillfocusFnc);
	m_wndUser.SetEvent(WE_SELCHANGE, _OnUserSelectChangeFnc);
	m_wndUser.SetEvent(WE_LOADDATA, _OnUserLoadDataFnc);
	//m_wndUser.SetEvent(WE_ADDNEW, _OnUserAddNewFnc);

}
void CrptDanhsachnguoigioithieu::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndUser.GetDlgCtrlID(), m_szUserKey);

}
void CrptDanhsachnguoigioithieu::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptDanhsachnguoigioithieu::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptDanhsachnguoigioithieu::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szObjectKey.Empty();
	m_szUserKey.Empty();

}
int CrptDanhsachnguoigioithieu::SetMode(int nMode){
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
/*void CrptDanhsachnguoigioithieu::OnYearChange(){
	
} */
/*void CrptDanhsachnguoigioithieu::OnYearSetfocus(){
	
} */
/*void CrptDanhsachnguoigioithieu::OnYearKillfocus(){
	
} */
int CrptDanhsachnguoigioithieu::OnYearCheckValue(){
	return 0;
} 
void CrptDanhsachnguoigioithieu::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDanhsachnguoigioithieu::OnReportPeriodSelendok(){
	 
}
/*void CrptDanhsachnguoigioithieu::OnReportPeriodSetfocus(){
	
}*/
/*void CrptDanhsachnguoigioithieu::OnReportPeriodKillfocus(){
	
}*/
long CrptDanhsachnguoigioithieu::OnReportPeriodLoadData(){
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
/*void CrptDanhsachnguoigioithieu::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptDanhsachnguoigioithieu::OnFromDateChange(){
	
} */
/*void CrptDanhsachnguoigioithieu::OnFromDateSetfocus(){
	
} */
/*void CrptDanhsachnguoigioithieu::OnFromDateKillfocus(){
	
} */
int CrptDanhsachnguoigioithieu::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptDanhsachnguoigioithieu::OnToDateChange(){
	
} */
/*void CrptDanhsachnguoigioithieu::OnToDateSetfocus(){
	
} */
/*void CrptDanhsachnguoigioithieu::OnToDateKillfocus(){
	
} */
int CrptDanhsachnguoigioithieu::OnToDateCheckValue(){
	return 0;
} 
void CrptDanhsachnguoigioithieu::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDanhsachnguoigioithieu::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDanhsachnguoigioithieu::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDanhsachnguoigioithieu::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDanhsachnguoigioithieu::OnObjectSelendok(){
	 
}
/*void CrptDanhsachnguoigioithieu::OnObjectSetfocus(){
	
}*/
/*void CrptDanhsachnguoigioithieu::OnObjectKillfocus(){
	
}*/
long CrptDanhsachnguoigioithieu::OnObjectLoadData(){
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
/*void CrptDanhsachnguoigioithieu::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptDanhsachnguoigioithieu::OnUserSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptDanhsachnguoigioithieu::OnUserSelendok(){
	 
}
/*void CrptDanhsachnguoigioithieu::OnUserSetfocus(){
	
}*/
/*void CrptDanhsachnguoigioithieu::OnUserKillfocus(){
	
}*/
long CrptDanhsachnguoigioithieu::OnUserLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser.IsSearchKey() && !m_szUserKey.IsEmpty()){
	};
	m_wndUser.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptDanhsachnguoigioithieu::OnUserAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CrptDanhsachnguoigioithieu::OnAddrptDanhsachnguoigioithieu(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptDanhsachnguoigioithieu::OnEditrptDanhsachnguoigioithieu(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptDanhsachnguoigioithieu::OnDeleterptDanhsachnguoigioithieu(){
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
 		OnCancelrptDanhsachnguoigioithieu(); 
 	}
	return 0;
}
int CrptDanhsachnguoigioithieu::OnSaverptDanhsachnguoigioithieu(){
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
 		//OnrptDanhsachnguoigioithieuListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptDanhsachnguoigioithieu::OnCancelrptDanhsachnguoigioithieu(){
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
int CrptDanhsachnguoigioithieu::OnrptDanhsachnguoigioithieuListLoadData(){
	return 0;
}
