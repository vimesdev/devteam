#include "HMSEditOrderDate.h"
#include "MainFrm.h"
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDate *)pWnd)->OnOrderDateCheckValue();
} 
/*static void _OnPerformDateChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnPerformDateChange();
} */
/*static void _OnPerformDateSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnPerformDateSetfocus();} */ 
/*static void _OnPerformDateKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnPerformDateKillfocus();
} */
static int _OnPerformDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDate *)pWnd)->OnPerformDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDate *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDate *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnOrderIdChangeFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderIdChange();
} */
/*static void _OnOrderIdSetfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderIdSetfocus();} */ 
/*static void _OnOrderIdKillfocusFnc(CWnd *pWnd){
	((CHMSEditOrderDate *)pWnd)->OnOrderIdKillfocus();
} */
static int _OnOrderIdCheckValueFnc(CWnd *pWnd){
	return ((CHMSEditOrderDate *)pWnd)->OnOrderIdCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSEditOrderDate *pVw = (CHMSEditOrderDate *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditOrderDate *pVw = (CHMSEditOrderDate *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSEditOrderDateFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDate*)pWnd)->OnAddHMSEditOrderDate();
} 
static int _OnEditHMSEditOrderDateFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDate*)pWnd)->OnEditHMSEditOrderDate();
} 
static int _OnDeleteHMSEditOrderDateFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDate*)pWnd)->OnDeleteHMSEditOrderDate();
} 
static int _OnSaveHMSEditOrderDateFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDate*)pWnd)->OnSaveHMSEditOrderDate();
} 
static int _OnCancelHMSEditOrderDateFnc(CWnd *pWnd){
	 return ((CHMSEditOrderDate*)pWnd)->OnCancelHMSEditOrderDate();
} 
CHMSEditOrderDate::CHMSEditOrderDate(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CHMSEditOrderDate::~CHMSEditOrderDate(){
}
void CHMSEditOrderDate::OnCreateComponents(){
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 5, 95, 125, 120);
	m_wndOrderDate.Create(this,130, 95, 250, 120); 
	m_wndPerformDateLabel.Create(this, _T("Perform Date"), 5, 125, 125, 150);
	m_wndPerformDate.Create(this,130, 125, 250, 150); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 65, 125, 90);
	m_wndDescription.Create(this,130, 65, 250, 90); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 5, 35, 125, 60);
	m_wndOrderNo.Create(this,130, 35, 250, 60); 
	m_wndOrderIdLabel.Create(this, _T("Order Id"), 5, 5, 125, 30);
	m_wndOrderId.Create(this,130, 5, 250, 30); 
	m_wndSave.Create(this, _T("&Save"), 85, 155, 165, 180);
	m_wndClose.Create(this, _T("&Close"), 170, 155, 250, 180);

}
void CHMSEditOrderDate::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndPerformDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndPerformDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);
	m_wndOrderId.SetLimitText(35);
	m_wndOrderId.SetCheckValue(true);

}
void CHMSEditOrderDate::OnSetWindowEvents(){
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
	SetMode(VM_NONE);

}
void CHMSEditOrderDate::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndPerformDate.GetDlgCtrlID(), m_szPerformDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndOrderId.GetDlgCtrlID(), m_szOrderId);

}
void CHMSEditOrderDate::UpdateJson(BOOL bSave){
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
void CHMSEditOrderDate::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEditOrderDate::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditOrderDate::SetDefaultValues(){

	m_szOrderDate.Empty();
	m_szPerformDate.Empty();
	m_szDescription.Empty();
	m_szOrderNo.Empty();
	m_szOrderId.Empty();

}
int CHMSEditOrderDate::SetMode(int nMode){
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
/*void CHMSEditOrderDate::OnOrderDateChange(){
	
} */
/*void CHMSEditOrderDate::OnOrderDateSetfocus(){
	
} */
/*void CHMSEditOrderDate::OnOrderDateKillfocus(){
	
} */
int CHMSEditOrderDate::OnOrderDateCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDate::OnPerformDateChange(){
	
} */
/*void CHMSEditOrderDate::OnPerformDateSetfocus(){
	
} */
/*void CHMSEditOrderDate::OnPerformDateKillfocus(){
	
} */
int CHMSEditOrderDate::OnPerformDateCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDate::OnDescriptionChange(){
	
} */
/*void CHMSEditOrderDate::OnDescriptionSetfocus(){
	
} */
/*void CHMSEditOrderDate::OnDescriptionKillfocus(){
	
} */
int CHMSEditOrderDate::OnDescriptionCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDate::OnOrderNoChange(){
	
} */
/*void CHMSEditOrderDate::OnOrderNoSetfocus(){
	
} */
/*void CHMSEditOrderDate::OnOrderNoKillfocus(){
	
} */
int CHMSEditOrderDate::OnOrderNoCheckValue(){
	return 0;
} 
/*void CHMSEditOrderDate::OnOrderIdChange(){
	
} */
/*void CHMSEditOrderDate::OnOrderIdSetfocus(){
	
} */
/*void CHMSEditOrderDate::OnOrderIdKillfocus(){
	
} */
int CHMSEditOrderDate::OnOrderIdCheckValue(){
	return 0;
} 
void CHMSEditOrderDate::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSEditOrderDate::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEditOrderDate::OnAddHMSEditOrderDate(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditOrderDate::OnEditHMSEditOrderDate(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditOrderDate::OnDeleteHMSEditOrderDate(){
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
 		OnCancelHMSEditOrderDate();
 	}
	return 0;
}
int CHMSEditOrderDate::OnSaveHMSEditOrderDate(){
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
 		//OnHMSEditOrderDateListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEditOrderDate::OnCancelHMSEditOrderDate(){
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
int CHMSEditOrderDate::OnHMSEditOrderDateListLoadData(){
	return 0;
}
