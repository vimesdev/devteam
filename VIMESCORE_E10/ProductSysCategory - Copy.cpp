#include "ProductSysCategory.h"
#include "MainFrame_E10.h"

CString EscapeQuote(CString szString){
	CString szData = szString;
	szData.Replace(_T("'"), _T("''"));
	return szData;
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductSysCategory*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductSysCategory*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSysCategory*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnListDeleteItem();
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnListCheckAll();
} 
static int _OnListUnCheckAllFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnListUnCheckAll();
} 

static void _OnNameVimesSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductSysCategory* )pWnd)->OnNameVimesSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameVimesSelendokFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameVimesSelendok();
}
/*static void _OnNameVimesSetfocusFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameVimesKillfocus();
}*/
/*static void _OnNameVimesKillfocusFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameVimesKillfocus();
}*/
static long _OnNameVimesLoadDataFnc(CWnd *pWnd){
	return ((CProductSysCategory *)pWnd)->OnNameVimesLoadData();
}
/*static void _OnNameVimesAddNewFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameVimesAddNew();
}*/
static void _OnMapSelectFnc(CWnd *pWnd){
	CProductSysCategory *pVw = (CProductSysCategory *)pWnd;
	pVw->OnMapSelect();
} 
static long _OnMapListLoadDataFnc(CWnd *pWnd){
	return ((CProductSysCategory*)pWnd)->OnMapListLoadData();
} 
static void _OnMapListDblClickFnc(CWnd *pWnd){
	((CProductSysCategory*)pWnd)->OnMapListDblClick();
} 
static void _OnMapListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSysCategory*)pWnd)->OnMapListSelectChange(nOldItem, nNewItem);
} 
static int _OnMapListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnMapListDeleteItem();
} 
static int _OnMapListDeleteAllItemFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnMapListDeleteAllItem();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductSysCategory *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductSysCategory *)pWnd)->OnNameCheckValue();
} 
static void _OnAutoMapSelectFnc(CWnd *pWnd){
	CProductSysCategory *pVw = (CProductSysCategory *)pWnd;
	pVw->OnAutoMapSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSysCategory *pVw = (CProductSysCategory *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnVimesSelectFnc(CWnd *pWnd){
	CProductSysCategory *pVw = (CProductSysCategory *)pWnd;
	pVw->OnVimesSelect();
} 
static int _OnAddProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnAddProductSysCategory();
} 
static int _OnEditProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnEditProductSysCategory();
} 
static int _OnDeleteProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnDeleteProductSysCategory();
} 
static int _OnSaveProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnSaveProductSysCategory();
} 
static int _OnCancelProductSysCategoryFnc(CWnd *pWnd){
	 return ((CProductSysCategory*)pWnd)->OnCancelProductSysCategory();
} 
CProductSysCategory::CProductSysCategory(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 970;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CProductSysCategory::~CProductSysCategory(){
}
void CProductSysCategory::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 505, 580); 
	m_wndList.SetCheckBox(true);
	m_wndVimes.Create(this, _T("Vimes"), 510, 85, 590, 110);
	m_wndVimes.SetHyperlink(true);
	m_wndNameVimes.Create(this,595, 85, 927, 110); 
	m_wndMap.Create(this, _T("+"), 932, 85, 962, 110);
	m_wndMapList.Create(this,510, 115, 961, 580); 
	m_wndExelLabel.Create(this, _T("Exel"), 510, 5, 590, 30);
	m_wndName.Create(this,595, 5, 961, 80); 
	m_wndAutoMap.Create(this, _T("Map Auto"), 795, 585, 875, 610);
	m_wndClose.Create(this, _T("Close"), 880, 585, 960, 610);

}
void CProductSysCategory::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndNameVimes.SetCheckValue(true);
	m_wndNameVimes.LimitText(35);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);

	m_wndNameVimes.InsertColumn(0, _T("ID"), CFMT_TEXT, 200);
	m_wndNameVimes.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_wndList.InsertColumn(0, _T("Name"), CFMT_TEXT, m_nSizeCol1);
	m_wndList.InsertColumn(1, _T("Name2"), CFMT_TEXT, m_nSizeCol2);


	m_wndMapList.InsertColumn(0, _T("Name"), CFMT_TEXT, 200);
	m_wndMapList.InsertColumn(1, _T("ID VIMES"), CFMT_TEXT, 100);
	m_wndMapList.InsertColumn(2, _T("Name VIMES"), CFMT_TEXT, 200);

}
void CProductSysCategory::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndList.AddEvent(2, _T("Check All"), _OnListCheckAllFnc);
	m_wndList.AddEvent(3, _T("Un Check All"), _OnListUnCheckAllFnc);
	m_wndNameVimes.SetEvent(WE_SELENDOK, _OnNameVimesSelendokFnc);
	//m_wndNameVimes.SetEvent(WE_SETFOCUS, _OnNameVimesSetfocusFnc);
	//m_wndNameVimes.SetEvent(WE_KILLFOCUS, _OnNameVimesKillfocusFnc);
	m_wndNameVimes.SetEvent(WE_SELCHANGE, _OnNameVimesSelectChangeFnc);
	m_wndNameVimes.SetEvent(WE_LOADDATA, _OnNameVimesLoadDataFnc);
	//m_wndNameVimes.SetEvent(WE_ADDNEW, _OnNameVimesAddNewFnc);
	m_wndMap.SetEvent(WE_CLICK, _OnMapSelectFnc);
	m_wndMapList.SetEvent(WE_SELCHANGE, _OnMapListSelectChangeFnc);
	m_wndMapList.SetEvent(WE_LOADDATA, _OnMapListLoadDataFnc);
	m_wndMapList.SetEvent(WE_DBLCLICK, _OnMapListDblClickFnc);
	m_wndMapList.AddEvent(1, _T("Delete"), _OnMapListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMapList.AddEvent(2, _T("Delete ALL"), _OnMapListDeleteAllItemFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAutoMap.SetEvent(WE_CLICK, _OnAutoMapSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndVimes.SetEvent(WE_CLICK, _OnVimesSelectFnc);
	//SetMode(VM_NONE);
	GetDataToScreen();

}
void CProductSysCategory::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndNameVimes.GetDlgCtrlID(), m_szNameVimesKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CProductSysCategory::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("NameVimes")] =  m_szNameVimesKey;
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("NameVimes")].GetValue(m_szNameVimesKey);
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CProductSysCategory::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
	OnMapListLoadData();

}
void CProductSysCategory::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductSysCategory::SetDefaultValues(){

	m_szNameVimesKey.Empty();
	m_szName.Empty();

}
int CProductSysCategory::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,2, -1);
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
		m_wndName.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CProductSysCategory::OnListDblClick(){
		int nCel = m_wndList.GetCurSel();
	m_wndList.SetCheck(nCel,true);
	
} 
void CProductSysCategory::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nCel = m_wndList.GetCurSel();
	CString tmpStr;
	if(m_nSizeCol2 >0)
		tmpStr = m_wndList.GetItemText(nCel,0) + _T("-") + m_wndList.GetItemText(nCel,1);
	else
		tmpStr = m_wndList.GetItemText(nCel,0);
	m_wndName.SetWindowText(tmpStr);
	m_szNameVimesKey.Empty();
} 
int CProductSysCategory::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
int CProductSysCategory::OnListCheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for(int i =0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i,true);
	}
	 return 0;
} 
int CProductSysCategory::OnListUnCheckAll(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	for(int i =0; i< m_wndList.GetItemCount(); i++)
	{
		m_wndList.SetCheck(i,false);
	}
	 return 0;
} 
long CProductSysCategory::OnListLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	if(m_szUpdateFiled == _T("ma_don_vi_tinh_bv"))
		szSQL.Format(_T("select distinct %s ,%s from m_product_import where gui_uid ='%s' and ( %s is null or %s =0) and don_gia >0 order by %s "),
			m_szFiled1,m_szFiled2,m_szGui_ID,m_szUpdateFiled,m_szUpdateFiled,m_szFiled1	);
	else
	szSQL.Format(_T("select distinct %s ,%s from m_product_import where gui_uid ='%s' and ( %s is null or length(trim(%s)) =0) and don_gia >0 order by %s "),
		m_szFiled1,m_szFiled2,m_szGui_ID,m_szUpdateFiled,m_szUpdateFiled,m_szFiled1	);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(m_szFiled1), 
			rs.GetValue(m_szFiled2), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CProductSysCategory::OnNameVimesSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductSysCategory::OnNameVimesSelendok(){
	 
}
/*void CProductSysCategory::OnNameVimesSetfocus(){
	
}*/
/*void CProductSysCategory::OnNameVimesKillfocus(){
	
}*/
long CProductSysCategory::OnNameVimesLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNameVimes.IsSearchKey() && !m_szNameVimesKey.IsEmpty()){
	 szWhere.Format(_T(" and %s='%s' "), m_szRefFiled_ID,m_szNameVimesKey);
	}
	if(m_szRefFiled_ID == _T("adp_partner_id"))
		szWhere.AppendFormat(_T(" and adp_org_id in ('%s','GL') "), pMF->GetModuleID());
	if(m_szRefFiled_ID == _T("adm_manufacture_id"))
		szWhere.AppendFormat(_T(" and adm_org_id in ('%s','GL') "), pMF->GetModuleID());
	
	m_wndNameVimes.DeleteAllItems(); 
	int nCount = 0;
	if(m_szUpdateFiled == _T("ma_hang_sx_bv"))
		szSQL.Format(_T("SELECT %s as id, %s||'-'||(select sc_name from sys_country where sc_id=adm_country_id and rownum <=1) as name  FROM %s WHERE 1=1 %s ORDER BY id "), m_szRefFiled_ID,m_szRefFiled_NAME,m_szTableRef, szWhere);
	else
		szSQL.Format(_T("SELECT %s as id, %s as name FROM %s WHERE 1=1 %s ORDER BY id "), m_szRefFiled_ID,m_szRefFiled_NAME,m_szTableRef, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNameVimes.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL
			);
		rs.MoveNext();
	}
	return nCount;

}
/*void CProductSysCategory::OnNameVimesAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductSysCategory::OnMapSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL;
	CRecord rs(&pMF->m_db);
	/*szSQL.Format(_T("Update %s set %s ='%s' where gui_uid ='%s' and %s ='%s' "),
				m_szTable, m_szUpdateFiled, m_szNameVimesKey, m_szGui_ID, m_szFiled1,m_szName);
	int nCount = rs.ExecSQL(szSQL);
	
		OnListLoadData();
		OnMapListLoadData();*/
		
	int nCel = m_wndList.GetCurSel();
	CString tmpStr;
	//tmpStr = m_wndList.GetItemText(nCel,0);
	//szSQL.Format(_T("Update %s set %s ='%s' where gui_uid ='%s' and %s ='%s' "),
	//			m_szTable, m_szUpdateFiled, m_szNameVimesKey, m_szGui_ID, m_szFiled1,tmpStr);
	//int nCount = rs.ExecSQL(szSQL);

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			tmpStr = m_wndList.GetItemText(i,0);
			szSQL.Format(_T("Update %s set %s ='%s' where gui_uid ='%s' and %s ='%s' "),
						m_szTable, m_szUpdateFiled, m_szNameVimesKey, m_szGui_ID, m_szFiled1,EscapeQuote(tmpStr));
				int nCount = rs.ExecSQL(szSQL);
		}
	}
	
		OnListLoadData();
		OnMapListLoadData();


	
	
} 
void CProductSysCategory::OnMapListDblClick(){
	
} 
void CProductSysCategory::OnMapListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductSysCategory::OnMapListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nCel = m_wndMapList.GetCurSel();
	CString tmpStr,szSQL;
	CRecord rs(&pMF->m_db);
	tmpStr = m_wndMapList.GetItemText(nCel,0);
	if(m_szUpdateFiled == _T("ma_don_vi_tinh_bv"))
		szSQL.Format(_T("Update %s set %s =0 where gui_uid ='%s' and %s ='%s' "),
						m_szTable, m_szUpdateFiled, m_szGui_ID, m_szFiled1,EscapeQuote(tmpStr));
	else
	szSQL.Format(_T("Update %s set %s ='' where gui_uid ='%s' and %s ='%s' "),
						m_szTable, m_szUpdateFiled, m_szGui_ID, m_szFiled1,EscapeQuote(tmpStr));
	int nCount = rs.ExecSQL(szSQL);
	OnListLoadData();
	OnMapListLoadData();

	 return 0;
} 

