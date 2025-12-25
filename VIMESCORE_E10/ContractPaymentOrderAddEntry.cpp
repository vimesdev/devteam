#include "ContractPaymentOrderAddEntry.h"
#include "MainFrame_E10.h"
static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CContractPaymentOrderAddEntry* )pWnd)->OnContractSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractSelendokFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CContractPaymentOrderAddEntry *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnContractAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CContractPaymentOrderAddEntry *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CContractPaymentOrderAddEntry *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CContractPaymentOrderAddEntry *pVw = (CContractPaymentOrderAddEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CContractPaymentOrderAddEntry *pVw = (CContractPaymentOrderAddEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddContractPaymentOrderAddEntryFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderAddEntry*)pWnd)->OnAddContractPaymentOrderAddEntry();
} 
static int _OnEditContractPaymentOrderAddEntryFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderAddEntry*)pWnd)->OnEditContractPaymentOrderAddEntry();
} 
static int _OnDeleteContractPaymentOrderAddEntryFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderAddEntry*)pWnd)->OnDeleteContractPaymentOrderAddEntry();
} 
static int _OnSaveContractPaymentOrderAddEntryFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderAddEntry*)pWnd)->OnSaveContractPaymentOrderAddEntry();
} 
static int _OnCancelContractPaymentOrderAddEntryFnc(CWnd *pWnd){
	 return ((CContractPaymentOrderAddEntry*)pWnd)->OnCancelContractPaymentOrderAddEntry();
} 
CContractPaymentOrderAddEntry::CContractPaymentOrderAddEntry(CWnd *pParent, int nMode, long nId):
	CGuiPopup(pParent){
		CGuiPopup::SetMode(nMode);
		m_pWndOrder = pParent;
	m_nDlgWidth = 805;
	m_nDlgHeight = 40;
	m_nId = nId;
	SetDefaultValues();
}
CContractPaymentOrderAddEntry::~CContractPaymentOrderAddEntry(){
}
void CContractPaymentOrderAddEntry::OnCreateComponents(){
	m_wndContractLabel.Create(this, _T("Contract"), 5, 5, 85, 30);
	m_wndContract.Create(this,90, 5, 390, 30); 
	m_wndAmountLabel.Create(this, _T("Amount"), 395, 5, 475, 30);
	m_wndAmount.Create(this,480, 5, 580, 30); 
	m_wndSave.Create(this, _T("&Save"), 585, 5, 665, 30);
	m_wndClose.Create(this, _T("X"), 670, 5, 695, 30);

}
void CContractPaymentOrderAddEntry::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);

	m_wndContract.InsertColumn(0, _T("Id"), CFMT_TEXT, 0);
	m_wndContract.InsertColumn(1, _T("Số hợp đồng"), CFMT_TEXT, 120);
	m_wndContract.InsertColumn(2, _T("Tên hợp đồng"), CFMT_TEXT, 350);
	m_wndContract.InsertColumn(3, _T("Ngày ký"), CFMT_TEXT | CFMT_CENTER, 100);
	m_wndContract.InsertColumn(4, _T("Số tiền"), CFMT_MONEY, 150);

}
void CContractPaymentOrderAddEntry::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
	//m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
	//m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
	m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
	//m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);

}
void CContractPaymentOrderAddEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CContractPaymentOrderAddEntry::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Contract")] =  m_szContractKey;
	m_jData[_T("Amount")] =  m_nAmount;
	}
	else
	{
			
	m_jData[_T("Contract")].GetValue(m_szContractKey);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	}

}
void CContractPaymentOrderAddEntry::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CContractPaymentOrderAddEntry::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CContractPaymentOrderAddEntry::SetDefaultValues(){

	m_szContractKey.Empty();
	m_nAmount=0;

}
int CContractPaymentOrderAddEntry::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndContract.SetFocus();
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
void CContractPaymentOrderAddEntry::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CContractPaymentOrderAddEntry::OnContractSelendok(){
	UpdateData();
	m_nAmount = str2double(m_wndContract.GetCurrent(4));
	UpdateData(FALSE);
}
/*void CContractPaymentOrderAddEntry::OnContractSetfocus(){
	
}*/
/*void CContractPaymentOrderAddEntry::OnContractKillfocus(){
	
}*/
long CContractPaymentOrderAddEntry::OnContractLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	szFilter.AppendFormat(_T(" and adc_amount-adc_paid_amount > 0 "));
	return pMF->LoadContractList(&m_wndContract, m_szContractKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractKey
};
	m_wndContract.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CContractPaymentOrderAddEntry::OnContractAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CContractPaymentOrderAddEntry::OnAmountChange(){
	
} */
/*void CContractPaymentOrderAddEntry::OnAmountSetfocus(){
	
} */
/*void CContractPaymentOrderAddEntry::OnAmountKillfocus(){
	
} */
int CContractPaymentOrderAddEntry::OnAmountCheckValue(){
	return 0;
} 
void CContractPaymentOrderAddEntry::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveContractPaymentOrderAddEntry();
} 
void CContractPaymentOrderAddEntry::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::OnCancel();
} 
int CContractPaymentOrderAddEntry::OnAddContractPaymentOrderAddEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CContractPaymentOrderAddEntry::OnEditContractPaymentOrderAddEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CContractPaymentOrderAddEntry::OnDeleteContractPaymentOrderAddEntry(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelContractPaymentOrderAddEntry();
 	}
	return 0;
}
int CContractPaymentOrderAddEntry::OnSaveContractPaymentOrderAddEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("c_orderLINE_ADD(%ld, %ld, %f, '%s','%s') "),
		m_nId, str2long(m_szContractKey), m_nAmount, pMF->GetModuleID(), pMF->GetCurrentUser());
_tprintf(_T("\r\n%s"), szSQL);
	int ret = str2long(pMF->ExecDML(szSQL));
	if(ret > 0)
	{
		m_pWndOrder->PostMessage(WM_COMMAND, WM_REFRESH);
		SetMode(VM_ADD);

	}
 	return 0;
}
int CContractPaymentOrderAddEntry::OnCancelContractPaymentOrderAddEntry(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CContractPaymentOrderAddEntry::OnContractPaymentOrderAddEntryListLoadData(){
	return 0;
}
