#include "HMSPrescriptionLockDialog.h"
#include "MainFrm.h"
#include "HMSPrescriptionLockInfoDialog.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionLockDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockDialog *)pWnd)->OnDrugNameCheckValue();
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionLockDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnDrugListDeleteItem();
} 
static void _OnLockSelectFnc(CWnd *pWnd){
	CHMSPrescriptionLockDialog *pVw = (CHMSPrescriptionLockDialog *)pWnd;
	pVw->OnLockSelect();
} 
static void _OnUnlockSelectFnc(CWnd *pWnd){
	CHMSPrescriptionLockDialog *pVw = (CHMSPrescriptionLockDialog *)pWnd;
	pVw->OnUnlockSelect();
} 
static long _OnLockListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionLockDialog*)pWnd)->OnLockListLoadData();
} 
static void _OnLockListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionLockDialog*)pWnd)->OnLockListDblClick();
} 
static void _OnLockListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionLockDialog*)pWnd)->OnLockListSelectChange(nOldItem, nNewItem);
} 
static int _OnLockListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnLockListDeleteItem();
} 
static int _OnAddHMSPrescriptionLockDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnAddHMSPrescriptionLockDialog();
} 
static int _OnEditHMSPrescriptionLockDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnEditHMSPrescriptionLockDialog();
} 
static int _OnDeleteHMSPrescriptionLockDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnDeleteHMSPrescriptionLockDialog();
} 
static int _OnSaveHMSPrescriptionLockDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnSaveHMSPrescriptionLockDialog();
} 
static int _OnCancelHMSPrescriptionLockDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionLockDialog*)pWnd)->OnCancelHMSPrescriptionLockDialog();
} 
CHMSPrescriptionLockDialog::CHMSPrescriptionLockDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 810;
	m_nDlgHeight = 607;
	SetDefaultValues();
}
CHMSPrescriptionLockDialog::~CHMSPrescriptionLockDialog(){
}
void CHMSPrescriptionLockDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 800, 60);
	m_wndStorageInformation.Create(this, _T("Storage Information"), 5, 65, 800, 315);
	m_wndLockInformation.Create(this, _T("Lock Information"), 5, 350, 800, 600);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 30, 110, 55);
	m_wndStorage.Create(this,115, 30, 480, 55); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 485, 30, 585, 55);
	m_wndDrugName.Create(this,590, 30, 795, 55); 
	m_wndDrugList.Create(this,10, 90, 800, 310); 
	m_wndLock.Create(this, _T("Lock"), 635, 320, 715, 345);
	m_wndUnlock.Create(this, _T("Unlock"), 720, 320, 800, 345);
	m_wndLockList.Create(this,5, 375, 795, 595); 

}
void CHMSPrescriptionLockDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndDrugName.SetLimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.SetNotEmpty(false);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDrugList.InsertColumn(0, _T("Index"), CFMT_TEXT, 70);
	m_wndDrugList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndDrugList.InsertColumn(2, _T("Generic"), CFMT_TEXT, 300);
	m_wndDrugList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 100);


	m_wndLockList.InsertColumn(0, _T("Dept"), CFMT_TEXT, 100);
	m_wndLockList.InsertColumn(1, _T("User ID"), CFMT_TEXT, 100);
	m_wndLockList.InsertColumn(2, _T("User Name"), CFMT_TEXT, 200);

}
void CHMSPrescriptionLockDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndLock.SetEvent(WE_CLICK, _OnLockSelectFnc);
	m_wndUnlock.SetEvent(WE_CLICK, _OnUnlockSelectFnc);
	m_wndLockList.SetEvent(WE_SELCHANGE, _OnLockListSelectChangeFnc);
	m_wndLockList.SetEvent(WE_LOADDATA, _OnLockListLoadDataFnc);
	m_wndLockList.SetEvent(WE_DBLCLICK, _OnLockListDblClickFnc);
	
	m_wndLockList.AddEvent(1, _T("Delete"), _OnLockListDeleteItemFnc, 0, VK_DELETE, 0);
	
	SetMode(VM_VIEW);

}
void CHMSPrescriptionLockDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);

}
void CHMSPrescriptionLockDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionLockDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionLockDialog::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szDrugName.Empty();

}
int CHMSPrescriptionLockDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHMSPrescriptionLockDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionLockDialog::OnStorageSelendok(){
	 //OnDrugListLoadData();
}
/*void CHMSPrescriptionLockDialog::OnStorageSetfocus(){
	
}*/
/*void CHMSPrescriptionLockDialog::OnStorageKillfocus(){
	
}*/
long CHMSPrescriptionLockDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && str2int(m_szStorageKey) > 0){
		 szWhere.Format(_T(" and msl_storage_id=%d "), str2int(m_szStorageKey));
	};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT msl_storage_id as id, msl_name as name FROM m_storagelist WHERE msl_isactive='Y' and msl_storage_id in(3, 23) %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSPrescriptionLockDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionLockDialog::OnDrugNameChange(){
	
} */
/*void CHMSPrescriptionLockDialog::OnDrugNameSetfocus(){
	
} */
/*void CHMSPrescriptionLockDialog::OnDrugNameKillfocus(){
	
} */
int CHMSPrescriptionLockDialog::OnDrugNameCheckValue(){

	OnDrugListLoadData();
	return 1;
} 
void CHMSPrescriptionLockDialog::OnDrugListDblClick(){
	
} 
void CHMSPrescriptionLockDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_nProduct_ID = str2long(m_wndDrugList.GetItemText(nNewItem, 0));

	OnLockListLoadData();
} 
int CHMSPrescriptionLockDialog::OnDrugListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionLockDialog::OnDrugListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	UpdateData(TRUE);
	m_wndDrugList.BeginLoad(); 
	int nCount = 0;

	szWhere.Empty();
	if(!m_szDrugName.IsEmpty())
	{
		szWhere.Format(_T(" and lower(mp_name) like(chr(37)||lower('%s')||chr(37)) "), m_szDrugName);
	}

	szSQL.Format(_T(" SELECT DISTINCT mp_product_id,") \
_T("   mp_code,") \
_T("   mp_name,") \
_T("   adu_name,") \
_T("   mpc_name, ") \
_T(" (select count(*) from hms_prescription_lock where hpl_storage_id = msl_storage_id and hpl_product_id = mp_product_id) as locked  ") \
_T(" FROM m_storageline") \
_T(" LEFT JOIN m_product") \
_T(" ON(mp_product_id = msl_product_id)") \
_T(" LEFT JOIN m_product_class") \
_T(" ON(mpc_product_class_id = m_product.mp_product_class_id)") \
_T(" LEFT JOIN ad_uom") \
_T(" ON(adu_uom_id        = mp_product_uom_id)") \
_T(" WHERE msl_storage_id = %d ") \
_T(" AND msl_qtyonhand    > 0 %s ") \
_T(" ORDER BY mp_name"), str2int(m_szStorageKey), szWhere);

	CString tmpStr;
	int nIndex = 1;
	int nItem = 0;
	int nLocked;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		//tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("mp_product_id"), tmpStr);
		rs.GetValue(_T("locked"), nLocked);
		nItem = m_wndDrugList.AddItems(
			tmpStr, 
			rs.GetValue(_T("mp_name")), 
			rs.GetValue(_T("mpc_name")), 
			rs.GetValue(_T("adu_name")), 
			NULL);
		if(nLocked > 0)
		{
//			m_wndDrugList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndDrugList.SetSubItemBkColor(nItem, 1, RGB(255, 128, 0), FALSE);
			m_wndDrugList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSPrescriptionLockDialog::OnLockSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0)
		return;

	CHMSPrescriptionLockInfoDialog dlg(this);
	dlg.m_nStorage_ID = str2int(m_szStorageKey);
	dlg.m_nProduct_ID = str2long(m_wndDrugList.GetItemText(nSel, 0));
	if(dlg.DoModal() == IDOK)
	{
	}
	OnLockListLoadData();
} 
void CHMSPrescriptionLockDialog::OnUnlockSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionLockDialog::OnLockListDblClick(){
	
} 
void CHMSPrescriptionLockDialog::OnLockListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionLockDialog::OnLockListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUserID;
	int ret = ShowMessageBox(_T("Do you want to unlock user?"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	
	for (int i =0; i < m_wndLockList.GetItemCount(); i++)
	{
		if(m_wndLockList.GetItemState(i, LVIS_SELECTED) &LVIS_SELECTED)
		{
			szUserID = m_wndLockList.GetItemText(i, 1);
			szSQL.Format(_T("DELETE FROM hms_prescription_lock WHERE hpl_storage_id=%d and hpl_product_id=%ld and hpl_userid='%s' "),
				str2int(m_szStorageKey), m_nProduct_ID, szUserID);
			pMF->ExecSQL(szSQL);
		}
	}
	OnLockListLoadData();
	return 0;
} 
long CHMSPrescriptionLockDialog::OnLockListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLockList.BeginLoad(); 
	int nCount = 0;
	int nSel = m_wndDrugList.GetCurSel();
	if(nSel < 0) return 0;

	long nProduct_ID = str2long(m_wndDrugList.GetItemText(nSel, 0));

	szSQL.Format(_T(" SELECT su_userid AS userid,") \
_T("   su_hms_xdept   AS deptid,") \
_T("   su_name        AS user_name") \
_T(" FROM hms_prescription_lock") \
_T(" LEFT JOIN sys_user") \
_T(" ON(su_userid         =hpl_userid)") \
_T(" WHERE hpl_storage_id = %d") \
_T(" AND hpl_product_id   = %ld ") \
_T(" ORDER BY deptid,") \
_T("   userid"), str2int(m_szStorageKey), nProduct_ID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLockList.AddItems(
			rs.GetValue(_T("deptid")), 
			rs.GetValue(_T("UserID")), 
			rs.GetValue(_T("User_Name")), NULL);
		rs.MoveNext();
	}
	m_wndLockList.EndLoad(); 
	return nCount;

	return 0;
}
int CHMSPrescriptionLockDialog::OnAddHMSPrescriptionLockDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionLockDialog::OnEditHMSPrescriptionLockDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionLockDialog::OnDeleteHMSPrescriptionLockDialog(){
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
 		OnCancelHMSPrescriptionLockDialog();
 	}
	return 0;
}
int CHMSPrescriptionLockDialog::OnSaveHMSPrescriptionLockDialog(){
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
 		//OnHMSPrescriptionLockDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionLockDialog::OnCancelHMSPrescriptionLockDialog(){
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
int CHMSPrescriptionLockDialog::OnHMSPrescriptionLockDialogListLoadData(){
	return 0;
}
