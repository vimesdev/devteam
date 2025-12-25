#include "HMSThietLap_Mien_Thuoc_ungthu.h"
#include "MainFrm.h"
static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnNameCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSThietLap_Mien_Thuoc_ungthu* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSThietLap_Mien_Thuoc_ungthu* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnItemAddNew();
}*/
/*static void _OnDiscountPercentageChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnDiscountPercentageChange();
} */
/*static void _OnDiscountPercentageSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnDiscountPercentageSetfocus();} */ 
/*static void _OnDiscountPercentageKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnDiscountPercentageKillfocus();
} */
static int _OnDiscountPercentageCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnDiscountPercentageCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSThietLap_Mien_Thuoc_ungthu *pVw = (CHMSThietLap_Mien_Thuoc_ungthu *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSThietLap_Mien_Thuoc_ungthu *pVw = (CHMSThietLap_Mien_Thuoc_ungthu *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSThietLap_Mien_Thuoc_ungthu *pVw = (CHMSThietLap_Mien_Thuoc_ungthu *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSThietLap_Mien_Thuoc_ungthu *pVw = (CHMSThietLap_Mien_Thuoc_ungthu *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSThietLap_Mien_Thuoc_ungthu *pVw = (CHMSThietLap_Mien_Thuoc_ungthu *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSThietLap_Mien_Thuoc_ungthu *pVw = (CHMSThietLap_Mien_Thuoc_ungthu *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSThietLap_Mien_Thuoc_ungthuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnAddCHMSThietLap_Mien_Thuoc_ungthu();
} 
static int _OnEditCHMSThietLap_Mien_Thuoc_ungthuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnEditCHMSThietLap_Mien_Thuoc_ungthu();
} 
static int _OnDeleteCHMSThietLap_Mien_Thuoc_ungthuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnDeleteCHMSThietLap_Mien_Thuoc_ungthu();
} 
static int _OnSaveCHMSThietLap_Mien_Thuoc_ungthuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnSaveCHMSThietLap_Mien_Thuoc_ungthu();
} 
static int _OnCancelCHMSThietLap_Mien_Thuoc_ungthuFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Mien_Thuoc_ungthu*)pWnd)->OnCancelCHMSThietLap_Mien_Thuoc_ungthu();
}
static int _OnOrderIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Mien_Thuoc_ungthu *)pWnd)->OnOrderIDCheckValue();
}
CHMSThietLap_Mien_Thuoc_ungthu::CHMSThietLap_Mien_Thuoc_ungthu(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSThietLap_Mien_Thuoc_ungthu::~CHMSThietLap_Mien_Thuoc_ungthu()
{
}
void CHMSThietLap_Mien_Thuoc_ungthu::OnCreateComponents()
{
	m_wndItemInformation.Create(this, _T("Thông tin miễn giảm"), 5, 5, 759, 384);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 29, 759, 54); 
	m_wndList.Create(this,10, 60, 759, 350); 
	m_wndDiscountLabel.Create(this, _T("Số phiếu"), 10, 355, 90, 380);
	m_wndOrderID.Create(this,95, 355, 254, 380); 
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
	m_wndDiscountPercentage.Create(this, 0, 0, 0, 0);
	m_wndDiscountPercentage.ShowWindow(SW_HIDE);
	m_wndDiscountPercentage.EnableWindow(FALSE);
	m_wndActive.Create(this, _T(""), 0, 0, 0, 0);
	m_wndActive.ShowWindow(SW_HIDE);
	m_wndActive.EnableWindow(FALSE);
}
void CHMSThietLap_Mien_Thuoc_ungthu::OnInitializeComponents(){
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
	m_wndOrderID.SetCheckValue(true);
	m_wndOrderID.LimitText(10);
	m_wndDiscountPercentage.SetLimitText(16);
	m_wndDiscountPercentage.SetCheckValue(true);
	

	m_wndList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Số HS"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Tên BN"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(3, _T("Người miễn"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(4, _T("Thời gian"), CFMT_TEXT, 200);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);
	m_wndItem.InsertColumn(2, _T("ApplyDate"), CFMT_DATE, 120);
	m_wndItem.InsertColumn(3, _T("Giá DV"), CFMT_MONEY, 120);


	PASS_DRUGCANCER_CHECK_LIST_Tbl.SetTableName(_T("PASS_DRUGCANCER_CHECK_LIST"));
	PASS_DRUGCANCER_CHECK_LIST_Tbl.AddField(_T("PHPO_ORDERID"), dfLong);
	PASS_DRUGCANCER_CHECK_LIST_Tbl.AddField(_T("PHPO_WHOCREATE"), dfText, 12); 
	PASS_DRUGCANCER_CHECK_LIST_Tbl.AddField(_T("PHPO_CREATEDDATE"), dfDateTime);	

}
void CHMSThietLap_Mien_Thuoc_ungthu::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchByName.SetEvent(WE_CHANGE, _OnSearchByNameChangeFnc);
	//m_wndSearchByName.SetEvent(WE_SETFOCUS, _OnSearchByNameSetfocusFnc);
	//m_wndSearchByName.SetEvent(WE_KILLFOCUS, _OnSearchByNameKillfocusFnc);
	m_wndSearchByName.SetEvent(WE_CHECKVALUE, _OnSearchByNameCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	m_wndOrderID.SetEvent(WE_CHECKVALUE, _OnOrderIDCheckValueFnc);
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
	//m_wndItem.SetEvent(WE_ADDNEW, _OnItemAddNewFnc);
	//m_wndDiscountPercentage.SetEvent(WE_CHANGE, _OnDiscountPercentageChangeFnc);
	//m_wndDiscountPercentage.SetEvent(WE_SETFOCUS, _OnDiscountPercentageSetfocusFnc);
	//m_wndDiscountPercentage.SetEvent(WE_KILLFOCUS, _OnDiscountPercentageKillfocusFnc);
	m_wndDiscountPercentage.SetEvent(WE_CHECKVALUE, _OnDiscountPercentageCheckValueFnc);
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
void CHMSThietLap_Mien_Thuoc_ungthu::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Text(pDX, m_wndDiscountPercentage.GetDlgCtrlID(), m_nDiscountPercentage);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndOrderID.GetDlgCtrlID(), m_nOrderID);
}
void CHMSThietLap_Mien_Thuoc_ungthu::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("SearchByName")] =  m_szSearchByName;
	m_jData[_T("ID")] =  m_szID;
	m_jData[_T("Name")] =  m_szName;
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("Item")] =  m_szItemKey;
	m_jData[_T("DiscountPercentage")] =  m_nDiscountPercentage;
	m_jData[_T("Active")] =  m_bActive;
	}
	else
	{
			
	m_jData[_T("SearchByName")].GetValue(m_szSearchByName);
	m_jData[_T("ID")].GetValue(m_szID);
	m_jData[_T("Name")].GetValue(m_szName);
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("Item")].GetValue(m_szItemKey);
	m_jData[_T("DiscountPercentage")].GetValue(m_nDiscountPercentage);
	m_jData[_T("Active")].GetValue(m_bActive);
	}

}
void CHMSThietLap_Mien_Thuoc_ungthu::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM PASS_DRUGCANCER_CHECK_LIST WHERE PHPO_ORDERID=%ld"), m_nOrderID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("PHPO_ORDERID"), m_nOrderID);		
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CHMSThietLap_Mien_Thuoc_ungthu::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	PASS_DRUGCANCER_CHECK_LIST_Tbl.SetValue(_T("PHPO_ORDERID"), m_nOrderID);
	PASS_DRUGCANCER_CHECK_LIST_Tbl.SetValue(_T("PHPO_WHOCREATE"), pMF->GetCurrentUser());
	PASS_DRUGCANCER_CHECK_LIST_Tbl.SetValue(_T("PHPO_CREATEDDATE"), pMF->GetSysDateTime());	

}
void CHMSThietLap_Mien_Thuoc_ungthu::SetDefaultValues(){

	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();
	m_nDiscountPercentage=0;
	m_bActive=FALSE;
	m_nOrderID = 0;

}
int CHMSThietLap_Mien_Thuoc_ungthu::SetMode(int nMode)
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
			m_wndGroup.SetFocus();
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

		m_wndEdit.EnableWindow(FALSE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSThietLap_Mien_Thuoc_ungthu::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnSearchByNameSetfocus(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnSearchByNameKillfocus(){
	
} */
int CHMSThietLap_Mien_Thuoc_ungthu::OnSearchByNameCheckValue()
{
	UpdateData(TRUE);
	OnListLoadData();
	return 0;
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnListDblClick()
{
	
}

int CHMSThietLap_Mien_Thuoc_ungthu::OnOrderIDCheckValue()
{
	return 0;
} 

void CHMSThietLap_Mien_Thuoc_ungthu::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_nOrderID = ToLong(m_wndList.GetItemText(nNewItem, 0));
	GetDataToScreen();
	
} 
int CHMSThietLap_Mien_Thuoc_ungthu::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSThietLap_Mien_Thuoc_ungthu::OnListLoadData()
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
		szWhere.Format(_T(" AND lower(GET_PATIENTNAME(hpo_docno)) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T(" SELECT ") \
				_T(" PHPO_ORDERID as orderid,") \
				_T(" hpo_docno as docno,") \
				_T(" GET_PATIENTNAME(hpo_docno) as patname,") \
				_T(" phpo_whocreate as whocreate,") \
				_T(" PHPO_CREATEDDATE as createdtime") \
				_T(" FROM PASS_DRUGCANCER_CHECK_LIST") \
				_T(" LEFT JOIN HMS_PHARMAORDER_VIEW_VP ON (PHPO_ORDERID=hpo_orderid)") \
				_T(" WHERE 1=1 %s ORDER BY PHPO_CREATEDDATE desc"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	
	while(!rs.IsEOF())
	{ 
		int nItem = m_wndList.AddItems
			(
			rs.GetValue(_T("orderid")), 
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("patname")),
			rs.GetValue(_T("whocreate")),
			rs.GetValue(_T("createdtime")),NULL);				
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;

}
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnIDChange(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnIDSetfocus(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnIDKillfocus(){
	
} */
int CHMSThietLap_Mien_Thuoc_ungthu::OnIDCheckValue(){
	return 0;
} 
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnNameChange(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnNameSetfocus(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnNameKillfocus(){
	
} */
int CHMSThietLap_Mien_Thuoc_ungthu::OnNameCheckValue(){
	return 0;
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnGroupSelendok(){
	 
}
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnGroupSetfocus(){
	
}*/
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnGroupKillfocus(){
	
}*/
long CHMSThietLap_Mien_Thuoc_ungthu::OnGroupLoadData()
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
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSThietLap_Mien_Thuoc_ungthu::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnItemSelendok(){
	 
}
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnItemSetfocus(){
	
}*/
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnItemKillfocus(){
	
}*/
long CHMSThietLap_Mien_Thuoc_ungthu::OnItemLoadData()
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
	szWhere.AppendFormat(_T(" AND hfl_feeid NOT IN (select dc_code from PASS_DRUGCANCER_CHECK_LIST)"));
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
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnDiscountPercentageChange(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnDiscountPercentageSetfocus(){
	
} */
/*void CHMSThietLap_Mien_Thuoc_ungthu::OnDiscountPercentageKillfocus(){
	
} */
int CHMSThietLap_Mien_Thuoc_ungthu::OnDiscountPercentageCheckValue(){
	return 0;
} 
	void CHMSThietLap_Mien_Thuoc_ungthu::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSThietLap_Mien_Thuoc_ungthu::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddCHMSThietLap_Mien_Thuoc_ungthu();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditCHMSThietLap_Mien_Thuoc_ungthu();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteCHMSThietLap_Mien_Thuoc_ungthu();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSThietLap_Mien_Thuoc_ungthu();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCHMSThietLap_Mien_Thuoc_ungthu();
	
} 
void CHMSThietLap_Mien_Thuoc_ungthu::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSThietLap_Mien_Thuoc_ungthu::OnAddCHMSThietLap_Mien_Thuoc_ungthu()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSThietLap_Mien_Thuoc_ungthu::OnEditCHMSThietLap_Mien_Thuoc_ungthu(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSThietLap_Mien_Thuoc_ungthu::OnDeleteCHMSThietLap_Mien_Thuoc_ungthu()
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
	szSQL.Format(_T("DELETE FROM PASS_DRUGCANCER_CHECK_LIST WHERE DC_CODE='%s'"), m_szID); 
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
int CHMSThietLap_Mien_Thuoc_ungthu::OnSaveCHMSThietLap_Mien_Thuoc_ungthu()
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
		szSQL = PASS_DRUGCANCER_CHECK_LIST_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE PHPO_ORDERID=%ld "), m_nOrderID); 
 		szSQL = PASS_DRUGCANCER_CHECK_LIST_Tbl.GetUpdateSQL(_T("PHPO_ORDERID")); 
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
int CHMSThietLap_Mien_Thuoc_ungthu::OnCancelCHMSThietLap_Mien_Thuoc_ungthu()
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
int CHMSThietLap_Mien_Thuoc_ungthu::OnCHMSThietLap_Mien_Thuoc_ungthuListLoadData(){
	return 0;
}
void CHMSThietLap_Mien_Thuoc_ungthu::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
