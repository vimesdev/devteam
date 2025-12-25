#include "HMSOperationSetupDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSOperationListSetup.h"

static int _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOperationSetupDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnGroupSelendokFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnGroupSelendok();
}
/*static int _OnGroupSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static int _OnGroupKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnGroupKillfocus();
}*/
static int _OnGroupLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnGroupLoadData();
}
/*static int _OnGroupAddNewFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnGroupAddNew();
}*/
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnIDCheckValue();
} 
static long _OnFeeCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnFeeCategoryLoadData();
}
/*static int _OnUnitChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnUnitChange();
} */
/*static int _OnUnitSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnUnitKillfocus();} */ 
/*static int _OnUnitKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnUnitCheckValue();
} 
static int _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSOperationSetupDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDepartmentSelendokFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnDepartmentSelendok();
}
/*static int _OnDepartmentSetfocusFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static int _OnDepartmentKillfocusFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static int _OnDepartmentLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnDepartmentLoadData();
}
/*static int _OnDepartmentAddNewFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog *)pWnd)->OnDepartmentAddNew();
}*/

/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnNameCheckValue();
} 

/*static int _OnServicePriceChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static int _OnServicePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnServicePriceKillfocus();} */ 
/*static int _OnServicePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static int _OnInsurancePriceChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static int _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnInsurancePriceKillfocus();} */ 
/*static int _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static int _OnPolicyPriceChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static int _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnPolicyPriceKillfocus();} */ 
/*static int _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static int _OnOptPriceChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnOptPriceChange();
} */
/*static int _OnOptPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnOptPriceKillfocus();} */ 
/*static int _OnOptPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnOptPriceKillfocus();
} */
static int _OnOptPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnOptPriceCheckValue();
}
/*static void _OnRequestPriceChangeFnc(CWnd *pWnd){
	((CHMSOperationSetupDialog *)pWnd)->OnRequestPriceChange();
} */
/*static void _OnRequestPriceSetfocusFnc(CWnd *pWnd){
	((CHMSOperationSetupDialog *)pWnd)->OnRequestPriceSetfocus();} */ 
