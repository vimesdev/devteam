#include "HMSTreatmentExamineEx.h"
#include "MainFrm.h"
static long _OnExamineListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnExamineListLoadData();
} 
static void _OnExamineListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx*)pWnd)->OnExamineListDblClick();
} 
static void _OnExamineListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentExamineEx*)pWnd)->OnExamineListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamineListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnExamineListDeleteItem();
} 
static int _OnAddHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnAddHMSTreatmentExamineEx();
} 
static int _OnEditHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnEditHMSTreatmentExamineEx();
} 
static int _OnDeleteHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnDeleteHMSTreatmentExamineEx();
} 
static int _OnSaveHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnSaveHMSTreatmentExamineEx();
} 
static int _OnCancelHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnCancelHMSTreatmentExamineEx();
} 
CHMSTreatmentExamineEx::CHMSTreatmentExamineEx(){

	m_nDlgWidth = 679;
	m_nDlgHeight = 643;
	SetDefaultValues();
}
CHMSTreatmentExamineEx::~CHMSTreatmentExamineEx(){
}
void CHMSTreatmentExamineEx::OnCreateComponents(){
	m_wndExamineList.Create(this,5, 5, 605, 600); 

}
void CHMSTreatmentExamineEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndExamineList.InsertColumn(0, _T("Description"), CFMT_TEXT, 500);

}
void CHMSTreatmentExamineEx::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExamineList.SetEvent(WE_SELCHANGE, _OnExamineListSelectChangeFnc);
	m_wndExamineList.SetEvent(WE_LOADDATA, _OnExamineListLoadDataFnc);
	m_wndExamineList.SetEvent(WE_DBLCLICK, _OnExamineListDblClickFnc);
	m_wndExamineList.AddEvent(1, _T("Delete"), _OnExamineListDeleteItemFnc, 0, VK_DELETE, 0);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentExamineExFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentExamineExFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentExamineExFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentExamineExFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentExamineExFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSTreatmentExamineEx::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSTreatmentExamineEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentExamineEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentExamineEx::SetDefaultValues(){


}
int CHMSTreatmentExamineEx::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CHMSTreatmentExamineEx::OnExamineListDblClick(){
	
} 
void CHMSTreatmentExamineEx::OnExamineListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentExamineEx::OnExamineListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentExamineEx::OnExamineListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndExamineList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamineList.AddItems(
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndExamineList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSTreatmentExamineEx::OnAddHMSTreatmentExamineEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentExamineEx::OnEditHMSTreatmentExamineEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentExamineEx::OnDeleteHMSTreatmentExamineEx(){
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
 		OnCancelHMSTreatmentExamineEx();
 	}
	return 0;
}
int CHMSTreatmentExamineEx::OnSaveHMSTreatmentExamineEx(){
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
 		//OnHMSTreatmentExamineExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentExamineEx::OnCancelHMSTreatmentExamineEx(){
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
int CHMSTreatmentExamineEx::OnHMSTreatmentExamineExListLoadData(){
	return 0;
}
