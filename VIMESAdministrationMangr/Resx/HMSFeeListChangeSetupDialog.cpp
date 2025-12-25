#include "HMSFeeListChangeSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeListChangeSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeSetupDialog *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeSetupDialog *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSFeeListChangeSetupDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSFeeListChangeSetupDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeSetupDialog *pVw = (CHMSFeeListChangeSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeSetupDialog *pVw = (CHMSFeeListChangeSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeSetupDialog *pVw = (CHMSFeeListChangeSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeSetupDialog *pVw = (CHMSFeeListChangeSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeSetupDialog *pVw = (CHMSFeeListChangeSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeeListChangeSetupDialog *pVw = (CHMSFeeListChangeSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeeListChangeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnAddHMSFeeListChangeSetupDialog();
} 
static int _OnEditHMSFeeListChangeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnEditHMSFeeListChangeSetupDialog();
} 
static int _OnDeleteHMSFeeListChangeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnDeleteHMSFeeListChangeSetupDialog();
} 
static int _OnSaveHMSFeeListChangeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnSaveHMSFeeListChangeSetupDialog();
} 
static int _OnCancelHMSFeeListChangeSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeListChangeSetupDialog*)pWnd)->OnCancelHMSFeeListChangeSetupDialog();
} 
CHMSFeeListChangeSetupDialog::CHMSFeeListChangeSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSFeeListChangeSetupDialog::~CHMSFeeListChangeSetupDialog(){
}
void CHMSFeeListChangeSetupDialog::OnCreateComponents(){
	m_wndInformationChanged.Create(this, _T("Information Changed"), 5, 360, 510, 445);
	m_wndList.Create(this,5, 5, 510, 355); 
	m_wndCodeLabel.Create(this, _T("Code"), 10, 385, 130, 410);
	m_wndCode.Create(this,135, 385, 255, 410); 
	m_wndApplyDateLabel.Create(this, _T("Apply Date"), 260, 385, 380, 410);
	m_wndApplyDate.Create(this,385, 385, 505, 410); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 415, 130, 440);
	m_wndDescription.Create(this,135, 415, 505, 440); 
	m_wndAdd.Create(this, _T("&Add"), 5, 450, 85, 475);
	m_wndEdit.Create(this, _T("&Edit"), 90, 450, 170, 475);
	m_wndDelete.Create(this, _T("&Delete"), 175, 450, 255, 475);
	m_wndSave.Create(this, _T("&Save"), 260, 450, 340, 475);
	m_wndCancel.Create(this, _T("Cancel"), 345, 450, 425, 475);
	m_wndClose.Create(this, _T("&Close"), 430, 450, 510, 475);

}
void CHMSFeeListChangeSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Apply Date"), CFMT_DATE, 100);
	m_hms_feelist_changeTbl.SetTableName(_T("hms_feelist_change"));
	m_hms_feelist_changeTbl.AddField(_T("HFC_CODE"), dfText, 15); 
	m_hms_feelist_changeTbl.AddField(_T("HFC_CREATEDBY"), dfText, 15); 
	m_hms_feelist_changeTbl.AddField(_T("HFC_CREATEDDATE"), dfDateTime); 
	m_hms_feelist_changeTbl.AddField(_T("HFC_DESCRIPTION"), dfText, 254); 
	m_hms_feelist_changeTbl.AddField(_T("HFC_APPLYDATE"), dfDate); 

}
void CHMSFeeListChangeSetupDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSFeeListChangeSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSFeeListChangeSetupDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("ApplyDate")] =  m_szApplyDate;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("ApplyDate")].GetValue(m_szApplyDate);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSFeeListChangeSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("HFC_CODE"), m_szCode);
	rs.GetValue(_T("HFC_DESCRIPTION"), m_szDescription);
	rs.GetValue(_T("HFC_APPLYDATE"), m_szApplyDate);

}
void CHMSFeeListChangeSetupDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_feelist_changeTbl.SetValue(_T("HFC_CODE"), m_szCode);
	m_hms_feelist_changeTbl.SetValue(_T("HFC_DESCRIPTION"), m_szDescription);
	m_hms_feelist_changeTbl.SetValue(_T("HFC_APPLYDATE"), m_szApplyDate);

}
void CHMSFeeListChangeSetupDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szApplyDate.Empty();
	m_szDescription.Empty();

}
int CHMSFeeListChangeSetupDialog::SetMode(int nMode){
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
void CHMSFeeListChangeSetupDialog::OnListDblClick(){
	
} 
void CHMSFeeListChangeSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListChangeSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeListChangeSetupDialog::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("ApplyDate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSFeeListChangeSetupDialog::OnCodeChange(){
	
} */
/*void CHMSFeeListChangeSetupDialog::OnCodeSetfocus(){
	
} */
/*void CHMSFeeListChangeSetupDialog::OnCodeKillfocus(){
	
} */
int CHMSFeeListChangeSetupDialog::OnCodeCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeSetupDialog::OnApplyDateChange(){
	
} */
/*void CHMSFeeListChangeSetupDialog::OnApplyDateSetfocus(){
	
} */
/*void CHMSFeeListChangeSetupDialog::OnApplyDateKillfocus(){
	
} */
int CHMSFeeListChangeSetupDialog::OnApplyDateCheckValue(){
	return 0;
} 
/*void CHMSFeeListChangeSetupDialog::OnDescriptionChange(){
	
} */
/*void CHMSFeeListChangeSetupDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSFeeListChangeSetupDialog::OnDescriptionKillfocus(){
	
} */
int CHMSFeeListChangeSetupDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSFeeListChangeSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFeeListChangeSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeListChangeSetupDialog::OnAddHMSFeeListChangeSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeListChangeSetupDialog::OnEditHMSFeeListChangeSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeListChangeSetupDialog::OnDeleteHMSFeeListChangeSetupDialog(){
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
 		OnCancelHMSFeeListChangeSetupDialog();
 	}
	return 0;
}
int CHMSFeeListChangeSetupDialog::OnSaveHMSFeeListChangeSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_hms_feelist_changeTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_hms_feelist_changeTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSFeeListChangeSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeListChangeSetupDialog::OnCancelHMSFeeListChangeSetupDialog(){
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
int CHMSFeeListChangeSetupDialog::OnHMSFeeListChangeSetupDialogListLoadData(){
	return 0;
}
