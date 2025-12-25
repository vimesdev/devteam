#include "FAMUpdateAccumDeprDialog.h"
#include "MainFrm.h"

#define WM_MY_THREAD_MESSAGE	WM_APP + 100

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CFAMUpdateAccumDeprDialog *pVw = (CFAMUpdateAccumDeprDialog *)pWnd;
	pVw->OnUpdateSelect();
}
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMUpdateAccumDeprDialog *pVw = (CFAMUpdateAccumDeprDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMUpdateAccumDeprDialog *pVw = (CFAMUpdateAccumDeprDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnProgressChangeFnc(CWnd *pWnd){
	((CFAMUpdateAccumDeprDialog *)pWnd)->OnProgressChange();
} */
/*static void _OnProgressSetfocusFnc(CWnd *pWnd){
	((CFAMUpdateAccumDeprDialog *)pWnd)->OnProgressSetfocus();} */ 
/*static void _OnProgressKillfocusFnc(CWnd *pWnd){
	((CFAMUpdateAccumDeprDialog *)pWnd)->OnProgressKillfocus();
} */
/*static int _OnProgressCheckValueFnc(CWnd *pWnd){
	return ((CFAMUpdateAccumDeprDialog *)pWnd)->OnProgressCheckValue();
}*/ 
static int _OnAddFAMUpdateAccumDeprDialogFnc(CWnd *pWnd){
	 return ((CFAMUpdateAccumDeprDialog*)pWnd)->OnAddFAMUpdateAccumDeprDialog();
} 
static int _OnEditFAMUpdateAccumDeprDialogFnc(CWnd *pWnd){
	 return ((CFAMUpdateAccumDeprDialog*)pWnd)->OnEditFAMUpdateAccumDeprDialog();
} 
static int _OnDeleteFAMUpdateAccumDeprDialogFnc(CWnd *pWnd){
	 return ((CFAMUpdateAccumDeprDialog*)pWnd)->OnDeleteFAMUpdateAccumDeprDialog();
} 
static int _OnSaveFAMUpdateAccumDeprDialogFnc(CWnd *pWnd){
	 return ((CFAMUpdateAccumDeprDialog*)pWnd)->OnSaveFAMUpdateAccumDeprDialog();
} 
static int _OnCancelFAMUpdateAccumDeprDialogFnc(CWnd *pWnd){
	 return ((CFAMUpdateAccumDeprDialog*)pWnd)->OnCancelFAMUpdateAccumDeprDialog();
} 
CFAMUpdateAccumDeprDialog::CFAMUpdateAccumDeprDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 785;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CFAMUpdateAccumDeprDialog::~CFAMUpdateAccumDeprDialog()
{
}
void CFAMUpdateAccumDeprDialog::OnCreateComponents()
{
	m_wndUpdate.Create(this, _T("&Update"), 95, 75, 170, 100);
	m_wndCancel.Create(this, _T("&Cancel"), 175, 75, 250, 100);
	m_wndClose.Create(this, _T("&Close"), 255, 75, 330, 100);

	m_wndLoadingLabel.Create(this, _T("Standby"), 5, 15, 75, 40);

	m_wndStatusLabel.Create(this, _T("0%"), 195, 45, 275, 70);

	m_wndProcessingLabel.Create(this, _T("Processing item:"), 80, 45, 180, 70);
	m_wndProgress.Create(WS_CHILD | WS_VISIBLE | PBS_SMOOTH, CRect(80, 15, 330, 40), this, 0x16);
}
void CFAMUpdateAccumDeprDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndProgress.SetLimitText(35);
	//m_wndProgress.SetCheckValue(true);
	//m_wndProgress.SetStep(1);
	m_wndProcessingLabel.ShowWindow(FALSE);
	SetWindowTitle(_T("Update Accumulated Depreciation"));
}
void CFAMUpdateAccumDeprDialog::OnSetWindowEvents()
{
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndProgress.SetEvent(WE_CHANGE, _OnProgressChangeFnc);
	//m_wndProgress.SetEvent(WE_SETFOCUS, _OnProgressSetfocusFnc);
	//m_wndProgress.SetEvent(WE_KILLFOCUS, _OnProgressKillfocusFnc);
	//m_wndProgress.SetEvent(WE_CHECKVALUE, _OnProgressCheckValueFnc);
	SetMode(VM_EDIT);
}
void CFAMUpdateAccumDeprDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Control(pDX, m_wndLoadingLabel.GetDlgCtrlID(), m_wndLoadingLabel);
	DDX_Control(pDX, m_wndStatusLabel.GetDlgCtrlID(), m_wndStatusLabel);
	DDX_Control(pDX, 0x16, m_wndProgress);
}
BEGIN_MESSAGE_MAP(CFAMUpdateAccumDeprDialog, CGuiDialog)
	ON_MESSAGE(WM_MY_THREAD_MESSAGE, OnThreadMessage)
