#include "FAMMaintenanceDialog.h"
#include "MainFrm.h"

static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMMaintenanceDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnAssetNoChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnAssetNoChange();
} */
/*static void _OnAssetNoSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnAssetNoSetfocus();} */ 
/*static void _OnAssetNoKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnAssetNoKillfocus();
} */
//static int _OnAssetNoCheckValueFnc(CWnd *pWnd){
	//return ((CFAMMaintenanceDialog *)pWnd)->OnAssetNoCheckValue();
//} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnFromDateCheckValue();
} 
static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnToDateChange();
}
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnToDateSetfocus();} */ 
static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnToDateKillfocus();
}
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnNextScheduledChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnNextScheduledChange();
}
/*static void _OnNextScheduledSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnNextScheduledSetfocus();} */ 
/*static void _OnNextScheduledKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnNextScheduledKillfocus();
} */
static int _OnNextScheduledCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnNextScheduledCheckValue();
} 
/*static void _OnCostChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnCostChange();
} */
/*static void _OnCostSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnCostSetfocus();} */ 
/*static void _OnCostKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnCostKillfocus();
} */
static int _OnCostCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnCostCheckValue();
} 
/*static void _OnPerformedByChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnPerformedByChange();
} */
/*static void _OnPerformedBySetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnPerformedBySetfocus();} */ 
/*static void _OnPerformedByKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnPerformedByKillfocus();
} */
static int _OnPerformedByCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnPerformedByCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnbtnSaveSelectFnc(CWnd *pWnd){
	CFAMMaintenanceDialog *pVw = (CFAMMaintenanceDialog *)pWnd;
	pVw->OnbtnSaveSelect();
} 
static void _OnbtnCancelSelectFnc(CWnd *pWnd){
	CFAMMaintenanceDialog *pVw = (CFAMMaintenanceDialog *)pWnd;
	pVw->OnbtnCancelSelect();
} 
static int _OnAddFAMMaintenanceDialogFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceDialog*)pWnd)->OnAddFAMMaintenanceDialog();
} 
static int _OnEditFAMMaintenanceDialogFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceDialog*)pWnd)->OnEditFAMMaintenanceDialog();
} 
static int _OnDeleteFAMMaintenanceDialogFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceDialog*)pWnd)->OnDeleteFAMMaintenanceDialog();
} 
static int _OnSaveFAMMaintenanceDialogFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceDialog*)pWnd)->OnSaveFAMMaintenanceDialog();
} 
static int _OnCancelFAMMaintenanceDialogFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceDialog*)pWnd)->OnCancelFAMMaintenanceDialog();
}

