#include "StorageDialog.h"
#include "MainFrame_E10.h"
#include "StorageList.h"
#include "HMSReportForms/HMSDbfMapParser.h"

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDialog* )pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySelendokFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCategoryAddNew();
}*/
static void _OnZoneSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDialog* )pWnd)->OnZoneSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnZoneSelendokFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnZoneSelendok();
}
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnZoneKillfocus();
}*/
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnZoneKillfocus();
}*/
static long _OnZoneLoadDataFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnZoneLoadData();
}
/*static void _OnZoneAddNewFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnZoneAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnPhoneChangeFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnPhoneChange();
} */
/*static void _OnPhoneSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnPhoneSetfocus();} */ 
/*static void _OnPhoneKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnPhoneKillfocus();
} */
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnPhoneCheckValue();
} 
static void _OnManagerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDialog* )pWnd)->OnManagerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnManagerSelendokFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnManagerSelendok();
}
/*static void _OnManagerSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnManagerKillfocus();
}*/
/*static void _OnManagerKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnManagerKillfocus();
}*/
static long _OnManagerLoadDataFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnManagerLoadData();
}
/*static void _OnManagerAddNewFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnManagerAddNew();
}*/
static void _OnWarehouseAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CStorageDialog* )pWnd)->OnWarehouseAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWarehouseAccountSelendokFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnWarehouseAccountSelendok();
}
/*static void _OnWarehouseAccountSetfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnWarehouseAccountKillfocus();
}*/
/*static void _OnWarehouseAccountKillfocusFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnWarehouseAccountKillfocus();
}*/
static long _OnWarehouseAccountLoadDataFnc(CWnd *pWnd){
	return ((CStorageDialog *)pWnd)->OnWarehouseAccountLoadData();
}
/*static void _OnWarehouseAccountAddNewFnc(CWnd *pWnd){
	((CStorageDialog *)pWnd)->OnWarehouseAccountAddNew();
}*/
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CStorageDialog*)pWnd)->OnActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CStorageDialog *pVw = (CStorageDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CStorageDialog *pVw = (CStorageDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddStorageDialogFnc(CWnd *pWnd){
	 return ((CStorageDialog*)pWnd)->OnAddStorageDialog();
} 
static int _OnEditStorageDialogFnc(CWnd *pWnd){
	 return ((CStorageDialog*)pWnd)->OnEditStorageDialog();
} 
static int _OnDeleteStorageDialogFnc(CWnd *pWnd){
	 return ((CStorageDialog*)pWnd)->OnDeleteStorageDialog();
} 
static int _OnSaveStorageDialogFnc(CWnd *pWnd){
	 return ((CStorageDialog*)pWnd)->OnSaveStorageDialog();
} 
static int _OnCancelStorageDialogFnc(CWnd *pWnd){
	 return ((CStorageDialog*)pWnd)->OnCancelStorageDialog();
} 
CStorageDialog::CStorageDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 956;
	m_nDlgHeight = 556;
	SetDefaultValues();
}
CStorageDialog::~CStorageDialog(){
}
void CStorageDialog::OnCreateComponents(){
	m_wndStorageInformation.Create(this, _T("Storage Information"), 5, 5, 450, 360);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 30, 130, 55);
	m_wndType.Create(this,135, 30, 445, 55); 
	m_wndCategoryLabel.Create(this, _T("Category"), 10, 60, 130, 85);
	m_wndCategory.Create(this,135, 60, 445, 85); 
	m_wndZoneLabel.Create(this, _T("Zone"), 10, 90, 130, 115);
	m_wndZone.Create(this,135, 90, 445, 115); 
	m_wndIDLabel.Create(this, _T("Storage ID"), 10, 120, 130, 145);
	m_wndID.Create(this,135, 120, 235, 145); 
	m_wndCodeLabel.Create(this, _T("Code"), 240, 120, 340, 145);
	m_wndCode.Create(this,345, 120, 445, 145); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 150, 130, 175);
	m_wndName.Create(this,135, 150, 445, 175); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 180, 130, 205);
	m_wndDepartment.Create(this,135, 180, 445, 205); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 210, 130, 235);
	m_wndAddress.Create(this,135, 210, 445, 235); 
	m_wndPhoneLabel.Create(this, _T("Phone"), 10, 240, 130, 265);
	m_wndPhone.Create(this,135, 240, 445, 265); 
	m_wndManagerLabel.Create(this, _T("Manager"), 10, 300, 130, 325);
	m_wndManager.Create(this,135, 300, 445, 325); 
	m_wndWarehouseAccountLabel.Create(this, _T("Warehouse Account"), 10, 270, 130, 295);
	m_wndWarehouseAccount.Create(this,135, 270, 445, 295); 
	m_wndWarningAmountLabel.Create(this, _T("Warning Amount"), 10, 330, 130, 355);
	m_wndWarningAmount.Create(this,135, 330, 235, 355); 
	m_wndActive.Create(this, _T("IsActive"), 10, 365, 130, 390);
	m_wndSave.Create(this, _T("&Save"), 260, 365, 350, 390);
	m_wndClose.Create(this, _T("&Close"), 355, 365, 445, 390);

}
void CStorageDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 20);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndCategory.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndCategory.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 320);

	m_wndWarehouseAccount.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndWarehouseAccount.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);


	m_wndManager.InsertColumn(0, _T("ID"), CFMT_TEXT, 70);
	m_wndManager.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);

	m_storagelistTbl.SetTableName(_T("m_storagelist"));
	m_storagelistTbl.AddField(_T("msl_storage_id"), dfInteger); 
	m_storagelistTbl.AddField(_T("msl_name"), dfText, 81); 
	m_storagelistTbl.AddField(_T("msl_type"), dfText, 1); 
	m_storagelistTbl.AddField(_T("msl_category"), dfText, 1); 
	m_storagelistTbl.AddField(_T("msl_dept_id"), dfText, 7); 
	m_storagelistTbl.AddField(_T("msl_depts"), dfText, 254); 
	m_storagelistTbl.AddField(_T("msl_code"), dfText, 32); 
	m_storagelistTbl.AddField(_T("msl_objects"), dfText, 81); 
	m_storagelistTbl.AddField(_T("msl_isactive"), dfText, 1);
	m_storagelistTbl.AddField(_T("msl_phone"), dfText, 20); 
	m_storagelistTbl.AddField(_T("msl_address"), dfText, 128); 
	m_storagelistTbl.AddField(_T("msl_acct"), dfText, 20); 
	m_storagelistTbl.AddField(_T("msl_storageman"), dfText, 32); 
	m_storagelistTbl.AddField(_T("msl_zone"), dfText, 3); 
	m_storagelistTbl.AddField(_T("msl_org_id"), dfText, 3); 
	m_storagelistTbl.AddField(_T("msl_warning_amount"), dfLong); 
	m_storagelistTbl.AddField(_T("msl_updatedby"), dfText, 35);
	m_wndWarningAmount.SetCurrencyFormat(TRUE);
}

void CStorageDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	m_wndZone.SetEvent(WE_SELENDOK, _OnZoneSelendokFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_SELCHANGE, _OnZoneSelectChangeFnc);
	m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
	//m_wndZone.SetEvent(WE_ADDNEW, _OnZoneAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndPhone.SetEvent(WE_CHANGE, _OnPhoneChangeFnc);
	//m_wndPhone.SetEvent(WE_SETFOCUS, _OnPhoneSetfocusFnc);
	//m_wndPhone.SetEvent(WE_KILLFOCUS, _OnPhoneKillfocusFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	m_wndManager.SetEvent(WE_SELENDOK, _OnManagerSelendokFnc);
	//m_wndManager.SetEvent(WE_SETFOCUS, _OnManagerSetfocusFnc);
	//m_wndManager.SetEvent(WE_KILLFOCUS, _OnManagerKillfocusFnc);
	m_wndManager.SetEvent(WE_SELCHANGE, _OnManagerSelectChangeFnc);
	m_wndManager.SetEvent(WE_LOADDATA, _OnManagerLoadDataFnc);
	//m_wndManager.SetEvent(WE_ADDNEW, _OnManagerAddNewFnc);
	m_wndWarehouseAccount.SetEvent(WE_SELENDOK, _OnWarehouseAccountSelendokFnc);
	//m_wndWarehouseAccount.SetEvent(WE_SETFOCUS, _OnWarehouseAccountSetfocusFnc);
	//m_wndWarehouseAccount.SetEvent(WE_KILLFOCUS, _OnWarehouseAccountKillfocusFnc);
	m_wndWarehouseAccount.SetEvent(WE_SELCHANGE, _OnWarehouseAccountSelectChangeFnc);
	m_wndWarehouseAccount.SetEvent(WE_LOADDATA, _OnWarehouseAccountLoadDataFnc);
	//m_wndWarehouseAccount.SetEvent(WE_ADDNEW, _OnWarehouseAccountAddNewFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	int nMode = GetMode();
	if(nMode == VM_EDIT || nMode == VM_VIEW){
		GetDataToScreen();
	}
	SetMode(nMode);

}
void CStorageDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);
	DDX_TextEx(pDX, m_wndManager.GetDlgCtrlID(), m_szManagerKey);
	DDX_TextEx(pDX, m_wndWarehouseAccount.GetDlgCtrlID(), m_szWarehouseAccountKey);
	DDX_Text(pDX, m_wndWarningAmount.GetDlgCtrlID(), m_nWarningAmount);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CStorageDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM m_storagelist ") \
		_T("WHERE msl_storage_id=%d and msl_org_id IN('GL','%s') "), m_nID, pMF->GetModuleID());
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0){
		rs.GetValue(_T("msl_name"), m_szName);
		rs.GetValue(_T("msl_type"), m_szTypeKey);
		rs.GetValue(_T("msl_category"), m_szCategoryKey);
		rs.GetValue(_T("msl_dept_id"), m_szDepartmentKey);
		rs.GetValue(_T("msl_zone"), m_szZoneKey);
		rs.GetValue(_T("msl_address"), m_szAddress);
		rs.GetValue(_T("msl_phone"), m_szPhone);
		rs.GetValue(_T("msl_code"), m_szCode);
		rs.GetValue(_T("msl_acct"), m_szWarehouseAccountKey);
		rs.GetValue(_T("msl_storageman"), m_szManagerKey);
		rs.GetValue(_T("msl_isactive"), tmpStr);

		if(tmpStr == _T("Y"))
			m_bActive = TRUE;
		else
			m_bActive = FALSE;
		rs.GetValue(_T("msl_warning_amount"), m_nWarningAmount);

	//	SetMode(VM_EDIT);
	}
	else
	{
		SetMode(VM_NONE);
	}
	UpdateData(false);

}

void CStorageDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CHMSDbfMapParser parser;
	m_storagelistTbl.SetValue(_T("msl_storage_id"), m_nID);
	
	if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE msl_storage_id=%d"), m_nID);
		m_storagelistTbl.Open(&pMF->m_db, szWhere);
	}
	parser.PushRowData(&m_storagelistTbl);
	m_storagelistTbl.SetValue(_T("msl_name"), m_szName);
	m_storagelistTbl.SetValue(_T("msl_type"), m_szTypeKey);
	m_storagelistTbl.SetValue(_T("msl_category"), m_szCategoryKey);
	m_storagelistTbl.SetValue(_T("msl_dept_id"), m_szDepartmentKey);
	m_storagelistTbl.SetValue(_T("msl_zone"), m_szZoneKey);
	m_storagelistTbl.SetValue(_T("msl_address"), m_szAddress);
	m_storagelistTbl.SetValue(_T("msl_phone"), m_szPhone);
	m_storagelistTbl.SetValue(_T("msl_acct"), m_szWarehouseAccountKey);
	m_storagelistTbl.SetValue(_T("msl_storageman"), m_szManagerKey);
	m_storagelistTbl.SetValue(_T("msl_code"), m_szCode);
	m_storagelistTbl.SetValue(_T("msl_isactive"), m_bActive?_T("Y"):_T("N"));
	m_storagelistTbl.SetValue(_T("msl_org_id"), pMF->GetModuleID());
	m_storagelistTbl.SetValue(_T("msl_warning_amount"), m_nWarningAmount);
	m_storagelistTbl.SetValue(_T("msl_updatedby"), pMF->GetCurrentUser());
	parser.PushRowData(&m_storagelistTbl, true);
	m_szRowChange = parser.GetRowChange();
}
void CStorageDialog::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szCategoryKey.Empty();
	m_szZoneKey.Empty();
	m_szDepartmentKey.Empty();
	m_szCode.Empty();
	m_nID=0;
	m_bActive=TRUE;
	m_szName.Empty();
	m_szDepartmentKey.Empty();
	m_szAddress.Empty();
	m_szPhone.Empty();
	m_szManagerKey.Empty();
	m_szWarehouseAccountKey.Empty();
	m_nWarningAmount = 0;
}

int CStorageDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndType.SetFocus();
 			break; 
 		case VM_EDIT: 
			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndName.SetFocus();
			szSQL.Format(_T("SELECT count(*) FROM m_storageline WHERE msl_storage_id=%ld"), m_nID);
			rs.ExecSQL(szSQL);
			if(rs.GetIntValue() > 0)
			{
				m_wndType.EnableWindow(FALSE);
				if(pMF->GetCurrentUser() != _T("admin"))
				{
					m_wndCategory.EnableWindow(FALSE);
					m_wndZone.EnableWindow(FALSE);
					m_wndDepartment.EnableWindow(FALSE);
				}
			}
			m_wndID.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
		
 		return nOldMode; 
}

void CStorageDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageDialog::OnTypeSelendok(){
	 
}

/*void CStorageDialog::OnTypeSetfocus(){
	
}*/
/*void CStorageDialog::OnTypeKillfocus(){
	
}*/
long CStorageDialog::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szTypeKey.IsEmpty() && m_wndType.IsSearchKey()){
		szWhere.Format(_T(" and trim(ss_code)='%s' "), m_szTypeKey);
	};

	szSQL.Format(_T("select * from sys_sel where ss_id='pms_stocktype' %s order by ss_code"), szWhere);

	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("ss_code")), 
			rs.GetValue(_T("ss_desc")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}

/*void CStorageDialog::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageDialog::OnCategorySelendok(){
	 
}
/*void CStorageDialog::OnCategorySetfocus(){
	
}*/
/*void CStorageDialog::OnCategoryKillfocus(){
	
}*/
long CStorageDialog::OnCategoryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageCategoryList(&m_wndCategory, m_szCategoryKey);
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
/*void CStorageDialog::OnCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

/*void CStorageDialog::OnCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageDialog::OnZoneSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageDialog::OnZoneSelendok(){
	 
}
/*void CStorageDialog::OnZoneSetfocus(){
	
}*/
/*void CStorageDialog::OnZoneKillfocus(){
	
}*/
long CStorageDialog::OnZoneLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageZoneList(&m_wndZone, m_szZoneKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndZone.IsSearchKey() && !m_szZoneKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szZoneKey
};
	m_wndZone.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndZone.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageDialog::OnZoneAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageDialog::OnIDChange(){
	
} */
/*void CStorageDialog::OnIDSetfocus(){
	
} */
/*void CStorageDialog::OnIDKillfocus(){
	
} */
int CStorageDialog::OnIDCheckValue(){
	if(GetMode() == VM_ADD){
		//Kiem tra co ma trong m_storagelist roi thi return -1;
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT count(*) FROM m_storagelist WHERE msl_storage_id=%d"), m_nID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			m_wndID.SetToolTipMessage(_T("This storage identify has been existing in the database"));
			return -1;
		}
	}
	return 0;
}
 
