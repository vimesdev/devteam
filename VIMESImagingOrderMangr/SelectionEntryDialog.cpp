#include "SelectionEntryDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSelectionEntryDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSelectionEntryDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSelectionEntryDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSelectionEntryDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnSelectSelectFnc(CWnd *pWnd){
	CSelectionEntryDialog *pVw = (CSelectionEntryDialog *)pWnd;
	pVw->OnSelectSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSelectionEntryDialog *pVw = (CSelectionEntryDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddSelectionEntryDialogFnc(CWnd *pWnd){
	 return ((CSelectionEntryDialog*)pWnd)->OnAddSelectionEntryDialog();
} 
static int _OnEditSelectionEntryDialogFnc(CWnd *pWnd){
	 return ((CSelectionEntryDialog*)pWnd)->OnEditSelectionEntryDialog();
} 
static int _OnDeleteSelectionEntryDialogFnc(CWnd *pWnd){
	 return ((CSelectionEntryDialog*)pWnd)->OnDeleteSelectionEntryDialog();
} 
static int _OnSaveSelectionEntryDialogFnc(CWnd *pWnd){
	 return ((CSelectionEntryDialog*)pWnd)->OnSaveSelectionEntryDialog();
} 
static int _OnCancelSelectionEntryDialogFnc(CWnd *pWnd){
	 return ((CSelectionEntryDialog*)pWnd)->OnCancelSelectionEntryDialog();
} 
CSelectionEntryDialog::CSelectionEntryDialog(CString szValues)
	
{
	m_nDlgWidth = 305;
	m_nDlgHeight = 305;
	m_szValues.Format(_T("%s"), szValues);
	SetDefaultValues();
}
CSelectionEntryDialog::~CSelectionEntryDialog(){
}
void CSelectionEntryDialog::OnCreateComponents(){
	m_wndDescribes.Create(this, _T("Describes"), 5, 5, 299, 273);
	m_wndList.Create(this,9, 26, 295, 268); 
	m_wndSelect.Create(this, _T("&Select"), 156, 278, 226, 300);
	m_wndClose.Create(this, _T("&Close"), 231, 278, 301, 300);

}

#include "StringToken.h"

void CSelectionEntryDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);

	m_wndList.InsertColumn(0, _T("Description"), CFMT_TEXT, 250);
	m_wndList.SetCheckBox(true);
	m_wndList.BeginLoad();
	CStringToken token(m_szValues, _T(","));
	for (int i =0; i < token.GetSize(); i++){
		CString tmpStr;
		token.GetAt(i, tmpStr);
		m_wndList.AddItems(tmpStr, NULL);
	}
	m_wndList.EndLoad();
	
}
void CSelectionEntryDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSelect.SetEvent(WE_CLICK, _OnSelectSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CSelectionEntryDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CSelectionEntryDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSelectionEntryDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSelectionEntryDialog::SetDefaultValues(){


}
int CSelectionEntryDialog::SetMode(int nMode){ 
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
void CSelectionEntryDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return;
	m_wndList.SetCheck(nSel, true);
	OnSelectSelect();
} 
void CSelectionEntryDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSelectionEntryDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSelectionEntryDialog::OnListLoadData(){
	return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CSelectionEntryDialog::OnSelectSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szSelects.Empty();
	for (int i = 0; i < m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i))
		{
			if(!m_szSelects.IsEmpty())
				m_szSelects += _T("\r\n");
			m_szSelects.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
		}
	}
	OnOK();
} 
void CSelectionEntryDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CSelectionEntryDialog::OnAddSelectionEntryDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add SelectionEntryDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CSelectionEntryDialog::OnEditSelectionEntryDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit SelectionEntryDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CSelectionEntryDialog::OnDeleteSelectionEntryDialog(){
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
 		OnCancelSelectionEntryDialog(); 
 	}
return 0;
 } 
int CSelectionEntryDialog::OnSaveSelectionEntryDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnSelectionEntryDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CSelectionEntryDialog::OnCancelSelectionEntryDialog(){
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
int CSelectionEntryDialog::OnSelectionEntryDialogListLoadData(){
	return 0;
}
