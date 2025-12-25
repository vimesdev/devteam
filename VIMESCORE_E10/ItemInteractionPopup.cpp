#include "ItemInteractionPopup.h"
#include "MainFrame_E10.h"
#include "ProductClassDialog.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CItemInteractionPopup *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CItemInteractionPopup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CItemInteractionPopup *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CItemInteractionPopup *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CItemInteractionPopup *pVw = (CItemInteractionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnXSelectFnc(CWnd *pWnd){
	CItemInteractionPopup *pVw = (CItemInteractionPopup *)pWnd;
	pVw->OnXSelect();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CItemInteractionPopup* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CItemInteractionPopup *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CItemInteractionPopup *)pWnd)->OnItemAddNew();
}*/
static int _OnAddItemInteractionPopupFnc(CWnd *pWnd){
	 return ((CItemInteractionPopup*)pWnd)->OnAddItemInteractionPopup();
} 
static int _OnEditItemInteractionPopupFnc(CWnd *pWnd){
	 return ((CItemInteractionPopup*)pWnd)->OnEditItemInteractionPopup();
} 
static int _OnDeleteItemInteractionPopupFnc(CWnd *pWnd){
	 return ((CItemInteractionPopup*)pWnd)->OnDeleteItemInteractionPopup();
} 
static int _OnSaveItemInteractionPopupFnc(CWnd *pWnd){
	 return ((CItemInteractionPopup*)pWnd)->OnSaveItemInteractionPopup();
} 
static int _OnCancelItemInteractionPopupFnc(CWnd *pWnd){
	 return ((CItemInteractionPopup*)pWnd)->OnCancelItemInteractionPopup();
} 
CItemInteractionPopup::CItemInteractionPopup(CWnd *pParent):
	CGuiPopup(pParent){
	m_nFirstItemID = 0;
	m_nSecondItemID = 0;
	m_nDlgWidth = 600;
	m_nDlgHeight = 120;
	SetDefaultValues();
}
CItemInteractionPopup::~CItemInteractionPopup(){
}
void CItemInteractionPopup::OnCreateComponents(){
	m_wndGenericInformation.Create(this, _T("Generic Information"), 5, 5, 590, 120);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 90, 55);
	m_wndName.Create(this,95, 30, 337, 55); 
	m_wndTypeLabel.Create(this, _T("Type"), 340, 30, 420, 55);
	m_wndType.Create(this,425, 30, 585, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 90, 85);
	m_wndDescription.Create(this,95, 60, 585, 85); 
	m_wndItemLabel.Create(this, _T("Item"), 10, 89, 90, 115);
	m_wndItem.Create(this,95, 90, 415, 115); 
	m_wndSave.Create(this, _T("&Save"), 420, 90, 500, 115);
	m_wndX.Create(this, _T("X"), 505, 90, 585, 115);
	

}
void CItemInteractionPopup::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_hms_interaction_caseTbl.SetTableName(_T("hms_interaction_case"));
	m_hms_interaction_caseTbl.AddField(_T("hic_id"), dfInteger);
	m_hms_interaction_caseTbl.AddField(_T("hic_code"), dfText, 35);
	m_hms_interaction_caseTbl.AddField(_T("hic_name"), dfText, 81);
	m_hms_interaction_caseTbl.AddField(_T("hic_type"), dfText, 3);
	m_hms_interaction_caseTbl.AddField(_T("hic_category"), dfText, 3);
	m_hms_interaction_caseTbl.AddField(_T("hic_descr"), dfText, 1024);

	m_hms_interaction_lineTbl.SetTableName(_T("hms_interaction_line"));
	m_hms_interaction_lineTbl.AddField(_T("hil_caseid"), dfInteger);
	m_hms_interaction_lineTbl.AddField(_T("hil_item_id"), dfInteger);

}
void CItemInteractionPopup::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndX.SetEvent(WE_CLICK, _OnXSelectFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	int nMode = GetMode();
	SetMode(nMode);
	if (nMode == VM_EDIT)
		GetDataToScreen();

}
void CItemInteractionPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);

}
void CItemInteractionPopup::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hic_name name, hic_type type, hic_descr descr, hil_item_id item_id") \
				 _T(" FROM hms_interaction_case ") \
				 _T(" LEFT JOIN hms_interaction_line ON (hic_id = hil_caseid)") \
				 _T(" WHERE hic_id = %ld AND hil_item_id <> %ld"), m_nCaseID, m_nFirstItemID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szName);
		rs.GetValue(_T("type"), m_szTypeKey);
		rs.GetValue(_T("descr"), m_szDescription);
		rs.GetValue(_T("item_id"), m_szItemKey);
		m_nSecondItemID = str2long(m_szItemKey);
		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_NONE);
	
}
void CItemInteractionPopup::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_hms_interaction_caseTbl.SetValue(_T("hic_code"), _T(""));
	m_hms_interaction_caseTbl.SetValue(_T("hic_name"), m_szName);
	m_hms_interaction_caseTbl.SetValue(_T("hic_type"), m_szTypeKey);
	m_hms_interaction_caseTbl.SetValue(_T("hic_category"), _T(""));
	m_hms_interaction_caseTbl.SetValue(_T("hic_descr"), m_szDescription);

	m_hms_interaction_lineTbl.SetValue(_T("hil_caseid"), m_nCaseID);
	m_hms_interaction_lineTbl.SetValue(_T("hil_item_id"), m_szItemKey);

}
void CItemInteractionPopup::SetDefaultValues(){

	m_szName.Empty();
	m_szTypeKey.Empty();
	m_szDescription.Empty();
	m_szItemKey.Empty();
	m_nCaseID = 0;

}
int CItemInteractionPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
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
		m_wndName.SetFocus();
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CItemInteractionPopup::OnNameChange(){
	
} */
/*void CItemInteractionPopup::OnNameSetfocus(){
	
} */
/*void CItemInteractionPopup::OnNameKillfocus(){
	
} */
int CItemInteractionPopup::OnNameCheckValue(){
	return 0;
} 
void CItemInteractionPopup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CItemInteractionPopup::OnTypeSelendok(){
	 
}
/*void CItemInteractionPopup::OnTypeSetfocus(){
	
}*/
/*void CItemInteractionPopup::OnTypeKillfocus(){
	
}*/
long CItemInteractionPopup::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.AddItems(_T("1"), _T("Nghi\xEAm tr\x1ECDng"));
	m_wndType.AddItems(_T("2"), _T("Trung \x62\xECnh"));
	m_wndType.AddItems(_T("3"), _T("Nh\x1EB9"));
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CItemInteractionPopup::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CItemInteractionPopup::OnDescriptionChange(){
	
} */
/*void CItemInteractionPopup::OnDescriptionSetfocus(){
	
} */
/*void CItemInteractionPopup::OnDescriptionKillfocus(){
	
} */
int CItemInteractionPopup::OnDescriptionCheckValue(){
	return 0;
} 
void CItemInteractionPopup::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveItemInteractionPopup();
} 
void CItemInteractionPopup::OnXSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
void CItemInteractionPopup::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CItemInteractionPopup::OnItemSelendok(){
	 
}
/*void CItemInteractionPopup::OnItemSetfocus(){
	
}*/
/*void CItemInteractionPopup::OnItemKillfocus(){
	
}*/
long CItemInteractionPopup::OnItemLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" and mpc_product_class_id='%s'"), m_szItemKey);
	}
	szWhere.AppendFormat(_T(" AND mpc_product_class_id <> %ld"), m_nFirstItemID);
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mpc_product_class_id as id, mpc_name as name FROM m_product_class WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CItemInteractionPopup::OnItemAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
int CItemInteractionPopup::OnAddItemInteractionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CItemInteractionPopup::OnEditItemInteractionPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CItemInteractionPopup::OnDeleteItemInteractionPopup(){
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
 		OnCancelItemInteractionPopup();
 	}
	return 0;
}
int CItemInteractionPopup::OnSaveItemInteractionPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL, szCode;
	CRecord rs(&pMF->m_db);
	int ret = 0;
	if (m_nFirstItemID < str2int(m_szItemKey))
		szCode.Format(_T("%d,%s"), m_nFirstItemID, m_szItemKey);
	else
		szCode.Format(_T("%s,%d"), m_szItemKey, m_nFirstItemID);
	if(GetMode() == VM_ADD){
		//KT da co tuong tac chua
		szSQL.Format(_T("SELECT count(*) cnt FROM hms_interaction_case WHERE hic_code = '%s'"), szCode);
		ret = rs.ExecSQL(szSQL);
		_debug(_T("cnt:%d"), ret);
		if (rs.GetIntValue() > 0)
		{
			//ShowMessageBox(_T("This interaction has been setup!"), MB_ICONSTOP);
			m_wndType.SetToolTipMessage(_T("This interaction has been setup!"));
			return -1;
		}

		pMF->BeginTransaction();
		szSQL.Format(_T("AD_GETNEXTVAL('HMS_INTERACTION_CASE_ID_ASQ', 'Y')"));
		m_nCaseID = str2int(pMF->ExecDML(szSQL));
		_debug(_T("New Case ID: %d"), m_nCaseID);
		m_hms_interaction_caseTbl.SetValue(_T("hic_id"), m_nCaseID);
 		szSQL = m_hms_interaction_caseTbl.GetInsertSQL();
		ret = pMF->ExecSQL(szSQL);
		if (ret < 0)
		{
			pMF->Rollback();
			return -1;
		}
		//Them line item key
		m_hms_interaction_lineTbl.SetValue(_T("hil_caseid"), m_nCaseID);
		szSQL = m_hms_interaction_lineTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		if (ret < 0)
		{
			pMF->Rollback();
			return -1;
		}
		//Tu them line first item 
		m_hms_interaction_lineTbl.SetValue(_T("hil_item_id"), m_nFirstItemID);
		szSQL = m_hms_interaction_lineTbl.GetInsertSQL();
		pMF->ExecSQL(szSQL);
		if (ret < 0)
		{
			pMF->Rollback();
			return -1;
		}

		szSQL.Format(_T("UPDATE hms_interaction_case SET hic_code = '%s' WHERE hic_id = %ld"), szCode, m_nCaseID);
		pMF->ExecSQL(szSQL);
		pMF->Commit();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
	
 		szWhere.Format(_T(" WHERE hic_id = %ld"), m_nCaseID);
		szSQL = m_hms_interaction_caseTbl.GetUpdateSQL(_T("hic_id, hic_code"));
 		szSQL += szWhere;
		ret = pMF->ExecSQL(szSQL);
		//Update old item id if not equal
		_debug(_T("Old: %ld|New: %ld"), m_nSecondItemID, str2long(m_szItemKey));
		if (m_nSecondItemID != str2long(m_szItemKey))
		{
			szSQL.Format(_T("UPDATE hms_interaction_line SET hil_item_id = %s WHERE hil_item_id = %ld"), m_szItemKey, m_nSecondItemID);
			ret = pMF->ExecSQL(szSQL);
			if (ret > 0)
			{
				szSQL.Format(_T("UPDATE hms_interaction_case SET hic_code = '%s' WHERE hic_id = %ld"), szCode, m_nCaseID);
				pMF->ExecSQL(szSQL);
			}
			else
			{
				_fmsg(_T("Update line failed!"));
			}
		}
 	}
 _fmsg(_T("%s"), szSQL);
 	if(ret > 0)
 	{
		((CProductClassDialog*) m_pWnd)->OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	return ret;
}
int CItemInteractionPopup::OnCancelItemInteractionPopup(){
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
int CItemInteractionPopup::OnItemInteractionPopupListLoadData(){
	return 0;
}