/*static void _OnRequestPriceKillfocusFnc(CWnd *pWnd){
	((CHMSOperationSetupDialog *)pWnd)->OnRequestPriceKillfocus();
} */
static int _OnRequestPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnRequestPriceCheckValue();
} 
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSOperationSetupDialog *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSOperationSetupDialog *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSOperationSetupDialog *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnReturnDeptCheckValue();
} 
//static int _OnDifferencePaymentSelectFnc(CWnd *pWnd){
//	 return ((CHMSOperationSetupDialog*)pWnd)->OnDifferencePaymentSelect();
//}
/*static int _OnLineChangeFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnLineChange();
} */
/*static int _OnLineSetfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnLineKillfocus();} */ 
/*static int _OnLineKillfocusFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnLineKillfocus();
} */
static int _OnLineCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationSetupDialog *)pWnd)->OnLineCheckValue();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOperationSetupDialog *pVw = (CHMSOperationSetupDialog *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCloseSelectFnc(CWnd *pWnd){
	CHMSOperationSetupDialog *pVw = (CHMSOperationSetupDialog *)pWnd;
	return pVw->OnCloseSelect();
}
static void _OnDifferencePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSOperationSetupDialog*)pWnd)->OnDifferencePaymentSelect();
}
static void _OnInsurancePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSOperationSetupDialog*)pWnd)->OnInsurancePaymentSelect();
}
static void _OnPolicyPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSOperationSetupDialog*)pWnd)->OnPolicyPaymentSelect();
}
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CHMSOperationSetupDialog*)pWnd)->OnHitechSelect();
}
static int _OnAddHMSOperationSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog*)pWnd)->OnAddHMSOperationSetupDialog();
} 
static int _OnEditHMSOperationSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog*)pWnd)->OnEditHMSOperationSetupDialog();
} 
static int _OnDeleteHMSOperationSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog*)pWnd)->OnDeleteHMSOperationSetupDialog();
} 
static int _OnSaveHMSOperationSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog*)pWnd)->OnSaveHMSOperationSetupDialog();
} 
static int _OnCancelHMSOperationSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSOperationSetupDialog*)pWnd)->OnCancelHMSOperationSetupDialog();
} 
CHMSOperationSetupDialog::CHMSOperationSetupDialog(CWnd *pParent, CWnd *pList):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 590;
	m_nDlgHeight = 255;
	SetDefaultValues();
	m_szDepartmentKey.Empty();
	m_szUnit.Empty();
	m_szGroupKey.Empty();
	m_szID.Empty();
	m_wndOperationList = (CHMSOperationListSetup*) pList;
}
CHMSOperationSetupDialog::~CHMSOperationSetupDialog(){
}
void CHMSOperationSetupDialog::OnCreateComponents()
{
	m_wndInformationOfTestFee.Create(this, _T("Information of test fee"), 5, 5, 580, 270);
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 30, 110, 55);
	m_wndApplyDate.Create(this,115, 30, 195, 55); 
	m_wndGroupLabel.Create(this, _T("Group"), 200, 30, 300, 55);
	m_wndGroup.Create(this,305, 30, 400, 55);

	

	m_wndFeeCategoryLabel.Create(this, _T("Fee Category"), 10, 60, 110, 85);
	m_wndFeeCategory.Create(this,115, 60, 195, 85);

	

	m_wndIDLabel.Create(this, _T("ID"), 200, 60, 300, 85);
	m_wndID.Create(this,305, 60, 385, 85); 
	m_wndUnitLabel.Create(this, _T("Unit"), 390, 60, 490, 85);
	m_wndUnit.Create(this,495, 60, 575, 85); 
	m_wndNameLabel.Create(this, _T("Name /Unit"), 10, 90, 110, 115);
	m_wndName.Create(this,115, 90, 575, 115); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 120, 110, 145);
	m_wndDepartment.Create(this,115, 120, 385, 145); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 390, 120, 490, 145);
	m_wndReturnDept.Create(this,495, 120, 575, 145); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 150, 110, 175);
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 200, 150, 300, 175);
	m_wndServicePrice.Create(this,115, 150, 195, 175); 
	m_wndInsurancePrice.Create(this,305, 150, 385, 175); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 390, 150, 490, 175);
	m_wndPolicyPrice.Create(this,495, 150, 575, 175); 
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 10, 180, 110, 205);
	m_wndRequestPrice.Create(this,115, 180, 195, 205); 
	m_wndInsDiffPaymentLabel.Create(this, _T("Ins Diff Payment"), 200, 180, 300, 205);
	m_wndInsDiffPayment.Create(this,305, 180, 385, 205); 
	m_wndPolDiffPaymentLabel.Create(this, _T("Pol Diff Payment"), 390, 180, 490, 205);
	m_wndPolDiffPayment.Create(this,495, 180, 575, 205); 
	m_wndInsurancePayment.Create(this, _T("Insurance Payment"), 10, 210, 195, 235);
	m_wndPolicyPayment.Create(this, _T("Policy Payment"), 200, 210, 385, 235);
	m_wndDifferencePayment.Create(this, _T("Difference Payment"), 390, 210, 575, 235);
	m_wndHitech.Create(this, _T("Hitech"), 10, 240, 195, 265);
	m_wndHitechMachine.Create(this, _T("Hitech Machine"), 200, 240, 385, 265);
	m_wndPlasticSurgery.Create(this, _T("Plastic Surgery"), 390, 240, 575, 265);
	m_wndSave.Create(this, _T("&Save"), 395, 275, 485, 300);
	m_wndClose.Create(this, _T("&Close"), 490, 275, 580, 300);
	m_wndActive.Create(this, _T("Active"), 5, 275, 90, 300);
}
void CHMSOperationSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
//	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndName.SetLimitText(512);
	m_wndName.SetCheckValue(true);
	//m_wndName.SetInitCap(true);
	m_wndID.SetLimitText(13);
	//m_wndID.ModifyStyle(WS_TABSTOP, 0);
	m_wndUnit.SetLimitText(15);
	m_wndUnit.SetInitCap(true);
	//m_wndUnit.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(10);
	m_wndServicePrice.SetCurrencyFormat(true);
	//m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(10);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	//m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(10);
	m_wndPolicyPrice.SetCurrencyFormat(true);
	//m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequestPrice.SetLimitText(10);
	m_wndRequestPrice.SetCurrencyFormat(true);
	//m_wndRequestPrice.SetCheckValue(true);
	m_wndReturnDept.SetLimitText(10);
	m_wndReturnDept.SetCurrencyFormat(true);
	//m_wndReturnDept.SetCheckValue(true);

	m_wndInsDiffPayment.SetLimitText(16);
	m_wndInsDiffPayment.SetCheckValue(true);
	m_wndPolDiffPayment.SetLimitText(16);
	m_wndPolDiffPayment.SetCheckValue(true);

	
	m_wndReturnDept.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitech.ModifyStyle(WS_TABSTOP, 0);
	m_wndHitechMachine.ModifyStyle(WS_TABSTOP, 0);
	m_wndPlasticSurgery.ModifyStyle(WS_TABSTOP, 0);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndPolDiffPayment.SetCurrencyFormat(true);
	m_wndInsDiffPayment.SetCurrencyFormat(true);

	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);

	m_wndFeeCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_hms_fee_listTbl.SetTableName(_T("hms_fee_list"));
	m_hms_fee_listTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_feeid"), dfText, 13); 
	m_hms_fee_listTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_line"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_deptid"), dfText, 7); 
	m_hms_fee_listTbl.AddField(_T("hfl_typeid"), dfText, 3);
	m_hms_fee_listTbl.AddField(_T("hfl_itype"), dfInteger); 
