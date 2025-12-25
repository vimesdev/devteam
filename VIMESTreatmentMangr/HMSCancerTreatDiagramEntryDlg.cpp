#include "HMSCancerTreatDiagramEntryDlg.h"
#include "MainFrm.h"
#include "HMSCancerTreatDiagramDialog.h"

/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagramEntryDlg *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagramEntryDlg *pVw = (CHMSCancerTreatDiagramEntryDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagramEntryDlg *pVw = (CHMSCancerTreatDiagramEntryDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagramEntryDlg *pVw = (CHMSCancerTreatDiagramEntryDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancerTreatDiagramEntryDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramEntryDlg*)pWnd)->OnAddHMSCancerTreatDiagramEntryDlg();
} 
static int _OnEditHMSCancerTreatDiagramEntryDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramEntryDlg*)pWnd)->OnEditHMSCancerTreatDiagramEntryDlg();
} 
static int _OnDeleteHMSCancerTreatDiagramEntryDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramEntryDlg*)pWnd)->OnDeleteHMSCancerTreatDiagramEntryDlg();
} 
static int _OnSaveHMSCancerTreatDiagramEntryDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramEntryDlg*)pWnd)->OnSaveHMSCancerTreatDiagramEntryDlg();
} 
static int _OnCancelHMSCancerTreatDiagramEntryDlgFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagramEntryDlg*)pWnd)->OnCancelHMSCancerTreatDiagramEntryDlg();
} 
CHMSCancerTreatDiagramEntryDlg::CHMSCancerTreatDiagramEntryDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerTreatDiagramEntryDlg::~CHMSCancerTreatDiagramEntryDlg(){
}
void CHMSCancerTreatDiagramEntryDlg::OnCreateComponents(){
	m_wndDiagram.Create(this, _T("Diagram"), 5, 5, 405, 90);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 90, 55);
	m_wndID.Create(this,95, 30, 400, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 90, 85);
	m_wndDescription.Create(this,95, 60, 400, 85); 
	m_wndSave.Create(this, _T("Save"), 155, 95, 235, 120);
	m_wndCancel.Create(this, _T("Cancel"), 240, 95, 320, 120);
	m_wndClose.Create(this, _T("Close"), 325, 95, 405, 120);

}
void CHMSCancerTreatDiagramEntryDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);

	m_hms_cancer_diagTbl.SetTableName(_T("hms_cancer_treatdiag"));
	m_hms_cancer_diagTbl.AddField(_T("HCT_ORDER_ID"), dfText, 32);
	m_hms_cancer_diagTbl.AddField(_T("HCT_DESC"), dfText, 254);
}
void CHMSCancerTreatDiagramEntryDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	if(GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
}
void CHMSCancerTreatDiagramEntryDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSCancerTreatDiagramEntryDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_cancer_treatdiag WHERE HCT_ORDER_ID = '%s'"), m_szOrderID);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HCT_ORDER_ID"), m_szID);
		rs.GetValue(_T("HCT_DESC"), m_szDescription);
		UpdateData(FALSE);
	}

}
void CHMSCancerTreatDiagramEntryDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_cancer_diagTbl.SetValue(_T("HCT_ORDER_ID"), m_szID);
	m_hms_cancer_diagTbl.SetValue(_T("HCT_DESC"), m_szDescription);
}
void CHMSCancerTreatDiagramEntryDlg::SetDefaultValues(){

	m_szID.Empty();
	m_szDescription.Empty();

}
int CHMSCancerTreatDiagramEntryDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
/*void CHMSCancerTreatDiagramEntryDlg::OnIDChange(){
	
} */
/*void CHMSCancerTreatDiagramEntryDlg::OnIDSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramEntryDlg::OnIDKillfocus(){
	
} */
int CHMSCancerTreatDiagramEntryDlg::OnIDCheckValue(){
	return 0;
} 
/*void CHMSCancerTreatDiagramEntryDlg::OnDescriptionChange(){
	
} */
/*void CHMSCancerTreatDiagramEntryDlg::OnDescriptionSetfocus(){
	
} */
/*void CHMSCancerTreatDiagramEntryDlg::OnDescriptionKillfocus(){
	
} */
int CHMSCancerTreatDiagramEntryDlg::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSCancerTreatDiagramEntryDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCancerTreatDiagramEntryDlg();
} 
void CHMSCancerTreatDiagramEntryDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSCancerTreatDiagramEntryDlg();	
} 
void CHMSCancerTreatDiagramEntryDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSCancerTreatDiagramEntryDlg::OnAddHMSCancerTreatDiagramEntryDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagramEntryDlg::OnEditHMSCancerTreatDiagramEntryDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagramEntryDlg::OnDeleteHMSCancerTreatDiagramEntryDlg(){
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
 		OnCancelHMSCancerTreatDiagramEntryDlg();
 	}
	return 0;
}
int CHMSCancerTreatDiagramEntryDlg::OnSaveHMSCancerTreatDiagramEntryDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_hms_cancer_diagTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE HCT_ORDER_ID = '%s'"), m_szOrderID);
 		szSQL = m_hms_cancer_diagTbl.GetUpdateSQL(_T("HCT_ORDER_ID"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		((CHMSCancerTreatDiagramDialog *)m_pWndDiagramDlg)->OnDiagramListLoadData();
 		//OnHMSCancerTreatDiagramEntryDlgListLoadData();
 		SetMode(VM_ADD);
		m_wndID.SetFocus();
 	}
 	else
 	{
 	}
 	return ret;
}
int CHMSCancerTreatDiagramEntryDlg::OnCancelHMSCancerTreatDiagramEntryDlg(){
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
int CHMSCancerTreatDiagramEntryDlg::OnHMSCancerTreatDiagramEntryDlgListLoadData(){
	return 0;
}
