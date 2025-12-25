#include "HMSWardSetupDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSWardSetupDialog *pVw = (CHMSWardSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSWardSetupDialog *pVw = (CHMSWardSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSWardSetupDialog *pVw = (CHMSWardSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWardSetupDialog *pVw = (CHMSWardSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSWardSetupDialog *pVw = (CHMSWardSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardSetupDialog*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CHMSWardSetupDialog*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSWardSetupDialog*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSWardSetupDialog*)pWnd)->OnRoomListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWardSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSWardSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSectionChangeFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnSectionChange();
} */
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnSectionSetfocus();} */ 
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CHMSWardSetupDialog *)pWnd)->OnSectionKillfocus();
} */
static int _OnSectionCheckValueFnc(CWnd *pWnd){
	return ((CHMSWardSetupDialog *)pWnd)->OnSectionCheckValue();
} 
static int _OnAddHMSWardSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSWardSetupDialog*)pWnd)->OnAddHMSWardSetupDialog();
} 
static int _OnEditHMSWardSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSWardSetupDialog*)pWnd)->OnEditHMSWardSetupDialog();
} 
static int _OnDeleteHMSWardSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSWardSetupDialog*)pWnd)->OnDeleteHMSWardSetupDialog();
} 
static int _OnSaveHMSWardSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSWardSetupDialog*)pWnd)->OnSaveHMSWardSetupDialog();
} 
static int _OnCancelHMSWardSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSWardSetupDialog*)pWnd)->OnCancelHMSWardSetupDialog();
} 
CHMSWardSetupDialog::CHMSWardSetupDialog(CWnd *pParent)
{
	m_nDlgWidth = 415;
	m_nDlgHeight = 415;
	SetDefaultValues();
	m_szTypeKey.Empty();
	m_szSection.Empty();

}
CHMSWardSetupDialog::~CHMSWardSetupDialog(){
}
void CHMSWardSetupDialog::OnCreateComponents(){
	m_wndRoomList.Create(this,5, 5, 405, 325); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 330, 55, 352);
	m_wndType.Create(this,60, 330, 260, 352); 
	m_wndSectionLabel.Create(this, _T("ID"), 265, 330, 315, 352);
	m_wndSection.Create(this,320, 330, 405, 352); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 357, 55, 379);
	m_wndName.Create(this,60, 357, 405, 379); 
	m_wndAdd.Create(this, _T("&Add"), 35, 384, 105, 406);
	m_wndEdit.Create(this, _T("&Edit"), 110, 384, 180, 406);
	m_wndDelete.Create(this, _T("&Delete"), 185, 384, 255, 406);
	m_wndSave.Create(this, _T("&Save"), 260, 384, 330, 406);
	m_wndCancel.Create(this, _T("&Cancel"), 335, 384, 405, 406);
}
void CHMSWardSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(35);
	m_wndName.SetInitCap(true);
	m_wndName.SetCheckValue(true);
//	m_wndType.SetCheckValue(true);
	m_wndSection.SetLimitText(7);
	m_wndSection.SetInitCap(true);
