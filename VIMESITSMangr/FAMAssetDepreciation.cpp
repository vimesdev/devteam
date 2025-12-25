#include "FAMAssetDepreciation.h"
#include "MainFrm.h"
static long _OnDeprecListLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDepreciation*)pWnd)->OnDeprecListLoadData();
} 
static void _OnDeprecListDblClickFnc(CWnd *pWnd){
	((CFAMAssetDepreciation*)pWnd)->OnDeprecListDblClick();
} 
static void _OnDeprecListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMAssetDepreciation*)pWnd)->OnDeprecListSelectChange(nOldItem, nNewItem);
} 
static int _OnDeprecListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreciation*)pWnd)->OnDeprecListDeleteItem();
} 
static int _OnAddFAMAssetDepreciationFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreciation*)pWnd)->OnAddFAMDepreciation();
} 
static int _OnEditFAMAssetDepreciationFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreciation*)pWnd)->OnEditFAMDepreciation();
} 
static int _OnDeleteFAMAssetDepreciationFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreciation*)pWnd)->OnDeleteFAMDepreciation();
} 
static int _OnSaveFAMAssetDepreciationFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreciation*)pWnd)->OnSaveFAMDepreciation();
} 
static int _OnCancelFAMAssetDepreciationFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreciation*)pWnd)->OnCancelFAMDepreciation();
} 
static int _AutoCalcDepreciationFnc(CWnd *pWnd){
	return ((CFAMAssetDepreciation*)pWnd)->AutoCalcDepreciation();
} 
static int _UpdateAccelDepreciationFnc(CWnd *pWnd){
	return ((CFAMAssetDepreciation*)pWnd)->UpdateAccelDepreciation();
} 
CFAMAssetDepreciation::CFAMAssetDepreciation(){

	m_nDlgWidth = 445;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CFAMAssetDepreciation::~CFAMAssetDepreciation()
{
}
void CFAMAssetDepreciation::OnCreateComponents()
{
	m_wndDeprecList.Create(this, 5, 5, 800, 115); 
}
void CFAMAssetDepreciation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDeprecList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndDeprecList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndDeprecList.InsertColumn(1, _T("Date"), CFMT_DATE, 90);
	m_wndDeprecList.InsertColumn(2, _T("Amount"), CFMT_MONEY, 150);
	m_wndDeprecList.InsertColumn(3, _T("Remaining Value"), CFMT_MONEY, 150);
	m_wndDeprecList.InsertColumn(4, _T(""), CFMT_TEXT, 220);
	//m_wndDeprecList.InsertColumn(5, _T(""), CFMT_TEXT, 35);
}
void CFAMAssetDepreciation::OnSetWindowEvents(){
	m_wndDeprecList.SetEvent(WE_SELCHANGE, _OnDeprecListSelectChangeFnc);
	m_wndDeprecList.SetEvent(WE_LOADDATA, _OnDeprecListLoadDataFnc);
	m_wndDeprecList.SetEvent(WE_DBLCLICK, _OnDeprecListDblClickFnc);

	/*m_wndDeprecList.SetWindowText(_T("Depreciation"));
	m_wndDeprecList.AddEvent(1, _T("Auto Caculation"), _AutoCalcDepreciationFnc, 0, 0, 0);
	m_wndDeprecList.AddEvent(2, _T("Update Accum - Depr"), _UpdateAccelDepreciationFnc, 0, 0, 0);
	m_wndDeprecList.AddEvent(0, _T("-"), NULL);
	m_wndDeprecList.AddEvent(3, _T("&Add"), _OnAddFAMAssetDepreciationFnc, 0, 0, 0);
	m_wndDeprecList.AddEvent(0, _T("-"), NULL);
	m_wndDeprecList.AddEvent(4, _T("&Edit"), _OnEditFAMAssetDepreciationFnc, 0, 0, 0);
	m_wndDeprecList.AddEvent(0, _T("-"), NULL);
	m_wndDeprecList.AddEvent(5, _T("&Delete"), _OnDeleteFAMAssetDepreciationFnc, 0, 0, 0);*/

	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	/*if (pMF->m_szDeprUnit.IsEmpty())
		m_bIsSetMenu = false;
	else*/
		//SetContextMenuState();
	//m_bIsSetMenu = false;
	m_bSetContextMenu = false;
	m_nAverDepr = 0;
	//OnDeprecListLoadData();		//Nap du lieu len ListView
}
void CFAMAssetDepreciation::OnDoDataExchange(CDataExchange* pDX)
{
}
void CFAMAssetDepreciation::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CFAMAssetDepreciation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMAssetDepreciation::SetDefaultValues(){


}
int CFAMAssetDepreciation::SetMode(int nMode){
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
void CFAMAssetDepreciation::OnDeprecListDblClick()
{
	OnEditFAMDepreciation();
} 
void CFAMAssetDepreciation::OnDeprecListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
} 
int CFAMAssetDepreciation::OnDeprecListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMAssetDepreciation::OnDeprecListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//MessageBox(_T("OK"));
	if (pMF->m_wndAssetDetail.GetMode() != VM_NONE)
	{
		CRecord rs(&pMF->m_db);
		//CRecord rsn(&pMF->m_db);
		CString szSQL;
		//bool bIsSetMenu;
		/*szSQL.Format(_T("SELECT famc_depr_method FROM fam_category WHERE famc_id='%s'"), pMF->m_szCategory);
		rsn.ExecSQL(szSQL);
		szMethod = rsn.GetStringValue();*/
		m_wndDeprecList.BeginLoad(); 
		int nCount = 0, i = 0; 
		double nAmount = 0, nValue = 0;
		/*szSQL.Format(_T("SELECT * FROM fam_depreciation WHERE fad_tranline_id=(select fa_strgtransline_id from fam_asset where fa_assetno = '%s') ORDER BY fad_idx"), 
			pMF->m_wndAssetDetail.m_szAssetNo);*/
		szSQL.Format(_T("SELECT * FROM fam_depreciation WHERE fad_assetno= '%s' ORDER BY fad_idx"), pMF->m_wndAssetDetail.m_szAssetNo);
		nCount = rs.ExecSQL(szSQL); 
		
		while (!rs.IsEOF())
		{ 
			if (i == 0)
			{
				CString strTemp;
				if (pMF->m_szDeprMethod == _T("S"))
				{
					TranslateString(_T("Straight-line depreciation method"), strTemp);
					m_wndDeprecList.AddItems(strTemp, NULL);
				}
				else if (pMF->m_szDeprMethod == _T("R"))
				{
					TranslateString(_T("Reducing balance depreciation method"), strTemp);
					m_wndDeprecList.AddItems(strTemp, NULL);
				}
				else if (pMF->m_szDeprMethod == _T("Q"))
				{
					TranslateString(_T("Units-of-production depreciation method"), strTemp);
					m_wndDeprecList.AddItems(strTemp, NULL);
				}
				m_wndDeprecList.MergeCell(0, 0, 0, 3, DT_LEFT, true, true);
				m_wndDeprecList.SetItemBkColor(0, RGB(0, 0, 192), 0);
				m_wndDeprecList.SetItemTextColor(0, RGB(255, 255, 255), 0);
				//i++;
				//bIsSetMenu = true;
			}
			else
			{
				if (pMF->m_szDeprUnit == _T("MRA"))
				{
					m_wndDeprecList.AddItems(
						rs.GetValue(_T("fad_idx")),
						rs.GetValue(_T("fad_date")),
						rs.GetValue(_T("fad_scale")),
						ToString(pMF->m_nCurValue), NULL);
					rs.MoveNext();
				}
				else
				{
					m_wndDeprecList.AddItems(
						rs.GetValue(_T("fad_idx")),
						rs.GetValue(_T("fad_date")),
						rs.GetValue(_T("fad_amount")),
						ToString(pMF->m_nCurValue), NULL);
					rs.MoveNext();
				}
					//rs.GetValue(_T("fad_note")), NULL);
			}
			i++;
			if (rs.GetRecordCount() == i)
				rs.GetValue(_T("fad_scale"), m_nAverDepr);
		}
		m_wndDeprecList.EndLoad(); 
		if (nCount > 0)
		{
			for (i = 1; i <= m_wndDeprecList.GetItemCount(); i++)
			{
			
				if (i == 1)
				{
					nValue = ToDouble(m_wndDeprecList.GetItemText(i, 3));
					nAmount = ToDouble(m_wndDeprecList.GetItemText(i, 2));
				}
				else
				{
					nValue = ToDouble(m_wndDeprecList.GetItemText(i - 1, 3));
					nAmount = ToDouble(m_wndDeprecList.GetItemText(i, 2)); 
				}
			/*if (i == pMF->m_nDeprTerm - 1)
				m_wndDeprecList.SetItemText(i, 3, _T("0"));
			else*/
				if ((nValue - nAmount) == 0 || (nValue - nAmount) < 0 || i == pMF->m_nDeprTerm)
					m_wndDeprecList.SetItemText(i, 3, _T("0"));
				else
					m_wndDeprecList.SetItemText(i, 3, ToString(nValue - nAmount));
			}
		}
		SetContextMenuState();
		//if (m_bSetContextMenu == false)
		//{
		//	MessageBox(_T("OK"));
			//bIsSetMenu = false;
		//}
		return nCount;
	}
	else
	{
		m_wndDeprecList.DeleteAllItems();
		pMF->m_szDeprUnit.Empty();
		SetContextMenuState();
	}
	return 0;
}
int CFAMAssetDepreciation::OnAddFAMDepreciation()
{
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
	pMF->m_wndAsset.CheckUser();
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() && pMF->CheckPermission(_T("16.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
			return -1;
 		//SetMode(VM_ADD);
		CFAMAssetDepreDialog dlg(pMF);
		dlg.m_szAssetNo = pMF->m_szAssetNo;
		dlg.m_nRemainValue = 0;
		//bool bIsSetMenu = false;
		if (m_wndDeprecList.GetItemCount() > 0)
		{
			dlg.m_szLastDate = m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 1);
			dlg.m_nRemainValue = ToDouble(m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 3));
		}
		else
		{
			//MessageBox(_T("OK"));
			//m_bSetContextMenu = true;
			dlg.m_szLastDate = pMF->m_szInService;
			dlg.m_nRemainValue = pMF->m_nCurValue;
		}
		if (m_wndDeprecList.GetItemCount() > 0)
		{
			if (dlg.m_nRemainValue <= 0 || 
				m_wndDeprecList.GetItemCount() == pMF->m_nDeprTerm ||
				(pMF->m_szDeprUnit.Left(1) == _T("A") && m_wndDeprecList.GetItemCount() == pMF->m_nDeprTerm / 12))
			{
				ShowMessageBox(_T("Your depreciation is finished"), MB_OK | MB_ICONEXCLAMATION);
				return -1;
			}
		}
		dlg.SetMode(VM_ADD);
		if (dlg.DoModal() == IDOK)
		{
			//MessageBox(_T("OK"));
			OnDeprecListLoadData();
			//m_wndDeprecList.SetFocus();
			//m_wndDeprecList.SetItemState(m_wndDeprecList.GetItemCount() - 1, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
			m_wndDeprecList.SetCurSel(m_wndDeprecList.GetItemCount() - 1);
			//MessageBox(dlg.m_szDeprTypeKey);
			//if (dlg.m_szDeprTypeKey.Trim() == _T("M"))
			//{
				if (CompareDate(m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 1), pMF->GetSysDate()) <= 0)
				{
					CString szSQL;
					double nDeprAmount = ToDouble(m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 2));
					CRecord rs(&pMF->m_db);
					szSQL.Format(_T("Update fam_asset SET fa_depreciation=%d WHERE fa_assetno='%s'"),
									Round(pMF->m_nAccumDepr + nDeprAmount), pMF->m_szAssetNo);
					int ret = rs.ExecSQL(szSQL);
					if (ret >= 0)
					{
						ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
						pMF->m_wndAsset.GetDataToScreen();
					}
				}
			}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0; 
}
int CFAMAssetDepreciation::OnEditFAMDepreciation()
{
 	//if(GetMode() != VM_VIEW) 
 		//return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAsset.CheckUser();
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->GetCurrentUser() == _T("admin")|| pMF->CheckPermission(_T("16.02")))
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
			return -1;
		int nSel = m_wndDeprecList.GetCurSel();
		if (nSel < 0 || nSel == 0) 
			return -1;
		/*if (pMF->m_szDeprUnit.Right(2) == _T("SA") || pMF->m_szDeprUnit.Right(2) == _T("RA"))
		return -1;*/
		if (pMF->m_szDeprUnit == _T("MQA"))
			EditAutoFormLoad(nSel);
		else if (pMF->m_szDeprUnit.Right(2) != _T("SA") && pMF->m_szDeprUnit.Right(2) != _T("RA"))
			EditManualFormLoad(nSel);
 		//SetMode(VM_EDIT);
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;  
}
int CFAMAssetDepreciation::OnDeleteFAMDepreciation()
{
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	pMF->m_wndAsset.CheckUser();
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->GetCurrentUser() == _T("admin") || pMF->CheckPermission(_T("16.03")))
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
			return -1;
		int nSel = m_wndDeprecList.GetCurSel();
		if (pMF->m_szDeprUnit.Right(2) != _T("SA") && pMF->m_szDeprUnit.Right(2) != _T("RA"))
		{
			if (nSel < 0 || nSel == 0) 
				return -1;
			else if (nSel != m_wndDeprecList.GetItemCount() - 1)
			{
				ShowMessageBox(_T("You must delete the items in order from bottom to top"), MB_OK | MB_ICONERROR);
				return -1;
			}
		}
		int nIndex = ToInt(m_wndDeprecList.GetItemText(nSel, 0)); 
		double nDeprAmount = ToDouble(m_wndDeprecList.GetItemText(nSel, 2));
		if (pMF->m_szDeprUnit.Right(2) == _T("SA") || pMF->m_szDeprUnit.Right(2) == _T("RA"))
		{
			if (ShowMessageBox(_T("Do you want to delete all the items?"), MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
				return -1;
		}
		else
		{
 			if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 				return -1;
		}
		CString szSQL, szDate;
		szDate = m_wndDeprecList.GetItemText(nSel, 1);
		if (pMF->m_szDeprUnit.Right(2) == _T("SA") || pMF->m_szDeprUnit.Right(2) == _T("RA"))
			szSQL.Format(_T("DELETE FROM fam_depreciation WHERE fad_assetno='%s'"), pMF->m_szAssetNo);
		else
			szSQL.Format(_T("DELETE FROM fam_depreciation WHERE fad_assetno='%s' AND fad_idx=%d"), pMF->m_szAssetNo, nIndex); 
 		int ret = pMF->ExecSQL(szSQL); 
 		if(ret >= 0)
		{ 
			OnDeprecListLoadData();
			if (m_wndDeprecList.GetItemCount() == 0)
			{
				CRecord rs(&pMF->m_db);
				szSQL.Format(_T("Update fam_asset SET fa_depreciation=0, fa_deprunit='%s' WHERE fa_assetno='%s'"),
							_T(""), pMF->m_szAssetNo);
				rs.ExecSQL(szSQL);
				pMF->m_wndAsset.GetDataToScreen();
				//m_bIsSetMenu = false;
				SetContextMenuState();
			}
			else
			{
				if (pMF->m_szDeprUnit.Left(1) == _T("M"))
				{
					if (CompareDate(szDate, pMF->GetSysDate()) <= 0)
					{
						CRecord rs(&pMF->m_db);
						szSQL.Format(_T("Update fam_asset SET fa_depreciation=%d WHERE fa_assetno='%s'"),
									Round(pMF->m_nAccumDepr - nDeprAmount), pMF->m_szAssetNo);
						int ret = rs.ExecSQL(szSQL);
						if (ret >= 0)
						{
							ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
							pMF->m_wndAsset.GetDataToScreen();
						}
					}
				}
				else
				{
					CDate dt1, dt2;
					dt1.ParseDate(pMF->GetSysDate());
					dt2.ParseDate(szDate);
					if ((dt2.GetYear() - dt1.GetYear()) <= 1)
						UpdateAccelDepreciation();
				}
			}
				//pMF->m_wndAsset.GetDataToScreen();
 				//SetMode(VM_NONE); 
 				//OnCancelFAMDepreciation(); 
 		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	return 0;
}
int CFAMAssetDepreciation::OnSaveFAMDepreciation(){
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
 		//OnFAMAssetDepreciationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAssetDepreciation::OnCancelFAMDepreciation(){
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
int CFAMAssetDepreciation::OnFAMDepreciationListLoadData(){
	return 0;
}

int CFAMAssetDepreciation::AutoCalcDepreciation()
{
	//MessageBox(_T("OK"));
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAsset.CheckUser();
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("16.01")) || pMF->GetCurrentUser() == _T("admin"))
	{
		if (pMF->m_wndAssetDetail.GetMode() != VM_VIEW || pMF->m_wndAssetDetail.m_isDeposed != false)
			return -1;
		/*if (m_wndDeprecList.GetItemCount() == 0)
			m_bSetContextMenu = true;*/
		if (pMF->m_szDeprMethod == _T('S') || pMF->m_szDeprMethod == _T('R'))
		{
			if (pMF->m_szDeprUnit.IsEmpty())
			{
				CFAMSRDeprCaculation dlg(pMF);
				dlg.m_szDeprMethod = pMF->m_szDeprMethod;
				dlg.SetMode(VM_ADD);
				if (dlg.DoModal() == IDOK)
				{
					OnDeprecListLoadData();
					//ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
					//pMF->m_wndAsset.GetDataToScreen();
					m_wndDeprecList.SetCurSel(1);
					if (CompareDate(m_wndDeprecList.GetItemText(1, 1), pMF->GetSysDate()) <= 0)
					{
						//UpdateAccelDepreciation();
						ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
						pMF->m_wndAsset.GetDataToScreen();
					}
					/*if (m_bSetContextMenu)						SetContextMenuState();*/
				}
			}
		}
		else
		{
			if (pMF->m_szDeprUnit.IsEmpty() ||
				(!pMF->m_szDeprUnit.IsEmpty() && pMF->m_szDeprUnit == _T("MQA")))
			{
				CFAMQDeprCaculation dlg(pMF);
				dlg.m_szAssetNo = pMF->m_szAssetNo;
				if (m_wndDeprecList.GetItemCount() == 0)
				{
					dlg.m_szLastCalcDate = pMF->m_szInService;
					dlg.m_nRemainValue = pMF->m_nCurValue;
					dlg.m_nDeprePerProduct = 0;
				}
				else
				{
					dlg.m_szLastCalcDate = m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 1);
					dlg.m_nRemainValue = ToDouble(m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 3));
					dlg.m_nDeprePerProduct = m_nAverDepr;
					//_msg(_T("%d"), m_nAverDepr);
				}
				dlg.SetMode(VM_ADD);
				if (dlg.DoModal() == IDOK)
				{
					OnDeprecListLoadData();
					//MessageBox(_T("OK"));
					m_wndDeprecList.SetCurSel(m_wndDeprecList.GetItemCount() - 1);
					if (CompareDate(m_wndDeprecList.GetItemText(m_wndDeprecList.GetItemCount() - 1, 1), pMF->GetSysDate()) <= 0)
					{
						//UpdateAccelDepreciation();
						ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
						pMF->m_wndAsset.GetDataToScreen();
					}
					/*if (m_bSetContextMenu)
						SetContextMenuState();*/
				}
			}
		}
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}

	return 0;
}
int CFAMAssetDepreciation::UpdateAccelDepreciation()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	pMF->m_wndAsset.CheckUser();
	if(pMF->m_wndAsset.szUser == pMF->GetCurrentUser() || pMF->CheckPermission(_T("16.02")))
	{
		if (pMF->m_wndAsset.GetMode() != VM_VIEW || pMF->m_wndAsset.m_isDeposed != false)
			return -1;
		int nCount = m_wndDeprecList.GetItemCount();
		if (nCount == 0 || pMF->m_szDeprUnit.IsEmpty())
			return -1;
		CRecord rsm(&pMF->m_db);
		CString szSQL;
		/*szSQL.Format(_T("SELECT date_part('year', age(date('%s'))) * 12 + date_part('month', age(date('%s')))"), 
					pMF->m_szInService, pMF->m_szInService);*/
		szSQL.Format(_T("select (extract(year from (SYS_DATE() - TO_DATE('%s','YYYY-MM-DD'))year to month) * 12) + (extract(month from (SYS_DATE() - TO_DATE('%s','YYYY-MM-DD')) year to month)) from dual"), 
					pMF->m_szInService, pMF->m_szInService);
		rsm.ExecSQL(szSQL);
			
		int nRet = rsm.GetIntValue();
		if (nRet == 0)
		{
			ShowMessageBox(_T("Depreciation date hasn't come"), MB_OK | MB_ICONINFORMATION);
			return -1;
		}
			//Goi ham tinh tong
		szSQL.Format(_T("fam_update_accumdepr('%s')"), pMF->m_szAssetNo);
		int ret = str2int(pMF->ExecDML(szSQL));
		if (ret >= 0)
			ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
		else
			ShowMessageBox(_T("Failed to update accumulated depreciation value"), MB_OK | MB_ICONERROR);
		pMF->m_wndAsset.GetDataToScreen();
		return ret;
	}else
	{
		ShowMessageBox(_T("Permission denined"), MB_OK | MB_ICONERROR);
		return -1;
	}
	

}
void CFAMAssetDepreciation::EditAutoFormLoad(int nSel)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CFAMQDeprCaculation dlg(pMF);
	dlg.m_szAssetNo = pMF->m_szAssetNo;
	dlg.m_nID = ToInt(m_wndDeprecList.GetItemText(nSel, 0));
	dlg.m_nRemainValue = 0;
	double noldAmount = ToDouble(m_wndDeprecList.GetItemText(nSel, 2));
	//dlg.m_szLastCalcDate = m_wndDeprecList.GetItemText(nSel, 1);
	if (nSel == 1)
	{
		dlg.m_szLastCalcDate = pMF->m_szInService;
		//dlg.m_szLastDate = m_wndDeprecList.GetItemText(1, 1);
		dlg.m_nRemainValue = pMF->m_nCurValue;
	}
	else
	{
		//if (pMF->m_szDeprUnit == _T("MQA"))
		
		//else
		dlg.m_szLastCalcDate = m_wndDeprecList.GetItemText(nSel - 1, 1);
		dlg.m_nRemainValue = ToDouble(m_wndDeprecList.GetItemText(nSel - 1, 3));
	}
	dlg.SetMode(VM_EDIT);
	//UpdateData(true);
	if (dlg.DoModal() == IDOK)
	{
		OnDeprecListLoadData();
		//m_wndDeprecList.SetFocus();
		//m_wndDeprecList.SetItemState(nSel, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		m_wndDeprecList.SetCurSel(nSel);
		if (CompareDate(m_wndDeprecList.GetItemText(nSel, 1), pMF->GetSysDate()) <= 0)
		{
			CString szSQL;
			CRecord rs(&pMF->m_db);
			double nDeprAmount = ToDouble(m_wndDeprecList.GetItemText(nSel, 2));
			szSQL.Format(_T("Update fam_asset SET fa_depreciation=%d WHERE fa_assetno='%s'"),
						 Round(pMF->m_nAccumDepr - noldAmount + nDeprAmount), pMF->m_szAssetNo);
			int ret = rs.ExecSQL(szSQL);
			if (ret >= 0)
			{
				ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
				pMF->m_wndAsset.GetDataToScreen();
			}
		}
		//m_wndDeprecList.SetFocus();
		//pMF->m_wndAsset.GetDataToScreen();
	}
}
void CFAMAssetDepreciation::EditManualFormLoad(int nSel)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CFAMAssetDepreDialog dlg(pMF);
	dlg.m_szAssetNo = pMF->m_szAssetNo;
	dlg.m_nID = ToInt(m_wndDeprecList.GetItemText(nSel, 0));
	dlg.m_nRemainValue = 0;
	double noldAmount = ToDouble(m_wndDeprecList.GetItemText(nSel, 2));
	//dlg.m_szLastDate = m_wndDeprecList.GetItemText(nSel, 1);
	if (nSel == 1)
	{
		dlg.m_szLastDate = pMF->m_szInService;
		dlg.m_nRemainValue = pMF->m_nCurValue;
	}
	else
	{
		//if (pMF->m_szDeprUnit == _T("MQA"))
		//dlg.m_szLastCalcDate = m_wndDeprecList.GetItemText(nSel - 1, 1);
		//else
		dlg.m_szLastDate = m_wndDeprecList.GetItemText(nSel - 1, 1);
		dlg.m_nRemainValue = ToDouble(m_wndDeprecList.GetItemText(nSel - 1, 3));
	}
	dlg.SetMode(VM_EDIT);
	//UpdateData(true);
	if (dlg.DoModal() == IDOK)
	{
		OnDeprecListLoadData();
		//m_wndDeprecList.SetFocus();
		//m_wndDeprecList.SetItemState(nSel, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED); 
		m_wndDeprecList.SetCurSel(nSel);
		if (pMF->m_szDeprUnit.Left(1) == _T("M"))
		{
			if (CompareDate(m_wndDeprecList.GetItemText(nSel, 1), pMF->GetSysDate()) <= 0)
			{
				CString szSQL;
				CRecord rs(&pMF->m_db);
				double nDeprAmount = ToDouble(m_wndDeprecList.GetItemText(nSel, 2));
				szSQL.Format(_T("Update fam_asset SET fa_depreciation=%d WHERE fa_assetno='%s'"),
							 Round(pMF->m_nAccumDepr - noldAmount + nDeprAmount), pMF->m_szAssetNo);
				int ret = rs.ExecSQL(szSQL);
				if (ret >= 0)
				{
					ShowMessageBox(_T("Accumulated depreciation value has been updated"), MB_OK | MB_ICONINFORMATION);
					pMF->m_wndAsset.GetDataToScreen();
				}
			}
		}
		else
		{
			CDate dt1, dt2;
			dt1.ParseDate(pMF->GetSysDate());
			dt2.ParseDate(m_wndDeprecList.GetItemText(nSel, 1));
			if ((dt2.GetYear() - dt1.GetYear()) <= 1)
				UpdateAccelDepreciation();
		}
	}
}
void CFAMAssetDepreciation::SetContextMenuState()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (!pMF->m_szDeprUnit.IsEmpty())
	{
		if (pMF->m_szDeprUnit.Right(2) == _T("SA") || pMF->m_szDeprUnit.Right(2) == _T("RA"))
		{
			//MessageBox(_T("OK"));
			m_wndDeprecList.SetMenuState(1, false);
			m_wndDeprecList.SetMenuState(2, true);
			m_wndDeprecList.SetMenuState(3, false);
			m_wndDeprecList.SetMenuState(4, false);
			m_wndDeprecList.SetMenuState(5, true);
		}
		else if (pMF->m_szDeprUnit.Right(2) == _T("QA"))
		{
			m_wndDeprecList.SetMenuState(1, true);
			m_wndDeprecList.SetMenuState(2, true);
			m_wndDeprecList.SetMenuState(3, false);
			m_wndDeprecList.SetMenuState(4, true);
			m_wndDeprecList.SetMenuState(5, true);
		}
		else if (pMF->m_szDeprUnit == _T("YSM") || pMF->m_szDeprUnit == _T("YRM"))
		{
			m_wndDeprecList.SetMenuState(1, false);
			m_wndDeprecList.SetMenuState(2, true);
			m_wndDeprecList.SetMenuState(3, true);
			m_wndDeprecList.SetMenuState(4, true);
			m_wndDeprecList.SetMenuState(5, true);
		}
		else
		{
			m_wndDeprecList.SetMenuState(1, false);
			m_wndDeprecList.SetMenuState(2, false);
			m_wndDeprecList.SetMenuState(3, true);
			m_wndDeprecList.SetMenuState(4, true);
			m_wndDeprecList.SetMenuState(5, true);
		}
		//m_bIsSetMenu = true;
	}
	else
	{
		//MessageBox(_T("Reset"));
		m_wndDeprecList.SetMenuState(1, true);
		m_wndDeprecList.SetMenuState(2, true);
		m_wndDeprecList.SetMenuState(3, true);
		m_wndDeprecList.SetMenuState(4, true);
		m_wndDeprecList.SetMenuState(5, true);
		//m_bIsSetMenu = false;
	}
}