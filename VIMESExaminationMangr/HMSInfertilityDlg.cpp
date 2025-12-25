#include "HMSInfertilityDlg.h"
#include "MainFrm.h"
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSInfertilityDlg*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSInfertilityDlg *pVw = (CHMSInfertilityDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSInfertilityDlg *pVw = (CHMSInfertilityDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSInfertilityDlg *pVw = (CHMSInfertilityDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSInfertilityDlg *pVw = (CHMSInfertilityDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSInfertilityDlgFnc(CWnd *pWnd){
	 return ((CHMSInfertilityDlg*)pWnd)->OnAddHMSInfertilityDlg();
} 
static int _OnEditHMSInfertilityDlgFnc(CWnd *pWnd){
	 return ((CHMSInfertilityDlg*)pWnd)->OnEditHMSInfertilityDlg();
} 
static int _OnDeleteHMSInfertilityDlgFnc(CWnd *pWnd){
	 return ((CHMSInfertilityDlg*)pWnd)->OnDeleteHMSInfertilityDlg();
} 
static int _OnSaveHMSInfertilityDlgFnc(CWnd *pWnd){
	 return ((CHMSInfertilityDlg*)pWnd)->OnSaveHMSInfertilityDlg();
} 
static int _OnCancelHMSInfertilityDlgFnc(CWnd *pWnd){
	 return ((CHMSInfertilityDlg*)pWnd)->OnCancelHMSInfertilityDlg();
} 
CHMSInfertilityDlg::CHMSInfertilityDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 900;
	m_nDlgHeight = 650;
	SetDefaultValues();
}
CHMSInfertilityDlg::~CHMSInfertilityDlg(){
}
void CHMSInfertilityDlg::OnCreateComponents(){
	m_wndTab.Create(this,5, 5, 830, 595); 
	m_wndPrint.Create(this, _T("Print"), 460, 600, 540, 625);
	m_wndEdit.Create(this, _T("Update"), 545, 600, 625, 625);
	m_wndSave.Create(this, _T("Save"), 630, 600, 710, 625);
	m_wndCancel.Create(this, _T("Cancel"), 715, 600, 795, 625);

}
void CHMSInfertilityDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetPadding(CSize(40, 40));
	
	m_wndInfertilityInfo.Create(this);
	m_wndVo.Create(this);
	m_wndChong.Create(this);
	m_wndTomTat.Create(this);

	m_wndInfertilityInfo.m_nDocumentNo = m_nDocNo;
	m_wndInfertilityInfo.m_nPatientNo = m_nPatientNo;
	m_wndInfertilityInfo.OnInitDialog();
	m_wndTab.Add(_T("Information"), &m_wndInfertilityInfo);
	m_wndTab.Add(_T("Ph\x1EA7n kh\xE1m v\x1EE3"), &m_wndVo);
	m_wndTab.Add(_T("Ph\x1EA7n kh\xE1m \x63h\x1ED3ng"), &m_wndChong);
	m_wndTab.Add(_T("T\xF3m t\x1EAFt \x62\x1EC7nh \xE1n"), &m_wndTomTat);

	m_wndVo.m_nDocumentNo = m_nDocNo;
	m_wndVo.OnInitDialog();

	m_wndChong.m_nDocumentNo = m_nDocNo;
	m_wndChong.OnInitDialog();
	m_wndTomTat.m_nDocumentNo = m_nDocNo;
	m_wndTomTat.OnInitDialog();

	m_wndTab.SetActiveTab(0);
	SetMode(m_wndInfertilityInfo.GetMode());
	m_nTabID = 0;
	
}
void CHMSInfertilityDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	

}
void CHMSInfertilityDlg::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSInfertilityDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSInfertilityDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInfertilityDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInfertilityDlg::SetDefaultValues(){


}
int CHMSInfertilityDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, 3, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, 3,-1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 2, 3, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSInfertilityDlg::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		switch(nNew){
			case 0:
				m_nTabID = 0;
				break;
			case 1:
				m_nTabID = 1;
				break;
			case 2:
				m_nTabID = 2;
				break;
			case 3:
				m_nTabID = 3;
				m_wndTomTat.OnInitDialog();
				break;
		};
} 

void CHMSInfertilityDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	switch(m_nTabID)
	{
	case 0:
		m_wndInfertilityInfo.OnPrint();
		break;
	case 1:
		m_wndVo.OnPrint();
		break;
	case 2:
		m_wndChong.OnPrint();
		break;
	case 3:
		m_wndTomTat.OnPrint();
		break;
	}
	
	
	
	
} 
void CHMSInfertilityDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	switch(m_nTabID){
			case 0:
				m_wndInfertilityInfo.OnEditSelect();
				SetMode(m_wndInfertilityInfo.GetMode());
				break;
			case 1:
				m_wndVo.OnEditSelect();
				SetMode(m_wndVo.GetMode());
				break;
			case 2:
				m_wndChong.OnEditSelect();
				SetMode(m_wndChong.GetMode());
				break;
			case 3:
				m_wndTomTat.OnEditSelect();
				SetMode(m_wndTomTat.GetMode());
				break;
		};
} 
void CHMSInfertilityDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	switch(m_nTabID){
			case 0:
				m_wndInfertilityInfo.OnSaveSelect();
				SetMode(m_wndInfertilityInfo.GetMode());
				break;
			case 1:
				m_wndVo.OnSaveSelect();
				SetMode(m_wndVo.GetMode());
				break;
			case 2:
				m_wndChong.OnSaveSelect();
				SetMode(m_wndChong.GetMode());
				break;
			case 3:
				m_wndTomTat.OnSaveSelect();
				SetMode(m_wndTomTat.GetMode());
				break;
		};
} 
void CHMSInfertilityDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	switch(m_nTabID){
			case 0:
				m_wndInfertilityInfo.OnCancelSelect();
				SetMode(m_wndInfertilityInfo.GetMode());
				break;
			case 1:
				m_wndVo.OnCancelSelect();
				SetMode(m_wndVo.GetMode());
				break;
			case 2:
				m_wndChong.OnCancelSelect();
				SetMode(m_wndChong.GetMode());
				break;
			case 3:
				m_wndTomTat.OnCancelSelect();
				SetMode(m_wndTomTat.GetMode());
				break;
		};
} 
int CHMSInfertilityDlg::OnAddHMSInfertilityDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInfertilityDlg::OnEditHMSInfertilityDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInfertilityDlg::OnDeleteHMSInfertilityDlg(){
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
 		OnCancelHMSInfertilityDlg();
 	}
	return 0;
}
int CHMSInfertilityDlg::OnSaveHMSInfertilityDlg(){
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
 		//OnHMSInfertilityDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInfertilityDlg::OnCancelHMSInfertilityDlg(){
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
int CHMSInfertilityDlg::OnHMSInfertilityDlgListLoadData(){
	return 0;
}
int CHMSInfertilityDlg::OnCheckExist(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int ret = 0;
	szSQL.Format(_T(" SELECT * FROM hms_doc_infertility WHERE hdi_docno = %ld "), m_nDocNo);
	ret = rs.ExecSQL(szSQL);
	m_wndTab.DeleteAllItems();
	if(ret > 0)
	{
		m_wndInfertilityInfo.Create(this);
		//CHMSInfertilityInfo m_wndII(pMF);
		//m_wndII.m_pWndInfertilityInfo = this;
		m_wndVo.Create(this);
		m_wndChong.Create(this);
		m_wndTomTat.Create(this);

		m_wndInfertilityInfo.m_nDocumentNo = m_nDocNo;
		m_wndInfertilityInfo.m_nPatientNo = m_nPatientNo;
		
		m_wndInfertilityInfo.OnInitDialog();
		m_wndTab.Add(_T("Information"), &m_wndInfertilityInfo);
		m_wndTab.Add(_T("Ph\x1EA7n kh\xE1m v\x1EE3"), &m_wndVo);
		m_wndTab.Add(_T("Ph\x1EA7n kh\xE1m \x63h\x1ED3ng"), &m_wndChong);
		m_wndTab.Add(_T("T\xF3m t\x1EAFt \x62\x1EC7nh \xE1n"), &m_wndTomTat);
	}else
	{
		m_wndInfertilityInfo.Create(this);
		m_wndTab.Add(_T("Information"), &m_wndInfertilityInfo);
		m_wndInfertilityInfo.m_nDocumentNo = m_nDocNo;
		m_wndInfertilityInfo.OnInitDialog();
	}
	return ret;
}