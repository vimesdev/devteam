#include "HMSFoodFeeSetupDlg.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnListDeleteItem();
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnListShowLogItem();
} 

static int _OnListRefreshFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnListLoadData();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnNameCheckValue();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnIDCheckValue();
} 
static void _OnCategoryIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodFeeSetupDlg* )pWnd)->OnCategoryIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategoryIDSelendokFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategoryIDSelendok();
}
/*static void _OnCategoryIDSetfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategoryIDKillfocus();
}*/
/*static void _OnCategoryIDKillfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategoryIDKillfocus();
}*/
static long _OnCategoryIDLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnCategoryIDLoadData();
}
/*static void _OnCategoryIDAddNewFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategoryIDAddNew();
}*/
/*static int _OnServicePriceChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnServicePriceChange();
} */
/*static int _OnServicePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnServicePriceKillfocus();} */ 
/*static int _OnServicePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnServicePriceCheckValue();
} 
/*static int _OnInsurancePriceChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnInsurancePriceChange();
} */
/*static int _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnInsurancePriceKillfocus();} */ 
/*static int _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static int _OnPolicyPriceChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnPolicyPriceChange();
} */
/*static int _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnPolicyPriceKillfocus();} */ 
/*static int _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnPolicyPriceCheckValue();
}
static long _OnGroupLoadDataFnc(CWnd* pWnd){
	return ((CHMSFoodFeeSetupDlg*)pWnd )->OnGroupLoadData();
}
static int _OnDifferencePaySelectFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnDifferencePaySelect();
}
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnAddHMSFoodFeeSetupDlg();
} 
static int _OnEditHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnEditHMSFoodFeeSetupDlg();
} 
static int _OnDeleteHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnDeleteHMSFoodFeeSetupDlg();
} 
static int _OnSaveHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnSaveHMSFoodFeeSetupDlg();
} 
static int _OnCancelHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnCancelHMSFoodFeeSetupDlg();
} 
static void _OnInactiveSelectFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg*)pWnd)->OnInactiveSelect();
}
static void _OnCategorySearchIDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodFeeSetupDlg* )pWnd)->OnCategorySearchIDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCategorySearchIDSelendokFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategorySearchIDSelendok();
}
/*static void _OnCategorySearchIDSetfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategorySearchIDKillfocus();
}*/
/*static void _OnCategorySearchIDKillfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategorySearchIDKillfocus();
}*/
static long _OnCategorySearchIDLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnCategorySearchIDLoadData();
}
/*static void _OnCategorySearchIDAddNewFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnCategorySearchIDAddNew();
}*/
static void _OnFindCategorySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodFeeSetupDlg* )pWnd)->OnFindCategorySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFindCategorySelendokFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindCategorySelendok();
}
/*static void _OnFindCategorySetfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindCategoryKillfocus();
}*/
static void _OnFindCategoryKillfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindCategoryKillfocus();
}
static long _OnFindCategoryLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnFindCategoryLoadData();
}
/*static void _OnFindCategoryAddNewFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindCategoryAddNew();
}*/
static void _OnFindNameChangeFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindNameChange();
}
/*static void _OnFindNameSetfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindNameSetfocus();} */ 
static void _OnFindNameKillfocusFnc(CWnd *pWnd){
	((CHMSFoodFeeSetupDlg *)pWnd)->OnFindNameKillfocus();
}
static int _OnFindNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnFindNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnCategoryIDSearchLabelFnc(CWnd *pWnd){
	CHMSFoodFeeSetupDlg *pVw = (CHMSFoodFeeSetupDlg *)pWnd;
	pVw->OnCategoryIDSearchLabelSelect();
}
static int _OnAddHMSFoodFeeSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnAddHMSFoodFeeSetupDlg();
} 
static int _OnEditHMSFoodFeeSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnEditHMSFoodFeeSetupDlg();
} 
static int _OnDeleteHMSFoodFeeSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnDeleteHMSFoodFeeSetupDlg();
} 
static int _OnSaveHMSFoodFeeSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnSaveHMSFoodFeeSetupDlg();
} 
static int _OnCancelHMSFoodFeeSetupDlgFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetupDlg*)pWnd)->OnCancelHMSFoodFeeSetupDlg();
}

