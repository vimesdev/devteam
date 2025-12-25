#include "HMSCancerPrescriptionEntryDialog.h"
#include "MainFrm.h"
static void _OnOrgNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryDialog* )pWnd)->OnOrgNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOrgNameSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnOrgNameSelendok();
}
/*static void _OnOrgNameSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnOrgNameKillfocus();
}*/
/*static void _OnOrgNameKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnOrgNameKillfocus();
}*/
static long _OnOrgNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnOrgNameLoadData();
}
/*static void _OnOrgNameAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnOrgNameAddNew();
}*/
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnStorageAddNew();
}*/
static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryDialog* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDrugNameAddNew();
}*/
/*static void _OnUnitChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUnitChange();
} */
/*static void _OnUnitSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUnitSetfocus();} */ 
/*static void _OnUnitKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUnitKillfocus();
} */
static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUnitCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnQtyCheckValue();
} 
static void _OnDousageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSCancerPrescriptionEntryDialog* )pWnd)->OnDousageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDousageSelendokFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDousageSelendok();
}
/*static void _OnDousageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDousageKillfocus();
}*/
/*static void _OnDousageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDousageKillfocus();
}*/
static long _OnDousageLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDousageLoadData();
}
/*static void _OnDousageAddNewFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnDousageAddNew();
}*/
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSCancerPrescriptionEntryDialog *)pWnd)->OnUsageCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionEntryDialog *pVw = (CHMSCancerPrescriptionEntryDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSCancerPrescriptionEntryDialog *pVw = (CHMSCancerPrescriptionEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSCancerPrescriptionEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryDialog*)pWnd)->OnAddHMSCancerPrescriptionEntryDialog();
} 
static int _OnEditHMSCancerPrescriptionEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryDialog*)pWnd)->OnEditHMSCancerPrescriptionEntryDialog();
} 
static int _OnDeleteHMSCancerPrescriptionEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryDialog*)pWnd)->OnDeleteHMSCancerPrescriptionEntryDialog();
} 
static int _OnSaveHMSCancerPrescriptionEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryDialog*)pWnd)->OnSaveHMSCancerPrescriptionEntryDialog();
} 
static int _OnCancelHMSCancerPrescriptionEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSCancerPrescriptionEntryDialog*)pWnd)->OnCancelHMSCancerPrescriptionEntryDialog();
} 
CHMSCancerPrescriptionEntryDialog::CHMSCancerPrescriptionEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 835;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CHMSCancerPrescriptionEntryDialog::~CHMSCancerPrescriptionEntryDialog(){
}
void CHMSCancerPrescriptionEntryDialog::OnCreateComponents(){
	m_wndOrgNameLabel.Create(this, _T("OrgName"), 5, 5, 105, 30);
	m_wndOrgName.Create(this,110, 5, 410, 30); 
	m_wndStorageLabel.Create(this, _T("Storage"), 415, 5, 515, 30);
	m_wndStorage.Create(this,520, 5, 820, 30); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 5, 35, 105, 60);
	m_wndDrugName.Create(this,110, 35, 410, 60); 
	m_wndUnitLabel.Create(this, _T("Unit"), 415, 35, 515, 60);
	m_wndUnit.Create(this,520, 35, 620, 60); 
	m_wndQtyLabel.Create(this, _T("Qty"), 625, 35, 725, 60);
	m_wndQty.Create(this,730, 35, 820, 60); 
	m_wndDousageLabel.Create(this, _T("Dousage"), 5, 65, 105, 90);
	m_wndDousage.Create(this,110, 65, 210, 90); 
	m_wndUsageLabel.Create(this, _T("Usage"), 215, 65, 315, 90);
	m_wndUsage.Create(this,320, 65, 725, 90); 
	m_wndSave.Create(this, _T("&Save"), 730, 65, 790, 90);
	m_wndClose.Create(this, _T("X"), 795, 65, 822, 90);

}
void CHMSCancerPrescriptionEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrgName.SetCheckValue(true);
	m_wndOrgName.LimitText(35);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.LimitText(35);
	m_wndUnit.SetLimitText(35);
	m_wndUnit.SetCheckValue(true);
	m_wndQty.SetLimitText(16);
	m_wndQty.SetCheckValue(true);
	m_wndDousage.SetCheckValue(true);
	m_wndDousage.LimitText(35);
	m_wndUsage.SetLimitText(35);
	m_wndUsage.SetCheckValue(true);


	m_wndOrgName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOrgName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDrugName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDousage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDousage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSCancerPrescriptionEntryDialog::OnSetWindowEvents(){
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
	//m_wndUnit.SetEvent(WE_CHANGE, _OnUnitChangeFnc);
	//m_wndUnit.SetEvent(WE_SETFOCUS, _OnUnitSetfocusFnc);
	//m_wndUnit.SetEvent(WE_KILLFOCUS, _OnUnitKillfocusFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
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
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSCancerPrescriptionEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOrgName.GetDlgCtrlID(), m_szOrgNameKey);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_TextEx(pDX, m_wndDousage.GetDlgCtrlID(), m_szDousageKey);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);

}
void CHMSCancerPrescriptionEntryDialog::UpdateJson(BOOL bSave){
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
void CHMSCancerPrescriptionEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerPrescriptionEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerPrescriptionEntryDialog::SetDefaultValues(){

	m_szOrgNameKey.Empty();
	m_szStorageKey.Empty();
	m_szDrugNameKey.Empty();
	m_szUnit.Empty();
	m_nQty=0;
	m_szDousageKey.Empty();
	m_szUsage.Empty();

}
int CHMSCancerPrescriptionEntryDialog::SetMode(int nMode){
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
void CHMSCancerPrescriptionEntryDialog::OnOrgNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryDialog::OnOrgNameSelendok(){
	 
}
/*void CHMSCancerPrescriptionEntryDialog::OnOrgNameSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryDialog::OnOrgNameKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryDialog::OnOrgNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOrgName.IsSearchKey() && !m_szOrgNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOrgNameKey
};
	m_wndOrgName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrgName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionEntryDialog::OnOrgNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerPrescriptionEntryDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryDialog::OnStorageSelendok(){
	 
}
/*void CHMSCancerPrescriptionEntryDialog::OnStorageSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryDialog::OnStorageKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryDialog::OnStorageLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSCancerPrescriptionEntryDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSCancerPrescriptionEntryDialog::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryDialog::OnDrugNameSelendok(){
	 
}
/*void CHMSCancerPrescriptionEntryDialog::OnDrugNameSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryDialog::OnDrugNameKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryDialog::OnDrugNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSCancerPrescriptionEntryDialog::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnUnitChange(){
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnUnitSetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnUnitKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryDialog::OnUnitCheckValue(){
	return 0;
} 
/*void CHMSCancerPrescriptionEntryDialog::OnQtyChange(){
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnQtySetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnQtyKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryDialog::OnQtyCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionEntryDialog::OnDousageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryDialog::OnDousageSelendok(){
	 
}
/*void CHMSCancerPrescriptionEntryDialog::OnDousageSetfocus(){
	
}*/
/*void CHMSCancerPrescriptionEntryDialog::OnDousageKillfocus(){
	
}*/
long CHMSCancerPrescriptionEntryDialog::OnDousageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
/*void CHMSCancerPrescriptionEntryDialog::OnDousageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnUsageChange(){
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnUsageSetfocus(){
	
} */
/*void CHMSCancerPrescriptionEntryDialog::OnUsageKillfocus(){
	
} */
int CHMSCancerPrescriptionEntryDialog::OnUsageCheckValue(){
	return 0;
} 
void CHMSCancerPrescriptionEntryDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCancerPrescriptionEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCancerPrescriptionEntryDialog::OnAddHMSCancerPrescriptionEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerPrescriptionEntryDialog::OnEditHMSCancerPrescriptionEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerPrescriptionEntryDialog::OnDeleteHMSCancerPrescriptionEntryDialog(){
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
 		OnCancelHMSCancerPrescriptionEntryDialog();
 	}
	return 0;
}
int CHMSCancerPrescriptionEntryDialog::OnSaveHMSCancerPrescriptionEntryDialog(){
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
 		//OnHMSCancerPrescriptionEntryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerPrescriptionEntryDialog::OnCancelHMSCancerPrescriptionEntryDialog(){
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
int CHMSCancerPrescriptionEntryDialog::OnHMSCancerPrescriptionEntryDialogListLoadData(){
	return 0;
}
