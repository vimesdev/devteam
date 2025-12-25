#include "HMSMapItemDialog.h"
#include "MainFrm.h"
static void _OnOldGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMapItemDialog* )pWnd)->OnOldGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOldGroupSelendokFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnOldGroupSelendok();
}
/*static void _OnOldGroupSetfocusFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnOldGroupKillfocus();
}*/
/*static void _OnOldGroupKillfocusFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnOldGroupKillfocus();
}*/
static long _OnOldGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSMapItemDialog *)pWnd)->OnOldGroupLoadData();
}
/*static void _OnOldGroupAddNewFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnOldGroupAddNew();
}*/
static void _OnNewGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMapItemDialog* )pWnd)->OnNewGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnNewGroupSelendokFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnNewGroupSelendok();
}
/*static void _OnNewGroupSetfocusFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnNewGroupKillfocus();
}*/
/*static void _OnNewGroupKillfocusFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnNewGroupKillfocus();
}*/
static long _OnNewGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSMapItemDialog *)pWnd)->OnNewGroupLoadData();
}
/*static void _OnNewGroupAddNewFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnNewGroupAddNew();
}*/
static void _OnMapItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSMapItemDialog* )pWnd)->OnMapItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMapItemSelendokFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnMapItemSelendok();
}
/*static void _OnMapItemSetfocusFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnMapItemKillfocus();
}*/
/*static void _OnMapItemKillfocusFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnMapItemKillfocus();
}*/
static long _OnMapItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSMapItemDialog *)pWnd)->OnMapItemLoadData();
}
/*static void _OnMapItemAddNewFnc(CWnd *pWnd){
	((CHMSMapItemDialog *)pWnd)->OnMapItemAddNew();
}*/
static void _OnMapSelectFnc(CWnd *pWnd){
	CHMSMapItemDialog *pVw = (CHMSMapItemDialog *)pWnd;
	pVw->OnMapSelect();
} 
static long _OnOldListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMapItemDialog*)pWnd)->OnOldListLoadData();
} 
static void _OnOldListDblClickFnc(CWnd *pWnd){
	((CHMSMapItemDialog*)pWnd)->OnOldListDblClick();
} 
static void _OnOldListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMapItemDialog*)pWnd)->OnOldListSelectChange(nOldItem, nNewItem);
} 
static int _OnOldListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnOldListDeleteItem();
} 
static long _OnMapListLoadDataFnc(CWnd *pWnd){
	return ((CHMSMapItemDialog*)pWnd)->OnMapListLoadData();
} 
static void _OnMapListDblClickFnc(CWnd *pWnd){
	((CHMSMapItemDialog*)pWnd)->OnMapListDblClick();
} 
static void _OnMapListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSMapItemDialog*)pWnd)->OnMapListSelectChange(nOldItem, nNewItem);
} 
static int _OnMapListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnMapListDeleteItem();
}

static int _OnMapListMapDoubleItemFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnMapListDoubleItem();
}