static long _OnNhombaocaoLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetupDlg *)pWnd)->OnNhombaocaoLoadData();
}
static void _OnKhoaHCKTSelectFnc(CWnd *pWnd){
	 ((CHMSFoodFeeSetupDlg*)pWnd)->OnKhoaHCKTSelect();
}

CHMSFoodFeeSetupDlg::CHMSFoodFeeSetupDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSFoodFeeSetupDlg::~CHMSFoodFeeSetupDlg(){
}
void CHMSFoodFeeSetupDlg::OnCreateComponents()
{
	/*m_wndFeeInformation.Create(this, _T("Other Fees"), 5, 5, 1017, 581);
	m_wndCategorySearchIDLabel.Create(this, _T("Category ID"), 10, 30, 110, 55);
	m_wndCategorySearchID.Create(this,115, 30, 245, 55); 
	m_wndFindCategoryLabel.Create(this, _T("Category"), 251, 30, 351, 55);
	m_wndFindCategory.Create(this,356, 30, 606, 55); 
	m_wndFindNameLabel.Create(this, _T("Name"), 610, 30, 710, 55);
	m_wndFindName.Create(this,715, 30, 965, 55); 
	m_wndSearch.Create(this, _T("@"), 970, 30, 1010, 55);
	m_wndList.Create(this,10, 60, 1015, 634); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 645, 110, 670);
	m_wndName.Create(this,115, 645, 765, 670); 
	m_wndUnitLabel.Create(this, _T("Unit"), 770, 645, 855, 670);
	m_wndUnit.Create(this,860, 645, 1020, 670); 
	m_wndSecondNameLabel.Create(this, _T("Second Name"), 10, 674, 110, 699);
	m_wndSecondName.Create(this,115, 674, 465, 699); 
	m_wndCategoryIDLabel.Create(this, _T("Category ID"), 470, 674, 570, 699);
	m_wndIDLabel.Create(this, _T("ID"), 470, 674, 570, 699);
	m_wndCategoryID.Create(this,575, 674, 1020, 699); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 703, 110, 728);
	m_wndServicePrice.Create(this,115, 703, 235, 728); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 240, 703, 340, 728);
	m_wndInsurancePrice.Create(this,345, 703, 465, 728); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 470, 703, 570, 728);
	m_wndPolicyPrice.Create(this,575, 703, 765, 728); 
	m_wndGroupLabel.Create(this, _T("Category"), 771, 703, 856, 728);
	m_wndGroup.Create(this,860, 702, 1020, 727); 
	m_wndDifferencePay.Create(this, _T("Difference Payment"), 10, 733, 170, 758);
	m_wndInactive.Create(this, _T("Inactive"), 175, 733, 335, 758);
	m_wndAdd.Create(this, _T("&Add"), 600, 733, 680, 758);
	m_wndEdit.Create(this, _T("&Edit"), 685, 733, 765, 758);
	m_wndDelete.Create(this, _T("&Delete"), 770, 733, 850, 758);
	m_wndSave.Create(this, _T("&Save"), 856, 733, 936, 758);
	m_wndCancel.Create(this, _T("&Cancel"), 939, 733, 1019, 758);*/

	m_wndCategorySearchIDLabel.Create(this, _T("Category ID"), 10, 30, 110, 55);
	m_wndCategorySearchID.Create(this,115, 30, 245, 55); 
	m_wndFindCategoryLabel.Create(this, _T("Category"), 251, 30, 351, 55);
	m_wndFindCategory.Create(this,356, 30, 606, 55); 
	m_wndFindNameLabel.Create(this, _T("Name"), 610, 30, 710, 55);
	m_wndFeeInformation.Create(this, _T("Other Fees"), 5, 5, 1017, 581);
	m_wndFindName.Create(this,715, 30, 965, 55); 
	m_wndSearch.Create(this, _T("@"), 970, 30, 1010, 55);
	m_wndList.Create(this,10, 60, 1015, 576); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 588, 110, 613);
	m_wndName.Create(this,115, 588, 765, 613); 
	m_wndUnitLabel.Create(this, _T("Unit"), 770, 588, 855, 613);
	m_wndUnit.Create(this,860, 588, 1020, 613); 
	m_wndSecondNameLabel.Create(this, _T("Second Name"), 10, 617, 110, 642);
	m_wndSecondName.Create(this,115, 617, 465, 642); 
	m_wndCategoryIDLabel.Create(this, _T("Category ID"), 470, 617, 570, 642);
	m_wndIDLabel.Create(this, _T("ID"), 470, 617, 570, 642);
	m_wndCategoryID.Create(this,575, 617, 1020, 642); 
	m_wndGroup.Create(this,860, 645, 1020, 670); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 646, 110, 671);
	m_wndServicePrice.Create(this,115, 646, 235, 671); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 240, 646, 340, 671);
	m_wndInsurancePrice.Create(this,345, 646, 465, 671); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 470, 646, 570, 671);
	m_wndPolicyPrice.Create(this,575, 646, 765, 671); 
	m_wndGroupLabel.Create(this, _T("Category"), 771, 646, 856, 671);
	m_wndBaocaoLabel.Create(this, _T("Nhóm báo cáo"), 10, 675, 110, 700);
	m_wndNhombaocao.Create(this,115, 675, 1020, 700); 
	m_wndDifferencePay.Create(this, _T("Difference Payment"), 10, 705, 170, 730);
	m_wndInactive.Create(this, _T("Inactive"), 175, 705, 335, 730);
	m_wndKhoaHCKT.Create(this, _T("Khoa HCKT"), 341, 705, 501, 730);
	m_wndAdd.Create(this, _T("&Add"), 600, 705, 680, 730);
	m_wndEdit.Create(this, _T("&Edit"), 685, 705, 765, 730);
	m_wndDelete.Create(this, _T("&Delete"), 770, 705, 850, 730);
	m_wndSave.Create(this, _T("&Save"), 856, 705, 936, 730);
	m_wndCancel.Create(this, _T("&Cancel"), 939, 705, 1019, 730);

	m_wndID.Create(this, 0, 0, 0, 0);
	m_wndID.ShowWindow(SW_HIDE);
	m_wndID.EnableWindow(FALSE);
}
void CHMSFoodFeeSetupDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndID.SetReadOnly(true);
	m_wndServicePrice.SetLimitText(10);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(10);
	m_wndPolicyPrice.SetLimitText(10);
	m_wndServicePrice.SetCurrencyFormat(true);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	m_wndPolicyPrice.SetCurrencyFormat(true);
	m_wndCategorySearchIDLabel.SetHyperlink(TRUE);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Diff Payment"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Active"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("IDX"), CFMT_TEXT, 0);



	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndFindCategory.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndFindCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);

	m_wndCategorySearchID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategorySearchID.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCategoryID.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCategoryID.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);


	m_wndNhombaocao.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNhombaocao.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	m_wndNhombaocao.InsertColumn(2, _T("Menu"), CFMT_TEXT, 100);
	
	m_hms_feeTbl.SetTableName(_T("hms_fee_list"));
	m_hms_feeTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_groupid"), dfText, 13); 
	m_hms_feeTbl.AddField(_T("hfl_feeid"), dfText,5); 
	m_hms_feeTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_feeTbl.AddField(_T("hfl_name"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("hfl_name2"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_polprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_diffpaid"), dfText, 1);	
	m_hms_feeTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_typeid"), dfText, 1);
	m_hms_feeTbl.AddField(_T("hfl_index1"), dfText, 60);
	m_hms_feeTbl.AddField(_T("hfl_hostname"), dfText, 100);
	m_hms_feeTbl.AddField(_T("hfl_categoryid"), dfText, 10);
	m_hms_feeTbl.AddField(_T("hfl_unit"), dfText, 60);
	m_hms_feeTbl.AddField(_T("hfl_subcategoryid"), dfText, 10);

}
void CHMSFoodFeeSetupDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Other Fee"));
	m_wndList.AddEvent(1, _T("Show table of fixed charges"), _OnListShowLogItemFnc);
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Refresh"), _OnListRefreshFnc, 0, VK_F5);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndCategorySearchIDLabel.SetEvent(WE_CLICK, _OnCategoryIDSearchLabelFnc);
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
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndDifferencePay.SetEvent(WE_CLICK, _OnDifferencePaySelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
	
	m_wndCategorySearchID.SetEvent(WE_SELENDOK, _OnCategorySearchIDSelendokFnc);
	//m_wndCategorySearchID.SetEvent(WE_SETFOCUS, _OnCategorySearchIDSetfocusFnc);
	//m_wndCategorySearchID.SetEvent(WE_KILLFOCUS, _OnCategorySearchIDKillfocusFnc);
	m_wndCategorySearchID.SetEvent(WE_SELCHANGE, _OnCategorySearchIDSelectChangeFnc);
	m_wndCategorySearchID.SetEvent(WE_LOADDATA, _OnCategorySearchIDLoadDataFnc);
	//m_wndCategorySearchID.SetEvent(WE_ADDNEW, _OnCategorySearchIDAddNewFnc);
	m_wndCategoryID.SetEvent(WE_SELENDOK, _OnCategoryIDSelendokFnc);
	//m_wndCategoryID.SetEvent(WE_SETFOCUS, _OnCategoryIDSetfocusFnc);
	//m_wndCategoryID.SetEvent(WE_KILLFOCUS, _OnCategoryIDKillfocusFnc);
	m_wndCategoryID.SetEvent(WE_SELCHANGE, _OnCategoryIDSelectChangeFnc);
	m_wndCategoryID.SetEvent(WE_LOADDATA, _OnCategoryIDLoadDataFnc);
	//m_wndCategoryID.SetEvent(WE_ADDNEW, _OnCategoryIDAddNewFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSFoodFeeSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSFoodFeeSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSFoodFeeSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSFoodFeeSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSFoodFeeSetupFnc, 0, 'T', VK_CONTROL);*/
	
	m_wndFindCategory.SetEvent(WE_SELENDOK, _OnFindCategorySelendokFnc);
	//m_wndFindCategory.SetEvent(WE_SETFOCUS, _OnFindCategorySetfocusFnc);
	//m_wndFindCategory.SetEvent(WE_KILLFOCUS, _OnFindCategoryKillfocusFnc);
	m_wndFindCategory.SetEvent(WE_SELCHANGE, _OnFindCategorySelectChangeFnc);
	m_wndFindCategory.SetEvent(WE_LOADDATA, _OnFindCategoryLoadDataFnc);
	//m_wndFindCategory.SetEvent(WE_ADDNEW, _OnFindCategoryAddNewFnc);
	//m_wndFindName.SetEvent(WE_CHANGE, _OnFindNameChangeFnc);
	//m_wndFindName.SetEvent(WE_SETFOCUS, _OnFindNameSetfocusFnc);
	//m_wndFindName.SetEvent(WE_KILLFOCUS, _OnFindNameKillfocusFnc);
	m_wndFindName.SetEvent(WE_CHECKVALUE, _OnFindNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndNhombaocao.SetEvent(WE_LOADDATA, _OnNhombaocaoLoadDataFnc);
	m_wndKhoaHCKT.SetEvent(WE_CLICK, _OnKhoaHCKTSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSFoodFeeSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndSecondName.GetDlgCtrlID(), m_szSecondName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Check(pDX, m_wndDifferencePay.GetDlgCtrlID(), m_bDifferencePay);
	DDX_Check(pDX, m_wndInactive.GetDlgCtrlID(), m_bInactive);
	DDX_TextEx(pDX, m_wndCategoryID.GetDlgCtrlID(), m_szCategoryIDKey);
	DDX_TextEx(pDX, m_wndCategorySearchID.GetDlgCtrlID(), m_szCategorySearchIDKey);
	DDX_TextEx(pDX, m_wndFindCategory.GetDlgCtrlID(), m_szFindCategoryKey);
	DDX_Text(pDX, m_wndFindName.GetDlgCtrlID(), m_szFindName);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_TextEx(pDX, m_wndNhombaocao.GetDlgCtrlID(), m_szNhombaocaoKey);
	DDX_Check(pDX, m_wndKhoaHCKT.GetDlgCtrlID(), m_bKhoaHCKT);

}
void CHMSFoodFeeSetupDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		SetMode(VM_NONE);
	else
	{
		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		rs.GetValue(_T("hfl_name2"), m_szSecondName);
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_index1"), m_szGroupKey);
		rs.GetValue(_T("hfl_feeid"), m_szID);
		rs.GetValue(_T("hfl_categoryid"), m_szCategoryIDKey);
		rs.GetValue(_T("hfl_subcategoryid"), m_szNhombaocaoKey);
		CString tmpStr;

		rs.GetValue(_T("hfl_diffpaid"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bDifferencePay = true; 
		else 
			m_bDifferencePay = false;
		SetMode(VM_VIEW);
	}
	UpdateData(false);

}
void CHMSFoodFeeSetupDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list WHERE hfl_typeid='F' "));
		rs.ExecSQL(szSQL);
		m_szID.Format(_T("FF000%.3d"), rs.GetIntValue());


		m_hms_feeTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
		m_hms_feeTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
		m_hms_feeTbl.SetValue(_T("hfl_idx"), rs.GetIntValue());

	}
	m_hms_feeTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser()); 
	m_hms_feeTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime()); 
	m_hms_feeTbl.SetValue(_T("hfl_groupid"), _T("FF000"));
	m_hms_feeTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_feeTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_feeTbl.SetValue(_T("hfl_name2"), m_szSecondName);
	m_hms_feeTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_feeTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_feeTbl.SetValue(_T("hfl_reqprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_inspaid"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_polpaid"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_diffpaid"), m_bDifferencePay?_T("Y"):_T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_hitech"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_active"), _T("Y"));
	m_hms_feeTbl.SetValue(_T("hfl_typeid"), _T("F"));
	m_hms_feeTbl.SetValue(_T("hfl_index1"), m_szGroupKey);
	m_hms_feeTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	m_hms_feeTbl.SetValue(_T("hfl_categoryid"), m_szCategoryIDKey);
	m_hms_feeTbl.SetValue(_T("hfl_unit"), m_szUnit);
	m_hms_feeTbl.SetValue(_T("hfl_subcategoryid"), m_szNhombaocaoKey);
}
void CHMSFoodFeeSetupDlg::SetDefaultValues(){

	m_szName.Empty();
	m_szUnit.Empty();
	m_szSecondName.Empty();
	m_nID=0;
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_szGroupKey.Empty();
	m_bDifferencePay=FALSE;
	m_bInactive=FALSE;
	m_szCategorySearchIDKey.Empty();
	m_szCategoryIDKey.Empty();
	//m_szFindCategoryKey.Empty();
	m_szFindName.Empty();
	m_szNhombaocaoKey.Empty();
	m_bKhoaHCKT=FALSE;
}
int CHMSFoodFeeSetupDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 4, 5,-1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
			m_wndCategorySearchID.EnableWindow(TRUE);
			m_wndFindCategory.EnableWindow(TRUE);
			m_wndFindName.EnableWindow(TRUE);
			m_wndSearch.EnableWindow(TRUE);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
			m_wndCategorySearchID.EnableWindow(TRUE);
			m_wndFindCategory.EnableWindow(TRUE);
			m_wndFindName.EnableWindow(TRUE);
			m_wndSearch.EnableWindow(TRUE);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}

