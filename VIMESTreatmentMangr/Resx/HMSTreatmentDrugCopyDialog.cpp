#include "HMSTreatmentDrugCopyDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSTreatmentDrugCopyDialog *pVw = (CHMSTreatmentDrugCopyDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentDrugCopyDialog *pVw = (CHMSTreatmentDrugCopyDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentDrugCopyDialog* )pWnd)->OnPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodSelendok();
}
/*static void _OnPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodKillfocus();
}*/
/*static void _OnPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodKillfocus();
}*/
static long _OnPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodLoadData();
}
/*static void _OnPeriodAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentDrugCopyDialog *)pWnd)->OnPeriodAddNew();
}*/
static int _OnAddHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnAddHMSTreatmentDrugCopyDialog();
} 
static int _OnEditHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnEditHMSTreatmentDrugCopyDialog();
} 
static int _OnDeleteHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnDeleteHMSTreatmentDrugCopyDialog();
} 
static int _OnSaveHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnSaveHMSTreatmentDrugCopyDialog();
} 
static int _OnCancelHMSTreatmentDrugCopyDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentDrugCopyDialog*)pWnd)->OnCancelHMSTreatmentDrugCopyDialog();
} 
CHMSTreatmentDrugCopyDialog::CHMSTreatmentDrugCopyDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSTreatmentDrugCopyDialog::~CHMSTreatmentDrugCopyDialog(){
}
void CHMSTreatmentDrugCopyDialog::OnCreateComponents(){
	m_wndOrderInfo.Create(this, _T("Order Info"), 4, 5, 219, 485);
	m_wndDrugInformation.Create(this, _T("Drug Information"), 225, 5, 960, 485);
	m_wndList.Create(this,230, 30, 955, 480); 
	m_wndApply.Create(this, _T("&Apply"), 795, 490, 875, 515);
	m_wndClose.Create(this, _T("&Close"), 880, 490, 960, 515);
	m_wndPeriodLabel.Create(this, _T("Period"), 4, 489, 84, 514);
	m_wndPeriod.Create(this,84, 489, 219, 514); 

}
void CHMSTreatmentDrugCopyDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPeriod.SetCheckValue(true);
	m_wndPeriod.LimitText(35);




	m_wndPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSTreatmentDrugCopyDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPeriod.SetEvent(WE_SELENDOK, _OnPeriodSelendokFnc);
	//m_wndPeriod.SetEvent(WE_SETFOCUS, _OnPeriodSetfocusFnc);
	//m_wndPeriod.SetEvent(WE_KILLFOCUS, _OnPeriodKillfocusFnc);
	m_wndPeriod.SetEvent(WE_SELCHANGE, _OnPeriodSelectChangeFnc);
	m_wndPeriod.SetEvent(WE_LOADDATA, _OnPeriodLoadDataFnc);
	//m_wndPeriod.SetEvent(WE_ADDNEW, _OnPeriodAddNewFnc);
	SetMode(VM_NONE);

}
void CHMSTreatmentDrugCopyDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPeriod.GetDlgCtrlID(), m_szPeriodKey);

}
void CHMSTreatmentDrugCopyDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Period")] =  m_szPeriodKey;
	}
	else
	{
			
	m_jData[_T("Period")].GetValue(m_szPeriodKey);
	}

}
void CHMSTreatmentDrugCopyDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentDrugCopyDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentDrugCopyDialog::SetDefaultValues(){

	m_szPeriodKey.Empty();

}
int CHMSTreatmentDrugCopyDialog::SetMode(int nMode){
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
void CHMSTreatmentDrugCopyDialog::OnListDblClick(){
	
} 
void CHMSTreatmentDrugCopyDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentDrugCopyDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentDrugCopyDialog::OnListLoadData(){
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
void CHMSTreatmentDrugCopyDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDrugCopyDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDrugCopyDialog::OnPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentDrugCopyDialog::OnPeriodSelendok(){
	 
}
/*void CHMSTreatmentDrugCopyDialog::OnPeriodSetfocus(){
	
}*/
/*void CHMSTreatmentDrugCopyDialog::OnPeriodKillfocus(){
	
}*/
long CHMSTreatmentDrugCopyDialog::OnPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriod.IsSearchKey() && !m_szPeriodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPeriodKey
};
	m_wndPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatmentDrugCopyDialog::OnPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CHMSTreatmentDrugCopyDialog::OnAddHMSTreatmentDrugCopyDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentDrugCopyDialog::OnEditHMSTreatmentDrugCopyDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentDrugCopyDialog::OnDeleteHMSTreatmentDrugCopyDialog(){
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
 		OnCancelHMSTreatmentDrugCopyDialog();
 	}
	return 0;
}
int CHMSTreatmentDrugCopyDialog::OnSaveHMSTreatmentDrugCopyDialog(){
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
 		//OnHMSTreatmentDrugCopyDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentDrugCopyDialog::OnCancelHMSTreatmentDrugCopyDialog(){
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
int CHMSTreatmentDrugCopyDialog::OnHMSTreatmentDrugCopyDialogListLoadData(){
	return 0;
}
