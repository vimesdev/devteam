#include "HMSPrescriptionEntry.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionEntry* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnStockAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionEntry* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionEntry* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionEntry *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionEntry *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionEntry *pVw = (CHMSPrescriptionEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionEntry *pVw = (CHMSPrescriptionEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionEntryFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionEntry*)pWnd)->OnAddHMSPrescriptionEntry();
} 
static int _OnEditHMSPrescriptionEntryFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionEntry*)pWnd)->OnEditHMSPrescriptionEntry();
} 
static int _OnDeleteHMSPrescriptionEntryFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionEntry*)pWnd)->OnDeleteHMSPrescriptionEntry();
} 
static int _OnSaveHMSPrescriptionEntryFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionEntry*)pWnd)->OnSaveHMSPrescriptionEntry();
} 
static int _OnCancelHMSPrescriptionEntryFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionEntry*)pWnd)->OnCancelHMSPrescriptionEntry();
} 
CHMSPrescriptionEntry::CHMSPrescriptionEntry(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSPrescriptionEntry::~CHMSPrescriptionEntry(){
}
void CHMSPrescriptionEntry::OnCreateComponents(){
	m_wndStockLabel.Create(this, _T("Stock"), 5, 5, 105, 30);
	m_wndStock.Create(this,110, 5, 410, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 415, 5, 490, 30);
	m_wndOrderDate.Create(this,495, 5, 595, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 35, 105, 60);
	m_wndName.Create(this,110, 35, 410, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 415, 35, 490, 60);
	m_wndQty.Create(this,495, 35, 535, 60); 
	m_wndMaxQuantity.Create(this,540, 35, 595, 60); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 5, 65, 105, 90);
	m_wndIndication.Create(this,110, 65, 280, 90); 
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 285, 65, 365, 90);
	m_wndTimeDay.Create(this,370, 65, 410, 90); 
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 415, 65, 490, 90);
	m_wndTimeQty.Create(this,495, 65, 595, 90); 
	m_wndUsageLabel.Create(this, _T("Usage"), 5, 95, 105, 120);
	m_wndUsage.Create(this,110, 95, 490, 120); 
	m_wndSave.Create(this, _T("&Save"), 495, 95, 565, 120);
	m_wndClose.Create(this, _T("X"), 570, 95, 595, 120);

}
void CHMSPrescriptionEntry::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStock.SetCheckValue(true);
	m_wndOrderDate.SetMin(CDate(pMF->m_szExamDate));
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
	m_wndMaxQuantity.SetReadOnly(TRUE);	


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 80);
	m_wndName.InsertColumn(1, _T("Drug Name /Cnt"), CFMT_TEXT, 150);
	m_wndName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndName.InsertColumn(3, _T("Generic"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(4, _T("Onhand"), CFMT_NUMBER, 80);


	m_wndIndication.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndIndication.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_hms_pharmacyorderTbl.SetTableName(_T("hms_pharmacyorder"));
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createdby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_createddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updatedby"), dfText, 15); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_updateddate"), dfDateTime); 
	m_hms_pharmacyorderTbl.AddField(_T("hpo_orderid"), dfLong); 
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
	CRect rect;
	pMF->GetWindowRect(&rect);
	rect.right -= 8;
	rect.left = rect.right - m_nDlgWidth;
	rect.top += 55;
	rect.bottom = rect.top+m_nDlgHeight;
	MoveWindow(rect);
	m_szOrderDate = pMF->GetSysDate();
}
void CHMSPrescriptionEntry::OnSetWindowEvents(){
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
void CHMSPrescriptionEntry::OnDoDataExchange(CDataExchange* pDX){
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
void CHMSPrescriptionEntry::GetDataToScreen(){
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
void CHMSPrescriptionEntry::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(GetMode() == VM_ADD) {
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT hpo_orderid FROM hms_pharmacyorder ") \
			_T(" WHERE hpo_stockid=%d AND DATE(hpo_orderdate)=DATE('%s') AND hpo_status='O' AND hpo_doctor='%s' AND hpo_roomid=%d "), 
			ToInt(m_szStockKey), m_szOrderDate, pMF->m_szDoctor, pMF->m_nRoomID);
		rs.ExecSQL(szSQL);
		if(rs.GetDoubleValue() > 0)
		{
			m_nOrderID = rs.GetDoubleValue();
			m_bAddOrder = false;
		}
		else
		{
			szSQL.Format(_T("SELECT coalesce(max(hpo_orderid), 0)+1 FROM hms_pharmacyorder ") \
				_T(" WHERE hpo_stockid=%d AND DATE(hpo_orderdate)=DATE('%s') AND hpo_status='O' AND hpo_doctor='%s' AND hpo_roomid=%d "), 
				ToInt(m_szStockKey), m_szOrderDate, pMF->m_szDoctor, pMF->m_nRoomID);
			rs.ExecSQL(szSQL);
			m_nOrderID = rs.GetDoubleValue();
			m_bAddOrder = true;
			
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_createdby"), pMF->GetCurrentUser());
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_createddate"), pMF->GetSysDateTime());
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_updatedby"), pMF->GetCurrentUser());
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_updateddate"), pMF->GetSysDateTime());
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_orderid"), m_nOrderID);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_stockid"), m_szStockKey);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_patientno"), pMF->m_nPatientNo);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_docno"), pMF->m_nDocumentNo);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_receptidx"), pMF->m_nReceptIdx);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_doctor"), pMF->m_szDoctor);
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_status"), _T("O"));
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_type"), _T("E"));
			m_hms_pharmacyorderTbl.SetValue(_T("hpo_payment"), _T("N"));
		}
	}	
	szSQL.Format(_T("SELECT coalesce(max(hpol_idx), 0)+1 FROM hms_pharmacyorderln WHERE hpol_orderno=%ld "), m_nOrderID);
	rs.ExecSQL(szSQL);
	long nOrderLine = rs.GetDoubleValue();
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_orderno"), m_nOrderID);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_idx"), nOrderLine);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_itemid"), m_szNameKey);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_name"), m_wndName.GetCurrent(1));
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_unit"), m_wndName.GetCurrent(2));
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpol_orderqty"), m_nQty);
	m_hms_pharmacyorderlnTbl.SetValue(_T("hpo_usage"), m_szUsage);

}
void CHMSPrescriptionEntry::SetDefaultValues(){

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
int CHMSPrescriptionEntry::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();
			if(m_szStockKey.IsEmpty())
				m_wndStock.SetFocus();
			else
				m_wndName.SetFocus();
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
			m_wndName.SetFocus();
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
void CHMSPrescriptionEntry::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionEntry::OnStockSelendok(){
	m_szStockKey = m_wndStock.GetCurrent(0);
	SetDefaultValues();
	CGuiView::SetMode(VM_ADD);
	UpdateData(FALSE);
}
/*void CHMSPrescriptionEntry::OnStockSetfocus(){
	
}*/
/*void CHMSPrescriptionEntry::OnStockKillfocus(){
	
}*/
long CHMSPrescriptionEntry::OnStockLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
		szWhere.Format(_T(" WHERE pmsl_stockid=%d "), ToInt(m_szStockKey));
	};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM pms_stocklist %s ORDER BY pmsl_stockid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("pmsl_stockid")), 
			rs.GetValue(_T("pmsl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSPrescriptionEntry::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionEntry::OnOrderDateChange(){
	
} */
/*void CHMSPrescriptionEntry::OnOrderDateSetfocus(){
	
} */
/*void CHMSPrescriptionEntry::OnOrderDateKillfocus(){
	
} */
int CHMSPrescriptionEntry::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPrescriptionEntry::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionEntry::OnNameSelendok(){
	UpdateData(true);
	m_szNameKey = m_wndName.GetCurrent(0);
	m_nMaxQuantity = ToLong(m_wndName.GetCurrent(4));
	UpdateData(false);
	m_wndQty.SetMinMax(1, m_nMaxQuantity);
}
/*void CHMSPrescriptionEntry::OnNameSetfocus(){
	
}*/
/*void CHMSPrescriptionEntry::OnNameKillfocus(){
	
}*/
long CHMSPrescriptionEntry::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
		szWhere.Format(_T(" AND pmi_id='%s' "), m_szNameKey);
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" select  pmi_id as id, pmi_name as name, pmg_unit as unit, pmg_name as genericname, sum(pmsl_qty-pmsl_orderqty) as orderqty ") \
			_T(" FROM pms_items") \
			_T(" LEFT JOIN pms_generic  on(pmi_genericid=pmg_id) ") \
			_T(" left join pms_stockitems on(pmsi_itemid=pmi_id)") \
			_T(" left join pms_stockline on(pmsl_sitemid=pmsi_id)") \
			_T(" WHERE pmsl_stockid=%ld %s ") \
			_T(" GROUP BY id, name, unit, genericname ORDER BY name, unit "), ToInt(m_szStockKey), szWhere );
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("genericname")), 
			rs.GetValue(_T("orderqty")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;


}
/*void CHMSPrescriptionEntry::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionEntry::OnQtyChange(){
	
} */
/*void CHMSPrescriptionEntry::OnQtySetfocus(){
	
} */
/*void CHMSPrescriptionEntry::OnQtyKillfocus(){
	
} */
int CHMSPrescriptionEntry::OnQtyCheckValue(){
	UpdateData(true);
	if(m_nQty > m_nMaxQuantity)
		return -1;
	return 0;
} 
void CHMSPrescriptionEntry::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionEntry::OnIndicationSelendok(){
	UpdateData(true);
	m_szUsage = m_wndIndication.GetCurrent(1);
	UpdateData(false);
}
/*void CHMSPrescriptionEntry::OnIndicationSetfocus(){
	
}*/
/*void CHMSPrescriptionEntry::OnIndicationKillfocus(){
	
}*/
long CHMSPrescriptionEntry::OnIndicationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndIndication.IsSearchKey() && !m_szIndicationKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szIndicationKey);
	};
	m_wndIndication.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_indication_drug' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndIndication.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSPrescriptionEntry::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionEntry::OnTimeDayChange(){
	
} */
/*void CHMSPrescriptionEntry::OnTimeDaySetfocus(){
	
} */
/*void CHMSPrescriptionEntry::OnTimeDayKillfocus(){
	
} */
int CHMSPrescriptionEntry::OnTimeDayCheckValue(){

	m_wndTimeDay.UpdateData(true);
	if(m_szUsage.IsEmpty() || m_nTimeDay <= 0)
		return 0;
	m_szUsage.Format(_T("%s ngày %d l\x1EA7n"), m_wndIndication.GetCurrent(1),  m_nTimeDay);
	m_wndUsage.SetWindowText(m_szUsage);
	return 0;
} 
/*void CHMSPrescriptionEntry::OnTimeQtyChange(){
	
} */
/*void CHMSPrescriptionEntry::OnTimeQtySetfocus(){
	
} */
/*void CHMSPrescriptionEntry::OnTimeQtyKillfocus(){
	
} */
int CHMSPrescriptionEntry::OnTimeQtyCheckValue(){
	m_wndTimeQty.UpdateData(true);
	if(m_szUsage.IsEmpty() || m_nTimeQty <=0)
		return 0;

	CString szUnit;
	szUnit = m_wndName.GetCurrent(2);
	m_szUsage.Format(_T("%s ngày %d l\x1EA7n m\x1ED7i l\x1EA7n %d %s"), m_wndIndication.GetCurrent(1),  m_nTimeDay, m_nTimeQty, szUnit);
	m_wndUsage.SetWindowText(m_szUsage);
	return 0;
} 
/*void CHMSPrescriptionEntry::OnUsageChange(){
	
} */
/*void CHMSPrescriptionEntry::OnUsageSetfocus(){
	
} */
/*void CHMSPrescriptionEntry::OnUsageKillfocus(){
	
} */
int CHMSPrescriptionEntry::OnUsageCheckValue(){
	return 0;
} 
void CHMSPrescriptionEntry::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSPrescriptionEntry();
} 
void CHMSPrescriptionEntry::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionEntry::OnAddHMSPrescriptionEntry(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPrescriptionEntry"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPrescriptionEntry::OnEditHMSPrescriptionEntry(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPrescriptionEntry"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPrescriptionEntry::OnDeleteHMSPrescriptionEntry(){
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
 		OnCancelHMSPrescriptionEntry(); 
 	}
return 0;
 } 
