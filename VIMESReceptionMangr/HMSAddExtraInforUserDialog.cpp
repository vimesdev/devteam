#include "HMSAddExtraInforUserDialog.h"
#include "HMSMainFrame.h"

static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddextrainforUserDialog *)pWnd)->OnNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAddextrainforUserDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAddextrainforUserDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSAddextrainforUserDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddextrainforUserDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAddextrainforUserDialog *pVw = (CHMSAddextrainforUserDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAddextrainforUserDialog *pVw = (CHMSAddextrainforUserDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSExtraInforUserDialogFnc(CWnd *pWnd){
	 return ((CHMSAddextrainforUserDialog*)pWnd)->OnAddHMSExtraInforUserDialog();
} 
static int _OnEditHMSExtraInforUserDialogFnc(CWnd *pWnd){
	 return ((CHMSAddextrainforUserDialog*)pWnd)->OnEditHMSExtraInforUserDialog();
} 
static int _OnDeleteHMSExtraInforUserDialogFnc(CWnd *pWnd){
	 return ((CHMSAddextrainforUserDialog*)pWnd)->OnDeleteHMSExtraInforUserDialog();
} 
static int _OnSaveHMSExtraInforUserDialogFnc(CWnd *pWnd){
	 return ((CHMSAddextrainforUserDialog*)pWnd)->OnSaveHMSExtraInforUserDialog();
} 
static int _OnCancelHMSExtraInforUserDialogFnc(CWnd *pWnd){
	 return ((CHMSAddextrainforUserDialog*)pWnd)->OnCancelHMSExtraInforUserDialog();
}
static int _OnPhoneCheckValueFnc(CWnd *pWnd){
	return ((CHMSAddextrainforUserDialog *)pWnd)->OnPhoneCheckValue();
} 

CHMSAddextrainforUserDialog::CHMSAddextrainforUserDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 425;
	m_nDlgHeight = 125;
	SetDefaultValues();
	
}
CHMSAddextrainforUserDialog::~CHMSAddextrainforUserDialog(){
}
void CHMSAddextrainforUserDialog::OnCreateComponents()
{
	m_wndUserInformation.Create(this, _T("Thông tin người giới thiệu"), 5, 5, 390, 187);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 110, 55);
	m_wndName.Create(this,115, 30, 387, 55); 
	m_wndDepartmentLabel.Create(this, _T("Khoa giới thiệu"), 10, 60, 110, 85);
	m_wndDepartment.Create(this,115, 60, 386, 85); 
	m_wndPhoneLabel.Create(this, _T("Mobile"), 10, 90, 110, 115);
	m_wndPhone.Create(this,115, 90, 386, 115); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 120, 110, 145);
	m_wndNote.Create(this,115, 120, 386, 183); 
	m_wndSave.Create(this, _T("&Save"), 220, 193, 300, 218);
	m_wndClose.Create(this, _T("&Close"), 305, 193, 385, 218);

}
void CHMSAddextrainforUserDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_wndName.SetLimitText(64);
	m_wndName.SetCheckValue(true);
	
	m_wndName.SetInitCap(1);
	m_wndNote.SetLimitText(35);
	m_wndPhone.SetCheckValue(true);
	//m_wndPhone.SetLimitText(35);
	//m_wndNote.SetCheckValue(true);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 90);
	m_wndDepartment.InsertColumn(1, _T("AliasID"), CFMT_TEXT, 90);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);

	m_hms_extrainfor_userTbl.SetTableName(_T("hms_extrainfor_user"));
	m_hms_extrainfor_userTbl.AddField(_T("HOU_DOCNO"), dfLong);	
	m_hms_extrainfor_userTbl.AddField(_T("HOU_NAME"), dfText, 64);	
	m_hms_extrainfor_userTbl.AddField(_T("HOU_DEPT"), dfText, 7);
	m_hms_extrainfor_userTbl.AddField(_T("HOU_PHONE"), dfText, 35);
	m_hms_extrainfor_userTbl.AddField(_T("HOU_NOTE"), dfText, 254);
	m_hms_extrainfor_userTbl.AddField(_T("HOU_CREATEDBY"), dfText, 35);
	m_hms_extrainfor_userTbl.AddField(_T("HOU_CREATEDDATE"), dfDateTime);
	m_hms_extrainfor_userTbl.AddField(_T("HOU_UPDATEDBY"), dfText, 35);
	m_hms_extrainfor_userTbl.AddField(_T("HOU_UPDATEDDATE"), dfDateTime);
}
void CHMSAddextrainforUserDialog::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndPhone.SetEvent(WE_CHECKVALUE, _OnPhoneCheckValueFnc);
	GetDataToScreen();
	
	//SetMode(VM_ADD);

}
void CHMSAddextrainforUserDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndPhone.GetDlgCtrlID(), m_szPhone);

}
void CHMSAddextrainforUserDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("Note")] =  m_szNote;
	m_jData[_T("Phone")] =  m_szPhone;

	}
	else
	{
			
	
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	m_jData[_T("Phone")].GetValue(m_szPhone);
	}

}
void CHMSAddextrainforUserDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM HMS_EXTRAINFOR_USER WHERE HOU_DOCNO = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);	

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("HOU_NAME"), m_szName);
		rs.GetValue(_T("HOU_DEPT"), m_szDepartmentKey);
		rs.GetValue(_T("HOU_PHONE"), m_szPhone);
		rs.GetValue(_T("HOU_NOTE"), m_szNote);
		rs.GetValue(_T("HOU_CREATEDBY"), m_szWhocreate);
		UpdateData(FALSE);
		SetMode(VM_EDIT);
	}
	else
	{
		SetMode(VM_ADD);
	}

}
void CHMSAddextrainforUserDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_DOCNO"), pMF->m_nDocumentNo);
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_NAME"), m_szName);
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_DEPT"), m_szDepartmentKey);
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_PHONE"), m_szPhone);	
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_NOTE"), m_szNote);
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_CREATEDBY"), pMF->GetCurrentUser());
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_CREATEDDATE"), pMF->GetSysDateTime());
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_UPDATEDBY"), pMF->GetCurrentUser());
	m_hms_extrainfor_userTbl.SetValue(_T("HOU_UPDATEDDATE"), pMF->GetSysDateTime());

}
void CHMSAddextrainforUserDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szDepartmentKey.Empty();
	m_szNote.Empty();
	m_szPhone.Empty();

}
int CHMSAddextrainforUserDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
/*void CHMSAddextrainforUserDialog::OnIDChange(){
	
} */
/*void CHMSAddextrainforUserDialog::OnIDSetfocus(){
	
} */
/*void CHMSAddextrainforUserDialog::OnIDKillfocus(){
	
} */

