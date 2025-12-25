#include "HMSTreatmentPrescriptionPopupEx.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnNameCheckValue();
} 
static void _OnUnitSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopupEx* )pWnd)->OnUnitSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUnitSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitSelendok();
}
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitKillfocus();
}*/
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitKillfocus();
}*/
static long _OnUnitLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitLoadData();
}
/*static void _OnUnitAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUnitAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnQtyCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionPopupEx* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnUsageCheckValue();
} 
/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionPopupEx *)pWnd)->OnSpeedCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopupEx *pVw = (CHMSTreatmentPrescriptionPopupEx *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionPopupEx *pVw = (CHMSTreatmentPrescriptionPopupEx *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnAddHMSTreatmentPrescriptionPopupEx();
} 
static int _OnEditHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnEditHMSTreatmentPrescriptionPopupEx();
} 
static int _OnDeleteHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnDeleteHMSTreatmentPrescriptionPopupEx();
} 
static int _OnSaveHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnSaveHMSTreatmentPrescriptionPopupEx();
} 
static int _OnCancelHMSTreatmentPrescriptionPopupExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionPopupEx*)pWnd)->OnCancelHMSTreatmentPrescriptionPopupEx();
} 
CHMSTreatmentPrescriptionPopupEx::CHMSTreatmentPrescriptionPopupEx(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 765;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CHMSTreatmentPrescriptionPopupEx::~CHMSTreatmentPrescriptionPopupEx(){
}
void CHMSTreatmentPrescriptionPopupEx::OnCreateComponents(){
	m_wndPrescriptionInput.Create(this, _T("Nh?p thu?c"), 0, 0, 0, 22);
	m_wndNameLabel.Create(this, _T("Tên thu?c"), 5, 5, 125, 30);
	m_wndName.Create(this,130, 5, 385, 30); 
	m_wndUnitLabel.Create(this, _T("Unit"), 390, 5, 480, 30);
	m_wndUnit.Create(this,485, 5, 740, 30); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 35, 125, 60);
	m_wndQty.Create(this,130, 35, 200, 60); 
	m_wndIndicationLabel.Create(this, _T("Du?ng dùng"), 205, 35, 295, 60);
	m_wndIndication.Create(this,300, 35, 385, 60); 
	m_wndUsage.Create(this,390, 35, 740, 60); 
	m_wndSpeedLabel.Create(this, _T("T?c d?"), 5, 65, 125, 90);
	m_wndSpeed.Create(this,130, 65, 385, 90); 
	m_wndSave.Create(this, _T("&Save"), 550, 65, 650, 90);
	m_wndClose.Create(this, _T("&X"), 655, 65, 740, 90);

}
void CHMSTreatmentPrescriptionPopupEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetCheckValue(true);
	m_wndUnit.LimitText(1024);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(1024);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetCheckValue(true);
	m_wndSpeed.SetLimitText(1024);
	m_wndSpeed.SetCheckValue(true);





}
void CHMSTreatmentPrescriptionPopupEx::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndUnit.SetEvent(WE_SELENDOK, _OnUnitSelendokFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_SELCHANGE, _OnUnitSelectChangeFnc);
	m_wndUnit.SetEvent(WE_LOADDATA, _OnUnitLoadDataFnc);
	//m_wndUnit.SetEvent(WE_ADDNEW, _OnUnitAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndIndication.SetEvent(WE_SELENDOK, _OnIndicationSelendokFnc);
	//m_wndIndication.SetEvent(WE_SETFOCUS, _OnIndicationSetfocusFnc);
	//m_wndIndication.SetEvent(WE_KILLFOCUS, _OnIndicationKillfocusFnc);
	m_wndIndication.SetEvent(WE_SELCHANGE, _OnIndicationSelectChangeFnc);
	m_wndIndication.SetEvent(WE_LOADDATA, _OnIndicationLoadDataFnc);
	//m_wndIndication.SetEvent(WE_ADDNEW, _OnIndicationAddNewFnc);
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	//m_wndSpeed.SetEvent(WE_CHANGE, _OnSpeedChangeFnc);
	//m_wndSpeed.SetEvent(WE_SETFOCUS, _OnSpeedSetfocusFnc);
	//m_wndSpeed.SetEvent(WE_KILLFOCUS, _OnSpeedKillfocusFnc);
	m_wndSpeed.SetEvent(WE_CHECKVALUE, _OnSpeedCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentPrescriptionPopupEx::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnitKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);

}
void CHMSTreatmentPrescriptionPopupEx::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Unit")] =  m_szUnitKey;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("Indication")] =  m_szIndicationKey;
	m_jData[_T("Usage")] =  m_szUsage;
	m_jData[_T("Speed")] =  m_szSpeed;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Unit")].GetValue(m_szUnitKey);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("Indication")].GetValue(m_szIndicationKey);
	m_jData[_T("Usage")].GetValue(m_szUsage);
	m_jData[_T("Speed")].GetValue(m_szSpeed);
	}

}
void CHMSTreatmentPrescriptionPopupEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentPrescriptionPopupEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentPrescriptionPopupEx::SetDefaultValues(){

	m_szName.Empty();
	m_szUnitKey.Empty();
	m_nQty=0;
	m_szIndicationKey.Empty();
	m_szUsage.Empty();
	m_szSpeed.Empty();

}
int CHMSTreatmentPrescriptionPopupEx::SetMode(int nMode){
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
/*void CHMSTreatmentPrescriptionPopupEx::OnNameChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnNameSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnNameKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnNameCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionPopupEx::OnUnitSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopupEx::OnUnitSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionPopupEx::OnUnitSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopupEx::OnUnitKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopupEx::OnUnitLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUnit.IsSearchKey() && !m_szUnitKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUnitKey
};
	m_wndUnit.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUnit.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentPrescriptionPopupEx::OnUnitAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnQtyChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnQtySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnQtyKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnQtyCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionPopupEx::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopupEx::OnIndicationSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionPopupEx::OnIndicationSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionPopupEx::OnIndicationKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionPopupEx::OnIndicationLoadData(){
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
/*void CHMSTreatmentPrescriptionPopupEx::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnUsageChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnUsageSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnUsageKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnUsageCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionPopupEx::OnSpeedChange(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnSpeedSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionPopupEx::OnSpeedKillfocus(){
	
} */
int CHMSTreatmentPrescriptionPopupEx::OnSpeedCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionPopupEx::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionPopupEx::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionPopupEx::OnAddHMSTreatmentPrescriptionPopupEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentPrescriptionPopupEx::OnEditHMSTreatmentPrescriptionPopupEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionPopupEx::OnDeleteHMSTreatmentPrescriptionPopupEx(){
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
 		OnCancelHMSTreatmentPrescriptionPopupEx();
 	}
	return 0;
}
int CHMSTreatmentPrescriptionPopupEx::OnSaveHMSTreatmentPrescriptionPopupEx(){
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
 		//OnHMSTreatmentPrescriptionPopupExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentPrescriptionPopupEx::OnCancelHMSTreatmentPrescriptionPopupEx(){
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
int CHMSTreatmentPrescriptionPopupEx::OnHMSTreatmentPrescriptionPopupExListLoadData(){
	return 0;
}
