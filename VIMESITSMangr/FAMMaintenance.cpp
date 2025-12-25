#include "FAMMaintenance.h"
#include "MainFrm.h"
static long _OnMaintenListLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenance*)pWnd)->OnMaintenListLoadData();
} 
static void _OnMaintenListDblClickFnc(CWnd *pWnd){
	((CFAMMaintenance*)pWnd)->OnMaintenListDblClick();
} 
static void _OnMaintenListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMMaintenance*)pWnd)->OnMaintenListSelectChange(nOldItem, nNewItem);
} 
static int _OnMaintenListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMMaintenance*)pWnd)->OnMaintenListDeleteItem();
} 
static int _OnAddFAMMaintenanceFnc(CWnd *pWnd){
	 return ((CFAMMaintenance*)pWnd)->OnAddFAMMaintenance();
} 
static int _OnEditFAMMaintenanceFnc(CWnd *pWnd){
	 return ((CFAMMaintenance*)pWnd)->OnEditFAMMaintenance();
} 
static int _OnDeleteFAMMaintenanceFnc(CWnd *pWnd){
	 return ((CFAMMaintenance*)pWnd)->OnDeleteFAMMaintenance();
} 
static int _OnSaveFAMMaintenanceFnc(CWnd *pWnd){
	 return ((CFAMMaintenance*)pWnd)->OnSaveFAMMaintenance();
} 
static int _OnCancelFAMMaintenanceFnc(CWnd *pWnd){
	 return ((CFAMMaintenance*)pWnd)->OnCancelFAMMaintenance();
} 
static int _OnFinishMaintenanceFnc(CWnd *pWnd){
	return ((CFAMMaintenance*)pWnd)->OnFinishMaintenance();
} 
CFAMMaintenance::CFAMMaintenance(){

	m_nDlgWidth = 850;
	m_nDlgHeight = 345;
	SetDefaultValues();
}
CFAMMaintenance::~CFAMMaintenance(){
}
void CFAMMaintenance::OnCreateComponents(){
	m_wndMaintenList.Create(this, 5, 5, 800, 115); 

}
void CFAMMaintenance::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndMaintenList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	//m_wndMaintenList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 80);
	m_wndMaintenList.InsertColumn(1, _T("From Date"), CFMT_DATE, 110);
	m_wndMaintenList.InsertColumn(2, _T("To Date"), CFMT_DATE, 110);
	m_wndMaintenList.InsertColumn(3, _T("Next Scheduled"), CFMT_DATE, 110);
	m_wndMaintenList.InsertColumn(4, _T("Cost"), CFMT_MONEY, 90);
	m_wndMaintenList.InsertColumn(5, _T("Performed By"), CFMT_TEXT, 140);
	m_wndMaintenList.InsertColumn(6, _T("Description"), CFMT_TEXT, 180);
	m_wndMaintenList.InsertColumn(7, _T("Status"), CFMT_TEXT, 100);

}
void CFAMMaintenance::OnSetWindowEvents()
{
	m_wndMaintenList.SetEvent(WE_SELCHANGE, _OnMaintenListSelectChangeFnc);
	m_wndMaintenList.SetEvent(WE_LOADDATA, _OnMaintenListLoadDataFnc);
	m_wndMaintenList.SetEvent(WE_DBLCLICK, _OnMaintenListDblClickFnc);

	/*m_wndMaintenList.SetWindowText(_T("Maintenance and Repairs"));
	m_wndMaintenList.AddEvent(1, _T("&Add"), _OnAddFAMMaintenanceFnc, 0, 0, 0);
	m_wndMaintenList.AddEvent(0, _T("-"), NULL);
	m_wndMaintenList.AddEvent(2, _T("&Edit"), _OnEditFAMMaintenanceFnc, 0, 0, 0);
	m_wndMaintenList.AddEvent(0, _T("-"), NULL);
	m_wndMaintenList.AddEvent(3, _T("&Delete"), _OnDeleteFAMMaintenanceFnc, 0, 0, 0);
	m_wndMaintenList.AddEvent(0, _T("-"), NULL);
	m_wndMaintenList.AddEvent(4, _T("Finish Maintenance Or Repair"), _OnFinishMaintenanceFnc, 0, 0, 0);*/

}
void CFAMMaintenance::OnDoDataExchange(CDataExchange* pDX){

}
void CFAMMaintenance::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMMaintenance::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMMaintenance::SetDefaultValues(){

}
int CFAMMaintenance::SetMode(int nMode){
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
void CFAMMaintenance::OnMaintenListDblClick()
{
	OnEditFAMMaintenance();
} 
void CFAMMaintenance::OnMaintenListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMMaintenance::OnMaintenListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMMaintenance::OnMaintenListLoadData()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Empty();
	szSQL.Format(_T("Select fam_idx as fIndex, fam_fromdate as FromDate,") \
				_T("       fam_todate as ToDate, fam_nextdue as NextScheduled, fam_cost as Cost,") \
				_T("       fam_performedby as PerformedBy, fam_desc as Description, fam_status as Status ") \
				_T("From fam_maintenance Where fam_assetno='%s' Order By fam_idx"), pMF->m_wndAssetDetail.m_szAssetNo); 

	m_wndMaintenList.BeginLoad();
	int nCount = 0;
	int nItem;
	CString szStatus;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		nItem = m_wndMaintenList.AddItems(
			rs.GetValue(_T("fIndex")),
			rs.GetValue(_T("FromDate")),
			rs.GetValue(_T("ToDate")),
			rs.GetValue(_T("NextScheduled")),
			rs.GetValue(_T("Cost")),
			rs.GetValue(_T("PerformedBy")),
			rs.GetValue(_T("Description")),
			rs.GetValue(_T("Status")),
			NULL);
		
		rs.GetValue(_T("Status"), szStatus);
		if(szStatus == _T("T"))
		{
			m_wndMaintenList.SetItemTextColor(nItem, RGB(255,255,255), FALSE);
			m_wndMaintenList.SetItemBkColor(nItem, RGB(255,128,0), TRUE);
		}
		rs.MoveNext();
	}
	m_wndMaintenList.EndLoad();
	return nCount;
}
int CFAMMaintenance::OnAddFAMMaintenance()
{
 	//if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		//return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("17.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		CString szStatus;
		szStatus = m_wndMaintenList.GetItemText(m_wndMaintenList.GetItemCount() - 1, 7);
		if (!szStatus.Trim().IsEmpty() && szStatus.Trim().MakeUpper() != _T("T"))
		{
			ShowMessageBox(_T("This asset is being maintenanced or repaired. You must finish that process"), 
						MB_OK | MB_ICONEXCLAMATION); 
			return -1;
		}
		CFAMMaintenanceDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.SetMode(VM_ADD);
		if (dlg.DoModal() == IDOK)
		{
			OnMaintenListLoadData();
			m_wndMaintenList.SetCurSel(m_wndMaintenList.GetItemCount() - 1);
			//m_wndMaintenList.SetFocus();
			//m_wndMaintenList.SetItemState(m_wndMaintenList.GetItemCount() - 1, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
			//m_wndMaintenList.EnsureVisible(m_wndMaintenList.GetItemCount() - 1, 1);
		}
 		//SetMode(VM_ADD);
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0; 
}
int CFAMMaintenance::OnEditFAMMaintenance(){
 	//if(GetMode() != VM_VIEW) 
 		//return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	pMF->m_wndAssetDetail.CheckUser();
	//if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("17.02")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("17.02")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		int nSel = m_wndMaintenList.GetCurSel();
		if (nSel < 0)
			return -1;
		CFAMMaintenanceDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.m_nIndex = ToInt(m_wndMaintenList.GetItemText(nSel, 0));
		dlg.SetMode(VM_EDIT);
		if (dlg.DoModal() == IDOK)
		{
			OnMaintenListLoadData();
			m_wndMaintenList.SetCurSel(nSel);
			//m_wndMaintenList.SetFocus();
			//m_wndMaintenList.SetItemState(nSel, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
			//m_wndMaintenList.EnsureVisible(nSel, 1);
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
 	//SetMode(VM_EDIT);
	return 0;  
}
int CFAMMaintenance::OnDeleteFAMMaintenance()
{
 	//if(GetMode() != VM_VIEW) 
 		//return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	pMF->m_wndAssetDetail.CheckUser();
	//if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("17.03")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("17.03")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		int nSel = m_wndMaintenList.GetCurSel();
		if (nSel < 0) 
			return -1;
		int nIndex = ToInt(m_wndMaintenList.GetItemText(nSel, 0));
 		CString szSQL, szNextSchedule, szStatus;
		szNextSchedule = m_wndMaintenList.GetItemText(nSel, 3);
		szStatus = m_wndMaintenList.GetItemText(nSel, 7);
		CDate date(szNextSchedule);
 		if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return -1; 
		szSQL.Format(_T("DELETE FROM fam_maintenance WHERE fam_assetno='%s' AND fam_idx=%d"), pMF->m_wndAssetDetail.m_szAssetNo, nIndex); 
 		int ret = pMF->ExecSQL(szSQL); 
 		if(ret >= 0)
		{
			OnMaintenListLoadData();
 			//SetMode(VM_NONE); 
 			//OnCancelFAMMaintenance();
			if (date.GetYear() != 1752)
			{
				CRecord rs(&pMF->m_db);
				szSQL.Format(_T("Update fam_asset SET fa_nextschedmaint='%s' WHERE fa_assetno='%s'"), 
							_T("1752/09/14"), pMF->m_wndAssetDetail.m_szAssetNo);
				rs.ExecSQL(szSQL);
			}
			if (szStatus.Trim().MakeUpper() != _T("T"))
			{
				szSQL.Format(_T("UPDATE fam_asset SET fa_status='I' WHERE fa_assetno='%s'"), pMF->m_wndAssetDetail.m_szAssetNo);
				pMF->ExecSQL(szSQL);
			}
 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMMaintenance::OnSaveFAMMaintenance()
{
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

 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFAMMaintenanceListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMMaintenance::OnCancelFAMMaintenance(){
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
int CFAMMaintenance::OnFAMMaintenanceListLoadData(){
	return 0;
}
int CFAMMaintenance::OnFinishMaintenance()
{
	if (m_wndMaintenList.GetItemCount() < 1)
		return -1;
	CString szStatus, szDate;
	szStatus = m_wndMaintenList.GetItemText(m_wndMaintenList.GetItemCount() - 1, 7);  
	if (!szStatus.Trim().IsEmpty() && szStatus.Trim().MakeUpper() == _T("T"))
		return -1;
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	int nIndex;
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("17.04")))
	{
		nIndex = ToInt(m_wndMaintenList.GetItemText(m_wndMaintenList.GetItemCount() - 1, 0));
		szDate = m_wndMaintenList.GetItemText(m_wndMaintenList.GetItemCount() - 1, 2);
		szSQL.Format(_T("UPDATE fam_maintenance SET fam_status='T' WHERE fam_idx=%ld AND fam_assetno='%s'"), 
					nIndex, pMF->m_wndAssetDetail.m_szAssetNo);
		int ret = pMF->ExecSQL(szSQL);
		if (ret >= 0)
		{
			szSQL.Format(_T("UPDATE fam_asset SET fa_status='I' WHERE fa_assetno='%s'"), pMF->m_wndAssetDetail.m_szAssetNo);
			pMF->ExecSQL(szSQL);
		}
		CDate date(szDate);
		if (date.GetYear() == 1752)
		{
			szSQL.Format(_T("UPDATE fam_maintenance SET fam_todate=current_date WHERE fam_idx=%ld AND fam_assetno='%s'"), 
						nIndex, pMF->m_wndAssetDetail.m_szAssetNo);
			pMF->ExecSQL(szSQL);
		}
		OnMaintenListLoadData();
	}else{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
