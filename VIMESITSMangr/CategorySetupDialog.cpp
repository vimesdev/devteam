#include "CategorySetupDialog.h"
#include "MainFrm.h"
static long _OnCategoryListLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog*)pWnd)->OnCategoryListLoadData();
} 
static void _OnCategoryListDblClickFnc(CWnd *pWnd){
	((CCategorySetupDialog*)pWnd)->OnCategoryListDblClick();
} 
static void _OnCategoryListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCategorySetupDialog*)pWnd)->OnCategoryListSelectChange(nOldItem, nNewItem);
} 
static int _OnCategoryListDeleteItemFnc(CWnd *pWnd){
	 return ((CCategorySetupDialog*)pWnd)->OnCategoryListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCategorySetupDialog *pVw = (CCategorySetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCategorySetupDialog *pVw = (CCategorySetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCategorySetupDialog *pVw = (CCategorySetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCategorySetupDialog *pVw = (CCategorySetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCategorySetupDialog *pVw = (CCategorySetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCategorySetupDialog *pVw = (CCategorySetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnCategoryIDChangeFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCategoryIDChange();
} */
/*static void _OnCategoryIDSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCategoryIDSetfocus();} */ 
/*static void _OnCategoryIDKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCategoryIDKillfocus();
} */
static int _OnCategoryIDCheckValueFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnCategoryIDCheckValue();
} 
/*static void _OnCategoryNameChangeFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCategoryNameChange();
} */
/*static void _OnCategoryNameSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCategoryNameSetfocus();} */ 
/*static void _OnCategoryNameKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCategoryNameKillfocus();
} */
static int _OnCategoryNameCheckValueFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnCategoryNameCheckValue();
} 
static void _OnTypeIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCategorySetupDialog* )pWnd)->OnTypeIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeIDSelendokFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnTypeIDSelendok();
}
/*static void _OnTypeIDSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnTypeIDKillfocus();
}*/
/*static void _OnTypeIDKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnTypeIDKillfocus();
}*/
static long _OnTypeIDLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnTypeIDLoadData();
}
/*static void _OnTypeIDAddNewFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnTypeIDAddNew();
}*/
static void _OnGroupIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCategorySetupDialog* )pWnd)->OnGroupIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupIDSelendokFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnGroupIDSelendok();
}
/*static void _OnGroupIDSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnGroupIDKillfocus();
}*/
/*static void _OnGroupIDKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnGroupIDKillfocus();
}*/
static long _OnGroupIDLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnGroupIDLoadData();
}
/*static void _OnGroupIDAddNewFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnGroupIDAddNew();
}*/
static void _OnEquipmentIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCategorySetupDialog* )pWnd)->OnEquipmentIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEquipmentIDSelendokFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnEquipmentIDSelendok();
}
/*static void _OnEquipmentIDSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnEquipmentIDKillfocus();
}*/
/*static void _OnEquipmentIDKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnEquipmentIDKillfocus();
}*/
static long _OnEquipmentIDLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnEquipmentIDLoadData();
}
/*static void _OnEquipmentIDAddNewFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnEquipmentIDAddNew();
}*/
static void _OnDeprMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCategorySetupDialog* )pWnd)->OnDeprMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeprMethodSelendokFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDeprMethodSelendok();
}
/*static void _OnDeprMethodSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDeprMethodKillfocus();
}*/
/*static void _OnDeprMethodKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDeprMethodKillfocus();
}*/
static long _OnDeprMethodLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnDeprMethodLoadData();
}
/*static void _OnDeprMethodAddNewFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDeprMethodAddNew();
}*/
static void _OnCreditAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCategorySetupDialog* )pWnd)->OnCreditAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCreditAccountSelendokFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCreditAccountSelendok();
}
/*static void _OnCreditAccountSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCreditAccountKillfocus();
}*/
/*static void _OnCreditAccountKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCreditAccountKillfocus();
}*/
static long _OnCreditAccountLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnCreditAccountLoadData();
}
/*static void _OnCreditAccountAddNewFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnCreditAccountAddNew();
}*/
static void _OnDebitAccountSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCategorySetupDialog* )pWnd)->OnDebitAccountSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDebitAccountSelendokFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDebitAccountSelendok();
}
/*static void _OnDebitAccountSetfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDebitAccountKillfocus();
}*/
/*static void _OnDebitAccountKillfocusFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDebitAccountKillfocus();
}*/
static long _OnDebitAccountLoadDataFnc(CWnd *pWnd){
	return ((CCategorySetupDialog *)pWnd)->OnDebitAccountLoadData();
}
/*static void _OnDebitAccountAddNewFnc(CWnd *pWnd){
	((CCategorySetupDialog *)pWnd)->OnDebitAccountAddNew();
}*/
static int _OnAddCategorySetupDialogFnc(CWnd *pWnd){
	 return ((CCategorySetupDialog*)pWnd)->OnAddCategorySetupDialog();
} 
static int _OnEditCategorySetupDialogFnc(CWnd *pWnd){
	 return ((CCategorySetupDialog*)pWnd)->OnEditCategorySetupDialog();
} 
static int _OnDeleteCategorySetupDialogFnc(CWnd *pWnd){
	 return ((CCategorySetupDialog*)pWnd)->OnDeleteCategorySetupDialog();
} 
static int _OnSaveCategorySetupDialogFnc(CWnd *pWnd){
	 return ((CCategorySetupDialog*)pWnd)->OnSaveCategorySetupDialog();
} 
static int _OnCancelCategorySetupDialogFnc(CWnd *pWnd){
	 return ((CCategorySetupDialog*)pWnd)->OnCancelCategorySetupDialog();
} 
CCategorySetupDialog::CCategorySetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 800;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CCategorySetupDialog::~CCategorySetupDialog()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	//pMF->m_wndAsset.m_wndCategory.SetFocus();
}
void CCategorySetupDialog::OnCreateComponents()
{ 
	/*m_wndCategoryList.Create(this,5, 5, 635, 405); 
	m_wndAdd.Create(this, _T("&Add"), 100, 530, 185, 555);
	m_wndEdit.Create(this, _T("&Edit"), 190, 530, 275, 555);
	m_wndDelete.Create(this, _T("&Delete"), 280, 530, 365, 555);
	m_wndSave.Create(this, _T("&Save"), 370, 530, 455, 555);
	m_wndCancel.Create(this, _T("&Cancel"), 460, 530, 545, 555);
	m_wndClose.Create(this, _T("&Close"), 550, 530, 635, 555);
	m_wndCategoryIDLabel.Create(this, _T("Category ID"), 5, 410, 95, 435);
	m_wndCategoryID.Create(this,100, 410, 295, 435); 
	m_wndCategoryNameLabel.Create(this, _T("Category Name"), 5, 440, 95, 465);
	m_wndCategoryName.Create(this,100, 440, 295, 465); 
	m_wndTypeIDLabel.Create(this, _T("Type ID"), 5, 470, 95, 495);
	m_wndTypeID.Create(this,100, 470, 295, 495); 
	m_wndGroupIDLabel.Create(this, _T("Group ID"), 5, 500, 95, 525);
	m_wndGroupID.Create(this,100, 500, 295, 525); 
	m_wndDeprMethodLabel.Create(this, _T("Depr Method"), 300, 410, 430, 435);
	m_wndDeprMethod.Create(this,435, 410, 635, 435); 
	m_wndCreditAccountLabel.Create(this, _T("Credit Account"), 300, 440, 430, 465);
	m_wndCreditAccount.Create(this,435, 440, 635, 465); 
	m_wndDebitAccountLabel.Create(this, _T("Debit Account"), 300, 470, 430, 495);
	m_wndDebitAccount.Create(this,435, 470, 635, 495); */
	m_wndCategoryList.Create(this,5, 5, 635, 405); 
	m_wndGroupIDLabel.Create(this, _T("Group ID"), 5, 410, 95, 435);
	m_wndGroupID.Create(this,100, 410, 295, 435);
	m_wndEquipmentIDLabel.Create(this, _T("Equipment ID"), 300, 410, 430, 435);
	m_wndEquipmentID.Create(this,435, 410, 635, 435); 
	m_wndCategoryIDLabel.Create(this, _T("Category ID"), 5, 440, 95, 465);
	m_wndCategoryID.Create(this,100, 440, 295, 465); 
	m_wndCategoryNameLabel.Create(this, _T("Category Name"), 300, 440, 430, 465);
	m_wndCategoryName.Create(this,435, 440, 635, 465);
	m_wndTypeIDLabel.Create(this, _T("Type ID"), 5, 470, 95, 495);
	m_wndTypeID.Create(this,100, 470, 295, 495); 
	m_wndCreditAccountLabel.Create(this, _T("Credit Account"), 300, 470, 430, 495);
	m_wndCreditAccount.Create(this,435, 470, 635, 495); 
	m_wndDeprMethodLabel.Create(this, _T("Depr Method"), 5, 500, 95, 525);
	m_wndDeprMethod.Create(this,100, 500, 295, 525); 
	m_wndDebitAccountLabel.Create(this, _T("Debit Account"), 300, 500, 430, 525);
	m_wndDebitAccount.Create(this,435, 500, 635, 525);
	m_wndAdd.Create(this, _T("&Add"), 100, 530, 185, 555);
	m_wndEdit.Create(this, _T("&Edit"), 190, 530, 275, 555);
	m_wndDelete.Create(this, _T("&Delete"), 280, 530, 365, 555);
	m_wndSave.Create(this, _T("&Save"), 370, 530, 455, 555);
	m_wndCancel.Create(this, _T("&Cancel"), 460, 530, 545, 555);
	m_wndClose.Create(this, _T("&Close"), 550, 530, 635, 555);
	 
}
void CCategorySetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndGroupID.SetCheckValue(true);
	m_wndEquipmentID.SetCheckValue(true);
	m_wndCategoryID.ModifyStyle(0, ES_UPPERCASE);
	m_wndCategoryID.SetLimitText(7);
	m_wndCategoryID.SetCheckValue(true);
	m_wndCategoryName.SetLimitText(254);
	m_wndCategoryName.SetCheckValue(true);
	m_wndEquipmentID.SetCheckValue(true);
	m_wndEquipmentID.LimitText(35);
	m_wndTypeID.SetCheckValue(true);
	m_wndTypeID.LimitText(15);
	m_wndDeprMethod.SetCheckValue(true);
	m_wndDeprMethod.LimitText(1);
	//m_wndCreditAccount.SetCheckValue(true);
	m_wndCreditAccount.LimitText(7);
	//m_wndDebitAccount.SetCheckValue(true);
	m_wndDebitAccount.LimitText(7);


	m_wndCategoryList.InsertColumn(0, _T("Category ID"), CFMT_TEXT, 75);
	m_wndCategoryList.InsertColumn(1, _T("Name"), CFMT_TEXT, 210);
	m_wndCategoryList.InsertColumn(2, _T("Type ID"), CFMT_TEXT, 55);
	m_wndCategoryList.InsertColumn(3, _T("Depreciation Method"), CFMT_TEXT, 280);
	m_wndCategoryList.InsertColumn(4, _T("Credit Account"), CFMT_TEXT, 100);
	m_wndCategoryList.InsertColumn(5, _T("Debit Account"), CFMT_TEXT, 100);
	m_wndCategoryList.InsertColumn(6, _T(""), CFMT_TEXT, 35);


	m_wndTypeID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeID.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndGroupID.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndGroupID.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndDeprMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndDeprMethod.InsertColumn(1, _T("Description"), CFMT_TEXT, 240);


	m_wndCreditAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCreditAccount.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_wndEquipmentID.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndEquipmentID.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndDebitAccount.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDebitAccount.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_fam_categoryTbl.SetTableName(_T("fam_category"));
	m_fam_categoryTbl.AddField(_T("famc_createdby"), dfText, 15); 
	m_fam_categoryTbl.AddField(_T("famc_createddate"), dfDateTime); 
	m_fam_categoryTbl.AddField(_T("famc_updatedby"), dfText, 15); 
	m_fam_categoryTbl.AddField(_T("famc_updateddate"), dfDateTime); 
	m_fam_categoryTbl.AddField(_T("famc_id"), dfText, 7); 
	m_fam_categoryTbl.AddField(_T("famc_name"), dfText, 254);
	m_fam_categoryTbl.AddField(_T("famc_equipid"), dfText, 15);
	m_fam_categoryTbl.AddField(_T("famc_typeid"), dfText, 15);
	m_fam_categoryTbl.AddField(_T("famc_groupid"), dfText, 10);
	m_fam_categoryTbl.AddField(_T("famc_depr_method"), dfText, 1); 
	m_fam_categoryTbl.AddField(_T("famc_creditacount"), dfText, 7); 
	m_fam_categoryTbl.AddField(_T("famc_debitacount"), dfText, 7); 
	m_fam_categoryTbl.AddField(_T("famc_org_id"), dfText, 3);
	SetWindowTitle(_T("Category Information"));
}
void CCategorySetupDialog::OnSetWindowEvents()
{
	m_wndCategoryList.SetEvent(WE_SELCHANGE, _OnCategoryListSelectChangeFnc);
	m_wndCategoryList.SetEvent(WE_LOADDATA, _OnCategoryListLoadDataFnc);
	m_wndCategoryList.SetEvent(WE_DBLCLICK, _OnCategoryListDblClickFnc);
	m_wndCategoryList.SetWindowText(_T("Category"));
	m_wndCategoryList.AddEvent(1, _T("&Add"), _OnAddCategorySetupDialogFnc, 0, 0, 0);
	m_wndCategoryList.AddEvent(0, _T("-"), NULL);
	m_wndCategoryList.AddEvent(2, _T("&Edit"), _OnEditCategorySetupDialogFnc, 0, 0, 0);
	m_wndCategoryList.AddEvent(0, _T("-"), NULL);
	m_wndCategoryList.AddEvent(3, _T("&Delete"), _OnDeleteCategorySetupDialogFnc, 0, 0, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndCategoryID.SetEvent(WE_CHANGE, _OnCategoryIDChangeFnc);
	//m_wndCategoryID.SetEvent(WE_SETFOCUS, _OnCategoryIDSetfocusFnc);
	//m_wndCategoryID.SetEvent(WE_KILLFOCUS, _OnCategoryIDKillfocusFnc);
	m_wndCategoryID.SetEvent(WE_CHECKVALUE, _OnCategoryIDCheckValueFnc);
	//m_wndCategoryName.SetEvent(WE_CHANGE, _OnCategoryNameChangeFnc);
	//m_wndCategoryName.SetEvent(WE_SETFOCUS, _OnCategoryNameSetfocusFnc);
	//m_wndCategoryName.SetEvent(WE_KILLFOCUS, _OnCategoryNameKillfocusFnc);
	m_wndCategoryName.SetEvent(WE_CHECKVALUE, _OnCategoryNameCheckValueFnc);
	m_wndTypeID.SetEvent(WE_SELENDOK, _OnTypeIDSelendokFnc);
	//m_wndTypeID.SetEvent(WE_SETFOCUS, _OnTypeIDSetfocusFnc);
	//m_wndTypeID.SetEvent(WE_KILLFOCUS, _OnTypeIDKillfocusFnc);
	m_wndTypeID.SetEvent(WE_SELCHANGE, _OnTypeIDSelectChangeFnc);
	m_wndTypeID.SetEvent(WE_LOADDATA, _OnTypeIDLoadDataFnc);
	//m_wndTypeID.SetEvent(WE_ADDNEW, _OnTypeIDAddNewFnc);
	m_wndGroupID.SetEvent(WE_SELENDOK, _OnGroupIDSelendokFnc);
	//m_wndGroupID.SetEvent(WE_SETFOCUS, _OnGroupIDSetfocusFnc);
	//m_wndGroupID.SetEvent(WE_KILLFOCUS, _OnGroupIDKillfocusFnc);
	m_wndGroupID.SetEvent(WE_SELCHANGE, _OnGroupIDSelectChangeFnc);
	m_wndGroupID.SetEvent(WE_LOADDATA, _OnGroupIDLoadDataFnc);
	//m_wndGroupID.SetEvent(WE_ADDNEW, _OnGroupIDAddNewFnc);
	m_wndEquipmentID.SetEvent(WE_SELENDOK, _OnEquipmentIDSelendokFnc);
	//m_wndEquipmentID.SetEvent(WE_SETFOCUS, _OnEquipmentIDSetfocusFnc);
	//m_wndEquipmentID.SetEvent(WE_KILLFOCUS, _OnEquipmentIDKillfocusFnc);
	m_wndEquipmentID.SetEvent(WE_SELCHANGE, _OnEquipmentIDSelectChangeFnc);
	m_wndEquipmentID.SetEvent(WE_LOADDATA, _OnEquipmentIDLoadDataFnc);
	//m_wndEquipmentID.SetEvent(WE_ADDNEW, _OnEquipmentIDAddNewFnc);
	m_wndDeprMethod.SetEvent(WE_SELENDOK, _OnDeprMethodSelendokFnc);
	//m_wndDeprMethod.SetEvent(WE_SETFOCUS, _OnDeprMethodSetfocusFnc);
	//m_wndDeprMethod.SetEvent(WE_KILLFOCUS, _OnDeprMethodKillfocusFnc);
	m_wndDeprMethod.SetEvent(WE_SELCHANGE, _OnDeprMethodSelectChangeFnc);
	m_wndDeprMethod.SetEvent(WE_LOADDATA, _OnDeprMethodLoadDataFnc);
	//m_wndDeprMethod.SetEvent(WE_ADDNEW, _OnDeprMethodAddNewFnc);
	m_wndCreditAccount.SetEvent(WE_SELENDOK, _OnCreditAccountSelendokFnc);
	//m_wndCreditAccount.SetEvent(WE_SETFOCUS, _OnCreditAccountSetfocusFnc);
	//m_wndCreditAccount.SetEvent(WE_KILLFOCUS, _OnCreditAccountKillfocusFnc);
	m_wndCreditAccount.SetEvent(WE_SELCHANGE, _OnCreditAccountSelectChangeFnc);
	m_wndCreditAccount.SetEvent(WE_LOADDATA, _OnCreditAccountLoadDataFnc);
	//m_wndCreditAccount.SetEvent(WE_ADDNEW, _OnCreditAccountAddNewFnc);
	m_wndDebitAccount.SetEvent(WE_SELENDOK, _OnDebitAccountSelendokFnc);
	//m_wndDebitAccount.SetEvent(WE_SETFOCUS, _OnDebitAccountSetfocusFnc);
	//m_wndDebitAccount.SetEvent(WE_KILLFOCUS, _OnDebitAccountKillfocusFnc);
	m_wndDebitAccount.SetEvent(WE_SELCHANGE, _OnDebitAccountSelectChangeFnc);
	m_wndDebitAccount.SetEvent(WE_LOADDATA, _OnDebitAccountLoadDataFnc);
	//m_wndDebitAccount.SetEvent(WE_ADDNEW, _OnDebitAccountAddNewFnc);
	OnCategoryListLoadData();
	if (m_wndCategoryList.GetItemCount() > 0)
	{
		//m_wndCategoryList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		//m_wndCategoryList.SetFocus();
		m_wndCategoryList.SetCurSel(0);
		m_szCategoryID = m_wndCategoryList.GetItemText(0, 0);
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
void CCategorySetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCategoryID.GetDlgCtrlID(), m_szCategoryID);
	DDX_Text(pDX, m_wndCategoryName.GetDlgCtrlID(), m_szCategoryName);
	DDX_TextEx(pDX, m_wndEquipmentID.GetDlgCtrlID(), m_szEquipmentIDKey);
	DDX_TextEx(pDX, m_wndTypeID.GetDlgCtrlID(), m_szTypeIDKey);
	DDX_TextEx(pDX, m_wndGroupID.GetDlgCtrlID(), m_szGroupIDKey);
	DDX_TextEx(pDX, m_wndDeprMethod.GetDlgCtrlID(), m_szDeprMethodKey);
	DDX_TextEx(pDX, m_wndCreditAccount.GetDlgCtrlID(), m_szCreditAccountKey);
	DDX_TextEx(pDX, m_wndDebitAccount.GetDlgCtrlID(), m_szDebitAccountKey);

}
void CCategorySetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_category WHERE famc_id='%s' and famc_org_id = '%s'"), m_szCategoryID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
	//rs.GetValue(_T("famc_id"), m_szCategoryID);
		rs.GetValue(_T("famc_name"), m_szCategoryName);
		rs.GetValue(_T("famc_typeid"), m_szTypeIDKey);
		rs.GetValue(_T("famc_depr_method"), m_szDeprMethodKey);
		rs.GetValue(_T("famc_creditacount"), m_szCreditAccountKey);
		rs.GetValue(_T("famc_debitacount"), m_szDebitAccountKey);
		rs.GetValue(_T("famc_groupid"), m_szGroupIDKey);
		rs.GetValue(_T("famc_equipid"), m_szEquipmentIDKey);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CCategorySetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_categoryTbl.SetValue(_T("famc_createdby"), pMF->GetCurrentUser());
	m_fam_categoryTbl.SetValue(_T("famc_createddate"), pMF->GetSysDateTime());
	m_fam_categoryTbl.SetValue(_T("famc_updatedby"), pMF->GetCurrentUser());
	m_fam_categoryTbl.SetValue(_T("famc_updateddate"), pMF->GetSysDateTime());
	m_fam_categoryTbl.SetValue(_T("famc_id"), m_szCategoryID);
	m_fam_categoryTbl.SetValue(_T("famc_name"), m_szCategoryName);
	m_fam_categoryTbl.SetValue(_T("famc_typeid"), m_szTypeIDKey);
	m_fam_categoryTbl.SetValue(_T("famc_groupid"), m_szGroupIDKey);
	m_fam_categoryTbl.SetValue(_T("famc_equipid"), m_szEquipmentIDKey);
	m_fam_categoryTbl.SetValue(_T("famc_depr_method"), m_szDeprMethodKey);
	m_fam_categoryTbl.SetValue(_T("famc_creditacount"), m_szCreditAccountKey);
	m_fam_categoryTbl.SetValue(_T("famc_debitacount"), m_szDebitAccountKey);
	m_fam_categoryTbl.SetValue(_T("famc_org_id"), pMF->GetModuleID());
	//m_fam_categoryTbl.SetValue(_T("famc_debitacount"), m_szDebitAccountKey);
}
void CCategorySetupDialog::SetDefaultValues(){

	m_szCategoryID.Empty();
	m_szCategoryName.Empty();
	m_szTypeIDKey.Empty();
	m_szDeprMethodKey.Empty();
	m_szCreditAccountKey.Empty();
	m_szDebitAccountKey.Empty();
	m_szEquipmentIDKey.Empty();

}
int CCategorySetupDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
		int nCount;
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues(); 
			m_wndGroupID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndCategoryID.EnableWindow(FALSE);
			m_wndCategoryName.SetFocus();
			m_wndCategoryName.SetSel(m_wndCategoryName.GetWindowTextLength(), m_wndCategoryName.GetWindowTextLength());
			szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_deprmethod='%s' AND fa_category='%s'"), 
						 m_szDeprMethodKey, m_szCategoryID);
			rs.ExecSQL(szSQL);
			nCount = rs.GetIntValue();
			if (nCount > 0)
				m_wndDeprMethod.EnableWindow(FALSE);
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
void CCategorySetupDialog::OnCategoryListDblClick(){
	
} 
void CCategorySetupDialog::OnCategoryListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szCategoryID = m_wndCategoryList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CCategorySetupDialog::OnCategoryListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCategorySetupDialog::OnCategoryListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndCategoryList.BeginLoad(); 
	m_wndCategoryList.DeleteAllItems(); 
	int nCount = 0;
	/*szSQL.Format(_T("SELECT famc_id, famc_name, famc_typeid,")\
				 _T(" (SELECT fadm_desc FROM fam_deprmethod WHERE fadm_id=famc_depr_method) AS DeprMethod,")\
				 _T(" famc_creditacount, famc_debitacount FROM fam_category")\
				 _T(" GROUP BY famc_typeid, famc_id, famc_name, DeprMethod, famc_creditacount, famc_debitacount")\
				 _T(" ORDER BY 3, 1, 2, 4, 5, 6"));*/
	szSQL.Format(_T("SELECT distinct famc_id, famc_name, famc_typeid,")\
				 _T(" (SELECT fadm_desc FROM fam_deprmethod WHERE fadm_id=famc_depr_method) AS DeprMethod,")\
				 _T(" famc_creditacount, famc_debitacount FROM fam_category WHERE famc_org_id = '%s'")\
				 _T(" ORDER BY 3, 1, 2, 4, 5, 6"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndCategoryList.AddItems(
			rs.GetValue(_T("famc_id")), 
			rs.GetValue(_T("famc_name")), 
			rs.GetValue(_T("famc_typeid")), 
			rs.GetValue(_T("DeprMethod")), 
			rs.GetValue(_T("famc_creditacount")), 
			rs.GetValue(_T("famc_debitacount")), NULL);
		rs.MoveNext();
	}
	m_wndCategoryList.EndLoad(); 
	return nCount;
}
/*void CCategorySetupDialog::OnCategoryIDChange(){
	
} */
/*void CCategorySetupDialog::OnCategoryIDSetfocus(){
	
} */
/*void CCategorySetupDialog::OnCategoryIDKillfocus(){
	
} */
int CCategorySetupDialog::OnCategoryIDCheckValue()
{ 
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_category WHERE famc_id='%s' and famc_org_id = '%s'"), m_szCategoryID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndCategoryID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CCategorySetupDialog::OnCategoryNameChange(){
	
} */
/*void CCategorySetupDialog::OnCategoryNameSetfocus(){
	
} */
/*void CCategorySetupDialog::OnCategoryNameKillfocus(){
	
} */
int CCategorySetupDialog::OnCategoryNameCheckValue()
{
	CString szTemp;
	PreInitCap(m_szCategoryName, szTemp);
	m_szCategoryName = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CCategorySetupDialog::OnTypeIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCategorySetupDialog::OnTypeIDSelendok(){
	 
}
/*void CCategorySetupDialog::OnTypeIDSetfocus(){
	
}*/
/*void CCategorySetupDialog::OnTypeIDKillfocus(){
	
}*/
long CCategorySetupDialog::OnTypeIDLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndTypeID.IsSearchKey() && !m_szTypeIDKey.IsEmpty())
	{
		szWhere.Format(_T(" AND fast_id='%s' "), m_szTypeIDKey);
	}
	m_wndTypeID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' %s ORDER BY fast_id"), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndTypeID.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCategorySetupDialog::OnTypeIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCategorySetupDialog::OnGroupIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCategorySetupDialog::OnGroupIDSelendok(){
	 
}
/*void CCategorySetupDialog::OnGroupIDSetfocus(){
	
}*/
/*void CCategorySetupDialog::OnGroupIDKillfocus(){
	
}*/
long CCategorySetupDialog::OnGroupIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroupID.IsSearchKey() && !m_szGroupIDKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szGroupIDKey);
	}
	m_wndGroupID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS name FROM sys_sel WHERE ss_id = 'its_group' %s ORDER BY ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CCategorySetupDialog::OnGroupIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCategorySetupDialog::OnEquipmentIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCategorySetupDialog::OnEquipmentIDSelendok(){
	 
}
/*void CCategorySetupDialog::OnEquipmentIDSetfocus(){
	
}*/
/*void CCategorySetupDialog::OnEquipmentIDKillfocus(){
	
}*/
long CCategorySetupDialog::OnEquipmentIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndEquipmentID.IsSearchKey() && !m_szEquipmentIDKey.IsEmpty()){
	 szWhere.Format(_T(" and ss_code='%s' "), m_szEquipmentIDKey);
	}
	m_wndEquipmentID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'its_equipid' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEquipmentID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CCategorySetupDialog::OnEquipmentIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCategorySetupDialog::OnDeprMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCategorySetupDialog::OnDeprMethodSelendok(){
	 
}
/*void CCategorySetupDialog::OnDeprMethodSetfocus(){
	
}*/
/*void CCategorySetupDialog::OnDeprMethodKillfocus(){
	
}*/
long CCategorySetupDialog::OnDeprMethodLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDeprMethod.IsSearchKey() && !m_szDeprMethodKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fadm_id='%s' "), m_szDeprMethodKey);
	}
	m_wndDeprMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_deprmethod %s ORDER BY fadm_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDeprMethod.AddItems(
			rs.GetValue(_T("fadm_id")), 
			rs.GetValue(_T("fadm_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCategorySetupDialog::OnDeprMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCategorySetupDialog::OnCreditAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCategorySetupDialog::OnCreditAccountSelendok(){
	 
}
/*void CCategorySetupDialog::OnCreditAccountSetfocus(){
	
}*/
/*void CCategorySetupDialog::OnCreditAccountKillfocus(){
	
}*/
long CCategorySetupDialog::OnCreditAccountLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndCreditAccount.IsSearchKey() && !m_szCreditAccountKey.IsEmpty())
	{
		szWhere.Format(_T(" AND accountid='%s' "), m_szCreditAccountKey);
	}
	m_wndCreditAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ada_account_id AS id, ada_vnname AS description FROM ad_account WHERE ada_account_category_id='%s' %s ORDER BY ada_account_id"), 
				 m_szCategoryID, szWhere); 
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCreditAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCategorySetupDialog::OnCreditAccountAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCategorySetupDialog::OnDebitAccountSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCategorySetupDialog::OnDebitAccountSelendok(){
	 
}
/*void CCategorySetupDialog::OnDebitAccountSetfocus(){
	
}*/
/*void CCategorySetupDialog::OnDebitAccountKillfocus(){
	
}*/
long CCategorySetupDialog::OnDebitAccountLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDebitAccount.IsSearchKey() && !m_szDebitAccountKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ada_account_id='%s' "), m_szDebitAccountKey);
	}
	m_wndDebitAccount.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ada_account_id AS id, ada_vnname AS description FROM ad_account WHERE ada_account_category_id='%s' %s ORDER BY ada_account_id"), 
		         m_szCategoryID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDebitAccount.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CCategorySetupDialog::OnDebitAccountAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCategorySetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddCategorySetupDialog();
} 
void CCategorySetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*CString szSQL;
	CRecord rs;
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_category='%s'"), m_szCategoryID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset contains this category. You can not edit it"), MB_OK | MB_ICONERROR);
		return;
	}*/
	OnEditCategorySetupDialog();
} 
void CCategorySetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_category='%s' AND fa_org_id = '%s'"), m_szCategoryID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset belongs to this category. You can not delete it"), MB_OK | MB_ICONERROR);
		return;
	}
	OnDeleteCategorySetupDialog();
} 
void CCategorySetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCategorySetupDialog();
} 
void CCategorySetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCategorySetupDialog();
} 
void CCategorySetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CCategorySetupDialog::OnAddCategorySetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CCategorySetupDialog::OnEditCategorySetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CCategorySetupDialog::OnDeleteCategorySetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szId;
	m_nIndex = m_wndCategoryList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
	//szId = m_wndCategoryList.GetItemText(m_nIndex, 0);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_category WHERE famc_id='%s' AND famc_org_id = '%s'"), m_szCategoryID, pMF->GetModuleID()); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		OnCategoryListLoadData();
		if (m_wndCategoryList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndCategoryList, m_szCategoryID, m_nIndex);		
			//m_szCategoryID = m_wndCategoryList.GetItemText(m_nIndex, 0);
		//_msg(_T("%d"), m_nIndex);
			//GetDataToScreen();
		/*if (m_wndCategoryList.GetItemCount() > 0)
 			SetMode(VM_VIEW);
		else
			SetMode(VM_NONE);*/
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 		//OnCancelCategorySetupDialog(); 
 	}
	return 0;
}
int CCategorySetupDialog::OnSaveCategorySetupDialog()
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
 		szSQL = m_fam_categoryTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		m_nIndex = m_wndCategoryList.GetCurSel();
		szWhere.Format(_T(" WHERE famc_id='%s' "), m_szCategoryID); 
 		szSQL = m_fam_categoryTbl.GetUpdateSQL(_T("famc_createdby, famc_createddate, famc_id")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnCategorySetupDialogListLoadData(); 
		OnCategoryListLoadData();
		SetItemSel(&m_wndCategoryList, m_szCategoryID, m_nIndex);
		/*if (GetMode() == VM_EDIT)
		{
			m_szCategoryID = m_wndCategoryList.GetItemText(m_nIndex, 0);
			GetDataToScreen();
		}*/
 		//SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	/*else 
 	{ 
 	} */
 	return ret; 
 	//return 0; 
}
int CCategorySetupDialog::OnCancelCategorySetupDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndCategoryList.GetCurSel() >= 0)
		{
			m_szCategoryID = m_wndCategoryList.GetItemText(m_wndCategoryList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CCategorySetupDialog::OnCategorySetupDialogListLoadData(){
	return 0;
}
void CCategorySetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
				pList->SetCurSel(m_nIndex);
				//pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(m_nIndex, 1);
				//pList->SetFocus();				
			}
		}
	}
}