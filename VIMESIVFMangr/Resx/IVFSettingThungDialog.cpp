#include "IVFSettingThungDialog.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnSearchCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFSettingThungDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFSettingThungDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingThungDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnCategoryAddNew();
}*/
static void _OnLocationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFSettingThungDialog* )pWnd)->OnLocationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnLocationSelendokFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationSelendok();
}
/*static void _OnLocationSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationKillfocus();
}*/
/*static void _OnLocationKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationKillfocus();
}*/
static long _OnLocationLoadDataFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnLocationLoadData();
}
/*static void _OnLocationAddNewFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnLocationAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnMaxCapacityChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnMaxCapacityChange();
} */
/*static void _OnMaxCapacitySetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnMaxCapacitySetfocus();} */ 
/*static void _OnMaxCapacityKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnMaxCapacityKillfocus();
} */
static int _OnMaxCapacityCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnMaxCapacityCheckValue();
} 
/*static void _OnNitoDateChangeFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnNitoDateChange();
} */
/*static void _OnNitoDateSetfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnNitoDateSetfocus();} */ 
/*static void _OnNitoDateKillfocusFnc(CWnd *pWnd){
	((CIVFSettingThungDialog *)pWnd)->OnNitoDateKillfocus();
} */
static int _OnNitoDateCheckValueFnc(CWnd *pWnd){
	return ((CIVFSettingThungDialog *)pWnd)->OnNitoDateCheckValue();
} 
static void _OnIsActiveSelectFnc(CWnd *pWnd){
	 ((CIVFSettingThungDialog*)pWnd)->OnIsActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFSettingThungDialog *pVw = (CIVFSettingThungDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnAddIVFSettingThungDialog();
} 
static int _OnEditIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnEditIVFSettingThungDialog();
} 
static int _OnDeleteIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnDeleteIVFSettingThungDialog();
} 
static int _OnSaveIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnSaveIVFSettingThungDialog();
} 
static int _OnCancelIVFSettingThungDialogFnc(CWnd *pWnd){
	 return ((CIVFSettingThungDialog*)pWnd)->OnCancelIVFSettingThungDialog();
} 
CIVFSettingThungDialog::CIVFSettingThungDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CIVFSettingThungDialog::~CIVFSettingThungDialog(){
}
void CIVFSettingThungDialog::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 6, 5, 86, 30);
	m_wndSearch.Create(this,91, 5, 487, 30); 
	m_wndList.Create(this,5, 35, 800, 390); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 395, 85, 420);
	m_wndID.Create(this,90, 395, 170, 420); 
	m_wndCategoryLabel.Create(this, _T("Category"), 175, 395, 255, 420);
	m_wndCategory.Create(this,260, 395, 480, 420); 
	m_wndLocationLabel.Create(this, _T("Location"), 485, 395, 565, 420);
	m_wndLocation.Create(this,570, 395, 800, 420); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 425, 85, 450);
	m_wndDescription.Create(this,90, 425, 480, 450); 
	m_wndMaxCapacityLabel.Create(this, _T("Max Capacity"), 485, 425, 565, 450);
	m_wndMaxCapacity.Create(this,570, 425, 650, 450); 
	m_wndNitoDateLabel.Create(this, _T("Nito date"), 655, 425, 711, 450);
	m_wndNitoDate.Create(this,716, 425, 796, 450); 
	m_wndIsActive.Create(this, _T("IsActive"), 5, 455, 85, 480);
	m_wndAdd.Create(this, _T("&Add"), 295, 455, 375, 480);
	m_wndEdit.Create(this, _T("&Edit"), 380, 455, 460, 480);
	m_wndDelete.Create(this, _T("&Delete"), 465, 455, 545, 480);
	m_wndSave.Create(this, _T("&Save"), 550, 455, 630, 480);
	m_wndCancel.Create(this, _T("&Cancel"), 635, 455, 715, 480);
	m_wndClose.Create(this, _T("&Close"), 720, 455, 800, 480);

}
void CIVFSettingThungDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(35);
	m_wndLocation.SetCheckValue(true);
	m_wndLocation.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndMaxCapacity.SetLimitText(16);
	m_wndMaxCapacity.SetCheckValue(true);
	m_wndNitoDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndNitoDate.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);


	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndLocation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndLocation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFSettingThungDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndLocation.SetEvent(WE_SELENDOK, _OnLocationSelendokFnc);
	//m_wndLocation.SetEvent(WE_SETFOCUS, _OnLocationSetfocusFnc);
	//m_wndLocation.SetEvent(WE_KILLFOCUS, _OnLocationKillfocusFnc);
	m_wndLocation.SetEvent(WE_SELCHANGE, _OnLocationSelectChangeFnc);
	m_wndLocation.SetEvent(WE_LOADDATA, _OnLocationLoadDataFnc);
	//m_wndLocation.SetEvent(WE_ADDNEW, _OnLocationAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndMaxCapacity.SetEvent(WE_CHANGE, _OnMaxCapacityChangeFnc);
	//m_wndMaxCapacity.SetEvent(WE_SETFOCUS, _OnMaxCapacitySetfocusFnc);
	//m_wndMaxCapacity.SetEvent(WE_KILLFOCUS, _OnMaxCapacityKillfocusFnc);
	m_wndMaxCapacity.SetEvent(WE_CHECKVALUE, _OnMaxCapacityCheckValueFnc);
	//m_wndNitoDate.SetEvent(WE_CHANGE, _OnNitoDateChangeFnc);
	//m_wndNitoDate.SetEvent(WE_SETFOCUS, _OnNitoDateSetfocusFnc);
	//m_wndNitoDate.SetEvent(WE_KILLFOCUS, _OnNitoDateKillfocusFnc);
	m_wndNitoDate.SetEvent(WE_CHECKVALUE, _OnNitoDateCheckValueFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFSettingThungDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndLocation.GetDlgCtrlID(), m_szLocationKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndMaxCapacity.GetDlgCtrlID(), m_nMaxCapacity);
	DDX_TextEx(pDX, m_wndNitoDate.GetDlgCtrlID(), m_szNitoDate);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CIVFSettingThungDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("Location")] =  m_szLocationKey;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("MaxCapacity")] =  m_nMaxCapacity;
	m_jData[_T("NitoDate")] =  m_szNitoDate;
	m_jData[_T("IsActive")] =  m_bIsActive;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("Location")].GetValue(m_szLocationKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("MaxCapacity")].GetValue(m_nMaxCapacity);
	m_jData[_T("NitoDate")].GetValue(m_szNitoDate);
	m_jData[_T("IsActive")].GetValue(m_bIsActive);
	}

}
void CIVFSettingThungDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFSettingThungDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFSettingThungDialog::SetDefaultValues(){

	m_szSearch.Empty();
	m_szID.Empty();
	m_szCategoryKey.Empty();
	m_szLocationKey.Empty();
	m_szDescription.Empty();
	m_nMaxCapacity=0;
	m_szNitoDate.Empty();
	m_bIsActive=FALSE;

}
int CIVFSettingThungDialog::SetMode(int nMode){
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
/*void CIVFSettingThungDialog::OnSearchChange(){
	
} */
/*void CIVFSettingThungDialog::OnSearchSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnSearchKillfocus(){
	
} */
int CIVFSettingThungDialog::OnSearchCheckValue(){
	return 0;
} 
void CIVFSettingThungDialog::OnListDblClick(){
	
} 
void CIVFSettingThungDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFSettingThungDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFSettingThungDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CIVFSettingThungDialog::OnIDChange(){
	
} */
/*void CIVFSettingThungDialog::OnIDSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnIDKillfocus(){
	
} */
int CIVFSettingThungDialog::OnIDCheckValue(){
	return 0;
} 
void CIVFSettingThungDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnCategorySelendok(){
	 
}
/*void CIVFSettingThungDialog::OnCategorySetfocus(){
	
}*/
/*void CIVFSettingThungDialog::OnCategoryKillfocus(){
	
}*/
long CIVFSettingThungDialog::OnCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategory.IsSearchKey() && !m_szCategoryKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCategoryKey
};
	m_wndCategory.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategory.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFSettingThungDialog::OnCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFSettingThungDialog::OnLocationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnLocationSelendok(){
	 
}
/*void CIVFSettingThungDialog::OnLocationSetfocus(){
	
}*/
/*void CIVFSettingThungDialog::OnLocationKillfocus(){
	
}*/
long CIVFSettingThungDialog::OnLocationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndLocation.IsSearchKey() && !m_szLocationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szLocationKey
};
	m_wndLocation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLocation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFSettingThungDialog::OnLocationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CIVFSettingThungDialog::OnDescriptionChange(){
	
} */
/*void CIVFSettingThungDialog::OnDescriptionSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnDescriptionKillfocus(){
	
} */
int CIVFSettingThungDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CIVFSettingThungDialog::OnMaxCapacityChange(){
	
} */
/*void CIVFSettingThungDialog::OnMaxCapacitySetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnMaxCapacityKillfocus(){
	
} */
int CIVFSettingThungDialog::OnMaxCapacityCheckValue(){
	return 0;
} 
/*void CIVFSettingThungDialog::OnNitoDateChange(){
	
} */
/*void CIVFSettingThungDialog::OnNitoDateSetfocus(){
	
} */
/*void CIVFSettingThungDialog::OnNitoDateKillfocus(){
	
} */
int CIVFSettingThungDialog::OnNitoDateCheckValue(){
	return 0;
} 
	void CIVFSettingThungDialog::OnIsActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CIVFSettingThungDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFSettingThungDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFSettingThungDialog::OnAddIVFSettingThungDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFSettingThungDialog::OnEditIVFSettingThungDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFSettingThungDialog::OnDeleteIVFSettingThungDialog(){
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
 		OnCancelIVFSettingThungDialog();
 	}
	return 0;
}
int CIVFSettingThungDialog::OnSaveIVFSettingThungDialog(){
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
 		//OnIVFSettingThungDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFSettingThungDialog::OnCancelIVFSettingThungDialog(){
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
int CIVFSettingThungDialog::OnIVFSettingThungDialogListLoadData(){
	return 0;
}
