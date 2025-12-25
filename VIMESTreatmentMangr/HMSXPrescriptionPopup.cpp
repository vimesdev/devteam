#include "HMSXPrescriptionPopup.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "GuiInputDataDialog.h"
#include "HMSXPrescriptionDlg.h"
#include "GuiTabCtrl.h"
#include "HMSConfirmDialog.h"

static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSXPrescriptionPopup* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnStockAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSXPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnProdCountryChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnProdCountryChange();
} */
/*static void _OnProdCountrySetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnProdCountrySetfocus();} */ 
/*static void _OnProdCountryKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnProdCountryKillfocus();
} */
static int _OnProdCountryCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnProdCountryCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSXPrescriptionPopup* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnUsageCheckValue();
} 
static void _OnSearchForGenericNameSelectFnc(CWnd *pWnd){
	 ((CHMSXPrescriptionPopup*)pWnd)->OnSearchForGenericNameSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionPopup *pVw = (CHMSXPrescriptionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionPopup *pVw = (CHMSXPrescriptionPopup *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSXPrescriptionPopup *pVw = (CHMSXPrescriptionPopup *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnTotalCostChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTotalCostChange();
} */
/*static void _OnTotalCostSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTotalCostSetfocus();} */ 
/*static void _OnTotalCostKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnTotalCostKillfocus();
} */
static int _OnTotalCostCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnTotalCostCheckValue();
} 
/*static void _OnPatientPaidChangeFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnPatientPaidChange();
} */
/*static void _OnPatientPaidSetfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnPatientPaidSetfocus();} */ 
/*static void _OnPatientPaidKillfocusFnc(CWnd *pWnd){
	((CHMSXPrescriptionPopup *)pWnd)->OnPatientPaidKillfocus();
} */
static int _OnPatientPaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSXPrescriptionPopup *)pWnd)->OnPatientPaidCheckValue();
} 
static int _OnAddHMSXPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionPopup*)pWnd)->OnAddHMSXPrescriptionPopup();
} 
static int _OnEditHMSXPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionPopup*)pWnd)->OnEditHMSXPrescriptionPopup();
} 
static int _OnDeleteHMSXPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionPopup*)pWnd)->OnDeleteHMSXPrescriptionPopup();
} 
static int _OnSaveHMSXPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionPopup*)pWnd)->OnSaveHMSXPrescriptionPopup();
} 
static int _OnCancelHMSXPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSXPrescriptionPopup*)pWnd)->OnCancelHMSXPrescriptionPopup();
}

CHMSXPrescriptionPopup::CHMSXPrescriptionPopup()
{

	m_nDlgWidth = 600;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_szStockKey.Empty();
	m_szOrderDate.Empty();
	m_nTotalCost=0;
	m_nPatientPaid=0;
	m_nOrderID = 0;

}

