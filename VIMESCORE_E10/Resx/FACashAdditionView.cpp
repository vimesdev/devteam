#include "FACashAdditionView.h"
#include "MainFrm.h"
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashAdditionView* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnCurrencyAddNew();
}*/
/*static void _OnExchageRateChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnExchageRateChange();
} */
/*static void _OnExchageRateSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnExchageRateSetfocus();} */ 
/*static void _OnExchageRateKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnExchageRateKillfocus();
} */
static int _OnExchageRateCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnExchageRateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnExchangeAmountChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnExchangeAmountChange();
} */
/*static void _OnExchangeAmountSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnExchangeAmountSetfocus();} */ 
/*static void _OnExchangeAmountKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnExchangeAmountKillfocus();
} */
static int _OnExchangeAmountCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnExchangeAmountCheckValue();
} 
static void _OnInvoiceTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFACashAdditionView* )pWnd)->OnInvoiceTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnInvoiceTypeSelendokFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTypeSelendok();
}
/*static void _OnInvoiceTypeSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
/*static void _OnInvoiceTypeKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTypeKillfocus();
}*/
static long _OnInvoiceTypeLoadDataFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnInvoiceTypeLoadData();
}
/*static void _OnInvoiceTypeAddNewFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTypeAddNew();
}*/
/*static void _OnInvoiceTemplateNoChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTemplateNoChange();
} */
/*static void _OnInvoiceTemplateNoSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTemplateNoSetfocus();} */ 
/*static void _OnInvoiceTemplateNoKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceTemplateNoKillfocus();
} */
static int _OnInvoiceTemplateNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnInvoiceTemplateNoCheckValue();
} 
/*static void _OnInvoiceNoChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceNoChange();
} */
/*static void _OnInvoiceNoSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceNoSetfocus();} */ 
/*static void _OnInvoiceNoKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceNoKillfocus();
} */
static int _OnInvoiceNoCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnInvoiceNoCheckValue();
} 
/*static void _OnInvoiceDateChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceDateChange();
} */
/*static void _OnInvoiceDateSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceDateSetfocus();} */ 
/*static void _OnInvoiceDateKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceDateKillfocus();
} */
static int _OnInvoiceDateCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnInvoiceDateCheckValue();
} 
/*static void _OnInvoiceSignedChangeFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceSignedChange();
} */
/*static void _OnInvoiceSignedSetfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceSignedSetfocus();} */ 
/*static void _OnInvoiceSignedKillfocusFnc(CWnd *pWnd){
	((CFACashAdditionView *)pWnd)->OnInvoiceSignedKillfocus();
} */
static int _OnInvoiceSignedCheckValueFnc(CWnd *pWnd){
	return ((CFACashAdditionView *)pWnd)->OnInvoiceSignedCheckValue();
} 
static int _OnAddFACashAdditionViewFnc(CWnd *pWnd){
	 return ((CFACashAdditionView*)pWnd)->OnAddFACashAdditionView();
} 
static int _OnEditFACashAdditionViewFnc(CWnd *pWnd){
	 return ((CFACashAdditionView*)pWnd)->OnEditFACashAdditionView();
} 
static int _OnDeleteFACashAdditionViewFnc(CWnd *pWnd){
	 return ((CFACashAdditionView*)pWnd)->OnDeleteFACashAdditionView();
} 
static int _OnSaveFACashAdditionViewFnc(CWnd *pWnd){
	 return ((CFACashAdditionView*)pWnd)->OnSaveFACashAdditionView();
} 
static int _OnCancelFACashAdditionViewFnc(CWnd *pWnd){
	 return ((CFACashAdditionView*)pWnd)->OnCancelFACashAdditionView();
} 
CFACashAdditionView::CFACashAdditionView(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 55;
	SetDefaultValues();
}
CFACashAdditionView::~CFACashAdditionView(){
}
void CFACashAdditionView::OnCreateComponents(){
	m_wndCurrency.Create(this,4, 6, 84, 31); 
	m_wndExchageRate.Create(this,89, 6, 169, 31); 
	m_wndAmount.Create(this,174, 6, 254, 31); 
	m_wndExchangeAmount.Create(this,259, 6, 339, 31); 
	m_wndInvoiceType.Create(this,344, 6, 424, 31); 
	m_wndInvoiceTemplateNo.Create(this,429, 6, 509, 31); 
	m_wndInvoiceNo.Create(this,514, 6, 594, 31); 
	m_wndInvoiceDate.Create(this,599, 6, 679, 31); 
	m_wndInvoiceSigned.Create(this,684, 6, 764, 31); 

}
void CFACashAdditionView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(35);
	m_wndExchageRate.SetLimitText(16);
	m_wndExchageRate.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);
	m_wndExchangeAmount.SetLimitText(16);
	m_wndExchangeAmount.SetCheckValue(true);
	m_wndInvoiceType.SetCheckValue(true);
	m_wndInvoiceType.LimitText(35);
	m_wndInvoiceTemplateNo.SetLimitText(35);
	m_wndInvoiceTemplateNo.SetCheckValue(true);
	m_wndInvoiceNo.SetLimitText(35);
	m_wndInvoiceNo.SetCheckValue(true);
	m_wndInvoiceDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInvoiceDate.SetCheckValue(true);
	m_wndInvoiceSigned.SetLimitText(35);
	m_wndInvoiceSigned.SetCheckValue(true);


	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndInvoiceType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndInvoiceType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CFACashAdditionView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	//m_wndExchageRate.SetEvent(WE_CHANGE, _OnExchageRateChangeFnc);
	//m_wndExchageRate.SetEvent(WE_SETFOCUS, _OnExchageRateSetfocusFnc);
	//m_wndExchageRate.SetEvent(WE_KILLFOCUS, _OnExchageRateKillfocusFnc);
	m_wndExchageRate.SetEvent(WE_CHECKVALUE, _OnExchageRateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndExchangeAmount.SetEvent(WE_CHANGE, _OnExchangeAmountChangeFnc);
	//m_wndExchangeAmount.SetEvent(WE_SETFOCUS, _OnExchangeAmountSetfocusFnc);
	//m_wndExchangeAmount.SetEvent(WE_KILLFOCUS, _OnExchangeAmountKillfocusFnc);
	m_wndExchangeAmount.SetEvent(WE_CHECKVALUE, _OnExchangeAmountCheckValueFnc);
	m_wndInvoiceType.SetEvent(WE_SELENDOK, _OnInvoiceTypeSelendokFnc);
	//m_wndInvoiceType.SetEvent(WE_SETFOCUS, _OnInvoiceTypeSetfocusFnc);
	//m_wndInvoiceType.SetEvent(WE_KILLFOCUS, _OnInvoiceTypeKillfocusFnc);
	m_wndInvoiceType.SetEvent(WE_SELCHANGE, _OnInvoiceTypeSelectChangeFnc);
	m_wndInvoiceType.SetEvent(WE_LOADDATA, _OnInvoiceTypeLoadDataFnc);
	//m_wndInvoiceType.SetEvent(WE_ADDNEW, _OnInvoiceTypeAddNewFnc);
	//m_wndInvoiceTemplateNo.SetEvent(WE_CHANGE, _OnInvoiceTemplateNoChangeFnc);
	//m_wndInvoiceTemplateNo.SetEvent(WE_SETFOCUS, _OnInvoiceTemplateNoSetfocusFnc);
	//m_wndInvoiceTemplateNo.SetEvent(WE_KILLFOCUS, _OnInvoiceTemplateNoKillfocusFnc);
	m_wndInvoiceTemplateNo.SetEvent(WE_CHECKVALUE, _OnInvoiceTemplateNoCheckValueFnc);
	//m_wndInvoiceNo.SetEvent(WE_CHANGE, _OnInvoiceNoChangeFnc);
	//m_wndInvoiceNo.SetEvent(WE_SETFOCUS, _OnInvoiceNoSetfocusFnc);
	//m_wndInvoiceNo.SetEvent(WE_KILLFOCUS, _OnInvoiceNoKillfocusFnc);
	m_wndInvoiceNo.SetEvent(WE_CHECKVALUE, _OnInvoiceNoCheckValueFnc);
	//m_wndInvoiceDate.SetEvent(WE_CHANGE, _OnInvoiceDateChangeFnc);
	//m_wndInvoiceDate.SetEvent(WE_SETFOCUS, _OnInvoiceDateSetfocusFnc);
	//m_wndInvoiceDate.SetEvent(WE_KILLFOCUS, _OnInvoiceDateKillfocusFnc);
	m_wndInvoiceDate.SetEvent(WE_CHECKVALUE, _OnInvoiceDateCheckValueFnc);
	//m_wndInvoiceSigned.SetEvent(WE_CHANGE, _OnInvoiceSignedChangeFnc);
	//m_wndInvoiceSigned.SetEvent(WE_SETFOCUS, _OnInvoiceSignedSetfocusFnc);
	//m_wndInvoiceSigned.SetEvent(WE_KILLFOCUS, _OnInvoiceSignedKillfocusFnc);
	m_wndInvoiceSigned.SetEvent(WE_CHECKVALUE, _OnInvoiceSignedCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddFACashAdditionViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFACashAdditionViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFACashAdditionViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFACashAdditionViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFACashAdditionViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CFACashAdditionView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_Text(pDX, m_wndExchageRate.GetDlgCtrlID(), m_nExchageRate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndExchangeAmount.GetDlgCtrlID(), m_nExchangeAmount);
	DDX_TextEx(pDX, m_wndInvoiceType.GetDlgCtrlID(), m_szInvoiceTypeKey);
	DDX_Text(pDX, m_wndInvoiceTemplateNo.GetDlgCtrlID(), m_szInvoiceTemplateNo);
	DDX_Text(pDX, m_wndInvoiceNo.GetDlgCtrlID(), m_szInvoiceNo);
	DDX_TextEx(pDX, m_wndInvoiceDate.GetDlgCtrlID(), m_szInvoiceDate);
	DDX_Text(pDX, m_wndInvoiceSigned.GetDlgCtrlID(), m_szInvoiceSigned);

}
void CFACashAdditionView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFACashAdditionView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFACashAdditionView::SetDefaultValues(){

	m_szCurrencyKey.Empty();
	m_nExchageRate=0;
	m_nAmount=0;
	m_nExchangeAmount=0;
	m_szInvoiceTypeKey.Empty();
	m_szInvoiceTemplateNo.Empty();
	m_szInvoiceNo.Empty();
	m_szInvoiceDate.Empty();
	m_szInvoiceSigned.Empty();

}
int CFACashAdditionView::SetMode(int nMode){
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
void CFACashAdditionView::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFACashAdditionView::OnCurrencySelendok(){
	 
}
/*void CFACashAdditionView::OnCurrencySetfocus(){
	
}*/
/*void CFACashAdditionView::OnCurrencyKillfocus(){
	
}*/
long CFACashAdditionView::OnCurrencyLoadData(){
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
/*void CFACashAdditionView::OnCurrencyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFACashAdditionView::OnExchageRateChange(){
	
} */
/*void CFACashAdditionView::OnExchageRateSetfocus(){
	
} */
/*void CFACashAdditionView::OnExchageRateKillfocus(){
	
} */
int CFACashAdditionView::OnExchageRateCheckValue(){
	return 0;
} 
/*void CFACashAdditionView::OnAmountChange(){
	
} */
/*void CFACashAdditionView::OnAmountSetfocus(){
	
} */
/*void CFACashAdditionView::OnAmountKillfocus(){
	
} */
int CFACashAdditionView::OnAmountCheckValue(){
	return 0;
} 
/*void CFACashAdditionView::OnExchangeAmountChange(){
	
} */
/*void CFACashAdditionView::OnExchangeAmountSetfocus(){
	
} */
/*void CFACashAdditionView::OnExchangeAmountKillfocus(){
	
} */
int CFACashAdditionView::OnExchangeAmountCheckValue(){
	return 0;
} 
void CFACashAdditionView::OnInvoiceTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFACashAdditionView::OnInvoiceTypeSelendok(){
	 
}
/*void CFACashAdditionView::OnInvoiceTypeSetfocus(){
	
}*/
/*void CFACashAdditionView::OnInvoiceTypeKillfocus(){
	
}*/
long CFACashAdditionView::OnInvoiceTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndInvoiceType.IsSearchKey() && !m_szInvoiceTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szInvoiceTypeKey
};
	m_wndInvoiceType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndInvoiceType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CFACashAdditionView::OnInvoiceTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFACashAdditionView::OnInvoiceTemplateNoChange(){
	
} */
/*void CFACashAdditionView::OnInvoiceTemplateNoSetfocus(){
	
} */
/*void CFACashAdditionView::OnInvoiceTemplateNoKillfocus(){
	
} */
int CFACashAdditionView::OnInvoiceTemplateNoCheckValue(){
	return 0;
} 
/*void CFACashAdditionView::OnInvoiceNoChange(){
	
} */
/*void CFACashAdditionView::OnInvoiceNoSetfocus(){
	
} */
/*void CFACashAdditionView::OnInvoiceNoKillfocus(){
	
} */
int CFACashAdditionView::OnInvoiceNoCheckValue(){
	return 0;
} 
/*void CFACashAdditionView::OnInvoiceDateChange(){
	
} */
/*void CFACashAdditionView::OnInvoiceDateSetfocus(){
	
} */
/*void CFACashAdditionView::OnInvoiceDateKillfocus(){
	
} */
int CFACashAdditionView::OnInvoiceDateCheckValue(){
	return 0;
} 
/*void CFACashAdditionView::OnInvoiceSignedChange(){
	
} */
/*void CFACashAdditionView::OnInvoiceSignedSetfocus(){
	
} */
/*void CFACashAdditionView::OnInvoiceSignedKillfocus(){
	
} */
int CFACashAdditionView::OnInvoiceSignedCheckValue(){
	return 0;
} 
int CFACashAdditionView::OnAddFACashAdditionView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFACashAdditionView::OnEditFACashAdditionView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFACashAdditionView::OnDeleteFACashAdditionView(){
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
 		OnCancelFACashAdditionView();
 	}
	return 0;
}
int CFACashAdditionView::OnSaveFACashAdditionView(){
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
 		//OnFACashAdditionViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFACashAdditionView::OnCancelFACashAdditionView(){
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
int CFACashAdditionView::OnFACashAdditionViewListLoadData(){
	return 0;
}