int CHMSPrescriptionEntry::OnSaveHMSPrescriptionEntry(){
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szSQL2; 
	int ret;
	pMF->BeginTransaction();

 	if(GetMode() == VM_ADD){ 

		if(m_bAddOrder)
		{
			szSQL = m_hms_pharmacyorderTbl.GetInsertSQL(); 
_msg(_T("%s"), szSQL);
_fmsg(_T("%s"), szSQL);
			ret = pMF->ExecSQL(szSQL); 
			if(ret < 0)
			{
				pMF->Rollback();
				return -1;
			}
			((CHMSPrescription *)GetParent())->m_nOrderID = m_nOrderID;
			((CHMSPrescription *)GetParent())->RefreshData();
			
		}

		szSQL2 = m_hms_pharmacyorderlnTbl.GetInsertSQL(); 
_fmsg(_T("%s"), szSQL2);
		ret = pMF->ExecSQL(szSQL2); 
 		if(ret > 0) 
 		{ 
			pMF->Commit();
			SetMode(VM_ADDCHILD); 
 		} 
		else
		{
			pMF->Rollback();
		}
 	} 
	else if(GetMode() == VM_ADDCHILD){
		szSQL2 = m_hms_pharmacyorderlnTbl.GetInsertSQL(); 
_msg(_T("%s"), szSQL2);
		ret = pMF->ExecSQL(szSQL2); 
 		if(ret > 0) 
 		{ 
			pMF->Commit();
 			SetMode(VM_ADDCHILD);			
 		} 
		else
		{
			pMF->Rollback();
		}
	}
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_hms_pharmacyorderTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 

	((CHMSPrescription *)GetParent())->OnDrugListLoadData();
 	return ret; 

}
int CHMSPrescriptionEntry::OnCancelHMSPrescriptionEntry(){
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
int CHMSPrescriptionEntry::OnHMSPrescriptionEntryListLoadData(){
	return 0;
}
