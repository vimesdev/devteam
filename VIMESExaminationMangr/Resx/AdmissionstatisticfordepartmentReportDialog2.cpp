#include "AdmissionstatisticfordepartmentReportDialog2.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionstatisticfordepartmentReportDialog2* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnToDateCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdmissionstatisticfordepartmentReportDialog2* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CAdmissionstatisticfordepartmentReportDialog2 *)pWnd)->OnStatusAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CAdmissionstatisticfordepartmentReportDialog2 *pVw = (CAdmissionstatisticfordepartmentReportDialog2 *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CAdmissionstatisticfordepartmentReportDialog2 *pVw = (CAdmissionstatisticfordepartmentReportDialog2 *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddAdmissionstatisticfordepartmentReportDialog2Fnc(CWnd *pWnd){
	 return ((CAdmissionstatisticfordepartmentReportDialog2*)pWnd)->OnAddAdmissionstatisticfordepartmentReportDialog2();
} 
static int _OnEditAdmissionstatisticfordepartmentReportDialog2Fnc(CWnd *pWnd){
	 return ((CAdmissionstatisticfordepartmentReportDialog2*)pWnd)->OnEditAdmissionstatisticfordepartmentReportDialog2();
} 
static int _OnDeleteAdmissionstatisticfordepartmentReportDialog2Fnc(CWnd *pWnd){
	 return ((CAdmissionstatisticfordepartmentReportDialog2*)pWnd)->OnDeleteAdmissionstatisticfordepartmentReportDialog2();
} 
static int _OnSaveAdmissionstatisticfordepartmentReportDialog2Fnc(CWnd *pWnd){
	 return ((CAdmissionstatisticfordepartmentReportDialog2*)pWnd)->OnSaveAdmissionstatisticfordepartmentReportDialog2();
} 
static int _OnCancelAdmissionstatisticfordepartmentReportDialog2Fnc(CWnd *pWnd){
	 return ((CAdmissionstatisticfordepartmentReportDialog2*)pWnd)->OnCancelAdmissionstatisticfordepartmentReportDialog2();
} 
CAdmissionstatisticfordepartmentReportDialog2::CAdmissionstatisticfordepartmentReportDialog2(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 285;
	m_nDlgHeight = 230;
	SetDefaultValues();
}
CAdmissionstatisticfordepartmentReportDialog2::~CAdmissionstatisticfordepartmentReportDialog2(){
}
void CAdmissionstatisticfordepartmentReportDialog2::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 265, 183);
	m_wndYearLabel.Create(this, _T("Year"), 12, 30, 134, 55);
	m_wndYear.Create(this,139, 30, 259, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 12, 60, 134, 85);
	m_wndReportPeriod.Create(this,139, 60, 259, 85); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 12, 90, 134, 115);
	m_wndFromDate.Create(this,139, 90, 259, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 12, 120, 134, 145);
	m_wndToDate.Create(this,139, 120, 259, 145); 
	m_wndStatusLabel.Create(this, _T("Status"), 12, 150, 134, 175);
	m_wndStatus.Create(this,139, 150, 259, 175); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 111, 188, 186, 213);
	m_wndPrint.Create(this, _T("&Print"), 191, 188, 266, 213);

}
void CAdmissionstatisticfordepartmentReportDialog2::OnInitializeComponents(){
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
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStatus.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void CAdmissionstatisticfordepartmentReportDialog2::OnSetWindowEvents(){
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
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

}
void CAdmissionstatisticfordepartmentReportDialog2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);

}
void CAdmissionstatisticfordepartmentReportDialog2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdmissionstatisticfordepartmentReportDialog2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdmissionstatisticfordepartmentReportDialog2::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStatusKey.Empty();

}
int CAdmissionstatisticfordepartmentReportDialog2::SetMode(int nMode){
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
/*void CAdmissionstatisticfordepartmentReportDialog2::OnYearChange(){
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnYearSetfocus(){
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnYearKillfocus(){
	
} */
int CAdmissionstatisticfordepartmentReportDialog2::OnYearCheckValue(){
	return 0;
} 
void CAdmissionstatisticfordepartmentReportDialog2::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionstatisticfordepartmentReportDialog2::OnReportPeriodSelendok(){
	 
}
/*void CAdmissionstatisticfordepartmentReportDialog2::OnReportPeriodSetfocus(){
	
}*/
/*void CAdmissionstatisticfordepartmentReportDialog2::OnReportPeriodKillfocus(){
	
}*/
long CAdmissionstatisticfordepartmentReportDialog2::OnReportPeriodLoadData(){
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
/*void CAdmissionstatisticfordepartmentReportDialog2::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnFromDateChange(){
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnFromDateSetfocus(){
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnFromDateKillfocus(){
	
} */
int CAdmissionstatisticfordepartmentReportDialog2::OnFromDateCheckValue(){
	return 0;
} 
/*void CAdmissionstatisticfordepartmentReportDialog2::OnToDateChange(){
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnToDateSetfocus(){
	
} */
/*void CAdmissionstatisticfordepartmentReportDialog2::OnToDateKillfocus(){
	
} */
int CAdmissionstatisticfordepartmentReportDialog2::OnToDateCheckValue(){
	return 0;
} 
void CAdmissionstatisticfordepartmentReportDialog2::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionstatisticfordepartmentReportDialog2::OnStatusSelendok(){
	 
}
/*void CAdmissionstatisticfordepartmentReportDialog2::OnStatusSetfocus(){
	
}*/
/*void CAdmissionstatisticfordepartmentReportDialog2::OnStatusKillfocus(){
	
}*/
long CAdmissionstatisticfordepartmentReportDialog2::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdmissionstatisticfordepartmentReportDialog2::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CAdmissionstatisticfordepartmentReportDialog2::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdmissionstatisticfordepartmentReportDialog2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdmissionstatisticfordepartmentReportDialog2::OnAddAdmissionstatisticfordepartmentReportDialog2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdmissionstatisticfordepartmentReportDialog2::OnEditAdmissionstatisticfordepartmentReportDialog2(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdmissionstatisticfordepartmentReportDialog2::OnDeleteAdmissionstatisticfordepartmentReportDialog2(){
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
 		OnCancelAdmissionstatisticfordepartmentReportDialog2(); 
 	}
	return 0;
}
int CAdmissionstatisticfordepartmentReportDialog2::OnSaveAdmissionstatisticfordepartmentReportDialog2(){
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
 		//OnAdmissionstatisticfordepartmentReportDialog2ListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdmissionstatisticfordepartmentReportDialog2::OnCancelAdmissionstatisticfordepartmentReportDialog2(){
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
int CAdmissionstatisticfordepartmentReportDialog2::OnAdmissionstatisticfordepartmentReportDialog2ListLoadData(){
	return 0;
}
