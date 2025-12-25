#include "HMSCardSearchDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
/*static int _OnCardNoChangeFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnCardNoChange();
} */
/*static int _OnCardNoSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnCardNoKillfocus();} */ 
/*static int _OnCardNoKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnCardNoCheckValue();
} 
/*static int _OnDiscountChangeFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnDiscountChange();
} */
/*static int _OnDiscountSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnDiscountKillfocus();} */ 
/*static int _OnDiscountKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnDiscountCheckValue();
} 
/*static int _OnRegistrationDateChangeFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationDateChange();
} */
/*static int _OnRegistrationDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationDateKillfocus();} */ 
/*static int _OnRegistrationDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationDateKillfocus();
} */
static int _OnRegistrationDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationDateCheckValue();
} 
/*static int _OnExpiryDateChangeFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnExpiryDateChange();
} */
/*static int _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnExpiryDateKillfocus();} */ 
/*static int _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnExpiryDateCheckValue();
} 
static int _OnRegistrationPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSCardSearchDialog* )pWnd)->OnRegistrationPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnRegistrationPlaceSelendokFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationPlaceSelendok();
}
/*static int _OnRegistrationPlaceSetfocusFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
/*static int _OnRegistrationPlaceKillfocusFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationPlaceKillfocus();
}*/
static int _OnRegistrationPlaceLoadDataFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationPlaceLoadData();
}
/*static int _OnRegistrationPlaceAddNewFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog *)pWnd)->OnRegistrationPlaceAddNew();
}*/
/*static int _OnPatientNameChangeFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnPatientNameChange();
} */
/*static int _OnPatientNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnPatientNameKillfocus();} */ 
/*static int _OnPatientNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCardSearchDialog *)pWnd)->OnPatientNameCheckValue();
} 
static int _OnSelectSelectFnc(CWnd *pWnd){
	CHMSCardSearchDialog *pVw = (CHMSCardSearchDialog *)pWnd;
	return pVw->OnSelectSelect();
} 
static int _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCardSearchDialog *pVw = (CHMSCardSearchDialog *)pWnd;
	return pVw->OnCloseSelect();
} 
static int _OnAddHMSCardSearchDialogFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog*)pWnd)->OnAddHMSCardSearchDialog();
} 
static int _OnEditHMSCardSearchDialogFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog*)pWnd)->OnEditHMSCardSearchDialog();
} 
static int _OnDeleteHMSCardSearchDialogFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog*)pWnd)->OnDeleteHMSCardSearchDialog();
} 
static int _OnSaveHMSCardSearchDialogFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog*)pWnd)->OnSaveHMSCardSearchDialog();
} 
static int _OnCancelHMSCardSearchDialogFnc(CWnd *pWnd){
	 return ((CHMSCardSearchDialog*)pWnd)->OnCancelHMSCardSearchDialog();
} 
CHMSCardSearchDialog::CHMSCardSearchDialog(){

	m_nDlgWidth = 335;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CHMSCardSearchDialog::~CHMSCardSearchDialog(){
}
void CHMSCardSearchDialog::OnCreateComponents(){
	m_wndCardNumberInformation.Create(this, _T("Card Number Information"), 4, 5, 325, 133);
	m_wndCardNoLabel.Create(this, _T("Card No"), 9, 25, 96, 47);
	m_wndCardNo.Create(this,101, 25, 263, 47); 
	m_wndDiscount.Create(this,268, 25, 298, 47); 
	m_wndPercentLabel.Create(this, _T("%"), 303, 25, 317, 47);
	m_wndRegistrationDateLabel.Create(this, _T("Registration Date"), 9, 52, 96, 74);
	m_wndRegistrationDate.Create(this,101, 52, 171, 74); 
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 176, 52, 243, 74);
	m_wndExpiryDate.Create(this,248, 52, 318, 74); 
	m_wndRegistrationPlaceLabel.Create(this, _T("Registration Place"), 9, 79, 96, 101);
	m_wndRegistrationPlace.Create(this,101, 79, 319, 101); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 9, 106, 96, 128);
	m_wndPatientName.Create(this,101, 106, 319, 128); 
	m_wndSelect.Create(this, _T("&Select"), 181, 138, 251, 160);
	m_wndClose.Create(this, _T("&Close"), 256, 138, 326, 160);

}
void CHMSCardSearchDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndDiscount.SetLimitText(16);
	m_wndDiscount.SetCheckValue(true);
	m_wndRegistrationDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegistrationDate.SetCheckValue(true);
	m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	m_wndRegistrationPlace.SetCheckValue(true);
	m_wndRegistrationPlace.LimitText(35);
	m_wndPatientName.SetLimitText(35);


	m_wndRegistrationPlace.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRegistrationPlace.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSCardSearchDialog::OnSetWindowEvents(){
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
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
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSelect.SetEvent(WE_CLICK, _OnSelectSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSCardSearchDialog::OnDoDataExchange(CDataExchange* pDX){
	return;

	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);
	DDX_TextEx(pDX, m_wndRegistrationDate.GetDlgCtrlID(), m_szRegistrationDate);
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndRegistrationPlace.GetDlgCtrlID(), m_szRegistrationPlaceKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSCardSearchDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCardSearchDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCardSearchDialog::SetDefaultValues(){

	m_szCardNo.Empty();
	m_nDiscount=0;
	m_szRegistrationDate.Empty();
	m_szExpiryDate.Empty();
	m_szRegistrationPlaceKey.Empty();
	m_szPatientName.Empty();

}
int CHMSCardSearchDialog::SetMode(int nMode){ 
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
/*int CHMSCardSearchDialog::OnCardNoChange(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnCardNoSetfocus(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnCardNoKillfocus(){
	return 0;
} */
int CHMSCardSearchDialog::OnCardNoCheckValue(){
	return 0;
} 
/*int CHMSCardSearchDialog::OnDiscountChange(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnDiscountSetfocus(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnDiscountKillfocus(){
	return 0;
} */
int CHMSCardSearchDialog::OnDiscountCheckValue(){
	return 0;
} 
/*int CHMSCardSearchDialog::OnRegistrationDateChange(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnRegistrationDateSetfocus(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnRegistrationDateKillfocus(){
	return 0;
} */
int CHMSCardSearchDialog::OnRegistrationDateCheckValue(){
	return 0;
} 
/*int CHMSCardSearchDialog::OnExpiryDateChange(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnExpiryDateSetfocus(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnExpiryDateKillfocus(){
	return 0;
} */
int CHMSCardSearchDialog::OnExpiryDateCheckValue(){
	return 0;
} 
int CHMSCardSearchDialog::OnRegistrationPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSCardSearchDialog::OnRegistrationPlaceSelendok(){
	 return 0;
}
/*int CHMSCardSearchDialog::OnRegistrationPlaceSetfocus(){
	 return 0;
}*/
/*int CHMSCardSearchDialog::OnRegistrationPlaceKillfocus(){
	 return 0;
}*/
int CHMSCardSearchDialog::OnRegistrationPlaceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRegistrationPlace.IsSearchKey()){
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
/*int CHMSCardSearchDialog::OnRegistrationPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSCardSearchDialog::OnPatientNameChange(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnPatientNameSetfocus(){
	return 0;
} */
/*int CHMSCardSearchDialog::OnPatientNameKillfocus(){
	return 0;
} */
int CHMSCardSearchDialog::OnPatientNameCheckValue(){
	return 0;
} 
int CHMSCardSearchDialog::OnSelectSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSCardSearchDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSCardSearchDialog::OnAddHMSCardSearchDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSCardSearchDialog::OnEditHMSCardSearchDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
 
} 
int CHMSCardSearchDialog::OnDeleteHMSCardSearchDialog(){
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
 		OnCancelHMSCardSearchDialog(); 
 	}
return 0;
 } 
int CHMSCardSearchDialog::OnSaveHMSCardSearchDialog(){
 	if(GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	
	CString szWhere; 
 //	szWhere.Format(_T(" WHERE hc_patientno=%ld AND hc_idx=%d"), m_nPatientNo, m_nIndex); 
// 	szSQL = m_tblTbl.GetUpdateSQL(_T("hc_createdby,hc_createddate,hc_patientno,hc_idx")); 
 	szSQL += szWhere; 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	
}
int CHMSCardSearchDialog::OnCancelHMSCardSearchDialog(){
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
int CHMSCardSearchDialog::OnHMSCardSearchDialogListLoadData(){
	return 0;
}
