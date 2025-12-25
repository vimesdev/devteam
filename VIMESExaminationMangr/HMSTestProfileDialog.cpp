#include "HMSTestProfileDialog.h"
#include "HMSMainFrame.h"
#include "HMSGroupProfileDialog.h"

static long _OnProfileListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog*)pWnd)->OnProfileListLoadData();
} 
static void _OnProfileListDblClickFnc(CWnd *pWnd){
	((CHMSTestProfileDialog*)pWnd)->OnProfileListDblClick();
} 
static void _OnProfileListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestProfileDialog*)pWnd)->OnProfileListSelectChange(nOldItem, nNewItem);
}
static int _OnProfileListAddItemFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnProfileListAddItem();
}
static int _OnProfileListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnProfileListDeleteItem();
} 
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CHMSTestProfileDialog*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTestProfileDialog*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnItemListDeleteItem();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTestProfileDialog* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnGroupAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTestProfileDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnNameAddNew();
}*/
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CHMSTestProfileDialog *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTestProfileDialog *)pWnd)->OnQtyCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTestProfileDialog *pVw = (CHMSTestProfileDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnAddHMSTestProfileDialog();
} 
static int _OnEditHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnEditHMSTestProfileDialog();
} 
static int _OnDeleteHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnDeleteHMSTestProfileDialog();
} 
static int _OnSaveHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnSaveHMSTestProfileDialog();
} 
static int _OnCancelHMSTestProfileDialogFnc(CWnd *pWnd){
	 return ((CHMSTestProfileDialog*)pWnd)->OnCancelHMSTestProfileDialog();
} 
CHMSTestProfileDialog::CHMSTestProfileDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
	m_szProfileID.Empty();
	m_szGroupKey.Empty();
}
CHMSTestProfileDialog::~CHMSTestProfileDialog(){
}
void CHMSTestProfileDialog::OnCreateComponents(){
	m_wndTestProfiles.Create(this, _T("Test Profiles"), 5, 5, 960, 570);
	m_wndProfileList.Create(this,10, 30, 350, 565); 
	m_wndItemList.Create(this,355, 30, 955, 505); 
	m_wndGroupLabel.Create(this, _T("Group"), 355, 510, 435, 535);
	m_wndGroup.Create(this,440, 510, 955, 535); 

	m_wndNameLabel.Create(this, _T("Name"), 355, 540, 435, 565);
	m_wndName.Create(this,440, 540, 845, 565); 
	m_wndQtyLabel.Create(this, _T("Qty"), 850, 540, 900, 565);
	m_wndQty.Create(this,905, 540, 955, 565); 
	m_wndAdd.Create(this, _T("&Add"), 540, 575, 620, 600);
	m_wndDelete.Create(this, _T("&Delete"), 625, 575, 705, 600);
	m_wndSave.Create(this, _T("&Save"), 710, 575, 790, 600);
	m_wndCancel.Create(this, _T("&Cancel"), 795, 575, 875, 600);
	m_wndClose.Create(this, _T("&Close"), 880, 575, 960, 600);



}
void CHMSTestProfileDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);
	m_wndQty.SetLimitText(3);
	m_wndQty.SetCheckValue(true);

	m_wndItemList.InsertColumn(0, _T("Index"), CFMT_TEXT, 40);
	m_wndItemList.InsertColumn(1, _T("Name"), CFMT_TEXT, 320);
	m_wndItemList.InsertColumn(2, _T("Unit Price"), CFMT_MONEY, 85);
	m_wndItemList.InsertColumn(3, _T("Ins Price"), CFMT_MONEY, 85);
	m_wndItemList.InsertColumn(4, _T("itemid"), CFMT_TEXT, 0);
	m_wndItemList.InsertColumn(5, _T("Qty"), CFMT_NUMBER, 40);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 450);


	m_wndProfileList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProfileList.InsertColumn(1, _T("Group Name"), CFMT_TEXT, 280);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndName.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndName.InsertColumn(2, _T("Serv Price"), CFMT_MONEY, 85);
	m_wndName.InsertColumn(3, _T("Ins Price"), CFMT_MONEY, 85);

	m_hms_testprofileTbl.SetTableName(_T("hms_testprofile"));
	m_hms_testprofileTbl.AddField(_T("htp_profileid"), dfText, 15);
	m_hms_testprofileTbl.AddField(_T("htp_itemid"), dfText, 15);
	m_hms_testprofileTbl.AddField(_T("htp_qty"), dfInteger);

}
void CHMSTestProfileDialog::OnSetWindowEvents()
{
	m_wndProfileList.SetEvent(WE_SELCHANGE, _OnProfileListSelectChangeFnc);
	m_wndProfileList.SetEvent(WE_LOADDATA, _OnProfileListLoadDataFnc);
	m_wndProfileList.SetEvent(WE_DBLCLICK, _OnProfileListDblClickFnc);
	m_wndProfileList.SetWindowText(_T("Profiles"));
	m_wndProfileList.AddEvent(1, _T("Add Group"), _OnProfileListAddItemFnc);
	m_wndProfileList.AddEvent(0, _T("-"), NULL);
	m_wndProfileList.AddEvent(2, _T("Delete Group"), _OnProfileListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	
	m_wndItemList.SetWindowText(_T("Items"));
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_VIEW);
	OnProfileListLoadData();
}
void CHMSTestProfileDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);

}
void CHMSTestProfileDialog::GetDataToScreen()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTestProfileDialog::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_hms_testprofileTbl.SetValue(_T("htp_profileid"), m_szProfileID);
	m_hms_testprofileTbl.SetValue(_T("htp_itemid"), m_szNameKey);
	m_hms_testprofileTbl.SetValue(_T("htp_qty"), m_nQty);

}
void CHMSTestProfileDialog::SetDefaultValues(){
	m_szNameKey.Empty();
	m_nQty = 1;

}
int CHMSTestProfileDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 2, 3, 4, -1);
 			SetDefaultValues();
 			break; 
 		case VM_EDIT:
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 4, -1);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 10, 4, -1);
 			SetDefaultValues();
 			break;
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSTestProfileDialog::OnProfileListDblClick()
{	
} 
void CHMSTestProfileDialog::OnProfileListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	if(nNewItem >= 0)
	{
		m_szProfileID = m_wndProfileList.GetItemText(nNewItem, 0);
		OnItemListLoadData();

		szSQL.Format(_T("SELECT Count(*) FROM sys_sel ")\
					_T("WHERE ss_id='hms_testprofile' ")\
					_T("AND ss_code='%s' AND ss_default='%s'"),
					m_szProfileID, pMF->GetCurrentUser());
		rs.ExecSQL(szSQL);

		if (rs.GetIntValue() > 0)
		{
			SetMode(VM_VIEW);
			m_wndProfileList.SetMenuState(2, TRUE);
			m_wndItemList.SetMenuState(1, TRUE);
		}
		else
		{
			SetMode(VM_NONE);
			m_wndProfileList.SetMenuState(2, FALSE);
			m_wndItemList.SetMenuState(1, FALSE);
		}
	}

}