CHMSXPrescriptionPopup::CHMSXPrescriptionPopup(CWnd *pParent):
	CGuiPopup(pParent)
{
	SetAutoClose(false);
	m_nDlgWidth = 600;
	m_nDlgHeight = 155;
	SetDefaultValues();
	m_szStockKey.Empty();
	m_szOrderDate.Empty();
	m_nTotalCost=0;
	m_nPatientPaid=0;
	m_nOrderID = 0;

}
CHMSXPrescriptionPopup::~CHMSXPrescriptionPopup(){
}
void CHMSXPrescriptionPopup::OnCreateComponents(){
	m_wndPrescriptionInput.Create(this, _T("Prescription Input"), 0, 0, 585, 150);
	m_wndStockLabel.Create(this, _T("Stock"), 5, 30, 105, 55);
	m_wndStock.Create(this,110, 30, 370, 55); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 375, 30, 445, 55);
	m_wndOrderDate.Create(this,450, 30, 580, 55); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 60, 80, 85);
	m_wndName.Create(this,110, 60, 370, 85); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 375, 60, 445, 85);
	m_wndQty.Create(this,450, 60, 520, 85); 
	m_wndMaxQuantity.Create(this,525, 60, 580, 85); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 5, 90, 105, 115);
	m_wndIndication.Create(this,110, 90, 315, 115); 
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 320, 90, 400, 115);
	m_wndTimeDay.Create(this,405, 90, 445, 115); 
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 450, 90, 520, 115);
	m_wndTimeQty.Create(this,525, 90, 580, 115); 
	m_wndUsageLabel.Create(this, _T("Usage"), 5, 120, 105, 145);
	m_wndUsage.Create(this,110, 120, 445, 145);	
	m_wndSave.Create(this, _T("&Save"), 450, 120, 545, 145);
	m_wndClose.Create(this, _T("&X"), 550, 120, 580, 145);	
}
void CHMSXPrescriptionPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStock.SetCheckValue(true);
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
	

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndIndication.InsertColumn(0,_T("ID"), CFMT_NUMBER, 40);
	m_wndIndication.InsertColumn(1,_T("Desc"), CFMT_TEXT, 200);

	m_wndName.InsertColumn(0, _T("refidx"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndName.InsertColumn(3, _T("Unit Price"), CFMT_NUMBER, 0);
	m_wndName.InsertColumn(4, _T("Generic"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(5, _T("Prod.Country"), CFMT_TEXT, 90);
	m_wndName.InsertColumn(6, _T("Onhand Qty"), CFMT_NUMBER, 70);
	m_wndName.InsertColumn(7, _T("countryid"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(8, _T("itemid"), CFMT_TEXT, 0);
	m_wndName.InsertColumn(9, _T("Dosage"), CFMT_TEXT, 0);
	
	
	m_hms_pharma_orderTbl.SetTableName(_T("hms_pharma_xorder"));

	m_hms_pharma_orderTbl.AddField(_T("hpo_moduleid"), dfText, 3); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_storage_id"), dfLong); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_refidx"), dfInteger); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_bedid"), dfInteger); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_depttype"), dfText, 1); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_ordertype"), dfText, 1); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_orderstatus"), dfText, 1); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_transaction_id"), dfText, 11); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharma_orderTbl.AddField(_T("hpol_product_id"), dfText, 15); 
	m_hms_pharma_orderTbl.AddField(_T("hpol_countryid"), dfText, 15); 
	m_hms_pharma_orderTbl.AddField(_T("hpol_refidx"), dfInteger); 
	m_hms_pharma_orderTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_pharma_orderTbl.AddField(_T("hpol_usage"), dfText, 128); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_scaledrug"), dfInteger); 



	m_hms_pharma_order_lineTbl.SetTableName(_T("hms_pharma_xorder_line"));

	m_hms_pharma_order_lineTbl.AddField(_T("hpol_orderid"), dfLong); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_stockid"), dfInteger); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_product_id"), dfText, 15); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_countryid"), dfText, 15); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_refidx"), dfInteger); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_usage"), dfText, 128); 
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_objectid"), dfText, 1); 
	
	

}
void CHMSXPrescriptionPopup::OnSetWindowEvents(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
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
			rs.GetValue(_T("pms_servdefstock"), m_szStockKey);
		}
		else
		{
			szSQL.Format(_T("SELECT Count(*) FROM hms_object ")\
						 _T("WHERE ho_type<>'S' AND ho_type in('D','P') AND ho_id='%s'"), pMF->m_szObject);
			rsm.ExecSQL(szSQL);

			if (rsm.GetIntValue() > 0)
			{
				rs.GetValue(_T("pms_milpoldefstock"), m_szStockKey);
			}
			else
			{
				rs.GetValue(_T("pms_edefaultstockid"), m_szStockKey);
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
		if(stockid == m_szStockKey){
			bFound = true;
			break;
		}
	}
	if(!bFound)
		m_szStockKey.Empty();

	
	CRecord rs2(&pMF->m_db);
/*
	if(m_nOrderID <= 0)
	{
		
	//	CString szSQL;
		szSQL.Format(_T("SELECT distinct hpo_orderid FROM hms_pharma_xorder WHERE hpo_docno=%ld and hpo_createdby='%s' and hpo_orderstatus in('O','S') "), pMF->m_nDocumentNo, pMF->GetCurrentUser());
		if(!m_szStockKey.IsEmpty())
			szSQL.AppendFormat(_T(" and hpo_storage_id=%d "), str2int(m_szStockKey));
		rs2.ExecSQL(szSQL);
		
		m_szOrders = _T("-1");
		while(rs2.IsEOF())
		{
			rs2.GetValue(_T("hpo_orderid"), m_nOrderID);
			if(!m_szOrders.IsEmpty())
				m_szOrders.AppendFormat(_T(","));
			m_szOrders.AppendFormat(_T("%d"), m_nOrderID);
			rs2.MoveNext();
		}
	}
	else
*/
	if(m_nOrderID > 0)
	{
		szSQL.Format(_T("SELECT distinct hpo_storage_id FROM hms_pharma_xorder WHERE hpo_docno=%ld and hpo_orderid=%ld and hpo_orderstatus in('O','S') "), pMF->m_nDocumentNo, m_nOrderID);
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
			rs2.GetValue(_T("hpo_storage_id"), m_szStockKey);
	}
	
	if(m_nOrderID > 0)
	{
	//	OnListLoadData();
	}

	
	SetMode(GetMode());
	if(m_szStockKey.IsEmpty())
		m_wndStock.SetFocus();
	

}
void CHMSXPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
}
void CHMSXPrescriptionPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_storage_id"), m_szStockKey);
	rs.GetValue(_T("product_name"), m_szNameKey);
	rs.GetValue(_T("hpol_orderqty"), m_nQty);
	rs.GetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSXPrescriptionPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharma_orderTbl.SetValue(_T("hpo_moduleid"), _T("EM"));
	m_hms_pharma_orderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_storage_id"), m_szStockKey);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharma_orderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_refidx"), pMF->m_nRefIndex);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_doctor"), pMF->m_szDoctor);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_orderstatus"), _T("O"));
	m_hms_pharma_orderTbl.SetValue(_T("hpo_ordertype"), _T("P"));
	m_hms_pharma_orderTbl.SetValue(_T("hpo_payment"), _T("N"));
	m_hms_pharma_orderTbl.SetValue(_T("hpo_depttype"), _T("E"));

	CString szItemId = m_wndName.GetCurrent(8);
	CString szCountryID = m_wndName.GetCurrent(7);


	m_hms_pharma_orderTbl.SetValue(_T("hpol_product_id"), szItemId);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_countryid"), szCountryID);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_refidx"), m_szNameKey);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_usage"), m_szUsage);
	
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_stockid"), m_szStockKey);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_product_id"), szItemId);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_refidx"), m_szNameKey);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_usage"), m_szUsage);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_objectid"), pMF->GetObjectType());

}
void CHMSXPrescriptionPopup::SetDefaultValues(){

	//m_szStockKey.Empty();
	//m_szOrderDate.Empty();

	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_szUsage.Empty();	

}
int CHMSXPrescriptionPopup::SetMode(int nMode){
	
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
			if(m_szStockKey.IsEmpty())
				m_wndStock.SetFocus();
			else
				m_wndName.SetFocus();
			m_szOrderDate = pMF->GetSysDate();
		//	m_wndStock.SetFocus();
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
			m_wndName.SetFocus();
			m_wndStock.EnableWindow(FALSE);
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

void CHMSXPrescriptionPopup::OnStockSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSXPrescriptionPopup::OnStockSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szStockKey = m_wndStock.GetCurrent(0);
	SetDefaultValues();
	UpdateData(true);
	m_szOrderDate = pMF->GetSysDate();
	m_wndOrderDate.SetMin(CDate(pMF->m_szEntryDate));
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	CGuiPopup::SetMode(VM_ADD);
	
	CRecord rs2(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT distinct hpo_orderid FROM hms_pharma_xorder WHERE hpo_docno=%ld and hpo_createdby='%s' and hpo_orderstatus in('O','S') "), pMF->m_nDocumentNo, pMF->GetCurrentUser());
	szSQL.AppendFormat(_T(" and hpo_storage_id=%d "), str2int(m_szStockKey));

	_debug(_T("\r\n%s"), szSQL);

	rs2.ExecSQL(szSQL);
	m_szOrders = _T("-1");
	while(!rs2.IsEOF())
	{
		rs2.GetValue(_T("hpo_orderid"), m_nOrderID);
		if(!m_szOrders.IsEmpty())
			m_szOrders.AppendFormat(_T(","));
		m_szOrders.AppendFormat(_T("%d"), m_nOrderID);
		_debug(_T("\r\norderid=%d"), m_nOrderID);
		rs2.MoveNext();
	}

	UpdateData(FALSE);
 
}
/*void CHMSXPrescriptionPopup::OnStockSetfocus(){
	
}*/
/*void CHMSXPrescriptionPopup::OnStockKillfocus(){
	
}*/
long CHMSXPrescriptionPopup::OnStockLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
		szWhere.Format(_T(" AND pmsl_stockid=%d "), ToInt(m_szStockKey));
	};

	szWhere.AppendFormat(_T(" and pmsl_stockid in(%s) "), pMF->m_szStorages);

	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM pms_stocklist ") \
		_T("WHERE (pmsl_type in('A','B','D') OR (pmsl_type='C' AND pmsl_deptid='%s' ) ) AND pmsl_active='Y' %s ORDER BY pmsl_stockid"),
		pMF->m_szDept, szWhere);
