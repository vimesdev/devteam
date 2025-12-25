#include "ProductMinQtySetup.h"
#include "MainFrame_E10.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductMinQtySetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductMinQtySetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductMinQtySetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListCheckAllFnc(CWnd *pWnd){
	 ((CProductMinQtySetup*)pWnd)->OnListCheckAll();
	 return 0;
} 
static int _OnListUncheckAllFnc(CWnd *pWnd){
	 ((CProductMinQtySetup*)pWnd)->OnListUncheckAll();
	 return 0;
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductMinQtySetup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CProductMinQtySetup *)pWnd)->OnQuantityCheckValue();
} 
static void _OnFindChangeFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnFindChange();
}
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CProductMinQtySetup *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CProductMinQtySetup *)pWnd)->OnFindCheckValue();
} 
static void _OnMultiSetSelectFnc(CWnd *pWnd){
	 ((CProductMinQtySetup*)pWnd)->OnMultiSetSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductMinQtySetup *pVw = (CProductMinQtySetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductMinQtySetup *pVw = (CProductMinQtySetup *)pWnd;
	pVw->OnCloseSelect();
} 
CProductMinQtySetup::CProductMinQtySetup(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 410;
	SetDefaultValues();
}
CProductMinQtySetup::~CProductMinQtySetup(){
}
void CProductMinQtySetup::OnCreateComponents(){
	m_wndMinimumQuantitySetup.Create(this, _T("Minimum Quantity Setup"), 5, 5, 500, 310);
	m_wndList.Create(this,10, 30, 495, 305); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 315, 85, 340);
	m_wndName.Create(this,90, 315, 325, 340); 
	m_wndName.EnableWindow(FALSE);
	m_wndQuantityLabel.Create(this, _T("Quantity"), 330, 315, 410, 340);
	m_wndQuantity.Create(this,415, 315, 495, 340); 
	m_wndFindLabel.Create(this, _T("Find"), 5, 345, 85, 370);
	m_wndFind.Create(this,90, 345, 325, 370); 
	m_wndMultiSet.Create(this, _T("Multi set"), 5, 375, 85, 400);
	m_wndSave.Create(this, _T("&Save"), 335, 375, 415, 400);
	m_wndClose.Create(this, _T("&Close"), 420, 375, 500, 400);

}
void CProductMinQtySetup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndFind.SetLimitText(35);
	m_wndFind.SetCheckValue(true);


	
	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(2, _T("Code"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Name"), CFMT_TEXT, 260);
	m_wndList.InsertColumn(4, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Quantity"), CFMT_NUMBER, 80);
	

}
void CProductMinQtySetup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Check All"), _OnListCheckAllFnc);
	//m_wndList.AddEvent(2, _T("Uncheck All"), _OnListUncheckAllFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndMultiSet.SetEvent(WE_CLICK, _OnMultiSetSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();

}
void CProductMinQtySetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Check(pDX, m_wndMultiSet.GetDlgCtrlID(), m_bMultiSet);

}
void CProductMinQtySetup::SetDefaultValues(){

	m_szName.Empty();
	m_nQuantity=0;
	m_szFind.Empty();
	m_bMultiSet=FALSE;

}

int CProductMinQtySetup::SetMode(int nMode){
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
void CProductMinQtySetup::OnListDblClick(){
	
} 
void CProductMinQtySetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_szName = m_wndList.GetItemText(nNewItem, 3);
	m_nQuantity = str2int(m_wndList.GetItemText(nNewItem, 5));
	UpdateData(FALSE);
} 

void CProductMinQtySetup::OnListCheckAll(){
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		m_wndList.SetCheck(i, true);
}

void CProductMinQtySetup::OnListUncheckAll(){
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
		m_wndList.SetCheck(i, false);
}

