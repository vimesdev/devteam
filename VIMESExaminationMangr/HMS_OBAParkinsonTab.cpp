#include "HMS_OBAParkinsonTab.h"
#include "MainFrm.h"
#include "HMSBenhAnView.h"

static void _OnParkinsonTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMS_OBAParkinsonTab*)pWnd)->OnParkinsonTabSelectChange(nOld, nNew);
} 
static int _OnAddHMS_OBAParkinsonTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAParkinsonTab*)pWnd)->OnAddHMS_OBAParkinsonTab();
} 
static int _OnEditHMS_OBAParkinsonTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAParkinsonTab*)pWnd)->OnEditHMS_OBAParkinsonTab();
} 
static int _OnDeleteHMS_OBAParkinsonTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAParkinsonTab*)pWnd)->OnDeleteHMS_OBAParkinsonTab();
} 
static int _OnSaveHMS_OBAParkinsonTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAParkinsonTab*)pWnd)->OnSaveHMS_OBAParkinsonTab();
} 
static int _OnCancelHMS_OBAParkinsonTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAParkinsonTab*)pWnd)->OnCancelHMS_OBAParkinsonTab();
} 
CHMS_OBAParkinsonTab::CHMS_OBAParkinsonTab(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMS_OBAParkinsonTab::~CHMS_OBAParkinsonTab(){
}
void CHMS_OBAParkinsonTab::OnCreateComponents(){
	m_wndParkinsonTab.Create(this,5, 5, 1000, 1500); 
	m_wndParkinsonTab.SetEvent(WE_SELCHANGE, _OnParkinsonTabSelectChangeFnc);
	m_wndParkinson.Create(&m_wndParkinsonTab);
	m_wndParkinson1.Create(&m_wndParkinsonTab);
	m_wndParkinson2.Create(&m_wndParkinsonTab);

	m_wndParkinsonTab.Add(_T("\x42\x1EC7nh \xE1n"), &m_wndParkinson);
	m_wndParkinsonTab.Add(_T("Kh\xE1m \x62\x1EC7nh"), &m_wndParkinson1);
	m_wndParkinsonTab.Add(_T("\x43huy\xEAn kho\x61 \x43\x37"), &m_wndParkinson2);

	m_wndParkinson.OnInitDialog();
	m_wndParkinson1.OnInitDialog();
	m_wndParkinson2.OnInitDialog();

	m_wndParkinsonTab.SetActiveTab(0);
}
void CHMS_OBAParkinsonTab::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMS_OBAParkinsonTab::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	SetScrollSizes(MM_TEXT, CSize(700, 1000));
}
void CHMS_OBAParkinsonTab::OnDoDataExchange(CDataExchange* pDX){

}
void CHMS_OBAParkinsonTab::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMS_OBAParkinsonTab::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMS_OBAParkinsonTab::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMS_OBAParkinsonTab::SetDefaultValues(){


}
int CHMS_OBAParkinsonTab::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CHMS_OBAParkinsonTab::OnParkinsonTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMS_OBAParkinsonTab::OnAddHMS_OBAParkinsonTab(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBAParkinsonTab::OnEditHMS_OBAParkinsonTab(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBAParkinsonTab::OnDeleteHMS_OBAParkinsonTab(){
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
 		OnCancelHMS_OBAParkinsonTab();
 	}
	return 0;
}
int CHMS_OBAParkinsonTab::OnSaveHMS_OBAParkinsonTab(){
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
 		//OnHMS_OBAParkinsonTabListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMS_OBAParkinsonTab::OnCancelHMS_OBAParkinsonTab(){
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
int CHMS_OBAParkinsonTab::OnHMS_OBAParkinsonTabListLoadData(){
	return 0;
}


bool CHMS_OBAParkinsonTab::OnUpdateSelect()
{
	int nSel = m_wndParkinsonTab.GetCurSel();
	if(nSel < 0)
		return false;
	CHMSBenhAnView* pView =(CHMSBenhAnView*) m_wndParkinsonTab.GetWindowAt(nSel);
	if(pView)
	{
		return pView->OnUpdateSelect();
	}
	return false;
}


void CHMS_OBAParkinsonTab::OnSaveSelect()
{
	int nSel = m_wndParkinsonTab.GetCurSel();
	if(nSel < 0)
		return;
	CHMSBenhAnView* pView = (CHMSBenhAnView*)m_wndParkinsonTab.GetWindowAt(nSel);
	if(pView)
	{
		pView->OnSaveSelect();
	}
}

void CHMS_OBAParkinsonTab::OnPrintSelect()
{
	int nSel = m_wndParkinsonTab.GetCurSel();
	if(nSel < 0)
		return;
	CHMSBenhAnView* pView = (CHMSBenhAnView*)m_wndParkinsonTab.GetWindowAt(nSel);
	if(pView)
	{
		pView->OnPrintSelect();
	}
}



void CHMS_OBAParkinsonTab::OnCancelSelect()
{
	for (int i =0; i < m_wndParkinsonTab.GetItemCount(); i++)
	{
		CHMSBenhAnView* pView = (CHMSBenhAnView*)m_wndParkinsonTab.GetWindowAt(i);
		if(pView)
		{
			pView->OnPrintSelect();
		}
	}
}