static int _OnAddCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnAddCHMSMapItemDialog();
} 
static int _OnEditCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnEditCHMSMapItemDialog();
} 
static int _OnDeleteCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnDeleteCHMSMapItemDialog();
} 
static int _OnSaveCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnSaveCHMSMapItemDialog();
} 
static int _OnCancelCHMSMapItemDialogFnc(CWnd *pWnd){
	 return ((CHMSMapItemDialog*)pWnd)->OnCancelCHMSMapItemDialog();
} 
CHMSMapItemDialog::CHMSMapItemDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSMapItemDialog::~CHMSMapItemDialog(){
}
void CHMSMapItemDialog::OnCreateComponents(){
	m_wndOldGroupLabel.Create(this, _T("Old Group"), 5, 5, 85, 30);
	m_wndOldGroup.Create(this,90, 5, 400, 30); 
	m_wndNewGroupLabel.Create(this, _T("New Group"), 405, 5, 485, 30);
	m_wndNewGroup.Create(this,490, 5, 617, 30); 
	m_wndMapItemLabel.Create(this, _T("Map Item"), 622, 5, 704, 30);
	m_wndMapItem.Create(this,709, 5, 941, 30); 
	m_wndMap.Create(this, _T("&Map"), 946, 5, 1026, 30);
	m_wndOldList.Create(this,5, 35, 400, 655); 
	m_wndMapList.Create(this,405, 35, 1025, 655); 

}
void CHMSMapItemDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldGroup.SetCheckValue(true);
	m_wndOldGroup.LimitText(35);
	m_wndNewGroup.SetCheckValue(true);
	m_wndNewGroup.LimitText(35);
	m_wndMapItem.SetCheckValue(true);
	m_wndMapItem.LimitText(35);


	m_wndOldGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOldGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndNewGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndNewGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndMapItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 80);
	m_wndMapItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);


	m_wndOldList.InsertColumn(0, _T("Index"), CFMT_TEXT, 80);
	m_wndOldList.InsertColumn(1, _T("Name"), CFMT_TEXT, 230);
	m_wndOldList.InsertColumn(2, _T("Unit Price"), CFMT_NUMBER, 70);


	m_wndMapList.InsertColumn(0, _T("Old ID"), CFMT_TEXT, 65);
	m_wndMapList.InsertColumn(1, _T("Old Name"), CFMT_TEXT, 200);
	m_wndMapList.InsertColumn(2, _T("Unit Price"), CFMT_NUMBER, 70);
	m_wndMapList.InsertColumn(3, _T("New ID"), CFMT_TEXT, 65);
	m_wndMapList.InsertColumn(4, _T("New Name"), CFMT_TEXT, 250);
	m_wndMapList.InsertColumn(5, _T("Unit Price"), CFMT_NUMBER, 70);
	
	m_db.Init(_T("192.168.0.250"), 5432);
	m_db.Open(_T("vimes_jsc"), _T("vimes"), _T("vimesjsc2009"));
	//m_db.SetClientEncoding("utf8");


}
void CHMSMapItemDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOldGroup.SetEvent(WE_SELENDOK, _OnOldGroupSelendokFnc);
	//m_wndOldGroup.SetEvent(WE_SETFOCUS, _OnOldGroupSetfocusFnc);
	//m_wndOldGroup.SetEvent(WE_KILLFOCUS, _OnOldGroupKillfocusFnc);
	m_wndOldGroup.SetEvent(WE_SELCHANGE, _OnOldGroupSelectChangeFnc);
	m_wndOldGroup.SetEvent(WE_LOADDATA, _OnOldGroupLoadDataFnc);
	//m_wndOldGroup.SetEvent(WE_ADDNEW, _OnOldGroupAddNewFnc);
	m_wndNewGroup.SetEvent(WE_SELENDOK, _OnNewGroupSelendokFnc);
	//m_wndNewGroup.SetEvent(WE_SETFOCUS, _OnNewGroupSetfocusFnc);
	//m_wndNewGroup.SetEvent(WE_KILLFOCUS, _OnNewGroupKillfocusFnc);
	m_wndNewGroup.SetEvent(WE_SELCHANGE, _OnNewGroupSelectChangeFnc);
	m_wndNewGroup.SetEvent(WE_LOADDATA, _OnNewGroupLoadDataFnc);
	//m_wndNewGroup.SetEvent(WE_ADDNEW, _OnNewGroupAddNewFnc);
	m_wndMapItem.SetEvent(WE_SELENDOK, _OnMapItemSelendokFnc);
	//m_wndMapItem.SetEvent(WE_SETFOCUS, _OnMapItemSetfocusFnc);
	//m_wndMapItem.SetEvent(WE_KILLFOCUS, _OnMapItemKillfocusFnc);
	m_wndMapItem.SetEvent(WE_SELCHANGE, _OnMapItemSelectChangeFnc);
	m_wndMapItem.SetEvent(WE_LOADDATA, _OnMapItemLoadDataFnc);
	//m_wndMapItem.SetEvent(WE_ADDNEW, _OnMapItemAddNewFnc);
	m_wndMap.SetEvent(WE_CLICK, _OnMapSelectFnc);
	m_wndOldList.SetEvent(WE_SELCHANGE, _OnOldListSelectChangeFnc);
	m_wndOldList.SetEvent(WE_LOADDATA, _OnOldListLoadDataFnc);
	m_wndOldList.SetEvent(WE_DBLCLICK, _OnOldListDblClickFnc);
	//m_wndOldList.AddEvent(1, _T("Delete"), _OnOldListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMapList.SetEvent(WE_SELCHANGE, _OnMapListSelectChangeFnc);
	m_wndMapList.SetEvent(WE_LOADDATA, _OnMapListLoadDataFnc);
	m_wndMapList.SetEvent(WE_DBLCLICK, _OnMapListDblClickFnc);
	
	m_wndMapList.SetWindowText(_T("Map List"));
	m_wndMapList.AddEvent(2, _T("Delete"), _OnMapListDeleteItemFnc, 0, VK_DELETE, 0);
	SetMode(VM_ADD);
	

}
void CHMSMapItemDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOldGroup.GetDlgCtrlID(), m_szOldGroupKey);
	DDX_TextEx(pDX, m_wndNewGroup.GetDlgCtrlID(), m_szNewGroupKey);
	DDX_TextEx(pDX, m_wndMapItem.GetDlgCtrlID(), m_szMapItemKey);

}
void CHMSMapItemDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSMapItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSMapItemDialog::SetDefaultValues(){

	m_szOldGroupKey.Empty();
	m_szNewGroupKey.Empty();
	m_szMapItemKey.Empty();

}
int CHMSMapItemDialog::SetMode(int nMode){
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
void CHMSMapItemDialog::OnOldGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMapItemDialog::OnOldGroupSelendok(){
	UpdateData(true);
	OnOldListLoadData();
}
/*void CHMSMapItemDialog::OnOldGroupSetfocus(){
	
}*/
/*void CHMSMapItemDialog::OnOldGroupKillfocus(){
	
}*/
long CHMSMapItemDialog::OnOldGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&m_db);
	m_db.SetClientEncoding("latin1");
	CString szSQL, szWhere;
	if(m_wndOldGroup.IsSearchKey() && !m_szOldGroupKey.IsEmpty()){
		szWhere.Format(_T(" and htg_id='%s' "), m_szOldGroupKey);
	};
	m_wndOldGroup.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT htg_id as id, htg_desc as  name FROM hms_testgrouplist WHERE 1=1 %s ORDER BY htg_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOldGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSMapItemDialog::OnOldGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMapItemDialog::OnNewGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMapItemDialog::OnNewGroupSelendok(){
	 OnMapListLoadData();
}
/*void CHMSMapItemDialog::OnNewGroupSetfocus(){
	
}*/
/*void CHMSMapItemDialog::OnNewGroupKillfocus(){
	
}*/
long CHMSMapItemDialog::OnNewGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndNewGroup.IsSearchKey() && !m_szNewGroupKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id='%s' "), m_szNewGroupKey);
	};
	m_wndNewGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group WHERE (substr(hfg_id, 1, 1) ='B' or hfg_id='D0000' ) %s ORDER BY hfg_id"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndNewGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSMapItemDialog::OnNewGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMapItemDialog::OnMapItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSMapItemDialog::OnMapItemSelendok(){
	 
}
/*void CHMSMapItemDialog::OnMapItemSetfocus(){
	
}*/
/*void CHMSMapItemDialog::OnMapItemKillfocus(){
	
}*/
long CHMSMapItemDialog::OnMapItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndMapItem.IsSearchKey() && !m_szMapItemKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szMapItemKey);
	};
	m_wndMapItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name FROM hms_fee_list ") \
		_T("WHERE hfl_groupid='%s'  and hfl_feeid not in(select hfl_newid from map_fee_list) %s ORDER BY hfl_name "), m_szNewGroupKey, szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSMapItemDialog::OnMapItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSMapItemDialog::OnMapSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szMapID, szItemID;
	m_wndOldList.SetCurSel(0);
	int nSel = m_wndOldList.GetCurSel();
	if(nSel < 0)
		return;

	CRecord rs(&pMF->m_db);
	

	szMapID = m_wndOldList.GetItemText(nSel, 0);
	szItemID = m_wndMapItem.GetCurrent(0);

	CDbfMap mapTbl;
	int nMaxIDX;
	mapTbl.SetTableName(_T("map_fee_list"));
	mapTbl.AddField(_T("hfl_oldid"), dfText, 15);
	mapTbl.AddField(_T("hfl_newid"), dfText, 15);
	mapTbl.AddField(_T("hfl_oldgrp"), dfText, 15);
	mapTbl.AddField(_T("hfl_newgrp"), dfText, 15);

	mapTbl.SetValue(_T("hfl_oldid"), szMapID);
	mapTbl.SetValue(_T("hfl_newid"), szItemID);
	mapTbl.SetValue(_T("hfl_oldgrp"), m_szOldGroupKey);
	mapTbl.SetValue(_T("hfl_newgrp"), m_szNewGroupKey);

		
	szSQL = mapTbl.GetInsertSQL();
	int ret = pMF->ExecSQL(szSQL);
	if(ret > 0)
	{
		szSQL.Format(_T("SELECT count(*) FROM map_fee_group WHERE hfg_newgrp='%s' and hfg_oldgrp='%s' "), m_szNewGroupKey, m_szOldGroupKey);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() <= 0){
			szSQL.Format(_T("INSERT INTO map_fee_group VALUES('%s', '%s') "), m_szOldGroupKey, m_szNewGroupKey);
			pMF->ExecSQL(szSQL);
		}
	}
	OnOldGroupSelendok();
	OnMapListLoadData();
	m_wndMapItem.SetFocus();
} 
void CHMSMapItemDialog::OnOldListDblClick(){
	
} 
void CHMSMapItemDialog::OnOldListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMapItemDialog::OnOldListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSMapItemDialog::OnOldListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOldList.BeginLoad(); 
	
	UpdateData(TRUE);
	int nCount = 0;
	szSQL.Format(_T("SELECT hproc_id as id, hproc_desc as name, hproc_normcost as unitprice FROM map_procedures ") \
		_T("WHERE trim(hproc_id)<>'0' and ((hproc_testgrp='%s' and hproc_catid in('ITEM', 'ITEMS', 'SUBITEM')  and hproc_type in('T','I','O') ) )") \
		_T(" and hproc_id not in(select hfl_oldid from map_fee_list where hfl_oldgrp='%s') ") \
		_T("ORDER BY hproc_desc "), m_szOldGroupKey, m_szOldGroupKey);

	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndOldList.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("unitprice")), 
			NULL);
		rs.MoveNext();
	}
	m_wndOldList.EndLoad(); 
	return nCount;
}
void CHMSMapItemDialog::OnMapListDblClick(){
	
} 
void CHMSMapItemDialog::OnMapListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSMapItemDialog::OnMapListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndMapList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString szSQL;
	CString szItemID, szOldID;
	szOldID = m_wndMapList.GetItemText(nSel, 0);
	szItemID = m_wndMapList.GetItemText(nSel, 3);
	szSQL.Format(_T("DELETE FROM map_fee_list WHERE hfl_oldid='%s' and hfl_newid='%s' "), szOldID, szItemID);
	pMF->ExecSQL(szSQL);
	m_wndMapList.DeleteItem(nSel);
	OnOldListLoadData();
	 return 0;
} 

