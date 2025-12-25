#include "HMSUpdateExtraInformation.h"
#include "MainFrm.h"
/*static void _OnSohochieuChangeFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnSohochieuChange();
} */
/*static void _OnSohochieuSetfocusFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnSohochieuSetfocus();} */ 
/*static void _OnSohochieuKillfocusFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnSohochieuKillfocus();
} */
static int _OnSohochieuCheckValueFnc(CWnd *pWnd){
	return ((CCHMSUpdateExtraInFor *)pWnd)->OnSohochieuCheckValue();
} 
/*static void _OnApplyDateChangeFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnApplyDateChange();
} */
/*static void _OnApplyDateSetfocusFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnApplyDateSetfocus();} */ 
/*static void _OnApplyDateKillfocusFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnApplyDateKillfocus();
} */
static int _OnApplyDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSUpdateExtraInFor *)pWnd)->OnApplyDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CCHMSUpdateExtraInFor *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CCHMSUpdateExtraInFor *)pWnd)->OnNoteCheckValue();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CCHMSUpdateExtraInFor *pVw = (CCHMSUpdateExtraInFor *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CCHMSUpdateExtraInFor *pVw = (CCHMSUpdateExtraInFor *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CCHMSUpdateExtraInFor *pVw = (CCHMSUpdateExtraInFor *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSUpdateExtraInFor *pVw = (CCHMSUpdateExtraInFor *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSUpdateExtraInForFnc(CWnd *pWnd){
	 return ((CCHMSUpdateExtraInFor*)pWnd)->OnAddCHMSUpdateExtraInFor();
} 
static int _OnEditCHMSUpdateExtraInForFnc(CWnd *pWnd){
	 return ((CCHMSUpdateExtraInFor*)pWnd)->OnEditCHMSUpdateExtraInFor();
} 
static int _OnDeleteCHMSUpdateExtraInForFnc(CWnd *pWnd){
	 return ((CCHMSUpdateExtraInFor*)pWnd)->OnDeleteCHMSUpdateExtraInFor();
} 
static int _OnSaveCHMSUpdateExtraInForFnc(CWnd *pWnd){
	 return ((CCHMSUpdateExtraInFor*)pWnd)->OnSaveCHMSUpdateExtraInFor();
} 
static int _OnCancelCHMSUpdateExtraInForFnc(CWnd *pWnd){
	 return ((CCHMSUpdateExtraInFor*)pWnd)->OnCancelCHMSUpdateExtraInFor();
} 
CCHMSUpdateExtraInFor::CCHMSUpdateExtraInFor(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSUpdateExtraInFor::~CCHMSUpdateExtraInFor()
{
}
void CCHMSUpdateExtraInFor::OnCreateComponents()
{
	m_wndGroupBox.Create(this, _T("Thông tin hộ chiếu"), 6, 5, 521, 193);
	m_wndSohochieuLabel.Create(this, _T("Số hộ chiếu"), 10, 30, 110, 55);
	m_wndSohochieu.Create(this,115, 29, 515, 54); 
	m_wndApplyDateLabel.Create(this, _T("Ngày cấp"), 10, 60, 110, 85);
	m_wndApplyDate.Create(this,115, 60, 515, 85); 
	m_wndNoteLabel.Create(this, _T("Ghi chú"), 10, 90, 110, 115);
	m_wndNote.Create(this,115, 90, 515, 189, true, false, true); 
	m_wndUpdate.Create(this, _T("&Update"), 180, 199, 260, 228);
	m_wndSave.Create(this, _T("&Save"), 265, 199, 345, 228);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 199, 430, 228);
	m_wndClose.Create(this, _T("&Close"), 435, 199, 515, 228);

}
void CCHMSUpdateExtraInFor::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSohochieu.SetLimitText(1024);
	m_wndSohochieu.SetCheckValue(true);
	m_wndApplyDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndApplyDate.SetCheckValue(true);
	m_wndNote.SetLimitText(1024);
	m_wndNote.SetCheckValue(true);
	m_hms_docTbl.SetTableName(_T("hms_doc"));
	m_hms_docTbl.AddField(_T("HD_SOHOCHIEU"), dfText, 128);
	m_hms_docTbl.AddField(_T("HD_NGAYCAP_HOCHIEU"), dfDateTime);	
	m_hms_docTbl.AddField(_T("HD_HOCHIEU_GHICHU"), dfText, 254);

}
void CCHMSUpdateExtraInFor::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSohochieu.SetEvent(WE_CHANGE, _OnSohochieuChangeFnc);
	//m_wndSohochieu.SetEvent(WE_SETFOCUS, _OnSohochieuSetfocusFnc);
	//m_wndSohochieu.SetEvent(WE_KILLFOCUS, _OnSohochieuKillfocusFnc);
	m_wndSohochieu.SetEvent(WE_CHECKVALUE, _OnSohochieuCheckValueFnc);
	//m_wndApplyDate.SetEvent(WE_CHANGE, _OnApplyDateChangeFnc);
	//m_wndApplyDate.SetEvent(WE_SETFOCUS, _OnApplyDateSetfocusFnc);
	//m_wndApplyDate.SetEvent(WE_KILLFOCUS, _OnApplyDateKillfocusFnc);
	m_wndApplyDate.SetEvent(WE_CHECKVALUE, _OnApplyDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();	

}
void CCHMSUpdateExtraInFor::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSohochieu.GetDlgCtrlID(), m_szSohochieu);
	DDX_TextEx(pDX, m_wndApplyDate.GetDlgCtrlID(), m_szApplyDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CCHMSUpdateExtraInFor::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Sohochieu")] =  m_szSohochieu;
	m_jData[_T("ApplyDate")] =  m_szApplyDate;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Sohochieu")].GetValue(m_szSohochieu);
	m_jData[_T("ApplyDate")].GetValue(m_szApplyDate);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CCHMSUpdateExtraInFor::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT HD_SOHOCHIEU as Sohochieu,") \
	_T(" HD_NGAYCAP_HOCHIEU as Ngaycap,") \
	_T(" HD_HOCHIEU_GHICHU as Note") \
	_T(" from hms_doc where hd_docno=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("Sohochieu"), m_szSohochieu);
			rs.GetValue(_T("Ngaycap"), m_szApplyDate);
			rs.GetValue(_T("Note"), m_szNote);				
		}
	SetMode(VM_VIEW);

}
void CCHMSUpdateExtraInFor::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_docTbl.SetValue(_T("HD_SOHOCHIEU"), m_szSohochieu);
	m_hms_docTbl.SetValue(_T("HD_NGAYCAP_HOCHIEU"), m_szApplyDate);	
	m_hms_docTbl.SetValue(_T("HD_HOCHIEU_GHICHU"), m_szNote);

}
void CCHMSUpdateExtraInFor::SetDefaultValues(){

	m_szSohochieu.Empty();
	m_szApplyDate.Empty();
	m_szNote.Empty();

}
int CCHMSUpdateExtraInFor::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 1, 2, -1); 
			m_wndSohochieu.SetFocus();

			if(m_szApplyDate.IsEmpty())
				m_szApplyDate = pMF->GetSysDateTime();			
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 3, -1);			
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
/*void CCHMSUpdateExtraInFor::OnSohochieuChange(){
	
} */
/*void CCHMSUpdateExtraInFor::OnSohochieuSetfocus(){
	
} */
/*void CCHMSUpdateExtraInFor::OnSohochieuKillfocus(){
	
} */
int CCHMSUpdateExtraInFor::OnSohochieuCheckValue(){
	return 0;
} 
/*void CCHMSUpdateExtraInFor::OnApplyDateChange(){
	
} */
/*void CCHMSUpdateExtraInFor::OnApplyDateSetfocus(){
	
} */
/*void CCHMSUpdateExtraInFor::OnApplyDateKillfocus(){
	
} */
int CCHMSUpdateExtraInFor::OnApplyDateCheckValue(){
	return 0;
} 
/*void CCHMSUpdateExtraInFor::OnNoteChange(){
	
} */
/*void CCHMSUpdateExtraInFor::OnNoteSetfocus(){
	
} */
/*void CCHMSUpdateExtraInFor::OnNoteKillfocus(){
	
} */
int CCHMSUpdateExtraInFor::OnNoteCheckValue(){
	return 0;
} 
void CCHMSUpdateExtraInFor::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditCHMSUpdateExtraInFor();
	
} 
void CCHMSUpdateExtraInFor::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSUpdateExtraInFor();
} 
void CCHMSUpdateExtraInFor::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCHMSUpdateExtraInFor();
} 
void CCHMSUpdateExtraInFor::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();		
} 
int CCHMSUpdateExtraInFor::OnAddCHMSUpdateExtraInFor(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSUpdateExtraInFor::OnEditCHMSUpdateExtraInFor(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSUpdateExtraInFor::OnDeleteCHMSUpdateExtraInFor(){
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
 		OnCancelCHMSUpdateExtraInFor();
 	}
	return 0;
}
int CCHMSUpdateExtraInFor::OnSaveCHMSUpdateExtraInFor()
{
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	pMF->BeginTransaction();
	if (m_szApplyDate == _T("1752/09/14"))
		{
		szSQL.Format(_T("UPDATE hms_doc SET HD_SOHOCHIEU ='%s', HD_NGAYCAP_HOCHIEU='', HD_HOCHIEU_GHICHU='%s' WHERE hd_docno = %ld"), m_szSohochieu ,m_szNote,pMF->m_nDocumentNo);	
		}
	else
		{
		szSQL.Format(_T("UPDATE hms_doc SET HD_SOHOCHIEU ='%s', HD_NGAYCAP_HOCHIEU=cast_string2timestamp('%s'), HD_HOCHIEU_GHICHU='%s' WHERE hd_docno = %ld"), m_szSohochieu ,m_szApplyDate,m_szNote,pMF->m_nDocumentNo);	
		}
	rs.ExecSQL(szSQL);	
	pMF->Commit();
	//_msg(_T("%s"), szSQL);
	GetDataToScreen();	
	SetMode(VM_VIEW);	
	return 0;
}
int CCHMSUpdateExtraInFor::OnCancelCHMSUpdateExtraInFor()
{
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
int CCHMSUpdateExtraInFor::OnCHMSUpdateExtraInForListLoadData(){
	return 0;
}
