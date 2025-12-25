#include "ProductClassICD10Dialog.h"
#include "MainFrame_E10.h"
#include "ProductClassList.h"

/*static void _OnATCCodeChangeFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnATCCodeChange();
} */
/*static void _OnATCCodeSetfocusFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnATCCodeSetfocus();} */ 
/*static void _OnATCCodeKillfocusFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnATCCodeKillfocus();
} */
static int _OnATCCodeCheckValueFnc(CWnd *pWnd){
	return ((CProductClassICD10Dialog *)pWnd)->OnATCCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CProductClassICD10Dialog *)pWnd)->OnNameCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductClassICD10Dialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CProductClassICD10Dialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CProductClassICD10Dialog *)pWnd)->OnCategoryAddNew();
}*/
static void _OnAddICDSelectFnc(CWnd *pWnd){
	CProductClassICD10Dialog *pVw = (CProductClassICD10Dialog *)pWnd;
	pVw->OnAddICDSelect();
} 
static void _OnAddICDCCDSelectFnc(CWnd *pWnd){
	CProductClassICD10Dialog *pVw = (CProductClassICD10Dialog *)pWnd;
	pVw->OnAddICDCCDSelect();
}
static long _OnListICDCCDLoadDataFnc(CWnd *pWnd){
	return ((CProductClassICD10Dialog*)pWnd)->OnListICDCCDLoadData();
} 
static void _OnListICDCCDDblClickFnc(CWnd *pWnd){
	((CProductClassICD10Dialog*)pWnd)->OnListICDCCDDblClick();
} 
static void _OnListICDCCDSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductClassICD10Dialog*)pWnd)->OnListICDCCDSelectChange(nOldItem, nNewItem);
} 
static int _OnListICDCCDDeleteItemFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnListICDCCDDeleteItem();
} 
static int _OnListICDCCDAddQueryFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnListICDCCDAddQuery();
} 

static long _OnListQueryLoadDataFnc(CWnd *pWnd){
	return ((CProductClassICD10Dialog*)pWnd)->OnListQueryLoadData();
} 
static void _OnListQueryDblClickFnc(CWnd *pWnd){
	((CProductClassICD10Dialog*)pWnd)->OnListQueryDblClick();
} 
static void _OnListQuerySelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductClassICD10Dialog*)pWnd)->OnListQuerySelectChange(nOldItem, nNewItem);
} 
static int _OnListQueryDeleteItemFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnListQueryDeleteItem();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductClassICD10Dialog *pVw = (CProductClassICD10Dialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductClassICD10Dialog *pVw = (CProductClassICD10Dialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CProductClassICD10Dialog*)pWnd)->OnActiveSelect();
}
static int _OnAddProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnAddProductClassDialog();
} 
static int _OnEditProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnEditProductClassDialog();
} 
static int _OnDeleteProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnDeleteProductClassDialog();
} 
static int _OnSaveProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnSaveProductClassDialog();
} 
static int _OnCancelProductClassDialogFnc(CWnd *pWnd){
	 return ((CProductClassICD10Dialog*)pWnd)->OnCancelProductClassDialog();
} 
CProductClassICD10Dialog::CProductClassICD10Dialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CProductClassICD10Dialog::~CProductClassICD10Dialog(){
}
void CProductClassICD10Dialog::OnCreateComponents(){
	m_wndGenericInformation.Create(this, _T("Generic Information"), 5, 5, 870, 445);
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 30, 110, 55);
	m_wndCategory.Create(this,115, 30, 415, 55); 
	m_wndATCCodeLabel.Create(this, _T("ATC Code"), 420, 30, 510, 55);
	m_wndATCCode.Create(this,515, 30, 605, 55); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 60, 110, 85);
	m_wndName.Create(this,115, 60, 415, 85); 
	m_wndIndexLabel.Create(this, _T("Index"), 420, 60, 510, 85);
	m_wndIndex.Create(this,515, 60, 605, 85);
	
	m_wndICD10Label.Create(this, _T("ICD 10 bắt buộc(BH)"), 10, 90, 210, 115);
	m_wndICD10.Create(this,215, 90, 415, 115); 
	
	m_wndICD10CCDLabel.Create(this, _T("ICD 10 chống chỉ định"), 10, 120, 210, 145);
	m_wndICD10CCD.Create(this,215, 120, 415, 145); 
	
	m_wndListICDCCD.Create(this,10, 150, 415, 285); 
	m_wndListQuery.Create(this,420, 150, 860, 285); 
	m_wndWarningLabel.Create(this, _T("Warning"), 10, 290, 110, 315);
	m_wndWarning.Create(this,115, 290, 860, 440, TRUE, FALSE, TRUE);
	m_wndActive.Create(this, _T("&Active"), 10, 450, 90, 475);
	m_wndSave.Create(this, _T("&Save"), 675, 450, 765, 475);
	m_wndClose.Create(this, _T("&Close"), 770, 450, 860, 475);

	m_wndAddICD.Create(this, _T("..."), 420, 90, 445, 115);
	m_wndAddICDCCD.Create(this, _T("..."), 420, 120, 445, 145);
	
