#include "HMSSpecialExamInputDlg.h"
#include "MainFrm.h"

//#define TEST_MODE
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSpecialExamInputDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSpecialExamInputDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSpecialExamInputDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSpecialExamInputDlg*)pWnd)->OnListDeleteItem();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CHMSSpecialExamInputDlg *pVw = (CHMSSpecialExamInputDlg *)pWnd;
	pVw->OnOKSelect();
} 

static void _OnOKSetFocusFnc(CWnd* pWnd) {
	CHMSSpecialExamInputDlg* pVw = (CHMSSpecialExamInputDlg*)pWnd;
	pVw->OnOKSetFocus();
}
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSpecialExamInputDlg *pVw = (CHMSSpecialExamInputDlg *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnListEditCheckValueFnc(CWnd* pWnd) {
	CHMSSpecialExamInputDlg* pVw = (CHMSSpecialExamInputDlg*) (pWnd->GetParent());
	pVw->OnListEditCheckValue();
}

static void _OnListEditSetFocusFnc(CWnd* pWnd) {
	CHMSSpecialExamInputDlg* pVw = (CHMSSpecialExamInputDlg*)(pWnd->GetParent());
	pVw->OnListEditSetFocus();
}
CHMSSpecialExamInputDlg::CHMSSpecialExamInputDlg(CWnd *pParent, CString szType):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	m_szType = szType;
	m_bLastRow = false;
}
CHMSSpecialExamInputDlg::~CHMSSpecialExamInputDlg(){
}
void CHMSSpecialExamInputDlg::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 325, 130); 
	m_wndOK.Create(this, _T("&OK"), 160, 135, 240, 160);
	m_wndClose.Create(this, _T("&Close"), 245, 135, 325, 160);

}
void CHMSSpecialExamInputDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Vị trí"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(2, _T("Kết quả"), CFMT_TEXT, 180);
	
	m_wndList.SetEditLabel(2, GUI_TEXTCTRL);
}
void CHMSSpecialExamInputDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndOK.SetEvent(WE_SETFOCUS, _OnOKSetFocusFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	CGuiTextCtrl* pEditCtrl = (CGuiTextCtrl*)m_wndList.GetEditControl(2);
	if (pEditCtrl)
	{
		pEditCtrl->SetEvent(WE_CHECKVALUE, _OnListEditCheckValueFnc);
		pEditCtrl->SetEvent(WE_SETFOCUS, _OnListEditSetFocusFnc);
	}
	OnListLoadData();
	GetDataToScreen();
}
void CHMSSpecialExamInputDlg::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSSpecialExamInputDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSSpecialExamInputDlg::SetDefaultValues(){


}
int CHMSSpecialExamInputDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
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
void CHMSSpecialExamInputDlg::OnListDblClick(){
	m_wndList.SetStartEdit(0, 2);
} 
void CHMSSpecialExamInputDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSpecialExamInputDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSpecialExamInputDlg::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(
		L" select ss_id as id, ss_code as code, ss_desc as descr" \
		L" from sys_sel"\
		L" where ss_id = 'KCK_%s_THONG_SO'"
	, m_szType);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("descr")), 
			NULL);
		rs.MoveNext();
	}
#ifdef TEST_MODE
	/*Test*/
	m_wndList.AddItems(L"a", L"test1", NULL);
	m_wndList.AddItems(L"b", L"test2", NULL);
	m_wndList.AddItems(L"c", L"test3", NULL);
	m_wndList.AddItems(L"d", L"test4", NULL);
#endif
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSSpecialExamInputDlg::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	GetScreenToData();
	m_szDescription = BuildDescription();
	CGuiDialog::OnOK();
} 
void CHMSSpecialExamInputDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 

CString CHMSSpecialExamInputDlg::BuildDescription()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szRet, szSQL;

	/*Prom*/
#ifndef TEST_MODE
	szSQL.Format(
		L" select ss_desc from sys_sel where ss_id = 'KCK_MAU_KQ'" \
		L" and ss_code = '%s'"
		, m_szType);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return szRet;
	szRet = rs.GetStringValue();

#else
	szRet = L"test1 {a} test2 {b}\r\n"\
		L"test 3 {c} test 4 {d}";

	//m_jData[L"a"] = L"a_value";
	//m_jData[L"b"] = L"b_value";
	//m_jData[L"c"] = L"c_value";
	//m_jData[L"d"] = L"d_value";
#endif

	/*Build*/
	FillData(szRet);

	return szRet;
}

void CHMSSpecialExamInputDlg::FillData(CString& szText)
{
	if (szText.IsEmpty())
	{
		return;
	}

	int nFind = -1, nFindOpen = 0, nFindClose = 0;
	CString szParamStr, szParamName, szValue;
	do 
	{
		nFind = szText.Find(L"{", nFindOpen);
		if (nFind != -1)
		{
			nFindOpen = nFind;
			nFindClose = szText.Find(L"}", nFindOpen);
			if (nFindOpen + 1 >= nFindClose)
			{
				continue;
			}
			szParamStr = szText.Mid(nFindOpen, nFindClose - nFindOpen + 1);
			szParamName = szText.Mid(nFindOpen + 1, nFindClose - nFindOpen - 1);
			m_jData[szParamName].GetValue(szValue);
			szText.Replace(szParamStr, szValue);
		}
	} 
	while (nFind != -1);
}

void CHMSSpecialExamInputDlg::GetScreenToData()
{
	// TODO: Add your implementation code here.
	CString szKey, szValue;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		szKey = m_wndList.GetItemText(i, 0);
		szValue = m_wndList.GetItemText(i, 2);
		m_jData[szKey] = szValue;
	}
}


void CHMSSpecialExamInputDlg::GetDataToScreen()
{
	// TODO: Add your implementation code here.

}

BOOL CHMSSpecialExamInputDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->hwnd == m_wndList.GetSafeHwnd())
		{
			if (pMsg->wParam == VK_RETURN)
			{
				m_wndOK.SetFocus();
			}
		}
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}

int CHMSSpecialExamInputDlg::OnListEditCheckValue()
{
	int nSel, nCount;
	CGuiTextCtrl* pEditCtrl = (CGuiTextCtrl*)GetFocus();
	if (pEditCtrl)
	{
		CGuiListCtrlEx* pList = (CGuiListCtrlEx*) (pEditCtrl->GetParent());
		if (pList)
		{ 
			nSel = pList->GetCurSel();
			nCount = pList->GetItemCount();
			if (nSel == (nCount - 1))
			{
				((CHMSSpecialExamInputDlg*) (pList->GetParent()))->m_bLastRow = true;
			}

		}
	}
	return 0;
}

int CHMSSpecialExamInputDlg::OnListEditSetFocus()
{
	if (m_bLastRow)
	{
		INPUT in;
		in.type = INPUT_KEYBOARD;
		in.ki.wVk = VK_TAB;
		SendInput(1, &in, sizeof(INPUT));
		/*
		CGuiListCtrlEx* pList = (CGuiListCtrlEx*)(GetFocus()->GetParent());
		if (pList)
		{
			CHMSSpecialExamInputDlg* pThis = (CHMSSpecialExamInputDlg*)pList->GetParent();
			pThis->m_wndOK.SetFocus();
			pThis->m_bLastRow = false;
		}
		*/
		m_bLastRow = false;
	}
	
	return 0;
}

int CHMSSpecialExamInputDlg::OnOKSetFocus()
{
	m_wndList.CancelEditLabel();
	return 0;
}