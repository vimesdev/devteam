#include "VIMESGeneralSetupDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVIMESGeneralSetupDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVIMESGeneralSetupDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVIMESGeneralSetupDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CVIMESGeneralSetupDialog *)pWnd)->OnIDCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CVIMESGeneralSetupDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CVIMESGeneralSetupDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CVIMESGeneralSetupDialog *pVw = (CVIMESGeneralSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CVIMESGeneralSetupDialog *pVw = (CVIMESGeneralSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CVIMESGeneralSetupDialog *pVw = (CVIMESGeneralSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CVIMESGeneralSetupDialog *pVw = (CVIMESGeneralSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CVIMESGeneralSetupDialog *pVw = (CVIMESGeneralSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVIMESGeneralSetupDialog *pVw = (CVIMESGeneralSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddVIMESGeneralSetupDialogFnc(CWnd *pWnd){
	 return ((CVIMESGeneralSetupDialog*)pWnd)->OnAddVIMESGeneralSetupDialog();
} 
static int _OnEditVIMESGeneralSetupDialogFnc(CWnd *pWnd){
	 return ((CVIMESGeneralSetupDialog*)pWnd)->OnEditVIMESGeneralSetupDialog();
} 
static int _OnDeleteVIMESGeneralSetupDialogFnc(CWnd *pWnd){
	 return ((CVIMESGeneralSetupDialog*)pWnd)->OnDeleteVIMESGeneralSetupDialog();
} 
static int _OnSaveVIMESGeneralSetupDialogFnc(CWnd *pWnd){
	 return ((CVIMESGeneralSetupDialog*)pWnd)->OnSaveVIMESGeneralSetupDialog();
} 
static int _OnCancelVIMESGeneralSetupDialogFnc(CWnd *pWnd){
	 return ((CVIMESGeneralSetupDialog*)pWnd)->OnCancelVIMESGeneralSetupDialog();
} 
CVIMESGeneralSetupDialog::CVIMESGeneralSetupDialog(CWnd *pParent, LPCTSTR lpszTableName, 
												   LPCTSTR lpszIDName, LPCTSTR lpszDescName, bool bIsIDNumber):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 495;
	m_nDlgHeight = 495;
	SetDefaultValues();
	m_szTableName = lpszTableName;
	m_szIDName = lpszIDName;
	m_szDescName = lpszDescName;
	m_bIsIDNumber = bIsIDNumber;
}
CVIMESGeneralSetupDialog::~CVIMESGeneralSetupDialog(){
}
void CVIMESGeneralSetupDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 485, 475);
	m_wndList.Create(this,10, 30, 480, 380); 
	m_wndIDLabel.Create(this, _T("ID"), 15, 385, 95, 410);
	m_wndID.Create(this,100, 385, 200, 410); 
	if (m_bIsIDNumber)
		m_wndID.ModifyStyle(0, ES_NUMBER);
	m_wndDescriptionLabel.Create(this, _T("Description"), 15, 415, 95, 440);
	m_wndDescription.Create(this,100, 415, 480, 440); 
	m_wndAdd.Create(this, _T("&Add"), 5, 445, 80, 470);
	m_wndEdit.Create(this, _T("&Edit"), 85, 445, 160, 470);
	m_wndDelete.Create(this, _T("&Delete"), 165, 445, 240, 470);
	m_wndSave.Create(this, _T("&Save"), 245, 445, 320, 470);
	m_wndCancel.Create(this, _T("&Cancel"), 325, 445, 400, 470);
	m_wndClose.Create(this, _T("&Close"), 405, 445, 480, 470);

}
void CVIMESGeneralSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndDescription.SetLimitText(128);
	m_wndDescription.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 340);

	m_setupTbl.SetTableName(m_szTableName);
	if (m_bIsIDNumber)
		m_setupTbl.AddField(m_szIDName, dfInteger);
	else
		m_setupTbl.AddField(m_szIDName, dfText, 15);
	m_setupTbl.AddField(m_szDescName, dfText, 128);

	SetWindowTitle(_T("Setup General Information"));
}
void CVIMESGeneralSetupDialog::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Setup Information"));
	m_wndList.AddEvent(1, _T("&Add"), _OnAddVIMESGeneralSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("&Edit"), _OnEditVIMESGeneralSetupDialogFnc, 0, 0, 0);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("&Delete"), _OnDeleteVIMESGeneralSetupDialogFnc, 0, 0, 0);
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
		m_wndList.SetItemState(0, LVIS_SELECTED, LVIS_SELECTED | LVIS_FOCUSED);
		m_wndList.SetFocus();
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
void CVIMESGeneralSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CVIMESGeneralSetupDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_bIsIDNumber)
		szSQL.Format(_T("SELECT * FROM %s WHERE %s=%s"), m_szTableName, m_szIDName, m_szID);
	else
		szSQL.Format(_T("SELECT * FROM %s WHERE %s='%s'"), m_szTableName, m_szIDName, m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(m_szDescName, m_szDescription);
		UpdateData(FALSE);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CVIMESGeneralSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_setupTbl.SetValue(m_szIDName, m_szID);
	m_setupTbl.SetValue(m_szDescName, m_szDescription);
}
void CVIMESGeneralSetupDialog::SetDefaultValues()
{
	m_szID.Empty();
	m_szDescription.Empty();
}
int CVIMESGeneralSetupDialog::SetMode(int nMode){
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
void CVIMESGeneralSetupDialog::OnListDblClick(){
	
} 
void CVIMESGeneralSetupDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CVIMESGeneralSetupDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVIMESGeneralSetupDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM %s ORDER BY %s"), m_szTableName, m_szIDName);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(m_szIDName), 
			rs.GetValue(m_szDescName), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
/*void CVIMESGeneralSetupDialog::OnIDChange(){
	
} */
/*void CVIMESGeneralSetupDialog::OnIDSetfocus(){
	
} */
/*void CVIMESGeneralSetupDialog::OnIDKillfocus(){
	
} */
int CVIMESGeneralSetupDialog::OnIDCheckValue()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (m_bIsIDNumber)
		szSQL.Format(_T("SELECT Count(*) FROM %s WHERE %s=%s"), m_szTableName, m_szIDName, m_szID);
	else
		szSQL.Format(_T("SELECT Count(*) FROM %s WHERE %s='%s'"), m_szTableName, m_szIDName, m_szID);
	rs.ExecSQL(szSQL);
	int nCount = rs.GetIntValue();
	if (nCount > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CVIMESGeneralSetupDialog::OnDescriptionChange(){
	
} */
/*void CVIMESGeneralSetupDialog::OnDescriptionSetfocus(){
	
} */
/*void CVIMESGeneralSetupDialog::OnDescriptionKillfocus(){
	
} */
int CVIMESGeneralSetupDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CVIMESGeneralSetupDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddVIMESGeneralSetupDialog();
} 
void CVIMESGeneralSetupDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditVIMESGeneralSetupDialog();
} 
void CVIMESGeneralSetupDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteVIMESGeneralSetupDialog();
} 
void CVIMESGeneralSetupDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveVIMESGeneralSetupDialog();
} 
void CVIMESGeneralSetupDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelVIMESGeneralSetupDialog();
} 
void CVIMESGeneralSetupDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CVIMESGeneralSetupDialog::OnAddVIMESGeneralSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESGeneralSetupDialog::OnEditVIMESGeneralSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESGeneralSetupDialog::OnDeleteVIMESGeneralSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1;
	if (m_bIsIDNumber)
		szSQL.Format(_T("DELETE FROM %s WHERE %s=%s"), m_szTableName, m_szIDName, m_szID);
	else
		szSQL.Format(_T("DELETE FROM %s WHERE %s='%s'"), m_szTableName, m_szIDName, m_szID);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
 		OnListLoadData();
		if (m_wndList.GetItemCount() > 0)
			SetItemSel(&m_wndList, m_szID, m_nIndex);
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		} 
 	}
	return 0;
}
int CVIMESGeneralSetupDialog::OnSaveVIMESGeneralSetupDialog()
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
 		szSQL = m_setupTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		m_nIndex = m_wndList.GetCurSel();
		if (m_bIsIDNumber)
			szWhere.Format(_T(" WHERE %s=%s "), m_szIDName, m_szID);
		else
			szWhere.Format(_T(" WHERE %s='%s' "), m_szIDName, m_szID);
 		szSQL = m_setupTbl.GetUpdateSQL(); 
 		szSQL += szWhere; 
 	} 
    _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnVIMESGeneralSetupDialogListLoadData(); 
 		OnListLoadData();
		SetItemSel(&m_wndList, m_szID, m_nIndex);
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
int CVIMESGeneralSetupDialog::OnCancelVIMESGeneralSetupDialog(){
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
int CVIMESGeneralSetupDialog::OnVIMESGeneralSetupDialogListLoadData(){
	return 0;
}
void CVIMESGeneralSetupDialog::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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