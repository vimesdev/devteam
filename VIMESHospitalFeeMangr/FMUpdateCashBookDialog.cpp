#include "FMUpdateCashBookDialog.h"
#include "MainFrm.h"
/*static void _OnReceiptDateChangeFnc(CWnd *pWnd){
	((CFMUpdateCashBookDialog *)pWnd)->OnReceiptDateChange();
} */
/*static void _OnReceiptDateSetfocusFnc(CWnd *pWnd){
	((CFMUpdateCashBookDialog *)pWnd)->OnReceiptDateSetfocus();} */ 
/*static void _OnReceiptDateKillfocusFnc(CWnd *pWnd){
	((CFMUpdateCashBookDialog *)pWnd)->OnReceiptDateKillfocus();
} */
static int _OnReceiptDateCheckValueFnc(CWnd *pWnd){
	return ((CFMUpdateCashBookDialog *)pWnd)->OnReceiptDateCheckValue();
} 
/*static void _OnReceiptByChangeFnc(CWnd *pWnd){
	((CFMUpdateCashBookDialog *)pWnd)->OnReceiptByChange();
} */
/*static void _OnReceiptBySetfocusFnc(CWnd *pWnd){
	((CFMUpdateCashBookDialog *)pWnd)->OnReceiptBySetfocus();} */ 
/*static void _OnReceiptByKillfocusFnc(CWnd *pWnd){
	((CFMUpdateCashBookDialog *)pWnd)->OnReceiptByKillfocus();
} */
static int _OnReceiptByCheckValueFnc(CWnd *pWnd){
	return ((CFMUpdateCashBookDialog *)pWnd)->OnReceiptByCheckValue();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CFMUpdateCashBookDialog *pVw = (CFMUpdateCashBookDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFMUpdateCashBookDialog *pVw = (CFMUpdateCashBookDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateCashBookDialog*)pWnd)->OnAddFMCashBookDialog();
} 
static int _OnEditFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateCashBookDialog*)pWnd)->OnEditFMCashBookDialog();
} 
static int _OnDeleteFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateCashBookDialog*)pWnd)->OnDeleteFMCashBookDialog();
} 
static int _OnSaveFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateCashBookDialog*)pWnd)->OnSaveFMCashBookDialog();
} 
static int _OnCancelFMCashBookDialogFnc(CWnd *pWnd){
	 return ((CFMUpdateCashBookDialog*)pWnd)->OnCancelFMCashBookDialog();
}
static long _OnCashTypeLoadDataFnc(CWnd *pWnd)
{
	return ((CFMUpdateCashBookDialog *)pWnd)->OnCashTypeLoadData();
}
CFMUpdateCashBookDialog::CFMUpdateCashBookDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CFMUpdateCashBookDialog::~CFMUpdateCashBookDialog(){
}
void CFMUpdateCashBookDialog::OnCreateComponents()
{
	
	/*m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 369, 90);
	m_wndReceiptDateLabel.Create(this, _T("Date"), 10, 30, 110, 55);
	m_wndReceiptDate.Create(this,115, 30, 245, 55); 
	m_wndReceiptByLabel.Create(this, _T("Approved By"), 10, 60, 110, 85);
	m_wndReceiptBy.Create(this,115, 60, 365, 85); 
	m_wndOK.Create(this, _T("&OK"), 185, 95, 275, 120);
	m_wndCancel.Create(this, _T("&Cancel"), 280, 95, 370, 120);*/
	
	m_wndReceiptDateLabel.Create(this, _T("Date"), 10, 30, 110, 55);
	m_wndReceiptDate.Create(this,115, 30, 245, 55); 
	m_wndReceiptByLabel.Create(this, _T("Người tạo"), 10, 60, 110, 85);
	m_wndReceiptInformation.Create(this, _T("Receipt Information"), 5, 5, 369, 150);
	m_wndReceiptBy.Create(this,115, 60, 365, 85); 
	m_wndCashNameLabel.Create(this, _T("Số phiếu"), 10, 91, 110, 116);
	m_wndCashName.Create(this,115, 91, 365, 116); 
	m_wndCashTypeLabel.Create(this, _T("Loại phiếu"), 10, 121, 110, 146);
	m_wndCashType.Create(this,115, 121, 365, 146); 
	m_wndOK.Create(this, _T("&OK"), 185, 156, 275, 181);
	m_wndCancel.Create(this, _T("&Cancel"), 280, 156, 370, 181);
	m_wndReceiptDate.SetReadOnly(true);
	m_wndCashName.SetReadOnly(true);

}
void CFMUpdateCashBookDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
//	m_wndReceiptDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndReceiptDate.SetCheckValue(true);
//	m_wndReceiptDate.SetReadOnly(true);
	m_wndReceiptBy.SetLimitText(35);
