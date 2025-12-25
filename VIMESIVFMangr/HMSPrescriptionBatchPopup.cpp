#include "HMSPrescriptionBatchPopup.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnDayNumberChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnDayNumberChange();
} */
/*static void _OnDayNumberSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnDayNumberSetfocus();} */ 
/*static void _OnDayNumberKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnDayNumberKillfocus();
} */
static int _OnDayNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnDayNumberCheckValue();
} 
/*static void _OnItemChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnItemChange();
} */
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnItemSetfocus();} */ 
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnItemKillfocus();
} */
static int _OnItemCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnItemCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnQuantityForDayChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityForDayChange();
} */
/*static void _OnQuantityForDaySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityForDaySetfocus();} */ 
/*static void _OnQuantityForDayKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityForDayKillfocus();
} */
static int _OnQuantityForDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnQuantityForDayCheckValue();
} 
/*static void _OnIndicationChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnIndicationChange();
} */
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnIndicationSetfocus();} */ 
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnIndicationKillfocus();
} */
static int _OnIndicationCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnIndicationCheckValue();
} 
static void _OnUsageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionBatchPopup* )pWnd)->OnUsageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUsageSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnUsageSelendok();
}
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnUsageKillfocus();
}*/
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnUsageKillfocus();
}*/
static long _OnUsageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchPopup *)pWnd)->OnUsageLoadData();
}
/*static void _OnUsageAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchPopup *)pWnd)->OnUsageAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchPopup *pVw = (CHMSPrescriptionBatchPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchPopup *pVw = (CHMSPrescriptionBatchPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionBatchPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchPopup*)pWnd)->OnAddHMSPrescriptionBatchPopup();
} 
static int _OnEditHMSPrescriptionBatchPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchPopup*)pWnd)->OnEditHMSPrescriptionBatchPopup();
} 
static int _OnDeleteHMSPrescriptionBatchPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchPopup*)pWnd)->OnDeleteHMSPrescriptionBatchPopup();
} 
static int _OnSaveHMSPrescriptionBatchPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchPopup*)pWnd)->OnSaveHMSPrescriptionBatchPopup();
} 
static int _OnCancelHMSPrescriptionBatchPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchPopup*)pWnd)->OnCancelHMSPrescriptionBatchPopup();
} 
CHMSPrescriptionBatchPopup::CHMSPrescriptionBatchPopup(CWnd *pParent, int nMode):
	CGuiPopup(pParent){
		CGuiPopup::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSPrescriptionBatchPopup::~CHMSPrescriptionBatchPopup(){
}
void CHMSPrescriptionBatchPopup::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 4, 5, 94, 30);
	m_wndFromDate.Create(this,99, 5, 189, 30); 
	m_wndDayNumberLabel.Create(this, _T("Day Number"), 194, 5, 284, 30);
	m_wndDayNumber.Create(this,289, 5, 379, 30); 
	m_wndItemLabel.Create(this, _T("Item"), 4, 35, 94, 60);
	m_wndItem.Create(this,99, 35, 379, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 384, 35, 474, 60);
	m_wndQuantity.Create(this,479, 35, 569, 60); 
	m_wndQuantityForDayLabel.Create(this, _T("Qty for day"), 574, 35, 664, 60);
	m_wndQuantityForDay.Create(this,669, 35, 759, 60); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 194, 65, 284, 90);
	m_wndIndication.Create(this,289, 65, 759, 90); 
	m_wndUsageLabel.Create(this, _T("Usage"), 4, 65, 94, 90);
	m_wndUsage.Create(this,99, 65, 189, 90); 
	m_wndSave.Create(this, _T("&Save"), 595, 95, 675, 120);
	m_wndClose.Create(this, _T("&Close"), 680, 95, 760, 120);

}
void CHMSPrescriptionBatchPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndDayNumber.SetLimitText(22);
	m_wndDayNumber.SetCheckValue(true);
	m_wndItem.SetLimitText(22);
	m_wndItem.SetCheckValue(true);
	m_wndQuantity.SetLimitText(22);
	m_wndQuantity.SetCheckValue(true);
	m_wndQuantityForDay.SetLimitText(22);
	m_wndQuantityForDay.SetCheckValue(true);
	m_wndIndication.SetLimitText(32);
	m_wndIndication.SetCheckValue(true);
	m_wndUsage.SetCheckValue(true);
	m_wndUsage.LimitText(254);


	m_wndUsage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUsage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	m_hms_ipharmaorder_batchTbl.SetTableName(_T("hms_ipharmaorder_batch"));
	m_hms_ipharmaorder_batchTbl.AddField(_T("FUID"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("DOCNO"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("DEPTID"), dfText, 7); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("REFIDX"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("TREATTIME"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("FROM_DATE"), dfDate); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("NUM_DATE"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("TO_DATE"), dfDate); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("DOCTOR"), dfText, 15); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("APPOINTMENT_ID"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("PRODUCT_ID"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("TOTAL_QUANTITY"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("TREAT_QUANTITY"), dfLong); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("INDICATION"), dfText, 32); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("DOSAGE"), dfText, 32); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("SPEED"), dfText, 15); 
	m_hms_ipharmaorder_batchTbl.AddField(_T("USAGE"), dfText, 254); 

}
void CHMSPrescriptionBatchPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndDayNumber.SetEvent(WE_CHANGE, _OnDayNumberChangeFnc);
	//m_wndDayNumber.SetEvent(WE_SETFOCUS, _OnDayNumberSetfocusFnc);
	//m_wndDayNumber.SetEvent(WE_KILLFOCUS, _OnDayNumberKillfocusFnc);
	m_wndDayNumber.SetEvent(WE_CHECKVALUE, _OnDayNumberCheckValueFnc);
	//m_wndItem.SetEvent(WE_CHANGE, _OnItemChangeFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_CHECKVALUE, _OnItemCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndQuantityForDay.SetEvent(WE_CHANGE, _OnQuantityForDayChangeFnc);
	//m_wndQuantityForDay.SetEvent(WE_SETFOCUS, _OnQuantityForDaySetfocusFnc);
	//m_wndQuantityForDay.SetEvent(WE_KILLFOCUS, _OnQuantityForDayKillfocusFnc);
	m_wndQuantityForDay.SetEvent(WE_CHECKVALUE, _OnQuantityForDayCheckValueFnc);
	//m_wndIndication.SetEvent(WE_CHANGE, _OnIndicationChangeFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_CHECKVALUE, _OnIndicationCheckValueFnc);
	m_wndUsage.SetEvent(WE_SELENDOK, _OnUsageSelendokFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_SELCHANGE, _OnUsageSelectChangeFnc);
	m_wndUsage.SetEvent(WE_LOADDATA, _OnUsageLoadDataFnc);
	//m_wndUsage.SetEvent(WE_ADDNEW, _OnUsageAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPrescriptionBatchPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Text(pDX, m_wndDayNumber.GetDlgCtrlID(), m_nDayNumber);
	DDX_Text(pDX, m_wndItem.GetDlgCtrlID(), m_nItem);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndQuantityForDay.GetDlgCtrlID(), m_nQuantityForDay);
	DDX_Text(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndication);
	DDX_TextEx(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsageKey);

}
void CHMSPrescriptionBatchPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("DayNumber")] =  m_nDayNumber;
	m_jData[_T("Item")] =  m_nItem;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("QuantityForDay")] =  m_nQuantityForDay;
	m_jData[_T("Indication")] =  m_szIndication;
	m_jData[_T("Usage")] =  m_szUsageKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("DayNumber")].GetValue(m_nDayNumber);
	m_jData[_T("Item")].GetValue(m_nItem);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("QuantityForDay")].GetValue(m_nQuantityForDay);
	m_jData[_T("Indication")].GetValue(m_szIndication);
	m_jData[_T("Usage")].GetValue(m_szUsageKey);
	}

}
void CHMSPrescriptionBatchPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("FROM_DATE"), m_szFromDate);
	rs.GetValue(_T("NUM_DATE"), m_nDayNumber);
	rs.GetValue(_T("PRODUCT_ID"), m_nItem);
	rs.GetValue(_T("TOTAL_QUANTITY"), m_nQuantity);
	rs.GetValue(_T("TREAT_QUANTITY"), m_nQuantityForDay);
	rs.GetValue(_T("INDICATION"), m_szIndication);
	rs.GetValue(_T("USAGE"), m_szUsageKey);

}
void CHMSPrescriptionBatchPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_ipharmaorder_batchTbl.SetValue(_T("FROM_DATE"), m_szFromDate);
	m_hms_ipharmaorder_batchTbl.SetValue(_T("NUM_DATE"), m_nDayNumber);
	m_hms_ipharmaorder_batchTbl.SetValue(_T("PRODUCT_ID"), m_nItem);
	m_hms_ipharmaorder_batchTbl.SetValue(_T("TOTAL_QUANTITY"), m_nQuantity);
	m_hms_ipharmaorder_batchTbl.SetValue(_T("TREAT_QUANTITY"), m_nQuantityForDay);
	m_hms_ipharmaorder_batchTbl.SetValue(_T("INDICATION"), m_szIndication);
	m_hms_ipharmaorder_batchTbl.SetValue(_T("USAGE"), m_szUsageKey);

}
void CHMSPrescriptionBatchPopup::SetDefaultValues(){

	m_szFromDate.Empty();
	m_nDayNumber=0;
	m_nItem=0;
	m_nQuantity=0;
	m_nQuantityForDay=0;
	m_szIndication.Empty();
	m_szUsageKey.Empty();

}
int CHMSPrescriptionBatchPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
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
/*void CHMSPrescriptionBatchPopup::OnFromDateChange(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnFromDateSetfocus(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnFromDateKillfocus(){
	
} */
int CHMSPrescriptionBatchPopup::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionBatchPopup::OnDayNumberChange(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnDayNumberSetfocus(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnDayNumberKillfocus(){
	
} */
int CHMSPrescriptionBatchPopup::OnDayNumberCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionBatchPopup::OnItemChange(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnItemSetfocus(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnItemKillfocus(){
	
} */
int CHMSPrescriptionBatchPopup::OnItemCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionBatchPopup::OnQuantityChange(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnQuantitySetfocus(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnQuantityKillfocus(){
	
} */
int CHMSPrescriptionBatchPopup::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionBatchPopup::OnQuantityForDayChange(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnQuantityForDaySetfocus(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnQuantityForDayKillfocus(){
	
} */
int CHMSPrescriptionBatchPopup::OnQuantityForDayCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionBatchPopup::OnIndicationChange(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnIndicationSetfocus(){
	
} */
/*void CHMSPrescriptionBatchPopup::OnIndicationKillfocus(){
	
} */
int CHMSPrescriptionBatchPopup::OnIndicationCheckValue(){
	return 0;
} 
void CHMSPrescriptionBatchPopup::OnUsageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchPopup::OnUsageSelendok(){
	 
}
/*void CHMSPrescriptionBatchPopup::OnUsageSetfocus(){
	
}*/
/*void CHMSPrescriptionBatchPopup::OnUsageKillfocus(){
	
}*/
long CHMSPrescriptionBatchPopup::OnUsageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSPrescriptionBatchPopup::OnUsageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPrescriptionBatchPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionBatchPopup::OnAddHMSPrescriptionBatchPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionBatchPopup::OnEditHMSPrescriptionBatchPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionBatchPopup::OnDeleteHMSPrescriptionBatchPopup(){
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
 		OnCancelHMSPrescriptionBatchPopup();
 	}
	return 0;
}
int CHMSPrescriptionBatchPopup::OnSaveHMSPrescriptionBatchPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_ipharmaorder_batchTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_ipharmaorder_batchTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSPrescriptionBatchPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionBatchPopup::OnCancelHMSPrescriptionBatchPopup(){
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
int CHMSPrescriptionBatchPopup::OnHMSPrescriptionBatchPopupListLoadData(){
	return 0;
}
