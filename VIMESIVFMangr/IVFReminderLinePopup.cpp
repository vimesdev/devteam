#include "IVFReminderLinePopup.h"
#include "MainFrm.h"
#include "IVFReminderDlg.h"

/*static void _OnNoidungChangeFnc(CWnd *pWnd){
	((CIVFReminderLinePopup *)pWnd)->OnNoidungChange();
} */
/*static void _OnNoidungSetfocusFnc(CWnd *pWnd){
	((CIVFReminderLinePopup *)pWnd)->OnNoidungSetfocus();} */ 
/*static void _OnNoidungKillfocusFnc(CWnd *pWnd){
	((CIVFReminderLinePopup *)pWnd)->OnNoidungKillfocus();
} */
static int _OnNoidungCheckValueFnc(CWnd *pWnd){
	return ((CIVFReminderLinePopup *)pWnd)->OnNoidungCheckValue();
} 
/*static void _OnLanChangeFnc(CWnd *pWnd){
	((CIVFReminderLinePopup *)pWnd)->OnLanChange();
} */
/*static void _OnLanSetfocusFnc(CWnd *pWnd){
	((CIVFReminderLinePopup *)pWnd)->OnLanSetfocus();} */ 
/*static void _OnLanKillfocusFnc(CWnd *pWnd){
	((CIVFReminderLinePopup *)pWnd)->OnLanKillfocus();
} */
static int _OnLanCheckValueFnc(CWnd *pWnd){
	return ((CIVFReminderLinePopup *)pWnd)->OnLanCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CIVFReminderLinePopup *pVw = (CIVFReminderLinePopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CIVFReminderLinePopup *pVw = (CIVFReminderLinePopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddIVFReminderLinePopupFnc(CWnd *pWnd){
	 return ((CIVFReminderLinePopup*)pWnd)->OnAddIVFReminderLinePopup();
} 
static int _OnEditIVFReminderLinePopupFnc(CWnd *pWnd){
	 return ((CIVFReminderLinePopup*)pWnd)->OnEditIVFReminderLinePopup();
} 
static int _OnDeleteIVFReminderLinePopupFnc(CWnd *pWnd){
	 return ((CIVFReminderLinePopup*)pWnd)->OnDeleteIVFReminderLinePopup();
} 
static int _OnSaveIVFReminderLinePopupFnc(CWnd *pWnd){
	 return ((CIVFReminderLinePopup*)pWnd)->OnSaveIVFReminderLinePopup();
} 
static int _OnCancelIVFReminderLinePopupFnc(CWnd *pWnd){
	 return ((CIVFReminderLinePopup*)pWnd)->OnCancelIVFReminderLinePopup();
} 
CIVFReminderLinePopup::CIVFReminderLinePopup(CWnd* pParent, CString szReminderId, CString szLineId)
:CGuiPopup(pParent), m_szReminderId(szReminderId), m_szLineId(szLineId){

	m_nDlgWidth = 565;
	m_nDlgHeight = 105;
	SetDefaultValues();
}
CIVFReminderLinePopup::~CIVFReminderLinePopup(){
}
void CIVFReminderLinePopup::OnCreateComponents(){
	m_wndNoidung.Create(this,90, 5, 560, 70); 
	m_wndLanLabel.Create(this, _T("Lan"), 5, 75, 85, 100);
	m_wndLan.Create(this,90, 75, 170, 100); 
	m_wndSave.Create(this, _T("&Save"), 395, 75, 475, 100);
	m_wndClose.Create(this, _T("&Close"), 480, 75, 560, 100);
	m_wndNoidungLabel.Create(this, _T("Noi_dung"), 5, 30, 85, 55);

}
void CIVFReminderLinePopup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndNoidung.SetLimitText(35);
	m_wndNoidung.SetCheckValue(true);
	m_wndLan.SetLimitText(16);
	m_wndLan.SetCheckValue(true);
	m_wndLan.SetReadOnly();

}
void CIVFReminderLinePopup::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndNoidung.SetEvent(WE_CHANGE, _OnNoidungChangeFnc);
	//m_wndNoidung.SetEvent(WE_SETFOCUS, _OnNoidungSetfocusFnc);
	//m_wndNoidung.SetEvent(WE_KILLFOCUS, _OnNoidungKillfocusFnc);
	m_wndNoidung.SetEvent(WE_CHECKVALUE, _OnNoidungCheckValueFnc);
	//m_wndLan.SetEvent(WE_CHANGE, _OnLanChangeFnc);
	//m_wndLan.SetEvent(WE_SETFOCUS, _OnLanSetfocusFnc);
	//m_wndLan.SetEvent(WE_KILLFOCUS, _OnLanKillfocusFnc);
	m_wndLan.SetEvent(WE_CHECKVALUE, _OnLanCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	GetDataToScreen();

}
void CIVFReminderLinePopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNoidung.GetDlgCtrlID(), m_szNoidung);
	DDX_Text(pDX, m_wndLan.GetDlgCtrlID(), m_nLan);

}
void CIVFReminderLinePopup::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Noidung")] =  m_szNoidung;
	m_jData[_T("Lan")] =  m_nLan;
	}
	else
	{
			
	m_jData[_T("Noidung")].GetValue(m_szNoidung);
	m_jData[_T("Lan")].GetValue(m_nLan);
	}

}
void CIVFReminderLinePopup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT lan_nhac,") \
	_T("        noi_dung") \
	_T(" FROM   ivf_reminder_line") \
	_T(" WHERE  ivf_reminder_line_id = '%s' "), m_szLineId);

	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{	
		SetMode(VM_ADD);
		return;
	}
	rs.GetValue(_T("lan_nhac"), m_nLan);
	rs.GetValue(_T("noi_dung"), m_szNoidung);
	SetMode(VM_EDIT);
}
void CIVFReminderLinePopup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFReminderLinePopup::SetDefaultValues(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	m_szNoidung.Empty();
	m_nLan=1;
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("select count(*) + 1 ") \
				_T(" from ivf_reminder_line ") \
				_T(" where id_reminder = '%s'"), m_szReminderId);
	rs.ExecSQL(szSQL);
	m_nLan = rs.GetIntValue();

}
int CIVFReminderLinePopup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(FALSE, -1);
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
/*void CIVFReminderLinePopup::OnNoidungChange(){
	
} */
/*void CIVFReminderLinePopup::OnNoidungSetfocus(){
	
} */
/*void CIVFReminderLinePopup::OnNoidungKillfocus(){
	
} */
int CIVFReminderLinePopup::OnNoidungCheckValue(){
	return 0;
} 
/*void CIVFReminderLinePopup::OnLanChange(){
	
} */
/*void CIVFReminderLinePopup::OnLanSetfocus(){
	
} */
/*void CIVFReminderLinePopup::OnLanKillfocus(){
	
} */
int CIVFReminderLinePopup::OnLanCheckValue(){
	return 0;
} 
void CIVFReminderLinePopup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveIVFReminderLinePopup();
} 
void CIVFReminderLinePopup::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	ClosePopup();
} 
int CIVFReminderLinePopup::OnAddIVFReminderLinePopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFReminderLinePopup::OnEditIVFReminderLinePopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFReminderLinePopup::OnDeleteIVFReminderLinePopup(){
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
 		OnCancelIVFReminderLinePopup();
 	}
	return 0;
}
int CIVFReminderLinePopup::OnSaveIVFReminderLinePopup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CDbfMap tbl;
	tbl.SetTableName(_T("ivf_reminder_line"));
	tbl.AddField(_T("NGUOI_TAO"), dfText, 35);
	tbl.AddField(_T("ID_REMINDER"), dfText, 32);
	tbl.AddField(_T("NOI_DUNG"), dfText, 254);

	tbl.SetValue(_T("NGUOI_TAO"), pMF->GetCurrentUser());
	tbl.SetValue(_T("ID_REMINDER"), m_szReminderId);
	tbl.SetValue(_T("NOI_DUNG"), m_szNoidung);
 	if(GetMode() == VM_ADD){
 		szSQL = tbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE ivf_reminder_line_id = '%s'"), m_szLineId);
 		szSQL = tbl.GetUpdateSQL(_T("ID_REMINDER"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		CGuiPopup::ClosePopup();
		((CIVFReminderDlg*) GetParent())->OnListLoadData();
 	}
 	else
 	{
 	}
 	return ret;
}
int CIVFReminderLinePopup::OnCancelIVFReminderLinePopup(){
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
int CIVFReminderLinePopup::OnIVFReminderLinePopupListLoadData(){
	return 0;
}
