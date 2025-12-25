#include "HMS_OBAKhoaRangTab.h"
#include "MainFrm.h"
#include "HMSBenhAnView.h"
static void _OnToothTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMS_OBAKhoaRangTab*)pWnd)->OnToothTabSelectChange(nOld, nNew);
} 
static int _OnAddHMS_OBAKhoaRangTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRangTab*)pWnd)->OnAddHMS_OBAKhoaRangTab();
} 
static int _OnEditHMS_OBAKhoaRangTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRangTab*)pWnd)->OnEditHMS_OBAKhoaRangTab();
} 
static int _OnDeleteHMS_OBAKhoaRangTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRangTab*)pWnd)->OnDeleteHMS_OBAKhoaRangTab();
} 
static int _OnSaveHMS_OBAKhoaRangTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRangTab*)pWnd)->OnSaveHMS_OBAKhoaRangTab();
} 
static int _OnCancelHMS_OBAKhoaRangTabFnc(CWnd *pWnd){
	 return ((CHMS_OBAKhoaRangTab*)pWnd)->OnCancelHMS_OBAKhoaRangTab();
} 
CHMS_OBAKhoaRangTab::CHMS_OBAKhoaRangTab(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMS_OBAKhoaRangTab::~CHMS_OBAKhoaRangTab(){
}
void CHMS_OBAKhoaRangTab::OnCreateComponents(){
	m_wndToothTab.Create(this,5, 5, 1000, 1500); 
	m_wndKR.Create(&m_wndToothTab);
	m_wndKR2.Create(&m_wndToothTab);
	m_wndInplant.Create(&m_wndToothTab);
	m_wndInplant2.Create(&m_wndToothTab);
	m_wndInplant3.Create(&m_wndToothTab);
	m_wndInplant4.Create(&m_wndToothTab);
	m_wndInplant51.Create(&m_wndToothTab);
	m_wndInplant52.Create(&m_wndToothTab);
	m_wndInplant53.Create(&m_wndToothTab);
	m_wndInplant54.Create(&m_wndToothTab);

	m_wndToothTab.Add(_T("\x42\x1EC7nh \xE1n"), &m_wndKR);
	m_wndToothTab.Add(_T("H\x1ECFi & kh\xE1m \x62\x1EC7nh"), &m_wndKR2);
	m_wndToothTab.Add(_T("Inplant"), &m_wndInplant);
	m_wndToothTab.Add(_T("Inplant 2"), &m_wndInplant2);
	m_wndToothTab.Add(_T("Inplant 3"), &m_wndInplant3);
	m_wndToothTab.Add(_T("Inplant 4"), &m_wndInplant4);
	m_wndToothTab.Add(_T("Inplant 5.1"), &m_wndInplant51);
	m_wndToothTab.Add(_T("Inplant 5.2"), &m_wndInplant52);
	m_wndToothTab.Add(_T("Inplant 5.3"), &m_wndInplant53);
	m_wndToothTab.Add(_T("Inplant 5.4"), &m_wndInplant54);

	m_wndKR.OnInitDialog();
	m_wndKR2.OnInitDialog();
	m_wndInplant.OnInitDialog();
	m_wndInplant2.OnInitDialog();
	m_wndInplant3.OnInitDialog();
	m_wndInplant4.OnInitDialog();
	m_wndInplant51.OnInitDialog();
	m_wndInplant52.OnInitDialog();
	m_wndInplant53.OnInitDialog();
	m_wndInplant54.OnInitDialog();

	m_wndToothTab.SetActiveTab(0);

}
void CHMS_OBAKhoaRangTab::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMS_OBAKhoaRangTab::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndToothTab.SetEvent(WE_SELCHANGE, _OnToothTabSelectChangeFnc);
	SetScrollSizes(MM_TEXT, CSize(700, 1200));

}
void CHMS_OBAKhoaRangTab::OnDoDataExchange(CDataExchange* pDX){

}
void CHMS_OBAKhoaRangTab::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMS_OBAKhoaRangTab::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMS_OBAKhoaRangTab::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMS_OBAKhoaRangTab::SetDefaultValues(){


}
int CHMS_OBAKhoaRangTab::SetMode(int nMode){
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
void CHMS_OBAKhoaRangTab::OnToothTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMS_OBAKhoaRangTab::OnAddHMS_OBAKhoaRangTab(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBAKhoaRangTab::OnEditHMS_OBAKhoaRangTab(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBAKhoaRangTab::OnDeleteHMS_OBAKhoaRangTab(){
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
 		OnCancelHMS_OBAKhoaRangTab();
 	}
	return 0;
}
int CHMS_OBAKhoaRangTab::OnSaveHMS_OBAKhoaRangTab(){
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
 		//OnHMS_OBAKhoaRangTabListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMS_OBAKhoaRangTab::OnCancelHMS_OBAKhoaRangTab(){
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
int CHMS_OBAKhoaRangTab::OnHMS_OBAKhoaRangTabListLoadData(){
	return 0;
}


bool CHMS_OBAKhoaRangTab::OnUpdateSelect()
{
	int nSel = m_wndToothTab.GetCurSel();
	if(nSel < 0)
		return false;
	CHMSBenhAnView* pView =(CHMSBenhAnView*) m_wndToothTab.GetWindowAt(nSel);
	if(pView)
	{
		return pView->OnUpdateSelect();
	}
	return false;
}


void CHMS_OBAKhoaRangTab::OnSaveSelect()
{
	int nSel = m_wndToothTab.GetCurSel();
	if(nSel < 0)
		return;
	CHMSBenhAnView* pView = (CHMSBenhAnView*)m_wndToothTab.GetWindowAt(nSel);
	if(pView)
	{
		pView->OnSaveSelect();
	}
}

void CHMS_OBAKhoaRangTab::OnPrintSelect()
{
	int nSel = m_wndToothTab.GetCurSel();
	if(nSel < 0)
		return;
	CHMSBenhAnView* pView = (CHMSBenhAnView*)m_wndToothTab.GetWindowAt(nSel);
	if(pView)
	{
		pView->OnPrintSelect();
	}
}

void CHMS_OBAKhoaRangTab::OnCancelSelect()
{
	for (int i =0;i < m_wndToothTab.GetItemCount(); i++)
	{
		CHMSBenhAnView* pView = (CHMSBenhAnView*)m_wndToothTab.GetWindowAt(i);
		if(pView)
		{
			pView->OnCancelSelect();
		}
	}
}
