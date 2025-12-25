#include "HMSTreatModeSettingDialog.h"
#include "MainFrm.h"
/*static void _OnCreatedByChangeFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnCreatedByChange();
} */
/*static void _OnCreatedBySetfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnCreatedBySetfocus();} */ 
/*static void _OnCreatedByKillfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnCreatedByKillfocus();
} */
static int _OnCreatedByCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatModeSettingDialog *)pWnd)->OnCreatedByCheckValue();
} 
/*static void _OnUpdatedByChangeFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnUpdatedByChange();
} */
/*static void _OnUpdatedBySetfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnUpdatedBySetfocus();} */ 
/*static void _OnUpdatedByKillfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnUpdatedByKillfocus();
} */
static int _OnUpdatedByCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatModeSettingDialog *)pWnd)->OnUpdatedByCheckValue();
} 
static void _OnTreatModeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatModeSettingDialog* )pWnd)->OnTreatModeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTreatModeSelendokFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnTreatModeSelendok();
}
/*static void _OnTreatModeSetfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnTreatModeKillfocus();
}*/
/*static void _OnTreatModeKillfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnTreatModeKillfocus();
}*/
static long _OnTreatModeLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatModeSettingDialog *)pWnd)->OnTreatModeLoadData();
}
/*static void _OnTreatModeAddNewFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnTreatModeAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatModeSettingDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatModeSettingDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSTreatModeSettingDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSTreatModeSettingDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTreatModeSettingDialog *pVw = (CHMSTreatModeSettingDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatModeSettingDialog *pVw = (CHMSTreatModeSettingDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatModeSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatModeSettingDialog*)pWnd)->OnAddHMSTreatModeSettingDialog();
} 
static int _OnEditHMSTreatModeSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatModeSettingDialog*)pWnd)->OnEditHMSTreatModeSettingDialog();
} 
static int _OnDeleteHMSTreatModeSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatModeSettingDialog*)pWnd)->OnDeleteHMSTreatModeSettingDialog();
} 
static int _OnSaveHMSTreatModeSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatModeSettingDialog*)pWnd)->OnSaveHMSTreatModeSettingDialog();
} 
static int _OnCancelHMSTreatModeSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatModeSettingDialog*)pWnd)->OnCancelHMSTreatModeSettingDialog();
} 
CHMSTreatModeSettingDialog::CHMSTreatModeSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 405;
	m_nDlgHeight = 165;
	SetDefaultValues();
}
CHMSTreatModeSettingDialog::~CHMSTreatModeSettingDialog(){
}
void CHMSTreatModeSettingDialog::OnCreateComponents(){
	m_wndCreatedByLabel.Create(this, _T("Created By"), 6, 7, 126, 32);
	m_wndCreatedBy.Create(this,131, 7, 381, 32); 
	m_wndUpdatedByLabel.Create(this, _T("Updated By"), 5, 37, 125, 62);
	m_wndUpdatedBy.Create(this,130, 37, 380, 62); 
	m_wndTreatModeLabel.Create(this, _T("Treat Mode"), 5, 67, 125, 92);
	m_wndTreatMode.Create(this,130, 67, 380, 92); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 97, 125, 122);
	m_wndFromDate.Create(this,130, 97, 250, 122); 
	m_wndToDateLabel.Create(this, _T("To Date"), 5, 127, 125, 152);
	m_wndToDate.Create(this,130, 127, 250, 152); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 157, 125, 182);
	m_wndNote.Create(this,130, 157, 380, 182); 
	m_wndSave.Create(this, _T("&Save"), 215, 187, 295, 212);
	m_wndClose.Create(this, _T("&Close"), 300, 187, 380, 212);

}
void CHMSTreatModeSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCreatedBy.SetLimitText(35);
	m_wndCreatedBy.SetReadOnly(true);
	m_wndUpdatedBy.SetLimitText(35);
	m_wndUpdatedBy.SetReadOnly(true);
	m_wndTreatMode.SetCheckValue(false);
	m_wndTreatMode.LimitText(35);
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(false);

	m_wndToDate.SetReadOnly();

	m_wndTreatMode.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTreatMode.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	

}
void CHMSTreatModeSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndCreatedBy.SetEvent(WE_CHANGE, _OnCreatedByChangeFnc);
	//m_wndCreatedBy.SetEvent(WE_SETFOCUS, _OnCreatedBySetfocusFnc);
	//m_wndCreatedBy.SetEvent(WE_KILLFOCUS, _OnCreatedByKillfocusFnc);
	m_wndCreatedBy.SetEvent(WE_CHECKVALUE, _OnCreatedByCheckValueFnc);
	//m_wndUpdatedBy.SetEvent(WE_CHANGE, _OnUpdatedByChangeFnc);
	//m_wndUpdatedBy.SetEvent(WE_SETFOCUS, _OnUpdatedBySetfocusFnc);
	//m_wndUpdatedBy.SetEvent(WE_KILLFOCUS, _OnUpdatedByKillfocusFnc);
	m_wndUpdatedBy.SetEvent(WE_CHECKVALUE, _OnUpdatedByCheckValueFnc);
	m_wndTreatMode.SetEvent(WE_SELENDOK, _OnTreatModeSelendokFnc);
	//m_wndTreatMode.SetEvent(WE_SETFOCUS, _OnTreatModeSetfocusFnc);
	//m_wndTreatMode.SetEvent(WE_KILLFOCUS, _OnTreatModeKillfocusFnc);
	m_wndTreatMode.SetEvent(WE_SELCHANGE, _OnTreatModeSelectChangeFnc);
	m_wndTreatMode.SetEvent(WE_LOADDATA, _OnTreatModeLoadDataFnc);
	//m_wndTreatMode.SetEvent(WE_ADDNEW, _OnTreatModeAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CHMSTreatModeSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCreatedBy.GetDlgCtrlID(), m_szCreatedBy);
	DDX_Text(pDX, m_wndUpdatedBy.GetDlgCtrlID(), m_szUpdatedBy);
	DDX_TextEx(pDX, m_wndTreatMode.GetDlgCtrlID(), m_szTreatModeKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSTreatModeSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("CreatedBy")] =  m_szCreatedBy;
	m_jData[_T("UpdatedBy")] =  m_szUpdatedBy;
	m_jData[_T("TreatMode")] =  m_szTreatModeKey;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("CreatedBy")].GetValue(m_szCreatedBy);
	m_jData[_T("UpdatedBy")].GetValue(m_szUpdatedBy);
	m_jData[_T("TreatMode")].GetValue(m_szTreatModeKey);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSTreatModeSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_treatmode_doc WHERE htd_docno = %ld and htd_type='E' and htd_deptid='%s'  "), 
		pMF->m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);

	SetDefaultValues();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("htd_treatmode"), m_szTreatModeKey);

		rs.GetValue(_T("htd_fromdate"), m_szFromDate);
		rs.GetValue(_T("htd_todate"), m_szToDate);
		rs.GetValue(_T("htd_note"), m_szNote);
	}
	else
	{
		m_szFromDate = pMF->GetAdmitDate();
		m_szToDate = m_szFromDate;
	}
	m_szTreatModeKey.Trim();
	SetMode(VM_EDIT);
}
void CHMSTreatModeSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatModeSettingDialog::SetDefaultValues(){

	m_szCreatedBy.Empty();
	m_szUpdatedBy.Empty();
	m_szTreatModeKey=_T("A");
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szNote.Empty();

}
int CHMSTreatModeSettingDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CHMSTreatModeSettingDialog::OnCreatedByChange(){
	
} */
/*void CHMSTreatModeSettingDialog::OnCreatedBySetfocus(){
	
} */
/*void CHMSTreatModeSettingDialog::OnCreatedByKillfocus(){
	
} */
int CHMSTreatModeSettingDialog::OnCreatedByCheckValue(){
	return 0;
} 
/*void CHMSTreatModeSettingDialog::OnUpdatedByChange(){
	
} */
/*void CHMSTreatModeSettingDialog::OnUpdatedBySetfocus(){
	
} */
/*void CHMSTreatModeSettingDialog::OnUpdatedByKillfocus(){
	
} */
int CHMSTreatModeSettingDialog::OnUpdatedByCheckValue(){
	return 0;
} 
void CHMSTreatModeSettingDialog::OnTreatModeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatModeSettingDialog::OnTreatModeSelendok(){
	 
}
/*void CHMSTreatModeSettingDialog::OnTreatModeSetfocus(){
	
}*/
/*void CHMSTreatModeSettingDialog::OnTreatModeKillfocus(){
	
}*/
long CHMSTreatModeSettingDialog::OnTreatModeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long ret=  pMF->LoadSelectionList(&m_wndTreatMode, _T("HMS_TREAT_MODE"), m_szTreatModeKey);
	
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTreatMode.IsSearchKey() && !m_szTreatModeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTreatModeKey
};
	m_wndTreatMode.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatMode.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSTreatModeSettingDialog::OnTreatModeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTreatModeSettingDialog::OnFromDateChange(){
	
} */
/*void CHMSTreatModeSettingDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSTreatModeSettingDialog::OnFromDateKillfocus(){
	
} */
int CHMSTreatModeSettingDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSTreatModeSettingDialog::OnToDateChange(){
	
} */
/*void CHMSTreatModeSettingDialog::OnToDateSetfocus(){
	
} */
/*void CHMSTreatModeSettingDialog::OnToDateKillfocus(){
	
} */
int CHMSTreatModeSettingDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CHMSTreatModeSettingDialog::OnNoteChange(){
	
} */
/*void CHMSTreatModeSettingDialog::OnNoteSetfocus(){
	
} */
/*void CHMSTreatModeSettingDialog::OnNoteKillfocus(){
	
} */
int CHMSTreatModeSettingDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSTreatModeSettingDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSTreatModeSettingDialog();
} 
void CHMSTreatModeSettingDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatModeSettingDialog::OnAddHMSTreatModeSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatModeSettingDialog::OnEditHMSTreatModeSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatModeSettingDialog::OnDeleteHMSTreatModeSettingDialog(){
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
 		OnCancelHMSTreatModeSettingDialog();
 	}
	return 0;
}
int CHMSTreatModeSettingDialog::OnSaveHMSTreatModeSettingDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("HMS_TREATMODE_DOC_UPDATE('%s', %ld, '%s', 0,  'E', '%s', '%s', '%s', '%s') "), 
		pMF->GetCurrentUser(), pMF->m_nDocumentNo, pMF->m_szDept, m_szTreatModeKey, m_szFromDate, m_szToDate, m_szNote);
 _tprintf(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
		CGuiDialog::OnOK();
 	}
 	else
 	{
		CString szMsg;
		szMsg.Format(_T("[%d] Lỗi cập nhật chế độ điều trị"), ret);
		ShowMessageBox(szMsg);
 	}
 	return ret;
 	return 0;
}
int CHMSTreatModeSettingDialog::OnCancelHMSTreatModeSettingDialog(){
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
int CHMSTreatModeSettingDialog::OnHMSTreatModeSettingDialogListLoadData(){
	return 0;
}
