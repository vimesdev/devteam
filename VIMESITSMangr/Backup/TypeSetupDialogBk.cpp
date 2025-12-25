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
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CTypeSetupDialog *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CTypeSetupDialog *)pWnd)->OnCodeCheckValue();
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
CTypeSetupDialog::~CTypeSetupDialog(){
}
void CTypeSetupDialog::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 505, 205); 
	m_wndCodeLabel.Create(this, _T("Code"), 5, 210, 65, 235);
	m_wndCode.Create(this,70, 210, 170, 235); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 175, 210, 265, 235);
	m_wndDescription.Create(this,270, 210, 505, 235); 
	m_wndAdd.Create(this, _T("&Add"), 30, 240, 105, 265);
	m_wndEdit.Create(this, _T("&Edit"), 110, 240, 185, 265);
	m_wndDelete.Create(this, _T("&Delete"), 190, 240, 265, 265);
	m_wndSave.Create(this, _T("&Save"), 270, 240, 345, 265);
	m_wndCancel.Create(this, _T("&Cancel"), 350, 240, 425, 265);
	m_wndClose.Create(this, _T("&Close"), 430, 240, 505, 265);

}
void CTypeSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCode.SetLimitText(15);
	m_wndCode.SetCheckValue(true);
	m_wndDescription.SetLimitText(81);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Code"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 370);

	m_sys_selTbl.SetTableName(_T("sys_sel"));
	m_sys_selTbl.AddField(_T("ss_id"), dfText, 35); 
	m_sys_selTbl.AddField(_T("ss_code"), dfText, 15); 
	m_sys_selTbl.AddField(_T("ss_desc"), dfText, 81); 
	m_sys_selTbl.AddField(_T("ss_vndesc"), dfText, 81); 
	m_sys_selTbl.AddField(_T("ss_default"), dfText, 1); 
	m_sys_selTbl.AddField(_T("ss_index"), dfLong); 
	SetWindowTitle(_T("Asset Type Information"));
}
void CTypeSetupDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Asset Type"));
	m_wndList.AddEvent(1, _T("Add"), _OnAddTypeSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnEditTypeSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnDeleteTypeSetupDialogFnc, 0, 0, 0);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
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
	m_szId = _T("fam_type");
	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		m_wndList.SetFocus();
		m_szCode = m_wndList.GetItemText(0, 0);
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
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CTypeSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_assettype WHERE fast_id='%s'"), m_szCode);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("ss_code"), m_szCode);
		rs.GetValue(_T("fast_desc"), m_szDescription);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CTypeSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_sys_selTbl.SetValue(_T("ss_id"), m_szId);
	m_sys_selTbl.SetValue(_T("ss_code"), m_szCode);
	m_sys_selTbl.SetValue(_T("ss_desc"), m_szDescription);

}
void CTypeSetupDialog::SetDefaultValues(){

	m_szCode.Empty();
	m_szDescription.Empty();

}
int CTypeSetupDialog::SetMode(int nMode){
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
			m_wndCode.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
			m_wndCode.EnableWindow(FALSE);
			m_wndDescription.SetFocus();
			m_wndDescription.SetSel(0, -1);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, 5, -1); 
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
void CTypeSetupDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szCode = m_wndList.GetItemText(nNewItem, 0);
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
	szSQL.Format(_T("SELECT ss_code AS Code, ss_desc AS Description FROM sys_sel WHERE ss_id='%s'"), m_szId);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("Code")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CTypeSetupDialog::OnCodeChange(){
	
} */
/*void CTypeSetupDialog::OnCodeSetfocus(){
	
} */
/*void CTypeSetupDialog::OnCodeKillfocus(){
	
} */
int CTypeSetupDialog::OnCodeCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT Count(*) FROM sys_sel WHERE ss_id='%s' AND ss_code='%s'"), m_szId, m_szCode);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndCode.SetToolTipMessage(_T("This value is already exist in the database"));
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
int CTypeSetupDialog::OnDescriptionCheckValue(){
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
	OnEditTypeSetupDialog();
} 
void CTypeSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
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
	CGuiDialog::OnCancel();
} 
void CTypeSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTypeSetupDialog::OnAddTypeSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CTypeSetupDialog::OnEditTypeSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CTypeSetupDialog::OnDeleteTypeSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szCode;
	//szCode = m_wndList.GetItemText(m_nIndex, 0);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_id='%s' AND ss_code='%s'"), m_szId, m_szCode); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
 		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
		{
			SetItemSel(&m_wndList, m_szCode, m_nIndex);
			//m_szCode = m_wndList.GetItemText(m_nIndex, 0);
		//_msg(_T("%d"), m_nIndex);
			//GetDataToScreen();
		/*if (m_wndList.GetItemCount() > 0)
 			SetMode(VM_VIEW);
		else
			SetMode(VM_NONE);*/
		}
		else
		{
 			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		} 
 		//OnCancelTypeSetupDialog(); 
 	}
	return 0;
}
int CTypeSetupDialog::OnSaveTypeSetupDialog(){
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
 		szSQL = m_sys_selTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		m_nIndex = m_wndList.GetCurSel();
		szWhere.Format(_T(" WHERE ss_id='%s' AND ss_code='%s' "), m_szId, m_szCode); 
 		szSQL = m_sys_selTbl.GetUpdateSQL(_T("ss_id, ss_code")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnTypeSetupDialogListLoadData(); 
 		OnListLoadData();
		SetItemSel(&m_wndList, m_szCode, m_nIndex);
		/*if (GetMode() == VM_EDIT)
		{
			m_szCode = m_wndList.GetItemText(m_nIndex, 0);
			GetDataToScreen();
		}*/
 		SetMode(VM_VIEW); 
		if (bAdd)
			m_wndAdd.SetFocus();  
 	} 
 	/*else 
 	{ 
 	} */
 	return ret; 
 	//return 0; 
}
int CTypeSetupDialog::OnCancelTypeSetupDialog(){
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
				pList->SetItemState(i, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				pList->EnsureVisible(i, 1);
				m_nIndex = i;
				pList->SetFocus();
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetItemState(nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
		pList->EnsureVisible(nIndex, 1);
		pList->SetFocus();
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetItemState(0, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				pList->EnsureVisible(0, 1);
				pList->SetFocus();
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				pList->SetItemState(m_nIndex, LVIS_SELECTED, LVIS_FOCUSED | LVIS_SELECTED);
				pList->EnsureVisible(m_nIndex, 1);
				pList->SetFocus();
			}
		}
	}
}