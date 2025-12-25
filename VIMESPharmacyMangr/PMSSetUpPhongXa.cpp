#include "PMSSetUpPhongXa.h"
#include "MainFrm.h"



static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSSetUpPhongXa*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSSetUpPhongXa*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFeeIdChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnFeeIdChange();
} */
/*static void _OnFeeIdSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnFeeIdSetfocus();} */ 
/*static void _OnFeeIdKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnFeeIdKillfocus();
} */
static int _OnFeeIdCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnFeeIdCheckValue();
} 
/*static void _OnFeeNameChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnFeeNameChange();
} */
/*static void _OnFeeNameSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnFeeNameSetfocus();} */ 
/*static void _OnFeeNameKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnFeeNameKillfocus();
} */
static int _OnFeeNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnFeeNameCheckValue();
} 
/*static void _OnPriceChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnPriceChange();
} */
/*static void _OnPriceSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnPriceSetfocus();} */ 
/*static void _OnPriceKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnPriceKillfocus();
} */
static int _OnPriceCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnPriceCheckValue();
} 
/*static void _OnDrugPriceChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnDrugPriceChange();
} */
/*static void _OnDrugPriceSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnDrugPriceSetfocus();} */ 
/*static void _OnDrugPriceKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnDrugPriceKillfocus();
} */
static int _OnDrugPriceCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnDrugPriceCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnQtyCheckValue();
} 
static void _OnContractSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSetUpPhongXa* )pWnd)->OnContractSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnContractSelendokFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContractSelendok();
}
/*static void _OnContractSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContractKillfocus();
}*/
/*static void _OnContractKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContractKillfocus();
}*/
static long _OnContractLoadDataFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnContractLoadData();
}
/*static void _OnContractAddNewFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContractAddNew();
}*/
/*static void _Onma_axChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onma_axChange();
} */
/*static void _Onma_axSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onma_axSetfocus();} */ 
/*static void _Onma_axKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onma_axKillfocus();
} */
static int _Onma_axCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->Onma_axCheckValue();
} 
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnRegCodeChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnRegCodeChange();
} */
/*static void _OnRegCodeSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnRegCodeSetfocus();} */ 
/*static void _OnRegCodeKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnRegCodeKillfocus();
} */
static int _OnRegCodeCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnRegCodeCheckValue();
} 
/*static void _OnContentChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContentChange();
} */
/*static void _OnContentSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContentSetfocus();} */ 
/*static void _OnContentKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnContentKillfocus();
} */
static int _OnContentCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnContentCheckValue();
} 
static void _Onduong_dungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSSetUpPhongXa* )pWnd)->Onduong_dungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _Onduong_dungSelendokFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onduong_dungSelendok();
}
/*static void _Onduong_dungSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onduong_dungKillfocus();
}*/
/*static void _Onduong_dungKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onduong_dungKillfocus();
}*/
static long _Onduong_dungLoadDataFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->Onduong_dungLoadData();
}
/*static void _Onduong_dungAddNewFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->Onduong_dungAddNew();
}*/
static void _OnGetItemSelectFnc(CWnd *pWnd){
	CPMSSetUpPhongXa *pVw = (CPMSSetUpPhongXa *)pWnd;
	pVw->OnGetItemSelect();
} 

