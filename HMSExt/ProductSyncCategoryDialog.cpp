#include "ProductSyncCategoryDialog.h"
#include "GuiMainFrame.h"
#include "ProductSyncCategoryMapDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncCategoryDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductSyncCategoryDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSyncCategoryDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAllSelectFnc(CWnd *pWnd){
	  ((CProductSyncCategoryDialog*)pWnd)->OnAllSelect();
}
static void _OnMappedSelectFnc(CWnd *pWnd){
	  ((CProductSyncCategoryDialog*)pWnd)->OnMappedSelect();
}
static void _OnNoneMappedSelectFnc(CWnd *pWnd){
	  ((CProductSyncCategoryDialog*)pWnd)->OnNoneMappedSelect();
}
static void _OnAutoMapSelectFnc(CWnd *pWnd){
	CProductSyncCategoryDialog *pVw = (CProductSyncCategoryDialog *)pWnd;
	pVw->OnAutoMapSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSyncCategoryDialog *pVw = (CProductSyncCategoryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSyncCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryDialog*)pWnd)->OnAddProductSyncCategoryDialog();
} 
static int _OnEditProductSyncCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryDialog*)pWnd)->OnEditProductSyncCategoryDialog();
} 
static int _OnDeleteProductSyncCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryDialog*)pWnd)->OnDeleteProductSyncCategoryDialog();
} 
static int _OnSaveProductSyncCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryDialog*)pWnd)->OnSaveProductSyncCategoryDialog();
} 
static int _OnCancelProductSyncCategoryDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryDialog*)pWnd)->OnCancelProductSyncCategoryDialog();
} 
CProductSyncCategoryDialog::CProductSyncCategoryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CProductSyncCategoryDialog::~CProductSyncCategoryDialog(){
}
void CProductSyncCategoryDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 960, 580); 
	m_wndAll.Create(this, _T("Tất cả"), 5, 585, 105, 610);
	m_wndNoneMapped.Create(this, _T("Chưa map"), 110, 585, 210, 610);
	m_wndMapped.Create(this, _T("Đã map"), 215, 585, 315, 610);
	m_wndAutoMap.Create(this, _T("Tự động tạo danh mục"), 735, 585, 875, 610);
	m_wndClose.Create(this, _T("Close"), 880, 585, 960, 610);

	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
}
void CProductSyncCategoryDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

	int width = 0;
	if(m_szTable == _T("m_product_category"))
		width = 100;
	m_wndList.InsertColumn(0, _T("Stt"), CFMT_NUMBER, 30);
	m_wndList.InsertColumn(1, _T("Mã danh mục"), CFMT_TEXT, width);
	m_wndList.InsertColumn(2, _T("Tên danh mục"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Tên ánh xạ"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(4, _T("Mã ánh xạ"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T(""), CFMT_TEXT, 0);//typeid

}
void CProductSyncCategoryDialog::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAll.SetEvent(WE_CLICK, _OnAllSelectFnc);
	m_wndMapped.SetEvent(WE_CLICK, _OnMappedSelectFnc);
	m_wndNoneMapped.SetEvent(WE_CLICK, _OnNoneMappedSelectFnc);
	m_wndAutoMap.SetEvent(WE_CLICK, _OnAutoMapSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();

}
void CProductSyncCategoryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Radio(pDX, m_wndAll.GetDlgCtrlID(), m_nState);

}
void CProductSyncCategoryDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	
	}
	else
	{
	
	}

}
void CProductSyncCategoryDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductSyncCategoryDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CProductSyncCategoryDialog::SetDefaultValues(){

	m_nState = 0;

}
int CProductSyncCategoryDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
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
void CProductSyncCategoryDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	CProductSyncCategoryMapDialog dlg(this, m_szTable, m_szUID);
	dlg.m_szName = m_wndList.GetItemText(nSel, 2);
	dlg.m_szMappedNameKey = m_wndList.GetItemText(nSel, 4);
	dlg.m_szTypeKey = m_wndList.GetItemText(nSel, 6);
	
	POSITION pos = m_dlgs.GetStartPosition();
	LPCTSTR lpszKey;
	CWnd* pWnd;
	dlg.m_dlgs.RemoveAll();
	while (pos != NULL)
	{
		m_dlgs.GetNextAssoc(pos, lpszKey, pWnd);
		dlg.m_dlgs.SetAt(lpszKey, pWnd);
	}

	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
} 
void CProductSyncCategoryDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
int CProductSyncCategoryDialog::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductSyncCategoryDialog::OnListLoadData(){

	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	CString tmpStr, szWhere;
	szWhere.Empty();
	UpdateData(true);

	if(m_szTable == _T("ad_partner"))
	{
		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_partner_id,'XXX') = 'XXX' "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_partner_id,'XXX') <> 'XXX' "));
		}

		szSQL.Format(_T(" SELECT DISTINCT") \
_T("     nha_thau         AS name,") \
_T("     adp_name         AS mapped_name,") \
_T("     adp_partner_id   AS mapped_id") \
_T(" FROM m_product_import ") \
_T(" LEFT JOIN ad_partner ON ( adp_partner_id = ad_partner_id and adp_org_id in('GL','%s') ) ") \
_T(" WHERE") \
_T("     m_product_import_uid = '%s' %s ") \
_T(" ORDER BY") \
_T("     nha_thau"), pMF->GetModuleID(), m_szUID, szWhere);
	}

	if(m_szTable == _T("ad_uom"))
	{
		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_uom_id,0) = 0 "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_uom_id,0) > 0 "));
		}

		szSQL.Format(_T(" SELECT DISTINCT") \
_T("     don_vi_tinh   AS name,") \
_T("     adu_name      AS mapped_name,") \
_T("     adu_uom_id    AS mapped_id") \
_T(" FROM") \
_T("     m_product_import left") \
_T("     JOIN ad_uom ON ( adu_uom_id = ad_uom_id )") \
_T(" WHERE") \
_T("     m_product_import_uid = '%s' %s ") \
_T(" ORDER BY") \
_T("     don_vi_tinh"), m_szUID, szWhere);

	szSQL.Format(_T("    SELECT DISTINCT don_vi_tinh AS name,") \
		_T("                    adu_name AS mapped_name,") \
		_T("                    adu_uom_id AS mapped_id") \
		_T("      FROM (SELECT m_product_import_uid,") \
		_T("                   don_vi_tinh,") \
		_T("                   ad_uom_id") \
		_T("              FROM m_product_import") \
		_T("             WHERE Nvl (so_luong_quydoi, 0) <= 1") \
		_T("            UNION ALL") \
		_T("            SELECT m_product_import_uid,") \
		_T("                   don_vi_quydoi,") \
		_T("                   ad_uom_import_id") \
		_T("              FROM m_product_import") \
		_T("             WHERE so_luong_quydoi > 1) m_product_import") \
		_T(" LEFT JOIN ad_uom ON ( adu_uom_id = ad_uom_id )") \
		_T("     WHERE m_product_import_uid = '%s' %s") \
		_T("     ORDER BY don_vi_tinh "), m_szUID, szWhere);

	}

	if(m_szTable == _T("ad_manufacture"))
	{

		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_manufacture_id,0) = 0 "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_manufacture_id,0) > 0 "));
		}

		szSQL.Format(_T(" SELECT DISTINCT") \
		_T("     hang_sx AS name,") \
		_T("     adm_name||' ('||adc_name||')' AS mapped_name,") \
		_T("     adm_manufacture_id   AS mapped_id,") \
		_T("	 nuoc_sx as description ") \
		_T(" FROM m_product_import ") \
		_T(" LEFT JOIN ad_manufacture ON ( ad_manufacture.adm_manufacture_id = ad_manufacture_id and adm_org_id in('GL','%s') )") \
		_T(" LEFT JOIN ad_country ON (adc_country_id = adm_country_id)") \
		_T(" WHERE m_product_import_uid = '%s' %s") \
		_T(" ORDER BY name"), pMF->GetModuleID(), m_szUID, szWhere);
	}


	

	if(m_szTable == _T("m_product_category"))
	{

		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(m_product_category_id,0) = 0 "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(m_product_category_id,0) > 0 "));
		}


		szSQL.Format(_T(" SELECT DISTINCT ma_nhom_vtyt as id,") \
_T("     ten_nhom_vtyt             AS name,") \
_T("     mpc_name                  AS mapped_name,") \
_T("     mpc_product_category_id   AS mapped_id, ") \
_T(" m_product_type_id as type_id ") \
_T(" FROM") \
_T("     m_product_import left") \
_T("     JOIN m_product_category ON ( mpc_product_category_id = m_product_category_id and mpc_org_id in('GL','%s') )") \
_T(" WHERE") \
_T("     m_product_import_uid = '%s' %s ") \
_T(" and ma_nhom_vtyt is not null ") \
_T(" ORDER BY") \
_T("     ten_nhom_vtyt"), pMF->GetModuleID(), m_szUID, szWhere);
		_tprintf(_T("\r\n%s"), szSQL);
	}



	if(m_szTable == _T("ad_contract_package"))
	{
		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_contract_package_uid,0) = 0 "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_contract_package_uid,0) > 0 "));
		}

		szSQL.Format(_T(" SELECT DISTINCT") \
_T("     QUYET_DINH   AS name,") \
_T("     adcp_description      AS mapped_name,") \
_T("     adcp_contract_package_uid    AS mapped_id") \
_T(" FROM") \
_T("     m_product_import left") \
_T("     JOIN ad_contract_package ON ( adcp_contract_package_uid = ad_contract_package_uid )") \
_T(" WHERE") \
_T("     m_product_import_uid = '%s' and nvl(quyet_dinh,'XXX') <> 'XXX' %s ") \
_T(" ORDER BY") \
_T("     QUYET_DINH "), m_szUID, szWhere);
	}

	if(m_szTable == _T("ad_contract"))
	{
		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_contract_id, 0) = 0 "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(ad_contract_id,0) > 0 "));
		}

		szSQL.Format(_T(" SELECT DISTINCT") \
_T("     SO_HOP_DONG   AS name,") \
_T(" ad_contract_id, nha_thau as description, ad_contract_package_uid, ") \
_T("     adc_description      AS mapped_name,") \
_T("     adc_contract_id    AS mapped_id") \
_T(" FROM") \
_T("     m_product_import left") \
_T("     JOIN ad_contract ON ( adc_contract_id = ad_contract_id )") \
_T(" WHERE") \
_T("     m_product_import_uid = '%s' %s ") \
_T(" and nvl(so_hop_dong,'XXX') <> 'XXX' ") \
_T(" ORDER BY") \
_T("     SO_HOP_DONG "), m_szUID, szWhere);
	}

	if(m_szTable == _T("hms_fee_group"))
	{
		if(m_nState == 1)
		{
			szWhere.AppendFormat(_T(" and NVL(loai_hang,'XXX') = 'XXX' "));
		}
		if(m_nState == 2)
		{
			szWhere.AppendFormat(_T(" and NVL(loai_hang,'XXX') <> 'XXX' "));
		}

		szSQL.Format(_T(" SELECT DISTINCT") \
	_T("     ma_nhom_vtyt         AS id,") \
	_T("     ten_nhom_vtyt             AS name,") \
	_T("     hfg_name         AS mapped_name,") \
	_T("     hfg_id   AS mapped_id,") \
	_T("	 nha_thau") \
	_T(" FROM m_product_import ") \
	_T(" LEFT JOIN hms_fee_group ON ( hfg_id = loai_hang ) ") \
	_T(" WHERE") \
	_T("     m_product_import_uid = '%s' %s ") \
	_T(" ORDER BY") \
	_T("     nha_thau"), m_szUID, szWhere);
	}

	_tprintf(_T("\r\n%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("mapped_name")), 
			rs.GetValue(_T("mapped_id")), 
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("type_id")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	return 0;
}
void CProductSyncCategoryDialog::OnAllSelect(){
	m_nState = 0;
	UpdateData(false);
	OnListLoadData();

}
void CProductSyncCategoryDialog::OnMappedSelect(){
	m_nState = 2;
	UpdateData(false);
	OnListLoadData();
}
void CProductSyncCategoryDialog::OnNoneMappedSelect(){
	m_nState = 1;
	UpdateData(false);
	OnListLoadData();
}
void CProductSyncCategoryDialog::OnAutoMapSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("m_product_import_automap('%s', '%s','%s','%s') "),
		pMF->GetModuleID(), pMF->GetCurrentUser(),m_szTable, m_szUID);
_tprintf(_T("\r\n%s"), szSQL);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret >= 0 )
	{
		OnListLoadData();
	}
} 
void CProductSyncCategoryDialog::OnCloseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductSyncCategoryDialog::OnAddProductSyncCategoryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSyncCategoryDialog::OnEditProductSyncCategoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSyncCategoryDialog::OnDeleteProductSyncCategoryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelProductSyncCategoryDialog();
 	}
	return 0;
}
int CProductSyncCategoryDialog::OnSaveProductSyncCategoryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
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
 		//OnProductSyncCategoryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSyncCategoryDialog::OnCancelProductSyncCategoryDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CProductSyncCategoryDialog::OnProductSyncCategoryDialogListLoadData(){
	return 0;
}
