#include "stdafx.h"
#include "UPDATEPTTT.h"
#include "HMSMainFrame.h"
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CUPDATEPTTT* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CUPDATEPTTT *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CUPDATEPTTT *)pWnd)->OnSearchCheckValue();
} 
static void _OnTangSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CUPDATEPTTT* )pWnd)->OnTangSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTangSelendokFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnTangSelendok();
}
/*static void _OnTangSetfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnTangKillfocus();
}*/
/*static void _OnTangKillfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnTangKillfocus();
}*/
static long _OnTangLoadDataFnc(CWnd *pWnd){
	return ((CUPDATEPTTT *)pWnd)->OnTangLoadData();
}
/*static void _OnTangAddNewFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnTangAddNew();
}*/
static void _OnFeeCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CUPDATEPTTT* )pWnd)->OnFeeCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeCategorySelendokFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnFeeCategorySelendok();
}
/*static void _OnFeeCategorySetfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnFeeCategoryKillfocus();
}*/
/*static void _OnFeeCategoryKillfocusFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnFeeCategoryKillfocus();
}*/
static long _OnFeeCategoryLoadDataFnc(CWnd *pWnd){
	return ((CUPDATEPTTT *)pWnd)->OnFeeCategoryLoadData();
}
/*static void _OnFeeCategoryAddNewFnc(CWnd *pWnd){
	((CUPDATEPTTT *)pWnd)->OnFeeCategoryAddNew();
}*/
static void _OnCheckedSelectFnc(CWnd *pWnd){
	 ((CUPDATEPTTT*)pWnd)->OnCheckedSelect();
}
static void _OnChecked2SelectFnc(CWnd *pWnd){
	((CUPDATEPTTT*)pWnd)->OnChecked2Select();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CUPDATEPTTT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CUPDATEPTTT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CUPDATEPTTT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CUPDATEPTTT*)pWnd)->OnListDeleteItem();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CUPDATEPTTT *pVw = (CUPDATEPTTT *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddUPDATEPTTTFnc(CWnd *pWnd){
	 return ((CUPDATEPTTT*)pWnd)->OnAddUPDATEPTTT();
} 
static int _OnEditUPDATEPTTTFnc(CWnd *pWnd){
	 return ((CUPDATEPTTT*)pWnd)->OnEditUPDATEPTTT();
} 
static int _OnDeleteUPDATEPTTTFnc(CWnd *pWnd){
	 return ((CUPDATEPTTT*)pWnd)->OnDeleteUPDATEPTTT();
} 
static int _OnSaveUPDATEPTTTFnc(CWnd *pWnd){
	 return ((CUPDATEPTTT*)pWnd)->OnSaveUPDATEPTTT();
} 
static int _OnCancelUPDATEPTTTFnc(CWnd *pWnd){
	 return ((CUPDATEPTTT*)pWnd)->OnCancelUPDATEPTTT();
} 
CUPDATEPTTT::CUPDATEPTTT(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CUPDATEPTTT::~CUPDATEPTTT(){
}
void CUPDATEPTTT::OnCreateComponents(){
	m_wndUpdatePTTT.Create(this, _T("Update PTTT"), 5, 5, 805, 445);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 30, 100, 55);
	m_wndGroup.Create(this,105, 30, 335, 55); 
	m_wndSearchLabel.Create(this, _T("Search"), 340, 30, 430, 55);
	m_wndSearch.Create(this,435, 30, 665, 55); 
	m_wndTangLabel.Create(this, _T("T\x1EA1ng"), 10, 60, 100, 85);
	m_wndTang.Create(this,105, 60, 335, 85); 
	m_wndFeeCategoryLabel.Create(this, _T("Nh\xF3m TT"), 340, 60, 430, 85);
	m_wndFeeCategory.Create(this,435, 60, 665, 85); 
	m_wndChecked.Create(this, _T("\x43h\x1B0\x61 ph\xE2n t\x1EA1ng"), 679, 30, 799, 55);
	m_wndChecked2.Create(this, _T("\x43h\x1B0\x61 ph\xE2n nh\xF3m TT"), 679, 60, 799, 85);
	m_wndList.Create(this,10, 90, 800, 440); 
	m_wndUpdate.Create(this, _T("Update"), 700, 450, 800, 475);

}
void CUPDATEPTTT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
// 	m_wndGroup.SetCheckValue(true);
// 	m_wndGroup.LimitText(1024);
// 	m_wndSearch.SetLimitText(1024);
// 	m_wndSearch.SetCheckValue(true);
// 	m_wndTang.SetCheckValue(true);
// 	m_wndTang.LimitText(35);
// 	m_wndFeeCategory.SetCheckValue(true);
// 	m_wndFeeCategory.LimitText(1024);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndTang.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndTang.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndFeeCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFeeCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Service Price"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(3, _T("Insurance Price"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Policy Price"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("T\x1EA1ng"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Nh\xF3m TT"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Apply Date"), CFMT_DATE, 100);
	m_wndList.InsertColumn(8, _T("T\x1EA1ng ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("Nh\xF3m TT ID"), CFMT_TEXT, 0);

}
void CUPDATEPTTT::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTang.SetEvent(WE_SELENDOK, _OnTangSelendokFnc);
	//m_wndTang.SetEvent(WE_SETFOCUS, _OnTangSetfocusFnc);
	//m_wndTang.SetEvent(WE_KILLFOCUS, _OnTangKillfocusFnc);
	m_wndTang.SetEvent(WE_SELCHANGE, _OnTangSelectChangeFnc);
	m_wndTang.SetEvent(WE_LOADDATA, _OnTangLoadDataFnc);
	//m_wndTang.SetEvent(WE_ADDNEW, _OnTangAddNewFnc);
	m_wndFeeCategory.SetEvent(WE_SELENDOK, _OnFeeCategorySelendokFnc);
	//m_wndFeeCategory.SetEvent(WE_SETFOCUS, _OnFeeCategorySetfocusFnc);
	//m_wndFeeCategory.SetEvent(WE_KILLFOCUS, _OnFeeCategoryKillfocusFnc);
	m_wndFeeCategory.SetEvent(WE_SELCHANGE, _OnFeeCategorySelectChangeFnc);
	m_wndFeeCategory.SetEvent(WE_LOADDATA, _OnFeeCategoryLoadDataFnc);
	//m_wndFeeCategory.SetEvent(WE_ADDNEW, _OnFeeCategoryAddNewFnc);
	m_wndChecked.SetEvent(WE_CLICK, _OnCheckedSelectFnc);
	m_wndChecked2.SetEvent(WE_CLICK, _OnChecked2SelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	SetMode(VM_EDIT);

}
void CUPDATEPTTT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndTang.GetDlgCtrlID(), m_szTangKey);
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_Check(pDX, m_wndChecked.GetDlgCtrlID(), m_bChecked);
	DDX_Check(pDX, m_wndChecked2.GetDlgCtrlID(), m_bChecked2);

}
void CUPDATEPTTT::UpdateJson(BOOL bSave){
	if(bSave)
	{

		m_jData[_T("Group")] =  m_szGroupKey;
		m_jData[_T("Search")] =  m_szSearch;
		m_jData[_T("Tang")] =  m_szTangKey;
		m_jData[_T("FeeCategory")] =  m_szFeeCategoryKey;
		m_jData[_T("Checked")] =  m_bChecked;
		m_jData[_T("Checked2")] =  m_bChecked2;
	}
	else
	{

		m_jData[_T("Group")].GetValue(m_szGroupKey);
		m_jData[_T("Search")].GetValue(m_szSearch);
		m_jData[_T("Tang")].GetValue(m_szTangKey);
		m_jData[_T("FeeCategory")].GetValue(m_szFeeCategoryKey);
		m_jData[_T("Checked")].GetValue(m_bChecked);
		m_jData[_T("Checked2")].GetValue(m_bChecked2);
	}

}
void CUPDATEPTTT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CUPDATEPTTT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CUPDATEPTTT::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szSearch.Empty();
	m_szTangKey.Empty();
	m_szFeeCategoryKey.Empty();
	m_bChecked=FALSE;
	m_bChecked2=FALSE;

}
int CUPDATEPTTT::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);
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
void CUPDATEPTTT::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();

} 
void CUPDATEPTTT::OnGroupSelendok(){
	 
}
/*void CUPDATEPTTT::OnGroupSetfocus(){
	
}*/
/*void CUPDATEPTTT::OnGroupKillfocus(){
	
}*/
long CUPDATEPTTT::OnGroupLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and hfg_id = '%s' "), m_szGroupKey);
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id AS id, hfg_name AS name FROM hms_fee_group WHERE hfg_id IN('B2100', 'B2200', 'B2300') %s ORDER BY hfg_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CUPDATEPTTT::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CUPDATEPTTT::OnTangSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CUPDATEPTTT::OnTangSelendok(){
	 
}
/*void CUPDATEPTTT::OnTangSetfocus(){
	
}*/
/*void CUPDATEPTTT::OnTangKillfocus(){
	
}*/
long CUPDATEPTTT::OnTangLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTang.IsSearchKey() && !m_szTangKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code = '%s' "), m_szTangKey);
};
	m_wndTang.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_vndesc IN ('XQuang') %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTang.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CUPDATEPTTT::OnTangAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CUPDATEPTTT::OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

} 
void CUPDATEPTTT::OnFeeCategorySelendok(){
	 
}
/*void CUPDATEPTTT::OnFeeCategorySetfocus(){
	
}*/
/*void CUPDATEPTTT::OnFeeCategoryKillfocus(){
	
}*/
long CUPDATEPTTT::OnFeeCategoryLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeCategory.IsSearchKey() && !m_szFeeCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code = '%s' "), m_szFeeCategoryKey);
};
	m_wndFeeCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_vndesc IN ('C8') %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CUPDATEPTTT::OnFeeCategoryAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CUPDATEPTTT::OnCheckedSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CUPDATEPTTT::OnChecked2Select(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
/*void CUPDATEPTTT::OnSearchChange(){
	
} */
/*void CUPDATEPTTT::OnSearchSetfocus(){
	
} */
/*void CUPDATEPTTT::OnSearchKillfocus(){
	
} */
int CUPDATEPTTT::OnSearchCheckValue(){
	OnListLoadData();
	return 0;
} 
void CUPDATEPTTT::OnListDblClick(){
	
} 
void CUPDATEPTTT::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_szFeeID = m_wndList.GetItemText(nNewItem, 0);
	m_szTangKey = m_wndList.GetItemText(nNewItem, 8);
	m_szFeeCategoryKey = m_wndList.GetItemText(nNewItem, 9);
	m_nCurItem = nNewItem;
	UpdateData(FALSE);

} 
int CUPDATEPTTT::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CUPDATEPTTT::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad();  
	int nCount = 0;

	if(m_bChecked)
		szWhere.AppendFormat(_T(" AND hfl_categoryid IS NULL"));

	if(m_bChecked2)
		szWhere.AppendFormat(_T(" AND hfl_index2 IS NULL"));

	if(!m_szSearch.IsEmpty())
		szWhere.AppendFormat(_T(" AND LOWER(hfl_name) LIKE (LOWER('%s%s%s'))"), _T("%"), m_szSearch, _T("%"));


	szSQL.Format(_T(" SELECT ") \
		_T(" hfl_feeid AS feeid,") \
		_T(" hfl_name AS feename,") \
		_T(" hfl_servprice AS servprice,") \
		_T(" hfl_insprice AS insprice,") \
		_T(" hfl_polprice AS polprice,") \
		_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_code= hfl_categoryid) AS tang,") \
		_T(" (SELECT ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_code= hfl_index2) AS categoryid,") \
		_T(" hfl_applydate AS applydate, hfl_categoryid, hfl_index2") \
		_T(" FROM hms_fee_list WHERE hfl_groupid = '%s' %s") \
		_T(" ORDER BY") \
		_T(" hfl_feeid,") \
		_T(" hfl_name,") \
		_T(" hfl_categoryid,") \
		_T(" hfl_applydate"), m_szGroupKey, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("feeid")), 
			rs.GetValue(_T("feename")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("polprice")), 
			rs.GetValue(_T("tang")), 
			rs.GetValue(_T("categoryid")), 
			rs.GetValue(_T("applydate")),
			rs.GetValue(_T("hfl_categoryid")),
			rs.GetValue(_T("hfl_index2")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CUPDATEPTTT::OnUpdateSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;

	szSQL.Format(_T("SELECT COUNT(*) FROM hms_fee_list WHERE hfl_feeid = '%s'"), m_szFeeID);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() == 0)
	{
		AfxMessageBox(_T("No Data."), MB_ICONASTERISK);
		return;
	}
	else
	{
		if(m_szFeeCategoryKey.IsEmpty())
		{
			ShowMessageBox(_T("\x43h\x1B0\x61 \x63h\x1ECDn Nh\xF3m TT"));
			m_wndFeeCategory.SetFocus();
		}
		else
		{
			szSQL.Format(_T("UPDATE hms_fee_list SET hfl_categoryid = '%s', hfl_index2 = '%s' WHERE hfl_feeid = '%s'"), m_szTangKey, m_szFeeCategoryKey, m_szFeeID);
			pMF->ExecSQL(szSQL);
			ShowMessageBox(_T("\x110\xE3 \x63\x1EADp nh\x1EADt!"));
			OnListLoadData();
			COLORREF crMask = RGB(66, 125, 244);
			m_wndList.SetCurSel(m_nCurItem);
			m_wndList.SetItemBkColor(m_nCurItem, crMask, true);	
		}
	}
} 
int CUPDATEPTTT::OnAddUPDATEPTTT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CUPDATEPTTT::OnEditUPDATEPTTT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CUPDATEPTTT::OnDeleteUPDATEPTTT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelUPDATEPTTT();
 	}
	return 0;
}
int CUPDATEPTTT::OnSaveUPDATEPTTT(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnUPDATEPTTTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CUPDATEPTTT::OnCancelUPDATEPTTT(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CUPDATEPTTT::OnUPDATEPTTTListLoadData(){
	return 0;
}
