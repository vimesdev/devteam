#include "HMSCardEntryDialog.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnObjectAddNew();
}*/
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
static void _OnAreaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCardEntryDialog* )pWnd)->OnAreaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAreaSelendokFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaSelendok();
}
/*static void _OnAreaSetfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaKillfocus();
}*/
/*static void _OnAreaKillfocusFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaKillfocus();
}*/
static long _OnAreaLoadDataFnc(CWnd *pWnd){
	return ((CHMSCardEntryDialog *)pWnd)->OnAreaLoadData();
}
/*static void _OnAreaAddNewFnc(CWnd *pWnd){
	((CHMSCardEntryDialog *)pWnd)->OnAreaAddNew();
}*/
static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnOffLineSelect();
}
static void _OnEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSCardEntryDialog*)pWnd)->OnEmergencySelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCardEntryDialog *pVw = (CHMSCardEntryDialog *)pWnd;
	pVw->OnCloseSelect();
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

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCardEntryDialog::~CHMSCardEntryDialog(){
}
void CHMSCardEntryDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 5, 5, 460, 240);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 130, 55);
	m_wndPatientName.Create(this,135, 30, 455, 55); 
	m_wndObject.Create(this,135, 30, 455, 55); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 60, 130, 85);
	m_wndCardNo.Create(this,135, 60, 455, 85); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 90, 130, 115);
	m_wndCode.Create(this,135, 90, 245, 115); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 250, 90, 340, 115);
	m_wndDiscount.Create(this,345, 90, 420, 115); 
	m_wndPercentLabel.Create(this, _T("%"), 425, 90, 455, 115);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 10, 120, 130, 145);
	m_wndRegistrationDate.Create(this,135, 120, 245, 145); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 250, 120, 340, 145);
	m_wndExpiryDate.Create(this,345, 120, 455, 145); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 10, 150, 130, 175);
	m_wndRegistrationPlace.Create(this,135, 150, 455, 175); 
	m_wndCompanyLabel.Create(this, _T("Company"), 10, 180, 130, 205);
	m_wndCompany.Create(this,135, 180, 455, 205); 
	m_wndAreaLabel.Create(this, _T("Area"), 10, 210, 130, 235);
	m_wndArea.Create(this,135, 210, 455, 235); 
	m_wndOffLine.Create(this, _T("Out Line"), 10, 245, 130, 270);
	m_wndEmergency.Create(this, _T("Emergency"), 135, 245, 230, 270);
	m_wndSave.Create(this, _T("&Ok"), 295, 245, 375, 270);
	m_wndClose.Create(this, _T("&Close"), 380, 245, 460, 270);

}
void CHMSCardEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(1024);
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
	m_wndArea.SetCheckValue(true);
	m_wndArea.LimitText(35);






	m_wndArea.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndArea.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSCardEntryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
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
	m_wndArea.SetEvent(WE_SELENDOK, _OnAreaSelendokFnc);
	//m_wndArea.SetEvent(WE_SETFOCUS, _OnAreaSetfocusFnc);
	//m_wndArea.SetEvent(WE_KILLFOCUS, _OnAreaKillfocusFnc);
	m_wndArea.SetEvent(WE_SELCHANGE, _OnAreaSelectChangeFnc);
	m_wndArea.SetEvent(WE_LOADDATA, _OnAreaLoadDataFnc);
	//m_wndArea.SetEvent(WE_ADDNEW, _OnAreaAddNewFnc);
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	m_wndEmergency.SetEvent(WE_CLICK, _OnEmergencySelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSCardEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompany);
	DDX_TextEx(pDX, m_wndArea.GetDlgCtrlID(), m_szAreaKey);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_Check(pDX, m_wndEmergency.GetDlgCtrlID(), m_bEmergency);

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

}
void CHMSCardEntryDialog::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szObjectKey.Empty();
	m_szCardNo.Empty();
	m_szCode.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szCompany.Empty();
	m_szAreaKey.Empty();
	m_bOffLine=FALSE;
	m_bEmergency=FALSE;

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
/*void CHMSCardEntryDialog::OnPatientNameChange(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSCardEntryDialog::OnPatientNameKillfocus(){
	
} */
int CHMSCardEntryDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSCardEntryDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnObjectSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnObjectKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnObjectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szObjectKey
};
	m_wndObject.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
void CHMSCardEntryDialog::OnAreaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnAreaSelendok(){
	 
}
/*void CHMSCardEntryDialog::OnAreaSetfocus(){
	
}*/
/*void CHMSCardEntryDialog::OnAreaKillfocus(){
	
}*/
long CHMSCardEntryDialog::OnAreaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndArea.IsSearchKey() && !m_szAreaKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szAreaKey
};
	m_wndArea.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndArea.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCardEntryDialog::OnAreaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSCardEntryDialog::OnOffLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSCardEntryDialog::OnEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSCardEntryDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCardEntryDialog::OnCloseSelect(){
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
