#include "IVFStorageViewDialog.h"
#include "MainFrm.h"
static void _OnThungTinhTrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageViewDialog* )pWnd)->OnThungTinhTrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungTinhTrungSelendokFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungTinhTrungSelendok();
}
/*static void _OnThungTinhTrungSetfocusFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungTinhTrungKillfocus();
}*/
/*static void _OnThungTinhTrungKillfocusFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungTinhTrungKillfocus();
}*/
static long _OnThungTinhTrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageViewDialog *)pWnd)->OnThungTinhTrungLoadData();
}
/*static void _OnThungTinhTrungAddNewFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungTinhTrungAddNew();
}*/
static void _OnThungNoanSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageViewDialog* )pWnd)->OnThungNoanSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungNoanSelendokFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungNoanSelendok();
}
/*static void _OnThungNoanSetfocusFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungNoanKillfocus();
}*/
/*static void _OnThungNoanKillfocusFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungNoanKillfocus();
}*/
static long _OnThungNoanLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageViewDialog *)pWnd)->OnThungNoanLoadData();
}
/*static void _OnThungNoanAddNewFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungNoanAddNew();
}*/
static void _OnThungPhoiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageViewDialog* )pWnd)->OnThungPhoiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungPhoiSelendokFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungPhoiSelendok();
}
/*static void _OnThungPhoiSetfocusFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungPhoiKillfocus();
}*/
/*static void _OnThungPhoiKillfocusFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungPhoiKillfocus();
}*/
static long _OnThungPhoiLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageViewDialog *)pWnd)->OnThungPhoiLoadData();
}
/*static void _OnThungPhoiAddNewFnc(CWnd *pWnd){
	((CIVFStorageViewDialog *)pWnd)->OnThungPhoiAddNew();
}*/
static long _OnTTListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageViewDialog*)pWnd)->OnTTListLoadData();
} 
static void _OnTTListDblClickFnc(CWnd *pWnd){
	((CIVFStorageViewDialog*)pWnd)->OnTTListDblClick();
} 
static void _OnTTListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageViewDialog*)pWnd)->OnTTListSelectChange(nOldItem, nNewItem);
} 
static int _OnTTListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnTTListDeleteItem();
} 
static long _OnNoanListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageViewDialog*)pWnd)->OnNoanListLoadData();
} 
static void _OnNoanListDblClickFnc(CWnd *pWnd){
	((CIVFStorageViewDialog*)pWnd)->OnNoanListDblClick();
} 
static void _OnNoanListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageViewDialog*)pWnd)->OnNoanListSelectChange(nOldItem, nNewItem);
} 
static int _OnNoanListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnNoanListDeleteItem();
} 
static long _OnPhoiListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageViewDialog*)pWnd)->OnPhoiListLoadData();
} 
static void _OnPhoiListDblClickFnc(CWnd *pWnd){
	((CIVFStorageViewDialog*)pWnd)->OnPhoiListDblClick();
} 
static void _OnPhoiListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageViewDialog*)pWnd)->OnPhoiListSelectChange(nOldItem, nNewItem);
} 
static int _OnPhoiListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnPhoiListDeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFStorageViewDialog *pVw = (CIVFStorageViewDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFStorageViewDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnAddIVFStorageViewDialog();
} 
static int _OnEditIVFStorageViewDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnEditIVFStorageViewDialog();
} 
static int _OnDeleteIVFStorageViewDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnDeleteIVFStorageViewDialog();
} 
static int _OnSaveIVFStorageViewDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnSaveIVFStorageViewDialog();
} 
static int _OnCancelIVFStorageViewDialogFnc(CWnd *pWnd){
	 return ((CIVFStorageViewDialog*)pWnd)->OnCancelIVFStorageViewDialog();
} 
CIVFStorageViewDialog::CIVFStorageViewDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CIVFStorageViewDialog::~CIVFStorageViewDialog(){
}
void CIVFStorageViewDialog::OnCreateComponents(){
	m_wndThungTinhTrungLabel.Create(this, _T("Thung tinh trung"), 5, 5, 85, 30);
	m_wndThungTinhTrung.Create(this,90, 5, 305, 30); 
	m_wndThungNoanLabel.Create(this, _T("ThungNoan"), 325, 5, 405, 30);
	m_wndThungNoan.Create(this,410, 5, 625, 30); 
	m_wndThungPhoiLabel.Create(this, _T("ThungPhoi"), 645, 5, 725, 30);
	m_wndThungPhoi.Create(this,730, 5, 945, 30); 
	m_wndTTList.Create(this,5, 35, 305, 565); 
	m_wndNoanList.Create(this,325, 35, 625, 565); 
	m_wndPhoiList.Create(this,645, 35, 945, 565); 
	m_wndClose.Create(this, _T("&Close"), 870, 570, 950, 595);

}
void CIVFStorageViewDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThungTinhTrung.SetCheckValue(true);
	m_wndThungTinhTrung.LimitText(35);
	m_wndThungNoan.SetCheckValue(true);
	m_wndThungNoan.LimitText(35);
	m_wndThungPhoi.SetCheckValue(true);
	m_wndThungPhoi.LimitText(35);


	m_wndThungTinhTrung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThungTinhTrung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndThungNoan.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThungNoan.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndThungPhoi.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThungPhoi.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndTTList.InsertColumn(0, _T("dungcuchua"), CFMT_NUMBER, 70);
	m_wndTTList.InsertColumn(1, _T("controng"), CFMT_NUMBER, 70);
	m_wndTTList.InsertColumn(2, _T("vitrichua"), CFMT_NUMBER, 70);
	m_wndTTList.InsertColumn(3, _T("vitritrong"), CFMT_NUMBER, 70);


	m_wndNoanList.InsertColumn(0, _T("dungcuchua"), CFMT_NUMBER, 70);
	m_wndNoanList.InsertColumn(1, _T("controng"), CFMT_NUMBER, 70);
	m_wndNoanList.InsertColumn(2, _T("vitri"), CFMT_NUMBER, 70);
	m_wndNoanList.InsertColumn(3, _T("vi tri trong"), CFMT_NUMBER, 70);



}
void CIVFStorageViewDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThungTinhTrung.SetEvent(WE_SELENDOK, _OnThungTinhTrungSelendokFnc);
	//m_wndThungTinhTrung.SetEvent(WE_SETFOCUS, _OnThungTinhTrungSetfocusFnc);
	//m_wndThungTinhTrung.SetEvent(WE_KILLFOCUS, _OnThungTinhTrungKillfocusFnc);
	m_wndThungTinhTrung.SetEvent(WE_SELCHANGE, _OnThungTinhTrungSelectChangeFnc);
	m_wndThungTinhTrung.SetEvent(WE_LOADDATA, _OnThungTinhTrungLoadDataFnc);
	//m_wndThungTinhTrung.SetEvent(WE_ADDNEW, _OnThungTinhTrungAddNewFnc);
	m_wndThungNoan.SetEvent(WE_SELENDOK, _OnThungNoanSelendokFnc);
	//m_wndThungNoan.SetEvent(WE_SETFOCUS, _OnThungNoanSetfocusFnc);
	//m_wndThungNoan.SetEvent(WE_KILLFOCUS, _OnThungNoanKillfocusFnc);
	m_wndThungNoan.SetEvent(WE_SELCHANGE, _OnThungNoanSelectChangeFnc);
	m_wndThungNoan.SetEvent(WE_LOADDATA, _OnThungNoanLoadDataFnc);
	//m_wndThungNoan.SetEvent(WE_ADDNEW, _OnThungNoanAddNewFnc);
	m_wndThungPhoi.SetEvent(WE_SELENDOK, _OnThungPhoiSelendokFnc);
	//m_wndThungPhoi.SetEvent(WE_SETFOCUS, _OnThungPhoiSetfocusFnc);
	//m_wndThungPhoi.SetEvent(WE_KILLFOCUS, _OnThungPhoiKillfocusFnc);
	m_wndThungPhoi.SetEvent(WE_SELCHANGE, _OnThungPhoiSelectChangeFnc);
	m_wndThungPhoi.SetEvent(WE_LOADDATA, _OnThungPhoiLoadDataFnc);
	//m_wndThungPhoi.SetEvent(WE_ADDNEW, _OnThungPhoiAddNewFnc);
	m_wndTTList.SetEvent(WE_SELCHANGE, _OnTTListSelectChangeFnc);
	m_wndTTList.SetEvent(WE_LOADDATA, _OnTTListLoadDataFnc);
	m_wndTTList.SetEvent(WE_DBLCLICK, _OnTTListDblClickFnc);
	m_wndTTList.AddEvent(1, _T("Delete"), _OnTTListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndNoanList.SetEvent(WE_SELCHANGE, _OnNoanListSelectChangeFnc);
	m_wndNoanList.SetEvent(WE_LOADDATA, _OnNoanListLoadDataFnc);
	m_wndNoanList.SetEvent(WE_DBLCLICK, _OnNoanListDblClickFnc);
	m_wndNoanList.AddEvent(1, _T("Delete"), _OnNoanListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPhoiList.SetEvent(WE_SELCHANGE, _OnPhoiListSelectChangeFnc);
	m_wndPhoiList.SetEvent(WE_LOADDATA, _OnPhoiListLoadDataFnc);
	m_wndPhoiList.SetEvent(WE_DBLCLICK, _OnPhoiListDblClickFnc);
	m_wndPhoiList.AddEvent(1, _T("Delete"), _OnPhoiListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFStorageViewDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndThungTinhTrung.GetDlgCtrlID(), m_szThungTinhTrungKey);
	DDX_TextEx(pDX, m_wndThungNoan.GetDlgCtrlID(), m_szThungNoanKey);
	DDX_TextEx(pDX, m_wndThungPhoi.GetDlgCtrlID(), m_szThungPhoiKey);

}
void CIVFStorageViewDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ThungTinhTrung")] =  m_szThungTinhTrungKey;
	m_jData[_T("ThungNoan")] =  m_szThungNoanKey;
	m_jData[_T("ThungPhoi")] =  m_szThungPhoiKey;
	}
	else
	{
			
	m_jData[_T("ThungTinhTrung")].GetValue(m_szThungTinhTrungKey);
	m_jData[_T("ThungNoan")].GetValue(m_szThungNoanKey);
	m_jData[_T("ThungPhoi")].GetValue(m_szThungPhoiKey);
	}

}
void CIVFStorageViewDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageViewDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageViewDialog::SetDefaultValues(){

	m_szThungTinhTrungKey.Empty();
	m_szThungNoanKey.Empty();
	m_szThungPhoiKey.Empty();

}
int CIVFStorageViewDialog::SetMode(int nMode){
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
void CIVFStorageViewDialog::OnThungTinhTrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageViewDialog::OnThungTinhTrungSelendok(){
	 
}
/*void CIVFStorageViewDialog::OnThungTinhTrungSetfocus(){
	
}*/
/*void CIVFStorageViewDialog::OnThungTinhTrungKillfocus(){
	
}*/
long CIVFStorageViewDialog::OnThungTinhTrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThungTinhTrung.IsSearchKey() && !m_szThungTinhTrungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungTinhTrungKey
};
	m_wndThungTinhTrung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThungTinhTrung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageViewDialog::OnThungTinhTrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageViewDialog::OnThungNoanSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageViewDialog::OnThungNoanSelendok(){
	 
}
/*void CIVFStorageViewDialog::OnThungNoanSetfocus(){
	
}*/
/*void CIVFStorageViewDialog::OnThungNoanKillfocus(){
	
}*/
long CIVFStorageViewDialog::OnThungNoanLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThungNoan.IsSearchKey() && !m_szThungNoanKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungNoanKey
};
	m_wndThungNoan.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThungNoan.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageViewDialog::OnThungNoanAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageViewDialog::OnThungPhoiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageViewDialog::OnThungPhoiSelendok(){
	 
}
/*void CIVFStorageViewDialog::OnThungPhoiSetfocus(){
	
}*/
/*void CIVFStorageViewDialog::OnThungPhoiKillfocus(){
	
}*/
long CIVFStorageViewDialog::OnThungPhoiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThungPhoi.IsSearchKey() && !m_szThungPhoiKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungPhoiKey
};
	m_wndThungPhoi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThungPhoi.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFStorageViewDialog::OnThungPhoiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageViewDialog::OnTTListDblClick(){
	
} 
void CIVFStorageViewDialog::OnTTListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageViewDialog::OnTTListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageViewDialog::OnTTListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTTList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTTList.AddItems(
			rs.GetValue(_T("dungcuchua")), 
			rs.GetValue(_T("controng")), 
			rs.GetValue(_T("vitrichua")), 
			rs.GetValue(_T("vitritrong")), NULL);
		rs.MoveNext();
	}
	m_wndTTList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFStorageViewDialog::OnNoanListDblClick(){
	
} 
void CIVFStorageViewDialog::OnNoanListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageViewDialog::OnNoanListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageViewDialog::OnNoanListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndNoanList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNoanList.AddItems(
			rs.GetValue(_T("dungcuchua")), 
			rs.GetValue(_T("controng")), 
			rs.GetValue(_T("vitri")), 
			rs.GetValue(_T("vitritrong")), NULL);
		rs.MoveNext();
	}
	m_wndNoanList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFStorageViewDialog::OnPhoiListDblClick(){
	
} 
void CIVFStorageViewDialog::OnPhoiListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageViewDialog::OnPhoiListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageViewDialog::OnPhoiListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPhoiList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPhoiList.AddItems(
		rs.MoveNext();
	}
	m_wndPhoiList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFStorageViewDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageViewDialog::OnAddIVFStorageViewDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageViewDialog::OnEditIVFStorageViewDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageViewDialog::OnDeleteIVFStorageViewDialog(){
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
 		OnCancelIVFStorageViewDialog();
 	}
	return 0;
}
int CIVFStorageViewDialog::OnSaveIVFStorageViewDialog(){
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
 		//OnIVFStorageViewDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageViewDialog::OnCancelIVFStorageViewDialog(){
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
int CIVFStorageViewDialog::OnIVFStorageViewDialogListLoadData(){
	return 0;
}