int CHMSMapItemDialog::OnMapListDoubleItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndMapList.GetCurSel();
	if(nSel < 0)
		return 0;
	m_wndOldList.SetCurSel(0);
	int nSel2 = m_wndOldList.GetCurSel();
	if(nSel2 < 0)
		return 0;

	CString szSQL;
	CString szItemID, szMapID;
	szMapID = m_wndOldList.GetItemText(nSel2, 0);
	szItemID = m_wndMapList.GetItemText(nSel, 3);
	szSQL.Format(_T("UPDATE hms_fee_list SET hfl_mapid2='%s' WHERE hfl_feeid='%s' "), szMapID, szItemID );
	pMF->ExecSQL(szSQL);
	OnOldListLoadData();
	return 0;
}
long CHMSMapItemDialog::OnMapListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	UpdateData(TRUE);

	m_wndMapList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hproc_id as oldid, hfl_feeid as newid, hproc_desc as oldname, hfl_name as newname, hproc_normcost as oldprice, hfl_servprice as newprice ") \
		_T(" from map_fee_list, map_procedures, hms_fee_list ") \
		_T(" where hfl_groupid='%s' and hfl_feeid=hfl_newid and hproc_id=hfl_oldid and hfl_oldgrp='%s'"), m_szNewGroupKey, m_szOldGroupKey);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndMapList.AddItems(
			rs.GetValue(_T("oldid")), 
			rs.GetValue(_T("OldName")), 
			rs.GetValue(_T("oldprice")), 
			rs.GetValue(_T("newid")), 
			rs.GetValue(_T("NewName")), 
			rs.GetValue(_T("newprice")), 
			NULL);
		rs.MoveNext();
	}
	m_wndMapList.EndLoad(); 
	return nCount;
}
int CHMSMapItemDialog::OnAddCHMSMapItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSMapItemDialog::OnEditCHMSMapItemDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSMapItemDialog::OnDeleteCHMSMapItemDialog(){
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
 		OnCancelCHMSMapItemDialog(); 
 	}
	return 0;
}
int CHMSMapItemDialog::OnSaveCHMSMapItemDialog(){
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
 		//OnCHMSMapItemDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSMapItemDialog::OnCancelCHMSMapItemDialog(){
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
int CHMSMapItemDialog::OnCHMSMapItemDialogListLoadData(){
	return 0;
}
