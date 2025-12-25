#include "FAMAccessoriesDialog.h"
#include "MainFrm.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CFAMAccessoriesDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnCaculationUnitChangeFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnCaculationUnitChange();
} */
/*static void _OnCaculationUnitSetfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnCaculationUnitSetfocus();} */ 
/*static void _OnCaculationUnitKillfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnCaculationUnitKillfocus();
} */
static int _OnCaculationUnitCheckValueFnc(CWnd *pWnd){
	return ((CFAMAccessoriesDialog *)pWnd)->OnCaculationUnitCheckValue();
} 
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAccessoriesDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnPriceChangeFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnPriceChange();
} */
/*static void _OnPriceSetfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnPriceSetfocus();} */ 
/*static void _OnPriceKillfocusFnc(CWnd *pWnd){
	((CFAMAccessoriesDialog *)pWnd)->OnPriceKillfocus();
} */
static int _OnPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAccessoriesDialog *)pWnd)->OnPriceCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAccessoriesDialog *pVw = (CFAMAccessoriesDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAccessoriesDialog *pVw = (CFAMAccessoriesDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMAccessoriesDialogFnc(CWnd *pWnd){
	 return ((CFAMAccessoriesDialog*)pWnd)->OnAddFAMAccessoriesDialog();
} 
static int _OnEditFAMAccessoriesDialogFnc(CWnd *pWnd){
	 return ((CFAMAccessoriesDialog*)pWnd)->OnEditFAMAccessoriesDialog();
} 
static int _OnDeleteFAMAccessoriesDialogFnc(CWnd *pWnd){
	 return ((CFAMAccessoriesDialog*)pWnd)->OnDeleteFAMAccessoriesDialog();
} 
static int _OnSaveFAMAccessoriesDialogFnc(CWnd *pWnd){
	 return ((CFAMAccessoriesDialog*)pWnd)->OnSaveFAMAccessoriesDialog();
} 
static int _OnCancelFAMAccessoriesDialogFnc(CWnd *pWnd){
	 return ((CFAMAccessoriesDialog*)pWnd)->OnCancelFAMAccessoriesDialog();
} 
CFAMAccessoriesDialog::CFAMAccessoriesDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 814;
	m_nDlgHeight = 548;
	SetDefaultValues();
}
CFAMAccessoriesDialog::~CFAMAccessoriesDialog(){
}
void CFAMAccessoriesDialog::OnCreateComponents(){
	m_wndNameLabel.Create(this, _T("Name"), 5, 10, 90, 35);
	m_wndName.Create(this,95, 10, 295, 35); 
	m_wndCaculationUnitLabel.Create(this, _T("Caculation Unit"), 5, 40, 90, 65);
	m_wndCaculationUnit.Create(this,95, 40, 295, 65); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 5, 70, 90, 95);
	m_wndQuantity.Create(this,95, 70, 295, 95); 
	m_wndPriceLabel.Create(this, _T("Price"), 5, 100, 90, 125);
	m_wndPrice.Create(this,95, 100, 295, 125); 
	m_wndSave.Create(this, _T("&Save"), 140, 130, 215, 155);
	m_wndCancel.Create(this, _T("&Cancel"), 220, 130, 295, 155);

}
void CFAMAccessoriesDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndName.SetLimitText(50);
	m_wndName.SetCheckValue(true);
	m_wndCaculationUnit.SetLimitText(15);
	m_wndCaculationUnit.SetCheckValue(true);
	m_wndQuantity.SetCheckValue(true);
	m_wndPrice.SetLimitText(16);
	m_wndPrice.SetCheckValue(true);
	m_wndPrice.SetCurrencyFormat(true);
	m_fam_accessoriesTbl.SetTableName(_T("fam_accessories"));
	m_fam_accessoriesTbl.AddField(_T("faac_createdby"), dfText, 15); 
	m_fam_accessoriesTbl.AddField(_T("faac_createddate"), dfDateTime); 
	m_fam_accessoriesTbl.AddField(_T("faac_updatedby"), dfText, 15); 
	m_fam_accessoriesTbl.AddField(_T("faac_updateddate"), dfDateTime); 
	m_fam_accessoriesTbl.AddField(_T("faac_assetno"), dfText, 15); 
	m_fam_accessoriesTbl.AddField(_T("faac_idx"), dfLong); 
	m_fam_accessoriesTbl.AddField(_T("faac_name"), dfText, 50); 
	m_fam_accessoriesTbl.AddField(_T("faac_unit"), dfText, 15); 
	m_fam_accessoriesTbl.AddField(_T("faac_quantity"), dfLong); 
	m_fam_accessoriesTbl.AddField(_T("faac_price"), dfDouble); 
	SetWindowTitle(_T("Accessories Information"));
}
void CFAMAccessoriesDialog::OnSetWindowEvents(){
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndCaculationUnit.SetEvent(WE_CHANGE, _OnCaculationUnitChangeFnc);
	//m_wndCaculationUnit.SetEvent(WE_SETFOCUS, _OnCaculationUnitSetfocusFnc);
	//m_wndCaculationUnit.SetEvent(WE_KILLFOCUS, _OnCaculationUnitKillfocusFnc);
	m_wndCaculationUnit.SetEvent(WE_CHECKVALUE, _OnCaculationUnitCheckValueFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndPrice.SetEvent(WE_CHANGE, _OnPriceChangeFnc);
	//m_wndPrice.SetEvent(WE_SETFOCUS, _OnPriceSetfocusFnc);
	//m_wndPrice.SetEvent(WE_KILLFOCUS, _OnPriceKillfocusFnc);
	m_wndPrice.SetEvent(WE_CHECKVALUE, _OnPriceCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CFAMAccessoriesDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndCaculationUnit.GetDlgCtrlID(), m_szCaculationUnit);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndPrice.GetDlgCtrlID(), m_nPrice);

}
void CFAMAccessoriesDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_accessories WHERE faac_assetno='%s' AND faac_idx=%d"),
				 m_szAssetno, m_nID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("faac_name"), m_szName);
		rs.GetValue(_T("faac_unit"), m_szCaculationUnit);
		rs.GetValue(_T("faac_quantity"), m_nQuantity);
		rs.GetValue(_T("faac_price"), m_nPrice);
		UpdateData(FALSE);
	}
}
void CFAMAccessoriesDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(faac_idx), 0)+1 FROM fam_accessories WHERE faac_assetno='%s'"),
					 m_szAssetno);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_fam_accessoriesTbl.SetValue(_T("faac_createdby"), pMF->GetCurrentUser());
	m_fam_accessoriesTbl.SetValue(_T("faac_createddate"), pMF->GetSysDateTime());
	m_fam_accessoriesTbl.SetValue(_T("faac_updatedby"), pMF->GetCurrentUser());
	m_fam_accessoriesTbl.SetValue(_T("faac_updateddate"), pMF->GetSysDateTime());
	m_fam_accessoriesTbl.SetValue(_T("faac_assetno"), m_szAssetno);
	m_fam_accessoriesTbl.SetValue(_T("faac_idx"), m_nID);
	m_fam_accessoriesTbl.SetValue(_T("faac_name"), m_szName);
	m_fam_accessoriesTbl.SetValue(_T("faac_unit"), m_szCaculationUnit);
	m_fam_accessoriesTbl.SetValue(_T("faac_quantity"), m_nQuantity);
	m_fam_accessoriesTbl.SetValue(_T("faac_price"), m_nPrice);

}
void CFAMAccessoriesDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szCaculationUnit.Empty();
	m_nQuantity=0;
	m_nPrice=0;

}
int CFAMAccessoriesDialog::SetMode(int nMode)
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
			m_wndName.SetFocus();
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
/*void CFAMAccessoriesDialog::OnNameChange(){
	
} */
/*void CFAMAccessoriesDialog::OnNameSetfocus(){
	
} */
/*void CFAMAccessoriesDialog::OnNameKillfocus(){
	
} */
int CFAMAccessoriesDialog::OnNameCheckValue(){
	return 0;
} 
/*void CFAMAccessoriesDialog::OnCaculationUnitChange(){
	
} */
/*void CFAMAccessoriesDialog::OnCaculationUnitSetfocus(){
	
} */
/*void CFAMAccessoriesDialog::OnCaculationUnitKillfocus(){
	
} */
int CFAMAccessoriesDialog::OnCaculationUnitCheckValue(){
	return 0;
} 
/*void CFAMAccessoriesDialog::OnQuantityChange(){
	
} */
/*void CFAMAccessoriesDialog::OnQuantitySetfocus(){
	
} */
/*void CFAMAccessoriesDialog::OnQuantityKillfocus(){
	
} */
int CFAMAccessoriesDialog::OnQuantityCheckValue()
{
	if (m_nQuantity <= 0)
	{
		m_wndQuantity.SetToolTipMessage(_T("This value must be greater than zero"));
		return -1;
	}
	return 0;
} 
/*void CFAMAccessoriesDialog::OnPriceChange(){
	
} */
/*void CFAMAccessoriesDialog::OnPriceSetfocus(){
	
} */
/*void CFAMAccessoriesDialog::OnPriceKillfocus(){
	
} */
int CFAMAccessoriesDialog::OnPriceCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if ((m_nPrice * m_nQuantity) >= (pMF->m_nCurValue - m_nTotalPrice) || m_nPrice <= 0)
	{
		m_wndPrice.SetToolTipMessage(_T("This value must be greater than zero and within permissible limit"));
		return -1;
	}
	return 0;
} 
void CFAMAccessoriesDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (OnSaveFAMAccessoriesDialog() >= 0)
		CGuiDialog::OnOK();
} 
void CFAMAccessoriesDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMAccessoriesDialog::OnAddFAMAccessoriesDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAccessoriesDialog::OnEditFAMAccessoriesDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAccessoriesDialog::OnDeleteFAMAccessoriesDialog(){
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
 		OnCancelFAMAccessoriesDialog(); 
 	}
	return 0;
}
int CFAMAccessoriesDialog::OnSaveFAMAccessoriesDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_fam_accessoriesTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE  faac_assetno='%s' AND faac_idx=%d "), m_szAssetno, m_nID); 
 		szSQL = m_fam_accessoriesTbl.GetUpdateSQL(_T("faac_createdby, faac_createddate, faac_assetno, faac_idx")); 
 		szSQL += szWhere; 
 	} 
    _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	//if(ret > 0) 
 	//{ 
 	//	//OnFAMAccessoriesDialogListLoadData(); 
 	//	SetMode(VM_VIEW); 
 	//} 
 	//else 
 	//{ 
 	//} 
 	return ret; 
 	//return 0; 
}
int CFAMAccessoriesDialog::OnCancelFAMAccessoriesDialog(){
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
int CFAMAccessoriesDialog::OnFAMAccessoriesDialogListLoadData(){
	return 0;
}
