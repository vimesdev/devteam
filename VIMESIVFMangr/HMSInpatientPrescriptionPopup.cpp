#include "HMSInpatientPrescriptionPopup.h"
#include "HMSMainFrame.h"
#include "StringToken.h"
#include "GuiInputDataDialog.h"
#include "HMSInpatientPrescriptionDlg.h"
//#include "GuiTabCtrl.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientPrescriptionPopup* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnProdCountryChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnProdCountryChange();
} */
/*static void _OnProdCountrySetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnProdCountrySetfocus();} */ 
/*static void _OnProdCountryKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnProdCountryKillfocus();
} */
static int _OnProdCountryCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnProdCountryCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientPrescriptionPopup* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnIndicationLoadData();
}

static long _OnIndicationCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnIndicationCheckValue();
}

/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnUsageCheckValue();
} 
static void _OnPrincipleActiveSelectFnc(CWnd *pWnd){
	 ((CHMSInpatientPrescriptionPopup*)pWnd)->OnPrincipleActiveSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionPopup *pVw = (CHMSInpatientPrescriptionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionPopup *pVw = (CHMSInpatientPrescriptionPopup *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInpatientPrescriptionPopup *pVw = (CHMSInpatientPrescriptionPopup *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientPrescriptionPopup *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientPrescriptionPopup *)pWnd)->OnPatientPaidCheckValue();
} 
static int _OnAddHMSInpatientPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionPopup*)pWnd)->OnAddHMSInpatientPrescriptionPopup();
} 
static int _OnEditHMSInpatientPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionPopup*)pWnd)->OnEditHMSInpatientPrescriptionPopup();
} 
static int _OnDeleteHMSInpatientPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionPopup*)pWnd)->OnDeleteHMSInpatientPrescriptionPopup();
} 
static int _OnSaveHMSInpatientPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionPopup*)pWnd)->OnSaveHMSInpatientPrescriptionPopup();
} 
static int _OnCancelHMSInpatientPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSInpatientPrescriptionPopup*)pWnd)->OnCancelHMSInpatientPrescriptionPopup();
}

CHMSInpatientPrescriptionPopup::CHMSInpatientPrescriptionPopup()
{

	m_nDlgWidth = 600;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_szStorageKey.Empty();
	m_szOrderDate.Empty();
	m_nTotalCost=0;
	m_nPatientPaid=0;
	m_nOrderID = 0;

}

CHMSInpatientPrescriptionPopup::CHMSInpatientPrescriptionPopup(CWnd *pParent, int nMode):
	CGuiPopup(pParent)
{
	CGuiPopup::SetMode(nMode);

	m_nDlgWidth = 610;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_szStorageKey.Empty();
	m_szOrderDate.Empty();
	m_nTotalCost=0;
	m_nPatientPaid=0;
	m_nOrderID = 0;
	m_nLevel = 1;

}
CHMSInpatientPrescriptionPopup::~CHMSInpatientPrescriptionPopup(){
}
void CHMSInpatientPrescriptionPopup::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 5, 95, 30);
	m_wndStorage.Create(this,100, 5, 350, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 355, 5, 420, 30);
	m_wndOrderDate.Create(this,425, 5, 545, 30); 
	m_wndScaleDrug.Create(this,550, 5, 600, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 35, 95, 60);
	m_wndName.Create(this,100, 35, 350, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 355, 35, 420, 60);
	m_wndQty.Create(this,425, 35, 465, 60); 
	m_wndOnHandLabel.Create(this, _T("OnHand"), 470, 35, 545, 60);
	m_wndMaxQuantity.Create(this,550, 35, 600, 60); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 5, 65, 95, 90);
	m_wndIndication.Create(this,100, 65, 350, 90); 
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 355, 65, 420, 90);
	m_wndTimeDay.Create(this,425, 65, 465, 90); 
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 470, 65, 545, 90);
	m_wndTimeQty.Create(this,550, 65, 600, 90);
	m_wndUsageLabel.Create(this, _T("Usage"), 5, 95, 95, 120);
	m_wndUsage.Create(this,100, 95, 465, 120);
	m_wndSave.Create(this, _T("&Save"), 470, 95, 550, 120);
	m_wndClose.Create(this, _T("&X"), 555, 95, 600, 120);
}
void CHMSInpatientPrescriptionPopup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndStorage.SetCheckValue(true);
//	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetReadOnly(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetReadOnly(true);

	m_wndUsage.SetLimitText(254);
	m_wndUsage.SetCheckValue(true);
	m_wndUsage.SetAllowEmpty(true);
	m_wndUsage.SetInitCap(2);	
	
	m_wndDrugReplaced.ModifyStyle(WS_TABSTOP, 0);
	m_wndPrincipleActive.ModifyStyle(WS_TABSTOP, 0);
	

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndStorage.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);
	m_wndStorage.InsertColumn(3, _T("Depts"), CFMT_TEXT, 0);

	m_wndIndication.InsertColumn(0,_T("ID"), CFMT_NUMBER, 40);
	m_wndIndication.InsertColumn(1,_T("Desc"), CFMT_TEXT, 200);

