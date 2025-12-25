#include "FAMAccessories.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAccessories*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CFAMAccessories*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAccessories*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAccessories*)pWnd)->OnListDeleteItem();
} 
static int _OnAddFAMAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAccessories*)pWnd)->OnAddFAMAccessories();
} 
static int _OnEditFAMAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAccessories*)pWnd)->OnEditFAMAccessories();
} 
static int _OnDeleteFAMAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAccessories*)pWnd)->OnDeleteFAMAccessories();
} 
static int _OnSaveFAMAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAccessories*)pWnd)->OnSaveFAMAccessories();
} 
static int _OnCancelFAMAccessoriesFnc(CWnd *pWnd){
	 return ((CFAMAccessories*)pWnd)->OnCancelFAMAccessories();
} 
CFAMAccessories::CFAMAccessories(){

	m_nDlgWidth = 710;
	m_nDlgHeight = 510;
	SetDefaultValues();
}
CFAMAccessories::~CFAMAccessories(){
}
void CFAMAccessories::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 800, 115); 

}
void CFAMAccessories::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 220);
	m_wndList.InsertColumn(2, _T("Caculation Unit"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(4, _T("Price"), CFMT_MONEY, 150);
	m_wndList.InsertColumn(5, _T(""), CFMT_TEXT, 35);
}
void CFAMAccessories::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Accessories"));
	m_wndList.AddEvent(1, _T("&Add"), _OnAddFAMAccessoriesFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T(""), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditFAMAccessoriesFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T(""), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteFAMAccessoriesFnc, 0, 0, 0);

}
void CFAMAccessories::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMAccessories::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMAccessories::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAccessories::SetDefaultValues(){


}
int CFAMAccessories::SetMode(int nMode){
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
void CFAMAccessories::OnListDblClick()
{
	OnEditFAMAccessories();
} 
void CFAMAccessories::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMAccessories::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAccessories::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->m_wndAssetDetail.GetMode() != VM_NONE)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		m_wndList.BeginLoad(); 
		m_wndList.DeleteAllItems(); 
		int nCount = 0;
		szSQL.Format(_T("SELECT * FROM fam_accessories WHERE faac_assetno='%s' AND faac_org_id = '%s' ORDER BY faac_idx"), pMF->m_wndAssetDetail.m_szAssetNo, pMF->GetModuleID());
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{ 
			m_wndList.AddItems(
				rs.GetValue(_T("faac_idx")), 
				rs.GetValue(_T("faac_name")), 
				rs.GetValue(_T("faac_unit")), 
				rs.GetValue(_T("faac_quantity")), 
				rs.GetValue(_T("faac_price")), NULL);
			rs.MoveNext();
		}
		m_wndList.EndLoad(); 
		return nCount;
	}
	else
		m_wndList.DeleteAllItems();
	return 0;
}
int CFAMAccessories::OnAddFAMAccessories()
{
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
		return -1;
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("19.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		CFAMAccessoriesDialog dlg(pMF);
		dlg.m_szAssetno = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.m_nTotalPrice = 0;
		if (m_wndList.GetItemCount() > 0)	

		{
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
				dlg.m_nTotalPrice += ToLong(m_wndList.GetItemText(i, 4));
		}
		dlg.SetMode(VM_ADD);
		if (dlg.DoModal() == IDOK)
		{
			OnListLoadData();
			m_wndList.SetCurSel(m_wndList.GetItemCount() - 1);
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
 	//SetMode(VM_ADD);
	return 0; 
}
int CFAMAccessories::OnEditFAMAccessories()
{
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;

	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("19.02")) || pMF->GetCurrentUser() == _T("admin"))
	{
		CFAMAccessoriesDialog dlg(pMF);
		dlg.m_szAssetno = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.m_nID = ToInt(m_wndList.GetItemText(nSel, 0));
		dlg.m_nTotalPrice = 0;
		if (m_wndList.GetItemCount() > 0)	
		{
			for (int i = 0; i < m_wndList.GetItemCount(); i++)
				dlg.m_nTotalPrice += ToLong(m_wndList.GetItemText(i, 4));
		}
		dlg.SetMode(VM_EDIT);
		if (dlg.DoModal() == IDOK)
		{
			OnListLoadData();
			m_wndList.SetCurSel(nSel);
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;  
}
int CFAMAccessories::OnDeleteFAMAccessories()
{
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	pMF->m_wndAssetDetail.CheckUser();
	
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("19.03"))  || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		int nSel = m_wndList.GetCurSel();
		if (nSel < 0)
			return -1;
 		CString szSQL;
		int nID = ToInt(m_wndList.GetItemText(nSel, 0));
 		if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return -1; 
		szSQL.Format(_T("DELETE FROM fam_accessories WHERE faac_assetno='%s' AND faac_idx=%d"), pMF->m_wndAssetDetail.m_szAssetNo, nID); 
 		int ret = pMF->ExecSQL(szSQL); 
 		if(ret >= 0)
		{ 
			OnListLoadData();
 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMAccessories::OnSaveFAMAccessories(){
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
 		//OnFAMAccessoriesListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret;
 	return 0; 
}
int CFAMAccessories::OnCancelFAMAccessories(){
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
int CFAMAccessories::OnFAMAccessoriesListLoadData(){
	return 0;
}

