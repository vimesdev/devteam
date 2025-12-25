#include "HMSWorkPlace108StaffDlg.h"
#include "MainFrm.h"
/*static void _OnWorkingPlaceChangeFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnWorkingPlaceChange();
} */
/*static void _OnWorkingPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnWorkingPlaceSetfocus();} */ 
/*static void _OnWorkingPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnWorkingPlaceKillfocus();
} */
static int _OnWorkingPlaceCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkPlace108StaffDlg *)pWnd)->OnWorkingPlaceCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSWorkPlace108StaffDlg* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSWorkPlace108StaffDlg *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSWorkPlace108StaffDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSWorkPlace108StaffDlg *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSWorkPlace108StaffDlg *pVw = (CHMSWorkPlace108StaffDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSWorkPlace108StaffDlg *pVw = (CHMSWorkPlace108StaffDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSWorkPlace108StaffDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlace108StaffDlg*)pWnd)->OnAddHMSWorkPlace108StaffDlg();
} 
static int _OnEditHMSWorkPlace108StaffDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlace108StaffDlg*)pWnd)->OnEditHMSWorkPlace108StaffDlg();
} 
static int _OnDeleteHMSWorkPlace108StaffDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlace108StaffDlg*)pWnd)->OnDeleteHMSWorkPlace108StaffDlg();
} 
static int _OnSaveHMSWorkPlace108StaffDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlace108StaffDlg*)pWnd)->OnSaveHMSWorkPlace108StaffDlg();
} 
static int _OnCancelHMSWorkPlace108StaffDlgFnc(CWnd *pWnd){
	 return ((CHMSWorkPlace108StaffDlg*)pWnd)->OnCancelHMSWorkPlace108StaffDlg();
} 
CHMSWorkPlace108StaffDlg::CHMSWorkPlace108StaffDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSWorkPlace108StaffDlg::~CHMSWorkPlace108StaffDlg(){
}
void CHMSWorkPlace108StaffDlg::OnCreateComponents(){
	m_wndWorkingPlaceLabel.Create(this, _T("Working Place"), 10, 30, 90, 55);
	m_wndWorkingPlace.Create(this,95, 30, 435, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 60, 90, 85);
	m_wndEmployeeInformation.Create(this, _T("Employee Information"), 5, 5, 440, 150);
	m_wndDepartment.Create(this,95, 60, 435, 85); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 90, 90, 146);
	m_wndNote.Create(this,95, 90, 435, 146, true, false, true); 
	m_wndSave.Create(this, _T("&OK"), 270, 156, 350, 181);
	m_wndClose.Create(this, _T("Close"), 355, 156, 435, 181);

}
void CHMSWorkPlace108StaffDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndWorkingPlace.SetLimitText(1024);
	m_wndWorkingPlace.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(128);
	m_wndNote.SetCheckValue(true);
	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("hd_bv108"), dfText, 5);
	m_hms_docTbl.AddField(_T("hd_khoa"), dfText, 20);	
	m_hms_docTbl.AddField(_T("hd_note_108_staff"), dfText, 128);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDepartment.InsertColumn(1, _T("Alias"), CFMT_TEXT, 100);
	m_wndDepartment.InsertColumn(2, _T("Name"), CFMT_TEXT, 450);

}
void CHMSWorkPlace108StaffDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndWorkingPlace.SetEvent(WE_CHANGE, _OnWorkingPlaceChangeFnc);
	//m_wndWorkingPlace.SetEvent(WE_SETFOCUS, _OnWorkingPlaceSetfocusFnc);
	//m_wndWorkingPlace.SetEvent(WE_KILLFOCUS, _OnWorkingPlaceKillfocusFnc);
	m_wndWorkingPlace.SetEvent(WE_CHECKVALUE, _OnWorkingPlaceCheckValueFnc);
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
	GetDataToScreen();
	SetMode(VM_EDIT);	

}
void CHMSWorkPlace108StaffDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndWorkingPlace.GetDlgCtrlID(), m_szWorkingPlace);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSWorkPlace108StaffDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("WorkingPlace")] =  m_szWorkingPlace;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("WorkingPlace")].GetValue(m_szWorkingPlace);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSWorkPlace108StaffDlg::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL;	
	szSQL.Format(_T(" SELECT hd_bv108 as TenBenhVien,") \
	_T(" hd_khoa as Khoa,") \
	_T(" hd_note_108_staff as Note") \
	_T(" from hms_doc where hd_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("TenBenhVien"), m_szWorkingPlace);
			rs.GetValue(_T("Khoa"), m_szDepartmentKey);
			rs.GetValue(_T("Note"), m_szNote);				
		}
	SetMode(VM_VIEW);

}
void CHMSWorkPlace108StaffDlg::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("hd_bv108"), m_szWorkingPlace);
	m_hms_docTbl.SetValue(_T("hd_khoa"), m_szDepartmentKey);	
	m_hms_docTbl.SetValue(_T("hd_note_108_staff"), m_szNote);

}
void CHMSWorkPlace108StaffDlg::SetDefaultValues(){

	m_szWorkingPlace.Empty();
	m_szDepartmentKey.Empty();
	m_szNote.Empty();

}
int CHMSWorkPlace108StaffDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
			m_szWorkingPlace.Format(_T("Bệnh viện TWQĐ 108"));			
			m_wndWorkingPlace.EnableWindow(FALSE);
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
/*void CHMSWorkPlace108StaffDlg::OnWorkingPlaceChange(){
	
} */
/*void CHMSWorkPlace108StaffDlg::OnWorkingPlaceSetfocus(){
	
} */
/*void CHMSWorkPlace108StaffDlg::OnWorkingPlaceKillfocus(){
	
} */
int CHMSWorkPlace108StaffDlg::OnWorkingPlaceCheckValue(){
	return 0;
} 
void CHMSWorkPlace108StaffDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSWorkPlace108StaffDlg::OnDepartmentSelendok(){
	 
}
/*void CHMSWorkPlace108StaffDlg::OnDepartmentSetfocus(){
	
}*/
/*void CHMSWorkPlace108StaffDlg::OnDepartmentKillfocus(){
	
}*/
long CHMSWorkPlace108StaffDlg::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" AND sd_id='%s' "), m_szDepartmentKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, SD_ID_ALIAS as aliasname, sd_name as name FROM sys_dept WHERE 1=1 AND SD_ISACTIVE = 'Y' %s ORDER BY sd_id "),szWhere);

	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("aliasname")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSWorkPlace108StaffDlg::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSWorkPlace108StaffDlg::OnNoteChange(){
	
} */
/*void CHMSWorkPlace108StaffDlg::OnNoteSetfocus(){
	
} */
/*void CHMSWorkPlace108StaffDlg::OnNoteKillfocus(){
	
} */
int CHMSWorkPlace108StaffDlg::OnNoteCheckValue(){
	return 0;
} 
void CHMSWorkPlace108StaffDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSWorkPlace108StaffDlg();
	
} 
void CHMSWorkPlace108StaffDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CHMSWorkPlace108StaffDlg::OnAddHMSWorkPlace108StaffDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSWorkPlace108StaffDlg::OnEditHMSWorkPlace108StaffDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSWorkPlace108StaffDlg::OnDeleteHMSWorkPlace108StaffDlg(){
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
 		OnCancelHMSWorkPlace108StaffDlg();
 	}
	return 0;
}
int CHMSWorkPlace108StaffDlg::OnSaveHMSWorkPlace108StaffDlg()
{
 	
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	//CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //CString szSQL;
	//CRecord rs(&pMF->m_db);
	//UpdateData(true);
	//pMF->BeginTransaction();
	//szSQL.Format(_T("UPDATE hms_doc SET hd_bv108 ='BV108', hd_khoa='%s', hd_note_108_staff='%s' WHERE hd_docno = %ld") ,m_szDepartmentKey,m_szNote,m_nDocumentNo);	
	//rs.ExecSQL(szSQL);	
	//pMF->Commit();
	//_msg(_T("%s"), szSQL);
	////GetDataToScreen();	
	SetMode(VM_VIEW);
	CGuiDialog::OnOK();	
	return 0;
}
int CHMSWorkPlace108StaffDlg::OnCancelHMSWorkPlace108StaffDlg(){
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
int CHMSWorkPlace108StaffDlg::OnHMSWorkPlace108StaffDlgListLoadData(){
	return 0;
}
