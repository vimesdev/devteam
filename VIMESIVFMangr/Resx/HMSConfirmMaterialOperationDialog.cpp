#include "HMSConfirmMaterialOperationDialog.h"
#include "MainFrm.h"
/*static void _OnOperationNameChangeFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnOperationNameChange();
} */
/*static void _OnOperationNameSetfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnOperationNameSetfocus();} */ 
/*static void _OnOperationNameKillfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnOperationNameKillfocus();
} */
static int _OnOperationNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmMaterialOperationDialog *)pWnd)->OnOperationNameCheckValue();
} 
static void _OnReferenceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSConfirmMaterialOperationDialog* )pWnd)->OnReferenceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReferenceSelendokFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnReferenceSelendok();
}
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnReferenceKillfocus();
}*/
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnReferenceKillfocus();
}*/
static long _OnReferenceLoadDataFnc(CWnd *pWnd){
	return ((CHMSConfirmMaterialOperationDialog *)pWnd)->OnReferenceLoadData();
}
/*static void _OnReferenceAddNewFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnReferenceAddNew();
}*/
static void _OnScoliosisOperationSelectFnc(CWnd *pWnd){
	 ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnScoliosisOperationSelect();
}
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnInsurancePaidSelect();
}
/*static void _OnMaxInsurancePaidChangeFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnMaxInsurancePaidChange();
} */
/*static void _OnMaxInsurancePaidSetfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnMaxInsurancePaidSetfocus();} */ 
/*static void _OnMaxInsurancePaidKillfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnMaxInsurancePaidKillfocus();
} */
static int _OnMaxInsurancePaidCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmMaterialOperationDialog *)pWnd)->OnMaxInsurancePaidCheckValue();
} 
static void _OnMaterialStandardApplySelectFnc(CWnd *pWnd){
	 ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnMaterialStandardApplySelect();
}
/*static void _OnStandardAmountChangeFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnStandardAmountChange();
} */
/*static void _OnStandardAmountSetfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnStandardAmountSetfocus();} */ 
/*static void _OnStandardAmountKillfocusFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog *)pWnd)->OnStandardAmountKillfocus();
} */
static int _OnStandardAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSConfirmMaterialOperationDialog *)pWnd)->OnStandardAmountCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSConfirmMaterialOperationDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSConfirmMaterialOperationDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSConfirmMaterialOperationDialog *pVw = (CHMSConfirmMaterialOperationDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSConfirmMaterialOperationDialog *pVw = (CHMSConfirmMaterialOperationDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSConfirmMaterialOperationDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnAddHMSConfirmMaterialOperationDialog();
} 
static int _OnEditHMSConfirmMaterialOperationDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnEditHMSConfirmMaterialOperationDialog();
} 
static int _OnDeleteHMSConfirmMaterialOperationDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnDeleteHMSConfirmMaterialOperationDialog();
} 
static int _OnSaveHMSConfirmMaterialOperationDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnSaveHMSConfirmMaterialOperationDialog();
} 
static int _OnCancelHMSConfirmMaterialOperationDialogFnc(CWnd *pWnd){
	 return ((CHMSConfirmMaterialOperationDialog*)pWnd)->OnCancelHMSConfirmMaterialOperationDialog();
} 
CHMSConfirmMaterialOperationDialog::CHMSConfirmMaterialOperationDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSConfirmMaterialOperationDialog::~CHMSConfirmMaterialOperationDialog(){
}
void CHMSConfirmMaterialOperationDialog::OnCreateComponents(){
	m_wndMaterialDrugInformation.Create(this, _T("Material && Drug Information"), 5, 95, 960, 570);
	m_wndOperationNameLabel.Create(this, _T("Operation Name"), 10, 5, 150, 30);
	m_wndOperationName.Create(this,155, 5, 960, 30); 
	m_wndReferenceLabel.Create(this, _T("Reference Item"), 10, 35, 150, 60);
	m_wndReference.Create(this,155, 35, 960, 60); 
	m_wndScoliosisOperation.Create(this, _T("Scoliosis operation"), 10, 65, 150, 90);
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 155, 65, 295, 90);
	m_wndMaxInsurancePaidLabel.Create(this, _T("Max insurance paid"), 300, 65, 440, 90);
	m_wndMaxInsurancePaid.Create(this,445, 65, 545, 90); 
	m_wndMaterialStandardApply.Create(this, _T("Material standard apply"), 550, 65, 710, 90);
	m_wndStandardAmountLabel.Create(this, _T("Standard Amount"), 715, 65, 855, 90);
	m_wndStandardAmount.Create(this,860, 65, 960, 90); 
	m_wndList.Create(this,10, 120, 955, 565); 
	m_wndApply.Create(this, _T("&Apply"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);

}
void CHMSConfirmMaterialOperationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOperationName.SetLimitText(1024);
	m_wndOperationName.SetCheckValue(true);
	m_wndReference.SetCheckValue(true);
	m_wndReference.LimitText(1024);
	m_wndMaxInsurancePaid.SetLimitText(1024);
	m_wndMaxInsurancePaid.SetCheckValue(true);
	m_wndStandardAmount.SetLimitText(16);
	m_wndStandardAmount.SetCheckValue(true);





}
void CHMSConfirmMaterialOperationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOperationName.SetEvent(WE_CHANGE, _OnOperationNameChangeFnc);
	//m_wndOperationName.SetEvent(WE_SETFOCUS, _OnOperationNameSetfocusFnc);
	//m_wndOperationName.SetEvent(WE_KILLFOCUS, _OnOperationNameKillfocusFnc);
	m_wndOperationName.SetEvent(WE_CHECKVALUE, _OnOperationNameCheckValueFnc);
	m_wndReference.SetEvent(WE_SELENDOK, _OnReferenceSelendokFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_SELCHANGE, _OnReferenceSelectChangeFnc);
	m_wndReference.SetEvent(WE_LOADDATA, _OnReferenceLoadDataFnc);
	//m_wndReference.SetEvent(WE_ADDNEW, _OnReferenceAddNewFnc);
	m_wndScoliosisOperation.SetEvent(WE_CLICK, _OnScoliosisOperationSelectFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	//m_wndMaxInsurancePaid.SetEvent(WE_CHANGE, _OnMaxInsurancePaidChangeFnc);
	//m_wndMaxInsurancePaid.SetEvent(WE_SETFOCUS, _OnMaxInsurancePaidSetfocusFnc);
	//m_wndMaxInsurancePaid.SetEvent(WE_KILLFOCUS, _OnMaxInsurancePaidKillfocusFnc);
	m_wndMaxInsurancePaid.SetEvent(WE_CHECKVALUE, _OnMaxInsurancePaidCheckValueFnc);
	m_wndMaterialStandardApply.SetEvent(WE_CLICK, _OnMaterialStandardApplySelectFnc);
	//m_wndStandardAmount.SetEvent(WE_CHANGE, _OnStandardAmountChangeFnc);
	//m_wndStandardAmount.SetEvent(WE_SETFOCUS, _OnStandardAmountSetfocusFnc);
	//m_wndStandardAmount.SetEvent(WE_KILLFOCUS, _OnStandardAmountKillfocusFnc);
	m_wndStandardAmount.SetEvent(WE_CHECKVALUE, _OnStandardAmountCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSConfirmMaterialOperationDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOperationName.GetDlgCtrlID(), m_szOperationName);
	DDX_TextEx(pDX, m_wndReference.GetDlgCtrlID(), m_szReferenceKey);
	DDX_Check(pDX, m_wndScoliosisOperation.GetDlgCtrlID(), m_bScoliosisOperation);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Text(pDX, m_wndMaxInsurancePaid.GetDlgCtrlID(), m_nMaxInsurancePaid);
	DDX_Check(pDX, m_wndMaterialStandardApply.GetDlgCtrlID(), m_bMaterialStandardApply);
	DDX_Text(pDX, m_wndStandardAmount.GetDlgCtrlID(), m_nStandardAmount);

}
void CHMSConfirmMaterialOperationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSConfirmMaterialOperationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSConfirmMaterialOperationDialog::SetDefaultValues(){

	m_szOperationName.Empty();
	m_szReferenceKey.Empty();
	m_bScoliosisOperation=FALSE;
	m_bInsurancePaid=FALSE;
	m_nMaxInsurancePaid=0;
	m_bMaterialStandardApply=FALSE;
	m_nStandardAmount=0;

}
int CHMSConfirmMaterialOperationDialog::SetMode(int nMode){
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
/*void CHMSConfirmMaterialOperationDialog::OnOperationNameChange(){
	
} */
/*void CHMSConfirmMaterialOperationDialog::OnOperationNameSetfocus(){
	
} */
/*void CHMSConfirmMaterialOperationDialog::OnOperationNameKillfocus(){
	
} */
int CHMSConfirmMaterialOperationDialog::OnOperationNameCheckValue(){
	return 0;
} 
void CHMSConfirmMaterialOperationDialog::OnReferenceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSConfirmMaterialOperationDialog::OnReferenceSelendok(){
	 
}
/*void CHMSConfirmMaterialOperationDialog::OnReferenceSetfocus(){
	
}*/
/*void CHMSConfirmMaterialOperationDialog::OnReferenceKillfocus(){
	
}*/
long CHMSConfirmMaterialOperationDialog::OnReferenceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReference.IsSearchKey() && !m_szReferenceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReferenceKey
};
	m_wndReference.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReference.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSConfirmMaterialOperationDialog::OnReferenceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSConfirmMaterialOperationDialog::OnScoliosisOperationSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSConfirmMaterialOperationDialog::OnInsurancePaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSConfirmMaterialOperationDialog::OnMaxInsurancePaidChange(){
	
} */
/*void CHMSConfirmMaterialOperationDialog::OnMaxInsurancePaidSetfocus(){
	
} */
/*void CHMSConfirmMaterialOperationDialog::OnMaxInsurancePaidKillfocus(){
	
} */
int CHMSConfirmMaterialOperationDialog::OnMaxInsurancePaidCheckValue(){
	return 0;
} 
	void CHMSConfirmMaterialOperationDialog::OnMaterialStandardApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSConfirmMaterialOperationDialog::OnStandardAmountChange(){
	
} */
/*void CHMSConfirmMaterialOperationDialog::OnStandardAmountSetfocus(){
	
} */
/*void CHMSConfirmMaterialOperationDialog::OnStandardAmountKillfocus(){
	
} */
int CHMSConfirmMaterialOperationDialog::OnStandardAmountCheckValue(){
	return 0;
} 
void CHMSConfirmMaterialOperationDialog::OnListDblClick(){
	
} 
void CHMSConfirmMaterialOperationDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSConfirmMaterialOperationDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSConfirmMaterialOperationDialog::OnListLoadData(){
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
void CHMSConfirmMaterialOperationDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSConfirmMaterialOperationDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSConfirmMaterialOperationDialog::OnAddHMSConfirmMaterialOperationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSConfirmMaterialOperationDialog::OnEditHMSConfirmMaterialOperationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSConfirmMaterialOperationDialog::OnDeleteHMSConfirmMaterialOperationDialog(){
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
 		OnCancelHMSConfirmMaterialOperationDialog();
 	}
	return 0;
}
int CHMSConfirmMaterialOperationDialog::OnSaveHMSConfirmMaterialOperationDialog(){
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
 		//OnHMSConfirmMaterialOperationDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSConfirmMaterialOperationDialog::OnCancelHMSConfirmMaterialOperationDialog(){
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
int CHMSConfirmMaterialOperationDialog::OnHMSConfirmMaterialOperationDialogListLoadData(){
	return 0;
}
