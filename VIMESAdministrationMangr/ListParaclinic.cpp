#include "ListParaclinic.h"
#include "MainFrm.h"
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CListParaclinic* )pWnd)->OnFeeListSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeListSelendokFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnFeeListSelendok();
}
/*static void _OnFeeListSetfocusFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnFeeListKillfocus();
}*/
/*static void _OnFeeListKillfocusFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnFeeListKillfocus();
}*/
static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CListParaclinic *)pWnd)->OnFeeListLoadData();
}
/*static void _OnFeeListAddNewFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnFeeListAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CListParaclinic *pVw = (CListParaclinic *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CListParaclinic *pVw = (CListParaclinic *)pWnd;
	pVw->OnSaveSelect();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CListParaclinic*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CListParaclinic*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CListParaclinic*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CListParaclinic*)pWnd)->OnSelectedListDeleteItem();
} 
/*static void _OnDescChangeFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnDescChange();
} */
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnDescSetfocus();} */ 
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CListParaclinic *)pWnd)->OnDescKillfocus();
} */
static int _OnDescCheckValueFnc(CWnd *pWnd){
	return ((CListParaclinic *)pWnd)->OnDescCheckValue();
} 
static int _OnAddListParaclinicFnc(CWnd *pWnd){
	 return ((CListParaclinic*)pWnd)->OnAddListParaclinic();
} 
static int _OnEditListParaclinicFnc(CWnd *pWnd){
	 return ((CListParaclinic*)pWnd)->OnEditListParaclinic();
} 
static int _OnDeleteListParaclinicFnc(CWnd *pWnd){
	 return ((CListParaclinic*)pWnd)->OnDeleteListParaclinic();
} 
static int _OnSaveListParaclinicFnc(CWnd *pWnd){
	 return ((CListParaclinic*)pWnd)->OnSaveListParaclinic();
} 
static int _OnCancelListParaclinicFnc(CWnd *pWnd){
	 return ((CListParaclinic*)pWnd)->OnCancelListParaclinic();
} 
CListParaclinic::CListParaclinic(CWnd *pParent, bool bQtyInput):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szSelectedId.Empty();
	m_nCompanyId = 0;
	m_szID.Empty();
	m_bQtyInput = bQtyInput;
}
CListParaclinic::~CListParaclinic(){
}
void CListParaclinic::OnCreateComponents(){
	m_wndListParaclinic.Create(this, _T("List Paraclinic"), 5, 5, 435, 515);
	m_wndFeeListLabel.Create(this, _T("Fee List"), 10, 30, 90, 55);
	m_wndFeeList.Create(this,95, 30, 430, 55); 
	m_wndAdd.Create(this, _T("&Add"), 265, 60, 345, 85);
	m_wndSave.Create(this, _T("&Save"), 350, 60, 430, 85);
	m_wndSelectedList.Create(this,10, 90, 430, 450); 
	m_wndDesc.Create(this,10, 455, 430, 510); 

}
void CListParaclinic::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeList.SetCheckValue(true);
	m_wndFeeList.LimitText(1024);
	m_wndDesc.SetLimitText(1024);
	m_wndDesc.SetCheckValue(true);

	m_wndFeeList.Format(2, 1);
	//m_wndFeeList.InsertColumn(0, _T("GroupID"), CFMT_TEXT, 0);
	m_wndFeeList.InsertColumn(0, _T("FeeID"), CFMT_TEXT, 90);
	m_wndFeeList.InsertColumn(1, _T("Fee Name"), CFMT_TEXT, 260);

	//m_wndSelectedList.InsertColumn(0, _T("GroupID"), CFMT_TEXT, 0);
	m_wndSelectedList.InsertColumn(0, _T("FeeID"), CFMT_TEXT, 0);
	//m_wndSelectedList.InsertColumn(2, _T("STT"), CFMT_NUMBER, 50);
	m_wndSelectedList.InsertColumn(1, _T("Name"), CFMT_TEXT, 370);

}
void CListParaclinic::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFeeList.SetEvent(WE_SELENDOK, _OnFeeListSelendokFnc);
	//m_wndFeeList.SetEvent(WE_SETFOCUS, _OnFeeListSetfocusFnc);
	//m_wndFeeList.SetEvent(WE_KILLFOCUS, _OnFeeListKillfocusFnc);
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	//m_wndFeeList.SetEvent(WE_ADDNEW, _OnFeeListAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDesc.SetEvent(WE_CHANGE, _OnDescChangeFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_CHECKVALUE, _OnDescCheckValueFnc);
	SetMode(VM_ADD);
	OnSelectedListLoadData();
}
void CListParaclinic::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFeeList.GetDlgCtrlID(), m_szFeeListKey);
	DDX_Text(pDX, m_wndDesc.GetDlgCtrlID(), m_szDesc);

}
void CListParaclinic::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CListParaclinic::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CListParaclinic::SetDefaultValues(){

	m_szFeeListKey.Empty();
	m_szDesc.Empty();

}
int CListParaclinic::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
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
void CListParaclinic::OnFeeListSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDesc.SetWindowText(m_wndFeeList.GetCurrent(1));
} 
void CListParaclinic::OnFeeListSelendok(){
	 
}
/*void CListParaclinic::OnFeeListSetfocus(){
	
}*/
/*void CListParaclinic::OnFeeListKillfocus(){
	
}*/
long CListParaclinic::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndFeeList.IsSearchKey() && !m_szFeeListKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szFeeListKey);
	}
	if (!m_szSelectedId.IsEmpty()) szWhere.AppendFormat(_T(" and hfl_feeid not in (%s)"), m_szSelectedId);
	m_wndFeeList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_groupid groupid, hfl_feeid as feeid, hfl_name as feename FROM hms_fee_list WHERE hfl_typeid IN ('P', 'T') %s ORDER BY hfl_feeid "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("feeid")), 
			rs.GetValue(_T("feename")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CListParaclinic::OnFeeListAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CListParaclinic::OnAddSelect(){
	UpdateData();
	if (m_szFeeListKey.IsEmpty())
	{
		return;
	}

	if (!m_szSelectedId.IsEmpty()) 
		m_szSelectedId += _T(", ");
	m_szSelectedId.AppendFormat(_T("'%s'"), m_szFeeListKey);
	m_wndSelectedList.AddItems(m_wndFeeList.GetCurrent(0), m_wndFeeList.GetCurrent(1), NULL);
	m_wndSelectedList.EndLoad();
	OnFeeListLoadData();
	m_wndFeeList.SetFocus();
} 
void CListParaclinic::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_wndSelectedList.GetItemCount() <= 0) return;
	CString szSQL, tmpStr;
	int nRet = 0;
	for (int i = 0; i < m_wndSelectedList.GetItemCount(); i++){
		tmpStr = m_wndSelectedList.GetItemText(i, 0);
		szSQL.Format(_T("insert into sys_sel(ss_id, ss_code, ss_desc) values ('%s', '%s', '%s')"), m_szID, tmpStr, m_wndSelectedList.GetItemText(i, 1).Left(81));
		nRet = pMF->ExecSQL(szSQL);
		if (nRet> 0 && m_bQtyInput)
		{
			szSQL.Format(_T("update hms_fee_list set hfl_itype = 'I' where hfl_feeid = '%s'"), tmpStr);
			pMF->ExecSQL(szSQL);
		}
	}
	if (nRet > 0) 
	{
		//AfxMessageBox(_T("Saved paraclinic!"));
		CGuiDialog::OnOK();
	}
} 
void CListParaclinic::OnSelectedListDblClick(){
	
} 
void CListParaclinic::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CListParaclinic::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndSelectedList.GetCurSel();
	CString tmpStr = m_wndSelectedList.GetItemText(nSel, 0);
	if (m_wndSelectedList.DeleteItem(nSel)) m_szSelectedId.Replace(tmpStr, _T(" "));
	OnFeeListLoadData();
	return 0;
} 
long CListParaclinic::OnSelectedListLoadData(){
	return 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("select hfl_feeid feeid, hfl_name feename from hms_feelist where hfl_feeid in (select regexp_split_to_table(lp_item_id, E'\\\\W+') from list_paraclinic where lp_company_id = %d)"), m_nCompanyId);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
			rs.GetValue(_T("FeeID")),  
			rs.GetValue(_T("feeName")), NULL);
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
}
/*void CListParaclinic::OnDescChange(){
	
} */
/*void CListParaclinic::OnDescSetfocus(){
	
} */
/*void CListParaclinic::OnDescKillfocus(){
	
} */
int CListParaclinic::OnDescCheckValue(){
	return 0;
} 
int CListParaclinic::OnAddListParaclinic(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CListParaclinic::OnEditListParaclinic(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CListParaclinic::OnDeleteListParaclinic(){
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
 		OnCancelListParaclinic();
 	}
	return 0;
}
int CListParaclinic::OnSaveListParaclinic(){
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
 		//OnListParaclinicListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CListParaclinic::OnCancelListParaclinic(){
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
int CListParaclinic::OnListParaclinicListLoadData(){
	return 0;
}