int CProductMinQtySetup::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CProductMinQtySetup::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	int nIdx = 1;
	if (m_nStorageID <= 0)
		return -1;
	if (!m_szFind.IsEmpty())
		szWhere.Format(_T(" AND lower(mp_name) LIKE chr(37)||lower('%s')||chr(37)"), m_szFind);
	szSQL.Format(_T(" SELECT distinct mp_product_id product_id, mp_name name, mp_code code, get_uomname(mp_uom_id) uom_name, ") \
				 _T(" mpm_qty quantity") \
				 _T(" FROM m_storageline ") \
				 _T(" LEFT JOIN m_product_minqty ON (msl_storage_id = mpm_storage_id AND msl_product_id = mpm_product_id)") \
				 _T(" LEFT JOIN m_product ON (mp_product_id = msl_product_id)") \
				 _T(" WHERE msl_storage_id = %d AND msl_isactive = 'Y' AND msl_qtyonhand > 0 %s"), m_nStorageID, szWhere);
	if (m_bMultiSet)
		OnListUncheckAll();
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("product_id")),
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("uom_name")), 
			rs.GetValue(_T("Quantity")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CProductMinQtySetup::OnNameChange(){
	
} */
/*void CProductMinQtySetup::OnNameSetfocus(){
	
} */
/*void CProductMinQtySetup::OnNameKillfocus(){
	
} */
int CProductMinQtySetup::OnNameCheckValue(){
	return 0;
} 
/*void CProductMinQtySetup::OnQuantityChange(){
	
} */
/*void CProductMinQtySetup::OnQuantitySetfocus(){
	
} */
/*void CProductMinQtySetup::OnQuantityKillfocus(){
	
} */
int CProductMinQtySetup::OnQuantityCheckValue(){
	return 0;
} 
void CProductMinQtySetup::OnFindChange(){
	UpdateData(true);
	m_wndList.Search(3, m_szFind, SEARCH_LIKE);
}
/*void CProductMinQtySetup::OnFindSetfocus(){
	
} */
/*void CProductMinQtySetup::OnFindKillfocus(){
	
} */
int CProductMinQtySetup::OnFindCheckValue(){
	return 0;
} 
void CProductMinQtySetup::OnMultiSetSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	m_wndList.SetCheckBox(m_bMultiSet);
}
void CProductMinQtySetup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CString szSQL, szProductID;
	int nRes = 0, nRes2 = 0;
	if (m_bMultiSet)
	{
		int nID = ShowMessageBox(_T("\x42\x1EA1n mu\x1ED1n thi\x1EBFt l\x1EADp \x111\x1ED3ng lo\x1EA1t \x63\xE1\x63 m\x1EB7t h\xE0ng \x31 s\x1ED1 l\x1B0\x1EE3ng t\x1ED1i thi\x1EC3u?"), MB_YESNO | MB_ICONQUESTION);
		if (nID == IDNO)
			return;
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
			if (m_wndList.GetCheck(i))
			{
				szProductID = m_wndList.GetItemText(i, 1);
				szSQL.Format(_T("INSERT INTO m_product_minqty VALUES(%d, %s, %d)"), m_nStorageID, szProductID, m_nQuantity);
				int nRes = pMF->ExecSQL(szSQL);
				if (nRes < 0)
				{
					szSQL.Format(_T(" UPDATE m_product_minqty SET mpm_qty = %d ") \
								_T(" WHERE mpm_storage_id = %d AND mpm_product_id = %s"), m_nQuantity, m_nStorageID, szProductID);
					nRes = pMF->ExecSQL(szSQL);
				}
				if (nRes > 0)
					nRes2++;
			}
		if (nRes2 > 0)
		{
			AfxMessageBox(_T("Apply Successfully!"));
			OnListLoadData();
		}
	}
	else
	{
		szProductID = m_wndList.GetItemText(m_wndList.GetCurSel(), 1);
		szSQL.Format(_T("INSERT INTO m_product_minqty VALUES(%d, %s, %d)"), m_nStorageID, szProductID, m_nQuantity);
		nRes = pMF->ExecSQL(szSQL);
		if (nRes < 0)
		{
			szSQL.Format(_T(" UPDATE m_product_minqty SET mpm_qty = %d ") \
						 _T(" WHERE mpm_storage_id = %d AND mpm_product_id = %s"), m_nQuantity, m_nStorageID, szProductID);
			nRes = pMF->ExecSQL(szSQL);
		}
		if (nRes > 0)
		{
			AfxMessageBox(_T("Apply Successfully!"));			
			OnListLoadData();
		}
	}

} 
void CProductMinQtySetup::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