//	m_hms_fee_listTbl.AddField(_T("hfl_category"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_groupid"), dfText, 5); 
	m_hms_fee_listTbl.AddField(_T("hfl_subgroup"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_subitem"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_name"), dfText, 512); 
	m_hms_fee_listTbl.AddField(_T("hfl_unit"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_index1"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_index2"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_fee_listTbl.AddField(_T("hfl_polprice"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_retprice"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_diffpaid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_hitech"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_active"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_typeid"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_categoryid"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_hostname"), dfText, 100); 
	m_hms_fee_listTbl.AddField(_T("hfl_insdiff"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_poldiff"), dfDouble);
	m_hms_fee_listTbl.AddField(_T("hfl_plasticsurgery"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_hitechmachine"), dfText, 1);
	m_hms_fee_listTbl.AddField(_T("hfl_applydate"), dfDate);
}
void CHMSOperationSetupDialog::OnSetWindowEvents(){
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndFeeCategory.SetEvent(WE_LOADDATA, _OnFeeCategoryLoadDataFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	
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
	//m_wndOptPrice.SetEvent(WE_CHANGE, _OnOptPriceChangeFnc);
	//m_wndOptPrice.SetEvent(WE_SETFOCUS, _OnOptPriceSetfocusFnc);
	//m_wndOptPrice.SetEvent(WE_KILLFOCUS, _OnOptPriceKillfocusFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	//m_wndRequestPrice.SetEvent(WE_CHANGE, _OnRequestPriceChangeFnc);
	//m_wndRequestPrice.SetEvent(WE_SETFOCUS, _OnRequestPriceSetfocusFnc);
	//m_wndRequestPrice.SetEvent(WE_KILLFOCUS, _OnRequestPriceKillfocusFnc);
	m_wndRequestPrice.SetEvent(WE_CHECKVALUE, _OnRequestPriceCheckValueFnc);
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);
	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);

	m_wndDifferencePayment.SetEvent(WE_CLICK, _OnDifferencePaymentSelectFnc);
	m_wndInsurancePayment.SetEvent(WE_CLICK, _OnInsurancePaymentSelectFnc);
	m_wndPolicyPayment.SetEvent(WE_CLICK, _OnPolicyPaymentSelectFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);

	
	//If is update item then load data to screen;
	int nMode = GetMode();
	if(nMode == VM_EDIT)
	{
		GetDataToScreen();
	}
	SetMode(nMode);
}
void CHMSOperationSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_nRequestPrice);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nReturnDept);
	DDX_Check(pDX, m_wndDifferencePayment.GetDlgCtrlID(), m_bDifferencePayment);
	DDX_Check(pDX, m_wndInsurancePayment.GetDlgCtrlID(), m_bInsurancePayment);
	DDX_Check(pDX, m_wndPolicyPayment.GetDlgCtrlID(), m_bPolicyPayment);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_Check(pDX, m_wndHitechMachine.GetDlgCtrlID(), m_bHitechMachine);
	DDX_Check(pDX, m_wndPlasticSurgery.GetDlgCtrlID(), m_bPlasticSurgery);
	DDX_Text(pDX, m_wndInsDiffPayment.GetDlgCtrlID(), m_nInsDiffPayment);
	DDX_Text(pDX, m_wndPolDiffPayment.GetDlgCtrlID(), m_nPolDiffPayment);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
}
void CHMSOperationSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){

		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_reqprice"), m_nRequestPrice);
		rs.GetValue(_T("hfl_retprice"), m_nReturnDept);
		rs.GetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
		rs.GetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
		rs.GetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
		CString szDif, szIns, szPol, szHiTech, szPlasticSurgery, szHitechMachine;

		rs.GetValue(_T("hfl_diffpaid"), szDif);
		rs.GetValue(_T("hfl_inspaid"), szIns);
		rs.GetValue(_T("hfl_polpaid"), szPol);
		rs.GetValue(_T("hfl_hitech"), szHiTech);
		if(szDif == _T("Y"))
			m_bDifferencePayment = TRUE;
		else
			m_bDifferencePayment = FALSE;

		if (szIns == _T("Y"))
			m_bInsurancePayment = TRUE;
		else
			m_bInsurancePayment = FALSE;

		if (szPol == _T("Y"))
			m_bPolicyPayment = TRUE;
		else
			m_bPolicyPayment = FALSE;

		if (szHiTech == _T("Y"))
			m_bHitech = TRUE;
		else
			m_bHitech = FALSE;

		rs.GetValue(_T("hfl_active"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bActive = true;
		else m_bActive = false;

		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bPlasticSurgery = TRUE;

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bHitechMachine = true;
		
		rs.GetValue(_T("hfl_deptid"), m_szDepartmentKey);
		rs.GetValue(_T("hfl_groupid"), m_szGroupKey);
		m_szCurGroup = m_szGroupKey;
		rs.GetValue(_T("hfl_line"), m_nLine);
		rs.GetValue(_T("hfl_idx"), m_nIndex);
		rs.GetValue(_T("hfl_applydate"), m_szApplyDate);
		m_szCurID = m_szID;
	}
	else
	{
		SetDefaultValues();
	}
	UpdateData(false);
}
void CHMSOperationSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	if(m_szCurGroup != m_szGroupKey)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list WHERE substr(hfl_groupid, 1, 2)='%s' "), m_szGroupKey.Left(2));
		rs.ExecSQL(szSQL);
		//_msg(_T("m_szID: %s, m_szGroupKey: %s"), m_szID, m_szGroupKey);
		m_szID.Format(_T("%s%.3d"), m_szGroupKey, rs.GetIntValue());
		//_msg(_T("m_szID: %s, m_szGroupKey: %s"), m_szID, m_szGroupKey);
		m_nIndex = rs.GetIntValue();
	}

	m_hms_fee_listTbl.SetValue(_T("hfl_idx"), m_nIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_fee_listTbl.SetValue(_T("hfl_line"), m_nLine);
	m_hms_fee_listTbl.SetValue(_T("hfl_deptid"), m_szDepartmentKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_groupid"), m_szGroupKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_itype"), 0);
	m_hms_fee_listTbl.SetValue(_T("hfl_subgroup"), _T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_subitem"), _T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_fee_listTbl.SetValue(_T("hfl_unit"), m_szUnit);
	m_hms_fee_listTbl.SetValue(_T("hfl_index1"), _T(""));
	m_hms_fee_listTbl.SetValue(_T("hfl_index2"), _T(""));
	m_hms_fee_listTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_reqprice"), m_nRequestPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_retprice"), m_nReturnDept);
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	CString szDif, szIns, szPol, szHiTech;

	if (m_bDifferencePayment)
		szDif = _T("Y");
	else
		szDif = _T("N");

	if (m_bInsurancePayment)
		szIns = _T("Y");
	else
		szIns = _T("N");

	if (m_bPolicyPayment)
		szPol = _T("Y");
	else
		szPol = _T("N");

	if (m_bHitech)
		szHiTech = _T("Y");
	else
		szHiTech = _T("N");

	m_hms_fee_listTbl.SetValue(_T("hfl_inspaid"), szIns);
	m_hms_fee_listTbl.SetValue(_T("hfl_polpaid"), szPol);
	m_hms_fee_listTbl.SetValue(_T("hfl_diffpaid"), szDif);
	m_hms_fee_listTbl.SetValue(_T("hfl_hitech"), szHiTech);

	m_hms_fee_listTbl.SetValue(_T("hfl_typeid"), _T("O"));
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);

	m_hms_fee_listTbl.SetValue(_T("hfl_insdiff"), m_nInsDiffPayment);
	m_hms_fee_listTbl.SetValue(_T("hfl_poldiff"), m_nPolDiffPayment);
	m_hms_fee_listTbl.SetValue(_T("hfl_active"), m_bActive?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_plasticsurgery"), m_bPlasticSurgery?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_hitechmachine"), m_bHitechMachine?_T("Y"):_T("N"));
	m_hms_fee_listTbl.SetValue(_T("hfl_applydate"), m_szApplyDate);

}

