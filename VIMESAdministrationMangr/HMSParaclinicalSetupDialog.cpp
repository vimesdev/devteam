#include "HMSParaclinicalSetupDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSParaclinicalListSetup.h"

static void _OnFeeCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog* )pWnd)->OnFeeCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeCategorySelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnFeeCategorySelendok();
}
/*static void _OnFeeCategorySetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnFeeCategoryKillfocus();
}*/
/*static void _OnFeeCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnFeeCategoryKillfocus();
}*/
static long _OnFeeCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnFeeCategoryLoadData();
}
/*static void _OnFeeCategoryAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnFeeCategoryAddNew();
}*/
static void _OnOperationGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalSetupDialog* )pWnd)->OnOperationGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationGroupSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnOperationGroupSelendok();
}
/*static void _OnOperationGroupSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnOperationGroupKillfocus();
}*/
/*static void _OnOperationGroupKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnOperationGroupKillfocus();
}*/
static long _OnOperationGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnOperationGroupLoadData();
}
/*static void _OnOperationGroupAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnOperationGroupAddNew();
}*/

static int _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSParaclinicalSetupDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDepartmentSelendokFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog *)pWnd)->OnDepartmentSelendok();
}
/*static int _OnDepartmentSetfocusFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static int _OnDepartmentKillfocusFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static int _OnDepartmentLoadDataFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog *)pWnd)->OnDepartmentLoadData();
}
/*static int _OnDepartmentAddNewFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog *)pWnd)->OnDepartmentAddNew();
}*/