_debug(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSXPrescriptionPopup::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSXPrescriptionPopup::OnOrderDateChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnOrderDateSetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnOrderDateKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSXPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSXPrescriptionPopup::OnNameSelendok()
{
	UpdateData(true);
	m_szNameKey = m_wndName.GetCurrent(0);
	m_nMaxQuantity = ToLong(m_wndName.GetCurrent(6));
	m_szUnit = m_wndName.GetCurrent(2);
	m_szProdCountry = m_wndName.GetCurrent(5);
	m_szUsage = m_wndName.GetCurrent(9);
	//Debug
	_debug(_T("MAX QTY: %d"), m_nMaxQuantity);

	UpdateData(false);

}
/*void CHMSXPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CHMSXPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CHMSXPrescriptionPopup::OnNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndName.IsSearchKey() && str2long(m_szNameKey))
	{
		szWhere.AppendFormat(_T(" AND pmsi_refidx=%ld "), str2long(m_szNameKey));
	}
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	int nLevel1 = -1, nLevel2 = -1, nLevel3 = -1;

	if (pMF->CheckPermission(_T("05.06")))
	{
		nLevel1 = 1;
	}
	if (pMF->CheckPermission(_T("05.07")))
	{
		nLevel2 = 2;
	}
	if (pMF->CheckPermission(_T("05.08")))
	{
		nLevel3 = 3;
	}

	if (nLevel1 > 0 || nLevel2 > 0 || nLevel3 > 0)
		szWhere.AppendFormat(_T(" AND (pmi_level IN(%d,%d,%d,0) OR pmi_level is null) "),
		                     nLevel1, nLevel2, nLevel3);

	 szSQL.Format(_T(" SELECT  pmsi_refidx as refidx, ") \
				_T(" 	pmi_id as itemid, ") \
				_T(" 	pmi_name as name, ") \
				_T(" 	pmi_unit as unit, ") \
				_T(" 	pmg_name as genericname, ") \
				_T(" 	sum(pmsl_quantity-pmsl_orderqty) as orderqty, ") \
				_T(" 	(select distinct sc_name from sys_country where sc_id=pmsi_countryid) as country, ") \
				_T("	pmsi_countryid as countryid ") \
				_T(" FROM pms_stockline ") \
				_T(" LEFT JOIN m_productitem_view ON(pmsl_sitemid=product_item_id)") \
				_T(" LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)") \
				_T(" LEFT JOIN pms_generic  on(pmi_genericid=pmg_id) ") \
				_T(" WHERE pmsl_stockid=%ld ") \
				_T(" 	and pmsl_quantity-pmsl_orderqty > 0 ") \
				_T(" 	and (pmsi_expdate=to_date('1752-09-14', 'yyyy/mm/dd hh24:mi:ss') or pmsi_expdate > to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ) %s ") \
				_T(" GROUP BY pmsi_refidx, pmi_id, pmi_name, pmi_unit,  pmg_name, pmsi_countryid ") \
				_T(" ORDER BY name, unit"), str2int(m_szStockKey), m_szOrderDate, szWhere );

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("refidx")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("vatprice")), 
			rs.GetValue(_T("genericname")), 
			rs.GetValue(_T("country")),
			rs.GetValue(_T("orderqty")),
			rs.GetValue(_T("countryid")),
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("dosage")),
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSXPrescriptionPopup::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSXPrescriptionPopup::OnUnitChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnUnitSetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnUnitKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSXPrescriptionPopup::OnProdCountryChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnProdCountrySetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnProdCountryKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnProdCountryCheckValue(){
	return 0;
} 
/*void CHMSXPrescriptionPopup::OnQtyChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnQtyCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

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
		CString szItemId = m_wndName.GetCurrent(8);
		long nMinQty, nMaxQty;
		szSQL.Format(_T("SELECT pmi_minquantity AS MinQty, pmi_maxquantity AS MaxQty ")\
					 _T("FROM pms_items ")\
					 _T("WHERE pmi_id='%s' AND (pmi_minquantity > 0 OR pmi_maxquantity > 0) AND rownum < 2"),
					 szItemId);
		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
		{
			rs.GetValue(_T("MinQty"), nMinQty);
			rs.GetValue(_T("MaxQty"), nMaxQty);
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
/*void CHMSXPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
/*void CHMSXPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnUsageKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnUsageCheckValue(){
	return 0;
} 

/*void CHMSXPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
void CHMSXPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSXPrescriptionPopup::OnIndicationSelendok(){
	 UpdateData(true);
	m_szUsage = m_wndIndication.GetCurrent(1);
	UpdateData(false);

}
/*void CHMSXPrescriptionPopup::OnIndicationSetfocus(){
	
}*/
/*void CHMSXPrescriptionPopup::OnIndicationKillfocus(){
	
}*/
long CHMSXPrescriptionPopup::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndIndication, m_szIndicationKey);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY CAST(ss_code AS INTEGER) "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSXPrescriptionPopup::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSXPrescriptionPopup::OnTimeDayChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnTimeDaySetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnTimeDayKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnTimeDayCheckValue(){
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
/*void CHMSXPrescriptionPopup::OnTimeQtyChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnTimeQtySetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnTimeQtyKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnTimeQtyCheckValue(){
	UpdateData(true);
	if(m_szUsage.IsEmpty() || m_szTimeQty.IsEmpty())
		return 0;
	#ifdef UNICODE
		m_szUsage.Format(_T("%s ngày %s l\x1EA7n m\x1ED7i l\x1EA7n %s %s"), m_wndIndication.GetCurrent(1),  m_szTimeDay, m_szTimeQty, m_szUnit);
	#endif
	UpdateData(false);

	return 0;
} 
/*void CHMSXPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnUsageKillfocus(){
	
} */

	void CHMSXPrescriptionPopup::OnSearchForGenericNameSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSXPrescriptionPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSXPrescriptionPopup();
} 


