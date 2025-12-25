#include "HMSCancerDrugOrderDialog.h"
#include "MainFrm.h"


static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnOrderQtyChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnOrderQtyChange();
} */
/*static void _OnOrderQtySetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnOrderQtySetfocus();} */ 
/*static void _OnOrderQtyKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnOrderQtyKillfocus();
} */
static int _OnOrderQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnOrderQtyCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnName2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnName2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnName2SelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName2Selendok();
}
/*static void _OnName2SetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName2Killfocus();
}*/
/*static void _OnName2KillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName2Killfocus();
}*/
static long _OnName2LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnName2LoadData();
}
/*static void _OnName2AddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName2AddNew();
}*/
/*static void _OnQuantity2ChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity2Change();
} */
/*static void _OnQuantity2SetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity2Setfocus();} */ 
/*static void _OnQuantity2KillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity2Killfocus();
} */
static int _OnQuantity2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity2CheckValue();
} 
static void _OnName3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnName3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnName3SelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName3Selendok();
}
/*static void _OnName3SetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName3Killfocus();
}*/
/*static void _OnName3KillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName3Killfocus();
}*/
static long _OnName3LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnName3LoadData();
}
/*static void _OnName3AddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnName3AddNew();
}*/
/*static void _OnQuantity3ChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity3Change();
} */
/*static void _OnQuantity3SetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity3Setfocus();} */ 
/*static void _OnQuantity3KillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity3Killfocus();
} */
static int _OnQuantity3CheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnQuantity3CheckValue();
} 
static void _OnUsageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnUsageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUsageSelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageSelendok();
}
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageKillfocus();
}*/
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageKillfocus();
}*/
static long _OnUsageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageLoadData();
}
/*static void _OnUsageAddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageAddNew();
}*/
/*static void _OnUsageDescChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageDescChange();
} */
/*static void _OnUsageDescSetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageDescSetfocus();} */ 
/*static void _OnUsageDescKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageDescKillfocus();
} */
static int _OnUsageDescCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnUsageDescCheckValue();
} 
static void _OnUsage1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnUsage1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUsage1SelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1Selendok();
}
/*static void _OnUsage1SetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1Killfocus();
}*/
/*static void _OnUsage1KillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1Killfocus();
}*/
static long _OnUsage1LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1LoadData();
}
/*static void _OnUsage1AddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1AddNew();
}*/
/*static void _OnUsage1DescChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1DescChange();
} */
/*static void _OnUsage1DescSetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1DescSetfocus();} */ 
/*static void _OnUsage1DescKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1DescKillfocus();
} */
static int _OnUsage1DescCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage1DescCheckValue();
} 
static void _OnUsage2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerDrugOrderDialog* )pWnd)->OnUsage2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUsage2SelendokFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2Selendok();
}
/*static void _OnUsage2SetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2Killfocus();
}*/
/*static void _OnUsage2KillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2Killfocus();
}*/
static long _OnUsage2LoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2LoadData();
}
/*static void _OnUsage2AddNewFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2AddNew();
}*/
/*static void _OnUsage2DescChangeFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2DescChange();
} */
/*static void _OnUsage2DescSetfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2DescSetfocus();} */ 
/*static void _OnUsage2DescKillfocusFnc(CWnd *pWnd){
	((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2DescKillfocus();
} */
static int _OnUsage2DescCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerDrugOrderDialog *)pWnd)->OnUsage2DescCheckValue();
} 
static void _OnCheckName2SelectFnc(CWnd *pWnd){
	 ((CHMSCancerDrugOrderDialog*)pWnd)->OnCheckName2Select();
}
static void _OnCheckName3SelectFnc(CWnd *pWnd){
	 ((CHMSCancerDrugOrderDialog*)pWnd)->OnCheckName3Select();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerDrugOrderDialog *pVw = (CHMSCancerDrugOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancerDrugOrderDialog *pVw = (CHMSCancerDrugOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancerDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerDrugOrderDialog*)pWnd)->OnAddHMSCancerDrugOrderDialog();
} 
static int _OnEditHMSCancerDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerDrugOrderDialog*)pWnd)->OnEditHMSCancerDrugOrderDialog();
} 
static int _OnDeleteHMSCancerDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerDrugOrderDialog*)pWnd)->OnDeleteHMSCancerDrugOrderDialog();
} 
static int _OnSaveHMSCancerDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerDrugOrderDialog*)pWnd)->OnSaveHMSCancerDrugOrderDialog();
} 
static int _OnCancelHMSCancerDrugOrderDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerDrugOrderDialog*)pWnd)->OnCancelHMSCancerDrugOrderDialog();
} 
CHMSCancerDrugOrderDialog::CHMSCancerDrugOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 565;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CHMSCancerDrugOrderDialog::~CHMSCancerDrugOrderDialog(){
}
void CHMSCancerDrugOrderDialog::OnCreateComponents(){
	m_wndDrugInformation.Create(this, _T("Drug Information"), 5, 65, 695, 300);
	m_wndTenphacdoLabel.Create(this, _T("Tên theo phác đồ"), 5, 5, 145, 30);
	m_wndTenphacdo.Create(this,150, 5, 410, 30); 
	m_wndDonviLabel.Create(this, _T("Đơn vị"), 415, 5, 525, 30);
	m_wndDonvi.Create(this,530, 5, 680, 30); 
	m_wndLieuDungLabel.Create(this, _T("Liều dùng"), 5, 35, 145, 60);
	m_wndLieuDung.Create(this,150, 35, 271, 60); 

	m_wndStorageLabel.Create(this, _T("Storage"), 10, 90, 150, 115);
	m_wndStorage.Create(this,155, 90, 500, 115); 
	m_wndOrderQtyLabel.Create(this, _T("Tồn kho"), 505, 90, 605, 115);
	m_wndOrderQty.Create(this,610, 90, 690, 115); 
	m_wndNameLabel.Create(this, _T("Tên thuốc 1"), 10, 120, 150, 145);
	m_wndName.Create(this,155, 120, 500, 145); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 505, 120, 605, 145);
	m_wndQuantity.Create(this,610, 120, 690, 145); 
	m_wndUsageLabel.Create(this, _T("Usage"), 10, 150, 150, 175);
	m_wndUsage.Create(this,155, 150, 335, 175); 
	m_wndUsageDesc.Create(this,340, 150, 690, 175); 

	m_wndCheckName2.Create(this, _T(""), 130, 180, 155, 205);
	m_wndName2Label.Create(this, _T("Tên thuốc 2"), 10, 180, 125, 205);
	m_wndName2.Create(this,155, 180, 500, 205); 

	m_wndQuantity2Label.Create(this, _T("Quantity"), 505, 180, 605, 205);
	m_wndQuantity2.Create(this,610, 180, 690, 205);
	m_wndUsage1Label.Create(this, _T("Usage"), 10, 210, 150, 235);
	m_wndUsage1.Create(this,155, 210, 335, 235); 
	m_wndUsage1Desc.Create(this,340, 210, 690, 235); 

	m_wndCheckName3.Create(this, _T(""), 130, 240, 155, 265);
	m_wndName3Label.Create(this, _T("Tên thuốc 3"), 10, 240, 125, 265);
	m_wndName3.Create(this,155, 240, 500, 265); 
	m_wndQuantity3Label.Create(this, _T("Quantity"), 505, 240, 605, 265);
	m_wndQuantity3.Create(this,610, 240, 690, 265); 
	
	m_wndUsage2Label.Create(this, _T("Usage"), 10, 270, 150, 295);
	m_wndUsage2.Create(this,155, 270, 335, 295); 
	m_wndUsage2Desc.Create(this,340, 270, 690, 295); 
	
	m_wndDiengiaiLabel.Create(this, _T("diengiai"), 10, 305, 150, 330);
	m_wndDiengiai.Create(this,155, 305, 500, 330); 

	m_wndSave.Create(this, _T("&Save"), 530, 305, 610, 330);
	m_wndClose.Create(this, _T("&Close"), 615, 305, 695, 330);
}
void CHMSCancerDrugOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndCheckName2.ModifyStyle(WS_TABSTOP, 0);
	m_wndCheckName3.ModifyStyle(WS_TABSTOP, 0);

	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(135);
	m_wndOrderQty.SetLimitText(5);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(125);
	m_wndQuantity.SetLimitText(5);
	m_wndQuantity.SetCheckValue(true);
	m_wndName2.SetCheckValue(false);
	m_wndName2.LimitText(135);
	m_wndQuantity2.SetLimitText(5);
	m_wndQuantity2.SetCheckValue(false);
	m_wndName3.SetCheckValue(false);
	m_wndName3.LimitText(135);
	m_wndQuantity3.SetLimitText(5);
	m_wndQuantity3.SetCheckValue(false);

	m_wndOrderQty.SetReadOnly(true);

	m_wndTenphacdo.SetReadOnly(true);
	m_wndDonvi.SetReadOnly(true);
	m_wndLieuDung.SetReadOnly(true);
	m_wndDiengiai.SetReadOnly(true);

		
	/*m_wndUsageDesc.SetCheckValue(true);
	m_wndUsage1Desc.SetCheckValue(true);
	m_wndUsage2Desc.SetCheckValue(true);*/
	

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndName.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndName.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndName.Format(6, 1);
	m_wndName.SetSearchStyle(SS_COMPARE);



	m_wndName2.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName2.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndName2.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndName2.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndName2.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndName2.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndName2.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndName2.Format(6, 1);
	m_wndName2.SetSearchStyle(SS_COMPARE);



	m_wndName3.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName3.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndName3.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndName3.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndName3.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndName3.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndName3.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndName3.Format(6, 1);
	m_wndName3.SetSearchStyle(SS_COMPARE);

	
	m_wndUsage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUsage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUsage1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUsage1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUsage2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUsage2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


}
void CHMSCancerDrugOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndOrderQty.SetEvent(WE_CHANGE, _OnOrderQtyChangeFnc);
	//m_wndOrderQty.SetEvent(WE_SETFOCUS, _OnOrderQtySetfocusFnc);
	//m_wndOrderQty.SetEvent(WE_KILLFOCUS, _OnOrderQtyKillfocusFnc);
	m_wndOrderQty.SetEvent(WE_CHECKVALUE, _OnOrderQtyCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndName2.SetEvent(WE_SELENDOK, _OnName2SelendokFnc);
	//m_wndName2.SetEvent(WE_SETFOCUS, _OnName2SetfocusFnc);
	//m_wndName2.SetEvent(WE_KILLFOCUS, _OnName2KillfocusFnc);
	m_wndName2.SetEvent(WE_SELCHANGE, _OnName2SelectChangeFnc);
	m_wndName2.SetEvent(WE_LOADDATA, _OnName2LoadDataFnc);
	//m_wndName2.SetEvent(WE_ADDNEW, _OnName2AddNewFnc);
	//m_wndQuantity2.SetEvent(WE_CHANGE, _OnQuantity2ChangeFnc);
	//m_wndQuantity2.SetEvent(WE_SETFOCUS, _OnQuantity2SetfocusFnc);
	//m_wndQuantity2.SetEvent(WE_KILLFOCUS, _OnQuantity2KillfocusFnc);
	m_wndQuantity2.SetEvent(WE_CHECKVALUE, _OnQuantity2CheckValueFnc);
	m_wndName3.SetEvent(WE_SELENDOK, _OnName3SelendokFnc);
	//m_wndName3.SetEvent(WE_SETFOCUS, _OnName3SetfocusFnc);
	//m_wndName3.SetEvent(WE_KILLFOCUS, _OnName3KillfocusFnc);
	m_wndName3.SetEvent(WE_SELCHANGE, _OnName3SelectChangeFnc);
	m_wndName3.SetEvent(WE_LOADDATA, _OnName3LoadDataFnc);
	//m_wndName3.SetEvent(WE_ADDNEW, _OnName3AddNewFnc);
	//m_wndQuantity3.SetEvent(WE_CHANGE, _OnQuantity3ChangeFnc);
	//m_wndQuantity3.SetEvent(WE_SETFOCUS, _OnQuantity3SetfocusFnc);
	//m_wndQuantity3.SetEvent(WE_KILLFOCUS, _OnQuantity3KillfocusFnc);
	m_wndQuantity3.SetEvent(WE_CHECKVALUE, _OnQuantity3CheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	m_wndUsage.SetEvent(WE_SELENDOK, _OnUsageSelendokFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_SELCHANGE, _OnUsageSelectChangeFnc);
	m_wndUsage.SetEvent(WE_LOADDATA, _OnUsageLoadDataFnc);
	//m_wndUsage.SetEvent(WE_ADDNEW, _OnUsageAddNewFnc);
	//m_wndUsageDesc.SetEvent(WE_CHANGE, _OnUsageDescChangeFnc);
	//m_wndUsageDesc.SetEvent(WE_SETFOCUS, _OnUsageDescSetfocusFnc);
	//m_wndUsageDesc.SetEvent(WE_KILLFOCUS, _OnUsageDescKillfocusFnc);
	m_wndUsageDesc.SetEvent(WE_CHECKVALUE, _OnUsageDescCheckValueFnc);
	m_wndUsage1.SetEvent(WE_SELENDOK, _OnUsage1SelendokFnc);
	//m_wndUsage1.SetEvent(WE_SETFOCUS, _OnUsage1SetfocusFnc);
	//m_wndUsage1.SetEvent(WE_KILLFOCUS, _OnUsage1KillfocusFnc);
	m_wndUsage1.SetEvent(WE_SELCHANGE, _OnUsage1SelectChangeFnc);
	m_wndUsage1.SetEvent(WE_LOADDATA, _OnUsage1LoadDataFnc);
	//m_wndUsage1.SetEvent(WE_ADDNEW, _OnUsage1AddNewFnc);
	//m_wndUsage1Desc.SetEvent(WE_CHANGE, _OnUsage1DescChangeFnc);
	//m_wndUsage1Desc.SetEvent(WE_SETFOCUS, _OnUsage1DescSetfocusFnc);
	//m_wndUsage1Desc.SetEvent(WE_KILLFOCUS, _OnUsage1DescKillfocusFnc);
	m_wndUsage1Desc.SetEvent(WE_CHECKVALUE, _OnUsage1DescCheckValueFnc);
	m_wndUsage2.SetEvent(WE_SELENDOK, _OnUsage2SelendokFnc);
	//m_wndUsage2.SetEvent(WE_SETFOCUS, _OnUsage2SetfocusFnc);
	//m_wndUsage2.SetEvent(WE_KILLFOCUS, _OnUsage2KillfocusFnc);
	m_wndUsage2.SetEvent(WE_SELCHANGE, _OnUsage2SelectChangeFnc);
	m_wndUsage2.SetEvent(WE_LOADDATA, _OnUsage2LoadDataFnc);
	//m_wndUsage2.SetEvent(WE_ADDNEW, _OnUsage2AddNewFnc);
	//m_wndUsage2Desc.SetEvent(WE_CHANGE, _OnUsage2DescChangeFnc);
	//m_wndUsage2Desc.SetEvent(WE_SETFOCUS, _OnUsage2DescSetfocusFnc);
	//m_wndUsage2Desc.SetEvent(WE_KILLFOCUS, _OnUsage2DescKillfocusFnc);
	m_wndUsage2Desc.SetEvent(WE_CHECKVALUE, _OnUsage2DescCheckValueFnc);
	m_wndCheckName2.SetEvent(WE_CLICK, _OnCheckName2SelectFnc);
	m_wndCheckName3.SetEvent(WE_CLICK, _OnCheckName3SelectFnc);


	GetDataToScreen();	

}
void CHMSCancerDrugOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndOrderQty.GetDlgCtrlID(), m_nOrderQty);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndName2.GetDlgCtrlID(), m_szName2Key);
	DDX_Text(pDX, m_wndQuantity2.GetDlgCtrlID(), m_nQuantity2);
	DDX_TextEx(pDX, m_wndName3.GetDlgCtrlID(), m_szName3Key);
	DDX_Text(pDX, m_wndQuantity3.GetDlgCtrlID(), m_nQuantity3);
	DDX_TextEx(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsageKey);
	DDX_Text(pDX, m_wndUsageDesc.GetDlgCtrlID(), m_szUsageDesc);
	DDX_TextEx(pDX, m_wndUsage1.GetDlgCtrlID(), m_szUsage1Key);
	DDX_Text(pDX, m_wndUsage1Desc.GetDlgCtrlID(), m_szUsage1Desc);
	DDX_TextEx(pDX, m_wndUsage2.GetDlgCtrlID(), m_szUsage2Key);
	DDX_Text(pDX, m_wndUsage2Desc.GetDlgCtrlID(), m_szUsage2Desc);
	DDX_Text(pDX, m_wndTenphacdo.GetDlgCtrlID(), m_szTenphacdo);
	DDX_Text(pDX, m_wndDonvi.GetDlgCtrlID(), m_szDonvi);
	DDX_Text(pDX, m_wndLieuDung.GetDlgCtrlID(), m_nLieuDung);
	DDX_Text(pDX, m_wndDiengiai.GetDlgCtrlID(), m_szDiengiai);
	DDX_Check(pDX, m_wndCheckName2.GetDlgCtrlID(), m_bCheckName2);
	DDX_Check(pDX, m_wndCheckName3.GetDlgCtrlID(), m_bCheckName3);
}
void CHMSCancerDrugOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT ") \
		_T("   hctl_lieudung_m2,") \
		_T("   hctl_tenthuoc,") \
		_T("   GET_UOMNAME(hctl_donvi) AS uomname,") \
		_T("   hctl_donvi") \
		_T("   FROM hms_cancer_treatdiagln") \
		_T("   WHERE hctl_cancer_treatdiag_id = '%s' AND hctl_cancer_treatdiagln_id = %ld") \
		_T("   ORDER BY hctl_cancer_treatdiagln_id"), m_szCancerDiagramID, m_cancer_orderline_id);
	//_msg(_T("%s"), szSQL );
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hctl_lieudung_m2"), m_nLieuDung);
		rs.GetValue(_T("hctl_tenthuoc"), m_szTenphacdo);
		rs.GetValue(_T("uomname"), m_szDonvi);
		rs.GetValue(_T("hctl_donvi"), m_nUomID);
	}


	szSQL.Format(_T("SELECT * FROM hms_cancer_orderitem ") \
		_T(" WHERE hcoi_cancer_order_id=%ld and hcoi_cancer_orderline_id=%ld "),
		m_cancer_order_id, m_cancer_orderline_id);
	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	int n = 0;
	if(rs.GetRecordCount() > 0)
	{
		while(!rs.IsEOF())
		{
			
			rs.GetValue(_T("hcoi_storage_id"), m_szStorageKey);
			if (n == 0)
			{			
				rs.GetValue(_T("hcoi_product_id"), m_szNameKey);
				rs.GetValue(_T("hcoi_qtyorder"), m_nQuantity);
			}
			if (n == 1)
			{
				rs.GetValue(_T("hcoi_product_id"), m_szName2Key);
				rs.GetValue(_T("hcoi_qtyorder"), m_nQuantity2);
			}
			if (n == 2)
			{
				rs.GetValue(_T("hcoi_product_id"), m_szName3Key);
				rs.GetValue(_T("hcoi_qtyorder"), m_nQuantity3);
			}
			n++;
			rs.MoveNext();
		}

		SetMode(VM_VIEW);
	}
	else
	{
		//szSQL.Format(_T(" SELECT hcti_storage_id,") \
		//_T("   hcti_qty,") \
		//_T("   hcti_product_id") \
		//_T(" FROM hms_cancer_order") \
		//_T(" LEFT JOIN hms_cancer_treatdiagitem") \
		//_T(" ON(hcti_cancer_treatdiag_id=hco_cancer_treatdiag_id)") \
		//_T(" LEFT JOIN m_product") \
		//_T(" ON(mp_product_id          = hcti_product_id)") \
		//_T(" WHERE hco_cancer_order_id = %ld") \
		//_T(" AND hcti_cancer_treatdiagln_id = %ld"), m_cancer_order_id, m_cancer_orderline_id);

		////_msg(_T("%s"), szSQL);
		//rs.ExecSQL(szSQL);
		//if(!rs.IsEOF())
		//{
		//	rs.GetValue(_T("hcti_storage_id"), m_szStorageKey);			
		//	rs.GetValue(_T("hcti_product_id"), m_szNameKey);
		//	rs.GetValue(_T("hcti_qty"), m_nQuantity);		
		//}
		SetMode(VM_EDIT);
	}

}
void CHMSCancerDrugOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerDrugOrderDialog::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_nOrderQty=0;
	m_szNameKey.Empty();
	m_nQuantity=0;
	m_szName2Key.Empty();
	m_nQuantity2=0;
	m_szName3Key.Empty();
	m_nQuantity3=0;
	m_szUsageKey.Empty();
	m_szUsageDesc.Empty();
	m_szUsage1Key.Empty();
	m_szUsage1Desc.Empty();
	m_szUsage2Key.Empty();
	m_szUsage2Desc.Empty();

	m_szTenphacdo.Empty();
	m_szDonvi.Empty();
	m_nLieuDung=0;
	m_szDiengiai.Empty();
	m_bCheckName2 = false;
	m_bCheckName3 = false;
}
int CHMSCancerDrugOrderDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};

		m_wndName.EnableWindow(FALSE);
		m_wndQuantity.EnableWindow(FALSE);
		m_wndName2.EnableWindow(FALSE);
		m_wndQuantity2.EnableWindow(FALSE);
		m_wndUsage1.EnableWindow(FALSE);
		m_wndUsage1Desc.EnableWindow(FALSE);
		
		m_wndName3.EnableWindow(FALSE);
		m_wndQuantity3.EnableWindow(FALSE);
		m_wndUsage2.EnableWindow(FALSE);
		m_wndUsage2Desc.EnableWindow(FALSE);

		m_wndCheckName2.EnableWindow(FALSE);
		m_wndCheckName3.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSCancerDrugOrderDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnStorageSelendok(){
	 
}
/*void CHMSCancerDrugOrderDialog::OnStorageSetfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnStorageKillfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	
	szFilter.AppendFormat(_T(" and msl_org_id='PM' "));
	szFilter.AppendFormat(_T(" and msl_type<>'C' "));
	szFilter.AppendFormat(_T(" and  msl_storage_id in(select msd_storage_id from m_storage_default where msd_object_id=%d) "),pMF->GetObjectID());

	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey
};
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnOrderQtyChange(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnOrderQtySetfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnOrderQtyKillfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnOrderQtyCheckValue(){
	return 0;
} 
void CHMSCancerDrugOrderDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnNameSelendok(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUom;
	/*UpdateData(true);
	long nProduct_ID = str2long(m_szNameKey);
	szSQL.Format(_T("AD_UOM_CONVERT(%ld, %ld, %d)"), m_nLieuDung, nProduct_ID, m_nUomID);
	float ret = str2float(pMF->ExecDML(szSQL));
	_tprintf(_T("\r\n%s, %.2f, %s"), szSQL, ret, m_szNameKey);

	m_nQuantity = 0;
	if(ret > 0)
		m_nQuantity = ret;
	
	szUom = m_wndName.GetCurrent(3);
	m_szDiengiai.Format(_T("%ld (%s) -> %s"), m_nLieuDung, m_szDonvi, szUom);
	UpdateData(false);*/

}
/*void CHMSCancerDrugOrderDialog::OnNameSetfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnNameKillfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id = %d and msl_product_id not in(0,%d, %d) "), 
		str2int(m_szStorageKey), str2long(m_szName2Key), str2long(m_szName3Key));

	return pMF->LoadProductItemList(&m_wndName, m_szNameKey, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNameKey
};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantityChange(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantityKillfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnQuantityCheckValue(){
	/*if( (m_nQuantity+m_nQuantity2+m_nQuantity3) > m_nOrderQty)
		return -1;*/
	/*if(m_nQuantity < m_nOrderQty)
	{
		m_wndName2.EnableWindow(true);
		m_wndQuantity2.EnableWindow(true);
		m_wndUsage1.EnableWindow(true);
		m_wndUsage1Desc.EnableWindow(true);
	}
	else
	{
		m_wndName2.EnableWindow(false);
		m_wndQuantity2.EnableWindow(false);
		m_wndName3.EnableWindow(false);
		m_wndQuantity3.EnableWindow(false);

		m_wndUsage2.EnableWindow(false);
		m_wndUsage2Desc.EnableWindow(false);

		m_wndUsage1.EnableWindow(true);
		m_wndUsage1Desc.EnableWindow(true);
	}*/

	return 0;
} 
void CHMSCancerDrugOrderDialog::OnName2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnName2Selendok(){
	 
}
/*void CHMSCancerDrugOrderDialog::OnName2Setfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnName2Killfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnName2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id = %d and msl_product_id not in(0,%d, %d) "), 
		str2int(m_szStorageKey), str2long(m_szNameKey), str2long(m_szName3Key));

	return pMF->LoadProductItemList(&m_wndName2, m_szName2Key, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName2.IsSearchKey() && !m_szName2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szName2Key
};
	m_wndName2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnName2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantity2Change(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantity2Setfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantity2Killfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnQuantity2CheckValue(){

	/*if(m_nQuantity+m_nQuantity2 < m_nOrderQty)
	{
		m_wndName3.EnableWindow(true);
		m_wndQuantity3.EnableWindow(true);

		m_wndUsage2.EnableWindow(true);
		m_wndUsage2Desc.EnableWindow(true);
	}
	else
	{
		m_wndName3.EnableWindow(false);
		m_wndQuantity3.EnableWindow(false);
	}*/


	return 0;
} 
void CHMSCancerDrugOrderDialog::OnName3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnName3Selendok(){
	 
}
/*void CHMSCancerDrugOrderDialog::OnName3Setfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnName3Killfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnName3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id = %d and msl_product_id not in(0,%d, %d) "), 
		str2int(m_szStorageKey), str2long(m_szNameKey), str2long(m_szName2Key));

	return pMF->LoadProductItemList(&m_wndName3, m_szName3Key, szFilter);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName3.IsSearchKey() && !m_szName3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szName3Key
};
	m_wndName3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnName3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantity3Change(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantity3Setfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnQuantity3Killfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnQuantity3CheckValue(){
	return 0;
} 
void CHMSCancerDrugOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCancerDrugOrderDialog();
} 
void CHMSCancerDrugOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCancerDrugOrderDialog::OnAddHMSCancerDrugOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerDrugOrderDialog::OnEditHMSCancerDrugOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerDrugOrderDialog::OnDeleteHMSCancerDrugOrderDialog(){
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
 		OnCancelHMSCancerDrugOrderDialog();
 	}
	return 0;
}
int CHMSCancerDrugOrderDialog::OnSaveHMSCancerDrugOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	CString szSQL;
	int ret =0;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	if(!m_szNameKey.IsEmpty())
	{
		szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEM2(%ld, %ld, %ld, '%s', %d, %ld,%.2f, '%s', '', '%s')"),
			pMF->m_nDocumentNo, m_cancer_order_id, m_cancer_orderline_id,
			pMF->GetCurrentUser(), str2int(m_szStorageKey), str2long(m_szNameKey), m_nQuantity, m_szUsageDesc, m_szUsageKey);
		ret = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%s: %d"), szSQL, ret);
	}

	if(!m_szName2Key.IsEmpty())
	{
		szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEM2(%ld, %ld, %ld, '%s', %d, %ld,%.2f, '%s', '', '%s')"),
			pMF->m_nDocumentNo, m_cancer_order_id, m_cancer_orderline_id,
			pMF->GetCurrentUser(), str2int(m_szStorageKey), str2long(m_szName2Key), m_nQuantity2, m_szUsage1Desc, m_szUsage1Key);
		ret = str2int(pMF->ExecDML(szSQL));
		_fmsg(_T("%s: %d"), szSQL, ret);
	}

	if(!m_szName3Key.IsEmpty())
	{
		szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEM2(%ld, %ld, %ld, '%s', %d, %ld,%.2f, '%s', '', '%s')"),
			pMF->m_nDocumentNo, m_cancer_order_id, m_cancer_orderline_id,
			pMF->GetCurrentUser(), str2int(m_szStorageKey), str2long(m_szName3Key), m_nQuantity3, m_szUsage2Desc, m_szUsage2Key);
		ret = str2int(pMF->ExecDML(szSQL));
		_fmsg(_T("%s: %d"), szSQL, ret);
	}
	if(ret > 0)
	{
		OnOK();
	}
	else
		ShowMessageBox(_T("Không thêm được thuốc"));

 	return 0;
}
int CHMSCancerDrugOrderDialog::OnCancelHMSCancerDrugOrderDialog(){
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
int CHMSCancerDrugOrderDialog::OnHMSCancerDrugOrderDialogListLoadData(){
	return 0;
}
void CHMSCancerDrugOrderDialog::OnUsageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnUsageSelendok(){
	UpdateData(true);
	m_szUsageDesc = m_wndUsage.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSCancerDrugOrderDialog::OnUsageSetfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnUsageKillfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnUsageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndUsage, m_szUsageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUsage.IsSearchKey() && !m_szUsageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUsageKey
};
	m_wndUsage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUsage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnUsageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsageDescChange(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsageDescSetfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsageDescKillfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnUsageDescCheckValue(){
	return 0;
} 
void CHMSCancerDrugOrderDialog::OnUsage1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnUsage1Selendok(){
	UpdateData(true);
	m_szUsage1Desc = m_wndUsage1.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSCancerDrugOrderDialog::OnUsage1Setfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnUsage1Killfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnUsage1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndUsage1, m_szUsage1Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUsage1.IsSearchKey() && !m_szUsage1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUsage1Key
};
	m_wndUsage1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUsage1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnUsage1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsage1DescChange(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsage1DescSetfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsage1DescKillfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnUsage1DescCheckValue(){
	return 0;
} 
void CHMSCancerDrugOrderDialog::OnUsage2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerDrugOrderDialog::OnUsage2Selendok(){
	UpdateData(true);
	m_szUsage2Desc = m_wndUsage2.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSCancerDrugOrderDialog::OnUsage2Setfocus(){
	
}*/
/*void CHMSCancerDrugOrderDialog::OnUsage2Killfocus(){
	
}*/
long CHMSCancerDrugOrderDialog::OnUsage2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndUsage2, m_szUsage2Key);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUsage2.IsSearchKey() && !m_szUsage2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUsage2Key
};
	m_wndUsage2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUsage2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerDrugOrderDialog::OnUsage2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsage2DescChange(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsage2DescSetfocus(){
	
} */
/*void CHMSCancerDrugOrderDialog::OnUsage2DescKillfocus(){
	
} */
int CHMSCancerDrugOrderDialog::OnUsage2DescCheckValue(){
	return 0;
} 
void CHMSCancerDrugOrderDialog::OnCheckName2Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!m_bCheckName2)
	{
		m_wndName2.EnableWindow(true);
		m_wndQuantity2.EnableWindow(true);

		m_wndUsage1.EnableWindow(true);
		m_wndUsage1Desc.EnableWindow(true);
		m_bCheckName2 = true;
	}
	else
	{
		m_wndName2.EnableWindow(false);
		m_wndQuantity2.EnableWindow(false);

		m_wndUsage1.EnableWindow(false);
		m_wndUsage1Desc.EnableWindow(false);
		m_bCheckName2 = false;
	}
	UpdateData(FALSE);
	
}
void CHMSCancerDrugOrderDialog::OnCheckName3Select(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!m_bCheckName3)
	{
		m_wndName3.EnableWindow(true);
		m_wndQuantity3.EnableWindow(true);

		m_wndUsage2.EnableWindow(true);
		m_wndUsage2Desc.EnableWindow(true);
		m_bCheckName3 = true;
	}
	else
	{
		m_wndName3.EnableWindow(false);
		m_wndQuantity3.EnableWindow(false);

		m_wndUsage2.EnableWindow(false);
		m_wndUsage2Desc.EnableWindow(false);
		m_bCheckName3 = false;
	}
	
	UpdateData(FALSE);
}