//	m_wndReceiptBy.SetCheckValue(true);
	m_wndReceiptBy.SetReadOnly(true);

	m_wndCashType.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndCashType.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);
	
}
void CFMUpdateCashBookDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndReceiptDate.SetEvent(WE_CHANGE, _OnReceiptDateChangeFnc);
	//m_wndReceiptDate.SetEvent(WE_SETFOCUS, _OnReceiptDateSetfocusFnc);
	//m_wndReceiptDate.SetEvent(WE_KILLFOCUS, _OnReceiptDateKillfocusFnc);
	m_wndReceiptDate.SetEvent(WE_CHECKVALUE, _OnReceiptDateCheckValueFnc);
	//m_wndReceiptBy.SetEvent(WE_CHANGE, _OnReceiptByChangeFnc);
	//m_wndReceiptBy.SetEvent(WE_SETFOCUS, _OnReceiptBySetfocusFnc);
	//m_wndReceiptBy.SetEvent(WE_KILLFOCUS, _OnReceiptByKillfocusFnc);
	m_wndReceiptBy.SetEvent(WE_CHECKVALUE, _OnReceiptByCheckValueFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndCashType.SetEvent(WE_LOADDATA, _OnCashTypeLoadDataFnc);
	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CFMUpdateCashBookDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndReceiptDate.GetDlgCtrlID(), m_szReceiptDate);
	DDX_Text(pDX, m_wndReceiptBy.GetDlgCtrlID(), m_szReceiptBy);
	DDX_Text(pDX, m_wndCashName.GetDlgCtrlID(), m_szCashName);
	DDX_TextEx(pDX, m_wndCashType.GetDlgCtrlID(), m_szCashTypeKey);

}
void CFMUpdateCashBookDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT FAC_INVOICEDATE, FAC_USER_ID, FAC_INVOICENO FROM fa_cash WHERE fac_cash_id=%ld and NVL(FAC_LOCKED, 'N')='Y' "), m_nCashID);

	rs.ExecSQL(szSQL);	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("FAC_INVOICEDATE"), m_szReceiptDate);
		rs.GetValue(_T("FAC_USER_ID"), m_szReceiptBy);
		rs.GetValue(_T("FAC_INVOICENO"), m_szCashName);
	}
	else
	{
		m_szReceiptBy = pMF->GetCurrentUser();
		if(m_szReceiptDate.IsEmpty())
			m_szReceiptDate = pMF->GetSysDateTime();

	}
	

}
void CFMUpdateCashBookDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFMUpdateCashBookDialog::SetDefaultValues(){

	m_szReceiptDate.Empty();
	m_szReceiptBy.Empty();
	m_szCashName.Empty();
	m_szCashTypeKey.Empty();

}
int CFMUpdateCashBookDialog::SetMode(int nMode){
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
/*void CFMUpdateCashBookDialog::OnReceiptDateChange(){
	
} */
/*void CFMUpdateCashBookDialog::OnReceiptDateSetfocus(){
	
} */
/*void CFMUpdateCashBookDialog::OnReceiptDateKillfocus(){
	
} */
int CFMUpdateCashBookDialog::OnReceiptDateCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSysDate;
	szSysDate = pMF->GetSysDate();
	int n = CompareDate(m_szReceiptDate, szSysDate);
_tprintf(_T("\r\n%d"),n);
	if (n < -365 || n > 365)
		return -1;
	return 0;
} 
/*void CFMUpdateCashBookDialog::OnReceiptByChange(){
	
} */
/*void CFMUpdateCashBookDialog::OnReceiptBySetfocus(){
	
} */
/*void CFMUpdateCashBookDialog::OnReceiptByKillfocus(){
	
} */
int CFMUpdateCashBookDialog::OnReceiptByCheckValue(){
	return 0;
}

long CFMUpdateCashBookDialog::OnCashTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCashType.AddItems(_T("DVYC"), _T("Dịch vụ yêu cầu"), NULL);
	m_wndCashType.AddItems(_T("DV-PTTYC"), _T("Dịch vụ phẫu thuật yêu cầu"), NULL);
	m_wndCashType.AddItems(_T("CK-DV-YC"), _T("Chuyển khoản yêu cầu"), NULL);
	m_wndCashType.AddItems(_T("CK-DV-PTTYC"), _T("Chuyển khoản phẫu thuật yêu cầu"), NULL);
	m_wndCashType.AddItems(_T("DV"), _T("Phiếu dịch vụ"), NULL);
	return 0;
}

void CFMUpdateCashBookDialog::OnOKSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szInvoiceno, szCashtype, szInvoicheck;	
	szCashtype = m_wndCashType.GetCurrent(0);
	szInvoiceno = m_szCashName.Left(10);

	//Cần check chỉ hỗ trợ phiếu DV -> DVYC hoặc PTTYC
	//Ghi log lại người cập nhật, thời gian cập nhật
	//Phân quyền ai được sử dụng chức năng này

	/*if (m_szCashBookID != _T("DV") && m_szCashBookID != _T("DV-AB") && m_szCashBookID != _T("CK-DV"))
	{
		ShowMessageBox(_T("Chưa hỗ trợ loại phiếu này, mới chỉ hỗ trợ loại phiếu thu DV, DV-AB -> DVYC, DV-PTTYC!"));
		return;
	}*/
	
	if(!IsValidateData())
 		return;	

	 int ret = ShowMessageBox(_T("Chức năng này sẽ cập nhật lại phiếu, OK?"),MB_YESNO);
		if(ret == IDNO)
		return;
		else	
	if(m_nCashID > 0)
	{
		szSQL.Format(_T("UPDATE fa_cash SET FAC_INVOICENO='%s%s',") \
			_T("FAC_CASHBOOK_ID='%s' ") \
			_T("WHERE fac_cash_id=%ld"), 
			szInvoiceno, szCashtype, szCashtype, m_nCashID);
		pMF->ExecSQL(szSQL);
		//_msg(_T("%s"), szSQL);
	}

	CGuiDialog::OnOK();
} 
void CFMUpdateCashBookDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFMUpdateCashBookDialog::OnAddFMCashBookDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFMUpdateCashBookDialog::OnEditFMCashBookDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFMUpdateCashBookDialog::OnDeleteFMCashBookDialog(){
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
 		OnCancelFMCashBookDialog();
 	}
	return 0;
}
int CFMUpdateCashBookDialog::OnSaveFMCashBookDialog(){
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
 		//OnFMCashBookDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CFMUpdateCashBookDialog::OnCancelFMCashBookDialog(){
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
int CFMUpdateCashBookDialog::OnFMCashBookDialogListLoadData(){
	return 0;
}
