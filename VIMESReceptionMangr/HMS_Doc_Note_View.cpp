#include "HMS_Doc_Note_View.h"
#include "MainFrm.h"
static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Doc_Note_View *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd)
{
	return ((CHMS_Doc_Note_View*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd)
{
	((CHMS_Doc_Note_View*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMS_Doc_Note_View*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMS_Doc_Note_View*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Doc_Note_View *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Doc_Note_View *)pWnd)->OnNameCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_Doc_Note_View* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMS_Doc_Note_View *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMS_Doc_Note_View* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMS_Doc_Note_View *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnItemAddNew();
}*/
/*static void _OnDiscountPercentageChangeFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnDiscountPercentageChange();
} */
/*static void _OnDiscountPercentageSetfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnDiscountPercentageSetfocus();} */ 
/*static void _OnDiscountPercentageKillfocusFnc(CWnd *pWnd){
	((CHMS_Doc_Note_View *)pWnd)->OnDiscountPercentageKillfocus();
} */
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMS_Doc_Note_View*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMS_Doc_Note_View *pVw = (CHMS_Doc_Note_View *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMS_Doc_Note_View *pVw = (CHMS_Doc_Note_View *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMS_Doc_Note_View *pVw = (CHMS_Doc_Note_View *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_Doc_Note_View *pVw = (CHMS_Doc_Note_View *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMS_Doc_Note_View *pVw = (CHMS_Doc_Note_View *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMS_Doc_Note_View *pVw = (CHMS_Doc_Note_View *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMS_Doc_Note_ViewFnc(CWnd *pWnd){
	 return ((CHMS_Doc_Note_View*)pWnd)->OnAddCHMS_Doc_Note_View();
} 
static int _OnEditCHMS_Doc_Note_ViewFnc(CWnd *pWnd){
	 return ((CHMS_Doc_Note_View*)pWnd)->OnEditCHMS_Doc_Note_View();
} 
static int _OnDeleteCHMS_Doc_Note_ViewFnc(CWnd *pWnd){
	 return ((CHMS_Doc_Note_View*)pWnd)->OnDeleteCHMS_Doc_Note_View();
} 
static int _OnSaveCHMS_Doc_Note_ViewFnc(CWnd *pWnd){
	 return ((CHMS_Doc_Note_View*)pWnd)->OnSaveCHMS_Doc_Note_View();
} 
static int _OnCancelCHMS_Doc_Note_ViewFnc(CWnd *pWnd){
	 return ((CHMS_Doc_Note_View*)pWnd)->OnCancelCHMS_Doc_Note_View();
}
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMS_Doc_Note_View *)pWnd)->OnOrderIDCheckValue();
}

static void _OnViewHistorySelectFnc(CWnd *pWnd)
{
	 ((CHMS_Doc_Note_View*)pWnd)->OnViewHistorySelect();
}

CHMS_Doc_Note_View::CHMS_Doc_Note_View(CWnd *pParent, bool bViewHistory):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	m_bViewHistory = bViewHistory;
	//SetDefaultValues();
}
CHMS_Doc_Note_View::~CHMS_Doc_Note_View()
{
}
void CHMS_Doc_Note_View::OnCreateComponents()
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
	m_wndViewHistory.Create(this, _T("View History Note"), 10, 390, 147, 415);

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
void CHMS_Doc_Note_View::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchByName.SetLimitText(1024);
	//m_wndSearchByName.SetCheckValue(true);
	m_wndID.SetLimitText(1024);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(1024);
	m_wndName.SetCheckValue(true);
	//m_wndGroup.SetCheckValue(true);
	//m_wndGroup.LimitText(1024);
	m_wndItem.SetCheckValue(true);
	m_wndItem.LimitText(1024);

	

	m_wndList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER | CFMT_CENTER, 70);
	m_wndList.InsertColumn(1, _T("Số Hồ sơ"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Người tạo"), CFMT_TEXT, 100);	
	m_wndList.InsertColumn(3, _T("Nội dung"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(4, _T("Thời gian"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);
	m_wndItem.InsertColumn(2, _T("ApplyDate"), CFMT_DATE, 120);
	m_wndItem.InsertColumn(3, _T("Giá DV"), CFMT_MONEY, 120);


	hms_doc_note_Tbl.SetTableName(_T("hms_doc_note"));
	hms_doc_note_Tbl.AddField(_T("HDN_IDX"), dfInteger);
	hms_doc_note_Tbl.AddField(_T("HDN_DOCNO"), dfLong);
	hms_doc_note_Tbl.AddField(_T("HDN_NOTE"), dfText, 1024);
	hms_doc_note_Tbl.AddField(_T("HDN_UPDATEDBY"), dfText, 20); 
	hms_doc_note_Tbl.AddField(_T("HDN_UPDATEDDATE"), dfDateTime);
	hms_doc_note_Tbl.AddField(_T("HDN_WHO_CREATE"), dfText, 20);

}
void CHMS_Doc_Note_View::OnSetWindowEvents(){
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
	m_wndViewHistory.SetEvent(WE_CLICK, _OnViewHistorySelectFnc);

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
void CHMS_Doc_Note_View::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);	
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);	
	DDX_Text(pDX, m_wndContent.GetDlgCtrlID(), m_szContent);
	DDX_Check(pDX, m_wndViewHistory.GetDlgCtrlID(), m_bViewHistory);
}
void CHMS_Doc_Note_View::UpdateJson(BOOL bSave){
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
void CHMS_Doc_Note_View::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_doc_note WHERE HDN_DOCNO=%ld AND hdn_idx = %ld"), m_nDocno, m_nIdx);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("HDN_DOCNO"), pMF->m_nDocumentNo);
		rs.GetValue(_T("HDN_NOTE"), m_szContent);
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CHMS_Doc_Note_View::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT hms_doc_note_ID_ASQ.NEXTVAL as next_id from dual"));
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("next_id"), m_nIdx);
	}

	hms_doc_note_Tbl.SetValue(_T("HDN_IDX"), m_nIdx);
	hms_doc_note_Tbl.SetValue(_T("HDN_DOCNO"), pMF->m_nDocumentNo);
	hms_doc_note_Tbl.SetValue(_T("HDN_NOTE"), m_szContent);
	hms_doc_note_Tbl.SetValue(_T("HDN_UPDATEDBY"), pMF->GetCurrentUser());
	hms_doc_note_Tbl.SetValue(_T("HDN_UPDATEDDATE"), pMF->GetSysDateTime());	
	hms_doc_note_Tbl.SetValue(_T("HDN_WHO_CREATE"), pMF->GetCurrentUser());
}
void CHMS_Doc_Note_View::SetDefaultValues(){

	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();
	m_szContent.Empty();
	m_bViewHistory=FALSE;
}
int CHMS_Doc_Note_View::SetMode(int nMode)
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
		
	
			m_wndAdd.EnableWindow(false);
			m_wndEdit.EnableWindow(false);
			m_wndDelete.EnableWindow(false);
			m_wndSave.EnableWindow(false);
			m_wndCancel.EnableWindow(false);
			m_wndViewHistory.EnableWindow(false);
	
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMS_Doc_Note_View::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMS_Doc_Note_View::OnSearchByNameSetfocus(){
	
} */
/*void CHMS_Doc_Note_View::OnSearchByNameKillfocus(){
	
} */
int CHMS_Doc_Note_View::OnSearchByNameCheckValue()
{
	UpdateData(TRUE);
	OnListLoadData();
	return 0;
}
int CHMS_Doc_Note_View::OnContentCheckValue()
{
	return 0;
} 
void CHMS_Doc_Note_View::OnListDblClick()
{
	
}

int CHMS_Doc_Note_View::OnOrderIDCheckValue()
{
	return 0;
} 

void CHMS_Doc_Note_View::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_nIdx = ToLong(m_wndList.GetItemText(nNewItem, 0));
	m_nDocno = ToLong(m_wndList.GetItemText(nNewItem, 1));
	m_szWhocreate = m_wndList.GetItemText(nNewItem, 2);
	GetDataToScreen();
	
} 
int CHMS_Doc_Note_View::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMS_Doc_Note_View::OnListLoadData()
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
		szWhere.Format(_T(" AND lower((HDN_DOCNO)) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	if (m_bViewHistory)
	{
	szSQL.Format(_T(" SELECT HDN_IDX    AS idx,") \
				_T("   HDN_DOCNO       AS docno,") \
				_T("   HDN_WHO_CREATE  AS whocreate,") \
				_T("   HDN_NOTE        AS note,") \
				_T("   HDN_UPDATEDDATE AS Updatetime") \
				_T(" FROM hms_doc_note") \
				_T(" LEFT JOIN hms_doc ON (HDN_DOCNO = hd_docno)") \
				_T(" WHERE 1       =1") \
				_T(" AND hd_patientno = %ld %s ") \
				_T(" ORDER BY HDN_DOCNO desc, HDN_UPDATEDDATE desc"), pMF->m_nPatientNo, szWhere);
	}
	else
	{
	szSQL.Format(_T(" SELECT ") \
				_T(" HDN_IDX as idx,") \
				_T(" HDN_DOCNO as docno,") \
				_T(" HDN_WHO_CREATE as whocreate,") \
				_T(" HDN_NOTE as note, ") \
				_T(" HDN_UPDATEDDATE as Updatetime ") \
				_T(" FROM hms_doc_note") \
				_T(" WHERE 1=1 AND hdn_docno = %ld %s ORDER BY HDN_UPDATEDDATE desc"), pMF->m_nDocumentNo, szWhere);
	}

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
/*void CHMS_Doc_Note_View::OnIDChange(){
	
} */
/*void CHMS_Doc_Note_View::OnIDSetfocus(){
	
} */
/*void CHMS_Doc_Note_View::OnIDKillfocus(){
	
} */
int CHMS_Doc_Note_View::OnIDCheckValue(){
	return 0;
} 
/*void CHMS_Doc_Note_View::OnNameChange(){
	
} */
/*void CHMS_Doc_Note_View::OnNameSetfocus(){
	
} */
/*void CHMS_Doc_Note_View::OnNameKillfocus(){
	
} */
int CHMS_Doc_Note_View::OnNameCheckValue(){
	return 0;
} 
void CHMS_Doc_Note_View::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_Doc_Note_View::OnGroupSelendok(){
	 
}
/*void CHMS_Doc_Note_View::OnGroupSetfocus(){
	
}*/
/*void CHMS_Doc_Note_View::OnGroupKillfocus(){
	
}*/
long CHMS_Doc_Note_View::OnGroupLoadData()
{
	return 0;
}
/*void CHMS_Doc_Note_View::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMS_Doc_Note_View::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMS_Doc_Note_View::OnItemSelendok(){
	 
}
/*void CHMS_Doc_Note_View::OnItemSetfocus(){
	
}*/
/*void CHMS_Doc_Note_View::OnItemKillfocus(){
	
}*/
long CHMS_Doc_Note_View::OnItemLoadData()
{
	return 0;
}
/*void CHMS_Doc_Note_View::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMS_Doc_Note_View::OnDiscountPercentageChange(){
	
} */
/*void CHMS_Doc_Note_View::OnDiscountPercentageSetfocus(){
	
} */
/*void CHMS_Doc_Note_View::OnDiscountPercentageKillfocus(){
	
} */
	void CHMS_Doc_Note_View::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMS_Doc_Note_View::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddCHMS_Doc_Note_View();
	
} 
void CHMS_Doc_Note_View::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditCHMS_Doc_Note_View();
	
} 
void CHMS_Doc_Note_View::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteCHMS_Doc_Note_View();
	
} 
void CHMS_Doc_Note_View::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMS_Doc_Note_View();
	
} 
void CHMS_Doc_Note_View::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCHMS_Doc_Note_View();
	
} 
void CHMS_Doc_Note_View::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
void CHMS_Doc_Note_View::OnViewHistorySelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnListLoadData();
	
}
int CHMS_Doc_Note_View::OnAddCHMS_Doc_Note_View()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_Doc_Note_View::OnEditCHMS_Doc_Note_View()
{
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_Doc_Note_View::OnDeleteCHMS_Doc_Note_View()
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
	szSQL.Format(_T("DELETE FROM hms_doc_note WHERE DC_CODE='%s'"), m_szID); 
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
int CHMS_Doc_Note_View::OnSaveCHMS_Doc_Note_View()
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
		szSQL = hms_doc_note_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere, szWhocreate;
		szWhocreate = pMF->GetCurrentUser();
		if ((m_szWhocreate != szWhocreate) && (pMF->m_UserInfo.su_groupid != _T("A")))

		{
			ShowMessageBox(_T("Bạn không phải người tạo ghi chú, không cho phép sửa!"));
			SetMode(VM_VIEW);
			return -1;
		}
		
		szWhere.Format(_T(" WHERE hdn_docno=%ld and hdn_idx=%ld "), pMF->m_nDocumentNo, m_nIdx); 
 		szSQL = hms_doc_note_Tbl.GetUpdateSQL(_T("hdn_docno, hdn_idx, HDN_WHO_CREATE, ")); 
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
int CHMS_Doc_Note_View::OnCancelCHMS_Doc_Note_View()
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
int CHMS_Doc_Note_View::OnCHMS_Doc_Note_ViewListLoadData(){
	return 0;
}
void CHMS_Doc_Note_View::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
