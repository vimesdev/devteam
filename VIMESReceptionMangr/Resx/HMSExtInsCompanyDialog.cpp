#include "HMSExtInsCompanyDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsCompanyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExtInsCompanyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExtInsCompanyDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCompanyDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCompanyDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCompanyDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOutpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentChange();
} */
/*static void _OnOutpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentSetfocus();} */ 
/*static void _OnOutpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentKillfocus();
} */
static int _OnOutpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentCheckValue();
} 
/*static void _OnInpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentChange();
} */
/*static void _OnInpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentSetfocus();} */ 
/*static void _OnInpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentKillfocus();
} */
static int _OnInpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExtInsCompanyDialog *pVw = (CHMSExtInsCompanyDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSExtInsCompanyDialog *pVw = (CHMSExtInsCompanyDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExtInsCompanyDialog *pVw = (CHMSExtInsCompanyDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExtInsCompanyDialog *pVw = (CHMSExtInsCompanyDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExtInsCompanyDialog *pVw = (CHMSExtInsCompanyDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExtInsCompanyDialog *pVw = (CHMSExtInsCompanyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCompanyDialog*)pWnd)->OnAddHMSExtInsCompanyDialog();
} 
static int _OnEditHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCompanyDialog*)pWnd)->OnEditHMSExtInsCompanyDialog();
} 
static int _OnDeleteHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCompanyDialog*)pWnd)->OnDeleteHMSExtInsCompanyDialog();
} 
static int _OnSaveHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCompanyDialog*)pWnd)->OnSaveHMSExtInsCompanyDialog();
} 
static int _OnCancelHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCompanyDialog*)pWnd)->OnCancelHMSExtInsCompanyDialog();
} 
CHMSExtInsCompanyDialog::CHMSExtInsCompanyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CHMSExtInsCompanyDialog::~CHMSExtInsCompanyDialog(){
}
void CHMSExtInsCompanyDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 500, 370); 
	m_wndCodeLabel.Create(this, _T("Code"), 5, 375, 125, 400);
	m_wndCode.Create(this,130, 375, 250, 400); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 405, 125, 430);
	m_wndName.Create(this,130, 405, 500, 430); 
	m_wndAddressLabel.Create(this, _T("Address"), 5, 435, 125, 460);
	m_wndAddress.Create(this,130, 435, 500, 460); 
	m_wndOutpatientPaymentLabel.Create(this, _T("Outpatient Payment"), 5, 465, 125, 490);
	m_wndOutpatientPayment.Create(this,130, 465, 250, 490); 
	m_wndInpatientPaymentLabel.Create(this, _T("Inpatient Payment"), 255, 465, 375, 490);
	m_wndInpatientPayment.Create(this,380, 465, 500, 490); 
	m_wndAdd.Create(this, _T("&Add"), 5, 495, 83, 520);
	m_wndEdit.Create(this, _T("&Edit"), 88, 495, 166, 520);
	m_wndDelete.Create(this, _T("&Delete"), 171, 495, 249, 520);
	m_wndSave.Create(this, _T("&Save"), 254, 495, 332, 520);
	m_wndCancel.Create(this, _T("&Cancel"), 337, 495, 415, 520);
	m_wndClose.Create(this, _T("&Close"), 420, 495, 498, 520);

}
void CHMSExtInsCompanyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndOutpatientPayment.SetLimitText(1024);
	m_wndOutpatientPayment.SetCheckValue(true);
	m_wndInpatientPayment.SetLimitText(1024);
	m_wndInpatientPayment.SetCheckValue(true);



}
void CHMSExtInsCompanyDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndOutpatientPayment.SetEvent(WE_CHANGE, _OnOutpatientPaymentChangeFnc);
	//m_wndOutpatientPayment.SetEvent(WE_SETFOCUS, _OnOutpatientPaymentSetfocusFnc);
	//m_wndOutpatientPayment.SetEvent(WE_KILLFOCUS, _OnOutpatientPaymentKillfocusFnc);
	m_wndOutpatientPayment.SetEvent(WE_CHECKVALUE, _OnOutpatientPaymentCheckValueFnc);
	//m_wndInpatientPayment.SetEvent(WE_CHANGE, _OnInpatientPaymentChangeFnc);
	//m_wndInpatientPayment.SetEvent(WE_SETFOCUS, _OnInpatientPaymentSetfocusFnc);
	//m_wndInpatientPayment.SetEvent(WE_KILLFOCUS, _OnInpatientPaymentKillfocusFnc);
	m_wndInpatientPayment.SetEvent(WE_CHECKVALUE, _OnInpatientPaymentCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSExtInsCompanyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndOutpatientPayment.GetDlgCtrlID(), m_nOutpatientPayment);
	DDX_Text(pDX, m_wndInpatientPayment.GetDlgCtrlID(), m_nInpatientPayment);

}
void CHMSExtInsCompanyDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("OutpatientPayment")] =  m_nOutpatientPayment;
	m_jData[_T("InpatientPayment")] =  m_nInpatientPayment;
	}
	else
	{
			
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("OutpatientPayment")].GetValue(m_nOutpatientPayment);
	m_jData[_T("InpatientPayment")].GetValue(m_nInpatientPayment);
	}

}
void CHMSExtInsCompanyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExtInsCompanyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExtInsCompanyDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szName.Empty();
	m_szAddress.Empty();
	m_nOutpatientPayment=0;
	m_nInpatientPayment=0;

}
int CHMSExtInsCompanyDialog::SetMode(int nMode){
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
void CHMSExtInsCompanyDialog::OnListDblClick(){
	
} 
void CHMSExtInsCompanyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExtInsCompanyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExtInsCompanyDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSExtInsCompanyDialog::OnCodeChange(){
	
} */
/*void CHMSExtInsCompanyDialog::OnCodeSetfocus(){
	
} */
/*void CHMSExtInsCompanyDialog::OnCodeKillfocus(){
	
} */
int CHMSExtInsCompanyDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSExtInsCompanyDialog::OnNameChange(){
	
} */
/*void CHMSExtInsCompanyDialog::OnNameSetfocus(){
	
} */
/*void CHMSExtInsCompanyDialog::OnNameKillfocus(){
	
} */
int CHMSExtInsCompanyDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSExtInsCompanyDialog::OnAddressChange(){
	
} */
/*void CHMSExtInsCompanyDialog::OnAddressSetfocus(){
	
} */
/*void CHMSExtInsCompanyDialog::OnAddressKillfocus(){
	
} */
int CHMSExtInsCompanyDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSExtInsCompanyDialog::OnOutpatientPaymentChange(){
	
} */
/*void CHMSExtInsCompanyDialog::OnOutpatientPaymentSetfocus(){
	
} */
/*void CHMSExtInsCompanyDialog::OnOutpatientPaymentKillfocus(){
	
} */
int CHMSExtInsCompanyDialog::OnOutpatientPaymentCheckValue(){
	return 0;
} 
/*void CHMSExtInsCompanyDialog::OnInpatientPaymentChange(){
	
} */
/*void CHMSExtInsCompanyDialog::OnInpatientPaymentSetfocus(){
	
} */
/*void CHMSExtInsCompanyDialog::OnInpatientPaymentKillfocus(){
	
} */
int CHMSExtInsCompanyDialog::OnInpatientPaymentCheckValue(){
	return 0;
} 
void CHMSExtInsCompanyDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCompanyDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCompanyDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCompanyDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCompanyDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCompanyDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExtInsCompanyDialog::OnAddHMSExtInsCompanyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExtInsCompanyDialog::OnEditHMSExtInsCompanyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExtInsCompanyDialog::OnDeleteHMSExtInsCompanyDialog(){
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
 		OnCancelHMSExtInsCompanyDialog();
 	}
	return 0;
}
int CHMSExtInsCompanyDialog::OnSaveHMSExtInsCompanyDialog(){
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
 		//OnHMSExtInsCompanyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExtInsCompanyDialog::OnCancelHMSExtInsCompanyDialog(){
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
int CHMSExtInsCompanyDialog::OnHMSExtInsCompanyDialogListLoadData(){
	return 0;
}
