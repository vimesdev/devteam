#include "HMSVisiInfoDialog.h"
#include "MainFrm.h"
/*static void _OnCardIDChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnCardIDChange();
} */
/*static void _OnCardIDSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnCardIDSetfocus();} */ 
/*static void _OnCardIDKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnCardIDKillfocus();
} */
static int _OnCardIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnCardIDCheckValue();
} 
/*static void _OnVisitToTimeChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnVisitToTimeChange();
} */
/*static void _OnVisitToTimeSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnVisitToTimeSetfocus();} */ 
/*static void _OnVisitToTimeKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnVisitToTimeKillfocus();
} */
static int _OnVisitToTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnVisitToTimeCheckValue();
} 
/*static void _OnTimeOutChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnTimeOutChange();
} */
/*static void _OnTimeOutSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnTimeOutSetfocus();} */ 
/*static void _OnTimeOutKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnTimeOutKillfocus();
} */
static int _OnTimeOutCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnTimeOutCheckValue();
} 
/*static void _OnVisitorChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnVisitorChange();
} */
/*static void _OnVisitorSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnVisitorSetfocus();} */ 
/*static void _OnVisitorKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnVisitorKillfocus();
} */
static int _OnVisitorCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnVisitorCheckValue();
} 
/*static void _OnDepositChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnDepositChange();
} */
/*static void _OnDepositSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnDepositSetfocus();} */ 
/*static void _OnDepositKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnDepositKillfocus();
} */
static int _OnDepositCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnDepositCheckValue();
} 
/*static void _OnRefundChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnRefundChange();
} */
/*static void _OnRefundSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnRefundSetfocus();} */ 
/*static void _OnRefundKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnRefundKillfocus();
} */
static int _OnRefundCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnRefundCheckValue();
} 
/*static void _OnConsignmentChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnConsignmentChange();
} */
/*static void _OnConsignmentSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnConsignmentSetfocus();} */ 
/*static void _OnConsignmentKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnConsignmentKillfocus();
} */
static int _OnConsignmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnConsignmentCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSVisiInfoDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSVisiInfoDialog *)pWnd)->OnNoteCheckValue();
} 
static void _On&ApplySelectFnc(CWnd *pWnd){
	CHMSVisiInfoDialog *pVw = (CHMSVisiInfoDialog *)pWnd;
	pVw->On&ApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSVisiInfoDialog *pVw = (CHMSVisiInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSVisiInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisiInfoDialog*)pWnd)->OnAddHMSVisiInfoDialog();
} 
static int _OnEditHMSVisiInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisiInfoDialog*)pWnd)->OnEditHMSVisiInfoDialog();
} 
static int _OnDeleteHMSVisiInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisiInfoDialog*)pWnd)->OnDeleteHMSVisiInfoDialog();
} 
static int _OnSaveHMSVisiInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisiInfoDialog*)pWnd)->OnSaveHMSVisiInfoDialog();
} 
static int _OnCancelHMSVisiInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSVisiInfoDialog*)pWnd)->OnCancelHMSVisiInfoDialog();
} 
CHMSVisiInfoDialog::CHMSVisiInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 485;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CHMSVisiInfoDialog::~CHMSVisiInfoDialog(){
}
void CHMSVisiInfoDialog::OnCreateComponents(){
	m_wndPatientInfo.Create(this, _T(""), 5, 6, 475, 86);
	m_wndVisitInformation.Create(this, _T("Visit Information"), 5, 90, 475, 485);
	m_wndCardIDLabel.Create(this, _T("Card ID"), 10, 115, 110, 140);
	m_wndCardID.Create(this,115, 115, 265, 140); 
	m_wndVisitToTimeLabel.Create(this, _T("Visit to time"), 10, 145, 110, 170);
	m_wndVisitToTime.Create(this,115, 145, 265, 170); 
	m_wndTimeOutLabel.Create(this, _T("Time out"), 10, 175, 110, 200);
	m_wndTimeOut.Create(this,115, 175, 265, 200); 
	m_wndVisitorLabel.Create(this, _T("Visitor"), 10, 205, 110, 230);
	m_wndVisitor.Create(this,115, 205, 470, 230); 
	m_wndDepositLabel.Create(this, _T("Deposit"), 10, 235, 110, 260);
	m_wndDeposit.Create(this,115, 235, 265, 260); 
	m_wndRefundLabel.Create(this, _T("Refund"), 10, 265, 110, 290);
	m_wndRefund.Create(this,115, 265, 265, 290); 
	m_wndConsignmentLabel.Create(this, _T("Consignment"), 10, 295, 110, 320);
	m_wndConsignment.Create(this,115, 295, 470, 385); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 390, 110, 415);
	m_wndNote.Create(this,115, 390, 470, 480); 
	m_wnd&Apply.Create(this, _T("&Apply"), 300, 490, 385, 515);
	m_wndClose.Create(this, _T("&Close"), 390, 490, 475, 515);

}
void CHMSVisiInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCardID.SetLimitText(15);
	m_wndCardID.SetCheckValue(true);
	m_wndVisitToTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndVisitToTime.SetCheckValue(true);
	m_wndTimeOut.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndTimeOut.SetCheckValue(true);
	m_wndVisitor.SetLimitText(128);
	m_wndVisitor.SetCheckValue(true);
	m_wndDeposit.SetLimitText(22);
	m_wndDeposit.SetCheckValue(true);
	m_wndRefund.SetLimitText(22);
	m_wndRefund.SetCheckValue(true);
	m_wndConsignment.SetLimitText(254);
	m_wndConsignment.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_hms_visitinfoTbl.SetTableName(_T("hms_visitinfo"));
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITINFO_ID"), dfLong); 
	m_hms_visitinfoTbl.AddField(_T("HVI_CARDID"), dfText, 15); 
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITTIME"), dfDateTime); 
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITOUT"), dfDateTime); 
	m_hms_visitinfoTbl.AddField(_T("HVI_VISITOR"), dfText, 128); 
	m_hms_visitinfoTbl.AddField(_T("HVI_DEPOSIT"), dfLong); 
	m_hms_visitinfoTbl.AddField(_T("HVI_REFUND"), dfLong); 
	m_hms_visitinfoTbl.AddField(_T("HVI_CONSIGNMENTNOTE"), dfText, 254); 
	m_hms_visitinfoTbl.AddField(_T("HVI_STATUS"), dfText, 1); 

}
void CHMSVisiInfoDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCardID.SetEvent(WE_CHANGE, _OnCardIDChangeFnc);
	//m_wndCardID.SetEvent(WE_SETFOCUS, _OnCardIDSetfocusFnc);
	//m_wndCardID.SetEvent(WE_KILLFOCUS, _OnCardIDKillfocusFnc);
	m_wndCardID.SetEvent(WE_CHECKVALUE, _OnCardIDCheckValueFnc);
	//m_wndVisitToTime.SetEvent(WE_CHANGE, _OnVisitToTimeChangeFnc);
	//m_wndVisitToTime.SetEvent(WE_SETFOCUS, _OnVisitToTimeSetfocusFnc);
	//m_wndVisitToTime.SetEvent(WE_KILLFOCUS, _OnVisitToTimeKillfocusFnc);
	m_wndVisitToTime.SetEvent(WE_CHECKVALUE, _OnVisitToTimeCheckValueFnc);
	//m_wndTimeOut.SetEvent(WE_CHANGE, _OnTimeOutChangeFnc);
	//m_wndTimeOut.SetEvent(WE_SETFOCUS, _OnTimeOutSetfocusFnc);
	//m_wndTimeOut.SetEvent(WE_KILLFOCUS, _OnTimeOutKillfocusFnc);
	m_wndTimeOut.SetEvent(WE_CHECKVALUE, _OnTimeOutCheckValueFnc);
	//m_wndVisitor.SetEvent(WE_CHANGE, _OnVisitorChangeFnc);
	//m_wndVisitor.SetEvent(WE_SETFOCUS, _OnVisitorSetfocusFnc);
	//m_wndVisitor.SetEvent(WE_KILLFOCUS, _OnVisitorKillfocusFnc);
	m_wndVisitor.SetEvent(WE_CHECKVALUE, _OnVisitorCheckValueFnc);
	//m_wndDeposit.SetEvent(WE_CHANGE, _OnDepositChangeFnc);
	//m_wndDeposit.SetEvent(WE_SETFOCUS, _OnDepositSetfocusFnc);
	//m_wndDeposit.SetEvent(WE_KILLFOCUS, _OnDepositKillfocusFnc);
	m_wndDeposit.SetEvent(WE_CHECKVALUE, _OnDepositCheckValueFnc);
	//m_wndRefund.SetEvent(WE_CHANGE, _OnRefundChangeFnc);
	//m_wndRefund.SetEvent(WE_SETFOCUS, _OnRefundSetfocusFnc);
	//m_wndRefund.SetEvent(WE_KILLFOCUS, _OnRefundKillfocusFnc);
	m_wndRefund.SetEvent(WE_CHECKVALUE, _OnRefundCheckValueFnc);
	//m_wndConsignment.SetEvent(WE_CHANGE, _OnConsignmentChangeFnc);
	//m_wndConsignment.SetEvent(WE_SETFOCUS, _OnConsignmentSetfocusFnc);
	//m_wndConsignment.SetEvent(WE_KILLFOCUS, _OnConsignmentKillfocusFnc);
	m_wndConsignment.SetEvent(WE_CHECKVALUE, _OnConsignmentCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wnd&Apply.SetEvent(WE_CLICK, _On&ApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSVisiInfoDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCardID.GetDlgCtrlID(), m_szCardID);
	DDX_TextEx(pDX, m_wndVisitToTime.GetDlgCtrlID(), m_szVisitToTime);
	DDX_TextEx(pDX, m_wndTimeOut.GetDlgCtrlID(), m_szTimeOut);
	DDX_Text(pDX, m_wndVisitor.GetDlgCtrlID(), m_szVisitor);
	DDX_Text(pDX, m_wndDeposit.GetDlgCtrlID(), m_nDeposit);
	DDX_Text(pDX, m_wndRefund.GetDlgCtrlID(), m_nRefund);
	DDX_Text(pDX, m_wndConsignment.GetDlgCtrlID(), m_szConsignment);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSVisiInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("CardID")] =  m_szCardID;
	m_jData[_T("VisitToTime")] =  m_szVisitToTime;
	m_jData[_T("TimeOut")] =  m_szTimeOut;
	m_jData[_T("Visitor")] =  m_szVisitor;
	m_jData[_T("Deposit")] =  m_nDeposit;
	m_jData[_T("Refund")] =  m_nRefund;
	m_jData[_T("Consignment")] =  m_szConsignment;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("CardID")].GetValue(m_szCardID);
	m_jData[_T("VisitToTime")].GetValue(m_szVisitToTime);
	m_jData[_T("TimeOut")].GetValue(m_szTimeOut);
	m_jData[_T("Visitor")].GetValue(m_szVisitor);
	m_jData[_T("Deposit")].GetValue(m_nDeposit);
	m_jData[_T("Refund")].GetValue(m_nRefund);
	m_jData[_T("Consignment")].GetValue(m_szConsignment);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSVisiInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HVI_CARDID"), m_szCardID);
	rs.GetValue(_T("HVI_VISITTIME"), m_szVisitToTime);
	rs.GetValue(_T("HVI_VISITOUT"), m_szTimeOut);
	rs.GetValue(_T("HVI_VISITOR"), m_szVisitor);
	rs.GetValue(_T("HVI_DEPOSIT"), m_nDeposit);
	rs.GetValue(_T("HVI_REFUND"), m_nRefund);
	rs.GetValue(_T("HVI_CONSIGNMENTNOTE"), m_szConsignment);

}
void CHMSVisiInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_visitinfoTbl.SetValue(_T("HVI_CARDID"), m_szCardID);
	m_hms_visitinfoTbl.SetValue(_T("HVI_VISITTIME"), m_szVisitToTime);
	m_hms_visitinfoTbl.SetValue(_T("HVI_VISITOUT"), m_szTimeOut);
	m_hms_visitinfoTbl.SetValue(_T("HVI_VISITOR"), m_szVisitor);
	m_hms_visitinfoTbl.SetValue(_T("HVI_DEPOSIT"), m_nDeposit);
	m_hms_visitinfoTbl.SetValue(_T("HVI_REFUND"), m_nRefund);
	m_hms_visitinfoTbl.SetValue(_T("HVI_CONSIGNMENTNOTE"), m_szConsignment);

}
void CHMSVisiInfoDialog::SetDefaultValues(){

	m_szCardID.Empty();
	m_szVisitToTime.Empty();
	m_szTimeOut.Empty();
	m_szVisitor.Empty();
	m_nDeposit=0;
	m_nRefund=0;
	m_szConsignment.Empty();
	m_szNote.Empty();

}
int CHMSVisiInfoDialog::SetMode(int nMode){
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
/*void CHMSVisiInfoDialog::OnCardIDChange(){
	
} */
/*void CHMSVisiInfoDialog::OnCardIDSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnCardIDKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnCardIDCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnVisitToTimeChange(){
	
} */
/*void CHMSVisiInfoDialog::OnVisitToTimeSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnVisitToTimeKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnVisitToTimeCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnTimeOutChange(){
	
} */
/*void CHMSVisiInfoDialog::OnTimeOutSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnTimeOutKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnTimeOutCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnVisitorChange(){
	
} */
/*void CHMSVisiInfoDialog::OnVisitorSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnVisitorKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnVisitorCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnDepositChange(){
	
} */
/*void CHMSVisiInfoDialog::OnDepositSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnDepositKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnDepositCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnRefundChange(){
	
} */
/*void CHMSVisiInfoDialog::OnRefundSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnRefundKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnRefundCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnConsignmentChange(){
	
} */
/*void CHMSVisiInfoDialog::OnConsignmentSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnConsignmentKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnConsignmentCheckValue(){
	return 0;
} 
/*void CHMSVisiInfoDialog::OnNoteChange(){
	
} */
/*void CHMSVisiInfoDialog::OnNoteSetfocus(){
	
} */
/*void CHMSVisiInfoDialog::OnNoteKillfocus(){
	
} */
int CHMSVisiInfoDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSVisiInfoDialog::On&ApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSVisiInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSVisiInfoDialog::OnAddHMSVisiInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSVisiInfoDialog::OnEditHMSVisiInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSVisiInfoDialog::OnDeleteHMSVisiInfoDialog(){
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
 		OnCancelHMSVisiInfoDialog();
 	}
	return 0;
}
int CHMSVisiInfoDialog::OnSaveHMSVisiInfoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_visitinfoTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_visitinfoTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSVisiInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSVisiInfoDialog::OnCancelHMSVisiInfoDialog(){
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
int CHMSVisiInfoDialog::OnHMSVisiInfoDialogListLoadData(){
	return 0;
}
