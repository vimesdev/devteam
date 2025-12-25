#include "FAMAssetDepreDialog.h"
#include "MainFrm.h"
static void _OnDeprTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMAssetDepreDialog* )pWnd)->OnDeprTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeprTypeSelendokFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDeprTypeSelendok();
}
/*static void _OnDeprTypeSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDeprTypeKillfocus();
}*/
/*static void _OnDeprTypeKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDeprTypeKillfocus();
}*/
static long _OnDeprTypeLoadDataFnc(CWnd *pWnd){
	return ((CFAMAssetDepreDialog *)pWnd)->OnDeprTypeLoadData();
}
/*static void _OnDeprTypeAddNewFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDeprTypeAddNew();
}*/
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDepreDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDepreDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMAssetDepreDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMAssetDepreDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnbtnSaveSelectFnc(CWnd *pWnd){
	CFAMAssetDepreDialog *pVw = (CFAMAssetDepreDialog *)pWnd;
	pVw->OnbtnSaveSelect();
} 
static void _OnbtnCancelSelectFnc(CWnd *pWnd){
	CFAMAssetDepreDialog *pVw = (CFAMAssetDepreDialog *)pWnd;
	pVw->OnbtnCancelSelect();
} 
static int _OnAddFAMAssetDepreDialogFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreDialog*)pWnd)->OnAddFAMAssetDepreDialog();
} 
static int _OnEditFAMAssetDepreDialogFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreDialog*)pWnd)->OnEditFAMAssetDepreDialog();
} 
static int _OnDeleteFAMAssetDepreDialogFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreDialog*)pWnd)->OnDeleteFAMAssetDepreDialog();
} 
static int _OnSaveFAMAssetDepreDialogFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreDialog*)pWnd)->OnSaveFAMAssetDepreDialog();
} 
static int _OnCancelFAMAssetDepreDialogFnc(CWnd *pWnd){
	 return ((CFAMAssetDepreDialog*)pWnd)->OnCancelFAMAssetDepreDialog();
} 
CFAMAssetDepreDialog::CFAMAssetDepreDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 736;
	m_nDlgHeight = 429;
	SetDefaultValues();
}
CFAMAssetDepreDialog::~CFAMAssetDepreDialog(){
}
void CFAMAssetDepreDialog::OnCreateComponents(){
	m_wndDeprTypeLabel.Create(this, _T("Depreciation Type"), 5, 10, 90, 35);
	m_wndDeprType.Create(this,95, 10, 360, 35); 
	m_wndDateLabel.Create(this, _T("Date"), 5, 40, 90, 65);
	m_wndDate.Create(this,95, 40, 180, 65); 
	m_wndAmountLabel.Create(this, _T("Amount"), 185, 40, 270, 65);
	m_wndAmount.Create(this,275, 40, 360, 65); 
	m_wndNoteLabel.Create(this, _T("Note"), 5, 70, 90, 95);
	m_wndNote.Create(this,95, 70, 360, 175); 
	m_wndbtnSave.Create(this, _T("Save"), 195, 180, 275, 205);
	m_wndbtnCancel.Create(this, _T("Cancel"), 280, 180, 360, 205);

}
void CFAMAssetDepreDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndDeprType.SetCheckValue(true);
	m_wndDeprType.LimitText(35);
	//m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCurrencyFormat(TRUE);
	m_wndAmount.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	//m_wndNote.SetCheckValue(true);


	m_wndDeprType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeprType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

	m_fam_depreciationTbl.SetTableName(_T("fam_depreciation"));
	m_fam_depreciationTbl.AddField(_T("fad_createdby"), dfText, 15); 
	m_fam_depreciationTbl.AddField(_T("fad_createddate"), dfDateTime); 
	m_fam_depreciationTbl.AddField(_T("fad_updatedby"), dfText, 15); 
	m_fam_depreciationTbl.AddField(_T("fad_updateddate"), dfDateTime); 
	m_fam_depreciationTbl.AddField(_T("fad_assetno"), dfText, 15); 
	m_fam_depreciationTbl.AddField(_T("fad_idx"), dfLong); 
	m_fam_depreciationTbl.AddField(_T("fad_date"), dfDate); 
	m_fam_depreciationTbl.AddField(_T("fad_amount"), dfDouble); 
	m_fam_depreciationTbl.AddField(_T("fad_note"), dfText, 254); 
	m_fam_depreciationTbl.AddField(_T("fad_year"), dfLong); 
	m_fam_depreciationTbl.AddField(_T("fad_month"), dfLong); 
	m_fam_depreciationTbl.AddField(_T("fad_quantity"), dfLong); 
	m_fam_depreciationTbl.AddField(_T("fad_scale"), dfDouble);
	SetWindowTitle(_T("Depreciation Information"));
}
void CFAMAssetDepreDialog::OnSetWindowEvents()
{
	m_wndDeprType.SetEvent(WE_SELENDOK, _OnDeprTypeSelendokFnc);
	//m_wndDeprType.SetEvent(WE_SETFOCUS, _OnDeprTypeSetfocusFnc);
	//m_wndDeprType.SetEvent(WE_KILLFOCUS, _OnDeprTypeKillfocusFnc);
	m_wndDeprType.SetEvent(WE_SELCHANGE, _OnDeprTypeSelectChangeFnc);
	m_wndDeprType.SetEvent(WE_LOADDATA, _OnDeprTypeLoadDataFnc);
	//m_wndDeprType.SetEvent(WE_ADDNEW, _OnDeprTypeAddNewFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndbtnSave.SetEvent(WE_CLICK, _OnbtnSaveSelectFnc);
	m_wndbtnCancel.SetEvent(WE_CLICK, _OnbtnCancelSelectFnc);
	SetMode(GetMode());
	//m_nMonth = 0;
	//m_nYear = 0;
	//m_nDeprAmount = 0;
	m_nMonth = 0;
	m_nYear = 0;
	m_nScale = 0;
	if (GetMode() == VM_EDIT)
	{
		GetDataToScreen();
		//_msg(_T("%d"), m_nID);
	}
	//m_szDeprUnit.Empty();
	//m_nTotalAmt = 0;
}
void CFAMAssetDepreDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndDeprType.GetDlgCtrlID(), m_szDeprTypeKey);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
}
void CFAMAssetDepreDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_depreciation Where fad_assetno='%s' And fad_idx=%d"), m_szAssetNo, m_nID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("fad_date"), m_szDate);
		rs.GetValue(_T("fad_amount"), m_nAmount);
		rs.GetValue(_T("fad_note"), m_szNote);
		rs.GetValue(_T("fad_month"), m_nMonth);
		rs.GetValue(_T("fad_year"), m_nYear);
		rs.GetValue(_T("fad_scale"), m_nScale);
		//m_nDeprAmount = m_nAmount;
		SetMode(VM_EDIT);
	}
}
void CFAMAssetDepreDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("Select coalesce(max(fad_idx), 0)+1 From fam_depreciation WHERE fad_assetno='%s'"), m_szAssetNo);
		rs.ExecSQL(szSQL);
		m_nID = rs.GetIntValue();
	}
	m_fam_depreciationTbl.SetValue(_T("fad_createdby"), pMF->GetCurrentUser());
	m_fam_depreciationTbl.SetValue(_T("fad_createddate"), pMF->GetSysDateTime());
	m_fam_depreciationTbl.SetValue(_T("fad_updatedby"), pMF->GetCurrentUser());
	m_fam_depreciationTbl.SetValue(_T("fad_updateddate"), pMF->GetSysDateTime());
	m_fam_depreciationTbl.SetValue(_T("fad_assetno"), m_szAssetNo);
	m_fam_depreciationTbl.SetValue(_T("fad_idx"), m_nID);
	m_fam_depreciationTbl.SetValue(_T("fad_date"), m_szDate);
	m_fam_depreciationTbl.SetValue(_T("fad_month"), m_nMonth);
	m_fam_depreciationTbl.SetValue(_T("fad_year"), m_nYear);
	m_fam_depreciationTbl.SetValue(_T("fad_amount"), m_nAmount);
	m_fam_depreciationTbl.SetValue(_T("fad_scale"), m_nScale);
	m_fam_depreciationTbl.SetValue(_T("fad_note"), m_szNote);

}
void CFAMAssetDepreDialog::SetDefaultValues(){

	m_szDeprTypeKey.Empty();
	m_szDate.Empty();
	m_nAmount=0;
	m_szNote.Empty();

}
int CFAMAssetDepreDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_szDate = pMF->GetSysDate();
			if (!pMF->m_szDeprUnit.IsEmpty())
			{
				m_wndDeprType.EnableWindow(FALSE);
				if (pMF->m_szDeprUnit.Left(1).Trim() == _T("M"))
					m_szDeprTypeKey = _T("M");
				else
				{
					m_szDeprTypeKey = _T("Y");
					//CDate dt(GetDepreciationDate());
					//CString szDate;
					//szDate.Format(_T("%.2d/%.2d/%.4d"), dt.GetDay(), dt.GetMonth(), dt.GetYear());
					//MessageBox(szDate);
					//m_wndDate.SetData(szDate);
					m_szDate = GetDepreciationDate();
					m_wndDate.EnableWindow(FALSE);
				}
			}
			else
			{
				if (pMF->m_szDeprMethod == _T("Q"))
				{
					m_wndDeprType.EnableWindow(FALSE);
					m_szDeprTypeKey = _T("M");
				}
			}
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndDeprType.EnableWindow(FALSE);
			if (pMF->m_szDeprUnit.Left(1).Trim() == _T("M"))
				m_szDeprTypeKey = _T("M");
			else
			{
				m_szDeprTypeKey = _T("Y");
				m_wndDate.SetData(GetDepreciationDate());
				m_wndDate.EnableWindow(FALSE);
			}
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 1, -1); 
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
void CFAMAssetDepreDialog::OnDeprTypeSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CFAMAssetDepreDialog::OnDeprTypeSelendok()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	UpdateData(TRUE);
	//MessageBox(pMF->m_szDeprUnit + _T(" - ") + m_szDeprTypeKey);
	if (pMF->m_szDeprUnit.IsEmpty() && m_szDeprTypeKey == _T("Y"))
	{
		CDate dt(GetDepreciationDate());
		CString szDate;
		szDate.Format(_T("%.2d/%.2d/%.4d"), dt.GetDay(), dt.GetMonth(), dt.GetYear());
		//MessageBox(szDate);
		m_wndDate.SetData(szDate);
		m_wndDate.EnableWindow(FALSE);
	}
	else if (pMF->m_szDeprUnit.IsEmpty() && m_szDeprTypeKey == _T("M"))
	{
		m_szDate = pMF->GetSysDate();
		m_wndDate.EnableWindow(TRUE);
		UpdateData(FALSE);
	}
}
/*void CFAMAssetDepreDialog::OnDeprTypeSetfocus(){
	
}*/
/*void CFAMAssetDepreDialog::OnDeprTypeKillfocus(){
	
}*/
long CFAMAssetDepreDialog::OnDeprTypeLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDeprType.IsSearchKey() && !m_szDeprTypeKey.IsEmpty())
	{
		szWhere.Format(_T(" WHERE fadt_id='%s' "), m_szDeprTypeKey);
	}
	m_wndDeprType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_deprtype %s ORDER BY fadt_id"),
				 szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDeprType.AddItems(
			rs.GetValue(_T("fadt_id")), 
			rs.GetValue(_T("fadt_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMAssetDepreDialog::OnDeprTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMAssetDepreDialog::OnDateChange(){
	
} */
/*void CFAMAssetDepreDialog::OnDateSetfocus(){
	
} */
/*void CFAMAssetDepreDialog::OnDateKillfocus(){
	
} */
int CFAMAssetDepreDialog::OnDateCheckValue()
{
	if (m_szDeprTypeKey == _T("M"))
	{
		CString szDate = GetLastDateOfMonth();
		CDate date;
		CDate dt;
		//MessageBox(m_szDate);
		date.ParseDate(szDate, ddmmyyyy);
		dt.ParseDate(m_szDate);
		if (dt.GetDay() > date.GetDay() ||
			dt.GetMonth() != date.GetMonth() ||
			dt.GetYear() != date.GetYear())
		{
			m_wndDate.SetToolTipMessage(_T("This value is invalid"));
			return -1;
		}
	}
	CDate dtm;
	dtm.ParseDate(m_szDate);
	m_nMonth = dtm.GetMonth();
	m_nYear = dtm.GetYear();
	return 0;
} 
/*void CFAMAssetDepreDialog::OnAmountChange(){
	
} */
/*void CFAMAssetDepreDialog::OnAmountSetfocus(){
	
} */
/*void CFAMAssetDepreDialog::OnAmountKillfocus(){
	
} */
int CFAMAssetDepreDialog::OnAmountCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (m_nAmount > m_nRemainValue || m_nAmount <= 0)
	{
		m_wndAmount.SetToolTipMessage(_T("This value must be greater than zero and within permissible limit"));
		return -1;
	}
	m_nScale = m_nAmount;
	return 0;
} 
/*void CFAMAssetDepreDialog::OnNoteChange(){
	
} */
/*void CFAMAssetDepreDialog::OnNoteSetfocus(){
	
} */
/*void CFAMAssetDepreDialog::OnNoteKillfocus(){
	
} */
int CFAMAssetDepreDialog::OnNoteCheckValue(){
	return 0;
} 
void CFAMAssetDepreDialog::OnbtnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (OnSaveFAMAssetDepreDialog() >= 0)
	{
		//MessageBox(_T("OK"));
		CGuiDialog::OnOK();
	}
} 
void CFAMAssetDepreDialog::OnbtnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CFAMAssetDepreDialog::OnAddFAMAssetDepreDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CFAMAssetDepreDialog::OnEditFAMAssetDepreDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMAssetDepreDialog::OnDeleteFAMAssetDepreDialog(){
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
 		OnCancelFAMAssetDepreDialog(); 
 	}
	return 0;
}
int CFAMAssetDepreDialog::OnSaveFAMAssetDepreDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szDeprUnit; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_fam_depreciationTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE fad_assetno='%s' AND fad_idx=%d "), m_szAssetNo, m_nID); 
 		szSQL = m_fam_depreciationTbl.GetUpdateSQL(_T("fad_createdby, fad_createddate, fad_updatedby, fad_updateddate, fad_assetno, fad_idx")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		//MessageBox(_T("OK"));
		CRecord rs(&pMF->m_db);
		//CRecord rs2(&pMF->m_db);
		CRecord rsn(&pMF->m_db);
		CString szQuery;
		if (pMF->m_szDeprUnit.IsEmpty())
		{	
			//szQuery.Format(_T("SELECT famc_depr_method FROM fam_category WHERE trim(famc_name)='%s'"), pMF->m_szCategory.Trim());
			//rs1.ExecSQL(szQuery);
			szDeprUnit = m_szDeprTypeKey.Trim() + pMF->m_szDeprMethod + _T("M");
			//MessageBox(szDeprUnit);
			szQuery.Format(_T("UPDATE fam_asset SET fa_deprunit='%s' WHERE fa_assetno='%s'"), szDeprUnit, m_szAssetNo);
			//MessageBox(szQuery);
			int result = rsn.ExecSQL(szQuery);
			//_msg(_T("%d"), result);
			//MessageBox(_T("OK"));
			if (result >= 0)
				pMF->m_szDeprUnit = szDeprUnit;
		}
		if ((GetMode() == VM_ADD || GetMode() == VM_EDIT) && m_szDeprTypeKey.Trim() == _T("Y"))
		{
			CDate dt;
			dt.ParseDate(m_szDate);
			int nMonth = dt.GetMonth();
			int nYear = dt.GetYear();
			szQuery.Format(_T("UPDATE fam_depreciation SET fad_scale=%.2f, fad_month=%d, fad_year=%d WHERE fad_assetno='%s' AND fad_idx=%d"), 
						   m_nAmount / 12.00, nMonth, nYear, m_szAssetNo, m_nID);
			rs.ExecSQL(szQuery);
		}
		/*else if (GetMode() == VM_EDIT && m_nAmount != m_nDeprAmount)
		{*/
		/*szQuery.Format(_T("UPDATE fam_depreciation SET fad_month=%d, fad_year=%d WHERE fad_assetno='%s' AND fad_idx=%d"), 
					   nMonth, nYear, m_szAssetNo, m_nID);
		rsn.ExecSQL(szQuery);*/
		/*}*/
 		//OnFAMAssetDepreDialogListLoadData(); 
 		//SetMode(VM_VIEW); 
 	} 
 	/*else 
 	{ 
 	} */
 	return ret; 
 	//return 0; 
}
int CFAMAssetDepreDialog::OnCancelFAMAssetDepreDialog(){
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
int CFAMAssetDepreDialog::OnFAMAssetDepreDialogListLoadData(){
	return 0;
}
CString CFAMAssetDepreDialog::GetDepreciationDate()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	//if (!pMF->m_szDeprUnit.IsEmpty())
	szSQL.Format(_T("SELECT date('%s') + interval '1 year'"), m_szLastDate);
	//else
	//szSQL.Format(_T("SELECT date('%s') + interval '1 year'"), pMF->m_szInService);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue();
}
CString CFAMAssetDepreDialog::GetLastDateOfMonth()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CDate dt1, dt2;
	CString szDate;
	szDate.Empty();
	/*if (m_szLastDate.IsEmpty())
		dt1.ParseDate(pMF->m_szInService);
	else*/
	dt1.ParseDate(m_szLastDate);
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
