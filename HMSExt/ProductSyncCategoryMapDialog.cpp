#include "ProductSyncCategoryMapDialog.h"
#include "GuiMainFrame.h"
//#include "AdBusinessPartnerDialog.h"
//#include "AdManufactureDialog.h"
//#include "AdUOMDialog.h"
//#include "AdContractPackageDialog.h"
//#include "AdContractDialog.h"

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnNameCheckValue();
} 

static void _OnAddClickFnc(CWnd *pWnd){
	CProductSyncCategoryMapDialog *pVw = (CProductSyncCategoryMapDialog *)pWnd;
	pVw->OnAddClick();
}

static void _OnMappedNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductSyncCategoryMapDialog* )pWnd)->OnMappedNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMappedNameSelendokFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameSelendok();
}
/*static void _OnMappedNameSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameKillfocus();
}*/
/*static void _OnMappedNameKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameKillfocus();
}*/
static long _OnMappedNameLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameLoadData();
}
/*static void _OnMappedNameAddNewFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedNameAddNew();
}*/
/*static void _OnMappedIDChangeFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDChange();
} */
/*static void _OnMappedIDSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDSetfocus();} */ 
/*static void _OnMappedIDKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDKillfocus();
} */
static int _OnMappedIDCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnMappedIDCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductSyncCategoryMapDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncCategoryMapDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CProductSyncCategoryMapDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductSyncCategoryMapDialog *pVw = (CProductSyncCategoryMapDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSyncCategoryMapDialog *pVw = (CProductSyncCategoryMapDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnAddProductSyncCategoryMapDialog();
} 
static int _OnEditProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnEditProductSyncCategoryMapDialog();
} 
static int _OnDeleteProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnDeleteProductSyncCategoryMapDialog();
} 
static int _OnSaveProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnSaveProductSyncCategoryMapDialog();
} 
static int _OnCancelProductSyncCategoryMapDialogFnc(CWnd *pWnd){
	 return ((CProductSyncCategoryMapDialog*)pWnd)->OnCancelProductSyncCategoryMapDialog();
} 
CProductSyncCategoryMapDialog::CProductSyncCategoryMapDialog(CWnd *pParent, CString szTable, CString szUID):
	CGuiDialog(pParent){
	m_szTable  = szTable;
	m_szUID = szUID;
	m_nDlgWidth = 485;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CProductSyncCategoryMapDialog::~CProductSyncCategoryMapDialog(){
}
void CProductSyncCategoryMapDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 105, 30);
	m_wndName.Create(this,110, 5, 480, 60,false ,true, true); 
	m_wndMappedNameLabel.Create(this, _T("Mapped Name"), 5, 65, 105, 90);
	m_wndMappedName.Create(this,110, 65, 480, 90); 
	m_wndMappedIDLabel.Create(this, _T("Mapped ID"), 5, 95, 105, 120);
	m_wndMappedID.Create(this,110, 95, 260, 120); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 125, 105, 150);
	m_wndType.Create(this,110, 125, 480, 150); 
	m_wndSave.Create(this, _T("&Save"), 315, 155, 395, 180);
	m_wndClose.Create(this, _T("&Close"), 400, 155, 480, 180);

}
void CProductSyncCategoryMapDialog::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_wndName.SetReadOnly(true);
	m_wndName.SetLimitText(35);
	m_wndMappedName.SetCheckValue(true);
	m_wndMappedName.LimitText(35);
	m_wndMappedID.SetLimitText(35);
	m_wndMappedID.SetReadOnly(true);

	m_wndMappedName.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndMappedName.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndMappedName.InsertColumn(2, _T("Descr"), CFMT_TEXT, 100);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndType.InsertColumn(2, _T("Descr"), CFMT_TEXT, 50);

}
void CProductSyncCategoryMapDialog::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndMappedNameLabel.SetHyperlink(true);
	m_wndMappedNameLabel.SetEvent(WE_CLICK, _OnAddClickFnc);

	m_wndMappedName.SetEvent(WE_SELENDOK, _OnMappedNameSelendokFnc);
	//m_wndMappedName.SetEvent(WE_SETFOCUS, _OnMappedNameSetfocusFnc);
	//m_wndMappedName.SetEvent(WE_KILLFOCUS, _OnMappedNameKillfocusFnc);
	m_wndMappedName.SetEvent(WE_SELCHANGE, _OnMappedNameSelectChangeFnc);
	m_wndMappedName.SetEvent(WE_LOADDATA, _OnMappedNameLoadDataFnc);
	//m_wndMappedName.SetEvent(WE_ADDNEW, _OnMappedNameAddNewFnc);
	//m_wndMappedID.SetEvent(WE_CHANGE, _OnMappedIDChangeFnc);
	//m_wndMappedID.SetEvent(WE_SETFOCUS, _OnMappedIDSetfocusFnc);
	//m_wndMappedID.SetEvent(WE_KILLFOCUS, _OnMappedIDKillfocusFnc);
	m_wndMappedID.SetEvent(WE_CHECKVALUE, _OnMappedIDCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_EDIT);
	if(m_szTable != _T("m_product_category"))
	{
		m_wndType.ShowWindow(SW_HIDE);
		m_wndTypeLabel.ShowWindow(SW_HIDE);
	}
}
void CProductSyncCategoryMapDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndMappedName.GetDlgCtrlID(), m_szMappedNameKey);
	DDX_Text(pDX, m_wndMappedID.GetDlgCtrlID(), m_szMappedID);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);

}
void CProductSyncCategoryMapDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("MappedName")] =  m_szMappedNameKey;
	m_jData[_T("MappedID")] =  m_szMappedID;
	m_jData[_T("Type")] =  m_szTypeKey;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("MappedName")].GetValue(m_szMappedNameKey);
	m_jData[_T("MappedID")].GetValue(m_szMappedID);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	}

}
void CProductSyncCategoryMapDialog::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(m_szTable == _T("m_product_category"))
	{
		szSQL.Format(_T("SELECT m_product_type_id FROM m_product_import WHERE m_product_import_uid='%s' and TEN_NHOM_VTYT='%s'"), m_szUID, m_szName);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
			rs.GetValue(_T("m_product_type_id"), m_szTypeKey);
	}

}
void CProductSyncCategoryMapDialog::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CProductSyncCategoryMapDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szMappedNameKey.Empty();
	m_szMappedID.Empty();
	m_szTypeKey.Empty();

}
int CProductSyncCategoryMapDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
			m_szMappedID = m_szMappedNameKey;
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CProductSyncCategoryMapDialog::OnNameChange(){
	
} */
/*void CProductSyncCategoryMapDialog::OnNameSetfocus(){
	
} */
/*void CProductSyncCategoryMapDialog::OnNameKillfocus(){
	
} */
int CProductSyncCategoryMapDialog::OnNameCheckValue(){
	return 0;
} 
void CProductSyncCategoryMapDialog::OnMappedNameSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncCategoryMapDialog::OnMappedNameSelendok(){
	 UpdateData(true);
	 m_szMappedID = m_szMappedNameKey;
	 UpdateData(false);
}
/*void CProductSyncCategoryMapDialog::OnMappedNameSetfocus(){
	
}*/
/*void CProductSyncCategoryMapDialog::OnMappedNameKillfocus(){
	
}*/
long CProductSyncCategoryMapDialog::OnMappedNameLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFieldID;
_tprintf(_T("%s"), m_szTable);	
	if(m_szTable == _T("ad_partner"))
	{
		szFieldID = _T("adp_partner_id");
		szWhere.AppendFormat(_T(" and adp_org_id in ('%s','GL') "), pMF->GetModuleID());
		if(m_wndMappedName.IsSearchKey() && !m_szMappedNameKey.IsEmpty()){
			szWhere.AppendFormat(_T(" and %s='%s' "), szFieldID,m_szMappedNameKey);
		}
		szSQL.Format(_T("SELECT adp_partner_id as id, adp_name as name, adp_org_id ") \
			_T("FROM ad_partner ") \
			_T("WHERE adp_isactive='Y' %s ") \
			_T("ORDER BY adp_name"), szWhere);

	}
	if(m_szTable == _T("ad_manufacture"))
	{
		szFieldID = _T("adm_manufacture_id");
		szWhere.AppendFormat(_T(" and adm_org_id in ('%s','GL') "), pMF->GetModuleID());
		if(m_wndMappedName.IsSearchKey() && str2long(m_szMappedNameKey) > 0){
			szWhere.AppendFormat(_T(" and %s=%ld "), szFieldID, str2long(m_szMappedNameKey));
		}
		szSQL.Format(_T("SELECT adm_manufacture_id as id, ") \
			_T("			adm_name as name,  ") \
			_T("			adc_name as descr") \
			_T(" FROM ad_manufacture ") \
			_T(" LEFT JOIN ad_country ON (adc_country_id = adm_country_id)") \
			_T(" WHERE adm_isactive='Y' %s ") \
			_T(" ORDER BY adm_name"), szWhere);

	}

	if(m_szTable == _T("ad_uom"))
	{
		szFieldID = _T("adu_uom_id");
		
		if(m_wndMappedName.IsSearchKey() && str2long(m_szMappedNameKey) > 0){
			szWhere.AppendFormat(_T(" and %s=%ld "), szFieldID, str2long(m_szMappedNameKey));
		}
		szSQL.Format(_T("SELECT adu_uom_id as id, adu_name as name ") \
			_T("FROM ad_uom ") \
			_T("WHERE adu_isactive='Y' %s ") \
			_T("ORDER BY adu_name"), szWhere);

	}

	if(m_szTable == _T("m_product_category"))
	{
		szFieldID = _T("mpc_product_category_id");
		szWhere.AppendFormat(_T(" and mpc_org_id in ('%s','GL') "), pMF->GetModuleID());
		if(m_wndMappedName.IsSearchKey() && !m_szMappedNameKey.IsEmpty()){
			szWhere.AppendFormat(_T(" and %s='%s' "), szFieldID,m_szMappedNameKey);
		}
		szSQL.Format(_T("SELECT mpc_product_category_id as id, mpc_name as name ") \
			_T("FROM m_product_category ") \
			_T("WHERE mpc_isactive='Y' and mpc_code='A.I' %s ") \
			_T("ORDER BY mpc_name"), szWhere);
	}
	

	if(m_szTable == _T("ad_contract_package"))
	{
		szFieldID = _T("adcp_contract_package_uid");
		szWhere.Format(_T(" and adcp_org_id in ('%s','GL') "), pMF->GetModuleID());
		if(m_wndMappedName.IsSearchKey() && !m_szMappedNameKey.IsEmpty()){
			szWhere.AppendFormat(_T(" and %s='%s' "), szFieldID, m_szMappedNameKey);
		}
		szSQL.Format(_T("SELECT adcp_contract_package_uid as id, ADCP_DESCRIPTION as name ") \
			_T("FROM ad_contract_package ") \
			_T("WHERE adcp_isactive='Y' %s ") \
			_T("ORDER BY adcp_description "), szWhere);

	}

	if(m_szTable == _T("ad_contract"))
	{
		szFieldID = _T("adc_contract_id");
		szWhere.Format(_T(" and adc_org_id in ('%s','GL') "), pMF->GetModuleID());
		if(m_wndMappedName.IsSearchKey() && !m_szMappedNameKey.IsEmpty()){
			szWhere.AppendFormat(_T(" and %s='%s' "), szFieldID, m_szMappedNameKey);
		}
		szSQL.Format(_T("SELECT adc_contract_id as id, ADC_DESCRIPTION as name ") \
			_T("FROM ad_contract ") \
			_T("WHERE adc_isactive='Y' %s ") \
			_T("ORDER BY adc_description "), szWhere);

	}