#include "HMSAdditionFeeSetupDialog.h"
int CHMSFoodFeeSetupDlg::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_szID = m_wndList.GetItemText(nSel, 0);
	CHMSAdditionFeeSetupDialog dlg(pMF);
	dlg.m_szFeeID = m_szID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	 return 0;
} 
int CHMSFoodFeeSetupDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return -1;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	m_nID = ToInt(m_wndList.GetItemText(nNewItem, 8));
	GetDataToScreen();
	m_nSelectedLine = nNewItem;
	return 0;
} 
int CHMSFoodFeeSetupDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSFoodFeeSetupDlg();
	 return 0;
}
void CHMSFoodFeeSetupDlg::OnKhoaHCKTSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
	
}
long CHMSFoodFeeSetupDlg::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_bInactive)
		szWhere.AppendFormat(_T(" AND hfl_active = 'N'"));
	else
		szWhere.AppendFormat(_T(" AND hfl_active = 'Y'"));
	if(!m_szCategorySearchIDKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_categoryid = '%s'"), m_szCategorySearchIDKey);
	}
	if(!m_szFindCategoryKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfl_index1 = '%s'"), m_szFindCategoryKey);
	}
	if(!m_szFindName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND UPPER(hfl_name) like UPPER('%s%s%s')"), _T("%"),m_szFindName,_T("%"));
	}

	if(m_bKhoaHCKT)
	{
		szWhere.AppendFormat(_T(" AND hfl_deptid = 'HCKT'"));
	}

	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_unit, hfl_servprice, hfl_insprice, hfl_polprice, hfl_diffpaid, hfl_active, hfl_idx FROM hms_fee_list WHERE hfl_typeid='F' %s ORDER BY hfl_feeid"), szWhere);
	m_wndList.BeginLoad();
	int nCount = 0;

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")), 
			rs.GetValue(_T("hfl_diffpaid")),
			rs.GetValue(_T("hfl_active")),
			rs.GetValue(_T("hfl_idx")),NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CHMSFoodFeeSetupDlg::OnNameChange(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnNameSetfocus(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnNameKillfocus(){
	
} */
int CHMSFoodFeeSetupDlg::OnNameCheckValue(){
	return 0;
} 
/*void CHMSFoodFeeSetupDlg::OnSecondNameChange(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnSecondNameSetfocus(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnSecondNameKillfocus(){
	
} */
int CHMSFoodFeeSetupDlg::OnSecondNameCheckValue(){
	return 0;
} 
/*void CHMSFoodFeeSetupDlg::OnIDChange(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnIDSetfocus(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnIDKillfocus(){
	
} */
int CHMSFoodFeeSetupDlg::OnIDCheckValue(){
	return 0;
} 
/*void CHMSFoodFeeSetupDlg::OnServicePriceChange(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnServicePriceSetfocus(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnServicePriceKillfocus(){
	
} */
int CHMSFoodFeeSetupDlg::OnServicePriceCheckValue(){
	return 0;
} 
/*void CHMSFoodFeeSetupDlg::OnInsurancePriceChange(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnInsurancePriceKillfocus(){
	
} */
int CHMSFoodFeeSetupDlg::OnInsurancePriceCheckValue(){
	return 0;
} 
/*void CHMSFoodFeeSetupDlg::OnPolicyPriceChange(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSFoodFeeSetupDlg::OnPolicyPriceKillfocus(){
	
} */
int CHMSFoodFeeSetupDlg::OnPolicyPriceCheckValue(){
	return 0;
} 
void CHMSFoodFeeSetupDlg::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodFeeSetupDlg::OnGroupSelendok(){
	 
}
/*void CHMSFoodFeeSetupDlg::OnGroupSetfocus(){
	
}*/
/*void CHMSFoodFeeSetupDlg::OnGroupKillfocus(){
	
}*/
long CHMSFoodFeeSetupDlg::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_vndesc = 'C11' ORDER BY ss_index, ss_code"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndGroup.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFoodFeeSetupDlg::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSFoodFeeSetupDlg::OnDifferencePaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
}
int CHMSFoodFeeSetupDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSFoodFeeSetupDlg();
	 return 0;
} 
int CHMSFoodFeeSetupDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSFoodFeeSetupDlg();
	 return 0;
} 
int CHMSFoodFeeSetupDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSFoodFeeSetupDlg();
	 return 0;
} 
int CHMSFoodFeeSetupDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSFoodFeeSetupDlg();
	 return 0;
} 
int CHMSFoodFeeSetupDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSFoodFeeSetupDlg();
	 return 0;
} 
void CHMSFoodFeeSetupDlg::OnInactiveSelect(){
	OnListLoadData();
}
void CHMSFoodFeeSetupDlg::OnFindCategorySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodFeeSetupDlg::OnFindCategorySelendok(){
	OnListLoadData();
}
/*void CHMSFoodFeeSetupDlg::OnFindCategorySetfocus(){
	
}*/
void CHMSFoodFeeSetupDlg::OnFindCategoryKillfocus(){
	
}
long CHMSFoodFeeSetupDlg::OnFindCategoryLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_vndesc = 'C11' ORDER BY ss_index, ss_code"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndFindCategory.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndFindCategory.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFoodFeeSetupDlg::OnFindCategoryAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSFoodFeeSetupDlg::OnFindNameChange(){
	
} 
/*void CHMSFoodFeeSetupDlg::OnFindNameSetfocus(){
	
} */
void CHMSFoodFeeSetupDlg::OnFindNameKillfocus(){
	
}
int CHMSFoodFeeSetupDlg::OnFindNameCheckValue(){
	return 0;
} 
void CHMSFoodFeeSetupDlg::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
int CHMSFoodFeeSetupDlg::OnAddHMSFoodFeeSetupDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFoodFeeSetupDlg::OnEditHMSFoodFeeSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodFeeSetupDlg::OnDeleteHMSFoodFeeSetupDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL,tmpStr, szMsg; 
	CRecord rs(&pMF->m_db);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	CString szID;
	szID = m_wndList.GetItemText(nSel, 0);
	TranslateString(_T("This is item fee active. Can not delete item fee [%s]!"), tmpStr);
	szMsg.Format(tmpStr,szID);
	szSQL.Format(_T(" select count(*) from hmsv_fee where hfe_itemid='%s'"), szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0){
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return -1;
	}

 	szSQL.Format(_T("DELETE FROM hms_fee_list WHERE  hfl_feeid='%s' ") , szID); 
	pMF->ExecSQL(szSQL); 
	m_wndList.DeleteItem(nSel);
	
	if(!szID.IsEmpty()){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSFoodFeeSetupDlg(); 		
 	}
	return 0;
}
int CHMSFoodFeeSetupDlg::OnSaveHMSFoodFeeSetupDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_feeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 

		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		pMF->ExecSQL(szSQL);

 		CString szWhere; 
		szWhere.Format(_T(" WHERE hfl_feeid='%s' and hfl_idx = %d"), m_szID, m_nID); 
 		szSQL = m_hms_feeTbl.GetUpdateSQL(_T("hfl_createdby,hfl_createddate,hfl_feeid,hfl_idx")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_EDIT)
		{
			CString szEvent, szDesc;
			szEvent.Format(_T("Edit"));
			szDesc.Format(_T("ID:%s, Name:%s"), m_szID, m_szName);
			pMF->SystemLog(szEvent, szDesc);
		}

		OnListLoadData();
 		SetMode(VM_VIEW); 
		if (GetMode() == VM_ADD) m_wndAdd.SetFocus();
		else m_wndList.SetFocus();
		m_wndList.SetCurSel(m_nSelectedLine);
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

