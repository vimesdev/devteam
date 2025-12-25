#include "HMSServicePackageFoodOrderDialog.h"
#include "MainFrm.h"
static void _OnBreakfastSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageFoodOrderDialog* )pWnd)->OnBreakfastSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBreakfastSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnBreakfastSelendok();
}
/*static void _OnBreakfastSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnBreakfastKillfocus();
}*/
/*static void _OnBreakfastKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnBreakfastKillfocus();
}*/
static long _OnBreakfastLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFoodOrderDialog *)pWnd)->OnBreakfastLoadData();
}
/*static void _OnBreakfastAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnBreakfastAddNew();
}*/
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageFoodOrderDialog* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFoodOrderDialog *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnLunchAddNew();
}*/
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageFoodOrderDialog* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFoodOrderDialog *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog *)pWnd)->OnDinnerAddNew();
}*/
static void _OnMenuSelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnMenuSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageFoodOrderDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageFoodOrderDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageFoodOrderDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSServicePackageFoodOrderDialog *pVw = (CHMSServicePackageFoodOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnAddHMSServicePackageFoodOrderDialog();
} 
static int _OnEditHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnEditHMSServicePackageFoodOrderDialog();
} 
static int _OnDeleteHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnDeleteHMSServicePackageFoodOrderDialog();
} 
static int _OnSaveHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnSaveHMSServicePackageFoodOrderDialog();
} 
static int _OnCancelHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFoodOrderDialog*)pWnd)->OnCancelHMSServicePackageFoodOrderDialog();
} 
CHMSServicePackageFoodOrderDialog::CHMSServicePackageFoodOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSServicePackageFoodOrderDialog::~CHMSServicePackageFoodOrderDialog(){
}
void CHMSServicePackageFoodOrderDialog::OnCreateComponents(){
	m_wndBreakfast.Create(this,90, 4, 320, 29); 
	m_wndBreakfastLabel.Create(this, _T("Breakfast"), 5, 5, 85, 30);
	m_wndLunchLabel.Create(this, _T("Lunch"), 324, 5, 404, 30);
	m_wndLunch.Create(this,409, 5, 639, 30); 
	m_wndDinnerLabel.Create(this, _T("Dinner"), 644, 5, 724, 30);
	m_wndDinner.Create(this,729, 5, 929, 30); 
	m_wndMenu.Create(this, _T("..."), 934, 5, 959, 30);
	m_wndOrderList.Create(this,5, 35, 320, 570); 
	m_wndSelectedList.Create(this,325, 35, 959, 570); 
	m_wndMark.Create(this, _T("Mark [><]"), 5, 575, 85, 600);
	m_wndUnMark.Create(this, _T("UnMark [<>]"), 90, 575, 170, 600);
	m_wndAdd.Create(this, _T("&Add >>"), 239, 575, 319, 600);
	m_wndRemove.Create(this, _T("<< Remove"), 324, 575, 404, 600);
	m_wndApply.Create(this, _T("&Apply"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);

}
void CHMSServicePackageFoodOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBreakfast.SetCheckValue(true);
	m_wndBreakfast.LimitText(35);
	m_wndLunch.SetCheckValue(true);
	m_wndLunch.LimitText(35);
	m_wndDinner.SetCheckValue(true);
	m_wndDinner.LimitText(35);


	m_wndBreakfast.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndBreakfast.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);


	m_wndLunch.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndLunch.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);


	m_wndDinner.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDinner.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);


	m_wndOrderList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndOrderList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndOrderList.InsertColumn(2, _T("Room"), CFMT_NUMBER, 50);


	m_wndSelectedList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndSelectedList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndSelectedList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndSelectedList.InsertColumn(3, _T("Yob"), CFMT_NUMBER, 50);
	m_wndSelectedList.InsertColumn(4, _T("Room"), CFMT_NUMBER, 50);
	m_wndSelectedList.InsertColumn(5, _T("Description"), CFMT_TEXT, 250);

}
void CHMSServicePackageFoodOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBreakfast.SetEvent(WE_SELENDOK, _OnBreakfastSelendokFnc);
	//m_wndBreakfast.SetEvent(WE_SETFOCUS, _OnBreakfastSetfocusFnc);
	//m_wndBreakfast.SetEvent(WE_KILLFOCUS, _OnBreakfastKillfocusFnc);
	m_wndBreakfast.SetEvent(WE_SELCHANGE, _OnBreakfastSelectChangeFnc);
	m_wndBreakfast.SetEvent(WE_LOADDATA, _OnBreakfastLoadDataFnc);
	//m_wndBreakfast.SetEvent(WE_ADDNEW, _OnBreakfastAddNewFnc);
	m_wndLunch.SetEvent(WE_SELENDOK, _OnLunchSelendokFnc);
	//m_wndLunch.SetEvent(WE_SETFOCUS, _OnLunchSetfocusFnc);
	//m_wndLunch.SetEvent(WE_KILLFOCUS, _OnLunchKillfocusFnc);
	m_wndLunch.SetEvent(WE_SELCHANGE, _OnLunchSelectChangeFnc);
	m_wndLunch.SetEvent(WE_LOADDATA, _OnLunchLoadDataFnc);
	//m_wndLunch.SetEvent(WE_ADDNEW, _OnLunchAddNewFnc);
	m_wndDinner.SetEvent(WE_SELENDOK, _OnDinnerSelendokFnc);
	//m_wndDinner.SetEvent(WE_SETFOCUS, _OnDinnerSetfocusFnc);
	//m_wndDinner.SetEvent(WE_KILLFOCUS, _OnDinnerKillfocusFnc);
	m_wndDinner.SetEvent(WE_SELCHANGE, _OnDinnerSelectChangeFnc);
	m_wndDinner.SetEvent(WE_LOADDATA, _OnDinnerLoadDataFnc);
	//m_wndDinner.SetEvent(WE_ADDNEW, _OnDinnerAddNewFnc);
	m_wndMenu.SetEvent(WE_CLICK, _OnMenuSelectFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_VIEW);
	OnOrderListLoadData();
	m_arDocuments.RemoveAll();

}
void CHMSServicePackageFoodOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndBreakfast.GetDlgCtrlID(), m_szBreakfastKey);
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);

}
void CHMSServicePackageFoodOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Breakfast")] =  m_szBreakfastKey;
	m_jData[_T("Lunch")] =  m_szLunchKey;
	m_jData[_T("Dinner")] =  m_szDinnerKey;
	}
	else
	{
			
	m_jData[_T("Breakfast")].GetValue(m_szBreakfastKey);
	m_jData[_T("Lunch")].GetValue(m_szLunchKey);
	m_jData[_T("Dinner")].GetValue(m_szDinnerKey);
	}

}
void CHMSServicePackageFoodOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSServicePackageFoodOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageFoodOrderDialog::SetDefaultValues(){

	m_szBreakfastKey.Empty();
	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();

}
int CHMSServicePackageFoodOrderDialog::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(FALSE,-1);
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
void CHMSServicePackageFoodOrderDialog::OnBreakfastSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnBreakfastSelendok(){
	 
}
/*void CHMSServicePackageFoodOrderDialog::OnBreakfastSetfocus(){
	
}*/
/*void CHMSServicePackageFoodOrderDialog::OnBreakfastKillfocus(){
	
}*/
long CHMSServicePackageFoodOrderDialog::OnBreakfastLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBreakfast.IsSearchKey() && !m_szBreakfastKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szBreakfastKey);
	};

	szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' and hfl_index2='sang' "));

	m_wndBreakfast.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_idx,hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T("	hfl_categoryid as categoryid, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);


_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndBreakfast.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			
			rs.GetValue(_T("categoryid")),
			NULL);
		rs.MoveNext();
	}
	return 0;
}
/*void CHMSServicePackageFoodOrderDialog::OnBreakfastAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSServicePackageFoodOrderDialog::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnLunchSelendok(){
	 
}
/*void CHMSServicePackageFoodOrderDialog::OnLunchSetfocus(){
	
}*/
/*void CHMSServicePackageFoodOrderDialog::OnLunchKillfocus(){
	
}*/
long CHMSServicePackageFoodOrderDialog::OnLunchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLunch.IsSearchKey() && !m_szLunchKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szLunchKey);
	};

	szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' and hfl_name2 <> 'sang' "));

	m_wndLunch.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_idx,hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T("	hfl_categoryid as categoryid, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and nvl(hfl_subgroup,'N') <> 'NN' and hfl_active='Y' %s ") \
