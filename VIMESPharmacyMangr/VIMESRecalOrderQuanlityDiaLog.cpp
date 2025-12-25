#include "VIMESRecalOrderQuanlityDiaLog.h"
#include "MainFrm.h"
/*static void _OnRecalDateChangeFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnRecalDateChange();
} */
/*static void _OnRecalDateSetfocusFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnRecalDateSetfocus();} */ 
/*static void _OnRecalDateKillfocusFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnRecalDateKillfocus();
} */
static int _OnRecalDateCheckValueFnc(CWnd *pWnd){
	return ((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnRecalDateCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CVIMESRecalOrderQuanlityDiaLog *pVw = (CVIMESRecalOrderQuanlityDiaLog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESRecalOrderQuanlityDiaLog *pVw = (CVIMESRecalOrderQuanlityDiaLog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CVIMESRecalOrderQuanlityDiaLog* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CVIMESRecalOrderQuanlityDiaLog *)pWnd)->OnStorageAddNew();
}*/
static int _OnAddVIMESRecalOrderQuanlityDiaLogFnc(CWnd *pWnd){
	 return ((CVIMESRecalOrderQuanlityDiaLog*)pWnd)->OnAddVIMESRecalOrderQuanlityDiaLog();
} 
static int _OnEditVIMESRecalOrderQuanlityDiaLogFnc(CWnd *pWnd){
	 return ((CVIMESRecalOrderQuanlityDiaLog*)pWnd)->OnEditVIMESRecalOrderQuanlityDiaLog();
} 
static int _OnDeleteVIMESRecalOrderQuanlityDiaLogFnc(CWnd *pWnd){
	 return ((CVIMESRecalOrderQuanlityDiaLog*)pWnd)->OnDeleteVIMESRecalOrderQuanlityDiaLog();
} 
static int _OnSaveVIMESRecalOrderQuanlityDiaLogFnc(CWnd *pWnd){
	 return ((CVIMESRecalOrderQuanlityDiaLog*)pWnd)->OnSaveVIMESRecalOrderQuanlityDiaLog();
} 
static int _OnCancelVIMESRecalOrderQuanlityDiaLogFnc(CWnd *pWnd){
	 return ((CVIMESRecalOrderQuanlityDiaLog*)pWnd)->OnCancelVIMESRecalOrderQuanlityDiaLog();
} 
CVIMESRecalOrderQuanlityDiaLog::CVIMESRecalOrderQuanlityDiaLog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 395;
	m_nDlgHeight = 145;
	SetDefaultValues();
}
CVIMESRecalOrderQuanlityDiaLog::~CVIMESRecalOrderQuanlityDiaLog(){
}
void CVIMESRecalOrderQuanlityDiaLog::OnCreateComponents(){
	m_wndGroupRecalQty.Create(this, _T("Information Recal Order Quanlity"), 5, 5, 385, 90);
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 30, 130, 55);
	m_wndStorage.Create(this,135, 30, 380, 55); 
	m_wndRecalDateLabel.Create(this, _T("Recal Date"), 10, 60, 130, 85);
	m_wndRecalDate.Create(this,135, 60, 250, 85); 
	m_wndNumberLabel.Create(this,_T("Number Date"), 260, 60, 350, 85);
	m_wndNumber.Create(this, 355, 60, 380, 85);
	m_wndApply.Create(this, _T("&Apply"), 220, 95, 300, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 305, 95, 385, 120);
}
void CVIMESRecalOrderQuanlityDiaLog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndRecalDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndRecalDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);
	m_wndNumber.SetReadOnly(true);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CVIMESRecalOrderQuanlityDiaLog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndRecalDate.SetEvent(WE_CHANGE, _OnRecalDateChangeFnc);
	//m_wndRecalDate.SetEvent(WE_SETFOCUS, _OnRecalDateSetfocusFnc);
	//m_wndRecalDate.SetEvent(WE_KILLFOCUS, _OnRecalDateKillfocusFnc);
	m_wndRecalDate.SetEvent(WE_CHECKVALUE, _OnRecalDateCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_szRecalDate = pMF->GetSysDateTime();
	SetMode(VM_EDIT);

}
void CVIMESRecalOrderQuanlityDiaLog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndRecalDate.GetDlgCtrlID(), m_szRecalDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);
	DDX_Text(pDX, m_wndNumber.GetDlgCtrlID(), m_nNumber);
}
void CVIMESRecalOrderQuanlityDiaLog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESRecalOrderQuanlityDiaLog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESRecalOrderQuanlityDiaLog::SetDefaultValues(){

	//m_szRecalDate.Empty();
	m_nNumber = 0;
	m_szStorageKey.Empty();

}
int CVIMESRecalOrderQuanlityDiaLog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndApply.EnableWindow(true);
		m_wndCancel.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CVIMESRecalOrderQuanlityDiaLog::OnRecalDateChange(){
	
} */
/*void CVIMESRecalOrderQuanlityDiaLog::OnRecalDateSetfocus(){
	
} */
/*void CVIMESRecalOrderQuanlityDiaLog::OnRecalDateKillfocus(){
	
} */
int CVIMESRecalOrderQuanlityDiaLog::OnRecalDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	m_nNumber = CompareDate(pMF->GetSysDate(), m_szRecalDate);
	if(m_nNumber <=0 )
		return -1;
	UpdateData(false);
	return 0;
} 
void CVIMESRecalOrderQuanlityDiaLog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsValidateData())
 		return ;

	CString szSQL, szMsg;
	szMsg.Format(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD h\x1EE7y \x62\x1ECF to\xE0n \x62\x1ED9 s\x1ED1 l\x1B0\x1EE3ng trong \x63\xE1\x63 \x111\x1A1n thu\x1ED1\x63 tr\x1EA1ng th\xE1i(O, S). Tr\x1EA3 l\x1EA1i s\x1ED1 l\x1B0\x1EE3ng or\x64\x65r v\x1EC1 kho!"));
	if(ShowMessageBox(szMsg, MB_YESNO|MB_DEFBUTTON1)== IDNO)
		return;

	szSQL.Format(_T("M_STORAGELINE_RESETORDER(%d, %d)"), ToInt(m_szStorageKey), m_nNumber);
	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0) 
 	{ 
		ShowMessageBox(_T("Tr\x1EA3 l\x1EA1i s\x1ED1 l\x1B0\x1EE3ng or\x64\x65r th\xE0nh \x63\xF4ng."), MB_OK);
 	} 
	
} 
void CVIMESRecalOrderQuanlityDiaLog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CVIMESRecalOrderQuanlityDiaLog::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESRecalOrderQuanlityDiaLog::OnStorageSelendok(){
	 
}
/*void CVIMESRecalOrderQuanlityDiaLog::OnStorageSetfocus(){
	
}*/
/*void CVIMESRecalOrderQuanlityDiaLog::OnStorageKillfocus(){
	
}*/
long CVIMESRecalOrderQuanlityDiaLog::OnStorageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and MSL_STORAGE_ID='%s' "), m_szStorageKey);
	}
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT MSL_STORAGE_ID as id, MSL_NAME as name FROM m_storagelist WHERE MSL_ORG_ID IN('%s') and msl_isactive='Y' %s ORDER BY id "), 
		pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CVIMESRecalOrderQuanlityDiaLog::OnStorageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
int CVIMESRecalOrderQuanlityDiaLog::OnAddVIMESRecalOrderQuanlityDiaLog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVIMESRecalOrderQuanlityDiaLog::OnEditVIMESRecalOrderQuanlityDiaLog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESRecalOrderQuanlityDiaLog::OnDeleteVIMESRecalOrderQuanlityDiaLog(){
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
 		OnCancelVIMESRecalOrderQuanlityDiaLog();
 	}
	return 0;
}
int CVIMESRecalOrderQuanlityDiaLog::OnSaveVIMESRecalOrderQuanlityDiaLog(){
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
 		//OnVIMESRecalOrderQuanlityDiaLogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVIMESRecalOrderQuanlityDiaLog::OnCancelVIMESRecalOrderQuanlityDiaLog(){
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
int CVIMESRecalOrderQuanlityDiaLog::OnVIMESRecalOrderQuanlityDiaLogListLoadData(){
	return 0;
}
