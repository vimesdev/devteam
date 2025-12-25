#include "AccVoucherIInfo.h"
#include "MainFrm.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CAccVoucherIInfo *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CAccVoucherIInfo *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CAccVoucherIInfo *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CAccVoucherIInfo *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CAccVoucherIInfo *)pWnd)->OnReferenceCheckValue();
} 
static int _OnAddAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CAccVoucherIInfo*)pWnd)->OnAddAccVoucherIInfo();
} 
static int _OnEditAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CAccVoucherIInfo*)pWnd)->OnEditAccVoucherIInfo();
} 
static int _OnDeleteAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CAccVoucherIInfo*)pWnd)->OnDeleteAccVoucherIInfo();
} 
static int _OnSaveAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CAccVoucherIInfo*)pWnd)->OnSaveAccVoucherIInfo();
} 
static int _OnCancelAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CAccVoucherIInfo*)pWnd)->OnCancelAccVoucherIInfo();
} 
CAccVoucherIInfo::CAccVoucherIInfo(){

	m_nDlgWidth = 235;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CAccVoucherIInfo::~CAccVoucherIInfo(){
}
void CAccVoucherIInfo::OnCreateComponents(){
	m_wndVoucherInformation.Create(this, _T("Voucher Information"), 5, 5, 225, 150);
	m_wndVoucherNoLabel.Create(this, _T("Voucher No"), 10, 30, 110, 55);
	m_wndVoucherNo.Create(this,115, 30, 220, 55); 
	m_wndVoucherDateLabel.Create(this, _T("Voucher Date"), 10, 60, 110, 85);
	m_wndVoucherDate.Create(this,115, 60, 220, 85); 
	m_wndAccountingDateLabel.Create(this, _T("Accounting Date"), 10, 90, 110, 115);
	m_wndAccountingDate.Create(this,115, 90, 220, 115); 
	m_wndReferenceLabel.Create(this, _T("Reference"), 10, 119, 110, 144);
	m_wndReference.Create(this,115, 119, 220, 144); 

}
void CAccVoucherIInfo::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndVoucherNo.SetLimitText(1024);
	m_wndVoucherNo.SetCheckValue(true);
	m_wndVoucherDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndVoucherDate.SetCheckValue(true);
	m_wndAccountingDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAccountingDate.SetCheckValue(true);
	m_wndReference.SetLimitText(35);
	m_wndReference.SetCheckValue(true);

}
void CAccVoucherIInfo::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndVoucherNo.SetEvent(WE_CHANGE, _OnVoucherNoChangeFnc);
	//m_wndVoucherNo.SetEvent(WE_SETFOCUS, _OnVoucherNoSetfocusFnc);
	//m_wndVoucherNo.SetEvent(WE_KILLFOCUS, _OnVoucherNoKillfocusFnc);
	m_wndVoucherNo.SetEvent(WE_CHECKVALUE, _OnVoucherNoCheckValueFnc);
	//m_wndVoucherDate.SetEvent(WE_CHANGE, _OnVoucherDateChangeFnc);
	//m_wndVoucherDate.SetEvent(WE_SETFOCUS, _OnVoucherDateSetfocusFnc);
	//m_wndVoucherDate.SetEvent(WE_KILLFOCUS, _OnVoucherDateKillfocusFnc);
	m_wndVoucherDate.SetEvent(WE_CHECKVALUE, _OnVoucherDateCheckValueFnc);
	//m_wndAccountingDate.SetEvent(WE_CHANGE, _OnAccountingDateChangeFnc);
	//m_wndAccountingDate.SetEvent(WE_SETFOCUS, _OnAccountingDateSetfocusFnc);
	//m_wndAccountingDate.SetEvent(WE_KILLFOCUS, _OnAccountingDateKillfocusFnc);
	m_wndAccountingDate.SetEvent(WE_CHECKVALUE, _OnAccountingDateCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddAccVoucherIInfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditAccVoucherIInfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteAccVoucherIInfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveAccVoucherIInfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelAccVoucherIInfoFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CAccVoucherIInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);

}
void CAccVoucherIInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CAccVoucherIInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CAccVoucherIInfo::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szReference.Empty();

}
int CAccVoucherIInfo::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CAccVoucherIInfo::OnVoucherNoChange(){
	
} */
/*void CAccVoucherIInfo::OnVoucherNoSetfocus(){
	
} */
/*void CAccVoucherIInfo::OnVoucherNoKillfocus(){
	
} */
int CAccVoucherIInfo::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CAccVoucherIInfo::OnVoucherDateChange(){
	
} */
/*void CAccVoucherIInfo::OnVoucherDateSetfocus(){
	
} */
/*void CAccVoucherIInfo::OnVoucherDateKillfocus(){
	
} */
int CAccVoucherIInfo::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CAccVoucherIInfo::OnAccountingDateChange(){
	
} */
/*void CAccVoucherIInfo::OnAccountingDateSetfocus(){
	
} */
/*void CAccVoucherIInfo::OnAccountingDateKillfocus(){
	
} */
int CAccVoucherIInfo::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CAccVoucherIInfo::OnReferenceChange(){
	
} */
/*void CAccVoucherIInfo::OnReferenceSetfocus(){
	
} */
/*void CAccVoucherIInfo::OnReferenceKillfocus(){
	
} */
int CAccVoucherIInfo::OnReferenceCheckValue(){
	return 0;
} 
int CAccVoucherIInfo::OnAddAccVoucherIInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CAccVoucherIInfo::OnEditAccVoucherIInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CAccVoucherIInfo::OnDeleteAccVoucherIInfo(){
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
 		OnCancelAccVoucherIInfo();
 	}
	return 0;
}
int CAccVoucherIInfo::OnSaveAccVoucherIInfo(){
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
 		//OnAccVoucherIInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CAccVoucherIInfo::OnCancelAccVoucherIInfo(){
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
int CAccVoucherIInfo::OnAccVoucherIInfoListLoadData(){
	return 0;
}
