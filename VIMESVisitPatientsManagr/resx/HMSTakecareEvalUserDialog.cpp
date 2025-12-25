#include "HMSTakecareEvalUserDialog.h"
#include "MainFrm.h"
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog *)pWnd)->OnNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTakecareEvalUserDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTakecareEvalUserDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTakecareEvalUserDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTakecareEvalUserDialog *pVw = (CHMSTakecareEvalUserDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnAddHMSTakecareEvalUserDialog();
} 
static int _OnEditHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnEditHMSTakecareEvalUserDialog();
} 
static int _OnDeleteHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnDeleteHMSTakecareEvalUserDialog();
} 
static int _OnSaveHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnSaveHMSTakecareEvalUserDialog();
} 
static int _OnCancelHMSTakecareEvalUserDialogFnc(CWnd *pWnd){
	 return ((CHMSTakecareEvalUserDialog*)pWnd)->OnCancelHMSTakecareEvalUserDialog();
} 
CHMSTakecareEvalUserDialog::CHMSTakecareEvalUserDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSTakecareEvalUserDialog::~CHMSTakecareEvalUserDialog(){
}
void CHMSTakecareEvalUserDialog::OnCreateComponents(){
	m_wndCodeLabel.Create(this, _T("Code"), 5, 370, 85, 395);
	m_wndCode.Create(this,90, 370, 240, 395); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 400, 85, 425);
	m_wndName.Create(this,90, 400, 510, 425); 
	m_wndList.Create(this,5, 5, 510, 365); 
	m_wndAdd.Create(this, _T("&Add"), 5, 430, 85, 455);
	m_wndEdit.Create(this, _T("&Edit"), 90, 430, 170, 455);
	m_wndDelete.Create(this, _T("&Delete"), 175, 430, 255, 455);
	m_wndSave.Create(this, _T("&Save"), 260, 430, 340, 455);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 430, 425, 455);
	m_wndClose.Create(this, _T("&Close"), 430, 430, 510, 455);

}
void CHMSTakecareEvalUserDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);



}
void CHMSTakecareEvalUserDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSTakecareEvalUserDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSTakecareEvalUserDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("Name")] =  m_szName;
	}
	else
	{
			
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("Name")].GetValue(m_szName);
	}

}
void CHMSTakecareEvalUserDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTakecareEvalUserDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTakecareEvalUserDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szName.Empty();

}
int CHMSTakecareEvalUserDialog::SetMode(int nMode){
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
/*void CHMSTakecareEvalUserDialog::OnCodeChange(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnCodeSetfocus(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnCodeKillfocus(){
	
} */
int CHMSTakecareEvalUserDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSTakecareEvalUserDialog::OnNameChange(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnNameSetfocus(){
	
} */
/*void CHMSTakecareEvalUserDialog::OnNameKillfocus(){
	
} */
int CHMSTakecareEvalUserDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSTakecareEvalUserDialog::OnListDblClick(){
	
} 
void CHMSTakecareEvalUserDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTakecareEvalUserDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTakecareEvalUserDialog::OnListLoadData(){
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
void CHMSTakecareEvalUserDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTakecareEvalUserDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTakecareEvalUserDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTakecareEvalUserDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTakecareEvalUserDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTakecareEvalUserDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTakecareEvalUserDialog::OnAddHMSTakecareEvalUserDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTakecareEvalUserDialog::OnEditHMSTakecareEvalUserDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTakecareEvalUserDialog::OnDeleteHMSTakecareEvalUserDialog(){
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
 		OnCancelHMSTakecareEvalUserDialog();
 	}
	return 0;
}
int CHMSTakecareEvalUserDialog::OnSaveHMSTakecareEvalUserDialog(){
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
 		//OnHMSTakecareEvalUserDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTakecareEvalUserDialog::OnCancelHMSTakecareEvalUserDialog(){
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
int CHMSTakecareEvalUserDialog::OnHMSTakecareEvalUserDialogListLoadData(){
	return 0;
}
