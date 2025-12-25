#include "AdPriceListPopup.h"
#include "MainFrame_E10.h"
#include "AdPriceList.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceListPopup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceListPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnCurrencySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceListPopup* )pWnd)->OnCurrencySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCurrencySelendokFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnCurrencySelendok();
}
/*static void _OnCurrencySetfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnCurrencyKillfocus();
}*/
/*static void _OnCurrencyKillfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnCurrencyKillfocus();
}*/
static long _OnCurrencyLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceListPopup *)pWnd)->OnCurrencyLoadData();
}
/*static void _OnCurrencyAddNewFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnCurrencyAddNew();
}*/
static void _OnPriceSchemaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceListPopup* )pWnd)->OnPriceSchemaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPriceSchemaSelendokFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnPriceSchemaSelendok();
}
/*static void _OnPriceSchemaSetfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnPriceSchemaKillfocus();
}*/
/*static void _OnPriceSchemaKillfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnPriceSchemaKillfocus();
}*/
static long _OnPriceSchemaLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceListPopup *)pWnd)->OnPriceSchemaLoadData();
}
/*static void _OnPriceSchemaAddNewFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnPriceSchemaAddNew();
}*/
static void _OnBasePriceListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdPriceListPopup* )pWnd)->OnBasePriceListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBasePriceListSelendokFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnBasePriceListSelendok();
}
/*static void _OnBasePriceListSetfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnBasePriceListKillfocus();
}*/
/*static void _OnBasePriceListKillfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnBasePriceListKillfocus();
}*/
static long _OnBasePriceListLoadDataFnc(CWnd *pWnd){
	return ((CAdPriceListPopup *)pWnd)->OnBasePriceListLoadData();
}
/*static void _OnBasePriceListAddNewFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnBasePriceListAddNew();
}*/
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CAdPriceListPopup *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CAdPriceListPopup *)pWnd)->OnStartDateCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CAdPriceListPopup*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdPriceListPopup *pVw = (CAdPriceListPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCreatePriceListSelectFnc(CWnd *pWnd){
	CAdPriceListPopup *pVw = (CAdPriceListPopup *)pWnd;
	pVw->OnCreatePriceListSelect();
} 
static int _OnAddAdPriceListPopupFnc(CWnd *pWnd){
	 return ((CAdPriceListPopup*)pWnd)->OnAddAdPriceListPopup();
} 
static int _OnEditAdPriceListPopupFnc(CWnd *pWnd){
	 return ((CAdPriceListPopup*)pWnd)->OnEditAdPriceListPopup();
} 
static int _OnDeleteAdPriceListPopupFnc(CWnd *pWnd){
	 return ((CAdPriceListPopup*)pWnd)->OnDeleteAdPriceListPopup();
} 
static int _OnSaveAdPriceListPopupFnc(CWnd *pWnd){
	 return ((CAdPriceListPopup*)pWnd)->OnSaveAdPriceListPopup();
} 
static int _OnCancelAdPriceListPopupFnc(CWnd *pWnd){
	 return ((CAdPriceListPopup*)pWnd)->OnCancelAdPriceListPopup();
} 
CAdPriceListPopup::CAdPriceListPopup(){
	SetAutoClose(false);
	m_nDlgWidth = 785;
	m_nDlgHeight = 140;
	SetDefaultValues();
}
CAdPriceListPopup::CAdPriceListPopup(CWnd *pParent):
CGuiPopup(pParent){
	SetAutoClose(false);
	m_nDlgWidth = 785;
	m_nDlgHeight = 140;
	SetDefaultValues();
}
CAdPriceListPopup::~CAdPriceListPopup(){
}
void CAdPriceListPopup::OnCreateComponents(){
	m_wndEntry.Create(this, _T("Entry"), 0, 0, 785, 140);
	m_wndNameLabel.Create(this, _T("Name"), 5, 25, 85, 50);
	m_wndName.Create(this,90, 25, 350, 50); 
	m_wndCurrencyLabel.Create(this, _T("Currency"), 355, 25, 435, 50);
	m_wndCurrency.Create(this,440, 25, 585, 50); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 590, 25, 670, 50);
	m_wndStartDate.Create(this,675, 25, 780, 50); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 55, 85, 80);
	m_wndDescription.Create(this,90, 55, 780, 80); 
	m_wndBasePriceListLabel.Create(this, _T("Base Price List"), 5, 85, 85, 110);
	m_wndBasePriceList.Create(this,90, 85, 350, 110); 
	m_wndPriceSchemaLabel.Create(this, _T("Price Schema"), 355, 85, 435, 110);
	m_wndPriceSchema.Create(this,440, 85, 780, 110); 
	m_wndActive.Create(this, _T("Active"), 5, 115, 85, 140);
	m_wndCreatePriceList.Create(this, _T("&Create Price List"), 595, 115, 695, 140);
	m_wndSave.Create(this, _T("&Save"), 700, 115, 780, 140);


}
void CAdPriceListPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndEntry.ModifyStyle(WS_BORDER, 0);
	m_wndName.SetLimitText(65);
	m_wndName.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	//m_wndDescription.SetCheckValue(true);
	m_wndCurrency.SetCheckValue(true);
	m_wndCurrency.LimitText(3);
	//m_wndPriceSchema.SetCheckValue(true);
	m_wndPriceSchema.LimitText(32);
	//m_wndBasePriceList.SetCheckValue(true);
	m_wndBasePriceList.LimitText(32);
	//m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(true);


	m_wndCurrency.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndCurrency.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndPriceSchema.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndPriceSchema.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndBasePriceList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndBasePriceList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_ad_price_listTbl.SetTableName(_T("ad_price_list"));
	m_ad_price_listTbl.AddField(_T("adpl_price_list_id"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_client_id"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_org_id"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_user_id"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_createdby"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_createddate"), dfDateTime); 
	m_ad_price_listTbl.AddField(_T("adpl_updatedby"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_updateddate"), dfDateTime); 
	m_ad_price_listTbl.AddField(_T("adpl_name"), dfText, 65); 
	m_ad_price_listTbl.AddField(_T("adpl_description"), dfText, 254); 
	m_ad_price_listTbl.AddField(_T("adpl_currency_id"), dfText, 3); 
	m_ad_price_listTbl.AddField(_T("adpl_price_schema_id"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_base_price_list_id"), dfText, 32); 
	m_ad_price_listTbl.AddField(_T("adpl_startdate"), dfDate); 
	m_ad_price_listTbl.AddField(_T("adpl_issale"), dfText, 1); 
	m_ad_price_listTbl.AddField(_T("adpl_istaxincluded"), dfText, 1); 
	m_ad_price_listTbl.AddField(_T("adpl_isdefault"), dfText, 1); 
	m_ad_price_listTbl.AddField(_T("adpl_isactive"), dfText, 1); 

}
void CAdPriceListPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndCurrency.SetEvent(WE_SELENDOK, _OnCurrencySelendokFnc);
	//m_wndCurrency.SetEvent(WE_SETFOCUS, _OnCurrencySetfocusFnc);
	//m_wndCurrency.SetEvent(WE_KILLFOCUS, _OnCurrencyKillfocusFnc);
	m_wndCurrency.SetEvent(WE_SELCHANGE, _OnCurrencySelectChangeFnc);
	m_wndCurrency.SetEvent(WE_LOADDATA, _OnCurrencyLoadDataFnc);
	//m_wndCurrency.SetEvent(WE_ADDNEW, _OnCurrencyAddNewFnc);
	m_wndPriceSchema.SetEvent(WE_SELENDOK, _OnPriceSchemaSelendokFnc);
	//m_wndPriceSchema.SetEvent(WE_SETFOCUS, _OnPriceSchemaSetfocusFnc);
	//m_wndPriceSchema.SetEvent(WE_KILLFOCUS, _OnPriceSchemaKillfocusFnc);
	m_wndPriceSchema.SetEvent(WE_SELCHANGE, _OnPriceSchemaSelectChangeFnc);
	m_wndPriceSchema.SetEvent(WE_LOADDATA, _OnPriceSchemaLoadDataFnc);
	//m_wndPriceSchema.SetEvent(WE_ADDNEW, _OnPriceSchemaAddNewFnc);
	m_wndBasePriceList.SetEvent(WE_SELENDOK, _OnBasePriceListSelendokFnc);
	//m_wndBasePriceList.SetEvent(WE_SETFOCUS, _OnBasePriceListSetfocusFnc);
	//m_wndBasePriceList.SetEvent(WE_KILLFOCUS, _OnBasePriceListKillfocusFnc);
	m_wndBasePriceList.SetEvent(WE_SELCHANGE, _OnBasePriceListSelectChangeFnc);
	m_wndBasePriceList.SetEvent(WE_LOADDATA, _OnBasePriceListLoadDataFnc);
	//m_wndBasePriceList.SetEvent(WE_ADDNEW, _OnBasePriceListAddNewFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCreatePriceList.SetEvent(WE_CLICK, _OnCreatePriceListSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();
}
void CAdPriceListPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndCurrency.GetDlgCtrlID(), m_szCurrencyKey);
	DDX_TextEx(pDX, m_wndPriceSchema.GetDlgCtrlID(), m_szPriceSchemaKey);
	DDX_TextEx(pDX, m_wndBasePriceList.GetDlgCtrlID(), m_szBasePriceListKey);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CAdPriceListPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM ad_price_list WHERE adpl_price_list_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString szActive;
		rs.GetValue(_T("adpl_name"), m_szName);
		rs.GetValue(_T("adpl_description"), m_szDescription);
		rs.GetValue(_T("adpl_currency_id"), m_szCurrencyKey);
		rs.GetValue(_T("adpl_price_schema_id"), m_szPriceSchemaKey);
		rs.GetValue(_T("adpl_base_price_list_id"), m_szBasePriceListKey);
		rs.GetValue(_T("adpl_startdate"), m_szStartDate);
		rs.GetValue(_T("adpl_isactive"), szActive);
		if (szActive == _T("Y"))
			m_bActive = true;
		else
			m_bActive = false;
		SetMode(VM_EDIT);
	}

}
void CAdPriceListPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_ad_price_listTbl.SetValue(_T("adpl_createdby"), pMF->GetCurrentUser());
	m_ad_price_listTbl.SetValue(_T("adpl_createddate"), pMF->GetSysDateTime());
	m_ad_price_listTbl.SetValue(_T("adpl_updatedby"), pMF->GetCurrentUser());
	m_ad_price_listTbl.SetValue(_T("adpl_updateddate"), pMF->GetSysDateTime());
	m_ad_price_listTbl.SetValue(_T("adpl_name"), m_szName);
	m_ad_price_listTbl.SetValue(_T("adpl_description"), m_szDescription);
	m_ad_price_listTbl.SetValue(_T("adpl_currency_id"), m_szCurrencyKey);
	m_ad_price_listTbl.SetValue(_T("adpl_price_schema_id"), m_szPriceSchemaKey);
	m_ad_price_listTbl.SetValue(_T("adpl_base_price_list_id"), m_szBasePriceListKey);
	m_ad_price_listTbl.SetValue(_T("adpl_startdate"), m_szStartDate);
	m_ad_price_listTbl.SetValue(_T("adpl_isactive"), m_bActive?_T("Y"):_T("N"));

}
void CAdPriceListPopup::SetDefaultValues(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szName.Empty();
	m_szDescription.Empty();
	m_szCurrencyKey.Empty();
	m_szPriceSchemaKey.Empty();
	m_szBasePriceListKey.Empty();
	m_szStartDate = _T("2013/06/08");
	m_bActive=TRUE;

}
int CAdPriceListPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndName.SetFocus();
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndName.SetFocus();
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
		m_wndSave.EnableWindow(TRUE);
		m_wndCreatePriceList.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CAdPriceListPopup::OnNameChange(){
	
} */
/*void CAdPriceListPopup::OnNameSetfocus(){
	
} */
/*void CAdPriceListPopup::OnNameKillfocus(){
	
} */
int CAdPriceListPopup::OnNameCheckValue(){
	if (GetMode() == VM_EDIT)
		return 0;
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM ad_price_list WHERE adpl_name='%s' "), m_szName);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		m_wndName.SetToolTipMessage(_T("Please use a different name from this"));
		return -1;
	}
	return 0;
} 
/*void CAdPriceListPopup::OnDescriptionChange(){
	
} */
/*void CAdPriceListPopup::OnDescriptionSetfocus(){
	
} */
/*void CAdPriceListPopup::OnDescriptionKillfocus(){
	
} */
int CAdPriceListPopup::OnDescriptionCheckValue(){
	return 0;
} 
void CAdPriceListPopup::OnCurrencySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceListPopup::OnCurrencySelendok(){
	 
}
/*void CAdPriceListPopup::OnCurrencySetfocus(){
	
}*/
/*void CAdPriceListPopup::OnCurrencyKillfocus(){
	
}*/
long CAdPriceListPopup::OnCurrencyLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadCurrencyList(&m_wndCurrency, m_szCurrencyKey);
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
/*void CAdPriceListPopup::OnCurrencyAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdPriceListPopup::OnPriceSchemaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceListPopup::OnPriceSchemaSelendok(){
	 
}
/*void CAdPriceListPopup::OnPriceSchemaSetfocus(){
	
}*/
/*void CAdPriceListPopup::OnPriceSchemaKillfocus(){
	
}*/
long CAdPriceListPopup::OnPriceSchemaLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPriceSchema.IsSearchKey() && !m_szPriceSchemaKey.IsEmpty()){
		szWhere.Format(_T(" and adps_price_schema_id='%s' "), m_szPriceSchemaKey);
	};
	m_wndPriceSchema.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adps_price_schema_id as id, adps_name as name FROM ad_price_schema WHERE 1=1 %s ORDER BY adps_price_schema_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceSchema.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdPriceListPopup::OnPriceSchemaAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdPriceListPopup::OnBasePriceListSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdPriceListPopup::OnBasePriceListSelendok(){
	 
}
/*void CAdPriceListPopup::OnBasePriceListSetfocus(){
	
}*/
/*void CAdPriceListPopup::OnBasePriceListKillfocus(){
	
}*/
long CAdPriceListPopup::OnBasePriceListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBasePriceList.IsSearchKey() && !m_szBasePriceListKey.IsEmpty()){
		szWhere.Format(_T(" and adpl_price_list_id='%s' "), m_szBasePriceListKey);
	};
	m_wndBasePriceList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adpl_price_list_id as id, adpl_name as name FROM ad_price_list WHERE 1=1 %s ORDER BY adpl_price_list_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndBasePriceList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdPriceListPopup::OnBasePriceListAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdPriceListPopup::OnStartDateChange(){
	
} */
/*void CAdPriceListPopup::OnStartDateSetfocus(){
	
} */
/*void CAdPriceListPopup::OnStartDateKillfocus(){
	
} */
int CAdPriceListPopup::OnStartDateCheckValue(){
	return 0;
} 
void CAdPriceListPopup::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CAdPriceListPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdPriceListPopup();
} 
void CAdPriceListPopup::OnCreatePriceListSelect(){
	UpdateData(true);
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (m_szBasePriceListKey.IsEmpty())
	{
		m_wndBasePriceList.SetFocus();
		return;
	}
	if (m_szPriceSchemaKey.IsEmpty())
	{
		m_wndPriceSchema.SetFocus();
		return;
	}
	pMF->ExecDML(_T("fa_pricelist_auto_create()"));
} 
int CAdPriceListPopup::OnAddAdPriceListPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdPriceListPopup::OnEditAdPriceListPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdPriceListPopup::OnDeleteAdPriceListPopup(){
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
 		OnCancelAdPriceListPopup();
 	}
	return 0;
}
int CAdPriceListPopup::OnSaveAdPriceListPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szID;
	szSQL.Format(_T("get_uuid()"));
 	szID = pMF->ExecDML(szSQL);	
	m_ad_price_listTbl.SetValue(_T("adpl_price_list_id"), szID);
 	if(GetMode() == VM_ADD){
 		szSQL = m_ad_price_listTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE adpl_price_list_id = '%s'"), m_szID);
 		szSQL = m_ad_price_listTbl.GetUpdateSQL(_T("adpl_createdby,adpl_createddate, adpl_price_list_id"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		if (GetMode() == VM_ADD)
			SetMode(VM_ADD);
		else
			ClosePopup();
		((CAdPriceList*)GetParentWnd())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdPriceListPopup::OnCancelAdPriceListPopup(){
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
int CAdPriceListPopup::OnAdPriceListPopupListLoadData(){
	return 0;
}

void CAdPriceListPopup::ClosePopup(){
	CGuiPopup::ClosePopup();
	((CAdPriceList*)GetParentWnd())->SetMode(m_nMode);
}