#include "CAccVoucherIInfo.h"
#include "MainFrm.h"
/*static void _OnVoucherNoChangeFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnVoucherNoChange();
} */
/*static void _OnVoucherNoSetfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnVoucherNoSetfocus();} */ 
/*static void _OnVoucherNoKillfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnVoucherNoKillfocus();
} */
static int _OnVoucherNoCheckValueFnc(CWnd *pWnd){
	return ((CCAccVoucherIInfo *)pWnd)->OnVoucherNoCheckValue();
} 
/*static void _OnVoucherDateChangeFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnVoucherDateChange();
} */
/*static void _OnVoucherDateSetfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnVoucherDateSetfocus();} */ 
/*static void _OnVoucherDateKillfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnVoucherDateKillfocus();
} */
static int _OnVoucherDateCheckValueFnc(CWnd *pWnd){
	return ((CCAccVoucherIInfo *)pWnd)->OnVoucherDateCheckValue();
} 
/*static void _OnAccountingDateChangeFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnAccountingDateChange();
} */
/*static void _OnAccountingDateSetfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnAccountingDateSetfocus();} */ 
/*static void _OnAccountingDateKillfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnAccountingDateKillfocus();
} */
static int _OnAccountingDateCheckValueFnc(CWnd *pWnd){
	return ((CCAccVoucherIInfo *)pWnd)->OnAccountingDateCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CCAccVoucherIInfo *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CCAccVoucherIInfo *)pWnd)->OnReferenceCheckValue();
} 
static int _OnAddCAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CCAccVoucherIInfo*)pWnd)->OnAddCAccVoucherIInfo();
} 
static int _OnEditCAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CCAccVoucherIInfo*)pWnd)->OnEditCAccVoucherIInfo();
} 
static int _OnDeleteCAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CCAccVoucherIInfo*)pWnd)->OnDeleteCAccVoucherIInfo();
} 
static int _OnSaveCAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CCAccVoucherIInfo*)pWnd)->OnSaveCAccVoucherIInfo();
} 
static int _OnCancelCAccVoucherIInfoFnc(CWnd *pWnd){
	 return ((CCAccVoucherIInfo*)pWnd)->OnCancelCAccVoucherIInfo();
} 
CCAccVoucherIInfo::CCAccVoucherIInfo(){

	m_nDlgWidth = 235;
	m_nDlgHeight = 160;
	SetDefaultValues();
}
CCAccVoucherIInfo::~CCAccVoucherIInfo(){
}
void CCAccVoucherIInfo::OnCreateComponents(){
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
void CCAccVoucherIInfo::OnInitializeComponents(){
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
void CCAccVoucherIInfo::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCAccVoucherIInfoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCAccVoucherIInfoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCAccVoucherIInfoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCAccVoucherIInfoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCAccVoucherIInfoFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CCAccVoucherIInfo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndVoucherNo.GetDlgCtrlID(), m_szVoucherNo);
	DDX_TextEx(pDX, m_wndVoucherDate.GetDlgCtrlID(), m_szVoucherDate);
	DDX_TextEx(pDX, m_wndAccountingDate.GetDlgCtrlID(), m_szAccountingDate);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);

}
void CCAccVoucherIInfo::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCAccVoucherIInfo::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCAccVoucherIInfo::SetDefaultValues(){

	m_szVoucherNo.Empty();
	m_szVoucherDate.Empty();
	m_szAccountingDate.Empty();
	m_szReference.Empty();

}
int CCAccVoucherIInfo::SetMode(int nMode){
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
/*void CCAccVoucherIInfo::OnVoucherNoChange(){
	
} */
/*void CCAccVoucherIInfo::OnVoucherNoSetfocus(){
	
} */
/*void CCAccVoucherIInfo::OnVoucherNoKillfocus(){
	
} */
int CCAccVoucherIInfo::OnVoucherNoCheckValue(){
	return 0;
} 
/*void CCAccVoucherIInfo::OnVoucherDateChange(){
	
} */
/*void CCAccVoucherIInfo::OnVoucherDateSetfocus(){
	
} */
/*void CCAccVoucherIInfo::OnVoucherDateKillfocus(){
	
} */
int CCAccVoucherIInfo::OnVoucherDateCheckValue(){
	return 0;
} 
/*void CCAccVoucherIInfo::OnAccountingDateChange(){
	
} */
/*void CCAccVoucherIInfo::OnAccountingDateSetfocus(){
	
} */
/*void CCAccVoucherIInfo::OnAccountingDateKillfocus(){
	
} */
int CCAccVoucherIInfo::OnAccountingDateCheckValue(){
	return 0;
} 
/*void CCAccVoucherIInfo::OnReferenceChange(){
	
} */
/*void CCAccVoucherIInfo::OnReferenceSetfocus(){
	
} */
/*void CCAccVoucherIInfo::OnReferenceKillfocus(){
	
} */
int CCAccVoucherIInfo::OnReferenceCheckValue(){
	return 0;
} 
int CCAccVoucherIInfo::OnAddCAccVoucherIInfo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCAccVoucherIInfo::OnEditCAccVoucherIInfo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCAccVoucherIInfo::OnDeleteCAccVoucherIInfo(){
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
 		OnCancelCAccVoucherIInfo();
 	}
	return 0;
}
int CCAccVoucherIInfo::OnSaveCAccVoucherIInfo(){
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
 		//OnCAccVoucherIInfoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCAccVoucherIInfo::OnCancelCAccVoucherIInfo(){
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
int CCAccVoucherIInfo::OnCAccVoucherIInfoListLoadData(){
	return 0;
}