int CHMSTestProfileDialog::OnProfileListAddItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CHMSGroupProfileDialog dlg(this);
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
		OnProfileListLoadData();
	}
	 return 0;
}
int CHMSTestProfileDialog::OnProfileListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	int nSel = m_wndProfileList.GetCurSel();
	if (nSel < 0)
		return -1;
	CString szSQL;
	CString szProfileID;
	szProfileID = m_wndProfileList.GetItemText(nSel, 0);

	pMF->BeginTransaction();
	szSQL.Format(_T("DELETE FROM hms_testprofile WHERE htp_profileid='%s'"), szProfileID);
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0)
	{
		szSQL.Format(_T("DELETE FROM sys_sel WHERE ss_id='hms_testprofile' AND ss_code='%s'"), szProfileID);
		pMF->ExecSQL(szSQL);
		pMF->Commit();
		OnProfileListLoadData();
		if (m_wndProfileList.GetItemCount() > 0)
			m_wndProfileList.SetCurSel(m_wndProfileList.GetItemCount() - 1);
	}
	else
	{
		ShowMessageBox(_T("Error when executing"), MB_ICONERROR | MB_OK);
		pMF->Rollback();
	}
	return 0;
} 
long CHMSTestProfileDialog::OnProfileListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndProfileList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ")\
				 _T("FROM sys_sel ")\
				 _T("WHERE ss_id='hms_testprofile' ")\
				 _T("AND (ss_default is null OR ss_default IN('%s','admin'))")\
				 _T("ORDER BY ss_code "), pMF->GetCurrentUser());

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProfileList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	m_wndProfileList.EndLoad(); 
	return nCount;
}
void CHMSTestProfileDialog::OnItemListDblClick()
{	
} 
void CHMSTestProfileDialog::OnItemListSelectChange(int nOldItem, int nNewItem)
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if (nNewItem >= 0)
	{
		szSQL.Format(_T("SELECT Count(*) FROM sys_sel ")\
					_T("WHERE ss_id='hms_testprofile' ")\
					_T("AND ss_code='%s' AND ss_default='%s'"),
					m_szProfileID, pMF->GetCurrentUser());
		rs.ExecSQL(szSQL);

		if (rs.GetIntValue() > 0)
			m_wndDelete.EnableWindow(TRUE);
		else
			m_wndDelete.EnableWindow(FALSE);
	}
} 