/*void CHMSAddextrainforUserDialog::OnGroupChange(){
	
} */
/*void CHMSAddextrainforUserDialog::OnGroupSetfocus(){
	
} */
/*void CHMSAddextrainforUserDialog::OnGroupKillfocus(){
	
} */


int CHMSAddextrainforUserDialog::OnPhoneCheckValue(){
	return 0;
} 
/*void CHMSAddextrainforUserDialog::OnNameChange(){
	
} */
/*void CHMSAddextrainforUserDialog::OnNameSetfocus(){
	
} */
/*void CHMSAddextrainforUserDialog::OnNameKillfocus(){
	
} */
int CHMSAddextrainforUserDialog::OnNameCheckValue()
{
	
	return 0;
} 
void CHMSAddextrainforUserDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAddextrainforUserDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSAddextrainforUserDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSAddextrainforUserDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSAddextrainforUserDialog::OnDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	return pMF->LoadDepartment(&m_wndDepartment, m_szDepartmentKey);
	return 0;
}
/*void CHMSAddextrainforUserDialog::OnDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAddextrainforUserDialog::OnNoteChange(){
	
} */
/*void CHMSAddextrainforUserDialog::OnNoteSetfocus(){
	
} */
/*void CHMSAddextrainforUserDialog::OnNoteKillfocus(){
	
} */
int CHMSAddextrainforUserDialog::OnNoteCheckValue()
{
	return 0;
} 
void CHMSAddextrainforUserDialog::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(OnSaveHMSExtraInforUserDialog() > 0)
		CGuiDialog::OnOK();
} 
void CHMSAddextrainforUserDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSAddextrainforUserDialog::OnAddHMSExtraInforUserDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAddextrainforUserDialog::OnEditHMSExtraInforUserDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAddextrainforUserDialog::OnDeleteHMSExtraInforUserDialog(){
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
 		OnCancelHMSExtraInforUserDialog();
 	}
	return 0;
}
int CHMSAddextrainforUserDialog::OnSaveHMSExtraInforUserDialog()
{
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);	

 	if(!IsValidateData())
 		return -1;

 	if(GetMode() == VM_ADD)
	{
 		szSQL = m_hms_extrainfor_userTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT)
	{
 		
		CString szWhere, szWhocreate;
		szWhocreate = pMF->GetCurrentUser();
		if ((m_szWhocreate != szWhocreate) && (pMF->m_UserInfo.su_groupid != _T("A")))

		{
			ShowMessageBox(_T("Bạn không phải người tạo, không cho phép sửa!"));
			SetMode(VM_VIEW);
			return -1;
		}
 		szWhere.Format(_T(" WHERE HOU_DOCNO=%ld"), pMF->m_nDocumentNo);
 		szSQL = m_hms_extrainfor_userTbl.GetUpdateSQL(_T("HOU_DOCNO, HOU_CREATEDBY"));
 		szSQL += szWhere;
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSExtraInforUserDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAddextrainforUserDialog::OnCancelHMSExtraInforUserDialog(){
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
int CHMSAddextrainforUserDialog::OnHMSExtraInforUserDialogListLoadData()
{
	return 0;
}