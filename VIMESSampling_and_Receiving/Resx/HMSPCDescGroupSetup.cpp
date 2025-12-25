#include "HMSPCDescGroupSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPCDescGroupSetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPCDescGroupSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPCDescGroupSetup*)pWnd)->OnListDeleteItem();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPCDescGroupSetup* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSPCDescGroupSetup *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnPrintNameChangeFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnPrintNameChange();
} */
/*static void _OnPrintNameSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnPrintNameSetfocus();} */ 
/*static void _OnPrintNameKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnPrintNameKillfocus();
} */
static int _OnPrintNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescGroupSetup *)pWnd)->OnPrintNameCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescGroupSetup *)pWnd)->OnNameCheckValue();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSPCDescGroupSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSPCDescGroupSetup *)pWnd)->OnIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSPCDescGroupSetup*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPCDescGroupSetup *pVw = (CHMSPCDescGroupSetup *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPCDescGroupSetup *pVw = (CHMSPCDescGroupSetup *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPCDescGroupSetup *pVw = (CHMSPCDescGroupSetup *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSPCDescGroupSetup *pVw = (CHMSPCDescGroupSetup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSPCDescGroupSetup *pVw = (CHMSPCDescGroupSetup *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPCDescGroupSetup *pVw = (CHMSPCDescGroupSetup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPCDescGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescGroupSetup*)pWnd)->OnAddHMSPCDescGroupSetup();
} 
static int _OnEditHMSPCDescGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescGroupSetup*)pWnd)->OnEditHMSPCDescGroupSetup();
} 
static int _OnDeleteHMSPCDescGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescGroupSetup*)pWnd)->OnDeleteHMSPCDescGroupSetup();
} 
static int _OnSaveHMSPCDescGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescGroupSetup*)pWnd)->OnSaveHMSPCDescGroupSetup();
} 
static int _OnCancelHMSPCDescGroupSetupFnc(CWnd *pWnd){
	 return ((CHMSPCDescGroupSetup*)pWnd)->OnCancelHMSPCDescGroupSetup();
} 
CHMSPCDescGroupSetup::CHMSPCDescGroupSetup(){

	m_nDlgWidth = 554;
	m_nDlgHeight = 478;
	SetDefaultValues();
}
CHMSPCDescGroupSetup::~CHMSPCDescGroupSetup(){
}
void CHMSPCDescGroupSetup::OnCreateComponents(){
	m_wndParaclinicalDescribe.Create(this, _T("Paraclinical describe"), 5, 5, 469, 323);
	m_wndList.Create(this,10, 27, 465, 264); 
	m_wndTypeLabel.Create(this, _T("Type"), 9, 269, 49, 291);
	m_wndType.Create(this,54, 269, 254, 291); 
	m_wndPrintNameLabel.Create(this, _T("PrintName"), 259, 269, 319, 291);
	m_wndPrintName.Create(this,324, 269, 464, 291); 
	m_wndNameLabel.Create(this, _T("Name"), 9, 296, 49, 318);
	m_wndName.Create(this,54, 296, 254, 318); 
	m_wndIDLabel.Create(this, _T("ID"), 259, 296, 319, 318);
	m_wndID.Create(this,324, 296, 384, 318); 
	m_wndActive.Create(this, _T("Active"), 389, 296, 464, 318);
	m_wndAdd.Create(this, _T("&Add"), 24, 328, 94, 350);
	m_wndEdit.Create(this, _T("&Edit"), 99, 328, 169, 350);
	m_wndDelete.Create(this, _T("&Delete"), 174, 328, 244, 350);
	m_wndSave.Create(this, _T("&Save"), 249, 328, 319, 350);
	m_wndCancel.Create(this, _T("&Cancel"), 324, 328, 394, 350);
	m_wndClose.Create(this, _T("&Close"), 399, 328, 469, 350);

}
void CHMSPCDescGroupSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndPrintName.SetLimitText(35);
	m_wndPrintName.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);
	m_wndList.InsertColumn(2, _T("Active"), CFMT_TEXT, 70);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);
	m_hms_pcdescgroupTbl.SetTableName(_T("hms_pcdescgroup"));
	m_hms_pcdescgroupTbl.AddField(_T("hpdg_id"), dfText, 15); 
	m_hms_pcdescgroupTbl.AddField(_T("hpdg_name"), dfText, 81); 
	m_hms_pcdescgroupTbl.AddField(_T("hpdg_active"), dfText, 1); 

}
void CHMSPCDescGroupSetup::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndPrintName.SetEvent(WE_CHANGE, _OnPrintNameChangeFnc);
	//m_wndPrintName.SetEvent(WE_SETFOCUS, _OnPrintNameSetfocusFnc);
	//m_wndPrintName.SetEvent(WE_KILLFOCUS, _OnPrintNameKillfocusFnc);
	m_wndPrintName.SetEvent(WE_CHECKVALUE, _OnPrintNameCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSPCDescGroupSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndPrintName.GetDlgCtrlID(), m_szPrintName);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSPCDescGroupSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hpdg_id"), m_szID);
	rs.GetValue(_T("hpdg_name"), m_szName);
	rs.GetValue(_T("hpdg_active"), m_bActive);

}
void CHMSPCDescGroupSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pcdescgroupTbl.SetValue(_T("hpdg_id"), m_szID);
	m_hms_pcdescgroupTbl.SetValue(_T("hpdg_name"), m_szName);
	m_hms_pcdescgroupTbl.SetValue(_T("hpdg_active"), m_bActive);

}
void CHMSPCDescGroupSetup::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szPrintName.Empty();
	m_szName.Empty();
	m_szID.Empty();
	m_bActive=FALSE;

}
int CHMSPCDescGroupSetup::SetMode(int nMode){ 
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
void CHMSPCDescGroupSetup::OnListDblClick(){
	
} 
void CHMSPCDescGroupSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPCDescGroupSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPCDescGroupSetup::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
			rs.GetValue(_T("Active")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPCDescGroupSetup::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescGroupSetup::OnTypeSelendok(){
	 
}
/*void CHMSPCDescGroupSetup::OnTypeSetfocus(){
	
}*/
/*void CHMSPCDescGroupSetup::OnTypeKillfocus(){
	
}*/
long CHMSPCDescGroupSetup::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPCDescGroupSetup::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSPCDescGroupSetup::OnPrintNameChange(){
	
} */
/*void CHMSPCDescGroupSetup::OnPrintNameSetfocus(){
	
} */
/*void CHMSPCDescGroupSetup::OnPrintNameKillfocus(){
	
} */
int CHMSPCDescGroupSetup::OnPrintNameCheckValue(){
	return 0;
} 
/*void CHMSPCDescGroupSetup::OnNameChange(){
	
} */
/*void CHMSPCDescGroupSetup::OnNameSetfocus(){
	
} */
/*void CHMSPCDescGroupSetup::OnNameKillfocus(){
	
} */
int CHMSPCDescGroupSetup::OnNameCheckValue(){
	return 0;
} 
/*void CHMSPCDescGroupSetup::OnIDChange(){
	
} */
/*void CHMSPCDescGroupSetup::OnIDSetfocus(){
	
} */
/*void CHMSPCDescGroupSetup::OnIDKillfocus(){
	
} */
int CHMSPCDescGroupSetup::OnIDCheckValue(){
	return 0;
} 
	void CHMSPCDescGroupSetup::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSPCDescGroupSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescGroupSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescGroupSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescGroupSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescGroupSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPCDescGroupSetup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPCDescGroupSetup::OnAddHMSPCDescGroupSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSPCDescGroupSetup"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSPCDescGroupSetup::OnEditHMSPCDescGroupSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSPCDescGroupSetup"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSPCDescGroupSetup::OnDeleteHMSPCDescGroupSetup(){
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
 		OnCancelHMSPCDescGroupSetup(); 
 	}
return 0;
 } 
int CHMSPCDescGroupSetup::OnSaveHMSPCDescGroupSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_hms_pcdescgroupTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_pcdescgroupTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSPCDescGroupSetupListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSPCDescGroupSetup::OnCancelHMSPCDescGroupSetup(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSPCDescGroupSetup::OnHMSPCDescGroupSetupListLoadData(){
	return 0;
}
