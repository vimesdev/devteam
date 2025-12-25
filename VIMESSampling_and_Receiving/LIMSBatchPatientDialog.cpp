#include "LIMSBatchPatientDialog.h"
#include "MainFrm.h"
static void _OnApplySelectFnc(CWnd *pWnd){
	CLIMSBatchPatientDialog *pVw = (CLIMSBatchPatientDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CLIMSBatchPatientDialog *pVw = (CLIMSBatchPatientDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddLIMSBatchPatientDialogFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientDialog*)pWnd)->OnAddLIMSBatchPatientDialog();
} 
static int _OnEditLIMSBatchPatientDialogFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientDialog*)pWnd)->OnEditLIMSBatchPatientDialog();
} 
static int _OnDeleteLIMSBatchPatientDialogFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientDialog*)pWnd)->OnDeleteLIMSBatchPatientDialog();
} 
static int _OnSaveLIMSBatchPatientDialogFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientDialog*)pWnd)->OnSaveLIMSBatchPatientDialog();
} 
static int _OnCancelLIMSBatchPatientDialogFnc(CWnd *pWnd){
	 return ((CLIMSBatchPatientDialog*)pWnd)->OnCancelLIMSBatchPatientDialog();
} 
CLIMSBatchPatientDialog::CLIMSBatchPatientDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CLIMSBatchPatientDialog::~CLIMSBatchPatientDialog(){
}
void CLIMSBatchPatientDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, CRect(5, 5, 510, 550));
	m_wndApply.Create(this, _T("&Apply"), 350, 590, 430, 615);
	m_wndClose.Create(this, _T("&Close"), 435, 590, 515, 615);
	
	m_wndPatientList.m_nViewType = 1;
}
void CLIMSBatchPatientDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSBatchPatientDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPatientList.MoveWindow(CRect(5, 5, 510, 580));
	SetMode(VM_VIEW);

}
void CLIMSBatchPatientDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CLIMSBatchPatientDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CLIMSBatchPatientDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSBatchPatientDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CLIMSBatchPatientDialog::SetDefaultValues(){


}
int CLIMSBatchPatientDialog::SetMode(int nMode){
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
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
void CLIMSBatchPatientDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szPerformDept;
	CStringArray depts;
	for (int  i = 0; i < m_wndPatientList.m_wndList.GetItemCount(); i++)
	{
		if(!m_wndPatientList.m_wndList.GetCheck(i))
				continue;
		bool found = false;
		szPerformDept = m_wndPatientList.m_wndList.GetItemText(i, 6);
		for (int j =0; j < depts.GetCount(); j++)
		{
			if(depts[j] == szPerformDept)
			{
				found = true;
				break;
			}
		}

		if(!found)
		{
			depts.Add(szPerformDept);
		}
	}

	for (int n=0; n < depts.GetCount(); n++)
	{
		szPerformDept = depts[n];

		szSQL.Format(_T("LIMS_BATCH_CREATE('%s', '%s', '%s') "), pMF->GetCurrentUser(), pMF->GetDepartmentID(), szPerformDept);
		long nBatchId = str2long(pMF->ExecDML(szSQL));
		
		if(nBatchId > 0)
		{
			for (int  i = 0; i < m_wndPatientList.m_wndList.GetItemCount(); i++)
			{
				if(!m_wndPatientList.m_wndList.GetCheck(i))
					continue;

				CString szDept = m_wndPatientList.m_wndList.GetItemText(i, 6);
				if(szDept != szPerformDept)
					continue;

				long nDocno = str2long(m_wndPatientList.m_wndList.GetItemText(i, 1));
				long nOrderId = str2long(m_wndPatientList.m_wndList.GetItemText(i, 5));
				szSQL.Format(_T("LIMS_BATCH_CREATELINE(%ld, %ld, %ld)"), nBatchId, nDocno, nOrderId);
	_tprintf(_T("\r\n%s"), szSQL);
				pMF->ExecDML(szSQL);
			}
		}
	}
	if(depts.GetCount() > 0)
	{
		CGuiDialog::OnOK();
	}


} 
void CLIMSBatchPatientDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CLIMSBatchPatientDialog::OnAddLIMSBatchPatientDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSBatchPatientDialog::OnEditLIMSBatchPatientDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSBatchPatientDialog::OnDeleteLIMSBatchPatientDialog(){
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
 		OnCancelLIMSBatchPatientDialog();
 	}
	return 0;
}
int CLIMSBatchPatientDialog::OnSaveLIMSBatchPatientDialog(){
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
 		//OnLIMSBatchPatientDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSBatchPatientDialog::OnCancelLIMSBatchPatientDialog(){
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
int CLIMSBatchPatientDialog::OnLIMSBatchPatientDialogListLoadData(){
	return 0;
}