/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnNameCheckValue();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static int _OnUnitChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnUnitChange();
} */
/*static int _OnUnitSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnUnitKillfocus();} */ 
/*static int _OnUnitKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnUnitCheckValue();
} 
/*static int _OnMaleIndexChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnMaleIndexChange();
} */
/*static int _OnMaleIndexSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnMaleIndexKillfocus();} */ 
/*static int _OnMaleIndexKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnMaleIndexKillfocus();
} */
static int _OnMaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnMaleIndexCheckValue();
} 
/*static int _OnFemaleIndexChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnFemaleIndexChange();
} */
/*static int _OnFemaleIndexSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnFemaleIndexKillfocus();} */ 
/*static int _OnFemaleIndexKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnFemaleIndexKillfocus();
} */
static int _OnFemaleIndexCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnFemaleIndexCheckValue();
} 
/*static int _OnServicePriceChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static int _OnServicePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnServicePriceKillfocus();} */ 
/*static int _OnServicePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static int _OnInsurancePriceChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static int _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnInsurancePriceKillfocus();} */ 
/*static int _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static int _OnPolicyPriceChangeFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static int _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnPolicyPriceKillfocus();} */ 
/*static int _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnRequestPriceChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnRequestPriceChange();
} */
/*static void _OnRequestPriceSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnRequestPriceSetfocus();} */ 
/*static void _OnRequestPriceKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnRequestPriceKillfocus();
} */
static int _OnRequestPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnRequestPriceCheckValue();
} 
/*static void _OnReturnDeptChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnReturnDeptChange();
} */
/*static void _OnReturnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnReturnDeptSetfocus();} */ 
/*static void _OnReturnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalSetupDialog *)pWnd)->OnReturnDeptKillfocus();
} */
static int _OnReturnDeptCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnReturnDeptCheckValue();
}
static long _OnObjectAppliedLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalSetupDialog *)pWnd)->OnObjectAppliedLoadData();
}
static void _OnDifferencePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog*)pWnd)->OnDifferencePaymentSelect();
}
static void _OnInsurancePaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog*)pWnd)->OnInsurancePaymentSelect();
}
static void _OnPolicyPaymentSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog*)pWnd)->OnPolicyPaymentSelect();
}
static void _OnHitechSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog*)pWnd)->OnHitechSelect();
}
static void _OnTypeOperationSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalSetupDialog*)pWnd)->OnTypeOperationSelect();
}
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog *pVw = (CHMSParaclinicalSetupDialog *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalSetupDialog *pVw = (CHMSParaclinicalSetupDialog *)pWnd;
	return pVw->OnCloseSelect();
} 
static int _OnAddHMSParaclinicalSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog*)pWnd)->OnAddHMSParaclinicalSetupDialog();
} 
static int _OnEditHMSParaclinicalSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog*)pWnd)->OnEditHMSParaclinicalSetupDialog();
} 
static int _OnDeleteHMSParaclinicalSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog*)pWnd)->OnDeleteHMSParaclinicalSetupDialog();
} 
static int _OnSaveHMSParaclinicalSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog*)pWnd)->OnSaveHMSParaclinicalSetupDialog();
} 
static int _OnCancelHMSParaclinicalSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalSetupDialog*)pWnd)->OnCancelHMSParaclinicalSetupDialog();
} 
CHMSParaclinicalSetupDialog::CHMSParaclinicalSetupDialog(CWnd *pParent, CWnd *pView):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 590;
	m_nDlgHeight = 250;
	SetDefaultValues(); 
	m_szDepartmentKey.Empty();
	m_wndParent = pView;
}
CHMSParaclinicalSetupDialog::~CHMSParaclinicalSetupDialog(){
}
void CHMSParaclinicalSetupDialog::OnCreateComponents()
{
	m_wndParaclinicalInformation.Create(this, _T("Paraclinical Information"), 5, 5, 600, 240);
	m_wndFeeCategoryLabel.Create(this, _T("Fee Category"), 10, 30, 110, 55);
	m_wndFeeCategory.Create(this,115, 30, 300, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 305, 30, 385, 55);
	m_wndDepartment.Create(this,390, 30, 595, 55); 
	m_wndNameLabel.Create(this, _T("Name /Unit"), 10, 60, 110, 85);
	m_wndName.Create(this,115, 60, 595, 85); 
	m_wndUnitLabel.Create(this, _T("Unit"), 10, 90, 110, 115);
	m_wndUnit.Create(this,115, 90, 195, 115); 
	m_wndMaleIndexLabel.Create(this, _T("Male Index"), 200, 90, 300, 115);
	m_wndMaleIndex.Create(this,305, 90, 385, 115); 
	m_wndFemaleIndexLabel.Create(this, _T("Female Index"), 390, 90, 490, 115);
	m_wndFemaleIndex.Create(this,495, 90, 595, 115); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 120, 110, 145);
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 200, 120, 300, 145);
	m_wndServicePrice.Create(this,115, 120, 195, 145); 
	m_wndInsurancePrice.Create(this,305, 120, 385, 145); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 390, 120, 490, 145);
	m_wndPolicyPrice.Create(this,495, 120, 595, 145); 
	m_wndRequestPriceLabel.Create(this, _T("Request Price"), 10, 150, 110, 175);
	m_wndRequestPrice.Create(this,115, 150, 195, 175); 
	m_wndReturnDeptLabel.Create(this, _T("Return Dept"), 200, 150, 300, 175);
	m_wndReturnDept.Create(this,305, 150, 385, 175); 
	m_wndObjectAppliedLabel.Create(this, _T("Object Applied"), 390, 150, 490, 175);
	m_wndObjectApplied.Create(this,495, 150, 595, 175); 
	m_wndTypeOperation.Create(this, _T("Type Operation"), 10, 180, 195, 205);
	m_wndOperationGroupLabel.Create(this, _T("OperationGroup"), 200, 180, 300, 205);
	m_wndOperationGroup.Create(this,305, 180, 595, 205); 
	m_wndDifferencePayment.Create(this, _T("Difference Payment"), 10, 210, 140, 235);
	m_wndInsurancePayment.Create(this, _T("Insurance Payment"), 145, 210, 275, 235);
	m_wndPolicyPayment.Create(this, _T("Policy Payment"), 280, 210, 410, 235);
	m_wndHitech.Create(this, _T("Hitech"), 415, 210, 545, 235);	
	m_wndSave.Create(this, _T("&Save"), 430, 245, 510, 270);
	m_wndClose.Create(this, _T("&Close"), 515, 245, 595, 270);
	
}
void CHMSParaclinicalSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
//	m_wndGroup.SetCheckValue(true);
//	m_wndGroup.LimitText(128);

	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);
	m_wndName.SetLimitText(512);
	m_wndName.SetCheckValue(true);
