#include "IVFLabPhieuRaLinePopup.h"
#include "MainFrm.h"
#include "IVFLabPhieuRaDialog_V2.h"
static void _OnApplySelectFnc(CWnd *pWnd){
	CIVFLabPhieuRaLinePopup *pVw = (CIVFLabPhieuRaLinePopup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFLabPhieuRaLinePopup *pVw = (CIVFLabPhieuRaLinePopup *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CIVFLabPhieuRaLinePopup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabPhieuRaLinePopup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnListDeleteItem();
} 
static int _OnAddIVFLabPhieuRaLinePopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnAddIVFLabPhieuRaLinePopup();
} 
static int _OnEditIVFLabPhieuRaLinePopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnEditIVFLabPhieuRaLinePopup();
} 
static int _OnDeleteIVFLabPhieuRaLinePopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnDeleteIVFLabPhieuRaLinePopup();
} 
static int _OnSaveIVFLabPhieuRaLinePopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnSaveIVFLabPhieuRaLinePopup();
} 
static int _OnCancelIVFLabPhieuRaLinePopupFnc(CWnd *pWnd){
	 return ((CIVFLabPhieuRaLinePopup*)pWnd)->OnCancelIVFLabPhieuRaLinePopup();
} 
CIVFLabPhieuRaLinePopup::CIVFLabPhieuRaLinePopup(CWnd* pParent)
:CGuiDialog(pParent){
	m_nDlgWidth = 535;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CIVFLabPhieuRaLinePopup::~CIVFLabPhieuRaLinePopup(){
}
void CIVFLabPhieuRaLinePopup::OnCreateComponents(){
	m_wndApply.Create(this, _T("&Apply"), 360, 170, 440, 195);
	m_wndClose.Create(this, _T("&Close"), 445, 170, 525, 195);
	m_wndList.Create(this,5, 5, 525, 165); 
	m_wndList.SetCheckBox();
}
void CIVFLabPhieuRaLinePopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T(""), CFMT_NUMBER, 20);//storage_top_id
	m_wndList.InsertColumn(1, _T("STT"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("gia"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("nhan_cassette"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(4, _T("mau_cassette"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("nhan_top"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("mau_top"), CFMT_TEXT, 80);

}
void CIVFLabPhieuRaLinePopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	OnListLoadData();
	EnableControls();
	EnableButtons(FALSE, -1);
}
void CIVFLabPhieuRaLinePopup::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFLabPhieuRaLinePopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFLabPhieuRaLinePopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFLabPhieuRaLinePopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFLabPhieuRaLinePopup::SetDefaultValues(){


}
int CIVFLabPhieuRaLinePopup::SetMode(int nMode){
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
void CIVFLabPhieuRaLinePopup::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szStorageTopIDs;
	szStorageTopIDs.Empty();
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i) == FALSE)
		{
			continue;
		}
		if (!szStorageTopIDs.IsEmpty())
		{
			szStorageTopIDs += _T(",");
		}
		szStorageTopIDs.AppendFormat(_T("%s"), m_wndList.GetItemText(i, 0));
	}
	//szSQL.Format(_T("IVF_PHIEU_RA_LINE_CREATE(%ld, '%s', '%s')"), m_nOrderID, pMF->GetCurrentUser(), szStorageTopIDs);
	szSQL.Format(_T("IVF_PHIEU_RA_CREATELINE(%ld, '%s')"), m_nOrderID, szStorageTopIDs);
	int nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet >= 0)
	{
		((CIVFLabPhieuRaDialog_V2*) m_pParentWnd)->OnListLoadData();
		CGuiDialog::OnOK();
	}
} 
void CIVFLabPhieuRaLinePopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
void CIVFLabPhieuRaLinePopup::OnListDblClick(){
	
} 
void CIVFLabPhieuRaLinePopup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabPhieuRaLinePopup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFLabPhieuRaLinePopup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1, nItem = 0;
	szSQL.Format(_T("SELECT ivf_storage_top_id AS storage_top_id,") \
	_T("       NVL(Ivf_get_sel('ivf_nhan_cassette', nhan_cassette), nhan_cassette) AS nhan_cassette,") \
	_T("       Ivf_get_setting_desc('ivf_storage_mautop', mau_cassette) AS mau_cassette,") \
	_T("       NVL(Ivf_get_sel('ivf_nhan_top', nhan_top), nhan_top) AS nhan_top,") \
	_T("       Ivf_get_setting_desc('ivf_storage_mautop', mau) AS mau, ") \
	_T("	   coalesce(sophieu_ra, ID_PHIEU_RA, 0) as id_phieu_ra,") \
	_T("       Ivf_get_setting_desc('ivf_storage_gia', id_giatru) AS gia") \
	_T(" FROM   ivf_storage_top") \
	_T(" LEFT JOIN ivf_phieu_ra_line ON (ivf_storage_top_id = ID_STORAGE_TOP)") \
	_T(" WHERE  docno = %ld AND id_thungtru = '%s' AND (status = 'O' OR sophieu_ra = %ld) ")
	,	m_nDocNo, m_szThungKey, m_nOrderID);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nItem = m_wndList.AddItems(
			rs.GetValue(_T("storage_top_id")), 
			int2str(nIdx++),
			rs.GetValue(_T("gia")), 
			rs.GetValue(_T("nhan_cassette")), 
			rs.GetValue(_T("mau_cassette")), 
			rs.GetValue(_T("nhan_top")), 
			rs.GetValue(_T("mau_top")), NULL);
		if (str2long(rs.GetValue(_T("id_phieu_ra"))) == m_nOrderID)
		{
			m_wndList.SetCheck(nItem);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CIVFLabPhieuRaLinePopup::OnAddIVFLabPhieuRaLinePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabPhieuRaLinePopup::OnEditIVFLabPhieuRaLinePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabPhieuRaLinePopup::OnDeleteIVFLabPhieuRaLinePopup(){
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
 		OnCancelIVFLabPhieuRaLinePopup();
 	}
	return 0;
}
int CIVFLabPhieuRaLinePopup::OnSaveIVFLabPhieuRaLinePopup(){
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
 		//OnIVFLabPhieuRaLinePopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabPhieuRaLinePopup::OnCancelIVFLabPhieuRaLinePopup(){
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
int CIVFLabPhieuRaLinePopup::OnIVFLabPhieuRaLinePopupListLoadData(){
	return 0;
}
