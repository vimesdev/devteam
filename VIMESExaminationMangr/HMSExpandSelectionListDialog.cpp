#include "HMSExpandSelectionListDialog.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"

static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSExpandSelectionListDialog *)pWnd)->OnSearchChange();
} 

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExpandSelectionListDialog*)pWnd)->OnListLoadData();
}
static long _OnListLoadDataExFnc(CWnd *pWnd){
	return ((CHMSExpandSelectionListDialog*)pWnd)->OnListLoadDataEx();
}
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExpandSelectionListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExpandSelectionListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnListSelectAllItem();
} 
static int _OnListUnSelectAllItemFnc(CWnd *pWnd)
{
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnListUnSelectAllItem();
} 

static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSExpandSelectionListDialog *pVw = (CHMSExpandSelectionListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExpandSelectionListDialog *pVw = (CHMSExpandSelectionListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSSelectionDialogFnc(CWnd *pWnd){
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnAddHMSSelectionDialog();
} 
static int _OnEditHMSSelectionDialogFnc(CWnd *pWnd){
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnEditHMSSelectionDialog();
} 
static int _OnDeleteHMSSelectionDialogFnc(CWnd *pWnd){
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnDeleteHMSSelectionDialog();
} 
static int _OnSaveHMSSelectionDialogFnc(CWnd *pWnd){
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnSaveHMSSelectionDialog();
} 
static int _OnCancelHMSSelectionDialogFnc(CWnd *pWnd){
	 return ((CHMSExpandSelectionListDialog*)pWnd)->OnCancelHMSSelectionDialog();
}
static void _OnFindSelectFnc(CWnd *pWnd)
{
	CHMSExpandSelectionListDialog *pVw = (CHMSExpandSelectionListDialog *)pWnd;
	pVw->OnFindSelect();
}
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSExpandSelectionListDialog *)pWnd)->OnSearchCheckValue();
}

CHMSExpandSelectionListDialog::CHMSExpandSelectionListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 380;
	m_nDlgHeight = 365;
	SetDefaultValues();
}

CHMSExpandSelectionListDialog::~CHMSExpandSelectionListDialog(){
	m_arraySelection.RemoveAll();
}
void CHMSExpandSelectionListDialog::OnCreateComponents()
{
	/*m_wndSelectionList.Create(this, _T("Selection List"), 5, 5, 475, 450);
	m_wndList.Create(this,10, 30, 470, 445); 
	m_wndApply.Create(this, _T("&Apply"), 310, 455, 390, 480);
	m_wndClose.Create(this, _T("&Close"), 395, 455, 475, 480);*/
	m_wndSelectionList.Create(this, _T("Selection List"), 5, 5, 700, 590);
	m_wndSearchLabel.Create(this, _T("Search"), 10, 30, 116, 61);
	m_wndSearch.Create(this,122, 30, 620, 61); 
	m_wndFind.Create(this, _T("@"), 626, 30, 697, 61);
	m_wndList.Create(this,11, 66, 697, 586); 
	m_wndApply.Create(this, _T("&Apply"), 533, 596, 613, 621);
	m_wndClose.Create(this, _T("&Close"), 616, 596, 696, 621);
}
void CHMSExpandSelectionListDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Phân nhóm"), CFMT_TEXT, 250);
	m_wndList.SetCheckBox(true);
	OnListLoadData();
	m_wndList.SetFocus();
	m_wndList.SetCurSel(0);
}
void CHMSExpandSelectionListDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataExFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Selection List"));
	m_wndList.AddEvent(1, _T("Select All"), _OnListSelectAllItemFnc);
	m_wndList.AddEvent(2, _T("UnSelect All"), _OnListUnSelectAllItemFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	SetMode(VM_VIEW);
}
void CHMSExpandSelectionListDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
}
void CHMSExpandSelectionListDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}

void CHMSExpandSelectionListDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSExpandSelectionListDialog::SetDefaultValues()
{
		m_szSearch.Empty();
}
int CHMSExpandSelectionListDialog::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	}
void CHMSExpandSelectionListDialog::OnSearchChange()
{
	UpdateData(TRUE);
	OnListLoadDataEx();	
} 