//	m_wndName.SetInitCap(true);
	m_wndUnit.SetLimitText(15);
//	m_wndUnit.SetInitCap(true);
	//m_wndUnit.SetCheckValue(true);
	m_wndMaleIndex.SetLimitText(15);
	//m_wndMaleIndex.SetCheckValue(true);
	m_wndFemaleIndex.SetLimitText(15);
	//m_wndFemaleIndex.SetCheckValue(true);
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

	m_wndFeeCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFeeCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
//	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
//	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndObjectApplied.InsertColumn(0, _T("ID"), CFMT_NUMBER, 20);
	m_wndObjectApplied.InsertColumn(1, _T("Name"), CFMT_TEXT, 50);

	m_wndOperationGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndOperationGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_hms_fee_listTbl.SetTableName(_T("hms_fee_list"));
	m_hms_fee_listTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_createddate"), dfDateTime, 4); 
	m_hms_fee_listTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_fee_listTbl.AddField(_T("hfl_feeid"), dfText, 13); 
	m_hms_fee_listTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_line"), dfInteger); 
	m_hms_fee_listTbl.AddField(_T("hfl_deptid"), dfText, 7); 
	m_hms_fee_listTbl.AddField(_T("hfl_typeid"), dfText, 3);
	m_hms_fee_listTbl.AddField(_T("hfl_itype"), dfText, 1); 
