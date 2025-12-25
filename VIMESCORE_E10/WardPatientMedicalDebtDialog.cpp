#include "WardPatientMedicalDebtDialog.h"
#include "MainFrame_E10.h"
static void _OnApplySelectFnc(CWnd *pWnd){
	CWardPatientMedicalDebtDialog *pVw = (CWardPatientMedicalDebtDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CWardPatientMedicalDebtDialog *pVw = (CWardPatientMedicalDebtDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CWardPatientMedicalDebtDialog *pVw = (CWardPatientMedicalDebtDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CWardPatientMedicalDebtDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CWardPatientMedicalDebtDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CWardPatientMedicalDebtDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CWardPatientMedicalDebtDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnReusableMaterialSelectFnc(CWnd *pWnd){
	 ((CWardPatientMedicalDebtDialog*)pWnd)->OnReusableMaterialSelect();
}
static long _OnDebtListLoadDataFnc(CWnd *pWnd){
	return ((CWardPatientMedicalDebtDialog*)pWnd)->OnDebtListLoadData();
} 
static void _OnDebtListDblClickFnc(CWnd *pWnd){
	((CWardPatientMedicalDebtDialog*)pWnd)->OnDebtListDblClick();
} 
static void _OnDebtListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CWardPatientMedicalDebtDialog*)pWnd)->OnDebtListSelectChange(nOldItem, nNewItem);
} 
static int _OnDebtListDeleteItemFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnDebtListDeleteItem();
} 
static int _OnDebtListSelectAllItemFnc(CWnd *pWnd){
	((CWardPatientMedicalDebtDialog*)pWnd)->OnDebtListSelectAllItem();
	return 0;
} 
static long _OnDrugListLoadDataFnc(CWnd *pWnd){
	return ((CWardPatientMedicalDebtDialog*)pWnd)->OnDrugListLoadData();
} 
static void _OnDrugListDblClickFnc(CWnd *pWnd){
	((CWardPatientMedicalDebtDialog*)pWnd)->OnDrugListDblClick();
} 
static void _OnDrugListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CWardPatientMedicalDebtDialog*)pWnd)->OnDrugListSelectChange(nOldItem, nNewItem);
} 
static int _OnDrugListDeleteItemFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnDrugListDeleteItem();
} 
static int _OnAddWardPatientMedicalDebtDialogFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnAddWardPatientMedicalDebtDialog();
} 
static int _OnEditWardPatientMedicalDebtDialogFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnEditWardPatientMedicalDebtDialog();
} 
static int _OnDeleteWardPatientMedicalDebtDialogFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnDeleteWardPatientMedicalDebtDialog();
} 
static int _OnSaveWardPatientMedicalDebtDialogFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnSaveWardPatientMedicalDebtDialog();
} 
static int _OnCancelWardPatientMedicalDebtDialogFnc(CWnd *pWnd){
	 return ((CWardPatientMedicalDebtDialog*)pWnd)->OnCancelWardPatientMedicalDebtDialog();
}
static void _OnphieutreoSelectFnc(CWnd *pWnd)
{
	 ((CWardPatientMedicalDebtDialog*)pWnd)->OnphieutreoSelect();
}
CWardPatientMedicalDebtDialog::CWardPatientMedicalDebtDialog(CWnd *pParent, long nID):
	CGuiDialog(pParent), m_nTransactionID(nID){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CWardPatientMedicalDebtDialog::~CWardPatientMedicalDebtDialog(){
}
void CWardPatientMedicalDebtDialog::OnCreateComponents(){
	m_wndGroupDrugList.Create(this, _T("Drug List"), 550, 5, 955, 535);
	m_wndGroupPatientList.Create(this, _T("Patient List"), 5, 65, 545, 535);
	m_wndApply.Create(this, _T("&Apply"), 790, 540, 870, 565);
	m_wndClose.Create(this, _T("&Close"), 875, 540, 955, 565);
	m_wndRefresh.Create(this, _T("Refresh"), 455, 7, 530, 30);
	m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 85, 30);
	m_wndSearch.Create(this,90, 5, 450, 30); 
	m_wndReusableMaterial.Create(this, _T("Hàng tái sử dụng"), 5, 35, 180, 60);
	m_wndDebtList.Create(this,10, 90, 540, 530); 
	m_wndDrugList.Create(this,555, 30, 950, 530);
	m_wndphieutreo.Create(this, _T("Phiếu treo"), 5, 540, 180, 565);

}
void CWardPatientMedicalDebtDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(1024);
	m_wndSearch.SetCheckValue(true);


	m_wndDebtList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//ProductID
	m_wndDebtList.InsertColumn(1, _T(""), CFMT_NUMBER, 0);//TableID
	m_wndDebtList.InsertColumn(2, _T("Mark"), CFMT_TEXT, 20);
	m_wndDebtList.InsertColumn(3, _T("STT"), CFMT_NUMBER, 40);
	m_wndDebtList.InsertColumn(4, _T("Name"), CFMT_TEXT, 260);
	m_wndDebtList.InsertColumn(5, _T("Unit"), CFMT_TEXT, 50);
	m_wndDebtList.InsertColumn(6, _T("Qty"), CFMT_NUMBER, 50);
	m_wndDebtList.InsertColumn(7, _T("Manufacture"), CFMT_TEXT, 100);
	m_wndDebtList.InsertColumn(8, _T("Phiếu bổ sung"), CFMT_TEXT, 120);

	m_wndDrugList.InsertColumn(0, _T(""), CFMT_NUMBER, 0);//ProductID
	m_wndDrugList.InsertColumn(1, _T("STT"), CFMT_NUMBER, 40);
	m_wndDrugList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndDrugList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 50);
	m_wndDrugList.InsertColumn(4, _T("Qty"), CFMT_NUMBER, 50);
	m_wndDrugList.InsertColumn(5, _T("Manufacture"), CFMT_TEXT, 100);

}
void CWardPatientMedicalDebtDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndReusableMaterial.SetEvent(WE_CLICK, _OnReusableMaterialSelectFnc);
	m_wndDebtList.SetEvent(WE_SELCHANGE, _OnDebtListSelectChangeFnc);
	m_wndDebtList.SetEvent(WE_LOADDATA, _OnDebtListLoadDataFnc);
	m_wndDebtList.SetEvent(WE_DBLCLICK, _OnDebtListDblClickFnc);
	//m_wndDebtList.AddEvent(1, _T("Delete"), _OnDebtListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDebtList.AddEvent(1, _T("Select All"), _OnDebtListSelectAllItemFnc);
	m_wndDrugList.SetEvent(WE_SELCHANGE, _OnDrugListSelectChangeFnc);
	m_wndDrugList.SetEvent(WE_LOADDATA, _OnDrugListLoadDataFnc);
	m_wndDrugList.SetEvent(WE_DBLCLICK, _OnDrugListDblClickFnc);
	m_wndDrugList.AddEvent(1, _T("Delete"), _OnDrugListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndphieutreo.SetEvent(WE_CLICK, _OnphieutreoSelectFnc);
	GetDataToScreen();

}
void CWardPatientMedicalDebtDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Check(pDX, m_wndReusableMaterial.GetDlgCtrlID(), m_bReusableMaterial);
	DDX_Check(pDX, m_wndphieutreo.GetDlgCtrlID(), m_bphieutreo);

}
void CWardPatientMedicalDebtDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ReusableMaterial")] =  m_bReusableMaterial;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ReusableMaterial")].GetValue(m_bReusableMaterial);
	}

}
void CWardPatientMedicalDebtDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_transaction WHERE mt_transaction_id = %ld"), m_nTransactionID);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		SetMode(VM_NONE);
		return;
	}
	rs.GetValue(_T("mt_storage_id"), m_nFromStorageID);
	rs.GetValue(_T("mt_storage_to_id"), m_nToStorageID);
	SetMode(VM_EDIT);

}
void CWardPatientMedicalDebtDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CWardPatientMedicalDebtDialog::SetDefaultValues(){

	m_szSearch.Empty();
	m_bReusableMaterial=FALSE;
	m_bphieutreo=FALSE;

}
int CWardPatientMedicalDebtDialog::SetMode(int nMode){
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
 			EnableButtons(FALSE, -1);
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
void CWardPatientMedicalDebtDialog::OnApplySelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_MEDICAL_DEBIT_CREATEREFUND(%ld)"), m_nTransactionID);
	long nRet = str2long(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		CGuiDialog::OnOK();
	}
} 
void CWardPatientMedicalDebtDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CWardPatientMedicalDebtDialog::OnRefreshSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData();
	OnDebtListLoadData();
} 
/*void CWardPatientMedicalDebtDialog::OnSearchChange(){
	
} */
/*void CWardPatientMedicalDebtDialog::OnSearchSetfocus(){
	
} */
/*void CWardPatientMedicalDebtDialog::OnSearchKillfocus(){
	
} */
int CWardPatientMedicalDebtDialog::OnSearchCheckValue(){
	return 0;
} 
void CWardPatientMedicalDebtDialog::OnReusableMaterialSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CWardPatientMedicalDebtDialog::OnDebtListDblClick(){
	CMainFrame_E10 * pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndDebtList.GetCurSel();
	if (nSel < 0) 
	{
		return;
	}
	long nProductID = 0, nTableID = 0;
	nProductID = str2long(m_wndDebtList.GetItemText(nSel, 0));
	nTableID = str2long(m_wndDebtList.GetItemText(nSel, 1));
	szSQL.Format(_T("HMS_MEDICAL_DEBIT_SEND_V3(%ld, %ld, %ld, %ld, %ld)")
			, m_nTransactionID, m_nFromStorageID, m_nToStorageID, nProductID, nTableID);
	long nRet = str2long(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnDebtListLoadData();
		OnDrugListLoadData();
	}
} 
void CWardPatientMedicalDebtDialog::OnDebtListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CWardPatientMedicalDebtDialog::OnDebtListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CWardPatientMedicalDebtDialog::OnDebtListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szOrgID;
	m_wndDebtList.BeginLoad(); 
	int nCount = 0, nIdx = 1, nItem = -1;
	long nPrevID = 0, nNextID = 0;
	//TODO:
	szSQL.Format(_T("SELECT msl_org_id FROM m_storagelist WHERE msl_storage_id=%ld "), m_nFromStorageID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("msl_org_id"), szOrgID);
	}
	if (m_bphieutreo)
	{
	szWhere.AppendFormat(_T(" AND hmt_cstorage_id = %ld") \
						//_T(" and (hmt_reftransaction_id=0 or hmt_reftransaction_id=%ld) ") \//
						_T(" and product_org_id IN('GL','%s') ") \
						_T(" AND hmt_objectid IN") \
						_T("   (SELECT msd_object_id FROM m_storage_default WHERE msd_storage_id=%d") \
						_T("   )"), m_nToStorageID , szOrgID, m_nFromStorageID);
	}
	else
	{
		szWhere.AppendFormat(_T(" AND hmt_cstorage_id = %ld") \
						_T(" and (hmt_reftransaction_id=0 or hmt_reftransaction_id=%ld) ") \
						_T(" and product_org_id IN('GL','%s') ") \
						_T(" AND hmt_objectid IN") \
						_T("   (SELECT msd_object_id FROM m_storage_default WHERE msd_storage_id=%d") \
						_T("   )"), m_nToStorageID, m_nTransactionID, szOrgID, m_nFromStorageID);
	}

	if (m_bReusableMaterial)
	{
		szWhere.AppendFormat(_T(" and product_uomrate > 1"));
	}
	else
	{
		szWhere.AppendFormat(_T(" and coalesce(product_uomrate, 0) <= 1"));
	}
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(product_name) like chr(37)||lower('%s')||chr(37)"), m_szSearch);
	}
	szSQL.Format(_T(" SELECT distinct ho_opera_table as table_id,") \
	_T("			(select hst_name from hms_surgery_table where hst_idx = ho_opera_table) as table_name,") \
	_T("            hmt_product_id as product_id,") \
	_T("            product_code,") \
	_T("            product_name,") \
	_T("            product_uomname,") \
	_T("            product_countryname,") \
	_T("            SUM(hmt_qtyissue) over (partition by hmt_product_id||'.'||ho_opera_table) AS table_qtyissue,") \
	_T("            product_name AS search_str,") \
	_T("			sum(hmt_qtyissue) over (partition by hmt_product_id) as product_qtyissue,") \
	_T("			case when hmt_reftransaction_id > 0 and hmt_status = 'S' then 'Y' else 'N' end as in_wait,") \
	_T("  (SELECT mt_orderno FROM m_transaction ") \
	_T("   WHERE mt_transaction_id = hmt_reftransaction_id") \
	_T("   AND mt_doctype = 'CSO') as sophieubs") \
	_T(" FROM       hms_medical_transaction_debt") \
	_T(" LEFT JOIN  hms_pharmaorder_view ON ( hpo_docno = hmt_docno AND hpo_orderid = hmt_orderid )") \
	_T(" INNER JOIN hms_operation ON ( hmt_docno = ho_docno AND hpo_reference_id = ho_idx )") \
	_T(" LEFT JOIN  m_product_view ON( product_id = hmt_product_id )") \
	_T(" WHERE      1 = 1 AND hmt_status IN( 'O', 'S' ) %s") \
	_T(" ORDER      BY ho_opera_table,product_name,product_uomname "), szWhere);
	//_T(" GROUP      BY ho_opera_table,hmt_product_id,product_name,product_uomname,product_countryname, product_code")
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("product_id"), nNextID);
		if (nNextID != nPrevID)
		{
			nItem = m_wndDebtList.AddItems(
				rs.GetValue(_T("product_id")), 
				_T("0"),
				rs.GetValue(_T("Mark")), 
				_T(""), 
				rs.GetValue(_T("product_name")), 
				rs.GetValue(_T("product_uomname")), 
				rs.GetValue(_T("product_qtyissue")), 
				rs.GetValue(_T("product_countryname")), NULL);
			m_wndDebtList.SetItemBkColor(nItem,  RGB(0, 128, 192), FALSE);
			m_wndDebtList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
			nPrevID = nNextID;
			nIdx = 1;
			//TODO: decorate
		}
		else
		{
		}
		nItem = m_wndDebtList.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("table_id")),
			rs.GetValue(_T("Mark")), 
			int2str(nIdx++), 
			rs.GetValue(_T("table_name")), 
			rs.GetValue(_T("")), 
			rs.GetValue(_T("table_qtyissue")), 
			rs.GetValue(_T("product_countryname")),
		    rs.GetValue(_T("sophieubs")), NULL);
		if (rs.GetValue(_T("in_wait")) == _T("Y"))
		{
			//TODO: 
			m_wndDebtList.SetItemText(nItem, 2, _T("X"));
		}
		rs.MoveNext();
	}
	m_wndDebtList.EndLoad(); 
	return nCount;
}
void CWardPatientMedicalDebtDialog::OnDrugListDblClick(){
	
} 
void CWardPatientMedicalDebtDialog::OnDrugListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CWardPatientMedicalDebtDialog::OnDrugListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CWardPatientMedicalDebtDialog::OnDrugListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDrugList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T(" SELECT    hmt_product_id AS product_id,") \
	_T("           product_name,") \
	_T("           product_uomname,") \
	_T("           product_countryname,") \
	_T("           SUM(hmt_qtyissue) AS product_qtyissue") \
	_T(" FROM      hms_medical_transaction_debt") \
	_T(" LEFT JOIN hms_ipharmaorder ON ( hpo_docno = hmt_docno AND hpo_orderid = hmt_orderid )") \
	_T(" LEFT JOIN m_product_view ON( product_id = hmt_product_id )") \
	_T(" WHERE     1 = 1 AND hmt_status IN( 'S' ) AND hmt_reftransaction_id = %ld") \
	_T(" GROUP     BY hmt_product_id,product_name,product_uomname,product_countryname") \
	_T(" ORDER     BY product_name "), m_nTransactionID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugList.AddItems(
			rs.GetValue(_T("product_id")),
			int2str(nIdx++), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")), 
			rs.GetValue(_T("product_qtyissue")), 
			rs.GetValue(_T("product_countryname")), NULL);
		rs.MoveNext();
	}
	m_wndDrugList.EndLoad(); 
	return nCount;
}

int CWardPatientMedicalDebtDialog::OnAddWardPatientMedicalDebtDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CWardPatientMedicalDebtDialog::OnEditWardPatientMedicalDebtDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CWardPatientMedicalDebtDialog::OnDeleteWardPatientMedicalDebtDialog(){
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
 		OnCancelWardPatientMedicalDebtDialog();
 	}
	return 0;
}
int CWardPatientMedicalDebtDialog::OnSaveWardPatientMedicalDebtDialog(){
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
 		//OnWardPatientMedicalDebtDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CWardPatientMedicalDebtDialog::OnCancelWardPatientMedicalDebtDialog(){
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
int CWardPatientMedicalDebtDialog::OnWardPatientMedicalDebtDialogListLoadData(){
	return 0;
}

void CWardPatientMedicalDebtDialog::OnDebtListSelectAllItem()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_MEDICAL_DEBIT_SEND_V3(%ld, %ld, %ld, 0, 0)")
			, m_nTransactionID, m_nFromStorageID, m_nToStorageID);
	long nRet = str2long(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		OnDebtListLoadData();
		OnDrugListLoadData();
	}
}
void CWardPatientMedicalDebtDialog::OnphieutreoSelect()
{
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}