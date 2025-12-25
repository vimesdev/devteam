#include "HMSInsuranceCardSettingDialog.h"
#include "MainFrm.h"
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardSettingDialog *)pWnd)->OnApplyDateCheckValue();
} 
static void _OnOffLineSelectFnc(CWnd *pWnd){
	 ((CHMSInsuranceCardSettingDialog*)pWnd)->OnOffLineSelect();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSInsuranceCardSettingDialog*)pWnd)->OnActiveSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSInsuranceCardSettingDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInsuranceCardSettingDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddCardSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnAddCardSelect();
} 
static void _OnEditCardSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnEditCardSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInsuranceCardSettingDialog *pVw = (CHMSInsuranceCardSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnAddHMSInsuranceCardSettingDialog();
} 
static int _OnEditHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnEditHMSInsuranceCardSettingDialog();
} 
static int _OnDeleteHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnDeleteHMSInsuranceCardSettingDialog();
} 
static int _OnSaveHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnSaveHMSInsuranceCardSettingDialog();
} 
static int _OnCancelHMSInsuranceCardSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSInsuranceCardSettingDialog*)pWnd)->OnCancelHMSInsuranceCardSettingDialog();
} 
CHMSInsuranceCardSettingDialog::CHMSInsuranceCardSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSInsuranceCardSettingDialog::~CHMSInsuranceCardSettingDialog(){
}
void CHMSInsuranceCardSettingDialog::OnCreateComponents(){
	m_wndInsuranceCardInformation.Create(this, _T("Insurance Card Information"), 5, 5, 665, 235);
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 10, 30, 110, 55);
	m_wndApplyDate.Create(this,115, 30, 215, 55); 
	m_wndOffLine.Create(this, _T("Off Line"), 220, 30, 320, 55);
	m_wndActive.Create(this, _T("Active"), 325, 30, 425, 55);
	m_wndList.Create(this,10, 60, 660, 230); 
	m_wndAddCard.Create(this, _T("&Add Card"), 505, 30, 580, 55);
	m_wndEditCard.Create(this, _T(""), 0, 0, 25, 25);
	m_wndApply.Create(this, _T("&Apply"), 430, 30, 500, 55);
	m_wndClose.Create(this, _T("&Close"), 585, 30, 660, 55);

}
void CHMSInsuranceCardSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);



}
void CHMSInsuranceCardSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	m_wndOffLine.SetEvent(WE_CLICK, _OnOffLineSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAddCard.SetEvent(WE_CLICK, _OnAddCardSelectFnc);
	m_wndEditCard.SetEvent(WE_CLICK, _OnEditCardSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSInsuranceCardSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Check(pDX, m_wndOffLine.GetDlgCtrlID(), m_bOffLine);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);

}
void CHMSInsuranceCardSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ApplyDate")] =  m_szApplyDate;
	m_jData[_T("OffLine")] =  m_bOffLine;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("ApplyDate")].GetValue(m_szApplyDate);
	m_jData[_T("OffLine")].GetValue(m_bOffLine);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CHMSInsuranceCardSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInsuranceCardSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSInsuranceCardSettingDialog::SetDefaultValues(){

	m_szApplyDate.Empty();
	m_bOffLine=FALSE;
	m_bActive=FALSE;

}
int CHMSInsuranceCardSettingDialog::SetMode(int nMode){
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
/*void CHMSInsuranceCardSettingDialog::OnApplyDateChange(){
	
} */
/*void CHMSInsuranceCardSettingDialog::OnApplyDateSetfocus(){
	
} */
/*void CHMSInsuranceCardSettingDialog::OnApplyDateKillfocus(){
	
} */
int CHMSInsuranceCardSettingDialog::OnApplyDateCheckValue(){
	return 0;
} 
	void CHMSInsuranceCardSettingDialog::OnOffLineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSInsuranceCardSettingDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSInsuranceCardSettingDialog::OnListDblClick(){
	
} 
void CHMSInsuranceCardSettingDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceCardSettingDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInsuranceCardSettingDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSInsuranceCardSettingDialog::OnAddCardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardSettingDialog::OnEditCardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardSettingDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInsuranceCardSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInsuranceCardSettingDialog::OnAddHMSInsuranceCardSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSInsuranceCardSettingDialog::OnEditHMSInsuranceCardSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSInsuranceCardSettingDialog::OnDeleteHMSInsuranceCardSettingDialog(){
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
 		OnCancelHMSInsuranceCardSettingDialog();
 	}
	return 0;
}
int CHMSInsuranceCardSettingDialog::OnSaveHMSInsuranceCardSettingDialog(){
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
 		//OnHMSInsuranceCardSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSInsuranceCardSettingDialog::OnCancelHMSInsuranceCardSettingDialog(){
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
int CHMSInsuranceCardSettingDialog::OnHMSInsuranceCardSettingDialogListLoadData(){
	return 0;
}
