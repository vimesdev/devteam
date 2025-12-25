#include "HMSSEOrderReplyDialog.h"
#include "../MainFrm.h"
/*static void _OnExamChangeFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnExamChange();
} */
/*static void _OnExamSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnExamSetfocus();} */ 
/*static void _OnExamKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnExamKillfocus();
} */
static int _OnExamCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderReplyDialog *)pWnd)->OnExamCheckValue();
} 
/*static void _OnTestChangeFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnTestChange();
} */
/*static void _OnTestSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnTestSetfocus();} */ 
/*static void _OnTestKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnTestKillfocus();
} */
static int _OnTestCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderReplyDialog *)pWnd)->OnTestCheckValue();
} 
/*static void _OnDiagnosticChangeFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnDiagnosticChange();
} */
/*static void _OnDiagnosticSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnDiagnosticSetfocus();} */ 
/*static void _OnDiagnosticKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnDiagnosticKillfocus();
} */
static int _OnDiagnosticCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderReplyDialog *)pWnd)->OnDiagnosticCheckValue();
} 
/*static void _OnMethodChangeFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnMethodChange();
} */
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnMethodSetfocus();} */ 
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnMethodKillfocus();
} */
static int _OnMethodCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderReplyDialog *)pWnd)->OnMethodCheckValue();
} 
/*static void _OnRemarkChangeFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnRemarkChange();
} */
/*static void _OnRemarkSetfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnRemarkSetfocus();} */ 
/*static void _OnRemarkKillfocusFnc(CWnd *pWnd){
	((CHMSSEOrderReplyDialog *)pWnd)->OnRemarkKillfocus();
} */
static int _OnRemarkCheckValueFnc(CWnd *pWnd){
	return ((CHMSSEOrderReplyDialog *)pWnd)->OnRemarkCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSEOrderReplyDialog *pVw = (CHMSSEOrderReplyDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSEOrderReplyDialog *pVw = (CHMSSEOrderReplyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSEOrderReplyDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderReplyDialog*)pWnd)->OnAddHMSSEOrderReplyDialog();
} 
static int _OnEditHMSSEOrderReplyDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderReplyDialog*)pWnd)->OnEditHMSSEOrderReplyDialog();
} 
static int _OnDeleteHMSSEOrderReplyDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderReplyDialog*)pWnd)->OnDeleteHMSSEOrderReplyDialog();
} 
static int _OnSaveHMSSEOrderReplyDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderReplyDialog*)pWnd)->OnSaveHMSSEOrderReplyDialog();
} 
static int _OnCancelHMSSEOrderReplyDialogFnc(CWnd *pWnd){
	 return ((CHMSSEOrderReplyDialog*)pWnd)->OnCancelHMSSEOrderReplyDialog();
} 
CHMSSEOrderReplyDialog::CHMSSEOrderReplyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_nOrderID = 0;
}
CHMSSEOrderReplyDialog::~CHMSSEOrderReplyDialog(){
}
void CHMSSEOrderReplyDialog::OnCreateComponents(){
	m_wndContent.Create(this, _T("Content"), 5, 5, 500, 280);
	m_wndExamLabel.Create(this, _T("Exam"), 10, 30, 90, 55);
	m_wndExam.Create(this,95, 30, 495, 75); 
	m_wndTestLabel.Create(this, _T("Test"), 10, 80, 90, 105);
	m_wndTest.Create(this,95, 80, 495, 125); 
	m_wndDiagnosticLabel.Create(this, _T("Diagnostic"), 10, 130, 90, 155);
	m_wndDiagnostic.Create(this,95, 130, 495, 175); 
	m_wndMethodLabel.Create(this, _T("Method"), 10, 180, 90, 205);
	m_wndMethod.Create(this,95, 180, 495, 225); 
	m_wndRemarkLabel.Create(this, _T("Remark"), 10, 230, 90, 255);
	m_wndRemark.Create(this,95, 230, 495, 275); 
	m_wndSave.Create(this, _T("&Save"), 334, 285, 414, 310);
	m_wndClose.Create(this, _T("&Close"), 420, 285, 500, 310);

}
void CHMSSEOrderReplyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExam.SetLimitText(35);
	m_wndExam.SetCheckValue(true);
	m_wndTest.SetLimitText(35);
	m_wndTest.SetCheckValue(true);
	m_wndDiagnostic.SetLimitText(35);
	m_wndDiagnostic.SetCheckValue(true);
	m_wndMethod.SetLimitText(35);
	m_wndMethod.SetCheckValue(true);
	m_wndRemark.SetLimitText(35);
	m_wndRemark.SetCheckValue(true);

}
void CHMSSEOrderReplyDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndExam.SetEvent(WE_CHANGE, _OnExamChangeFnc);
	//m_wndExam.SetEvent(WE_SETFOCUS, _OnExamSetfocusFnc);
	//m_wndExam.SetEvent(WE_KILLFOCUS, _OnExamKillfocusFnc);
	m_wndExam.SetEvent(WE_CHECKVALUE, _OnExamCheckValueFnc);
	//m_wndTest.SetEvent(WE_CHANGE, _OnTestChangeFnc);
	//m_wndTest.SetEvent(WE_SETFOCUS, _OnTestSetfocusFnc);
	//m_wndTest.SetEvent(WE_KILLFOCUS, _OnTestKillfocusFnc);
	m_wndTest.SetEvent(WE_CHECKVALUE, _OnTestCheckValueFnc);
	//m_wndDiagnostic.SetEvent(WE_CHANGE, _OnDiagnosticChangeFnc);
	//m_wndDiagnostic.SetEvent(WE_SETFOCUS, _OnDiagnosticSetfocusFnc);
	//m_wndDiagnostic.SetEvent(WE_KILLFOCUS, _OnDiagnosticKillfocusFnc);
	m_wndDiagnostic.SetEvent(WE_CHECKVALUE, _OnDiagnosticCheckValueFnc);
	//m_wndMethod.SetEvent(WE_CHANGE, _OnMethodChangeFnc);
	//m_wndMethod.SetEvent(WE_SETFOCUS, _OnMethodSetfocusFnc);
	//m_wndMethod.SetEvent(WE_KILLFOCUS, _OnMethodKillfocusFnc);
	m_wndMethod.SetEvent(WE_CHECKVALUE, _OnMethodCheckValueFnc);
	//m_wndRemark.SetEvent(WE_CHANGE, _OnRemarkChangeFnc);
	//m_wndRemark.SetEvent(WE_SETFOCUS, _OnRemarkSetfocusFnc);
	//m_wndRemark.SetEvent(WE_KILLFOCUS, _OnRemarkKillfocusFnc);
	m_wndRemark.SetEvent(WE_CHECKVALUE, _OnRemarkCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	EnableControls();
	EnableButtons(FALSE, -1);
	GetDataToScreen();
}
void CHMSSEOrderReplyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndExam.GetDlgCtrlID(), m_szExam);
	DDX_Text(pDX, m_wndTest.GetDlgCtrlID(), m_szTest);
	DDX_Text(pDX, m_wndDiagnostic.GetDlgCtrlID(), m_szDiagnostic);
	DDX_Text(pDX, m_wndMethod.GetDlgCtrlID(), m_szMethod);
	DDX_Text(pDX, m_wndRemark.GetDlgCtrlID(), m_szRemark);

}
void CHMSSEOrderReplyDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("kham")] =  m_szExam;
	m_jData[_T("xet_nghiem")] =  m_szTest;
	m_jData[_T("chan_doan")] =  m_szDiagnostic;
	m_jData[_T("can_thiep")] =  m_szMethod;
	m_jData[_T("danh_gia")] =  m_szRemark;
	}
	else
	{
			
	m_jData[_T("kham")].GetValue(m_szExam);
	m_jData[_T("xet_nghiem")].GetValue(m_szTest);
	m_jData[_T("chan_doan")].GetValue(m_szDiagnostic);
	m_jData[_T("can_thiep")].GetValue(m_szMethod);
	m_jData[_T("danh_gia")].GetValue(m_szRemark);
	}

}
void CHMSSEOrderReplyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_se_order WHERE hso_orderid = %ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		m_jData.Parse(rs.GetValue(_T("hso_result")));
		UpdateJson(FALSE);
		UpdateData(FALSE);
	}
}
void CHMSSEOrderReplyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSSEOrderReplyDialog::SetDefaultValues(){

	m_szExam.Empty();
	m_szTest.Empty();
	m_szDiagnostic.Empty();
	m_szMethod.Empty();
	m_szRemark.Empty();

}
int CHMSSEOrderReplyDialog::SetMode(int nMode){
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
/*void CHMSSEOrderReplyDialog::OnExamChange(){
	
} */
/*void CHMSSEOrderReplyDialog::OnExamSetfocus(){
	
} */
/*void CHMSSEOrderReplyDialog::OnExamKillfocus(){
	
} */
int CHMSSEOrderReplyDialog::OnExamCheckValue(){
	return 0;
} 
/*void CHMSSEOrderReplyDialog::OnTestChange(){
	
} */
/*void CHMSSEOrderReplyDialog::OnTestSetfocus(){
	
} */
/*void CHMSSEOrderReplyDialog::OnTestKillfocus(){
	
} */
int CHMSSEOrderReplyDialog::OnTestCheckValue(){
	return 0;
} 
/*void CHMSSEOrderReplyDialog::OnDiagnosticChange(){
	
} */
/*void CHMSSEOrderReplyDialog::OnDiagnosticSetfocus(){
	
} */
/*void CHMSSEOrderReplyDialog::OnDiagnosticKillfocus(){
	
} */
int CHMSSEOrderReplyDialog::OnDiagnosticCheckValue(){
	return 0;
} 
/*void CHMSSEOrderReplyDialog::OnMethodChange(){
	
} */
/*void CHMSSEOrderReplyDialog::OnMethodSetfocus(){
	
} */
/*void CHMSSEOrderReplyDialog::OnMethodKillfocus(){
	
} */
int CHMSSEOrderReplyDialog::OnMethodCheckValue(){
	return 0;
} 
/*void CHMSSEOrderReplyDialog::OnRemarkChange(){
	
} */
/*void CHMSSEOrderReplyDialog::OnRemarkSetfocus(){
	
} */
/*void CHMSSEOrderReplyDialog::OnRemarkKillfocus(){
	
} */
int CHMSSEOrderReplyDialog::OnRemarkCheckValue(){
	return 0;
} 
void CHMSSEOrderReplyDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	UpdateJson(TRUE);
	CString szSQL, tmpStr;
	int nRet;
	m_jData.ToString(tmpStr);
	szSQL.Format(_T("hms_se_order_reply('%s', %ld, '%s')")
		, pMF->GetCurrentUser(), m_nOrderID, tmpStr);
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CHMSSEOrderReplyDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSSEOrderReplyDialog::OnAddHMSSEOrderReplyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSEOrderReplyDialog::OnEditHMSSEOrderReplyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSEOrderReplyDialog::OnDeleteHMSSEOrderReplyDialog(){
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
 		OnCancelHMSSEOrderReplyDialog();
 	}
	return 0;
}
int CHMSSEOrderReplyDialog::OnSaveHMSSEOrderReplyDialog(){
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
 		//OnHMSSEOrderReplyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSSEOrderReplyDialog::OnCancelHMSSEOrderReplyDialog(){
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
int CHMSSEOrderReplyDialog::OnHMSSEOrderReplyDialogListLoadData(){
	return 0;
}
