#include "HMSMaindiseaseUpdateDialog.h"
#include "HMSMainFrame.h"

/*static void _OnChanDoanChangeFnc(CWnd *pWnd){
	((CHMSMainDiseaseUpdateDialog *)pWnd)->OnChanDoanChange();
} */
/*static void _OnChanDoanSetfocusFnc(CWnd *pWnd){
	((CHMSMainDiseaseUpdateDialog *)pWnd)->OnChanDoanSetfocus();} */ 
/*static void _OnChanDoanKillfocusFnc(CWnd *pWnd){
	((CHMSMainDiseaseUpdateDialog *)pWnd)->OnChanDoanKillfocus();
} */
static int _OnChanDoanCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSMainDiseaseUpdateDialog *)pWnd)->OnChanDoanCheckValue();
} 
/*static void _OnDescChangeFnc(CWnd *pWnd){
	((CHMSMainDiseaseUpdateDialog *)pWnd)->OnDescChange();
} */
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CHMSMainDiseaseUpdateDialog *)pWnd)->OnDescSetfocus();} */ 
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CHMSMainDiseaseUpdateDialog *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSMainDiseaseUpdateDialog *)pWnd)->OnDescCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSMainDiseaseUpdateDialog *pVw = (CHMSMainDiseaseUpdateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSMainDiseaseUpdateDialog *pVw = (CHMSMainDiseaseUpdateDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSMainDiseaseUpdateDialog*)pWnd)->OnAddHMSOperationUpdateDialog();
} 
static int _OnEditHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSMainDiseaseUpdateDialog*)pWnd)->OnEditHMSOperationUpdateDialog();
} 
static int _OnDeleteHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSMainDiseaseUpdateDialog*)pWnd)->OnDeleteHMSOperationUpdateDialog();
} 
static int _OnSaveHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSMainDiseaseUpdateDialog*)pWnd)->OnSaveHMSOperationUpdateDialog();
} 
static int _OnCancelHMSOperationUpdateDialogFnc(CWnd *pWnd){
	 return ((CHMSMainDiseaseUpdateDialog*)pWnd)->OnCancelHMSOperationUpdateDialog();
}
static int _OnOtherInforCheckValueFnc(CWnd *pWnd){
	return ((CHMSMainDiseaseUpdateDialog *)pWnd)->OnOtherInforCheckValue();
}
CHMSMainDiseaseUpdateDialog::CHMSMainDiseaseUpdateDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSMainDiseaseUpdateDialog::~CHMSMainDiseaseUpdateDialog()
{


}
void CHMSMainDiseaseUpdateDialog::OnCreateComponents()
{
	m_wndDescGroupBox.Create(this, _T("Thông tin chẩn đoán bệnh chính"), 5, 4, 600, 249);
	m_wndOtherInforGroupBox.Create(this, _T("Những vấn đề khác"), 0, 0, 0, 0);	
	m_wndChanDoanLabel.Create(this, _T("ChanDoan"), 10, 29, 100, 125);
	m_wndChanDoan.Create(this,11, 27, 595, 245 ,true, false, true); 
	m_wndOtherInfor.Create(this,0, 0, 0, 0 ,true, false, true); 
	m_wndSave.Create(this, _T("Save"), 0, 0, 0, 0);
	m_wndCancel.Create(this, _T("Close"), 520, 255, 600, 280);
	m_wndChanDoan.SetReadOnly(true);
	m_wndOtherInfor.SetReadOnly(true);

}
void CHMSMainDiseaseUpdateDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndChanDoan.SetMultiLine(TRUE);
	m_wndChanDoan.SetLimitText(1024);
	m_wndChanDoan.SetCheckValue(true);

	m_wndOtherInfor.SetMultiLine(TRUE);
	m_wndOtherInfor.SetLimitText(1024);
	

	hms_treatment_record_Tbl.SetTableName(_T("hms_treatment_record"));
	hms_treatment_record_Tbl.AddField(_T("htr_diagnosticbynurse"), dfText, 1024);
	hms_treatment_record_Tbl.AddField(_T("htr_otherinfor"), dfText, 1024);

}
void CHMSMainDiseaseUpdateDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndChanDoan.SetEvent(WE_CHANGE, _OnChanDoanChangeFnc);
	//m_wndChanDoan.SetEvent(WE_SETFOCUS, _OnChanDoanSetfocusFnc);
	//m_wndChanDoan.SetEvent(WE_KILLFOCUS, _OnChanDoanKillfocusFnc);
	m_wndChanDoan.SetEvent(WE_CHECKVALUE, _OnChanDoanCheckValueFnc);
	m_wndOtherInfor.SetEvent(WE_CHECKVALUE, _OnOtherInforCheckValueFnc);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//SetMode(VM_EDIT);
	GetDataToScreen();

}
void CHMSMainDiseaseUpdateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndChanDoan.GetDlgCtrlID(), m_szChanDoan);
	DDX_Text(pDX, m_wndOtherInfor.GetDlgCtrlID(), m_szOtherInfor);
}
void CHMSMainDiseaseUpdateDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ChanDoan")] =  m_szChanDoan;
	
	}
	else
	{
			
	m_jData[_T("ChanDoan")].GetValue(m_szChanDoan);
	
	}

}
void CHMSMainDiseaseUpdateDialog::GetDataToScreen()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT case when htr_idx > 1 then hcr_maindisease else HTR_MAINDISEASE end as maindisease FROM hms_treatment_record left join hms_clinical_record ON (htr_docno = hcr_docno) WHERE htr_docno=%ld and htr_idx=%ld"), m_nDocumentNo, m_nOrderId);
	rs.ExecSQL(szSQL);	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("maindisease"),  m_szChanDoan); 
		rs.GetValue(_T("htr_otherinfor"),  m_szOtherInfor); 
	}
	SetMode(VM_EDIT);	
}
void CHMSMainDiseaseUpdateDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString tmpStr, tmpStr1;
	hms_treatment_record_Tbl.SetValue(_T("htr_diagnosticbynurse"), m_szChanDoan);	
	hms_treatment_record_Tbl.SetValue(_T("htr_otherinfor"), m_szOtherInfor);	
	hms_treatment_record_Tbl.SetValue(_T("HTR_UPDATEDBY"), pMF->GetCurrentUser());
}
void CHMSMainDiseaseUpdateDialog::SetDefaultValues()
{

	m_szChanDoan.Empty();	
	m_szOtherInfor.Empty();

}
int CHMSMainDiseaseUpdateDialog::SetMode(int nMode){
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
/*void CHMSMainDiseaseUpdateDialog::OnChanDoanChange(){
	
} */
/*void CHMSMainDiseaseUpdateDialog::OnChanDoanSetfocus(){
	
} */
/*void CHMSMainDiseaseUpdateDialog::OnChanDoanKillfocus(){
	
} */
int CHMSMainDiseaseUpdateDialog::OnChanDoanCheckValue(){
	return 0;
} 
/*void CHMSMainDiseaseUpdateDialog::OnDescChange(){
	
} */
/*void CHMSMainDiseaseUpdateDialog::OnDescSetfocus(){
	
} */
/*void CHMSMainDiseaseUpdateDialog::OnDescKillfocus(){
	
} */
int CHMSMainDiseaseUpdateDialog::OnDescCheckValue(){
	return 0;
}
int CHMSMainDiseaseUpdateDialog::OnOtherInforCheckValue(){
	return 0;
} 
void CHMSMainDiseaseUpdateDialog::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSOperationUpdateDialog();	
	
} 
void CHMSMainDiseaseUpdateDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSMainDiseaseUpdateDialog::OnAddHMSOperationUpdateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSMainDiseaseUpdateDialog::OnEditHMSOperationUpdateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMainDiseaseUpdateDialog::OnDeleteHMSOperationUpdateDialog(){
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
 		OnCancelHMSOperationUpdateDialog();
 	}
	return 0;
}
int CHMSMainDiseaseUpdateDialog::OnSaveHMSOperationUpdateDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	
 	if(GetMode() == VM_EDIT || GetMode() == VM_ADD)
	{
 		CString szWhere;
 		szWhere.Format(_T(" WHERE htr_docno = %ld AND htr_idx = %ld "), m_nDocumentNo, m_nOrderId);
 		szSQL = hms_treatment_record_Tbl.GetUpdateSQL();
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
int CHMSMainDiseaseUpdateDialog::OnCancelHMSOperationUpdateDialog()
{
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
int CHMSMainDiseaseUpdateDialog::OnHMSOperationUpdateDialogListLoadData()
{
	return 0;
}
