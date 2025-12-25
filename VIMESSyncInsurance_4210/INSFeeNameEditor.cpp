#include "INSFeeNameEditor.h"
#include "MainFrm.h"
/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CINSFeeNameEditor *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CINSFeeNameEditor *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CINSFeeNameEditor *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CINSFeeNameEditor *)pWnd)->OnSearchCheckValue();
} 
static void _OnFindSelectFnc(CWnd *pWnd){
	CINSFeeNameEditor *pVw = (CINSFeeNameEditor *)pWnd;
	pVw->OnFindSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CINSFeeNameEditor*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CINSFeeNameEditor*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CINSFeeNameEditor*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CINSFeeNameEditor*)pWnd)->OnListDeleteItem();
} 
/*static void _OnInsuranceNameChangeFnc(CWnd *pWnd){
	((CINSFeeNameEditor *)pWnd)->OnInsuranceNameChange();
} */
/*static void _OnInsuranceNameSetfocusFnc(CWnd *pWnd){
	((CINSFeeNameEditor *)pWnd)->OnInsuranceNameSetfocus();} */ 
/*static void _OnInsuranceNameKillfocusFnc(CWnd *pWnd){
	((CINSFeeNameEditor *)pWnd)->OnInsuranceNameKillfocus();
} */
static int _OnInsuranceNameCheckValueFnc(CWnd *pWnd){
	return ((CINSFeeNameEditor *)pWnd)->OnInsuranceNameCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CINSFeeNameEditor *pVw = (CINSFeeNameEditor *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CINSFeeNameEditor *pVw = (CINSFeeNameEditor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CINSFeeNameEditor *pVw = (CINSFeeNameEditor *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddINSFeeNameEditorFnc(CWnd *pWnd){
	 return ((CINSFeeNameEditor*)pWnd)->OnAddINSFeeNameEditor();
} 
static int _OnEditINSFeeNameEditorFnc(CWnd *pWnd){
	 return ((CINSFeeNameEditor*)pWnd)->OnEditINSFeeNameEditor();
} 
static int _OnDeleteINSFeeNameEditorFnc(CWnd *pWnd){
	 return ((CINSFeeNameEditor*)pWnd)->OnDeleteINSFeeNameEditor();
} 
static int _OnSaveINSFeeNameEditorFnc(CWnd *pWnd){
	 return ((CINSFeeNameEditor*)pWnd)->OnSaveINSFeeNameEditor();
} 
static int _OnCancelINSFeeNameEditorFnc(CWnd *pWnd){
	 return ((CINSFeeNameEditor*)pWnd)->OnCancelINSFeeNameEditor();
} 
CINSFeeNameEditor::CINSFeeNameEditor(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 795;
	SetDefaultValues();
}
CINSFeeNameEditor::~CINSFeeNameEditor(){
}
void CINSFeeNameEditor::OnCreateComponents(){
	m_wndSearchLabel.Create(this, _T("Search"), 5, 5, 85, 30);
	m_wndSearch.Create(this,90, 5, 430, 30); 
	m_wndFind.Create(this, _T("@"), 435, 5, 475, 30);
	m_wndFeeNameGrp.Create(this, _T("Fee Name"), 5, 230, 475, 335);
	m_wndInsuranceNameGrp.Create(this, _T("Insurance Name"), 5, 340, 475, 445);
	m_wndList.Create(this,5, 35, 475, 225); 
	m_wndFeeName.Create(this,6, 249, 476, 335, 1, 0, 1); 
	m_wndInsuranceName.Create(this,5, 360, 475, 446, 1, 0, 1); 
	m_wndUpdate.Create(this, _T("&Update"), 195, 450, 285, 475);
	m_wndSave.Create(this, _T("&Save"), 290, 450, 380, 475);
	m_wndCancel.Create(this, _T("&Cancel"), 385, 450, 475, 475);

	m_wndUpdate.ShowWindow(SW_HIDE);
	m_wndCancel.ShowWindow(SW_HIDE);
	CRect rect(385, 450, 475, 475);
	m_wndSave.MoveWindow(&rect);

}
void CINSFeeNameEditor::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearch.SetLimitText(35);
	//m_wndSearch.SetCheckValue(true);
	m_wndFeeName.SetReadOnly();
	m_wndInsuranceName.SetLimitText(512);
	m_wndInsuranceName.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);//Insurance Name
	m_wndList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//Fee Name
}
void CINSFeeNameEditor::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndInsuranceName.SetEvent(WE_CHANGE, _OnInsuranceNameChangeFnc);
	//m_wndInsuranceName.SetEvent(WE_SETFOCUS, _OnInsuranceNameSetfocusFnc);
	//m_wndInsuranceName.SetEvent(WE_KILLFOCUS, _OnInsuranceNameKillfocusFnc);
	m_wndInsuranceName.SetEvent(WE_CHECKVALUE, _OnInsuranceNameCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	EnableWindow();
	EnableButtons(FALSE, -1);
	
}
void CINSFeeNameEditor::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_Text(pDX, m_wndFeeName.GetDlgCtrlID(), m_szFeeName);
	DDX_Text(pDX, m_wndInsuranceName.GetDlgCtrlID(), m_szInsuranceName);

}
void CINSFeeNameEditor::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("InsuranceName")] =  m_szInsuranceName;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("InsuranceName")].GetValue(m_szInsuranceName);
	}

}
void CINSFeeNameEditor::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CINSFeeNameEditor::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CINSFeeNameEditor::SetDefaultValues(){

	m_szSearch.Empty();
	m_szFeeName.Empty();
	m_szInsuranceName.Empty();

}
int CINSFeeNameEditor::SetMode(int nMode){
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
/*void CINSFeeNameEditor::OnSearchChange(){
	
} */
/*void CINSFeeNameEditor::OnSearchSetfocus(){
	
} */
/*void CINSFeeNameEditor::OnSearchKillfocus(){
	
} */
int CINSFeeNameEditor::OnSearchCheckValue(){
	return 0;
} 
void CINSFeeNameEditor::OnFindSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	OnListLoadData();
} 
void CINSFeeNameEditor::OnListDblClick(){
	
} 
void CINSFeeNameEditor::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szInsuranceName = m_wndList.GetItemText(nNewItem, 1);
	m_szFeeName = m_wndList.GetItemText(nNewItem, 2);
	UpdateData(FALSE);
} 
int CINSFeeNameEditor::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CINSFeeNameEditor::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	if (!m_szSearch.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_feeid||hfl_name||hfl_name3) like chr(37)||lower('%s')||chr(37)")
			, m_szSearch);
	}
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name3 as name, hfl_name as fee_name ") \
				_T(" FROM hms_fee_list WHERE 1=1 %s"), szWhere);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("fee_name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CINSFeeNameEditor::OnInsuranceNameChange(){
	
} */
/*void CINSFeeNameEditor::OnInsuranceNameSetfocus(){
	
} */
/*void CINSFeeNameEditor::OnInsuranceNameKillfocus(){
	
} */
int CINSFeeNameEditor::OnInsuranceNameCheckValue(){
	return 0;
} 
void CINSFeeNameEditor::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CINSFeeNameEditor::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return;
	}
	UpdateData();
	CString szSQL;
	
	szSQL.Format(_T("Update hms_fee_list SET hfl_name3 = '%s' WHERE hfl_feeid = '%s'"),
					m_szInsuranceName, m_wndList.GetItemText(nSel, 0));
	int nRet = pMF->ExecSQL(szSQL);
	if (nRet > 0)
	{
		OnListLoadData();
	}
} 
void CINSFeeNameEditor::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CINSFeeNameEditor::OnAddINSFeeNameEditor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CINSFeeNameEditor::OnEditINSFeeNameEditor(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CINSFeeNameEditor::OnDeleteINSFeeNameEditor(){
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
 		OnCancelINSFeeNameEditor();
 	}
	return 0;
}
int CINSFeeNameEditor::OnSaveINSFeeNameEditor(){
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
 		//OnINSFeeNameEditorListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CINSFeeNameEditor::OnCancelINSFeeNameEditor(){
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
int CINSFeeNameEditor::OnINSFeeNameEditorListLoadData(){
	return 0;
}
