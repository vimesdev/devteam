#include "PMSPaymentDlg.h"
#include "MainFrame_E10.h"
/*static int _OnTotalAmountChangeFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalAmountChange();
} */
/*static int _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalAmountKillfocus();} */ 
/*static int _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalAmountCheckValue();
} 
/*static int _OnTotalPaymentChangeFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalPaymentChange();
} */
/*static int _OnTotalPaymentSetfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalPaymentKillfocus();} */ 
static int _OnTotalPaymentKillfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalPaymentKillfocus();
} 
static int _OnTotalPaymentCheckValueFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnTotalPaymentCheckValue();
} 
/*static int _OnRemainAmountChangeFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnRemainAmountChange();
} */
/*static int _OnRemainAmountSetfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnRemainAmountKillfocus();} */ 
/*static int _OnRemainAmountKillfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnRemainAmountKillfocus();
} */
static int _OnRemainAmountCheckValueFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnRemainAmountCheckValue();
} 
/*static int _OnPayableChangeFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnPayableChange();
} */
/*static int _OnPayableSetfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnPayableKillfocus();} */ 
/*static int _OnPayableKillfocusFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnPayableKillfocus();
} */
static int _OnPayableCheckValueFnc(CWnd *pWnd){
	return ((CPMSPaymentDlg *)pWnd)->OnPayableCheckValue();
} 
static int _OnPaymentSelectFnc(CWnd *pWnd){
	CPMSPaymentDlg *pVw = (CPMSPaymentDlg *)pWnd;
	return pVw->OnPaymentSelect();
} 
static int _OnCloseSelectFnc(CWnd *pWnd){
	CPMSPaymentDlg *pVw = (CPMSPaymentDlg *)pWnd;
	return pVw->OnCloseSelect();
} 
static int _OnAddPMSPaymentDlgFnc(CWnd *pWnd){
	 return ((CPMSPaymentDlg*)pWnd)->OnAddPMSPaymentDlg();
} 
static int _OnEditPMSPaymentDlgFnc(CWnd *pWnd){
	 return ((CPMSPaymentDlg*)pWnd)->OnEditPMSPaymentDlg();
} 
static int _OnDeletePMSPaymentDlgFnc(CWnd *pWnd){
	 return ((CPMSPaymentDlg*)pWnd)->OnDeletePMSPaymentDlg();
} 
static int _OnSavePMSPaymentDlgFnc(CWnd *pWnd){
	 return ((CPMSPaymentDlg*)pWnd)->OnSavePMSPaymentDlg();
} 
static int _OnCancelPMSPaymentDlgFnc(CWnd *pWnd){
	 return ((CPMSPaymentDlg*)pWnd)->OnCancelPMSPaymentDlg();
} 
CPMSPaymentDlg::CPMSPaymentDlg(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 225;
	m_nDlgHeight = 175;
	SetDefaultValues();
}
CPMSPaymentDlg::~CPMSPaymentDlg(){
}
void CPMSPaymentDlg::OnCreateComponents(){	
	m_wndPaymentInformations.Create(this, _T("Payment Informations"), 5, 5, 300, 150);
	m_wndTotalAmountLabel.Create(this, _T("Total Amount"), 10, 30, 160, 55);
	m_wndTotalAmount.Create(this,165, 30, 295, 55); 
	m_wndTotalPaymentLabel.Create(this, _T("Payment Amount"), 10, 60, 160, 85);
	m_wndTotalPayment.Create(this,165, 60, 295, 85); 
	m_wndRemainAmountLabel.Create(this, _T("Remain Amount"), 10, 80, 160, 115);
	m_wndRemainAmount.Create(this,165, 90, 295, 115); 
	m_wndPayableLabel.Create(this, _T("Refund Amount"), 10, 120, 160, 145);
	m_wndPayable.Create(this,165, 120, 295, 145); 
	m_wndPayment.Create(this, _T("&Payment"), 100, 160, 195, 190);
	m_wndClose.Create(this, _T("&Close"), 200, 160, 295, 190);
}
void CPMSPaymentDlg::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndTotalAmount.ModifyStyle(0, ES_RIGHT);
	m_wndTotalAmount.SetReadOnly(true);
	m_wndTotalAmount.SetLimitText(10);
//	m_wndTotalAmount.SetReadOnly(true);
	m_wndTotalPayment.ModifyStyle(0, ES_RIGHT);
	//m_wndTotalPayment.SetReadOnly(true);
	m_wndTotalPayment.SetLimitText(10);
