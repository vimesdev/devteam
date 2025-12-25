#include "HMSTreatmentPrescriptionPopup_V2.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "GuiInputDataDialog.h"
#include "GuiTabCtrl.h"
#include "HMSTreatmentTrackingDialog.h"

static void setColumnWidth(CGuiComboBox* pCtrl, int pos, int width)
{
	if(pCtrl == NULL)
		return;
	
	CGuiHeaderCtrl* pHdr = pCtrl->GetHeaderCtrl();
	
	if(pos < 0 || pos >= pHdr->GetItemCount())
		return;

	HDITEM hdr;
	TCHAR str[255];
	hdr.pszText = str;
	hdr.cchTextMax = 255;
	pHdr->GetItem(pos, &hdr);
	hdr.cxy = width;
	pHdr->SetItem(pos, &hdr);

}

static long _OnTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnTimeCheckValue();
}
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopup_V2* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnStorageAddNew();
}*/
static void _OnServiceWarehouseSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnServiceWarehouseSelect();
}

static void _OnInsWarehouseSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnInsWarehouseSelect();
}


static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopup_V2* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnNameAddNew();
}*/
static void _OnGenericSearchSelectFnc(CWnd *pWnd){
	 ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnGenericSearchSelect();
}
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopup_V2* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnIndicationAddNew();
}*/
static long _OnIndicationCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnIndicationCheckValue();
}

/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnSpeedCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUsageChange();
} */
static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUsageSetfocus();}

/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopup_V2 *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopup_V2 *pVw = (CHMSTreatmentPrescriptionPopup_V2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopup_V2 *pVw = (CHMSTreatmentPrescriptionPopup_V2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnAddHMSTreatmentPrescriptionPopup();
} 
static int _OnEditHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnEditHMSTreatmentPrescriptionPopup();
} 
static int _OnDeleteHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnDeleteHMSTreatmentPrescriptionPopup();
} 
static int _OnSaveHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnSaveHMSTreatmentPrescriptionPopup();
} 
static int _OnCancelHMSTreatmentPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnCancelHMSTreatmentPrescriptionPopup();
}
static int _OnOutPrescriptionSelectFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopup_V2*)pWnd)->OnOutPrescriptionSelect();
}

