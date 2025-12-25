#include "HMSTreatmentPrescriptionPopup.h"
#include "MainFrm.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopup* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnStorageAddNew();
}*/
static void _OnInsWarehouseSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnInsWarehouseSelect();
}
static void _OnServiceWarehouseSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnServiceWarehouseSelect();
}
static void _OnOutPrescriptionSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnOutPrescriptionSelect();
}
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUnitCheckValue();
} 
static void _OnGenericSearchSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnGenericSearchSelect();
}
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnNumDayChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNumDayChange();
} */
/*static void _OnNumDaySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNumDaySetfocus();} */ 
/*static void _OnNumDayKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNumDayKillfocus();
} */
static int _OnNumDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnNumDayCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopup* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnDosageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnDosageChange();
} */
/*static void _OnDosageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnDosageSetfocus();} */ 
/*static void _OnDosageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnDosageKillfocus();
} */
static int _OnDosageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnDosageCheckValue();
} 
/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnSpeedCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopup *pVw = (CHMSTreatmentPrescriptionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopup *pVw = (CHMSTreatmentPrescriptionPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnAddHMSTreatmentPrescriptionPopup();
} 
static int _OnEditHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnEditHMSTreatmentPrescriptionPopup();
} 
static int _OnDeleteHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnDeleteHMSTreatmentPrescriptionPopup();
} 
static int _OnSaveHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnSaveHMSTreatmentPrescriptionPopup();
} 
static int _OnCancelHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup*)pWnd)->OnCancelHMSTreatmentPrescriptionPopup();
} 
CHMSTreatmentPrescriptionPopup::CHMSTreatmentPrescriptionPopup(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSTreatmentPrescriptionPopup::~CHMSTreatmentPrescriptionPopup(){
}
void CHMSTreatmentPrescriptionPopup::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Kho"), 5, 5, 125, 30);
	m_wndStorage.Create(this,130, 5, 460, 30); 
	m_wndInsWarehouse.Create(this, _T("Kho BH"), 465, 5, 535, 30);
	m_wndServiceWarehouse.Create(this, _T("Kho d?ch v?"), 540, 5, 625, 30);
	m_wndOutPrescription.Create(this, _T("Ðon ngo?i trú"), 630, 5, 780, 30);
	m_wndNameLabel.Create(this, _T("Tên thu?c/HL"), 5, 35, 125, 60);
	m_wndName.Create(this,130, 35, 460, 60); 
	m_wndUnitLabel.Create(this, _T("Unit"), 465, 35, 535, 60);
	m_wndUnit.Create(this,540, 35, 625, 60); 
	m_wndGenericSearch.Create(this, _T("Tìm theo tên ho?t ch?t"), 630, 35, 780, 60);
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 65, 125, 90);
	m_wndQty.Create(this,130, 65, 215, 90); 
	m_wndMaxQuantityLabel.Create(this, _T("On Hand"), 220, 65, 320, 90);
	m_wndMaxQuantity.Create(this,325, 65, 460, 90); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 465, 65, 535, 90);
	m_wndFromDate.Create(this,540, 65, 625, 90); 
	m_wndNumDayLabel.Create(this, _T("NumDay"), 630, 65, 700, 90);
	m_wndNumDay.Create(this,705, 65, 780, 90); 
	m_wndIndicationLabel.Create(this, _T("Ðu?ng dùng"), 5, 95, 125, 120);
	m_wndIndication.Create(this,130, 95, 215, 120); 
	m_wndDosageLabel.Create(this, _T("Dosage"), 220, 95, 320, 120);
	m_wndDosage.Create(this,325, 95, 460, 120); 
	m_wndSpeedLabel.Create(this, _T("T?c d?"), 465, 95, 535, 120);
	m_wndSpeed.Create(this,540, 95, 780, 120); 
	m_wndUsageLabel.Create(this, _T("UsageLabel"), 5, 125, 125, 150);
	m_wndUsage.Create(this,130, 125, 625, 150); 
	m_wndSave.Create(this, _T("&Save"), 630, 125, 700, 150);
	m_wndClose.Create(this, _T("&X"), 705, 125, 780, 150);

}
void CHMSTreatmentPrescriptionPopup::OnInitializeComponents(){
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
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndNumDay.SetLimitText(16);
	m_wndNumDay.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(1024);
	m_wndDosage.SetLimitText(35);
	m_wndDosage.SetCheckValue(true);
	m_wndSpeed.SetLimitText(1024);
	m_wndSpeed.SetCheckValue(true);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetCheckValue(true);







}
void CHMSTreatmentPrescriptionPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndInsWarehouse.SetEvent(WE_CLICK, _OnInsWarehouseSelectFnc);
	m_wndServiceWarehouse.SetEvent(WE_CLICK, _OnServiceWarehouseSelectFnc);
	m_wndOutPrescription.SetEvent(WE_CLICK, _OnOutPrescriptionSelectFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndGenericSearch.SetEvent(WE_CLICK, _OnGenericSearchSelectFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndNumDay.SetEvent(WE_CHANGE, _OnNumDayChangeFnc);
	//m_wndNumDay.SetEvent(WE_SETFOCUS, _OnNumDaySetfocusFnc);
	//m_wndNumDay.SetEvent(WE_KILLFOCUS, _OnNumDayKillfocusFnc);
	m_wndNumDay.SetEvent(WE_CHECKVALUE, _OnNumDayCheckValueFnc);
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	//m_wndDosage.SetEvent(WE_CHANGE, _OnDosageChangeFnc);
	//m_wndDosage.SetEvent(WE_SETFOCUS, _OnDosageSetfocusFnc);
	//m_wndDosage.SetEvent(WE_KILLFOCUS, _OnDosageKillfocusFnc);
	m_wndDosage.SetEvent(WE_CHECKVALUE, _OnDosageCheckValueFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentPrescriptionPopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentPrescriptionPopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentPrescriptionPopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentPrescriptionPopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentPrescriptionPopupFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSTreatmentPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndInsWarehouse.GetDlgCtrlID(), m_bInsWarehouse);
	DDX_Check(pDX, m_wndServiceWarehouse.GetDlgCtrlID(), m_bServiceWarehouse);
	DDX_Check(pDX, m_wndOutPrescription.GetDlgCtrlID(), m_bOutPrescription);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Check(pDX, m_wndGenericSearch.GetDlgCtrlID(), m_bGenericSearch);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Text(pDX, m_wndNumDay.GetDlgCtrlID(), m_nNumDay);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndDosage.GetDlgCtrlID(), m_szDosage);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);

}
void CHMSTreatmentPrescriptionPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("InsWarehouse")] =  m_bInsWarehouse;
	m_jData[_T("ServiceWarehouse")] =  m_bServiceWarehouse;
	m_jData[_T("OutPrescription")] =  m_bOutPrescription;
	m_jData[_T("Name")] =  m_szNameKey;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("GenericSearch")] =  m_bGenericSearch;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("MaxQuantity")] =  m_nMaxQuantity;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("NumDay")] =  m_nNumDay;
	m_jData[_T("Indication")] =  m_szIndicationKey;
	m_jData[_T("Dosage")] =  m_szDosage;
	m_jData[_T("Speed")] =  m_szSpeed;
	m_jData[_T("Usage")] =  m_szUsage;
	}
	else
	{
			
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("InsWarehouse")].GetValue(m_bInsWarehouse);
	m_jData[_T("ServiceWarehouse")].GetValue(m_bServiceWarehouse);
	m_jData[_T("OutPrescription")].GetValue(m_bOutPrescription);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("GenericSearch")].GetValue(m_bGenericSearch);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("MaxQuantity")].GetValue(m_nMaxQuantity);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("NumDay")].GetValue(m_nNumDay);
	m_jData[_T("Indication")].GetValue(m_szIndicationKey);
	m_jData[_T("Dosage")].GetValue(m_szDosage);
	m_jData[_T("Speed")].GetValue(m_szSpeed);
	m_jData[_T("Usage")].GetValue(m_szUsage);
	}

}
void CHMSTreatmentPrescriptionPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentPrescriptionPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentPrescriptionPopup::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_bInsWarehouse=FALSE;
	m_bServiceWarehouse=FALSE;
	m_bOutPrescription=FALSE;
	m_szNameKey.Empty();
	m_szUnit.Empty();
	m_bGenericSearch=FALSE;
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szFromDate.Empty();
	m_nNumDay=0;
	m_szIndicationKey.Empty();
	m_szDosage.Empty();
	m_szSpeed.Empty();
	m_szUsage.Empty();

}
int CHMSTreatmentPrescriptionPopup::SetMode(int nMode){
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
void CHMSTreatmentPrescriptionPopup::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup::OnStorageSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionPopup::OnStorageSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopup::OnStorageKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopup::OnStorageLoadData(){
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
/*void CHMSTreatmentPrescriptionPopup::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSTreatmentPrescriptionPopup::OnInsWarehouseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSTreatmentPrescriptionPopup::OnServiceWarehouseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSTreatmentPrescriptionPopup::OnOutPrescriptionSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSTreatmentPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup::OnNameSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopup::OnNameLoadData(){
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
/*void CHMSTreatmentPrescriptionPopup::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnUnitChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnUnitSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnUnitKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnUnitCheckValue(){
	return 0;
} 
	void CHMSTreatmentPrescriptionPopup::OnGenericSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSTreatmentPrescriptionPopup::OnQtyChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup::OnFromDateChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnFromDateSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnFromDateKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup::OnNumDayChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnNumDaySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnNumDayKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnNumDayCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup::OnIndicationSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionPopup::OnIndicationSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopup::OnIndicationKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopup::OnIndicationLoadData(){
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
/*void CHMSTreatmentPrescriptionPopup::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnDosageChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnDosageSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnDosageKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnDosageCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup::OnSpeedChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnSpeedSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnSpeedKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnSpeedCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup::OnUsageKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup::OnUsageCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionPopup::OnAddHMSTreatmentPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentPrescriptionPopup::OnEditHMSTreatmentPrescriptionPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionPopup::OnDeleteHMSTreatmentPrescriptionPopup(){
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
 		OnCancelHMSTreatmentPrescriptionPopup();
 	}
	return 0;
}
int CHMSTreatmentPrescriptionPopup::OnSaveHMSTreatmentPrescriptionPopup(){
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
 		//OnHMSTreatmentPrescriptionPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentPrescriptionPopup::OnCancelHMSTreatmentPrescriptionPopup(){
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
int CHMSTreatmentPrescriptionPopup::OnHMSTreatmentPrescriptionPopupListLoadData(){
	return 0;
}
