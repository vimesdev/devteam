#include "HMSExaminationRoomSetup.h"
//#include "stdafx.h"
#include "GuiMainFrame.h"
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSExaminationRoomSetup* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnDepartmentSelendokFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnDepartmentSelendok();
}
/*static int _OnDepartmentSetfocusFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnDepartmentKillfocus();
}*/
/*static int _OnDepartmentKillfocusFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnDepartmentKillfocus();
}*/
static int _OnDepartmentLoadDataFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnDepartmentLoadData();
}
/*static int _OnDepartmentAddNewFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnDepartmentAddNew();
}*/
static int _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	 return ((CHMSExaminationRoomSetup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static int _OnTypeSelendokFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnTypeSelendok();
}
/*static int _OnTypeSetfocusFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnTypeKillfocus();
}*/
/*static int _OnTypeKillfocusFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnTypeKillfocus();
}*/
static int _OnTypeLoadDataFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnTypeLoadData();
}
/*static int _OnTypeAddNewFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup *)pWnd)->OnTypeAddNew();
}*/
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationRoomSetup *)pWnd)->OnNameCheckValue();
} 
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSExaminationRoomSetup *pVw = (CHMSExaminationRoomSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSExaminationRoomSetup *pVw = (CHMSExaminationRoomSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExaminationRoomSetup *pVw = (CHMSExaminationRoomSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExaminationRoomSetup *pVw = (CHMSExaminationRoomSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExaminationRoomSetup *pVw = (CHMSExaminationRoomSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSExaminationRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnAddHMSExaminationRoomSetup();
} 
static int _OnEditHMSExaminationRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnEditHMSExaminationRoomSetup();
} 
static int _OnDeleteHMSExaminationRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnDeleteHMSExaminationRoomSetup();
} 
static int _OnSaveHMSExaminationRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnSaveHMSExaminationRoomSetup();
} 
static int _OnCancelHMSExaminationRoomSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationRoomSetup*)pWnd)->OnCancelHMSExaminationRoomSetup();
} 
CHMSExaminationRoomSetup::CHMSExaminationRoomSetup(){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CHMSExaminationRoomSetup::~CHMSExaminationRoomSetup(){
}
void CHMSExaminationRoomSetup::OnCreateComponents(){
	m_wndExaminationRoomsList.Create(this, _T("Examination Rooms List"), 5, 5, 594, 373);
	m_wndList.Create(this,11, 25, 589, 314); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 11, 319, 70, 341);
	m_wndDepartment.Create(this,75, 319, 245, 341); 
	m_wndTypeLabel.Create(this, _T("Type"), 250, 319, 300, 341);
	m_wndType.Create(this,305, 319, 475, 341); 
	m_wndIDLabel.Create(this, _T("ID"), 480, 319, 509, 341);
	m_wndID.Create(this,514, 319, 589, 341); 
	m_wndNameLabel.Create(this, _T("Name"), 11, 346, 70, 368);
	m_wndName.Create(this,75, 346, 589, 368); 
	m_wndAdd.Create(this, _T("&Add"), 225, 378, 295, 400);
	m_wndEdit.Create(this, _T("&Edit"), 300, 378, 370, 400);
	m_wndDelete.Create(this, _T("&Delete"), 375, 378, 445, 400);
	m_wndSave.Create(this, _T("&Save"), 450, 378, 520, 400);
	m_wndCancel.Create(this, _T("&Cancel"), 525, 378, 595, 400);

}
void CHMSExaminationRoomSetup::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(7);
	m_wndType.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Department"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Type"), CFMT_TEXT, 150);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_hms_examroomTbl.SetTableName(_T("hms_examroom"));
	m_hms_examroomTbl.AddField(_T("her_createdby"), dfText, 15); 
	m_hms_examroomTbl.AddField(_T("her_createddate"), dfText, 4); 
	m_hms_examroomTbl.AddField(_T("her_updatedby"), dfText, 15); 
	m_hms_examroomTbl.AddField(_T("her_updateddate"), dfText, 4); 
	m_hms_examroomTbl.AddField(_T("her_id"), dfInteger); 
	m_hms_examroomTbl.AddField(_T("her_deptid"), dfText, 7); 
	m_hms_examroomTbl.AddField(_T("her_name"), dfText, 35); 
	m_hms_examroomTbl.AddField(_T("her_type"), dfInteger); 

}
void CHMSExaminationRoomSetup::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationRoomSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationRoomSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationRoomSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationRoomSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationRoomSetupFnc, 0, 'T', VK_CONTROL);

}
void CHMSExaminationRoomSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSExaminationRoomSetup::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CHMSExaminationRoomSetup::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	m_hms_examroomTbl.SetValue(_T("her_id"), m_nID);
	m_hms_examroomTbl.SetValue(_T("her_deptid"), m_szDepartmentKey);
	m_hms_examroomTbl.SetValue(_T("her_name"), m_szName);
	m_hms_examroomTbl.SetValue(_T("her_type"), m_szTypeKey);

}
void CHMSExaminationRoomSetup::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_szTypeKey.Empty();
	m_nID=0;
	m_szName.Empty();

}
int CHMSExaminationRoomSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		//CGuiView::SetMode(nMode); 
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
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
int CHMSExaminationRoomSetup::OnListDblClick(){
	 return 0;
} 
int CHMSExaminationRoomSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnListDeleteItem(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnListLoadData(){
/*
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
int CHMSExaminationRoomSetup::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnDepartmentSelendok(){
	 return 0;
}
/*int CHMSExaminationRoomSetup::OnDepartmentSetfocus(){
	 return 0;
}*/
/*int CHMSExaminationRoomSetup::OnDepartmentKillfocus(){
	 return 0;
}*/
int CHMSExaminationRoomSetup::OnDepartmentLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey()){
	};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSExaminationRoomSetup::OnDepartmentAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} */
