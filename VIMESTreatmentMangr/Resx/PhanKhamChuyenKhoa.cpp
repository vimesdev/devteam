#include "PhanKhamChuyenKhoa.h"
#include "MainFrm.h"
static void _OnMedicalTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPhanKhamChuyenKhoa* )pWnd)->OnMedicalTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMedicalTypeSelendokFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeSelendok();
}
/*static void _OnMedicalTypeSetfocusFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeKillfocus();
}*/
/*static void _OnMedicalTypeKillfocusFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeKillfocus();
}*/
static long _OnMedicalTypeLoadDataFnc(CWnd *pWnd){
	return ((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeLoadData();
}
/*static void _OnMedicalTypeAddNewFnc(CWnd *pWnd){
	((CPhanKhamChuyenKhoa *)pWnd)->OnMedicalTypeAddNew();
}*/
static void _OnViewSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CPhanKhamChuyenKhoa*)pWnd)->OnViewSelectChange(nOld, nNew);
} 
static int _OnAddPhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnAddPhanKhamChuyenKhoa();
} 
static int _OnEditPhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnEditPhanKhamChuyenKhoa();
} 
static int _OnDeletePhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnDeletePhanKhamChuyenKhoa();
} 
static int _OnSavePhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnSavePhanKhamChuyenKhoa();
} 
static int _OnCancelPhanKhamChuyenKhoaFnc(CWnd *pWnd){
	 return ((CPhanKhamChuyenKhoa*)pWnd)->OnCancelPhanKhamChuyenKhoa();
} 
CPhanKhamChuyenKhoa::CPhanKhamChuyenKhoa(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPhanKhamChuyenKhoa::~CPhanKhamChuyenKhoa(){
}
void CPhanKhamChuyenKhoa::OnCreateComponents(){
	m_wndMedicalTypeLabel.Create(this, _T("Medical Type"), 5, 5, 125, 30);
	m_wndMedicalType.Create(this,130, 5, 530, 30); 
	m_wndView.Create(this,5, 36, 896, 551); 

}
void CPhanKhamChuyenKhoa::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMedicalType.SetCheckValue(true);
	m_wndMedicalType.LimitText(35);


	m_wndMedicalType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMedicalType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPhanKhamChuyenKhoa::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMedicalType.SetEvent(WE_SELENDOK, _OnMedicalTypeSelendokFnc);
	//m_wndMedicalType.SetEvent(WE_SETFOCUS, _OnMedicalTypeSetfocusFnc);
	//m_wndMedicalType.SetEvent(WE_KILLFOCUS, _OnMedicalTypeKillfocusFnc);
	m_wndMedicalType.SetEvent(WE_SELCHANGE, _OnMedicalTypeSelectChangeFnc);
	m_wndMedicalType.SetEvent(WE_LOADDATA, _OnMedicalTypeLoadDataFnc);
	//m_wndMedicalType.SetEvent(WE_ADDNEW, _OnMedicalTypeAddNewFnc);
	m_wndView.SetEvent(WE_SELCHANGE, _OnViewSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPhanKhamChuyenKhoaFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPhanKhamChuyenKhoaFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePhanKhamChuyenKhoaFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePhanKhamChuyenKhoaFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPhanKhamChuyenKhoaFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPhanKhamChuyenKhoa::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMedicalType.GetDlgCtrlID(), m_szMedicalTypeKey);

}
void CPhanKhamChuyenKhoa::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("MedicalType")] =  m_szMedicalTypeKey;
	}
	else
	{
			
	m_jData[_T("MedicalType")].GetValue(m_szMedicalTypeKey);
	}

}
void CPhanKhamChuyenKhoa::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPhanKhamChuyenKhoa::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPhanKhamChuyenKhoa::SetDefaultValues(){

	m_szMedicalTypeKey.Empty();

}
int CPhanKhamChuyenKhoa::SetMode(int nMode){
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
void CPhanKhamChuyenKhoa::OnMedicalTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPhanKhamChuyenKhoa::OnMedicalTypeSelendok(){
	 
}
/*void CPhanKhamChuyenKhoa::OnMedicalTypeSetfocus(){
	
}*/
/*void CPhanKhamChuyenKhoa::OnMedicalTypeKillfocus(){
	
}*/
long CPhanKhamChuyenKhoa::OnMedicalTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMedicalType.IsSearchKey() && !m_szMedicalTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szMedicalTypeKey
};
	m_wndMedicalType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMedicalType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPhanKhamChuyenKhoa::OnMedicalTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPhanKhamChuyenKhoa::OnViewSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPhanKhamChuyenKhoa::OnAddPhanKhamChuyenKhoa(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhanKhamChuyenKhoa::OnEditPhanKhamChuyenKhoa(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhanKhamChuyenKhoa::OnDeletePhanKhamChuyenKhoa(){
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
 		OnCancelPhanKhamChuyenKhoa();
 	}
	return 0;
}
int CPhanKhamChuyenKhoa::OnSavePhanKhamChuyenKhoa(){
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
 		//OnPhanKhamChuyenKhoaListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPhanKhamChuyenKhoa::OnCancelPhanKhamChuyenKhoa(){
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
int CPhanKhamChuyenKhoa::OnPhanKhamChuyenKhoaListLoadData(){
	return 0;
}
