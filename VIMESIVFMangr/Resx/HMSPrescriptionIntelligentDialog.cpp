#include "HMSPrescriptionIntelligentDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnGroupListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnGroupListLoadData();
} 
static void _OnGroupListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog*)pWnd)->OnGroupListDblClick();
} 
static void _OnGroupListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionIntelligentDialog*)pWnd)->OnGroupListSelectChange(nOldItem, nNewItem);
} 
static int _OnGroupListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnGroupListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionIntelligentDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPrescriptionIntelligentDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionIntelligentDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnStockAddNew();
}*/
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionIntelligentDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionIntelligentDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSPrescriptionIntelligentDialog *pVw = (CHMSPrescriptionIntelligentDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPrescriptionIntelligentDialog *pVw = (CHMSPrescriptionIntelligentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSPrescriptionIntelligentDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnAddHMSPrescriptionIntelligentDialog();
} 
static int _OnEditHMSPrescriptionIntelligentDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnEditHMSPrescriptionIntelligentDialog();
} 
static int _OnDeleteHMSPrescriptionIntelligentDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnDeleteHMSPrescriptionIntelligentDialog();
} 
static int _OnSaveHMSPrescriptionIntelligentDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnSaveHMSPrescriptionIntelligentDialog();
} 
static int _OnCancelHMSPrescriptionIntelligentDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionIntelligentDialog*)pWnd)->OnCancelHMSPrescriptionIntelligentDialog();
} 
CHMSPrescriptionIntelligentDialog::CHMSPrescriptionIntelligentDialog(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 505;
	SetDefaultValues();
}
CHMSPrescriptionIntelligentDialog::~CHMSPrescriptionIntelligentDialog(){
}
void CHMSPrescriptionIntelligentDialog::OnCreateComponents(){
	m_wndPrescriptionGroup.Create(this, _T("Prescription Group"), 5, 5, 265, 500);
	m_wndDrugInformation.Create(this, _T("Drug Information"), 270, 5, 800, 470);
	m_wndGroupList.Create(this,10, 30, 260, 494); 
	m_wndList.Create(this,276, 30, 796, 435); 
	m_wndStockLabel.Create(this, _T("Stock"), 276, 440, 356, 465);
	m_wndStock.Create(this,361, 440, 606, 465); 
	m_wndOrderDateLabel.Create(this, _T("Order Date"), 611, 440, 701, 465);
	m_wndOrderDate.Create(this,706, 440, 796, 465); 
	m_wndApply.Create(this, _T("&Apply"), 644, 475, 719, 500);
	m_wndCancel.Create(this, _T("&Cancel"), 724, 475, 799, 500);

}
void CHMSPrescriptionIntelligentDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);


	m_wndGroupList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 30);
	m_wndGroupList.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);


	m_wndList.InsertColumn(0, _T("Item ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(4, _T("Onhand"), CFMT_TEXT, 80);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_pharma_group_lineTbl.SetTableName(_T("hms_pharma_group_line"));
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_id"), dfLong); 
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_itemid"), dfText, 15); 
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_qty"), dfLong); 
	m_hms_pharma_group_lineTbl.AddField(_T("hpgl_usage"), dfText, 128); 

}
void CHMSPrescriptionIntelligentDialog::OnSetWindowEvents(){
	m_wndGroupList.SetEvent(WE_SELCHANGE, _OnGroupListSelectChangeFnc);
	m_wndGroupList.SetEvent(WE_LOADDATA, _OnGroupListLoadDataFnc);
	m_wndGroupList.SetEvent(WE_DBLCLICK, _OnGroupListDblClickFnc);
	m_wndGroupList.AddEvent(1, _T("Delete"), _OnGroupListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
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
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

}
void CHMSPrescriptionIntelligentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);

}
void CHMSPrescriptionIntelligentDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionIntelligentDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionIntelligentDialog::SetDefaultValues(){

	m_szStockKey.Empty();
	m_szOrderDate.Empty();

}
int CHMSPrescriptionIntelligentDialog::SetMode(int nMode){ 
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
void CHMSPrescriptionIntelligentDialog::OnGroupListDblClick(){
	
} 
void CHMSPrescriptionIntelligentDialog::OnGroupListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionIntelligentDialog::OnGroupListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionIntelligentDialog::OnGroupListLoadData(){
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
void CHMSPrescriptionIntelligentDialog::OnListDblClick(){
	
} 
void CHMSPrescriptionIntelligentDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionIntelligentDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionIntelligentDialog::OnListLoadData(){
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
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Onhand")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPrescriptionIntelligentDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionIntelligentDialog::OnStockSelendok(){
	 
}
/*void CHMSPrescriptionIntelligentDialog::OnStockSetfocus(){
	
}*/
/*void CHMSPrescriptionIntelligentDialog::OnStockKillfocus(){
	
}*/
long CHMSPrescriptionIntelligentDialog::OnStockLoadData(){
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionIntelligentDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPrescriptionIntelligentDialog::OnOrderDateChange(){
	
} */
/*void CHMSPrescriptionIntelligentDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSPrescriptionIntelligentDialog::OnOrderDateKillfocus(){
	
} */
int CHMSPrescriptionIntelligentDialog::OnOrderDateCheckValue(){
	return 0;
} 
void CHMSPrescriptionIntelligentDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionIntelligentDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionIntelligentDialog::OnAddHMSPrescriptionIntelligentDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPrescriptionIntelligentDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPrescriptionIntelligentDialog::OnEditHMSPrescriptionIntelligentDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPrescriptionIntelligentDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPrescriptionIntelligentDialog::OnDeleteHMSPrescriptionIntelligentDialog(){
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
 		OnCancelHMSPrescriptionIntelligentDialog(); 
 	}
return 0;
 } 
int CHMSPrescriptionIntelligentDialog::OnSaveHMSPrescriptionIntelligentDialog(){
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
 		//OnHMSPrescriptionIntelligentDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPrescriptionIntelligentDialog::OnCancelHMSPrescriptionIntelligentDialog(){
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
int CHMSPrescriptionIntelligentDialog::OnHMSPrescriptionIntelligentDialogListLoadData(){
	return 0;
}
