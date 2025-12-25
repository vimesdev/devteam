#include "AdBusinessPartnerContact.h"
#include "MainFrm.h"
#include "AdBusinessPartnerDialog.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdBusinessPartnerContact*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdBusinessPartnerContact*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdBusinessPartnerContact*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnListAddItem();
}
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdBusinessPartnerContactFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnAddAdBusinessPartnerContact();
} 
static int _OnEditAdBusinessPartnerContactFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnEditAdBusinessPartnerContact();
} 
static int _OnDeleteAdBusinessPartnerContactFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnDeleteAdBusinessPartnerContact();
} 
static int _OnSaveAdBusinessPartnerContactFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnSaveAdBusinessPartnerContact();
} 
static int _OnCancelAdBusinessPartnerContactFnc(CWnd *pWnd){
	 return ((CAdBusinessPartnerContact*)pWnd)->OnCancelAdBusinessPartnerContact();
} 
CAdBusinessPartnerContact::CAdBusinessPartnerContact(){
	m_nDlgWidth = 785;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CAdBusinessPartnerContact::~CAdBusinessPartnerContact(){
}
void CAdBusinessPartnerContact::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 780, 140); 
	m_wndList.SetCheckBox(true);
}
void CAdBusinessPartnerContact::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T("Primary"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Title"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(2, _T("Contact Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Position"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(4, _T("Email"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(5, _T("Phone"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(6, _T("ID"), CFMT_TEXT, 0);

}
void CAdBusinessPartnerContact::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Add New Line"), _OnListAddItemFnc, 0, -1, 0);
	m_wndList.AddEvent(2, _T("Edit Line"), _OnListEditItemFnc, 0, -1, 0); 
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	//OnListLoadData();
	m_wndInput.Create(&m_wndList);
	m_wndInput.OnInitDialog();
	m_wndInput.m_szPartnerID = m_szPartnerID;
	m_wndInput.m_pWnd = this;
	m_wndList.SetEditView(&m_wndInput);
	SetMode(VM_VIEW);
}
void CAdBusinessPartnerContact::OnDoDataExchange(CDataExchange* pDX){

}
void CAdBusinessPartnerContact::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAdBusinessPartnerContact::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAdBusinessPartnerContact::SetDefaultValues(){
	m_wndList.DeleteAllItems();
}
int CAdBusinessPartnerContact::SetMode(int nMode){
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
void CAdBusinessPartnerContact::OnListDblClick(){
	OnListEditItem();	
} 
void CAdBusinessPartnerContact::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID = m_wndList.GetItemText(nNewItem, 6);
	m_wndInput.m_szID = szID;
}

int CAdBusinessPartnerContact::OnListAddItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nMode = GetMode();
	if (nMode != VM_VIEW && nMode != VM_EDIT)
		return -1;
	m_wndInput.SetMode(VM_ADD);
	m_wndInput.m_szPartnerID = m_szPartnerID;
	int ret = m_wndList.AddNewLine();
	return ret;	
}  
int CAdBusinessPartnerContact::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteAdBusinessPartnerContact();
	return 0;
} 
int CAdBusinessPartnerContact::OnListEditItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	//if (m_wndList.GetItemText(nSel, 6).IsEmpty())
	//{
	//	OnListLoadData();
	//	m_wndInput.m_szID = m_wndList.GetItemText(nSel,6);
	//}
	m_wndInput.SetMode(VM_EDIT);
	m_wndInput.m_szPartnerID = m_szPartnerID;
	m_wndList.EditLine(nSel);
	return 0;
}
long CAdBusinessPartnerContact::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szPri;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 0;
	szSQL.Format(_T("SELECT adpc_title as title, adpc_name as contactname, adpc_position as position, ") \
				_T("adpc_email as email, adpc_tel as phone, adpc_partner_contact_id as id, adpc_isprimary as pri ") \
				_T("FROM ad_partner_contact WHERE adpc_partner_id = '%s' ORDER BY adpc_isprimary desc"), m_szPartnerID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("pri"), szPri);	
		nIdx = m_wndList.AddItems(
			_T(""),
			rs.GetValue(_T("Title")), 
			rs.GetValue(_T("ContactName")), 
			rs.GetValue(_T("Position")), 
			rs.GetValue(_T("Email")), 
			rs.GetValue(_T("Phone")), 
			rs.GetValue(_T("id")), NULL);
		if (szPri == _T("Y"))
			m_wndList.SetCheck(nIdx, true);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CAdBusinessPartnerContact::OnAddAdBusinessPartnerContact(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAdBusinessPartnerContact::OnEditAdBusinessPartnerContact(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdBusinessPartnerContact::OnDeleteAdBusinessPartnerContact(){
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -1;
	if (m_wndList.GetCheck(nSel))
	{
		ShowMessageBox(_T("Can not delete primary contact"), MB_OK);
		return -1;
	}
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	CString szID = m_wndList.GetItemText(nSel, 6);
 	szSQL.Format(_T("DELETE FROM ad_partner_contact WHERE adpc_partner_contact_id = '%s'"), szID);
 	int ret = pMF->ExecSQL(szSQL);
	if(ret >= 0){
 		//OnCancelAdBusinessPartnerContact();
		m_wndList.DeleteItem(nSel);
 	}
	return 0;
}
int CAdBusinessPartnerContact::OnSaveAdBusinessPartnerContact(){
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
 		//OnAdBusinessPartnerContactListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAdBusinessPartnerContact::OnCancelAdBusinessPartnerContact(){
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
int CAdBusinessPartnerContact::OnAdBusinessPartnerContactListLoadData(){
	return 0;
}