/*	m_wndWarningLabel.Create(this, _T("Warning"), 10, 150, 110, 175);
	m_wndWarning.Create(this,115, 150, 605, 300, TRUE, FALSE, TRUE);

	m_wndSave.Create(this, _T("&Save"), 425, 310, 515, 335);
	m_wndClose.Create(this, _T("&Close"), 520, 310, 610, 335);
	m_wndActive.Create(this, _T("&Active"), 10, 310, 90, 335);
	m_wndAddICD.Create(this, _T("..."), 420, 90, 445, 115);
	m_wndAddICDCCD.Create(this, _T("..."), 420, 120, 445, 145);
*/
	
}
void CProductClassICD10Dialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
//	m_wndID.SetLimitText(35);
//	m_wndID.SetCheckValue(true);
	m_wndATCCode.SetLimitText(15);
	//m_wndATCCode.SetCheckValue(true);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndName.SetInitCap(2);
	//m_wndUnit.SetLimitText(35);
//	m_wndUnit.SetCheckValue(true);
//	m_wndUnit.SetInitCap(2);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(81);
	m_wndIndication.SetLimitText(35);
//	m_wndIndication.SetCheckValue(true);

	m_wndCategory.Format(3, 2);
	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndCategory.InsertColumn(1, _T("Code"), CFMT_TEXT, 60);
	m_wndCategory.InsertColumn(2, _T("Description"), CFMT_TEXT, 450);

	m_wndListICDCCD.InsertColumn(0, _T("ICD"), CFMT_TEXT, 40);
	m_wndListICDCCD.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndListICDCCD.InsertColumn(2, _T("Có đk"), CFMT_TEXT, 60);


	m_wndListQuery.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndListQuery.InsertColumn(1, _T("Desc"), CFMT_TEXT, 400);
	m_wndListQuery.InsertColumn(2, _T("FeeID"), CFMT_TEXT, 80);
	m_wndListQuery.InsertColumn(3, _T("Điều kiện"), CFMT_TEXT, 80);
	m_wndListQuery.InsertColumn(4, _T("Giá trị 1"), CFMT_TEXT, 80);
	m_wndListQuery.InsertColumn(5, _T("Giá trị 2"), CFMT_TEXT, 80);
	m_wndListQuery.InsertColumn(6, _T("ICD"), CFMT_TEXT, 80);


	m_product_classTbl.SetTableName(_T("m_product_class"));
	m_product_classTbl.AddField(_T("mpc_org_id"), dfText, 32); 
	m_product_classTbl.AddField(_T("mpc_createdby"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_createddate"), dfDateTime); 
	m_product_classTbl.AddField(_T("mpc_updatedby"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_updateddate"), dfDateTime); 
//	m_product_classTbl.AddField(_T("mpc_product_class_id"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_name"), dfText, 254); 
	m_product_classTbl.AddField(_T("mpc_description"), dfText, 254); 
	//m_product_classTbl.AddField(_T("mpc_unit"), dfText, 15); 
	m_product_classTbl.AddField(_T("mpc_product_category_id"), dfLong); 
	//m_product_classTbl.AddField(_T("mpc_product_type_id"), dfText, 3); 
	m_product_classTbl.AddField(_T("mpc_atccode"), dfText, 15); 
	//m_product_classTbl.AddField(_T("mpc_prepare"), dfText, 81); 
	//m_product_classTbl.AddField(_T("mpc_doseage"), dfText, 128); 
	m_product_classTbl.AddField(_T("mpc_indication"), dfText, 81); 
	//m_product_classTbl.AddField(_T("mpc_level"), dfLong); 
	m_product_classTbl.AddField(_T("mpc_line"), dfInteger); 
	m_product_classTbl.AddField(_T("mpc_isactive"), dfText, 1);
	m_product_classTbl.AddField(_T("mpc_icd10"), dfText, 124);
	m_product_classTbl.AddField(_T("mpc_icd10_ccd"), dfText, 124);
	
	m_product_classTbl.AddField(_T("mpc_warning"), dfText, 1024);


}

void CProductClassICD10Dialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndATCCode.SetEvent(WE_CHANGE, _OnATCCodeChangeFnc);
	//m_wndATCCode.SetEvent(WE_SETFOCUS, _OnATCCodeSetfocusFnc);
	//m_wndATCCode.SetEvent(WE_KILLFOCUS, _OnATCCodeKillfocusFnc);
	m_wndATCCode.SetEvent(WE_CHECKVALUE, _OnATCCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndAddICD.SetEvent(WE_CLICK, _OnAddICDSelectFnc);
	m_wndAddICDCCD.SetEvent(WE_CLICK, _OnAddICDCCDSelectFnc);
	m_wndListICDCCD.SetEvent(WE_SELCHANGE, _OnListICDCCDSelectChangeFnc);
	m_wndListICDCCD.SetEvent(WE_LOADDATA, _OnListICDCCDLoadDataFnc);
	m_wndListICDCCD.SetEvent(WE_DBLCLICK, _OnListICDCCDDblClickFnc);
	m_wndListICDCCD.AddEvent(1, _T("Delete"), _OnListICDCCDDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListICDCCD.AddEvent(2, _T("Thêm điều kiện chống chỉ định"), _OnListICDCCDAddQueryFnc, 0, VK_DELETE, 0);
	m_wndListQuery.SetEvent(WE_SELCHANGE, _OnListQuerySelectChangeFnc);
	m_wndListQuery.SetEvent(WE_LOADDATA, _OnListQueryLoadDataFnc);
	m_wndListQuery.SetEvent(WE_DBLCLICK, _OnListQueryDblClickFnc);
	m_wndListQuery.AddEvent(1, _T("Delete"), _OnListQueryDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CProductClassICD10Dialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndATCCode.GetDlgCtrlID(), m_szATCCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndIndex.GetDlgCtrlID(), m_nIndex);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndICD10.GetDlgCtrlID(), m_szICD10);
	DDX_Text(pDX, m_wndICD10CCD.GetDlgCtrlID(), m_szICD10CCD);
	DDX_Text(pDX, m_wndWarning.GetDlgCtrlID(), m_szWarning);

}
void CProductClassICD10Dialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(m_nID > 0){
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT * FROM m_product_class WHERE mpc_product_class_id=%ld "), m_nID);
		rs.ExecSQL(szSQL);
		if(rs.GetRecordCount() > 0){
			rs.GetValue(_T("mpc_name"), m_szName);
//			rs.GetValue(_T("mpc_unit"), m_szUnit);
			rs.GetValue(_T("mpc_product_category_id"), m_szCategoryKey);
			rs.GetValue(_T("mpc_atccode"), m_szATCCode);
			rs.GetValue(_T("mpc_indication"), m_szIndication);
			rs.GetValue(_T("mpc_icd10"), m_szICD10);
			rs.GetValue(_T("mpc_icd10_ccd"), m_szICD10CCD);
			CString szActive;
			rs.GetValue(_T("mpc_isactive"), szActive);
			if (szActive == _T("Y"))
				m_bActive = true;
			else
				m_bActive = false;
			rs.GetValue(_T("mpc_line"), m_nIndex);
			rs.GetValue(_T("mpc_warning"), m_szWarning);
			OnListICDCCDLoadData();
			
		}
	}
	


	UpdateData(false);

}

void CProductClassICD10Dialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_product_classTbl.SetValue(_T("mpc_createdby"), pMF->GetCurrentUser());
	m_product_classTbl.SetValue(_T("mpc_updatedby"), pMF->GetCurrentUser());
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE mpc_product_class_id=%ld"), m_nID);
		m_product_classTbl.Open(&pMF->m_db, szWhere);
	}
	m_product_classTbl.SetValue(_T("mpc_org_id"), pMF->GetModuleID());
	m_product_classTbl.SetValue(_T("mpc_name"), m_szName);
	m_product_classTbl.SetValue(_T("mpc_atccode"), m_szATCCode);
	m_product_classTbl.SetValue(_T("mpc_product_category_id"), m_szCategoryKey);
	m_product_classTbl.SetValue(_T("mpc_indication"), m_szIndication);
	m_product_classTbl.SetValue(_T("mpc_isactive"), m_bActive?_T("Y"):_T("N"));
	m_product_classTbl.SetValue(_T("mpc_line"), m_nIndex);
	m_product_classTbl.SetValue(_T("mpc_icd10"), m_szICD10);
	m_product_classTbl.SetValue(_T("mpc_icd10_ccd"), m_szICD10CCD);
	
	m_product_classTbl.SetValue(_T("mpc_warning"), m_szWarning);
}

