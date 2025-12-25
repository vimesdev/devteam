#include "PMICD10ClassLine.h"
#include "MainFrame_E10.h"
#include "PMICD10Class.h"
static void _OnICDSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMICD10ClassLine* )pWnd)->OnICDSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnICDSelendokFnc(CWnd *pWnd){
	((CPMICD10ClassLine *)pWnd)->OnICDSelendok();
}
/*static void _OnICDSetfocusFnc(CWnd *pWnd){
	((CPMICD10ClassLine *)pWnd)->OnICDKillfocus();
}*/
/*static void _OnICDKillfocusFnc(CWnd *pWnd){
	((CPMICD10ClassLine *)pWnd)->OnICDKillfocus();
}*/
static long _OnICDLoadDataFnc(CWnd *pWnd){
	return ((CPMICD10ClassLine *)pWnd)->OnICDLoadData();
}
/*static void _OnICDAddNewFnc(CWnd *pWnd){
	((CPMICD10ClassLine *)pWnd)->OnICDAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMICD10ClassLine *pVw = (CPMICD10ClassLine *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMICD10ClassLine *pVw = (CPMICD10ClassLine *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMICD10ClassLineFnc(CWnd *pWnd){
	 return ((CPMICD10ClassLine*)pWnd)->OnAddPMICD10ClassLine();
} 
static int _OnEditPMICD10ClassLineFnc(CWnd *pWnd){
	 return ((CPMICD10ClassLine*)pWnd)->OnEditPMICD10ClassLine();
} 
static int _OnDeletePMICD10ClassLineFnc(CWnd *pWnd){
	 return ((CPMICD10ClassLine*)pWnd)->OnDeletePMICD10ClassLine();
} 
static int _OnSavePMICD10ClassLineFnc(CWnd *pWnd){
	 return ((CPMICD10ClassLine*)pWnd)->OnSavePMICD10ClassLine();
} 
static int _OnCancelPMICD10ClassLineFnc(CWnd *pWnd){
	 return ((CPMICD10ClassLine*)pWnd)->OnCancelPMICD10ClassLine();
} 
CPMICD10ClassLine::CPMICD10ClassLine(CWnd *pParent):
	CGuiPopup(pParent){

	m_nDlgWidth = 510;
	m_nDlgHeight = 35;
	SetDefaultValues();
}
CPMICD10ClassLine::~CPMICD10ClassLine(){
}
void CPMICD10ClassLine::OnCreateComponents(){
	m_wndICDLabel.Create(this, _T("ICD"), 5, 5, 35, 30);
	m_wndICD.Create(this,40, 5, 445, 30); 
	m_wndSave.Create(this, _T("&Save"), 450, 5, 475, 30);
	m_wndClose.Create(this, _T("&Close"), 480, 5, 505, 30);

}
void CPMICD10ClassLine::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndICD.SetCheckValue(true);
	m_wndICD.LimitText(35);


	m_wndICD.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndICD.InsertColumn(1, _T("Name"), CFMT_TEXT, 400);

}
void CPMICD10ClassLine::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndICD.SetEvent(WE_SELENDOK, _OnICDSelendokFnc);
	//m_wndICD.SetEvent(WE_SETFOCUS, _OnICDSetfocusFnc);
	//m_wndICD.SetEvent(WE_KILLFOCUS, _OnICDKillfocusFnc);
	m_wndICD.SetEvent(WE_SELCHANGE, _OnICDSelectChangeFnc);
	m_wndICD.SetEvent(WE_LOADDATA, _OnICDLoadDataFnc);
	//m_wndICD.SetEvent(WE_ADDNEW, _OnICDAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());
}
void CPMICD10ClassLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndICD.GetDlgCtrlID(), m_szICDKey);

}
void CPMICD10ClassLine::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ICD")] =  m_szICDKey;
	}
	else
	{
			
	m_jData[_T("ICD")].GetValue(m_szICDKey);
	}

}
void CPMICD10ClassLine::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMICD10ClassLine::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMICD10ClassLine::SetDefaultValues(){

	m_szICDKey.Empty();

}
int CPMICD10ClassLine::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			//EnableButtons(TRUE, 3, 4, -1);
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
		m_wndICD.SetFocus();
 		UpdateData(FALSE);
 		return nOldMode;
}
void CPMICD10ClassLine::OnICDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMICD10ClassLine::OnICDSelendok(){
	 
}
/*void CPMICD10ClassLine::OnICDSetfocus(){
	
}*/
/*void CPMICD10ClassLine::OnICDKillfocus(){
	
}*/
long CPMICD10ClassLine::OnICDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szFilter, tmpStr;
	tmpStr = ((CPMICD10Class*) GetParent())->GetICDSelected();
	if (!tmpStr.IsEmpty())
	{
		szFilter.Format(_T(" and hi_icd not in (SELECT column_value FROM table(split_str('%s', ';')))"), tmpStr);
	}
	//return pMF->LoadICD(&m_wndICD, m_szICDKey, szFilter);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndICD.IsSearchKey() && !m_szICDKey.IsEmpty()){
		szWhere.Format(_T(" and id='%s' "), m_szICDKey);
	};
	m_wndICD.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hi_icd as id, hi_name as name FROM hms_icd WHERE hi_active = 'Y' %s %s ORDER BY id "), szFilter, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndICD.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CPMICD10ClassLine::OnICDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMICD10ClassLine::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if (!IsValidateData())
		return;
	((CPMICD10Class*) GetParent())->PopulateList(GetMode(), m_szICDKey);
	OnICDLoadData();
	SetMode(GetMode());
} 
void CPMICD10ClassLine::OnCloseSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiPopup::ClosePopup();
} 
int CPMICD10ClassLine::OnAddPMICD10ClassLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMICD10ClassLine::OnEditPMICD10ClassLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMICD10ClassLine::OnDeletePMICD10ClassLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPMICD10ClassLine();
 	}
	return 0;
}
int CPMICD10ClassLine::OnSavePMICD10ClassLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMICD10ClassLineListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMICD10ClassLine::OnCancelPMICD10ClassLine(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPMICD10ClassLine::OnPMICD10ClassLineListLoadData(){
	return 0;
}
