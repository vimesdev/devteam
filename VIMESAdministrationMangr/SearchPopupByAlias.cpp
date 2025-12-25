#include "stdafx.h"
#include "SearchPopupByAlias.h"
#include "HMSMainFrame.h"
/*static void _OnKeywordChangeFnc(CWnd *pWnd){
	((CSearchPopupByAlias *)pWnd)->OnKeywordChange();
} */
/*static void _OnKeywordSetfocusFnc(CWnd *pWnd){
	((CSearchPopupByAlias *)pWnd)->OnKeywordSetfocus();} */ 
/*static void _OnKeywordKillfocusFnc(CWnd *pWnd){
	((CSearchPopupByAlias *)pWnd)->OnKeywordKillfocus();
} */
static int _OnKeywordCheckValueFnc(CWnd *pWnd)
{
	return ((CSearchPopupByAlias *)pWnd)->OnKeywordCheckValue();
} 
static int _OnAddSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopupByAlias*)pWnd)->OnAddSearchPopup();
} 
static int _OnEditSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopupByAlias*)pWnd)->OnEditSearchPopup();
} 
static int _OnDeleteSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopupByAlias*)pWnd)->OnDeleteSearchPopup();
} 
static int _OnSaveSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopupByAlias*)pWnd)->OnSaveSearchPopup();
} 
static int _OnCancelSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchPopupByAlias*)pWnd)->OnCancelSearchPopup();
} 
CSearchPopupByAlias::CSearchPopupByAlias(CWnd *pParent):
	CGuiPopup(pParent){
	m_pListCtrl = (CGuiListCtrl*) pParent;
	m_nDlgWidth = 375;
	m_nDlgHeight = 35;
	SetDefaultValues();
}
CSearchPopupByAlias::~CSearchPopupByAlias(){
}
void CSearchPopupByAlias::OnCreateComponents(){
	m_wndKeywordLabel.Create(this, _T("Keyword"), 5, 5, 85, 30);
	m_wndKeyword.Create(this,90, 5, 370, 30); 

}
void CSearchPopupByAlias::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndKeyword.SetLimitText(35);
	m_wndKeyword.SetCheckValue(true);

}
void CSearchPopupByAlias::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndKeyword.SetEvent(WE_CHANGE, _OnKeywordChangeFnc);
	//m_wndKeyword.SetEvent(WE_SETFOCUS, _OnKeywordSetfocusFnc);
	//m_wndKeyword.SetEvent(WE_KILLFOCUS, _OnKeywordKillfocusFnc);
	m_wndKeyword.SetEvent(WE_CHECKVALUE, _OnKeywordCheckValueFnc);
	SetMode(VM_ADD);

}
void CSearchPopupByAlias::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndKeyword.GetDlgCtrlID(), m_szKeyword);

}
void CSearchPopupByAlias::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSearchPopupByAlias::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSearchPopupByAlias::SetDefaultValues(){

	m_szKeyword.Empty();

}
int CSearchPopupByAlias::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CSearchPopupByAlias::OnKeywordChange(){
	
} */
/*void CSearchPopupByAlias::OnKeywordSetfocus(){
	
} */
/*void CSearchPopupByAlias::OnKeywordKillfocus(){
	
} */
int CSearchPopupByAlias::OnKeywordCheckValue(){
	UpdateData(true);
	if (m_pListCtrl)
	{
		m_pListCtrl->Search(2, m_szKeyword, SEARCH_LIKE);
	}
	return 0;
} 
int CSearchPopupByAlias::OnAddSearchPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSearchPopupByAlias::OnEditSearchPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSearchPopupByAlias::OnDeleteSearchPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
int CSearchPopupByAlias::OnSaveSearchPopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
int CSearchPopupByAlias::OnCancelSearchPopup(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CSearchPopupByAlias::OnSearchPopupListLoadData(){
	return 0;
}
