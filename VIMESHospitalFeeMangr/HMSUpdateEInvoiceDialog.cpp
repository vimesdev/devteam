#include "HMSUpdateEInvoiceDialog.h"
#include "MainFrm.h"
/*static void _OnTongtienChangeFnc(CWnd *pWnd){
	((CHMSUpdateEInvoiceDialog *)pWnd)->OnTongtienChange();
} */
/*static void _OnTongtienSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateEInvoiceDialog *)pWnd)->OnTongtienSetfocus();} */ 
/*static void _OnTongtienKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateEInvoiceDialog *)pWnd)->OnTongtienKillfocus();
} */
static int _OnTongtienCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateEInvoiceDialog *)pWnd)->OnTongtienCheckValue();
} 
/*static void _OnBenhnhantraChangeFnc(CWnd *pWnd){
	((CHMSUpdateEInvoiceDialog *)pWnd)->OnBenhnhantraChange();
} */
/*static void _OnBenhnhantraSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateEInvoiceDialog *)pWnd)->OnBenhnhantraSetfocus();} */ 
/*static void _OnBenhnhantraKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateEInvoiceDialog *)pWnd)->OnBenhnhantraKillfocus();
} */
static int _OnBenhnhantraCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateEInvoiceDialog *)pWnd)->OnBenhnhantraCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSUpdateEInvoiceDialog *pVw = (CHMSUpdateEInvoiceDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUpdateEInvoiceDialog *pVw = (CHMSUpdateEInvoiceDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSUpdateEInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateEInvoiceDialog*)pWnd)->OnAddHMSUpdateEInvoiceDialog();
} 
static int _OnEditHMSUpdateEInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateEInvoiceDialog*)pWnd)->OnEditHMSUpdateEInvoiceDialog();
} 
static int _OnDeleteHMSUpdateEInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateEInvoiceDialog*)pWnd)->OnDeleteHMSUpdateEInvoiceDialog();
} 
static int _OnSaveHMSUpdateEInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateEInvoiceDialog*)pWnd)->OnSaveHMSUpdateEInvoiceDialog();
} 
static int _OnCancelHMSUpdateEInvoiceDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateEInvoiceDialog*)pWnd)->OnCancelHMSUpdateEInvoiceDialog();
} 
CHMSUpdateEInvoiceDialog::CHMSUpdateEInvoiceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSUpdateEInvoiceDialog::~CHMSUpdateEInvoiceDialog()
{
}
void CHMSUpdateEInvoiceDialog::OnCreateComponents(){
	m_wndDescGroupBox.Create(this, _T("THÔNG TIN HÓA ĐƠN ĐIỆN TỬ"), 5, 4, 264, 92);
	m_wndtongsoLabel.Create(this, _T("Tổng tiền"), 10, 28, 96, 56);
	m_wndTongtien.Create(this,102, 28, 260, 56); 
	m_wndPhaitraLabel.Create(this, _T("Bệnh nhân trả"), 10, 60, 96, 88);
	m_wndBenhnhantra.Create(this,102, 60, 260, 88); 
	m_wndSave.Create(this, _T("Save"), 95, 98, 175, 123);
	m_wndCancel.Create(this, _T("Cancel"), 180, 98, 260, 123);

}
void CHMSUpdateEInvoiceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTongtien.SetLimitText(1024);
	m_wndTongtien.SetCheckValue(true);
	m_wndBenhnhantra.SetLimitText(1024);
	m_wndBenhnhantra.SetCheckValue(true);

}
void CHMSUpdateEInvoiceDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndTongtien.SetEvent(WE_CHANGE, _OnTongtienChangeFnc);
	//m_wndTongtien.SetEvent(WE_SETFOCUS, _OnTongtienSetfocusFnc);
	//m_wndTongtien.SetEvent(WE_KILLFOCUS, _OnTongtienKillfocusFnc);
	m_wndTongtien.SetEvent(WE_CHECKVALUE, _OnTongtienCheckValueFnc);
	//m_wndBenhnhantra.SetEvent(WE_CHANGE, _OnBenhnhantraChangeFnc);
	//m_wndBenhnhantra.SetEvent(WE_SETFOCUS, _OnBenhnhantraSetfocusFnc);
	//m_wndBenhnhantra.SetEvent(WE_KILLFOCUS, _OnBenhnhantraKillfocusFnc);
	m_wndBenhnhantra.SetEvent(WE_CHECKVALUE, _OnBenhnhantraCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	SetWindowFont(&m_wndTongtien, GetFaceName(), GetFaceSize()+4, TRUE);
	m_wndTongtien.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndBenhnhantra, GetFaceName(), GetFaceSize()+4, TRUE);
	m_wndBenhnhantra.SetTextColor(RGB(255, 0, 0));

	GetDataToScreen();
	SetMode(VM_EDIT);

}
void CHMSUpdateEInvoiceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTongtien.GetDlgCtrlID(), m_nTongtien);
	DDX_Text(pDX, m_wndBenhnhantra.GetDlgCtrlID(), m_nBenhnhantra);

}
void CHMSUpdateEInvoiceDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Tongtien")] =  m_nTongtien;
	m_jData[_T("Benhnhantra")] =  m_nBenhnhantra;
	}
	else
	{
			
	m_jData[_T("Tongtien")].GetValue(m_nTongtien);
	m_jData[_T("Benhnhantra")].GetValue(m_nBenhnhantra);
	}

}
void CHMSUpdateEInvoiceDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T(" SELECT hfe_amount as amount, hfe_patpaid as patpaid from HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %ld and hfe_key=%f"), m_nDocumentNo, m_nKey);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("amount"),  m_nTongtien); 
		rs.GetValue(_T("patpaid"),  m_nBenhnhantra);		
	}
	SetMode(VM_EDIT);

}
void CHMSUpdateEInvoiceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUpdateEInvoiceDialog::SetDefaultValues(){

	m_nTongtien=0;
	m_nBenhnhantra=0;

}
int CHMSUpdateEInvoiceDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL, szEstatus;
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
	szSQL.Format(_T(" SELECT hfe_status as Estatus from HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %ld and hfe_key=%f"), m_nDocumentNo, m_nKey);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("Estatus"),  szEstatus);				
	}

	if (szEstatus != _T("O"))
	{
		m_wndSave.EnableWindow(false);
	}

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSUpdateEInvoiceDialog::OnTongtienChange(){
	
} */
/*void CHMSUpdateEInvoiceDialog::OnTongtienSetfocus(){
	
} */
/*void CHMSUpdateEInvoiceDialog::OnTongtienKillfocus(){
	
} */
int CHMSUpdateEInvoiceDialog::OnTongtienCheckValue(){
	return 0;
} 
/*void CHMSUpdateEInvoiceDialog::OnBenhnhantraChange(){
	
} */
/*void CHMSUpdateEInvoiceDialog::OnBenhnhantraSetfocus(){
	
} */
/*void CHMSUpdateEInvoiceDialog::OnBenhnhantraKillfocus(){
	
} */
int CHMSUpdateEInvoiceDialog::OnBenhnhantraCheckValue()
{
	UpdateData(true);
	if (m_nBenhnhantra > m_nTongtien)
	{
		ShowMessageBox(_T("Số tiền bệnh nhân trả > tổng số tiền, không cập nhật được"));
		return -1;
	}	
	return 0;
} 
void CHMSUpdateEInvoiceDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	int ret = OnSaveHMSUpdateEInvoiceDialog();
	if (ret >0)
		{
	 		CGuiDialog::OnOK();
	 	}
	else return;
	
} 
void CHMSUpdateEInvoiceDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSUpdateEInvoiceDialog::OnAddHMSUpdateEInvoiceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUpdateEInvoiceDialog::OnEditHMSUpdateEInvoiceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUpdateEInvoiceDialog::OnDeleteHMSUpdateEInvoiceDialog(){
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
 		OnCancelHMSUpdateEInvoiceDialog();
 	}
	return 0;
}
int CHMSUpdateEInvoiceDialog::OnSaveHMSUpdateEInvoiceDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	if (m_nBenhnhantra > m_nTongtien)
	{
		ShowMessageBox(_T("Số tiền bệnh nhân trả > tổng số tiền, không cập nhật được"));
		return -1;
	}
	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int ret = 0;
	szSQL.Format(_T("HMS_UPDATE_EINVOICE(%ld, %f, %ld, %ld, '%s') "), m_nDocumentNo, m_nKey, m_nTongtien, m_nBenhnhantra, pMF->GetCurrentUser());		
	ret = str2int(pMF->ExecDML(szSQL));		
	if (ret > 0)
	{
		ShowMessageBox(_T("Cập nhật thành công, vui lòng kiểm tra lại"));
	}
	else
	{
		ShowMessageBox(_T("Không thể thao tác với trạng thái hiện thời!"));
	}
	return ret;
}
int CHMSUpdateEInvoiceDialog::OnCancelHMSUpdateEInvoiceDialog(){
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
int CHMSUpdateEInvoiceDialog::OnHMSUpdateEInvoiceDialogListLoadData(){
	return 0;
}