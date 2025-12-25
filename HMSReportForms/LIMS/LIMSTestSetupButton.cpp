#include "stdafx.h"
#include "LIMSTestSetupButton.h"
#include "ParaclinicalInformation.h"
#include "LIMSUpdateBarCodeTime.h"
#include "LIMSIsoSetupDialog.h"

#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnSetupParameterSelectFnc(CWnd *pWnd){
	CLIMSTestSetupButton *pVw = (CLIMSTestSetupButton *)pWnd;
	pVw->OnSetupParameterSelect();
}
static void _OnUpdateBarcodeTimeSelectFnc(CWnd *pWnd){
	CLIMSTestSetupButton *pVw = (CLIMSTestSetupButton *)pWnd;
	pVw->OnUpdateBarcodeTimeSelect();
} 
static int _OnAddLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestSetupButton*)pWnd)->OnAddLIMSTestSetupButton();
} 
static int _OnEditLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestSetupButton*)pWnd)->OnEditLIMSTestSetupButton();
} 
static int _OnDeleteLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestSetupButton*)pWnd)->OnDeleteLIMSTestSetupButton();
} 
static int _OnSaveLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestSetupButton*)pWnd)->OnSaveLIMSTestSetupButton();
} 
static int _OnCancelLIMSTestSetupButtonFnc(CWnd *pWnd){
	 return ((CLIMSTestSetupButton*)pWnd)->OnCancelLIMSTestSetupButton();
}
static void _OnSetupIsoParameterSelectFnc(CWnd *pWnd)
{
	CLIMSTestSetupButton *pVw = (CLIMSTestSetupButton *)pWnd;
	pVw->OnSetupIsoParameterSelect();
} 

CLIMSTestSetupButton::CLIMSTestSetupButton(CWnd *pParent){

	m_nDlgWidth = 585;
	m_nDlgHeight = 380;
	SetDefaultValues();
}
CLIMSTestSetupButton::~CLIMSTestSetupButton()
{
}
void CLIMSTestSetupButton::OnCreateComponents()
{
	/*m_wndReportCondition.Create(this, _T("Report Condition"), 4, 5, 574, 375);
	m_wndSetupParameter.Create(this, _T("&SetupParameter"), 101, 100, 481, 174);
	m_wndUpdateBarcodeTime.Create(this, _T("&UpdateBarcodeTime"), 101, 202, 481, 275);*/

	m_wndReportCondition.Create(this, _T("Report Condition"), 4, 5, 574, 351);
	m_wndSetupParameter.Create(this, _T("&SetupParameter"), 101, 51, 481, 125);
	m_wndUpdateBarcodeTime.Create(this, _T("&UpdateBarcodeTime"), 101, 151, 481, 224);
	m_wndSetupIsoParameter.Create(this, _T("&SetupIsoParameter"), 101, 251, 481, 324);
}
void CLIMSTestSetupButton::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);

}
void CLIMSTestSetupButton::OnSetWindowEvents(){
	m_wndSetupParameter.SetEvent(WE_CLICK, _OnSetupParameterSelectFnc);
	m_wndUpdateBarcodeTime.SetEvent(WE_CLICK, _OnUpdateBarcodeTimeSelectFnc);
	m_wndSetupIsoParameter.SetEvent(WE_CLICK, _OnSetupIsoParameterSelectFnc);

	AddEvent(1, _T("Add	Ctrl+A"), _OnAddLIMSTestSetupButtonFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditLIMSTestSetupButtonFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteLIMSTestSetupButtonFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveLIMSTestSetupButtonFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelLIMSTestSetupButtonFnc, 0, 'T', VK_CONTROL);
	SetWindowFont(&m_wndSetupParameter, GetFaceName(), GetFaceSize() + 30, TRUE);
	m_wndSetupParameter.SetForegroundWindow();

}
void CLIMSTestSetupButton::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSTestSetupButton::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSTestSetupButton::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSTestSetupButton::SetDefaultValues(){


}
int CLIMSTestSetupButton::SetMode(int nMode){
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
void CLIMSTestSetupButton::OnSetupParameterSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("10")))
	{
		ShowMessageBox(_T("Không có quyền truy cập hệ thống"), 0);
		return;
	}
	CParaclinicalInformation dlg(pMF);
	dlg.DoModal();
}
void CLIMSTestSetupButton::OnUpdateBarcodeTimeSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
    //CLIMSUpdateBarCodeTime dlg(pMF);
    //dlg.DoModal();	
}
#include "LIMSCancelledOrderDlg.h"
void CLIMSTestSetupButton::OnSetupIsoParameterSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("11")))
	{
		ShowMessageBox(_T("Không có quyền truy cập hệ thống"), 0);
		return;
	}
	CLIMSIsoSetupDialog dlg(pMF);
    dlg.DoModal();	
} 

int CLIMSTestSetupButton::OnAddLIMSTestSetupButton()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CLIMSTestSetupButton::OnEditLIMSTestSetupButton(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSTestSetupButton::OnDeleteLIMSTestSetupButton(){
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
int CLIMSTestSetupButton::OnSaveLIMSTestSetupButton(){
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
int CLIMSTestSetupButton::OnCancelLIMSTestSetupButton(){
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
int CLIMSTestSetupButton::OnLIMSTestSetupButtonListLoadData(){
	return 0;
}