void CHMSXPrescriptionPopup::OnConfirmSelect()
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
	szSQL.Format(_T("UPDATE hms_pharma_xorder SET hpo_orderstatus='S', hpo_doctor='%s' WHERE hpo_orderid=%ld and hpo_orderstatus='O' "), 
		pMF->m_szDoctor, m_nOrderID);
	_debug(_T("\t\n%s"), szSQL);
	pMF->ExecSQL(szSQL);

} 
void CHMSXPrescriptionPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	ClosePopup();
	
} 
/*void CHMSXPrescriptionPopup::OnTotalCostChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnTotalCostSetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnTotalCostKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnTotalCostCheckValue(){
	return 0;
} 
/*void CHMSXPrescriptionPopup::OnPatientPaidChange(){
	
} */
/*void CHMSXPrescriptionPopup::OnPatientPaidSetfocus(){
	
} */
/*void CHMSXPrescriptionPopup::OnPatientPaidKillfocus(){
	
} */
int CHMSXPrescriptionPopup::OnPatientPaidCheckValue()
{
	return 0;
} 
int CHMSXPrescriptionPopup::OnAddHMSXPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSXPrescriptionPopup::OnEditHMSXPrescriptionPopup()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSXPrescriptionPopup::OnDeleteHMSXPrescriptionPopup(){
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
 		OnCancelHMSXPrescriptionPopup(); 
 	}
	return 0;
}
int CHMSXPrescriptionPopup::OnSaveHMSXPrescriptionPopup()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	m_hms_pharma_orderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);

 	if(!IsValidateData()) 
 		return -1; 
	
 	CString szSQL, szSQL2; 