//	m_wndName.SetSearchEx(TRUE);
	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName.InsertColumn(1, _T("Drug && Material Name"), CFMT_TEXT, 250);
	m_wndName.InsertColumn(2, _T("Principle Active"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 80);
	m_wndName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 75);
	m_wndName.Format(5, 1);
	m_wndName.SetSearchStyle(SS_COMPARE);
	
	/*
	m_hms_pharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
	m_hms_pharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 3); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_scalenumber"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong); 

	
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_org_id"), dfText, 32); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_user_id"), dfText, 32); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_objecttype"), dfText, 1); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_orderid"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_storage_id"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_country_id"), dfText, 3); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_qtyorder"), dfDouble); 
	m_hms_pharmaorder_lineTbl.AddField(_T("hpol_usage"), dfText, 258); 
	
	*/

	m_hms_pharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_storage_id"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmaorderTbl.AddField(_T("hpo_scaledrug"), dfInteger);
	m_hms_pharmaorderTbl.AddField(_T("hpo_batch_id"), dfLong );
	m_hms_pharmaorderTbl.AddField(_T("hpo_transaction_id"), dfLong );
	m_hms_pharmaorderTbl.AddField(_T("hpo_reference_id"), dfLong );
	m_hms_pharmaorderTbl.AddField(_T("hpo_refitem_id"), dfText, 15);
	m_hms_pharmaorderTbl.AddField(_T("hpo_feetype"), dfText, 2);
	m_hms_pharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_dousage"), dfText, 128); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_inpackage"), dfText, 1); 
	m_hms_pharmaorderTbl.AddField(_T("hpol_indication_id"), dfText, 10); 

	//CRect rect;
	//pMF->GetClientRect(&rect);
	//rect.right = rect.left +m_wndDrugOrder.GetWidth();
	////rect.bottom = rect.top + m_wndDrugOrder.GetHeight();
	//rect.top = rect.top + 210;
	//m_wndDrugOrder.Create(pMF, rect);
	//m_wndDrugOrder.ModifyStyle(0, WS_BORDER);
	//m_wndDrugOrder.ShowWindow(SW_HIDE);

	if (pMF->CheckPermission(_T("05.06")))
	{
		m_nLevel = 1;
	}
	if (pMF->CheckPermission(_T("05.07")))
	{
		m_nLevel = 2;
	}
	if (pMF->CheckPermission(_T("05.08")))
	{
		m_nLevel = 3;
	}


}
void CHMSInpatientPrescriptionPopup::OnSetWindowEvents(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndPrincipleActive.SetEvent(WE_CLICK, _OnPrincipleActiveSelectFnc);

	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMaxQuantity.SetEvent(WE_CHANGE, _OnMaxQuantityChangeFnc);
	//m_wndMaxQuantity.SetEvent(WE_SETFOCUS, _OnMaxQuantitySetfocusFnc);
	//m_wndMaxQuantity.SetEvent(WE_KILLFOCUS, _OnMaxQuantityKillfocusFnc);
	m_wndMaxQuantity.SetEvent(WE_CHECKVALUE, _OnMaxQuantityCheckValueFnc);
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);

	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
	//m_wndTimeDay.SetEvent(WE_CHANGE, _OnTimeDayChangeFnc);
	//m_wndTimeDay.SetEvent(WE_SETFOCUS, _OnTimeDaySetfocusFnc);
	//m_wndTimeDay.SetEvent(WE_KILLFOCUS, _OnTimeDayKillfocusFnc);
	m_wndTimeDay.SetEvent(WE_CHECKVALUE, _OnTimeDayCheckValueFnc);
	//m_wndTimeQty.SetEvent(WE_CHANGE, _OnTimeQtyChangeFnc);
	//m_wndTimeQty.SetEvent(WE_SETFOCUS, _OnTimeQtySetfocusFnc);
	//m_wndTimeQty.SetEvent(WE_KILLFOCUS, _OnTimeQtyKillfocusFnc);
	m_wndTimeQty.SetEvent(WE_CHECKVALUE, _OnTimeQtyCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	CString szSQL;
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CRecord rsm(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		szSQL.Format(_T("SELECT Count(*) FROM hms_object WHERE ho_type='S' AND ho_id='%s'"),
					 pMF->m_szObject);
		//_msg(_T("%s"), szSQL);
		rss.ExecSQL(szSQL);
		if (rss.GetIntValue() > 0)
		{
			rs.GetValue(_T("pms_servdefstock"), m_szStorageKey);
		}
		else
		{
			szSQL.Format(_T("SELECT Count(*) FROM hms_object ")\
						 _T("WHERE ho_type<>'S' AND ho_type in('D','P') AND ho_id='%s'"), pMF->m_szObject);
			rsm.ExecSQL(szSQL);

			if (rsm.GetIntValue() > 0)
			{
				rs.GetValue(_T("pms_milpoldefstock"), m_szStorageKey);
			}
			else
			{
				rs.GetValue(_T("pms_edefaultstockid"), m_szStorageKey);
			}
		}
	}

	CString tmpStr, stockid;
	tmpStr = pMF->m_szStorages;
	CStringToken tk(tmpStr);
	bool bFound = false;
	for (int i =0; i < tk.GetSize(); i++)
	{
		tk.GetAt(i, stockid);
		if(stockid == m_szStorageKey){
			bFound = true;
			break;
		}
	}
	if(!bFound)
		m_szStorageKey.Empty();

	
	CRecord rs2(&pMF->m_db);
	if(m_nOrderID > 0)
	{
		szSQL.Format(_T("SELECT distinct hpo_storage_id FROM hms_ipharmaorder WHERE hpo_docno=%ld and hpo_orderid=%ld and hpo_orderstatus in('O','S') "), pMF->m_nDocumentNo, m_nOrderID);
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
			rs2.GetValue(_T("hpo_storage_id"), m_szStorageKey);
	}
	
	if(m_nOrderID > 0)
	{
		GetDataToScreen();
	}
	else	
		SetMode(VM_ADD);	

}
void CHMSInpatientPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Text(pDX, m_wndScaleDrug.GetDlgCtrlID(), m_nScaleDrug);
}
void CHMSInpatientPrescriptionPopup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hpo_orderdate, hpo_storage_id, hpo_scaledrug, hpo_orderstatus FROM hms_ipharmaorder WHERE hpo_orderid=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
		rs.GetValue(_T("hpo_storage_id"), m_szStorageKey);
		rs.GetValue(_T("hpo_scaledrug"), m_nScaleDrug);
		rs.GetValue(_T("hpo_orderstatus"), szStatus);
		if(szStatus == _T("O"))
			SetMode(VM_ADDCHILD);
		else
			SetMode(VM_ADD);
	}
	else
		SetMode(VM_ADD);
}
void CHMSInpatientPrescriptionPopup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	

	m_hms_pharmaorderTbl.SetValue(_T("hpo_storage_id"), m_szStorageKey);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_bedid"), pMF->m_nBedID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_refidx"), pMF->m_nRefIndex);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_doctor"), pMF->m_szDoctor);