void CHMSExpandSelectionListDialog::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) 
		return;
	m_wndList.SetCheck(nSel, !m_wndList.GetCheck(nSel));	
} 
void CHMSExpandSelectionListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExpandSelectionListDialog::OnListSelectAllItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, true);
	}
	return 0;
} 

int CHMSExpandSelectionListDialog::OnListUnSelectAllItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		m_wndList.SetCheck(i, false);
	}
	return 0;
} 

long CHMSExpandSelectionListDialog::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	nCount = rs.ExecSQL(m_szSQL);

	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
		    rs.GetValue(_T("groupname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 

	CString szID;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		szID = m_wndList.GetItemText(i, 0);
		for (int j =0; j < m_arraySelection.GetCount(); j++){
			SELITEM r = m_arraySelection[j];
			if(r.szID == szID){
				m_wndList.SetCheck(i, TRUE);
			}
		}
	}

	return nCount;	
}

long CHMSExpandSelectionListDialog::OnListLoadDataEx()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szWhere.Empty();
	if (!m_szSearch.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(sp_name) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearch, _T("%"));
	}

	szSQL.Format(_T(" SELECT sp_id AS id,") \
				_T("   sp_name    AS name,") \
				_T("   ss_desc    AS groupname") \
				_T(" FROM sys_DanhMucNhiemKhuanBenhVien") \
				_T(" LEFT JOIN sys_sel") \
				_T(" ON (SP_GROUP=ss_code)") \
				_T(" WHERE 1     = 1") \
				_T(" AND ss_id   ='sys_phanloai_nhomnk' %s") \
				_T(" ORDER BY sp_group,") \
				_T("   sp_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
		    rs.GetValue(_T("groupname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}

void CHMSExpandSelectionListDialog::OnFindSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListLoadDataEx();
}
int CHMSExpandSelectionListDialog::OnSearchCheckValue()
{
	UpdateData(TRUE);
	OnListLoadDataEx();
	return 0;
}
void CHMSExpandSelectionListDialog::OnApplySelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_arraySelection.RemoveAll();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			SELITEM r;
			r.szID = m_wndList.GetItemText(i, 0);
			r.szName = m_wndList.GetItemText(i, 1);
			m_arraySelection.Add(r);		
		}
	}
	OnOK();
}

void CHMSExpandSelectionListDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_arraySelection.RemoveAll();
	OnCancel();
	
} 
int CHMSExpandSelectionListDialog::OnAddHMSSelectionDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSExpandSelectionListDialog::OnEditHMSSelectionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSExpandSelectionListDialog::OnDeleteHMSSelectionDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSSelectionDialog(); 
 	}
return 0;
 } 
int CHMSExpandSelectionListDialog::OnSaveHMSSelectionDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSelectionDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExpandSelectionListDialog::OnCancelHMSSelectionDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	 
 	return 0;
} 
int CHMSExpandSelectionListDialog::OnHMSSelectionDialogListLoadData(){
	return 0;
}


CHMSExpandSelectionListDialog::SELITEM CHMSExpandSelectionListDialog::GetSelectionAt(int nIndex){
	SELITEM si;
	si.szID.Empty();
	si.szName.Empty();
	if(nIndex < 0 || nIndex >= m_arraySelection.GetCount())
		return si;
	si = m_arraySelection[nIndex];
	return si;
}
int CHMSExpandSelectionListDialog::GetSelectionCount(){
	return (int)m_arraySelection.GetCount();
}
CString CHMSExpandSelectionListDialog::GetSelectionName(int nIndex){
	if(nIndex < 0 || nIndex >= m_arraySelection.GetCount())
		return _T("");
	SELITEM r = m_arraySelection[nIndex];
	return r.szName;
}
BOOL CHMSExpandSelectionListDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	/*if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_SPACE){
		OnListDblClick();
		return TRUE;
	}
	return CGuiDialog::PreTranslateMessage(pMsg);*/
	return 0;
}
BEGIN_MESSAGE_MAP(CHMSExpandSelectionListDialog, CGuiDialog)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

void CHMSExpandSelectionListDialog::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	/*if(nChar == VK_SPACE){
	}
	CGuiDialog::OnKeyDown(nChar, nRepCnt, nFlags);*/
}