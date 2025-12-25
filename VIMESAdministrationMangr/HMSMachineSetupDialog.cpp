#include "HMSMachineSetupDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSMachineSetupDialog *pVw = (CHMSMachineSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSMachineSetupDialog *pVw = (CHMSMachineSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSMachineSetupDialog *pVw = (CHMSMachineSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSMachineSetupDialog *pVw = (CHMSMachineSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSMachineSetupDialog *pVw = (CHMSMachineSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMachineSetupDialog*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMachineSetupDialog*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMachineSetupDialog*)pWnd)->OnRoomListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMachineSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSMachineSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSectionChangeFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnSectionChange();
} */
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnSectionSetfocus();} */ 
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CHMSMachineSetupDialog *)pWnd)->OnSectionKillfocus();
} */
static int _OnSectionCheckValueFnc(CWnd *pWnd){
	return ((CHMSMachineSetupDialog *)pWnd)->OnSectionCheckValue();
} 
static int _OnAddHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineSetupDialog*)pWnd)->OnAddHMSMachineSetupDialog();
} 
static int _OnEditHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineSetupDialog*)pWnd)->OnEditHMSMachineSetupDialog();
} 
static int _OnDeleteHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineSetupDialog*)pWnd)->OnDeleteHMSMachineSetupDialog();
} 
static int _OnSaveHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineSetupDialog*)pWnd)->OnSaveHMSMachineSetupDialog();
} 
static int _OnCancelHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSMachineSetupDialog*)pWnd)->OnCancelHMSMachineSetupDialog();
} 
CHMSMachineSetupDialog::CHMSMachineSetupDialog(CWnd *pParent)
{
	m_nDlgWidth = 415;
	m_nDlgHeight = 415;
	SetDefaultValues();
	m_szTypeKey.Empty();
	m_szSection.Empty();
	m_bActive = TRUE;
	m_szTitle = _T("Set up machine");

}
CHMSMachineSetupDialog::~CHMSMachineSetupDialog(){
}
void CHMSMachineSetupDialog::OnCreateComponents(){
	m_wndTypeLabel.Create(this, _T("Type"), 5, 330, 55, 355);
	m_wndType.Create(this,60, 330, 310, 355); 
	m_wndSectionLabel.Create(this, _T("ID"), 315, 330, 395, 355);
	m_wndSection.Create(this,400, 330, 505, 355); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 360, 55, 385);
	m_wndName.Create(this,60, 360, 395, 385); 
	m_wndActive.Create(this, _T("Active"), 400, 359, 505, 384);
	m_wndAdd.Create(this, _T("&Add"), 135, 389, 205, 414);
	m_wndEdit.Create(this, _T("&Edit"), 210, 389, 280, 414);
	m_wndDelete.Create(this, _T("&Delete"), 285, 389, 355, 414);
	m_wndSave.Create(this, _T("&Save"), 360, 389, 430, 414);
	m_wndCancel.Create(this, _T("&Cancel"), 435, 389, 505, 414);
	m_wndRoomList.Create(this,5, 5, 505, 325); 

}
void CHMSMachineSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(254);
	m_wndName.SetInitCap(2);
	m_wndName.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndSection.SetLimitText(7);
	m_wndSection.SetInitCap(3);	
	m_wndSection.SetCheckValue(true);


	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_TEXT, 60);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoomList.InsertColumn(2, _T("Type"), CFMT_TEXT, 200);
	m_wndRoomList.InsertColumn(3, _T("Active"), CFMT_TEXT, 60);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_fam_assetTbl.SetTableName(_T("fam_asset_dept"));
	m_fam_assetTbl.AddField(_T("fa_createdby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_createddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("fa_updatedby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_updateddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("fa_assetno"), dfText, 7); 
	m_fam_assetTbl.AddField(_T("fa_department"), dfText, 7); 
	m_fam_assetTbl.AddField(_T("fa_name"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_category"), dfText, 7); 	
	m_fam_assetTbl.AddField(_T("fa_status"), dfText,1); 

}
void CHMSMachineSetupDialog::OnSetWindowEvents(){
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
	m_wndRoomList.SetWindowText(_T("Room List"));
	m_wndRoomList.AddEvent(1, _T("Delete"), _OnRoomListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndSection.SetEvent(WE_CHANGE, _OnSectionChangeFnc);
	//m_wndSection.SetEvent(WE_SETFOCUS, _OnSectionSetfocusFnc);
	//m_wndSection.SetEvent(WE_KILLFOCUS, _OnSectionKillfocusFnc);
	m_wndSection.SetEvent(WE_CHECKVALUE, _OnSectionCheckValueFnc);
	SetMode(VM_NONE);
	OnRoomListLoadData();
}
void CHMSMachineSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSection.GetDlgCtrlID(), m_szID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
}
void CHMSMachineSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("SELECT * FROM fam_asset_dept WHERE fa_assetno='%s' and fa_department='%s'"), m_szID, m_szDeptID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("fa_name"), m_szName);
		rs.GetValue(_T("fa_category"), m_szTypeKey);
		rs.GetValue(_T("fa_assetno"), m_szSection);
		rs.GetValue(_T("fa_status"), tmpStr);
		if(tmpStr == _T("Y")) m_bActive = true;
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSMachineSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	m_fam_assetTbl.SetValue(_T("fa_createdby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("fa_createddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("fa_assetno"), m_szID);	
	m_fam_assetTbl.SetValue(_T("fa_updatedby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("fa_updateddate"), pMF->GetSysDateTime());	
	m_fam_assetTbl.SetValue(_T("fa_department"), m_szDeptID);
	m_fam_assetTbl.SetValue(_T("fa_name"), m_szName);
	m_fam_assetTbl.SetValue(_T("fa_category"), m_szTypeKey);
	m_fam_assetTbl.SetValue(_T("fa_status"), m_bActive?_T("Y"):_T("N"));	

}
void CHMSMachineSetupDialog::SetDefaultValues(){
	m_szID.Empty();
	m_szName.Empty();
	m_szTypeKey.Empty();
	//m_szSection.Empty();

}
int CHMSMachineSetupDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndType.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
			m_wndAdd.SetFocus();
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CHMSMachineSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSMachineSetupDialog();	
} 
void CHMSMachineSetupDialog::OnEditSelect(){
	OnEditHMSMachineSetupDialog();	
} 
void CHMSMachineSetupDialog::OnDeleteSelect(){
	OnDeleteHMSMachineSetupDialog();	
} 
void CHMSMachineSetupDialog::OnSaveSelect(){
	OnSaveHMSMachineSetupDialog();	
} 
void CHMSMachineSetupDialog::OnCancelSelect(){
	OnCancelHMSMachineSetupDialog();	
} 
void CHMSMachineSetupDialog::OnRoomListDblClick(){
	
} 
void CHMSMachineSetupDialog::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return;
	m_szID = m_wndRoomList.GetItemText(nNewItem, 0);
	GetDataToScreen();	
} 
int CHMSMachineSetupDialog::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSMachineSetupDialog();
	 return 0;
} 
long CHMSMachineSetupDialog::OnRoomListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fa_assetno, fa_name, fa_status, ") \
		_T(" (SELECT fast_desc as description FROM fam_assettype WHERE fast_id = fa_category AND ROWNUM = 1) as fa_category ") \
		_T(" FROM fam_asset_dept WHERE fa_department='%s' ORDER BY fa_assetno "), m_szDeptID);
	nCount = rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("fa_assetno")), 
			rs.GetValue(_T("fa_name")), 			
			rs.GetValue(_T("fa_category")), 
			rs.GetValue(_T("fa_status")), 
			NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;

}
/*void CHMSMachineSetupDialog::OnNameChange(){
	
} */
/*void CHMSMachineSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSMachineSetupDialog::OnNameKillfocus(){
	
} */
int CHMSMachineSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSMachineSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSMachineSetupDialog::OnTypeSelendok(){
	 
}
/*void CHMSMachineSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSMachineSetupDialog::OnTypeKillfocus(){
	
}*/
long CHMSMachineSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" WHERE fast_id='%s' "), m_szTypeKey);
	}
	szSQL.Format(_T("SELECT fast_id as id, fast_desc as description from fam_assettype %s ORDER BY fast_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSMachineSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CHMSMachineSetupDialog::OnSectionChange(){
	
} */
/*void CHMSMachineSetupDialog::OnSectionSetfocus(){
	
} */
/*void CHMSMachineSetupDialog::OnSectionKillfocus(){
	
} */
int CHMSMachineSetupDialog::OnSectionCheckValue(){
	return 0;
} 
int CHMSMachineSetupDialog::OnAddHMSMachineSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
 
} 
int CHMSMachineSetupDialog::OnEditHMSMachineSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSMachineSetupDialog::OnDeleteHMSMachineSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndRoomList.GetCurSel();
	if(nSel < 0) return 0;
	m_szID = m_wndRoomList.GetItemText(nSel, 0);
	szSQL.Format(_T("SELECT count(*) FROM hms_operation WHERE ho_deptid='%s' AND ho_recordno ='%s'"), m_szDeptID, m_szID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}	

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_asset_dept WHERE fa_department='%s' AND fa_assetno='%s'"), m_szDeptID, m_szID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSMachineSetupDialog(); 
		m_wndRoomList.DeleteItem(nSel);
 	}
	return 0;
 } 
int CHMSMachineSetupDialog::OnSaveHMSMachineSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("SELECT count(*) FROM fam_asset_dept WHERE fa_assetno ='%s' "), m_szID);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0){
			ShowMessageBox(_T("Ma da ton tai. Khong the tao moi"));
			return -1;
		} 

 		szSQL = m_fam_assetTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE fa_assetno='%s' and fa_department='%s' "), m_szID, m_szDeptID); 
 		szSQL = m_fam_assetTbl.GetUpdateSQL(_T("fa_createdby, fa_createddate, fa_assetno")); 
 		szSQL += szWhere; 
 	} 
_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
		OnRoomListLoadData();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMachineSetupDialog::OnCancelHMSMachineSetupDialog(){
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
int CHMSMachineSetupDialog::OnHMSMachineSetupDialogListLoadData(){
	return 0;
}


