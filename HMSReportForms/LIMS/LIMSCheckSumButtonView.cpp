#include "stdafx.h"
#include "LIMSCheckSumButtonView.h"
#include "CheckSumTool.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnSetupParameterSelectFnc(CWnd *pWnd)
{
	CLIMSCheckSumButtonView *pVw = (CLIMSCheckSumButtonView *)pWnd;
	pVw->OnSetupParameterSelect();
} 
static int _OnAddLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSCheckSumButtonView*)pWnd)->OnAddLIMSTestSetupButton();
} 
static int _OnEditLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSCheckSumButtonView*)pWnd)->OnEditLIMSTestSetupButton();
} 
static int _OnDeleteLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSCheckSumButtonView*)pWnd)->OnDeleteLIMSTestSetupButton();
} 
static int _OnSaveLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSCheckSumButtonView*)pWnd)->OnSaveLIMSTestSetupButton();
} 
static int _OnCancelLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSCheckSumButtonView*)pWnd)->OnCancelLIMSTestSetupButton();
} 
CLIMSCheckSumButtonView::CLIMSCheckSumButtonView(CWnd *pParent)
{
	m_nDlgWidth = 585;
	m_nDlgHeight = 380;
	SetDefaultValues();
}
CLIMSCheckSumButtonView::~CLIMSCheckSumButtonView()
{
}
void CLIMSCheckSumButtonView::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 4, 5, 574, 375);
	m_wndSetupParameter.Create(this, _T("&Time Process Check List"), 101, 101, 481, 300);

}
void CLIMSCheckSumButtonView::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
}
void CLIMSCheckSumButtonView::OnSetWindowEvents(){
	m_wndSetupParameter.SetEvent(WE_CLICK, _OnSetupParameterSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSTestSetupButtonFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSTestSetupButtonFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSTestSetupButtonFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSTestSetupButtonFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSTestSetupButtonFnc, 0, 'T', VK_CONTROL);
	SetWindowFont(&m_wndSetupParameter, GetFaceName(), GetFaceSize() + 30, TRUE);
	m_wndSetupParameter.SetForegroundWindow();

}
void CLIMSCheckSumButtonView::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSCheckSumButtonView::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSCheckSumButtonView::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSCheckSumButtonView::SetDefaultValues(){


}
int CLIMSCheckSumButtonView::SetMode(int nMode){
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
void CLIMSCheckSumButtonView::OnSetupParameterSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CCheckSumTool dlg(pMF);
	dlg.DoModal();
} 
int CLIMSCheckSumButtonView::OnAddLIMSTestSetupButton(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSCheckSumButtonView::OnEditLIMSTestSetupButton(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSCheckSumButtonView::OnDeleteLIMSTestSetupButton(){
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
 		OnCancelLIMSTestSetupButton(); 
 	}
	return 0;
}
int CLIMSCheckSumButtonView::OnSaveLIMSTestSetupButton(){
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
 		//OnLIMSTestSetupButtonListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CLIMSCheckSumButtonView::OnCancelLIMSTestSetupButton(){
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
int CLIMSCheckSumButtonView::OnLIMSTestSetupButtonListLoadData(){
	return 0;
}