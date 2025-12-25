#include "HMSPrescriptionDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionDialog* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDialog *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDialog *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionDialog *pVw = (CHMSPrescriptionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionDialog *pVw = (CHMSPrescriptionDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDialog*)pWnd)->OnAddHMSPrescriptionDialog();
} 
static int _OnEditHMSPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDialog*)pWnd)->OnEditHMSPrescriptionDialog();
} 
static int _OnDeleteHMSPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDialog*)pWnd)->OnDeleteHMSPrescriptionDialog();
} 
static int _OnSaveHMSPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDialog*)pWnd)->OnSaveHMSPrescriptionDialog();
} 
static int _OnCancelHMSPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDialog*)pWnd)->OnCancelHMSPrescriptionDialog();
} 
CHMSPrescriptionDialog::CHMSPrescriptionDialog(){

	m_nDlgWidth = 671;
	m_nDlgHeight = 218;
	SetDefaultValues();
}
CHMSPrescriptionDialog::~CHMSPrescriptionDialog(){
}
void CHMSPrescriptionDialog::OnCreateComponents(){
	m_wndDrugEntry.Create(this, _T("Drug Entry"), 0, 0, 585, 145);
	m_wndStockLabel.Create(this, _T("Stock"), 5, 25, 105, 50);
	m_wndStock.Create(this,110, 25, 400, 50); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 405, 25, 475, 50);
	m_wndOrderDate.Create(this,480, 25, 580, 50); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 55, 105, 80);
	m_wndName.Create(this,110, 55, 400, 80); 
	m_wndQtyLabel.Create(this, _T("Qty"), 405, 55, 475, 80);
	m_wndQty.Create(this,480, 55, 520, 80); 
	m_wndMaxQuantity.Create(this,525, 55, 580, 80); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 5, 85, 105, 110);
	m_wndIndication.Create(this,110, 85, 270, 110); 
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 275, 85, 355, 110);
	m_wndTimeDay.Create(this,360, 85, 400, 110); 
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 405, 85, 475, 110);
	m_wndTimeQty.Create(this,480, 85, 580, 110); 
	m_wndUsageLabel.Create(this, _T("Usage"), 5, 115, 105, 140);
	m_wndUsage.Create(this,110, 115, 470, 140); 
	m_wndSave.Create(this, _T("&Save"), 480, 115, 550, 140);
	m_wndClose.Create(this, _T("X"), 555, 115, 580, 140);

}
void CHMSPrescriptionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndStock.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(16);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(35);
	m_wndTimeDay.SetLimitText(16);
	m_wndTimeDay.SetCheckValue(true);
	m_wndTimeQty.SetLimitText(16);
	m_wndTimeQty.SetCheckValue(true);
	m_wndUsage.SetLimitText(128);
	m_wndUsage.SetCheckValue(true);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Drug Name /Cnt"), CFMT_TEXT, 200);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(3, _T("Generic"), CFMT_TEXT, 150);


	m_wndIndication.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndIndication.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_hms_pharmacyorderTbl.SetTableName(_T("hms_pharmacyorder"));
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_docno"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_deptid"), dfText, 7); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_roomid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_bedid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_receptidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderdate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_doctor"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuedate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_issuer"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_status"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_payment"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_type"), dfText, 1); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_stockid"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_sheetidx"), dfLong); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_advice"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.SetTableName(_T("hms_pharmacyorderln"));
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderno"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_idx"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_itemid"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_stockline"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_name"), dfText, 35); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_unit"), dfText, 15); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_orderqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_issueqty"), dfLong); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpol_return"), dfText, 1); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_usage"), dfText, 128); 
	m_hms_pharmacyorderlnTbl.AddField(_T("hpo_dose"), dfText, 35); 

}
void CHMSPrescriptionDialog::OnSetWindowEvents(){
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

}
void CHMSPrescriptionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_nTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_nTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);

}
void CHMSPrescriptionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpo_orderdate"), m_szOrderDate);
	rs.GetValue(_T("hpo_stockid"), m_szStockKey);
	rs.GetValue(_T("hpol_name"), m_szNameKey);
	rs.GetValue(_T("hpol_orderqty"), m_nQty);
	rs.GetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPrescriptionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
	m_hms_pharmacyorderTbl.SetValue(_T("hpo_stockid"), m_szStockKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_name"), m_szNameKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPrescriptionDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_nTimeDay=0;
	m_nTimeQty=0;
	m_szUsage.Empty();

}
int CHMSPrescriptionDialog::SetMode(int nMode){ 
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
void CHMSPrescriptionDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDialog::OnStockSelendok(){
	 
}
/*void CHMSPrescriptionDialog::OnStockSetfocus(){
	
}*/
/*void CHMSPrescriptionDialog::OnStockKillfocus(){
	
}*/
long CHMSPrescriptionDialog::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionDialog::OnOrderDateChange(){
	
} */
/*void CHMSPrescriptionDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSPrescriptionDialog::OnOrderDateKillfocus(){
	
} */
int CHMSPrescriptionDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPrescriptionDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDialog::OnNameSelendok(){
	 
}
/*void CHMSPrescriptionDialog::OnNameSetfocus(){
	
}*/
/*void CHMSPrescriptionDialog::OnNameKillfocus(){
	
}*/
long CHMSPrescriptionDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("drugname/cnt")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("generic")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionDialog::OnQtyChange(){
	
} */
/*void CHMSPrescriptionDialog::OnQtySetfocus(){
	
} */
/*void CHMSPrescriptionDialog::OnQtyKillfocus(){
	
} */
int CHMSPrescriptionDialog::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionDialog::OnMaxQuantityChange(){
	
} */
/*void CHMSPrescriptionDialog::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPrescriptionDialog::OnMaxQuantityKillfocus(){
	
} */
int CHMSPrescriptionDialog::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSPrescriptionDialog::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDialog::OnIndicationSelendok(){
	 
}
/*void CHMSPrescriptionDialog::OnIndicationSetfocus(){
	
}*/
/*void CHMSPrescriptionDialog::OnIndicationKillfocus(){
	
}*/
long CHMSPrescriptionDialog::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
	};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionDialog::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionDialog::OnTimeDayChange(){
	
} */
/*void CHMSPrescriptionDialog::OnTimeDaySetfocus(){
	
} */
/*void CHMSPrescriptionDialog::OnTimeDayKillfocus(){
	
} */
int CHMSPrescriptionDialog::OnTimeDayCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionDialog::OnTimeQtyChange(){
	
} */
/*void CHMSPrescriptionDialog::OnTimeQtySetfocus(){
	
} */
/*void CHMSPrescriptionDialog::OnTimeQtyKillfocus(){
	
} */
int CHMSPrescriptionDialog::OnTimeQtyCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionDialog::OnUsageChange(){
	
} */
/*void CHMSPrescriptionDialog::OnUsageSetfocus(){
	
} */
/*void CHMSPrescriptionDialog::OnUsageKillfocus(){
	
} */
int CHMSPrescriptionDialog::OnUsageCheckValue(){
	return 0;
} 
void CHMSPrescriptionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionDialog::OnAddHMSPrescriptionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPrescriptionDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPrescriptionDialog::OnEditHMSPrescriptionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPrescriptionDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPrescriptionDialog::OnDeleteHMSPrescriptionDialog(){
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
 		OnCancelHMSPrescriptionDialog(); 
 	}
return 0;
 } 
int CHMSPrescriptionDialog::OnSaveHMSPrescriptionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_pharmacyorderTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pharmacyorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPrescriptionDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrescriptionDialog::OnCancelHMSPrescriptionDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSPrescriptionDialog::OnHMSPrescriptionDialogListLoadData(){
	return 0;
}
