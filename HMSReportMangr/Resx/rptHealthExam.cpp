#include "rptHealthExam.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptHealthExam* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->OnToDateCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CrptHealthExam *pVw = (CrptHealthExam *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptHealthExam *pVw = (CrptHealthExam *)pWnd;
	pVw->OnExportSelect();
} 
/*static void _Oncontrol_12ChangeFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->Oncontrol_12Change();
} */
/*static void _Oncontrol_12SetfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->Oncontrol_12Setfocus();} */ 
/*static void _Oncontrol_12KillfocusFnc(CWnd *pWnd){
	((CrptHealthExam *)pWnd)->Oncontrol_12Killfocus();
} */
static int _Oncontrol_12CheckValueFnc(CWnd *pWnd){
	return ((CrptHealthExam *)pWnd)->Oncontrol_12CheckValue();
} 
static int _OnAddrptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnAddrptHealthExam();
} 
static int _OnEditrptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnEditrptHealthExam();
} 
static int _OnDeleterptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnDeleterptHealthExam();
} 
static int _OnSaverptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnSaverptHealthExam();
} 
static int _OnCancelrptHealthExamFnc(CWnd *pWnd){
	 return ((CrptHealthExam*)pWnd)->OnCancelrptHealthExam();
} 
CrptHealthExam::CrptHealthExam(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CrptHealthExam::~CrptHealthExam(){
}
void CrptHealthExam::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 351, 119);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 90, 55);
	m_wndYear.Create(this,95, 30, 175, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Period"), 180, 30, 260, 55);
	m_wndReportPeriod.Create(this,265, 30, 345, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 90, 85);
	m_wndFromDate.Create(this,95, 60, 175, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 60, 255, 81);
	m_wndToDate.Create(this,265, 60, 345, 85); 
	m_wndPrint.Create(this, _T("&Print"), 186, 125, 261, 150);
	m_wndExport.Create(this, _T("&Export"), 275, 125, 350, 150);
	m_wndMaxLab.Create(this, _T("Max"), 10, 90, 90, 115);
	m_wndcontrol_12.Create(this,95, 90, 344, 115); 

}
void CrptHealthExam::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(1024);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndcontrol_12.SetLimitText(35);
	m_wndcontrol_12.SetCheckValue(true);



}
void CrptHealthExam::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	//m_wndcontrol_12.SetEvent(WE_CHANGE, _Oncontrol_12ChangeFnc);
	//m_wndcontrol_12.SetEvent(WE_SETFOCUS, _Oncontrol_12SetfocusFnc);
	//m_wndcontrol_12.SetEvent(WE_KILLFOCUS, _Oncontrol_12KillfocusFnc);
	m_wndcontrol_12.SetEvent(WE_CHECKVALUE, _Oncontrol_12CheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddrptHealthExamFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditrptHealthExamFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleterptHealthExamFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaverptHealthExamFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelrptHealthExamFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CrptHealthExam::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndcontrol_12.GetDlgCtrlID(), m_szcontrol_12);

}
void CrptHealthExam::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptHealthExam::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptHealthExam::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szcontrol_12.Empty();

}
int CrptHealthExam::SetMode(int nMode){
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
/*void CrptHealthExam::OnYearChange(){
	
} */
/*void CrptHealthExam::OnYearSetfocus(){
	
} */
/*void CrptHealthExam::OnYearKillfocus(){
	
} */
int CrptHealthExam::OnYearCheckValue(){
	return 0;
} 
void CrptHealthExam::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptHealthExam::OnReportPeriodSelendok(){
	 
}
/*void CrptHealthExam::OnReportPeriodSetfocus(){
	
}*/
/*void CrptHealthExam::OnReportPeriodKillfocus(){
	
}*/
long CrptHealthExam::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReportPeriodKey
};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CrptHealthExam::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CrptHealthExam::OnFromDateChange(){
	
} */
/*void CrptHealthExam::OnFromDateSetfocus(){
	
} */
/*void CrptHealthExam::OnFromDateKillfocus(){
	
} */
int CrptHealthExam::OnFromDateCheckValue(){
	return 0;
} 
/*void CrptHealthExam::OnToDateChange(){
	
} */
/*void CrptHealthExam::OnToDateSetfocus(){
	
} */
/*void CrptHealthExam::OnToDateKillfocus(){
	
} */
int CrptHealthExam::OnToDateCheckValue(){
	return 0;
} 
void CrptHealthExam::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptHealthExam::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CrptHealthExam::Oncontrol_12Change(){
	
} */
/*void CrptHealthExam::Oncontrol_12Setfocus(){
	
} */
/*void CrptHealthExam::Oncontrol_12Killfocus(){
	
} */
int CrptHealthExam::Oncontrol_12CheckValue(){
	return 0;
} 
int CrptHealthExam::OnAddrptHealthExam(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CrptHealthExam::OnEditrptHealthExam(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptHealthExam::OnDeleterptHealthExam(){
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
 		OnCancelrptHealthExam();
 	}
	return 0;
}
int CrptHealthExam::OnSaverptHealthExam(){
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
 		//OnrptHealthExamListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CrptHealthExam::OnCancelrptHealthExam(){
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
int CrptHealthExam::OnrptHealthExamListLoadData(){
	return 0;
}
