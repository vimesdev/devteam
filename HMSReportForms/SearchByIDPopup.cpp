#include "stdafx.h"
#include "SearchByIDPopup.h"
#include "HMSMainFrame.h"
/*static void _OnKeywordChangeFnc(CWnd *pWnd){
	((CSearchByIDPopup *)pWnd)->OnKeywordChange();
} */
/*static void _OnKeywordSetfocusFnc(CWnd *pWnd){
	((CSearchByIDPopup *)pWnd)->OnKeywordSetfocus();} */ 
/*static void _OnKeywordKillfocusFnc(CWnd *pWnd){
	((CSearchByIDPopup *)pWnd)->OnKeywordKillfocus();
} */
static int _OnKeywordCheckValueFnc(CWnd *pWnd)
{
	return ((CSearchByIDPopup *)pWnd)->OnKeywordCheckValue();
} 
static int _OnAddSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchByIDPopup*)pWnd)->OnAddSearchPopup();
} 
static int _OnEditSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchByIDPopup*)pWnd)->OnEditSearchPopup();
} 
static int _OnDeleteSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchByIDPopup*)pWnd)->OnDeleteSearchPopup();
} 
static int _OnSaveSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchByIDPopup*)pWnd)->OnSaveSearchPopup();
} 
static int _OnCancelSearchPopupFnc(CWnd *pWnd){
	 return ((CSearchByIDPopup*)pWnd)->OnCancelSearchPopup();
} 
CSearchByIDPopup::CSearchByIDPopup(CWnd *pParent):
	CGuiPopup(pParent){
	m_pListCtrl = (CGuiListCtrl*) pParent;
	m_nDlgWidth = 375;
	m_nDlgHeight = 35;
	SetDefaultValues();
}
CSearchByIDPopup::~CSearchByIDPopup(){
}
void CSearchByIDPopup::OnCreateComponents(){
	m_wndKeywordLabel.Create(this, _T("Keyword"), 5, 5, 85, 30);
	m_wndKeyword.Create(this,90, 5, 370, 30); 

}
void CSearchByIDPopup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndKeyword.SetLimitText(35);
	m_wndKeyword.SetCheckValue(true);

}
void CSearchByIDPopup::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndKeyword.SetEvent(WE_CHANGE, _OnKeywordChangeFnc);
	//m_wndKeyword.SetEvent(WE_SETFOCUS, _OnKeywordSetfocusFnc);
	//m_wndKeyword.SetEvent(WE_KILLFOCUS, _OnKeywordKillfocusFnc);
	m_wndKeyword.SetEvent(WE_CHECKVALUE, _OnKeywordCheckValueFnc);
	SetMode(VM_ADD);

}
void CSearchByIDPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndKeyword.GetDlgCtrlID(), m_szKeyword);

}
void CSearchByIDPopup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSearchByIDPopup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CSearchByIDPopup::SetDefaultValues(){

	m_szKeyword.Empty();

}
int CSearchByIDPopup::SetMode(int nMode){
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
/*void CSearchByIDPopup::OnKeywordChange(){
	
} */
/*void CSearchByIDPopup::OnKeywordSetfocus(){
	
} */
/*void CSearchByIDPopup::OnKeywordKillfocus(){
	
} */
int CSearchByIDPopup::OnKeywordCheckValue(){
	UpdateData(true);
	if (m_pListCtrl)
	{
		m_pListCtrl->Search(0, m_szKeyword, SEARCH_LIKE);
	}
	return 0;
} 
int CSearchByIDPopup::OnAddSearchPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSearchByIDPopup::OnEditSearchPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSearchByIDPopup::OnDeleteSearchPopup(){
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
int CSearchByIDPopup::OnSaveSearchPopup(){
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
int CSearchByIDPopup::OnCancelSearchPopup(){
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
int CSearchByIDPopup::OnSearchPopupListLoadData(){
	return 0;
}
