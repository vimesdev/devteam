#include "ARReportOptionDlg.h"
#include "MainFrm.h"
static void _OnReportNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CARReportOptionDlg* )pWnd)->OnReportNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportNameSelendokFnc(CWnd *pWnd){
	((CARReportOptionDlg *)pWnd)->OnReportNameSelendok();
}
/*static void _OnReportNameSetfocusFnc(CWnd *pWnd){
	((CARReportOptionDlg *)pWnd)->OnReportNameKillfocus();
}*/
/*static void _OnReportNameKillfocusFnc(CWnd *pWnd){
	((CARReportOptionDlg *)pWnd)->OnReportNameKillfocus();
}*/
static long _OnReportNameLoadDataFnc(CWnd *pWnd){
	return ((CARReportOptionDlg *)pWnd)->OnReportNameLoadData();
}
/*static void _OnReportNameAddNewFnc(CWnd *pWnd){
	((CARReportOptionDlg *)pWnd)->OnReportNameAddNew();
}*/
static void _OnApplySelectFnc(CWnd *pWnd){
	CARReportOptionDlg *pVw = (CARReportOptionDlg *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CARReportOptionDlg *pVw = (CARReportOptionDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddARReportOptionDlgFnc(CWnd *pWnd){
	 return ((CARReportOptionDlg*)pWnd)->OnAddARReportOptionDlg();
} 
static int _OnEditARReportOptionDlgFnc(CWnd *pWnd){
	 return ((CARReportOptionDlg*)pWnd)->OnEditARReportOptionDlg();
} 
static int _OnDeleteARReportOptionDlgFnc(CWnd *pWnd){
	 return ((CARReportOptionDlg*)pWnd)->OnDeleteARReportOptionDlg();
} 
static int _OnSaveARReportOptionDlgFnc(CWnd *pWnd){
	 return ((CARReportOptionDlg*)pWnd)->OnSaveARReportOptionDlg();
} 
static int _OnCancelARReportOptionDlgFnc(CWnd *pWnd){
	 return ((CARReportOptionDlg*)pWnd)->OnCancelARReportOptionDlg();
} 
CARReportOptionDlg::CARReportOptionDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 530;
	m_nDlgHeight = 100;
	SetDefaultValues();
}
CARReportOptionDlg::~CARReportOptionDlg(){
}
void CARReportOptionDlg::OnCreateComponents(){
	m_wndReportOption.Create(this, _T("Report Option"), 5, 5, 520, 90);
	m_wndReportNameLabel.Create(this, _T("Report Name"), 10, 30, 110, 55);
	m_wndReportName.Create(this,115, 30, 515, 55); 
	m_wndApply.Create(this, _T("&Apply"), 360, 60, 435, 85);
	m_wndClose.Create(this, _T("&Close"), 440, 60, 515, 85);

}

void CARReportOptionDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndReportName.SetCheckValue(true);
	m_wndReportName.LimitText(35);

	m_wndReportName.InsertColumn(0, _T("ID"), CFMT_TEXT, 200);
	m_wndReportName.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

}
void CARReportOptionDlg::OnSetWindowEvents(){
	m_wndReportName.SetEvent(WE_SELENDOK, _OnReportNameSelendokFnc);
	//m_wndReportName.SetEvent(WE_SETFOCUS, _OnReportNameSetfocusFnc);
	//m_wndReportName.SetEvent(WE_KILLFOCUS, _OnReportNameKillfocusFnc);
	m_wndReportName.SetEvent(WE_SELCHANGE, _OnReportNameSelectChangeFnc);
	m_wndReportName.SetEvent(WE_LOADDATA, _OnReportNameLoadDataFnc);
	//m_wndReportName.SetEvent(WE_ADDNEW, _OnReportNameAddNewFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CARReportOptionDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReportName.GetDlgCtrlID(), m_szReportNameKey);

}
void CARReportOptionDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CARReportOptionDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CARReportOptionDlg::SetDefaultValues(){

	m_szReportNameKey.Empty();

}
int CARReportOptionDlg::SetMode(int nMode){
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
void CARReportOptionDlg::OnReportNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} 
void CARReportOptionDlg::OnReportNameSelendok(){
	 
}
/*void CARReportOptionDlg::OnReportNameSetfocus(){
	
}*/
/*void CARReportOptionDlg::OnReportNameKillfocus(){
	
}*/
long CARReportOptionDlg::OnReportNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportName.IsSearchKey() && !m_szReportNameKey.IsEmpty()){
		szWhere.Format(_T(" AND hafc_reportname = '%s'"), m_szReportNameKey);
	};
	szSQL.Format(_T("SELECT hafc_reportname as id,hafc_desc as description FROM hms_admissionfile_config WHERE hafc_deptid = '%s' %s"), m_szDeptID, szWhere);
	m_wndReportName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportName.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("description")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CARReportOptionDlg::OnReportNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CARReportOptionDlg::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	if (!m_szReportNameKey.IsEmpty())
		pMF->m_wndAdmissionRegistration.m_szReportName = m_szReportNameKey;
	CGuiDialog::OnOK();
} 
void CARReportOptionDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CARReportOptionDlg::OnAddARReportOptionDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CARReportOptionDlg::OnEditARReportOptionDlg(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CARReportOptionDlg::OnDeleteARReportOptionDlg(){
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
 		OnCancelARReportOptionDlg(); 
 	}
	return 0;
}
int CARReportOptionDlg::OnSaveARReportOptionDlg(){
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
 		//OnARReportOptionDlgListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CARReportOptionDlg::OnCancelARReportOptionDlg(){
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
int CARReportOptionDlg::OnARReportOptionDlgListLoadData(){
	return 0;
}
