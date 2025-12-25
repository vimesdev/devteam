#include "HMSClinicZoneDialog.h"
#include "MainFrm.h"
static void _OnZoneSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSClinicZoneDialog* )pWnd)->OnZoneSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnZoneSelendokFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnZoneSelendok();
}
/*static void _OnZoneSetfocusFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnZoneKillfocus();
}*/
/*static void _OnZoneKillfocusFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnZoneKillfocus();
}*/
static long _OnZoneLoadDataFnc(CWnd *pWnd){
	return ((CHMSClinicZoneDialog *)pWnd)->OnZoneLoadData();
}
/*static void _OnZoneAddNewFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnZoneAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSClinicZoneDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSClinicZoneDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSClinicZoneDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSClinicZoneDialog *pVw = (CHMSClinicZoneDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSClinicZoneDialog *pVw = (CHMSClinicZoneDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSClinicZoneDialogFnc(CWnd *pWnd){
	 return ((CHMSClinicZoneDialog*)pWnd)->OnAddHMSClinicZoneDialog();
} 
static int _OnEditHMSClinicZoneDialogFnc(CWnd *pWnd){
	 return ((CHMSClinicZoneDialog*)pWnd)->OnEditHMSClinicZoneDialog();
} 
static int _OnDeleteHMSClinicZoneDialogFnc(CWnd *pWnd){
	 return ((CHMSClinicZoneDialog*)pWnd)->OnDeleteHMSClinicZoneDialog();
} 
static int _OnSaveHMSClinicZoneDialogFnc(CWnd *pWnd){
	 return ((CHMSClinicZoneDialog*)pWnd)->OnSaveHMSClinicZoneDialog();
} 
static int _OnCancelHMSClinicZoneDialogFnc(CWnd *pWnd){
	 return ((CHMSClinicZoneDialog*)pWnd)->OnCancelHMSClinicZoneDialog();
} 
CHMSClinicZoneDialog::CHMSClinicZoneDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSClinicZoneDialog::~CHMSClinicZoneDialog(){
}
void CHMSClinicZoneDialog::OnCreateComponents(){
	m_wndWorkingZone.Create(this, _T("Working zone"), 5, 6, 300, 91);
	m_wndZoneLabel.Create(this, _T("Zone"), 10, 31, 90, 56);
	m_wndZone.Create(this,95, 31, 295, 56); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 61, 90, 86);
	m_wndRoom.Create(this,95, 61, 295, 86); 
	m_wndOK.Create(this, _T("&OK"), 134, 96, 214, 121);
	m_wndCancel.Create(this, _T("&Cancel"), 219, 96, 299, 121);

}
void CHMSClinicZoneDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndZone.SetCheckValue(true);
	m_wndZone.LimitText(35);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndZone.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndZone.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSClinicZoneDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndZone.SetEvent(WE_SELENDOK, _OnZoneSelendokFnc);
	//m_wndZone.SetEvent(WE_SETFOCUS, _OnZoneSetfocusFnc);
	//m_wndZone.SetEvent(WE_KILLFOCUS, _OnZoneKillfocusFnc);
	m_wndZone.SetEvent(WE_SELCHANGE, _OnZoneSelectChangeFnc);
	m_wndZone.SetEvent(WE_LOADDATA, _OnZoneLoadDataFnc);
	//m_wndZone.SetEvent(WE_ADDNEW, _OnZoneAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CHMSClinicZoneDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndZone.GetDlgCtrlID(), m_szZoneKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CHMSClinicZoneDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSClinicZoneDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSClinicZoneDialog::SetDefaultValues(){

	m_szZoneKey.Empty();
	m_szRoomKey.Empty();

}
int CHMSClinicZoneDialog::SetMode(int nMode){
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
void CHMSClinicZoneDialog::OnZoneSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSClinicZoneDialog::OnZoneSelendok(){
	 
}
/*void CHMSClinicZoneDialog::OnZoneSetfocus(){
	
}*/
/*void CHMSClinicZoneDialog::OnZoneKillfocus(){
	
}*/
long CHMSClinicZoneDialog::OnZoneLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndZone.IsSearchKey() && !m_szZoneKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szZoneKey
};
	m_wndZone.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndZone.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSClinicZoneDialog::OnZoneAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSClinicZoneDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSClinicZoneDialog::OnRoomSelendok(){
	 
}
/*void CHMSClinicZoneDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSClinicZoneDialog::OnRoomKillfocus(){
	
}*/
long CHMSClinicZoneDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szRoomKey
};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSClinicZoneDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSClinicZoneDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSClinicZoneDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSClinicZoneDialog::OnAddHMSClinicZoneDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSClinicZoneDialog::OnEditHMSClinicZoneDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSClinicZoneDialog::OnDeleteHMSClinicZoneDialog(){
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
 		OnCancelHMSClinicZoneDialog();
 	}
	return 0;
}
int CHMSClinicZoneDialog::OnSaveHMSClinicZoneDialog(){
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
 		//OnHMSClinicZoneDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSClinicZoneDialog::OnCancelHMSClinicZoneDialog(){
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
int CHMSClinicZoneDialog::OnHMSClinicZoneDialogListLoadData(){
	return 0;
}
