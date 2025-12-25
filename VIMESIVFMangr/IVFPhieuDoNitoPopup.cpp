#include "IVFPhieuDoNitoPopup.h"
#include "MainFrm.h"
static void _OnThungSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFPhieuDoNitoPopup* )pWnd)->OnThungSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThungSelendokFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoPopup *)pWnd)->OnThungSelendok();
}
/*static void _OnThungSetfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoPopup *)pWnd)->OnThungKillfocus();
}*/
/*static void _OnThungKillfocusFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoPopup *)pWnd)->OnThungKillfocus();
}*/
static long _OnThungLoadDataFnc(CWnd *pWnd){
	return ((CIVFPhieuDoNitoPopup *)pWnd)->OnThungLoadData();
}
/*static void _OnThungAddNewFnc(CWnd *pWnd){
	((CIVFPhieuDoNitoPopup *)pWnd)->OnThungAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFPhieuDoNitoPopup *pVw = (CIVFPhieuDoNitoPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFPhieuDoNitoPopup *pVw = (CIVFPhieuDoNitoPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFPhieuDoNitoPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoPopup*)pWnd)->OnAddIVFPhieuDoNitoPopup();
} 
static int _OnEditIVFPhieuDoNitoPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoPopup*)pWnd)->OnEditIVFPhieuDoNitoPopup();
} 
static int _OnDeleteIVFPhieuDoNitoPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoPopup*)pWnd)->OnDeleteIVFPhieuDoNitoPopup();
} 
static int _OnSaveIVFPhieuDoNitoPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoPopup*)pWnd)->OnSaveIVFPhieuDoNitoPopup();
} 
static int _OnCancelIVFPhieuDoNitoPopupFnc(CWnd *pWnd){
	 return ((CIVFPhieuDoNitoPopup*)pWnd)->OnCancelIVFPhieuDoNitoPopup();
} 
CIVFPhieuDoNitoPopup::CIVFPhieuDoNitoPopup(CWnd *pParent, long nID):
	CGuiPopup(pParent){
	m_nID = nID;
	m_nDlgWidth = 485;
	m_nDlgHeight = 35;
	SetDefaultValues();
}
CIVFPhieuDoNitoPopup::~CIVFPhieuDoNitoPopup(){
}
void CIVFPhieuDoNitoPopup::OnCreateComponents(){
	m_wndThungLabel.Create(this, _T("thung"), 5, 5, 85, 30);
	m_wndThung.Create(this,90, 5, 420, 30); 
	m_wndSave.Create(this, _T("&Save"), 425, 5, 450, 30);
	m_wndClose.Create(this, _T("&Close"), 455, 5, 480, 30);

}
void CIVFPhieuDoNitoPopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThung.SetCheckValue(true);
	m_wndThung.LimitText(35);


	m_wndThung.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThung.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFPhieuDoNitoPopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndThung.SetEvent(WE_SELENDOK, _OnThungSelendokFnc);
	//m_wndThung.SetEvent(WE_SETFOCUS, _OnThungSetfocusFnc);
	//m_wndThung.SetEvent(WE_KILLFOCUS, _OnThungKillfocusFnc);
	m_wndThung.SetEvent(WE_SELCHANGE, _OnThungSelectChangeFnc);
	m_wndThung.SetEvent(WE_LOADDATA, _OnThungLoadDataFnc);
	//m_wndThung.SetEvent(WE_ADDNEW, _OnThungAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CIVFPhieuDoNitoPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndThung.GetDlgCtrlID(), m_szThungKey);

}
void CIVFPhieuDoNitoPopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Thung")] =  m_szThungKey;
	}
	else
	{
			
	m_jData[_T("Thung")].GetValue(m_szThungKey);
	}

}
void CIVFPhieuDoNitoPopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFPhieuDoNitoPopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFPhieuDoNitoPopup::SetDefaultValues(){

	m_szThungKey.Empty();

}
int CIVFPhieuDoNitoPopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
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
void CIVFPhieuDoNitoPopup::OnThungSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuDoNitoPopup::OnThungSelendok(){
	 
}
/*void CIVFPhieuDoNitoPopup::OnThungSetfocus(){
	
}*/
/*void CIVFPhieuDoNitoPopup::OnThungKillfocus(){
	
}*/
long CIVFPhieuDoNitoPopup::OnThungLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThung.IsSearchKey() && !m_szThungKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szThungKey
};
	m_wndThung.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThung.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CIVFPhieuDoNitoPopup::OnThungAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CIVFPhieuDoNitoPopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CIVFPhieuDoNitoPopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFPhieuDoNitoPopup::OnAddIVFPhieuDoNitoPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFPhieuDoNitoPopup::OnEditIVFPhieuDoNitoPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFPhieuDoNitoPopup::OnDeleteIVFPhieuDoNitoPopup(){
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
 		OnCancelIVFPhieuDoNitoPopup();
 	}
	return 0;
}
int CIVFPhieuDoNitoPopup::OnSaveIVFPhieuDoNitoPopup(){
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
 		//OnIVFPhieuDoNitoPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFPhieuDoNitoPopup::OnCancelIVFPhieuDoNitoPopup(){
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
int CIVFPhieuDoNitoPopup::OnIVFPhieuDoNitoPopupListLoadData(){
	return 0;
}