int CHMSTestProfileDialog::OnItemListDeleteItem()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSTestProfileDialog();
	return 0;
} 
long CHMSTestProfileDialog::OnItemListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	
	int nCount = 0;
	szSQL.Format(_T(" SELECT hfl_groupid, hfl_feeid as testid,") \
				_T(" 	hfl_name as name,") \
				_T(" 	hfl_unit as unit,") \
				_T(" 	hfl_servprice as servprice,") \
				_T(" 	hfl_insprice as insprice, coalesce(htp_qty, 1) as qty ") \
				_T(" FROM hms_testprofile") \
				_T(" LEFT JOIN hms_fee_list ON(hfl_feeid=htp_itemid)") \
				_T(" WHERE htp_profileid='%s' and hfl_active ='Y' ORDER BY hfl_groupid, hfl_line, hfl_name "), m_szProfileID);
	
	CString tmpStr;
	CString szGroup, szOldGroup;
	
	int nIndex=1;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		szGroup = rs.GetValue(_T("hfl_groupid"));
		if(szGroup != szOldGroup){
			szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='%s' "), szGroup);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
				rs2.GetValue(_T("hfg_name"), tmpStr);
			else
				tmpStr.Empty();

			szOldGroup = szGroup;
			int nItem = m_wndItemList.AddItems(
			_T(""),
			tmpStr,
			szGroup,
			szGroup,
			NULL);
			m_wndItemList.SetItemBkColor(nItem, RGB(240, 240, 240));
			m_wndItemList.SetItemTextColor(nItem, RGB(0, 0, 255));

		}
		else
		{
			nIndex++;
		}
		tmpStr.Format(_T("%d"), nIndex);
		m_wndItemList.AddItems(
			tmpStr, 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("servPrice")), 
			rs.GetValue(_T("InsPrice")), 
			rs.GetValue(_T("testid")), 
			rs.GetValue(_T("qty")), 
			NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;

}
void CHMSTestProfileDialog::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnGroupSelendok(){
	 
}
/*void CHMSTestProfileDialog::OnGroupSetfocus(){
	
}*/
/*void CHMSTestProfileDialog::OnGroupKillfocus(){
	
}*/
long CHMSTestProfileDialog::OnGroupLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty())
	{
		szWhere.Format(_T(" and hfg_id='%s' "), m_szGroupKey);
	}
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group ") \
		_T("WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active ='Y'  %s ORDER BY hfg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTestProfileDialog::OnGroupAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

void CHMSTestProfileDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTestProfileDialog::OnNameSelendok(){
	 
}
/*void CHMSTestProfileDialog::OnNameSetfocus(){
	
}*/
/*void CHMSTestProfileDialog::OnNameKillfocus(){
	
}*/
long CHMSTestProfileDialog::OnNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(true);

	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty())
	{
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szNameKey);
	}
	m_wndName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, ")\
		         _T("hfl_name as name, ")\
				 _T("hfl_servprice as servprice, ")\
				 _T("hfl_insprice as insprice ") \
				 _T("FROM hms_fee_list ")\
				 _T("WHERE hfl_active = 'Y' and hfl_groupid='%s' and hfl_feeid not in(select htp_itemid from hms_testprofile where htp_profileid='%s') ")\
				 _T("%s ORDER BY hfl_feeid"), 
				 m_szGroupKey, m_szProfileID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTestProfileDialog::OnNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */

/*void CHMSTestProfileDialog::OnQtyChange(){
	
} */
/*void CHMSTestProfileDialog::OnQtySetfocus(){
	
} */
/*void CHMSTestProfileDialog::OnQtyKillfocus(){
	
} */
int CHMSTestProfileDialog::OnQtyCheckValue(){
	if(m_nQty < 1 )
		return -1;
	return 0;
} 
void CHMSTestProfileDialog::OnAddSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnAddHMSTestProfileDialog();
} 
void CHMSTestProfileDialog::OnDeleteSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnDeleteHMSTestProfileDialog();
} 
void CHMSTestProfileDialog::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSTestProfileDialog();
} 
void CHMSTestProfileDialog::OnCancelSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancelHMSTestProfileDialog();
} 
void CHMSTestProfileDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();

} 
int CHMSTestProfileDialog::OnAddHMSTestProfileDialog(){
	if(m_szProfileID.IsEmpty())
		return -1;

 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	m_wndGroup.SetFocus();
	return 0; 
}
int CHMSTestProfileDialog::OnEditHMSTestProfileDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTestProfileDialog::OnDeleteHMSTestProfileDialog()
{
 	/*if(GetMode() != VM_VIEW) 
	{
 		return -1;
	}*/
	if (!m_wndDelete.IsWindowEnabled())
		return -1;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	int nSel;

	nSel = m_wndItemList.GetCurSel();
	if (nSel < 0)
		return -1;

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	CString szItemID;
	szItemID = m_wndItemList.GetItemText(nSel, 4);

 	szSQL.Format(_T("DELETE FROM hms_testprofile WHERE htp_itemid='%s' "), szItemID ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		OnItemListLoadData();
 		
 	}
	return 0;
}
int CHMSTestProfileDialog::OnSaveHMSTestProfileDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_testprofileTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		OnItemListLoadData();
		m_szNameKey.Empty();
		SetMode(VM_ADD);
		m_wndName.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSTestProfileDialog::OnCancelHMSTestProfileDialog()
{
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM sys_sel ")\
				_T("WHERE ss_id='hms_testprofile' ")\
				_T("AND ss_code='%s' AND ss_default='%s'"),
				m_szProfileID, pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);

 	if(rs.GetIntValue() > 0) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	
 	return 0;
} 
int CHMSTestProfileDialog::OnHMSTestProfileDialogListLoadData(){
	return 0;
}
