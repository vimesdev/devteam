#include "HMSServicePackageFamilyFoodOrderDialog.h"
#include "MainFrm.h"
static void _OnBreakfastSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageFamilyFoodOrderDialog* )pWnd)->OnBreakfastSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnBreakfastSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnBreakfastSelendok();
}
/*static void _OnBreakfastSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnBreakfastKillfocus();
}*/
/*static void _OnBreakfastKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnBreakfastKillfocus();
}*/
static long _OnBreakfastLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnBreakfastLoadData();
}
/*static void _OnBreakfastAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnBreakfastAddNew();
}*/
static void _OnLunchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageFamilyFoodOrderDialog* )pWnd)->OnLunchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLunchSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnLunchSelendok();
}
/*static void _OnLunchSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnLunchKillfocus();
}*/
/*static void _OnLunchKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnLunchKillfocus();
}*/
static long _OnLunchLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnLunchLoadData();
}
/*static void _OnLunchAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnLunchAddNew();
}*/
static void _OnDinnerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageFamilyFoodOrderDialog* )pWnd)->OnDinnerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDinnerSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnDinnerSelendok();
}
/*static void _OnDinnerSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnDinnerKillfocus();
}*/
/*static void _OnDinnerKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnDinnerKillfocus();
}*/
static long _OnDinnerLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnDinnerLoadData();
}
/*static void _OnDinnerAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog *)pWnd)->OnDinnerAddNew();
}*/

static void _OnIsNotPatientSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnIsNotPatientSelect();
} 
static void _OnMenuSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnMenuSelect();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnOrderListDeleteItem();
}
static int _OnOrderListAddAllItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnOrderListAddAllItem();
}
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnCloseSelect();
}
static void _OnShowPatientSelectFnc(CWnd *pWnd){
	CHMSServicePackageFamilyFoodOrderDialog *pVw = (CHMSServicePackageFamilyFoodOrderDialog *)pWnd;
	pVw->OnShowPatientSelect();
} 