//	m_wndTotalPayment.SetCheckValue(true);
	m_wndRemainAmount.ModifyStyle(0, ES_RIGHT);
	m_wndRemainAmount.SetReadOnly(true);
	m_wndRemainAmount.SetLimitText(10);
	m_wndPayable.SetLimitText(10);
	m_wndPayable.SetReadOnly(true);;

	m_wndTotalAmount.SetCurrencyFormat(TRUE);
	m_wndTotalPayment.SetCurrencyFormat(TRUE);
	m_wndRemainAmount.SetCurrencyFormat(TRUE);
	m_wndPayable.SetCurrencyFormat(TRUE);	

}
void CPMSPaymentDlg::OnSetWindowEvents()
{
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndTotalPayment.SetEvent(WE_CHANGE, _OnTotalPaymentChangeFnc);
	//m_wndTotalPayment.SetEvent(WE_SETFOCUS, _OnTotalPaymentSetfocusFnc);
	m_wndTotalPayment.SetEvent(WE_KILLFOCUS, _OnTotalPaymentKillfocusFnc);
	m_wndTotalPayment.SetEvent(WE_CHECKVALUE, _OnTotalPaymentCheckValueFnc);
	//m_wndRemainAmount.SetEvent(WE_CHANGE, _OnRemainAmountChangeFnc);
	//m_wndRemainAmount.SetEvent(WE_SETFOCUS, _OnRemainAmountSetfocusFnc);
	//m_wndRemainAmount.SetEvent(WE_KILLFOCUS, _OnRemainAmountKillfocusFnc);
	m_wndRemainAmount.SetEvent(WE_CHECKVALUE, _OnRemainAmountCheckValueFnc);
	//m_wndPayable.SetEvent(WE_CHANGE, _OnPayableChangeFnc);
	//m_wndPayable.SetEvent(WE_SETFOCUS, _OnPayableSetfocusFnc);
	//m_wndPayable.SetEvent(WE_KILLFOCUS, _OnPayableKillfocusFnc);
	m_wndPayable.SetEvent(WE_CHECKVALUE, _OnPayableCheckValueFnc);
	m_wndPayment.SetEvent(WE_CLICK, _OnPaymentSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);


	m_wndTotalAmount.SetTextColor(RGB(0, 0, 200));
	SetWindowFont(&m_wndTotalAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	
	m_wndTotalPayment.SetTextColor(RGB(255, 0, 0));
	SetWindowFont(&m_wndTotalPayment, GetFaceName(), GetFaceSize()+2, TRUE);
	
	SetWindowFont(&m_wndRemainAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndRemainAmount.SetTextColor(RGB(0, 0, 200));
	
	SetWindowFont(&m_wndPayable, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndPayable.SetTextColor(RGB(0, 0, 200));

	m_wndTotalAmount.EnableWindow(FALSE);
	m_wndRemainAmount.EnableWindow(FALSE);
	m_wndPayable.EnableWindow(FALSE);

	//GetDataToScreen();
}
void CPMSPaymentDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_nTotalAmount);
	DDX_Text(pDX, m_wndTotalPayment.GetDlgCtrlID(), m_nTotalPayment);
	DDX_Text(pDX, m_wndRemainAmount.GetDlgCtrlID(), m_nRemainAmount);
	DDX_Text(pDX, m_wndPayable.GetDlgCtrlID(), m_nPayable);

}
void CPMSPaymentDlg::GetDataToScreen()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM pms_saleorder WHERE pso_orderid=%d "), m_nOrderID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pso_totalamt"), m_nTotalAmount);
		rs.GetValue(_T("pso_payamt"), m_nTotalPayment);
		rs.GetValue(_T("pso_remainamt"), m_nRemainAmount);
		UpdateData(false);
	}
}
void CPMSPaymentDlg::GetScreenToData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}
void CPMSPaymentDlg::SetDefaultValues(){

	m_nTotalAmount=0;
	m_nTotalPayment=0;
	m_nRemainAmount=0;
	m_nPayable=0;

}
/*int CPMSPaymentDlg::OnTotalAmountChange(){
	return 0;
} */
/*int CPMSPaymentDlg::OnTotalAmountSetfocus(){
	return 0;
} */
/*int CPMSPaymentDlg::OnTotalAmountKillfocus(){
	return 0;
} */
int CPMSPaymentDlg::OnTotalAmountCheckValue(){
	return 0;
} 
/*int CPMSPaymentDlg::OnTotalPaymentChange(){
	return 0;
} */
/*int CPMSPaymentDlg::OnTotalPaymentSetfocus(){
	return 0;
} */
int CPMSPaymentDlg::OnTotalPaymentKillfocus(){
	OnTotalPaymentCheckValue();
	return 0;
} 
int CPMSPaymentDlg::OnTotalPaymentCheckValue()
{
	UpdateData(TRUE);
	if(m_nTotalPayment > m_nTotalAmount)
	{
		m_nPayable = m_nTotalPayment - m_nTotalAmount;
		m_nRemainAmount = 0;
	}
	else
	{
		m_nPayable = 0;
		m_nRemainAmount = m_nTotalAmount - m_nTotalPayment;
	}
	UpdateData(FALSE);
	return 0;
} 
/*int CPMSPaymentDlg::OnRemainAmountChange(){
	return 0;
} */
/*int CPMSPaymentDlg::OnRemainAmountSetfocus(){
	return 0;
} */
/*int CPMSPaymentDlg::OnRemainAmountKillfocus(){
	return 0;
} */
int CPMSPaymentDlg::OnRemainAmountCheckValue(){
	return 0;
} 
/*int CPMSPaymentDlg::OnPayableChange(){
	return 0;
} */
/*int CPMSPaymentDlg::OnPayableSetfocus(){
	return 0;
} */
/*int CPMSPaymentDlg::OnPayableKillfocus(){
	return 0;
} */
int CPMSPaymentDlg::OnPayableCheckValue()
{
	UpdateData(true);
	if(m_nPayable > m_nRemainAmount)
		m_nPayable = m_nRemainAmount;
	UpdateData(false);
	return 0;
} 
int CPMSPaymentDlg::OnPaymentSelect()
{
	//CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//UpdateData(true);	
	//OnTotalPaymentCheckValue();
	//CString szSQL;
	//szSQL.Format(_T("UPDATE sale_order SET SO_STATUS='P',SO_TOTALAMOUNT=%.2f, SO_NETAMOUNT=%.2f, SO_TAXAMOUNT=%.2f, SO_APPROVEDDATE =CURRENT_TIMESTAMP,SO_APPROVEDBY ='%s' WHERE SO_SALE_ORDER_ID=%d "),
	//			 m_nTotalAmount, m_nTotalPayment<m_nTotalAmount?m_nTotalPayment:m_nTotalAmount, 
	//			 m_nRemainAmount, pMF->GetCurrentUser(),m_nOrderID);
	////_fmsg(_T("%s"), szSQL);
	//int ret = pMF->ExecSQL(szSQL);
	//
	//if (ret > 0)
	//{
	//	OnOK();
	//}

	OnOK();

	return 0;
} 
int CPMSPaymentDlg::OnCloseSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancel();
	 return 0;
} 
int CPMSPaymentDlg::OnAddPMSPaymentDlg(){ /* 
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add PMSPaymentDlg"))) 
 		return -1; 
 	SetDefaultValues(); 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	UpdateData(FALSE); 
 	SetMode(VM_ADD); */ 
	return 0; 
 
} 
int CPMSPaymentDlg::OnEditPMSPaymentDlg(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit PMSPaymentDlg"))) 
 		return -1; 
 	EnableControls(TRUE); 
 	EnableButtons(FALSE, 0, 1, 2, -1); 
 	SetMode(VM_EDIT); */ return 0;  
 
} 
int CPMSPaymentDlg::OnDeletePMSPaymentDlg(){ /* 
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND 
 "), ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPMSPaymentDlg(); 
 		OnPMSPaymentDlgLoadData(); 
 	} */ return 0;
 } 
int CPMSPaymentDlg::OnSavePMSPaymentDlg(){ /* 
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_sys_msgTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE 
 "), ); 
 		szSQL = m_sys_msgTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("PMSPaymentDlg"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		EnableControls(FALSE); 
 		On?À?cListLoadData(); 
 		EnableButtons(FALSE, 3, 4, -1); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	*/ 	return 0; 
}
int CPMSPaymentDlg::OnCancelPMSPaymentDlg(){ /* 
 	EnableControls(FALSE); 
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 		EnableButtons(FALSE, 3, 4, -1); 
 	} 
 	else 
 	{ 
 		SetDefaultValues(); 
 		SetMode(VM_NONE); 
 		UpdateData(FALSE); 
 		EnableButtons(FALSE, 1, 2, 3, 4, -1); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	 
 	*/ 
 	return 0;
} 