void CProductClassICD10Dialog::SetDefaultValues(){

	m_szATCCode.Empty();
	m_szName.Empty();
	m_szUnit.Empty();
	m_szIndication.Empty();
	m_bActive = true;
	m_nIndex = 0;
	m_szICD10.Empty();
	m_szICD10CCD.Empty();
	m_szWarning.Empty();

}

int CProductClassICD10Dialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
//			m_wndID.EnableWindow(FALSE);
			if(m_szCategoryKey.IsEmpty())
				m_wndCategory.SetFocus();
			else
				m_wndName.SetFocus();

 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1); 
//			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
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
		if(nOldMode == VM_VIEW)
		{
			m_wndAddICD.EnableWindow(FALSE);
			m_wndAddICDCCD.EnableWindow(FALSE);
		}
		else
		{
			m_wndAddICD.EnableWindow(TRUE);
			m_wndAddICDCCD.EnableWindow(TRUE);
		}

 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CProductClassICD10Dialog::OnATCCodeChange(){
	
} */
/*void CProductClassICD10Dialog::OnATCCodeSetfocus(){
	
} */
/*void CProductClassICD10Dialog::OnATCCodeKillfocus(){
	
} */
int CProductClassICD10Dialog::OnATCCodeCheckValue(){
	return 0;
}
 
