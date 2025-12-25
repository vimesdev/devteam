#include "FACurrencyView.h"
#include "MainFrm.h"
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACurrencyView* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CFACurrencyView *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchangeRateChangeFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnExchangeRateChange();
} */
/*static void _OnExchangeRateSetfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnExchangeRateSetfocus();} */ 
/*static void _OnExchangeRateKillfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnExchangeRateKillfocus();
} */
static int _OnExchangeRateCheckValueFnc(CWnd *pWnd){
	return ((CFACurrencyView *)pWnd)->OnExchangeRateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFACurrencyView *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnExchangeChangeFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnExchangeChange();
} */
/*static void _OnExchangeSetfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnExchangeSetfocus();} */ 
/*static void _OnExchangeKillfocusFnc(CWnd *pWnd){
	((CFACurrencyView *)pWnd)->OnExchangeKillfocus();
} */
static int _OnExchangeCheckValueFnc(CWnd *pWnd){
	return ((CFACurrencyView *)pWnd)->OnExchangeCheckValue();
} 
static int _OnAddFACurrencyViewFnc(CWnd *pWnd){
	 return ((CFACurrencyView*)pWnd)->OnAddFACurrencyView();
} 
static int _OnEditFACurrencyViewFnc(CWnd *pWnd){
	 return ((CFACurrencyView*)pWnd)->OnEditFACurrencyView();
} 
static int _OnDeleteFACurrencyViewFnc(CWnd *pWnd){
	 return ((CFACurrencyView*)pWnd)->OnDeleteFACurrencyView();
} 
static int _OnSaveFACurrencyViewFnc(CWnd *pWnd){
	 return ((CFACurrencyView*)pWnd)->OnSaveFACurrencyView();
} 
static int _OnCancelFACurrencyViewFnc(CWnd *pWnd){
	 return ((CFACurrencyView*)pWnd)->OnCancelFACurrencyView();
} 
CFACurrencyView::CFACurrencyView(){

	m_nDlgWidth = 265;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CFACurrencyView::~CFACurrencyView(){
}
void CFACurrencyView::OnCreateComponents(){
	m_wndCurrencyInformation.Create(this, _T("Currency Information"), 5, 5, 260, 150);
	m_wndCurrencyLabel.Create(this, _T("Currency"), 10, 30, 130, 55);
	m_wndCurrency.Create(this,135, 30, 255, 55); 
	m_wndExchangeRateLabel.Create(this, _T("Exchange Rate"), 10, 60, 130, 85);
	m_wndExchangeRate.Create(this,135, 60, 255, 85); 
	m_wndAmountLabel.Create(this, _T("Amount"), 10, 90, 130, 115);
	m_wndAmount.Create(this,135, 90, 255, 115); 
	m_wndExchangeLabel.Create(this, _T("Exchange"), 10, 120, 130, 145);
	m_wndExchange.Create(this,135, 120, 255, 145); 

}
void CFACurrencyView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(35);
	m_wndExchangeRate.SetLimitText(16);
	m_wndExchangeRate.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndExchange.SetLimitText(16);
	m_wndExchange.SetCheckValue(true);


	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFACurrencyView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	//m_wndExchangeRate.SetEvent(WE_CHANGE, _OnExchangeRateChangeFnc);
	//m_wndExchangeRate.SetEvent(WE_SETFOCUS, _OnExchangeRateSetfocusFnc);
	//m_wndExchangeRate.SetEvent(WE_KILLFOCUS, _OnExchangeRateKillfocusFnc);
	m_wndExchangeRate.SetEvent(WE_CHECKVALUE, _OnExchangeRateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndExchange.SetEvent(WE_CHANGE, _OnExchangeChangeFnc);
	//m_wndExchange.SetEvent(WE_SETFOCUS, _OnExchangeSetfocusFnc);
	//m_wndExchange.SetEvent(WE_KILLFOCUS, _OnExchangeKillfocusFnc);
	m_wndExchange.SetEvent(WE_CHECKVALUE, _OnExchangeCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACurrencyViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACurrencyViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACurrencyViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACurrencyViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACurrencyViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFACurrencyView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchangeRate.GetDlgCtrlID(), m_nExchangeRate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndExchange.GetDlgCtrlID(), m_nExchange);

}
void CFACurrencyView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACurrencyView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFACurrencyView::SetDefaultValues(){

	m_szCurrencyKey.Empty();
	m_nExchangeRate=0;
	m_nAmount=0;
	m_nExchange=0;

}
int CFACurrencyView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CFACurrencyView::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFACurrencyView::OnCurrencySelendok(){
	 
}
/*void CFACurrencyView::OnCurrencySetfocus(){
	
}*/
/*void CFACurrencyView::OnCurrencyKillfocus(){
	
}*/
long CFACurrencyView::OnCurrencyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCurrency.IsSearchKey() && !m_szCurrencyKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCurrencyKey
};
	m_wndCurrency.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCurrency.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFACurrencyView::OnCurrencyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFACurrencyView::OnExchangeRateChange(){
	
} */
/*void CFACurrencyView::OnExchangeRateSetfocus(){
	
} */
/*void CFACurrencyView::OnExchangeRateKillfocus(){
	
} */
int CFACurrencyView::OnExchangeRateCheckValue(){
	return 0;
} 
/*void CFACurrencyView::OnAmountChange(){
	
} */
/*void CFACurrencyView::OnAmountSetfocus(){
	
} */
/*void CFACurrencyView::OnAmountKillfocus(){
	
} */
int CFACurrencyView::OnAmountCheckValue(){
	return 0;
} 
/*void CFACurrencyView::OnExchangeChange(){
	
} */
/*void CFACurrencyView::OnExchangeSetfocus(){
	
} */
/*void CFACurrencyView::OnExchangeKillfocus(){
	
} */
int CFACurrencyView::OnExchangeCheckValue(){
	return 0;
} 
int CFACurrencyView::OnAddFACurrencyView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACurrencyView::OnEditFACurrencyView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACurrencyView::OnDeleteFACurrencyView(){
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
 		OnCancelFACurrencyView();
 	}
	return 0;
}
int CFACurrencyView::OnSaveFACurrencyView(){
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
 		//OnFACurrencyViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFACurrencyView::OnCancelFACurrencyView(){
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
int CFACurrencyView::OnFACurrencyViewListLoadData(){
	return 0;
}
