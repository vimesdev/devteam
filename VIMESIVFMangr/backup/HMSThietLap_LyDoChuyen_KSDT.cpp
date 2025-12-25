#include "HMSThietLap_LyDoChuyen_KSDT.h"
#include "HMSMainFrame.h"

static void _OnSearchByNameChangeFnc(CWnd *pWnd)
{
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem)
{
	((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnNameChange();
}*/
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_LyDoChuyen_KSDT *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSThietLap_LyDoChuyen_KSDT *pVw = (CHMSThietLap_LyDoChuyen_KSDT *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSThietLap_LyDoChuyen_KSDT *pVw = (CHMSThietLap_LyDoChuyen_KSDT *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSThietLap_LyDoChuyen_KSDT *pVw = (CHMSThietLap_LyDoChuyen_KSDT *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSThietLap_LyDoChuyen_KSDT *pVw = (CHMSThietLap_LyDoChuyen_KSDT *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSThietLap_LyDoChuyen_KSDT *pVw = (CHMSThietLap_LyDoChuyen_KSDT *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSThietLap_LyDoChuyen_KSDT *pVw = (CHMSThietLap_LyDoChuyen_KSDT *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSThietLap_LyDoChuyen_KSDTFnc(CWnd *pWnd){
	 return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnAddHMSThietLap_LyDoChuyen_KSDT();
} 
static int _OnEditHMSThietLap_LyDoChuyen_KSDTFnc(CWnd *pWnd){
	 return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnEditHMSThietLap_LyDoChuyen_KSDT();
} 
static int _OnDeleteHMSThietLap_LyDoChuyen_KSDTFnc(CWnd *pWnd){
	 return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnDeleteHMSThietLap_LyDoChuyen_KSDT();
} 
static int _OnSaveHMSThietLap_LyDoChuyen_KSDTFnc(CWnd *pWnd){
	 return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnSaveHMSThietLap_LyDoChuyen_KSDT();
} 
static int _OnCancelHMSThietLap_LyDoChuyen_KSDTFnc(CWnd *pWnd){
	 return ((CHMSThietLap_LyDoChuyen_KSDT*)pWnd)->OnCancelHMSThietLap_LyDoChuyen_KSDT();
} 
CHMSThietLap_LyDoChuyen_KSDT::CHMSThietLap_LyDoChuyen_KSDT(CWnd *pParent, long nOrderId):
	CGuiDialog(pParent)
	{
	m_nDlgWidth = 530;
	m_nDlgHeight = 425;
	SetDefaultValues();
	m_nOrderId = nOrderId;
}
CHMSThietLap_LyDoChuyen_KSDT::~CHMSThietLap_LyDoChuyen_KSDT()
{
}
void CHMSThietLap_LyDoChuyen_KSDT::OnCreateComponents()
{
	m_wndItemInformation.Create(this, _T("Drug Information"), 5, 5, 520, 385);
	m_wndList.Create(this,10, 60, 515, 350); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 355, 80, 380);
	m_wndID.Create(this,85, 355, 185, 380); 
	m_wndNameLabel.Create(this, _T("Name"), 190, 355, 260, 380);
	m_wndName.Create(this,265, 355, 515, 380); 
	m_wndAdd.Create(this, _T("&Add"), 15, 390, 95, 415);
	m_wndEdit.Create(this, _T("&Edit"), 100, 390, 180, 415);
	m_wndDelete.Create(this, _T("&Delete"), 185, 390, 265, 415);
	m_wndSave.Create(this, _T("&Save"), 270, 390, 350, 415);
	m_wndCancel.Create(this, _T("&Cancel"), 355, 390, 435, 415);
	m_wndClose.Create(this, _T("&Close"), 440, 390, 520, 415);

	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 515, 55); 
}
void CHMSThietLap_LyDoChuyen_KSDT::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndSearchByName.SetLimitText(81);
	//m_wndSearchByName.SetCheckValue(true);
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 425);

	m_sys_sel_Tbl.SetTableName(_T("sys_sel"));
	m_sys_sel_Tbl.AddField(_T("ss_id"), dfText, 35);
	m_sys_sel_Tbl.AddField(_T("ss_code"), dfText, 15); 
	m_sys_sel_Tbl.AddField(_T("ss_desc"), dfText, 81);
}
void CHMSThietLap_LyDoChuyen_KSDT::OnSetWindowEvents()
{
	m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Item Information"));
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
		m_szID = m_wndList.GetItemText(0, 0);
		m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndAdd.SetFocus();
		m_nIndex = -1;
	}
}
void CHMSThietLap_LyDoChuyen_KSDT::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
}
void CHMSThietLap_LyDoChuyen_KSDT::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_lydochuyen_ksdt'"), m_szID);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("ss_desc"), m_szName);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}
}
void CHMSThietLap_LyDoChuyen_KSDT::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_sys_sel_Tbl.SetValue(_T("ss_id"), _T("hms_lydochuyen_ksdt"));
	m_sys_sel_Tbl.SetValue(_T("ss_code"), m_szID);
	m_sys_sel_Tbl.SetValue(_T("ss_desc"), m_szName);
}
void CHMSThietLap_LyDoChuyen_KSDT::SetDefaultValues()
{
	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();

}
int CHMSThietLap_LyDoChuyen_KSDT::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues();
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
			m_wndName.SetSel(m_wndName.GetWindowTextLength(), m_wndName.GetWindowTextLength());
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
		m_wndSearchByName.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSThietLap_LyDoChuyen_KSDT::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSThietLap_LyDoChuyen_KSDT::OnSearchByNameSetfocus(){
	
} */
/*void CHMSThietLap_LyDoChuyen_KSDT::OnSearchByNameKillfocus(){
	
} */
int CHMSThietLap_LyDoChuyen_KSDT::OnSearchByNameCheckValue(){
	return 0;
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnListDblClick(){
	
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
} 
int CHMSThietLap_LyDoChuyen_KSDT::OnListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_LyDoChuyen_KSDT();
	return 0;
} 
long CHMSThietLap_LyDoChuyen_KSDT::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szWhere.Empty();
	if (!m_szSearchByName.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(ss_desc) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T("SELECT ss_code AS ID, ss_desc AS Name ")\
			     _T("FROM sys_sel ")\
				 _T("WHERE ss_id='hms_lydochuyen_ksdt' %s ORDER BY cast(ss_code as integer)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}
/*void CHMSThietLap_LyDoChuyen_KSDT::OnIDChange(){
	
} */
/*void CHMSThietLap_LyDoChuyen_KSDT::OnIDSetfocus(){
	
} */
/*void CHMSThietLap_LyDoChuyen_KSDT::OnIDKillfocus(){
	
} */
int CHMSThietLap_LyDoChuyen_KSDT::OnIDCheckValue()
{
	UpdateData(TRUE);
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_lydochuyen_ksdt'"), m_szID);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		m_wndID.SetToolTipMessage(_T("This value is already exist in the database"));
		return -1;
	}
	return 0;
} 
/*void CHMSThietLap_LyDoChuyen_KSDT::OnNameChange(){
	
} */
/*void CHMSThietLap_LyDoChuyen_KSDT::OnNameSetfocus(){
	
} */
/*void CHMSThietLap_LyDoChuyen_KSDT::OnNameKillfocus(){
	
} */
int CHMSThietLap_LyDoChuyen_KSDT::OnNameCheckValue()
{
	UpdateData(TRUE);
	CString szTemp;
	PreInitCap(m_szName, szTemp);
	m_szName = szTemp;
	UpdateData(FALSE);
	return 0;
} 

void CHMSThietLap_LyDoChuyen_KSDT::OnAddSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSThietLap_LyDoChuyen_KSDT();
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnEditSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnEditHMSThietLap_LyDoChuyen_KSDT();
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnDeleteSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSThietLap_LyDoChuyen_KSDT();
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSThietLap_LyDoChuyen_KSDT();
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnCancelSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSThietLap_LyDoChuyen_KSDT();
} 
void CHMSThietLap_LyDoChuyen_KSDT::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CHMSThietLap_LyDoChuyen_KSDT::OnAddHMSThietLap_LyDoChuyen_KSDT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSThietLap_LyDoChuyen_KSDT::OnEditHMSThietLap_LyDoChuyen_KSDT(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSThietLap_LyDoChuyen_KSDT::OnDeleteHMSThietLap_LyDoChuyen_KSDT()
{
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_code='%s' AND ss_id='hms_lydochuyen_ksdt'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if (ret >= 0)
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
int CHMSThietLap_LyDoChuyen_KSDT::OnSaveHMSThietLap_LyDoChuyen_KSDT()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
	bool bAdd = false;
 	if(GetMode() == VM_ADD)
	{ 
		szSQL = m_sys_sel_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE ss_code='%s' AND ss_id='hms_lydochuyen_ksdt' "), m_szID); 
 		szSQL = m_sys_sel_Tbl.GetUpdateSQL(_T("ss_id, ss_code")); 
 		szSQL += szWhere; 
 	} 
	_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSThietLap_LyDoChuyen_KSDTListLoadData(); 
 		//SetMode(VM_VIEW);
		OnListLoadData();
		SetItemSel(&m_wndList, m_szID, m_nIndex);
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	//return 0; 
}
int CHMSThietLap_LyDoChuyen_KSDT::OnCancelHMSThietLap_LyDoChuyen_KSDT()
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
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CHMSThietLap_LyDoChuyen_KSDT::OnHMSThietLap_LyDoChuyen_KSDTListLoadData(){
	return 0;
}
void CHMSThietLap_LyDoChuyen_KSDT::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
{
	if (GetMode() == VM_ADD)
	{
		for (int i = pList->GetItemCount() - 1; i >= 0; i--)
		{
			if (pList->GetItemText(i, 0).Trim() == szID.Trim())
			{
				pList->SetCurSel(i);
				m_nIndex = i;
				break;
			}
		}
	}
	else if (GetMode() == VM_EDIT)
	{
		pList->SetCurSel(nIndex);
	}
	else
	{	
		if (pList->GetItemCount() > 0)
		{
			if (nIndex == 0)
			{
				pList->SetCurSel(0);
				m_nIndex = 0;
			}
			else
			{
				m_nIndex -= 1;
				pList->SetCurSel(m_nIndex);			
			}
		}
	}
}