//	m_hms_pharmaorderTbl.SetValue(_T("hpo_object_id"), m_nObjectID);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("P"));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_scaledrug"), m_nScaleDrug);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_feetype"), _T("DT"));
	m_hms_pharmaorderTbl.SetValue(_T("hpo_reference_id"), 0);
	m_hms_pharmaorderTbl.SetValue(_T("hpo_batch_id"), 0);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_dousage"), m_szUsage);
	m_hms_pharmaorderTbl.SetValue(_T("hpol_inpackage"), _T("N"));
	m_hms_pharmaorderTbl.SetValue(_T("hpol_indication_id"), m_szIndicationKey);


}
void CHMSInpatientPrescriptionPopup::SetDefaultValues(){

	//m_szStorageKey.Empty();
	//m_szOrderDate.Empty();

	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_szUsage.Empty();	
	m_bPrincipleActive = FALSE;
	

}
int CHMSInpatientPrescriptionPopup::SetMode(int nMode){
	
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();
			if(m_szStorageKey.IsEmpty())
				m_wndStorage.SetFocus();
			else
				m_wndName.SetFocus();
			m_szOrderDate = pMF->GetSysDate();
			m_nScaleDrug = 0;
			//m_wndStorage.SetFocus();
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
//			m_wndName.Format(6, 2, 10, 2);
			m_szOrderDate = pMF->GetSysDate();
			m_wndName.SetFocus();
			m_wndStorage.EnableWindow(FALSE);
			m_wndScaleDrug.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, -1); 
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