static void _OnAddSelectFnc(CWnd *pWnd){
	CPMSSetUpPhongXa *pVw = (CPMSSetUpPhongXa *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPMSSetUpPhongXa *pVw = (CPMSSetUpPhongXa *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPMSSetUpPhongXa *pVw = (CPMSSetUpPhongXa *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSSetUpPhongXa *pVw = (CPMSSetUpPhongXa *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPMSSetUpPhongXa *pVw = (CPMSSetUpPhongXa *)pWnd;
	pVw->OnCancelSelect();
} 
/*static void _OnDrugNameChangeFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnDrugNameChange();
} */
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnDrugNameSetfocus();} */ 
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CPMSSetUpPhongXa *)pWnd)->OnDrugNameKillfocus();
} */
static int _OnDrugNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSSetUpPhongXa *)pWnd)->OnDrugNameCheckValue();
} 
static int _OnAddPMSSetUpPhongXaFnc(CWnd *pWnd){
	 return ((CPMSSetUpPhongXa*)pWnd)->OnAddPMSSetUpPhongXa();
} 
static int _OnEditPMSSetUpPhongXaFnc(CWnd *pWnd){
	 return ((CPMSSetUpPhongXa*)pWnd)->OnEditPMSSetUpPhongXa();
} 
static int _OnDeletePMSSetUpPhongXaFnc(CWnd *pWnd){
	 return ((CPMSSetUpPhongXa*)pWnd)->OnDeletePMSSetUpPhongXa();
} 
static int _OnSavePMSSetUpPhongXaFnc(CWnd *pWnd){
	 return ((CPMSSetUpPhongXa*)pWnd)->OnSavePMSSetUpPhongXa();
} 
static int _OnCancelPMSSetUpPhongXaFnc(CWnd *pWnd){
	 return ((CPMSSetUpPhongXa*)pWnd)->OnCancelPMSSetUpPhongXa();
} 
CPMSSetUpPhongXa::CPMSSetUpPhongXa(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMSSetUpPhongXa::~CPMSSetUpPhongXa(){
}
void CPMSSetUpPhongXa::OnCreateComponents(){
	m_wndList.Create(this,4, 4, 925, 424); 
	m_wndFeeIDLabel.Create(this, _T("FeeId"), 20, 430, 100, 455);
	m_wndFeeId.Create(this,105, 430, 250, 455); 
	m_wndFeeNameLabel.Create(this, _T("FeeName"), 255, 430, 335, 455);
	m_wndFeeName.Create(this,340, 430, 800, 455);
	m_wndDrugNameLabel.Create(this, _T("DrugName"), 20, 460, 100, 485);
	m_wndDrugName.Create(this,105, 460, 800, 485); 
	m_wndPriceLabel.Create(this, _T("Price"), 20, 490, 100, 515);
	m_wndPrice.Create(this,105, 490, 250, 515); 
	m_wndDrugPriceLabel.Create(this, _T("Drug Price"), 255, 490, 335, 515);
	m_wndDrugPrice.Create(this,340, 490, 450, 515); 
	m_wndQtyLabel.Create(this, _T("Qty"), 455, 490, 535, 515);
	m_wndQty.Create(this,540, 490, 620, 515); 
	m_wndContractLabel.Create(this, _T("Contract"), 20, 520, 100, 545);
	m_wndContract.Create(this,105, 520, 250, 545); 
	m_wndma_axLabel.Create(this, _T("ma_ax"), 255, 520, 335, 545);
	m_wndma_ax.Create(this,340, 520, 450, 545); 
	m_wndUnitLabel.Create(this, _T("Unit"), 625, 490, 705, 515);
	m_wndUnit.Create(this,710, 490, 800, 515); 
	m_wndRegCodeLabel.Create(this, _T("RegCode"), 455, 520, 535, 545);
	m_wndRegCode.Create(this,540, 520, 800, 545); 
	m_wndContentLabel.Create(this, _T("Ham luong"), 20, 550, 100, 575);
	m_wndContent.Create(this,105, 550, 250, 575); 
	m_wndduong_dungLabel.Create(this, _T("duong dung"), 255, 550, 335, 575);
	m_wndduong_dung.Create(this,340, 550, 450, 575); 
	m_wndPackageLabel.Create(this, _T("Mã nhóm thầu"), 455, 550, 535, 575);
	m_wndPackage.Create(this,540, 550, 800, 575);

	m_wndAdd.Create(this, _T("Add"), 380, 580, 460, 605);
	m_wndEdit.Create(this, _T("Edit"), 465, 580, 545, 605);
	m_wndDelete.Create(this, _T("Delete"), 550, 580, 630, 605);
	m_wndSave.Create(this, _T("Save"), 635, 580, 715, 605);
	m_wndCancel.Create(this, _T("Cancel"), 720, 580, 800, 605);
	m_wndGetItem.Create(this, _T("Add Item"), 295, 580, 375, 605);

}
void CPMSSetUpPhongXa::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeId.SetLimitText(35);
	m_wndFeeId.SetCheckValue(true);
	m_wndFeeName.SetLimitText(254);
	m_wndFeeName.SetCheckValue(true);
	m_wndPrice.SetLimitText(16);
	m_wndPrice.SetCheckValue(true);
	m_wndDrugPrice.SetLimitText(16);
	m_wndDrugPrice.SetCheckValue(true);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);
	m_wndQty.SetNumberDecimal(3);
	m_wndContract.SetCheckValue(true);
	m_wndContract.LimitText(35);
	m_wndma_ax.SetLimitText(35);
	m_wndma_ax.SetCheckValue(true);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndRegCode.SetLimitText(35);
	//m_wndRegCode.SetCheckValue(true);
	m_wndContent.SetLimitText(35);