/*
CHMSTreatmentPrescriptionPopup_V2::CHMSTreatmentPrescriptionPopup_V2()
{

	m_nDlgWidth = 600;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_szStorageKey.Empty();
	m_szOrderDate.Empty();
	m_nOrderID = 0;

}
*/
CHMSTreatmentPrescriptionPopup_V2::CHMSTreatmentPrescriptionPopup_V2(CWnd *pParent, int nMode, int x, int y):
	m_pParentOwner(pParent), CGuiPopup(pParent)
{
	
	CGuiPopup::SetMode(nMode);
	
	SetDefaultValues();
	m_szStorageKey.Empty();
	m_szOrderDate.Empty();
	m_nOrderID = 0;
	m_nLevel1  = 0;
	m_nLevel2  = 0;
	m_nLevel3  = 0;
	m_bInPackage = false;
	m_bIsReq = false;
	m_bServiceWarehouse = FALSE;
	m_bInsWarehouse = FALSE;
	m_bGenericSearch = FALSE;
	m_nStorageId = 0;
	m_nProductId = 0;
	m_nX = x;
	m_nY = y;
	m_nDlgWidth = 775;
	m_nDlgHeight = 155;
	m_bOutPrescription= false;

	//SetAutoCenter(false);
//	SetAutoCalcSize(false);
	SetAutoClose(false);
	m_bCancer = FALSE;
	m_bEditQty = false;
}
CHMSTreatmentPrescriptionPopup_V2::~CHMSTreatmentPrescriptionPopup_V2(){
}
void CHMSTreatmentPrescriptionPopup_V2::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Kho"), 5, 5, 125, 30);
	m_wndStorage.Create(this,130, 5, 460, 30); 
	m_wndInsWarehouse.Create(this, _T("Kho BH"), 465, 5, 535, 30);
	m_wndServiceWarehouse.Create(this, _T("Kho dịch vụ"), 540, 5, 640, 30);
	m_wndOutPrescription.Create(this, _T("Đơn ngoại trú UT"), 645, 5, 775, 30);
	m_wndName.Create(this,130, 35, 460, 60); 
	m_wndUnitLabel.Create(this, _T("Unit"), 465, 35, 535, 60);
	m_wndUnit.Create(this,540, 35, 605, 60); 
	m_wndGenericSearch.Create(this, _T("Tìm theo tên hoạt chất"), 610, 35, 775, 60);
	m_wndNameLabel.Create(this, _T("Tên thuốc/HL"), 5, 35, 125, 61);
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 65, 125, 90);
	m_wndQty.Create(this,130, 65, 215, 90); 
	m_wndMaxQuantityLabel.Create(this, _T("On Hand"), 220, 65, 320, 90);
	m_wndMaxQuantity.Create(this,325, 65, 460, 90); 
	m_wndCancerOpt.Create(this, _T("Thuốc dùng pha chế"), 610, 65, 775, 90);
	m_wndIndicationLabel.Create(this, _T("Đường dùng"), 5, 95, 125, 120);
	m_wndIndication.Create(this,130, 95, 215, 120); 
	m_wndUsage.Create(this,220, 95, 775, 120); 
	m_wndTimeLabel.Create(this, _T("Time"), 5, 125, 125, 150);
	m_wndTime.Create(this,130, 125, 215, 150); 
	m_wndSpeedLabel.Create(this, _T("Số lượng/Tốc độ"), 220, 125, 320, 150);
	m_wndSpeed.Create(this,325, 125, 605, 150); 
	m_wndSave.Create(this, _T("&Save"), 630, 125, 700, 150);
	m_wndClose.Create(this, _T("&X"), 705, 125, 775, 150);

	
	m_wndCancerOpt.ModifyStyle(WS_TABSTOP, 0);
	m_wndOutPrescription.ModifyStyle(WS_TABSTOP, 0);
	m_wndInsWarehouse.ModifyStyle(WS_TABSTOP, 0);
	m_wndServiceWarehouse.ModifyStyle(WS_TABSTOP, 0);
	m_wndGenericSearch.ModifyStyle(WS_TABSTOP, 0);

}
void CHMSTreatmentPrescriptionPopup_V2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndStorage.SetCheckValue(true);
	
//	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetReadOnly(true);
	m_wndUsage.SetLimitText(254);
	m_wndUnit.SetReadOnly(TRUE);
	
	m_wndUsage.SetCheckValue(true);
	m_wndUsage.SetAllowEmpty(true);
	m_wndUsage.SetInitCap(2);	
	
	m_wndGenericSearch.ModifyStyle(WS_TABSTOP, 0);
	m_wndServiceWarehouse.ModifyStyle(WS_TABSTOP, 0);
	//m_wndSpeed.ModifyStyle(WS_TABSTOP, 0);

	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndStorage.InsertColumn(2, _T("Type"), CFMT_TEXT, 0);

	m_wndIndication.InsertColumn(0,_T("ID"), CFMT_NUMBER, 40);
	m_wndIndication.InsertColumn(1,_T("Desc"), CFMT_TEXT, 300);
	m_wndIndication.InsertColumn(2,_T(""), CFMT_TEXT, 0);//index
	m_wndIndication.Format(3, 0, 10, 1);
	m_wndIndication.SetCheckValue(true);
