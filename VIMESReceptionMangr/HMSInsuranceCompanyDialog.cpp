#include "HMSInsuranceCompanyDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCompanyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInsuranceCompanyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCompanyDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCompanyDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCompanyDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCompanyDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnOutpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnOutpatientPaymentChange();
} */
/*static void _OnOutpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnOutpatientPaymentSetfocus();} */ 
/*static void _OnOutpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnOutpatientPaymentKillfocus();
} */
static int _OnOutpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCompanyDialog *)pWnd)->OnOutpatientPaymentCheckValue();
} 
/*static void _OnInpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnInpatientPaymentChange();
} */
/*static void _OnInpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnInpatientPaymentSetfocus();} */ 
/*static void _OnInpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCompanyDialog *)pWnd)->OnInpatientPaymentKillfocus();
} */
static int _OnInpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCompanyDialog *)pWnd)->OnInpatientPaymentCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInsuranceCompanyDialog *pVw = (CHMSInsuranceCompanyDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSInsuranceCompanyDialog *pVw = (CHMSInsuranceCompanyDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSInsuranceCompanyDialog *pVw = (CHMSInsuranceCompanyDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInsuranceCompanyDialog *pVw = (CHMSInsuranceCompanyDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInsuranceCompanyDialog *pVw = (CHMSInsuranceCompanyDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceCompanyDialog *pVw = (CHMSInsuranceCompanyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCompanyDialog*)pWnd)->OnAddHMSInsuranceCompanyDialog();
} 
static int _OnEditHMSInsuranceCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCompanyDialog*)pWnd)->OnEditHMSInsuranceCompanyDialog();
} 
static int _OnDeleteHMSInsuranceCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCompanyDialog*)pWnd)->OnDeleteHMSInsuranceCompanyDialog();
} 
static int _OnSaveHMSInsuranceCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCompanyDialog*)pWnd)->OnSaveHMSInsuranceCompanyDialog();
} 
static int _OnCancelHMSInsuranceCompanyDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCompanyDialog*)pWnd)->OnCancelHMSInsuranceCompanyDialog();
} 
CHMSInsuranceCompanyDialog::CHMSInsuranceCompanyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSInsuranceCompanyDialog::~CHMSInsuranceCompanyDialog(){
}
void CHMSInsuranceCompanyDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 510, 325); 
	m_wndCodeLabel.Create(this, _T("Code"), 5, 330, 125, 355);
	m_wndCode.Create(this,130, 330, 250, 355); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 360, 125, 385);
	m_wndName.Create(this,130, 360, 510, 385); 
	m_wndAddressLabel.Create(this, _T("Address"), 5, 390, 125, 415);
	m_wndAddress.Create(this,130, 390, 510, 415); 
	m_wndOutpatientPaymentLabel.Create(this, _T("Outpatient Payment"), 5, 420, 125, 445);
	m_wndOutpatientPayment.Create(this,130, 420, 250, 445); 
	m_wndInpatientPaymentLabel.Create(this, _T("Inpatient Payment"), 255, 420, 375, 445);
	m_wndInpatientPayment.Create(this,380, 420, 510, 445); 
	m_wndAdd.Create(this, _T("&Add"), 5, 450, 85, 475);
	m_wndEdit.Create(this, _T("&Edit"), 90, 450, 170, 475);
	m_wndDelete.Create(this, _T("&Delete"), 175, 450, 255, 475);
	m_wndSave.Create(this, _T("&Save"), 260, 450, 340, 475);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 450, 425, 475);
	m_wndClose.Create(this, _T("&Close"), 430, 450, 510, 475);

}
void CHMSInsuranceCompanyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(true);
	m_wndOutpatientPayment.SetLimitText(22);
	m_wndOutpatientPayment.SetCheckValue(true);
	m_wndInpatientPayment.SetLimitText(22);
	m_wndInpatientPayment.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);
	m_hms_insurance_companyTbl.SetTableName(_T("hms_insurance_company"));
	m_hms_insurance_companyTbl.AddField(_T("HIC_INSURANCE_COMPANY_ID"), dfLong); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_CODE"), dfText, 15); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_NAME"), dfText, 254); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_ADDRESS"), dfText, 254); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_TAXCODE"), dfText, 15); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_EMAIL"), dfText, 128); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_WEBSITE"), dfText, 128); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_PHONE"), dfText, 128); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_CREATEDBY"), dfText, 15); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_CREATEDDATE"), dfDateTime); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_UPDATEDBY"), dfText, 15); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_UPDATEDDATE"), dfDateTime); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_ISACTIVE"), dfText, 1); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_OUTPATIENT_PAYMENT"), dfLong); 
	m_hms_insurance_companyTbl.AddField(_T("HIC_INPATIENT_PAYMENT"), dfLong); 

}
void CHMSInsuranceCompanyDialog::OnSetWindowEvents(){
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
void CHMSInsuranceCompanyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndOutpatientPayment.GetDlgCtrlID(), m_nOutpatientPayment);
	DDX_Text(pDX, m_wndInpatientPayment.GetDlgCtrlID(), m_nInpatientPayment);

}
void CHMSInsuranceCompanyDialog::UpdateJson(BOOL bSave){
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
void CHMSInsuranceCompanyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HIC_CODE"), m_szCode);
	rs.GetValue(_T("HIC_NAME"), m_szName);
	rs.GetValue(_T("HIC_ADDRESS"), m_szAddress);
	rs.GetValue(_T("HIC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
	rs.GetValue(_T("HIC_INPATIENT_PAYMENT"), m_nInpatientPayment);

}
void CHMSInsuranceCompanyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_insurance_companyTbl.SetValue(_T("HIC_CODE"), m_szCode);
	m_hms_insurance_companyTbl.SetValue(_T("HIC_NAME"), m_szName);
	m_hms_insurance_companyTbl.SetValue(_T("HIC_ADDRESS"), m_szAddress);
	m_hms_insurance_companyTbl.SetValue(_T("HIC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
	m_hms_insurance_companyTbl.SetValue(_T("HIC_INPATIENT_PAYMENT"), m_nInpatientPayment);

}
void CHMSInsuranceCompanyDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szName.Empty();
	m_szAddress.Empty();
	m_nOutpatientPayment=0;
	m_nInpatientPayment=0;

}
int CHMSInsuranceCompanyDialog::SetMode(int nMode){
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
void CHMSInsuranceCompanyDialog::OnListDblClick(){
	
} 
void CHMSInsuranceCompanyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceCompanyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInsuranceCompanyDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Id")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSInsuranceCompanyDialog::OnCodeChange(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnCodeSetfocus(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnCodeKillfocus(){
	
} */
int CHMSInsuranceCompanyDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCompanyDialog::OnNameChange(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnNameSetfocus(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnNameKillfocus(){
	
} */
int CHMSInsuranceCompanyDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCompanyDialog::OnAddressChange(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnAddressSetfocus(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnAddressKillfocus(){
	
} */
int CHMSInsuranceCompanyDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCompanyDialog::OnOutpatientPaymentChange(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnOutpatientPaymentSetfocus(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnOutpatientPaymentKillfocus(){
	
} */
int CHMSInsuranceCompanyDialog::OnOutpatientPaymentCheckValue(){
	return 0;
} 
/*void CHMSInsuranceCompanyDialog::OnInpatientPaymentChange(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnInpatientPaymentSetfocus(){
	
} */
/*void CHMSInsuranceCompanyDialog::OnInpatientPaymentKillfocus(){
	
} */
int CHMSInsuranceCompanyDialog::OnInpatientPaymentCheckValue(){
	return 0;
} 
void CHMSInsuranceCompanyDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCompanyDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCompanyDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCompanyDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCompanyDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCompanyDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceCompanyDialog::OnAddHMSInsuranceCompanyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuranceCompanyDialog::OnEditHMSInsuranceCompanyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceCompanyDialog::OnDeleteHMSInsuranceCompanyDialog(){
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
 		OnCancelHMSInsuranceCompanyDialog();
 	}
	return 0;
}
int CHMSInsuranceCompanyDialog::OnSaveHMSInsuranceCompanyDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_insurance_companyTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_insurance_companyTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSInsuranceCompanyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInsuranceCompanyDialog::OnCancelHMSInsuranceCompanyDialog(){
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
int CHMSInsuranceCompanyDialog::OnHMSInsuranceCompanyDialogListLoadData(){
	return 0;
}