void CHMSInpatientPrescriptionPopup::OnStorageSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientPrescriptionPopup::OnStorageSelendok()
{	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CString szDepts = m_wndStorage.GetCurrent(3);
	if(pMF->m_szDept ==  szDepts)
	{
		m_wndScaleDrug.EnableWindow(true);
	}
	else
		m_wndScaleDrug.EnableWindow(false);
	UpdateData(false);
}
/*void CHMSInpatientPrescriptionPopup::OnStorageSetfocus(){
	
}*/
/*void CHMSInpatientPrescriptionPopup::OnStorageKillfocus(){
	
}*/
long CHMSInpatientPrescriptionPopup::OnStorageLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	

	if(m_wndStorage.IsSearchKey() && str2long(m_szStorageKey) > 0){
		szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStorageKey));
	};

	if(pMF->GetModuleID() == _T("TM") && !pMF->m_szStorages.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "), pMF->m_szStorages);
	}

	
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM m_storagelist ") \
		_T("WHERE msl_type in('A','B','D') AND msl_isactive='Y' AND msl_category IN('S','A') %s ORDER BY msl_storage_id"), szWhere);
//_debug(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("msl_storage_id")), 
			rs.GetValue(_T("msl_name")), 
			rs.GetValue(_T("msl_type")), 
			rs.GetValue(_T("msl_depts")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSInpatientPrescriptionPopup::OnStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInpatientPrescriptionPopup::OnOrderDateChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnOrderDateSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnOrderDateKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSInpatientPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientPrescriptionPopup::OnNameSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(true);
	//m_szProdCountry = m_wndName.GetCurrent(1);
	m_szUnit = m_wndName.GetCurrent(3);
	m_nMaxQuantity = ToLong(m_wndName.GetCurrent(5));
	
	szSQL.Format(_T("SELECT distinct hpou_dousage, hpou_orderid, hpou_indication_id FROM hms_pharmaorder_usage WHERE hpou_user_id='%s' and hpou_product_id=%ld   ORDER BY hpou_orderid DESC"),
		pMF->GetCurrentUser(), str2long(m_szNameKey));	
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpou_dousage"), m_szUsage);
		rs.GetValue(_T("hpou_indication_id"), m_szIndicationKey);
	}
	UpdateData(false);

}
/*void CHMSInpatientPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CHMSInpatientPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CHMSInpatientPrescriptionPopup::OnNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	int nCount = 0;
	
	
	szWhere.AppendFormat(_T(" and msl_storage_id=%d "), str2int(m_szStorageKey));

	if(pMF->m_szObject != _T("7")){
	if (m_nLevel > 0)
		szWhere.AppendFormat(_T(" AND (product_priority >= %d OR product_priority is null) "), m_nLevel);
	}

	/*CString szText;
	m_wndName.GetWindowText(szText);
	if(!szText.IsEmpty() && !m_bPrincipleActive)
	{
		StringLower(szText, szText);
		szWhere.AppendFormat(_T(" and lower(product_name) like('%s%s%s') "), _T("%"), szText, _T("%"));
	}*/

