#include "FAMQDeprCaculation.h"
#include "MainFrm.h"
/*static void _OnExpiryDateChangeFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnExpiryDateChange();
} */
/*static void _OnExpiryDateSetfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnExpiryDateSetfocus();} */ 
/*static void _OnExpiryDateKillfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnExpiryDateKillfocus();
} */
static int _OnExpiryDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMQDeprCaculation *)pWnd)->OnExpiryDateCheckValue();
} 
/*static void _OnLastCalcDateChangeFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnLastCalcDateChange();
} */
/*static void _OnLastCalcDateSetfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnLastCalcDateSetfocus();} */ 
/*static void _OnLastCalcDateKillfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnLastCalcDateKillfocus();
} */
static int _OnLastCalcDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMQDeprCaculation *)pWnd)->OnLastCalcDateCheckValue();
} 
/*static void _OnCalcDateChangeFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnCalcDateChange();
} */
/*static void _OnCalcDateSetfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnCalcDateSetfocus();} */ 
/*static void _OnCalcDateKillfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnCalcDateKillfocus();
} */
static int _OnCalcDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMQDeprCaculation *)pWnd)->OnCalcDateCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMQDeprCaculation *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnDeprePerProductChangeFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnDeprePerProductChange();
} */
/*static void _OnDeprePerProductSetfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnDeprePerProductSetfocus();} */ 
/*static void _OnDeprePerProductKillfocusFnc(CWnd *pWnd){
	((CFAMQDeprCaculation *)pWnd)->OnDeprePerProductKillfocus();
} */
static int _OnDeprePerProductCheckValueFnc(CWnd *pWnd){
	return ((CFAMQDeprCaculation *)pWnd)->OnDeprePerProductCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMQDeprCaculation *pVw = (CFAMQDeprCaculation *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMQDeprCaculation *pVw = (CFAMQDeprCaculation *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMQDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMQDeprCaculation*)pWnd)->OnAddFAMQDeprCaculation();
} 
static int _OnEditFAMQDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMQDeprCaculation*)pWnd)->OnEditFAMQDeprCaculation();
} 
static int _OnDeleteFAMQDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMQDeprCaculation*)pWnd)->OnDeleteFAMQDeprCaculation();
} 
static int _OnSaveFAMQDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMQDeprCaculation*)pWnd)->OnSaveFAMQDeprCaculation();
} 
static int _OnCancelFAMQDeprCaculationFnc(CWnd *pWnd){
	 return ((CFAMQDeprCaculation*)pWnd)->OnCancelFAMQDeprCaculation();
} 
CFAMQDeprCaculation::CFAMQDeprCaculation(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 305;
	m_nDlgHeight = 205;
	SetDefaultValues();
}
CFAMQDeprCaculation::~CFAMQDeprCaculation(){
}
void CFAMQDeprCaculation::OnCreateComponents(){
	m_wndExpiryDateLabel.Create(this, _T("Expiry Date"), 10, 10, 130, 35);
	m_wndExpiryDate.Create(this,135, 10, 220, 35); 
	m_wndLastCalcDateLabel.Create(this, _T("Last Calc Date"), 10, 40, 130, 65);
	m_wndLastCalcDate.Create(this,135, 40, 220, 65); 
	m_wndCalcDateLabel.Create(this, _T("Caculation Date"), 10, 70, 130, 95);
	m_wndCalcDate.Create(this,135, 70, 220, 95); 
	m_wndQuantityLabel.Create(this, _T("Product Quantity"), 10, 100, 130, 125);
	m_wndQuantity.Create(this,135, 100, 255, 125); 
	m_wndDeprePerProductLabel.Create(this, _T("Depreciation/Product"), 10, 130, 130, 155);
	m_wndDeprePerProduct.Create(this,135, 130, 255, 155); 
	m_wndSave.Create(this, _T("&Save"), 80, 160, 165, 185);
	m_wndCancel.Create(this, _T("&Cancel"), 170, 160, 255, 185);

}
void CFAMQDeprCaculation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	//m_wndExpiryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpiryDate.SetCheckValue(true);
	//m_wndLastCalcDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndLastCalcDate.SetCheckValue(true);
	//m_wndCalcDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndCalcDate.SetCheckValue(true);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndDeprePerProduct.SetLimitText(16);
	m_wndDeprePerProduct.SetCheckValue(true);
	m_wndDeprePerProduct.SetCurrencyFormat(TRUE);
	SetWindowTitle(_T("Compute Depreciation"));
}
void CFAMQDeprCaculation::OnSetWindowEvents(){
	//m_wndExpiryDate.SetEvent(WE_CHANGE, _OnExpiryDateChangeFnc);
	//m_wndExpiryDate.SetEvent(WE_SETFOCUS, _OnExpiryDateSetfocusFnc);
	//m_wndExpiryDate.SetEvent(WE_KILLFOCUS, _OnExpiryDateKillfocusFnc);
	m_wndExpiryDate.SetEvent(WE_CHECKVALUE, _OnExpiryDateCheckValueFnc);
	//m_wndLastCalcDate.SetEvent(WE_CHANGE, _OnLastCalcDateChangeFnc);
	//m_wndLastCalcDate.SetEvent(WE_SETFOCUS, _OnLastCalcDateSetfocusFnc);
	//m_wndLastCalcDate.SetEvent(WE_KILLFOCUS, _OnLastCalcDateKillfocusFnc);
	m_wndLastCalcDate.SetEvent(WE_CHECKVALUE, _OnLastCalcDateCheckValueFnc);
	//m_wndCalcDate.SetEvent(WE_CHANGE, _OnCalcDateChangeFnc);
	//m_wndCalcDate.SetEvent(WE_SETFOCUS, _OnCalcDateSetfocusFnc);
	//m_wndCalcDate.SetEvent(WE_KILLFOCUS, _OnCalcDateKillfocusFnc);
	m_wndCalcDate.SetEvent(WE_CHECKVALUE, _OnCalcDateCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndDeprePerProduct.SetEvent(WE_CHANGE, _OnDeprePerProductChangeFnc);
	//m_wndDeprePerProduct.SetEvent(WE_SETFOCUS, _OnDeprePerProductSetfocusFnc);
	//m_wndDeprePerProduct.SetEvent(WE_KILLFOCUS, _OnDeprePerProductKillfocusFnc);
	m_wndDeprePerProduct.SetEvent(WE_CHECKVALUE, _OnDeprePerProductCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
	OnFormLoad();
}
void CFAMQDeprCaculation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndExpiryDate.GetDlgCtrlID(), m_szExpiryDate);
	DDX_TextEx(pDX, m_wndLastCalcDate.GetDlgCtrlID(), m_szLastCalcDate);
	DDX_TextEx(pDX, m_wndCalcDate.GetDlgCtrlID(), m_szCalcDate);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndDeprePerProduct.GetDlgCtrlID(), m_nDeprePerProduct);

}
void CFAMQDeprCaculation::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_depreciation WHERE fad_assetno='%s' AND fad_idx=%d"), m_szAssetNo, m_nID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("fad_date"), m_szCalcDate);
		rs.GetValue(_T("fad_quantity"), m_nQuantity);
		rs.GetValue(_T("fad_scale"), m_nDeprePerProduct);
		UpdateData(FALSE);
	}
}
void CFAMQDeprCaculation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CFAMQDeprCaculation::SetDefaultValues(){

	m_szExpiryDate.Empty();
	//m_szLastCalcDate.Empty();
	m_szCalcDate.Empty();
	m_nQuantity=0;
	//m_nDeprePerProduct=0;
}
int CFAMQDeprCaculation::SetMode(int nMode)
{
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
			m_wndExpiryDate.EnableWindow(FALSE);
			m_wndLastCalcDate.EnableWindow(FALSE);
			m_szCalcDate = GetNextSchedule();
			//MessageBox(m_szCalcDate);
			//_msg(_T("%d"), m_nDeprePerProduct);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndExpiryDate.EnableWindow(FALSE);
			m_wndLastCalcDate.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
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
/*void CFAMQDeprCaculation::OnExpiryDateChange(){
	
} */
/*void CFAMQDeprCaculation::OnExpiryDateSetfocus(){
	
} */
/*void CFAMQDeprCaculation::OnExpiryDateKillfocus(){
	
} */
int CFAMQDeprCaculation::OnExpiryDateCheckValue(){
	return 0;
} 
/*void CFAMQDeprCaculation::OnLastCalcDateChange(){
	
} */
/*void CFAMQDeprCaculation::OnLastCalcDateSetfocus(){
	
} */
/*void CFAMQDeprCaculation::OnLastCalcDateKillfocus(){
	
} */
int CFAMQDeprCaculation::OnLastCalcDateCheckValue(){
	return 0;
} 
/*void CFAMQDeprCaculation::OnCalcDateChange(){
	
} */
/*void CFAMQDeprCaculation::OnCalcDateSetfocus(){
	
} */
/*void CFAMQDeprCaculation::OnCalcDateKillfocus(){
	
} */
int CFAMQDeprCaculation::OnCalcDateCheckValue()
{
	CString szDate = GetLastDateOfMonth();
	CDate date;
	CDate dt;
	date.ParseDate(szDate, ddmmyyyy);
	dt.ParseDate(m_szCalcDate);
	if (dt.GetDay() > date.GetDay() ||
		dt.GetMonth() != date.GetMonth() ||
		dt.GetYear() != date.GetYear())
	{
		m_wndCalcDate.SetToolTipMessage(_T("This value is invalid"));
		return -1;
	}
	return 0;
} 
/*void CFAMQDeprCaculation::OnQuantityChange(){
	
} */
/*void CFAMQDeprCaculation::OnQuantitySetfocus(){
	
} */
/*void CFAMQDeprCaculation::OnQuantityKillfocus(){
	
} */
int CFAMQDeprCaculation::OnQuantityCheckValue()
{
	if (m_nDeprePerProduct * m_nQuantity > m_nRemainValue || m_nQuantity <= 0)
	{
		m_wndQuantity.SetToolTipMessage(_T("This value must be greater than zero and within permissible limit"));
		return -1;
	}
	return 0;
} 
/*void CFAMQDeprCaculation::OnDeprePerProductChange(){
	
} */
/*void CFAMQDeprCaculation::OnDeprePerProductSetfocus(){
	
} */
/*void CFAMQDeprCaculation::OnDeprePerProductKillfocus(){
	
} */
int CFAMQDeprCaculation::OnDeprePerProductCheckValue()
{
	if (m_nDeprePerProduct * m_nQuantity > m_nRemainValue || m_nDeprePerProduct <= 0)
	{
		m_wndDeprePerProduct.SetToolTipMessage(_T("This value must be greater than zero and within permissible limit"));
		return -1;
	}
	return 0;
} 
void CFAMQDeprCaculation::OnSaveSelect()
{
	if(!IsValidateData()) 
 		return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString rets;
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("fam_depreciation_calcquantity('%s', '%s', %d, %.2f, %d, '%s')"),
			m_szAssetNo, m_szCalcDate, m_nQuantity, m_nDeprePerProduct, Round(m_nDeprePerProduct * m_nQuantity), pMF->GetCurrentUser());
		rets = pMF->ExecDML(szSQL);
		//MessageBox(szSQL);
	}
	else
	{
		szSQL.Format(_T("UPDATE fam_depreciation SET fad_date='%s', fad_quantity=%d, fad_scale=%.2f, fad_amount=%d ")\
			         _T("WHERE fad_assetno='%s' AND fad_idx=%d"), m_szCalcDate, m_nQuantity, m_nDeprePerProduct, 
					 Round(m_nDeprePerProduct * m_nQuantity), m_szAssetNo, m_nID);
		rets = int2str(pMF->ExecSQL(szSQL));
		//MessageBox(szSQL);
	}
	if (!rets.IsEmpty())
	{
		pMF->m_szDeprUnit = _T("MQA");
		CGuiDialog::OnOK();
	}
	else
		ShowMessageBox(_T("Failed to execute query"), MB_OK | MB_ICONERROR);
} 
void CFAMQDeprCaculation::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMQDeprCaculation::OnAddFAMQDeprCaculation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMQDeprCaculation::OnEditFAMQDeprCaculation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMQDeprCaculation::OnDeleteFAMQDeprCaculation(){
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
 		OnCancelFAMQDeprCaculation(); 
 	}
	return 0;
}
int CFAMQDeprCaculation::OnSaveFAMQDeprCaculation(){
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
 		//OnFAMQDeprCaculationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMQDeprCaculation::OnCancelFAMQDeprCaculation(){
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
int CFAMQDeprCaculation::OnFAMQDeprCaculationListLoadData(){
	return 0;
}
void CFAMQDeprCaculation::OnFormLoad()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szDate;
	CDate dt;
	//szSQL.Format(_T("SELECT date('%s') + interval '%d year'"), pMF->m_szInService, pMF->m_nDeprTerm / 12);
	szSQL.Format(_T("SELECT TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') + interval '%d' year from dual"), pMF->m_szInService, pMF->m_nDeprTerm / 12);
	rs.ExecSQL(szSQL);
	dt.ParseDate(rs.GetStringValue());
	szDate.Format(_T("%.2d/%.2d/%.4d"), dt.GetDay(), dt.GetMonth(), dt.GetYear());
	m_wndExpiryDate.SetData(szDate);
	dt.ParseDate(m_szLastCalcDate);
	szDate.Format(_T("%.2d/%.2d/%.4d"), dt.GetDay(), dt.GetMonth(), dt.GetYear());
	m_wndLastCalcDate.SetData(szDate);
}
CString CFAMQDeprCaculation::GetLastDateOfMonth()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CDate dt1, dt2;
	CString szDate;
	szDate.Empty();
	/*if (m_szLastDate.IsEmpty())
		dt1.ParseDate(pMF->m_szInService);
	else*/
	dt1.ParseDate(m_szLastCalcDate);
	int day, month, year, lastday;
	month = dt1.GetMonth() + 1;
	year = dt1.GetYear();
	day = 1;
	if (month > 12)
	{
		month = 1;
		year += 1;
	}
	dt2.SetDate(year, month, day);
	lastday = dt2.GetMonthLastDay();
	szDate.Format(_T("%.2d/%.2d/%.4d"), lastday, month, year);
	return szDate;
}

CString CFAMQDeprCaculation::GetNextSchedule()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CDate date;
	CString szSQL, szValue;
	szValue.Empty();
	//szSQL.Format(_T("SELECT date('%s') + interval '1 month'"), m_szLastCalcDate);
	szSQL.Format(_T("SELECT add_months(TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'), 1) from dual"), m_szLastCalcDate);
	rs.ExecSQL(szSQL);
	date.ParseDate(rs.GetStringValue());
	szValue.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
	return szValue;
}