//	m_wndName.SetSearchEx(TRUE);
	
	m_wndName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndName.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndName.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndName.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndName.Format(6, 1);
	m_wndName.SetSearchStyle(SS_COMPARE);
	
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
	m_hms_ipharmaorderTbl.AddField(_T("hpol_qtyorder"), dfDouble); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_speed"), dfText, 32); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_usage"), dfText, 128); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_inpackage"), dfText, 1); 
	m_hms_ipharmaorderTbl.AddField(_T("hpol_indication_id"), dfText, 10);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_outpatient_order"), dfText, 10);
	m_hms_ipharmaorderTbl.AddField(_T("hpo_time"), dfText, 65);


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
void CHMSTreatmentPrescriptionPopup_V2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTime.SetEvent(WE_CHECKVALUE, _OnTimeCheckValueFnc);
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
	m_wndOutPrescription.SetEvent(WE_CLICK, _OnOutPrescriptionSelectFnc);
	
	int nMode = GetMode();
	
	m_szOrderDate = m_szTreatDate;

	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);
	
	if(pMF->GetObjectType() == _T("S") || nMode == VM_EDIT)
	{
		m_wndServiceWarehouse.EnableWindow(FALSE);
		//m_wndServiceWarehouse.ShowWindow(SW_HIDE);
		m_wndInsWarehouse.EnableWindow(FALSE);
		//m_wndInsWarehouse.ShowWindow(SW_HIDE);
	}

	if(pMF->GetObjectType() == _T("I") || pMF->GetObjectType() == _T("C") || nMode == VM_EDIT)
	{
		//m_wndInsWarehouse.EnableWindow(FALSE);
		//m_wndInsWarehouse.ShowWindow(SW_HIDE);
		
	}
	if(!pMF->CheckPermission(_T("20.07")))
	{
		m_wndOutPrescription.EnableWindow(false);
	}

	CString szSQL;
	szSQL.Format(_T(" SELECT msd_storage_id") \
		_T(" FROM M_STORAGE_DEFAULT") \
_T(" WHERE MSD_OBJECT_ID = %d ") \
_T(" ORDER BY msd_department_id,") \
_T("   msd_storage_id"), pMF->GetObjectID());
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	m_szStorageObjects.Format(_T("-1"));
	while(!rs.IsEOF())
	{
		int storage_id;
		rs.GetValue(_T("msd_storage_id"), storage_id);
		m_szStorageObjects.AppendFormat(_T(",%d"), storage_id);
		rs.MoveNext();
	}

	if(!pMF->IsCancerPatient())
	{
		m_wndCancerOpt.ShowWindow(SW_HIDE);
		m_bCancer = FALSE;
	}

	((CHMSTreatmentTrackingDialog*)m_pParentOwner)->RefreshDrugs();
}
void CHMSTreatmentPrescriptionPopup_V2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTime.GetDlgCtrlID(), m_szTime);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Check(pDX, m_wndServiceWarehouse.GetDlgCtrlID(), m_bServiceWarehouse);
	DDX_Check(pDX, m_wndInsWarehouse.GetDlgCtrlID(), m_bInsWarehouse);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Check(pDX, m_wndGenericSearch.GetDlgCtrlID(), m_bGenericSearch);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Check(pDX, m_wndCancerOpt.GetDlgCtrlID(), m_bCancer);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Check(pDX, m_wndOutPrescription.GetDlgCtrlID(), m_bOutPrescription);
}
void CHMSTreatmentPrescriptionPopup_V2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT hpo_orderdate, hpo_storage_id,") \
				_T("   hpou_dousage, hpou_index, ") \
				_T("   hpou_speed,") \
				_T("   hpou_qtyorder, hpou_indication_id as indication_id, hpou_time") \
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
		rs.GetValue(_T("indication_id"), m_szIndicationKey);
		rs.GetValue(_T("hpou_time"), m_szTime);
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
void CHMSTreatmentPrescriptionPopup_V2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
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
	CString szOrderType = _T("P");
	CString szGoHome;
	szGoHome = _T("N");
	//Kiem tra neu ke thuoc pha che thi them szOrderType='C';
	if(m_bOutPrescription)
	{
		szGoHome = _T("Y");
	}
	if (m_bCancer)
	{
		szOrderType = _T("C");
		szGoHome = _T("N");
	}
	
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_ordertype"), szOrderType);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_objecttype"), pMF->GetObjectType());
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_objectid"), pMF->GetObjectID());
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_product_id"), m_szNameKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_qtyorder"), m_nQty);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_speed"), m_szSpeed);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_usage"), m_szUsage);
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_inpackage"), _T("N"));
	m_hms_ipharmaorderTbl.SetValue(_T("hpol_indication_id"), m_szIndicationKey);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_outpatient_order"), szGoHome);
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_time"), m_szTime);
	


}
void CHMSTreatmentPrescriptionPopup_V2::SetDefaultValues(){
	m_szTime.Empty();
	m_szNameKey.Empty();
	m_bGenericSearch=FALSE;
	m_szUnit.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szSpeed.Empty();
	m_szUsage.Empty();	
	
}
int CHMSTreatmentPrescriptionPopup_V2::SetMode(int nMode){
	
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();
			m_wndName.SetFocus();
			if(m_szStorageKey.IsEmpty())
				m_wndStorage.SetFocus();
//			m_szOrderDate = pMF->GetSysDate();
		//	m_wndStorage.SetFocus();
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
//			m_szOrderDate = pMF->GetSysDate();
			if(m_szStorageKey.IsEmpty())
				m_wndStorage.SetFocus();
			else
				m_wndName.SetFocus();
//			m_wndStorage.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndStorage.EnableWindow(FALSE);
			m_wndName.EnableWindow(FALSE);
			if (!m_bEditQty)
			{
				m_wndQty.EnableWindow(FALSE);
			}
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
		if(pMF->GetObjectID() == 11)
		{
			m_wndInsWarehouse.EnableWindow(TRUE);
			//m_wndInsWarehouse.ShowWindow(SW_SHOW);
		}
		else
		{
			m_wndInsWarehouse.EnableWindow(FALSE);

		}
		
 		return nOldMode; 
}

