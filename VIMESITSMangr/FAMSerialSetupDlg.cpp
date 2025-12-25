#include "FAMSerialSetupDlg.h"
#include "MainFrm.h"
static long _OnSerialGroupListLoadDataFnc(CWnd *pWnd){
	return ((CFAMSerialSetupDlg*)pWnd)->OnSerialGroupListLoadData();
} 
static void _OnSerialGroupListDblClickFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg*)pWnd)->OnSerialGroupListDblClick();
} 
static void _OnSerialGroupListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMSerialSetupDlg*)pWnd)->OnSerialGroupListSelectChange(nOldItem, nNewItem);
} 
static int _OnSerialGroupListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMSerialSetupDlg*)pWnd)->OnSerialGroupListDeleteItem();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMSerialSetupDlg *)pWnd)->OnNameCheckValue();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CFAMSerialSetupDlg *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CFAMSerialSetupDlg *)pWnd)->OnIDCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CFAMSerialSetupDlg *pVw = (CFAMSerialSetupDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CFAMSerialSetupDlg *pVw = (CFAMSerialSetupDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CFAMSerialSetupDlg *pVw = (CFAMSerialSetupDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMSerialSetupDlg *pVw = (CFAMSerialSetupDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMSerialSetupDlg *pVw = (CFAMSerialSetupDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMSerialSetupDlg *pVw = (CFAMSerialSetupDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMSerialSetupDlgFnc(CWnd *pWnd){
	 return ((CFAMSerialSetupDlg*)pWnd)->OnAddFAMSerialSetupDlg();
} 
static int _OnEditFAMSerialSetupDlgFnc(CWnd *pWnd){
	 return ((CFAMSerialSetupDlg*)pWnd)->OnEditFAMSerialSetupDlg();
} 
static int _OnDeleteFAMSerialSetupDlgFnc(CWnd *pWnd){
	 return ((CFAMSerialSetupDlg*)pWnd)->OnDeleteFAMSerialSetupDlg();
} 
static int _OnSaveFAMSerialSetupDlgFnc(CWnd *pWnd){
	 return ((CFAMSerialSetupDlg*)pWnd)->OnSaveFAMSerialSetupDlg();
} 
static int _OnCancelFAMSerialSetupDlgFnc(CWnd *pWnd){
	 return ((CFAMSerialSetupDlg*)pWnd)->OnCancelFAMSerialSetupDlg();
} 
CFAMSerialSetupDlg::CFAMSerialSetupDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 365;
	m_nDlgHeight = 285;
	SetDefaultValues();
}
CFAMSerialSetupDlg::~CFAMSerialSetupDlg(){
}
void CFAMSerialSetupDlg::OnCreateComponents(){
	m_wndSerialGroupList.Create(this,5, 5, 355, 185); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 190, 85, 215);
	m_wndID.Create(this,90, 190, 175, 215); 
	m_wndNameLabel.Create(this, _T("Name"), 180, 190, 260, 215);
	m_wndName.Create(this,265, 190, 355, 215); 
	m_wndAdd.Create(this, _T("Add"), 105, 220, 185, 245);
	m_wndEdit.Create(this, _T("Edit"), 190, 220, 270, 245);
	m_wndDelete.Create(this, _T("Delete"), 275, 220, 355, 245);
	m_wndSave.Create(this, _T("Save"), 105, 250, 185, 275);
	m_wndCancel.Create(this, _T("Cancel"), 190, 250, 270, 275);
	m_wndClose.Create(this, _T("Close"), 275, 250, 355, 275);

}
void CFAMSerialSetupDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	
	m_wndSerialGroupList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndSerialGroupList.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	

}
void CFAMSerialSetupDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSerialGroupList.SetEvent(WE_SELCHANGE, _OnSerialGroupListSelectChangeFnc);
	m_wndSerialGroupList.SetEvent(WE_LOADDATA, _OnSerialGroupListLoadDataFnc);
	m_wndSerialGroupList.SetEvent(WE_DBLCLICK, _OnSerialGroupListDblClickFnc);
	m_wndSerialGroupList.AddEvent(1, _T("Delete"), _OnSerialGroupListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnSerialGroupListLoadData();
	SetMode(VM_NONE);


}
void CFAMSerialSetupDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);

}
void CFAMSerialSetupDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code as sscode, ss_desc as ssdesc FROM sys_sel WHERE ss_id = 'fam_serigroup' AND ss_code = '%s'"), m_szID); 
	int ret = rs.ExecSQL(szSQL);
	if(ret > 0)
	{
		m_szID = rs.GetValue(_T("sscode"));
		m_szName = rs.GetValue(_T("ssdesc"));
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CFAMSerialSetupDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMSerialSetupDlg::SetDefaultValues(){

	m_szName.Empty();
	m_szID.Empty();

}
int CFAMSerialSetupDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, 5, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, 5, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 5, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CFAMSerialSetupDlg::OnSerialGroupListDblClick(){
	
} 
void CFAMSerialSetupDlg::OnSerialGroupListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szID = m_wndSerialGroupList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CFAMSerialSetupDlg::OnSerialGroupListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CFAMSerialSetupDlg::OnSerialGroupListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSerialGroupList.BeginLoad(); 
	szSQL.Format(_T("SELECT ss_code as ssid, ss_desc as ssname FROM sys_sel WHERE ss_id = 'fam_serigroup'"));
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSerialGroupList.AddItems(
			rs.GetValue(_T("ssid")),
			rs.GetValue(_T("ssname")),
			NULL
			);
		rs.MoveNext();
	}
	m_wndSerialGroupList.EndLoad(); 
	return nCount;
}
/*void CFAMSerialSetupDlg::OnNameChange(){
	
} */
/*void CFAMSerialSetupDlg::OnNameSetfocus(){
	
} */
/*void CFAMSerialSetupDlg::OnNameKillfocus(){
	
} */
int CFAMSerialSetupDlg::OnNameCheckValue(){
	return 0;
} 
/*void CFAMSerialSetupDlg::OnIDChange(){
	
} */
/*void CFAMSerialSetupDlg::OnIDSetfocus(){
	
} */
/*void CFAMSerialSetupDlg::OnIDKillfocus(){
	
} */
int CFAMSerialSetupDlg::OnIDCheckValue(){
	return 0;
} 
void CFAMSerialSetupDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//OnAddFAMSerialSetupDlg();
	CRecord rs(&pMF->m_db);
	CString szSQL, rsul;
	szSQL.Format(_T("select fa_assetno, ") \
				_T(" LISTAGG(faas_serial, ',') WITHIN GROUP (ORDER BY faas_serial) as serial ") \
				_T(" from fam_asset ") \
				_T(" left join fam_assetserial ON(faas_id = fa_serigroup) ") \
				_T(" where fa_serigroup is not null ") \
				_T(" group by fa_assetno "));
	rs.ExecSQL(szSQL);
	MessageBox(szSQL);
	rsul = rs.GetValue(_T("serial"));
	MessageBox(rsul);
} 
void CFAMSerialSetupDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditFAMSerialSetupDlg();
} 
void CFAMSerialSetupDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteFAMSerialSetupDlg();
} 
void CFAMSerialSetupDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMSerialSetupDlg();
} 
void CFAMSerialSetupDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMSerialSetupDlg();
} 
void CFAMSerialSetupDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMSerialSetupDlg::OnAddFAMSerialSetupDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMSerialSetupDlg::OnEditFAMSerialSetupDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMSerialSetupDlg::OnDeleteFAMSerialSetupDlg(){
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
 		OnCancelFAMSerialSetupDlg();
 	}
	return 0;
}
int CFAMSerialSetupDlg::OnSaveFAMSerialSetupDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
		szSQL.Format(_T("INSERT INTO sys_sel VALUES('fam_serigroup','%s','%s','','','')"), m_szID, m_szName);
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
		szSQL.Format(_T("UPDATE sys_sel SET ss_desc = '%s' WHERE ss_id = 'fam_serigroup' AND ss_code = '%s'"), m_szName, m_szID);
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnSerialGroupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMSerialSetupDlg::OnCancelFAMSerialSetupDlg(){
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
int CFAMSerialSetupDlg::OnFAMSerialSetupDlgListLoadData(){
	return 0;
}
