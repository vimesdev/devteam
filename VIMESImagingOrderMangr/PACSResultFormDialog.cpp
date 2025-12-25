#include "PACSResultFormDialog.h"
#include "MainFrm.h"
#include "HMSSelectionListDialog.h"
#include "HMSListSearchDialog.h"

static long _OnFormListLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog*)pWnd)->OnFormListLoadData();
} 
static void _OnFormListDblClickFnc(CWnd *pWnd){
	((CPACSResultFormDialog*)pWnd)->OnFormListDblClick();
} 
static void _OnFormListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSResultFormDialog*)pWnd)->OnFormListSelectChange(nOldItem, nNewItem);
} 
static int _OnFormListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnFormListDeleteItem();
} 
static int _OnFormListSearchFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnFormListSearch();
} 
static long _OnLayoutListLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog*)pWnd)->OnLayoutListLoadData();
} 
static void _OnLayoutListDblClickFnc(CWnd *pWnd){
	((CPACSResultFormDialog*)pWnd)->OnLayoutListDblClick();
} 
static void _OnLayoutListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPACSResultFormDialog*)pWnd)->OnLayoutListSelectChange(nOldItem, nNewItem);
} 
static int _OnLayoutListSaveItemFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog*)pWnd)->OnLayoutListSaveItem();
} 
static int _OnLayoutListDeleteItemFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnLayoutListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnIDCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CPACSResultFormDialog*)pWnd)->OnActiveSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnReportNameChangeFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnReportNameChange();
} */
/*static void _OnReportNameSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnReportNameSetfocus();} */ 
/*static void _OnReportNameKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnReportNameKillfocus();
} */
static int _OnReportNameCheckValueFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnReportNameCheckValue();
} 


static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSResultFormDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnGroupAddNew();
}*/

static void _OnMenuSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPACSResultFormDialog* )pWnd)->OnMenuSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMenuSelendokFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnMenuSelendok();
}
/*static void _OnMenuSetfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnMenuKillfocus();
}*/
/*static void _OnMenuKillfocusFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnMenuKillfocus();
}*/
static long _OnMenuLoadDataFnc(CWnd *pWnd){
	return ((CPACSResultFormDialog *)pWnd)->OnMenuLoadData();
}
/*static void _OnMenuAddNewFnc(CWnd *pWnd){
	((CPACSResultFormDialog *)pWnd)->OnMenuAddNew();
}*/