_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);


_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndLunch.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			
			rs.GetValue(_T("categoryid")),
			NULL);
		rs.MoveNext();
	}
	return 0;
}
/*void CHMSServicePackageFoodOrderDialog::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSServicePackageFoodOrderDialog::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnDinnerSelendok(){
	 
}
/*void CHMSServicePackageFoodOrderDialog::OnDinnerSetfocus(){
	
}*/
/*void CHMSServicePackageFoodOrderDialog::OnDinnerKillfocus(){
	
}*/
long CHMSServicePackageFoodOrderDialog::OnDinnerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDinner.IsSearchKey() && !m_szDinnerKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szDinnerKey);
	};

	szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' and hfl_name2 <> 'sang' "));

	m_wndDinner.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_idx,hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T("	hfl_categoryid as categoryid, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and nvl(hfl_subgroup,'N') <> 'NN' and hfl_active='Y' %s ") \
_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);


_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndDinner.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")),			
			rs.GetValue(_T("categoryid")),
			NULL);
		rs.MoveNext();
	}
	return 0;

}
/*void CHMSServicePackageFoodOrderDialog::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSServicePackageFoodOrderDialog::OnMenuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnOrderListDblClick(){
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return;
	long nDocNo = str2long(m_wndOrderList.GetItemText(nSel, 0));
	m_arDocuments.Add(nDocNo);
	m_wndOrderList.DeleteItem(nSel);
	OnSelectedListLoadData();
} 
void CHMSServicePackageFoodOrderDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageFoodOrderDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSServicePackageFoodOrderDialog::OnOrderListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	szFilter.Format(_T("0"));
	szWhere.Empty();
	for (int i =0; i < m_arDocuments.GetCount(); i++)
	{
		szFilter.AppendFormat(_T(",%ld"), m_arDocuments[i]);
	}
	szWhere.AppendFormat(_T(" and hfe_docno not in(%s) "), szFilter);

	szSQL.Format(_T(" SELECT distinct hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_roomid      AS room_id") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline_close,") \
_T("   hms_patient") \
_T(" WHERE hfelc_extra_id = hfe_fee_extra_id and hfe_patientno = hp_patientno ") \
_T(" AND hfe_deptid       = '%s' and hfelc_date=to_date('%s', 'YYYY-MM-DD') ") \
_T(" AND hfelc_foodordered = 'N' %s ") \
_T(" ORDER BY pname "), pMF->m_szDept, m_szOrderDate, szWhere);

	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("room_id")), 
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CHMSServicePackageFoodOrderDialog::OnSelectedListDblClick(){
	
} 
void CHMSServicePackageFoodOrderDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageFoodOrderDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSServicePackageFoodOrderDialog::OnSelectedListLoadData(){

	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	
	szFilter.Format(_T("0"));
	szWhere.Empty();
	for (int i =0; i < m_arDocuments.GetCount(); i++)
	{
		szFilter.AppendFormat(_T(",%ld"), m_arDocuments[i]);
	}
	szWhere.AppendFormat(_T(" and hfe_docno in(%s) "), szFilter);

	
	szSQL.Format(_T(" SELECT distinct hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_roomid      AS room_id") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline_close,") \
_T("   hms_patient") \
_T(" WHERE hfelc_extra_id = hfe_fee_extra_id and hfe_patientno = hp_patientno ") \
_T(" AND hfe_deptid       = '%s' and hfelc_date=to_date('%s', 'YYYY-MM-DD') ") \
_T(" AND hfelc_foodordered = 'N' %s ") \
_T(" ORDER BY pname "), pMF->m_szDept, m_szOrderDate, szWhere);

	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	CString tmpStr;
	nCount = rs.ExecSQL(szSQL);
	nCount = 0;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nCount);
		m_wndSelectedList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("room_id")), 
			rs.GetValue(_T("Description")), 
			NULL);
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;

	return 0;
}
void CHMSServicePackageFoodOrderDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFoodOrderDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_arDocuments.GetCount() <= 0)
	{
		ShowMessageBox(_T("Không có bệnh nhân nào được chọn"));
		return;
	}
	UpdateData(TRUE);
	if(m_szBreakfastKey.IsEmpty() && m_szLunchKey.IsEmpty() && m_szDinnerKey.IsEmpty())
	{
		ShowMessageBox(_T("Yêu cầu chọn bữa ăn"));
		m_wndBreakfast.SetFocus();
		return;
	}
	CString szSQL;
	int ret = 0;
	int count = 0;
	for (int i=0; i < m_arDocuments.GetCount(); i++)
	{
		long nDocNo = m_arDocuments[i];
		szSQL.Format(_T("UPDATE hms_fee_extraline_close ") \
			_T(" SET hfelc_foodordered='Y', hfelc_breakfast_id='%s', hfelc_lunch_id='%s', hfelc_dinner_id='%s' ") \
			_T(" WHERE hfelc_docno=%ld and hfelc_date=to_date('%s', 'YYYY-MM-DD') "),
			m_szBreakfastKey, m_szLunchKey, m_szDinnerKey, nDocNo, m_szOrderDate);
		ret = pMF->ExecSQL(szSQL);
		if(ret > 0)
			count += ret;

	}
	if(count > 0)
	{
		szSQL.Format(_T("HMS_FOODORDER_APPLY_V1('%s', '%s', %ld, '%s') "),
			pMF->GetCurrentUser(), m_szOrderDate, m_nOID, pMF->m_szDept);
		ret = str2int(pMF->ExecDML(szSQL));

		if(ret < 0)
		{

		}

		m_arDocuments.RemoveAll();
		OnOrderListLoadData();
		m_wndSelectedList.DeleteAllItems();
	}
} 
void CHMSServicePackageFoodOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSServicePackageFoodOrderDialog::OnAddHMSServicePackageFoodOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageFoodOrderDialog::OnEditHMSServicePackageFoodOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageFoodOrderDialog::OnDeleteHMSServicePackageFoodOrderDialog(){
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
 		OnCancelHMSServicePackageFoodOrderDialog();
 	}
	return 0;
}
int CHMSServicePackageFoodOrderDialog::OnSaveHMSServicePackageFoodOrderDialog(){
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
 		//OnHMSServicePackageFoodOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServicePackageFoodOrderDialog::OnCancelHMSServicePackageFoodOrderDialog(){
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
int CHMSServicePackageFoodOrderDialog::OnHMSServicePackageFoodOrderDialogListLoadData(){
	return 0;
}
