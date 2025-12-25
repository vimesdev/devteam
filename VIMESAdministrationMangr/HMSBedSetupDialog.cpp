#include "HMSBedSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSBedSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSBedSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedSetupDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSBedSetupDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnRoomAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnNameCheckValue();
} 
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog* )pWnd)->OnTypeLoadData();
}
/*static void _OnLimitChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnLimitChange();
} */
/*static void _OnLimitSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnLimitSetfocus();} */ 
/*static void _OnLimitKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnLimitKillfocus();
} */
static int _OnLimitCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnLimitCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSBedSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
static void _OnDifferencePaidSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnDifferencePaidSelect();
}
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnInsurancePaidSelect();
}
static void _OnPolicyPaidSelectFnc(CWnd *pWnd){
	 ((CHMSBedSetupDialog*)pWnd)->OnPolicyPaidSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSBedSetupDialog *pVw = (CHMSBedSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnAddHMSBedSetupDialog();
} 
static int _OnEditHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnEditHMSBedSetupDialog();
} 
static int _OnDeleteHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnDeleteHMSBedSetupDialog();
} 
static int _OnSaveHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnSaveHMSBedSetupDialog();
} 
static int _OnCancelHMSBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSBedSetupDialog*)pWnd)->OnCancelHMSBedSetupDialog();
} 
CHMSBedSetupDialog::CHMSBedSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 505;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_nLimit=5;
}
CHMSBedSetupDialog::~CHMSBedSetupDialog(){
}
void CHMSBedSetupDialog::OnCreateComponents(){
	m_wndBedInformation.Create(this, _T("Bed Information"), 5, 5, 775, 420);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 300, 110, 325);
	m_wndDepartment.Create(this,115, 300, 385, 325); 
	m_wndRoomLabel.Create(this, _T("Room"), 390, 300, 490, 325);
	m_wndRoom.Create(this,495, 300, 770, 325); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 330, 110, 355);
	m_wndName.Create(this,115, 330, 385, 355); 
	m_wndTypeLabel.Create(this, _T("Type"), 390, 330, 490, 355);
	m_wndType.Create(this,495, 330, 770, 355); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 360, 110, 385);
	m_wndServicePrice.Create(this,115, 360, 195, 385); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 200, 360, 300, 385);
	m_wndInsurancePrice.Create(this,305, 360, 385, 385); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 390, 360, 490, 385);
	m_wndPolicyPrice.Create(this,495, 360, 595, 385); 
	m_wndLimitLabel.Create(this, _T("Limit of patients"), 600, 360, 700, 385);
	m_wndLimit.Create(this,705, 360, 770, 385); 
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 10, 390, 180, 415);
	m_wndPolicyPaid.Create(this, _T("Policy Paid"), 185, 390, 355, 415);
	m_wndDifferencePaid.Create(this, _T("Difference Paid"), 360, 390, 530, 415);
	m_wndActive.Create(this, _T("Active"), 535, 390, 705, 415);
	m_wndAdd.Create(this, _T("&Add"), 270, 425, 350, 450);
	m_wndEdit.Create(this, _T("&Edit"), 355, 425, 435, 450);
	m_wndDelete.Create(this, _T("&Delete"), 440, 425, 520, 450);
	m_wndSave.Create(this, _T("&Save"), 525, 425, 605, 450);
	m_wndCancel.Create(this, _T("&Cancel"), 610, 425, 690, 450);
	m_wndClose.Create(this, _T("&Close"), 695, 425, 775, 450);
	m_wndList.Create(this,10, 30, 770, 295); 

}
void CHMSBedSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndLimit.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(16);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(16);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(16);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndInsurancePaid.ModifyStyle(WS_TABSTOP, 0);
	m_wndPolicyPaid.ModifyStyle(WS_TABSTOP, 0);
	m_wndDifferencePaid.ModifyStyle(WS_TABSTOP, 0);
	m_wndLimit.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("Service Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(3, _T("Insurance Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(4, _T("Policy Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Active"), CFMT_MONEY, 60);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_hms_bedlistTbl.SetTableName(_T("hms_bedlist"));
	m_hms_bedlistTbl.AddField(_T("hbl_createdby"), dfText, 15); 
	m_hms_bedlistTbl.AddField(_T("hbl_createddate"), dfDateTime); 
	m_hms_bedlistTbl.AddField(_T("hbl_updatedby"), dfText, 15); 
	m_hms_bedlistTbl.AddField(_T("hbl_updateddate"), dfDateTime); 
	m_hms_bedlistTbl.AddField(_T("hbl_deptid"), dfText, 7); 
	m_hms_bedlistTbl.AddField(_T("hbl_roomid"), dfInteger); 
	m_hms_bedlistTbl.AddField(_T("hbl_id"), dfInteger); 
	m_hms_bedlistTbl.AddField(_T("hbl_name"), dfText, 254); 
	m_hms_bedlistTbl.AddField(_T("hbl_servprice"), dfDouble); 
	m_hms_bedlistTbl.AddField(_T("hbl_insprice"), dfDouble); 
	m_hms_bedlistTbl.AddField(_T("hbl_polprice"), dfDouble); 
	m_hms_bedlistTbl.AddField(_T("hbl_inspaid"), dfText, 1); 
	m_hms_bedlistTbl.AddField(_T("hbl_polpaid"), dfText, 1); 
	m_hms_bedlistTbl.AddField(_T("hbl_diffpaid"), dfText, 1); 
	m_hms_bedlistTbl.AddField(_T("hbl_numpat"), dfInteger); 
	m_hms_bedlistTbl.AddField(_T("hbl_maxqty"), dfInteger); 
	m_hms_bedlistTbl.AddField(_T("hbl_active"), dfText,1); 
	m_hms_bedlistTbl.AddField(_T("hbl_typeid"), dfText,1); 

}
void CHMSBedSetupDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Bed List"));
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndLimit.SetEvent(WE_CHANGE, _OnLimitChangeFnc);
	//m_wndLimit.SetEvent(WE_SETFOCUS, _OnLimitSetfocusFnc);
	//m_wndLimit.SetEvent(WE_KILLFOCUS, _OnLimitKillfocusFnc);
	m_wndLimit.SetEvent(WE_CHECKVALUE, _OnLimitCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	m_wndDifferencePaid.SetEvent(WE_CLICK, _OnDifferencePaidSelectFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	m_wndPolicyPaid.SetEvent(WE_CLICK, _OnPolicyPaidSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_NONE);
}
void CHMSBedSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndLimit.GetDlgCtrlID(), m_nLimit);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Check(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_bDifferencePaid);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Check(pDX, m_wndPolicyPaid.GetDlgCtrlID(), m_bPolicyPaid);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
}
void CHMSBedSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	SetDefaultValues();
	szSQL.Format(_T("SELECT * FROM hms_bedlist WHERE hbl_deptid='%s' AND hbl_roomid=%d AND hbl_id=%d "), 
		m_szDepartmentKey, ToInt(m_szRoomKey), m_nIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hbl_name"), m_szName);
		rs.GetValue(_T("hbl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hbl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hbl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hbl_maxqty"), m_nLimit);
		
		rs.GetValue(_T("hbl_diffpaid"), tmpStr);
		if(tmpStr == _T("Y")) m_bDifferencePaid = true;
		rs.GetValue(_T("hbl_inspaid"), tmpStr);
		if(tmpStr == _T("Y")) m_bInsurancePaid = true;
		rs.GetValue(_T("hbl_polpaid"), tmpStr);
		if(tmpStr == _T("Y")) m_bPolicyPaid = true;
		rs.GetValue(_T("hbl_active"), tmpStr);
		if(tmpStr == _T("Y")) m_bActive = true;
		rs.GetValue(_T("hbl_typeid"), m_szTypeKey);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSBedSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_hms_bedlistTbl.SetValue(_T("hbl_createdby"), pMF->GetCurrentUser());
	m_hms_bedlistTbl.SetValue(_T("hbl_createddate"), pMF->GetSysDateTime());
	m_hms_bedlistTbl.SetValue(_T("hbl_updatedby"), pMF->GetCurrentUser());
	m_hms_bedlistTbl.SetValue(_T("hbl_updateddate"), pMF->GetSysDateTime());
	m_hms_bedlistTbl.SetValue(_T("hbl_deptid"), m_szDepartmentKey);
	m_hms_bedlistTbl.SetValue(_T("hbl_roomid"), m_szRoomKey);
	if(GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("select coalesce(max(hbl_id), 0)+1 FROM hms_bedlist WHERE hbl_deptid='%s' AND hbl_roomid=%d"), m_szDepartmentKey, ToInt(m_szRoomKey));
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}

	m_hms_bedlistTbl.SetValue(_T("hbl_id"), m_nIndex);
	m_hms_bedlistTbl.SetValue(_T("hbl_name"), m_szName);
	m_hms_bedlistTbl.SetValue(_T("hbl_servprice"), m_nServicePrice);
	m_hms_bedlistTbl.SetValue(_T("hbl_insprice"), m_nInsurancePrice);
	m_hms_bedlistTbl.SetValue(_T("hbl_polprice"), m_nPolicyPrice);
	m_hms_bedlistTbl.SetValue(_T("hbl_diffpaid"), m_bDifferencePaid?_T("Y"):_T("N"));
	m_hms_bedlistTbl.SetValue(_T("hbl_inspaid"), m_bInsurancePaid?_T("Y"):_T("N"));
	m_hms_bedlistTbl.SetValue(_T("hbl_polpaid"), m_bPolicyPaid?_T("Y"):_T("N"));
	m_hms_bedlistTbl.SetValue(_T("hbl_active"), m_bActive?_T("Y"):_T("N"));
	m_hms_bedlistTbl.SetValue(_T("hbl_maxqty"), m_nLimit);
	m_hms_bedlistTbl.SetValue(_T("hbl_typeid"), m_szTypeKey);

}
void CHMSBedSetupDialog::SetDefaultValues(){
	m_szName.Empty();
	m_szTypeKey.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_bDifferencePaid=FALSE;
	m_bInsurancePaid=TRUE;
	m_bPolicyPaid=TRUE;
	m_bActive = TRUE;

}
int CHMSBedSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndDepartment.EnableWindow(false);
			m_wndRoom.EnableWindow(false);
			m_wndName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndDepartment.EnableWindow(false);
			m_wndRoom.EnableWindow(false);
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndDepartment.EnableWindow(true);
			m_wndRoom.EnableWindow(true);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
			m_wndDepartment.EnableWindow(true);
			m_wndRoom.EnableWindow(true);
 			break; 
 		}; 
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSBedSetupDialog::OnListDblClick(){
	
} 
void CHMSBedSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_nIndex = ToInt(m_wndList.GetItemText(nSel, 0));
	GetDataToScreen();
} 
int CHMSBedSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSBedSetupDialog();
	 return 0;
} 
long CHMSBedSetupDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//UpdateData(true);
	if(m_szDepartmentKey.IsEmpty() || m_szRoomKey.IsEmpty())
	{
		//MessageBox(_T("aaaa")); 
		m_wndList.DeleteAllItems();
		return 0;
	}
	m_wndList.BeginLoad(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT hbl_id as id, hbl_name as name, hbl_servprice as servprice, hbl_insprice as insprice, hbl_polprice as polprice,hbl_active as active FROM hms_bedlist WHERE hbl_deptid='%s' AND hbl_roomid=%d ORDER BY hbl_id"), m_szDepartmentKey, ToInt(m_szRoomKey));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("polprice")), 
			rs.GetValue(_T("active")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSBedSetupDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSBedSetupDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSBedSetupDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSBedSetupDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSBedSetupDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSBedSetupDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
void CHMSBedSetupDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSBedSetupDialog::OnRoomSelendok(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		OnListLoadData();
}
/*void CHMSBedSetupDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSBedSetupDialog::OnRoomKillfocus(){
	
}*/
long CHMSBedSetupDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && ToInt(m_szRoomKey) > 0){
		szWhere.Format(_T(" AND hrl_id=%d "), ToInt(m_szRoomKey));
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hrl_id as id, hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s'  %s ORDER BY id"), m_szDepartmentKey, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSBedSetupDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CHMSBedSetupDialog::OnNameChange(){
	
} */
/*void CHMSBedSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnNameKillfocus(){
	
} */
int CHMSBedSetupDialog::OnNameCheckValue(){
	return 0;
} 
long CHMSBedSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && ToInt(m_szTypeKey) > 0){
		szWhere.Format(_T(" AND ss_code = '%s' "), m_szTypeKey);
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_bed_type' %s ORDER BY id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	
}
/*void CHMSBedSetupDialog::OnLimitChange(){
	
} */
/*void CHMSBedSetupDialog::OnLimitSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnLimitKillfocus(){
	
} */
int CHMSBedSetupDialog::OnLimitCheckValue(){
	return 0;
} 
/*void CHMSBedSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSBedSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSBedSetupDialog::OnServicePriceCheckValue(){
	/*
	if(m_nInsurancePrice <= 0)
		m_nInsurancePrice = m_nServicePrice;
	if(m_nPolicyPrice <= 0)
		m_nPolicyPrice = m_nServicePrice;
	*/
	if(m_nInsurancePrice <= 0)
	{
		m_bInsurancePaid = false;
	}
	if(m_nPolicyPrice <= 0)
		m_bPolicyPaid = false;

	UpdateData(false);
	return 0;
} 
/*void CHMSBedSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSBedSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSBedSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSBedSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSBedSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSBedSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSBedSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
	void CHMSBedSetupDialog::OnDifferencePaidSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
	void CHMSBedSetupDialog::OnInsurancePaidSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
	void CHMSBedSetupDialog::OnPolicyPaidSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSBedSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSBedSetupDialog();
	
} 
void CHMSBedSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSBedSetupDialog();
} 
void CHMSBedSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSBedSetupDialog();
} 
void CHMSBedSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSBedSetupDialog();
} 
void CHMSBedSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelHMSBedSetupDialog();
} 
void CHMSBedSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CGuiDialog::OnCancel();
} 
int CHMSBedSetupDialog::OnAddHMSBedSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
	UpdateData(true);
	if(m_szRoomKey.IsEmpty())
	{
		m_wndRoom.SetFocus();
		return -1;
	}
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 

 	SetMode(VM_ADD);
	return 0; 
}
int CHMSBedSetupDialog::OnEditHMSBedSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSBedSetupDialog::OnDeleteHMSBedSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	int nIdx = ToInt(m_wndList.GetItemText(nSel, 0));

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
 	szSQL.Format(_T("DELETE FROM  hms_bedlist WHERE hbl_deptid='%s' AND hbl_roomid=%d and hbl_id=%d"), m_szDepartmentKey, ToInt(m_szRoomKey), nIdx ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
		m_wndList.DeleteItem(nSel);
 	}
	return 0;
}
int CHMSBedSetupDialog::OnSaveHMSBedSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_bedlistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hbl_deptid='%s' AND hbl_roomid=%d AND hbl_id=%d"), m_szDepartmentKey, ToInt(m_szRoomKey), m_nIndex); 
 		szSQL = m_hms_bedlistTbl.GetUpdateSQL(_T("hbl_createdby,hbl_createddate, hbl_id")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		SetMode(VM_VIEW);
		OnListLoadData();
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSBedSetupDialog::OnCancelHMSBedSetupDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSBedSetupDialog::OnHMSBedSetupDialogListLoadData(){
	return 0;
}
