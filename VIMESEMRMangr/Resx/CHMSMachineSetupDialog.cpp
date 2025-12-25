#include "CHMSMachineSetupDialog.h"
#include "MainFrm.h"
static long _OnRoomListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMachineSetupDialog*)pWnd)->OnRoomListLoadData();
} 
static void _OnRoomListDblClickFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog*)pWnd)->OnRoomListDblClick();
} 
static void _OnRoomListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSMachineSetupDialog*)pWnd)->OnRoomListSelectChange(nOldItem, nNewItem);
} 
static int _OnRoomListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSMachineSetupDialog*)pWnd)->OnRoomListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CCHMSMachineSetupDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSMachineSetupDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMachineSetupDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnSectionChangeFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSectionChange();
} */
/*static void _OnSectionSetfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSectionSetfocus();} */ 
/*static void _OnSectionKillfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSectionKillfocus();
} */
static int _OnSectionCheckValueFnc(CWnd *pWnd){
	return ((CCHMSMachineSetupDialog *)pWnd)->OnSectionCheckValue();
} 
static void _OnSourceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSMachineSetupDialog* )pWnd)->OnSourceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSourceSelendokFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSourceSelendok();
}
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSourceKillfocus();
}*/
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSourceKillfocus();
}*/
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CCHMSMachineSetupDialog *)pWnd)->OnSourceLoadData();
}
/*static void _OnSourceAddNewFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSourceAddNew();
}*/
/*static void _OnSerialIDChangeFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSerialIDChange();
} */
/*static void _OnSerialIDSetfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSerialIDSetfocus();} */ 
/*static void _OnSerialIDKillfocusFnc(CWnd *pWnd){
	((CCHMSMachineSetupDialog *)pWnd)->OnSerialIDKillfocus();
} */
static int _OnSerialIDCheckValueFnc(CWnd *pWnd){
	return ((CCHMSMachineSetupDialog *)pWnd)->OnSerialIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CCHMSMachineSetupDialog*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CCHMSMachineSetupDialog *pVw = (CCHMSMachineSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CCHMSMachineSetupDialog *pVw = (CCHMSMachineSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCHMSMachineSetupDialog *pVw = (CCHMSMachineSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCHMSMachineSetupDialog *pVw = (CCHMSMachineSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCHMSMachineSetupDialog *pVw = (CCHMSMachineSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CCHMSMachineSetupDialog*)pWnd)->OnAddCHMSMachineSetupDialog();
} 
static int _OnEditCHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CCHMSMachineSetupDialog*)pWnd)->OnEditCHMSMachineSetupDialog();
} 
static int _OnDeleteCHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CCHMSMachineSetupDialog*)pWnd)->OnDeleteCHMSMachineSetupDialog();
} 
static int _OnSaveCHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CCHMSMachineSetupDialog*)pWnd)->OnSaveCHMSMachineSetupDialog();
} 
static int _OnCancelCHMSMachineSetupDialogFnc(CWnd *pWnd){
	 return ((CCHMSMachineSetupDialog*)pWnd)->OnCancelCHMSMachineSetupDialog();
} 
CCHMSMachineSetupDialog::CCHMSMachineSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSMachineSetupDialog::~CCHMSMachineSetupDialog(){
}
void CCHMSMachineSetupDialog::OnCreateComponents(){
	m_wndRoomList.Create(this,5, 5, 505, 325); 
	m_wndNameLabel.Create(this, _T("Name"), 5, 360, 110, 385);
	m_wndName.Create(this,115, 360, 505, 385); 
	m_wndTypeLabel.Create(this, _T("Type"), 225, 330, 325, 355);
	m_wndType.Create(this,330, 330, 505, 355); 
	m_wndSectionLabel.Create(this, _T("ID"), 5, 330, 110, 355);
	m_wndSection.Create(this,115, 330, 220, 355); 
	m_wndSourceLabel.Create(this, _T("Source"), 5, 390, 110, 415);
	m_wndSource.Create(this,115, 390, 505, 415); 
	m_wndSerialIDLabel.Create(this, _T("Serial ID"), 5, 420, 110, 445);
	m_wndSerialID.Create(this,115, 420, 505, 445); 
	m_wndActive.Create(this, _T("Active"), 5, 450, 110, 475);
	m_wndAdd.Create(this, _T("&Add"), 115, 450, 185, 475);
	m_wndEdit.Create(this, _T("&Edit"), 190, 450, 260, 475);
	m_wndDelete.Create(this, _T("&Delete"), 265, 450, 335, 475);
	m_wndSave.Create(this, _T("&Save"), 340, 450, 410, 475);
	m_wndCancel.Create(this, _T("&Cancel"), 415, 450, 485, 475);

}
void CCHMSMachineSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndSection.SetLimitText(1024);
	m_wndSection.SetCheckValue(true);
	m_wndSource.SetCheckValue(true);
	m_wndSource.LimitText(35);
	m_wndSerialID.SetLimitText(35);
	m_wndSerialID.SetCheckValue(true);






	m_wndSource.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSource.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CCHMSMachineSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRoomList.SetEvent(WE_SELCHANGE, _OnRoomListSelectChangeFnc);
	m_wndRoomList.SetEvent(WE_LOADDATA, _OnRoomListLoadDataFnc);
	m_wndRoomList.SetEvent(WE_DBLCLICK, _OnRoomListDblClickFnc);
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
	m_wndSource.SetEvent(WE_SELENDOK, _OnSourceSelendokFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_SELCHANGE, _OnSourceSelectChangeFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	//m_wndSource.SetEvent(WE_ADDNEW, _OnSourceAddNewFnc);
	//m_wndSerialID.SetEvent(WE_CHANGE, _OnSerialIDChangeFnc);
	//m_wndSerialID.SetEvent(WE_SETFOCUS, _OnSerialIDSetfocusFnc);
	//m_wndSerialID.SetEvent(WE_KILLFOCUS, _OnSerialIDKillfocusFnc);
	m_wndSerialID.SetEvent(WE_CHECKVALUE, _OnSerialIDCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CCHMSMachineSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndSection.GetDlgCtrlID(), m_szSection);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Text(pDX, m_wndSerialID.GetDlgCtrlID(), m_szSerialID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CCHMSMachineSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Section")] =  m_szSection;
	m_jData[_T("Source")] =  m_szSourceKey;
	m_jData[_T("SerialID")] =  m_szSerialID;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Section")].GetValue(m_szSection);
	m_jData[_T("Source")].GetValue(m_szSourceKey);
	m_jData[_T("SerialID")].GetValue(m_szSerialID);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CCHMSMachineSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSMachineSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSMachineSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szTypeKey.Empty();
	m_szSection.Empty();
	m_szSourceKey.Empty();
	m_szSerialID.Empty();
	m_bActive=FALSE;

}
int CCHMSMachineSetupDialog::SetMode(int nMode){
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
void CCHMSMachineSetupDialog::OnRoomListDblClick(){
	
} 
void CCHMSMachineSetupDialog::OnRoomListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSMachineSetupDialog::OnRoomListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSMachineSetupDialog::OnRoomListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndRoomList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoomList.AddItems(
		rs.MoveNext();
	}
	m_wndRoomList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CCHMSMachineSetupDialog::OnNameChange(){
	
} */
/*void CCHMSMachineSetupDialog::OnNameSetfocus(){
	
} */
/*void CCHMSMachineSetupDialog::OnNameKillfocus(){
	
} */
int CCHMSMachineSetupDialog::OnNameCheckValue(){
	return 0;
} 
void CCHMSMachineSetupDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMachineSetupDialog::OnTypeSelendok(){
	 
}
/*void CCHMSMachineSetupDialog::OnTypeSetfocus(){
	
}*/
/*void CCHMSMachineSetupDialog::OnTypeKillfocus(){
	
}*/
long CCHMSMachineSetupDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSMachineSetupDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSMachineSetupDialog::OnSectionChange(){
	
} */
/*void CCHMSMachineSetupDialog::OnSectionSetfocus(){
	
} */
/*void CCHMSMachineSetupDialog::OnSectionKillfocus(){
	
} */
int CCHMSMachineSetupDialog::OnSectionCheckValue(){
	return 0;
} 
void CCHMSMachineSetupDialog::OnSourceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMachineSetupDialog::OnSourceSelendok(){
	 
}
/*void CCHMSMachineSetupDialog::OnSourceSetfocus(){
	
}*/
/*void CCHMSMachineSetupDialog::OnSourceKillfocus(){
	
}*/
long CCHMSMachineSetupDialog::OnSourceLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSource.IsSearchKey() && !m_szSourceKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szSourceKey
};
	m_wndSource.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSource.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSMachineSetupDialog::OnSourceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSMachineSetupDialog::OnSerialIDChange(){
	
} */
/*void CCHMSMachineSetupDialog::OnSerialIDSetfocus(){
	
} */
/*void CCHMSMachineSetupDialog::OnSerialIDKillfocus(){
	
} */
int CCHMSMachineSetupDialog::OnSerialIDCheckValue(){
	return 0;
} 
	void CCHMSMachineSetupDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCHMSMachineSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMachineSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMachineSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMachineSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSMachineSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSMachineSetupDialog::OnAddCHMSMachineSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSMachineSetupDialog::OnEditCHMSMachineSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSMachineSetupDialog::OnDeleteCHMSMachineSetupDialog(){
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
 		OnCancelCHMSMachineSetupDialog();
 	}
	return 0;
}
int CCHMSMachineSetupDialog::OnSaveCHMSMachineSetupDialog(){
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
 		//OnCHMSMachineSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSMachineSetupDialog::OnCancelCHMSMachineSetupDialog(){
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
int CCHMSMachineSetupDialog::OnCHMSMachineSetupDialogListLoadData(){
	return 0;
}
