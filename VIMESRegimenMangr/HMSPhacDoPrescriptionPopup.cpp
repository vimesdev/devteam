#include "HMSPhacDoPrescriptionPopup.h"	
#include "HMSMainFrame.h"	
#include "StringToken.h"	
#include "GuiInputDataDialog.h"	
#include "GuiTabCtrl.h"	
#include "HMSPhacDoApplyToPatientDlg.h"
#include "HMSTreatmentTrackingDialog.h"
#include "PMInteractionNotifier_V2.h"

static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){	
	((CHMSPhacDoPrescriptionPopup* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);	
} 	
static void _OnStorageSelendokFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnStorageSelendok();	
}	
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnStorageKillfocus();	
}*/	
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnStorageKillfocus();	
}*/	
static long _OnStorageLoadDataFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnStorageLoadData();	
}	
/*static void _OnStorageAddNewFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnStorageAddNew();	
}*/	
static void _OnServiceWarehouseSelectFnc(CWnd *pWnd){	
	 ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnServiceWarehouseSelect();	
} 	
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){	
	((CHMSPhacDoPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);	
} 	
static void _OnNameSelendokFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnNameSelendok();	
}	
/*static void _OnNameSetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnNameKillfocus();	
}*/	
/*static void _OnNameKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnNameKillfocus();	
}*/	
static long _OnNameLoadDataFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnNameLoadData();	
}	
/*static void _OnNameAddNewFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnNameAddNew();	
}*/	
static void _OnGenericSearchSelectFnc(CWnd *pWnd){	
	 ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnGenericSearchSelect();	
}	
/*static void _OnUnitChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUnitChange();	
} */	
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */ 	
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUnitKillfocus();	
} */	
static int _OnUnitCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUnitCheckValue();	
} 	
/*static void _OnQtyChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnQtyChange();	
} */	
/*static void _OnQtySetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 	
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnQtyKillfocus();	
} */	
static int _OnQtyCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnQtyCheckValue();	
} 	
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnMaxQuantityChange();	
} */	
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 	
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();	
} */	
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();	
} 	
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){	
	((CHMSPhacDoPrescriptionPopup* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);	
} 	
static void _OnIndicationSelendokFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnIndicationSelendok();	
}	
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnIndicationKillfocus();	
}*/	
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnIndicationKillfocus();	
}*/	
static long _OnIndicationLoadDataFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnIndicationLoadData();	
}	
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnIndicationAddNew();	
}*/	
static long _OnIndicationCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnIndicationCheckValue();	
}	
/*static void _OnSpeedChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnSpeedChange();	
} */	
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnSpeedSetfocus();} */ 	
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnSpeedKillfocus();	
} */	
static int _OnSpeedCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnSpeedCheckValue();	
} 	
/*static void _OnUsageChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUsageChange();	
} */	
static void _OnUsageSetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUsageSetfocus();}	
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUsageKillfocus();	
} */	
static int _OnUsageCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnUsageCheckValue();	
} 	
static void _OnSaveSelectFnc(CWnd *pWnd){	
	CHMSPhacDoPrescriptionPopup *pVw = (CHMSPhacDoPrescriptionPopup *)pWnd;	
	pVw->OnSaveSelect();	
} 	
static void _OnCloseSelectFnc(CWnd *pWnd){	
	CHMSPhacDoPrescriptionPopup *pVw = (CHMSPhacDoPrescriptionPopup *)pWnd;	
	pVw->OnCloseSelect();	
} 	
static void _OnNotDailyOrderSelectFnc(CWnd *pWnd){	
	 ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnNotDailyOrderSelect();	
}	
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeDayChange();	
} */	
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeDaySetfocus();} */ 	
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeDayKillfocus();	
} */	
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeDayCheckValue();	
} 	
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeQtyChange();	
} */	
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeQtySetfocus();} */ 	
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){	
	((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeQtyKillfocus();	
} */	
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){	
	return ((CHMSPhacDoPrescriptionPopup *)pWnd)->OnTimeQtyCheckValue();	
} 	
static void _OnInsuranceUnpaidSelectFnc(CWnd *pWnd){	
	 ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnInsuranceUnpaidSelect();	
}	
static int _OnAddHMSPhacDoPrescriptionPopupFnc(CWnd *pWnd){	
	 return ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnAddHMSPhacDoPrescriptionPopup();	
} 	
static int _OnEditHMSPhacDoPrescriptionPopupFnc(CWnd *pWnd){	
	 return ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnEditHMSPhacDoPrescriptionPopup();	
} 	
static int _OnDeleteHMSPhacDoPrescriptionPopupFnc(CWnd *pWnd){	
	 return ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnDeleteHMSPhacDoPrescriptionPopup();	
} 	
static int _OnSaveHMSPhacDoPrescriptionPopupFnc(CWnd *pWnd){	
	 return ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnSaveHMSPhacDoPrescriptionPopup();	
} 	
static int _OnCancelHMSPhacDoPrescriptionPopupFnc(CWnd *pWnd){	
	 return ((CHMSPhacDoPrescriptionPopup*)pWnd)->OnCancelHMSPhacDoPrescriptionPopup();	
}	
/*	
CHMSPhacDoPrescriptionPopup::CHMSPhacDoPrescriptionPopup()	
{	
	m_nDlgWidth = 600;	
	m_nDlgHeight = 155;	
	SetDefaultValues();	
	m_szStorageKey.Empty();	
	m_szOrderDate.Empty();	
	m_nOrderID = 0;	
}	
*/	
CHMSPhacDoPrescriptionPopup::CHMSPhacDoPrescriptionPopup(CWnd *pParent, int nMode, int x, int y):	
	CGuiDialog(pParent)	
{	
		
	CGuiDialog::SetMode(nMode);	
		
	SetDefaultValues();	
	m_szStorageKey.Empty();	
	m_szOrderDate.Empty();	
	m_nOrderID = 0;	
	m_nLevel1  = 0;	
	m_nLevel2  = 0;	
	m_nLevel3  = 0;	
	m_bInPackage = false;	
	m_bIsReq = false;	
	m_bNotDailyOrder= FALSE;
	m_bServiceWarehouse = FALSE;	
	m_bGenericSearch = FALSE;	
	m_nStorageId = 0;	
	m_nProductId = 0;	
	m_nX = x;	
	m_nY = y;	
	m_nDlgWidth = 775;	
	m_nDlgHeight = 225;	
	SetAutoCenter(false);	
	SetAutoCalcSize(false);	
}	
CHMSPhacDoPrescriptionPopup::~CHMSPhacDoPrescriptionPopup(){	
}
void CHMSPhacDoPrescriptionPopup::OnCreateComponents(){
	m_wndPrescriptionInput.Create(this, _T("Nh\x1EADp thu\x1ED1\x63, v\x1EADt t\x1B0"), 5, 5, 750, 180);	
	m_wndStorageLabel.Create(this, _T("Kho"), 10, 30, 130, 55);	
	m_wndStorage.Create(this,136, 30, 386, 55); 	
	m_wndServiceWarehouse.Create(this, _T("Kho quầy"), 390, 30, 510, 55);	
	m_wndNameLabel.Create(this, _T("Tên thuốc/hàm lượng"), 10, 60, 130, 85);	
	m_wndName.Create(this,136, 60, 386, 85); 	
	m_wndGenericSearch.Create(this, _T("Tìm theo hoạt chất"), 10, 150, 220, 175);	
	m_wndUnit.Create(this,610, 60, 680, 85); 	
	m_wndQuantityLabel.Create(this, _T("Quantity"), 390, 60, 470, 85);	
	m_wndQty.Create(this,475, 60, 530, 85); 	
	m_wndMaxQuantity.Create(this,535, 60, 600, 85); 	
	m_wndIndicationLabel.Create(this, _T("Indication"), 10, 90, 130, 115);	
	m_wndIndication.Create(this,135, 90, 220, 115);
	
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 225, 90, 295, 115);	
	m_wndTimeDay.Create(this,300, 90, 385, 115); 	
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 390, 90, 470, 115);	
	m_wndTimeQty.Create(this,475, 90, 530, 115); 	
	

	m_wndUsageLabel.Create(this, _T("Usage"), 10, 121, 130, 146);	
	m_wndUsage.Create(this,135, 120, 680, 145); 



	m_wndSpeedLabel.Create(this, _T("Tốc độ"), 225, 150, 325, 175);	
	m_wndSpeed.Create(this,330, 150, 465, 175); 

	
	m_wndSave.Create(this, _T("&Save"), 555, 150, 655, 175);	
	m_wndClose.Create(this, _T("&X"), 660, 150, 745, 175);	
	m_wndNotDailyOrder.Create(this, _T("Không lĩnh dự trù"), 535, 30, 680, 55);
	m_wndInsuranceUnpaid.Create(this, _T("Insurance Unpaid"), 535, 90, 680, 115);
	m_wndNotDailyOrder.ModifyStyle(WS_TABSTOP, 0);
	m_wndInsuranceUnpaid.ModifyStyle(WS_TABSTOP, 0);
	
}
void CHMSPhacDoPrescriptionPopup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndStorage.SetCheckValue(true);
//	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndQty.SetNumberDecimal(0);

	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetReadOnly(true);
	m_wndUsage.SetLimitText(254);
	m_wndUnit.SetReadOnly(TRUE);
	
	//m_wndUsage.SetCheckValue(true);
	m_wndUsage.SetInitCap(2);	
	m_wndGenericSearch.ModifyStyle(WS_TABSTOP, 0);
	m_wndServiceWarehouse.ModifyStyle(WS_TABSTOP, 0);
	//m_wndSpeed.ModifyStyle(WS_TABSTOP, 0);
	m_wndIndication.SetCheckValue(true);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndStorage.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

	m_wndIndication.InsertColumn(0,_T("ID"), CFMT_NUMBER, 40);
	m_wndIndication.InsertColumn(1,_T("Desc"), CFMT_TEXT, 200);
	m_wndIndication.Format(2, 0, 10, 1);
	
	//m_wndName.SetSearchEx(TRUE);
	
	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndName.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndName.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndName.InsertColumn(7, _T(""), CFMT_TEXT, 0);//Saleprice2
	m_wndName.InsertColumn(8, _T(""), CFMT_TEXT, 0);//oxy
	m_wndName.InsertColumn(9, _T(""), CFMT_TEXT, 0);//producttype
	m_wndName.InsertColumn(10, _T(""), CFMT_TEXT, 0);//org
	m_wndName.Format(11, 1);
	m_wndName.SetSearchStyle(SS_LIKE);
	
	m_hms_ipharmaorderTbl.SetTableName(_T("hms_ipharmaorder"));
	m_hms_ipharmaorderTbl.AddField(_T("hpo_org_id"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_user_id"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_treatidx"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_ordertype"), dfText, 3); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_objecttype"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpo_objectid"), dfInteger); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_product_id"), dfLong); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_qtyorder"), dfFloat); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_speed"), dfText, 32); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_usage"), dfText, 128);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_hoursqty"), dfFloat); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_pointoxy"), dfText,2);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_indication"), dfInteger);
	m_hms_ipharmaorderTbl.AddField(_T("hpol_inspaid"), dfText,1);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_outpatient_order"), dfText,1);
	


	m_nLevel1 = 1;
	m_nLevel2 = 0;
	m_nLevel3 = 0;
	if (pMF->CheckPermission(_T("05.06")))
	{
		m_nLevel1 = 1;
	}
	if (pMF->CheckPermission(_T("05.07")))
	{
		m_nLevel2 = 2;
	}
	if (pMF->CheckPermission(_T("05.08")))
	{
		m_nLevel3 = 3;
	}

}
void CHMSPhacDoPrescriptionPopup::OnSetWindowEvents(){
	
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndServiceWarehouse.SetEvent(WE_CLICK, _OnServiceWarehouseSelectFnc);
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
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	m_wndNotDailyOrder.SetEvent(WE_CLICK, _OnNotDailyOrderSelectFnc);
	//m_wndTimeDay.SetEvent(WE_CHANGE, _OnTimeDayChangeFnc);
	//m_wndTimeDay.SetEvent(WE_SETFOCUS, _OnTimeDaySetfocusFnc);
	//m_wndTimeDay.SetEvent(WE_KILLFOCUS, _OnTimeDayKillfocusFnc);
	m_wndTimeDay.SetEvent(WE_CHECKVALUE, _OnTimeDayCheckValueFnc);
	//m_wndTimeQty.SetEvent(WE_CHANGE, _OnTimeQtyChangeFnc);
	//m_wndTimeQty.SetEvent(WE_SETFOCUS, _OnTimeQtySetfocusFnc);
	//m_wndTimeQty.SetEvent(WE_KILLFOCUS, _OnTimeQtyKillfocusFnc);
	m_wndTimeQty.SetEvent(WE_CHECKVALUE, _OnTimeQtyCheckValueFnc);
	m_wndInsuranceUnpaid.SetEvent(WE_CLICK, _OnInsuranceUnpaidSelectFnc);

	
	int nMode = GetMode();
	
	m_szOrderDate = m_szTreatDate;

	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);
	
	if(pMF->GetObjectType() == _T("S") || nMode == VM_EDIT)
	{
		m_wndServiceWarehouse.EnableWindow(FALSE);
		m_wndServiceWarehouse.ShowWindow(SW_HIDE);
		
	}
	CString szSQL;
	szSQL.Format(_T(" SELECT msd_storage_id") \
		_T(" FROM M_STORAGE_DEFAULT") \
_T(" WHERE MSD_OBJECT_ID = %d ") \
_T(" ORDER BY msd_department_id,") \
_T("   msd_storage_id"), pMF->GetObjectID());
	_tprintf(_T("%s"),szSQL);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	m_szStorageObjects.Format(_T("-1"));
	m_szStorageCabinets.Format(_T("-1"));
	while(!rs.IsEOF())
	{
		int storage_id;
		rs.GetValue(_T("msd_storage_id"), storage_id);
		m_szStorageObjects.AppendFormat(_T(",%d"), storage_id);
		rs.MoveNext();
	}
	szSQL.Format(_T("select msl_storage_id from m_storagelist where msl_type='C' and msl_dept_id ='%s' ") ,pMF->GetCurrentDepartmentID() );
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		int storage_id;
		rs.GetValue(_T("msl_storage_id"), storage_id);
		m_szStorageObjects.AppendFormat(_T(",%d"), storage_id);
		m_szStorageCabinets.AppendFormat(_T(",%d"), storage_id);
		rs.MoveNext();
	}


}
void CHMSPhacDoPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndServiceWarehouse.GetDlgCtrlID(), m_bServiceWarehouse);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Check(pDX, m_wndGenericSearch.GetDlgCtrlID(), m_bGenericSearch);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Check(pDX, m_wndNotDailyOrder.GetDlgCtrlID(), m_bNotDailyOrder);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Check(pDX, m_wndInsuranceUnpaid.GetDlgCtrlID(), m_bInsuranceUnpaid);

}
void CHMSPhacDoPrescriptionPopup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hpo_orderdate, hpo_storage_id,") \
_T("   hpou_dousage,") \
_T("   hpou_speed,") \
_T("   hpou_qtyorder,hpou_indication_id") \
_T(" FROM hms_ipharmaorder,") \
_T("   hms_ipharmaorder_usage") \
_T(" WHERE hpo_orderid   = hpou_orderid") \
_T(" AND hpou_orderid    = %ld") \
_T(" AND hpou_product_id =%ld"), m_nOrderID, m_nProductId);

	rs.ExecSQL(szSQL);
	UpdateData(TRUE);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
		rs.GetValue(_T("hpo_storage_id"), m_nStorageId);
		rs.GetValue(_T("hpou_qtyorder"), m_nQty);
		rs.GetValue(_T("hpou_dousage"), m_szUsage);
		rs.GetValue(_T("hpou_speed"), m_szSpeed);
		rs.GetValue(_T("hpou_indication_id"), m_szIndicationKey);

		UpdateData(FALSE);
		m_szStorageKey.Format(_T("%d"), m_nStorageId);
		m_szNameKey.Format(_T("%ld"), m_nProductId);
		OnStorageLoadData();
		OnNameLoadData();
		szSQL.Format(_T("GET_QTYAVAIABLEONHAND(%d, %ld)"), m_nStorageId, m_nProductId);
		float max_qty = str2float(pMF->ExecDML(szSQL));
		m_nMaxQuantity = max_qty+m_nQty;
	}
	

}
void CHMSPhacDoPrescriptionPopup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_storage_id"), m_szStorageKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_bedid"), pMF->m_nBedID);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_refidx"), pMF->m_nRefIndex);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_treatidx"), m_nTreatIdx);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_doctor"), pMF->GetCurrentUser());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderstatus"), _T("O"));
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_ordertype"), _T("P"));
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_objecttype"), pMF->GetObjectType());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_objectid"), pMF->GetObjectID());
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_speed"), m_szSpeed);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_usage"), m_szUsage);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_hoursqty"),m_nHoursqty ); 
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_pointoxy"), m_szPointOxy);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_indication"), str2int(m_szIndicationKey));
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_inspaid"), m_bInsuranceUnpaid?_T("N"):_T("Y"));
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_outpatient_order"), m_bNotDailyOrder?_T("Y"):_T("N"));
}
void CHMSPhacDoPrescriptionPopup::SetDefaultValues(){

	m_szNameKey.Empty();
	m_bGenericSearch=FALSE;
	m_szUnit.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szSpeed.Empty();
	m_szUsage.Empty();
	//m_bNotDailyOrder=FALSE;
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_bInsuranceUnpaid=FALSE;

}
int CHMSPhacDoPrescriptionPopup::SetMode(int nMode){
	
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();
			m_wndStorage.SetFocus();
//			m_szOrderDate = pMF->GetSysDate();
		//	m_wndStorage.SetFocus();
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
//			m_szOrderDate = pMF->GetSysDate();
			m_wndName.SetFocus();
//			m_wndStorage.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndStorage.EnableWindow(FALSE);
			m_wndName.EnableWindow(FALSE);
			m_wndQty.EnableWindow(FALSE);
			m_wndUsage.SetFocus();
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

void CHMSPhacDoPrescriptionPopup::OnStorageSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoPrescriptionPopup::OnStorageSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	if(GetMode() != VM_EDIT)
	{
		m_szNameKey.Empty();
		CGuiDialog::SetMode(VM_ADD);
	}
 
}
/*void CHMSPhacDoPrescriptionPopup::OnStorageSetfocus(){
	
}*/
/*void CHMSPhacDoPrescriptionPopup::OnStorageKillfocus(){
	
}*/
long CHMSPhacDoPrescriptionPopup::OnStorageLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStorageObject;
	UpdateData(TRUE);

	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
		printf("\nSearch Key\n");
		szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStorageKey));
	};

	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T(" SELECT msl_storage_id,") \
			_T("   msl_name,") \
			_T("   msl_type") \
			_T(" FROM m_storagelist") \
			_T(" WHERE msl_type      IN('A','B','D','C')") \
			_T(" AND msl_storage_id=%d"), m_nStorageId);

	}
	else
	{
		CString szObjectType = pMF->GetObjectType();
		if(m_bServiceWarehouse)
		{
			szWhere.AppendFormat(_T(" and msl_category in('S') and msl_type <> 'C' "));
		}
		else
		{
			szWhere.AppendFormat(_T(" and  msl_storage_id in(%s) "), m_szStorageObjects);
		}

		
		szWhere.AppendFormat(_T(" and msl_storage_id not in({12}, {13}) "));
		if(m_bServiceWarehouse)
		{
		szSQL.Format(_T(" SELECT msl_storage_id,") \
			_T("   msl_name,") \
			_T("   msl_type") \
			_T(" FROM m_storagelist") \
			_T(" WHERE msl_type      IN('A','B','D','C')") \
			_T(" AND msl_isactive     ='Y'") \
			_T(" AND msl_storage_id  IN(%s) and msl_storage_id <> 23 ") \
			_T(" %s ") \
			_T(" ORDER BY msl_storage_id"), pMF->m_szStorages, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT msl_storage_id,") \
			_T("   msl_name,") \
			_T("   msl_type") \
			_T(" FROM m_storagelist") \
			_T(" WHERE msl_type      IN('A','B','D','C')") \
			_T(" AND msl_isactive     ='Y'") \
			_T(" AND ( (msl_storage_id  IN(%s) and msl_storage_id <> 23 ") \
			_T(" %s ) or msl_storage_id in (%s) )") \
			_T(" ORDER BY msl_storage_id"), pMF->m_szStorages, szWhere,m_szStorageCabinets);
		}

		_tprintf(_T("%s"),szSQL);

//THAY THE KHO 12, 13 BANG KHO DUOC THIET LAP TRONG HMS_CONFIG
//KHOA B5 BANG KHOA PTTT DUOC THIET LAP TRONG HMS_CONFIG		
		szSQL.Replace(_T("{12}"), pMF->m_szPlannedWarehouseId);
		szSQL.Replace(_T("{13}"), pMF->m_szConsignationWarehouseId);

	}

	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	
	
	

	Notice(szSQL);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("msl_storage_id")), 
			rs.GetValue(_T("msl_name")), 
			rs.GetValue(_T("msl_type")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPhacDoPrescriptionPopup::OnStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CHMSPhacDoPrescriptionPopup::OnServiceWarehouseSelect()
{

}
void CHMSPhacDoPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
#include "PMInputOxy.h"
void CHMSPhacDoPrescriptionPopup::OnNameSelendok()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szIsOxy;

	UpdateData(true);
	//m_szProdCountry = m_wndName.GetCurrent(1);
	m_szUnit = m_wndName.GetCurrent(3);
	m_nMaxQuantity = str2float(m_wndName.GetCurrent(5));

	szIsOxy = m_wndName.GetCurrent(8);
	/*
	szSQL.Format(_T("SELECT distinct hpou_dousage ") \
		_T(" FROM hms_ipharmaorder_usage ") \
		_T(" WHERE hpou_user_id='%s' and hpou_product_id=%ld   and hpou_dousage is not null "),
		pMF->GetCurrentUser(), str2long(m_szNameKey));	
*/
	szSQL.Format(_T(" SELECT hpou_dousage,hpou_indication_id") \
_T(" FROM") \
_T("   (SELECT hpou_dousage,hpou_indication_id,") \
_T("     hpou_orderid") \
_T("   FROM hms_ipharmaorder_usage") \
_T("   WHERE hpou_user_id ='%s'") \
_T("   AND hpou_product_id=%ld ") \
_T("   AND hpou_dousage  IS NOT NULL") \
_T("   ORDER BY hpou_orderid DESC") \
_T("   )") \
_T(" tbl LIMIT 1 "), pMF->GetCurrentUser(), str2long(m_szNameKey));

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpou_dousage"), m_szUsage);
		rs.GetValue(_T("hpou_indication_id"), m_szIndicationKey);
		
	}
	_tprintf(_T("\r\n ma cach su dung %s"),m_szIndicationKey);
	
	CString szIsPrecision = m_wndName.GetCurrent(6);
	CString szStockType= m_wndStorage.GetCurrent(2);
	_tprintf(_T("\r\n %s"),szIsPrecision);
	// trươc kia chỉ tủ trực mới kê đc lẻ
	if(szIsPrecision == _T("Y") )
	{
		m_wndQty.SetNumberDecimal(2);
	}
	else
	{
		m_wndQty.SetNumberDecimal(0);
	}
