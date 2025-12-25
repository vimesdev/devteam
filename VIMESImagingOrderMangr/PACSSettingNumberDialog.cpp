#include "PACSSettingNumberDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPACSSettingNumberDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSSettingNumberDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSSettingNumberDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnFeeGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSSettingNumberDialog* )pWnd)->OnFeeGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeGroupSelendokFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnFeeGroupSelendok();
}
/*static void _OnFeeGroupSetfocusFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnFeeGroupKillfocus();
}*/
/*static void _OnFeeGroupKillfocusFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnFeeGroupKillfocus();
}*/
static long _OnFeeGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSSettingNumberDialog *)pWnd)->OnFeeGroupLoadData();
}
/*static void _OnFeeGroupAddNewFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnFeeGroupAddNew();
}*/
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPACSSettingNumberDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSSettingNumberDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPACSSettingNumberDialog *pVw = (CPACSSettingNumberDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CPACSSettingNumberDialog *pVw = (CPACSSettingNumberDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddPACSSettingNumberDialogFnc(CWnd *pWnd){
	 return ((CPACSSettingNumberDialog*)pWnd)->OnAddPACSSettingNumberDialog();
} 
static int _OnEditPACSSettingNumberDialogFnc(CWnd *pWnd){
	 return ((CPACSSettingNumberDialog*)pWnd)->OnEditPACSSettingNumberDialog();
} 
static int _OnDeletePACSSettingNumberDialogFnc(CWnd *pWnd){
	 return ((CPACSSettingNumberDialog*)pWnd)->OnDeletePACSSettingNumberDialog();
} 
static int _OnSavePACSSettingNumberDialogFnc(CWnd *pWnd){
	 return ((CPACSSettingNumberDialog*)pWnd)->OnSavePACSSettingNumberDialog();
} 
static int _OnCancelPACSSettingNumberDialogFnc(CWnd *pWnd){
	 return ((CPACSSettingNumberDialog*)pWnd)->OnCancelPACSSettingNumberDialog();
}
static void _OnPTTTSelectFnc(CWnd *pWnd){
	 ((CPACSSettingNumberDialog*)pWnd)->OnPTTTSelect();
}
CPACSSettingNumberDialog::CPACSSettingNumberDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 705;
	SetDefaultValues();
}
CPACSSettingNumberDialog::~CPACSSettingNumberDialog(){
}
void CPACSSettingNumberDialog::OnCreateComponents()
{
	/*m_wndInformation.Create(this, _T("Information"), 5, 35, 995, 635);
	m_wndList.Create(this,10, 60, 990, 630); 
	m_wndFeeGroupLabel.Create(this, _T("Fee Group"), 5, 5, 105, 30);
	m_wndFeeGroup.Create(this,110, 5, 490, 30); 
	m_wndNameLabel.Create(this, _T("Name"), 495, 5, 595, 30);
	m_wndName.Create(this,600, 5, 995, 30); 
	m_wndPrint.Create(this, _T("&Save"), 830, 640, 910, 665);
	m_wndExport.Create(this, _T("&Exit"), 915, 640, 995, 665);*/

	m_wndInformation.Create(this, _T("Information"), 5, 35, 995, 635);
	m_wndList.Create(this,10, 60, 990, 630); 
	m_wndFeeGroupLabel.Create(this, _T("Fee Group"), 92, 5, 192, 30);
	m_wndFeeGroup.Create(this,197, 5, 546, 30); 
	m_wndNameLabel.Create(this, _T("Name"), 552, 5, 652, 30);
	m_wndName.Create(this,656, 5, 995, 30); 
	m_wndPrint.Create(this, _T("&Save"), 830, 640, 910, 665);
	m_wndExport.Create(this, _T("&Exit"), 915, 640, 995, 665);
	m_wndPTTT.Create(this, _T("PTTT"), 5, 5, 87, 30);
}
void CPACSSettingNumberDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeGroup.SetCheckValue(true);
	m_wndFeeGroup.LimitText(35);
	m_wndName.SetLimitText(35);
	//m_wndName.SetCheckValue(true);




	m_wndFeeGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndFeeGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Return Dept"), CFMT_MONEY, 0);
	m_wndList.InsertColumn(7, _T("Dept ID"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(8, _T("Numimg"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(9, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Modality"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(11, _T(""), CFMT_TEXT, 0);
	m_wndList.SetEditLabel(8, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(10, GUI_TEXTCTRL);
	m_wndList.SetAllowDrag(true);
	m_wndList.ModifyStyle(LVS_SINGLESEL, 0);

}
void CPACSSettingNumberDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFeeGroup.SetEvent(WE_SELENDOK, _OnFeeGroupSelendokFnc);
	//m_wndFeeGroup.SetEvent(WE_SETFOCUS, _OnFeeGroupSetfocusFnc);
	//m_wndFeeGroup.SetEvent(WE_KILLFOCUS, _OnFeeGroupKillfocusFnc);
	m_wndFeeGroup.SetEvent(WE_SELCHANGE, _OnFeeGroupSelectChangeFnc);
	m_wndFeeGroup.SetEvent(WE_LOADDATA, _OnFeeGroupLoadDataFnc);
	//m_wndFeeGroup.SetEvent(WE_ADDNEW, _OnFeeGroupAddNewFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndPTTT.SetEvent(WE_CLICK, _OnPTTTSelectFnc);
	SetMode(VM_NONE);
	//OnListLoadData();

}
void CPACSSettingNumberDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFeeGroup.GetDlgCtrlID(), m_szFeeGroupKey);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Check(pDX, m_wndPTTT.GetDlgCtrlID(), m_bPTTT);

}
void CPACSSettingNumberDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPACSSettingNumberDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPACSSettingNumberDialog::SetDefaultValues(){

	m_szFeeGroupKey.Empty();
	m_szName.Empty();
	m_bPTTT=FALSE;

}
int CPACSSettingNumberDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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

		EnableControls(TRUE);
 		EnableButtons(TRUE, 0, 1, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}

void CPACSSettingNumberDialog::OnPTTTSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}

void CPACSSettingNumberDialog::OnListDblClick(){
	
} 
void CPACSSettingNumberDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSSettingNumberDialog::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSSettingNumberDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szSubItem, szSubGroup, tmpStr;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	UpdateData(true);

	if (m_bPTTT)
	{
		szWhere.Format(_T(" and substr(HFL_GROUPID,1,2) IN ('B4', 'B5') "));
	}

	if (!m_szFeeGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfl_groupid='%s' "), m_szFeeGroupKey);
	}
	if(!m_szName.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szName);
	}
	szSQL.Format(	_T(" SELECT ") \
					_T(" 	*") \
					_T(" FROM") \
					_T(" 	hms_fee_list") \
					_T(" WHERE HFL_ACTIVE='Y' %s") \
					_T(" ORDER BY") \
					_T(" 	hfl_line,") \
					_T(" 	hfl_feeid"), szWhere);
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hfl_subgroup"), szSubGroup);
		rs.GetValue(_T("hfl_subitem"), szSubItem);
		tmpStr.Empty();
		if(szSubGroup == _T("Y"))
			tmpStr = _T("(*) ");
		if(!szSubGroup.IsEmpty() && szSubGroup != _T("Y"))
			tmpStr = _T("  ");
		if(szSubItem == _T("Y"))
			tmpStr = _T("[+] ");
		if(!szSubItem.IsEmpty() && szSubItem != _T("Y"))
			tmpStr = _T(" - ");
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			tmpStr + rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")),
			rs.GetValue(_T("hfl_retprice")),
			rs.GetValue(_T("hfl_deptid")),
			rs.GetValue(_T("hfl_numimg")),
			rs.GetValue(_T("hfl_numimg")),
			rs.GetValue(_T("HFL_MODALITY")),
			rs.GetValue(_T("HFL_MODALITY")),
			NULL);
		if(szSubGroup == _T("Y"))
			m_wndList.SetItemBkColor(nItem, RGB(200, 200, 255), FALSE);
		if(szSubItem == _T("Y"))
			m_wndList.SetItemBkColor(nItem, RGB(240, 240, 255), FALSE);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CPACSSettingNumberDialog::OnFeeGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPACSSettingNumberDialog::OnFeeGroupSelendok(){
	 m_szFeeGroupKey = m_wndFeeGroup.GetCurrent(0);
	 OnListLoadData();
}
/*void CPACSSettingNumberDialog::OnFeeGroupSetfocus(){
	
}*/
/*void CPACSSettingNumberDialog::OnFeeGroupKillfocus(){
	
}*/
long CPACSSettingNumberDialog::OnFeeGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeGroup.IsSearchKey() && !m_szFeeGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szFeeGroupKey);
	}
	m_wndFeeGroup.DeleteAllItems(); 
	int nCount = 0;
	UpdateData(true);
	if (!m_bPTTT)
	{
		szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE HFG_ACTIVE='Y' AND hfg_id in(select sup_permid from sys_userperm where sup_userid='%s') %s ORDER BY hfg_id "), pMF->GetCurrentUser(), szWhere);
		
	}
	else
	{
		szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group where HFG_ACTIVE='Y' and substr(hfg_id,1,2) IN ('B4', 'B5') order by hfg_id "));
	}
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSSettingNumberDialog::OnFeeGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPACSSettingNumberDialog::OnNameChange(){
	
} */
/*void CPACSSettingNumberDialog::OnNameSetfocus(){
	
} */
/*void CPACSSettingNumberDialog::OnNameKillfocus(){
	
} */
int CPACSSettingNumberDialog::OnNameCheckValue(){
	UpdateData(true);
	OnListLoadData();
	return 0;
} 
void CPACSSettingNumberDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL,szNumber, szItemID, szNumberOLD, szModality, szModalityOld;
	int nCount = 0;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		szNumber = m_wndList.GetItemText(i, 8);
		szNumberOLD = m_wndList.GetItemText(i, 9);
		szItemID = m_wndList.GetItemText(i, 0);
		//_tprintf(_T("\r\n%s, %s"), szNumber, szNumberOLD);

		if(szNumber != szNumberOLD && !szNumber.IsEmpty())
		{
			szSQL.Format(_T("UPDATE hms_fee_list ") \
				_T("SET hfl_numimg=%d ") \
				_T("WHERE hfl_feeid='%s'"), 
					ToInt(szNumber), szItemID);
			pMF->ExecSQL(szSQL);
			nCount ++;
		}
	}

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		szModality = m_wndList.GetItemText(i, 10);
		szModalityOld = m_wndList.GetItemText(i, 11);
		szItemID = m_wndList.GetItemText(i, 0);
		//_tprintf(_T("\r\n%s, %s"), szNumber, szNumberOLD);

		if(szModality != szModalityOld && !szModality.IsEmpty())
		{
			szSQL.Format(_T("UPDATE hms_fee_list ") \
				_T("SET HFL_MODALITY='%s' ") \
				_T("WHERE hfl_feeid='%s'"), 
					szModality, szItemID);
			pMF->ExecSQL(szSQL);
			nCount ++;
		}
	}

	CString szMsg;
	if(nCount > 0)
	{
		szMsg.Format(_T("%d \x111\x1EC1 m\x1EE5\x63 \x111\xE3 \x111\x1B0\x1EE3\x63 \x63\x1EADp nh\x1EADp th\xE0nh \x63\xF4ng."), nCount);
		ShowMessageBox(szMsg, MB_OK);
		OnListLoadData();
	}

} 
void CPACSSettingNumberDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CPACSSettingNumberDialog::OnAddPACSSettingNumberDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPACSSettingNumberDialog::OnEditPACSSettingNumberDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSSettingNumberDialog::OnDeletePACSSettingNumberDialog(){
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
 		OnCancelPACSSettingNumberDialog();
 	}
	return 0;
}
int CPACSSettingNumberDialog::OnSavePACSSettingNumberDialog(){
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
 		//OnPACSSettingNumberDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPACSSettingNumberDialog::OnCancelPACSSettingNumberDialog(){
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
int CPACSSettingNumberDialog::OnPACSSettingNumberDialogListLoadData(){
	return 0;
}
