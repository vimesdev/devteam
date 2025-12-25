#include "TMOperationListSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSOperationSetupDialog.h"
#include "HMSAdditionFeeSetupDialog.h"
#include "HMSOperationGroupPopup.h"

static long _OnFeeListLoadDataFnc(CWnd *pWnd){
	return ((CTMOperationListSetup*)pWnd)->OnFeeListLoadData();
} 
static void _OnFeeListDblClickFnc(CWnd *pWnd){
	((CTMOperationListSetup*)pWnd)->OnFeeListDblClick();
} 
static void _OnFeeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMOperationListSetup*)pWnd)->OnFeeListSelectChange(nOldItem, nNewItem);
} 
static int _OnFeeListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMOperationListSetup*)pWnd)->OnFeeListDeleteItem();
} 
static int _OnFeeListRefreshFnc(CWnd *pWnd){
	return ((CTMOperationListSetup*)pWnd)->OnFeeListLoadData();
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	return ((CTMOperationListSetup*)pWnd)->OnListShowLogItem();
}
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTMOperationListSetup* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CTMOperationListSetup *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnGroupAddNew();
}*/
static void _OnFindChangeFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnFindChange();
} 
/*static void _OnFindSetfocusFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnFindSetfocus();} */ 
/*static void _OnFindKillfocusFnc(CWnd *pWnd){
	((CTMOperationListSetup *)pWnd)->OnFindKillfocus();
} */
static int _OnFindCheckValueFnc(CWnd *pWnd){
	return ((CTMOperationListSetup *)pWnd)->OnFindCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CTMOperationListSetup *pVw = (CTMOperationListSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CTMOperationListSetup *pVw = (CTMOperationListSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CTMOperationListSetup *pVw = (CTMOperationListSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CTMOperationListSetup*)pWnd)->OnAddHMSOperationListSetup();
} 
static int _OnEditHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CTMOperationListSetup*)pWnd)->OnEditHMSOperationListSetup();
} 
static int _OnDeleteHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CTMOperationListSetup*)pWnd)->OnDeleteHMSOperationListSetup();
} 
static int _OnSaveHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CTMOperationListSetup*)pWnd)->OnSaveHMSOperationListSetup();
} 
static int _OnCancelHMSOperationListSetupFnc(CWnd *pWnd){
	 return ((CTMOperationListSetup*)pWnd)->OnCancelHMSOperationListSetup();
} 
CTMOperationListSetup::CTMOperationListSetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 595;
	SetDefaultValues();
}
CTMOperationListSetup::~CTMOperationListSetup(){
}
void CTMOperationListSetup::OnCreateComponents(){
	m_wndFeeList.Create(this,5, 5, 805, 430); 
	m_wndGroupLabel.Create(this, _T("Group"), 5, 560, 85, 585);
	m_wndGroup.Create(this,90, 560, 290, 585); 
	m_wndFindLabel.Create(this, _T("Find"), 295, 560, 375, 585);
	m_wndFind.Create(this,380, 560, 555, 585); 
	m_wndEdit.Create(this, _T("&Edit"), 565, 560, 640, 585);
	m_wndAdd.Create(this, _T("&Add"), 565, 560, 640, 585);
	//m_wndEdit.Create(this, _T("&Edit"), 645, 560, 720, 585);
	m_wndDelete.Create(this, _T("&Delete"), 725, 560, 800, 585);
	m_wndAdd.ShowWindow(SW_HIDE);
	m_wndDelete.ShowWindow(SW_HIDE);
	m_wndMapCircular.m_nStyle = 0;
	m_wndMapCircular.Create(this, CRect(5, 435, 805, 555));

}
void CTMOperationListSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndFeeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndFeeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndFeeList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndFeeList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 80);
	m_wndFeeList.InsertColumn(6, _T("Dept ID"), CFMT_TEXT, 80);
	m_wndFeeList.InsertColumn(7, _T("Return Dept"), CFMT_MONEY, 60);
	m_wndFeeList.InsertColumn(8, _T("Operation Group"), CFMT_TEXT, 50);
	m_wndFind.SetLimitText(35);
	m_wndFind.SetCheckValue(true);
	m_wndFind.SetNotEmpty(false);



	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_wndMapCircular.OnInitDialog();
}
void CTMOperationListSetup::OnSetWindowEvents(){
	m_wndFeeList.SetEvent(WE_SELCHANGE, _OnFeeListSelectChangeFnc);
	m_wndFeeList.SetEvent(WE_LOADDATA, _OnFeeListLoadDataFnc);
	m_wndFeeList.SetEvent(WE_DBLCLICK, _OnFeeListDblClickFnc);
	m_wndFeeList.SetWindowText(_T("Fee Entry"));
	//m_wndFeeList.AddEvent(1, _T("Delete"), _OnFeeListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndFeeList.AddEvent(0, _T("-"), NULL);
	//m_wndFeeList.AddEvent(2, _T("Refresh"), _OnFeeListRefreshFnc, 0, VK_F5);
	//m_wndFeeList.AddEvent(0, _T("-"), NULL);
	//m_wndFeeList.AddEvent(3, _T("Show table of fixed charges"), _OnListShowLogItemFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	//m_wndFind.SetEvent(WE_SETFOCUS, _OnFindSetfocusFnc);
	//m_wndFind.SetEvent(WE_KILLFOCUS, _OnFindKillfocusFnc);
	m_wndFind.SetEvent(WE_CHECKVALUE, _OnFindCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationListSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationListSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationListSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationListSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationListSetupFnc, 0, 'T', VK_CONTROL);
*/
	OnFeeListLoadData();
}
void CTMOperationListSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);

}
void CTMOperationListSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMOperationListSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

}
void CTMOperationListSetup::SetDefaultValues(){

	m_szGroupKey.Empty();
	m_szFind.Empty();

}
int CTMOperationListSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 1, 2, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndGroup.EnableWindow(TRUE);
		m_wndFind.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CTMOperationListSetup::OnFeeListDblClick(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0) return;
	m_szID = m_wndFeeList.GetItemText(nSel, 0);
	//CHMSAdditionFeeSetupDialog dlg(pMF);
	//dlg.m_szFeeID = m_szID;
	//if(dlg.DoModal() == IDOK){
	//	OnFeeListLoadData();
	//}
	CHMSOperationGroupPopup *newPopup = new CHMSOperationGroupPopup(&m_wndFeeList, _T("O"));
	newPopup->m_szID = m_szID;
	newPopup->m_pWnd = this;
	newPopup->ShowPopup(&m_wndFeeList);

} 
void CTMOperationListSetup::OnFeeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0) 
	{
		m_wndEdit.EnableWindow(false);
		m_wndDelete.EnableWindow(false);
		return;
	}
	m_szID = m_wndFeeList.GetItemText(nNewItem, 0);
	m_wndEdit.EnableWindow(true);
	m_wndDelete.EnableWindow(true);
	m_wndMapCircular.m_szFeeID = m_szID;
	m_wndMapCircular.m_szName = m_wndFeeList.GetItemText(nNewItem, 1);
	m_wndMapCircular.GetDataToScreen();
} 
int CTMOperationListSetup::OnFeeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSOperationListSetup();
	 return 0;
} 
long CTMOperationListSetup::OnFeeListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndFeeList.BeginLoad(); 
	int nCount = 0;
	UpdateData(true);
	if(!m_szGroupKey.IsEmpty())
		szWhere.Format(_T(" AND hfl_groupid='%s' "), m_szGroupKey);
	if(!m_szFind.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "),  m_szFind);
	szSQL.Format(	_T(" SELECT ") \
					_T(" 	*") \
					_T(" FROM") \
					_T(" 	hms_fee_list") \
					_T(" WHERE") \
					_T(" 	substr(hfl_groupid, 1, 2) IN('B4','B5') %s ") \
					_T(" ORDER BY") \
					_T(" 	hfl_line,") \
					_T(" 	hfl_feeid"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFeeList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")), 
			rs.GetValue(_T("hfl_deptid")),
			rs.GetValue(_T("hfl_retprice")),
			rs.GetValue(_T("hfl_groupid")),
			NULL);
		rs.MoveNext();
	}
	m_wndFeeList.EndLoad(); 
	return nCount;
}
void CTMOperationListSetup::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CTMOperationListSetup::OnGroupSelendok(){
	OnFeeListLoadData();
}
/*void CTMOperationListSetup::OnGroupSetfocus(){
	
}*/
/*void CTMOperationListSetup::OnGroupKillfocus(){
	
}*/
long CTMOperationListSetup::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey()){
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 2) IN('B4','B5') ") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CTMOperationListSetup::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
void CTMOperationListSetup::OnFindChange(){
	//OnFeeListLoadData();	
} 
/*void CTMOperationListSetup::OnFindSetfocus(){
	
} */
/*void CTMOperationListSetup::OnFindKillfocus(){
	
} */
int CTMOperationListSetup::OnFindCheckValue(){
	OnFeeListLoadData();
	return 1;
} 
void CTMOperationListSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	//CHMSOperationSetupDialog dlg(pMF, this);
	//dlg.SetMode(VM_ADD);
	//dlg.DoModal();
	
} 
void CTMOperationListSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndFeeList.GetCurSel();
	if(nSel < 0)
		return;
	OnFeeListDblClick();
	//CHMSOperationSetupDialog dlg(pMF, this);
	//dlg.m_szID = m_wndFeeList.GetItemText(nSel, 0);
	//dlg.SetMode(VM_EDIT);
	//dlg.DoModal();
} 
void CTMOperationListSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSOperationListSetup();
} 
int CTMOperationListSetup::OnAddHMSOperationListSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0;
 
} 
int CTMOperationListSetup::OnEditHMSOperationListSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;
} 
int CTMOperationListSetup::OnDeleteHMSOperationListSetup(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
 	CString szSQL, tmpStr; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
	tmpStr.Format(_T("This is item fee active. Can not delete item fee [%s]!"), m_szID);
	szSQL.Format(_T(" select count(*) from hms_operation  where ho_itemid ='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0){
		ShowMessageBox(tmpStr, MB_OK|MB_ICONWARNING);
		return -1;
	}
 	szSQL.Format(_T("DELETE FROM  hms_fee_list WHERE hfl_feeid='%s' AND hfl_feeid NOT IN( SELECT ho_itemid FROM hms_operation WHERE ho_itemid='%s') "), m_szID, m_szID);
//_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndFeeList.DeleteItem(m_wndFeeList.GetCurSel());
 		SetMode(VM_NONE); 
 		OnCancelHMSOperationListSetup(); 
 	}
	return 0;
 } 
int CTMOperationListSetup::OnSaveHMSOperationListSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSOperationListSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CTMOperationListSetup::OnCancelHMSOperationListSetup(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CTMOperationListSetup::OnHMSOperationListSetupListLoadData(){
	return 0;
}
//#include "HMSFeeListEditDetailDialog.h"
int CTMOperationListSetup::OnListShowLogItem(){
	//CHMSFeeListEditDetailDialog dlg(this);
	//dlg.m_szFeeID=m_szID;
	//dlg.DoModal();
	return 0;
}