void CHMSTreatmentPrescriptionPopup_V2::OnStorageSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup_V2::OnStorageSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(GetMode() != VM_EDIT)
	{
		m_szNameKey.Empty();
		CGuiPopup::SetMode(VM_ADD);
	}
 
}
/*void CHMSTreatmentPrescriptionPopup_V2::OnStorageSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopup_V2::OnStorageKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopup_V2::OnStorageLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStorageObject;
	UpdateData(TRUE);

	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
		szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStorageKey));
	};

	if(GetMode() == VM_EDIT)
	{
		szSQL.Format(_T(" SELECT msl_storage_id,") \
			_T("   msl_name,") \
			_T("   msl_type") \
			_T(" FROM m_storagelist") \
			_T(" WHERE msl_type      IN('A','B','D','C','F')") \
			_T(" AND msl_storage_id=%d"), m_nStorageId);

	}
	else
	{
		CString szObjectType = pMF->GetObjectType();
		if(m_bServiceWarehouse || m_bInsWarehouse)
		{
			if(m_bServiceWarehouse)
			{
				szWhere.AppendFormat(_T(" and msl_category in('S') and msl_type <> 'C' "));
				szWhere.AppendFormat(_T(" and msl_storage_id in(select msd_storage_id from m_storage_default where msd_object_id=7) "));
			}
			if(m_bInsWarehouse)
			{
				szWhere.AppendFormat(_T(" and msl_category in('I') and msl_type <> 'C' "));
				szWhere.AppendFormat(_T(" and msl_storage_id in(select msd_storage_id from m_storage_default where msd_object_id=4) "));
			}

		}
		else
		{
			szWhere.AppendFormat(_T(" and msl_storage_id in(%s) "), m_szStorageObjects);
		}

		
		szWhere.AppendFormat(_T(" and msl_storage_id not in(12, 13) "));

		szSQL.Format(_T(" SELECT msl_storage_id,") \
			_T("   msl_name,") \
			_T("   msl_type") \
			_T(" FROM m_storagelist") \
			_T(" WHERE (msl_type      IN('A','B','D','F') or (msl_type='C' and msl_dept_id='%s'))") \
			_T(" AND msl_isactive     ='Y'") \
			_T(" AND msl_storage_id <> 23 ") \
			_T(" %s ") \
			_T(" ORDER BY msl_storage_id"), pMF->GetDepartmentID(), szWhere);

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
/*void CHMSTreatmentPrescriptionPopup_V2::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

void CHMSTreatmentPrescriptionPopup_V2::OnServiceWarehouseSelect()
{
	UpdateData(TRUE);
	m_wndStorage.DeleteAllItems();
	m_szStorageKey.Empty();
	m_bInsWarehouse = FALSE;
	UpdateData(FALSE);
}

void CHMSTreatmentPrescriptionPopup_V2::OnInsWarehouseSelect()
{
	UpdateData(TRUE);
	m_wndStorage.DeleteAllItems();
	m_szStorageKey.Empty();
	m_bServiceWarehouse = FALSE;
	UpdateData(FALSE);
}


void CHMSTreatmentPrescriptionPopup_V2::OnNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup_V2::OnNameSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	UpdateData(true);
	//m_szProdCountry = m_wndName.GetCurrent(1);
	m_szUnit = m_wndName.GetCurrent(3);
	m_nMaxQuantity = str2float(m_wndName.GetCurrent(5));
	/*
	szSQL.Format(_T("SELECT distinct hpou_dousage ") \
		_T(" FROM hms_ipharmaorder_usage ") \
		_T(" WHERE hpou_user_id='%s' and hpou_product_id=%ld  and rownum <= 1 and hpou_dousage is not null "),
		pMF->GetCurrentUser(), str2long(m_szNameKey));	
*/
	szSQL.Format(_T(" SELECT hpou_dousage") \
_T(" FROM") \
_T("   (SELECT hpou_dousage,") \
_T("     hpou_orderid, hpou_indication_id ") \
_T("   FROM hms_ipharmaorder_usage") \
_T("   WHERE hpou_user_id ='%s'") \
_T("   AND hpou_product_id=%ld ") \
_T("   AND hpou_dousage  IS NOT NULL") \
_T("   ORDER BY hpou_orderid DESC") \
_T("   )") \
_T(" WHERE rownum <= 1"), pMF->GetCurrentUser(), str2long(m_szNameKey));

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpou_dousage"), m_szUsage);
		rs.GetValue(_T("hpou_indication_id"), m_szIndicationKey);
	}
	
	CString szIsPrecision = m_wndName.GetCurrent(6);
	if(szIsPrecision == _T("Y"))
	{
		m_wndQty.SetNumberDecimal(2);
	}
	else
	{
		m_wndQty.SetNumberDecimal(0);
	}

	m_wndQty.SetNumberDecimal(0);
	UpdateData(false);

}
/*void CHMSTreatmentPrescriptionPopup_V2::OnNameSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopup_V2::OnNameKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopup_V2::OnNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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

	szWhere.AppendFormat(_T(" and msl_storage_id=%ld "), str2long(m_szStorageKey));
	/*if(pMF->GetObjectType() != _T("S")){
		if (nLevel1 > 0 || nLevel2 > 0 || nLevel3 > 0)
			szWhere.AppendFormat(_T(" AND (product_priority IN(%d,%d,%d,0) OR product_priority is null) "), nLevel1, nLevel2, nLevel3);
	}*/


	CString szText;
	m_wndName.GetWindowText(szText);
	if(!szText.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(product_name) like(chr(37)||lower('%s')||chr(37)) "), szText);
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
				_T(" 	and (pmsi_expdate=to_date('1752-09-14', 'yyyy/mm/dd hh24:mi:ss') or pmsi_expdate > to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ) %s ") \
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
/*void CHMSTreatmentPrescriptionPopup_V2::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentPrescriptionPopup_V2::OnGenericSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szNameKey.Empty();
	UpdateData(TRUE);
	if(m_bGenericSearch)
		m_wndName.Format(5, 1, 10, 2);
	else
		m_wndName.Format(5, 1, 10, 1);
	m_wndName.SetFocus();
	UpdateData(FALSE);
	
}
/*void CHMSTreatmentPrescriptionPopup_V2::OnUnitChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnUnitSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnUnitKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup_V2::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup_V2::OnQtyChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnQtySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnQtyKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup_V2::OnQtyCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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




	return 0;
} 
/*void CHMSTreatmentPrescriptionPopup_V2::OnMaxQuantityChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnMaxQuantityKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup_V2::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionPopup_V2::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopup_V2::OnIndicationSelendok(){
	UpdateData(true);
	if(m_szUsage.IsEmpty())
		m_szUsage = m_wndIndication.GetCurrent(1);
	UpdateData(false);

}
/*void CHMSTreatmentPrescriptionPopup_V2::OnIndicationSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopup_V2::OnIndicationKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopup_V2::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndIndication, m_szIndicationKey);
	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	
	//szWhere.AppendFormat(_T(" and lower(ss_desc) like(chr(37)||lower('%s')||chr(37)) "), m_szIndicationKey);

	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_index FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY name,CAST(ss_code AS INTEGER) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("ss_index")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentPrescriptionPopup_V2::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnSpeedChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnSpeedSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopup_V2::OnSpeedKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopup_V2::OnSpeedCheckValue(){
		return 0;
} 
/*void CHMSTreatmentPrescriptionPopup_V2::OnUsageChange(){
	
} */
void CHMSTreatmentPrescriptionPopup_V2::OnUsageSetfocus(){
	m_wndUsage.SetSel(-1);	
} 
/*void CHMSTreatmentPrescriptionPopup_V2::OnUsageKillfocus(){
	
} */

int	CHMSTreatmentPrescriptionPopup_V2::OnUsageCheckValue()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szUsage.Trim();
	if(m_szUsage.IsEmpty() && pMF->IsRequireUsage(m_szNameKey))
		return -1;
	return 0;
}
void CHMSTreatmentPrescriptionPopup_V2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatmentPrescriptionPopup();
} 

