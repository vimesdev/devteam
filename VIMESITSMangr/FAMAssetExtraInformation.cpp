#include "FAMAssetExtraInformation.h"
#include "MainFrm.h"
/*static void _OnCapacityChangeFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnCapacityChange();
} */
/*static void _OnCapacitySetfocusFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnCapacitySetfocus();} */ 
/*static void _OnCapacityKillfocusFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnCapacityKillfocus();
} */
static int _OnCapacityCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetExtraInformation *)pWnd)->OnCapacityCheckValue();
} 
/*static void _OnTransportPriceChangeFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnTransportPriceChange();
} */
/*static void _OnTransportPriceSetfocusFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnTransportPriceSetfocus();} */ 
/*static void _OnTransportPriceKillfocusFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnTransportPriceKillfocus();
} */
static int _OnTransportPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetExtraInformation *)pWnd)->OnTransportPriceCheckValue();
} 
/*static void _OnTestRunPriceChangeFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnTestRunPriceChange();
} */
/*static void _OnTestRunPriceSetfocusFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnTestRunPriceSetfocus();} */ 
/*static void _OnTestRunPriceKillfocusFnc(CWnd *pWnd){
	((CFAMAssetExtraInformation *)pWnd)->OnTestRunPriceKillfocus();
} */
static int _OnTestRunPriceCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetExtraInformation *)pWnd)->OnTestRunPriceCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMAssetExtraInformation *pVw = (CFAMAssetExtraInformation *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMAssetExtraInformation *pVw = (CFAMAssetExtraInformation *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddFAMAssetExtraInformationFnc(CWnd *pWnd){
	 return ((CFAMAssetExtraInformation*)pWnd)->OnAddFAMAssetExtraInformation();
} 
static int _OnEditFAMAssetExtraInformationFnc(CWnd *pWnd){
	 return ((CFAMAssetExtraInformation*)pWnd)->OnEditFAMAssetExtraInformation();
} 
static int _OnDeleteFAMAssetExtraInformationFnc(CWnd *pWnd){
	 return ((CFAMAssetExtraInformation*)pWnd)->OnDeleteFAMAssetExtraInformation();
} 
static int _OnSaveFAMAssetExtraInformationFnc(CWnd *pWnd){
	 return ((CFAMAssetExtraInformation*)pWnd)->OnSaveFAMAssetExtraInformation();
} 
static int _OnCancelFAMAssetExtraInformationFnc(CWnd *pWnd){
	 return ((CFAMAssetExtraInformation*)pWnd)->OnCancelFAMAssetExtraInformation();
} 
CFAMAssetExtraInformation::CFAMAssetExtraInformation(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 730;
	m_nDlgHeight = 560;
	SetDefaultValues();
}
CFAMAssetExtraInformation::~CFAMAssetExtraInformation(){
}
void CFAMAssetExtraInformation::OnCreateComponents(){
	m_wndCapacityLabel.Create(this, _T("Capacity"), 5, 10, 100, 35);
	m_wndCapacity.Create(this,105, 10, 285, 35); 
	m_wndTransportPriceLabel.Create(this, _T("Transport Price"), 5, 40, 100, 65);
	m_wndTransportPrice.Create(this,105, 40, 205, 65); 
	m_wndTestRunPriceLabel.Create(this, _T("Test Run Price"), 5, 70, 100, 95);
	m_wndTestRunPrice.Create(this,105, 70, 205, 95); 
	m_wndSave.Create(this, _T("&Save"), 130, 100, 205, 125);
	m_wndCancel.Create(this, _T("&Cancel"), 210, 100, 285, 125);

}
void CFAMAssetExtraInformation::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCapacity.SetLimitText(15);
	//m_wndCapacity.SetCheckValue(true);
	m_wndTransportPrice.SetLimitText(16);
	m_wndTransportPrice.SetCurrencyFormat(TRUE);
	//m_wndTransportPrice.SetCheckValue(true);
	m_wndTestRunPrice.SetLimitText(16);
	m_wndTestRunPrice.SetCurrencyFormat(TRUE);
	//m_wndTestRunPrice.SetCheckValue(true);
	m_fam_assetTbl.SetTableName(_T("fam_asset"));
	m_fam_assetTbl.AddField(_T("fa_createdby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_createddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("fa_updatedby"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_updateddate"), dfDateTime); 
	m_fam_assetTbl.AddField(_T("fa_assetno"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_name"), dfText, 254); 
	m_fam_assetTbl.AddField(_T("fa_category"), dfText, 7); 
	m_fam_assetTbl.AddField(_T("fa_type"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_location"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_department"), dfText, 7); 
	m_fam_assetTbl.AddField(_T("fa_employee"), dfText, 20); 
	m_fam_assetTbl.AddField(_T("fa_madein"), dfText, 3); 
	m_fam_assetTbl.AddField(_T("fa_mfgid"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_branch"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_model"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_serial"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_barcode"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_status"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_condition"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_unit"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_acquisition"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_assetaccount"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_depraccount"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_expenseaccount"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_purchaseinvoiceno"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_purchaseorderno"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_vendorid"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_purchasedate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_useddate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_purchaseprice"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_currentvalue"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_depreciation"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_deprmethod"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_deprtime"), dfLong); 
	m_fam_assetTbl.AddField(_T("fa_deprunit"), dfText, 1); 
	m_fam_assetTbl.AddField(_T("fa_nextschedmaint"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_mfgdate"), dfLong); 
	m_fam_assetTbl.AddField(_T("fa_guaranteeduration"), dfText, 35); 
	m_fam_assetTbl.AddField(_T("fa_deposeddate"), dfDate); 
	m_fam_assetTbl.AddField(_T("fa_deposedamount"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_deposedreason"), dfText, 128); 
	m_fam_assetTbl.AddField(_T("fa_description"), dfText, 254); 
	m_fam_assetTbl.AddField(_T("fa_accessories"), dfText, 512); 
	m_fam_assetTbl.AddField(_T("fa_capacity"), dfText, 15); 
	m_fam_assetTbl.AddField(_T("fa_transportprice"), dfDouble); 
	m_fam_assetTbl.AddField(_T("fa_testrunprice"), dfDouble); 
	SetWindowTitle(_T("Extra Information"));
}
void CFAMAssetExtraInformation::OnSetWindowEvents(){
	//m_wndCapacity.SetEvent(WE_CHANGE, _OnCapacityChangeFnc);
	//m_wndCapacity.SetEvent(WE_SETFOCUS, _OnCapacitySetfocusFnc);
	//m_wndCapacity.SetEvent(WE_KILLFOCUS, _OnCapacityKillfocusFnc);
	m_wndCapacity.SetEvent(WE_CHECKVALUE, _OnCapacityCheckValueFnc);
	//m_wndTransportPrice.SetEvent(WE_CHANGE, _OnTransportPriceChangeFnc);
	//m_wndTransportPrice.SetEvent(WE_SETFOCUS, _OnTransportPriceSetfocusFnc);
	//m_wndTransportPrice.SetEvent(WE_KILLFOCUS, _OnTransportPriceKillfocusFnc);
	m_wndTransportPrice.SetEvent(WE_CHECKVALUE, _OnTransportPriceCheckValueFnc);
	//m_wndTestRunPrice.SetEvent(WE_CHANGE, _OnTestRunPriceChangeFnc);
	//m_wndTestRunPrice.SetEvent(WE_SETFOCUS, _OnTestRunPriceSetfocusFnc);
	//m_wndTestRunPrice.SetEvent(WE_KILLFOCUS, _OnTestRunPriceKillfocusFnc);
	m_wndTestRunPrice.SetEvent(WE_CHECKVALUE, _OnTestRunPriceCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddFAMAssetExtraInformationFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditFAMAssetExtraInformationFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteFAMAssetExtraInformationFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveFAMAssetExtraInformationFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelFAMAssetExtraInformationFnc, 0, 'T', VK_CONTROL);*/
	SetMode(GetMode());
}
void CFAMAssetExtraInformation::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCapacity.GetDlgCtrlID(), m_szCapacity);
	DDX_Text(pDX, m_wndTransportPrice.GetDlgCtrlID(), m_nTransportPrice);
	DDX_Text(pDX, m_wndTestRunPrice.GetDlgCtrlID(), m_nTestRunPrice);

}
void CFAMAssetExtraInformation::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_asset WHERE fa_assetno='%s'"), pMF->m_szAssetNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("fa_capacity"), m_szCapacity);
		rs.GetValue(_T("fa_transportprice"), m_nTransportPrice);
		rs.GetValue(_T("fa_testrunprice"), m_nTestRunPrice);
		//UpdateData(FALSE);
	}
	else
		SetMode(VM_NONE);
}
void CFAMAssetExtraInformation::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_assetTbl.SetValue(_T("fa_createdby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("fa_createddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("fa_updatedby"), pMF->GetCurrentUser());
	m_fam_assetTbl.SetValue(_T("fa_updateddate"), pMF->GetSysDateTime());
	m_fam_assetTbl.SetValue(_T("fa_capacity"), m_szCapacity);
	m_fam_assetTbl.SetValue(_T("fa_transportprice"), m_nTransportPrice);
	m_fam_assetTbl.SetValue(_T("fa_testrunprice"), m_nTestRunPrice);

}
void CFAMAssetExtraInformation::SetDefaultValues(){

	m_szCapacity.Empty();
	m_nTransportPrice=0;
	m_nTestRunPrice=0;

}
int CFAMAssetExtraInformation::SetMode(int nMode){
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
			if (pMF->m_szDeprUnit.IsEmpty())
			{
 				EnableControls(TRUE); 
 				EnableButtons(TRUE, 0, 1, -1);
			}
			else
			{
				EnableControls(FALSE); 
 				EnableButtons(FALSE, 0, 1, -1);
			}
			GetDataToScreen();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1);
			GetDataToScreen();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CFAMAssetExtraInformation::OnCapacityChange(){
	
} */
/*void CFAMAssetExtraInformation::OnCapacitySetfocus(){
	
} */
/*void CFAMAssetExtraInformation::OnCapacityKillfocus(){
	
} */
int CFAMAssetExtraInformation::OnCapacityCheckValue(){
	return 0;
} 
/*void CFAMAssetExtraInformation::OnTransportPriceChange(){
	
} */
/*void CFAMAssetExtraInformation::OnTransportPriceSetfocus(){
	
} */
/*void CFAMAssetExtraInformation::OnTransportPriceKillfocus(){
	
} */
int CFAMAssetExtraInformation::OnTransportPriceCheckValue()
{
	if (m_nTransportPrice < 0)
	{
		m_wndTransportPrice.SetToolTipMessage(_T("This value must be greater than or equal to zero"));
		return -1;
	}
	return 0;
} 
/*void CFAMAssetExtraInformation::OnTestRunPriceChange(){
	
} */
/*void CFAMAssetExtraInformation::OnTestRunPriceSetfocus(){
	
} */
/*void CFAMAssetExtraInformation::OnTestRunPriceKillfocus(){
	
} */
int CFAMAssetExtraInformation::OnTestRunPriceCheckValue()
{
	if (m_nTestRunPrice < 0)
	{
		m_wndTestRunPrice.SetToolTipMessage(_T("This value must be greater than or equal to zero"));
		return -1;
	}
	return 0;
} 
void CFAMAssetExtraInformation::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (!IsValidateData())
		return;
	CGuiDialog::OnOK();
} 
void CFAMAssetExtraInformation::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMAssetExtraInformation::OnAddFAMAssetExtraInformation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetExtraInformation::OnEditFAMAssetExtraInformation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetExtraInformation::OnDeleteFAMAssetExtraInformation(){
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
 		OnCancelFAMAssetExtraInformation(); 
 	}
	return 0;
}
int CFAMAssetExtraInformation::OnSaveFAMAssetExtraInformation(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_fam_assetTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_fam_assetTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnFAMAssetExtraInformationListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CFAMAssetExtraInformation::OnCancelFAMAssetExtraInformation(){
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
int CFAMAssetExtraInformation::OnFAMAssetExtraInformationListLoadData(){
	return 0;
}
