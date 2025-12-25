#include "VendorSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVendorSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVendorSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVendorSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVendorSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnVendorIDChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorIDChange();
} */
/*static void _OnVendorIDSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorIDSetfocus();} */ 
/*static void _OnVendorIDKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorIDKillfocus();
} */
static int _OnVendorIDCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnVendorIDCheckValue();
} 
/*static void _OnVendorNameChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorNameChange();
} */
/*static void _OnVendorNameSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorNameSetfocus();} */ 
/*static void _OnVendorNameKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorNameKillfocus();
} */
static int _OnVendorNameCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnVendorNameCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnAddressCheckValue();
} 
/*static void _OnTelephoneChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnTelephoneChange();
} */
/*static void _OnTelephoneSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnTelephoneSetfocus();} */ 
/*static void _OnTelephoneKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnTelephoneKillfocus();
} */
static int _OnTelephoneCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnTelephoneCheckValue();
} 
static void _OnVendorGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVendorSetupDialog* )pWnd)->OnVendorGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnVendorGroupSelendokFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorGroupSelendok();
}
/*static void _OnVendorGroupSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorGroupKillfocus();
}*/
/*static void _OnVendorGroupKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorGroupKillfocus();
}*/
static long _OnVendorGroupLoadDataFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnVendorGroupLoadData();
}
/*static void _OnVendorGroupAddNewFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnVendorGroupAddNew();
}*/
/*static void _OnBankAccountChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnBankAccountChange();
} */
/*static void _OnBankAccountSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnBankAccountSetfocus();} */ 
/*static void _OnBankAccountKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnBankAccountKillfocus();
} */
static int _OnBankAccountCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnBankAccountCheckValue();
} 
/*static void _OnFaxChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnFaxChange();
} */
/*static void _OnFaxSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnFaxSetfocus();} */ 
/*static void _OnFaxKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnFaxKillfocus();
} */
static int _OnFaxCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnFaxCheckValue();
} 
/*static void _OnContactChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnContactChange();
} */
/*static void _OnContactSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnContactSetfocus();} */ 
/*static void _OnContactKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnContactKillfocus();
} */
static int _OnContactCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnContactCheckValue();
} 
/*static void _OnEmailChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnEmailChange();
} */
/*static void _OnEmailSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnEmailSetfocus();} */ 
/*static void _OnEmailKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnEmailKillfocus();
} */
static int _OnEmailCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnEmailCheckValue();
} 
/*static void _OnWebsiteChangeFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnWebsiteChange();
} */
/*static void _OnWebsiteSetfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnWebsiteSetfocus();} */ 
/*static void _OnWebsiteKillfocusFnc(CWnd *pWnd){
	((CVendorSetupDialog *)pWnd)->OnWebsiteKillfocus();
} */
static int _OnWebsiteCheckValueFnc(CWnd *pWnd){
	return ((CVendorSetupDialog *)pWnd)->OnWebsiteCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVendorSetupDialog *pVw = (CVendorSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVendorSetupDialog *pVw = (CVendorSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVendorSetupDialog *pVw = (CVendorSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVendorSetupDialog *pVw = (CVendorSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVendorSetupDialog *pVw = (CVendorSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVendorSetupDialog *pVw = (CVendorSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddVendorSetupDialogFnc(CWnd *pWnd){
	 return ((CVendorSetupDialog*)pWnd)->OnAddVendorSetupDialog();
} 
static int _OnEditVendorSetupDialogFnc(CWnd *pWnd){
	 return ((CVendorSetupDialog*)pWnd)->OnEditVendorSetupDialog();
} 
static int _OnDeleteVendorSetupDialogFnc(CWnd *pWnd){
	 return ((CVendorSetupDialog*)pWnd)->OnDeleteVendorSetupDialog();
} 
static int _OnSaveVendorSetupDialogFnc(CWnd *pWnd){
	 return ((CVendorSetupDialog*)pWnd)->OnSaveVendorSetupDialog();
} 
static int _OnCancelVendorSetupDialogFnc(CWnd *pWnd){
	 return ((CVendorSetupDialog*)pWnd)->OnCancelVendorSetupDialog();
} 
CVendorSetupDialog::CVendorSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 778;
	m_nDlgHeight = 787;
	SetDefaultValues();
}
CVendorSetupDialog::~CVendorSetupDialog(){
}
void CVendorSetupDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 635, 265); 
	m_wndVendorIDLabel.Create(this, _T("Vendor ID"), 5, 270, 115, 295);
	m_wndVendorID.Create(this,120, 270, 230, 295); 
	m_wndVendorNameLabel.Create(this, _T("Vendor Name"), 5, 300, 115, 325);
	m_wndVendorName.Create(this,120, 300, 340, 325); 
	m_wndAddressLabel.Create(this, _T("Address"), 5, 330, 115, 355);
	m_wndAddress.Create(this,120, 330, 340, 355); 
	m_wndTelephoneLabel.Create(this, _T("Telephone"), 5, 360, 115, 385);
	m_wndTelephone.Create(this,120, 360, 230, 385); 
	m_wndVendorGroupLabel.Create(this, _T("Vendor Group"), 5, 390, 115, 415);
	m_wndVendorGroup.Create(this,120, 390, 340, 415); 
	m_wndBankAccountLabel.Create(this, _T("Bank Account"), 345, 270, 425, 295);
	m_wndBankAccount.Create(this,430, 270, 635, 295); 
	m_wndFaxLabel.Create(this, _T("Fax"), 345, 300, 425, 325);
	m_wndFax.Create(this,430, 300, 635, 325); 
	m_wndContactLabel.Create(this, _T("Contact"), 345, 330, 425, 355);
	m_wndContact.Create(this,430, 330, 635, 355); 
	m_wndEmailLabel.Create(this, _T("Email"), 345, 360, 425, 385);
	m_wndEmail.Create(this,430, 360, 635, 385); 
	m_wndWebsiteLabel.Create(this, _T("Website"), 345, 390, 425, 415);
	m_wndWebsite.Create(this,430, 390, 635, 415); 
	m_wndAdd.Create(this, _T("&Add"), 160, 420, 235, 445);
	m_wndEdit.Create(this, _T("&Edit"), 240, 420, 315, 445);
	m_wndDelete.Create(this, _T("&Delete"), 320, 420, 395, 445);
	m_wndSave.Create(this, _T("&Save"), 400, 420, 475, 445);
	m_wndCancel.Create(this, _T("&Cancel"), 480, 420, 555, 445);
	m_wndClose.Create(this, _T("&Close"), 560, 420, 635, 445);

}
void CVendorSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndVendorID.ModifyStyle(0, ES_UPPERCASE);
	m_wndVendorID.SetLimitText(15);
	m_wndVendorID.SetCheckValue(true);
	m_wndVendorName.SetLimitText(254);
	m_wndVendorName.SetCheckValue(true);
	m_wndAddress.SetLimitText(254);
	//m_wndAddress.SetCheckValue(true);
	m_wndTelephone.SetLimitText(15);
	m_wndTelephone.ModifyStyle(0, ES_NUMBER);
	//m_wndTelephone.SetCheckValue(true);
	//m_wndVendorGroup.SetCheckValue(true);
	m_wndVendorGroup.LimitText(15);
	m_wndBankAccount.SetLimitText(35);
	//m_wndBankAccount.SetCheckValue(true);
	m_wndFax.SetLimitText(15);
	//m_wndFax.SetCheckValue(true);
	m_wndContact.SetLimitText(65);
	//m_wndContact.SetCheckValue(true);
	m_wndEmail.SetLimitText(35);
	//m_wndEmail.SetCheckValue(true);
	m_wndWebsite.SetLimitText(45);
	//m_wndWebsite.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Vendor ID"), CFMT_TEXT, 110);
	m_wndList.InsertColumn(1, _T("Vendor Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Telephone"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Address"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("Vendor Group"), CFMT_TEXT, 160);
	m_wndList.InsertColumn(5, _T("Bank Account"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(6, _T("Fax"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Contact"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(8, _T("Email"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(9, _T("Website"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(10, _T(""), CFMT_TEXT, 35);


	m_wndVendorGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndVendorGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_fam_vendorTbl.SetTableName(_T("fam_vendor"));
	m_fam_vendorTbl.AddField(_T("fav_id"), dfText, 15); 
	m_fam_vendorTbl.AddField(_T("fav_name"), dfText, 254); 
	m_fam_vendorTbl.AddField(_T("fav_address"), dfText, 254); 
	m_fam_vendorTbl.AddField(_T("fav_tel"), dfText, 15); 
	m_fam_vendorTbl.AddField(_T("fav_fax"), dfText, 15); 
	m_fam_vendorTbl.AddField(_T("fav_email"), dfText, 35); 
	m_fam_vendorTbl.AddField(_T("fav_website"), dfText, 45); 
	m_fam_vendorTbl.AddField(_T("fav_contact"), dfText, 65); 
	m_fam_vendorTbl.AddField(_T("fav_group"), dfText, 15); 
	m_fam_vendorTbl.AddField(_T("fav_bankaccount"), dfText, 35); 
	m_fam_vendorTbl.AddField(_T("fav_org_id"), dfText, 3);
	SetWindowTitle(_T("Vendor Information"));
}
void CVendorSetupDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Vendor"));
	m_wndList.AddEvent(1, _T("&Add"), _OnAddVendorSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditVendorSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteVendorSetupDialogFnc, 0, 0, 0);
	//m_wndVendorID.SetEvent(WE_CHANGE, _OnVendorIDChangeFnc);
	//m_wndVendorID.SetEvent(WE_SETFOCUS, _OnVendorIDSetfocusFnc);
	//m_wndVendorID.SetEvent(WE_KILLFOCUS, _OnVendorIDKillfocusFnc);
	m_wndVendorID.SetEvent(WE_CHECKVALUE, _OnVendorIDCheckValueFnc);
	//m_wndVendorName.SetEvent(WE_CHANGE, _OnVendorNameChangeFnc);
	//m_wndVendorName.SetEvent(WE_SETFOCUS, _OnVendorNameSetfocusFnc);
	//m_wndVendorName.SetEvent(WE_KILLFOCUS, _OnVendorNameKillfocusFnc);
	m_wndVendorName.SetEvent(WE_CHECKVALUE, _OnVendorNameCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	//m_wndTelephone.SetEvent(WE_CHANGE, _OnTelephoneChangeFnc);
	//m_wndTelephone.SetEvent(WE_SETFOCUS, _OnTelephoneSetfocusFnc);
	//m_wndTelephone.SetEvent(WE_KILLFOCUS, _OnTelephoneKillfocusFnc);
	m_wndTelephone.SetEvent(WE_CHECKVALUE, _OnTelephoneCheckValueFnc);
	m_wndVendorGroup.SetEvent(WE_SELENDOK, _OnVendorGroupSelendokFnc);
	//m_wndVendorGroup.SetEvent(WE_SETFOCUS, _OnVendorGroupSetfocusFnc);
	//m_wndVendorGroup.SetEvent(WE_KILLFOCUS, _OnVendorGroupKillfocusFnc);
	m_wndVendorGroup.SetEvent(WE_SELCHANGE, _OnVendorGroupSelectChangeFnc);
	m_wndVendorGroup.SetEvent(WE_LOADDATA, _OnVendorGroupLoadDataFnc);
	//m_wndVendorGroup.SetEvent(WE_ADDNEW, _OnVendorGroupAddNewFnc);
	//m_wndBankAccount.SetEvent(WE_CHANGE, _OnBankAccountChangeFnc);
	//m_wndBankAccount.SetEvent(WE_SETFOCUS, _OnBankAccountSetfocusFnc);
	//m_wndBankAccount.SetEvent(WE_KILLFOCUS, _OnBankAccountKillfocusFnc);
	m_wndBankAccount.SetEvent(WE_CHECKVALUE, _OnBankAccountCheckValueFnc);
	//m_wndFax.SetEvent(WE_CHANGE, _OnFaxChangeFnc);
	//m_wndFax.SetEvent(WE_SETFOCUS, _OnFaxSetfocusFnc);
	//m_wndFax.SetEvent(WE_KILLFOCUS, _OnFaxKillfocusFnc);
	m_wndFax.SetEvent(WE_CHECKVALUE, _OnFaxCheckValueFnc);
	//m_wndContact.SetEvent(WE_CHANGE, _OnContactChangeFnc);
	//m_wndContact.SetEvent(WE_SETFOCUS, _OnContactSetfocusFnc);
	//m_wndContact.SetEvent(WE_KILLFOCUS, _OnContactKillfocusFnc);
	m_wndContact.SetEvent(WE_CHECKVALUE, _OnContactCheckValueFnc);
	//m_wndEmail.SetEvent(WE_CHANGE, _OnEmailChangeFnc);
	//m_wndEmail.SetEvent(WE_SETFOCUS, _OnEmailSetfocusFnc);
	//m_wndEmail.SetEvent(WE_KILLFOCUS, _OnEmailKillfocusFnc);
	m_wndEmail.SetEvent(WE_CHECKVALUE, _OnEmailCheckValueFnc);
	//m_wndWebsite.SetEvent(WE_CHANGE, _OnWebsiteChangeFnc);
	//m_wndWebsite.SetEvent(WE_SETFOCUS, _OnWebsiteSetfocusFnc);
	//m_wndWebsite.SetEvent(WE_KILLFOCUS, _OnWebsiteKillfocusFnc);
	m_wndWebsite.SetEvent(WE_CHECKVALUE, _OnWebsiteCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
		//m_wndList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		//m_wndList.SetFocus();
		m_szVendorID = m_wndList.GetItemText(0, 0);
		m_nIndex = 0;
		//GetDataToScreen();
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CVendorSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVendorID.GetDlgCtrlID(), m_szVendorID);
	DDX_Text(pDX, m_wndVendorName.GetDlgCtrlID(), m_szVendorName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);
	DDX_Text(pDX, m_wndTelephone.GetDlgCtrlID(), m_szTelephone);
	DDX_TextEx(pDX, m_wndVendorGroup.GetDlgCtrlID(), m_szVendorGroupKey);
	DDX_Text(pDX, m_wndBankAccount.GetDlgCtrlID(), m_szBankAccount);
	DDX_Text(pDX, m_wndFax.GetDlgCtrlID(), m_szFax);
	DDX_Text(pDX, m_wndContact.GetDlgCtrlID(), m_szContact);
	DDX_Text(pDX, m_wndEmail.GetDlgCtrlID(), m_szEmail);
	DDX_Text(pDX, m_wndWebsite.GetDlgCtrlID(), m_szWebsite);

}
void CVendorSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_vendor WHERE fav_id='%s' and fav_org_id = '%s'"), m_szVendorID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("fav_id"), m_szVendorID);
		rs.GetValue(_T("fav_name"), m_szVendorName);
		rs.GetValue(_T("fav_address"), m_szAddress);
		rs.GetValue(_T("fav_tel"), m_szTelephone);
		rs.GetValue(_T("fav_fax"), m_szFax);
		rs.GetValue(_T("fav_email"), m_szEmail);
		rs.GetValue(_T("fav_website"), m_szWebsite);
		rs.GetValue(_T("fav_contact"), m_szContact);
		rs.GetValue(_T("fav_group"), m_szVendorGroupKey);
		rs.GetValue(_T("fav_bankaccount"), m_szBankAccount);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CVendorSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_vendorTbl.SetValue(_T("fav_id"), m_szVendorID);
	m_fam_vendorTbl.SetValue(_T("fav_name"), m_szVendorName);
	m_fam_vendorTbl.SetValue(_T("fav_address"), m_szAddress);
	m_fam_vendorTbl.SetValue(_T("fav_tel"), m_szTelephone);
	m_fam_vendorTbl.SetValue(_T("fav_fax"), m_szFax);
	m_fam_vendorTbl.SetValue(_T("fav_email"), m_szEmail);
	m_fam_vendorTbl.SetValue(_T("fav_website"), m_szWebsite);
	m_fam_vendorTbl.SetValue(_T("fav_contact"), m_szContact);
	m_fam_vendorTbl.SetValue(_T("fav_group"), m_szVendorGroupKey);
	m_fam_vendorTbl.SetValue(_T("fav_bankaccount"), m_szBankAccount);
	m_fam_vendorTbl.SetValue(_T("fav_org_id"),  pMF->GetModuleID());

}
void CVendorSetupDialog::SetDefaultValues(){

	m_szVendorID.Empty();
	m_szVendorName.Empty();
	m_szAddress.Empty();
	m_szTelephone.Empty();
	m_szVendorGroupKey.Empty();
	m_szBankAccount.Empty();
	m_szFax.Empty();
	m_szContact.Empty();
	m_szEmail.Empty();
	m_szWebsite.Empty();

}
int CVendorSetupDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues();
			m_wndVendorID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndVendorID.EnableWindow(FALSE);
			m_wndVendorName.SetFocus();
			m_wndVendorName.SetSel(m_wndVendorName.GetWindowTextLength(), m_wndVendorName.GetWindowTextLength());
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CVendorSetupDialog::OnListDblClick(){
	
} 
void CVendorSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szVendorID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CVendorSetupDialog::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVendorSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_vendor WHERE fav_org_id = '%s' ORDER BY fav_id"),  pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("fav_id")), 
			rs.GetValue(_T("fav_name")), 
			rs.GetValue(_T("fav_tel")),
			rs.GetValue(_T("fav_address")),
			rs.GetValue(_T("fav_group")),
			rs.GetValue(_T("fav_bankaccount")),
			rs.GetValue(_T("fav_fax")), 
			rs.GetValue(_T("fav_contact")), 
			rs.GetValue(_T("fav_email")), 
			rs.GetValue(_T("fav_website")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CVendorSetupDialog::OnVendorIDChange(){
	
} */
/*void CVendorSetupDialog::OnVendorIDSetfocus(){
	
} */
/*void CVendorSetupDialog::OnVendorIDKillfocus(){
	
} */
int CVendorSetupDialog::OnVendorIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_vendor WHERE fav_id='%s'"), m_szVendorID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndVendorID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CVendorSetupDialog::OnVendorNameChange(){
	
} */
/*void CVendorSetupDialog::OnVendorNameSetfocus(){
	
} */
/*void CVendorSetupDialog::OnVendorNameKillfocus(){
	
} */
int CVendorSetupDialog::OnVendorNameCheckValue()
{
	CString szTemp;
	PreInitCap(m_szVendorName, szTemp);
	m_szVendorName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
/*void CVendorSetupDialog::OnAddressChange(){
	
} */
/*void CVendorSetupDialog::OnAddressSetfocus(){
	
} */
/*void CVendorSetupDialog::OnAddressKillfocus(){
	
} */
int CVendorSetupDialog::OnAddressCheckValue(){
	return 0;
} 
/*void CVendorSetupDialog::OnTelephoneChange(){
	
} */
/*void CVendorSetupDialog::OnTelephoneSetfocus(){
	
} */
/*void CVendorSetupDialog::OnTelephoneKillfocus(){
	
} */
int CVendorSetupDialog::OnTelephoneCheckValue(){
	return 0;
} 
void CVendorSetupDialog::OnVendorGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVendorSetupDialog::OnVendorGroupSelendok(){
	 
}
/*void CVendorSetupDialog::OnVendorGroupSetfocus(){
	
}*/
/*void CVendorSetupDialog::OnVendorGroupKillfocus(){
	
}*/
long CVendorSetupDialog::OnVendorGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndVendorGroup.IsSearchKey() && !m_szVendorGroupKey.IsEmpty()){
	}
	m_wndVendorGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndVendorGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CVendorSetupDialog::OnVendorGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CVendorSetupDialog::OnBankAccountChange(){
	
} */
/*void CVendorSetupDialog::OnBankAccountSetfocus(){
	
} */
/*void CVendorSetupDialog::OnBankAccountKillfocus(){
	
} */
int CVendorSetupDialog::OnBankAccountCheckValue(){
	return 0;
} 
/*void CVendorSetupDialog::OnFaxChange(){
	
} */
/*void CVendorSetupDialog::OnFaxSetfocus(){
	
} */
/*void CVendorSetupDialog::OnFaxKillfocus(){
	
} */
int CVendorSetupDialog::OnFaxCheckValue(){
	return 0;
} 
/*void CVendorSetupDialog::OnContactChange(){
	
} */
/*void CVendorSetupDialog::OnContactSetfocus(){
	
} */
/*void CVendorSetupDialog::OnContactKillfocus(){
	
} */
int CVendorSetupDialog::OnContactCheckValue(){
	return 0;
} 
/*void CVendorSetupDialog::OnEmailChange(){
	
} */
/*void CVendorSetupDialog::OnEmailSetfocus(){
	
} */
/*void CVendorSetupDialog::OnEmailKillfocus(){
	
} */
int CVendorSetupDialog::OnEmailCheckValue(){
	return 0;
} 
/*void CVendorSetupDialog::OnWebsiteChange(){
	
} */
/*void CVendorSetupDialog::OnWebsiteSetfocus(){
	
} */
/*void CVendorSetupDialog::OnWebsiteKillfocus(){
	
} */
int CVendorSetupDialog::OnWebsiteCheckValue(){
	return 0;
} 
void CVendorSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddVendorSetupDialog();
} 
void CVendorSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditVendorSetupDialog();
} 
void CVendorSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_vendorid='%s'"), m_szVendorID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset belongs to this vendor. You can not delete it"), MB_OK | MB_ICONERROR);
		return;
	}
	OnDeleteVendorSetupDialog();
} 
void CVendorSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveVendorSetupDialog();
} 
void CVendorSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelVendorSetupDialog();
} 
void CVendorSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CVendorSetupDialog::OnAddVendorSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVendorSetupDialog::OnEditVendorSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVendorSetupDialog::OnDeleteVendorSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_vendor WHERE fav_id='%s' and fav_org_id = %s'"), m_szVendorID, pMF->GetModuleID());
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
 		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szVendorID, m_nIndex);
			//m_szVendorID = m_wndList.GetItemText(m_nIndex, 0);
		//_msg(_T("%d"), m_nIndex);
			//GetDataToScreen();
		/*if (m_wndList.GetItemCount() > 0)
 			SetMode(VM_VIEW);
		else
			SetMode(VM_NONE);*/
		}
		else
		{
 			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 	}
	return 0;
}
int CVendorSetupDialog::OnSaveVendorSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
 		szSQL = m_fam_vendorTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
 		m_nIndex = m_wndList.GetCurSel();
		szWhere.Format(_T(" WHERE fav_id='%s' and fav_org_id = '%s'"), m_szVendorID, pMF->GetModuleID()); 
 		szSQL = m_fam_vendorTbl.GetUpdateSQL(_T("fav_id")); 
 		szSQL += szWhere; 
 	} 
    _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnListLoadData();
		SetItemSel(&m_wndList, m_szVendorID, m_nIndex);
		/*if (GetMode() == VM_EDIT)
		{
			m_szVendorID = m_wndList.GetItemText(m_nIndex, 0);
			GetDataToScreen();
		}*/
 		SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus(); 
 	} 
 	/*else 
 	{ 
 	} */
 	return ret; 
 	//return 0; 
}
int CVendorSetupDialog::OnCancelVendorSetupDialog()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szVendorID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CVendorSetupDialog::OnVendorSetupDialogListLoadData(){
	return 0;
}
void CVendorSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				//pList->SetItemState(i, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(i, 1);
				m_nIndex = i;
				//pList->SetFocus();
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
		//pList->SetItemState(nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
		//pList->EnsureVisible(nIndex, 1);
		//pList->SetFocus();
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				//pList->SetItemState(0, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(0, 1);
				//pList->SetFocus();
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				//pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(m_nIndex, 1);
				//pList->SetFocus();
				pList->SetCurSel(m_nIndex);
			}
		}
	}
}