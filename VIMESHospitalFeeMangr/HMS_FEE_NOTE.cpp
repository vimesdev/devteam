#include "HMS_FEE_NOTE.h"
#include "MainFrm.h"
static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Fee_Note *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd)
{
	return ((CHMS_Fee_Note*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd)
{
	((CHMS_Fee_Note*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMS_Fee_Note*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMS_Fee_Note*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Fee_Note *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Fee_Note *)pWnd)->OnNameCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_Fee_Note* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMS_Fee_Note *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_Fee_Note* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMS_Fee_Note *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnItemAddNew();
}*/
/*static void _OnDiscountPercentageChangeFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnDiscountPercentageChange();
} */
/*static void _OnDiscountPercentageSetfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnDiscountPercentageSetfocus();} */ 
/*static void _OnDiscountPercentageKillfocusFnc(CWnd *pWnd){
	((CHMS_Fee_Note *)pWnd)->OnDiscountPercentageKillfocus();
} */
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMS_Fee_Note*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMS_Fee_Note *pVw = (CHMS_Fee_Note *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMS_Fee_Note *pVw = (CHMS_Fee_Note *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMS_Fee_Note *pVw = (CHMS_Fee_Note *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_Fee_Note *pVw = (CHMS_Fee_Note *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMS_Fee_Note *pVw = (CHMS_Fee_Note *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMS_Fee_Note *pVw = (CHMS_Fee_Note *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMS_Fee_NoteFnc(CWnd *pWnd){
	 return ((CHMS_Fee_Note*)pWnd)->OnAddCHMS_Fee_Note();
} 
static int _OnEditCHMS_Fee_NoteFnc(CWnd *pWnd){
	 return ((CHMS_Fee_Note*)pWnd)->OnEditCHMS_Fee_Note();
} 
static int _OnDeleteCHMS_Fee_NoteFnc(CWnd *pWnd){
	 return ((CHMS_Fee_Note*)pWnd)->OnDeleteCHMS_Fee_Note();
} 
static int _OnSaveCHMS_Fee_NoteFnc(CWnd *pWnd){
	 return ((CHMS_Fee_Note*)pWnd)->OnSaveCHMS_Fee_Note();
} 
static int _OnCancelCHMS_Fee_NoteFnc(CWnd *pWnd){
	 return ((CHMS_Fee_Note*)pWnd)->OnCancelCHMS_Fee_Note();
}
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Fee_Note *)pWnd)->OnOrderIDCheckValue();
}
CHMS_Fee_Note::CHMS_Fee_Note(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMS_Fee_Note::~CHMS_Fee_Note()
{
}
void CHMS_Fee_Note::OnCreateComponents()
{
	m_wndItemInformation.Create(this, _T("Thông tin ghi chú của bệnh nhân"), 5, 5, 760, 384);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 29, 759, 54); 
	m_wndList.Create(this,10, 59, 760, 234); 
	m_wndContentLabel.Create(this, _T("Nội dung ghi chú"), 10, 235, 129, 260);
	m_wndContent.Create(this,10, 260, 760, 380, true, false, true); 
	m_wndAdd.Create(this, _T("&Add"), 254, 390, 334, 415);
	m_wndEdit.Create(this, _T("&Edit"), 339, 390, 419, 415);
	m_wndDelete.Create(this, _T("&Delete"), 424, 390, 504, 415);
	m_wndSave.Create(this, _T("&Save"), 509, 390, 589, 415);
	m_wndCancel.Create(this, _T("&Cancel"), 594, 390, 674, 415);
	m_wndClose.Create(this, _T("&Close"), 679, 390, 759, 415);

	m_wndIDLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndIDLabel.ShowWindow(SW_HIDE);
	m_wndIDLabel.EnableWindow(FALSE);
	m_wndID.Create(this, 0, 0, 0, 0);
	m_wndID.ShowWindow(SW_HIDE);
	m_wndID.EnableWindow(FALSE);
	m_wndNameLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndNameLabel.ShowWindow(SW_HIDE);
	m_wndNameLabel.EnableWindow(FALSE);
	m_wndName.Create(this, 0, 0, 0, 0);
	m_wndName.ShowWindow(SW_HIDE);
	m_wndName.EnableWindow(FALSE);
	m_wndGroupLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndGroupLabel.ShowWindow(SW_HIDE);
	m_wndGroupLabel.EnableWindow(FALSE);
	m_wndGroup.Create(this, 0, 0, 0, 0);
	m_wndGroup.ShowWindow(SW_HIDE);
	m_wndGroup.EnableWindow(FALSE);
	m_wndItemLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndItemLabel.ShowWindow(SW_HIDE);
	m_wndItemLabel.EnableWindow(FALSE);
	m_wndItem.Create(this, 0, 0, 0, 0);
	m_wndItem.ShowWindow(SW_HIDE);
	m_wndItem.EnableWindow(FALSE);
	m_wndActive.Create(this, _T(""), 0, 0, 0, 0);
	m_wndActive.ShowWindow(SW_HIDE);
	m_wndActive.EnableWindow(FALSE);
}
void CHMS_Fee_Note::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchByName.SetLimitText(1024);
	//m_wndSearchByName.SetCheckValue(true);
	m_wndID.SetLimitText(1024);
	//m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	//m_wndName.SetCheckValue(true);
	//m_wndGroup.SetCheckValue(true);
	//m_wndGroup.LimitText(1024);
	//m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1024);

	

	m_wndList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER | CFMT_CENTER, 70);
	m_wndList.InsertColumn(1, _T("Số Hồ sơ"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(2, _T("Người tạo"), CFMT_TEXT, 100);	
	m_wndList.InsertColumn(3, _T("Nội dung"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(4, _T("Thời gian"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);
	m_wndItem.InsertColumn(2, _T("ApplyDate"), CFMT_DATE, 120);
	m_wndItem.InsertColumn(3, _T("Giá DV"), CFMT_MONEY, 120);


	hms_fee_note_Tbl.SetTableName(_T("hms_fee_note"));
	hms_fee_note_Tbl.AddField(_T("HFN_IDX"), dfInteger);
	hms_fee_note_Tbl.AddField(_T("HFN_DOCNO"), dfLong);
	hms_fee_note_Tbl.AddField(_T("HFN_NOTE"), dfText, 1024);
	hms_fee_note_Tbl.AddField(_T("HFN_UPDATEDBY"), dfText, 20); 
	hms_fee_note_Tbl.AddField(_T("HFN_UPDATEDDATE"), dfDateTime);
	hms_fee_note_Tbl.AddField(_T("HFN_WHO_CREATE"), dfText, 20);

}
void CHMS_Fee_Note::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndItem.SetEvent(WE_SELENDOK, _OnItemSelendokFnc);
	//m_wndItem.SetEvent(WE_SETFOCUS, _OnItemSetfocusFnc);
	//m_wndItem.SetEvent(WE_KILLFOCUS, _OnItemKillfocusFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);	
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
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
		//m_nIndex = 0;
	}
	else
	{
		SetMode(VM_NONE);
		m_wndGroup.SetFocus();
		//m_nIndex = -1;
	}

}
void CHMS_Fee_Note::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);	
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);	
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
}
void CHMS_Fee_Note::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SearchByName")] =  m_szSearchByName;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Item")] =  m_szItemKey;	
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("SearchByName")].GetValue(m_szSearchByName);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);	
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CHMS_Fee_Note::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_fee_note WHERE HFN_DOCNO=%ld AND hfn_idx = %ld"), pMF->m_nDocumentNo, m_nIdx);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("HFN_DOCNO"), pMF->m_nDocumentNo);
		rs.GetValue(_T("HFN_NOTE"), m_szContent);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CHMS_Fee_Note::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT HMS_FEE_NOTE_ID_ASQ.NEXTVAL as next_id from dual"));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("next_id"), m_nIdx);
	}

	hms_fee_note_Tbl.SetValue(_T("HFN_IDX"), m_nIdx);
	hms_fee_note_Tbl.SetValue(_T("HFN_DOCNO"), pMF->m_nDocumentNo);
	hms_fee_note_Tbl.SetValue(_T("HFN_NOTE"), m_szContent);
	hms_fee_note_Tbl.SetValue(_T("HFN_UPDATEDBY"), pMF->GetCurrentUser());
	hms_fee_note_Tbl.SetValue(_T("HFN_UPDATEDDATE"), pMF->GetSysDateTime());	
	hms_fee_note_Tbl.SetValue(_T("HFN_WHO_CREATE"), pMF->GetCurrentUser());
}
void CHMS_Fee_Note::SetDefaultValues(){

	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();
	m_szContent.Empty();

}
int CHMS_Fee_Note::SetMode(int nMode)
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
			m_wndContent.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndID.EnableWindow(FALSE);
			m_wndActive.SetFocus();		
			
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
		m_wndID.EnableWindow(false);
		m_wndName.EnableWindow(false);

		//m_wndEdit.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMS_Fee_Note::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMS_Fee_Note::OnSearchByNameSetfocus(){
	
} */
/*void CHMS_Fee_Note::OnSearchByNameKillfocus(){
	
} */
int CHMS_Fee_Note::OnSearchByNameCheckValue()
{
	UpdateData(TRUE);
	OnListLoadData();
	return 0;
}
int CHMS_Fee_Note::OnContentCheckValue()
{
	return 0;
} 
void CHMS_Fee_Note::OnListDblClick()
{
	
}

