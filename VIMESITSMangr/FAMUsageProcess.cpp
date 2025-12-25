#include "FAMUsageProcess.h"
#include "MainFrm.h"
#include "ReportDocument.h"

static long _OnUsageProcessListLoadDataFnc(CWnd *pWnd){
	return ((CFAMUsageProcess*)pWnd)->OnUsageProcessListLoadData();
} 
static void _OnUsageProcessListDblClickFnc(CWnd *pWnd){
	((CFAMUsageProcess*)pWnd)->OnUsageProcessListDblClick();
} 
static void _OnUsageProcessListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMUsageProcess*)pWnd)->OnUsageProcessListSelectChange(nOldItem, nNewItem);
} 
static int _OnUsageProcessListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMUsageProcess*)pWnd)->OnUsageProcessListDeleteItem();
} 
static int _OnAddFAMUsageProcessFnc(CWnd *pWnd){
	 return ((CFAMUsageProcess*)pWnd)->OnAddFAMUsageProcess();
} 
static int _OnEditFAMUsageProcessFnc(CWnd *pWnd){
	 return ((CFAMUsageProcess*)pWnd)->OnEditFAMUsageProcess();
} 
static int _OnDeleteFAMUsageProcessFnc(CWnd *pWnd){
	 return ((CFAMUsageProcess*)pWnd)->OnDeleteFAMUsageProcess();
} 
static int _OnSaveFAMUsageProcessFnc(CWnd *pWnd){
	 return ((CFAMUsageProcess*)pWnd)->OnSaveFAMUsageProcess();
} 
static int _OnCancelFAMUsageProcessFnc(CWnd *pWnd){
	 return ((CFAMUsageProcess*)pWnd)->OnCancelFAMUsageProcess();
} 
static int _OnDeposedAsset(CWnd *pWnd){
	return ((CFAMUsageProcess*)pWnd)->OnDeposed();
}
static int _OnPrintImportOrderFnc(CWnd *pWnd){
	return ((CFAMUsageProcess*)pWnd)->OnPrintImportOrder();
} 
static int _OnPrintExportOrderFnc(CWnd *pWnd){
	return ((CFAMUsageProcess*)pWnd)->OnPrintExportOrder();
} 
CFAMUsageProcess::CFAMUsageProcess(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CFAMUsageProcess::~CFAMUsageProcess(){
}
void CFAMUsageProcess::OnCreateComponents(){
	m_wndUsageProcessList.Create(this, 5, 5, 800, 115); 

}
void CFAMUsageProcess::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

	m_wndUsageProcessList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);

	m_wndUsageProcessList.InsertColumn(1, _T("Type"), CFMT_TEXT, 120);
	//m_wndUsageProcessList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 80);
	m_wndUsageProcessList.InsertColumn(2, _T("From Date"), CFMT_DATE, 90);
	m_wndUsageProcessList.InsertColumn(3, _T("To Date"), CFMT_DATE, 90);
	m_wndUsageProcessList.InsertColumn(4, _T("Old Dept"), CFMT_TEXT, 120);
	m_wndUsageProcessList.InsertColumn(5, _T("New Dept"), CFMT_TEXT, 120);
	m_wndUsageProcessList.InsertColumn(6, _T("Deliver By"), CFMT_TEXT, 120);
	m_wndUsageProcessList.InsertColumn(7, _T("Receive By"), CFMT_TEXT, 120);
	m_wndUsageProcessList.InsertColumn(8, _T("Depose To"), CFMT_TEXT, 120);
	m_wndUsageProcessList.InsertColumn(9, _T("Current Value"), CFMT_MONEY, 90);
	
	m_wndUsageProcessList.InsertColumn(10, _T("Status"), CFMT_TEXT, 110);
	m_wndUsageProcessList.InsertColumn(11, _T("TypeID"), CFMT_TEXT, 0);
	m_wndUsageProcessList.InsertColumn(12, _T("StatusID"), CFMT_TEXT, 0);
}
void CFAMUsageProcess::OnSetWindowEvents()
{
	m_wndUsageProcessList.SetEvent(WE_SELCHANGE, _OnUsageProcessListSelectChangeFnc);
	m_wndUsageProcessList.SetEvent(WE_LOADDATA, _OnUsageProcessListLoadDataFnc);
	m_wndUsageProcessList.SetEvent(WE_DBLCLICK, _OnUsageProcessListDblClickFnc);

	m_wndUsageProcessList.SetWindowText(_T("Usage Process"));
	//m_wndUsageProcessList.AddEvent(1, _T("Add\tInsert"), _OnAddFAMUsageProcessFnc, 0, VK_INSERT, 0);
	//m_wndUsageProcessList.AddEvent(0, _T("-"), NULL);
	m_wndUsageProcessList.AddEvent(1, _T("&Add"),_OnAddFAMUsageProcessFnc, 0, 0, 0);
	m_wndUsageProcessList.AddEvent(0, _T("-"), NULL);
	m_wndUsageProcessList.AddEvent(2, _T("&Edit"), _OnEditFAMUsageProcessFnc, 0, 0, 0);
	m_wndUsageProcessList.AddEvent(0, _T("-"), NULL);
	m_wndUsageProcessList.AddEvent(3, _T("&Delete"), _OnDeleteFAMUsageProcessFnc, 0, 0, 0);
	m_wndUsageProcessList.AddEvent(0, _T("-"), NULL);
	/*m_wndUsageProcessList.AddEvent(4, _T("Print Import Order"), _OnPrintImportOrderFnc, 0, 0, 0);
	m_wndUsageProcessList.AddEvent(5, _T("Print Export Order"), _OnPrintExportOrderFnc, 0, 0, 0);
	m_wndUsageProcessList.AddEvent(0, _T("-"), NULL);
	m_wndUsageProcessList.AddEvent(4, _T("Depose Asset\tCtrl + D"), _OnDeposedAsset, 0, 'D', VK_CONTROL);*/
	m_szType = _T("E");
	m_szIStatus = _T("I");
	m_szOStatus = _T("O");

}
void CFAMUsageProcess::OnDoDataExchange(CDataExchange* pDX)
{

}
void CFAMUsageProcess::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMUsageProcess::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMUsageProcess::SetDefaultValues()
{
	
}
int CFAMUsageProcess::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
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
void CFAMUsageProcess::OnUsageProcessListDblClick()
{
	OnEditFAMUsageProcess();
} 
void CFAMUsageProcess::OnUsageProcessListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CFAMUsageProcess::OnUsageProcessListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMUsageProcess::OnUsageProcessListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if (pMF->m_wndAsset.GetMode() != VM_NONE)
	//{
		CRecord rs(&pMF->m_db);
		CString szSQL, szType;
		m_wndUsageProcessList.BeginLoad(); 
		m_wndUsageProcessList.DeleteAllItems(); 
		int nCount = 0;
		if (pMF->m_szUseHRM.Trim() == _T("N"))
		{
			/*szSQL.Format(_T("SELECT faup_idx AS fIndex, faup_fromdate AS FromDate, ")\
						_T("(SELECT sd_name FROM sys_dept WHERE sd_id=faup_olddept) AS Location, ")\
						_T("(SELECT sd_name FROM sys_dept WHERE sd_id=faup_newdept) AS Location1 ")\
						_T("FROM fam_usingprocess ")\
						_T("WHERE faup_assetno = '%s' ORDER BY faup_idx"), pMF->m_wndAssetDetail.m_szAssetNo);*/
			szSQL.Format(_T("SELECT faup_idx AS fIndex, ")\
						_T("faup_fromdate AS FromDate, ")\
						_T("faup_todate AS ToDate, ")\
						_T("(SELECT sd_name FROM sys_dept WHERE sd_id=faup_newdept) AS Location, ")\
						_T("(SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_usingby) AS UsingBy, ")\
						_T("(SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_deliveby) AS DeliverBy, ")\
						_T("(SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_receiveby) AS ReceiveBy, ")\
						_T("faup_deposeto AS DeposeTo, ")\
						_T("faup_currentvalue AS CurrentValue, ")\
						_T("(SELECT faut_desc FROM fam_usagetype WHERE faut_id=faup_type) as fType, ")\
						_T("(SELECT fas_desc FROM fam_status WHERE fas_id=faup_status) AS Status, ")\
						_T("faup_type AS TypeID, ")\
						_T("faup_status AS StatusID ")\
						_T("FROM fam_usingprocess ")\
						_T("WHERE faup_assetno = '%s' ORDER BY faup_idx"), pMF->m_wndAssetDetail.m_szAssetNo);
		}
		else
		{
			/**/
			szSQL.Format(_T("SELECT faup_idx AS fIndex, ")\
						_T("faup_fromdate AS FromDate, ")\
						_T("faup_todate AS ToDate, ")\
						_T("(SELECT sd_name FROM sys_dept WHERE sd_id=faup_newdept) AS Location, ")\
						_T("(SELECT su_name FROM sys_user WHERE su_userid=faup_usingby) AS UsingBy, ")\
						_T("(SELECT su_name FROM sys_user WHERE su_userid=faup_deliveby) AS DeliverBy, ")\
						_T("(SELECT su_name FROM sys_user WHERE su_userid=faup_receiveby) AS ReceiveBy, ")\
						_T("faup_deposeto AS DeposeTo, ")\
						_T("faup_currentvalue AS CurrentValue, ")\
						_T("(SELECT faut_desc FROM fam_usagetype WHERE faut_id=faup_type) as fType, ")\
						_T("(SELECT fas_desc FROM fam_status WHERE fas_id=faup_status) AS Status, ")\
						_T("faup_type AS TypeID, ")\
						_T("faup_status AS StatusID ")\
						_T("FROM fam_usingprocess ")\
						_T("WHERE faup_assetno = '%s' ORDER BY faup_idx"), pMF->m_wndAssetDetail.m_szAssetNo);
		}
		//MessageBox(szSQL);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{ 
			m_wndUsageProcessList.AddItems(
				rs.GetValue(_T("fIndex")), 
				//rs.GetValue(_T("AssetNo")),
				rs.GetValue(_T("fType")),

				rs.GetValue(_T("FromDate")),
				rs.GetValue(_T("ToDate")),
				rs.GetValue(_T("Location")),
				rs.GetValue(_T("UsingBy")),
				rs.GetValue(_T("DeliverBy")), 
				rs.GetValue(_T("ReceiveBy")), 
				rs.GetValue(_T("DeposeTo")), 
				rs.GetValue(_T("CurrentValue")), 
				 
				rs.GetValue(_T("Status")),
				rs.GetValue(_T("TypeID")),
				rs.GetValue(_T("StatusID")), NULL);
			rs.MoveNext();
		}
		m_wndUsageProcessList.EndLoad(); 
		if (pMF->m_wndAsset.m_isDeposed) //&& m_wndUsageProcessList.GetItemCount() > 0)
		{
			//_msg(_T("So phan tu: %d"), m_wndUsageProcessList.GetItemCount() - 1);
			szType = m_wndUsageProcessList.GetItemText(m_wndUsageProcessList.GetItemCount() - 1, 11);
			//szSQL.Format(_T("SELECT faut_id FROM fam_usagetype WHERE trim(faut_desc)='%s'"), szType.Trim());
			//rs.ExecSQL(szSQL);
			//_msg(_T("KQ: %d"), rs.ExecSQL(szSQL));
			if (szType.Trim() == m_szType)
			{
				//COLORREF color = RGB(255, 255, 255);
				m_wndUsageProcessList.SetItemBkColor(m_wndUsageProcessList.GetItemCount() - 1, RGB(0, 192, 192), FALSE);
				m_wndUsageProcessList.SetItemTextColor(m_wndUsageProcessList.GetItemCount() - 1, RGB(255, 255, 255), FALSE);
			}
		}
		return nCount;
	return 0;
}
int CFAMUsageProcess::OnAddFAMUsageProcess()
{
 	//if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		//return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CStringArray szArray;
	CString szToDate, szSQL; //szType;
	CDate dt;
	//int nIndex;
	pMF->m_wndAssetDetail.CheckUser();
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("15.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("SELECT fa_status AS Status FROM fam_asset WHERE fa_assetno='%s'"), pMF->m_wndAssetDetail.m_szAssetNo);
		rs.ExecSQL(szSQL);
		if (rs.GetValue(_T("Status")).Trim().MakeUpper() == _T("M") || rs.GetValue(_T("Status")).Trim().MakeUpper() == _T("R"))
		{
			ShowMessageBox(_T("This asset is being maintenanced or repaired. You must finish that process"), 
						MB_OK | MB_ICONEXCLAMATION); 
			return -1;
		}
		CFAMUsingProcessDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.SetMode(VM_ADD);
		INT_PTR nPtr = dlg.DoModal();
		if (nPtr == IDOK)
		{
			int nCount = m_wndUsageProcessList.GetItemCount();
			//_msg(_T("Count: %d"), nCount);
			if (nCount > 0)
			{
				for (int i = nCount - 1; i >= 0; i--)
				{
					szToDate = m_wndUsageProcessList.GetItemText(i, 3);
					//StringSplit(szToDate, szArray, _T('-'));
					//MessageBox(szToDate);
					dt.ParseDate(szToDate);
					if (dt.GetYear() == 1752)
					{
						//MessageBox(_T("OK"));
						//CRecord rs(&pMF->m_db);
						//CString szSQL;
						int nIndex = ToInt(m_wndUsageProcessList.GetItemText(i, 0));
						szSQL.Format(_T("UPDATE fam_usingprocess SET faup_todate='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
									pMF->GetSysDate(), pMF->m_wndAssetDetail.m_szAssetNo, nIndex); 
						pMF->ExecSQL(szSQL);
						CString szStatus = m_wndUsageProcessList.GetItemText(i, 12);
						//szSQL.Format(_T("SELECT fas_id FROM fam_status WHERE trim(fas_desc)='%s'"), szStatus.Trim());
						//rs.ExecSQL(szSQL);
						if (szStatus.Trim() == m_szIStatus)
						{
							szSQL.Format(_T("UPDATE fam_usingprocess SET faup_status='%s' WHERE faup_assetno='%s' AND faup_idx=%d"), 
										m_szOStatus, pMF->m_wndAssetDetail.m_szAssetNo, nIndex); 
							pMF->ExecSQL(szSQL);
						}
						//OnUsageProcessListLoadData();
						break;
					}
				}
			}
			
			OnUsageProcessListLoadData();
			m_wndUsageProcessList.SetCurSel(nCount);
			pMF->m_wndAssetDetail.GetDataToScreen();
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
 	//SetMode(VM_ADD);
	return 0; 
}
int CFAMUsageProcess::OnEditFAMUsageProcess()
{
 	/*if(GetMode() != VM_VIEW) 
 		return -1; */
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szType = _T("");
	pMF->m_wndAssetDetail.CheckUser();
	//if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("15.02")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("15.02")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW)
			return -1;
		int nSel = m_wndUsageProcessList.GetCurSel();
		if (nSel < 0)
			return -1;
		szType = m_wndUsageProcessList.GetItemText(nSel, 11);
		//szSQL.Format(_T("SELECT faut_id FROM fam_usagetype WHERE trim(faut_desc)='%s'"), szType.Trim());
		//rs.ExecSQL(szSQL);
		if (pMF->m_wndAsset.m_isDeposed == true && szType.Trim() != m_szType)
			return -1;
		int nIndex = ToInt(m_wndUsageProcessList.GetItemText(nSel, 0));
		CFAMUsingProcessDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
		dlg.m_nIndex = nIndex;
		dlg.m_szStatus = m_wndUsageProcessList.GetItemText(nSel, 12);
		dlg.SetMode(VM_EDIT);
		if (dlg.DoModal() == IDOK)
		{
			OnUsageProcessListLoadData();
			m_wndUsageProcessList.SetCurSel(nSel);
			//m_wndUsageProcessList.SetFocus();
			//m_wndUsageProcessList.SetItemState(nSel, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
			//m_wndUsageProcessList.EnsureVisible(nSel, 1);
			//if (dlg.isSetDep)
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
int CFAMUsageProcess::OnDeleteFAMUsageProcess()
{
 	//if(GetMode() != VM_VIEW) 
 		//return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	
	CString szSQL, szType = _T(""), szStatus = _T("");
	bool isChangeType = false;
	bool isChangeDept = false;
	pMF->m_wndAssetDetail.CheckUser();
	if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW)
		return -1;
	int nSel = m_wndUsageProcessList.GetCurSel();
	if (nSel < 0)
		return -1;
	//if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("15.03")) || pMF->GetCurrentUser() == _T("admin"))
	if(pMF->m_wndAssetDetail.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("15.03")) || pMF->GetCurrentUser() == _T("admin"))
	{
		szType = m_wndUsageProcessList.GetItemText(nSel, 11);	
		//szSQL.Format(_T("SELECT faut_id FROM fam_usagetype WHERE trim(faut_desc)='%s'"), szType.Trim());
		//rs.ExecSQL(szSQL);
		if (pMF->m_wndAssetDetail.m_isDeposed == true && szType.Trim() != m_szType)
			return -1;
		else if (pMF->m_wndAssetDetail.m_isDeposed == true && szType.Trim() == m_szType)
			isChangeType = true;
			
 		if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 			return -1; 
		int nIndex = ToInt(m_wndUsageProcessList.GetItemText(nSel, 0));
		szSQL.Format(_T("DELETE FROM fam_usingprocess WHERE faup_assetno='%s' AND faup_idx=%d"), pMF->m_wndAssetDetail.m_szAssetNo, nIndex); 

 		int ret = pMF->ExecSQL(szSQL); 
 		if(ret >= 0)
		{
 			//SetMode(VM_NONE); 
 			//OnCancelFAMUsageProcess();
			CRecord rsn(&pMF->m_db);
			CString szStatus = _T("");
			szStatus = m_wndUsageProcessList.GetItemText(nSel, 12);
			//szSQL.Format(_T("SELECT fas_id FROM fam_status WHERE trim(fas_desc)='%s'"), szStatus.Trim());
			//rsn.ExecSQL(szSQL);

			if (isChangeType)
			{
				CRecord rs(&pMF->m_db);
				szSQL.Format(_T("UPDATE fam_asset SET fa_deposeddate='%s', fa_deposedamount=0, fa_deposedreason='%s' Where fa_assetno='%s'"),
							_T("1752/09/14"), _T(""), pMF->m_wndAssetDetail.m_szAssetNo);
				rs.ExecSQL(szSQL);
				//_msg(_T("%d"), rs.ExecSQL(szSQL));
				pMF->m_wndAssetDetail.m_isDeposed = false;
				pMF->m_wndAssetDetail.GetDataToScreen();
			}
			else if (szStatus.Trim() == m_szIStatus || 
					szStatus.Trim() == m_szOStatus)
			{
				CRecord rs(&pMF->m_db);
				if (nSel == 0)
				{
					szSQL.Format(_T("UPDATE fam_asset SET fa_status='%s', fa_department='%s', fa_employee='%s' Where fa_assetno='%s'"), 
								m_szOStatus, _T(""), _T(""), pMF->m_wndAssetDetail.m_szAssetNo);
				}
				else
				{
					CString szDept = _T(""), szEmployee = _T("");
					szDept = m_wndUsageProcessList.GetItemText(nSel - 1, 4);
					szEmployee = m_wndUsageProcessList.GetItemText(nSel - 1, 5);
					
					CRecord rs1(&pMF->m_db);
					CRecord rs2(&pMF->m_db);
					CString szQuery, szDeptno, szEmplno;
					
					szQuery.Format(_T("SELECT sd_id FROM sys_dept WHERE trim(sd_name)='%s'"), szDept.Trim());
					rs1.ExecSQL(szQuery);
					szDeptno = rs1.GetStringValue();
					if (pMF->m_szDepartment.Trim() != szDeptno.Trim())
						isChangeDept = true;
					
					if (pMF->m_szUseHRM.Trim() == _T("N"))
					{
						szEmplno = szEmployee;
					}
					else
					{
						szQuery.Format(_T("SELECT empl_id FROM hrm_employee WHERE trim(empl_surname||' '||empl_midname||' 'empl_firstname)='%s' AND trim(empl_dept)='%s'"),
									szEmployee.Trim(), szDeptno.Trim());
						rs2.ExecSQL(szQuery);
						szEmplno = rs2.GetStringValue();
					}
					szSQL.Format(_T("UPDATE fam_asset SET fa_status='%s', fa_department='%s', fa_employee='%s' WHERE fa_assetno='%s'"), 
								m_szOStatus, szDeptno.Trim(), szEmplno.Trim(), pMF->m_wndAssetDetail.m_szAssetNo);
				}
					
				rs.ExecSQL(szSQL);
				pMF->m_wndAssetDetail.GetDataToScreen();
			}
			OnUsageProcessListLoadData();
 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMUsageProcess::OnSaveFAMUsageProcess()
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
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFAMUsageProcessListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMUsageProcess::OnCancelFAMUsageProcess(){
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
int CFAMUsageProcess::OnFAMUsageProcessListLoadData(){
	return 0;
}
int CFAMUsageProcess::OnDeposed()
{
	/*CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("Select count(*) From fam_deposed Where fad_assetno='%s'"), pMF->m_wndAssetDetail.m_szAssetNo);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	CFAMDeposedDialog dlg(pMF);
	dlg.m_szAssetNo = pMF->m_wndAssetDetail.m_szAssetNo;
	if (nCount == 0)
		dlg.SetMode(VM_ADD);
	else
	{
		dlg.SetMode(VM_EDIT);
		dlg.m_nIndex = nCount;
	}
	dlg.DoModal();*/
	return 0;
}

int CFAMUsageProcess::OnPrintImportOrder()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	int nSel = m_wndUsageProcessList.GetCurSel();
	if (nSel < 0)
		return -1;

	if (m_wndUsageProcessList.GetItemText(nSel, 11).Trim() != _T("A"))
	{
		ShowMessageBox(_T("\x42\x1EA1n ph\x1EA3i \x63h\x1ECDn lo\x1EA1i nh\x1EADp m\x1EDBi \x111\x1EC3 in phi\x1EBFu nh\x1EADp"),
			           MB_ICONERROR | MB_OK);
		return -1;
	}

	CReport rpt;
	UpdateData(true);
	if (!rpt.Init(_T("Reports/FAM/FAM_PHIEUNHAPKHO.RPT")))
	{
		return -1;
	}

	CString szSQL, szTemp, tmpStr;
	int nIdx = 0;
	CRecord rs(&pMF->m_db);

	nIdx = ToInt(m_wndUsageProcessList.GetItemText(nSel, 0));

	if (pMF->m_szUseHRM.Trim() == _T("N"))
	{
		/*szSQL.Format(_T(" SELECT  fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        faup_deliveby AS Deliver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='A'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);*/
		szSQL.Format(_T(" SELECT fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        faup_deliveby AS Deliver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='A'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);
	}
	else
	{
		/*szSQL.Format(_T(" SELECT fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        (SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_deliveby LIMIT 1) AS Deliver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='A'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);*/
		szSQL.Format(_T(" SELECT fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        (SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_deliveby) AS Deliver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='A'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);
	}
	_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);

	CString szDate;
	int nIndex = 1;
	szDate = pMF->GetSysDate();

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szTemp.Format(tmpStr, szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szTemp);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szCompanyName);

	szTemp = rs.GetValue(_T("Deliver"));
	rpt.GetReportHeader()->SetValue(_T("name"), szTemp);

	CReportSection* rptDetail = rpt.GetDetail();

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);

		szTemp = rs.GetValue(_T("AssetName"));
		rptDetail->SetValue(_T("2"), szTemp);

		szTemp = rs.GetValue(_T("Unit"));
		rptDetail->SetValue(_T("4"), szTemp);

		//szTemp = rs.GetValue(_T("PurchasePrice"));
		FormatCurrencyStr(rs.GetValue(_T("PurchasePrice")), szTemp);
		rptDetail->SetValue(_T("5"), szTemp);

		rptDetail->SetValue(_T("6"), _T("1"));

		//szTemp = rs.GetValue(_T("PrimaryPrice"));
		FormatCurrencyStr(rs.GetValue(_T("PrimaryPrice")), szTemp);
		rptDetail->SetValue(_T("7"), szTemp);

		//szTemp = rs.GetValue(_T("PrimaryPrice"));
		FormatCurrencyStr(rs.GetValue(_T("PrimaryPrice")), szTemp);
		rptDetail->SetValue(_T("8"), szTemp);

		rs.MoveNext();
	}

	rs.MoveFirst();
	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	//szTemp = rs.GetValue(_T("PrimaryPrice"));
	FormatCurrencyStr(rs.GetValue(_T("PrimaryPrice")), szTemp);
	rptDetail->SetValue(_T("s8"), szTemp);

	tmpStr = rs.GetValue(_T("PrimaryPrice"));
	MoneyToString(tmpStr, szTemp);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szTemp);

	tmpStr = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	szTemp.Format(tmpStr, szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szTemp);

	rpt.PrintPreview();

	return 0;
}

int CFAMUsageProcess::OnPrintExportOrder()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();

	int nSel = m_wndUsageProcessList.GetCurSel();
	if (nSel < 0)
		return -1;

	if (m_wndUsageProcessList.GetItemText(nSel, 11).Trim() != _T("B"))
	{
		ShowMessageBox(_T("\x42\x1EA1n ph\x1EA3i \x63h\x1ECDn lo\x1EA1i \x63\x1EA5p ph\xE1t s\x1EED \x64\x1EE5ng \x111\x1EC3 in phi\x1EBFu \x78u\x1EA5t"),
			           MB_ICONERROR | MB_OK);
		return -1;
	}
	
	CReport rpt;
	UpdateData(true);
	if (!rpt.Init(_T("Reports/FAM/FAM_PHIEUXUATKHO.RPT")))
	{
		return -1;
	}

	CString szSQL, szTemp, tmpStr;
	int nIdx = 0;
	CRecord rs(&pMF->m_db);

	nIdx = ToInt(m_wndUsageProcessList.GetItemText(nSel, 0));

	if (pMF->m_szUseHRM.Trim() == _T("N"))
	{
		/*szSQL.Format(_T(" SELECT fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        faup_receiveby AS Receiver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='B'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);*/
		szSQL.Format(_T(" SELECT  fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        faup_receiveby AS Receiver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='B'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);
	}
	else
	{
		/*szSQL.Format(_T(" SELECT fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        (SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_receiveby LIMIT 1) AS Receiver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='B'"),
					nIdx, pMF->m_wndAssetDetail.m_szAssetNo);*/
		szSQL.Format(_T(" SELECT DISTINCT fa_assetno AS ID,") \
					 _T("        fa_name AS AssetName,") \
					 _T("        fa_unit AS Unit,") \
					 _T("        (SELECT fase_desc FROM fam_sources WHERE fa_sources=fase_id LIMIT 1) AS Source,") \
					 _T("        fa_purchaseprice AS PurchasePrice,") \
					 _T("        fa_currentvalue AS PrimaryPrice,") \
					 _T("        (SELECT trim(empl_surname||' '||empl_midname||' '||empl_firstname) FROM hrm_employee WHERE empl_id=faup_receiveby) AS Receiver") \
					 _T(" FROM fam_asset") \
					 _T(" LEFT JOIN fam_usingprocess ON(fa_assetno=faup_assetno)") \
					 _T(" WHERE faup_idx=%d AND faup_assetno='%s' AND faup_type='B'"),
					 nIdx, pMF->m_wndAssetDetail.m_szAssetNo);
	}

	rs.ExecSQL(szSQL);

	CString szDate;
	int nIndex = 1;
	szDate = pMF->GetSysDate();

	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szTemp.Format(tmpStr, szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szTemp);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_szCompanyName);

	szTemp = rs.GetValue(_T("Receiver"));
	rpt.GetReportHeader()->SetValue(_T("name"), szTemp);

	szTemp = rs.GetValue(_T("Source"));
	rpt.GetReportHeader()->SetValue(_T("source"), szTemp);

	CReportSection* rptDetail = rpt.GetDetail();

	while (!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), nIndex);
		rptDetail->SetValue(_T("1"), tmpStr);

		szTemp = rs.GetValue(_T("AssetName"));
		rptDetail->SetValue(_T("2"), szTemp);

		szTemp = rs.GetValue(_T("Unit"));
		rptDetail->SetValue(_T("4"), szTemp);

		//szTemp = rs.GetValue(_T("PurchasePrice"));
		FormatCurrencyStr(rs.GetValue(_T("PurchasePrice")), szTemp);
		rptDetail->SetValue(_T("5"), szTemp);

		rptDetail->SetValue(_T("6"), _T("1"));

		//szTemp = rs.GetValue(_T("PrimaryPrice"));
		FormatCurrencyStr(rs.GetValue(_T("PrimaryPrice")), szTemp);
		rptDetail->SetValue(_T("7"), szTemp);

		//szTemp = rs.GetValue(_T("PrimaryPrice"));
		FormatCurrencyStr(rs.GetValue(_T("PrimaryPrice")), szTemp);
		rptDetail->SetValue(_T("8"), szTemp);

		rs.MoveNext();
	}

	rs.MoveFirst();

	rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
	//szTemp = rs.GetValue(_T("PrimaryPrice"));
	FormatCurrencyStr(rs.GetValue(_T("PrimaryPrice")), szTemp);
	rptDetail->SetValue(_T("s8"), szTemp);

	tmpStr = rs.GetValue(_T("PrimaryPrice"));
	MoneyToString(tmpStr, szTemp);
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szTemp);

	tmpStr = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	szTemp.Format(tmpStr, szDate.Right(2), szDate.Mid(5, 2), szDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szTemp);
	
	rpt.PrintPreview();

	return 0;
}