_tprintf(_T("%s"), szSQL);
	m_wndMappedName.DeleteAllItems(); 
	int nCount = 0;
	
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMappedName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("descr")), 
			NULL
			);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CProductSyncCategoryMapDialog::OnMappedNameAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
/*void CProductSyncCategoryMapDialog::OnMappedIDChange(){
	
} */
/*void CProductSyncCategoryMapDialog::OnMappedIDSetfocus(){
	
} */
/*void CProductSyncCategoryMapDialog::OnMappedIDKillfocus(){
	
} */
int CProductSyncCategoryMapDialog::OnMappedIDCheckValue(){
	return 0;
} 
void CProductSyncCategoryMapDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncCategoryMapDialog::OnTypeSelendok(){
	 
}
/*void CProductSyncCategoryMapDialog::OnTypeSetfocus(){
	
}*/
/*void CProductSyncCategoryMapDialog::OnTypeKillfocus(){
	
}*/
long CProductSyncCategoryMapDialog::OnTypeLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and mpt_product_type_id='%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpt_product_type_id as id, mpt_name as name ") \
		_T("FROM m_product_type WHERE mpt_org_id='%s' %s ORDER BY id "), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CProductSyncCategoryMapDialog::OnTypeAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	
} */
void CProductSyncCategoryMapDialog::OnSaveSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	OnSaveProductSyncCategoryMapDialog();
} 
void CProductSyncCategoryMapDialog::OnCloseSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductSyncCategoryMapDialog::OnAddProductSyncCategoryMapDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSyncCategoryMapDialog::OnEditProductSyncCategoryMapDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSyncCategoryMapDialog::OnDeleteProductSyncCategoryMapDialog(){
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
 		OnCancelProductSyncCategoryMapDialog();
 	}
	return 0;
}
int CProductSyncCategoryMapDialog::OnSaveProductSyncCategoryMapDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	if(m_szTable == _T("m_product_category"))
		m_szItemID = m_szTypeKey;
	else
		m_szItemID.Empty();

	szSQL.Format(_T("M_PRODUCT_IMPORT_MAPITEM('%s','%s','%s', '%s', '%s','%s','%s')"),
		pMF->GetModuleID(), pMF->GetCurrentUser(), m_szTable, m_szUID, m_szItemID,m_szName, m_szMappedID);
 _tprintf(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSyncCategoryMapDialog::OnCancelProductSyncCategoryMapDialog(){
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
int CProductSyncCategoryMapDialog::OnProductSyncCategoryMapDialogListLoadData(){
	return 0;
}


void CProductSyncCategoryMapDialog::OnAddClick()
{
	
	CWnd* pWnd = NULL;
	if (m_dlgs.Lookup(m_szTable, pWnd))
	{
		if (pWnd != NULL)
		{
			CGuiDialog* pDlg = (CGuiDialog*)pWnd;
			pDlg->DoModal();
		}
		
	}
	if(m_szTable == _T("ad_partner"))
	{
		//CAdBusinessPartnerDialog  dlg(this,VM_ADD);
		//dlg.DoModal();
	}
	if(m_szTable == _T("ad_manufacture"))
	{
		//CAdManufactureDialog  dlg(this,VM_ADD);
		//dlg.DoModal();
	}

	if(m_szTable == _T("ad_uom"))
	{
		//CAdUOMDialog  dlg(this,VM_ADD);
		//dlg.DoModal();
	}
	if(m_szTable == _T("ad_contract_package"))
	{
		//CAdContractPackageDialog  dlg(this,VM_ADD, 0);
		//dlg.DoModal();
	}
	if(m_szTable == _T("ad_contract"))
	{
		//CAdContractDialog  dlg(this,VM_ADD, 0);
		//dlg.DoModal();
	}
	
}