int CHMS_Fee_Note::OnOrderIDCheckValue()
{
	return 0;
} 

void CHMS_Fee_Note::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_nIdx = ToLong(m_wndList.GetItemText(nNewItem, 0));
	m_szWhocreate = m_wndList.GetItemText(nNewItem, 2);
	GetDataToScreen();
	
} 
int CHMS_Fee_Note::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMS_Fee_Note::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szActive;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;

	szWhere.Empty();
	if (!m_szSearchByName.IsEmpty())
	{
		szWhere.Format(_T(" AND lower((HFN_WHO_CREATE)) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}
	szSQL.Format(_T(" SELECT ") \
				_T(" HFN_IDX as idx,") \
				_T(" HFN_DOCNO as docno,") \
				_T(" HFN_WHO_CREATE as whocreate,") \
				_T(" HFN_NOTE as note, ") \
				_T(" HFN_UPDATEDDATE as Updatetime ") \
				_T(" FROM hms_fee_note") \
				_T(" WHERE 1=1 AND hfn_docno = %ld %s ORDER BY HFN_UPDATEDDATE desc"), pMF->m_nDocumentNo, szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	while(!rs.IsEOF())
	{ 
		int nItem = m_wndList.AddItems
			(
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("whocreate")),
			rs.GetValue(_T("note")),
			rs.GetValue(_T("Updatetime")),NULL);				
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;

}
/*void CHMS_Fee_Note::OnIDChange(){
	
} */
/*void CHMS_Fee_Note::OnIDSetfocus(){
	
} */
/*void CHMS_Fee_Note::OnIDKillfocus(){
	
} */
int CHMS_Fee_Note::OnIDCheckValue(){
	return 0;
} 
/*void CHMS_Fee_Note::OnNameChange(){
	
} */
/*void CHMS_Fee_Note::OnNameSetfocus(){
	
} */
/*void CHMS_Fee_Note::OnNameKillfocus(){
	
} */
int CHMS_Fee_Note::OnNameCheckValue(){
	return 0;
} 
void CHMS_Fee_Note::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_Fee_Note::OnGroupSelendok(){
	 
}
/*void CHMS_Fee_Note::OnGroupSetfocus(){
	
}*/
/*void CHMS_Fee_Note::OnGroupKillfocus(){
	
}*/
long CHMS_Fee_Note::OnGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" and group_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;	
	szSQL.Format(_T("SELECT group_id, group_name") \
				_T(" FROM FEE_ITEM_GROUP_VIEW ") \
				_T(" WHERE 1=1 ") \
				_T(" %s ORDER BY group_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("group_id")),
			rs.GetValue(_T("group_name")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMS_Fee_Note::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMS_Fee_Note::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_Fee_Note::OnItemSelendok(){
	 
}
/*void CHMS_Fee_Note::OnItemSetfocus(){
	
}*/
/*void CHMS_Fee_Note::OnItemKillfocus(){
	
}*/
long CHMS_Fee_Note::OnItemLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItem.IsSearchKey() && !m_szItemKey.IsEmpty()){
		szWhere.Format(_T(" "), m_szItemKey);
	}
	if (!m_szGroupKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfl_groupid = '%s'"), m_szGroupKey);
	}
	szWhere.AppendFormat(_T(" AND hfl_feeid NOT IN (select dc_code from hms_fee_note)"));
	m_wndItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select hfl_feeid as fee_id, hfl_name as fee_name, to_char(HFL_APPLYDATE,'DD/MM/YYYY') as apply_date, HFL_SERVPRICE as giadv ") \
				_T(" from hms_fee_list ") \
				_T(" where hfl_active = 'Y' AND HFL_SERVPRICE > 0 %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("fee_id")),
			rs.GetValue(_T("fee_name")),
			rs.GetValue(_T("apply_date")),
			rs.GetValue(_T("giadv")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMS_Fee_Note::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_Fee_Note::OnDiscountPercentageChange(){
	
} */
/*void CHMS_Fee_Note::OnDiscountPercentageSetfocus(){
	
} */
/*void CHMS_Fee_Note::OnDiscountPercentageKillfocus(){
	
} */
	void CHMS_Fee_Note::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMS_Fee_Note::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddCHMS_Fee_Note();
	
} 
void CHMS_Fee_Note::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditCHMS_Fee_Note();
	
} 
void CHMS_Fee_Note::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteCHMS_Fee_Note();
	
} 
void CHMS_Fee_Note::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMS_Fee_Note();
	
} 
void CHMS_Fee_Note::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCHMS_Fee_Note();
	
} 
void CHMS_Fee_Note::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMS_Fee_Note::OnAddCHMS_Fee_Note()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_Fee_Note::OnEditCHMS_Fee_Note()
{
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_Fee_Note::OnDeleteCHMS_Fee_Note()
{
 	ShowMessageBox(_T("Chưa hỗ trợ chức năng này!"));
	return -1;

	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM hms_fee_note WHERE DC_CODE='%s'"), m_szID); 
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
int CHMS_Fee_Note::OnSaveCHMS_Fee_Note()
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
		szSQL = hms_fee_note_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere, szWhocreate;
		szWhocreate = pMF->GetCurrentUser();
		if (m_szWhocreate != szWhocreate)

		{
			ShowMessageBox(_T("Bạn không phải người tạo ghi chú, không cho phép sửa!"));
			SetMode(VM_VIEW);
			return -1;
		}
		
		szWhere.Format(_T(" WHERE hfn_docno=%ld and hfn_idx=%ld "), pMF->m_nDocumentNo, m_nIdx); 
 		szSQL = hms_fee_note_Tbl.GetUpdateSQL(_T("hfn_docno, hfn_idx, HFN_WHO_CREATE, ")); 
 		szSQL += szWhere; 
 	} 
	//_msg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSThietLap_Thongtin_VaccineListLoadData(); 
 		SetMode(VM_VIEW);
		OnListLoadData();
		//SetItemSel(&m_wndList, m_szID, m_nIndex);
		if (bAdd)
			m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret;
}
int CHMS_Fee_Note::OnCancelCHMS_Fee_Note()
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
int CHMS_Fee_Note::OnCHMS_Fee_NoteListLoadData(){
	return 0;
}
void CHMS_Fee_Note::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
