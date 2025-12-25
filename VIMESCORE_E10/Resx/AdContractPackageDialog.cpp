#include "AdContractPackageDialog.h"
#include "MainFrm.h"
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnYearCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnExpDateCheckValue();
} 
static void _OnMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractPackageDialog* )pWnd)->OnMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMethodSelendokFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodSelendok();
}
/*static void _OnMethodSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodKillfocus();
}*/
/*static void _OnMethodKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodKillfocus();
}*/
static long _OnMethodLoadDataFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnMethodLoadData();
}
/*static void _OnMethodAddNewFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnMethodAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CAdContractPackageDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractPackageDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdContractPackageDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdContractPackageDialog *pVw = (CAdContractPackageDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdContractPackageDialog *pVw = (CAdContractPackageDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnAddAdContractPackageDialog();
} 
static int _OnEditAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnEditAdContractPackageDialog();
} 
static int _OnDeleteAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnDeleteAdContractPackageDialog();
} 
static int _OnSaveAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnSaveAdContractPackageDialog();
} 
static int _OnCancelAdContractPackageDialogFnc(CWnd *pWnd){
	 return ((CAdContractPackageDialog*)pWnd)->OnCancelAdContractPackageDialog();
} 
CAdContractPackageDialog::CAdContractPackageDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 565;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CAdContractPackageDialog::~CAdContractPackageDialog(){
}
void CAdContractPackageDialog::OnCreateComponents(){
	m_wndContractGroup.Create(this, _T("Contract Package Info"), 5, 5, 550, 150);
	m_wndIDLabel.Create(this, _T("ID"), 10, 30, 110, 55);
	m_wndID.Create(this,115, 30, 315, 55); 
	m_wndYearLabel.Create(this, _T("Year"), 320, 30, 430, 55);
	m_wndYear.Create(this,435, 30, 545, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 110, 85);
	m_wndDescription.Create(this,115, 60, 545, 85); 
	m_wndDateLabel.Create(this, _T("Signed Date"), 10, 90, 110, 115);
	m_wndDate.Create(this,115, 90, 315, 115); 
	m_wndExpDateLabel.Create(this, _T("ExpDate"), 320, 90, 430, 115);
	m_wndExpDate.Create(this,435, 90, 545, 115); 
	m_wndMethodLabel.Create(this, _T("Method"), 10, 120, 110, 145);
	m_wndMethod.Create(this,115, 120, 315, 145); 
	m_wndAmountLabel.Create(this, _T("Amount"), 320, 120, 430, 145);
	m_wndAmount.Create(this,435, 120, 545, 145); 
	m_wndActive.Create(this, _T("Active"), 5, 155, 105, 180);
	m_wndSave.Create(this, _T("&Save"), 386, 155, 466, 180);
	m_wndClose.Create(this, _T("&Close"), 471, 155, 551, 180);

}
void CAdContractPackageDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndYear.SetLimitText(1024);
	m_wndYear.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndExpDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate.SetCheckValue(true);
	m_wndMethod.SetCheckValue(true);
	m_wndMethod.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);


	m_wndMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CAdContractPackageDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	//m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	//m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
	m_wndMethod.SetEvent(WE_SELENDOK, _OnMethodSelendokFnc);
	//m_wndMethod.SetEvent(WE_SETFOCUS, _OnMethodSetfocusFnc);
	//m_wndMethod.SetEvent(WE_KILLFOCUS, _OnMethodKillfocusFnc);
	m_wndMethod.SetEvent(WE_SELCHANGE, _OnMethodSelectChangeFnc);
	m_wndMethod.SetEvent(WE_LOADDATA, _OnMethodLoadDataFnc);
	//m_wndMethod.SetEvent(WE_ADDNEW, _OnMethodAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CAdContractPackageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);
	DDX_TextEx(pDX, m_wndMethod.GetDlgCtrlID(), m_szMethodKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdContractPackageDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Year")] =  m_nYear;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("ExpDate")] =  m_szExpDate;
	m_jData[_T("Method")] =  m_szMethodKey;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Year")].GetValue(m_nYear);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("ExpDate")].GetValue(m_szExpDate);
	m_jData[_T("Method")].GetValue(m_szMethodKey);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CAdContractPackageDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdContractPackageDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdContractPackageDialog::SetDefaultValues(){

	m_szID.Empty();
	m_nYear=0;
	m_szDescription.Empty();
	m_szDate.Empty();
	m_szExpDate.Empty();
	m_szMethodKey.Empty();
	m_nAmount=0;
	m_bActive=FALSE;

}
int CAdContractPackageDialog::SetMode(int nMode){
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
/*void CAdContractPackageDialog::OnIDChange(){
	
} */
/*void CAdContractPackageDialog::OnIDSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnIDKillfocus(){
	
} */
int CAdContractPackageDialog::OnIDCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnYearChange(){
	
} */
/*void CAdContractPackageDialog::OnYearSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnYearKillfocus(){
	
} */
int CAdContractPackageDialog::OnYearCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnDescriptionChange(){
	
} */
/*void CAdContractPackageDialog::OnDescriptionSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnDescriptionKillfocus(){
	
} */
int CAdContractPackageDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnDateChange(){
	
} */
/*void CAdContractPackageDialog::OnDateSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnDateKillfocus(){
	
} */
int CAdContractPackageDialog::OnDateCheckValue(){
	return 0;
} 
/*void CAdContractPackageDialog::OnExpDateChange(){
	
} */
/*void CAdContractPackageDialog::OnExpDateSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnExpDateKillfocus(){
	
} */
int CAdContractPackageDialog::OnExpDateCheckValue(){
	return 0;
} 
void CAdContractPackageDialog::OnMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractPackageDialog::OnMethodSelendok(){
	 
}
/*void CAdContractPackageDialog::OnMethodSetfocus(){
	
}*/
/*void CAdContractPackageDialog::OnMethodKillfocus(){
	
}*/
long CAdContractPackageDialog::OnMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMethod.IsSearchKey() && !m_szMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMethodKey
};
	m_wndMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdContractPackageDialog::OnMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CAdContractPackageDialog::OnAmountChange(){
	
} */
/*void CAdContractPackageDialog::OnAmountSetfocus(){
	
} */
/*void CAdContractPackageDialog::OnAmountKillfocus(){
	
} */
int CAdContractPackageDialog::OnAmountCheckValue(){
	return 0;
} 
	void CAdContractPackageDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CAdContractPackageDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CAdContractPackageDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CAdContractPackageDialog::OnAddAdContractPackageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractPackageDialog::OnEditAdContractPackageDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractPackageDialog::OnDeleteAdContractPackageDialog(){
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
 		OnCancelAdContractPackageDialog();
 	}
	return 0;
}
int CAdContractPackageDialog::OnSaveAdContractPackageDialog(){
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
 		//OnAdContractPackageDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractPackageDialog::OnCancelAdContractPackageDialog(){
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
int CAdContractPackageDialog::OnAdContractPackageDialogListLoadData(){
	return 0;
}
