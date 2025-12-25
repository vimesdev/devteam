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
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSTerminateDocumentDialog::~CHMSTerminateDocumentDialog(){
}
void CHMSTerminateDocumentDialog::OnCreateComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSuggestionInformation.Create(this, _T("Suggestion Information"), 5, 5, 800, 605);
	m_wndSuggestion.Create(this,CRect(10, 30, 175, 600));
	m_wndDischarge.Create(this);
	
	m_wndAdmission.Create(this);
	m_wndHospitalTransfer.Create(this);

	//if(pMF->m_szOutpatient !=_T("Y"))
	//{
	//	m_wndAdmission.Create(this);
	//	m_wndHospitalTransfer.Create(this);
	//	//m_wndTransferFloor.Create(this);
	//}
}
void CHMSTerminateDocumentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	
	m_wndSuggestion.Add(_T("Discharge"), _T(""), &m_wndDischarge);
	m_wndSuggestion.Add(_T("Hospital Transfer"), _T(""), &m_wndHospitalTransfer);
	m_wndSuggestion.Add(_T("Department Movement"), _T(""), &m_wndAdmission);
	

	//if(pMF->m_szOutpatient !=_T("Y"))
	//{
	//	m_wndSuggestion.Add(_T("Hospital Transfer"), _T(""), &m_wndHospitalTransfer);
	//	m_wndSuggestion.Add(_T("Move Other Department"), _T(""), &m_wndAdmission);
	//	//m_wndSuggestion.Add(_T("Floor Transfer"), _T(""), &m_wndTransferFloor);
	//}

	if(m_szSuggestion == _T("T"))
	{
		OnSuggestionSelectChange(0, 0);
		m_wndSuggestion.SetCurSel(0);
	}
	else if(m_szSuggestion == _T("F"))
	{
		OnSuggestionSelectChange(0, 1);
		m_wndSuggestion.SetCurSel(1);
	}
	else if(m_szSuggestion == _T("M"))
	{
		OnSuggestionSelectChange(0, 2);
		m_wndSuggestion.SetCurSel(2);
	}
	//else if(m_szSuggestion == _T("F"))
	//{
	//	OnSuggestionSelectChange(0, 3);
	//	m_wndSuggestion.SetCurSel(3);
	//}
	else if(m_szSuggestion.IsEmpty())
	{
		OnSuggestionSelectChange(0, 0);
		m_wndSuggestion.SetCurSel(0);
	}
}
void CHMSTerminateDocumentDialog::OnSetWindowEvents(){
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
int CHMSTerminateDocumentDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiDialog::SetMode(nMode); 
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
	CRect rect;
	GetClientRect(&rect);
	rect.left += 180;
	rect.top += 30;	
	m_wndDischarge.ShowWindow(SW_HIDE);
	m_wndHospitalTransfer.ShowWindow(SW_HIDE);
	m_wndAdmission.ShowWindow(SW_HIDE);
	m_wndTransferFloor.ShowWindow(SW_HIDE);
	switch (nNew)
	{
	case 0:
		m_wndDischarge.SetWindowPos(NULL, rect.left, rect.top, rect.Width()-20, rect.Height()-30, SWP_NOZORDER|SWP_SHOWWINDOW);
		break;
	case 1:
		m_wndHospitalTransfer.SetWindowPos(NULL, rect.left, rect.top, rect.Width()-20, rect.Height()-30, SWP_NOZORDER|SWP_SHOWWINDOW);
		break;
	case 2:
		m_wndAdmission.SetWindowPos(NULL, rect.left, rect.top, rect.Width()-20, rect.Height()-30, SWP_NOZORDER|SWP_SHOWWINDOW);
		break;
	case 3:
		m_wndTransferFloor.SetWindowPos(NULL, rect.left, rect.top, rect.Width()-20, rect.Height()-30, SWP_NOZORDER|SWP_SHOWWINDOW);
		break;
	};
	
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
 //_fmsg(_T("%s"), szSQL); 
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
