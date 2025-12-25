#include "HMSUpdatePacsGroupDialog.h"
#include "MainFrm.h"
/*static void _OnMucphiChangeFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnMucphiChange();
} */
/*static void _OnMucphiSetfocusFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnMucphiSetfocus();} */ 
/*static void _OnMucphiKillfocusFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnMucphiKillfocus();
} */
static int _OnMucphiCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdatePacsGroupDialog *)pWnd)->OnMucphiCheckValue();
} 
static void _OnPacsGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSUpdatePacsGroupDialog* )pWnd)->OnPacsGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPacsGroupSelendokFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnPacsGroupSelendok();
}
/*static void _OnPacsGroupSetfocusFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnPacsGroupKillfocus();
}*/
/*static void _OnPacsGroupKillfocusFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnPacsGroupKillfocus();
}*/
static long _OnPacsGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSUpdatePacsGroupDialog *)pWnd)->OnPacsGroupLoadData();
}
/*static void _OnPacsGroupAddNewFnc(CWnd *pWnd){
	((CHMSUpdatePacsGroupDialog *)pWnd)->OnPacsGroupAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSUpdatePacsGroupDialog *pVw = (CHMSUpdatePacsGroupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUpdatePacsGroupDialog *pVw = (CHMSUpdatePacsGroupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSUpdatePacsGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdatePacsGroupDialog*)pWnd)->OnAddCHMSUpdatePacsGroupDialog();
} 
static int _OnEditCHMSUpdatePacsGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdatePacsGroupDialog*)pWnd)->OnEditCHMSUpdatePacsGroupDialog();
} 
static int _OnDeleteCHMSUpdatePacsGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdatePacsGroupDialog*)pWnd)->OnDeleteCHMSUpdatePacsGroupDialog();
} 
static int _OnSaveCHMSUpdatePacsGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdatePacsGroupDialog*)pWnd)->OnSaveCHMSUpdatePacsGroupDialog();
} 
static int _OnCancelCHMSUpdatePacsGroupDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdatePacsGroupDialog*)pWnd)->OnCancelCHMSUpdatePacsGroupDialog();
} 
CHMSUpdatePacsGroupDialog::CHMSUpdatePacsGroupDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSUpdatePacsGroupDialog::~CHMSUpdatePacsGroupDialog()
{
}
void CHMSUpdatePacsGroupDialog::OnCreateComponents()
{
	m_wndDescGroupBox.Create(this, _T("Thông tin đề mục phí"), 5, 4, 559, 162);
	m_wndMucphiLabel.Create(this, _T("Đề mục phí"), 10, 29, 139, 125);
	m_wndMucphi.Create(this,151, 28, 554, 124, true, false, true); 
	m_wndPhannhomLabel.Create(this, _T("Phân nhóm PACS"), 10, 130, 139, 158);
	m_wndPacsGroup.Create(this,151, 130, 554, 158); 
	m_wndSave.Create(this, _T("Save"), 388, 168, 468, 193);
	m_wndCancel.Create(this, _T("Cancel"), 473, 168, 553, 193);
	m_wndMucphi.EnableWindow(false);
}
void CHMSUpdatePacsGroupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMucphi.SetLimitText(1024);
	m_wndMucphi.SetCheckValue(true);
	m_wndPacsGroup.SetCheckValue(true);
	m_wndPacsGroup.LimitText(1024);
	m_wndMucphi.SetMultiLine(TRUE);

	m_wndPacsGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndPacsGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
}
void CHMSUpdatePacsGroupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndMucphi.SetEvent(WE_CHANGE, _OnMucphiChangeFnc);
	//m_wndMucphi.SetEvent(WE_SETFOCUS, _OnMucphiSetfocusFnc);
	//m_wndMucphi.SetEvent(WE_KILLFOCUS, _OnMucphiKillfocusFnc);
	m_wndMucphi.SetEvent(WE_CHECKVALUE, _OnMucphiCheckValueFnc);
	m_wndPacsGroup.SetEvent(WE_SELENDOK, _OnPacsGroupSelendokFnc);
	//m_wndPacsGroup.SetEvent(WE_SETFOCUS, _OnPacsGroupSetfocusFnc);
	//m_wndPacsGroup.SetEvent(WE_KILLFOCUS, _OnPacsGroupKillfocusFnc);
	m_wndPacsGroup.SetEvent(WE_SELCHANGE, _OnPacsGroupSelectChangeFnc);
	m_wndPacsGroup.SetEvent(WE_LOADDATA, _OnPacsGroupLoadDataFnc);
	//m_wndPacsGroup.SetEvent(WE_ADDNEW, _OnPacsGroupAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	//SetMode(VM_NONE);
	GetDataToScreen();
}
void CHMSUpdatePacsGroupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndMucphi.GetDlgCtrlID(), m_szMucphi);
	DDX_TextEx(pDX, m_wndPacsGroup.GetDlgCtrlID(), m_szPacsGroupKey);

}
void CHMSUpdatePacsGroupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Mucphi")] =  m_szMucphi;
	m_jData[_T("PacsGroup")] =  m_szPacsGroupKey;
	}
	else
	{
			
	m_jData[_T("Mucphi")].GetValue(m_szMucphi);
	m_jData[_T("PacsGroup")].GetValue(m_szPacsGroupKey);
	}

}
void CHMSUpdatePacsGroupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hfl_feeid as feeid, hfl_name as feename, HFL_PACSNAME as pacsname FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("feename"),  m_szMucphi); 
		rs.GetValue(_T("pacsname"),  m_szPacsGroupKey);		
	}
	SetMode(VM_EDIT);	

}
void CHMSUpdatePacsGroupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUpdatePacsGroupDialog::SetDefaultValues(){

	m_szMucphi.Empty();
	m_szPacsGroupKey.Empty();

}
int CHMSUpdatePacsGroupDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
			
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
		m_wndMucphi.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSUpdatePacsGroupDialog::OnMucphiChange(){
	
} */
/*void CHMSUpdatePacsGroupDialog::OnMucphiSetfocus(){
	
} */
/*void CHMSUpdatePacsGroupDialog::OnMucphiKillfocus(){
	
} */
int CHMSUpdatePacsGroupDialog::OnMucphiCheckValue()
{
	return 0;
} 
void CHMSUpdatePacsGroupDialog::OnPacsGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSUpdatePacsGroupDialog::OnPacsGroupSelendok(){
	 
}
/*void CHMSUpdatePacsGroupDialog::OnPacsGroupSetfocus(){
	
}*/
/*void CHMSUpdatePacsGroupDialog::OnPacsGroupKillfocus(){
	
}*/
long CHMSUpdatePacsGroupDialog::OnPacsGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPacsGroup.IsSearchKey())
	{
		szWhere.Format(_T(" AND sd_code='%s' "), m_szPacsGroupKey);
	};
	szSQL.Format(_T("SELECT  ss_code as id, ss_desc as name ") \
		_T(" FROM sys_sel") \
		_T(" WHERE SS_ID='hms_phanloai_pacs'") \
		_T(" ORDER BY ss_code "), szWhere);

	m_wndPacsGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPacsGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSUpdatePacsGroupDialog::OnPacsGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSUpdatePacsGroupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSUpdatePacsGroupDialog();
	
} 
void CHMSUpdatePacsGroupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSUpdatePacsGroupDialog::OnAddCHMSUpdatePacsGroupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUpdatePacsGroupDialog::OnEditCHMSUpdatePacsGroupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUpdatePacsGroupDialog::OnDeleteCHMSUpdatePacsGroupDialog(){
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
 		OnCancelCHMSUpdatePacsGroupDialog();
 	}
	return 0;
}
int CHMSUpdatePacsGroupDialog::OnSaveCHMSUpdatePacsGroupDialog()
{
 	UpdateData(true);
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, tmpStr; 
	CRecord rs(&pMF->m_db);	
	szSQL.Format(_T("UPDATE hms_fee_list SET HFL_PACSNAME ='%s' WHERE hfl_feeid='%s'"),m_szPacsGroupKey, m_szID);	   
	int nRet = pMF->ExecSQL(szSQL);

	if (nRet > 0) 
	CGuiDialog::OnOK();	
	return 0;
}
int CHMSUpdatePacsGroupDialog::OnCancelCHMSUpdatePacsGroupDialog(){
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
int CHMSUpdatePacsGroupDialog::OnCHMSUpdatePacsGroupDialogListLoadData(){
	return 0;
}