END_MESSAGE_MAP()
void CFAMUpdateAccumDeprDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
}
void CFAMUpdateAccumDeprDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
void CFAMUpdateAccumDeprDialog::SetDefaultValues()
{
	//m_szProgress.Empty();
}
int CFAMUpdateAccumDeprDialog::SetMode(int nMode)
{
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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

BOOL CFAMUpdateAccumDeprDialog::DoEvents()
{
	MSG msg;
	while (PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE))
	{
		if (!AfxGetApp()->PumpMessage())
		{
			PostQuitMessage(0);
			return FALSE;
		}
	}
	LONG lIdle = 0;
	while (AfxGetApp()->OnIdle(lIdle++));
	return TRUE;
}
int CFAMUpdateAccumDeprDialog::GetAssetNoArray()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szTemp, szSQL;
	CRecord rs(&pMF->m_db);
	int nCount = 0;
	szSQL.Format(_T("SELECT Distinct fad_assetno AS ID FROM fam_depreciation")\
				 _T(" LEFT JOIN fam_asset ON(fa_assetno=fad_assetno)")\
				 _T(" WHERE date_part('year', fa_deposeddate)=1752 ORDER BY 1"));
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("ID"), szTemp);
		array.SetAtGrow(nCount, szTemp);
		nCount++;
		rs.MoveNext();
	}
	return nCount;
}
LRESULT CFAMUpdateAccumDeprDialog::OnThreadMessage(WPARAM wParam, LPARAM)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nProgress = (int)wParam;
	CString szSQL;
	szSQL.Format(_T("fam_update_accumdepr('%s')"), array[nProgress - 1]);
	pMF->ExecDML(szSQL);
	m_wndProgress.SetPos(nProgress);
	CString szStatus;
	szStatus.Format(_T("%d%s"), Round(nProgress * 100.0 / m_nMaxRange), _T("%"));
	m_wndStatusLabel.Create(this, szStatus, 185, 45, 265, 70);
	return 0;
}
static UINT UpdateThread(void*);
UINT UpdateThread(void *pParam)
{
	CFAMUpdateAccumDeprDialog *pThis = (CFAMUpdateAccumDeprDialog *)pParam;
	for (int nValue = 1; nValue <= pThis->m_nMaxRange; nValue++)
	{
		if(pThis->CancelEvent.Lock(0))
			return -1;
		pThis->PostMessage(WM_MY_THREAD_MESSAGE, nValue);
		Sleep(200);
	}
	return 0;
}
void CFAMUpdateAccumDeprDialog::OnUpdateSelect()
{
	m_nMaxRange = GetAssetNoArray();
	if (m_nMaxRange < 1)
	{
		ShowMessageBox(_T("There is no fixed asset that need updating"), MB_OK | MB_ICONINFORMATION);
		m_wndUpdate.EnableWindow(FALSE);
		m_wndCancel.EnableWindow(FALSE);
		return;
	}
	//_msg(_T("%d"), m_nMaxRange);
	//for (int i = 0; i < array.GetSize(); i++)
		//MessageBox(array[i]);
	m_wndUpdate.EnableWindow(FALSE);
	m_wndLoadingLabel.Create(this, _T("Loading..."), 5, 15, 75, 40);
	m_wndProgress.SetRange32(0, m_nMaxRange);
	ptrThread = AfxBeginThread(UpdateThread, this);
}
void CFAMUpdateAccumDeprDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCancel.EnableWindow(FALSE);
	CancelEvent.SetEvent();
	WaitForSingleObject(ptrThread->m_hThread, INFINITE);
	//m_wndLoadingLabel.Create(this, _T("Canceled!"), 5, 14, 75, 39);
	m_wndLoadingLabel.SetWindowText(_T("Canceled!"));
} 
void CFAMUpdateAccumDeprDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
/*void CFAMUpdateAccumDeprDialog::OnProgressChange(){
	
} */
/*void CFAMUpdateAccumDeprDialog::OnProgressSetfocus(){
	
} */
/*void CFAMUpdateAccumDeprDialog::OnProgressKillfocus(){
	
} */
//int CFAMUpdateAccumDeprDialog::OnProgressCheckValue(){
//	return 0;
//} 
int CFAMUpdateAccumDeprDialog::OnAddFAMUpdateAccumDeprDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMUpdateAccumDeprDialog::OnEditFAMUpdateAccumDeprDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMUpdateAccumDeprDialog::OnDeleteFAMUpdateAccumDeprDialog(){
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
 		OnCancelFAMUpdateAccumDeprDialog(); 
 	}
	return 0;
}
int CFAMUpdateAccumDeprDialog::OnSaveFAMUpdateAccumDeprDialog(){
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
 		//OnFAMUpdateAccumDeprDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMUpdateAccumDeprDialog::OnCancelFAMUpdateAccumDeprDialog(){
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
int CFAMUpdateAccumDeprDialog::OnFAMUpdateAccumDeprDialogListLoadData(){
	return 0;
}