CFAMMaintenanceDialog::CFAMMaintenanceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CFAMMaintenanceDialog::~CFAMMaintenanceDialog(){
}
void CFAMMaintenanceDialog::OnCreateComponents()
{
	m_wndTypeLabel.Create(this, _T("Type"), 5, 5, 105, 30);
	m_wndType.Create(this,110, 5, 385, 30); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 35, 105, 60);
	m_wndFromDate.Create(this,110, 35, 210, 60); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 35, 280, 60);
	m_wndToDate.Create(this,285, 35, 385, 60); 
	m_wndNextScheduledLabel.Create(this, _T("Next Scheduled"), 5, 65, 105, 90);
	m_wndNextScheduled.Create(this,110, 65, 210, 90); 
	m_wndCostLabel.Create(this, _T("Cost"), 215, 65, 280, 90);
	m_wndCost.Create(this,285, 65, 385, 90); 
	m_wndPerformedByLabel.Create(this, _T("Performed By"), 5, 95, 105, 120);
	m_wndPerformedBy.Create(this,110, 95, 385, 120); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 125, 105, 150);
	m_wndDescription.Create(this,110, 125, 385, 230); 
	m_wndbtnSave.Create(this, _T("Save"), 220, 235, 300, 260);
	m_wndbtnCancel.Create(this, _T("Cancel"), 305, 235, 385, 260);

}
void CFAMMaintenanceDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(100);
	//m_wndAssetNo.SetLimitText(15);
	//m_wndAssetNo.SetCheckValue(true);
	//m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(false);
	//m_wndNextScheduled.SetMax(CDate(pMF->GetSysDate()));
	m_wndNextScheduled.SetCheckValue(false);
	m_wndCost.SetLimitText(16);
	m_wndCost.SetCurrencyFormat(TRUE);
	//m_wndCost.SetCheckValue(true);
	m_wndPerformedBy.SetLimitText(254);
	m_wndPerformedBy.SetCheckValue(true);
	m_wndDescription.SetLimitText(254);
	m_wndDescription.SetMultiLine(TRUE);
	//m_wndDescription.SetCheckValue(true);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 220);

	m_fam_maintenanceTbl.SetTableName(_T("fam_maintenance"));
	m_fam_maintenanceTbl.AddField(_T("fam_createdby"), dfText, 15); 
	m_fam_maintenanceTbl.AddField(_T("fam_createddate"), dfDateTime); 
	m_fam_maintenanceTbl.AddField(_T("fam_updatedby"), dfText, 15); 
	m_fam_maintenanceTbl.AddField(_T("fam_updateddate"), dfDateTime); 
	m_fam_maintenanceTbl.AddField(_T("fam_assetno"), dfText, 15);
	m_fam_maintenanceTbl.AddField(_T("fam_type"), dfText, 15);
	m_fam_maintenanceTbl.AddField(_T("fam_idx"), dfLong); 
	m_fam_maintenanceTbl.AddField(_T("fam_fromdate"), dfDateTime); 
	m_fam_maintenanceTbl.AddField(_T("fam_todate"), dfDateTime); 
	m_fam_maintenanceTbl.AddField(_T("fam_nextdue"), dfDate); 
	m_fam_maintenanceTbl.AddField(_T("fam_desc"), dfText, 254); 
	m_fam_maintenanceTbl.AddField(_T("fam_cost"), dfDouble); 
	m_fam_maintenanceTbl.AddField(_T("fam_performedby"), dfText, 254);
	m_fam_maintenanceTbl.AddField(_T("fam_status"), dfText, 15);
	m_fam_maintenanceTbl.AddField(_T("fam_asset_status"), dfText, 15);
	SetWindowTitle(_T("Maintenance and Repairs Information"));
}
void CFAMMaintenanceDialog::OnSetWindowEvents()
{
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndAssetNo.SetEvent(WE_CHANGE, _OnAssetNoChangeFnc);
	//m_wndAssetNo.SetEvent(WE_SETFOCUS, _OnAssetNoSetfocusFnc);
	//m_wndAssetNo.SetEvent(WE_KILLFOCUS, _OnAssetNoKillfocusFnc);
	//m_wndAssetNo.SetEvent(WE_CHECKVALUE, _OnAssetNoCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndNextScheduled.SetEvent(WE_CHANGE, _OnNextScheduledChangeFnc);
	//m_wndNextScheduled.SetEvent(WE_SETFOCUS, _OnNextScheduledSetfocusFnc);
	//m_wndNextScheduled.SetEvent(WE_KILLFOCUS, _OnNextScheduledKillfocusFnc);
	m_wndNextScheduled.SetEvent(WE_CHECKVALUE, _OnNextScheduledCheckValueFnc);
	//m_wndCost.SetEvent(WE_CHANGE, _OnCostChangeFnc);
	//m_wndCost.SetEvent(WE_SETFOCUS, _OnCostSetfocusFnc);
	//m_wndCost.SetEvent(WE_KILLFOCUS, _OnCostKillfocusFnc);
	m_wndCost.SetEvent(WE_CHECKVALUE, _OnCostCheckValueFnc);
	//m_wndPerformedBy.SetEvent(WE_CHANGE, _OnPerformedByChangeFnc);
	//m_wndPerformedBy.SetEvent(WE_SETFOCUS, _OnPerformedBySetfocusFnc);
	//m_wndPerformedBy.SetEvent(WE_KILLFOCUS, _OnPerformedByKillfocusFnc);
	m_wndPerformedBy.SetEvent(WE_CHECKVALUE, _OnPerformedByCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndbtnSave.SetEvent(WE_CLICK, _OnbtnSaveSelectFnc);
	m_wndbtnCancel.SetEvent(WE_CLICK, _OnbtnCancelSelectFnc);
	
	SetMode(GetMode());
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CFAMMaintenanceDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	//DDX_Text(pDX, m_wndAssetNo.GetDlgCtrlID(), m_szAssetNo);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndNextScheduled.GetDlgCtrlID(), m_szNextScheduled);
	DDX_Text(pDX, m_wndCost.GetDlgCtrlID(), m_nCost);
	DDX_Text(pDX, m_wndPerformedBy.GetDlgCtrlID(), m_szPerformedBy);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CFAMMaintenanceDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_maintenance WHERE fam_assetno='%s' AND fam_idx=%d"), pMF->m_szAssetNo, m_nIndex);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("fam_type"), m_szTypeKey);
		rs.GetValue(_T("fam_fromdate"), m_szFromDate);
		rs.GetValue(_T("fam_todate"), m_szToDate);
		rs.GetValue(_T("fam_nextdue"), m_szNextScheduled);
		rs.GetValue(_T("fam_desc"), m_szDescription);
		rs.GetValue(_T("fam_cost"), m_nCost);
		rs.GetValue(_T("fam_performedby"), m_szPerformedBy);
		rs.GetValue(_T("fam_performedby"), m_szPerformedBy);
		SetMode(VM_EDIT);
	}
}
void CFAMMaintenanceDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szTemp;
	if (GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rsa(&pMF->m_db);
		szSQL.Format(_T("SELECT coalesce(max(fam_idx), 0)+1 FROM fam_maintenance Where fam_assetno='%s'"), pMF->m_szAssetNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
		szSQL.Format(_T("SELECT fa_status AS Status FROM fam_asset WHERE fa_assetno='%s'"), pMF->m_szAssetNo);
		rsa.ExecSQL(szSQL);
		szTemp = rsa.GetValue(_T("Status"));
	}
	m_fam_maintenanceTbl.SetValue(_T("fam_createdby"), pMF->GetCurrentUser());
	m_fam_maintenanceTbl.SetValue(_T("fam_createddate"), pMF->GetSysDateTime());
	m_fam_maintenanceTbl.SetValue(_T("fam_updatedby"), pMF->GetCurrentUser());
	m_fam_maintenanceTbl.SetValue(_T("fam_updateddate"), pMF->GetSysDateTime());
	m_fam_maintenanceTbl.SetValue(_T("fam_assetno"), m_szAssetNo);
	m_fam_maintenanceTbl.SetValue(_T("fam_type"), m_szTypeKey);
	m_fam_maintenanceTbl.SetValue(_T("fam_idx"), m_nIndex);
	m_fam_maintenanceTbl.SetValue(_T("fam_fromdate"), m_szFromDate);
	m_fam_maintenanceTbl.SetValue(_T("fam_todate"), m_szToDate);
	m_fam_maintenanceTbl.SetValue(_T("fam_nextdue"), m_szNextScheduled);
	m_fam_maintenanceTbl.SetValue(_T("fam_desc"), m_szDescription);
	m_fam_maintenanceTbl.SetValue(_T("fam_cost"), m_nCost);
	m_fam_maintenanceTbl.SetValue(_T("fam_performedby"), m_szPerformedBy);
	m_fam_maintenanceTbl.SetValue(_T("fam_status"), _T("P"));
	m_fam_maintenanceTbl.SetValue(_T("fam_asset_status"), szTemp);
}
void CFAMMaintenanceDialog::SetDefaultValues()
{
	m_szTypeKey.Empty();
	//m_szAssetNo.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szNextScheduled.Empty();
	m_nCost=0;
	m_szPerformedBy.Empty();
	m_szDescription.Empty();

}
int CFAMMaintenanceDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues();
			//m_wndAssetNo.EnableWindow(false);
			//m_szAssetNo = pMF->m_szAssetNo;
			m_szFromDate = pMF->GetSysDate();
			m_szTypeKey = _T("1");
			//m_szToDate = pMF->GetSysDate();
			//m_szNextScheduled = pMF->GetSysDate();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1);
			//m_wndAssetNo.EnableWindow(false);
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
void CFAMMaintenanceDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMMaintenanceDialog::OnTypeSelendok(){
	 
}
/*void CFAMMaintenanceDialog::OnTypeSetfocus(){
	
}*/
/*void CFAMMaintenanceDialog::OnTypeKillfocus(){
	
}*/
long CFAMMaintenanceDialog::OnTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTypeKey);
	}
	m_wndType.DeleteAllItems();
	int nCount = 0;
	/*szSQL.Format(_T("SELECT fams_code AS id, fams_desc AS description FROM fam_maintenance_sel ")\
				 _T("WHERE fams_id='type' %s ORDER BY cast(fams_code as integer)"), szWhere);*/
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as description FROM sys_sel ")\
				_T("WHERE ss_id = 'fm_type' %s ORDER BY ss_index, ss_code"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMMaintenanceDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMMaintenanceDialog::OnAssetNoChange(){
	
} */
/*void CFAMMaintenanceDialog::OnAssetNoSetfocus(){
	
} */
/*void CFAMMaintenanceDialog::OnAssetNoKillfocus(){
	
} */
//int CFAMMaintenanceDialog::OnAssetNoCheckValue(){
	//return 0;