static void _OnAddSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPACSResultFormDialog *pVw = (CPACSResultFormDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnAddPACSResultFormDialog();
} 
static int _OnEditPACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnEditPACSResultFormDialog();
} 
static int _OnDeletePACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnDeletePACSResultFormDialog();
} 
static int _OnSavePACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnSavePACSResultFormDialog();
} 
static int _OnCancelPACSResultFormDialogFnc(CWnd *pWnd){
	 return ((CPACSResultFormDialog*)pWnd)->OnCancelPACSResultFormDialog();
} 
CPACSResultFormDialog::CPACSResultFormDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 985;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CPACSResultFormDialog::~CPACSResultFormDialog(){
}
void CPACSResultFormDialog::OnCreateComponents(){
	m_wndFormList.Create(this,5, 5, 375, 450); 
	m_wndLayoutList.Create(this,380, 5, 980, 570); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 455, 95, 480);
	m_wndID.Create(this,100, 455, 250, 480); 
	m_wndActive.Create(this, _T("Active"), 255, 455, 375, 480);
	m_wndNameLabel.Create(this, _T("Name"), 5, 485, 95, 510);
	m_wndName.Create(this,100, 485, 375, 510); 
	m_wndReportNameLabel.Create(this, _T("Report Name"), 5, 515, 95, 540);
	m_wndReportName.Create(this,100, 515, 375, 540); 
	m_wndGroupLabel.Create(this, _T("Group"), 5, 545, 95, 570);
	m_wndGroup.Create(this,100, 545, 375, 570); 
	m_wndMenuLabel.Create(this, _T("Menu Group"), 5, 575, 95, 600);
	m_wndMenu.Create(this,100, 575, 375, 600); 


	m_wndAdd.Create(this, _T("&Add"), 505, 575, 580, 600);
	m_wndEdit.Create(this, _T("&Edit"), 585, 575, 660, 600);
	m_wndDelete.Create(this, _T("&Delete"), 665, 575, 740, 600);
	m_wndSave.Create(this, _T("&Save"), 745, 575, 820, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 825, 575, 900, 600);
	m_wndClose.Create(this, _T("&Close"), 905, 575, 980, 600);

}
void CPACSResultFormDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndID.SetLimitText(15);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndReportName.SetLimitText(35);
	m_wndReportName.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(11);
	m_wndActive.ModifyStyle(WS_TABSTOP, 0);

	m_wndFormList.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndFormList.InsertColumn(1, _T("Name"), CFMT_TEXT, 280);


	m_wndLayoutList.InsertColumn(0, _T("Name"), CFMT_TEXT, 150);
	m_wndLayoutList.InsertColumn(1, _T("Caption"), CFMT_TEXT, 150);
	m_wndLayoutList.InsertColumn(2, _T("Def Value"), CFMT_TEXT, 150);
	m_wndLayoutList.InsertColumn(3, _T("Value"), CFMT_TEXT, 120);
	m_wndLayoutList.InsertColumn(4, _T("Category"), CFMT_TEXT, 100);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_wndMenu.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndMenu.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);

	m_hms_pacs_formTbl.SetTableName(_T("hms_pacs_form"));
	m_hms_pacs_formTbl.AddField(_T("hpf_id"), dfText, 15); 
	m_hms_pacs_formTbl.AddField(_T("hpf_name"), dfText, 81); 
	m_hms_pacs_formTbl.AddField(_T("hpf_reportname"), dfText, 35); 
	m_hms_pacs_formTbl.AddField(_T("hpf_groupid"), dfText, 11); 
	m_hms_pacs_formTbl.AddField(_T("hpf_index"), dfLong); 
	m_hms_pacs_formTbl.AddField(_T("hpf_active"), dfText, 1); 
	m_hms_pacs_formTbl.AddField(_T("hpf_menuid"), dfInteger); 

}
void CPACSResultFormDialog::OnSetWindowEvents(){
	m_wndFormList.SetEvent(WE_SELCHANGE, _OnFormListSelectChangeFnc);
	m_wndFormList.SetEvent(WE_LOADDATA, _OnFormListLoadDataFnc);
	m_wndFormList.SetEvent(WE_DBLCLICK, _OnFormListDblClickFnc);
	m_wndFormList.AddEvent(1, _T("Delete"), _OnFormListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndFormList.AddEvent(0, _T("-"));
	m_wndFormList.AddEvent(2, _T("Search"), _OnFormListSearchFnc);
	m_wndLayoutList.SetEvent(WE_SELCHANGE, _OnLayoutListSelectChangeFnc);
	m_wndLayoutList.SetEvent(WE_LOADDATA, _OnLayoutListLoadDataFnc);
	m_wndLayoutList.SetEvent(WE_DBLCLICK, _OnLayoutListDblClickFnc);
	m_wndLayoutList.AddEvent(1, _T("Save"), _OnLayoutListSaveItemFnc);
	m_wndLayoutList.AddEvent(1, _T("Delete"), _OnLayoutListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndReportName.SetEvent(WE_CHANGE, _OnReportNameChangeFnc);
	//m_wndReportName.SetEvent(WE_SETFOCUS, _OnReportNameSetfocusFnc);
	//m_wndReportName.SetEvent(WE_KILLFOCUS, _OnReportNameKillfocusFnc);
	m_wndReportName.SetEvent(WE_CHECKVALUE, _OnReportNameCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);

	m_wndMenu.SetEvent(WE_SELENDOK, _OnMenuSelendokFnc);
	//m_wndMenu.SetEvent(WE_SETFOCUS, _OnMenuSetfocusFnc);
	//m_wndMenu.SetEvent(WE_KILLFOCUS, _OnMenuKillfocusFnc);
	m_wndMenu.SetEvent(WE_SELCHANGE, _OnMenuSelectChangeFnc);
	m_wndMenu.SetEvent(WE_LOADDATA, _OnMenuLoadDataFnc);
	//m_wndMenu.SetEvent(WE_ADDNEW, _OnMenuAddNewFnc);

	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndLayoutList.SetEditLabel(2, GUI_TEXTCTRL);
	m_wndLayoutList.SetEditLabel(3, GUI_TEXTCTRL);
	SetMode(VM_NONE);
	OnFormListLoadData();
}
void CPACSResultFormDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndReportName.GetDlgCtrlID(), m_szReportName);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndMenu.GetDlgCtrlID(), m_szMenuKey);

}
void CPACSResultFormDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_pacs_form WHERE hpf_id='%s' "), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hpf_id"), m_szID);
		rs.GetValue(_T("hpf_name"), m_szName);
		rs.GetValue(_T("hpf_reportname"), m_szReportName);
		rs.GetValue(_T("hpf_groupid"), m_szGroupKey);
		rs.GetValue(_T("hpf_active"), m_bActive);
		rs.GetValue(_T("hpf_menuid"), m_szMenuKey);
		OnLayoutListLoadData();
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CPACSResultFormDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_pacs_formTbl.SetValue(_T("hpf_id"), m_szID);
	m_hms_pacs_formTbl.SetValue(_T("hpf_name"), m_szName);
	m_hms_pacs_formTbl.SetValue(_T("hpf_reportname"), m_szReportName);
	m_hms_pacs_formTbl.SetValue(_T("hpf_groupid"), m_szGroupKey);
	m_hms_pacs_formTbl.SetValue(_T("hpf_menuid"), m_szMenuKey);
	m_hms_pacs_formTbl.SetValue(_T("hpf_active"), m_bActive);

}
void CPACSResultFormDialog::SetDefaultValues(){

	m_szID.Empty();
	m_bActive=FALSE;
	m_szName.Empty();
	m_szReportName.Empty();
	m_szGroupKey.Empty();
	m_szMenuKey.Empty();
}
int CPACSResultFormDialog::SetMode(int nMode){
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
			m_wndName.SetFocus();
			m_wndID.EnableWindow(false);
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
void CPACSResultFormDialog::OnFormListDblClick()
{
	CString szSQL;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CHMSSelectionListDialog dlg(this);
	
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name ") \
		_T(" FROM hms_fee_list ") \
		_T(" WHERE hfl_groupid='%s' AND hfl_index1='%s' "), m_szGroupKey, m_szID);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF())
	{
		CHMSSelectionListDialog::SELITEM si;
		rs.GetValue(_T("id"), si.szID);
		rs.GetValue(_T("name"), si.szName);
		dlg.m_arraySelection.Add(si);
		rs.MoveNext();
	}
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name ") \
		_T(" FROM hms_fee_list ") \
		_T(" WHERE hfl_groupid='%s' and (length(hfl_index1) <= 1 OR hfl_index1 is null OR hfl_index1 ='%s' ) ") \
		_T(" ORDER BY hfl_groupid, hfl_line "), m_szGroupKey, m_szID);
	_fmsg(_T("%s"), szSQL);
	dlg.m_szSQL = szSQL;
	if(dlg.DoModal() == IDOK)
	{
		CHMSSelectionListDialog::SELITEM si;
		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_index1='' WHERE hfl_groupid='%s' AND hfl_index1='%s' "),m_szGroupKey, m_szID);
		pMF->ExecSQL(szSQL);
		for (int i =0; i < dlg.m_arraySelection.GetCount(); i++)
		{
			si = dlg.m_arraySelection[i];
			szSQL.Format(_T("UPDATE hms_fee_list SET hfl_index1='%s' WHERE hfl_groupid='%s' AND hfl_feeid='%s' "), m_szID, m_szGroupKey, si.szID);
			pMF->ExecSQL(szSQL);

			szSQL.Format(_T("INSERT INTO hms_pacs_form_menu ")\
							 _T("VALUES('%s','%s',%d)"), si.szID, m_szID, i );
			pMF->ExecSQL(szSQL);

		}
	}
	
} 
void CPACSResultFormDialog::OnFormListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_szID = m_wndFormList.GetItemText(nNewItem, 0);
	GetDataToScreen();

	//m_wndResult->SetReference(m_nOrderID, szItemID, szFormID);
	//m_wndView.GetClientRect(&rect);
	//rect.right = rect.left + m_wndResult->GetWidth();
	//rect.bottom = rect.top + m_wndResult->GetHeight();
	//m_wndView.SetScrollSizes(MM_TEXT, CSize(rect.Width()-5, rect.Height()));
	//m_wndView.SetScrollPos(SB_VERT, 0);
	//AfxGetApp()->BeginWaitCursor();
	//m_wndResult->Create(&m_wndView, &rect); 
	//m_wndResult->ShowWindow(SW_HIDE);
	//m_wndResult->OnInitDialog();
	//m_wndResult->ShowWindow(SW_SHOW);
	//m_wndResult->Invalidate();
	//AfxGetApp()->EndWaitCursor();
	

} 
int CPACSResultFormDialog::OnFormListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeletePACSResultFormDialog();
	 return 0;
} 
long CPACSResultFormDialog::OnFormListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndFormList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_pacs_form ORDER BY hpf_id "));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFormList.AddItems(
			rs.GetValue(_T("hpf_id")), 
			rs.GetValue(_T("hpf_name")), 
			NULL);
		rs.MoveNext();
	}
	m_wndFormList.EndLoad(); 
	return nCount;

}