int CHMSExaminationRoomSetup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnTypeSelendok(){
	 return 0;
}
/*int CHMSExaminationRoomSetup::OnTypeSetfocus(){
	 return 0;
}*/
/*int CHMSExaminationRoomSetup::OnTypeKillfocus(){
	 return 0;
}*/
int CHMSExaminationRoomSetup::OnTypeLoadData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*int CHMSExaminationRoomSetup::OnTypeAddNew(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} */
/*int CHMSExaminationRoomSetup::OnIDChange(){
	return 0;
} */
/*int CHMSExaminationRoomSetup::OnIDSetfocus(){
	return 0;
} */
/*int CHMSExaminationRoomSetup::OnIDKillfocus(){
	return 0;
} */
int CHMSExaminationRoomSetup::OnIDCheckValue(){
	return 0;
} 
/*int CHMSExaminationRoomSetup::OnNameChange(){
	return 0;
} */
/*int CHMSExaminationRoomSetup::OnNameSetfocus(){
	return 0;
} */
/*int CHMSExaminationRoomSetup::OnNameKillfocus(){
	return 0;
} */
int CHMSExaminationRoomSetup::OnNameCheckValue(){
	return 0;
} 
int CHMSExaminationRoomSetup::OnAddSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnEditSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnDeleteSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnSaveSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnCancelSelect(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	 return 0;
} 
int CHMSExaminationRoomSetup::OnAddHMSExaminationRoomSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSExaminationRoomSetup::OnEditHMSExaminationRoomSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSExaminationRoomSetup::OnDeleteHMSExaminationRoomSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSExaminationRoomSetup(); 
 	}
return 0;
 } 
int CHMSExaminationRoomSetup::OnSaveHMSExaminationRoomSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_examroomTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_hms_examroomTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSExaminationRoomSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationRoomSetup::OnCancelHMSExaminationRoomSetup(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CHMSExaminationRoomSetup::OnHMSExaminationRoomSetupListLoadData(){
	return 0;
}
