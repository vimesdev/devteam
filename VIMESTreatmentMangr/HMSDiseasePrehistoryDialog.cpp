#include "HMSDiseasePrehistoryDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static void _OnOwnerChangeFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerChange();
} */
/*static void _OnOwnerSetfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerSetfocus();} */ 
/*static void _OnOwnerKillfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerKillfocus();
} */
static int _OnOwnerCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseasePrehistoryDialog *)pWnd)->OnOwnerCheckValue();
} 
/*static void _OnFamilyChangeFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyChange();
} */
/*static void _OnFamilySetfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilySetfocus();} */ 
/*static void _OnFamilyKillfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyKillfocus();
} */
static int _OnFamilyCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseasePrehistoryDialog *)pWnd)->OnFamilyCheckValue();
} 
/*static void _OnAllergicToDrugsChangeFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnAllergicToDrugsChange();
} */
/*static void _OnAllergicToDrugsSetfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnAllergicToDrugsSetfocus();} */ 
/*static void _OnAllergicToDrugsKillfocusFnc(CWnd *pWnd){
	((CHMSDiseasePrehistoryDialog *)pWnd)->OnAllergicToDrugsKillfocus();
} */
static int _OnAllergicToDrugsCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseasePrehistoryDialog *)pWnd)->OnAllergicToDrugsCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSDiseasePrehistoryDialog *pVw = (CHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDiseasePrehistoryDialog *pVw = (CHMSDiseasePrehistoryDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnAddHMSDiseasePrehistoryDialog();
} 
static int _OnEditHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnEditHMSDiseasePrehistoryDialog();
} 
static int _OnDeleteHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnDeleteHMSDiseasePrehistoryDialog();
} 
static int _OnSaveHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnSaveHMSDiseasePrehistoryDialog();
} 
static int _OnCancelHMSDiseasePrehistoryDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseasePrehistoryDialog*)pWnd)->OnCancelHMSDiseasePrehistoryDialog();
} 
CHMSDiseasePrehistoryDialog::CHMSDiseasePrehistoryDialog(CWnd *pParent, long nDocumentNo):
	CGuiDialog(pParent)
{
	m_nDocumentNo = nDocumentNo;
	m_nDlgWidth = 425;
	m_nDlgHeight = 345;
	SetDefaultValues();
}
CHMSDiseasePrehistoryDialog::~CHMSDiseasePrehistoryDialog(){
}
void CHMSDiseasePrehistoryDialog::OnCreateComponents(){
	m_wndDiseasePrehistory.Create(this, _T("Disease Prehistory"), 5, 5, 420, 308);
	m_wndOwnerLabel.Create(this, _T("Owner"), 9, 29, 109, 51);
	
	m_wndOwner.Create(this,114, 29, 414, 117, TRUE, FALSE, TRUE); 
	m_wndFamilyLabel.Create(this, _T("Family"), 9, 122, 109, 144);
	m_wndFamily.Create(this,114, 122, 414, 210, TRUE, FALSE, TRUE); 
	m_wndAllergicToDrugsLabel.Create(this, _T("Allergic To Drugs"), 9, 215, 109, 237);
	m_wndAllergicToDrugs.Create(this,114, 215, 414, 303, TRUE, FALSE, TRUE); 
	m_wndUpdate.Create(this, _T("Update"), 274, 313, 344, 335);
	m_wndCancel.Create(this, _T("&Cancel"), 349, 313, 419, 335);

}
void CHMSDiseasePrehistoryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOwner.SetLimitText(512);
	m_wndFamily.SetLimitText(512);
	m_wndAllergicToDrugs.SetLimitText(254);
	
	m_hms_prediseaseTbl.SetTableName(_T("hms_predisease"));
	m_hms_prediseaseTbl.AddField(_T("hpd_createdby"), dfText, 15); 
	m_hms_prediseaseTbl.AddField(_T("hpd_createddate"), dfDateTime); 
	m_hms_prediseaseTbl.AddField(_T("hpd_updatedby"), dfText, 15); 
	m_hms_prediseaseTbl.AddField(_T("hpd_updateddate"), dfDateTime); 
	m_hms_prediseaseTbl.AddField(_T("hpd_patientno"), dfLong); 
	m_hms_prediseaseTbl.AddField(_T("hpd_docno"), dfLong); 
	m_hms_prediseaseTbl.AddField(_T("hpd_owner"), dfText, 512); 
	m_hms_prediseaseTbl.AddField(_T("hpd_family"), dfText, 512); 
	m_hms_prediseaseTbl.AddField(_T("hpd_allergicdrugs"), dfText, 254); 

}
void CHMSDiseasePrehistoryDialog::OnSetWindowEvents(){
	//m_wndOwner.SetEvent(WE_CHANGE, _OnOwnerChangeFnc);
	//m_wndOwner.SetEvent(WE_SETFOCUS, _OnOwnerSetfocusFnc);
	//m_wndOwner.SetEvent(WE_KILLFOCUS, _OnOwnerKillfocusFnc);
	m_wndOwner.SetEvent(WE_CHECKVALUE, _OnOwnerCheckValueFnc);
	//m_wndFamily.SetEvent(WE_CHANGE, _OnFamilyChangeFnc);
	//m_wndFamily.SetEvent(WE_SETFOCUS, _OnFamilySetfocusFnc);
	//m_wndFamily.SetEvent(WE_KILLFOCUS, _OnFamilyKillfocusFnc);
	m_wndFamily.SetEvent(WE_CHECKVALUE, _OnFamilyCheckValueFnc);
	//m_wndAllergicToDrugs.SetEvent(WE_CHANGE, _OnAllergicToDrugsChangeFnc);
	//m_wndAllergicToDrugs.SetEvent(WE_SETFOCUS, _OnAllergicToDrugsSetfocusFnc);
	//m_wndAllergicToDrugs.SetEvent(WE_KILLFOCUS, _OnAllergicToDrugsKillfocusFnc);
	m_wndAllergicToDrugs.SetEvent(WE_CHECKVALUE, _OnAllergicToDrugsCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_EDIT);
	GetDataToScreen();

}
void CHMSDiseasePrehistoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOwner.GetDlgCtrlID(), m_szOwner);
	DDX_Text(pDX, m_wndFamily.GetDlgCtrlID(), m_szFamily);
	DDX_Text(pDX, m_wndAllergicToDrugs.GetDlgCtrlID(), m_szAllergicToDrugs);

}
void CHMSDiseasePrehistoryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_predisease WHERE hpd_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpd_owner"), m_szOwner);
		rs.GetValue(_T("hpd_family"), m_szFamily);
		rs.GetValue(_T("hpd_allergicdrugs"), m_szAllergicToDrugs);
		UpdateData(false);
	}
}
void CHMSDiseasePrehistoryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_prediseaseTbl.SetValue(_T("hpd_createdby"), pMF->GetCurrentUser());
	m_hms_prediseaseTbl.SetValue(_T("hpd_createddate"), pMF->GetSysDateTime());
	m_hms_prediseaseTbl.SetValue(_T("hpd_updatedby"), pMF->GetCurrentUser());
	m_hms_prediseaseTbl.SetValue(_T("hpd_updateddate"), pMF->GetSysDateTime());
	m_hms_prediseaseTbl.SetValue(_T("hpd_docno"), m_nDocumentNo);
	m_hms_prediseaseTbl.SetValue(_T("hpd_owner"), m_szOwner);
	m_hms_prediseaseTbl.SetValue(_T("hpd_family"), m_szFamily);
	m_hms_prediseaseTbl.SetValue(_T("hpd_allergicdrugs"), m_szAllergicToDrugs);

}
void CHMSDiseasePrehistoryDialog::SetDefaultValues(){

	m_szOwner.Empty();
	m_szFamily.Empty();
	m_szAllergicToDrugs.Empty();

}
int CHMSDiseasePrehistoryDialog::SetMode(int nMode){ 
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
 			EnableButtons(TRUE, 0, 1, -1); 
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
/*void CHMSDiseasePrehistoryDialog::OnOwnerChange(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnOwnerSetfocus(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnOwnerKillfocus(){
	
} */
int CHMSDiseasePrehistoryDialog::OnOwnerCheckValue(){
	return 0;
} 
/*void CHMSDiseasePrehistoryDialog::OnFamilyChange(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnFamilySetfocus(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnFamilyKillfocus(){
	
} */
int CHMSDiseasePrehistoryDialog::OnFamilyCheckValue(){
	return 0;
} 
/*void CHMSDiseasePrehistoryDialog::OnAllergicToDrugsChange(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnAllergicToDrugsSetfocus(){
	
} */
/*void CHMSDiseasePrehistoryDialog::OnAllergicToDrugsKillfocus(){
	
} */
int CHMSDiseasePrehistoryDialog::OnAllergicToDrugsCheckValue(){
	return 0;
} 
void CHMSDiseasePrehistoryDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDiseasePrehistoryDialog();
} 
void CHMSDiseasePrehistoryDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSDiseasePrehistoryDialog::OnAddHMSDiseasePrehistoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSDiseasePrehistoryDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSDiseasePrehistoryDialog::OnEditHMSDiseasePrehistoryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSDiseasePrehistoryDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSDiseasePrehistoryDialog::OnDeleteHMSDiseasePrehistoryDialog(){
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
 		OnCancelHMSDiseasePrehistoryDialog(); 
 	}
return 0;
 } 
int CHMSDiseasePrehistoryDialog::OnSaveHMSDiseasePrehistoryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM hms_predisease WHERE hpd_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() <= 0){
 		szSQL = m_hms_prediseaseTbl.GetInsertSQL(); 
 	} 
	else
	{ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hpd_docno =%ld "), m_nDocumentNo); 
 		szSQL = m_hms_prediseaseTbl.GetUpdateSQL(_T("hpd_createdby,hpd_createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		OnOK();
 	} 
 	return ret; 
}
int CHMSDiseasePrehistoryDialog::OnCancelHMSDiseasePrehistoryDialog(){
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
int CHMSDiseasePrehistoryDialog::OnHMSDiseasePrehistoryDialogListLoadData(){
	return 0;
}
