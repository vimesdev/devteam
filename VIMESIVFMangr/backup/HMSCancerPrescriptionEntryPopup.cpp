#include "HMSCancerPrescriptionEntryPopup.h"
#include "MainFrm.h"
static void _OnOrgNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryPopup* )pWnd)->OnOrgNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrgNameSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnOrgNameSelendok();
}
/*static void _OnOrgNameSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnOrgNameKillfocus();
}*/
/*static void _OnOrgNameKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnOrgNameKillfocus();
}*/
static long _OnOrgNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnOrgNameLoadData();
}
/*static void _OnOrgNameAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnOrgNameAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryPopup* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnStorageAddNew();
}*/
static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryPopup* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDrugNameAddNew();
}*/

static int _OnExternalNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnExternalNameCheckValue();
}

/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUnitCheckValue();
}

static int _OnExternalUnitLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnExternalUnitLoadData();
}


/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnQtyCheckValue();
} 
static void _OnDousageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryPopup* )pWnd)->OnDousageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDousageSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDousageSelendok();
}
/*static void _OnDousageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDousageKillfocus();
}*/
/*static void _OnDousageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDousageKillfocus();
}*/
static long _OnDousageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDousageLoadData();
}
/*static void _OnDousageAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnDousageAddNew();
}*/
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnUsageCheckValue();
} 
/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryPopup *)pWnd)->OnSpeedCheckValue();
} 

static void _OnGenericSearchSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionEntryPopup *pVw = (CHMSCancerPrescriptionEntryPopup *)pWnd;
	pVw->OnGenericSearchSelect();
}

static void _OnExternalSaleSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionEntryPopup *pVw = (CHMSCancerPrescriptionEntryPopup *)pWnd;
	pVw->OnExternalSaleSelect();
}

