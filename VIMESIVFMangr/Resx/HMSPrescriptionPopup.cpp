#include "HMSPrescriptionPopup.h"
#include "MainFrm.h"
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionPopup* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionPopup* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMaxQuantityChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantityChange();
} */
/*static void _OnMaxQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantitySetfocus();} */ 
/*static void _OnMaxQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantityKillfocus();
} */
static int _OnMaxQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnMaxQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionPopup* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnTimeDayChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTimeDayChange();
} */
/*static void _OnTimeDaySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTimeDaySetfocus();} */ 
/*static void _OnTimeDayKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTimeDayKillfocus();
} */
static int _OnTimeDayCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnTimeDayCheckValue();
} 
/*static void _OnTimeQtyChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTimeQtyChange();
} */
/*static void _OnTimeQtySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTimeQtySetfocus();} */ 
/*static void _OnTimeQtyKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnTimeQtyKillfocus();
} */
static int _OnTimeQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnTimeQtyCheckValue();
} 
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionPopup *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionPopup *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionPopup *pVw = (CHMSPrescriptionPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionPopup *pVw = (CHMSPrescriptionPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnAddHMSPrescriptionPopup();
} 
static int _OnEditHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnEditHMSPrescriptionPopup();
} 
static int _OnDeleteHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnDeleteHMSPrescriptionPopup();
} 
static int _OnSaveHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnSaveHMSPrescriptionPopup();
} 
static int _OnCancelHMSPrescriptionPopupFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionPopup*)pWnd)->OnCancelHMSPrescriptionPopup();
} 
CHMSPrescriptionPopup::CHMSPrescriptionPopup(){

	m_nDlgWidth = 615;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSPrescriptionPopup::~CHMSPrescriptionPopup(){
}
void CHMSPrescriptionPopup::OnCreateComponents(){
	m_wndStorageLabel.Create(this, _T("Storage"), 5, 5, 95, 30);
	m_wndStorage.Create(this,100, 5, 350, 30); 
	m_wndOrderDateLabel.Create(this, _T("Date"), 355, 5, 420, 30);
	m_wndOrderDate.Create(this,425, 5, 545, 30); 
	m_wndNameLabel.Create(this, _T("Drug Name"), 5, 35, 95, 60);
	m_wndName.Create(this,100, 35, 350, 60); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 355, 35, 420, 60);
	m_wndQty.Create(this,425, 35, 465, 60); 
	m_wndMaxQuantity.Create(this,550, 35, 605, 60); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 5, 65, 95, 90);
	m_wndIndication.Create(this,100, 65, 350, 90); 
	m_wndTimeDayLabel.Create(this, _T("Time/Day"), 355, 65, 420, 90);
	m_wndTimeDay.Create(this,425, 65, 465, 90); 
	m_wndTimeQtyLabel.Create(this, _T("Time/Qty"), 470, 65, 545, 90);
	m_wndTimeQty.Create(this,550, 65, 605, 90); 
	m_wndUsageLabel.Create(this, _T("Usage"), 5, 95, 95, 120);
	m_wndUsage.Create(this,100, 95, 465, 120); 
	m_wndSave.Create(this, _T("&Save"), 470, 95, 550, 120);
	m_wndClose.Create(this, _T("&X"), 555, 95, 600, 120);
	m_wndOnHand.Create(this, _T("OnHand"), 470, 35, 545, 60);

}
void CHMSPrescriptionPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(1024);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMaxQuantity.SetLimitText(1024);
	m_wndMaxQuantity.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(1024);
	m_wndTimeDay.SetLimitText(1024);
	m_wndTimeDay.SetCheckValue(true);
	m_wndTimeQty.SetLimitText(1024);
	m_wndTimeQty.SetCheckValue(true);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetCheckValue(true);







}
void CHMSPrescriptionPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPrescriptionPopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPrescriptionPopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPrescriptionPopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPrescriptionPopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPrescriptionPopupFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPrescriptionPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndTimeDay.GetDlgCtrlID(), m_szTimeDay);
	DDX_Text(pDX, m_wndTimeQty.GetDlgCtrlID(), m_szTimeQty);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);

}
void CHMSPrescriptionPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionPopup::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szOrderDate.Empty();
	m_szNameKey.Empty();
	m_nQty=0;
	m_nMaxQuantity=0;
	m_szIndicationKey.Empty();
	m_szTimeDay.Empty();
	m_szTimeQty.Empty();
	m_szUsage.Empty();

}
int CHMSPrescriptionPopup::SetMode(int nMode){
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
void CHMSPrescriptionPopup::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnStorageSelendok(){
	 
}
/*void CHMSPrescriptionPopup::OnStorageSetfocus(){
	
}*/
/*void CHMSPrescriptionPopup::OnStorageKillfocus(){
	
}*/
long CHMSPrescriptionPopup::OnStorageLoadData(){
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
/*void CHMSPrescriptionPopup::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionPopup::OnOrderDateChange(){
	
} */
/*void CHMSPrescriptionPopup::OnOrderDateSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnOrderDateKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPrescriptionPopup::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnNameSelendok(){
	 
}
/*void CHMSPrescriptionPopup::OnNameSetfocus(){
	
}*/
/*void CHMSPrescriptionPopup::OnNameKillfocus(){
	
}*/
long CHMSPrescriptionPopup::OnNameLoadData(){
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
/*void CHMSPrescriptionPopup::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionPopup::OnQtyChange(){
	
} */
/*void CHMSPrescriptionPopup::OnQtySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnQtyKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnQtyCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnMaxQuantityChange(){
	
} */
/*void CHMSPrescriptionPopup::OnMaxQuantitySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnMaxQuantityKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnMaxQuantityCheckValue(){
	return 0;
} 
void CHMSPrescriptionPopup::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnIndicationSelendok(){
	 
}
/*void CHMSPrescriptionPopup::OnIndicationSetfocus(){
	
}*/
/*void CHMSPrescriptionPopup::OnIndicationKillfocus(){
	
}*/
long CHMSPrescriptionPopup::OnIndicationLoadData(){
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
/*void CHMSPrescriptionPopup::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionPopup::OnTimeDayChange(){
	
} */
/*void CHMSPrescriptionPopup::OnTimeDaySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnTimeDayKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnTimeDayCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnTimeQtyChange(){
	
} */
/*void CHMSPrescriptionPopup::OnTimeQtySetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnTimeQtyKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnTimeQtyCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionPopup::OnUsageChange(){
	
} */
/*void CHMSPrescriptionPopup::OnUsageSetfocus(){
	
} */
/*void CHMSPrescriptionPopup::OnUsageKillfocus(){
	
} */
int CHMSPrescriptionPopup::OnUsageCheckValue(){
	return 0;
} 
void CHMSPrescriptionPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionPopup::OnAddHMSPrescriptionPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionPopup::OnEditHMSPrescriptionPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionPopup::OnDeleteHMSPrescriptionPopup(){
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
 		OnCancelHMSPrescriptionPopup();
 	}
	return 0;
}
int CHMSPrescriptionPopup::OnSaveHMSPrescriptionPopup(){
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
 		//OnHMSPrescriptionPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionPopup::OnCancelHMSPrescriptionPopup(){
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
int CHMSPrescriptionPopup::OnHMSPrescriptionPopupListLoadData(){
	return 0;
}