//	m_hms_fee_listTbl.AddField(_T("hfl_category"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_groupid"), dfText, 15); 
//	m_hms_fee_listTbl.AddField(_T("hfl_subgroup"), dfText, 3); 
//	m_hms_fee_listTbl.AddField(_T("hfl_subitem"), dfText, 3); 
	m_hms_fee_listTbl.AddField(_T("hfl_name"), dfText, 254); 
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
	m_hms_fee_listTbl.AddField(_T("hfl_categoryid"), dfInteger);
	m_hms_fee_listTbl.AddField(_T("hfl_hostname"), dfText, 100); 
	m_hms_fee_listTbl.AddField(_T("hfl_object"), dfText, 1); 
	m_hms_fee_listTbl.AddField(_T("hfl_opt_group"), dfText, 15); 
	m_hms_fee_listTbl.AddField(_T("hfl_isopt_group"), dfText, 1); 

}
void CHMSParaclinicalSetupDialog::OnSetWindowEvents(){
	m_wndFeeCategory.SetEvent(WE_SELENDOK, _OnFeeCategorySelendokFnc);
	//m_wndFeeCategory.SetEvent(WE_SETFOCUS, _OnFeeCategorySetfocusFnc);
	//m_wndFeeCategory.SetEvent(WE_KILLFOCUS, _OnFeeCategoryKillfocusFnc);
	m_wndFeeCategory.SetEvent(WE_SELCHANGE, _OnFeeCategorySelectChangeFnc);
	m_wndFeeCategory.SetEvent(WE_LOADDATA, _OnFeeCategoryLoadDataFnc);
	//m_wndFeeCategory.SetEvent(WE_ADDNEW, _OnFeeCategoryAddNewFnc);
	
	m_wndOperationGroup.SetEvent(WE_SELENDOK, _OnOperationGroupSelendokFnc);
	//m_wndOperationGroup.SetEvent(WE_SETFOCUS, _OnOperationGroupSetfocusFnc);
	//m_wndOperationGroup.SetEvent(WE_KILLFOCUS, _OnOperationGroupKillfocusFnc);
	m_wndOperationGroup.SetEvent(WE_SELCHANGE, _OnOperationGroupSelectChangeFnc);
	m_wndOperationGroup.SetEvent(WE_LOADDATA, _OnOperationGroupLoadDataFnc);
	//m_wndOperationGroup.SetEvent(WE_ADDNEW, _OnOperationGroupAddNewFnc);


	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndMaleIndex.SetEvent(WE_CHANGE, _OnMaleIndexChangeFnc);
	//m_wndMaleIndex.SetEvent(WE_SETFOCUS, _OnMaleIndexSetfocusFnc);
	//m_wndMaleIndex.SetEvent(WE_KILLFOCUS, _OnMaleIndexKillfocusFnc);
	m_wndMaleIndex.SetEvent(WE_CHECKVALUE, _OnMaleIndexCheckValueFnc);
	//m_wndFemaleIndex.SetEvent(WE_CHANGE, _OnFemaleIndexChangeFnc);
	//m_wndFemaleIndex.SetEvent(WE_SETFOCUS, _OnFemaleIndexSetfocusFnc);
	//m_wndFemaleIndex.SetEvent(WE_KILLFOCUS, _OnFemaleIndexKillfocusFnc);
	m_wndFemaleIndex.SetEvent(WE_CHECKVALUE, _OnFemaleIndexCheckValueFnc);
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

	//m_wndRequestPrice.SetEvent(WE_CHANGE, _OnRequestPriceChangeFnc);
	//m_wndRequestPrice.SetEvent(WE_SETFOCUS, _OnRequestPriceSetfocusFnc);
	//m_wndRequestPrice.SetEvent(WE_KILLFOCUS, _OnRequestPriceKillfocusFnc);
	m_wndRequestPrice.SetEvent(WE_CHECKVALUE, _OnRequestPriceCheckValueFnc);
	//m_wndReturnDept.SetEvent(WE_CHANGE, _OnReturnDeptChangeFnc);
	//m_wndReturnDept.SetEvent(WE_SETFOCUS, _OnReturnDeptSetfocusFnc);
	//m_wndReturnDept.SetEvent(WE_KILLFOCUS, _OnReturnDeptKillfocusFnc);

	m_wndReturnDept.SetEvent(WE_CHECKVALUE, _OnReturnDeptCheckValueFnc);
	m_wndObjectApplied.SetEvent(WE_LOADDATA, _OnObjectAppliedLoadDataFnc);
	m_wndDifferencePayment.SetEvent(WE_CLICK, _OnDifferencePaymentSelectFnc);
	m_wndInsurancePayment.SetEvent(WE_CLICK, _OnInsurancePaymentSelectFnc);
	m_wndPolicyPayment.SetEvent(WE_CLICK, _OnPolicyPaymentSelectFnc);
	m_wndHitech.SetEvent(WE_CLICK, _OnHitechSelectFnc);

	m_wndTypeOperation.SetEvent(WE_CLICK, _OnTypeOperationSelectFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	SetMode(GetMode());

	if(GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}
	UpdateData(false);
}
void CHMSParaclinicalSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndFeeCategory.GetDlgCtrlID(), m_szFeeCategoryKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndMaleIndex.GetDlgCtrlID(), m_szMaleIndex);
	DDX_Text(pDX, m_wndFemaleIndex.GetDlgCtrlID(), m_szFemaleIndex);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndRequestPrice.GetDlgCtrlID(), m_nRequestPrice);
	DDX_Text(pDX, m_wndReturnDept.GetDlgCtrlID(), m_nRetDeptPrice);
	DDX_TextEx(pDX, m_wndObjectApplied.GetDlgCtrlID(), m_szObjectAppliedKey);
	DDX_Check(pDX, m_wndDifferencePayment.GetDlgCtrlID(), m_bDifferencePayment);
	DDX_Check(pDX, m_wndInsurancePayment.GetDlgCtrlID(), m_bInsurancePayment);
	DDX_Check(pDX, m_wndPolicyPayment.GetDlgCtrlID(), m_bPolicyPayment);
	DDX_Check(pDX, m_wndHitech.GetDlgCtrlID(), m_bHitech);
	DDX_Check(pDX, m_wndTypeOperation.GetDlgCtrlID(), m_bTypeOperation);
	DDX_TextEx(pDX, m_wndOperationGroup.GetDlgCtrlID(), m_szOperationGroupKey);
}

void CHMSParaclinicalSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_reqprice"), m_nRequestPrice);
		rs.GetValue(_T("hfl_retprice"), m_nRetDeptPrice);
		rs.GetValue(_T("hfl_index1"), m_szMaleIndex);
		rs.GetValue(_T("hfl_index2"), m_szFemaleIndex);
		CString szDif, szIns, szPol, szHiTech;

		rs.GetValue(_T("hfl_diffpaid"), szDif);
		rs.GetValue(_T("hfl_inspaid"), szIns);
		rs.GetValue(_T("hfl_polpaid"), szPol);
		rs.GetValue(_T("hfl_hitech"), szHiTech);
		rs.GetValue(_T("hfl_opt_group"), m_szOperationGroupKey);
		rs.GetValue(_T("hfl_isopt_group"))?m_bTypeOperation=true:m_bTypeOperation=false;

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
		rs.GetValue(_T("hfl_deptid"), m_szDepartmentKey);
		rs.GetValue(_T("hfl_line"), m_nLine);
		rs.GetValue(_T("hfl_itype"), m_nItemType);
		rs.GetValue(_T("hfl_idx"), m_nIndex);
		m_szCurID = m_szID;
		rs.GetValue(_T("hfl_groupid"), m_szGroupKey);
		m_szCurGroup = m_szGroupKey;
		rs.GetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
		rs.GetValue(_T("hfl_object"), m_szObjectAppliedKey);
	}
	else
	{
		SetDefaultValues();
	}
	UpdateData(false);
}
void CHMSParaclinicalSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list "));
//_fmsg(_T("%s"), szSQL);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
		//_msg(_T("m_szID: %s, m_szGroupKey: %s"), m_szID, m_szGroupKey);
		m_szID.Format(_T("%s%.5d"), m_szGroupKey, m_nIndex);		
		//_msg(_T("m_szID: %s, m_szGroupKey: %s"), m_szID, m_szGroupKey);
	}
	
	
	m_hms_fee_listTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser());
	m_hms_fee_listTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime());
	m_hms_fee_listTbl.SetValue(_T("hfl_idx"), m_nIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_fee_listTbl.SetValue(_T("hfl_line"), m_nLine);
	m_hms_fee_listTbl.SetValue(_T("hfl_deptid"), m_szDepartmentKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_typeid"), _T("T"));
	m_hms_fee_listTbl.SetValue(_T("hfl_groupid"), m_szGroupKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_itype"), _T(""));
	m_hms_fee_listTbl.SetValue(_T("hfl_subgroup"), m_szSubgroup);
	m_hms_fee_listTbl.SetValue(_T("hfl_subitem"), m_szSubItem);
	m_hms_fee_listTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_fee_listTbl.SetValue(_T("hfl_unit"), m_szUnit);
	m_hms_fee_listTbl.SetValue(_T("hfl_index1"), m_szMaleIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_index2"), m_szFemaleIndex);
	m_hms_fee_listTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_reqprice"), m_nRequestPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_retprice"), m_nRetDeptPrice);
	m_hms_fee_listTbl.SetValue(_T("hfl_categoryid"), m_szFeeCategoryKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	m_hms_fee_listTbl.SetValue(_T("hfl_object"), m_szObjectAppliedKey);	
	m_hms_fee_listTbl.SetValue(_T("hfl_opt_group"), m_szOperationGroupKey);
	m_hms_fee_listTbl.SetValue(_T("hfl_isopt_group"), m_bTypeOperation?_T("Y"):_T("N"));	

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
	m_hms_fee_listTbl.SetValue(_T("hfl_active"), _T("Y"));

}
void CHMSParaclinicalSetupDialog::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
	//m_szGroupKey.Empty();
	m_szName.Empty();
	m_szID.Empty();
	m_szUnit.Empty();
	m_szMaleIndex.Empty();
	m_szFemaleIndex.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_nRequestPrice = 0;
	m_nRetDeptPrice = 0;
	m_szFeeCategoryKey.Empty();
	m_bDifferencePayment = FALSE;
	m_bInsurancePayment = TRUE;
	m_bPolicyPayment = TRUE;
	m_bHitech = FALSE;
	m_szSubgroup=_T("N");
	m_szSubItem = _T("N");
	m_szObjectAppliedKey.Empty();
}
int CHMSParaclinicalSetupDialog::SetMode(int nMode){ 
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
		if(m_szGroupKey.Left(2) != _T("B1"))
		{
			m_wndMaleIndex.EnableWindow(false);
			m_wndFemaleIndex.EnableWindow(false);
		}
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 

void CHMSParaclinicalSetupDialog::OnFeeCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSParaclinicalSetupDialog::OnFeeCategorySelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog::OnFeeCategorySetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog::OnFeeCategoryKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog::OnFeeCategoryLoadData(){
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
/*void CHMSParaclinicalSetupDialog::OnFeeCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */

int CHMSParaclinicalSetupDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} 
int CHMSParaclinicalSetupDialog::OnDepartmentSelendok(){
	 return 0;
}
/*int CHMSParaclinicalSetupDialog::OnDepartmentSetfocus(){
	 return 0;
}*/
/*int CHMSParaclinicalSetupDialog::OnDepartmentKillfocus(){
	 return 0;
}*/
int CHMSParaclinicalSetupDialog::OnDepartmentLoadData(){
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
/*int CHMSParaclinicalSetupDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	 return 0;
} */

/*int CHMSParaclinicalSetupDialog::OnNameChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnNameSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnNameKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnNameCheckValue(){
	UpdateData(true);
	CString tmpStr;
	PreInitCap(m_szName, tmpStr);
	m_szName = tmpStr;
	UpdateData(false);
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnIDChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnIDSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnIDKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnIDCheckValue(){
/*
	if(m_szID == m_szCurID)
		return 0;

	if(m_szID.GetLength() != 9)
		return -1;
	if(m_szID.Left(3) != m_szCurID.Left(3))
		return -1;
	if(m_szID.Right(3) != m_szCurID.Right(3))
		return -1;

	if(!_istdigit(m_szID[3]) || !IsDigit(m_szID.Mid(4, 2)))
		return -1;
	
	if(m_nItemType == 0 || m_nItemType == 1)
	{
		m_szSubgroup = m_szID.Mid(4, 1);
		m_szSubItem.Empty();
	}
	else
	{
		m_szSubgroup = m_szID.Mid(4, 1);
		m_szSubItem = m_szID.Mid(5, 2);
	}
*/	
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM hms_fee_list WHERE hfl_feeid='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		return -1;
	}
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnUnitChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnUnitSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnUnitKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnUnitCheckValue(){
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnMaleIndexChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnMaleIndexSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnMaleIndexKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnMaleIndexCheckValue(){
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnFemaleIndexChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnFemaleIndexSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnFemaleIndexKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnFemaleIndexCheckValue(){
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnServicePriceChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnServicePriceSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnServicePriceKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnServicePriceCheckValue(){
	UpdateData(true);
	m_nInsurancePrice = m_nPolicyPrice = m_nOptPrice = m_nServicePrice;
	UpdateData(false);
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnInsurancePriceChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnInsurancePriceSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnInsurancePriceKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
} 
/*int CHMSParaclinicalSetupDialog::OnPolicyPriceChange(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnPolicyPriceSetfocus(){
	return 0;
} */
/*int CHMSParaclinicalSetupDialog::OnPolicyPriceKillfocus(){
	return 0;
} */
int CHMSParaclinicalSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog::OnRequestPriceChange(){
	
} */
/*void CHMSParaclinicalSetupDialog::OnRequestPriceSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog::OnRequestPriceKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog::OnRequestPriceCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalSetupDialog::OnReturnDeptChange(){
	
} */
/*void CHMSParaclinicalSetupDialog::OnReturnDeptSetfocus(){
	
} */
/*void CHMSParaclinicalSetupDialog::OnReturnDeptKillfocus(){
	
} */
int CHMSParaclinicalSetupDialog::OnReturnDeptCheckValue(){
	return 0;
} 

long CHMSParaclinicalSetupDialog::OnObjectAppliedLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as code, ss_desc as descr FROM sys_sel WHERE ss_id = 'hms_fee_object' ORDER BY ss_code"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		m_wndObjectApplied.AddItems(
			rs.GetValue(_T("code")),
			rs.GetValue(_T("descr")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CHMSParaclinicalSetupDialog::OnTypeOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bTypeOperation)
	{
		m_wndOperationGroup.EnableWindow(true);		
	}
	else
	{
		m_wndOperationGroup.EnableWindow(false);		
	}

	UpdateData(false);
	
}
void CHMSParaclinicalSetupDialog::OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel){
	//CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalSetupDialog::OnOperationGroupSelendok(){
	 
}
/*void CHMSParaclinicalSetupDialog::OnOperationGroupSetfocus(){
	
}*/
/*void CHMSParaclinicalSetupDialog::OnOperationGroupKillfocus(){
	
}*/
long CHMSParaclinicalSetupDialog::OnOperationGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperationGroup.IsSearchKey()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szOperationGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B4','B5') AND hfg_active ='Y' ") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndOperationGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperationGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return 0;
}
/*void CHMSParaclinicalSetupDialog::OnOperationGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

int CHMSParaclinicalSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSParaclinicalSetupDialog();
	return 0;
} 
int CHMSParaclinicalSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancel();
	return 0;
}
/*int CHMSParaclinicalSetupDialog::OnReturnDeptCheckValue(){
	return 0;
}*/ 
void CHMSParaclinicalSetupDialog::OnDifferencePaymentSelect()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSParaclinicalSetupDialog::OnInsurancePaymentSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSParaclinicalSetupDialog::OnPolicyPaymentSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSParaclinicalSetupDialog::OnHitechSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
int CHMSParaclinicalSetupDialog::OnAddHMSParaclinicalSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	SetMode(VM_ADD);
	return 0; 
 
} 
int CHMSParaclinicalSetupDialog::OnEditHMSParaclinicalSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSParaclinicalSetupDialog::OnDeleteHMSParaclinicalSetupDialog(){
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
 		OnCancelHMSParaclinicalSetupDialog(); 
 	}
return 0;
 } 
int CHMSParaclinicalSetupDialog::OnSaveHMSParaclinicalSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
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
 		szSQL = m_hms_fee_listTbl.GetUpdateSQL(_T("hfl_createdby,hfl_createddate, hfl_subgroup,hfl_subitem, hfl_feeid")); 
 		szSQL += szWhere; 
 	} 

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT){		
			CString szEvent, szDesc;
			szEvent.Format(_T("Edit"));
			szDesc.Format(_T("ID:%s, Name:%s"), m_szID, m_szName);
			pMF->SystemLog(szEvent, szDesc);		
			OnCancel();
		}
		else
		{
 			SetMode(VM_ADD); 
			m_wndName.SetFocus();
		}
		((CHMSParaclinicalListSetup*) m_wndParent)->OnFeeListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSParaclinicalSetupDialog::OnCancelHMSParaclinicalSetupDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	return 0;
} 
int CHMSParaclinicalSetupDialog::OnHMSParaclinicalSetupDialogListLoadData(){
	return 0;
}