//	m_wndContent.SetCheckValue(true);
	m_wndduong_dung.SetCheckValue(true);
	m_wndduong_dung.LimitText(35);
	m_wndDrugName.SetLimitText(254);
	m_wndDrugName.SetCheckValue(true);
	m_bh_pxtbl.SetTableName(_T("bh_px"));
	m_bh_pxtbl.AddField(_T("ma_dv"), dfText,20);
	m_bh_pxtbl.AddField(_T("don_gia"), dfDouble);
	m_bh_pxtbl.AddField(_T("ten_thuoc"), dfText, 254);
	m_bh_pxtbl.AddField(_T("quyet_dinh"), dfText, 254);
	m_bh_pxtbl.AddField(_T("ma_ax"), dfText, 13);
	m_bh_pxtbl.AddField(_T("gia_thuoc"), dfDouble);
	m_bh_pxtbl.AddField(_T("so_luong"), dfFloat);
	m_bh_pxtbl.AddField(_T("so_dang_ky"), dfText, 128);
	m_bh_pxtbl.AddField(_T("don_vi"), dfText, 24);
	m_bh_pxtbl.AddField(_T("ma_duong_dung"), dfText, 3);
	m_bh_pxtbl.AddField(_T("ham_luong"), dfText, 254);
	m_bh_pxtbl.AddField(_T("ma_goi"), dfText, 24);

	
	

	m_wndList.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("FeeItem"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("UnitPrice"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("DrugName"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("QUYET_DINH"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("ma_ax"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(7, _T("PriceDrug"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(8, _T("Qty"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(9, _T("RegCode"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(10, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(11, _T("ma_duong_dung"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("ham_luong"), CFMT_TEXT, 100);
	m_wndduong_dung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndduong_dung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_wndDrugPrice.SetCurrencyFormat(TRUE);
	m_wndPrice.SetCurrencyFormat(TRUE);
	m_wndContract.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndContract.InsertColumn(1, _T("Name"), CFMT_TEXT, 100);


}
void CPMSSetUpPhongXa::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFeeId.SetEvent(WE_CHANGE, _OnFeeIdChangeFnc);
	//m_wndFeeId.SetEvent(WE_SETFOCUS, _OnFeeIdSetfocusFnc);
	//m_wndFeeId.SetEvent(WE_KILLFOCUS, _OnFeeIdKillfocusFnc);
	m_wndFeeId.SetEvent(WE_CHECKVALUE, _OnFeeIdCheckValueFnc);
	//m_wndFeeName.SetEvent(WE_CHANGE, _OnFeeNameChangeFnc);
	//m_wndFeeName.SetEvent(WE_SETFOCUS, _OnFeeNameSetfocusFnc);
	//m_wndFeeName.SetEvent(WE_KILLFOCUS, _OnFeeNameKillfocusFnc);
	m_wndFeeName.SetEvent(WE_CHECKVALUE, _OnFeeNameCheckValueFnc);
	//m_wndPrice.SetEvent(WE_CHANGE, _OnPriceChangeFnc);
	//m_wndPrice.SetEvent(WE_SETFOCUS, _OnPriceSetfocusFnc);
	//m_wndPrice.SetEvent(WE_KILLFOCUS, _OnPriceKillfocusFnc);
	m_wndPrice.SetEvent(WE_CHECKVALUE, _OnPriceCheckValueFnc);
	//m_wndDrugPrice.SetEvent(WE_CHANGE, _OnDrugPriceChangeFnc);
	//m_wndDrugPrice.SetEvent(WE_SETFOCUS, _OnDrugPriceSetfocusFnc);
	//m_wndDrugPrice.SetEvent(WE_KILLFOCUS, _OnDrugPriceKillfocusFnc);
	m_wndDrugPrice.SetEvent(WE_CHECKVALUE, _OnDrugPriceCheckValueFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndContract.SetEvent(WE_SELENDOK, _OnContractSelendokFnc);
	//m_wndContract.SetEvent(WE_SETFOCUS, _OnContractSetfocusFnc);
	//m_wndContract.SetEvent(WE_KILLFOCUS, _OnContractKillfocusFnc);
	m_wndContract.SetEvent(WE_SELCHANGE, _OnContractSelectChangeFnc);
	m_wndContract.SetEvent(WE_LOADDATA, _OnContractLoadDataFnc);
	//m_wndContract.SetEvent(WE_ADDNEW, _OnContractAddNewFnc);
	//m_wndma_ax.SetEvent(WE_CHANGE, _Onma_axChangeFnc);
	//m_wndma_ax.SetEvent(WE_SETFOCUS, _Onma_axSetfocusFnc);
	//m_wndma_ax.SetEvent(WE_KILLFOCUS, _Onma_axKillfocusFnc);
	m_wndma_ax.SetEvent(WE_CHECKVALUE, _Onma_axCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndRegCode.SetEvent(WE_CHANGE, _OnRegCodeChangeFnc);
	//m_wndRegCode.SetEvent(WE_SETFOCUS, _OnRegCodeSetfocusFnc);
	//m_wndRegCode.SetEvent(WE_KILLFOCUS, _OnRegCodeKillfocusFnc);
	m_wndRegCode.SetEvent(WE_CHECKVALUE, _OnRegCodeCheckValueFnc);
	//m_wndContent.SetEvent(WE_CHANGE, _OnContentChangeFnc);
	//m_wndContent.SetEvent(WE_SETFOCUS, _OnContentSetfocusFnc);
	//m_wndContent.SetEvent(WE_KILLFOCUS, _OnContentKillfocusFnc);
	m_wndContent.SetEvent(WE_CHECKVALUE, _OnContentCheckValueFnc);
	m_wndduong_dung.SetEvent(WE_SELENDOK, _Onduong_dungSelendokFnc);
	//m_wndduong_dung.SetEvent(WE_SETFOCUS, _Onduong_dungSetfocusFnc);
	//m_wndduong_dung.SetEvent(WE_KILLFOCUS, _Onduong_dungKillfocusFnc);
	m_wndduong_dung.SetEvent(WE_SELCHANGE, _Onduong_dungSelectChangeFnc);
	m_wndduong_dung.SetEvent(WE_LOADDATA, _Onduong_dungLoadDataFnc);
	//m_wndduong_dung.SetEvent(WE_ADDNEW, _Onduong_dungAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndGetItem.SetEvent(WE_CLICK, _OnGetItemSelectFnc);
	//m_wndDrugName.SetEvent(WE_CHANGE, _OnDrugNameChangeFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_CHECKVALUE, _OnDrugNameCheckValueFnc);

	

	OnListLoadData();
	SetMode(VM_VIEW);
	

}
void CPMSSetUpPhongXa::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFeeId.GetDlgCtrlID(), m_szFeeId);
	DDX_Text(pDX, m_wndFeeName.GetDlgCtrlID(), m_szFeeName);
	DDX_Text(pDX, m_wndPrice.GetDlgCtrlID(), m_nPrice);
	DDX_Text(pDX, m_wndDrugPrice.GetDlgCtrlID(), m_nDrugPrice);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndContract.GetDlgCtrlID(), m_szContractKey);
	DDX_Text(pDX, m_wndma_ax.GetDlgCtrlID(), m_szma_ax);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndRegCode.GetDlgCtrlID(), m_szRegCode);
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_TextEx(pDX, m_wndduong_dung.GetDlgCtrlID(), m_szduong_dungKey);
	DDX_Text(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugName);
	DDX_Text(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackage);

}
void CPMSSetUpPhongXa::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FeeId")] =  m_szFeeId;
	m_jData[_T("FeeName")] =  m_szFeeName;
	m_jData[_T("Price")] =  m_nPrice;
	m_jData[_T("DrugPrice")] =  m_nDrugPrice;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Contract")] =  m_szContractKey;
	m_jData[_T("ma_ax")] =  m_szma_ax;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("RegCode")] =  m_szRegCode;
	m_jData[_T("Content")] =  m_szContent;
	m_jData[_T("duong_dung")] =  m_szduong_dungKey;
	m_jData[_T("DrugName")] =  m_szDrugName;
	}
	else
	{
			
	m_jData[_T("FeeId")].GetValue(m_szFeeId);
	m_jData[_T("FeeName")].GetValue(m_szFeeName);
	m_jData[_T("Price")].GetValue(m_nPrice);
	m_jData[_T("DrugPrice")].GetValue(m_nDrugPrice);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Contract")].GetValue(m_szContractKey);
	m_jData[_T("ma_ax")].GetValue(m_szma_ax);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("RegCode")].GetValue(m_szRegCode);
	m_jData[_T("Content")].GetValue(m_szContent);
	m_jData[_T("duong_dung")].GetValue(m_szduong_dungKey);
	m_jData[_T("DrugName")].GetValue(m_szDrugName);
	}

}
void CPMSSetUpPhongXa::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM bh_px  ") \
				_T("	left join hms_fee_list on (hfl_feeid = ma_dv) ") \
				_T("	where ma_dv ='%s' "), m_szFeeId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hfl_name"),m_szFeeName);  
		rs.GetValue(_T("hfl_insprice"), m_nPrice); 
		rs.GetValue(_T("ten_thuoc"),m_szDrugName);  
		rs.GetValue(_T("quyet_dinh"),m_szContractKey); 
		rs.GetValue(_T("ma_ax"),m_szma_ax); 
		rs.GetValue(_T("gia_thuoc"), m_nDrugPrice);  
		rs.GetValue(_T("so_luong"), m_nQty); 
		rs.GetValue(_T("so_dang_ky"),m_szRegCode);  
		rs.GetValue(_T("don_vi"),m_szUnit);  
		rs.GetValue(_T("ma_duong_dung"),m_szduong_dungKey);  
		rs.GetValue(_T("ham_luong"),m_szContent);
		rs.GetValue(_T("ma_goi"),m_szPackage); 	
		SetMode(VM_VIEW);
	}

}
void CPMSSetUpPhongXa::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
		m_bh_pxtbl.SetValue(_T("ma_dv"), m_szFeeId);
	m_bh_pxtbl.SetValue(_T("don_gia"), m_nPrice);
	m_bh_pxtbl.SetValue(_T("ten_thuoc"), m_szDrugName);
	m_bh_pxtbl.SetValue(_T("quyet_dinh"), m_szContractKey);
	m_bh_pxtbl.SetValue(_T("ma_ax"), m_szma_ax);
	m_bh_pxtbl.SetValue(_T("gia_thuoc"), m_nDrugPrice);
	m_bh_pxtbl.SetValue(_T("so_luong"), m_nQty);
	m_bh_pxtbl.SetValue(_T("so_dang_ky"), m_szRegCode);
	m_bh_pxtbl.SetValue(_T("don_vi"), m_szUnit);
	m_bh_pxtbl.SetValue(_T("ma_duong_dung"), m_szduong_dungKey);
	m_bh_pxtbl.SetValue(_T("ham_luong"), m_szContent);
	m_bh_pxtbl.SetValue(_T("ma_goi"), m_szPackage);
	


	

}
void CPMSSetUpPhongXa::SetDefaultValues(){

	m_szFeeId.Empty();
	m_szFeeName.Empty();
	m_nPrice=0;
	m_nDrugPrice=0;
	m_nQty=0;
	m_szContractKey.Empty();
	m_szma_ax.Empty();
	m_szUnit.Empty();
	m_szRegCode.Empty();
	m_szContent.Empty();
	m_szduong_dungKey.Empty();
	m_szDrugName.Empty();
	m_szPackage.Empty();

}
int CPMSSetUpPhongXa::SetMode(int nMode){
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
void CPMSSetUpPhongXa::OnListDblClick(){
	
} 
void CPMSSetUpPhongXa::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szFeeId= m_wndList.GetItemText(nNewItem,1); 
	GetDataToScreen();
	
} 
int CPMSSetUpPhongXa::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPMSSetUpPhongXa::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select * from bh_px  ") \
				_T("	left join hms_fee_list on (hfl_feeid = ma_dv) ") \
				_T(" order by ma_dv "));
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("ma_dv")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("ten_thuoc")), 
			rs.GetValue(_T("quyet_dinh")), 
			rs.GetValue(_T("ma_ax")), 
			rs.GetValue(_T("gia_thuoc")), 
			rs.GetValue(_T("so_luong")), 
			rs.GetValue(_T("so_dang_ky")), 
			rs.GetValue(_T("don_vi")), 
			rs.GetValue(_T("ma_duong_dung")), 
			rs.GetValue(_T("ham_luong")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CPMSSetUpPhongXa::OnFeeIdChange(){
	
} */
/*void CPMSSetUpPhongXa::OnFeeIdSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnFeeIdKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnFeeIdCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnFeeNameChange(){
	
} */
/*void CPMSSetUpPhongXa::OnFeeNameSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnFeeNameKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnFeeNameCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnPriceChange(){
	
} */
/*void CPMSSetUpPhongXa::OnPriceSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnPriceKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnPriceCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnDrugPriceChange(){
	
} */
/*void CPMSSetUpPhongXa::OnDrugPriceSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnDrugPriceKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnDrugPriceCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnQtyChange(){
	
} */
/*void CPMSSetUpPhongXa::OnQtySetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnQtyKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnQtyCheckValue(){
	return 0;
} 
void CPMSSetUpPhongXa::OnContractSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSetUpPhongXa::OnContractSelendok(){
	 
}
/*void CPMSSetUpPhongXa::OnContractSetfocus(){
	
}*/
/*void CPMSSetUpPhongXa::OnContractKillfocus(){
	
}*/
long CPMSSetUpPhongXa::OnContractLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadContractPackageList(&m_wndContract, m_szContractKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndContract.IsSearchKey() && !m_szContractKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szContractKey
};
	m_wndContract.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndContract.AddItems(
		rs.MoveNext();
	}
	return nCount;
	*/

}
/*void CPMSSetUpPhongXa::OnContractAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMSSetUpPhongXa::Onma_axChange(){
	
} */
/*void CPMSSetUpPhongXa::Onma_axSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::Onma_axKillfocus(){
	
} */
int CPMSSetUpPhongXa::Onma_axCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnUnitChange(){
	
} */
/*void CPMSSetUpPhongXa::OnUnitSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnUnitKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnUnitCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnRegCodeChange(){
	
} */
/*void CPMSSetUpPhongXa::OnRegCodeSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnRegCodeKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnRegCodeCheckValue(){
	return 0;
} 
/*void CPMSSetUpPhongXa::OnContentChange(){
	
} */
/*void CPMSSetUpPhongXa::OnContentSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnContentKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnContentCheckValue(){
	return 0;
} 
void CPMSSetUpPhongXa::Onduong_dungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSetUpPhongXa::Onduong_dungSelendok(){
	 
}
/*void CPMSSetUpPhongXa::Onduong_dungSetfocus(){
	
}*/
/*void CPMSSetUpPhongXa::Onduong_dungKillfocus(){
	
}*/
long CPMSSetUpPhongXa::Onduong_dungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndduong_dung.IsSearchKey() && !m_szduong_dungKey.IsEmpty()){
	 szWhere.Format(_T(" and pu_id='%s' "), m_szduong_dungKey);
}

	m_wndduong_dung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select pu_id as id, pu_name as name from pms_usedrug     WHERE 1=1 %s ORDER BY pu_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndduong_dung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSSetUpPhongXa::Onduong_dungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
