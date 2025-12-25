#include "ConditionSetupDialog.h"
#include "MainFrm.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CConditionSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CConditionSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CConditionSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CConditionSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CConditionSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CConditionSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CConditionSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CConditionSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CConditionSetupDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CConditionSetupDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CConditionSetupDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CConditionSetupDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CConditionSetupDialog *pVw = (CConditionSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CConditionSetupDialog *pVw = (CConditionSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CConditionSetupDialog *pVw = (CConditionSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CConditionSetupDialog *pVw = (CConditionSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CConditionSetupDialog *pVw = (CConditionSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CConditionSetupDialog *pVw = (CConditionSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddConditionSetupDialogFnc(CWnd *pWnd){
	 return ((CConditionSetupDialog*)pWnd)->OnAddConditionSetupDialog();
} 
static int _OnEditConditionSetupDialogFnc(CWnd *pWnd){
	 return ((CConditionSetupDialog*)pWnd)->OnEditConditionSetupDialog();
} 
static int _OnDeleteConditionSetupDialogFnc(CWnd *pWnd){
	 return ((CConditionSetupDialog*)pWnd)->OnDeleteConditionSetupDialog();
} 
static int _OnSaveConditionSetupDialogFnc(CWnd *pWnd){
	 return ((CConditionSetupDialog*)pWnd)->OnSaveConditionSetupDialog();
} 
static int _OnCancelConditionSetupDialogFnc(CWnd *pWnd){
	 return ((CConditionSetupDialog*)pWnd)->OnCancelConditionSetupDialog();
} 
CConditionSetupDialog::CConditionSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 600;
	m_nDlgHeight = 400;
	SetDefaultValues();
}
CConditionSetupDialog::~CConditionSetupDialog(){
}
void CConditionSetupDialog::OnCreateComponents()
{
	m_wndList.Create(this,5, 5, 505, 205); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 210, 85, 235);
	m_wndID.Create(this,90, 210, 185, 235); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 190, 210, 270, 235);
	m_wndDescription.Create(this,275, 210, 505, 235); 
	m_wndAdd.Create(this, _T("&Add"), 30, 240, 105, 265);
	m_wndEdit.Create(this, _T("&Edit"), 110, 240, 185, 265);
	m_wndDelete.Create(this, _T("&Delete"), 190, 240, 265, 265);
	m_wndSave.Create(this, _T("&Save"), 270, 240, 345, 265);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 240, 425, 265);
	m_wndClose.Create(this, _T("&Close"), 430, 240, 505, 265);

}
void CConditionSetupDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.ModifyStyle(0, ES_UPPERCASE);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(150);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 360);
	m_fam_conditionTbl.SetTableName(_T("fam_condition"));
	m_fam_conditionTbl.AddField(_T("fac_id"), dfText, 15); 
	m_fam_conditionTbl.AddField(_T("fac_desc"), dfText, 150); 
	m_fam_conditionTbl.AddField(_T("fac_org_id"), dfText, 3); 

	SetWindowTitle(_T("Condition of Fixed Asset Information"));
}
void CConditionSetupDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("&Add"), _OnAddConditionSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditConditionSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteConditionSetupDialogFnc, 0, 0, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
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
void CConditionSetupDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
}
void CConditionSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_condition WHERE fac_id='%s' AND fac_org_id ='%s'"), m_szID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("fac_id"), m_szID);
		rs.GetValue(_T("fac_desc"), m_szDescription);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CConditionSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_fam_conditionTbl.SetValue(_T("fac_id"), m_szID);
	m_fam_conditionTbl.SetValue(_T("fac_desc"), m_szDescription);

}
void CConditionSetupDialog::SetDefaultValues()
{
	m_szID.Empty();
	m_szDescription.Empty();
}
int CConditionSetupDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
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
void CConditionSetupDialog::OnListDblClick()
{
} 
void CConditionSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CConditionSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CConditionSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fac_id AS ID, fac_desc AS Description FROM fam_condition WHERE fac_org_id = '%s' ORDER BY fac_id"), pMF->GetModuleID());
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CConditionSetupDialog::OnIDChange(){
	
} */
/*void CConditionSetupDialog::OnIDSetfocus(){
	
} */
/*void CConditionSetupDialog::OnIDKillfocus(){
	
} */
int CConditionSetupDialog::OnIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM fam_condition WHERE fac_id='%s' AND fac_org_id = '%s'"), m_szID, pMF->GetModuleID());
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CConditionSetupDialog::OnDescriptionChange(){
	
} */
/*void CConditionSetupDialog::OnDescriptionSetfocus(){
	
} */
/*void CConditionSetupDialog::OnDescriptionKillfocus(){
	
} */
int CConditionSetupDialog::OnDescriptionCheckValue()
{
	CString szTemp;
	PreInitCap(m_szDescription, szTemp);
	m_szDescription = szTemp;
	UpdateData(FALSE);
	return 0;
} 
void CConditionSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddConditionSetupDialog();
} 
void CConditionSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditConditionSetupDialog();
} 
void CConditionSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT Count(*) FROM fam_asset WHERE fa_condition='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		ShowMessageBox(_T("There is at least one fixed asset has this condition. You can not delete it"), MB_OK | MB_ICONERROR);
		return;
	}
	OnDeleteConditionSetupDialog();
} 
void CConditionSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveConditionSetupDialog();
} 
void CConditionSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelConditionSetupDialog();
} 
void CConditionSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CConditionSetupDialog::OnAddConditionSetupDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CConditionSetupDialog::OnEditConditionSetupDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CConditionSetupDialog::OnDeleteConditionSetupDialog()
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
	szSQL.Format(_T("DELETE FROM fam_condition WHERE fac_id='%s' AND fac_org_id = '%s'"), m_szID, pMF->GetModuleID()); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
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
int CConditionSetupDialog::OnSaveConditionSetupDialog()
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
 		szSQL = m_fam_conditionTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE fac_id='%s' and fac_org_id ='%s'"), m_szID, pMF->GetModuleID()); 
 		szSQL = m_fam_conditionTbl.GetUpdateSQL(_T("fac_id")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
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
 	/*else 
 	{ 
 	}*/ 
 	return ret; 
 	//return 0; 
}
int CConditionSetupDialog::OnCancelConditionSetupDialog(){
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
int CConditionSetupDialog::OnConditionSetupDialogListLoadData(){
	return 0;
}
void CConditionSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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