_tprintf(_T("\r\n%s"), szWhere);

	return pMF->LoadProductItemList(&m_wndName, m_szNameKey, szWhere);
	
}
/*void CHMSInpatientPrescriptionPopup::OnNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUnitChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUnitSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUnitKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnProdCountryChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnProdCountrySetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnProdCountryKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnProdCountryCheckValue(){
	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnQtyChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnQtyCheckValue()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();

	if(m_nScaleDrug >0){
		m_nQty = m_nQty*m_nScaleDrug;
	}

	if(m_nQty <= 0 || m_nQty > m_nMaxQuantity)
	{
		return -1;
	}

	if (pMF->CheckPermission(_T("05.06")) || 
		pMF->CheckPermission(_T("05.07")) ||
		pMF->CheckPermission(_T("05.08")))
	{
		CRecord rs(&pMF->m_db);
		CString szSQL, tmpStr;
		long nMinQty, nMaxQty;

		szSQL.Format(_T("SELECT max(mp_qtymax) as maxqty FROM m_product WHERE mp_product_id=%ld and mp_qtymax > 0 "), str2long(m_szNameKey));
		rs.ExecSQL(szSQL);


		if (!rs.IsEOF())
		{
			//rs.GetValue(_T("MinQty"), nMinQty);
			nMinQty = 0;
			rs.GetValue(_T("MaxQty"), nMaxQty);
			
			if(nMaxQty <= 0) nMaxQty = 3000;

			if (m_nQty < nMinQty || m_nQty > nMaxQty)
			{
				tmpStr.Format(_T("This value is between [%d] and [%d]"), nMinQty, nMaxQty);
				m_wndQty.SetToolTipMessage(tmpStr);
				return -1;
			}
		}
	}

	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUsageKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnUsageCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szUsage.Trim();
	if(m_szUsage.IsEmpty() && pMF->IsRequireUsage(m_szNameKey))
		return -1;
	return 0;
} 

/*void CHMSInpatientPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
void CHMSInpatientPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientPrescriptionPopup::OnIndicationSelendok(){
	 UpdateData(true);
	m_szUsage = m_wndIndication.GetCurrent(1);

	UpdateData(false);

}
/*void CHMSInpatientPrescriptionPopup::OnIndicationSetfocus(){
	
}*/
/*void CHMSInpatientPrescriptionPopup::OnIndicationKillfocus(){
	
}*/
long CHMSInpatientPrescriptionPopup::OnIndicationLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	
	//szWhere.AppendFormat(_T(" and lower(ss_desc) like(chr(37)||lower('%s')||chr(37)) "), m_szIndicationKey);

	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY ss_index, name "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSInpatientPrescriptionPopup::OnIndicationAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTimeDayChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTimeDaySetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTimeDayKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnTimeDayCheckValue(){
	UpdateData(true);
	if(m_szUsage.IsEmpty())
	{
		m_szTimeDay.Empty();
		m_szTimeQty.Empty();
		m_wndUsage.SetFocus();
	}
	UpdateData(false);
	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnTimeQtyChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTimeQtySetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTimeQtyKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnTimeQtyCheckValue(){
	UpdateData(true);
	if(m_szUsage.IsEmpty() || m_szTimeQty.IsEmpty())
		return 0;
	#ifdef UNICODE
	CString tmpStr;
	StringLower(m_szUnit, tmpStr);
		m_szUsage.Format(_T("%s ngày %s l\x1EA7n m\x1ED7i l\x1EA7n %s %s"), m_wndIndication.GetCurrent(1),  m_szTimeDay, m_szTimeQty, tmpStr);
	#endif
	UpdateData(false);

	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnUsageKillfocus(){
	
} */

void CHMSInpatientPrescriptionPopup::OnPrincipleActiveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szNameKey.Empty();
	UpdateData(TRUE);
	if(m_bPrincipleActive)
		m_wndName.Format(5, 1, 10, 2);
	else
		m_wndName.Format(5, 1, 10, 1);
	m_wndName.SetFocus();
	UpdateData(FALSE);
}
void CHMSInpatientPrescriptionPopup::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSInpatientPrescriptionPopup();
} 

