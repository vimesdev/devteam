#include "HMSIVFDiscountInforDialog.h"
#include "MainFrm.h"
static void _OnDiscountSelectFnc(CWnd *pWnd){
	 ((CHMSIVFDiscountInforDialog*)pWnd)->OnDiscountSelect();
}
/*static void _OnGiayGioiThieuChangeFnc(CWnd *pWnd){
	((CHMSIVFDiscountInforDialog *)pWnd)->OnGiayGioiThieuChange();
} */
/*static void _OnGiayGioiThieuSetfocusFnc(CWnd *pWnd){
	((CHMSIVFDiscountInforDialog *)pWnd)->OnGiayGioiThieuSetfocus();} */ 
/*static void _OnGiayGioiThieuKillfocusFnc(CWnd *pWnd){
	((CHMSIVFDiscountInforDialog *)pWnd)->OnGiayGioiThieuKillfocus();
} */
static int _OnGiayGioiThieuCheckValueFnc(CWnd *pWnd){
	return ((CHMSIVFDiscountInforDialog *)pWnd)->OnGiayGioiThieuCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSIVFDiscountInforDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSIVFDiscountInforDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSIVFDiscountInforDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSIVFDiscountInforDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSIVFDiscountInforDialog *pVw = (CHMSIVFDiscountInforDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSIVFDiscountInforDialog *pVw = (CHMSIVFDiscountInforDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSIVFDiscountInforDialogFnc(CWnd *pWnd){
	 return ((CHMSIVFDiscountInforDialog*)pWnd)->OnAddHMSIVFDiscountInforDialog();
} 
static int _OnEditHMSIVFDiscountInforDialogFnc(CWnd *pWnd){
	 return ((CHMSIVFDiscountInforDialog*)pWnd)->OnEditHMSIVFDiscountInforDialog();
} 
static int _OnDeleteHMSIVFDiscountInforDialogFnc(CWnd *pWnd){
	 return ((CHMSIVFDiscountInforDialog*)pWnd)->OnDeleteHMSIVFDiscountInforDialog();
} 
static int _OnSaveHMSIVFDiscountInforDialogFnc(CWnd *pWnd){
	 return ((CHMSIVFDiscountInforDialog*)pWnd)->OnSaveHMSIVFDiscountInforDialog();
} 
static int _OnCancelHMSIVFDiscountInforDialogFnc(CWnd *pWnd){
	 return ((CHMSIVFDiscountInforDialog*)pWnd)->OnCancelHMSIVFDiscountInforDialog();
} 
CHMSIVFDiscountInforDialog::CHMSIVFDiscountInforDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSIVFDiscountInforDialog::~CHMSIVFDiscountInforDialog(){
}
void CHMSIVFDiscountInforDialog::OnCreateComponents(){
	m_wndDiscount.Create(this, _T("Miễn giảm"), 9, 30, 142, 55);
	m_wndGiayGioiThieuLabel.Create(this, _T("Giấy giới thiệu"), 9, 60, 142, 90);
	m_wndGiayGioiThieu.Create(this,147, 60, 495, 90); 
	m_wndNoteLabel.Create(this, _T("Note"), 9, 95, 142, 120);
	m_wndNote.Create(this,147, 95, 495, 200, true, false, true); 
	m_wndSave.Create(this, _T("Save"), 330, 210, 410, 235);
	m_wndCancel.Create(this, _T("Cancel"), 414, 210, 494, 235);
	m_wndDescGroupBox.Create(this, _T("THÔNG TIN MIỄN GIẢM"), 5, 4, 495, 204);

}
void CHMSIVFDiscountInforDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndGiayGioiThieu.SetLimitText(512);
	m_wndGiayGioiThieu.SetCheckValue(true);
	m_wndNote.SetLimitText(512);
	m_wndNote.SetCheckValue(true);

}
void CHMSIVFDiscountInforDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDiscount.SetEvent(WE_CLICK, _OnDiscountSelectFnc);
	//m_wndGiayGioiThieu.SetEvent(WE_CHANGE, _OnGiayGioiThieuChangeFnc);
	//m_wndGiayGioiThieu.SetEvent(WE_SETFOCUS, _OnGiayGioiThieuSetfocusFnc);
	//m_wndGiayGioiThieu.SetEvent(WE_KILLFOCUS, _OnGiayGioiThieuKillfocusFnc);
	m_wndGiayGioiThieu.SetEvent(WE_CHECKVALUE, _OnGiayGioiThieuCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();

}
void CHMSIVFDiscountInforDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndDiscount.GetDlgCtrlID(), m_bDiscount);
	DDX_Text(pDX, m_wndGiayGioiThieu.GetDlgCtrlID(), m_szGiayGioiThieu);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSIVFDiscountInforDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Discount")] =  m_bDiscount;
	m_jData[_T("GiayGioiThieu")] =  m_szGiayGioiThieu;
	m_jData[_T("Note")] =  m_szNote;
	}
	else
	{
			
	m_jData[_T("Discount")].GetValue(m_bDiscount);
	m_jData[_T("GiayGioiThieu")].GetValue(m_szGiayGioiThieu);
	m_jData[_T("Note")].GetValue(m_szNote);
	}

}
void CHMSIVFDiscountInforDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, tmpStr, szStatus;
	szSQL.Format(_T("SELECT * FROM RM_IVF_DISCOUNT_INFOR ") 							
				_T("WHERE IVF_DOCNO=%ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("IVF_ISDISCOUNT"), tmpStr);
		m_bDiscount = tmpStr==_T("1")?true:false;
		rs.GetValue(_T("IVF_GIAYGIOITHIEU"), m_szGiayGioiThieu);
		rs.GetValue(_T("IVF_NOTE"), m_szNote);	
		
	}
	{
		SetMode(VM_EDIT);
	}

}
void CHMSIVFDiscountInforDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSIVFDiscountInforDialog::SetDefaultValues(){

	m_bDiscount=FALSE;
	m_szGiayGioiThieu.Empty();
	m_szNote.Empty();

}
int CHMSIVFDiscountInforDialog::SetMode(int nMode){
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
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndSave.EnableWindow(FALSE);			
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
	void CHMSIVFDiscountInforDialog::OnDiscountSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSIVFDiscountInforDialog::OnGiayGioiThieuChange(){
	
} */
/*void CHMSIVFDiscountInforDialog::OnGiayGioiThieuSetfocus(){
	
} */
/*void CHMSIVFDiscountInforDialog::OnGiayGioiThieuKillfocus(){
	
} */
int CHMSIVFDiscountInforDialog::OnGiayGioiThieuCheckValue(){
	return 0;
} 
/*void CHMSIVFDiscountInforDialog::OnNoteChange(){
	
} */
/*void CHMSIVFDiscountInforDialog::OnNoteSetfocus(){
	
} */
/*void CHMSIVFDiscountInforDialog::OnNoteKillfocus(){
	
} */
int CHMSIVFDiscountInforDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSIVFDiscountInforDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSIVFDiscountInforDialog();
	
} 
void CHMSIVFDiscountInforDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSIVFDiscountInforDialog::OnAddHMSIVFDiscountInforDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSIVFDiscountInforDialog::OnEditHMSIVFDiscountInforDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSIVFDiscountInforDialog::OnDeleteHMSIVFDiscountInforDialog(){
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
 		OnCancelHMSIVFDiscountInforDialog();
 	}
	return 0;
}
int CHMSIVFDiscountInforDialog::OnSaveHMSIVFDiscountInforDialog()
{
 	if(!IsValidateData())
 		return -1;	

 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;	
	szSQL.Format(_T("UPDATE_IVF_DISCOUNT_INFOR(%ld, %d, TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s', '%s', '%s') "), pMF->m_nDocumentNo , m_bDiscount, pMF->GetSysDateTime(), m_szGiayGioiThieu, m_szNote ,pMF->GetCurrentUser()); 	
    //_msg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));	
 	if(ret > 0)
 	{
 		ShowMessageBox(_T("Have a nice day!, Nhớ thực hiện 5K"));
 		SetMode(VM_VIEW);
		CGuiDialog::OnOK();
 	}
 	else if (ret == -1)
 	{
		ShowMessageBox(_T("Chưa nhập thông tin giấy giới thiệu"));	
 	}
	else
	{
	}
 	return ret;
 	return 0;
}
int CHMSIVFDiscountInforDialog::OnCancelHMSIVFDiscountInforDialog(){
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
int CHMSIVFDiscountInforDialog::OnHMSIVFDiscountInforDialogListLoadData(){
	return 0;
}
