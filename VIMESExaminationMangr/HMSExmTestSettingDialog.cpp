#include "HMSExmTestSettingDialog.h"
#include "MainFrm.h"
static long _OnTestLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog*)pWnd)->OnTestLoadData();
} 
static void _OnTestDblClickFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog*)pWnd)->OnTestDblClick();
} 
static void _OnTestSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExmTestSettingDialog*)pWnd)->OnTestSelectChange(nOldItem, nNewItem);
} 
static int _OnTestDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnTestDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExmTestSettingDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExmTestSettingDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnTypeAddNew();
}*/
static void _OnNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExmTestSettingDialog* )pWnd)->OnNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNameSelendokFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameSelendok();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameKillfocus();
}*/
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameKillfocus();
}*/
static long _OnNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSExmTestSettingDialog *)pWnd)->OnNameLoadData();
}
/*static void _OnNameAddNewFnc(CWnd *pWnd){
	((CHMSExmTestSettingDialog *)pWnd)->OnNameAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExmTestSettingDialog *pVw = (CHMSExmTestSettingDialog *)pWnd;
	pVw->OnAddSelect();
} 
static int _OnAddHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnAddHMSExmTestSettingDialog();
} 
static int _OnEditHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnEditHMSExmTestSettingDialog();
} 
static int _OnDeleteHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnDeleteHMSExmTestSettingDialog();
} 
static int _OnSaveHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnSaveHMSExmTestSettingDialog();
} 
static int _OnCancelHMSExmTestSettingDialogFnc(CWnd *pWnd){
	 return ((CHMSExmTestSettingDialog*)pWnd)->OnCancelHMSExmTestSettingDialog();
} 
CHMSExmTestSettingDialog::CHMSExmTestSettingDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 545;
	SetDefaultValues();
	m_szTypeKey.Empty();
}
CHMSExmTestSettingDialog::~CHMSExmTestSettingDialog(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	pMF->m_szObject = m_szObject;
}
void CHMSExmTestSettingDialog::OnCreateComponents(){
	m_wndTest.Create(this,191, 5, 801, 505); 
	m_wndList.Create(this,6, 5, 186, 506); 
	m_wndTypeLabel.Create(this, _T("Type"), 5, 510, 45, 535);
	m_wndType.Create(this,50, 510, 185, 535); 
	m_wndNameLabel.Create(this, _T("Name"), 190, 510, 270, 535);
	m_wndName.Create(this,275, 510, 715, 535); 
	m_wndAdd.Create(this, _T("&Add"), 720, 510, 800, 535);

}
void CHMSExmTestSettingDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szObject = pMF->m_szObject;
	pMF->m_szObject = _T("7");
	pMF->m_szAdmitDate = pMF->GetSysDate();

	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndName.LimitText(35);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 160);

	m_wndTest.InsertColumn(0, _T(""), CFMT_TEXT, 0);//ID
	m_wndTest.InsertColumn(1, _T("Idx"), CFMT_TEXT, 50);
	m_wndTest.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndTest.InsertColumn(3, _T("CSBT Nam"), CFMT_TEXT, 90);
	m_wndTest.InsertColumn(4, _T("CSBT Nữ"), CFMT_TEXT, 90);
	m_wndTest.InsertColumn(5, _T(""), CFMT_TEXT, 0);
	m_wndTest.InsertColumn(6, _T(""), CFMT_TEXT, 0);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);


	m_wndName.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndName.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndName.InsertColumn(2, _T(""), CFMT_TEXT, 0); //subitem

}
void CHMSExmTestSettingDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTest.SetEvent(WE_SELCHANGE, _OnTestSelectChangeFnc);
	m_wndTest.SetEvent(WE_LOADDATA, _OnTestLoadDataFnc);
	m_wndTest.SetEvent(WE_DBLCLICK, _OnTestDblClickFnc);
	m_wndTest.AddEvent(1, _T("Delete"), _OnTestDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndName.SetEvent(WE_SELENDOK, _OnNameSelendokFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_SELCHANGE, _OnNameSelectChangeFnc);
	m_wndName.SetEvent(WE_LOADDATA, _OnNameLoadDataFnc);
	//m_wndName.SetEvent(WE_ADDNEW, _OnNameAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	OnListLoadData();
	SetMode(VM_ADD);

}
void CHMSExmTestSettingDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndName.GetDlgCtrlID(), m_szNameKey);

}
void CHMSExmTestSettingDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Name")] =  m_szNameKey;
	}
	else
	{
			
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Name")].GetValue(m_szNameKey);
	}

}
void CHMSExmTestSettingDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSExmTestSettingDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSExmTestSettingDialog::SetDefaultValues(){

	
	m_szNameKey.Empty();

}
int CHMSExmTestSettingDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
			m_wndName.SetFocus();
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

#include "HMSSelectionListDialog.h"
void CHMSExmTestSettingDialog::OnTestDblClick(){
	int nSel = m_wndTest.GetCurSel();
	if(nSel < 0)
		return;
	CString szItemId = m_wndTest.GetItemText(nSel, 0);
	CString szSubItem = m_wndTest.GetItemText(nSel, 5);
	if(szSubItem != _T("Y"))
		return;

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CString szSQL;
	CString tmpStr;
	CString szGroup = m_wndTest.GetItemText(nSel, 6);
	CHMSSelectionListDialog dlg(this);
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name FROM hms_fee_list WHERE hfl_groupid='%s' and hfl_subitem='%s' "), 
		szGroup, szItemId);

	dlg.m_szSQL = szSQL;
	

	if(dlg.DoModal() == IDOK)
	{

		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("id"), tmpStr);
			szSQL.Format(_T("DELETE FROM hms_exm_testref WHERE typeid='%s' and itemid='%s' "),
				m_szExmType, tmpStr);
			pMF->ExecSQL(szSQL);
			rs.MoveNext();
		}
		//		INSERT INTO hms_exm_testref(createdby, itemid, typeid) values('%s','%s','%s')
		for (int i =0;i < dlg.GetSelectionCount(); i++)
		{
			CHMSSelectionListDialog::SELITEM item = dlg.GetSelectionAt(i);
			szSQL.Format(_T("INSERT INTO hms_exm_testref(createdby, itemid, typeid) values('%s','%s','%s')"),
				pMF->GetCurrentUser(), item.szID, m_szExmType);
			pMF->ExecSQL(szSQL);

		}
		OnTestLoadData();

	}
} 
void CHMSExmTestSettingDialog::OnTestSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSExmTestSettingDialog::OnTestDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndTest.GetCurSel();
	if(nSel < 0)
		return 0;

	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa đề mục không?(Y/N)"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	
	CString szItemId = m_wndTest.GetItemText(nSel, 0);
	CString szSubItem = m_wndTest.GetItemText(nSel, 5);
	CString szGroup = m_wndTest.GetItemText(nSel, 6);
	szSQL.Format(_T("DELETE FROM hms_exm_testref WHERE typeid='%s' and itemid='%s' and createdby='%s' "),
		m_szExmType, szItemId, pMF->GetCurrentUser());
	ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		if(szSubItem == _T("Y"))
		{
			CRecord rs(&pMF->m_db);
			szSQL.Format(_T("SELECT hfl_feeid FROM hms_fee_list WHERE hfl_groupid='%s' and hfl_subitem='%s' "),
				szGroup, szItemId);
			rs.ExecSQL(szSQL);
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("hfl_feeid"), szItemId);
				szSQL.Format(_T("DELETE FROM hms_exm_testref WHERE typeid='%s' and itemid='%s' "),
				m_szExmType, szItemId);
				pMF->ExecSQL(szSQL);

				rs.MoveNext();
			}

		}
		OnTestLoadData();
		m_wndTest.SetCurSel(nSel);
	}
	else
	{
		ShowMessageBox(_T("Không xóa được đề mục"));
	}
	return 0;
} 
long CHMSExmTestSettingDialog::OnTestLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTest.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT itemid,") \
_T("   hfl_name AS item_name,") \
_T("   hfl_index1 as index1,") \
_T("   hfl_index2 as index2,") \
_T("   hfl_groupid, hfg_name, hfl_subitem as subitem ") \
_T(" FROM HMS_EXM_TESTREF,") \
_T("   hms_fee_list, hms_fee_group ") \
_T(" WHERE typeid='%s'") \
_T(" AND itemid  = hfl_feeid and hfl_groupid =hfg_id ") \
_T(" order by hfl_groupid, hfl_line"), m_szExmType);
	nCount = rs.ExecSQL(szSQL);
	CString szOldGroup, szNewGroup;
	szOldGroup.Empty();
	CString tmpStr;
	int nItem;
	int nIndex = 0;
	CString szItemId;
	CString szSubItem;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("hfl_groupid"), szNewGroup);
		rs.GetValue(_T("itemid"), szItemId);
		rs.GetValue(_T("hfl_subitem"), szSubItem);
		if(szNewGroup != szOldGroup)
		{
			rs.GetValue(_T("hfg_name"), tmpStr);
			nItem = m_wndTest.AddItems(
				_T(""),
				_T("*"),
			tmpStr,			
			NULL);
			m_wndTest.SetItemBkColor(nItem, RGB(0, 128, 192));
			m_wndTest.SetItemTextColor(nItem, COLOR_WHITE);
			m_wndTest.MergeCell(nItem, 1, nItem, 4);
			szOldGroup = szNewGroup;
			nIndex = 0;
		}
		tmpStr.Format(_T("%d"), ++nIndex);
		m_wndTest.AddItems(
			szItemId,
			tmpStr,
			rs.GetValue(_T("item_name")),
			rs.GetValue(_T("index1")),
			rs.GetValue(_T("index2")),
			rs.GetValue(_T("subitem")),
			szNewGroup,
			NULL);

		if(szSubItem == _T("Y"))
		{

		}
		rs.MoveNext();
	}
	m_wndTest.EndLoad(); 
	return nCount;
	return 0;
}
void CHMSExmTestSettingDialog::OnListDblClick(){
	
} 
void CHMSExmTestSettingDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;
	m_szExmType = m_wndList.GetItemText(nNewItem, 0);
	OnTestLoadData();
} 
int CHMSExmTestSettingDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSExmTestSettingDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='HMS_HEALTHEXAM_SHEETS' %s ORDER BY ss_index, id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			_T("I"),
			NULL);
		rs.MoveNext();
	}

	return 0;
}
void CHMSExmTestSettingDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExmTestSettingDialog::OnTypeSelendok(){
	 
}
/*void CHMSExmTestSettingDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSExmTestSettingDialog::OnTypeKillfocus(){
	
}*/
long CHMSExmTestSettingDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
szSQL.Format(_T(" SELECT hfg_id,") \
_T("   hfg_name") \
_T(" FROM hms_fee_group") \
_T(" WHERE hfg_type_id IN(200, 300, 400)") \
_T(" AND hfg_level      > 0") \
_T(" ORDER BY hfg_index "));
	int nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("hfg_id")),
			rs.GetValue(_T("hfg_name")),
			NULL);
		rs.MoveNext();
	}
	
	return 0;
}
/*void CHMSExmTestSettingDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExmTestSettingDialog::OnNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExmTestSettingDialog::OnNameSelendok(){
	 
}
/*void CHMSExmTestSettingDialog::OnNameSetfocus(){
	
}*/
/*void CHMSExmTestSettingDialog::OnNameKillfocus(){
	
}*/
long CHMSExmTestSettingDialog::OnNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndName.IsSearchKey() && !m_szNameKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szNameKey);
	};
	m_wndName.DeleteAllItems(); 
	int nCount = 0;

	szWhere.AppendFormat(_T("AND hfl_active='Y' and hfl_subgroup<>'Y' ") \
		_T(" AND (length(hfl_subitem) <= 1 or hfl_subitem is null) ") \
		_T(" AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0  ") \
		_T(" AND hfl_applydate >= TO_DATE('2016-03-01','YYYY-MM-DD') "));

	szWhere.AppendFormat(_T(" and hfl_object <>'I' "));
	szWhere.AppendFormat(_T(" and hfl_org_id in('GL','EM') "));

	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, hfl_subitem as subitem ") \
		_T(" FROM hms_fee_list WHERE hfl_groupid='%s'  %s ORDER BY id "), m_szTypeKey, szWhere);
