#include "CHMSTreatmentPrescriptionPopup.h"
#include "MainFrm.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSTreatmentPrescriptionPopup* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageAddNew();
}*/
static void _OnServiceWarehouseSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnServiceWarehouseSelect();
}
static void _OnInsWarehouseSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnInsWarehouseSelect();
}
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSTreatmentPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
static void _OnGenericSearchSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnGenericSearchSelect();
}
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnCancerOptSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnCancerOptSelect();
}
static void _OnOutPrescriptionSelectFnc(CWnd *pWnd){
	 ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnOutPrescriptionSelect();
}
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSTreatmentPrescriptionPopup* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedCheckValue();
} 
static void _OnOtherSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSTreatmentPrescriptionPopup* )pWnd)->OnOtherSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOtherSourceSelendokFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnOtherSourceSelendok();
}
/*static void _OnOtherSourceSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnOtherSourceKillfocus();
}*/
/*static void _OnOtherSourceKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnOtherSourceKillfocus();
}*/
static long _OnOtherSourceLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnOtherSourceLoadData();
}
/*static void _OnOtherSourceAddNewFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnOtherSourceAddNew();
}*/
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageCheckValue();
} 
static void _OnPaySourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSTreatmentPrescriptionPopup* )pWnd)->OnPaySourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaySourceSelendokFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnPaySourceSelendok();
}
/*static void _OnPaySourceSetfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnPaySourceKillfocus();
}*/
/*static void _OnPaySourceKillfocusFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnPaySourceKillfocus();
}*/
static long _OnPaySourceLoadDataFnc(CWnd *pWnd){
	return ((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnPaySourceLoadData();
}
/*static void _OnPaySourceAddNewFnc(CWnd *pWnd){
	((CCHMSTreatmentPrescriptionPopup *)pWnd)->OnPaySourceAddNew();
}*/
static void _OnDoseWarningSelectFnc(CWnd *pWnd){
	CCHMSTreatmentPrescriptionPopup *pVw = (CCHMSTreatmentPrescriptionPopup *)pWnd;
	pVw->OnDoseWarningSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCHMSTreatmentPrescriptionPopup *pVw = (CCHMSTreatmentPrescriptionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSTreatmentPrescriptionPopup *pVw = (CCHMSTreatmentPrescriptionPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnAddCHMSTreatmentPrescriptionPopup();
} 
static int _OnEditCHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnEditCHMSTreatmentPrescriptionPopup();
} 
static int _OnDeleteCHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnDeleteCHMSTreatmentPrescriptionPopup();
} 
static int _OnSaveCHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnSaveCHMSTreatmentPrescriptionPopup();
} 
static int _OnCancelCHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CCHMSTreatmentPrescriptionPopup*)pWnd)->OnCancelCHMSTreatmentPrescriptionPopup();
} 
CCHMSTreatmentPrescriptionPopup::CCHMSTreatmentPrescriptionPopup(){

	m_nDlgWidth = 790;
	m_nDlgHeight = 245;
	SetDefaultValues();
}
CCHMSTreatmentPrescriptionPopup::~CCHMSTreatmentPrescriptionPopup(){
}
void CCHMSTreatmentPrescriptionPopup::OnCreateComponents(){
	m_wndPrescription.Create(this, _T("Prescription"), 5, 5, 785, 210);
	m_wndStorageLabel.Create(this, _T("Kho"), 10, 30, 115, 55);
	m_wndStorage.Create(this,120, 30, 430, 55); 
	m_wndServiceWarehouse.Create(this, _T("Kho dịch vụ"), 525, 30, 620, 55);
	m_wndInsWarehouse.Create(this, _T("Kho BH"), 435, 30, 520, 55);
	m_wndNameLabel.Create(this, _T("Tên thuốc/HL"), 10, 60, 115, 86);
	m_wndName.Create(this,120, 60, 430, 85); 
	m_wndGenericSearch.Create(this, _T("Tìm theo tên hoạt chất"), 625, 60, 775, 82);
	m_wndUnitLabel.Create(this, _T("Unit"), 435, 60, 520, 85);
	m_wndUnit.Create(this,525, 60, 620, 85); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 90, 115, 115);
	m_wndQty.Create(this,120, 90, 205, 115); 
	m_wndMaxQuantityLabel.Create(this, _T("On Hand"), 210, 90, 310, 115);
	m_wndMaxQuantity.Create(this,315, 90, 430, 115); 
	m_wndCancerOpt.Create(this, _T("Thuốc dùng pha chế"), 625, 90, 775, 115);
	m_wndOutPrescription.Create(this, _T("Đơn ngoại trú UT"), 625, 30, 775, 55);
	m_wndIndicationLabel.Create(this, _T("Đường dùng"), 10, 120, 115, 145);
	m_wndIndication.Create(this,120, 120, 205, 145); 
	m_wndSpeedLabel.Create(this, _T("Tốc độ"), 10, 150, 115, 175);
	m_wndSpeed.Create(this,120, 150, 205, 175); 
	m_wndOtherSourceLabel.Create(this, _T("Nguồn khác"), 435, 90, 520, 115);
	m_wndOtherSource.Create(this,525, 90, 620, 115); 
	m_wndUsage.Create(this,210, 120, 780, 145); 
	m_wndPaySourceLabel.Create(this, _T("Nguồn TT covid"), 210, 150, 310, 175);
	m_wndPaySource.Create(this,315, 150, 430, 175); 
	m_wndDoseWarning.Create(this, _T("Dose Warning"), 5, 215, 200, 240);
	m_wndSave.Create(this, _T("&Save"), 640, 215, 710, 240);
	m_wndClose.Create(this, _T("&Close"), 715, 215, 785, 240);

}
void CCHMSTreatmentPrescriptionPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndUnit.SetLimitText(1024);
	m_wndUnit.SetCheckValue(true);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(1024);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(1024);
	m_wndSpeed.SetLimitText(1024);
	m_wndSpeed.SetCheckValue(true);
	m_wndOtherSource.SetCheckValue(true);
	m_wndOtherSource.LimitText(1024);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetCheckValue(true);
	m_wndPaySource.SetCheckValue(true);
	m_wndPaySource.LimitText(1024);











}
void CCHMSTreatmentPrescriptionPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndServiceWarehouse.SetEvent(WE_CLICK, _OnServiceWarehouseSelectFnc);
	m_wndInsWarehouse.SetEvent(WE_CLICK, _OnInsWarehouseSelectFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndGenericSearch.SetEvent(WE_CLICK, _OnGenericSearchSelectFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	m_wndCancerOpt.SetEvent(WE_CLICK, _OnCancerOptSelectFnc);
	m_wndOutPrescription.SetEvent(WE_CLICK, _OnOutPrescriptionSelectFnc);
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	m_wndOtherSource.SetEvent(WE_SELENDOK, _OnOtherSourceSelendokFnc);
	//m_wndOtherSource.SetEvent(WE_SETFOCUS, _OnOtherSourceSetfocusFnc);
	//m_wndOtherSource.SetEvent(WE_KILLFOCUS, _OnOtherSourceKillfocusFnc);
	m_wndOtherSource.SetEvent(WE_SELCHANGE, _OnOtherSourceSelectChangeFnc);
	m_wndOtherSource.SetEvent(WE_LOADDATA, _OnOtherSourceLoadDataFnc);
	//m_wndOtherSource.SetEvent(WE_ADDNEW, _OnOtherSourceAddNewFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndPaySource.SetEvent(WE_SELENDOK, _OnPaySourceSelendokFnc);
	//m_wndPaySource.SetEvent(WE_SETFOCUS, _OnPaySourceSetfocusFnc);
	//m_wndPaySource.SetEvent(WE_KILLFOCUS, _OnPaySourceKillfocusFnc);
	m_wndPaySource.SetEvent(WE_SELCHANGE, _OnPaySourceSelectChangeFnc);
	m_wndPaySource.SetEvent(WE_LOADDATA, _OnPaySourceLoadDataFnc);
	//m_wndPaySource.SetEvent(WE_ADDNEW, _OnPaySourceAddNewFnc);
	m_wndDoseWarning.SetEvent(WE_CLICK, _OnDoseWarningSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCHMSTreatmentPrescriptionPopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCHMSTreatmentPrescriptionPopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCHMSTreatmentPrescriptionPopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCHMSTreatmentPrescriptionPopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCHMSTreatmentPrescriptionPopupFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCHMSTreatmentPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndServiceWarehouse.GetDlgCtrlID(), m_bServiceWarehouse);
	DDX_Check(pDX, m_wndInsWarehouse.GetDlgCtrlID(), m_bInsWarehouse);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Check(pDX, m_wndGenericSearch.GetDlgCtrlID(), m_bGenericSearch);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Check(pDX, m_wndCancerOpt.GetDlgCtrlID(), m_bCancerOpt);
	DDX_Check(pDX, m_wndOutPrescription.GetDlgCtrlID(), m_bOutPrescription);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	DDX_TextEx(pDX, m_wndOtherSource.GetDlgCtrlID(), m_szOtherSourceKey);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_TextEx(pDX, m_wndPaySource.GetDlgCtrlID(), m_szPaySourceKey);

}
void CCHMSTreatmentPrescriptionPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("ServiceWarehouse")] =  m_bServiceWarehouse;
	m_jData[_T("InsWarehouse")] =  m_bInsWarehouse;
	m_jData[_T("Name")] =  m_szNameKey;
	m_jData[_T("GenericSearch")] =  m_bGenericSearch;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("MaxQuantity")] =  m_nMaxQuantity;
	m_jData[_T("CancerOpt")] =  m_bCancerOpt;
	m_jData[_T("OutPrescription")] =  m_bOutPrescription;
	m_jData[_T("Indication")] =  m_szIndicationKey;
	m_jData[_T("Speed")] =  m_szSpeed;
	m_jData[_T("OtherSource")] =  m_szOtherSourceKey;
	m_jData[_T("Usage")] =  m_szUsage;
	m_jData[_T("PaySource")] =  m_szPaySourceKey;
	}
	else
	{
			
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("ServiceWarehouse")].GetValue(m_bServiceWarehouse);
	m_jData[_T("InsWarehouse")].GetValue(m_bInsWarehouse);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	m_jData[_T("GenericSearch")].GetValue(m_bGenericSearch);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("MaxQuantity")].GetValue(m_nMaxQuantity);
	m_jData[_T("CancerOpt")].GetValue(m_bCancerOpt);
	m_jData[_T("OutPrescription")].GetValue(m_bOutPrescription);
	m_jData[_T("Indication")].GetValue(m_szIndicationKey);
	m_jData[_T("Speed")].GetValue(m_szSpeed);
	m_jData[_T("OtherSource")].GetValue(m_szOtherSourceKey);
	m_jData[_T("Usage")].GetValue(m_szUsage);
	m_jData[_T("PaySource")].GetValue(m_szPaySourceKey);
	}

}
void CCHMSTreatmentPrescriptionPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSTreatmentPrescriptionPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSTreatmentPrescriptionPopup::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_bServiceWarehouse=FALSE;
	m_bInsWarehouse=FALSE;
	m_szNameKey.Empty();
	m_bGenericSearch=FALSE;
	m_szUnit.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_bCancerOpt=FALSE;
	m_bOutPrescription=FALSE;
	m_szIndicationKey.Empty();
	m_szSpeed.Empty();
	m_szOtherSourceKey.Empty();
	m_szUsage.Empty();
	m_szPaySourceKey.Empty();

}
int CCHMSTreatmentPrescriptionPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CCHMSTreatmentPrescriptionPopup::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnStorageSelendok(){
	 
}
/*void CCHMSTreatmentPrescriptionPopup::OnStorageSetfocus(){
	
}*/
/*void CCHMSTreatmentPrescriptionPopup::OnStorageKillfocus(){
	
}*/
long CCHMSTreatmentPrescriptionPopup::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSTreatmentPrescriptionPopup::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CCHMSTreatmentPrescriptionPopup::OnServiceWarehouseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSTreatmentPrescriptionPopup::OnInsWarehouseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCHMSTreatmentPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnNameSelendok(){
	 
}
/*void CCHMSTreatmentPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CCHMSTreatmentPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CCHMSTreatmentPrescriptionPopup::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSTreatmentPrescriptionPopup::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CCHMSTreatmentPrescriptionPopup::OnGenericSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CCHMSTreatmentPrescriptionPopup::OnUnitChange(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnUnitSetfocus(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnUnitKillfocus(){
	
} */
int CCHMSTreatmentPrescriptionPopup::OnUnitCheckValue(){
	return 0;
} 
/*void CCHMSTreatmentPrescriptionPopup::OnQtyChange(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CCHMSTreatmentPrescriptionPopup::OnQtyCheckValue(){
	return 0;
} 
/*void CCHMSTreatmentPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CCHMSTreatmentPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
	void CCHMSTreatmentPrescriptionPopup::OnCancerOptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CCHMSTreatmentPrescriptionPopup::OnOutPrescriptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCHMSTreatmentPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnIndicationSelendok(){
	 
}
/*void CCHMSTreatmentPrescriptionPopup::OnIndicationSetfocus(){
	
}*/
/*void CCHMSTreatmentPrescriptionPopup::OnIndicationKillfocus(){
	
}*/
long CCHMSTreatmentPrescriptionPopup::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szIndicationKey
};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSTreatmentPrescriptionPopup::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnSpeedChange(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnSpeedSetfocus(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnSpeedKillfocus(){
	
} */
int CCHMSTreatmentPrescriptionPopup::OnSpeedCheckValue(){
	return 0;
} 
void CCHMSTreatmentPrescriptionPopup::OnOtherSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnOtherSourceSelendok(){
	 
}
/*void CCHMSTreatmentPrescriptionPopup::OnOtherSourceSetfocus(){
	
}*/
/*void CCHMSTreatmentPrescriptionPopup::OnOtherSourceKillfocus(){
	
}*/
long CCHMSTreatmentPrescriptionPopup::OnOtherSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOtherSource.IsSearchKey() && !m_szOtherSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOtherSourceKey
};
	m_wndOtherSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOtherSource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSTreatmentPrescriptionPopup::OnOtherSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnUsageChange(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CCHMSTreatmentPrescriptionPopup::OnUsageKillfocus(){
	
} */
int CCHMSTreatmentPrescriptionPopup::OnUsageCheckValue(){
	return 0;
} 
void CCHMSTreatmentPrescriptionPopup::OnPaySourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnPaySourceSelendok(){
	 
}
/*void CCHMSTreatmentPrescriptionPopup::OnPaySourceSetfocus(){
	
}*/
/*void CCHMSTreatmentPrescriptionPopup::OnPaySourceKillfocus(){
	
}*/
long CCHMSTreatmentPrescriptionPopup::OnPaySourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaySource.IsSearchKey() && !m_szPaySourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaySourceKey
};
	m_wndPaySource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaySource.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSTreatmentPrescriptionPopup::OnPaySourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSTreatmentPrescriptionPopup::OnDoseWarningSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSTreatmentPrescriptionPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSTreatmentPrescriptionPopup::OnAddCHMSTreatmentPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSTreatmentPrescriptionPopup::OnEditCHMSTreatmentPrescriptionPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSTreatmentPrescriptionPopup::OnDeleteCHMSTreatmentPrescriptionPopup(){
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
 		OnCancelCHMSTreatmentPrescriptionPopup();
 	}
	return 0;
}
int CCHMSTreatmentPrescriptionPopup::OnSaveCHMSTreatmentPrescriptionPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnCHMSTreatmentPrescriptionPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSTreatmentPrescriptionPopup::OnCancelCHMSTreatmentPrescriptionPopup(){
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
int CCHMSTreatmentPrescriptionPopup::OnCHMSTreatmentPrescriptionPopupListLoadData(){
	return 0;
}