/*void CStorageDialog::OnCodeChange(){
	
} */
/*void CStorageDialog::OnCodeSetfocus(){
	
} */
/*void CStorageDialog::OnCodeKillfocus(){
	
} */
int CStorageDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CStorageDialog::OnNameChange(){
	
} */
/*void CStorageDialog::OnNameSetfocus(){
	
} */
/*void CStorageDialog::OnNameKillfocus(){
	
} */
int CStorageDialog::OnNameCheckValue(){
	return 0;
}
 
void CStorageDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
 
void CStorageDialog::OnDepartmentSelendok(){
	 
}

/*void CStorageDialog::OnDepartmentSetfocus(){
	
}*/
/*void CStorageDialog::OnDepartmentKillfocus(){
	
}*/
long CStorageDialog::OnDepartmentLoadData(){
		CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	};

//	szWhere.AppendFormat(_T(" and sd_id in(%s) "), pMF->m_szDepartmentPerm);

	szSQL.Format(_T("select  * from sys_dept %s order by sd_id "), szWhere);
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

/*void CStorageDialog::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CStorageDialog::OnAddressChange(){
	
} */
/*void CStorageDialog::OnAddressSetfocus(){
	
} */
/*void CStorageDialog::OnAddressKillfocus(){
	
} */
int CStorageDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CStorageDialog::OnPhoneChange(){
	
} */
/*void CStorageDialog::OnPhoneSetfocus(){
	
} */
/*void CStorageDialog::OnPhoneKillfocus(){
	
} */
int CStorageDialog::OnPhoneCheckValue(){
	return 0;
} 
void CStorageDialog::OnWarehouseAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageDialog::OnWarehouseAccountSelendok(){
	 
}
/*void CStorageDialog::OnWarehouseAccountSetfocus(){
	
}*/
/*void CStorageDialog::OnWarehouseAccountKillfocus(){
	
}*/
long CStorageDialog::OnWarehouseAccountLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadAccountList(&m_wndWarehouseAccount, m_szWarehouseAccountKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndWarehouseAccount.IsSearchKey() && !m_szWarehouseAccountKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szWarehouseAccountKey
};
	m_wndWarehouseAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWarehouseAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageDialog::OnWarehouseAccountAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CStorageDialog::OnManagerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CStorageDialog::OnManagerSelendok(){
	 
}
/*void CStorageDialog::OnManagerSetfocus(){
	
}*/
/*void CStorageDialog::OnManagerKillfocus(){
	
}*/
long CStorageDialog::OnManagerLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter;
	return pMF->LoadUserList(&m_wndManager, m_szManagerKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndManager.IsSearchKey() && !m_szManagerKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szManagerKey
};
	m_wndManager.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndManager.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CStorageDialog::OnManagerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
	void CStorageDialog::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CStorageDialog::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveStorageDialog();
}
 
void CStorageDialog::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CStorageDialog::OnAddStorageDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}

int CStorageDialog::OnEditStorageDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}

int CStorageDialog::OnDeleteStorageDialog(){
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
 		OnCancelStorageDialog(); 
 	}
	return 0;
}

int CStorageDialog::OnSaveStorageDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 

 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_storagelistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE msl_storage_id=%d"), m_nID); 
 		szSQL = m_storagelistTbl.GetUpdateSQL(_T("msl_storage_id, msl_org_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		CString tmpStr;
		tmpStr.Format(_T("%d"), m_nID);
		((CStorageList*)m_pParentWnd)->Refresh(tmpStr);
		if(GetMode() == VM_ADD)
 			SetMode(VM_ADD); 
		else
		{
			if (!m_szRowChange.IsEmpty())
			{
				CString szEvent, szDesc;
				szEvent = _T("m_storagelist_edit");
				szDesc.Format(_T("[msl_storage_id=%ld] %s"), m_nID, m_szRowChange);
				pMF->SystemLog(szEvent, szDesc);
			}
			CGuiDialog::OnOK();
		}
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}

int CStorageDialog::OnCancelStorageDialog(){
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
 
int CStorageDialog::OnStorageDialogListLoadData(){
	return 0;
}