#include "HMSFeeListEditDetailDialog.h"
int CHMSFoodFeeSetupDlg::OnListShowLogItem(){
	CHMSFeeListEditDetailDialog dlg(this);
	dlg.m_szFeeID=m_szID;
	dlg.DoModal();
	return 0;
}

int CHMSFoodFeeSetupDlg::OnCancelHMSFoodFeeSetupDlg(){
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
int CHMSFoodFeeSetupDlg::OnHMSFoodFeeSetupDlgListLoadData(){
	return 0;
}

void CHMSFoodFeeSetupDlg::OnCategorySearchIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodFeeSetupDlg::OnCategorySearchIDSelendok(){
	OnListLoadData();
}
/*void CHMSFoodFeeSetupDlg::OnCategorySearchIDSetfocus(){
	
}*/
/*void CHMSFoodFeeSetupDlg::OnCategorySearchIDKillfocus(){
	
}*/
long CHMSFoodFeeSetupDlg::OnCategorySearchIDLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategorySearchID.IsSearchKey() && !m_szCategorySearchIDKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szCategorySearchIDKey);
	}
	m_wndCategorySearchID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_feefood_category' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategorySearchID.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFoodFeeSetupDlg::OnCategorySearchIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSFoodFeeSetupDlg::OnCategoryIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodFeeSetupDlg::OnCategoryIDSelendok(){
	
}
/*void CHMSFoodFeeSetupDlg::OnCategoryIDSetfocus(){
	
}*/
/*void CHMSFoodFeeSetupDlg::OnCategoryIDKillfocus(){
	
}*/
long CHMSFoodFeeSetupDlg::OnCategoryIDLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCategoryID.IsSearchKey() && !m_szCategoryIDKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szCategoryIDKey);
	}
	m_wndCategoryID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'hms_feefood_category' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCategoryID.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

long CHMSFoodFeeSetupDlg::OnNhombaocaoLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNhombaocao.IsSearchKey() && !m_szNhombaocaoKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szNhombaocaoKey);
	}
	m_wndNhombaocao.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_vndesc as buaan FROM sys_sel WHERE ss_id = 'hms_feefood_subcategory' %s ORDER BY cast(ss_code as int) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndNhombaocao.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("buaan")),NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSFoodFeeSetupDlg::OnCategoryIDAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
#include "FFCategorySetup.h"
void CHMSFoodFeeSetupDlg::OnCategoryIDSearchLabelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CFFCategorySetup dlg(this);
	dlg.DoModal();
}