//	int ret;
	int nStockID;
	long nOID = 0;
	CRecord rs(&pMF->m_db);
	nStockID = ToInt(m_szStockKey);
	if(nStockID <= 0)
		return -1;
	
	pMF->BeginTransaction();
	szSQL.Format(_T("hms_pharma_xorder_add(%s) "), m_hms_pharma_orderTbl.FormatSQL());

	nOID = str2long(pMF->ExecDML(szSQL));

//_debug(_T("\r\n%s"), szSQL);
	if(nOID <= 0)
	{
		pMF->Rollback();
		return -1;
	}
	pMF->Commit();
	if(nOID != m_nOrderID)
	{		
		m_nOrderID = nOID;
		CString tmpStr;
		tmpStr.Format(_T("%ld"),m_nOrderID);
		if(m_szOrders.Find(tmpStr) == -1)
		{
			m_szOrders.AppendFormat(_T(",%ld"), m_nOrderID);
		}
		((CHMSXPrescriptionDlg*)m_wndParent)->m_nOrderID = m_nOrderID;
		((CHMSXPrescriptionDlg*)m_wndParent)->OnOrderListLoadData();
		
	}	
	SetMode(VM_ADDCHILD);
	((CHMSXPrescriptionDlg*)m_wndParent)->OnDrugListLoadData();	
	return m_nOrderID; 

}
int CHMSXPrescriptionPopup::OnCancelHMSXPrescriptionPopup(){
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
int CHMSXPrescriptionPopup::OnHMSXPrescriptionPopupListLoadData(){
	return 0;
}
BEGIN_MESSAGE_MAP(CHMSXPrescriptionPopup, CGuiPopup)
	
END_MESSAGE_MAP()

void CHMSXPrescriptionPopup::ShowPopup(CWnd *pWndRef, int nShow){
	CGuiPopup::ShowPopup(pWndRef, nShow);
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT count(*) FROM hms_pharma_xorder WHERE hpo_docno = %ld  "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//if(rs.GetIntValue()>0)
	//{
	//	CRect rect;
	//	GetDesktopWindow()->GetClientRect(&rect);
	//	rect.right = rect.top+m_wndDrugOrder.GetWidth();
	//	rect.bottom -=50;		
	//	//m_wndDrugOrder.GetDataToScreen();
	//	/*m_wndDrugOrder.SetWindowPos(NULL, rect.left, rect.top, rect.Width(), rect.Height(), SWP_NOZORDER|SWP_SHOWWINDOW|SWP_ASYNCWINDOWPOS);*/
	//	m_wndDrugOrder.SetParent(GetDesktopWindow());
	//	m_wndDrugOrder.BringWindowToTop();
	//	
	//}
	
} 
void CHMSXPrescriptionPopup::ClosePopup()
{

	AfxGetApp()->BeginWaitCursor();
	
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
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

	
	((CHMSXPrescriptionDlg*) GetParent())->OnAfterClosePopup();
	((CHMSXPrescriptionDlg*) GetParent())->SetMode(VM_VIEW);
	CGuiPopup::ClosePopup();
	((CHMSXPrescriptionDlg*) GetParent())->m_wndSend.SetFocus();

}


