#include "HMSAdditionCardDialog.h"
#include "MainFrm.h"
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionCardDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnIssueDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnIssueDateChange();
} */
/*static void _OnIssueDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnIssueDateSetfocus();} */ 
/*static void _OnIssueDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnIssueDateKillfocus();
} */
static int _OnIssueDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionCardDialog *)pWnd)->OnIssueDateCheckValue();
} 
/*static void _OnIssuePlaceChangeFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnIssuePlaceChange();
} */
/*static void _OnIssuePlaceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnIssuePlaceSetfocus();} */ 
/*static void _OnIssuePlaceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionCardDialog *)pWnd)->OnIssuePlaceKillfocus();
} */
static int _OnIssuePlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionCardDialog *)pWnd)->OnIssuePlaceCheckValue();
} 
static void _OnHemaSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionCardDialog*)pWnd)->OnHemaSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdditionCardDialog *pVw = (CHMSAdditionCardDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdditionCardDialog *pVw = (CHMSAdditionCardDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdditionCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionCardDialog*)pWnd)->OnAddHMSAdditionCardDialog();
} 
static int _OnEditHMSAdditionCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionCardDialog*)pWnd)->OnEditHMSAdditionCardDialog();
} 
static int _OnDeleteHMSAdditionCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionCardDialog*)pWnd)->OnDeleteHMSAdditionCardDialog();
} 
static int _OnSaveHMSAdditionCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionCardDialog*)pWnd)->OnSaveHMSAdditionCardDialog();
} 
static int _OnCancelHMSAdditionCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionCardDialog*)pWnd)->OnCancelHMSAdditionCardDialog();
} 
CHMSAdditionCardDialog::CHMSAdditionCardDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSAdditionCardDialog::~CHMSAdditionCardDialog(){
}
void CHMSAdditionCardDialog::OnCreateComponents(){
	m_wndAdditionalCardInformation.Create(this, _T("Additional Card Information"), 5, 5, 300, 120);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 30, 90, 55);
	m_wndCardNo.Create(this,95, 30, 295, 55); 
	m_wndIssueDateLabel.Create(this, _T("Issue Date"), 10, 60, 90, 85);
	m_wndIssueDate.Create(this,95, 60, 175, 85); 
	m_wndIssuePlaceLabel.Create(this, _T("Issue Place"), 10, 90, 90, 115);
	m_wndIssuePlace.Create(this,95, 90, 295, 115); 
	m_wndHema.Create(this, _T("Hema"), 10, 124, 90, 149);
	m_wndSave.Create(this, _T("&Save"), 145, 125, 220, 150);
	m_wndClose.Create(this, _T("&Close"), 225, 125, 300, 150);

}
void CHMSAdditionCardDialog::OnInitializeComponents(){
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
//	m_wndCardNo.SetCheckValue(true);
	m_wndIssueDate.SetMax(CDate(pMF->GetSysDate()));
//	m_wndIssueDate.SetCheckValue(true);
	m_wndIssuePlace.SetLimitText(35);
//	m_wndIssuePlace.SetCheckValue(true);
	m_wndHema.ModifyStyle(WS_TABSTOP, 0);
}
void CHMSAdditionCardDialog::OnSetWindowEvents(){
	return ;
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndIssueDate.SetEvent(WE_CHANGE, _OnIssueDateChangeFnc);
	//m_wndIssueDate.SetEvent(WE_SETFOCUS, _OnIssueDateSetfocusFnc);
	//m_wndIssueDate.SetEvent(WE_KILLFOCUS, _OnIssueDateKillfocusFnc);
	m_wndIssueDate.SetEvent(WE_CHECKVALUE, _OnIssueDateCheckValueFnc);
	//m_wndIssuePlace.SetEvent(WE_CHANGE, _OnIssuePlaceChangeFnc);
	//m_wndIssuePlace.SetEvent(WE_SETFOCUS, _OnIssuePlaceSetfocusFnc);
	//m_wndIssuePlace.SetEvent(WE_KILLFOCUS, _OnIssuePlaceKillfocusFnc);
	m_wndIssuePlace.SetEvent(WE_CHECKVALUE, _OnIssuePlaceCheckValueFnc);
	m_wndHema.SetEvent(WE_CLICK, _OnHemaSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(GetMode());

}
void CHMSAdditionCardDialog::OnDoDataExchange(CDataExchange* pDX){
	return;

	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndIssueDate.GetDlgCtrlID(), m_szIssueDate);
	DDX_Text(pDX, m_wndIssuePlace.GetDlgCtrlID(), m_szIssuePlace);
	DDX_Check(pDX, m_wndHema.GetDlgCtrlID(), m_bHema);

}
void CHMSAdditionCardDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hd_xobject"), m_szxObject);
		rs.GetValue(_T("hd_xcardno"), m_szCardNo);
		rs.GetValue(_T("hd_xissuedate"), m_szIssueDate);
		rs.GetValue(_T("hd_xissueplace"), m_szIssuePlace);
		if(m_szxObject == _T("H"))
			m_bHema = true;
		else
			m_bHema = false;
	}
	
}
void CHMSAdditionCardDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdditionCardDialog::SetDefaultValues(){

	m_szCardNo.Empty();
	m_szIssueDate.Empty();
	m_szIssuePlace.Empty();
	m_bHema=FALSE;

}
int CHMSAdditionCardDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			//SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			if(m_szIssueDate.IsEmpty())
				m_szIssueDate = pMF->GetSysDate();
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
/*void CHMSAdditionCardDialog::OnCardNoChange(){
	
} */
/*void CHMSAdditionCardDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSAdditionCardDialog::OnCardNoKillfocus(){
	
} */
int CHMSAdditionCardDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSAdditionCardDialog::OnIssueDateChange(){
	
} */
/*void CHMSAdditionCardDialog::OnIssueDateSetfocus(){
	
} */
/*void CHMSAdditionCardDialog::OnIssueDateKillfocus(){
	
} */
int CHMSAdditionCardDialog::OnIssueDateCheckValue(){
	return 0;
} 
/*void CHMSAdditionCardDialog::OnIssuePlaceChange(){
	
} */
/*void CHMSAdditionCardDialog::OnIssuePlaceSetfocus(){
	
} */
/*void CHMSAdditionCardDialog::OnIssuePlaceKillfocus(){
	
} */
int CHMSAdditionCardDialog::OnIssuePlaceCheckValue(){
	return 0;
} 
void CHMSAdditionCardDialog::OnHemaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSAdditionCardDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAdditionCardDialog();	
} 
void CHMSAdditionCardDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSAdditionCardDialog::OnAddHMSAdditionCardDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAdditionCardDialog::OnEditHMSAdditionCardDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionCardDialog::OnDeleteHMSAdditionCardDialog(){
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
 		OnCancelHMSAdditionCardDialog(); 
 	}
	return 0;
}
int CHMSAdditionCardDialog::OnSaveHMSAdditionCardDialog(){
 	if(GetMode() != VM_EDIT && GetMode() != VM_ADD) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 

 	if(GetMode() == VM_EDIT){ 
		if(m_bHema)
			m_szxObject = _T("H");	//Doi tuong hema
		else if(!m_szCardNo.IsEmpty())
			m_szxObject = _T("P");	//Doi tuong nguoi ngheo
		else
		{
			m_szxObject.Empty();
			m_szIssueDate = pMF->GetSysDate();
			m_szIssuePlace.Empty();
		}
		
		szSQL.Format(_T("UPDATE hms_doc SET hd_xobject='%s', hd_xcardno='%s', hd_xissuedate=TO_DATE('%s', 'YYYY-MM-DD'), hd_xissueplace='%s' WHERE hd_docno=%ld"), 
			m_szxObject, m_szCardNo, m_szIssueDate, m_szIssuePlace, pMF->m_nDocumentNo);
		pMF->ExecSQL(szSQL);
 	} 
	else
	{
		if(m_bHema)
			m_szxObject = _T("H");	//Doi tuong hema
		else if(!m_szCardNo.IsEmpty())
			m_szxObject = _T("P");	//Doi tuong nguoi ngheo
		else
		{
			m_szxObject.Empty();
			m_szIssueDate = pMF->GetSysDate();
			m_szIssuePlace.Empty();
		}
		
	}
	OnOK(); 	
 	return 0; 
}
int CHMSAdditionCardDialog::OnCancelHMSAdditionCardDialog(){
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
int CHMSAdditionCardDialog::OnHMSAdditionCardDialogListLoadData(){
	return 0;
}