#include "PACSEditDefaultValuesDialog.h"

void CPACSResultFormDialog::OnLayoutListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndLayoutList.GetCurSel();
	if(nSel < 0) return;

	CPACSEditDefaultValuesDialog dlg(this);	
	dlg.m_szFormID = m_szID;
	dlg.m_szFieldName = m_wndLayoutList.GetItemText(nSel, 0);
	dlg.m_szValuesOfComboBox = m_wndLayoutList.GetItemText(nSel, 3);
	dlg.m_szDefaultValues = m_wndLayoutList.GetItemText(nSel, 2);
	if(dlg.DoModal() == IDOK){
		OnLayoutListLoadData();
	}

} 
void CPACSResultFormDialog::OnLayoutListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPACSResultFormDialog::OnLayoutListSaveItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	for (int i =0; i < m_wndLayoutList.GetItemCount(); i++){
		szSQL.Format(_T("UPDATE hms_pacs_layout ") \
			_T("SET hpl_defval='%s', hpl_values='%s' ") \
			_T("WHERE hpl_id='%s' AND hpl_name='%s' "), 
			m_wndLayoutList.GetItemText(i, 2), 
			m_wndLayoutList.GetItemText(i, 3), 
			m_szID, m_wndLayoutList.GetItemText(i, 0));
		pMF->ExecSQL(szSQL);
	}
	
	return 0;
} 
int CPACSResultFormDialog::OnLayoutListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CPACSResultFormDialog::OnLayoutListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndLayoutList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hpl_name as name, hpl_caption as caption, hpl_defval as defval, hpl_values as value, hpl_category as cat ") \
				_T(" FROM hms_pacs_layout WHERE hpl_id='%s' ORDER BY hpl_index "), m_szID);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndLayoutList.AddItems(
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("caption")), 
			rs.GetValue(_T("defval")), 
			rs.GetValue(_T("value")),
			rs.GetValue(_T("cat")), NULL);
		rs.MoveNext();
	}
	m_wndLayoutList.EndLoad(); 
	return nCount;

}
/*void CPACSResultFormDialog::OnIDChange(){
	
} */
/*void CPACSResultFormDialog::OnIDSetfocus(){
	
} */
/*void CPACSResultFormDialog::OnIDKillfocus(){
	
} */
int CPACSResultFormDialog::OnIDCheckValue(){
	return 0;
} 
void CPACSResultFormDialog::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPACSResultFormDialog::OnNameChange(){
	
} */
/*void CPACSResultFormDialog::OnNameSetfocus(){
	
} */
/*void CPACSResultFormDialog::OnNameKillfocus(){
	
} */
int CPACSResultFormDialog::OnNameCheckValue(){
	return 0;
} 
/*void CPACSResultFormDialog::OnReportNameChange(){
	
} */
/*void CPACSResultFormDialog::OnReportNameSetfocus(){
	
} */
/*void CPACSResultFormDialog::OnReportNameKillfocus(){
	
} */
int CPACSResultFormDialog::OnReportNameCheckValue(){
	return 0;
} 



void CPACSResultFormDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CPACSResultFormDialog::OnGroupSelendok(){
	 
}
/*void CPACSResultFormDialog::OnGroupSetfocus(){
	
}*/
/*void CPACSResultFormDialog::OnGroupKillfocus(){
	
}*/
long CPACSResultFormDialog::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
		szWhere.Format(_T(" AND hfg_id ='%s' "), m_szGroupKey);
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name ") \
				_T(" FROM hms_fee_group ") \
				_T(" WHERE (substr(hfg_id, 1, 2) IN('B2','B3') ") \
				_T("	or substr(hfg_id, 1, 3) IN('B1E','B1F','B1H') ") \
				_T("	or hfg_id in (select ss_code ") \
				_T("				from sys_sel ") \
				_T("				where ss_id = 'hms_fee_group_id_opt_result')) %s ") \
				_T(" ORDER BY hfg_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPACSResultFormDialog::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */



void CPACSResultFormDialog::OnMenuSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
} 
void CPACSResultFormDialog::OnMenuSelendok(){
	 
}
/*void CPACSResultFormDialog::OnMenuSetfocus(){
	
}*/
/*void CPACSResultFormDialog::OnMenuKillfocus(){
	
}*/
long CPACSResultFormDialog::OnMenuLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndMenu, _T("hms_pacs_form_menu_group"), m_szMenuKey);
}
/*void CPACSResultFormDialog::OnMenuAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CPACSResultFormDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddPACSResultFormDialog();
} 
void CPACSResultFormDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditPACSResultFormDialog();
} 
void CPACSResultFormDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeletePACSResultFormDialog();
} 
void CPACSResultFormDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSavePACSResultFormDialog();
} 
void CPACSResultFormDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelPACSResultFormDialog();
} 
void CPACSResultFormDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPACSResultFormDialog::OnAddPACSResultFormDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPACSResultFormDialog::OnEditPACSResultFormDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPACSResultFormDialog::OnDeletePACSResultFormDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM hms_pacs_form WHERE  hpf_id='%s'"), m_szID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		szSQL.Format(_T("DELETE FROM hms_pacs_layout WHERE  hpl_id='%s'"), m_szID); 
		pMF->ExecSQL(szSQL); 
 		SetMode(VM_NONE); 
 		OnCancelPACSResultFormDialog(); 
		OnFormListLoadData();
 	}
	return 0;
}
int CPACSResultFormDialog::OnSavePACSResultFormDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_pacs_formTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hpf_id='%s'"), m_szID); 
 		szSQL = m_hms_pacs_formTbl.GetUpdateSQL(_T("hpf_id")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		int nCurSel = m_wndFormList.GetCurSel();
 		OnFormListLoadData();
		
 		SetMode(VM_VIEW); 
		m_wndFormList.SetCurSel(nCurSel);
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPACSResultFormDialog::OnCancelPACSResultFormDialog(){
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
int CPACSResultFormDialog::OnPACSResultFormDialogListLoadData(){
	return 0;
}

int CPACSResultFormDialog::OnFormListSearch()
{
	CHMSListSearchDialog dlg(&m_wndFormList, 1);
	dlg.DoModal();
	return 0;
}