int CProductSysCategory::OnMapListDeleteAllItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//int nCel = m_wndMapList.GetCurSel();
	CString tmpStr,szSQL;
	CRecord rs(&pMF->m_db);
	for( int i=0; i < m_wndMapList.GetItemCount(); i++)
	{
		tmpStr = m_wndMapList.GetItemText(i,0);
		if(m_szUpdateFiled == _T("ma_don_vi_tinh_bv"))
			szSQL.Format(_T("Update %s set %s =0 where gui_uid ='%s' and %s ='%s' "),
							m_szTable, m_szUpdateFiled, m_szGui_ID, m_szFiled1,EscapeQuote(tmpStr));
		else
			szSQL.Format(_T("Update %s set %s ='' where gui_uid ='%s' and %s ='%s' "),
							m_szTable, m_szUpdateFiled, m_szGui_ID, m_szFiled1,EscapeQuote(tmpStr));
		int nCount = rs.ExecSQL(szSQL);
	}
	OnListLoadData();
	OnMapListLoadData();

	 return 0;
} 
long CProductSysCategory::OnMapListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndMapList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	if(m_szUpdateFiled == _T("ma_don_vi_tinh_bv"))
	szSQL.Format(_T("select distinct %s, %s from m_product_import where gui_uid ='%s' ") \
					_T(" and ( %s is not null and %s > 0) and don_gia >0 order by %s "),
			m_szFiled1,m_szUpdateFiled,m_szGui_ID,m_szUpdateFiled,m_szUpdateFiled,m_szFiled1);
	else
			szSQL.Format(_T("select distinct %s, %s from m_product_import where gui_uid ='%s' ") \
				_T(" and ( %s is not null and length(trim(%s)) > 0) and don_gia >0 order by %s "),
		m_szFiled1,m_szUpdateFiled,m_szGui_ID,m_szUpdateFiled,m_szUpdateFiled,m_szFiled1);

	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapList.AddItems(
			rs.GetValue(m_szFiled1), 
			rs.GetValue(m_szUpdateFiled), 
			rs.GetValue(_T("NameVIMES")), NULL);
		rs.MoveNext();
	}
	m_wndMapList.EndLoad(); 
	return nCount;
	

}
/*void CProductSysCategory::OnNameChange(){
	
} */
/*void CProductSysCategory::OnNameSetfocus(){
	
} */
/*void CProductSysCategory::OnNameKillfocus(){
	
} */
int CProductSysCategory::OnNameCheckValue(){
	return 0;
} 
void CProductSysCategory::OnAutoMapSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	// kiem tra xem dang là map gì thì b?t d?u làm map auto
 	CString szSQL;
	szSQL.Format(_T("m_product_import_automap('%s','%s','%s','%s','%s','%s','%s') "), m_szTable,m_szFiled1,m_szUpdateFiled,m_szTableRef,m_szRefFiled_NAME,m_szRefFiled_ID,m_szGui_ID);
	pMF->ExecDML(szSQL);
	OnListLoadData();
	OnMapListLoadData();

	
} 
void CProductSysCategory::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();	
} 
int CProductSysCategory::OnAddProductSysCategory(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSysCategory::OnEditProductSysCategory(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSysCategory::OnDeleteProductSysCategory(){
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
 		OnCancelProductSysCategory();
 	}
	return 0;
}
int CProductSysCategory::OnSaveProductSysCategory(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnProductSysCategoryListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSysCategory::OnCancelProductSysCategory(){
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
int CProductSysCategory::OnProductSysCategoryListLoadData(){
	return 0;
}
#include "AdBusinessPartnerDialog.h"
#include "AdManufactureDialog.h"
#include "AdUOMDialog.h"
void CProductSysCategory::OnVimesSelect()
{
	if(m_szTableRef == _T("ad_partner"))
	{
		CAdBusinessPartnerDialog  dlg(this,VM_ADD);
		dlg.DoModal();
	}
	if(m_szTableRef == _T("ad_manufacture"))
	{
		CAdManufactureDialog  dlg(this,VM_ADD);
		dlg.DoModal();
	}

	if(m_szTableRef == _T("ad_uom"))
	{
		CAdUOMDialog  dlg(this,VM_ADD);
		dlg.DoModal();
	}

	
}