static int _OnAddHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnAddHMSServicePackageFoodOrderDialog();
} 
static int _OnEditHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnEditHMSServicePackageFoodOrderDialog();
} 
static int _OnDeleteHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnDeleteHMSServicePackageFoodOrderDialog();
} 
static int _OnSaveHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnSaveHMSServicePackageFoodOrderDialog();
} 
static int _OnCancelHMSServicePackageFoodOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageFamilyFoodOrderDialog*)pWnd)->OnCancelHMSServicePackageFoodOrderDialog();
} 
CHMSServicePackageFamilyFoodOrderDialog::CHMSServicePackageFamilyFoodOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSServicePackageFamilyFoodOrderDialog::~CHMSServicePackageFamilyFoodOrderDialog(){
}
void CHMSServicePackageFamilyFoodOrderDialog::OnCreateComponents(){
	m_wndBreakfast.Create(this,90, 4, 320, 29); 
	m_wndBreakfastLabel.Create(this, _T("Breakfast"), 5, 5, 85, 30);
	m_wndMenu.Create(this, _T("..."), 934, 5, 959, 30);
	m_wndOrderList.Create(this,5, 35, 320, 570); 
	m_wndSelectedList.Create(this,325, 35, 959, 570); 
	m_wndMark.Create(this, _T("Mark [><]"), 5, 575, 85, 600);
	m_wndUnMark.Create(this, _T("UnMark [<>]"), 90, 575, 170, 600);
	m_wndAdd.Create(this, _T("&Add >>"), 239, 575, 319, 600);
	m_wndRemove.Create(this, _T("<< Remove"), 324, 575, 404, 600);
	m_wndIsNotPatient.Create(this, _T("BN không ăn"), 410, 575, 600, 600);
	m_wndShowPatient.Create(this, _T("DS đã báo"), 605, 575, 785, 600);
	m_wndApply.Create(this, _T("&Apply"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);
}
void CHMSServicePackageFamilyFoodOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndBreakfast.SetCheckValue(true);
	m_wndBreakfast.LimitText(35);
	


	m_wndBreakfast.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndBreakfast.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);


	


	m_wndOrderList.InsertColumn(0, _T("Document No"), CFMT_NUMBER, 80);
	m_wndOrderList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 160);
	m_wndOrderList.InsertColumn(2, _T("Room"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(3, _T("Type"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(4, _T("Fee_extra_id"), CFMT_NUMBER, 0);
	


	m_wndSelectedList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndSelectedList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 80);
	m_wndSelectedList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndSelectedList.InsertColumn(3, _T("Yob"), CFMT_NUMBER, 50);
	m_wndSelectedList.InsertColumn(4, _T("Room"), CFMT_NUMBER, 50);
	m_wndSelectedList.InsertColumn(5, _T("Description"), CFMT_TEXT, 250);
	m_wndSelectedList.InsertColumn(6, _T("Type"), CFMT_TEXT, 50);
	m_wndSelectedList.InsertColumn(7, _T("Fee_extra_id"), CFMT_NUMBER, 0);

}
void CHMSServicePackageFamilyFoodOrderDialog::OnSetWindowEvents(){
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
	//m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOrderList.AddEvent(2, _T("Add All"), _OnOrderListAddAllItemFnc);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndIsNotPatient.SetEvent(WE_CLICK, _OnIsNotPatientSelectFnc);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndShowPatient.SetEvent(WE_CLICK, _OnShowPatientSelectFnc);
	
	SetMode(VM_VIEW);
	OnOrderListLoadData();
	m_arDocuments.RemoveAll();

}
void CHMSServicePackageFamilyFoodOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndBreakfast.GetDlgCtrlID(), m_szBreakfastKey);
	DDX_TextEx(pDX, m_wndLunch.GetDlgCtrlID(), m_szLunchKey);
	DDX_TextEx(pDX, m_wndDinner.GetDlgCtrlID(), m_szDinnerKey);
	DDX_Check(pDX, m_wndIsNotPatient.GetDlgCtrlID(), m_bIsNotPatient);

}
void CHMSServicePackageFamilyFoodOrderDialog::UpdateJson(BOOL bSave){
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
void CHMSServicePackageFamilyFoodOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSServicePackageFamilyFoodOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageFamilyFoodOrderDialog::SetDefaultValues(){

	m_szBreakfastKey.Empty();
	m_szLunchKey.Empty();
	m_szDinnerKey.Empty();
	m_bIsNotPatient= false;

}
int CHMSServicePackageFamilyFoodOrderDialog::SetMode(int nMode){
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
void CHMSServicePackageFamilyFoodOrderDialog::OnBreakfastSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnBreakfastSelendok(){
	 
}
/*void CHMSServicePackageFamilyFoodOrderDialog::OnBreakfastSetfocus(){
	
}*/
/*void CHMSServicePackageFamilyFoodOrderDialog::OnBreakfastKillfocus(){
	
}*/
long CHMSServicePackageFamilyFoodOrderDialog::OnBreakfastLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndBreakfast.IsSearchKey() && !m_szBreakfastKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szBreakfastKey);
	};

	szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') = 'HCKT' "));

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
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000'  and hfl_subgroup='NN' and hfl_active='Y' %s ") \
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
/*void CHMSServicePackageFamilyFoodOrderDialog::OnBreakfastAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSServicePackageFamilyFoodOrderDialog::OnLunchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnLunchSelendok(){
	 
}
/*void CHMSServicePackageFamilyFoodOrderDialog::OnLunchSetfocus(){
	
}*/
/*void CHMSServicePackageFamilyFoodOrderDialog::OnLunchKillfocus(){
	
}*/
long CHMSServicePackageFamilyFoodOrderDialog::OnLunchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLunch.IsSearchKey() && !m_szLunchKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szLunchKey);
	};

	szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') <> 'PTTYC' "));

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
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
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
/*void CHMSServicePackageFamilyFoodOrderDialog::OnLunchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSServicePackageFamilyFoodOrderDialog::OnDinnerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnDinnerSelendok(){
	 
}
/*void CHMSServicePackageFamilyFoodOrderDialog::OnDinnerSetfocus(){
	
}*/
/*void CHMSServicePackageFamilyFoodOrderDialog::OnDinnerKillfocus(){
	
}*/
long CHMSServicePackageFamilyFoodOrderDialog::OnDinnerLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDinner.IsSearchKey() && !m_szDinnerKey.IsEmpty()){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szDinnerKey);
	};

	szWhere.AppendFormat(_T(" and NVL(hfl_deptid,'XX') <> 'PTTYC' "));

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
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
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
/*void CHMSServicePackageFamilyFoodOrderDialog::OnDinnerAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSServicePackageFamilyFoodOrderDialog::OnMenuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnOrderListDblClick(){
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return;
	long nDocNo = str2long(m_wndOrderList.GetItemText(nSel, 0));
	m_arDocuments.Add(nDocNo);
	m_wndOrderList.DeleteItem(nSel);
	OnSelectedListLoadData();
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageFamilyFoodOrderDialog::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}
int CHMSServicePackageFamilyFoodOrderDialog::OnOrderListAddAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i <= m_wndOrderList.GetItemCount(); i++)
	{
		long nDocNo = str2long(m_wndOrderList.GetItemText(i, 0));
		m_arDocuments.Add(nDocNo);
	}
	OnOrderListLoadData();
	OnSelectedListLoadData();

	 return 0;
} 
long CHMSServicePackageFamilyFoodOrderDialog::OnOrderListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFilter;
	szFilter.Format(_T("0"));
	szWhere.Empty();
	UpdateData(true);
	for (int i =0; i < m_arDocuments.GetCount(); i++)
	{
		szFilter.AppendFormat(_T(",%ld"), m_arDocuments[i]);
	}
	szWhere.AppendFormat(_T(" and hfe_docno not in(%s) "), szFilter);
	if(m_bIsNotPatient)
	{
		szWhere.AppendFormat(_T("AND (select count(*)  from VIMES.hms_feefood  ") \
							_T(" left join  hms_feefoodline on (hfol_orderid= hfo_orderid)") \
							_T(" left join hms_fee_list ON (hfl_feeid= hfol_itemid)") \
							_T(" where hfo_docno= hfe_docno and trunc_date(hfo_orderdate) =  ") \
							_T("	to_date('%s','YYYY-MM-DD')  and hfl_subgroup <> 'NN') >0 "), m_szOrderDate);
	}

	CDate odate;
	odate.ParseDate(m_szOrderDate);
	odate -= 1;
	CString szFromDate = odate.GetDate();

	szSQL.Format(_T("  SELECT DISTINCT hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_roomid      AS room_id, hfl_index2 as vipa,hfe_fee_extra_id as fee_extra_id") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline,") \
_T("   hms_fee_extraline_close,") \
_T("   hms_patient,") \
_T("   hms_fee_list") \
_T(" WHERE hfel_fee_extra_id= hfe_fee_extra_id and hfelc_extra_id  = hfe_fee_extra_id") \
_T(" AND hfe_patientno          = hp_patientno") \
_T(" AND hfl_feeid              = hfel_itemid") \
_T(" AND hfe_deptid             = '%s'") \
_T(" AND trunc_date(hfelc_date)      between     to_date('%s', 'YYYY-MM-DD') and to_date('%s', 'YYYY-MM-DD') ") \
_T(" %s") \
_T(" AND   NVL(hfl_subitem,'N') = 'VIP'") \
_T(" AND NVL(hfl_subgroup,'N') <> 'DVTC'") \
_T(" AND hfl_index2             ='A'  ") \
_T(" AND (select count(*)  from hms_feefood  ") \
_T(" left join  hms_feefoodline on (hfol_orderid= hfo_orderid)") \
_T(" left join hms_fee_list ON (hfl_feeid= hfol_itemid)") \
_T(" where hfo_docno= hfe_docno and trunc_date(hfo_orderdate) = to_date('%s','YYYY-MM-DD')  and hfl_subgroup='NN' and hfe_refstatus <> 'C' ) =0") \
_T(" UNION ALL") \
_T(" SELECT DISTINCT hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_roomid      AS room_id,hfl_subitem,hfe_fee_extra_id") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline,") \
_T("   hms_patient,") \
_T("   hms_fee_list") \
_T(" WHERE hfel_fee_extra_id= hfe_fee_extra_id") \
_T(" AND hfe_patientno          = hp_patientno") \
_T(" AND hfl_feeid              = hfel_itemid") \
_T(" AND hfe_deptid             = '%s' and hfel_quantity >0") \
_T(" AND to_date('%s', 'YYYY-MM-DD') between trunc_date(hfe_orderdate ) and  trunc_date(hfe_enddate) ") \
_T("	and hfe_orderdate <= to_timestamp ('%s 18:00:00','YYYY-MM-DD HH24:MI:SS') ") \
_T("  %s ") \
_T(" AND   NVL(hfl_subitem,'N') = 'NN' and hfe_status not in ('R','S')") \
_T(" AND hfl_servprice >0") \
_T(" AND (select count(*)  from VIMES.hms_feefood  ") \
_T(" left join  hms_feefoodline on (hfol_orderid= hfo_orderid)") \
_T(" left join hms_fee_list ON (hfl_feeid= hfol_itemid)") \
_T(" where hfo_docno= hfe_docno and trunc_date(hfo_orderdate) = to_date('%s','YYYY-MM-DD')  and hfl_subgroup='NN' and hfe_refstatus <> 'C' ) =0") \
_T(" ORDER BY room_id,pname,vipa") , pMF->m_szDept, m_szOrderDate,szFromDate, szWhere,m_szOrderDate,pMF->m_szDept, m_szOrderDate,szFromDate, szWhere,m_szOrderDate);
_fmsg(_T("%s"),szSQL);
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("room_id")),
			rs.GetValue(_T("vipa")),
			rs.GetValue(_T("fee_extra_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
}
void CHMSServicePackageFamilyFoodOrderDialog::OnSelectedListDblClick(){
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageFamilyFoodOrderDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndSelectedList.GetCurSel();
	if(nSel < 0)
		return 0;
	long nDocnoArr=0;
	long nDocNo = str2long(m_wndSelectedList.GetItemText(nSel,1));
	for (int i=0; i < m_arDocuments.GetCount(); i++)
	{
		nDocnoArr=  m_arDocuments.GetAt(i);
		if(nDocnoArr == nDocNo)
			m_arDocuments.RemoveAt(i);

	}
	m_wndSelectedList.DeleteItem(nSel);
	OnOrderListLoadData();
	 return 0;
} 
long CHMSServicePackageFamilyFoodOrderDialog::OnSelectedListLoadData(){

	
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

	
	szSQL.Format(_T("  SELECT DISTINCT hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_roomid      AS room_id, hfl_index2 as vipa,hfe_fee_extra_id as fee_extra_id") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline,") \
_T("   hms_fee_extraline_close,") \
_T("   hms_patient,") \
_T("   hms_fee_list") \
_T(" WHERE hfel_fee_extra_id= hfe_fee_extra_id and hfelc_extra_id  = hfe_fee_extra_id") \
_T(" AND hfe_patientno          = hp_patientno") \
_T(" AND hfl_feeid              = hfel_itemid") \
_T(" AND hfe_deptid             = '%s'") \
_T(" AND trunc_date(hfelc_date)    =to_date('%s', 'YYYY-MM-DD')") \
_T(" %s") \
_T(" AND   NVL(hfl_subitem,'N') = 'VIP'") \
_T(" AND NVL(hfl_subgroup,'N') <> 'DVTC'") \
_T(" AND hfl_index2             ='A'") \
_T(" UNION ALL") \
_T(" SELECT DISTINCT hfe_docno AS docno,") \
_T("   trim(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname) AS pname,") \
_T("   hfe_roomid      AS room_id,hfl_subitem,hfe_fee_extra_id") \
_T(" FROM hms_fee_extra,") \
_T("   hms_fee_extraline,") \
_T("   hms_patient,") \
_T("   hms_fee_list") \
_T(" WHERE hfel_fee_extra_id= hfe_fee_extra_id") \
_T(" AND hfe_patientno          = hp_patientno") \
_T(" AND hfl_feeid              = hfel_itemid") \
_T(" AND hfe_deptid             = '%s' and hfel_quantity >0") \
_T(" AND to_date('%s', 'YYYY-MM-DD') between trunc_date(hfe_orderdate ) and  trunc_date(hfe_enddate) ") \
_T("  %s ") \
_T(" AND   NVL(hfl_subitem,'N') = 'NN' and hfe_status not in ('R','S')") \
_T(" AND hfl_servprice >0") \
_T(" ORDER BY room_id,pname,vipa") , pMF->m_szDept, m_szOrderDate, szWhere,pMF->m_szDept, m_szOrderDate, szWhere);

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
			rs.GetValue(_T("vipa")),
			rs.GetValue(_T("fee_extra_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;

	return 0;
}
void CHMSServicePackageFamilyFoodOrderDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageFamilyFoodOrderDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_arDocuments.GetCount() <= 0)
	{
		ShowMessageBox(_T("Không có bệnh nhân nào được chọn"));
		return;
	}
	UpdateData(TRUE);
	if(m_szBreakfastKey.IsEmpty() )
	{
		ShowMessageBox(_T("Yêu cầu chọn bữa ăn"));
		m_wndBreakfast.SetFocus();
		return;
	}
	CString szSQL;
	int ret = 0;
	int count = 0;
	CDate odate;
	odate.ParseDate(m_szOrderDate.Left(10));
	CString szOrderDate = odate.GetDate();
	for (int i=0; i < m_wndSelectedList.GetItemCount(); i++)
	{
		long nDocNo= str2long(m_wndSelectedList.GetItemText(i,1));
		CString szVipA;
		szVipA = m_wndSelectedList.GetItemText(i,6);
		if(szVipA == _T("A"))
			szVipA = _T("A");
		else 
			szVipA.Empty();
		szSQL.Format(_T("HMS_FOODORDER_APPLY_V1_DOCNO('%s', '%s', %ld, '%s',%ld,'%s','%s') "),
			pMF->GetCurrentUser(), szOrderDate, m_nOID, pMF->m_szDept,nDocNo,m_szBreakfastKey,szVipA);
	
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret < 0)
		{
			
		}
		//m_arDocuments.RemoveAt(i);	

	}
	m_arDocuments.RemoveAll();
	OnOrderListLoadData();
	OnSelectedListLoadData();
	
}
#include "TMShowPatientEatInDayDialog.h"
void CHMSServicePackageFamilyFoodOrderDialog::OnShowPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CTMShowPatientEatInDayDialog dlg(this);
	dlg.m_szOrderDate = m_szOrderDate;
	dlg.m_szType =_T("NN");
	dlg.DoModal();
	

}
void CHMSServicePackageFamilyFoodOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();	
} 
int CHMSServicePackageFamilyFoodOrderDialog::OnAddHMSServicePackageFoodOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageFamilyFoodOrderDialog::OnEditHMSServicePackageFoodOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageFamilyFoodOrderDialog::OnDeleteHMSServicePackageFoodOrderDialog(){
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
int CHMSServicePackageFamilyFoodOrderDialog::OnSaveHMSServicePackageFoodOrderDialog(){
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
int CHMSServicePackageFamilyFoodOrderDialog::OnCancelHMSServicePackageFoodOrderDialog(){
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
int CHMSServicePackageFamilyFoodOrderDialog::OnHMSServicePackageFoodOrderDialogListLoadData(){
	return 0;
}
void CHMSServicePackageFamilyFoodOrderDialog::OnIsNotPatientSelect(){

	OnOrderListLoadData();
}