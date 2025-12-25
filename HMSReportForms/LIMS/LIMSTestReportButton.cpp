#include "stdafx.h"
#include "LIMSTestReportButton.h"
#include "LIMSTestReport.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnRunningManSelectFnc(CWnd *pWnd){
	CLIMSTestReportButton *pVw = (CLIMSTestReportButton *)pWnd;
	pVw->OnRunningManSelect();
} 
static int _OnAddLIMSTestReportButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestReportButton*)pWnd)->OnAddLIMSTestReportButton();
} 
static int _OnEditLIMSTestReportButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestReportButton*)pWnd)->OnEditLIMSTestReportButton();
} 
static int _OnDeleteLIMSTestReportButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestReportButton*)pWnd)->OnDeleteLIMSTestReportButton();
} 
static int _OnSaveLIMSTestReportButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestReportButton*)pWnd)->OnSaveLIMSTestReportButton();
} 
static int _OnCancelLIMSTestReportButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestReportButton*)pWnd)->OnCancelLIMSTestReportButton();
} 
CLIMSTestReportButton::CLIMSTestReportButton(CWnd *pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 380;
	SetDefaultValues();
}
CLIMSTestReportButton::~CLIMSTestReportButton(){
}
void CLIMSTestReportButton::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 4, 5, 574, 375);
	m_wndRunningMan.Create(this, _T("&RunningMan"), 101, 101, 481, 300);

}
void CLIMSTestReportButton::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CLIMSTestReportButton::OnSetWindowEvents(){
	m_wndRunningMan.SetEvent(WE_CLICK, _OnRunningManSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSTestReportButtonFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSTestReportButtonFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSTestReportButtonFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSTestReportButtonFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSTestReportButtonFnc, 0, 'T', VK_CONTROL);
	SetWindowFont(&m_wndRunningMan, GetFaceName(), GetFaceSize() + 30, TRUE);
	m_wndRunningMan.SetForegroundWindow();

}
void CLIMSTestReportButton::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSTestReportButton::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestReportButton::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSTestReportButton::SetDefaultValues(){


}
int CLIMSTestReportButton::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
void CLIMSTestReportButton::OnRunningManSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CLIMSTestReport dlg(pMF);
	dlg.DoModal();
} 
int CLIMSTestReportButton::OnAddLIMSTestReportButton(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSTestReportButton::OnEditLIMSTestReportButton(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSTestReportButton::OnDeleteLIMSTestReportButton(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelLIMSTestReportButton(); 
 	}
	return 0;
}
int CLIMSTestReportButton::OnSaveLIMSTestReportButton(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 		//OnLIMSTestReportButtonListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSTestReportButton::OnCancelLIMSTestReportButton(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CLIMSTestReportButton::OnLIMSTestReportButtonListLoadData(){
	return 0;
}