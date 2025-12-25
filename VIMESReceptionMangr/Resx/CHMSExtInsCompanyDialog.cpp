#include "CHMSExtInsCompanyDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSExtInsCompanyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSExtInsCompanyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSExtInsCompanyDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CCHMSExtInsCompanyDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSExtInsCompanyDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CCHMSExtInsCompanyDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOutpatientPaymentChangeFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentChange();
} */
/*static void _OnOutpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentSetfocus();} */ 
/*static void _OnOutpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentKillfocus();
} */
static int _OnOutpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CCHMSExtInsCompanyDialog *)pWnd)->OnOutpatientPaymentCheckValue();
} 
/*static void _OnInpatientPaymentChangeFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentChange();
} */
/*static void _OnInpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentSetfocus();} */ 
/*static void _OnInpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CCHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentKillfocus();
} */
static int _OnInpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CCHMSExtInsCompanyDialog *)pWnd)->OnInpatientPaymentCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCHMSExtInsCompanyDialog *pVw = (CCHMSExtInsCompanyDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCHMSExtInsCompanyDialog *pVw = (CCHMSExtInsCompanyDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCHMSExtInsCompanyDialog *pVw = (CCHMSExtInsCompanyDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCHMSExtInsCompanyDialog *pVw = (CCHMSExtInsCompanyDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCHMSExtInsCompanyDialog *pVw = (CCHMSExtInsCompanyDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSExtInsCompanyDialog *pVw = (CCHMSExtInsCompanyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CCHMSExtInsCompanyDialog*)pWnd)->OnAddCHMSExtInsCompanyDialog();
} 
static int _OnEditCHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CCHMSExtInsCompanyDialog*)pWnd)->OnEditCHMSExtInsCompanyDialog();
} 
static int _OnDeleteCHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CCHMSExtInsCompanyDialog*)pWnd)->OnDeleteCHMSExtInsCompanyDialog();
} 
static int _OnSaveCHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CCHMSExtInsCompanyDialog*)pWnd)->OnSaveCHMSExtInsCompanyDialog();
} 
static int _OnCancelCHMSExtInsCompanyDialogFnc(CWnd *pWnd){
	 return ((CCHMSExtInsCompanyDialog*)pWnd)->OnCancelCHMSExtInsCompanyDialog();
} 
CCHMSExtInsCompanyDialog::CCHMSExtInsCompanyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 525;
	SetDefaultValues();
}
CCHMSExtInsCompanyDialog::~CCHMSExtInsCompanyDialog(){
}
void CCHMSExtInsCompanyDialog::OnCreateComponents(){
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
void CCHMSExtInsCompanyDialog::OnInitializeComponents(){
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
void CCHMSExtInsCompanyDialog::OnSetWindowEvents(){
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
void CCHMSExtInsCompanyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndOutpatientPayment.GetDlgCtrlID(), m_nOutpatientPayment);
	DDX_Text(pDX, m_wndInpatientPayment.GetDlgCtrlID(), m_nInpatientPayment);

}
void CCHMSExtInsCompanyDialog::UpdateJson(BOOL bSave){
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
void CCHMSExtInsCompanyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSExtInsCompanyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSExtInsCompanyDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szName.Empty();
	m_szAddress.Empty();
	m_nOutpatientPayment=0;
	m_nInpatientPayment=0;

}
int CCHMSExtInsCompanyDialog::SetMode(int nMode){
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
void CCHMSExtInsCompanyDialog::OnListDblClick(){
	
} 
void CCHMSExtInsCompanyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSExtInsCompanyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSExtInsCompanyDialog::OnListLoadData(){
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
/*void CCHMSExtInsCompanyDialog::OnCodeChange(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnCodeSetfocus(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnCodeKillfocus(){
	
} */
int CCHMSExtInsCompanyDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CCHMSExtInsCompanyDialog::OnNameChange(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnNameSetfocus(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnNameKillfocus(){
	
} */
int CCHMSExtInsCompanyDialog::OnNameCheckValue(){
	return 0;
} 
/*void CCHMSExtInsCompanyDialog::OnAddressChange(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnAddressSetfocus(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnAddressKillfocus(){
	
} */
int CCHMSExtInsCompanyDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CCHMSExtInsCompanyDialog::OnOutpatientPaymentChange(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnOutpatientPaymentSetfocus(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnOutpatientPaymentKillfocus(){
	
} */
int CCHMSExtInsCompanyDialog::OnOutpatientPaymentCheckValue(){
	return 0;
} 
/*void CCHMSExtInsCompanyDialog::OnInpatientPaymentChange(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnInpatientPaymentSetfocus(){
	
} */
/*void CCHMSExtInsCompanyDialog::OnInpatientPaymentKillfocus(){
	
} */
int CCHMSExtInsCompanyDialog::OnInpatientPaymentCheckValue(){
	return 0;
} 
void CCHMSExtInsCompanyDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSExtInsCompanyDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSExtInsCompanyDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSExtInsCompanyDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSExtInsCompanyDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSExtInsCompanyDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSExtInsCompanyDialog::OnAddCHMSExtInsCompanyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSExtInsCompanyDialog::OnEditCHMSExtInsCompanyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSExtInsCompanyDialog::OnDeleteCHMSExtInsCompanyDialog(){
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
 		OnCancelCHMSExtInsCompanyDialog();
 	}
	return 0;
}
int CCHMSExtInsCompanyDialog::OnSaveCHMSExtInsCompanyDialog(){
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
 		//OnCHMSExtInsCompanyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSExtInsCompanyDialog::OnCancelCHMSExtInsCompanyDialog(){
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
int CCHMSExtInsCompanyDialog::OnCHMSExtInsCompanyDialogListLoadData(){
	return 0;
}
