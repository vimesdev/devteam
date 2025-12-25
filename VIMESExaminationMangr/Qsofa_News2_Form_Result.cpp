#include "Qsofa_News2_Form_Result.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSQsofa_News2_Form_Result*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSQsofa_News2_Form_Result*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnListDeleteItem();
} 
static long _OnList2LoadDataFnc(CWnd *pWnd){
	return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnList2LoadData();
} 
static void _OnList2DblClickFnc(CWnd *pWnd){
	((CHMSQsofa_News2_Form_Result*)pWnd)->OnList2DblClick();
} 
static void _OnList2SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSQsofa_News2_Form_Result*)pWnd)->OnList2SelectChange(nOldItem, nNewItem);
} 
static int _OnList2DeleteItemFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnList2DeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSQsofa_News2_Form_Result *pVw = (CHMSQsofa_News2_Form_Result *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSQsofa_News2_Form_ResultFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnAddCHMSQsofa_News2_Form_Result();
} 
static int _OnEditCHMSQsofa_News2_Form_ResultFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnEditCHMSQsofa_News2_Form_Result();
} 
static int _OnDeleteCHMSQsofa_News2_Form_ResultFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnDeleteCHMSQsofa_News2_Form_Result();
} 
static int _OnSaveCHMSQsofa_News2_Form_ResultFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnSaveCHMSQsofa_News2_Form_Result();
} 
static int _OnCancelCHMSQsofa_News2_Form_ResultFnc(CWnd *pWnd){
	 return ((CHMSQsofa_News2_Form_Result*)pWnd)->OnCancelCHMSQsofa_News2_Form_Result();
} 
CHMSQsofa_News2_Form_Result::CHMSQsofa_News2_Form_Result(CWnd *pParent):
CGuiDialog(pParent)
{

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSQsofa_News2_Form_Result::~CHMSQsofa_News2_Form_Result()
{
}
void CHMSQsofa_News2_Form_Result::OnCreateComponents()
{
	m_wndThangDiemNews2.Create(this, _T("Thang điểm News2"), 5, 150, 359, 369);
	m_wndThangDiemqsofa.Create(this, _T("Thang điểm qSOFA"), 5, 5, 359, 150);
	m_wndList.Create(this,10, 25, 354, 151); 
	m_wndList2.Create(this,10, 170, 354, 370); 
	m_wndClose.Create(this, _T("Close"), 258, 376, 353, 401);
}
void CHMSQsofa_News2_Form_Result::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("Tiêu chí"), CFMT_TEXT, 240);
	m_wndList.InsertColumn(1, _T("Điểm"), CFMT_TEXT | CFMT_CENTER, 90);


	m_wndList2.InsertColumn(0, _T("Tiêu chí"), CFMT_TEXT, 240);
	m_wndList2.InsertColumn(1, _T("Điểm"), CFMT_TEXT | CFMT_CENTER, 90);
}
void CHMSQsofa_News2_Form_Result::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList2.SetEvent(WE_SELCHANGE, _OnList2SelectChangeFnc);
	m_wndList2.SetEvent(WE_LOADDATA, _OnList2LoadDataFnc);
	m_wndList2.SetEvent(WE_DBLCLICK, _OnList2DblClickFnc);
	
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(VM_VIEW);
	OnListLoadData();
	OnList2LoadData();
}
void CHMSQsofa_News2_Form_Result::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSQsofa_News2_Form_Result::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSQsofa_News2_Form_Result::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSQsofa_News2_Form_Result::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSQsofa_News2_Form_Result::SetDefaultValues(){


}
int CHMSQsofa_News2_Form_Result::SetMode(int nMode){
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
		m_wndClose.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSQsofa_News2_Form_Result::OnListDblClick(){
	
} 
void CHMSQsofa_News2_Form_Result::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSQsofa_News2_Form_Result::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSQsofa_News2_Form_Result::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T(" SELECT  ") \
	_T(" *") \
	_T(" FROM VW_HMS_QSOFA_NEWS2_DETAIL WHERE he_docno = %ld") \
	_T(" and phanloai = 'qSOFA'"), pMF->m_nDocumentNo);

	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("tieuchi")), 
			rs.GetValue(_T("diem")),			
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
	
}
void CHMSQsofa_News2_Form_Result::OnList2DblClick(){
	
} 
void CHMSQsofa_News2_Form_Result::OnList2SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSQsofa_News2_Form_Result::OnList2DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSQsofa_News2_Form_Result::OnList2LoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList2.BeginLoad(); 
	int nCount = 0;	

	szSQL.Format(_T(" SELECT  ") \
	_T(" *") \
	_T(" FROM VW_HMS_QSOFA_NEWS2_DETAIL WHERE he_docno = %ld") \
	_T(" and phanloai = 'NEWS2'"), pMF->m_nDocumentNo);

	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndList2.AddItems(
			rs.GetValue(_T("tieuchi")), 
			rs.GetValue(_T("diem")),			
			NULL);
		rs.MoveNext();
	}
	m_wndList2.EndLoad(); 
	return nCount;
}
void CHMSQsofa_News2_Form_Result::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSQsofa_News2_Form_Result::OnAddCHMSQsofa_News2_Form_Result(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSQsofa_News2_Form_Result::OnEditCHMSQsofa_News2_Form_Result(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSQsofa_News2_Form_Result::OnDeleteCHMSQsofa_News2_Form_Result(){
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
 		OnCancelCHMSQsofa_News2_Form_Result();
 	}
	return 0;
}
int CHMSQsofa_News2_Form_Result::OnSaveCHMSQsofa_News2_Form_Result(){
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
 		//OnCHMSQsofa_News2_Form_ResultListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSQsofa_News2_Form_Result::OnCancelCHMSQsofa_News2_Form_Result(){
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
int CHMSQsofa_News2_Form_Result::OnCHMSQsofa_News2_Form_ResultListLoadData(){
	return 0;
}