//	m_wndQty.SetNumberDecimal(0);
	CString szProductType = m_wndName.GetCurrent(9), szOrg = m_wndName.GetCurrent(10);
	if (szProductType == _T("A9000") || szOrg == _T("MA") || !m_szUsage.IsEmpty())
	{
		m_wndIndication.SetCheckValue(false);
	}
	else
	{
		m_wndIndication.SetCheckValue(true);
	}

	if(szIsOxy ==_T("Y"))
	{		
		CPMInputOxy dlg(pMF);
		dlg.SetMode(VM_ADD);
		if(dlg.DoModal() == IDOK)
		{		
			m_nQty=dlg.m_nQty;
			m_nHoursqty=dlg.m_nHoursNumber;
			m_szPointOxy= dlg.m_szPointKey;
			UpdateData(false);
			m_wndQty.EnableWindow(FALSE);
			m_wndName.SetFocus();
		}
	}

	UpdateData(false);

}
/*void CHMSPhacDoPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CHMSPhacDoPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CHMSPhacDoPrescriptionPopup::OnNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStorageType;
	szWhere.Empty();

	int nCount = 0;
	if(GetMode() == VM_EDIT)
	{
		m_szNameKey.Format(_T("%ld"), m_nProductId);
		m_szStorageKey.Format(_T("%d"), m_nStorageId);
	}
_tprintf(_T("\r\nstorage=%s"), m_szStorageKey);	
	if(m_szStorageKey.IsEmpty())
		return 0;

	// Neu kho la loai tu truc thi khong can phai kiem tra quyen
	szStorageType = m_wndStorage.GetCurrent(2);
	int nLevel1, nLevel2, nLevel3;
	nLevel1 = m_nLevel1;
	nLevel2 = m_nLevel2;
	nLevel3 = m_nLevel3;

	
	if(szStorageType == _T("C"))
	{
		nLevel1 = nLevel2 = nLevel3 = 0;
	}
// ngay 21/05 longpt sua lai de load tat ca cac kho bac sy ko can chon kho nua
	szWhere.AppendFormat(_T(" and msl_storage_id=%ld "), str2long(m_szStorageKey));
	//szWhere.AppendFormat(_T(" and msl_storage_id in (%s) "), m_szStorageObjects);
	/*if(pMF->GetObjectType() != _T("S")){
		if (nLevel1 > 0 || nLevel2 > 0 || nLevel3 > 0)
			szWhere.AppendFormat(_T(" AND (product_priority IN(%d,%d,%d,0) OR product_priority is null) "), nLevel1, nLevel2, nLevel3);
	}*/
	szWhere.AppendFormat(_T(" and product_id in  (select mp_product_id ") \
						_T(" from m_product where mp_product_class_id  =%ld or   ") \
						_T(" mp_product_class_id in ( select mpcl_refid from m_product_classline where mpcl_class_id = %ld )) "),m_nClassID,m_nClassID );


	CString szText;
	m_wndName.GetWindowText(szText);
	if(!szText.IsEmpty())
	{
	//	szWhere.AppendFormat(_T(" and lower(product_name) like(chr(37)||lower('%s')||chr(37)) "), szText);
	}


	return pMF->LoadProductItemList(&m_wndName, m_szNameKey, szWhere);

	/*
	
	//	m_wndName.SetSearchEx(true);
	
	m_wndName.DeleteAllItems(); 

	 szSQL.Format(_T(" SELECT  pmsi_refidx as refidx, ") \
				_T(" 	pmi_id as itemid, ") \
				_T(" 	CASE WHEN length(pmg_name) > 0 THEN pmi_name ||' ['|| pmg_name ||']' ELSE pmi_name END as name, ") \
				_T("	pmg_name as genericname, ") \
				_T(" 	pmi_unit as unit, ") \
				_T(" 	sum(pmsl_quantity-pmsl_orderqty) as orderqty, ") \
				_T(" 	(select distinct sc_name from sys_country where sc_id=pmsi_countryid) as country, ") \
				_T("	pmsi_countryid as countryid ") \
				_T(" FROM pms_stockline ") \
				_T(" LEFT JOIN pms_stockitems ON(pmsl_sitemid=pmsi_id)") \
				_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
				_T(" LEFT JOIN pms_generic  on(pmi_genericid=pmg_id) ") \
				_T(" WHERE msl_storage_id=%ld ") \
				_T(" 	and pmsl_quantity-pmsl_orderqty > 0 ") \
				_T(" 	and (pmsi_expdate=cast_string2date('1752-09-14') or pmsi_expdate > cast_string2date('%s') ) %s ") \
				_T(" GROUP BY pmsi_refidx, pmi_id, pmi_name, pmi_unit,  pmg_name, pmsi_countryid ") \
				_T(" ORDER BY name, unit"), str2int(m_szStorageKey), m_szOrderDate, szWhere );
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	CString tmpStr;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("genericname"), tmpStr);		
		m_wndName.AddItems(			
			rs.GetValue(_T("refidx")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("vatprice")),
			tmpStr,
			rs.GetValue(_T("country")),
			rs.GetValue(_T("orderqty")),
			rs.GetValue(_T("countryid")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("dosage")),
			NULL);		
		rs.MoveNext();
	}

	return nCount;
*/
}
/*void CHMSPhacDoPrescriptionPopup::OnNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPhacDoPrescriptionPopup::OnGenericSearchSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szNameKey.Empty();
	UpdateData(TRUE);
	if(m_bGenericSearch)
		m_wndName.Format(5, 1, 10, 2);
	else
		m_wndName.Format(5, 1, 10, 1);
	m_wndName.SetFocus();
	UpdateData(FALSE);
	
}
/*void CHMSPhacDoPrescriptionPopup::OnUnitChange(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnUnitSetfocus(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnUnitKillfocus(){
	
} */
int CHMSPhacDoPrescriptionPopup::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSPhacDoPrescriptionPopup::OnQtyChange(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CHMSPhacDoPrescriptionPopup::OnQtyCheckValue()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szMsg;
	if(m_nQty <= 0)
	{
		return -1;
	}
	if(m_nQty > m_nMaxQuantity)
	{
		m_wndQty.SetToolTipMessage(_T("Quantity order > onhand quantity"));
		return -1;
	}

	
	bool res = pMF->CheckDepositAmount(pMF->m_nDocumentNo, m_szNameKey, m_nQty, _T("Y"), str2int(m_szStorageKey));
	if(!res)
	{
		ShowToolTip(&m_wndQty, _T("Số tiền tạm ứng không đủ,yêu cầu cho bệnh nhân đi đóng thêm tạm ứng"));
		//m_wndQty.SetToolTipMessage(_T("S\x1ED1 ti\x1EC1n \x62\x1EC7nh nh\xE2n t\x1EA1m g\x1EEDi \x111\xE3 h\x1EBFt"));
		//return -1;
	}


	return 0;
} 
/*void CHMSPhacDoPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CHMSPhacDoPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSPhacDoPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPhacDoPrescriptionPopup::OnIndicationSelendok(){
	UpdateData(true);
	m_szUsage = m_wndIndication.GetCurrent(1);
	UpdateData(false);

}
/*void CHMSPhacDoPrescriptionPopup::OnIndicationSetfocus(){
	
}*/
/*void CHMSPhacDoPrescriptionPopup::OnIndicationKillfocus(){
	
}*/
long CHMSPhacDoPrescriptionPopup::OnIndicationLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	
	//szWhere.AppendFormat(_T(" and lower(ss_desc) like(chr(37)||lower('%s')||chr(37)) "), m_szIndicationKey);

	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY name,CAST(ss_code AS INTEGER) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPhacDoPrescriptionPopup::OnIndicationAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnSpeedChange(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnSpeedSetfocus(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnSpeedKillfocus(){
	
} */
int CHMSPhacDoPrescriptionPopup::OnSpeedCheckValue(){
		return 0;
} 
/*void CHMSPhacDoPrescriptionPopup::OnUsageChange(){
	
} */
void CHMSPhacDoPrescriptionPopup::OnUsageSetfocus(){
	m_wndUsage.SetSel(-1);	
} 
/*void CHMSPhacDoPrescriptionPopup::OnUsageKillfocus(){
	
} */

int	CHMSPhacDoPrescriptionPopup::OnUsageCheckValue()
{
	return 0;
}
void CHMSPhacDoPrescriptionPopup::OnSaveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSPhacDoPrescriptionPopup();
} 

#include "HMSConfirmDialog.h"
#include ".\HMSPhacDoPrescriptionPopup.h"
/*
void CHMSPhacDoPrescriptionPopup::OnConfirmSelect()
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
*/

void CHMSPhacDoPrescriptionPopup::OnNotDailyOrderSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSPhacDoPrescriptionPopup::OnTimeDayChange(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnTimeDaySetfocus(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnTimeDayKillfocus(){
	
} */
int CHMSPhacDoPrescriptionPopup::OnTimeDayCheckValue(){
	// Using for build m_szUsage
	UpdateData(true);
	m_wndTimeDay.UpdateData(true);
	m_wndTimeQty.UpdateData(true);		
	
	m_szUsage = _T("");
	CString szUnit = _T("");	
	StringLower(m_wndName.GetCurrent(3), szUnit);
	CString szTimeQty = m_szTimeQty.Trim();
	CString szTimeDay = m_szTimeDay.Trim();
	CString szCachDung = m_wndIndication.GetCurrent(1);
	
	if (!szTimeQty.IsEmpty()) {		
		CString szNumChars = _T("0123456789,./");
		for (int i = 0; i < szTimeQty.GetLength(); ++i)
			if (szNumChars.Find(szTimeQty[i]) < 0) {
				szUnit.Empty();
				break;
			}	
		CString szSpace = _T("");
		if (!szUnit.IsEmpty())			  
			szSpace = _T(" ");		    
	
		m_szUsage.Format(_T("%s%s%s/lần"), szTimeQty, szSpace, szUnit);
	}

	if (!szTimeDay.IsEmpty()) {
		CString szSpace = _T("");
		if (!m_szUsage.IsEmpty())
			szSpace = _T(" * ");
		m_szUsage.Format(_T("%s%s%s lần/ngày"), m_szUsage, szSpace, szTimeDay);		
	}

	if (!szCachDung.IsEmpty())
		if (m_szUsage.IsEmpty())
			m_szUsage = szCachDung;
		else 
			m_szUsage.Format(_T("%s [%s]"), m_szUsage, szCachDung);

	UpdateData(false);	
	return 0;
} 
/*void CHMSPhacDoPrescriptionPopup::OnTimeQtyChange(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnTimeQtySetfocus(){
	
} */
/*void CHMSPhacDoPrescriptionPopup::OnTimeQtyKillfocus(){
	
} */
int CHMSPhacDoPrescriptionPopup::OnTimeQtyCheckValue(){
	return OnTimeDayCheckValue();
} 
	void CHMSPhacDoPrescriptionPopup::OnInsuranceUnpaidSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CHMSPhacDoPrescriptionPopup::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
//	ClosePopup();
	CGuiDialog::OnCancel();
	m_bInPackage = false;
	
} 
int CHMSPhacDoPrescriptionPopup::OnAddHMSPhacDoPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSPhacDoPrescriptionPopup::OnEditHMSPhacDoPrescriptionPopup()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPhacDoPrescriptionPopup::OnDeleteHMSPhacDoPrescriptionPopup(){
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
 		OnCancelHMSPhacDoPrescriptionPopup(); 
 	}
	return 0;
}
int CHMSPhacDoPrescriptionPopup::OnSaveHMSPhacDoPrescriptionPopup()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD && GetMode() != VM_EDIT) 
 		return -1; 
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 

