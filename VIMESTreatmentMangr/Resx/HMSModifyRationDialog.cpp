#include "HMSModifyRationDialog.h"
#include "MainFrm.h"
static void _OnOldRationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSModifyRationDialog* )pWnd)->OnOldRationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOldRationSelendokFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationSelendok();
}
/*static void _OnOldRationSetfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationKillfocus();
}*/
/*static void _OnOldRationKillfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationKillfocus();
}*/
static long _OnOldRationLoadDataFnc(CWnd *pWnd){
	return ((CHMSModifyRationDialog *)pWnd)->OnOldRationLoadData();
}
/*static void _OnOldRationAddNewFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationAddNew();
}*/
/*static void _OnOldRationQtyChangeFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationQtyChange();
} */
/*static void _OnOldRationQtySetfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationQtySetfocus();} */ 
/*static void _OnOldRationQtyKillfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnOldRationQtyKillfocus();
} */
static int _OnOldRationQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSModifyRationDialog *)pWnd)->OnOldRationQtyCheckValue();
} 
static void _OnNewRationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSModifyRationDialog* )pWnd)->OnNewRationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewRationSelendokFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationSelendok();
}
/*static void _OnNewRationSetfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationKillfocus();
}*/
/*static void _OnNewRationKillfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationKillfocus();
}*/
static long _OnNewRationLoadDataFnc(CWnd *pWnd){
	return ((CHMSModifyRationDialog *)pWnd)->OnNewRationLoadData();
}
/*static void _OnNewRationAddNewFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationAddNew();
}*/
/*static void _OnNewRationQtyChangeFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationQtyChange();
} */
/*static void _OnNewRationQtySetfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationQtySetfocus();} */ 
/*static void _OnNewRationQtyKillfocusFnc(CWnd *pWnd){
	((CHMSModifyRationDialog *)pWnd)->OnNewRationQtyKillfocus();
} */
static int _OnNewRationQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSModifyRationDialog *)pWnd)->OnNewRationQtyCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSModifyRationDialog *pVw = (CHMSModifyRationDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSModifyRationDialog *pVw = (CHMSModifyRationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyRationDialog*)pWnd)->OnAddHMSModifyRationDialog();
} 
static int _OnEditHMSModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyRationDialog*)pWnd)->OnEditHMSModifyRationDialog();
} 
static int _OnDeleteHMSModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyRationDialog*)pWnd)->OnDeleteHMSModifyRationDialog();
} 
static int _OnSaveHMSModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyRationDialog*)pWnd)->OnSaveHMSModifyRationDialog();
} 
static int _OnCancelHMSModifyRationDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyRationDialog*)pWnd)->OnCancelHMSModifyRationDialog();
} 
CHMSModifyRationDialog::CHMSModifyRationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSModifyRationDialog::~CHMSModifyRationDialog(){
}
void CHMSModifyRationDialog::OnCreateComponents(){
	m_wndModifyRationInformation.Create(this, _T("Modify Ration  Information"), 5, 5, 605, 90);
	m_wndOldRationLabel.Create(this, _T("Old Ration"), 10, 30, 90, 55);
	m_wndOldRation.Create(this,95, 30, 450, 55); 
	m_wndOldRationQtyLabel.Create(this, _T("Qty"), 455, 30, 525, 55);
	m_wndOldRationQty.Create(this,530, 30, 600, 55); 
	m_wndNewRationLabel.Create(this, _T("New Ration"), 10, 60, 90, 85);
	m_wndNewRation.Create(this,95, 59, 450, 84); 
	m_wndNewRationQtyLabel.Create(this, _T("Qty"), 455, 60, 525, 85);
	m_wndNewRationQty.Create(this,530, 60, 600, 85); 
	m_wndApply.Create(this, _T("&Apply"), 441, 95, 521, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 526, 95, 606, 120);

}
void CHMSModifyRationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldRation.SetCheckValue(true);
	m_wndOldRation.LimitText(35);
	m_wndOldRationQty.SetLimitText(16);
	m_wndOldRationQty.SetCheckValue(true);
	m_wndNewRation.SetCheckValue(true);
	m_wndNewRation.LimitText(35);
	m_wndNewRationQty.SetLimitText(16);
	m_wndNewRationQty.SetCheckValue(true);


	m_wndOldRation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOldRation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndNewRation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNewRation.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSModifyRationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldRation.SetEvent(WE_SELENDOK, _OnOldRationSelendokFnc);
	//m_wndOldRation.SetEvent(WE_SETFOCUS, _OnOldRationSetfocusFnc);
	//m_wndOldRation.SetEvent(WE_KILLFOCUS, _OnOldRationKillfocusFnc);
	m_wndOldRation.SetEvent(WE_SELCHANGE, _OnOldRationSelectChangeFnc);
	m_wndOldRation.SetEvent(WE_LOADDATA, _OnOldRationLoadDataFnc);
	//m_wndOldRation.SetEvent(WE_ADDNEW, _OnOldRationAddNewFnc);
	//m_wndOldRationQty.SetEvent(WE_CHANGE, _OnOldRationQtyChangeFnc);
	//m_wndOldRationQty.SetEvent(WE_SETFOCUS, _OnOldRationQtySetfocusFnc);
	//m_wndOldRationQty.SetEvent(WE_KILLFOCUS, _OnOldRationQtyKillfocusFnc);
	m_wndOldRationQty.SetEvent(WE_CHECKVALUE, _OnOldRationQtyCheckValueFnc);
	m_wndNewRation.SetEvent(WE_SELENDOK, _OnNewRationSelendokFnc);
	//m_wndNewRation.SetEvent(WE_SETFOCUS, _OnNewRationSetfocusFnc);
	//m_wndNewRation.SetEvent(WE_KILLFOCUS, _OnNewRationKillfocusFnc);
	m_wndNewRation.SetEvent(WE_SELCHANGE, _OnNewRationSelectChangeFnc);
	m_wndNewRation.SetEvent(WE_LOADDATA, _OnNewRationLoadDataFnc);
	//m_wndNewRation.SetEvent(WE_ADDNEW, _OnNewRationAddNewFnc);
	//m_wndNewRationQty.SetEvent(WE_CHANGE, _OnNewRationQtyChangeFnc);
	//m_wndNewRationQty.SetEvent(WE_SETFOCUS, _OnNewRationQtySetfocusFnc);
	//m_wndNewRationQty.SetEvent(WE_KILLFOCUS, _OnNewRationQtyKillfocusFnc);
	m_wndNewRationQty.SetEvent(WE_CHECKVALUE, _OnNewRationQtyCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSModifyRationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOldRation.GetDlgCtrlID(), m_szOldRationKey);
	DDX_Text(pDX, m_wndOldRationQty.GetDlgCtrlID(), m_nOldRationQty);
	DDX_TextEx(pDX, m_wndNewRation.GetDlgCtrlID(), m_szNewRationKey);
	DDX_Text(pDX, m_wndNewRationQty.GetDlgCtrlID(), m_nNewRationQty);

}
void CHMSModifyRationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSModifyRationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSModifyRationDialog::SetDefaultValues(){

	m_szOldRationKey.Empty();
	m_nOldRationQty=0;
	m_szNewRationKey.Empty();
	m_nNewRationQty=0;

}
int CHMSModifyRationDialog::SetMode(int nMode){
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
void CHMSModifyRationDialog::OnOldRationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSModifyRationDialog::OnOldRationSelendok(){
	 
}
/*void CHMSModifyRationDialog::OnOldRationSetfocus(){
	
}*/
/*void CHMSModifyRationDialog::OnOldRationKillfocus(){
	
}*/
long CHMSModifyRationDialog::OnOldRationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOldRation.IsSearchKey() && !m_szOldRationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOldRationKey
};
	m_wndOldRation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOldRation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSModifyRationDialog::OnOldRationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSModifyRationDialog::OnOldRationQtyChange(){
	
} */
/*void CHMSModifyRationDialog::OnOldRationQtySetfocus(){
	
} */
/*void CHMSModifyRationDialog::OnOldRationQtyKillfocus(){
	
} */
int CHMSModifyRationDialog::OnOldRationQtyCheckValue(){
	return 0;
} 
void CHMSModifyRationDialog::OnNewRationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSModifyRationDialog::OnNewRationSelendok(){
	 
}
/*void CHMSModifyRationDialog::OnNewRationSetfocus(){
	
}*/
/*void CHMSModifyRationDialog::OnNewRationKillfocus(){
	
}*/
long CHMSModifyRationDialog::OnNewRationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndNewRation.IsSearchKey() && !m_szNewRationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szNewRationKey
};
	m_wndNewRation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewRation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSModifyRationDialog::OnNewRationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSModifyRationDialog::OnNewRationQtyChange(){
	
} */
/*void CHMSModifyRationDialog::OnNewRationQtySetfocus(){
	
} */
/*void CHMSModifyRationDialog::OnNewRationQtyKillfocus(){
	
} */
int CHMSModifyRationDialog::OnNewRationQtyCheckValue(){
	return 0;
} 
void CHMSModifyRationDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSModifyRationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSModifyRationDialog::OnAddHMSModifyRationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSModifyRationDialog::OnEditHMSModifyRationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSModifyRationDialog::OnDeleteHMSModifyRationDialog(){
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
 		OnCancelHMSModifyRationDialog();
 	}
	return 0;
}
int CHMSModifyRationDialog::OnSaveHMSModifyRationDialog(){
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
 		//OnHMSModifyRationDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSModifyRationDialog::OnCancelHMSModifyRationDialog(){
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
int CHMSModifyRationDialog::OnHMSModifyRationDialogListLoadData(){
	return 0;
}
