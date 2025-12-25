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

	m_nDlgWidth = 960;
	m_nDlgHeight = 485;
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
	m_wndUnpaidView.Create(this, CRect(515, 5, 800, 450));
}
void CHMSExtInsCompanyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndCode.ModifyStyle(0, ES_UPPERCASE);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	m_wndAddress.SetCheckValue(false);
	m_wndOutpatientPayment.SetLimitText(22);
	m_wndOutpatientPayment.SetCheckValue(false);
	m_wndInpatientPayment.SetLimitText(22);
	m_wndInpatientPayment.SetCheckValue(false);


	m_wndList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 300);

	m_hms_extins_companyTbl.SetTableName(_T("hms_extins_company"));
//	m_hms_extins_companyTbl.AddField(_T("HEC_EXTINS_COMPANY_ID"), dfLong); 
	m_hms_extins_companyTbl.AddField(_T("HEC_USERID"), dfText, 15); 
	m_hms_extins_companyTbl.AddField(_T("HEC_CODE"), dfText, 15); 
	m_hms_extins_companyTbl.AddField(_T("HEC_NAME"), dfText, 254); 
/*
	m_hms_extins_companyTbl.AddField(_T("HEC_ADDRESS"), dfText, 254); 
	m_hms_extins_companyTbl.AddField(_T("HEC_TAXCODE"), dfText, 15); 
	m_hms_extins_companyTbl.AddField(_T("HEC_EMAIL"), dfText, 128); 
	m_hms_extins_companyTbl.AddField(_T("HEC_WEBSITE"), dfText, 128); 
	m_hms_extins_companyTbl.AddField(_T("HEC_PHONE"), dfText, 128); 
	m_hms_extins_companyTbl.AddField(_T("HEC_CREATEDBY"), dfText, 15); 
	m_hms_extins_companyTbl.AddField(_T("HEC_CREATEDDATE"), dfDateTime); 
	m_hms_extins_companyTbl.AddField(_T("HEC_UPDATEDBY"), dfText, 15); 
	m_hms_extins_companyTbl.AddField(_T("HEC_UPDATEDDATE"), dfDateTime); 
	m_hms_extins_companyTbl.AddField(_T("HEC_ISACTIVE"), dfText, 1); 
	m_hms_extins_companyTbl.AddField(_T("HEC_OUTPATIENT_PAYMENT"), dfLong); 
	m_hms_extins_companyTbl.AddField(_T("HEC_INPATIENT_PAYMENT"), dfLong); 
*/
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
	OnListLoadData();

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
	szSQL.Format(_T("SELECT * FROM hms_extins_company WHERE hec_extins_company_id = %ld ORDER BY hec_extins_company_id "), m_nId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HEC_CODE"), m_szCode);
		rs.GetValue(_T("HEC_NAME"), m_szName);
		rs.GetValue(_T("HEC_ADDRESS"), m_szAddress);
		rs.GetValue(_T("HEC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
		rs.GetValue(_T("HEC_INPATIENT_PAYMENT"), m_nInpatientPayment);
	}

}
void CHMSExtInsCompanyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_extins_companyTbl.SetValue(_T("HEC_USERID"), pMF->GetCurrentUser());
	m_hms_extins_companyTbl.SetValue(_T("HEC_CODE"), m_szCode);
	m_hms_extins_companyTbl.SetValue(_T("HEC_NAME"), m_szName);
	m_hms_extins_companyTbl.SetValue(_T("HEC_ADDRESS"), m_szAddress);
	m_hms_extins_companyTbl.SetValue(_T("HEC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
	m_hms_extins_companyTbl.SetValue(_T("HEC_INPATIENT_PAYMENT"), m_nInpatientPayment);

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
			m_wndCode.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndCode.SetFocus();
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
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
void CHMSExtInsCompanyDialog::OnListDblClick(){
	
} 
void CHMSExtInsCompanyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nId = str2long(m_wndList.GetItemText(nNewItem, 0));
	GetDataToScreen();
	SetMode(VM_VIEW);
	m_wndUnpaidView.m_nCompanyId = m_nId;
	m_wndUnpaidView.SetMode(VM_VIEW);
	

} 
int CHMSExtInsCompanyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSExtInsCompanyDialog();
	 return 0;
} 
long CHMSExtInsCompanyDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hec_extins_company_id AS id,") \
_T("   hec_code                   AS code,") \
_T("   hec_name                   AS name,") \
_T("   hec_address                AS address") \
_T(" FROM hms_extins_company") \
_T(" WHERE hec_isactive ='Y'") \
_T(" ORDER BY hec_name"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Id")), 
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Name")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
/*void CHMSExtInsCompanyDialog::OnCodeChange(){
	
} */
/*void CHMSExtInsCompanyDialog::OnCodeSetfocus(){
	
} */
/*void CHMSExtInsCompanyDialog::OnCodeKillfocus(){
	
} */
int CHMSExtInsCompanyDialog::OnCodeCheckValue(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	
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
	OnAddHMSExtInsCompanyDialog();
} 
void CHMSExtInsCompanyDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSExtInsCompanyDialog();
} 
void CHMSExtInsCompanyDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSExtInsCompanyDialog();
} 
void CHMSExtInsCompanyDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExtInsCompanyDialog();
} 
void CHMSExtInsCompanyDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
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
	szSQL.Format(_T("HMS_EXTINS_COMPANY_DELETE(%ld, '%s') "), m_nId, pMF->GetCurrentUser() );
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnListLoadData();
 	}
	else
	{
		ShowMessageBox(_T("Không xóa được đề mục"));
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
 		//szSQL = m_hms_extins_companyTbl.GetInsertSQL();
		szSQL.Format(_T("HMS_EXTINS_COMPANY_CREATE(%s) "), m_hms_extins_companyTbl.FormatSQL());
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szSQL.Format(_T("HMS_EXTINS_COMPANY_UPDATE(%ld, %s) "), m_nId, m_hms_extins_companyTbl.FormatSQL());
		
 		
 	}
 _tprintf(_T("%s"), szSQL);
 	int ret = str2long(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		OnListLoadData();
		if(GetMode() == VM_EDIT)
			SetMode(VM_VIEW);
		else
 			SetMode(VM_NONE);

		m_wndAdd.SetFocus();
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
