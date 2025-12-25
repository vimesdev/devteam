#include "HMSPatientNoChangeDialog.h"
#include "MainFrm.h"
/*static void _OnOldDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnOldDocumentNoChange();
} */
/*static void _OnOldDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnOldDocumentNoSetfocus();} */ 
/*static void _OnOldDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnOldDocumentNoKillfocus();
} */
static int _OnOldDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientNoChangeDialog *)pWnd)->OnOldDocumentNoCheckValue();
} 
/*static void _OnPatientNo1ChangeFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo1Change();
} */
/*static void _OnPatientNo1SetfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo1Setfocus();} */ 
/*static void _OnPatientNo1KillfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo1Killfocus();
} */
static int _OnPatientNo1CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo1CheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnNewDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnNewDocumentNoChange();
} */
/*static void _OnNewDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnNewDocumentNoSetfocus();} */ 
/*static void _OnNewDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnNewDocumentNoKillfocus();
} */
static int _OnNewDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientNoChangeDialog *)pWnd)->OnNewDocumentNoCheckValue();
} 
/*static void _OnPatientNo2ChangeFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo2Change();
} */
/*static void _OnPatientNo2SetfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo2Setfocus();} */ 
/*static void _OnPatientNo2KillfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo2Killfocus();
} */
static int _OnPatientNo2CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientNoChangeDialog *)pWnd)->OnPatientNo2CheckValue();
} 
/*static void _OnPatientName2ChangeFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientName2Change();
} */
/*static void _OnPatientName2SetfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientName2Setfocus();} */ 
/*static void _OnPatientName2KillfocusFnc(CWnd *pWnd){
	((CHMSPatientNoChangeDialog *)pWnd)->OnPatientName2Killfocus();
} */
static int _OnPatientName2CheckValueFnc(CWnd *pWnd){
	return ((CHMSPatientNoChangeDialog *)pWnd)->OnPatientName2CheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSPatientNoChangeDialog *pVw = (CHMSPatientNoChangeDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPatientNoChangeDialog *pVw = (CHMSPatientNoChangeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientNoChangeDialog*)pWnd)->OnAddHMSPatientNoChangeDialog();
} 
static int _OnEditHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientNoChangeDialog*)pWnd)->OnEditHMSPatientNoChangeDialog();
} 
static int _OnDeleteHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientNoChangeDialog*)pWnd)->OnDeleteHMSPatientNoChangeDialog();
} 
static int _OnSaveHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientNoChangeDialog*)pWnd)->OnSaveHMSPatientNoChangeDialog();
} 
static int _OnCancelHMSPatientNoChangeDialogFnc(CWnd *pWnd){
	 return ((CHMSPatientNoChangeDialog*)pWnd)->OnCancelHMSPatientNoChangeDialog();
} 
CHMSPatientNoChangeDialog::CHMSPatientNoChangeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSPatientNoChangeDialog::~CHMSPatientNoChangeDialog(){
}
void CHMSPatientNoChangeDialog::OnCreateComponents(){
	m_wndOldDocNoLabel.Create(this, _T("Old Document No"), 10, 30, 130, 55);
	m_wndOldDocumentNo.Create(this,135, 30, 220, 55); 
	m_wndPatientNo1Label.Create(this, _T("Patient No"), 225, 30, 310, 55);
	m_wndPatientInformation.Create(this, _T("Patient Information"), 5, 5, 400, 150);
	m_wndPatientNo1.Create(this,315, 30, 395, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 395, 85); 
	m_wndNewDocumentNoLabel.Create(this, _T("New Document No"), 10, 90, 130, 115);
	m_wndNewDocumentNo.Create(this,135, 90, 220, 115); 
	m_wndPatientNo2Label.Create(this, _T("Patient No"), 225, 90, 310, 115);
	m_wndPatientNo2.Create(this,315, 90, 395, 115); 
	m_wndPatientName2Label.Create(this, _T("Patient Name"), 10, 120, 130, 145);
	m_wndPatientName2.Create(this,135, 120, 395, 145); 
	m_wndOK.Create(this, _T("&OK"), 235, 155, 315, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 320, 155, 400, 180);

}
void CHMSPatientNoChangeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndOldDocumentNo.SetLimitText(16);
	m_wndOldDocumentNo.SetCheckValue(true);
	m_wndPatientNo1.SetLimitText(16);
	m_wndPatientName.SetLimitText(35);
	m_wndPatientName.SetCheckValue(true);
	m_wndNewDocumentNo.SetLimitText(16);
	m_wndNewDocumentNo.SetCheckValue(true);
	m_wndPatientNo2.SetLimitText(16);
	m_wndPatientName2.SetLimitText(35);
	m_wndPatientName2.SetCheckValue(true);

}
void CHMSPatientNoChangeDialog::OnSetWindowEvents(){
	//m_wndOldDocumentNo.SetEvent(WE_CHANGE, _OnOldDocumentNoChangeFnc);
	//m_wndOldDocumentNo.SetEvent(WE_SETFOCUS, _OnOldDocumentNoSetfocusFnc);
	//m_wndOldDocumentNo.SetEvent(WE_KILLFOCUS, _OnOldDocumentNoKillfocusFnc);
	m_wndOldDocumentNo.SetEvent(WE_CHECKVALUE, _OnOldDocumentNoCheckValueFnc);
	//m_wndPatientNo1.SetEvent(WE_CHANGE, _OnPatientNo1ChangeFnc);
	//m_wndPatientNo1.SetEvent(WE_SETFOCUS, _OnPatientNo1SetfocusFnc);
	//m_wndPatientNo1.SetEvent(WE_KILLFOCUS, _OnPatientNo1KillfocusFnc);
	m_wndPatientNo1.SetEvent(WE_CHECKVALUE, _OnPatientNo1CheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndNewDocumentNo.SetEvent(WE_CHANGE, _OnNewDocumentNoChangeFnc);
	//m_wndNewDocumentNo.SetEvent(WE_SETFOCUS, _OnNewDocumentNoSetfocusFnc);
	//m_wndNewDocumentNo.SetEvent(WE_KILLFOCUS, _OnNewDocumentNoKillfocusFnc);
	m_wndNewDocumentNo.SetEvent(WE_CHECKVALUE, _OnNewDocumentNoCheckValueFnc);
	//m_wndPatientNo2.SetEvent(WE_CHANGE, _OnPatientNo2ChangeFnc);
	//m_wndPatientNo2.SetEvent(WE_SETFOCUS, _OnPatientNo2SetfocusFnc);
	//m_wndPatientNo2.SetEvent(WE_KILLFOCUS, _OnPatientNo2KillfocusFnc);
	m_wndPatientNo2.SetEvent(WE_CHECKVALUE, _OnPatientNo2CheckValueFnc);
	//m_wndPatientName2.SetEvent(WE_CHANGE, _OnPatientName2ChangeFnc);
	//m_wndPatientName2.SetEvent(WE_SETFOCUS, _OnPatientName2SetfocusFnc);
	//m_wndPatientName2.SetEvent(WE_KILLFOCUS, _OnPatientName2KillfocusFnc);
	m_wndPatientName2.SetEvent(WE_CHECKVALUE, _OnPatientName2CheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPatientNoChangeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOldDocumentNo.GetDlgCtrlID(), m_nOldDocumentNo);
	DDX_Text(pDX, m_wndPatientNo1.GetDlgCtrlID(), m_nPatientNo1);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndNewDocumentNo.GetDlgCtrlID(), m_nNewDocumentNo);
	DDX_Text(pDX, m_wndPatientNo2.GetDlgCtrlID(), m_nPatientNo2);
	DDX_Text(pDX, m_wndPatientName2.GetDlgCtrlID(), m_szPatientName2);

}
void CHMSPatientNoChangeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPatientNoChangeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPatientNoChangeDialog::SetDefaultValues(){

	m_nOldDocumentNo=0;
	m_nPatientNo1=0;
	m_szPatientName.Empty();
	m_nNewDocumentNo=0;
	m_nPatientNo2=0;
	m_szPatientName2.Empty();

}
int CHMSPatientNoChangeDialog::SetMode(int nMode){
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
/*void CHMSPatientNoChangeDialog::OnOldDocumentNoChange(){
	
} */
/*void CHMSPatientNoChangeDialog::OnOldDocumentNoSetfocus(){
	
} */
/*void CHMSPatientNoChangeDialog::OnOldDocumentNoKillfocus(){
	
} */
int CHMSPatientNoChangeDialog::OnOldDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientNoChangeDialog::OnPatientNo1Change(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientNo1Setfocus(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientNo1Killfocus(){
	
} */
int CHMSPatientNoChangeDialog::OnPatientNo1CheckValue(){
	return 0;
} 
/*void CHMSPatientNoChangeDialog::OnPatientNameChange(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientNameKillfocus(){
	
} */
int CHMSPatientNoChangeDialog::OnPatientNameCheckValue(){
	return 0;
} 
/*void CHMSPatientNoChangeDialog::OnNewDocumentNoChange(){
	
} */
/*void CHMSPatientNoChangeDialog::OnNewDocumentNoSetfocus(){
	
} */
/*void CHMSPatientNoChangeDialog::OnNewDocumentNoKillfocus(){
	
} */
int CHMSPatientNoChangeDialog::OnNewDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSPatientNoChangeDialog::OnPatientNo2Change(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientNo2Setfocus(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientNo2Killfocus(){
	
} */
int CHMSPatientNoChangeDialog::OnPatientNo2CheckValue(){
	return 0;
} 
/*void CHMSPatientNoChangeDialog::OnPatientName2Change(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientName2Setfocus(){
	
} */
/*void CHMSPatientNoChangeDialog::OnPatientName2Killfocus(){
	
} */
int CHMSPatientNoChangeDialog::OnPatientName2CheckValue(){
	return 0;
} 
void CHMSPatientNoChangeDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPatientNoChangeDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPatientNoChangeDialog::OnAddHMSPatientNoChangeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPatientNoChangeDialog::OnEditHMSPatientNoChangeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPatientNoChangeDialog::OnDeleteHMSPatientNoChangeDialog(){
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
 		OnCancelHMSPatientNoChangeDialog(); 
 	}
	return 0;
}
int CHMSPatientNoChangeDialog::OnSaveHMSPatientNoChangeDialog(){
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
 		//OnHMSPatientNoChangeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPatientNoChangeDialog::OnCancelHMSPatientNoChangeDialog(){
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
int CHMSPatientNoChangeDialog::OnHMSPatientNoChangeDialogListLoadData(){
	return 0;
}
