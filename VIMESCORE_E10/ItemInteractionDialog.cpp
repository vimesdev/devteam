#include "ItemInteractionDialog.h"
#include "MainFrame_E10.h"
#include "ItemInteractionLineInput.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CItemInteractionDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CItemInteractionDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CItemInteractionDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CItemInteractionDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CItemInteractionDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CItemInteractionDialog *pVw = (CItemInteractionDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CItemInteractionDialog *pVw = (CItemInteractionDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CItemInteractionDialog *pVw = (CItemInteractionDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnAddLineSelectFnc(CWnd *pWnd){
	CItemInteractionDialog *pVw = (CItemInteractionDialog *)pWnd;
	pVw->OnAddLineSelect();
} 
static long _OnDetailListLoadDataFnc(CWnd *pWnd){
	return ((CItemInteractionDialog*)pWnd)->OnDetailListLoadData();
} 
static void _OnDetailListDblClickFnc(CWnd *pWnd){
	((CItemInteractionDialog*)pWnd)->OnDetailListDblClick();
} 
static void _OnDetailListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CItemInteractionDialog*)pWnd)->OnDetailListSelectChange(nOldItem, nNewItem);
} 
static int _OnDetailListDeleteItemFnc(CWnd *pWnd){
	 return ((CItemInteractionDialog*)pWnd)->OnDetailListDeleteItem();
} 
static int _OnAddItemInteractionDialogFnc(CWnd *pWnd){
	 return ((CItemInteractionDialog*)pWnd)->OnAddItemInteractionDialog();
} 
static int _OnEditItemInteractionDialogFnc(CWnd *pWnd){
	 return ((CItemInteractionDialog*)pWnd)->OnEditItemInteractionDialog();
} 
static int _OnDeleteItemInteractionDialogFnc(CWnd *pWnd){
	 return ((CItemInteractionDialog*)pWnd)->OnDeleteItemInteractionDialog();
} 
static int _OnSaveItemInteractionDialogFnc(CWnd *pWnd){
	 return ((CItemInteractionDialog*)pWnd)->OnSaveItemInteractionDialog();
} 
static int _OnCancelItemInteractionDialogFnc(CWnd *pWnd){
	 return ((CItemInteractionDialog*)pWnd)->OnCancelItemInteractionDialog();
} 
CItemInteractionDialog::CItemInteractionDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CItemInteractionDialog::~CItemInteractionDialog(){
}
void CItemInteractionDialog::OnCreateComponents(){
	m_wndGenericInformation.Create(this, _T("Generic Information"), 5, 5, 405, 230);
	m_wndNameLabel.Create(this, _T("Name"), 10, 140, 90, 165);
	m_wndName.Create(this,95, 140, 400, 165); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 170, 90, 195);
	m_wndType.Create(this,95, 170, 400, 195); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 200, 90, 225);
	m_wndDescription.Create(this,95, 200, 400, 225); 
	m_wndAdd.Create(this, _T("&Add"), 155, 235, 235, 260);
	m_wndEdit.Create(this, _T("&Edit"), 240, 235, 320, 260);
	m_wndDelete.Create(this, _T("&Delete"), 325, 235, 405, 260);
	m_wndAddLine.Create(this, _T("Add Line"), 5, 235, 85, 260);
	m_wndDetailList.Create(this,10, 30, 400, 135); 

}
void CItemInteractionDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	//m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDetailList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndDetailList.InsertColumn(1, _T("LineID"), CFMT_NUMBER, 0);
	m_wndDetailList.InsertColumn(2, _T("ItemID"), CFMT_NUMBER, 0);
	m_wndDetailList.InsertColumn(3, _T("STT"), CFMT_TEXT, 80);
	m_wndDetailList.InsertColumn(4, _T("Name"), CFMT_TEXT, 250);

	m_hms_interaction_caseTbl.SetTableName(_T("hms_interaction_case"));
	m_hms_interaction_caseTbl.AddField(_T("hic_id"), dfInteger);
	m_hms_interaction_caseTbl.AddField(_T("hic_code"), dfText, 35);
	m_hms_interaction_caseTbl.AddField(_T("hic_name"), dfText, 81);
	m_hms_interaction_caseTbl.AddField(_T("hic_type"), dfText, 3);
	m_hms_interaction_caseTbl.AddField(_T("hic_category"), dfText, 3);
	m_hms_interaction_caseTbl.AddField(_T("hic_descr"), dfText, 1024);

}
void CItemInteractionDialog::OnSetWindowEvents(){
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
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndAddLine.SetEvent(WE_CLICK, _OnAddLineSelectFnc);
	m_wndDetailList.SetEvent(WE_SELCHANGE, _OnDetailListSelectChangeFnc);
	m_wndDetailList.SetEvent(WE_LOADDATA, _OnDetailListLoadDataFnc);
	m_wndDetailList.SetEvent(WE_DBLCLICK, _OnDetailListDblClickFnc);
	m_wndDetailList.AddEvent(1, _T("Delete"), _OnDetailListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_NONE);

}
void CItemInteractionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CItemInteractionDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CItemInteractionDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_hms_interaction_caseTbl.SetValue(_T("hic_code"), _T(""));
	m_hms_interaction_caseTbl.SetValue(_T("hic_name"), m_szName);
	m_hms_interaction_caseTbl.SetValue(_T("hic_type"), m_szTypeKey);
	m_hms_interaction_caseTbl.SetValue(_T("hic_category"), _T(""));
	m_hms_interaction_caseTbl.SetValue(_T("hic_descr"), m_szDescription);
}
void CItemInteractionDialog::SetDefaultValues(){
	m_nCaseID = 0;
	m_szName.Empty();
	m_szTypeKey.Empty();
	m_szDescription.Empty();

}
int CItemInteractionDialog::SetMode(int nMode){
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
		m_wndAddLine.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CItemInteractionDialog::OnNameChange(){
	
} */
/*void CItemInteractionDialog::OnNameSetfocus(){
	
} */
/*void CItemInteractionDialog::OnNameKillfocus(){
	
} */
int CItemInteractionDialog::OnNameCheckValue(){
	return 0;
} 
void CItemInteractionDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CItemInteractionDialog::OnTypeSelendok(){
	 
}
/*void CItemInteractionDialog::OnTypeSetfocus(){
	
}*/
/*void CItemInteractionDialog::OnTypeKillfocus(){
	
}*/
long CItemInteractionDialog::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
/*void CItemInteractionDialog::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CItemInteractionDialog::OnDescriptionChange(){
	
} */
/*void CItemInteractionDialog::OnDescriptionSetfocus(){
	
} */
/*void CItemInteractionDialog::OnDescriptionKillfocus(){
	
} */
int CItemInteractionDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CItemInteractionDialog::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	SetMode(VM_ADD);
} 
void CItemInteractionDialog::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CItemInteractionDialog::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CItemInteractionDialog::OnAddLineSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveItemInteractionDialog();
	CItemInteractionLineInput *newPopup = new CItemInteractionLineInput(this);
	newPopup->m_nCaseID = m_nCaseID;
	newPopup->SetMode(VM_ADD);
	newPopup->ShowPopup(&m_wndDetailList);
} 
void CItemInteractionDialog::OnDetailListDblClick(){
	
} 
void CItemInteractionDialog::OnDetailListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CItemInteractionDialog::OnDetailListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CItemInteractionDialog::OnDetailListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hic_id id, lineid, itemid, name FROM hms_interaction_case"));
	m_wndDetailList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDetailList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("LineID")), 
			rs.GetValue(_T("ItemID")), 
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndDetailList.EndLoad(); 
	return nCount;
}
int CItemInteractionDialog::OnAddItemInteractionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CItemInteractionDialog::OnEditItemInteractionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CItemInteractionDialog::OnDeleteItemInteractionDialog(){
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
 		OnCancelItemInteractionDialog();
 	}
	return 0;
}
int CItemInteractionDialog::OnSaveItemInteractionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL.Format(_T("AD_GETNEXTVAL('HMS_INTERACTION_CASE_ID_ASQ', 'Y')"));
		m_nCaseID = str2int(pMF->ExecDML(szSQL));
		_debug(_T("New Case ID: %d"), m_nCaseID);
		m_hms_interaction_caseTbl.SetValue(_T("hic_id"), m_nCaseID);
 		szSQL = m_hms_interaction_caseTbl.GetInsertSQL();
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
		OnDetailListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CItemInteractionDialog::OnCancelItemInteractionDialog(){
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
int CItemInteractionDialog::OnItemInteractionDialogListLoadData(){
	return 0;
}
