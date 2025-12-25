#include "AdContractLiquidationDlg.h"
#include "MainFrame_E10.h"
/*static void _OnOrderIDChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnOrderIDChange();
} */
/*static void _OnOrderIDSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnOrderIDSetfocus();} */ 
/*static void _OnOrderIDKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnOrderIDKillfocus();
} */
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnOrderIDCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnOrderNoCheckValue();
} 
/*static void _OnContractIDChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnContractIDChange();
} */
/*static void _OnContractIDSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnContractIDSetfocus();} */ 
/*static void _OnContractIDKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnContractIDKillfocus();
} */
static int _OnContractIDCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnContractIDCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractLiquidationDlg* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnStatusAddNew();
}*/
static void _OnPostedBySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdContractLiquidationDlg* )pWnd)->OnPostedBySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPostedBySelendokFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedBySelendok();
}
/*static void _OnPostedBySetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedByKillfocus();
}*/
/*static void _OnPostedByKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedByKillfocus();
}*/
static long _OnPostedByLoadDataFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnPostedByLoadData();
}
/*static void _OnPostedByAddNewFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedByAddNew();
}*/
/*static void _OnPostedDateChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedDateChange();
} */
/*static void _OnPostedDateSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedDateSetfocus();} */ 
/*static void _OnPostedDateKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPostedDateKillfocus();
} */
static int _OnPostedDateCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnPostedDateCheckValue();
} 
/*static void _OnImportedAmountChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnImportedAmountChange();
} */
/*static void _OnImportedAmountSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnImportedAmountSetfocus();} */ 
/*static void _OnImportedAmountKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnImportedAmountKillfocus();
} */
static int _OnImportedAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnImportedAmountCheckValue();
} 
/*static void _OnPaidAmountChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPaidAmountChange();
} */
/*static void _OnPaidAmountSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPaidAmountSetfocus();} */ 
/*static void _OnPaidAmountKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnPaidAmountKillfocus();
} */
static int _OnPaidAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnPaidAmountCheckValue();
} 
/*static void _OnUnpaidAmountChangeFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnUnpaidAmountChange();
} */
/*static void _OnUnpaidAmountSetfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnUnpaidAmountSetfocus();} */ 
/*static void _OnUnpaidAmountKillfocusFnc(CWnd *pWnd){
	((CAdContractLiquidationDlg *)pWnd)->OnUnpaidAmountKillfocus();
} */
static int _OnUnpaidAmountCheckValueFnc(CWnd *pWnd){
	return ((CAdContractLiquidationDlg *)pWnd)->OnUnpaidAmountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdContractLiquidationDlg *pVw = (CAdContractLiquidationDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdContractLiquidationDlg *pVw = (CAdContractLiquidationDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdContractLiquidationDlg *pVw = (CAdContractLiquidationDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdContractLiquidationDlg *pVw = (CAdContractLiquidationDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CAdContractLiquidationDlg *pVw = (CAdContractLiquidationDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddAdContractLiquidationDlgFnc(CWnd *pWnd){
	 return ((CAdContractLiquidationDlg*)pWnd)->OnAddAdContractLiquidationDlg();
} 
static int _OnEditAdContractLiquidationDlgFnc(CWnd *pWnd){
	 return ((CAdContractLiquidationDlg*)pWnd)->OnEditAdContractLiquidationDlg();
} 
static int _OnDeleteAdContractLiquidationDlgFnc(CWnd *pWnd){
	 return ((CAdContractLiquidationDlg*)pWnd)->OnDeleteAdContractLiquidationDlg();
} 
static int _OnSaveAdContractLiquidationDlgFnc(CWnd *pWnd){
	 return ((CAdContractLiquidationDlg*)pWnd)->OnSaveAdContractLiquidationDlg();
} 
static int _OnCancelAdContractLiquidationDlgFnc(CWnd *pWnd){
	 return ((CAdContractLiquidationDlg*)pWnd)->OnCancelAdContractLiquidationDlg();
} 
CAdContractLiquidationDlg::CAdContractLiquidationDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CAdContractLiquidationDlg::~CAdContractLiquidationDlg(){
}
void CAdContractLiquidationDlg::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 500, 300);
	m_wndOrderIDLabel.Create(this, _T("OrderID"), 10, 31, 130, 56);
	m_wndOrderID.Create(this,135, 31, 495, 56); 
	m_wndOrderNoLabel.Create(this, _T("OrderNo"), 10, 61, 130, 86);
	m_wndOrderNo.Create(this,135, 61, 495, 86); 
	m_wndContractIDLabel.Create(this, _T("ContractID"), 10, 91, 130, 116);
	m_wndContractID.Create(this,135, 91, 495, 116); 
	m_wndStatusLabel.Create(this, _T("Status"), 10, 121, 130, 146);
	m_wndStatus.Create(this,135, 121, 495, 146); 
	m_wndPostedByLabel.Create(this, _T("PostedBy"), 10, 151, 130, 176);
	m_wndPostedBy.Create(this,135, 151, 495, 176); 
	m_wndPostedDateLabel.Create(this, _T("PostedDate"), 10, 181, 130, 206);
	m_wndPostedDate.Create(this,135, 181, 495, 206); 
	m_wndImportedAmountLabel.Create(this, _T("ImportedAmount"), 10, 211, 130, 236);
	m_wndImportedAmount.Create(this,135, 211, 495, 236); 
	m_wndPaidAmountLabel.Create(this, _T("PaidAmount"), 10, 241, 130, 266);
	m_wndPaidAmount.Create(this,135, 241, 495, 266); 
	m_wndUnpaidAmountLabel.Create(this, _T("UnpaidAmount"), 10, 271, 130, 296);
	m_wndUnpaidAmount.Create(this,135, 271, 495, 296); 
	m_wndAdd.Create(this, _T("Add"), 80, 305, 160, 330);
	m_wndEdit.Create(this, _T("Edit"), 165, 305, 245, 330);
	m_wndDelete.Create(this, _T("Delete"), 250, 305, 330, 330);
	m_wndSave.Create(this, _T("Save"), 335, 305, 415, 330);
	m_wndClose.Create(this, _T("Close"), 420, 305, 500, 330);

}
void CAdContractLiquidationDlg::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndOrderID.SetLimitText(35);
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(35);
	m_wndOrderNo.SetCheckValue(true);
	m_wndContractID.SetLimitText(35);
	m_wndContractID.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(35);
	m_wndPostedBy.SetCheckValue(true);
	m_wndPostedBy.LimitText(35);
	m_wndPostedDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndPostedDate.SetCheckValue(true);
	m_wndImportedAmount.SetLimitText(16);
	m_wndImportedAmount.SetCheckValue(true);
	m_wndPaidAmount.SetLimitText(16);
	m_wndPaidAmount.SetCheckValue(true);
	m_wndUnpaidAmount.SetLimitText(16);
	m_wndUnpaidAmount.SetCheckValue(true);


	m_wndStatus.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStatus.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPostedBy.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPostedBy.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_AD_CONTRACT_LIQUIDATIONTbl.SetTableName(_T("AD_CONTRACT_LIQUIDATION"));
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_CREATEDBY"), dfText, 15); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_CREATEDDATE"), dfDateTime); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_ORDER_ID"), dfLong); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_ORDER_NO"), dfText, 20); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_CONTRACT_ID"), dfLong); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_STATUS"), dfText, 1); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_POSTEDBY"), dfText, 15); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_POSTEDDATE"), dfDateTime); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_IMPORTED_AMOUNT"), dfLong); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_PAID_AMOUNT"), dfLong); 
	m_AD_CONTRACT_LIQUIDATIONTbl.AddField(_T("ADCL_UNPAID_AMOUNT"), dfLong); 

}
void CAdContractLiquidationDlg::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndOrderID.SetEvent(WE_CHANGE, _OnOrderIDChangeFnc);
	//m_wndOrderID.SetEvent(WE_SETFOCUS, _OnOrderIDSetfocusFnc);
	//m_wndOrderID.SetEvent(WE_KILLFOCUS, _OnOrderIDKillfocusFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	//m_wndContractID.SetEvent(WE_CHANGE, _OnContractIDChangeFnc);
	//m_wndContractID.SetEvent(WE_SETFOCUS, _OnContractIDSetfocusFnc);
	//m_wndContractID.SetEvent(WE_KILLFOCUS, _OnContractIDKillfocusFnc);
	m_wndContractID.SetEvent(WE_CHECKVALUE, _OnContractIDCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	m_wndPostedBy.SetEvent(WE_SELENDOK, _OnPostedBySelendokFnc);
	//m_wndPostedBy.SetEvent(WE_SETFOCUS, _OnPostedBySetfocusFnc);
	//m_wndPostedBy.SetEvent(WE_KILLFOCUS, _OnPostedByKillfocusFnc);
	m_wndPostedBy.SetEvent(WE_SELCHANGE, _OnPostedBySelectChangeFnc);
	m_wndPostedBy.SetEvent(WE_LOADDATA, _OnPostedByLoadDataFnc);
	//m_wndPostedBy.SetEvent(WE_ADDNEW, _OnPostedByAddNewFnc);
	//m_wndPostedDate.SetEvent(WE_CHANGE, _OnPostedDateChangeFnc);
	//m_wndPostedDate.SetEvent(WE_SETFOCUS, _OnPostedDateSetfocusFnc);
	//m_wndPostedDate.SetEvent(WE_KILLFOCUS, _OnPostedDateKillfocusFnc);
	m_wndPostedDate.SetEvent(WE_CHECKVALUE, _OnPostedDateCheckValueFnc);
	//m_wndImportedAmount.SetEvent(WE_CHANGE, _OnImportedAmountChangeFnc);
	//m_wndImportedAmount.SetEvent(WE_SETFOCUS, _OnImportedAmountSetfocusFnc);
	//m_wndImportedAmount.SetEvent(WE_KILLFOCUS, _OnImportedAmountKillfocusFnc);
	m_wndImportedAmount.SetEvent(WE_CHECKVALUE, _OnImportedAmountCheckValueFnc);
	//m_wndPaidAmount.SetEvent(WE_CHANGE, _OnPaidAmountChangeFnc);
	//m_wndPaidAmount.SetEvent(WE_SETFOCUS, _OnPaidAmountSetfocusFnc);
	//m_wndPaidAmount.SetEvent(WE_KILLFOCUS, _OnPaidAmountKillfocusFnc);
	m_wndPaidAmount.SetEvent(WE_CHECKVALUE, _OnPaidAmountCheckValueFnc);
	//m_wndUnpaidAmount.SetEvent(WE_CHANGE, _OnUnpaidAmountChangeFnc);
	//m_wndUnpaidAmount.SetEvent(WE_SETFOCUS, _OnUnpaidAmountSetfocusFnc);
	//m_wndUnpaidAmount.SetEvent(WE_KILLFOCUS, _OnUnpaidAmountKillfocusFnc);
	m_wndUnpaidAmount.SetEvent(WE_CHECKVALUE, _OnUnpaidAmountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CAdContractLiquidationDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_szOrderNo);
	DDX_Text(pDX, m_wndContractID.GetDlgCtrlID(), m_nContractID);
	DDX_TextEx(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);
	DDX_TextEx(pDX, m_wndPostedBy.GetDlgCtrlID(), m_szPostedByKey);
	DDX_TextEx(pDX, m_wndPostedDate.GetDlgCtrlID(), m_szPostedDate);
	DDX_Text(pDX, m_wndImportedAmount.GetDlgCtrlID(), m_nImportedAmount);
	DDX_Text(pDX, m_wndPaidAmount.GetDlgCtrlID(), m_nPaidAmount);
	DDX_Text(pDX, m_wndUnpaidAmount.GetDlgCtrlID(), m_nUnpaidAmount);

}
void CAdContractLiquidationDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("OrderID")] =  m_nOrderID;
	m_jData[_T("OrderNo")] =  m_szOrderNo;
	m_jData[_T("ContractID")] =  m_nContractID;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("PostedBy")] =  m_szPostedByKey;
	m_jData[_T("PostedDate")] =  m_szPostedDate;
	m_jData[_T("ImportedAmount")] =  m_nImportedAmount;
	m_jData[_T("PaidAmount")] =  m_nPaidAmount;
	m_jData[_T("UnpaidAmount")] =  m_nUnpaidAmount;
	}
	else
	{
			
	m_jData[_T("OrderID")].GetValue(m_nOrderID);
	m_jData[_T("OrderNo")].GetValue(m_szOrderNo);
	m_jData[_T("ContractID")].GetValue(m_nContractID);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("PostedBy")].GetValue(m_szPostedByKey);
	m_jData[_T("PostedDate")].GetValue(m_szPostedDate);
	m_jData[_T("ImportedAmount")].GetValue(m_nImportedAmount);
	m_jData[_T("PaidAmount")].GetValue(m_nPaidAmount);
	m_jData[_T("UnpaidAmount")].GetValue(m_nUnpaidAmount);
	}

}
void CAdContractLiquidationDlg::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdContractLiquidationDlg::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CAdContractLiquidationDlg::SetDefaultValues(){

	m_nOrderID=0;
	m_szOrderNo.Empty();
	m_nContractID=0;
	m_szStatusKey.Empty();
	m_szPostedByKey.Empty();
	m_szPostedDate.Empty();
	m_nImportedAmount=0;
	m_nPaidAmount=0;
	m_nUnpaidAmount=0;

}
int CAdContractLiquidationDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CAdContractLiquidationDlg::OnOrderIDChange(){
	
} */
/*void CAdContractLiquidationDlg::OnOrderIDSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnOrderIDKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnOrderIDCheckValue(){
	return 0;
} 
/*void CAdContractLiquidationDlg::OnOrderNoChange(){
	
} */
/*void CAdContractLiquidationDlg::OnOrderNoSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnOrderNoKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnOrderNoCheckValue(){
	return 0;
} 
/*void CAdContractLiquidationDlg::OnContractIDChange(){
	
} */
/*void CAdContractLiquidationDlg::OnContractIDSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnContractIDKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnContractIDCheckValue(){
	return 0;
} 
void CAdContractLiquidationDlg::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractLiquidationDlg::OnStatusSelendok(){
	 
}
/*void CAdContractLiquidationDlg::OnStatusSetfocus(){
	
}*/
/*void CAdContractLiquidationDlg::OnStatusKillfocus(){
	
}*/
long CAdContractLiquidationDlg::OnStatusLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStatusKey
};
	m_wndStatus.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStatus.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdContractLiquidationDlg::OnStatusAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdContractLiquidationDlg::OnPostedBySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractLiquidationDlg::OnPostedBySelendok(){
	 
}
/*void CAdContractLiquidationDlg::OnPostedBySetfocus(){
	
}*/
/*void CAdContractLiquidationDlg::OnPostedByKillfocus(){
	
}*/
long CAdContractLiquidationDlg::OnPostedByLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPostedBy.IsSearchKey() && !m_szPostedByKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPostedByKey
};
	m_wndPostedBy.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPostedBy.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdContractLiquidationDlg::OnPostedByAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdContractLiquidationDlg::OnPostedDateChange(){
	
} */
/*void CAdContractLiquidationDlg::OnPostedDateSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnPostedDateKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnPostedDateCheckValue(){
	return 0;
} 
/*void CAdContractLiquidationDlg::OnImportedAmountChange(){
	
} */
/*void CAdContractLiquidationDlg::OnImportedAmountSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnImportedAmountKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnImportedAmountCheckValue(){
	return 0;
} 
/*void CAdContractLiquidationDlg::OnPaidAmountChange(){
	
} */
/*void CAdContractLiquidationDlg::OnPaidAmountSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnPaidAmountKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnPaidAmountCheckValue(){
	return 0;
} 
/*void CAdContractLiquidationDlg::OnUnpaidAmountChange(){
	
} */
/*void CAdContractLiquidationDlg::OnUnpaidAmountSetfocus(){
	
} */
/*void CAdContractLiquidationDlg::OnUnpaidAmountKillfocus(){
	
} */
int CAdContractLiquidationDlg::OnUnpaidAmountCheckValue(){
	return 0;
} 
void CAdContractLiquidationDlg::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractLiquidationDlg::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractLiquidationDlg::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractLiquidationDlg::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdContractLiquidationDlg::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CAdContractLiquidationDlg::OnAddAdContractLiquidationDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdContractLiquidationDlg::OnEditAdContractLiquidationDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdContractLiquidationDlg::OnDeleteAdContractLiquidationDlg(){
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
 		OnCancelAdContractLiquidationDlg();
 	}
	return 0;
}
int CAdContractLiquidationDlg::OnSaveAdContractLiquidationDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_AD_CONTRACT_LIQUIDATIONTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_AD_CONTRACT_LIQUIDATIONTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnAdContractLiquidationDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdContractLiquidationDlg::OnCancelAdContractLiquidationDlg(){
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
int CAdContractLiquidationDlg::OnAdContractLiquidationDlgListLoadData(){
	return 0;
}
