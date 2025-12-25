#include "HMSUploadFileDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSUploadFileDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSUploadFileDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSUploadFileDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnFileNameChangeFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnFileNameChange();
} */
/*static void _OnFileNameSetfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnFileNameSetfocus();} */ 
/*static void _OnFileNameKillfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnFileNameKillfocus();
} */
static int _OnFileNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSUploadFileDialog *)pWnd)->OnFileNameCheckValue();
} 
static void _OnBrowseButtonSelectFnc(CWnd *pWnd){
	CHMSUploadFileDialog *pVw = (CHMSUploadFileDialog *)pWnd;
	pVw->OnBrowseButtonSelect();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSUploadFileDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSUploadFileDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnUploadSelectFnc(CWnd *pWnd){
	CHMSUploadFileDialog *pVw = (CHMSUploadFileDialog *)pWnd;
	pVw->OnUploadSelect();
} 
static int _OnAddHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnAddHMSUploadFileDialog();
} 
static int _OnEditHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnEditHMSUploadFileDialog();
} 
static int _OnDeleteHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnDeleteHMSUploadFileDialog();
} 
static int _OnSaveHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnSaveHMSUploadFileDialog();
} 
static int _OnCancelHMSUploadFileDialogFnc(CWnd *pWnd){
	 return ((CHMSUploadFileDialog*)pWnd)->OnCancelHMSUploadFileDialog();
} 
CHMSUploadFileDialog::CHMSUploadFileDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSUploadFileDialog::~CHMSUploadFileDialog(){
}
void CHMSUploadFileDialog::OnCreateComponents(){
	m_wndUploadInformation.Create(this, _T("Upload Information"), 5, 5, 800, 195);
	m_wndList.Create(this,10, 30, 795, 160); 
	m_wndFileNameLabel.Create(this, _T("File Name"), 10, 165, 90, 190);
	m_wndFileName.Create(this,95, 165, 395, 190); 
	m_wndBrowseButton.Create(this, _T("..."), 400, 165, 425, 190);
	m_wndDescriptionLabel.Create(this, _T("Description"), 430, 165, 510, 190);
	m_wndDescription.Create(this,515, 165, 715, 190); 
	m_wndUpload.Create(this, _T("&Upload"), 720, 165, 795, 190);
	m_wndImage.Create(this, _T("Image"), 5, 200, 800, 595);

}
void CHMSUploadFileDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFileName.SetLimitText(35);
	m_wndFileName.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 60);
	m_wndList.InsertColumn(1, _T("File Name"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 300);

}
void CHMSUploadFileDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFileName.SetEvent(WE_CHANGE, _OnFileNameChangeFnc);
	//m_wndFileName.SetEvent(WE_SETFOCUS, _OnFileNameSetfocusFnc);
	//m_wndFileName.SetEvent(WE_KILLFOCUS, _OnFileNameKillfocusFnc);
	m_wndFileName.SetEvent(WE_CHECKVALUE, _OnFileNameCheckValueFnc);
	m_wndBrowseButton.SetEvent(WE_CLICK, _OnBrowseButtonSelectFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndUpload.SetEvent(WE_CLICK, _OnUploadSelectFnc);
	SetMode(VM_NONE);

}
void CHMSUploadFileDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFileName.GetDlgCtrlID(), m_szFileName);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSUploadFileDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSUploadFileDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUploadFileDialog::SetDefaultValues(){

	m_szFileName.Empty();
	m_szDescription.Empty();

}
int CHMSUploadFileDialog::SetMode(int nMode){
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
void CHMSUploadFileDialog::OnListDblClick(){
	
} 
void CHMSUploadFileDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSUploadFileDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSUploadFileDialog::OnListLoadData(){
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
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("FileName")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSUploadFileDialog::OnFileNameChange(){
	
} */
/*void CHMSUploadFileDialog::OnFileNameSetfocus(){
	
} */
/*void CHMSUploadFileDialog::OnFileNameKillfocus(){
	
} */
int CHMSUploadFileDialog::OnFileNameCheckValue(){
	return 0;
} 
void CHMSUploadFileDialog::OnBrowseButtonSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSUploadFileDialog::OnDescriptionChange(){
	
} */
/*void CHMSUploadFileDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSUploadFileDialog::OnDescriptionKillfocus(){
	
} */
int CHMSUploadFileDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSUploadFileDialog::OnUploadSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSUploadFileDialog::OnAddHMSUploadFileDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSUploadFileDialog::OnEditHMSUploadFileDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUploadFileDialog::OnDeleteHMSUploadFileDialog(){
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
 		OnCancelHMSUploadFileDialog(); 
 	}
	return 0;
}
int CHMSUploadFileDialog::OnSaveHMSUploadFileDialog(){
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
 		//OnHMSUploadFileDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSUploadFileDialog::OnCancelHMSUploadFileDialog(){
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
int CHMSUploadFileDialog::OnHMSUploadFileDialogListLoadData(){
	return 0;
}