#include "HMSConfirmDialog.h"
#include ".\hmsInpatientPrescriptionpopup.h"

void CHMSInpatientPrescriptionPopup::OnConfirmSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(pMF->m_szDoctor == pMF->GetCurrentUser())
	{
	}
	else
	{
		if(pMF->m_bConfirm)
		{
			CHMSConfirmDialog dlg;
			dlg.m_szDoctor = pMF->m_szDoctor;

			if(dlg.DoModal() != IDOK)
				return;
		}
	}
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_orderstatus='S', hpo_doctor='%s' WHERE hpo_orderid=%ld and hpo_orderstatus='O' "), 
		pMF->m_szDoctor, m_nOrderID);
	_debug(_T("\t\n%s"), szSQL);
	pMF->ExecSQL(szSQL);

} 
void CHMSInpatientPrescriptionPopup::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	ClosePopup();
	
} 
/*void CHMSInpatientPrescriptionPopup::OnTotalCostChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTotalCostSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnTotalCostKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSInpatientPrescriptionPopup::OnPatientPaidChange(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnPatientPaidSetfocus(){
	
} */
/*void CHMSInpatientPrescriptionPopup::OnPatientPaidKillfocus(){
	
} */
int CHMSInpatientPrescriptionPopup::OnPatientPaidCheckValue()
{
	return 0;
} 
int CHMSInpatientPrescriptionPopup::OnAddHMSInpatientPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSInpatientPrescriptionPopup::OnEditHMSInpatientPrescriptionPopup()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInpatientPrescriptionPopup::OnDeleteHMSInpatientPrescriptionPopup(){
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
 		OnCancelHMSInpatientPrescriptionPopup(); 
 	}
	return 0;
}
int CHMSInpatientPrescriptionPopup::OnSaveHMSInpatientPrescriptionPopup()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 

	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	m_hms_pharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);

 	if(!IsValidateData()) 
 		return -1; 
	
 	CString szSQL, szSQL2; 
