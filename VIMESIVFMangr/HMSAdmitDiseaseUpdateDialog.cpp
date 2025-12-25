#include "HMSAdmitDiseaseUpdateDialog.h"
#include "HMSMainFrame.h"
/*static void _OnChanDoanChangeFnc(CWnd *pWnd){
	((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnChanDoanChange();
} */
/*static void _OnChanDoanSetfocusFnc(CWnd *pWnd){
	((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnChanDoanSetfocus();} */ 
/*static void _OnChanDoanKillfocusFnc(CWnd *pWnd){
	((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnChanDoanKillfocus();
} */
static int _OnChanDoanCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnChanDoanCheckValue();
} 
/*static void _OnDescChangeFnc(CWnd *pWnd){
	((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnDescChange();
} */
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnDescSetfocus();} */ 
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdmitDiseaseUpdateDialog *)pWnd)->OnDescCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdmitDiseaseUpdateDialog *pVw = (CHMSAdmitDiseaseUpdateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAdmitDiseaseUpdateDialog *pVw = (CHMSAdmitDiseaseUpdateDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSAdmitDiseaseUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmitDiseaseUpdateDialog*)pWnd)->OnAddHMSAdmitDiseaseUpdateDialog();
} 
static int _OnEditHMSAdmitDiseaseUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmitDiseaseUpdateDialog*)pWnd)->OnEditHMSAdmitDiseaseUpdateDialog();
} 
static int _OnDeleteHMSAdmitDiseaseUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmitDiseaseUpdateDialog*)pWnd)->OnDeleteHMSAdmitDiseaseUpdateDialog();
} 
static int _OnSaveHMSAdmitDiseaseUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmitDiseaseUpdateDialog*)pWnd)->OnSaveHMSAdmitDiseaseUpdateDialog();
} 
static int _OnCancelHMSAdmitDiseaseUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSAdmitDiseaseUpdateDialog*)pWnd)->OnCancelHMSAdmitDiseaseUpdateDialog();
} 
CHMSAdmitDiseaseUpdateDialog::CHMSAdmitDiseaseUpdateDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSAdmitDiseaseUpdateDialog::~CHMSAdmitDiseaseUpdateDialog()
{
}
void CHMSAdmitDiseaseUpdateDialog::OnCreateComponents()
{
	m_wndDescGroupBox.Create(this, _T("Desc"), 5, 4, 505, 230);
	m_wndChanDoanLabel.Create(this, _T("ChanDoan"), 10, 29, 100, 125);
	m_wndChanDoan.Create(this,102, 28, 505, 124, true, false, true); 
	m_wndCachMoLabel.Create(this, _T("Note"), 10, 130, 100, 226);
	m_wndDesc.Create(this,102, 130, 505, 226, true, false, true);
	m_wndDesc.SetReadOnly(true);
	m_wndSave.Create(this, _T("Save"), 340, 236, 420, 261);
	m_wndCancel.Create(this, _T("Cancel"), 425, 236, 505, 261);

}
void CHMSAdmitDiseaseUpdateDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndChanDoan.SetMultiLine(TRUE);
	m_wndChanDoan.SetLimitText(1024);
	m_wndChanDoan.SetCheckValue(true);
	m_wndDesc.SetMultiLine(TRUE);
	m_wndDesc.SetLimitText(1024);
	m_wndDesc.SetCheckValue(true);

	hms_doc_Tbl.SetTableName(_T("hms_doc"));
	hms_doc_Tbl.AddField(_T("hd_conclusion"), dfText, 512);	
	hms_doc_Tbl.AddField(_T("HD_UPDATEDBY"), dfText, 512);

}
void CHMSAdmitDiseaseUpdateDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndChanDoan.SetEvent(WE_CHANGE, _OnChanDoanChangeFnc);
	//m_wndChanDoan.SetEvent(WE_SETFOCUS, _OnChanDoanSetfocusFnc);
	//m_wndChanDoan.SetEvent(WE_KILLFOCUS, _OnChanDoanKillfocusFnc);
	m_wndChanDoan.SetEvent(WE_CHECKVALUE, _OnChanDoanCheckValueFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//SetMode(VM_EDIT);
	GetDataToScreen();

}
void CHMSAdmitDiseaseUpdateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndChanDoan.GetDlgCtrlID(), m_szChanDoan);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);

}
void CHMSAdmitDiseaseUpdateDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ChanDoan")] =  m_szChanDoan;
	m_jData[_T("Desc")] =  m_szDesc;
	}
	else
	{
			
	m_jData[_T("ChanDoan")].GetValue(m_szChanDoan);
	m_jData[_T("Desc")].GetValue(m_szDesc);
	}

}
void CHMSAdmitDiseaseUpdateDialog::GetDataToScreen()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HD_CONCLUSION"),  m_szChanDoan); 
		rs.GetValue(_T("HD_UPDATEDBY"),  m_szDesc);		
	}
	SetMode(VM_EDIT);	
}
void CHMSAdmitDiseaseUpdateDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString tmpStr, tmpStr1;
	
	if(!m_szChanDoan.IsEmpty())
		tmpStr.AppendFormat(_T("%s"), m_szChanDoan);	

	hms_doc_Tbl.SetValue(_T("HD_CONCLUSION"), tmpStr);

	if(!m_szDesc.IsEmpty())
		tmpStr1.AppendFormat(_T("%s"), m_szDesc);
	
	hms_doc_Tbl.SetValue(_T("HD_UPDATEDBY"), pMF->GetCurrentUser());

}
void CHMSAdmitDiseaseUpdateDialog::SetDefaultValues()
{

	m_szChanDoan.Empty();
	m_szDesc.Empty();

}
int CHMSAdmitDiseaseUpdateDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 6, -1);
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
/*void CHMSAdmitDiseaseUpdateDialog::OnChanDoanChange(){
	
} */
/*void CHMSAdmitDiseaseUpdateDialog::OnChanDoanSetfocus(){
	
} */
/*void CHMSAdmitDiseaseUpdateDialog::OnChanDoanKillfocus(){
	
} */
int CHMSAdmitDiseaseUpdateDialog::OnChanDoanCheckValue(){
	return 0;
} 
/*void CHMSAdmitDiseaseUpdateDialog::OnDescChange(){
	
} */
/*void CHMSAdmitDiseaseUpdateDialog::OnDescSetfocus(){
	
} */
/*void CHMSAdmitDiseaseUpdateDialog::OnDescKillfocus(){
	
} */
int CHMSAdmitDiseaseUpdateDialog::OnDescCheckValue(){
	return 0;
} 
void CHMSAdmitDiseaseUpdateDialog::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSAdmitDiseaseUpdateDialog();
	 	{
	 		CGuiDialog::OnOK();
	 	}
	
} 
void CHMSAdmitDiseaseUpdateDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSAdmitDiseaseUpdateDialog::OnAddHMSAdmitDiseaseUpdateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdmitDiseaseUpdateDialog::OnEditHMSAdmitDiseaseUpdateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdmitDiseaseUpdateDialog::OnDeleteHMSAdmitDiseaseUpdateDialog(){
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
 		OnCancelHMSAdmitDiseaseUpdateDialog();
 	}
	return 0;
}
int CHMSAdmitDiseaseUpdateDialog::OnSaveHMSAdmitDiseaseUpdateDialog()
{
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
 		szWhere.Format(_T(" WHERE hd_docno = %ld"), m_nDocumentNo);
 		szSQL = hms_doc_Tbl.GetUpdateSQL();
 		szSQL += szWhere;
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnEM_OperationDescDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdmitDiseaseUpdateDialog::OnCancelHMSAdmitDiseaseUpdateDialog(){
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
int CHMSAdmitDiseaseUpdateDialog::OnHMSAdmitDiseaseUpdateDialogListLoadData(){
	return 0;
}
