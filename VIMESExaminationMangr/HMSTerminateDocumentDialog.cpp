#include "HMSTerminateDocumentDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnSuggestionSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnSuggestionSelectChange(nOld, nNew);
} 
static int _OnAddHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnAddHMSTerminateDocumentDialog();
} 
static int _OnEditHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnEditHMSTerminateDocumentDialog();
} 
static int _OnDeleteHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnDeleteHMSTerminateDocumentDialog();
} 
static int _OnSaveHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnSaveHMSTerminateDocumentDialog();
} 
static int _OnCancelHMSTerminateDocumentDialogFnc(CWnd *pWnd){
	 return ((CHMSTerminateDocumentDialog*)pWnd)->OnCancelHMSTerminateDocumentDialog();
}

CHMSTerminateDocumentDialog::CHMSTerminateDocumentDialog(){

	m_nDlgWidth = 800;
	m_nDlgHeight = 560;
	SetDefaultValues();
}
CHMSTerminateDocumentDialog::~CHMSTerminateDocumentDialog()
{
}
void CHMSTerminateDocumentDialog::OnCreateComponents()
{
	m_wndSuggestionInformation.Create(this, _T("Suggestion Information"), 5, 6, 800, 560);
	m_wndSuggestion.Create(this, CRect(10, 30, 790, 550)); 
	m_wndDischarge.Create(this);
	m_wndAdmission.Create(this);
	m_wndOutpatientTreat.Create(this);
	m_wndHospitalTransfer.Create(this);
	m_wndAppointment.Create(this);
//	m_wndTreatmentThudung.Create(this);
}
void CHMSTerminateDocumentDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndSuggestion.SetPaneWidth(175);
	m_wndSuggestion.Add(_T("Discharge - F2"), _T(""),  &m_wndDischarge);
	m_wndSuggestion.Add(_T("Admission - F3"), _T(""), &m_wndAdmission);
	m_wndSuggestion.Add(_T("Outpatient Treat - F4"), _T(""), &m_wndOutpatientTreat);
	m_wndSuggestion.Add(_T("Hospital Transfer - F5"), _T(""), &m_wndHospitalTransfer);
	m_wndSuggestion.Add(_T("Appointment Re-examine - F6"), _T(""), &m_wndAppointment);
//	m_wndSuggestion.AddItem(_T("Treatment of collected content"), &m_wndTreatmentThudung);
	

	/*
	m_wndSuggestion.AddItem(_T("Discharge - F2"), &m_wndDischarge);
	m_wndSuggestion.AddItem(_T("Admission - F3"), &m_wndAdmission);
	m_wndSuggestion.AddItem(_T("Outpatient Treat - F4"), &m_wndOutpatientTreat);
	m_wndSuggestion.AddItem(_T("Hospital Transfer - F5"), &m_wndHospitalTransfer);
	m_wndSuggestion.AddItem(_T("Appointment Re-examine - F6"), &m_wndAppointment);
//	m_wndSuggestion.AddItem(_T("Treatment of collected content"), &m_wndTreatmentThudung);
	
	if(m_szSuggestion == _T("D"))
		m_wndSuggestion.SetCurSel(0);
	else if(m_szSuggestion == _T("A"))
		m_wndSuggestion.SetCurSel(1);
	else if(m_szSuggestion == _T("O")) 
		m_wndSuggestion.SetCurSel(2);
	else if(m_szSuggestion == _T("T")) 
		m_wndSuggestion.SetCurSel(3);
	else if(m_szSuggestion == _T("R")) 
		m_wndSuggestion.SetCurSel(4);
	else
	{
		m_wndSuggestion.SetCurSel(0);
		if (m_szStatus != _T("T"))
			m_wndDischarge.OnUpdateSelect();
	}
	*/

}
void CHMSTerminateDocumentDialog::OnSetWindowEvents()
{
	m_wndSuggestion.SetCallback(_OnSuggestionSelectChangeFnc);
}
void CHMSTerminateDocumentDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSTerminateDocumentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTerminateDocumentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTerminateDocumentDialog::SetDefaultValues(){


}
int CHMSTerminateDocumentDialog::SetMode(int nMode)
{ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
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
int CHMSTerminateDocumentDialog::OnSuggestionSelectChange(int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNew < 0) 
		return - 1;
	return 0;
} 
int CHMSTerminateDocumentDialog::OnAddHMSTerminateDocumentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSTerminateDocumentDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSTerminateDocumentDialog::OnEditHMSTerminateDocumentDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSTerminateDocumentDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSTerminateDocumentDialog::OnDeleteHMSTerminateDocumentDialog(){
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
 		OnCancelHMSTerminateDocumentDialog(); 
 	}
return 0;
 } 
int CHMSTerminateDocumentDialog::OnSaveHMSTerminateDocumentDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
// 		szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 //		szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSTerminateDocumentDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTerminateDocumentDialog::OnCancelHMSTerminateDocumentDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSTerminateDocumentDialog::OnHMSTerminateDocumentDialogListLoadData(){
	return 0;
}
BOOL CHMSTerminateDocumentDialog::PreTranslateMessage(MSG *pMsg)
{
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_F2)
			m_wndSuggestion.SetCurSel(0);
		else if (pMsg->wParam == VK_F3)
			m_wndSuggestion.SetCurSel(1);
		else if (pMsg->wParam == VK_F4)
			m_wndSuggestion.SetCurSel(2);
		else if (pMsg->wParam == VK_F5)
			m_wndSuggestion.SetCurSel(3);
		else if (pMsg->wParam == VK_F6)
			m_wndSuggestion.SetCurSel(4);
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}
