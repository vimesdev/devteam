#include "IVFStorageView.h"
#include "MainFrm.h"
static void _OnThungTinhTrungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView* )pWnd)->OnThungTinhTrungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungTinhTrungSelendokFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungTinhTrungSelendok();
}
/*static void _OnThungTinhTrungSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungTinhTrungKillfocus();
}*/
/*static void _OnThungTinhTrungKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungTinhTrungKillfocus();
}*/
static long _OnThungTinhTrungLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView *)pWnd)->OnThungTinhTrungLoadData();
}
/*static void _OnThungTinhTrungAddNewFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungTinhTrungAddNew();
}*/
static void _OnThungNoanSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView* )pWnd)->OnThungNoanSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungNoanSelendokFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungNoanSelendok();
}
/*static void _OnThungNoanSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungNoanKillfocus();
}*/
/*static void _OnThungNoanKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungNoanKillfocus();
}*/
static long _OnThungNoanLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView *)pWnd)->OnThungNoanLoadData();
}
/*static void _OnThungNoanAddNewFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungNoanAddNew();
}*/
static void _OnThungPhoiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView* )pWnd)->OnThungPhoiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungPhoiSelendokFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungPhoiSelendok();
}
/*static void _OnThungPhoiSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungPhoiKillfocus();
}*/
/*static void _OnThungPhoiKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungPhoiKillfocus();
}*/
static long _OnThungPhoiLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView *)pWnd)->OnThungPhoiLoadData();
}
/*static void _OnThungPhoiAddNewFnc(CWnd *pWnd){
	((CIVFStorageView *)pWnd)->OnThungPhoiAddNew();
}*/
static long _OnTTListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView*)pWnd)->OnTTListLoadData();
} 
static void _OnTTListDblClickFnc(CWnd *pWnd){
	((CIVFStorageView*)pWnd)->OnTTListDblClick();
} 
static void _OnTTListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageView*)pWnd)->OnTTListSelectChange(nOldItem, nNewItem);
} 
static int _OnTTListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnTTListDeleteItem();
} 
static long _OnNoanListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView*)pWnd)->OnNoanListLoadData();
} 
static void _OnNoanListDblClickFnc(CWnd *pWnd){
	((CIVFStorageView*)pWnd)->OnNoanListDblClick();
} 
static void _OnNoanListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageView*)pWnd)->OnNoanListSelectChange(nOldItem, nNewItem);
} 
static int _OnNoanListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnNoanListDeleteItem();
} 
static long _OnPhoiListLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView*)pWnd)->OnPhoiListLoadData();
} 
static void _OnPhoiListDblClickFnc(CWnd *pWnd){
	((CIVFStorageView*)pWnd)->OnPhoiListDblClick();
} 
static void _OnPhoiListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFStorageView*)pWnd)->OnPhoiListSelectChange(nOldItem, nNewItem);
} 
static int _OnPhoiListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnPhoiListDeleteItem();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFStorageView *pVw = (CIVFStorageView *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFStorageViewFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnAddIVFStorageView();
} 
static int _OnEditIVFStorageViewFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnEditIVFStorageView();
} 
static int _OnDeleteIVFStorageViewFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnDeleteIVFStorageView();
} 
static int _OnSaveIVFStorageViewFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnSaveIVFStorageView();
} 
static int _OnCancelIVFStorageViewFnc(CWnd *pWnd){
	 return ((CIVFStorageView*)pWnd)->OnCancelIVFStorageView();
} 
CIVFStorageView::CIVFStorageView()
	{

	m_nDlgWidth = 1005;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CIVFStorageView::~CIVFStorageView(){
}
void CIVFStorageView::OnCreateComponents(){
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
void CIVFStorageView::OnInitializeComponents(){
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

	m_wndTTList.InsertColumn(0, _T("THÙNG CHỨA TINH TRÙNG"), CFMT_TEXT, 280);
	m_wndNoanList.InsertColumn(0, _T("THÙNG CHỨA NOÃN"), CFMT_TEXT, 280);
	m_wndPhoiList.InsertColumn(0, _T("THÙNG CHỨA PHÔI"), CFMT_TEXT, 280);
/*
	m_wndTTList.InsertColumn(0, _T("Dụng cụ chứa"), CFMT_NUMBER, 70);
	m_wndTTList.InsertColumn(1, _T("Còn trống"), CFMT_NUMBER, 70);
//	m_wndTTList.InsertColumn(2, _T("Vị trí chứa"), CFMT_NUMBER, 70);
//	m_wndTTList.InsertColumn(3, _T("Vị trí trống"), CFMT_NUMBER, 70);


	m_wndNoanList.InsertColumn(0, _T("Dụng cụ chứa"), CFMT_NUMBER, 70);
	m_wndNoanList.InsertColumn(1, _T("Còn trống"), CFMT_NUMBER, 70);
	m_wndNoanList.InsertColumn(2, _T("Vị trí chứa"), CFMT_NUMBER, 70);
	m_wndNoanList.InsertColumn(3, _T("Vị trí trống"), CFMT_NUMBER, 70);



	m_wndPhoiList.InsertColumn(0, _T("Dụng cụ chứa"), CFMT_NUMBER, 70);
	m_wndPhoiList.InsertColumn(1, _T("Còn trống"), CFMT_NUMBER, 70);
	m_wndPhoiList.InsertColumn(2, _T("Vị trí chứa"), CFMT_NUMBER, 70);
	m_wndPhoiList.InsertColumn(3, _T("Vị trí trống"), CFMT_NUMBER, 70);
*/

}
void CIVFStorageView::OnSetWindowEvents(){
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
	OnTTListLoadData();
	OnNoanListLoadData();
	OnPhoiListLoadData();

}
void CIVFStorageView::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndThungTinhTrung.GetDlgCtrlID(), m_szThungTinhTrungKey);
	DDX_TextEx(pDX, m_wndThungNoan.GetDlgCtrlID(), m_szThungNoanKey);
	DDX_TextEx(pDX, m_wndThungPhoi.GetDlgCtrlID(), m_szThungPhoiKey);

}
void CIVFStorageView::UpdateJson(BOOL bSave){
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
void CIVFStorageView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFStorageView::SetDefaultValues(){

	m_szThungTinhTrungKey.Empty();
	m_szThungNoanKey.Empty();
	m_szThungPhoiKey.Empty();

}
int CIVFStorageView::SetMode(int nMode){
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
		m_wndThungTinhTrung.EnableWindow(TRUE);
		m_wndThungNoan.EnableWindow(TRUE);
		m_wndThungPhoi.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CIVFStorageView::OnThungTinhTrungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView::OnThungTinhTrungSelendok(){
	 
}
/*void CIVFStorageView::OnThungTinhTrungSetfocus(){
	
}*/
/*void CIVFStorageView::OnThungTinhTrungKillfocus(){
	
}*/
long CIVFStorageView::OnThungTinhTrungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and category='TINH' "));
	return pMF->LoadComboBoxList(&m_wndThungTinhTrung, m_szThungTinhTrungKey, _T("ivf_storage_thung"), szFilter);
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
/*void CIVFStorageView::OnThungTinhTrungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView::OnThungNoanSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView::OnThungNoanSelendok(){
	 
}
/*void CIVFStorageView::OnThungNoanSetfocus(){
	
}*/
/*void CIVFStorageView::OnThungNoanKillfocus(){
	
}*/
long CIVFStorageView::OnThungNoanLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and category='NOAN' "));
	return pMF->LoadComboBoxList(&m_wndThungNoan, m_szThungNoanKey, _T("ivf_storage_thung"), szFilter);

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
/*void CIVFStorageView::OnThungNoanAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView::OnThungPhoiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView::OnThungPhoiSelendok(){
	 
}
/*void CIVFStorageView::OnThungPhoiSetfocus(){
	
}*/
/*void CIVFStorageView::OnThungPhoiKillfocus(){
	
}*/
long CIVFStorageView::OnThungPhoiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szFilter;
	szFilter.Format(_T(" and category='PHOI' "));
	return pMF->LoadComboBoxList(&m_wndThungPhoi, m_szThungPhoiKey, _T("ivf_storage_thung"), szFilter);
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
/*void CIVFStorageView::OnThungPhoiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFStorageView::OnTTListDblClick(){
	
} 
void CIVFStorageView::OnTTListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageView::OnTTListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageView::OnTTListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTTList.BeginLoad(); 

	int nCount = 0;
	/*
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTTList.AddItems(
			rs.GetValue(_T("dungcuchua")), 
			rs.GetValue(_T("controng")), 
			rs.GetValue(_T("vitrichua")), 
			rs.GetValue(_T("vitritrong")), NULL);
		rs.MoveNext();
	}
	*/
	CString tmpStr;
	for (int i =0; i < 10; i++)
	{
		tmpStr.Format(_T("GIÁ %d"), i+1);
		CreateItem(&m_wndTTList, tmpStr, 20, 10, 1, 2);

	}
	m_wndTTList.EndLoad(); 
	return nCount;
	return 0;
}
void CIVFStorageView::OnNoanListDblClick(){
	
} 
void CIVFStorageView::OnNoanListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageView::OnNoanListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageView::OnNoanListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	
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
void CIVFStorageView::OnPhoiListDblClick(){
	
} 
void CIVFStorageView::OnPhoiListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageView::OnPhoiListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFStorageView::OnPhoiListLoadData(){
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
void CIVFStorageView::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFStorageView::OnAddIVFStorageView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageView::OnEditIVFStorageView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageView::OnDeleteIVFStorageView(){
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
 		OnCancelIVFStorageView();
 	}
	return 0;
}
int CIVFStorageView::OnSaveIVFStorageView(){
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
 		//OnIVFStorageViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageView::OnCancelIVFStorageView(){
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
int CIVFStorageView::OnIVFStorageViewListLoadData(){
	return 0;
}


int CIVFStorageView::CreateItem(CGridListView* pList, CString szDesc, int nDungcu, int nControng, int nVitrichua, int nVitritrong)
{
	int col_width= 70;
	CString tmpStr;
	CGridListItem* pItem = new CGridListItem();
	CGridCell* pCell = new CGridCell();


	
	CGridListItem* pDesc = new CGridListItem();
	pDesc->Add(szDesc, col_width*4);
	pDesc->SetBkColor(RGB(220, 220, 220));
	pDesc->SetTextColor(RGB(0, 0, 255));
	pCell->AddRow(pDesc);

	CGridCell* o;
	CGridListItem* pLineHdr = new CGridListItem();
	tmpStr.Format(_T("Dụng cụ chứa"));
	int nIndex = pLineHdr->Insert(0, tmpStr, col_width, DT_CENTER|DT_WORDBREAK);
	o = pLineHdr->GetCell(nIndex);
	o->SetTextColor(RGB(0, 64, 128));

	tmpStr.Format(_T("Còn trống"));
	nIndex = pLineHdr->Insert(1, tmpStr, col_width, DT_CENTER|DT_WORDBREAK);

	o = pLineHdr->GetCell(nIndex);
	o->SetTextColor(RGB(0, 64, 192));

	tmpStr.Format(_T("Vị trí chứa"));
	pLineHdr->Insert(2, tmpStr, col_width, DT_CENTER|DT_WORDBREAK);
	tmpStr.Format(_T("Vị trí trống"));
	pLineHdr->Insert(3, tmpStr, col_width, DT_CENTER|DT_WORDBREAK);
	pCell->AddRow(pLineHdr);

	CGridListItem* pLine = new CGridListItem();
	tmpStr.Format(_T("%d"), nDungcu);
	pLine->Insert(0, tmpStr, col_width, DT_VCENTER|DT_CENTER|DT_SINGLELINE);
	tmpStr.Format(_T("%d"), nControng);
	pLine->Insert(1, tmpStr, col_width, DT_VCENTER|DT_CENTER|DT_SINGLELINE);
	tmpStr.Format(_T("%d"), nVitrichua);
	pLine->Insert(2, tmpStr, col_width, DT_VCENTER|DT_CENTER|DT_SINGLELINE);
	tmpStr.Format(_T("%d"), nVitritrong);
	pLine->Insert(3, tmpStr, col_width, DT_VCENTER|DT_CENTER|DT_SINGLELINE);
	pCell->AddRow(pLine);
	
	CGridListItem* pEmptyLine = new CGridListItem();
	pEmptyLine->SetHeight(5);
	pCell->AddRow(pEmptyLine);
	pItem->Add(pCell);
	return pList->Add(pItem);
}