//	m_wndSection.SetCheckValue(true);


	m_wndRoomList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoomList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndRoomList.InsertColumn(2, _T("Section"), CFMT_TEXT, 70);
	m_wndRoomList.InsertColumn(3, _T("Type"), CFMT_TEXT, 0);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_wardlistTbl.SetTableName(_T("sys_ward"));
	m_hms_wardlistTbl.AddField(_T("sw_createdby"), dfText, 15); 
	m_hms_wardlistTbl.AddField(_T("sw_createddate"), dfDateTime); 
	m_hms_wardlistTbl.AddField(_T("sw_updatedby"), dfText, 15); 
	m_hms_wardlistTbl.AddField(_T("sw_updateddate"), dfDateTime); 
	m_hms_wardlistTbl.AddField(_T("sw_id"), dfLong); 
	m_hms_wardlistTbl.AddField(_T("sw_deptid"), dfText, 7); 
	m_hms_wardlistTbl.AddField(_T("sw_name"), dfText, 35); 
	m_hms_wardlistTbl.AddField(_T("sw_type"), dfInteger);
	

}
void CHMSWardSetupDialog::OnSetWindowEvents(){
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
void CHMSWardSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSection.GetDlgCtrlID(), m_szSection);

}
void CHMSWardSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_ward WHERE sw_id=%d"), m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("sw_id"), m_nID);		
		rs.GetValue(_T("sw_name"), m_szName);
		rs.GetValue(_T("sw_type"), m_szTypeKey);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSWardSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		m_hms_wardlistTbl.SetValue(_T("sw_createdby"), pMF->GetCurrentUser());
		m_hms_wardlistTbl.SetValue(_T("sw_createddate"), pMF->GetSysDateTime());
		szSQL.Format(_T("select coalesce(max(sw_id), 0)+1 FROM sys_ward WHERE sw_deptid='%s' "), m_szDeptID);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_hms_wardlistTbl.SetValue(_T("sw_updatedby"), pMF->GetCurrentUser());
	m_hms_wardlistTbl.SetValue(_T("sw_updateddate"), pMF->GetSysDateTime());
	m_hms_wardlistTbl.SetValue(_T("sw_id"), m_nID);
	m_hms_wardlistTbl.SetValue(_T("sw_deptid"), m_szDeptID);
	m_hms_wardlistTbl.SetValue(_T("sw_name"), m_szName);
	m_hms_wardlistTbl.SetValue(_T("sw_type"), m_szTypeKey);
	
	

}
void CHMSWardSetupDialog::SetDefaultValues(){
	m_nID = 1;
	m_szName.Empty();
	//m_szTypeKey.Empty();
	//m_szSection.Empty();

}
int CHMSWardSetupDialog::SetMode(int nMode){ 
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
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CHMSWardSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSWardSetupDialog();	
} 
void CHMSWardSetupDialog::OnEditSelect(){
	OnEditHMSWardSetupDialog();	
} 
void CHMSWardSetupDialog::OnDeleteSelect(){
	OnDeleteHMSWardSetupDialog();	
} 
void CHMSWardSetupDialog::OnSaveSelect(){
	OnSaveHMSWardSetupDialog();	
} 
void CHMSWardSetupDialog::OnCancelSelect(){
	OnCancelHMSWardSetupDialog();	
} 
void CHMSWardSetupDialog::OnRoomListDblClick(){
	
} 
void CHMSWardSetupDialog::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return;
	m_nID = ToLong(m_wndRoomList.GetItemText(nNewItem, 0));
	GetDataToScreen();	
} 
int CHMSWardSetupDialog::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSWardSetupDialog();
	 return 0;
} 
long CHMSWardSetupDialog::OnRoomListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	m_wndRoomList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_ward WHERE sw_deptid='%s' ORDER BY sw_id "), m_szDeptID);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
			rs.GetValue(_T("sw_id")), 
			rs.GetValue(_T("sw_name")),			
			rs.GetValue(_T("sw_type")), 
			NULL);
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;

}
/*void CHMSWardSetupDialog::OnNameChange(){
	
} */
/*void CHMSWardSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSWardSetupDialog::OnNameKillfocus(){
	
} */
int CHMSWardSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CHMSWardSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSWardSetupDialog::OnTypeSelendok(){
	 
}
/*void CHMSWardSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSWardSetupDialog::OnTypeKillfocus(){
	
}*/
long CHMSWardSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	}
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description from sys_sel where ss_id='hms_exam_type' %s ORDER BY ss_code"), szWhere);


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
/*void CHMSWardSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CHMSWardSetupDialog::OnSectionChange(){
	
} */
/*void CHMSWardSetupDialog::OnSectionSetfocus(){
	
} */
/*void CHMSWardSetupDialog::OnSectionKillfocus(){
	
} */
int CHMSWardSetupDialog::OnSectionCheckValue(){
	return 0;
} 
int CHMSWardSetupDialog::OnAddHMSWardSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
 
} 
int CHMSWardSetupDialog::OnEditHMSWardSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSWardSetupDialog::OnDeleteHMSWardSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndRoomList.GetCurSel();
	if(nSel < 0) return 0;
	m_nID = ToInt(m_wndRoomList.GetItemText(nSel, 0));
	szSQL.Format(_T("SELECT count(*) FROM hms_treatment_record WHERE htr_deptid='%s' AND htr_ward ='%d'"), m_szDeptID, m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0){
		return -1;
	}


 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM  sys_ward WHERE sw_deptid='%s' AND sw_id=%d"), m_szDeptID, m_nID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSWardSetupDialog(); 
		m_wndRoomList.DeleteItem(nSel);
 	}
	return 0;
 } 
int CHMSWardSetupDialog::OnSaveHMSWardSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_wardlistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE sw_id=%ld and sw_deptid='%s' "), m_nID, m_szDeptID); 
 		szSQL = m_hms_wardlistTbl.GetUpdateSQL(_T("sw_createdby, sw_createddate")); 
 		szSQL += szWhere; 
 	} 

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
int CHMSWardSetupDialog::OnCancelHMSWardSetupDialog(){
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
int CHMSWardSetupDialog::OnHMSWardSetupDialogListLoadData(){
	return 0;
}


