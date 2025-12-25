#include "PMPostNationalGateDialog.h"
#include "MainFrame_E10.h"
#include "HMSLienThongNhaThuoc.h"

/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMPostNationalGateDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMPostNationalGateDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMPostNationalGateDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMPostNationalGateDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMPostNationalGateDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMPostNationalGateDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMPostNationalGateDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMPostNationalGateDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CPMPostNationalGateDialog *pVw = (CPMPostNationalGateDialog *)pWnd;
	pVw->OnPostSelect();
} 
static int _OnAddPMPostNationalGateDialogFnc(CWnd *pWnd){
	 return ((CPMPostNationalGateDialog*)pWnd)->OnAddPMPostNationalGateDialog();
} 
static int _OnEditPMPostNationalGateDialogFnc(CWnd *pWnd){
	 return ((CPMPostNationalGateDialog*)pWnd)->OnEditPMPostNationalGateDialog();
} 
static int _OnDeletePMPostNationalGateDialogFnc(CWnd *pWnd){
	 return ((CPMPostNationalGateDialog*)pWnd)->OnDeletePMPostNationalGateDialog();
} 
static int _OnSavePMPostNationalGateDialogFnc(CWnd *pWnd){
	 return ((CPMPostNationalGateDialog*)pWnd)->OnSavePMPostNationalGateDialog();
} 
static int _OnCancelPMPostNationalGateDialogFnc(CWnd *pWnd){
	 return ((CPMPostNationalGateDialog*)pWnd)->OnCancelPMPostNationalGateDialog();
} 
CPMPostNationalGateDialog::CPMPostNationalGateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMPostNationalGateDialog::~CPMPostNationalGateDialog(){
}
void CPMPostNationalGateDialog::OnCreateComponents(){
	m_wndConditions.Create(this, _T("Conditions"), 5, 5, 490, 60);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 245, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 485, 55); 
	m_wndPost.Create(this, _T("&Post"), 415, 65, 490, 90);

}
void CPMPostNationalGateDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	CDate dte(pMF->GetSysDate());
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate += _T(" 23:59");
	UpdateData(FALSE);
}

void CPMPostNationalGateDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);

}
void CPMPostNationalGateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CPMPostNationalGateDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{			
		m_jData[_T("FromDate")] =  m_szFromDate;
		m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{			
		m_jData[_T("FromDate")].GetValue(m_szFromDate);
		m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}

void CPMPostNationalGateDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMPostNationalGateDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMPostNationalGateDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}

int CPMPostNationalGateDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CPMPostNationalGateDialog::OnFromDateChange(){
	
} */
/*void CPMPostNationalGateDialog::OnFromDateSetfocus(){
	
} */
/*void CPMPostNationalGateDialog::OnFromDateKillfocus(){
	
} */
int CPMPostNationalGateDialog::OnFromDateCheckValue(){
	return 0;
}
 
/*void CPMPostNationalGateDialog::OnToDateChange(){
	
} */
/*void CPMPostNationalGateDialog::OnToDateSetfocus(){
	
} */
/*void CPMPostNationalGateDialog::OnToDateKillfocus(){
	
} */
int CPMPostNationalGateDialog::OnToDateCheckValue(){
	return 0;
}
 
void CPMPostNationalGateDialog::OnPostSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	long nStorage_id = 0;
	pMF->BeginWaitCursor();
	szSQL.Format(_T("hms_lienthong_createauto_v2('%s', '%s', '%s', '%s')")
				, pMF->GetModuleID(), pMF->GetCurrentUser(), m_szFromDate, m_szToDate);
	pMF->ExecDML(szSQL);
	CHMSLienThongNhaThuoc lt;
	//szWhere = _T(" and hld_stockid = 3");
	szSQL.Format(_T("select * from hms_lienthong_duoc where 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("hld_stockid"), nStorage_id);
		lt.OnPostAuto(nStorage_id);
		rs.MoveNext();
	}	
	pMF->EndWaitCursor();
} 
int CPMPostNationalGateDialog::OnAddPMPostNationalGateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMPostNationalGateDialog::OnEditPMPostNationalGateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMPostNationalGateDialog::OnDeletePMPostNationalGateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMPostNationalGateDialog();
 	}
	return 0;
}
int CPMPostNationalGateDialog::OnSavePMPostNationalGateDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMPostNationalGateDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMPostNationalGateDialog::OnCancelPMPostNationalGateDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMPostNationalGateDialog::OnPMPostNationalGateDialogListLoadData(){
	return 0;
}
