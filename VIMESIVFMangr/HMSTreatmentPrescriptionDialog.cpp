#include "HMSTreatmentPrescriptionDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentPrescriptionDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionDialog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnStorageAddNew();
}*/
/*static void _OnUseDateChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDateChange();
} */
/*static void _OnUseDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDateSetfocus();} */ 
/*static void _OnUseDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDateKillfocus();
} */
static int _OnUseDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDateCheckValue();
} 
static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionDialog* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDrugNameAddNew();
}*/
/*static void _OnUseDatenumChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDatenumChange();
} */
/*static void _OnUseDatenumSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDatenumSetfocus();} */ 
/*static void _OnUseDatenumKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDatenumKillfocus();
} */
static int _OnUseDatenumCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnUseDatenumCheckValue();
} 
/*static void _OnDousageChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDousageChange();
} */
/*static void _OnDousageSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDousageSetfocus();} */ 
/*static void _OnDousageKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDousageKillfocus();
} */
static int _OnDousageCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnDousageCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnOnhandChangeFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnOnhandChange();
} */
/*static void _OnOnhandSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnOnhandSetfocus();} */ 
/*static void _OnOnhandKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionDialog *)pWnd)->OnOnhandKillfocus();
} */
static int _OnOnhandCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionDialog *)pWnd)->OnOnhandCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionDialog *pVw = (CHMSTreatmentPrescriptionDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionDialog *pVw = (CHMSTreatmentPrescriptionDialog *)pWnd;
	pVw->OnConfirmSelect();
} 
static int _OnAddHMSTreatmentPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnAddHMSTreatmentPrescriptionDialog();
} 
static int _OnEditHMSTreatmentPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnEditHMSTreatmentPrescriptionDialog();
} 
static int _OnDeleteHMSTreatmentPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnDeleteHMSTreatmentPrescriptionDialog();
} 
static int _OnSaveHMSTreatmentPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnSaveHMSTreatmentPrescriptionDialog();
} 
static int _OnCancelHMSTreatmentPrescriptionDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionDialog*)pWnd)->OnCancelHMSTreatmentPrescriptionDialog();
} 
CHMSTreatmentPrescriptionDialog::CHMSTreatmentPrescriptionDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 550;
	m_nDlgHeight = 550;
	SetDefaultValues();
}
CHMSTreatmentPrescriptionDialog::~CHMSTreatmentPrescriptionDialog(){
}
void CHMSTreatmentPrescriptionDialog::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 545, 550);
	m_wndList.Create(this,11, 30, 541, 425); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 430, 90, 455);
	m_wndStorage.Create(this,95, 430, 365, 455); 
	m_wndUseDateLabel.Create(this, _T("Use Date"), 370, 430, 450, 455);
	m_wndUseDate.Create(this,455, 430, 540, 455); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 10, 460, 90, 485);
	m_wndDrugName.Create(this,95, 460, 365, 485); 
	m_wndUseDatenumLabel.Create(this, _T("Use datenum"), 370, 460, 450, 485);
	m_wndUseDatenum.Create(this,455, 460, 540, 485); 
	m_wndDousageLabel.Create(this, _T("Dousage"), 10, 490, 90, 515);
	m_wndDousage.Create(this,95, 490, 540, 515); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 520, 90, 545);
	m_wndQuantity.Create(this,95, 520, 175, 545); 
	m_wndOnhandLabel.Create(this, _T("Onhand"), 180, 520, 260, 545);
	m_wndOnhand.Create(this,265, 520, 365, 545); 
	m_wndSave.Create(this, _T("&Save"), 375, 520, 455, 545);
	m_wndConfirm.Create(this, _T("&Confirm"), 460, 520, 540, 545);

}
void CHMSTreatmentPrescriptionDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndUseDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndUseDate.SetCheckValue(true);
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.LimitText(35);
	m_wndUseDatenum.SetLimitText(16);
	m_wndUseDatenum.SetCheckValue(true);
	m_wndDousage.SetLimitText(35);
	m_wndDousage.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndOnhand.SetLimitText(16);
	m_wndOnhand.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Drug Name/Cnt"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDrugName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTreatmentPrescriptionDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	//m_wndUseDate.SetEvent(WE_CHANGE, _OnUseDateChangeFnc);
	//m_wndUseDate.SetEvent(WE_SETFOCUS, _OnUseDateSetfocusFnc);
	//m_wndUseDate.SetEvent(WE_KILLFOCUS, _OnUseDateKillfocusFnc);
	m_wndUseDate.SetEvent(WE_CHECKVALUE, _OnUseDateCheckValueFnc);
	m_wndDrugName.SetEvent(WE_SELENDOK, _OnDrugNameSelendokFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_SELCHANGE, _OnDrugNameSelectChangeFnc);
	m_wndDrugName.SetEvent(WE_LOADDATA, _OnDrugNameLoadDataFnc);
	//m_wndDrugName.SetEvent(WE_ADDNEW, _OnDrugNameAddNewFnc);
	//m_wndUseDatenum.SetEvent(WE_CHANGE, _OnUseDatenumChangeFnc);
	//m_wndUseDatenum.SetEvent(WE_SETFOCUS, _OnUseDatenumSetfocusFnc);
	//m_wndUseDatenum.SetEvent(WE_KILLFOCUS, _OnUseDatenumKillfocusFnc);
	m_wndUseDatenum.SetEvent(WE_CHECKVALUE, _OnUseDatenumCheckValueFnc);
	//m_wndDousage.SetEvent(WE_CHANGE, _OnDousageChangeFnc);
	//m_wndDousage.SetEvent(WE_SETFOCUS, _OnDousageSetfocusFnc);
	//m_wndDousage.SetEvent(WE_KILLFOCUS, _OnDousageKillfocusFnc);
	m_wndDousage.SetEvent(WE_CHECKVALUE, _OnDousageCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndOnhand.SetEvent(WE_CHANGE, _OnOnhandChangeFnc);
	//m_wndOnhand.SetEvent(WE_SETFOCUS, _OnOnhandSetfocusFnc);
	//m_wndOnhand.SetEvent(WE_KILLFOCUS, _OnOnhandKillfocusFnc);
	m_wndOnhand.SetEvent(WE_CHECKVALUE, _OnOnhandCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentPrescriptionDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_TextEx(pDX, m_wndUseDate.GetDlgCtrlID(), m_szUseDate);
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndUseDatenum.GetDlgCtrlID(), m_nUseDatenum);
	DDX_Text(pDX, m_wndDousage.GetDlgCtrlID(), m_szDousage);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndOnhand.GetDlgCtrlID(), m_nOnhand);

}
void CHMSTreatmentPrescriptionDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentPrescriptionDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentPrescriptionDialog::SetDefaultValues(){

	m_szStorageKey.Empty();
	m_szUseDate.Empty();
	m_szDrugNameKey.Empty();
	m_nUseDatenum=0;
	m_szDousage.Empty();
	m_nQuantity=0;
	m_nOnhand=0;

}
int CHMSTreatmentPrescriptionDialog::SetMode(int nMode){
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
void CHMSTreatmentPrescriptionDialog::OnListDblClick(){
	
} 
void CHMSTreatmentPrescriptionDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentPrescriptionDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("DrugName/Cnt")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSTreatmentPrescriptionDialog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionDialog::OnStorageSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionDialog::OnStorageSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionDialog::OnStorageKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionDialog::OnStorageLoadData(){
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
/*void CHMSTreatmentPrescriptionDialog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnUseDateChange(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnUseDateSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnUseDateKillfocus(){
	
} */
int CHMSTreatmentPrescriptionDialog::OnUseDateCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionDialog::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionDialog::OnDrugNameSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionDialog::OnDrugNameSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionDialog::OnDrugNameKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionDialog::OnDrugNameLoadData(){
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
/*void CHMSTreatmentPrescriptionDialog::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnUseDatenumChange(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnUseDatenumSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnUseDatenumKillfocus(){
	
} */
int CHMSTreatmentPrescriptionDialog::OnUseDatenumCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionDialog::OnDousageChange(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnDousageSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnDousageKillfocus(){
	
} */
int CHMSTreatmentPrescriptionDialog::OnDousageCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionDialog::OnQuantityChange(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnQuantityKillfocus(){
	
} */
int CHMSTreatmentPrescriptionDialog::OnQuantityCheckValue(){
	return 0;
} 
/*void CHMSTreatmentPrescriptionDialog::OnOnhandChange(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnOnhandSetfocus(){
	
} */
/*void CHMSTreatmentPrescriptionDialog::OnOnhandKillfocus(){
	
} */
int CHMSTreatmentPrescriptionDialog::OnOnhandCheckValue(){
	return 0;
} 
void CHMSTreatmentPrescriptionDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionDialog::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionDialog::OnAddHMSTreatmentPrescriptionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentPrescriptionDialog::OnEditHMSTreatmentPrescriptionDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionDialog::OnDeleteHMSTreatmentPrescriptionDialog(){
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
 		OnCancelHMSTreatmentPrescriptionDialog();
 	}
	return 0;
}
int CHMSTreatmentPrescriptionDialog::OnSaveHMSTreatmentPrescriptionDialog(){
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
 		//OnHMSTreatmentPrescriptionDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentPrescriptionDialog::OnCancelHMSTreatmentPrescriptionDialog(){
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
int CHMSTreatmentPrescriptionDialog::OnHMSTreatmentPrescriptionDialogListLoadData(){
	return 0;
}
