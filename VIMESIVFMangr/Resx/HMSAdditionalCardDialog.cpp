#include "HMSAdditionalCardDialog.h"
#include "MainFrm.h"
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static void _OnRegistrationDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static void _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationDateSetfocus();} */ 
/*static void _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static void _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdditionalCardDialog* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static void _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static void _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static long _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static void _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/
/*static void _OnCompanyChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCompanyChange();
} */
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCompanySetfocus();} */ 
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnCompanyKillfocus();
} */
static int _OnCompanyCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnCompanyCheckValue();
} 
static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSAdditionalCardDialog*)pWnd)->OnOffLineSelect();
}
/*static void _OnPaymentFromDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnPaymentFromDateChange();
} */
/*static void _OnPaymentFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnPaymentFromDateSetfocus();} */ 
/*static void _OnPaymentFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionalCardDialog *)pWnd)->OnPaymentFromDateKillfocus();
} */
static int _OnPaymentFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionalCardDialog *)pWnd)->OnPaymentFromDateCheckValue();
} 
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSAdditionalCardDialog*)pWnd)->OnEmergencySelect();
}
static int _OnAddHMSAdditionalCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalCardDialog*)pWnd)->OnAddHMSAdditionalCardDialog();
} 
static int _OnEditHMSAdditionalCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalCardDialog*)pWnd)->OnEditHMSAdditionalCardDialog();
} 
static int _OnDeleteHMSAdditionalCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalCardDialog*)pWnd)->OnDeleteHMSAdditionalCardDialog();
} 
static int _OnSaveHMSAdditionalCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalCardDialog*)pWnd)->OnSaveHMSAdditionalCardDialog();
} 
static int _OnCancelHMSAdditionalCardDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionalCardDialog*)pWnd)->OnCancelHMSAdditionalCardDialog();
} 
CHMSAdditionalCardDialog::CHMSAdditionalCardDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSAdditionalCardDialog::~CHMSAdditionalCardDialog(){
}
void CHMSAdditionalCardDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 5, 405, 210);
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 30, 110, 55);
	m_wndCardNo.Create(this,115, 30, 395, 55); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 60, 110, 85);
	m_wndCode.Create(this,115, 60, 200, 85); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 205, 60, 305, 85);
	m_wndDiscount.Create(this,310, 60, 360, 85); 
	m_wndPercentLabel.Create(this, _T("(%)"), 365, 60, 395, 85);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 90, 110, 115);
	m_wndRegistrationDate.Create(this,115, 90, 200, 115); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 205, 90, 305, 115);
	m_wndExpiryDate.Create(this,310, 90, 395, 115); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 120, 110, 145);
	m_wndRegistrationPlace.Create(this,115, 120, 395, 145); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 150, 110, 175);
	m_wndCompany.Create(this,115, 150, 395, 175); 
	m_wndOffLine.Create(this, _T("Out Line"), 205, 180, 305, 205);
	m_wndPaymentFromDateLabel.Create(this, _T("Payment Date"), 10, 180, 110, 205);
	m_wndPaymentFromDate.Create(this,115, 180, 200, 205); 
	m_wndEmergency.Create(this, _T("Emergency"), 310, 180, 395, 205);

}
void CHMSAdditionalCardDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCardNo.SetLimitText(1024);
	m_wndCardNo.SetCheckValue(true);
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlace.LimitText(1024);
	m_wndCompany.SetLimitText(1024);
	m_wndCompany.SetCheckValue(true);
	m_wndPaymentFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPaymentFromDate.SetCheckValue(true);



}
void CHMSAdditionalCardDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	//m_wndPaymentFromDate.SetEvent(WE_CHANGE, _OnPaymentFromDateChangeFnc);
	//m_wndPaymentFromDate.SetEvent(WE_SETFOCUS, _OnPaymentFromDateSetfocusFnc);
	//m_wndPaymentFromDate.SetEvent(WE_KILLFOCUS, _OnPaymentFromDateKillfocusFnc);
	m_wndPaymentFromDate.SetEvent(WE_CHECKVALUE, _OnPaymentFromDateCheckValueFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	SetMode(VM_NONE);

}
void CHMSAdditionalCardDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_TextEx(pDX, m_wndPaymentFromDate.GetDlgCtrlID(), m_szPaymentFromDate);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);

}
void CHMSAdditionalCardDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAdditionalCardDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAdditionalCardDialog::SetDefaultValues(){

	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_bOffLine=FALSE;
	m_szPaymentFromDate.Empty();
	m_bEmergency=FALSE;

}
int CHMSAdditionalCardDialog::SetMode(int nMode){
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
/*void CHMSAdditionalCardDialog::OnCardNoChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnCardNoKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnCardNoCheckValue(){
	return 0;
} 
/*void CHMSAdditionalCardDialog::OnCodeChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnCodeSetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnCodeKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSAdditionalCardDialog::OnDiscountChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnDiscountSetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnDiscountKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnDiscountCheckValue(){
	return 0;
} 
/*void CHMSAdditionalCardDialog::OnRegistrationDateChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnRegistrationDateSetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnRegistrationDateKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnRegistrationDateCheckValue(){
	return 0;
} 
/*void CHMSAdditionalCardDialog::OnExpiryDateChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnExpiryDateSetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnExpiryDateKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnExpiryDateCheckValue(){
	return 0;
} 
void CHMSAdditionalCardDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAdditionalCardDialog::OnRegistrationPlaceSelendok(){
	 
}
/*void CHMSAdditionalCardDialog::OnRegistrationPlaceSetfocus(){
	
}*/
/*void CHMSAdditionalCardDialog::OnRegistrationPlaceKillfocus(){
	
}*/
long CHMSAdditionalCardDialog::OnRegistrationPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace.IsSearchKey() && !m_szRegistrationPlaceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRegistrationPlaceKey
};
	m_wndRegistrationPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRegistrationPlace.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSAdditionalCardDialog::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAdditionalCardDialog::OnCompanyChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnCompanySetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnCompanyKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnCompanyCheckValue(){
	return 0;
} 
	void CHMSAdditionalCardDialog::OnOffLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSAdditionalCardDialog::OnPaymentFromDateChange(){
	
} */
/*void CHMSAdditionalCardDialog::OnPaymentFromDateSetfocus(){
	
} */
/*void CHMSAdditionalCardDialog::OnPaymentFromDateKillfocus(){
	
} */
int CHMSAdditionalCardDialog::OnPaymentFromDateCheckValue(){
	return 0;
} 
	void CHMSAdditionalCardDialog::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
int CHMSAdditionalCardDialog::OnAddHMSAdditionalCardDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAdditionalCardDialog::OnEditHMSAdditionalCardDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionalCardDialog::OnDeleteHMSAdditionalCardDialog(){
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
 		OnCancelHMSAdditionalCardDialog();
 	}
	return 0;
}
int CHMSAdditionalCardDialog::OnSaveHMSAdditionalCardDialog(){
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
 		//OnHMSAdditionalCardDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAdditionalCardDialog::OnCancelHMSAdditionalCardDialog(){
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
int CHMSAdditionalCardDialog::OnHMSAdditionalCardDialogListLoadData(){
	return 0;
}
