#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static void _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static long _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static void _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/
/*static void _OnCompanyChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyChange();
} */
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanySetfocus();} */ 
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnCompanyKillfocus();
} */
static int _OnCompanyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnCompanyCheckValue();
} 
/*static void _OnPaymentFromDateChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPaymentFromDateChange();
} */
/*static void _OnPaymentFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPaymentFromDateSetfocus();} */ 
/*static void _OnPaymentFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPaymentFromDateKillfocus();
} */
static int _OnPaymentFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnPaymentFromDateCheckValue();
} 
static void _OnOutLineSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnOutLineSelect();
}
static int _OnAddHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnAddHMSCardEntryDialog();
} 
static int _OnEditHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnEditHMSCardEntryDialog();
} 
static int _OnDeleteHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnDeleteHMSCardEntryDialog();
} 
static int _OnSaveHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnSaveHMSCardEntryDialog();
} 
static int _OnCancelHMSCardEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCardEntryDialog*)pWnd)->OnCancelHMSCardEntryDialog();
} 
CHMSCardEntryDialog::CHMSCardEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 400;
	m_nDlgHeight = 220;
	SetDefaultValues();
}
CHMSCardEntryDialog::~CHMSCardEntryDialog(){
}
void CHMSCardEntryDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 5, 390, 210);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 29, 110, 54);
	m_wndCardNo.Create(this,115, 29, 385, 54); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 59, 110, 84);
	m_wndCode.Create(this,115, 59, 200, 84); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 205, 59, 295, 84);
	m_wndDiscount.Create(this,300, 59, 350, 84); 
	m_wndPercentLabel.Create(this, _T("%"), 355, 59, 385, 84);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 89, 110, 114);
	m_wndRegistrationDate.Create(this,115, 89, 200, 114); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 205, 89, 295, 114);
	m_wndExpiryDate.Create(this,300, 89, 385, 114); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 119, 110, 144);
	m_wndRegistrationPlace.Create(this,115, 119, 385, 144); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 149, 110, 174);
	m_wndCompany.Create(this,115, 149, 385, 174); 
	m_wndPaymentFromDateLabel.Create(this, _T("Payment Date"), 10, 179, 110, 204);
	m_wndPaymentFromDate.Create(this,115, 179, 200, 204); 
	m_wndOutLine.Create(this, _T("Out Line"), 281, 179, 385, 204);

}
void CHMSCardEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndCode.SetLimitText(35);
	m_wndCode.SetCheckValue(true);
	m_wndDiscount.SetLimitText(16);
	m_wndDiscount.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlace.LimitText(35);
	m_wndCompany.SetLimitText(35);
	m_wndCompany.SetCheckValue(true);
	m_wndPaymentFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPaymentFromDate.SetCheckValue(true);


	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_cardTbl.SetTableName(_T("hms_card"));
	m_hms_cardTbl.AddField(_T("hmsc_createdby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hmsc_createddate"), dfText, 4); 
	m_hms_cardTbl.AddField(_T("hmsc_updatedby"), dfText, 15); 
	m_hms_cardTbl.AddField(_T("hmsc_updateddate"), dfText, 4); 
	m_hms_cardTbl.AddField(_T("hmsc_cardno"), dfText, 25); 
	m_hms_cardTbl.AddField(_T("hmsc_idx"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hmsc_regdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hmsc_expdate"), dfDate); 
	m_hms_cardTbl.AddField(_T("hmsc_regplacecde"), dfText, 7); 
	m_hms_cardTbl.AddField(_T("hmsc_regplace"), dfText, 254); 
	m_hms_cardTbl.AddField(_T("hmsc_company"), dfText, 254); 
	m_hms_cardTbl.AddField(_T("hmsc_check"), dfText, 1); 
	m_hms_cardTbl.AddField(_T("hmsc_patientno"), dfInteger); 
	m_hms_cardTbl.AddField(_T("hmsc_discount"), dfInteger); 

}
void CHMSCardEntryDialog::OnSetWindowEvents(){
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	//m_wndRegistrationDate.SetEvent(WE_CHANGE, _OnRegistrationDateChangeFnc);
	//m_wndRegistrationDate.SetEvent(WE_SETFOCUS, _OnRegistrationDateSetfocusFnc);
	//m_wndRegistrationDate.SetEvent(WE_KILLFOCUS, _OnRegistrationDateKillfocusFnc);
	m_wndRegistrationDate.SetEvent(WE_CHECKVALUE, _OnRegistrationDateCheckValueFnc);
	//m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELENDOK, _OnRegistrationPlaceSelendokFnc);
	//m_wndRegistrationPlace.SetEvent(WE_SETFOCUS, _OnRegistrationPlaceSetfocusFnc);
	//m_wndRegistrationPlace.SetEvent(WE_KILLFOCUS, _OnRegistrationPlaceKillfocusFnc);
	m_wndRegistrationPlace.SetEvent(WE_SELCHANGE, _OnRegistrationPlaceSelectChangeFnc);
	m_wndRegistrationPlace.SetEvent(WE_LOADDATA, _OnRegistrationPlaceLoadDataFnc);
	//m_wndRegistrationPlace.SetEvent(WE_ADDNEW, _OnRegistrationPlaceAddNewFnc);
	//m_wndCompany.SetEvent(WE_CHANGE, _OnCompanyChangeFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_CHECKVALUE, _OnCompanyCheckValueFnc);
	//m_wndPaymentFromDate.SetEvent(WE_CHANGE, _OnPaymentFromDateChangeFnc);
	//m_wndPaymentFromDate.SetEvent(WE_SETFOCUS, _OnPaymentFromDateSetfocusFnc);
	//m_wndPaymentFromDate.SetEvent(WE_KILLFOCUS, _OnPaymentFromDateKillfocusFnc);
	m_wndPaymentFromDate.SetEvent(WE_CHECKVALUE, _OnPaymentFromDateCheckValueFnc);
	m_wndOutLine.SetEvent(WE_CLICK, _OnOutLineSelectFnc);

}
void CHMSCardEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_TextEx(pDX, m_wndPaymentFromDate.GetDlgCtrlID(), m_szPaymentFromDate);
	DDX_Check(pDX, m_wndOutLine.GetDlgCtrlID(), m_bOutLine);

}
void CHMSCardEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCardEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_cardTbl.SetValue(_T("hmsc_createdby"), pMF->GetCurrentUser());
	m_hms_cardTbl.SetValue(_T("hmsc_createddate"), pMF->GetSysDateTime());
	m_hms_cardTbl.SetValue(_T("hmsc_updatedby"), pMF->GetCurrentUser());
	m_hms_cardTbl.SetValue(_T("hmsc_updateddate"), pMF->GetSysDateTime());

}
void CHMSCardEntryDialog::SetDefaultValues(){

	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_szPaymentFromDate.Empty();
	m_bOutLine=FALSE;

}
int CHMSCardEntryDialog::SetMode(int nMode){
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
/*void CHMSCardEntryDialog::OnCardNoChange(){
	
} */
/*void CHMSCardEntryDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCardNoKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnCodeChange(){
	
} */
/*void CHMSCardEntryDialog::OnCodeSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCodeKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnDiscountChange(){
	
} */
/*void CHMSCardEntryDialog::OnDiscountSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnDiscountKillfocus(){
	
} */
int CHMSCardEntryDialog::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnRegistrationDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnExpiryDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnExpiryDateCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnRegistrationPlaceSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnRegistrationPlaceSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnRegistrationPlaceKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnRegistrationPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty()){
	};
	m_wndRegistrationPlace.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCardEntryDialog::OnCompanyChange(){
	
} */
/*void CHMSCardEntryDialog::OnCompanySetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnCompanyKillfocus(){
	
} */
int CHMSCardEntryDialog::OnCompanyCheckValue(){
	return 0;
} 
/*void CHMSCardEntryDialog::OnPaymentFromDateChange(){
	
} */
/*void CHMSCardEntryDialog::OnPaymentFromDateSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnPaymentFromDateKillfocus(){
	
} */
int CHMSCardEntryDialog::OnPaymentFromDateCheckValue(){
	return 0;
} 
	void CHMSCardEntryDialog::OnOutLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSCardEntryDialog::OnAddHMSCardEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSCardEntryDialog::OnEditHMSCardEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCardEntryDialog::OnDeleteHMSCardEntryDialog(){
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
 		OnCancelHMSCardEntryDialog(); 
 	}
	return 0;
}
int CHMSCardEntryDialog::OnSaveHMSCardEntryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_cardTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_cardTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSCardEntryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSCardEntryDialog::OnCancelHMSCardEntryDialog(){
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
int CHMSCardEntryDialog::OnHMSCardEntryDialogListLoadData(){
	return 0;
}