//	int ret;
	int nStorageID;
	long nOID = 0;
	CRecord rs(&pMF->m_db);
	nStorageID = ToInt(m_szStorageKey);
	if(nStorageID <= 0)
		return -1;
	/*
	szSQL.Format(_T("hms_inpharmaorder_create(%s) "), m_hms_pharmaorderTbl.FormatSQL());
	nOID = str2long(pMF->ExecDML(szSQL));

	if(nOID <= 0)
	{
		ShowMessageBox(_T("Cannot add order"));
		return -1;
	}

	m_hms_pharmaorder_lineTbl.SetValue(_T("hpol_orderid"), nOID);

	szSQL.Format(_T("hms_inpharmaorder_addline(%s) "), m_hms_pharmaorder_lineTbl.FormatSQL());
_tprintf(_T("%s"), szSQL);
	long res = str2long(pMF->ExecDML(szSQL));
	if(res <= 0)
	{
		ShowMessageBox(_T("Cannot add item"));
		return -1;
	}


	if(nOID != m_nOrderID)
	{		
		m_nOrderID = nOID;
		CString tmpStr;
		tmpStr.Format(_T("%ld"),m_nOrderID);
		if(m_szOrders.Find(tmpStr) == -1)
		{
			m_szOrders.AppendFormat(_T(",%ld"), m_nOrderID);
		}
		((CHMSInpatientPrescriptionDlg*)m_wndParent)->m_nOrderID = m_nOrderID;
		((CHMSInpatientPrescriptionDlg*)m_wndParent)->OnOrderListLoadData();		
	}	

	*/
	szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE(%s) "), m_hms_pharmaorderTbl.FormatSQL());
	nOID = str2long(pMF->ExecDML(szSQL));
	_tprintf(_T("\r\n%ld: %ld"), nOID, m_nOrderID);

	if(nOID > 0)
	{
		SetMode(VM_ADDCHILD);
		if(nOID != m_nOrderID){
			m_nOrderID = nOID;
			GetDataToScreen();
			((CHMSInpatientPrescriptionDlg*)m_wndParent)->Refresh(m_nOrderID);
		}

		((CHMSInpatientPrescriptionDlg*)m_wndParent)->m_nOrderID = m_nOrderID;
		((CHMSInpatientPrescriptionDlg*)m_wndParent)->OnDrugListLoadData();
	}
	return m_nOrderID; 

}
int CHMSInpatientPrescriptionPopup::OnCancelHMSInpatientPrescriptionPopup(){
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
int CHMSInpatientPrescriptionPopup::OnHMSInpatientPrescriptionPopupListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CHMSInpatientPrescriptionPopup, CGuiPopup)
	
END_MESSAGE_MAP()

void CHMSInpatientPrescriptionPopup::ShowPopup(CWnd *pWndRef, int nShow){
	CGuiPopup::ShowPopup(pWndRef, nShow);
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
//	szSQL.Format(_T("SELECT count(*) FROM hms_ipharmaorder WHERE hpo_docno = %ld  "), pMF->m_nDocumentNo);
//	rs.ExecSQL(szSQL);
	//if(rs.GetIntValue()>0)
	//{		
	//	//m_wndDrugOrder.BringWindowToTop();
	//	//m_wndDrugOrder.ShowWindow(SW_SHOW);
	//	m_wndDrugOrder.OnListLoadData();		
	//}
	//
} 
void CHMSInpatientPrescriptionPopup::ClosePopup()
{
	CGuiPopup::ClosePopup();
	return;
	AfxGetApp()->BeginWaitCursor();
	
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CStringArray dictionary;
	////m_wndUsage.GetDictionary(dictionary);
	//szSQL.Format(_T("DELETE FROM hms_pharma_usage WHERE lower(hpu_userid)=lower('%s') "), pMF->GetCurrentUser());
	//pMF->ExecSQL(szSQL);
	//for (int i = 0; i < dictionary.GetCount(); i++)
	//{
	//	szSQL.Format(_T("INSERT INTO hms_pharma_usage(hpu_userid, hpu_desc) VALUES('%s', '%s')"),
	//		pMF->GetCurrentUser(), dictionary[i]);
	//	pMF->ExecSQL(szSQL);
	//}

	AfxGetApp()->EndWaitCursor();

	
	//if(m_wndDrugOrder.IsWindowVisible()){
	//	m_wndDrugOrder.ShowWindow(SW_HIDE);		
	//}

	((CHMSInpatientPrescriptionDlg*) GetParent())->m_nOrderID = m_nOrderID;
	((CHMSInpatientPrescriptionDlg*) GetParent())->OnAfterClosePopup();
	((CHMSInpatientPrescriptionDlg*) GetParent())->SetMode(VM_VIEW);
	CGuiPopup::ClosePopup();

	
	((CHMSInpatientPrescriptionDlg*) GetParent())->m_wndSend.SetFocus();
		

}


int CHMSInpatientPrescriptionPopup::OnIndicationCheckValue()
{
	if(m_wndIndication.GetWindowTextLength() <= 0)
	{
		m_wndUsage.SetFocus();
	}
	return 0;
}