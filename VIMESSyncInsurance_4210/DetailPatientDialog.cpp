#include "DetailPatientDialog.h"
#include "MainFrm.h"

static void _OnCloseSelectFnc(CWnd *pWnd){
	CDetailPatientDialog *pVw = (CDetailPatientDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPatientTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CDetailPatientDialog*)pWnd)->OnPatientTabSelectChange(nOld, nNew);
} 
static int _OnAddDetailPatientDialogFnc(CWnd *pWnd){
	 return ((CDetailPatientDialog*)pWnd)->OnAddDetailPatientDialog();
} 
static int _OnEditDetailPatientDialogFnc(CWnd *pWnd){
	 return ((CDetailPatientDialog*)pWnd)->OnEditDetailPatientDialog();
} 
static int _OnDeleteDetailPatientDialogFnc(CWnd *pWnd){
	 return ((CDetailPatientDialog*)pWnd)->OnDeleteDetailPatientDialog();
} 
static int _OnSaveDetailPatientDialogFnc(CWnd *pWnd){
	 return ((CDetailPatientDialog*)pWnd)->OnSaveDetailPatientDialog();
} 
static int _OnCancelDetailPatientDialogFnc(CWnd *pWnd){
	 return ((CDetailPatientDialog*)pWnd)->OnCancelDetailPatientDialog();
} 
CDetailPatientDialog::CDetailPatientDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CDetailPatientDialog::~CDetailPatientDialog(){
}
void CDetailPatientDialog::OnCreateComponents()
{
	/*m_wndcontrol_1.Create(this, _T("Patient Info"), 5, 5, 515, 25);
	m_wndClose.Create(this, _T("&Close"), 220, 488, 295, 513);
	m_wndPatientTab.Create(this,5, 30, 515, 485); */

	m_wndcontrol_1.Create(this, _T("Patient Info"), 5, 4, 1005, 24);
	m_wndClose.Create(this, _T("&Close"), 905, 490, 1005, 515);
	m_wndPatientTab.Create(this,5, 30, 1005, 485); 
	
	m_wndDrugDetail.Create(&m_wndPatientTab);
	m_wndFeeDetail.Create(&m_wndPatientTab);
	m_wndPatientProfile.Create(&m_wndPatientTab);

	m_wndDrugDetail.OnInitDialog();
	m_wndFeeDetail.OnInitDialog();
	m_wndPatientProfile.OnInitDialog();

	m_wndPatientTab.Add(_T("Patient Info"), &m_wndPatientProfile);
	m_wndPatientTab.Add(_T("Detail Dug"), &m_wndDrugDetail);
	m_wndPatientTab.Add(_T("Detail Fee"), &m_wndFeeDetail);

	m_wndDrugDetail.OnInitDialog();
	m_wndFeeDetail.OnInitDialog();
	m_wndPatientProfile.OnInitDialog();
	

	m_wndPatientProfile.m_szMa_lk=m_szMaLK;
	m_wndPatientProfile.GetDataToScreen();	
}
void CDetailPatientDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

}
void CDetailPatientDialog::OnSetWindowEvents(){
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPatientTab.SetEvent(WE_SELCHANGE, _OnPatientTabSelectChangeFnc);
	m_wndPatientTab.SetCurSel(0);

}
void CDetailPatientDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CDetailPatientDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDetailPatientDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CDetailPatientDialog::SetDefaultValues(){


}
int CDetailPatientDialog::SetMode(int nMode){
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
void CDetailPatientDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
	
} 
void CDetailPatientDialog::OnPatientTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if (nNew < 0)
		return;
	switch (nNew)
	{
		case 0:
			m_wndPatientProfile.m_szDocno = m_szMaLK;
			m_wndPatientProfile.GetDataToScreen();
		break;
		case 1:
			m_wndDrugDetail.m_szMa_lk = m_szMaLK;
			m_wndDrugDetail.Oncontrol_1LoadData();
		break;
		case 2:
			m_wndFeeDetail.m_szMa_lk = m_szMaLK;
			m_wndFeeDetail.Oncontrol_1LoadData();
		break;
	}
	
} 
int CDetailPatientDialog::OnAddDetailPatientDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CDetailPatientDialog::OnEditDetailPatientDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CDetailPatientDialog::OnDeleteDetailPatientDialog(){
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
 		OnCancelDetailPatientDialog(); 
 	}
	return 0;
}
int CDetailPatientDialog::OnSaveDetailPatientDialog(){
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
 		//OnDetailPatientDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CDetailPatientDialog::OnCancelDetailPatientDialog(){
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
int CDetailPatientDialog::OnDetailPatientDialogListLoadData(){
	return 0;
}
