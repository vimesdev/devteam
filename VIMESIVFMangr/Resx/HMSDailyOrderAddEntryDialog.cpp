#include "HMSDailyOrderAddEntryDialog.h"
#include "MainFrm.h"
static void _OnPatientNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyOrderAddEntryDialog* )pWnd)->OnPatientNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientNameSelendokFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameSelendok();
}
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameKillfocus();
}*/
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameKillfocus();
}*/
static long _OnPatientNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameLoadData();
}
/*static void _OnPatientNameAddNewFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnPatientNameAddNew();
}*/
static void _OnPrevOrderSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnPrevOrderSelect();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnLogListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListLoadData();
} 
static void _OnLogListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListDblClick();
} 
static void _OnLogListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListSelectChange(nOldItem, nNewItem);
} 
static int _OnLogListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnLogListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnmarkSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnUnmarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyOrderAddEntryDialog *pVw = (CHMSDailyOrderAddEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnAddHMSDailyOrderAddEntryDialog();
} 
static int _OnEditHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnEditHMSDailyOrderAddEntryDialog();
} 
static int _OnDeleteHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnDeleteHMSDailyOrderAddEntryDialog();
} 
static int _OnSaveHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnSaveHMSDailyOrderAddEntryDialog();
} 
static int _OnCancelHMSDailyOrderAddEntryDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyOrderAddEntryDialog*)pWnd)->OnCancelHMSDailyOrderAddEntryDialog();
} 
CHMSDailyOrderAddEntryDialog::CHMSDailyOrderAddEntryDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1025;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSDailyOrderAddEntryDialog::~CHMSDailyOrderAddEntryDialog(){
}
void CHMSDailyOrderAddEntryDialog::OnCreateComponents(){
	m_wndDrugLogsI.Create(this, _T("Drug Logs"), 5, 70, 500, 570);
	m_wndPatientList.Create(this, _T("Patient List"), 506, 5, 1021, 570);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 5, 10, 125, 35);
	m_wndPatientName.Create(this,130, 10, 403, 35); 
	m_wndPrevOrder.Create(this, _T("Prev Order"), 408, 10, 498, 35);
	m_wndDescription.Create(this,5, 40, 498, 65); 
	m_wndLogList.Create(this,10, 95, 495, 565); 
	m_wndList.Create(this,510, 30, 1015, 565); 
	m_wndMarkAll.Create(this, _T("Mark"), 5, 575, 85, 600);
	m_wndUnmark.Create(this, _T("Unmark"), 90, 575, 170, 600);
	m_wndAdd.Create(this, _T("&Add >>"), 408, 575, 498, 600);
	m_wndClose.Create(this, _T("&Close"), 940, 575, 1020, 600);

}
void CHMSDailyOrderAddEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetCheckValue(true);
	m_wndPatientName.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndPatientName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPatientName.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndLogList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndLogList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndLogList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndLogList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
	m_wndLogList.InsertColumn(4, _T("Storage ID"), CFMT_NUMBER, 60);
	m_wndLogList.InsertColumn(5, _T("Qty Onhand"), CFMT_NUMBER, 60);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(3, _T("Qty"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(4, _T("Storage ID"), CFMT_NUMBER, 60);

}
void CHMSDailyOrderAddEntryDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetEvent(WE_SELENDOK, _OnPatientNameSelendokFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_SELCHANGE, _OnPatientNameSelectChangeFnc);
	m_wndPatientName.SetEvent(WE_LOADDATA, _OnPatientNameLoadDataFnc);
	//m_wndPatientName.SetEvent(WE_ADDNEW, _OnPatientNameAddNewFnc);
	m_wndPrevOrder.SetEvent(WE_CLICK, _OnPrevOrderSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndLogList.SetEvent(WE_SELCHANGE, _OnLogListSelectChangeFnc);
	m_wndLogList.SetEvent(WE_LOADDATA, _OnLogListLoadDataFnc);
	m_wndLogList.SetEvent(WE_DBLCLICK, _OnLogListDblClickFnc);
	m_wndLogList.AddEvent(1, _T("Delete"), _OnLogListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnmark.SetEvent(WE_CLICK, _OnUnmarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSDailyOrderAddEntryDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientNameKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSDailyOrderAddEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyOrderAddEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDailyOrderAddEntryDialog::SetDefaultValues(){

	m_szPatientNameKey.Empty();
	m_szDescription.Empty();

}
int CHMSDailyOrderAddEntryDialog::SetMode(int nMode){
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
void CHMSDailyOrderAddEntryDialog::OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntryDialog::OnPatientNameSelendok(){
	 
}
/*void CHMSDailyOrderAddEntryDialog::OnPatientNameSetfocus(){
	
}*/
/*void CHMSDailyOrderAddEntryDialog::OnPatientNameKillfocus(){
	
}*/
long CHMSDailyOrderAddEntryDialog::OnPatientNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPatientName.IsSearchKey() && !m_szPatientNameKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPatientNameKey
};
	m_wndPatientName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDailyOrderAddEntryDialog::OnPatientNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyOrderAddEntryDialog::OnPrevOrderSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSDailyOrderAddEntryDialog::OnDescriptionChange(){
	
} */
/*void CHMSDailyOrderAddEntryDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSDailyOrderAddEntryDialog::OnDescriptionKillfocus(){
	
} */
int CHMSDailyOrderAddEntryDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSDailyOrderAddEntryDialog::OnLogListDblClick(){
	
} 
void CHMSDailyOrderAddEntryDialog::OnLogListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderAddEntryDialog::OnLogListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderAddEntryDialog::OnLogListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLogList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLogList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("StorageID")), 
			rs.GetValue(_T("QtyOnhand")), NULL);
		rs.MoveNext();
	}
	m_wndLogList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDailyOrderAddEntryDialog::OnListDblClick(){
	
} 
void CHMSDailyOrderAddEntryDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderAddEntryDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyOrderAddEntryDialog::OnListLoadData(){
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
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("StorageID")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSDailyOrderAddEntryDialog::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntryDialog::OnUnmarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntryDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyOrderAddEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyOrderAddEntryDialog::OnAddHMSDailyOrderAddEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyOrderAddEntryDialog::OnEditHMSDailyOrderAddEntryDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyOrderAddEntryDialog::OnDeleteHMSDailyOrderAddEntryDialog(){
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
 		OnCancelHMSDailyOrderAddEntryDialog();
 	}
	return 0;
}
int CHMSDailyOrderAddEntryDialog::OnSaveHMSDailyOrderAddEntryDialog(){
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
 		//OnHMSDailyOrderAddEntryDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyOrderAddEntryDialog::OnCancelHMSDailyOrderAddEntryDialog(){
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
int CHMSDailyOrderAddEntryDialog::OnHMSDailyOrderAddEntryDialogListLoadData(){
	return 0;
}