void CHMSOperationSetupDialog::SetDefaultValues()
{
	m_szApplyDate = AfxGetApp()->GetProfileString(_T("Formerly Data"), _T("Ins Apply Date"));
	//m_szApplyDate.Empty();
	m_szName.Empty();
	m_szID.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_nRequestPrice=0;
	m_nReturnDept=0;
	m_szFeeCategoryKey.Empty();
	m_bDifferencePayment=FALSE;
	m_bInsurancePayment=TRUE;
	m_bPolicyPayment=TRUE;
	m_bHitech=FALSE;
	m_nLine=0;
	m_bHitechMachine=FALSE;
	m_bPlasticSurgery=FALSE;
	m_bInsurancePayment=FALSE;
	m_bActive = TRUE;
	m_bPolicyPayment=FALSE;
	m_nInsDiffPayment = 0;
	m_nPolDiffPayment = 0;
}
int CHMSOperationSetupDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
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
		m_wndID.EnableWindow(false);
 		UpdateData(FALSE); 
 		return nOldMode; 
} 
int CHMSOperationSetupDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CHMSOperationSetupDialog::OnGroupSelendok(){
	 return 0;
}
/*int CHMSOperationSetupDialog::OnGroupSetfocus(){
	 return 0;
}*/
/*int CHMSOperationSetupDialog::OnGroupKillfocus(){
	 return 0;
}*/
int CHMSOperationSetupDialog::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B4','B5') AND hfg_active ='Y'") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*int CHMSOperationSetupDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CHMSOperationSetupDialog::OnIDChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnIDSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnIDKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnIDCheckValue(){
	return 0;
} 
int CHMSOperationSetupDialog::OnFeeCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' ORDER BY cast(ss_code as integer)"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndFeeCategory.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndFeeCategory.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
int CHMSOperationSetupDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CHMSOperationSetupDialog::OnDepartmentSelendok(){
	 return 0;
}
/*int CHMSOperationSetupDialog::OnDepartmentSetfocus(){
	 return 0;
}*/
/*int CHMSOperationSetupDialog::OnDepartmentKillfocus(){
	 return 0;
}*/
int CHMSOperationSetupDialog::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey()){
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept %s ORDER BY sd_id "), szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*int CHMSOperationSetupDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */
/*int CHMSOperationSetupDialog::OnUnitChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnUnitSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnUnitKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnUnitCheckValue(){
	return 0;
} 
/*int CHMSOperationSetupDialog::OnNameChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnNameSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnNameKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnNameCheckValue(){
	UpdateData(true);
	CString tmpStr;
	PreInitCap(m_szName, tmpStr);
	m_szName = tmpStr;
	UpdateData(false);
	return 0;
} 


/*int CHMSOperationSetupDialog::OnServicePriceChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnServicePriceSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnServicePriceKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnServicePriceCheckValue(){
	UpdateData(true);
	m_nInsurancePrice = m_nPolicyPrice = m_nServicePrice;
	UpdateData(false);
	return 0;
} 
/*int CHMSOperationSetupDialog::OnInsurancePriceChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnInsurancePriceSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnInsurancePriceKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*int CHMSOperationSetupDialog::OnPolicyPriceChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnPolicyPriceSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnPolicyPriceKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
/*int CHMSOperationSetupDialog::OnOptPriceChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnOptPriceSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnOptPriceKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnOptPriceCheckValue(){
	return 0;
} 
//int CHMSOperationSetupDialog::OnDifferencePaymentSelect()
//{
//	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
//	return 0;
//}
	/*void CHMSOperationSetupDialog::OnRequestPriceChange(){
	
} */
/*void CHMSOperationSetupDialog::OnRequestPriceSetfocus(){
	
} */
/*void CHMSOperationSetupDialog::OnRequestPriceKillfocus(){
	
} */
int CHMSOperationSetupDialog::OnRequestPriceCheckValue(){
	return 0;
} 
/*void CHMSOperationSetupDialog::OnReturnDeptChange(){
	
} */
/*void CHMSOperationSetupDialog::OnReturnDeptSetfocus(){
	
} */
/*void CHMSOperationSetupDialog::OnReturnDeptKillfocus(){
	
} */
int CHMSOperationSetupDialog::OnReturnDeptCheckValue(){
	return 0;
} 
/*int CHMSOperationSetupDialog::OnLineChange(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnLineSetfocus(){
	return 0;
} */
/*int CHMSOperationSetupDialog::OnLineKillfocus(){
	return 0;
} */
int CHMSOperationSetupDialog::OnLineCheckValue(){
	return 0;
} 
int CHMSOperationSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSOperationSetupDialog();
	 return 0;
} 
int CHMSOperationSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancel();
	 return 0;
}
void CHMSOperationSetupDialog::OnDifferencePaymentSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSOperationSetupDialog::OnInsurancePaymentSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSOperationSetupDialog::OnPolicyPaymentSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSOperationSetupDialog::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}

