#include "FAMTransfer.h"
#include "FAMTransferDialog.h"
#include "MainFrm.h"
static long _OnTransferListLoadDataFnc(CWnd *pWnd){
	return ((CFAMTransfer*)pWnd)->OnTransferListLoadData();
} 
static void _OnTransferListDblClickFnc(CWnd *pWnd){
	((CFAMTransfer*)pWnd)->OnTransferListDblClick();
} 
static void _OnTransferListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMTransfer*)pWnd)->OnTransferListSelectChange(nOldItem, nNewItem);
} 
static int _OnTransferListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMTransfer*)pWnd)->OnTransferListDeleteItem();
} 
static int _OnAddFAMTransferFnc(CWnd *pWnd){
	 return ((CFAMTransfer*)pWnd)->OnAddFAMTransfer();
} 
static int _OnEditFAMTransferFnc(CWnd *pWnd){
	 return ((CFAMTransfer*)pWnd)->OnEditFAMTransfer();
} 
static int _OnDeleteFAMTransferFnc(CWnd *pWnd){
	 return ((CFAMTransfer*)pWnd)->OnDeleteFAMTransfer();
} 
static int _OnSaveFAMTransferFnc(CWnd *pWnd){
	 return ((CFAMTransfer*)pWnd)->OnSaveFAMTransfer();
} 
static int _OnCancelFAMTransferFnc(CWnd *pWnd){
	 return ((CFAMTransfer*)pWnd)->OnCancelFAMTransfer();
} 
CFAMTransfer::CFAMTransfer(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMTransfer::~CFAMTransfer(){
}
void CFAMTransfer::OnCreateComponents(){
	m_wndTransferList.Create(this,5, 5, 620, 225); 

}
void CFAMTransfer::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTransferList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndTransferList.InsertColumn(1, _T("TransferID"), CFMT_TEXT, 100);
	m_wndTransferList.InsertColumn(2, _T("From Dept"), CFMT_DATE, 50);
	m_wndTransferList.InsertColumn(3, _T("To Dept"), CFMT_DATE, 50);
	m_wndTransferList.InsertColumn(4, _T("Qty Level"), CFMT_TEXT, 50);
	m_wndTransferList.InsertColumn(5, _T("Date"), CFMT_TEXT, 120);
}
void CFAMTransfer::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTransferList.SetEvent(WE_SELCHANGE, _OnTransferListSelectChangeFnc);
	m_wndTransferList.SetEvent(WE_LOADDATA, _OnTransferListLoadDataFnc);
	m_wndTransferList.SetEvent(WE_DBLCLICK, _OnTransferListDblClickFnc);

	m_wndTransferList.SetWindowText(_T("Asset Transfer"));
	//m_wndTransferList.AddEvent(1, _T("Add\tInsert"), _OnAddFAMTransferFnc, 0, VK_INSERT, 0);
	//m_wndTransferList.AddEvent(0, _T("-"), NULL);
	m_wndTransferList.AddEvent(1, _T("&Add"),_OnAddFAMTransferFnc, 0, 0, 0);
	m_wndTransferList.AddEvent(0, _T("-"), NULL);
	m_wndTransferList.AddEvent(2, _T("&Edit"), _OnEditFAMTransferFnc, 0, 0, 0);
	m_wndTransferList.AddEvent(0, _T("-"), NULL);
	m_wndTransferList.AddEvent(3, _T("&Delete"), _OnDeleteFAMTransferFnc, 0, 0, 0);
	m_wndTransferList.AddEvent(0, _T("-"), NULL);
}
void CFAMTransfer::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMTransfer::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMTransfer::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMTransfer::SetDefaultValues(){


}
int CFAMTransfer::SetMode(int nMode){
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
void CFAMTransfer::OnTransferListDblClick(){
	OnEditFAMTransfer();
} 
void CFAMTransfer::OnTransferListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMTransfer::OnTransferListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMTransfer::OnTransferListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTransferList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fat_idx AS fIndex, fat_transferid as madc,")\
				_T("fat_olddept AS FromDept, ")\
				_T("fat_newdept AS ToDept, ")\
				_T("fat_qtylevel AS capcl, ")\
				_T("fat_date AS ngay ")\
				_T("FROM fam_assettransfer ")\
				_T("WHERE fat_assetno = '%s' ORDER BY fat_idx"), pMF->m_wndAssetDetail.m_szAssetNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransferList.AddItems(
			rs.GetValue(_T("fIndex")), 
			rs.GetValue(_T("madc")),
			rs.GetValue(_T("FromDept")),
			rs.GetValue(_T("ToDept")),
			rs.GetValue(_T("capcl")),
			rs.GetValue(_T("ngay")), NULL);
		rs.MoveNext();
	}
	m_wndTransferList.EndLoad(); 
	return nCount;

}
int CFAMTransfer::OnAddFAMTransfer(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szToDate, szSQL; //szType;
	CDate dt;
	//int nIndex;
	pMF->m_wndAsset.CheckUser();
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("15.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		CFAMTransferDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_szAssetNo;
		dlg.SetMode(VM_ADD);
		INT_PTR nPtr = dlg.DoModal();
		if (nPtr == IDOK)
		{
			int nCount = m_wndTransferList.GetItemCount();
			//_msg(_T("Count: %d"), nCount);
			if (nCount > 0)
			{
				for (int i = nCount - 1; i >= 0; i--)
				{
					szToDate = m_wndTransferList.GetItemText(i, 3);
					dt.ParseDate(szToDate);
					if (dt.GetYear() == 1752)
					{
						int nIndex = ToInt(m_wndTransferList.GetItemText(i, 0));
						szSQL.Format(_T("UPDATE fam_transfer SET ft_date='%s' WHERE ft_assetno='%s' AND ft_idx=%d"), 
									pMF->GetSysDate(), pMF->m_szAssetNo, nIndex); 
						pMF->ExecSQL(szSQL);
		
						break;
					}
				}
			}
			
			OnTransferListLoadData();
			m_wndTransferList.SetCurSel(nCount);
			pMF->m_wndAsset.GetDataToScreen();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
 	//SetMode(VM_ADD);
	return 0;
}
int CFAMTransfer::OnEditFAMTransfer(){
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szType = _T("");
	pMF->m_wndAsset.CheckUser();
	//if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("15.02")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("15.02")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW)
			return -1;
		int nSel = m_wndTransferList.GetCurSel();
		if (nSel < 0)
			return -1;
		int nIndex = ToInt(m_wndTransferList.GetItemText(nSel, 0));
		CFAMTransferDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_szAssetNo;
		dlg.m_nIndex = nIndex;
		dlg.SetMode(VM_EDIT);
		if (dlg.DoModal() == IDOK)
		{
			OnTransferListLoadData();
			m_wndTransferList.SetCurSel(nSel);
			pMF->m_wndAsset.GetDataToScreen();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
 	//SetMode(VM_EDIT);
	return 0; 
}
int CFAMTransfer::OnDeleteFAMTransfer(){
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	
	CString szSQL, szType = _T(""), szStatus = _T("");
	bool isChangeType = false;
	bool isChangeDept = false;
	pMF->m_wndAsset.CheckUser();
	if (pMF->m_wndAsset.GetMode() != VM_VIEW)
		return -1;
	int nSel = m_wndTransferList.GetCurSel();
	if (nSel < 0)
		return -1;
	//if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("15.03")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("15.03")) || pMF->GetCurrentUser() == _T("admin"))
	{
		szType = m_wndTransferList.GetItemText(nSel, 11);	
		//szSQL.Format(_T("SELECT faut_id FROM fam_usagetype WHERE trim(faut_desc)='%s'"), szType.Trim());
		//rs.ExecSQL(szSQL);
			
 		if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return -1; 
		int nIndex = ToInt(m_wndTransferList.GetItemText(nSel, 0));
		szSQL.Format(_T("DELETE FROM fam_transfer WHERE ft_assetno='%s' AND ft_idx=%d"), pMF->m_szAssetNo, nIndex); 

 		int ret = pMF->ExecSQL(szSQL); 
 		if(ret >= 0)
		{
 			//SetMode(VM_NONE); 
 			//OnCancelFAMTransfer();
			CRecord rsn(&pMF->m_db);
			CString szStatus = _T("");
			szStatus = m_wndTransferList.GetItemText(nSel, 12);
			OnTransferListLoadData();
			//szSQL.Format(_T("SELECT fas_id FROM fam_status WHERE trim(fas_desc)='%s'"), szStatus.Trim());
			//rsn.ExecSQL(szSQL);

 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMTransfer::OnSaveFAMTransfer(){
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
 		//OnFAMTransferListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFAMTransfer::OnCancelFAMTransfer(){
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
int CFAMTransfer::OnFAMTransferListLoadData(){
	return 0;
}