static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionEntryPopup *pVw = (CHMSCancerPrescriptionEntryPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionEntryPopup *pVw = (CHMSCancerPrescriptionEntryPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancerPrescriptionEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryPopup*)pWnd)->OnAddHMSCancerPrescriptionEntryPopup();
} 
static int _OnEditHMSCancerPrescriptionEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryPopup*)pWnd)->OnEditHMSCancerPrescriptionEntryPopup();
} 
static int _OnDeleteHMSCancerPrescriptionEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryPopup*)pWnd)->OnDeleteHMSCancerPrescriptionEntryPopup();
} 
static int _OnSaveHMSCancerPrescriptionEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryPopup*)pWnd)->OnSaveHMSCancerPrescriptionEntryPopup();
} 
static int _OnCancelHMSCancerPrescriptionEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryPopup*)pWnd)->OnCancelHMSCancerPrescriptionEntryPopup();
} 
CHMSCancerPrescriptionEntryPopup::CHMSCancerPrescriptionEntryPopup(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
	CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 820;
	m_nDlgHeight = 120;
	SetDefaultValues();
	m_nStorageId = 0;
	m_nOrderId = 0;
	m_nDiagrameId = 0;
	m_nStorageId = 0;
	m_nCancerOrderId = 0;
	m_nCancerOrderLineId = 0;
	m_szStorageKey.Empty();
	m_szDousageKey.Empty();
	m_szUsage.Empty();
	m_bGenericSearch = FALSE;
	m_bIncludeServiceStorage = FALSE;
	m_bExternalSale = FALSE;

}
CHMSCancerPrescriptionEntryPopup::~CHMSCancerPrescriptionEntryPopup(){
}
void CHMSCancerPrescriptionEntryPopup::OnCreateComponents(){
	m_wndOrgNameLabel.Create(this, _T("OrgName"), 5, 5, 105, 30);
	m_wndOrgName.Create(this,110, 5, 410, 30); 
	m_wndStorageLabel.Create(this, _T("Storage"), 415, 5, 515, 30);
	m_wndStorage.Create(this,520, 5, 820, 30); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 5, 35, 105, 60);
	m_wndDrugName.Create(this,110, 35, 410, 60); 
	m_wndExternalName.Create(this,110, 35, 410, 60); 
	m_wndUnitLabel.Create(this, _T("Unit"), 415, 35, 515, 60);
	m_wndUnit.Create(this,520, 35, 620, 60); 
	m_wndExternalUnit.Create(this,520, 35, 620, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 625, 35, 725, 60);
	m_wndQty.Create(this,730, 35, 820, 60); 
	m_wndDousageLabel.Create(this, _T("Dousage"), 5, 65, 105, 90);
	m_wndDousage.Create(this,110, 65, 210, 90); 
	m_wndUsageLabel.Create(this, _T("Usage"), 215, 65, 315, 90);
	m_wndUsage.Create(this,320, 65, 620, 90); 
	m_wndSpeedLabel.Create(this, _T("Speed"), 625, 65, 725, 90);
	m_wndSpeed.Create(this,730, 65, 820, 90); 
	m_wndGenericSearch.Create(this, _T("Tìm theo tên hoạt chất"), 5, 95, 200, 120);
	m_wndIncludeServiceStorage.Create(this, _T("Kê thuốc từ kho dịch vụ"), 205, 95, 400, 120);
	m_wndExternalSale.Create(this, _T("Tự mua"), 405, 95, 600, 120);
	m_wndSave.Create(this, _T("&Save"), 730, 95, 790, 120);
	m_wndClose.Create(this, _T("X"), 795, 95, 822, 120);

	m_wndGenericSearch.ModifyStyle(WS_TABSTOP, 0);
	m_wndIncludeServiceStorage.ModifyStyle(WS_TABSTOP, 0);
	m_wndExternalSale.ModifyStyle(WS_TABSTOP, 0);
	m_wndExternalName.ShowWindow(SW_HIDE);
	m_wndExternalUnit.ShowWindow(SW_HIDE);
}
void CHMSCancerPrescriptionEntryPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrgName.SetCheckValue(true);
	m_wndOrgName.LimitText(35);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndExternalName.SetCheckValue(false);
	m_wndDrugName.LimitText(35);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(false);
	m_wndUnit.SetReadOnly(true);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);
	m_wndDousage.SetCheckValue(true);
	m_wndDousage.LimitText(35);
	m_wndUsage.SetLimitText(254);
	m_wndUsage.SetCheckValue(true);


	m_wndOrgName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOrgName.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDrugName.InsertColumn(0, _T(""), CFMT_TEXT, 0); //ProductID
	m_wndDrugName.InsertColumn(1, _T("Drug Name"), CFMT_TEXT, 350);
	m_wndDrugName.InsertColumn(2, _T("Generic Name"), CFMT_TEXT, 150);
	m_wndDrugName.InsertColumn(3, _T("Uom"), CFMT_TEXT, 60);
	m_wndDrugName.InsertColumn(4, _T("Prod.Country"), CFMT_TEXT, 80);
	m_wndDrugName.InsertColumn(5, _T("On Hand"), CFMT_NUMBER, 65);
	m_wndDrugName.InsertColumn(6, _T(""), CFMT_TEXT, 0);//precision
	m_wndDrugName.Format(6, 1);
	m_wndDrugName.SetSearchStyle(SS_COMPARE);



	
	
	m_wndDousage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDousage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndExternalUnit.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExternalUnit.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


}
void CHMSCancerPrescriptionEntryPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrgName.SetEvent(WE_SELENDOK, _OnOrgNameSelendokFnc);
	//m_wndOrgName.SetEvent(WE_SETFOCUS, _OnOrgNameSetfocusFnc);
	//m_wndOrgName.SetEvent(WE_KILLFOCUS, _OnOrgNameKillfocusFnc);
	m_wndOrgName.SetEvent(WE_SELCHANGE, _OnOrgNameSelectChangeFnc);
	m_wndOrgName.SetEvent(WE_LOADDATA, _OnOrgNameLoadDataFnc);
	//m_wndOrgName.SetEvent(WE_ADDNEW, _OnOrgNameAddNewFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndDrugName.SetEvent(WE_SELENDOK, _OnDrugNameSelendokFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_SELCHANGE, _OnDrugNameSelectChangeFnc);
	m_wndDrugName.SetEvent(WE_LOADDATA, _OnDrugNameLoadDataFnc);
	
	//m_wndDrugName.SetEvent(WE_ADDNEW, _OnDrugNameAddNewFnc);
	m_wndExternalName.SetEvent(WE_CHECKVALUE, _OnExternalNameCheckValueFnc);
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndExternalUnit.SetEvent(WE_LOADDATA, _OnExternalUnitLoadDataFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndDousage.SetEvent(WE_SELENDOK, _OnDousageSelendokFnc);
	//m_wndDousage.SetEvent(WE_SETFOCUS, _OnDousageSetfocusFnc);
	//m_wndDousage.SetEvent(WE_KILLFOCUS, _OnDousageKillfocusFnc);
	m_wndDousage.SetEvent(WE_SELCHANGE, _OnDousageSelectChangeFnc);
	m_wndDousage.SetEvent(WE_LOADDATA, _OnDousageLoadDataFnc);
	//m_wndDousage.SetEvent(WE_ADDNEW, _OnDousageAddNewFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	m_wndGenericSearch.SetEvent(WE_CLICK, _OnGenericSearchSelectFnc);
	m_wndExternalSale.SetEvent(WE_CLICK, _OnExternalSaleSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	int nMode = GetMode();
	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();
	SetMode(nMode);

}
void CHMSCancerPrescriptionEntryPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrgName.GetDlgCtrlID(), m_szOrgNameKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndDousage.GetDlgCtrlID(), m_szDousageKey);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);
	
	DDX_Check(pDX, m_wndGenericSearch.GetDlgCtrlID(), m_bGenericSearch);
	DDX_Check(pDX, m_wndIncludeServiceStorage.GetDlgCtrlID(), m_bIncludeServiceStorage);
	DDX_Check(pDX, m_wndExternalSale.GetDlgCtrlID(), m_bExternalSale);
	DDX_Text(pDX, m_wndExternalName.GetDlgCtrlID(), m_szExternalName);
	DDX_TextEx(pDX, m_wndExternalUnit.GetDlgCtrlID(), m_szExternalUnitKey);
}
void CHMSCancerPrescriptionEntryPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("OrgName")] =  m_szOrgNameKey;
	m_jData[_T("Storage")] =  m_szStorageKey;
	m_jData[_T("DrugName")] =  m_szDrugNameKey;
	m_jData[_T("Unit")] =  m_szUnit;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Dousage")] =  m_szDousageKey;
	m_jData[_T("Usage")] =  m_szUsage;
	}
	else
	{
			
	m_jData[_T("OrgName")].GetValue(m_szOrgNameKey);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	m_jData[_T("DrugName")].GetValue(m_szDrugNameKey);
	m_jData[_T("Unit")].GetValue(m_szUnit);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Dousage")].GetValue(m_szDousageKey);
	m_jData[_T("Usage")].GetValue(m_szUsage);
	}

}
void CHMSCancerPrescriptionEntryPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerPrescriptionEntryPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerPrescriptionEntryPopup::SetDefaultValues(){

	m_szOrgNameKey.Empty();
	m_szDrugNameKey.Empty();
	m_szUnit.Empty();
	m_nQty=0;
	m_szSpeed.Empty();

}
int CHMSCancerPrescriptionEntryPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndOrgName.SetFocus();
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
 			EnableButtons(TRUE, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		OnExternalSaleSelect();
 		return nOldMode;
}
void CHMSCancerPrescriptionEntryPopup::OnOrgNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryPopup::OnOrgNameSelendok(){
	 
}
/*void CHMSCancerPrescriptionEntryPopup::OnOrgNameSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryPopup::OnOrgNameKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryPopup::OnOrgNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrgName.IsSearchKey() && !m_szOrgNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrgNameKey);
	};
	m_wndOrgName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hcol_cancer_orderline_id AS id,") \
_T("   hcol_tenthuoc                 AS name,") \
_T("   hcol_lieudung_m2  ") \
_T(" FROM hms_cancer_orderline") \
_T(" WHERE hcol_cancer_order_id = %ld and nvl(hcol_status,'N') <> 'C' ") \
_T(" ORDER BY hcol_type,") \
_T("   hcol_index,") \
_T("   hcol_tenthuoc"), m_nOrderId);
_tprintf(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrgName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

	return 0;
}
/*void CHMSCancerPrescriptionEntryPopup::OnOrgNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerPrescriptionEntryPopup::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryPopup::OnStorageSelendok(){
	 
}
/*void CHMSCancerPrescriptionEntryPopup::OnStorageSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryPopup::OnStorageKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryPopup::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Empty();
	
	szFilter.AppendFormat(_T(" and msl_org_id='PM' "));
	szFilter.AppendFormat(_T(" and msl_type<>'C' "));
	if(m_bIncludeServiceStorage)
	{
		szFilter.AppendFormat(_T(" and  msl_storage_id = 14 "));
	}
	else
	{
		szFilter.AppendFormat(_T(" and  msl_storage_id in(select msd_storage_id from m_storage_default where msd_object_id=%d) "),pMF->GetObjectID());
	}
	return pMF->LoadStorageList(&m_wndStorage, m_szStorageKey, szFilter);

	return 0;
}
/*void CHMSCancerPrescriptionEntryPopup::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerPrescriptionEntryPopup::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryPopup::OnDrugNameSelendok(){
	 UpdateData(TRUE);
	 m_szUnit = m_wndDrugName.GetCurrent(3);
	 UpdateData(FALSE);
}
/*void CHMSCancerPrescriptionEntryPopup::OnDrugNameSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryPopup::OnDrugNameKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryPopup::OnDrugNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and msl_storage_id = %d "), str2int(m_szStorageKey));

	return pMF->LoadProductItemList(&m_wndDrugName, m_szDrugNameKey, szFilter);

/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugName.IsSearchKey() && !m_szDrugNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDrugNameKey
};
	m_wndDrugName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionEntryPopup::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

int CHMSCancerPrescriptionEntryPopup::OnExternalNameCheckValue(){
	return 0;
} 

/*void CHMSCancerPrescriptionEntryPopup::OnUnitChange(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnUnitSetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnUnitKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryPopup::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionEntryPopup::OnQtyChange(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnQtySetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnQtyKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryPopup::OnQtyCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionEntryPopup::OnDousageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryPopup::OnDousageSelendok(){
	UpdateData(true);
	m_szUsage = m_wndDousage.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSCancerPrescriptionEntryPopup::OnDousageSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryPopup::OnDousageKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryPopup::OnDousageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadDrugIndication(&m_wndDousage, m_szDousageKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDousage.IsSearchKey() && !m_szDousageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDousageKey
};
	m_wndDousage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDousage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionEntryPopup::OnDousageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnUsageChange(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnUsageSetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnUsageKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryPopup::OnUsageCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionEntryPopup::OnSpeedChange(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnSpeedSetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryPopup::OnSpeedKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryPopup::OnSpeedCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionEntryPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCancerPrescriptionEntryPopup();
} 
void CHMSCancerPrescriptionEntryPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiPopup::OnCancel();
} 
int CHMSCancerPrescriptionEntryPopup::OnAddHMSCancerPrescriptionEntryPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerPrescriptionEntryPopup::OnEditHMSCancerPrescriptionEntryPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerPrescriptionEntryPopup::OnDeleteHMSCancerPrescriptionEntryPopup(){
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
 		OnCancelHMSCancerPrescriptionEntryPopup();
 	}
	return 0;
}

#include "HMSCancerPrescriptionPrepareDialog.h"

int CHMSCancerPrescriptionEntryPopup::OnSaveHMSCancerPrescriptionEntryPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	long nCancerOrderLineId = str2long(m_wndOrgName.GetCurrent(0));
 	if(GetMode() == VM_ADD){
		//TRUONG HOP THUOC TU MUA
		if(m_bExternalSale)
		{
			m_szUnit = m_wndExternalUnit.GetCurrent(1);
			szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEMEX(%ld, %ld,  %ld, %ld, '%s', '%s', %ld, '%s', %.2f, '%s', '%s', '%s')"),
			pMF->m_nDocumentNo, m_nTreatIdx, m_nOrderId, nCancerOrderLineId,
			pMF->GetCurrentUser(), m_szExternalName, str2long(m_szExternalUnitKey), m_szUnit, m_nQty, m_szUsage, m_szSpeed, m_szDousageKey);
_tprintf(_T("\r\n%s"), szSQL);
		}
		else
		{
 			szSQL.Format(_T("HMS_CANCER_ORDER_CREATEITEM2(%ld, %ld, %ld, '%s', %d, %ld,%.2f, '%s', '%s', '%s')"),
			pMF->m_nDocumentNo, m_nOrderId, nCancerOrderLineId,
			pMF->GetCurrentUser(), str2int(m_szStorageKey), str2long(m_szDrugNameKey), m_nQty, m_szUsage, m_szSpeed, m_szDousageKey);
		}
		int ret = str2int(pMF->ExecDML(szSQL));
		if(ret >  0)
		{
			szSQL.Format(_T("UPDATE hms_cancer_orderline SET hcol_status = 'Y' WHERE hcol_cancer_order_id = %ld and hcol_cancer_orderline_id = %d"), m_nOrderId, nCancerOrderLineId);
			pMF->ExecSQL(szSQL);


			((CHMSCancerPrescriptionPrepareDialog*)m_pPrescriptionOrder)->OnListLoadData();
			SetMode(VM_ADD);
			
		}
		else
		{
			
		}
 	}
 	else if(GetMode() == VM_EDIT){
 	}
 	return 0;
}
int CHMSCancerPrescriptionEntryPopup::OnCancelHMSCancerPrescriptionEntryPopup(){
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
int CHMSCancerPrescriptionEntryPopup::OnHMSCancerPrescriptionEntryPopupListLoadData(){
	return 0;
}


void CHMSCancerPrescriptionEntryPopup::OnGenericSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szDrugNameKey.Empty();
	UpdateData(TRUE);
	if(m_bGenericSearch)
		m_wndDrugName.Format(5, 1, 10, 2);
	else
		m_wndDrugName.Format(5, 1, 10, 1);
	m_wndDrugName.SetFocus();
	UpdateData(FALSE);
	
}

void CHMSCancerPrescriptionEntryPopup::OnExternalSaleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szDrugNameKey.Empty();
	UpdateData(TRUE);
	m_wndStorage.EnableWindow(!m_bExternalSale);
	m_wndDrugName.EnableWindow(!m_bExternalSale);
	if(m_bExternalSale)
	{
		m_wndDrugName.ShowWindow(SW_HIDE);
		m_wndUnit.ShowWindow(SW_HIDE);
		m_wndExternalName.EnableWindow(TRUE);
		m_wndExternalUnit.EnableWindow(TRUE);
		m_wndExternalName.ShowWindow(SW_SHOW);
		m_wndExternalUnit.ShowWindow(SW_SHOW);
		m_wndExternalName.SetCheckValue(true);
		m_wndExternalUnit.SetCheckValue(true);
		
	}
	else
	{
		m_wndDrugName.ShowWindow(SW_SHOW);
		m_wndUnit.ShowWindow(SW_SHOW);
		m_wndExternalName.EnableWindow(FALSE);
		m_wndExternalUnit.EnableWindow(FALSE);
		m_wndExternalName.ShowWindow(SW_HIDE);
		m_wndExternalUnit.ShowWindow(SW_HIDE);
		m_wndExternalName.SetCheckValue(false);
		m_wndExternalUnit.SetCheckValue(false);
	}
	m_wndOrgName.SetFocus();
	UpdateData(FALSE);

	
}


int CHMSCancerPrescriptionEntryPopup::OnExternalUnitLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndExternalUnit.IsSearchKey() && str2long(m_szExternalUnitKey) > 0){
		szWhere.Format(_T(" and adu_uom_id=%ld "), str2long(m_szExternalUnitKey));
	};
	m_wndExternalUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adu_uom_id as id, adu_name as name ") \
		_T("FROM ad_uom ") \
		_T("WHERE adu_isactive='Y' %s ORDER BY adu_uom_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExternalUnit.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;	

}