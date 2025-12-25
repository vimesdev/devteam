#include "HMSReceiptSetupDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CHMSReceiptSetupDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CHMSReceiptSetupDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CHMSReceiptSetupDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSReceiptSetupDialog *)pWnd)->OnReceiptDateCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSReceiptSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSReceiptSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSReceiptSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnListDeleteItem();
} 

static int _OnListInsertItemFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnListInsertItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSReceiptSetupDialog *pVw = (CHMSReceiptSetupDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSReceiptSetupDialog *pVw = (CHMSReceiptSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSReceiptSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnAddHMSReceiptSetupDialog();
} 
static int _OnEditHMSReceiptSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnEditHMSReceiptSetupDialog();
} 
static int _OnDeleteHMSReceiptSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnDeleteHMSReceiptSetupDialog();
} 
static int _OnSaveHMSReceiptSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnSaveHMSReceiptSetupDialog();
} 
static int _OnCancelHMSReceiptSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSReceiptSetupDialog*)pWnd)->OnCancelHMSReceiptSetupDialog();
} 
CHMSReceiptSetupDialog::CHMSReceiptSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 320;
	m_nDlgHeight = 220;
	SetDefaultValues();
}
CHMSReceiptSetupDialog::~CHMSReceiptSetupDialog(){
}
void CHMSReceiptSetupDialog::OnCreateComponents(){
	m_wndSetupInformation.Create(this, _T("Setup Information"), 5, 5, 315, 215);
	m_wndReceiptDateLabel.Create(this, _T("Receive Date"), 10, 30, 140, 55);
	m_wndReceiptDate.Create(this,145, 30, 245, 55); 
	m_wndList.Create(this,10, 60, 311, 211); 
	m_wndOK.Create(this, _T("&OK"), 160, 220, 235, 245);
	m_wndCancel.Create(this, _T("&Cancel"), 240, 220, 315, 245);
	AddLayoutControl(&m_wndSetupInformation, WS_RESIZEX, 100, 20);
}
void CHMSReceiptSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
	
	m_wndList.SetWindowText(_T("Invoice Setup"));
	m_wndList.InsertColumn(0, _T("Serial"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Book No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Receive No"), CFMT_NUMBER, 80);
	m_wndList.SetEditLabel(0, GUI_TEXTCTRL);
	m_wndList.SetEditLabel(1, GUI_NUMBERCTRL);
	m_wndList.SetEditLabel(2, GUI_NUMBERCTRL);
	m_hms_invfeectlTbl.SetTableName(_T("hms_invfeectl"));
	m_hms_invfeectlTbl.AddField(_T("hifc_userid"), dfText, 15); 
	m_hms_invfeectlTbl.AddField(_T("hifc_recvdate"), dfDate); 
}
void CHMSReceiptSetupDialog::OnSetWindowEvents(){
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);

	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	
	GetDataToScreen();

}
void CHMSReceiptSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);

}
void CHMSReceiptSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_invfeectl WHERE lower(hifc_userid)=lower('%s') "), pMF->GetCurrentUser());

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		if(m_szReceiptDate.IsEmpty())
			rs.GetValue(_T("hfic_recvdate"), m_szReceiptDate);
		SetMode(VM_EDIT);
		m_wndOK.SetFocus();
	}
	else
		SetMode(VM_ADD);
	OnListLoadData();
}
void CHMSReceiptSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_invfeectlTbl.SetValue(_T("hifc_userid"), pMF->GetCurrentUser());
	m_hms_invfeectlTbl.SetValue(_T("hifc_recvdate"), m_szReceiptDate);
}
void CHMSReceiptSetupDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();

}
int CHMSReceiptSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_wndReceiptDate.SetFocus();
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
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSReceiptSetupDialog::OnReceiptDateChange(){
	
} */
/*void CHMSReceiptSetupDialog::OnReceiptDateSetfocus(){
	
} */
/*void CHMSReceiptSetupDialog::OnReceiptDateKillfocus(){
	
} */
int CHMSReceiptSetupDialog::OnReceiptDateCheckValue(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	UpdateData(true);
	int nRet = CompareDate(m_szReceiptDate, pMF->GetSysDate());
	if(nRet > 0 || nRet < -5)
		return -1;
	return 0;
} 
void CHMSReceiptSetupDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_wndList.SetStartEdit(nSel, 0);
} 
void CHMSReceiptSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 

int CHMSReceiptSetupDialog::OnListInsertItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
int CHMSReceiptSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return 0;
} 
long CHMSReceiptSetupDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_invfeectl_line WHERE lower(hifcl_userid)=lower('%s') ORDER BY hifcl_serialno, hifcl_bookno "), pMF->GetCurrentUser());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hifcl_serialno")), 
			rs.GetValue(_T("hifcl_bookno")), 
			rs.GetValue(_T("hifcl_recvno")), 
			NULL);
		rs.MoveNext();
	}
	for (int i = nCount; i <= 10; i++){
		m_wndList.AddItems(_T(""), _T(""), _T(""), NULL);
	}
	m_wndList.EndLoad(); 
	return nCount;

}
void CHMSReceiptSetupDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSReceiptSetupDialog();
} 
void CHMSReceiptSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSReceiptSetupDialog::OnAddHMSReceiptSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSReceiptSetupDialog::OnEditHMSReceiptSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSReceiptSetupDialog::OnDeleteHMSReceiptSetupDialog(){
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
 		OnCancelHMSReceiptSetupDialog(); 
 	}
	return 0;
}
int CHMSReceiptSetupDialog::OnSaveHMSReceiptSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_invfeectlTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE lower(hifc_userid)=lower('%s') "), pMF->GetCurrentUser()); 
 		szSQL = m_hms_invfeectlTbl.GetUpdateSQL(_T("hifc_userid")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		CString tmpStr;
		szSQL.Format(_T("DELETE FROM hms_invfeectl_line WHERE lower(hifcl_userid)=lower('%s') "), pMF->GetCurrentUser());
		pMF->ExecSQL(szSQL);
		for (int i =0; i < m_wndList.GetItemCount(); i++){
			tmpStr = m_wndList.GetItemText(i, 0);
			if(!tmpStr.IsEmpty())
			{
				szSQL.Format(_T("INSERT INTO hms_invfeectl_line VALUES('%s', '%s', %ld, %d) "),
					pMF->GetCurrentUser(),  m_wndList.GetItemText(i, 0), ToLong(m_wndList.GetItemText(i, 1)), ToInt(m_wndList.GetItemText(i, 2)));
				pMF->ExecSQL(szSQL);
			}
		}
		CGuiDialog::OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSReceiptSetupDialog::OnCancelHMSReceiptSetupDialog(){
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
int CHMSReceiptSetupDialog::OnHMSReceiptSetupDialogListLoadData(){
	return 0;
}