//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("subitem")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSExmTestSettingDialog::OnNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSExmTestSettingDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("INSERT INTO hms_exm_testref(createdby, itemid, typeid) values('%s','%s','%s') "),
		pMF->GetCurrentUser(), m_szNameKey, m_szExmType);
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		if(m_wndName.GetCurrent(2) == _T("Y"))
		{
			CString szItemId = m_szNameKey;

			CString szSQL;
			CString tmpStr;
			CString szGroup = m_szTypeKey;
			CHMSSelectionListDialog dlg(this);
			szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name FROM hms_fee_list WHERE hfl_groupid='%s' and hfl_subitem='%s' "), 
				szGroup, szItemId);

			dlg.m_szSQL = szSQL;
			

			if(dlg.DoModal() == IDOK)
			{
				for (int i =0;i < dlg.GetSelectionCount(); i++)
				{
					CHMSSelectionListDialog::SELITEM item = dlg.GetSelectionAt(i);
					szSQL.Format(_T("INSERT INTO hms_exm_testref(createdby, itemid, typeid) values('%s','%s','%s')"),
						pMF->GetCurrentUser(), item.szID, m_szExmType);
					pMF->ExecSQL(szSQL);

				}

			}
		}
		OnTestLoadData();
		SetMode(VM_ADD);
	}
	else
	{
		ShowMessageBox(_T("Đề mục đã tồn tại"));
		m_wndName.SetFocus();
	}
} 
int CHMSExmTestSettingDialog::OnAddHMSExmTestSettingDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExmTestSettingDialog::OnEditHMSExmTestSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExmTestSettingDialog::OnDeleteHMSExmTestSettingDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSExmTestSettingDialog();
 	}
	return 0;
}
int CHMSExmTestSettingDialog::OnSaveHMSExmTestSettingDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
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
 		//OnHMSExmTestSettingDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSExmTestSettingDialog::OnCancelHMSExmTestSettingDialog(){
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
int CHMSExmTestSettingDialog::OnHMSExmTestSettingDialogListLoadData(){
	return 0;
}