#include "HMSConfirmDialog.h"
#include ".\HMSTreatmentPrescriptionPopup.h"
/*
void CHMSTreatmentPrescriptionPopup_V2::OnConfirmSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
void CHMSTreatmentPrescriptionPopup_V2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
//	ClosePopup();
	CGuiPopup::OnCancel();
	m_bInPackage = false;
	
} 
int CHMSTreatmentPrescriptionPopup_V2::OnAddHMSTreatmentPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSTreatmentPrescriptionPopup_V2::OnEditHMSTreatmentPrescriptionPopup()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionPopup_V2::OnDeleteHMSTreatmentPrescriptionPopup(){
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
int CHMSTreatmentPrescriptionPopup_V2::OnSaveHMSTreatmentPrescriptionPopup()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD && GetMode() != VM_EDIT) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

//	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	m_szOrderDate = m_szTreatDate;
	m_hms_ipharmaorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);

 	if(!IsValidateData()) 
 		return -1;
	int ret = 0;
	if(GetMode() == VM_ADD)
	{
		bool res = pMF->CheckDepositAmount(pMF->m_nDocumentNo, m_szNameKey, m_nQty, _T("Y"), str2int(m_szStorageKey));
		if(!res)
		{
			//m_wndQty.SetToolTipMessage(_T("Số tiền bệnh nhân tạm gửi đã hết"));
			int nret = ShowMessageBox(_T("S\x1ED1 ti\x1EC1n \x62\x1EC7nh nh\xE2n t\x1EA1m g\x1EEDi \x111\xE3 h\x1EBFt.\x42\x1EA1n \x63\xF3 mu\x1ED1n ti\x1EBFp t\x1EE5\x63 \x63h\x1EC9 \x111\x1ECBnh kh\xF4ng! "),MB_YESNO);
					if(nret == IDNO)
						return -1 ;
			//return -1;
		}
	}
	
 	CString szSQL;
	if(GetMode() == VM_EDIT)
	{
		if (m_bEditQty)
		{
			long lRet = 0;
			szSQL.Format(_T(" HMS_IPHARMAORDER_EDITQTY_V5(%ld, %ld, '%s', %f) "),
				m_nOrderID, m_nProductId, pMF->GetCurrentUser(), m_nQty);
			lRet = str2long(pMF->ExecDML(szSQL));
			if (lRet <= 0)
			{
				CString szMsg;
				szMsg.Format(_T("[%ld] Lỗi không sửa được số lượng thuốc, vật tư"), lRet);
				ShowToolTip(&m_wndQty, szMsg);
			}
			else
			{
				m_nOrderID = lRet;
			}
		}
		szSQL.Format(_T("HMS_IPHARMAORDER_EDITUSAGE_V5(%ld, %ld, %ld, '%s','%s','%s','%s') "), 
			pMF->m_nDocumentNo, m_nOrderID, m_nProductId, m_szSpeed, m_szUsage, m_szIndicationKey, m_szTime);

	}
	else
		szSQL.Format(_T("HMS_IPHARMAORDER_CREATELINE_V5(%s) "), m_hms_ipharmaorderTbl.FormatSQL());
	ret = str2int(pMF->ExecDML(szSQL));
//_msg(_T("\r\n%d: %s"), ret, szSQL);
	if(ret <= 0)
	{
		_tprintf(_T("\nszSQL: %s\n"), szSQL);
		CString szMsg;
		szMsg.Format(_T("[%d] Lỗi không thêm được thuốc, vật tư"), ret);
		ShowToolTip(&m_wndName, szMsg);
		
	}
	else
	{
		if(GetMode() != VM_EDIT)
		{
			SetMode(VM_ADDCHILD);
			//m_pParentOwner->SendMessage(WM_COMMAND, CMD_REFRESHDATA);
			((CHMSTreatmentTrackingDialog*)m_pParentOwner)->RefreshDrugs();
		}
		else
		{
			ClosePopup();
		}
		//GetParent()->SendMessage(WM_COMMAND, CMD_REFRESHDATA);
		
//		((CHMSTreatmentTrackingDialog*)m_pParentOwner)->m_wndTreatList.Invalidate();
	}
	return ret;

}
int CHMSTreatmentPrescriptionPopup_V2::OnCancelHMSTreatmentPrescriptionPopup(){
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
int CHMSTreatmentPrescriptionPopup_V2::OnHMSTreatmentPrescriptionPopupListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CHMSTreatmentPrescriptionPopup_V2, CGuiPopup)
	
END_MESSAGE_MAP()

/*
void CHMSTreatmentPrescriptionPopup_V2::ShowPopup(CWnd *pWndRef, int nShow){
//	CGuiPopup::ShowPopup(pWndRef, nShow);
} 

void CHMSTreatmentPrescriptionPopup_V2::ClosePopup()
{
//	CGuiPopup::ClosePopup();
	m_bInPackage = false;

}
*/


