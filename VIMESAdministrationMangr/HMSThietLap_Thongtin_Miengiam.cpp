#include "HMSThietLap_Thongtin_Miengiam.h"
#include "MainFrm.h"
static void _OnSearchByNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnSearchByNameChange();
}
/*static void _OnSearchByNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnSearchByNameSetfocus();} */ 
/*static void _OnSearchByNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnSearchByNameKillfocus();
} */
static int _OnSearchByNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnSearchByNameCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnNameCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSThietLap_Thongtin_Miengiam* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnGroupAddNew();
}*/
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSThietLap_Thongtin_Miengiam* )pWnd)->OnItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemSelendokFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnItemSelendok();
}
/*static void _OnItemSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnItemKillfocus();
}*/
/*static void _OnItemKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnItemKillfocus();
}*/
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnItemLoadData();
}
/*static void _OnItemAddNewFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnItemAddNew();
}*/
/*static void _OnDiscountPercentageChangeFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnDiscountPercentageChange();
} */
/*static void _OnDiscountPercentageSetfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnDiscountPercentageSetfocus();} */ 
/*static void _OnDiscountPercentageKillfocusFnc(CWnd *pWnd){
	((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnDiscountPercentageKillfocus();
} */
static int _OnDiscountPercentageCheckValueFnc(CWnd *pWnd){
	return ((CHMSThietLap_Thongtin_Miengiam *)pWnd)->OnDiscountPercentageCheckValue();
} 
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnActiveSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Miengiam *pVw = (CHMSThietLap_Thongtin_Miengiam *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Miengiam *pVw = (CHMSThietLap_Thongtin_Miengiam *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Miengiam *pVw = (CHMSThietLap_Thongtin_Miengiam *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Miengiam *pVw = (CHMSThietLap_Thongtin_Miengiam *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Miengiam *pVw = (CHMSThietLap_Thongtin_Miengiam *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSThietLap_Thongtin_Miengiam *pVw = (CHMSThietLap_Thongtin_Miengiam *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSThietLap_Thongtin_MiengiamFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnAddCHMSThietLap_Thongtin_Miengiam();
} 
static int _OnEditCHMSThietLap_Thongtin_MiengiamFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnEditCHMSThietLap_Thongtin_Miengiam();
} 
static int _OnDeleteCHMSThietLap_Thongtin_MiengiamFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnDeleteCHMSThietLap_Thongtin_Miengiam();
} 
static int _OnSaveCHMSThietLap_Thongtin_MiengiamFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnSaveCHMSThietLap_Thongtin_Miengiam();
} 
static int _OnCancelCHMSThietLap_Thongtin_MiengiamFnc(CWnd *pWnd){
	 return ((CHMSThietLap_Thongtin_Miengiam*)pWnd)->OnCancelCHMSThietLap_Thongtin_Miengiam();
} 
CHMSThietLap_Thongtin_Miengiam::CHMSThietLap_Thongtin_Miengiam(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSThietLap_Thongtin_Miengiam::~CHMSThietLap_Thongtin_Miengiam()
{
}
void CHMSThietLap_Thongtin_Miengiam::OnCreateComponents(){
	m_wndItemInformation.Create(this, _T("Thông tin miễn giảm"), 5, 5, 759, 476);
	m_wndSearchByNameLabel.Create(this, _T("Search By Name"), 10, 30, 90, 55);
	m_wndSearchByName.Create(this,95, 30, 759, 55); 
	m_wndList.Create(this,10, 60, 759, 350); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 355, 90, 380);
	m_wndID.Create(this,95, 355, 217, 380); 
	m_wndNameLabel.Create(this, _T("Name"), 223, 355, 303, 380);
	m_wndName.Create(this,309, 355, 759, 380); 
	m_wndGroupLabel.Create(this, _T("Group Label"), 10, 385, 90, 410);
	m_wndGroup.Create(this,95, 385, 759, 410); 
	m_wndItemLabel.Create(this, _T("Item Label"), 10, 414, 90, 439);
	m_wndItem.Create(this,95, 415, 759, 440); 
	m_wndDiscountLabel.Create(this, _T("Discount Label"), 10, 445, 90, 470);
	m_wndDiscountPercentage.Create(this,95, 445, 175, 470); 
	m_wndActive.Create(this, _T("Active"), 10, 482, 175, 507);
	m_wndAdd.Create(this, _T("&Add"), 254, 482, 334, 507);
	m_wndEdit.Create(this, _T("&Edit"), 339, 482, 419, 507);
	m_wndDelete.Create(this, _T("&Delete"), 424, 482, 504, 507);
	m_wndSave.Create(this, _T("&Save"), 509, 482, 589, 507);
	m_wndCancel.Create(this, _T("&Cancel"), 594, 482, 674, 507);
	m_wndClose.Create(this, _T("&Close"), 679, 482, 759, 507);
	
}
void CHMSThietLap_Thongtin_Miengiam::OnInitializeComponents(){
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
	m_wndDiscountPercentage.SetLimitText(16);
	m_wndDiscountPercentage.SetCheckValue(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndList.InsertColumn(2, _T("% Miễn Giảm"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(3, _T("Active"), CFMT_TEXT, 100);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);

	m_wndItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 600);
	m_wndItem.InsertColumn(2, _T("ApplyDate"), CFMT_DATE, 120);
	m_wndItem.InsertColumn(3, _T("Giá DV"), CFMT_MONEY, 120);


	M_DISCOUNT_FEE_LIST_Tbl.SetTableName(_T("M_DISCOUNT_FEE_LIST"));
	M_DISCOUNT_FEE_LIST_Tbl.AddField(_T("DC_CODE"), dfText, 12);
	M_DISCOUNT_FEE_LIST_Tbl.AddField(_T("DC_NAME"), dfText, 256); 
	M_DISCOUNT_FEE_LIST_Tbl.AddField(_T("DC_PERCENTAGE"), dfInteger, 81);
	M_DISCOUNT_FEE_LIST_Tbl.AddField(_T("DC_ISACTIVE"), dfText, 1);

}
void CHMSThietLap_Thongtin_Miengiam::OnSetWindowEvents(){
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
void CHMSThietLap_Thongtin_Miengiam::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndSearchByName.GetDlgCtrlID(), m_szSearchByName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndItem.GetDlgCtrlID(), m_szItemKey);
	DDX_Text(pDX, m_wndDiscountPercentage.GetDlgCtrlID(), m_nDiscountPercentage);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
}
void CHMSThietLap_Thongtin_Miengiam::UpdateJson(BOOL bSave){
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
void CHMSThietLap_Thongtin_Miengiam::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM M_DISCOUNT_FEE_LIST LEFT JOIN hms_fee_list ON (dc_code=hfl_feeid) WHERE DC_CODE='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("DC_CODE"), m_szID);
		rs.GetValue(_T("DC_NAME"), m_szName);		
		rs.GetValue(_T("hfl_groupid"), m_szGroupKey);
		rs.GetValue(_T("hfl_feeid"), m_szItemKey);
		rs.GetValue(_T("DC_PERCENTAGE"), m_nDiscountPercentage);			
		rs.GetValue(_T("DC_ISACTIVE"), tmpStr);
		m_bActive = tmpStr==_T("Y")?true:false;		
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CHMSThietLap_Thongtin_Miengiam::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	M_DISCOUNT_FEE_LIST_Tbl.SetValue(_T("DC_CODE"), m_szItemKey);
	M_DISCOUNT_FEE_LIST_Tbl.SetValue(_T("DC_NAME"), m_wndItem.GetCurrent(1));
	M_DISCOUNT_FEE_LIST_Tbl.SetValue(_T("DC_PERCENTAGE"), m_nDiscountPercentage);	
	M_DISCOUNT_FEE_LIST_Tbl.SetValue(_T("DC_ISACTIVE"),  m_bActive?_T("Y"):_T("N"));	

}
void CHMSThietLap_Thongtin_Miengiam::SetDefaultValues(){

	m_szSearchByName.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szGroupKey.Empty();
	m_szItemKey.Empty();
	m_nDiscountPercentage=0;
	m_bActive=FALSE;

}
int CHMSThietLap_Thongtin_Miengiam::SetMode(int nMode)
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
void CHMSThietLap_Thongtin_Miengiam::OnSearchByNameChange()
{
	UpdateData(TRUE);
	OnListLoadData();
}
/*void CHMSThietLap_Thongtin_Miengiam::OnSearchByNameSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnSearchByNameKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Miengiam::OnSearchByNameCheckValue()
{
	UpdateData(TRUE);
	OnListLoadData();
	return 0;
} 
void CHMSThietLap_Thongtin_Miengiam::OnListDblClick()
{
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nIndex = nNewItem;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	
} 
int CHMSThietLap_Thongtin_Miengiam::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSThietLap_Thongtin_Miengiam::OnListLoadData()
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
		szWhere.Format(_T(" AND lower(DC_NAME) LIKE lower('%s%s%s') "),
			           _T("%"), m_szSearchByName, _T("%"));
	}

	szSQL.Format(_T("SELECT DC_CODE AS ID, DC_NAME AS Name, DC_PERCENTAGE AS Percentage,DC_ISACTIVE as Active ")\
			     _T("FROM M_DISCOUNT_FEE_LIST ")\
				 _T("WHERE 1=1 %s "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{ 
		int nItem = m_wndList.AddItems
			(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")),
			rs.GetValue(_T("Percentage")),	
			rs.GetValue(_T("Active")),NULL);

		rs.GetValue(_T("Active"),szActive);		
		if (szActive == _T("N"))
		{
		m_wndList.SetSubItemBkColor(nItem, 5, RGB(255, 127, 36), FALSE);
		m_wndList.SetSubItemTextColor(nItem, 5, RGB(255, 255, 255), FALSE);
		}
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;

}
/*void CHMSThietLap_Thongtin_Miengiam::OnIDChange(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnIDSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnIDKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Miengiam::OnIDCheckValue(){
	return 0;
} 
/*void CHMSThietLap_Thongtin_Miengiam::OnNameChange(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnNameSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnNameKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Miengiam::OnNameCheckValue(){
	return 0;
} 
void CHMSThietLap_Thongtin_Miengiam::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnGroupSelendok(){
	 
}
/*void CHMSThietLap_Thongtin_Miengiam::OnGroupSetfocus(){
	
}*/
/*void CHMSThietLap_Thongtin_Miengiam::OnGroupKillfocus(){
	
}*/
long CHMSThietLap_Thongtin_Miengiam::OnGroupLoadData()
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
/*void CHMSThietLap_Thongtin_Miengiam::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSThietLap_Thongtin_Miengiam::OnItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnItemSelendok(){
	 
}
/*void CHMSThietLap_Thongtin_Miengiam::OnItemSetfocus(){
	
}*/
/*void CHMSThietLap_Thongtin_Miengiam::OnItemKillfocus(){
	
}*/
long CHMSThietLap_Thongtin_Miengiam::OnItemLoadData()
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
	szWhere.AppendFormat(_T(" AND hfl_feeid NOT IN (select dc_code from M_DISCOUNT_FEE_LIST)"));
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
/*void CHMSThietLap_Thongtin_Miengiam::OnItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnDiscountPercentageChange(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnDiscountPercentageSetfocus(){
	
} */
/*void CHMSThietLap_Thongtin_Miengiam::OnDiscountPercentageKillfocus(){
	
} */
int CHMSThietLap_Thongtin_Miengiam::OnDiscountPercentageCheckValue(){
	return 0;
} 
	void CHMSThietLap_Thongtin_Miengiam::OnActiveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSThietLap_Thongtin_Miengiam::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddCHMSThietLap_Thongtin_Miengiam();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditCHMSThietLap_Thongtin_Miengiam();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteCHMSThietLap_Thongtin_Miengiam();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSThietLap_Thongtin_Miengiam();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelCHMSThietLap_Thongtin_Miengiam();
	
} 
void CHMSThietLap_Thongtin_Miengiam::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSThietLap_Thongtin_Miengiam::OnAddCHMSThietLap_Thongtin_Miengiam()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSThietLap_Thongtin_Miengiam::OnEditCHMSThietLap_Thongtin_Miengiam(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSThietLap_Thongtin_Miengiam::OnDeleteCHMSThietLap_Thongtin_Miengiam(){
 	if(GetMode() != VM_VIEW) 
 		return -1;
	m_nIndex = m_wndList.GetCurSel();
	if (m_nIndex < 0)
		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM M_DISCOUNT_FEE_LIST WHERE DC_CODE='%s'"), m_szID); 
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
int CHMSThietLap_Thongtin_Miengiam::OnSaveCHMSThietLap_Thongtin_Miengiam()
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
		szSQL = M_DISCOUNT_FEE_LIST_Tbl.GetInsertSQL();
		bAdd = true;
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE DC_CODE='%s' "), m_szItemKey); 
 		szSQL = M_DISCOUNT_FEE_LIST_Tbl.GetUpdateSQL(_T("DC_CODE")); 
 		szSQL += szWhere; 
 	} 
	//_msg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSThietLap_Thongtin_VaccineListLoadData(); 
 		//SetMode(VM_VIEW);
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
int CHMSThietLap_Thongtin_Miengiam::OnCancelCHMSThietLap_Thongtin_Miengiam()
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
int CHMSThietLap_Thongtin_Miengiam::OnCHMSThietLap_Thongtin_MiengiamListLoadData(){
	return 0;
}
void CHMSThietLap_Thongtin_Miengiam::SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex)
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