//} 
/*void CFAMMaintenanceDialog::OnFromDateChange(){
	
} */
/*void CFAMMaintenanceDialog::OnFromDateSetfocus(){
	
} */
/*void CFAMMaintenanceDialog::OnFromDateKillfocus(){
	
} */
int CFAMMaintenanceDialog::OnFromDateCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	//UpdateData(TRUE);
	if (CompareDate(m_szFromDate, pMF->m_szPurchaseDate) < 0)
	{
		m_wndFromDate.SetToolTipMessage(_T("This value must be greater than or equal to Purchase Date"));
		return -1;
	}
	return 0;
} 
void CFAMMaintenanceDialog::OnToDateChange()
{
	CString szValue;
	m_wndToDate.GetWindowText(szValue);
	if (szValue.Left(2).Trim().GetLength() > 0 || 
		szValue.Right(4).Trim().GetLength() > 0 ||
		szValue.Mid(3, 2).Trim().GetLength() > 0)
		m_wndToDate.SetCheckValue(true);
		//MessageBox(m_szToDate);
	else
		m_wndToDate.SetCheckValue(false);
}
/*void CFAMMaintenanceDialog::OnToDateSetfocus(){
	
} */
void CFAMMaintenanceDialog::OnToDateKillfocus()
{
	
}
int CFAMMaintenanceDialog::OnToDateCheckValue()
{
	if (CompareDate(m_szFromDate, m_szToDate) > 0)
	{
		m_wndToDate.SetToolTipMessage(_T("This value must be greater than or equal to From Date"));
		return -1;
	}
	return 0;
} 
void CFAMMaintenanceDialog::OnNextScheduledChange()
{
	CString szValue;
	m_wndToDate.GetWindowText(szValue);
	if (szValue.Left(2).Trim().GetLength() > 0 || 
		szValue.Right(4).Trim().GetLength() > 0 ||
		szValue.Mid(3, 2).Trim().GetLength() > 0)
		m_wndNextScheduled.SetCheckValue(true);
		//MessageBox(m_szToDate);
	else
		m_wndNextScheduled.SetCheckValue(false);
}
/*void CFAMMaintenanceDialog::OnNextScheduledSetfocus(){
	
} */
/*void CFAMMaintenanceDialog::OnNextScheduledKillfocus(){
	
} */
int CFAMMaintenanceDialog::OnNextScheduledCheckValue()
{
	//UpdateData(TRUE);
	if (CompareDate(m_szToDate, m_szNextScheduled) >= 0)
	{
		m_wndNextScheduled.SetToolTipMessage(_T("This value must be greater than To Date"));
		return -1;
	}
	return 0;
} 
/*void CFAMMaintenanceDialog::OnCostChange(){
	
} */
/*void CFAMMaintenanceDialog::OnCostSetfocus(){
	
} */
/*void CFAMMaintenanceDialog::OnCostKillfocus(){
	
} */
int CFAMMaintenanceDialog::OnCostCheckValue()
{
	if (m_nCost < 0)
	{
		m_wndCost.SetToolTipMessage(_T("This value must be greater than or equal to zero"));
	}
	return 0;
} 
/*void CFAMMaintenanceDialog::OnPerformedByChange(){
	
} */
/*void CFAMMaintenanceDialog::OnPerformedBySetfocus(){
	
} */
/*void CFAMMaintenanceDialog::OnPerformedByKillfocus(){
	
} */
int CFAMMaintenanceDialog::OnPerformedByCheckValue()
{
	/*if (m_szPerformedBy.IsEmpty())
	{
		m_wndPerformedBy.SetToolTipMessage(_T("Data is empty. Please insert data"));
		return -1;
	}*/
	return 0;
} 
/*void CFAMMaintenanceDialog::OnDescriptionChange(){
	
} */
/*void CFAMMaintenanceDialog::OnDescriptionSetfocus(){
	
} */
/*void CFAMMaintenanceDialog::OnDescriptionKillfocus(){
	
} */
int CFAMMaintenanceDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CFAMMaintenanceDialog::OnbtnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (OnSaveFAMMaintenanceDialog() >= 0)
		CGuiDialog::OnOK();
} 
void CFAMMaintenanceDialog::OnbtnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMMaintenanceDialog::OnAddFAMMaintenanceDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMMaintenanceDialog::OnEditFAMMaintenanceDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMMaintenanceDialog::OnDeleteFAMMaintenanceDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelFAMMaintenanceDialog(); 
 	}
	return 0;
}
int CFAMMaintenanceDialog::OnSaveFAMMaintenanceDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_fam_maintenanceTbl.GetInsertSQL(); 
		//  MessageBox(szSQL);
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE fam_assetno='%s' AND fam_idx=%d"), m_szAssetNo, m_nIndex); 
 		szSQL = m_fam_maintenanceTbl.GetUpdateSQL(_T("fam_createdby, fam_createddate, fam_assetno, fam_idx, fam_status, fam_asset_status")); 
 		szSQL += szWhere; 
 	} 

 	int ret = pMF->ExecSQL(szSQL);
	if (!m_szNextScheduled.IsEmpty())
	{
		//CRecord rs(&pMF->m_db);
		szSQL.Format(_T("UPDATE fam_asset SET fa_nextschedmaint='%s' WHERE fa_assetno='%s'"), m_szNextScheduled, m_szAssetNo);
		pMF->ExecSQL(szSQL);
	}
 	if(ret > 0) 
 	{ 
 		//OnFAMMaintenanceDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		if (m_szTypeKey.Trim() == _T("1"))
		{
			szSQL.Format(_T("UPDATE fam_asset SET fa_status='R' WHERE fa_assetno='%s'"), m_szAssetNo); 
		}
		else
		{
			szSQL.Format(_T("UPDATE fam_asset SET fa_status='M' WHERE fa_assetno='%s'"), m_szAssetNo); 
		}
		pMF->ExecSQL(szSQL);
 	} 
 	//else 
 	//{ 
 	//} 
 	return ret; 
 	//return 0; 
}
int CFAMMaintenanceDialog::OnCancelFAMMaintenanceDialog()
{
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
int CFAMMaintenanceDialog::OnFAMMaintenanceDialogListLoadData(){
	return 0;
}