int CHMSTreatmentPrescriptionPopup_V2::OnIndicationCheckValue()
{
	m_wndUsage.SetSel(m_wndUsage.GetWindowTextLength(), m_wndUsage.GetWindowTextLength());
	return 0;
}

/*
void CHMSTreatmentPrescriptionPopup_V2::CreatePopup(bool bInPackage){
	static bool bInited = false;
	m_bInPackage = bInPackage;

	if(!bInited)
	{
		bInited = true;
	}

	
}
*/
void CHMSTreatmentPrescriptionPopup_V2::ClosePopup()
{
	CGuiPopup::ClosePopup();

	((CHMSTreatmentTrackingDialog*)m_pParentOwner)->Refresh();

}
int CHMSTreatmentPrescriptionPopup_V2::OnOutPrescriptionSelect()
{
	ShowToolTip(&m_wndStorage, _T("Tác vụ chỉ dùng cho các bệnh nhân ung thư ngoại trú lĩnh 1 đợt ra về.Không sử dụng bệnh nhân lĩnh thuốc hàng ngày.Không sử dụng cho việc mua đơn thuốc ra về. Xin cảm ơn !"));
	
	return 1;
}
int CHMSTreatmentPrescriptionPopup_V2::OnTimeCheckValue()
{
	return 0;
}