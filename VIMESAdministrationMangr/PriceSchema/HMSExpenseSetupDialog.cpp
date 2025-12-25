#include "HMSExpenseSetupDialog.h"
#include "..\MainFrm.h"
#include "HMSExpenseDialog.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExpenseSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExpenseSetupDialog* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseSetupDialog *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnItemAddNew();
}*/
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExpenseSetupDialog* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpenseSetupDialog *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnUnitAddNew();
}*/
/*static void _OnPriceChangeFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnPriceChange();
} */
/*static void _OnPriceSetfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnPriceSetfocus();} */ 
/*static void _OnPriceKillfocusFnc(CWnd *pWnd){
	((CHMSExpenseSetupDialog *)pWnd)->OnPriceKillfocus();
} */
static int _OnPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpenseSetupDialog *)pWnd)->OnPriceCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExpenseSetupDialog *pVw = (CHMSExpenseSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExpenseSetupDialog *pVw = (CHMSExpenseSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSExpenseSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseSetupDialog*)pWnd)->OnAddHMSExpenseSetupDialog();
} 
static int _OnEditHMSExpenseSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseSetupDialog*)pWnd)->OnEditHMSExpenseSetupDialog();
} 
static int _OnDeleteHMSExpenseSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseSetupDialog*)pWnd)->OnDeleteHMSExpenseSetupDialog();
} 
static int _OnSaveHMSExpenseSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseSetupDialog*)pWnd)->OnSaveHMSExpenseSetupDialog();
} 
static int _OnCancelHMSExpenseSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSExpenseSetupDialog*)pWnd)->OnCancelHMSExpenseSetupDialog();
} 
CHMSExpenseSetupDialog::CHMSExpenseSetupDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	SetMode(nMode);
	m_nExpenseID = 0;
	m_szTitle.Format(_T("%s expense")
		, nMode==VM_ADD?_T("Add"):_T("Edit"));
	SetWindowText(m_szTitle);
}
CHMSExpenseSetupDialog::~CHMSExpenseSetupDialog(){
}
void CHMSExpenseSetupDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 5, 85, 30);
	m_wndName.Create(this,90, 5, 250, 30); 
	m_wndTypeLabel.Create(this, _T("Type"), 255, 5, 335, 30);
	m_wndType.Create(this,340, 5, 505, 30); 
	m_wndItemLabel.Create(this, _T("Item"), 5, 35, 85, 60);
	m_wndItem.Create(this,90, 35, 505, 60); 
	m_wndUnitLabel.Create(this, _T("Unit"), 5, 65, 85, 90);
	m_wndUnit.Create(this,90, 65, 250, 90); 
	m_wndPriceLabel.Create(this, _T("Price"), 255, 65, 335, 90);
	m_wndPrice.Create(this,340, 65, 505, 90); 
	m_wndSave.Create(this, _T("Save"), 340, 95, 420, 120);
	m_wndClose.Create(this, _T("Close"), 425, 95, 505, 120);

}
void CHMSExpenseSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(256);
	m_wndName.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	//m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndUnit.LimitText(35);
	m_wndPrice.SetLimitText(16);
	m_wndPrice.SetCheckValue(true);
	m_wndPrice.SetCurrencyFormat();

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndType.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndItem.InsertColumn(2, _T("Price"), CFMT_MONEY, 150);
	m_wndItem.InsertColumn(3, _T("Uom"), CFMT_TEXT, 80);

	m_wndUnit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUnit.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
}
void CHMSExpenseSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	m_wndUnit.SetEvent(WE_SELENDOK, _OnUnitSelendokFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_SELCHANGE, _OnUnitSelectChangeFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_ADDNEW, _OnUnitAddNewFnc);
	//m_wndPrice.SetEvent(WE_CHANGE, _OnPriceChangeFnc);
	//m_wndPrice.SetEvent(WE_SETFOCUS, _OnPriceSetfocusFnc);
	//m_wndPrice.SetEvent(WE_KILLFOCUS, _OnPriceKillfocusFnc);
	m_wndPrice.SetEvent(WE_CHECKVALUE, _OnPriceCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(GetMode());
	SetModeEx();
}
void CHMSExpenseSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	DDX_Text(pDX, m_wndPrice.GetDlgCtrlID(), m_nPrice);

}
void CHMSExpenseSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Item")] =  m_szItemKey;
	m_jData[_T("Unit")] =  m_szUnitKey;
	m_jData[_T("Price")] =  m_nPrice;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	m_jData[_T("Unit")].GetValue(m_szUnitKey);
	m_jData[_T("Price")].GetValue(m_nPrice);
	}

}
void CHMSExpenseSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_expense_view") \
				_T(" WHERE e_id = %ld"), m_nExpenseID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("e_name"), m_szName);
		rs.GetValue(_T("e_type_id"), m_szTypeKey);
		rs.GetValue(_T("e_fee_id"), m_szItemKey);
		rs.GetValue(_T("e_price"), m_nPrice);
		rs.GetValue(_T("e_uom_id"), m_szUnitKey);
		UpdateData(FALSE);
	}

}

void CHMSExpenseSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExpenseSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szTypeKey.Empty();
	m_szItemKey.Empty();
	m_szUnitKey.Empty();
	m_nPrice=0;

}
int CHMSExpenseSetupDialog::SetMode(int nMode){
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
		EnableButtons(FALSE, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSExpenseSetupDialog::OnNameChange(){
	
} */
/*void CHMSExpenseSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSExpenseSetupDialog::OnNameKillfocus(){
	
} */
int CHMSExpenseSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSExpenseSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	SetModeEx();
	//UpdateData(FALSE);
} 

void CHMSExpenseSetupDialog::SetModeEx()
{
	CString szCategory = m_wndType.GetCurrent(2);
	int nStatus = 0;
	if (szCategory == _T("G"))
	{
		m_wndItem.SetWindowText(_T(""));
	}
	else
	{
		nStatus = 1;
	}
	m_wndItem.EnableWindow((BOOL) nStatus);
	m_wndItem.SetCheckValue((bool) nStatus);
	/*
	m_wndPrice.EnableWindow(!(BOOL) nStatus);
	m_wndPrice.SetCheckValue(!(bool) nStatus);
	m_wndUnit.EnableWindow(!(BOOL) nStatus);
	m_wndUnit.SetCheckValue(!(bool) nStatus);
	*/
}
void CHMSExpenseSetupDialog::OnTypeSelendok(){
	 
}
/*void CHMSExpenseSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSExpenseSetupDialog::OnTypeKillfocus(){
	
}*/
long CHMSExpenseSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadExpenseType(&m_wndType, m_szTypeKey);
	return 0;
}
/*void CHMSExpenseSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExpenseSetupDialog::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	m_nPrice = str2float(m_wndItem.GetCurrent(2));
	m_szUnitKey = m_wndItem.GetCurrent(3);
	UpdateData(FALSE);
} 
void CHMSExpenseSetupDialog::OnItemSelendok(){
	 
}
/*void CHMSExpenseSetupDialog::OnItemSetfocus(){
	
}*/
/*void CHMSExpenseSetupDialog::OnItemKillfocus(){
	
}*/
long CHMSExpenseSetupDialog::OnItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//UpdateData();
	CString szCategory;
	szCategory = m_wndType.GetCurrent(2);
	if (szCategory == _T("D"))
	{
		return pMF->LoadProductItem(&m_wndItem, m_szItemKey);	
	}
	return 0;
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szItemKey
};
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExpenseSetupDialog::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExpenseSetupDialog::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CHMSExpenseSetupDialog::OnUnitSelendok(){
	 
}
/*void CHMSExpenseSetupDialog::OnUnitSetfocus(){
	
}*/
/*void CHMSExpenseSetupDialog::OnUnitKillfocus(){
	
}*/
long CHMSExpenseSetupDialog::OnUnitLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadUomList(&m_wndUnit, m_szUnitKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUnit.IsSearchKey() && !m_szUnitKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUnitKey
};
	m_wndUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExpenseSetupDialog::OnUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExpenseSetupDialog::OnPriceChange(){
	
} */
/*void CHMSExpenseSetupDialog::OnPriceSetfocus(){
	
} */
/*void CHMSExpenseSetupDialog::OnPriceKillfocus(){
	
} */
int CHMSExpenseSetupDialog::OnPriceCheckValue(){
	return 0;
} 
void CHMSExpenseSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExpenseSetupDialog();
} 
void CHMSExpenseSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSExpenseSetupDialog::OnAddHMSExpenseSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExpenseSetupDialog::OnEditHMSExpenseSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExpenseSetupDialog::OnDeleteHMSExpenseSetupDialog(){
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
 		OnCancelHMSExpenseSetupDialog();
 	}
	return 0;
}
int CHMSExpenseSetupDialog::OnSaveHMSExpenseSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szData;
 	if(GetMode() == VM_ADD){
 		szSQL.Format(_T("hms_expense_add('%s', '%s', '%s', '%s', %f, %ld)")
			, pMF->GetCurrentUser(), m_szName, m_szItemKey
			, m_szTypeKey, m_nPrice, str2long(m_szUnitKey));
 	}
 	else if(GetMode() == VM_EDIT){
 		szSQL.Format(_T("hms_expense_edit('%s',%ld,'%s','%s','%s',%f,%ld)")
			,pMF->GetCurrentUser(), m_nExpenseID, m_szName
			, m_szItemKey, m_szTypeKey, m_nPrice, str2long(m_szUnitKey));
 	}
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		if (GetMode() == VM_EDIT)
		{
			OnOK();
		}
		if (GetParent() != NULL)
		{
			((CHMSExpenseDialog*) GetParent())->OnListLoadData();
		}
		SetMode(GetMode());
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExpenseSetupDialog::OnCancelHMSExpenseSetupDialog(){
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
int CHMSExpenseSetupDialog::OnHMSExpenseSetupDialogListLoadData(){
	return 0;
}
