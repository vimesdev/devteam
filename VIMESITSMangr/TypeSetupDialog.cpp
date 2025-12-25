#include "TypeSetupDialog.h"
#include "MainFrm.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CTypeSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CTypeSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTypeSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CTypeSetupDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CTypeSetupDialog *pVw = (CTypeSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CTypeSetupDialog *pVw = (CTypeSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CTypeSetupDialog *pVw = (CTypeSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CTypeSetupDialog *pVw = (CTypeSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CTypeSetupDialog *pVw = (CTypeSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CTypeSetupDialog *pVw = (CTypeSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CTypeSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CTypeSetupDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnDeprTimeChangeFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDeprTimeChange();
} */
/*static void _OnDeprTimeSetfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDeprTimeSetfocus();} */ 
/*static void _OnDeprTimeKillfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDeprTimeKillfocus();
} */
static int _OnDeprTimeCheckValueFnc(CWnd *pWnd){
	return ((CTypeSetupDialog *)pWnd)->OnDeprTimeCheckValue();
} 
/*static void _OnDeprRateChangeFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDeprRateChange();
} */
/*static void _OnDeprRateSetfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDeprRateSetfocus();} */ 
/*static void _OnDeprRateKillfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnDeprRateKillfocus();
} */
static int _OnDeprRateCheckValueFnc(CWnd *pWnd){
	return ((CTypeSetupDialog *)pWnd)->OnDeprRateCheckValue();
} 
static int _OnAddTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CTypeSetupDialog*)pWnd)->OnAddTypeSetupDialog();
} 
static int _OnEditTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CTypeSetupDialog*)pWnd)->OnEditTypeSetupDialog();
} 
static int _OnDeleteTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CTypeSetupDialog*)pWnd)->OnDeleteTypeSetupDialog();
} 
static int _OnSaveTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CTypeSetupDialog*)pWnd)->OnSaveTypeSetupDialog();
} 
static int _OnCancelTypeSetupDialogFnc(CWnd *pWnd){
	 return ((CTypeSetupDialog*)pWnd)->OnCancelTypeSetupDialog();
} 
CTypeSetupDialog::CTypeSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CTypeSetupDialog::~CTypeSetupDialog()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	if (pMF->m_bChangeType == true && pMF->m_wndAsset.m_wndSearchTab.GetCurSel() == 0)
	{
		pMF->m_bChangeType = false;
	}
}
int CTypeSetupDialog::FindSelectIndex(CString szValue, CGuiListCtrl *pList)
{
	int nIndex = -1;
	for (int i = 0; i < pList->GetItemCount(); i++)
	{
		if (pList->GetItemText(i, 0) == szValue)
		{
			nIndex = i;
			break;
		}
	}
	return nIndex;
}
void CTypeSetupDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 505, 205); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 210, 105, 235);
	m_wndID.Create(this,110, 210, 210, 235); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 215, 210, 305, 235);
	m_wndDescription.Create(this,310, 210, 505, 235); 
	m_wndDeprTimeLabel.Create(this, _T("Depr Time"), 5, 240, 105, 265);
	m_wndDeprTime.Create(this,110, 240, 210, 265); 
	m_wndDeprRateLabel.Create(this, _T("Depr Rate"), 215, 240, 305, 265);
	m_wndDeprRate.Create(this,310, 240, 505, 265); 
	m_wndAdd.Create(this, _T("&Add"), 30, 270, 105, 295);
	m_wndEdit.Create(this, _T("&Edit"), 110, 270, 185, 295);
	m_wndDelete.Create(this, _T("&Delete"), 190, 270, 265, 295);
	m_wndSave.Create(this, _T("&Save"), 270, 270, 345, 295);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 270, 425, 295);
	m_wndClose.Create(this, _T("&Close"), 430, 270, 505, 295);


}
void CTypeSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(100);
	m_wndDescription.SetCheckValue(true);
	m_wndDeprRate.SetCurrencyFormat(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 240);
	m_wndList.InsertColumn(2, _T("Depr Time"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(3, _T("Depr Rate (%)"), CFMT_MONEY, 80);
	m_fam_assettypeTbl.SetTableName(_T("fam_assettype"));
	m_fam_assettypeTbl.AddField(_T("fast_id"), dfText, 15); 
	m_fam_assettypeTbl.AddField(_T("fast_desc"), dfText, 100); 
	m_fam_assettypeTbl.AddField(_T("fast_deprtime"), dfInteger);
	m_fam_assettypeTbl.AddField(_T("fast_deprrate"), dfDouble);
	m_fam_assettypeTbl.AddField(_T("fast_org_id"), dfText, 3);
	SetWindowTitle(_T("Asset Type Information"));
}
void CTypeSetupDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Asset Type"));
	m_wndList.AddEvent(1, _T("&Add"), _OnAddTypeSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditTypeSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteTypeSetupDialogFnc, 0, 0, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndDeprTime.SetEvent(WE_CHANGE, _OnDeprTimeChangeFnc);
	//m_wndDeprTime.SetEvent(WE_SETFOCUS, _OnDeprTimeSetfocusFnc);
	//m_wndDeprTime.SetEvent(WE_KILLFOCUS, _OnDeprTimeKillfocusFnc);
	m_wndDeprTime.SetEvent(WE_CHECKVALUE, _OnDeprTimeCheckValueFnc);
	//m_wndDeprRate.SetEvent(WE_CHANGE, _OnDeprRateChangeFnc);
	//m_wndDeprRate.SetEvent(WE_SETFOCUS, _OnDeprRateSetfocusFnc);
	//m_wndDeprRate.SetEvent(WE_KILLFOCUS, _OnDeprRateKillfocusFnc);
	m_wndDeprRate.SetEvent(WE_CHECKVALUE, _OnDeprRateCheckValueFnc);
	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
		//m_wndList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		//m_wndList.SetFocus();
		m_szID = m_wndList.GetItemText(0, 0);
		m_nIndex = 0;
		//GetDataToScreen();
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CTypeSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndDeprTime.GetDlgCtrlID(), m_nDeprTime);
	DDX_Text(pDX, m_wndDeprRate.GetDlgCtrlID(), m_nDeprRate);
}
void CTypeSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' AND fast_id='%s'"), pMF->GetModuleID() ,m_szID);
	rs.ExecSQL(szSQL);
	//rs.GetValue(_T("fast_id"), m_szID);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("fast_desc"), m_szDescription);
		rs.GetValue(_T("fast_deprtime"), m_nDeprTime);
		rs.GetValue(_T("fast_deprrate"), m_nDeprRate);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CTypeSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_assettypeTbl.SetValue(_T("fast_id"), m_szID);
	m_fam_assettypeTbl.SetValue(_T("fast_desc"), m_szDescription);
	m_fam_assettypeTbl.SetValue(_T("fast_deprtime"), m_nDeprTime);
	m_fam_assettypeTbl.SetValue(_T("fast_deprrate"), m_nDeprRate);
	m_fam_assettypeTbl.SetValue(_T("fast_org_id"), pMF->GetModuleID());
	//m_fam_assettypeTbl.SetValue(_T("fast_desc"), m_szDescription);
}
void CTypeSetupDialog::SetDefaultValues()
{
	m_szID.Empty();
	m_szDescription.Empty();
	m_nDeprTime=0;
	m_nDeprRate=0;
}
int CTypeSetupDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues();
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndDescription.SetFocus();
			m_wndDescription.SetSel(m_wndDescription.GetWindowTextLength(), m_wndDescription.GetWindowTextLength());
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CTypeSetupDialog::OnListDblClick(){
	
} 
void CTypeSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CTypeSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTypeSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_org_id = '%s' ORDER BY fast_id"),  pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("fast_id")), 
			rs.GetValue(_T("fast_desc")), 
			rs.GetValue(_T("fast_deprtime")),
			rs.GetValue(_T("fast_deprrate")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CTypeSetupDialog::OnIDChange(){
	
} */
/*void CTypeSetupDialog::OnIDSetfocus(){
	
} */
/*void CTypeSetupDialog::OnIDKillfocus(){
	
} */
int CTypeSetupDialog::OnIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_assettype WHERE fast_org_id ='%s' AND fast_id='%s'"),  pMF->GetModuleID(), m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CTypeSetupDialog::OnDescriptionChange(){
	
} */
/*void CTypeSetupDialog::OnDescriptionSetfocus(){
	
} */
/*void CTypeSetupDialog::OnDescriptionKillfocus(){
	
} */
int CTypeSetupDialog::OnDescriptionCheckValue()
{
	CString szTemp;
	PreInitCap(m_szDescription, szTemp);
	m_szDescription = szTemp;
	UpdateData(FALSE);
	return 0;
} 
/*void CTypeSetupDialog::OnDeprTimeChange(){
	
} */
/*void CTypeSetupDialog::OnDeprTimeSetfocus(){
	
} */
/*void CTypeSetupDialog::OnDeprTimeKillfocus(){
	
} */
int CTypeSetupDialog::OnDeprTimeCheckValue(){
	return 0;
} 
/*void CTypeSetupDialog::OnDeprRateChange(){
	
} */
/*void CTypeSetupDialog::OnDeprRateSetfocus(){
	
} */
/*void CTypeSetupDialog::OnDeprRateKillfocus(){
	
} */
int CTypeSetupDialog::OnDeprRateCheckValue(){
	return 0;
} 
void CTypeSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddTypeSetupDialog();
} 
void CTypeSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*CString szSQL;
	CRecord rs;
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_type='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset contains this type. You can not edit it"), MB_OK | MB_ICONERROR);
		return;
	}*/
	OnEditTypeSetupDialog();
} 
void CTypeSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_type='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset belongs to this type. You can not delete it"), MB_OK | MB_ICONERROR);
		return;
	}
	OnDeleteTypeSetupDialog();
} 
void CTypeSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveTypeSetupDialog();
} 
void CTypeSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelTypeSetupDialog();
} 
void CTypeSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CTypeSetupDialog::OnAddTypeSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTypeSetupDialog::OnEditTypeSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTypeSetupDialog::OnDeleteTypeSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM fam_assettype WHERE fast_id='%s' AND fast_org_id = '%s'"), m_szID,  pMF->GetModuleID()); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		CRecord rs(&pMF->m_db);
		szSQL.Format(_T("DELETE FROM fam_category WHERE famc_typeid='%s' and famc_org_id = '%s'"), m_szID, pMF->GetModuleID());
		rs.ExecSQL(szSQL);
		pMF->m_bChangeType = true;
 		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szID, m_nIndex);
		}
		else
		{
 			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}  
 	}
	return 0;
}
int CTypeSetupDialog::OnSaveTypeSetupDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		bAdd = true;
 		szSQL = m_fam_assettypeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		m_nIndex = m_wndList.GetCurSel();
		szWhere.Format(_T(" WHERE fast_id='%s' AND fast_org_id ='%s'"), m_szID, pMF->GetModuleID()); 
 		szSQL = m_fam_assettypeTbl.GetUpdateSQL(_T("fast_id")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnTypeSetupDialogListLoadData();
		pMF->m_bChangeType = true;
 		OnListLoadData();
		SetItemSel(&m_wndList, m_szID, m_nIndex);
		/*if (GetMode() == VM_EDIT)
		{
			m_szCode = m_wndList.GetItemText(m_nIndex, 0);
			GetDataToScreen();
		}*/
 		//SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus(); 
 	} 
 /*	else 
 	{ 
 	} */
 	return ret; 
}
int CTypeSetupDialog::OnCancelTypeSetupDialog()
{
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
		if (m_wndList.GetCurSel() >= 0)
		{
			m_szID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
			GetDataToScreen();
		}
		else
 			SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CTypeSetupDialog::OnTypeSetupDialogListLoadData(){
	return 0;
}
void CTypeSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				//pList->SetItemState(i, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(i, 1);
				m_nIndex = i;
				//pList->SetFocus();
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
		//pList->SetItemState(nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
		//pList->EnsureVisible(nIndex, 1);
		//pList->SetFocus();
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				//pList->SetItemState(0, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(0, 1);
				//pList->SetFocus();
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				//pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				//pList->EnsureVisible(m_nIndex, 1);
				//pList->SetFocus();
				pList->SetCurSel(m_nIndex);
			}
		}
	}
}
