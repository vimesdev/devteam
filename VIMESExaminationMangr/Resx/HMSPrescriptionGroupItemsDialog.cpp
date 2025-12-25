#include "HMSPrescriptionGroupItemsDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnGroupListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnGroupListLoadData();
} 
static void _OnGroupListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnGroupListDblClick();
} 
static void _OnGroupListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnGroupListSelectChange(nOldItem, nNewItem);
} 
static int _OnGroupListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionGroupItemsDialog*)pWnd)->OnGroupListDeleteItem();
} 
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
CHMSPrescriptionGroupItemsDialog::CHMSPrescriptionGroupItemsDialog(){

	m_nDlgWidth = 665;
	m_nDlgHeight = 435;
	SetDefaultValues();
}
CHMSPrescriptionGroupItemsDialog::~CHMSPrescriptionGroupItemsDialog(){
}
void CHMSPrescriptionGroupItemsDialog::OnCreateComponents(){
	m_wndPrescriptionGroup.Create(this, _T("Prescription Group"), 5, 5, 205, 426);
	m_wndGroupList.Create(this,10, 30, 200, 420); 
	m_wndDrugInformation.Create(this, _T("Drug Information"), 210, 5, 655, 425);
	m_wndList.Create(this,215, 30, 650, 330); 
	m_wndDrugNameLabel.Create(this, _T("Drug Name"), 215, 335, 295, 360);
	m_wndDrugName.Create(this,300, 335, 500, 360); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 505, 335, 585, 360);
	m_wndQuantity.Create(this,590, 335, 650, 360); 
	m_wndUsageLabel.Create(this, _T("Usage"), 215, 365, 295, 390);
	m_wndUsage.Create(this,300, 365, 650, 390); 
	m_wndAdd.Create(this, _T("&Add"), 255, 395, 330, 420);
	m_wndEdit.Create(this, _T("&Edit"), 335, 395, 410, 420);
	m_wndDelete.Create(this, _T("&Delete"), 415, 395, 490, 420);
	m_wndSave.Create(this, _T("&Save"), 495, 395, 570, 420);
	m_wndCancel.Create(this, _T("&Cancel"), 575, 395, 650, 420);

}
void CHMSPrescriptionGroupItemsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.LimitText(15);
	m_wndQuantity.SetCheckValue(true);
	m_wndUsage.SetLimitText(128);
	m_wndUsage.SetCheckValue(true);


	m_wndGroupList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndGroupList.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Item ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);


	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDrugName.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_pharma_group_lineTbl.SetTableName(_T("hms_pharma_group_line"));
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_id"), dfLong); 
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_itemid"), dfText, 15); 
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_qty"), dfLong); 
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_usage"), dfText, 128); 

}
void CHMSPrescriptionGroupItemsDialog::OnSetWindowEvents(){
	m_wndGroupList.SetEvent(WE_SELCHANGE, _OnGroupListSelectChangeFnc);
	m_wndGroupList.SetEvent(WE_LOADDATA, _OnGroupListLoadDataFnc);
	m_wndGroupList.SetEvent(WE_DBLCLICK, _OnGroupListDblClickFnc);
	m_wndGroupList.AddEvent(1, _T("Delete"), _OnGroupListDeleteItemFnc, 0, VK_DELETE, 0);
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
	//m_wndUsage.SetEvent(WE_CHANGE, _OnUsageChangeFnc);
	//m_wndUsage.SetEvent(WE_SETFOCUS, _OnUsageSetfocusFnc);
	//m_wndUsage.SetEvent(WE_KILLFOCUS, _OnUsageKillfocusFnc);
	m_wndUsage.SetEvent(WE_CHECKVALUE, _OnUsageCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPrescriptionGroupItemsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndUsage.GetDlgCtrlID(), m_szUsage);

}
void CHMSPrescriptionGroupItemsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpgl_itemid"), m_szDrugNameKey);
	rs.GetValue(_T("hpgl_qty"), m_nQuantity);
	rs.GetValue(_T("hpgl_usage"), m_szUsage);

}
void CHMSPrescriptionGroupItemsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pharma_group_lineTbl.SetValue(_T("hpgl_itemid"), m_szDrugNameKey);
	m_hms_pharma_group_lineTbl.SetValue(_T("hpgl_qty"), m_nQuantity);
	m_hms_pharma_group_lineTbl.SetValue(_T("hpgl_usage"), m_szUsage);

}
void CHMSPrescriptionGroupItemsDialog::SetDefaultValues(){

	m_szDrugNameKey.Empty();
	m_nQuantity=0;
	m_szUsage.Empty();

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
void CHMSPrescriptionGroupItemsDialog::OnGroupListDblClick(){
	
} 
void CHMSPrescriptionGroupItemsDialog::OnGroupListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionGroupItemsDialog::OnGroupListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionGroupItemsDialog::OnGroupListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndGroupList.BeginLoad(); 
	m_wndGroupList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroupList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndGroupList.EndLoad(); 
	return nCount;
*/
	return 0;
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
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ItemID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Qty")), NULL);
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
	};
	m_wndDrugName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
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
/*void CHMSPrescriptionGroupItemsDialog::OnUsageChange(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnUsageSetfocus(){
	
} */
/*void CHMSPrescriptionGroupItemsDialog::OnUsageKillfocus(){
	
} */
int CHMSPrescriptionGroupItemsDialog::OnUsageCheckValue(){
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
 	if(!pMF->SetStartWork(this,_T("Add HMSPrescriptionGroupItemsDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPrescriptionGroupItemsDialog::OnEditHMSPrescriptionGroupItemsDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPrescriptionGroupItemsDialog"))) 
 		return -1; 
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
 		//7szSQL = m_hms_pharma_group_lineTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pharma_group_lineTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPrescriptionGroupItemsDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
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
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSPrescriptionGroupItemsDialog::OnHMSPrescriptionGroupItemsDialogListLoadData(){
	return 0;
}