#include "PMGetItemToPXDlg.h"
void CPMSSetUpPhongXa::OnGetItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPMGetItemToPXDlg dlg(this);
	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	
} 
void CPMSSetUpPhongXa::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSetUpPhongXa::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditPMSSetUpPhongXa();
	
} 
void CPMSSetUpPhongXa::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPMSSetUpPhongXa::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSavePMSSetUpPhongXa();
	
} 
void CPMSSetUpPhongXa::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);
	
} 
/*void CPMSSetUpPhongXa::OnDrugNameChange(){
	
} */
/*void CPMSSetUpPhongXa::OnDrugNameSetfocus(){
	
} */
/*void CPMSSetUpPhongXa::OnDrugNameKillfocus(){
	
} */
int CPMSSetUpPhongXa::OnDrugNameCheckValue(){
	return 0;
} 
int CPMSSetUpPhongXa::OnAddPMSSetUpPhongXa(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSSetUpPhongXa::OnEditPMSSetUpPhongXa(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSSetUpPhongXa::OnDeletePMSSetUpPhongXa(){
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
 		OnCancelPMSSetUpPhongXa();
 	}
	return 0;
}
int CPMSSetUpPhongXa::OnSavePMSSetUpPhongXa(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_bh_pxtbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE ma_dv ='%s' "),m_szFeeId);
 		szSQL = m_bh_pxtbl.GetUpdateSQL(_T("ma_dv"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnPMSSetUpPhongXaListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSSetUpPhongXa::OnCancelPMSSetUpPhongXa(){
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
int CPMSSetUpPhongXa::OnPMSSetUpPhongXaListLoadData(){
	return 0;
}
