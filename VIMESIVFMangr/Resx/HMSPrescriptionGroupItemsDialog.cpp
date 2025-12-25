#include "HMSPrescriptionGroupItemsDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionGroupItemsDialog* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnDrugNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnIndicationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionGroupItemsDialog* )pWnd)->OnIndicationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnIndicationSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnIndicationSelendok();
}
/*static void _OnIndicationSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnIndicationKillfocus();
}*/
/*static void _OnIndicationKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnIndicationKillfocus();
}*/
static long _OnIndicationLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnIndicationLoadData();
}
/*static void _OnIndicationAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnIndicationAddNew();
}*/
/*static void _OnUsageChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnUsageChange();
} */
/*static void _OnUsageSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnUsageSetfocus();} */ 
/*static void _OnUsageKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnUsageKillfocus();
} */
static int _OnUsageCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnUsageCheckValue();
} 
/*static void _OnSpeedChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnSpeedChange();
} */
/*static void _OnSpeedSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnSpeedSetfocus();} */ 
/*static void _OnSpeedKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnSpeedKillfocus();
} */
static int _OnSpeedCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog *)pWnd)->OnSpeedCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupItemsDialog *pVw = (CHMSPrescriptionGroupItemsDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupItemsDialog *pVw = (CHMSPrescriptionGroupItemsDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupItemsDialog *pVw = (CHMSPrescriptionGroupItemsDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupItemsDialog *pVw = (CHMSPrescriptionGroupItemsDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPrescriptionGroupItemsDialog *pVw = (CHMSPrescriptionGroupItemsDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPrescriptionGroupItemsDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnAddHMSPrescriptionGroupItemsDialog();
} 
static int _OnEditHMSPrescriptionGroupItemsDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnEditHMSPrescriptionGroupItemsDialog();
} 
static int _OnDeleteHMSPrescriptionGroupItemsDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnDeleteHMSPrescriptionGroupItemsDialog();
} 
static int _OnSaveHMSPrescriptionGroupItemsDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnSaveHMSPrescriptionGroupItemsDialog();
} 
static int _OnCancelHMSPrescriptionGroupItemsDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnCancelHMSPrescriptionGroupItemsDialog();
} 
CHMSPrescriptionGroupItemsDialog::CHMSPrescriptionGroupItemsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 545;
	SetDefaultValues();
}
CHMSPrescriptionGroupItemsDialog::~CHMSPrescriptionGroupItemsDialog(){
}
void CHMSPrescriptionGroupItemsDialog::OnCreateComponents(){
	m_wndPrescriptionGroup.Create(this, _T("Prescription Group"), 5, 5, 350, 525);
	m_wndDrugInformation.Create(this, _T("Drug Information"), 355, 5, 959, 525);
	m_wndList.Create(this,360, 30, 954, 430); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 360, 435, 440, 460);
	m_wndDrugName.Create(this,445, 435, 803, 460); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 808, 435, 888, 460);
	m_wndQuantity.Create(this,893, 435, 953, 460); 
	m_wndIndicationLabel.Create(this, _T("Indication"), 360, 465, 440, 490);
	m_wndIndication.Create(this,445, 465, 525, 490); 
	m_wndUsageLabel.Create(this, _T("Usage"), 530, 465, 610, 490);
	m_wndUsage.Create(this,615, 465, 953, 490); 
	m_wndSpeedLabel.Create(this, _T("Speed"), 360, 494, 440, 519);
	m_wndSpeed.Create(this,445, 494, 525, 519); 
	m_wndAdd.Create(this, _T("&Add"), 535, 495, 615, 520);
	m_wndEdit.Create(this, _T("&Edit"), 620, 495, 700, 520);
	m_wndDelete.Create(this, _T("&Delete"), 705, 495, 785, 520);
	m_wndSave.Create(this, _T("&Save"), 790, 495, 870, 520);
	m_wndCancel.Create(this, _T("&Cancel"), 875, 495, 955, 520);

}
void CHMSPrescriptionGroupItemsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.LimitText(1024);
	m_wndQuantity.SetLimitText(1024);
	m_wndQuantity.SetCheckValue(true);
	m_wndIndication.SetCheckValue(true);
	m_wndIndication.LimitText(35);
	m_wndUsage.SetLimitText(1024);
	m_wndUsage.SetCheckValue(true);
	m_wndSpeed.SetLimitText(35);
	m_wndSpeed.SetCheckValue(true);






	m_wndIndication.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndIndication.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSPrescriptionGroupItemsDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDrugName.SetEvent(WE_SELENDOK, _OnDrugNameSelendokFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_SELCHANGE, _OnDrugNameSelectChangeFnc);
	m_wndDrugName.SetEvent(WE_LOADDATA, _OnDrugNameLoadDataFnc);
	//m_wndDrugName.SetEvent(WE_ADDNEW, _OnDrugNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
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
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSPrescriptionGroupItemsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndIndication.GetDlgCtrlID(), m_szIndicationKey);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);
	DDX_Text(pDX, m_wndSpeed.GetDlgCtrlID(), m_szSpeed);

}
void CHMSPrescriptionGroupItemsDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("DrugName")] =  m_szDrugNameKey;
	m_jData[_T("Quantity")] =  m_nQuantity;
	m_jData[_T("Indication")] =  m_szIndicationKey;
	m_jData[_T("Usage")] =  m_szUsage;
	m_jData[_T("Speed")] =  m_szSpeed;
	}
	else
	{
			
	m_jData[_T("DrugName")].GetValue(m_szDrugNameKey);
	m_jData[_T("Quantity")].GetValue(m_nQuantity);
	m_jData[_T("Indication")].GetValue(m_szIndicationKey);
	m_jData[_T("Usage")].GetValue(m_szUsage);
	m_jData[_T("Speed")].GetValue(m_szSpeed);
	}

}
void CHMSPrescriptionGroupItemsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionGroupItemsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionGroupItemsDialog::SetDefaultValues(){

	m_szDrugNameKey.Empty();
	m_nQuantity=0;
	m_szIndicationKey.Empty();
	m_szUsage.Empty();
	m_szSpeed.Empty();

}
int CHMSPrescriptionGroupItemsDialog::SetMode(int nMode){
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
void CHMSPrescriptionGroupItemsDialog::OnListDblClick(){
	
} 
void CHMSPrescriptionGroupItemsDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionGroupItemsDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionGroupItemsDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionGroupItemsDialog::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupItemsDialog::OnDrugNameSelendok(){
	 
}
/*void CHMSPrescriptionGroupItemsDialog::OnDrugNameSetfocus(){
	
}*/
/*void CHMSPrescriptionGroupItemsDialog::OnDrugNameKillfocus(){
	
}*/
long CHMSPrescriptionGroupItemsDialog::OnDrugNameLoadData(){
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
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionGroupItemsDialog::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnQuantityChange(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnQuantityKillfocus(){
	
} */
int CHMSPrescriptionGroupItemsDialog::OnQuantityCheckValue(){
	return 0;
} 
void CHMSPrescriptionGroupItemsDialog::OnIndicationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupItemsDialog::OnIndicationSelendok(){
	 
}
/*void CHMSPrescriptionGroupItemsDialog::OnIndicationSetfocus(){
	
}*/
/*void CHMSPrescriptionGroupItemsDialog::OnIndicationKillfocus(){
	
}*/
long CHMSPrescriptionGroupItemsDialog::OnIndicationLoadData(){
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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionGroupItemsDialog::OnIndicationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnUsageChange(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnUsageSetfocus(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnUsageKillfocus(){
	
} */
int CHMSPrescriptionGroupItemsDialog::OnUsageCheckValue(){
	return 0;
} 
/*void CHMSPrescriptionGroupItemsDialog::OnSpeedChange(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnSpeedSetfocus(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnSpeedKillfocus(){
	
} */
int CHMSPrescriptionGroupItemsDialog::OnSpeedCheckValue(){
	return 0;
} 
void CHMSPrescriptionGroupItemsDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupItemsDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupItemsDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupItemsDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionGroupItemsDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionGroupItemsDialog::OnAddHMSPrescriptionGroupItemsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionGroupItemsDialog::OnEditHMSPrescriptionGroupItemsDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionGroupItemsDialog::OnDeleteHMSPrescriptionGroupItemsDialog(){
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
 		OnCancelHMSPrescriptionGroupItemsDialog();
 	}
	return 0;
}
int CHMSPrescriptionGroupItemsDialog::OnSaveHMSPrescriptionGroupItemsDialog(){
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
 		//OnHMSPrescriptionGroupItemsDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionGroupItemsDialog::OnCancelHMSPrescriptionGroupItemsDialog(){
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
int CHMSPrescriptionGroupItemsDialog::OnHMSPrescriptionGroupItemsDialogListLoadData(){
	return 0;
}
