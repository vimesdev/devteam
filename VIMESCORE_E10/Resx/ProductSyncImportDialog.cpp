#include "ProductSyncImportDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CProductSyncImportDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CProductSyncImportDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnXLSFileChangeFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnXLSFileChange();
} */
/*static void _OnXLSFileSetfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnXLSFileSetfocus();} */ 
/*static void _OnXLSFileKillfocusFnc(CWnd *pWnd){
	((CProductSyncImportDialog *)pWnd)->OnXLSFileKillfocus();
} */
static int _OnXLSFileCheckValueFnc(CWnd *pWnd){
	return ((CProductSyncImportDialog *)pWnd)->OnXLSFileCheckValue();
} 
static void _OnBrowseSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnBrowseSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CProductSyncImportDialog *pVw = (CProductSyncImportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnAddProductSyncImportDialog();
} 
static int _OnEditProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnEditProductSyncImportDialog();
} 
static int _OnDeleteProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnDeleteProductSyncImportDialog();
} 
static int _OnSaveProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnSaveProductSyncImportDialog();
} 
static int _OnCancelProductSyncImportDialogFnc(CWnd *pWnd){
	 return ((CProductSyncImportDialog*)pWnd)->OnCancelProductSyncImportDialog();
} 
CProductSyncImportDialog::CProductSyncImportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CProductSyncImportDialog::~CProductSyncImportDialog(){
}
void CProductSyncImportDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 510, 275); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 280, 85, 305);
	m_wndID.Create(this,90, 280, 240, 305); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 310, 85, 335);
	m_wndDescription.Create(this,90, 310, 510, 335); 
	m_wndXLSFileLabel.Create(this, _T("XLS File"), 5, 340, 85, 365);
	m_wndXLSFile.Create(this,90, 340, 480, 365); 
	m_wndBrowse.Create(this, _T("..."), 485, 340, 510, 365);
	m_wndAdd.Create(this, _T("&Add"), 5, 370, 85, 395);
	m_wndEdit.Create(this, _T("&Edit"), 90, 370, 170, 395);
	m_wndDelete.Create(this, _T("&Delete"), 175, 370, 255, 395);
	m_wndCancel.Create(this, _T("&Cancel"), 260, 370, 340, 395);
	m_wndSave.Create(this, _T("&Save"), 345, 370, 425, 395);
	m_wndClose.Create(this, _T("&Close"), 430, 370, 510, 395);

}
void CProductSyncImportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);
	m_wndXLSFile.SetLimitText(35);
	m_wndXLSFile.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Id"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("File XLS"), CFMT_TEXT, 100);

}
void CProductSyncImportDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndXLSFile.SetEvent(WE_CHANGE, _OnXLSFileChangeFnc);
	//m_wndXLSFile.SetEvent(WE_SETFOCUS, _OnXLSFileSetfocusFnc);
	//m_wndXLSFile.SetEvent(WE_KILLFOCUS, _OnXLSFileKillfocusFnc);
	m_wndXLSFile.SetEvent(WE_CHECKVALUE, _OnXLSFileCheckValueFnc);
	m_wndBrowse.SetEvent(WE_CLICK, _OnBrowseSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CProductSyncImportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndXLSFile.GetDlgCtrlID(), m_szXLSFile);

}
void CProductSyncImportDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("XLSFile")] =  m_szXLSFile;
	}
	else
	{
			
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("XLSFile")].GetValue(m_szXLSFile);
	}

}
void CProductSyncImportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CProductSyncImportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CProductSyncImportDialog::SetDefaultValues(){

	m_szID.Empty();
	m_szDescription.Empty();
	m_szXLSFile.Empty();

}
int CProductSyncImportDialog::SetMode(int nMode){
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
void CProductSyncImportDialog::OnListDblClick(){
	
} 
void CProductSyncImportDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSyncImportDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CProductSyncImportDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Id")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("FileXLS")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CProductSyncImportDialog::OnIDChange(){
	
} */
/*void CProductSyncImportDialog::OnIDSetfocus(){
	
} */
/*void CProductSyncImportDialog::OnIDKillfocus(){
	
} */
int CProductSyncImportDialog::OnIDCheckValue(){
	return 0;
} 
/*void CProductSyncImportDialog::OnDescriptionChange(){
	
} */
/*void CProductSyncImportDialog::OnDescriptionSetfocus(){
	
} */
/*void CProductSyncImportDialog::OnDescriptionKillfocus(){
	
} */
int CProductSyncImportDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CProductSyncImportDialog::OnXLSFileChange(){
	
} */
/*void CProductSyncImportDialog::OnXLSFileSetfocus(){
	
} */
/*void CProductSyncImportDialog::OnXLSFileKillfocus(){
	
} */
int CProductSyncImportDialog::OnXLSFileCheckValue(){
	return 0;
} 
void CProductSyncImportDialog::OnBrowseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncImportDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncImportDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncImportDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncImportDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncImportDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CProductSyncImportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CProductSyncImportDialog::OnAddProductSyncImportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductSyncImportDialog::OnEditProductSyncImportDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductSyncImportDialog::OnDeleteProductSyncImportDialog(){
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
 		OnCancelProductSyncImportDialog();
 	}
	return 0;
}
int CProductSyncImportDialog::OnSaveProductSyncImportDialog(){
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
 		//OnProductSyncImportDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductSyncImportDialog::OnCancelProductSyncImportDialog(){
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
int CProductSyncImportDialog::OnProductSyncImportDialogListLoadData(){
	return 0;
}
