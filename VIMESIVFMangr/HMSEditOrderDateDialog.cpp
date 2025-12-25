#include "HMSEditOrderDateDialog.h"
#include "MainFrm.h"
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDateDialog *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDateDialog *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDateDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDateDialog *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderIdChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderIdChange();
} */
/*static void _OnOrderIdSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderIdSetfocus();} */ 
/*static void _OnOrderIdKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDateDialog *)pWnd)->OnOrderIdKillfocus();
} */
static int _OnOrderIdCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDateDialog *)pWnd)->OnOrderIdCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEditOrderDateDialog *pVw = (CHMSEditOrderDateDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditOrderDateDialog *pVw = (CHMSEditOrderDateDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSEditOrderDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDateDialog*)pWnd)->OnAddHMSEditOrderDateDialog();
} 
static int _OnEditHMSEditOrderDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDateDialog*)pWnd)->OnEditHMSEditOrderDateDialog();
} 
static int _OnDeleteHMSEditOrderDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDateDialog*)pWnd)->OnDeleteHMSEditOrderDateDialog();
} 
static int _OnSaveHMSEditOrderDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDateDialog*)pWnd)->OnSaveHMSEditOrderDateDialog();
} 
static int _OnCancelHMSEditOrderDateDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDateDialog*)pWnd)->OnCancelHMSEditOrderDateDialog();
} 
CHMSEditOrderDateDialog::CHMSEditOrderDateDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CHMSEditOrderDateDialog::~CHMSEditOrderDateDialog(){
}
void CHMSEditOrderDateDialog::OnCreateComponents(){
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 5, 95, 125, 120);
	m_wndOrderDate.Create(this,130, 95, 280, 120); 
	m_wndPerformDateLabel.Create(this, _T("Discharge Date"), 5, 125, 125, 150);
	m_wndPerformDate.Create(this,130, 125, 280, 150); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 65, 125, 90);
	m_wndDescription.Create(this,129, 66, 279, 91); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 5, 35, 125, 60);
	m_wndOrderNo.Create(this,130, 35, 280, 60); 
	m_wndOrderIdLabel.Create(this, _T("Order Id"), 5, 5, 125, 30);
	m_wndOrderId.Create(this,130, 5, 280, 30); 
	m_wndSave.Create(this, _T("&Save"), 116, 155, 196, 180);
	m_wndClose.Create(this, _T("&Close"), 201, 155, 281, 180);


}
void CHMSEditOrderDateDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	//m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetReadOnly(true);
//	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetReadOnly(true);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetReadOnly(true);
	m_wndOrderId.SetLimitText(35);
	m_wndOrderId.SetReadOnly(true);

}
void CHMSEditOrderDateDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	//m_wndPerformDate.SetEvent(WE_CHANGE, _OnPerformDateChangeFnc);
	//m_wndPerformDate.SetEvent(WE_SETFOCUS, _OnPerformDateSetfocusFnc);
	//m_wndPerformDate.SetEvent(WE_KILLFOCUS, _OnPerformDateKillfocusFnc);
	m_wndPerformDate.SetEvent(WE_CHECKVALUE, _OnPerformDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndOrderId.SetEvent(WE_CHANGE, _OnOrderIdChangeFnc);
	//m_wndOrderId.SetEvent(WE_SETFOCUS, _OnOrderIdSetfocusFnc);
	//m_wndOrderId.SetEvent(WE_KILLFOCUS, _OnOrderIdKillfocusFnc);
	m_wndOrderId.SetEvent(WE_CHECKVALUE, _OnOrderIdCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CHMSEditOrderDateDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndOrderId.GetDlgCtrlID(), m_szOrderId);

}
void CHMSEditOrderDateDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("OrderDate")] =  m_szOrderDate;
	m_jData[_T("PerformDate")] =  m_szPerformDate;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	m_jData[_T("OrderId")] =  m_szOrderId;
	}
	else
	{
			
	m_jData[_T("OrderDate")].GetValue(m_szOrderDate);
	m_jData[_T("PerformDate")].GetValue(m_szPerformDate);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	m_jData[_T("OrderId")].GetValue(m_szOrderId);
	}

}
void CHMSEditOrderDateDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select hcr_dischargedate from hms_clinical_record where hcr_docno = %ld"), 
		pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("hcr_dischargedate"), m_szPerformDate);
	
}
void CHMSEditOrderDateDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditOrderDateDialog::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szPerformDate.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderId.Empty();

}
int CHMSEditOrderDateDialog::SetMode(int nMode){
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
/*void CHMSEditOrderDateDialog::OnOrderDateChange(){
	
} */
/*void CHMSEditOrderDateDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSEditOrderDateDialog::OnOrderDateKillfocus(){
	
} */
int CHMSEditOrderDateDialog::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDateDialog::OnPerformDateChange(){
	
} */
/*void CHMSEditOrderDateDialog::OnPerformDateSetfocus(){
	
} */
/*void CHMSEditOrderDateDialog::OnPerformDateKillfocus(){
	
} */
int CHMSEditOrderDateDialog::OnPerformDateCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDateDialog::OnDescriptionChange(){
	
} */
/*void CHMSEditOrderDateDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSEditOrderDateDialog::OnDescriptionKillfocus(){
	
} */
int CHMSEditOrderDateDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDateDialog::OnOrderNoChange(){
	
} */
/*void CHMSEditOrderDateDialog::OnOrderNoSetfocus(){
	
} */
/*void CHMSEditOrderDateDialog::OnOrderNoKillfocus(){
	
} */
int CHMSEditOrderDateDialog::OnOrderNoCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDateDialog::OnOrderIdChange(){
	
} */
/*void CHMSEditOrderDateDialog::OnOrderIdSetfocus(){
	
} */
/*void CHMSEditOrderDateDialog::OnOrderIdKillfocus(){
	
} */
int CHMSEditOrderDateDialog::OnOrderIdCheckValue(){
	return 0;
} 
void CHMSEditOrderDateDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSEditOrderDateDialog();
} 
void CHMSEditOrderDateDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSEditOrderDateDialog::OnAddHMSEditOrderDateDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditOrderDateDialog::OnEditHMSEditOrderDateDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditOrderDateDialog::OnDeleteHMSEditOrderDateDialog(){
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
 		OnCancelHMSEditOrderDateDialog();
 	}
	return 0;
}
int CHMSEditOrderDateDialog::OnSaveHMSEditOrderDateDialog(){
 	if( GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("HMS_TERM_WARNING_UPDATEORDER('%s', %ld,%ld,'%s','%s')"),
		pMF->GetCurrentUser(), pMF->m_nDocumentNo, str2long(m_szOrderId), m_szOrderDate, m_szType);
 	int ret = str2int(pMF->ExecDML(szSQL));
_fmsg(_T("%s"), szSQL);
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 	}
 	else
 	{
		ShowMessageBox(_T("Không thể cập nhật được ngày yêu cầu"));
 	}
 	return ret;
 	return 0;
}
int CHMSEditOrderDateDialog::OnCancelHMSEditOrderDateDialog(){
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
int CHMSEditOrderDateDialog::OnHMSEditOrderDateDialogListLoadData(){
	return 0;
}
