#include "stdafx.h"
#include "SearchPopup_V2.h"
#include "MainFrame_E10.h"
/*static void _OnKeywordChangeFnc(CWnd *pWnd){
	((CSearchPopup_V2 *)pWnd)->OnKeywordChange();
} */
/*static void _OnKeywordSetfocusFnc(CWnd *pWnd){
	((CSearchPopup_V2 *)pWnd)->OnKeywordSetfocus();} */ 
/*static void _OnKeywordKillfocusFnc(CWnd *pWnd){
	((CSearchPopup_V2 *)pWnd)->OnKeywordKillfocus();
} */
static int _OnKeywordCheckValueFnc(CWnd *pWnd)
{
	return ((CSearchPopup_V2 *)pWnd)->OnKeywordCheckValue();
} 
static int _OnAddSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopup_V2*)pWnd)->OnAddSearchPopup();
} 
static int _OnEditSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopup_V2*)pWnd)->OnEditSearchPopup();
} 
static int _OnDeleteSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopup_V2*)pWnd)->OnDeleteSearchPopup();
} 
static int _OnSaveSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopup_V2*)pWnd)->OnSaveSearchPopup();
} 
static int _OnCancelSearchPopupFnc(CWnd *pWnd)
{
	 return ((CSearchPopup_V2*)pWnd)->OnCancelSearchPopup();
} 

CSearchPopup_V2::CSearchPopup_V2(CWnd *pParent):
CGuiPopup(pParent)
{
	m_pListCtrl = (CGuiListCtrl*) pParent;
	m_nDlgWidth = 375;
	m_nDlgHeight = 35;
	SetDefaultValues();
	m_nSearchCol = 1;
}
CSearchPopup_V2::~CSearchPopup_V2(){
}
void CSearchPopup_V2::OnCreateComponents()
{
	m_wndKeywordLabel.Create(this, _T("Keyword"), 5, 5, 85, 30);
	m_wndKeyword.Create(this,90, 5, 370, 30);
}
void CSearchPopup_V2::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndKeyword.SetLimitText(128);
	m_wndKeyword.SetCheckValue(true);
}
void CSearchPopup_V2::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndKeyword.SetEvent(WE_CHANGE, _OnKeywordChangeFnc);
	//m_wndKeyword.SetEvent(WE_SETFOCUS, _OnKeywordSetfocusFnc);
	//m_wndKeyword.SetEvent(WE_KILLFOCUS, _OnKeywordKillfocusFnc);
	m_wndKeyword.SetEvent(WE_CHECKVALUE, _OnKeywordCheckValueFnc);
	SetMode(VM_ADD);

}
void CSearchPopup_V2::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndKeyword.GetDlgCtrlID(), m_szKeyword);

}
void CSearchPopup_V2::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSearchPopup_V2::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CSearchPopup_V2::SetDefaultValues(){

	m_szKeyword.Empty();

}
int CSearchPopup_V2::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
		m_wndKeyword.SetFocus();
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CSearchPopup_V2::OnKeywordChange(){
	
} */
/*void CSearchPopup_V2::OnKeywordSetfocus(){
	
} */
/*void CSearchPopup_V2::OnKeywordKillfocus(){
	
} */
int CSearchPopup_V2::OnKeywordCheckValue(){
	UpdateData(true);
	if (m_pListCtrl)
	{
		m_pListCtrl->Search(m_nSearchCol, m_szKeyword, SEARCH_LIKE);
	}
	return 0;
} 
int CSearchPopup_V2::OnAddSearchPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSearchPopup_V2::OnEditSearchPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSearchPopup_V2::OnDeleteSearchPopup(){
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
 		OnCancelSearchPopup();
 	}
	return 0;
}
int CSearchPopup_V2::OnSaveSearchPopup(){
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
 		//OnSearchPopupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSearchPopup_V2::OnCancelSearchPopup()
{
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
int CSearchPopup_V2::OnSearchPopupListLoadData(){
	return 0;
}