int CHMSOperationSetupDialog::OnAddHMSOperationSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSOperationSetupDialog::OnEditHMSOperationSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSOperationSetupDialog::OnDeleteHMSOperationSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSOperationSetupDialog(); 
 	}
return 0;
 } 
int CHMSOperationSetupDialog::OnSaveHMSOperationSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1;

	if(m_nInsDiffPayment < 0 || m_nPolDiffPayment < 0 || m_nReturnDept < 0)
		return -1;
	if(m_nInsDiffPayment > m_nServicePrice || m_nPolDiffPayment > m_nServicePrice)
		return -1;
	if(m_nReturnDept > m_nServicePrice)
		return -1;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_fee_listTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szCurID);
		pMF->ExecSQL(szSQL);

		szWhere.Format(_T(" WHERE hfl_feeid='%s' "), m_szCurID); 
 		szSQL = m_hms_fee_listTbl.GetUpdateSQL(_T("hfl_feeid,hfl_createdby,hfl_createddate")); 
 		szSQL += szWhere; 		
 	} 
_flog(_T("%s"), szSQL);

 	int ret = pMF->ExecSQL(szSQL); 

 	if(ret > 0) 
 	{	
		if (!m_szApplyDate.IsEmpty())
			AfxGetApp()->WriteProfileString(_T("Formerly Data"), _T("Ins Apply Date"), m_szApplyDate);
 		if(GetMode() == VM_EDIT)
		{
			CString szEvent, szDesc;
			szEvent.Format(_T("Edit"));
			szDesc.Format(_T("ID:%s, Name:%s"), m_szCurID, m_szName);
			pMF->SystemLog(szEvent, szDesc);
			OnOK();
		}
		else
		{
 			SetMode(VM_ADD); 
			m_wndName.SetFocus();
		}
		//if(m_wndOperationList) 
		//	m_wndOperationList->OnFeeListLoadData();

 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSOperationSetupDialog::OnCancelHMSOperationSetupDialog(){
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
int CHMSOperationSetupDialog::OnHMSOperationSetupDialogListLoadData(){
	return 0;
}