/*void CProductClassICD10Dialog::OnNameChange(){
	
} */
/*void CProductClassICD10Dialog::OnNameSetfocus(){
	
} */
/*void CProductClassICD10Dialog::OnNameKillfocus(){
	
} */
int CProductClassICD10Dialog::OnNameCheckValue(){
	return 0;
}
 
void CProductClassICD10Dialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CProductClassICD10Dialog::OnCategorySelendok(){
	 
}

/*void CProductClassICD10Dialog::OnCategorySetfocus(){
	
}*/
/*void CProductClassICD10Dialog::OnCategoryKillfocus(){
	
}*/
long CProductClassICD10Dialog::OnCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadProductCategoryList(&m_wndCategory, m_szCategoryKey);
	/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szName;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
		szWhere.Format(_T(" WHERE mpc_product_category_id='%s' "), m_szCategoryKey);
	};
	m_wndCategory.DeleteAllItems(); 
	int nLevel;
	szSQL.Format(_T("SELECT * FROM m_product_category  %s ORDER BY mpc_product_category_id, mpc_level, mpc_parent_id "), szWhere);
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("mpc_level"), nLevel);
		szName.Empty();
		for (int i =0; i < nLevel; i++){
			szName += _T("  ");
		}
		szName += rs.GetValue(_T("mpc_name"));
		m_wndCategory.AddItems(
			rs.GetValue(_T("mpc_product_category_id")), 
			szName,
			NULL);
		rs.MoveNext();
	}
	return nCount;
	*/
}