//	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	m_szOrderDate = m_szTreatDate;
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	_tprintf(_T("\r\n: %s"),m_szOrderDate);

 	if(!IsValidateData()) 
 		return -1; 

	OnOK();
	
 //	CString szSQL;
	//int ret = 0;
	//if(GetMode() == VM_EDIT)
	//{
	//	szSQL.Format(_T("HMS_IPHARMAORDER_EDITUSAGE_V5(%ld, %ld, %ld, '%s','%s','%s') "), 
	//		pMF->m_nDocumentNo, m_nOrderID, m_nProductId, m_szSpeed, m_szUsage, m_szIndicationKey);
	//	ret = str2int(pMF->ExecDML(szSQL));
	//}
	//else
	//{
	//	szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "), m_hms_ipharmaorderTbl.FormatSQL());
	//	m_nOrderID = str2long(pMF->ExecDML(szSQL));
	//	if (m_nOrderID > 0)
	//	{
	//		ret = 1;
	//	}
	//}
	//_tprintf(_T("\r\n%d: %s"), ret, szSQL);
	//if(ret <= 0)
	//{
	//	CString szMsg;
	//	szMsg.Format(_T("[%d] L\x1ED7i kh\xF4ng th\xEAm \x111\x1B0\x1EE3\x63 thu\x1ED1\x63, v\x1EADt t\x1B0"), ret);
	//	ShowToolTip(&m_wndName, szMsg);		
	//}
	//else
	//{
	//	if(pMF->m_CompanyInfo.sc_id == _T("27009") || pMF->GetProp(_T("hms_emr_enable"))== _T("Y") )
	//	{
	//		szSQL.Format(_T("pm_get_interaction(%ld, '%s', %ld)"), m_nOrderID, _T("IP"), str2long(m_szNameKey));
	//		CString szRet = pMF->ExecDML(szSQL);
	//		if (!szRet.IsEmpty())
	//		{
	//			CPMInteractionNotifier_V2 dlg(this, m_nOrderID, _T("IP"), pMF->m_nDocumentNo, m_szNameKey);
	//			dlg.DoModal();
	//		}
	//	}
	//	if(GetMode() != VM_EDIT)
	//		SetMode(VM_ADDCHILD);
	//	else
	//		CGuiDialog::OnOK();
	//	//GetParent()->SendMessage(WM_COMMAND, CMD_REFRESHDATA);
	//	((CHMSTreatmentTrackingDialog*)GetParent())->LoadDrugList();
	//	((CHMSTreatmentTrackingDialog*)GetParent())->m_wndTreatList.Invalidate();
	//}
	return 1;

}
int CHMSPhacDoPrescriptionPopup::OnCancelHMSPhacDoPrescriptionPopup(){
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
int CHMSPhacDoPrescriptionPopup::OnHMSPhacDoPrescriptionPopupListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CHMSPhacDoPrescriptionPopup, CGuiDialog)
	
END_MESSAGE_MAP()

/*
void CHMSPhacDoPrescriptionPopup::ShowPopup(CWnd *pWndRef, int nShow){
//	CGuiDialog::ShowPopup(pWndRef, nShow);
} 

void CHMSPhacDoPrescriptionPopup::ClosePopup()
{
//	CGuiDialog::ClosePopup();
	m_bInPackage = false;

}
*/


int CHMSPhacDoPrescriptionPopup::OnIndicationCheckValue()
{
	m_wndUsage.SetSel(m_wndUsage.GetWindowTextLength(), m_wndUsage.GetWindowTextLength());
	return 0;
}

/*
void CHMSPhacDoPrescriptionPopup::CreatePopup(bool bInPackage){
	static bool bInited = false;
	m_bInPackage = bInPackage;

	if(!bInited)
	{
		bInited = true;
	}

	
}
*/