/*void CProductClassICD10Dialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
#include "PMICD10Class.h"
void CProductClassICD10Dialog::OnAddICDSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	
	CPMICD10Class dlg(this);
	dlg.m_szDisease = m_szICD10;
	dlg.DoModal();
	m_szICD10 = dlg.m_szDisease;
	UpdateData(false);	
}
void CProductClassICD10Dialog::OnAddICDCCDSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	if(GetMode() != VM_EDIT)
		return;
	
	CPMICD10Class dlg(this);
	dlg.m_szDisease = m_szICD10CCD;
	dlg.m_bInsert= true;
	dlg.m_nClassID= m_nID;
	dlg.DoModal();

	m_szICD10CCD = dlg.m_szDisease;
	OnListICDCCDLoadData();
	
	UpdateData(false);
	
} 

void CProductClassICD10Dialog::OnListICDCCDDblClick(){
	
} 
void CProductClassICD10Dialog::OnListICDCCDSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szICD;
	if(nNewItem <0) return;
	m_szICDSelected= m_wndListICDCCD.GetItemText(nNewItem,0);
	OnListQueryLoadData();
	
} 
int CProductClassICD10Dialog::OnListICDCCDDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndListICDCCD.GetCurSel();
	CString szICD= m_wndListICDCCD.GetItemText(nSel,0);
	CString szSQL;
	szSQL.Format(_T("delete from m_product_class_interaction where mpci_class_id=%ld and  mpci_icd='%s' "),m_nID,szICD);
	int nRet= pMF->ExecSQL(szSQL);
	if(nRet>0)
		OnListICDCCDLoadData();
	 return 0;
	 return 0;
}
#include "PMProductClassInteractionLine.h"
int CProductClassICD10Dialog::OnListICDCCDAddQuery(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CPMProductClassInteractionLine dlg(this);
	dlg.m_szICD= m_szICDSelected;
	dlg.m_nClassID= m_nID;
	dlg.DoModal();

	return 0;
}
long CProductClassICD10Dialog::OnListICDCCDLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListICDCCD.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select mpci_class_id,mpci_icd,mpci_iscondision, hi_name  ") \
				_T(" from m_product_class_interaction ") \
				_T(" left join hms_icd on (hi_icd = mpci_icd) ") \
				_T(" where mpci_class_id=%ld order by mpci_icd "), m_nID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListICDCCD.AddItems(
			rs.GetValue(_T("mpci_icd")), 
			rs.GetValue(_T("hi_name")), 
			rs.GetValue(_T("mpci_iscondision")), NULL);
		rs.MoveNext();
	}
	m_wndListICDCCD.EndLoad(); 
	return nCount;

}
void CProductClassICD10Dialog::OnListQueryDblClick(){
	
} 
void CProductClassICD10Dialog::OnListQuerySelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CProductClassICD10Dialog::OnListQueryDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndListQuery.GetCurSel();
	long nID= str2long(m_wndListQuery.GetItemText(nSel,0));
	CString szSQL;
	szSQL.Format(_T("delete from m_product_class_interactionln where mpcil_id=%ld"),nID);
	int nRet= pMF->ExecSQL(szSQL);
	if(nRet>0)
	{

		OnListQueryLoadData();
		// kiem tra xem cai ICD con dieu kien nao ko neu ko co thi update lai ve N
		szSQL.Format(_T(" select count(*) as qty from m_product_class_interactionln where mpcil_class_id=%ld and mpcil_icd='%s' "), m_nID, m_szICDSelected);
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <=0)
		{
			szSQL.Format(_T("update m_product_class_interaction set  mpci_iscondision='N' where mpci_class_id=%ld and mpci_icd='%s' "), m_nID, m_szICDSelected);
			pMF->ExecSQL(szSQL);
		}
	}
	 return 0;
} 
long CProductClassICD10Dialog::OnListQueryLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListQuery.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select mpcil_id, mpcil_feeid, mpcil_desc, MPCIL_CONDISION, mpcil_value, mpcil_value2, MPCIL_ICD from m_product_class_interactionln   ") \
				_T(" where mpcil_class_id=%ld and mpcil_icd='%s' "), m_nID, m_szICDSelected);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListQuery.AddItems(
			rs.GetValue(_T("mpcil_id")), 
			rs.GetValue(_T("mpcil_desc")),
			rs.GetValue(_T("mpcil_feeid")),
			rs.GetValue(_T("MPCIL_CONDISION")),
			rs.GetValue(_T("mpcil_value")),
			rs.GetValue(_T("mpcil_value2")),
			rs.GetValue(_T("MPCIL_ICD")),
			NULL);
		rs.MoveNext();
	}
	m_wndListQuery.EndLoad(); 
	return nCount;

}
void CProductClassICD10Dialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveProductClassDialog();
}
 
void CProductClassICD10Dialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
	void CProductClassICD10Dialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CProductClassICD10Dialog::OnAddProductClassDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CProductClassICD10Dialog::OnEditProductClassDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CProductClassICD10Dialog::OnDeleteProductClassDialog(){
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
 		OnCancelProductClassDialog(); 
 	}
	return 0;
}

int CProductClassICD10Dialog::OnSaveProductClassDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_product_classTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE mpc_product_class_id=%ld  "), m_nID); 
 		szSQL = m_product_classTbl.GetUpdateSQL(_T("mpc_createdby, mpc_createddate, mpc_product_class_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
	//_msg(_T("%s"), szSQL);
 	if(ret > 0) 
 	{ 
		((CProductClassList*)m_pParentWnd)->Refresh(m_nID);
		if(GetMode() == VM_ADD)
		{
 			SetMode(VM_ADD);
		}
		else
			CGuiDialog::OnCancel();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CProductClassICD10Dialog::OnCancelProductClassDialog(){
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
 
int CProductClassICD10Dialog::OnProductClassDialogListLoadData(){
	return 0;
}

