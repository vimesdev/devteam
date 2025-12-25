#include "FAMInventLine.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMInventLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMInventLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMInventLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMInventLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMInventLine* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMInventLine *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMInventLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMInventLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMInventLine *)pWnd)->OnItemNameAddNew();
}*/
static void _OnLevel1SelectFnc(CWnd *pWnd){
	  ((CFAMInventLine*)pWnd)->OnLevel1Select();
}
static void _OnLevel2SelectFnc(CWnd *pWnd){
	  ((CFAMInventLine*)pWnd)->OnLevel2Select();
}
static void _OnLevel3SelectFnc(CWnd *pWnd){
	  ((CFAMInventLine*)pWnd)->OnLevel3Select();
}
static void _OnLevel4SelectFnc(CWnd *pWnd){
	  ((CFAMInventLine*)pWnd)->OnLevel4Select();
}
static void _OnLevel5SelectFnc(CWnd *pWnd){
	  ((CFAMInventLine*)pWnd)->OnLevel5Select();
}
static void _OnLiquidRequestSelectFnc(CWnd *pWnd){
	 ((CFAMInventLine*)pWnd)->OnLiquidRequestSelect();
}
static void _OnTransferRequestSelectFnc(CWnd *pWnd){
	 ((CFAMInventLine*)pWnd)->OnTransferRequestSelect();
}
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMInventLine *pVw = (CFAMInventLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMInventLineFnc(CWnd *pWnd){
	 return ((CFAMInventLine*)pWnd)->OnAddFAMInventLine();
} 
static int _OnEditFAMInventLineFnc(CWnd *pWnd){
	 return ((CFAMInventLine*)pWnd)->OnEditFAMInventLine();
} 
static int _OnDeleteFAMInventLineFnc(CWnd *pWnd){
	 return ((CFAMInventLine*)pWnd)->OnDeleteFAMInventLine();
} 
static int _OnSaveFAMInventLineFnc(CWnd *pWnd){
	 return ((CFAMInventLine*)pWnd)->OnSaveFAMInventLine();
} 
static int _OnCancelFAMInventLineFnc(CWnd *pWnd){
	 return ((CFAMInventLine*)pWnd)->OnCancelFAMInventLine();
} 
CFAMInventLine::CFAMInventLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMInventLine::~CFAMInventLine(){
}
void CFAMInventLine::OnCreateComponents(){
	/*m_wndItemList.Create(this,5, 5, 790, 320); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 325, 85, 350);
	m_wndDepartment.Create(this,90, 325, 300, 350); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 305, 325, 385, 350);
	m_wndItemName.Create(this,390, 325, 790, 350); 
	m_wndQualityLevel.Create(this, _T("Quality Level"), 5, 355, 85, 380);
	m_wndLevel1.Create(this, _T("Level_1"), 90, 355, 170, 380);
	m_wndLevel2.Create(this, _T("Level_2"), 175, 355, 255, 380);
	m_wndLevel3.Create(this, _T("Level_3"), 260, 355, 340, 380);
	m_wndLevel4.Create(this, _T("Level_4"), 345, 355, 425, 380);
	m_wndLevel5.Create(this, _T("Level_5"), 430, 355, 510, 380);
	m_wndSaveItem.Create(this, _T("Save"), 730, 355, 790, 380);*/
	m_wndItemList.Create(this,5, 5, 790, 305); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 310, 85, 335);
	m_wndDepartment.Create(this,90, 310, 300, 335); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 305, 310, 385, 335);
	m_wndItemName.Create(this,390, 310, 790, 335); 
	m_wndQualityLevel.Create(this, _T("Quality Level"), 5, 340, 85, 365);
	m_wndLevel1.Create(this, _T("Level_1"), 90, 340, 170, 365);
	m_wndLevel2.Create(this, _T("Level_2"), 175, 340, 255, 365);
	m_wndLevel3.Create(this, _T("Level_3"), 260, 340, 340, 365);
	m_wndLevel4.Create(this, _T("Level_4"), 345, 340, 425, 365);
	m_wndLevel5.Create(this, _T("Level_5"), 430, 340, 510, 365);
	m_wndLiquidRequest.Create(this, _T("Liquid Request"), 90, 370, 255, 395);
	m_wndTransferRequest.Create(this, _T("Transfer Request"), 260, 370, 425, 395);
	m_wndSaveItem.Create(this, _T("+"), 730, 370, 790, 395);
	

}
void CFAMInventLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(35);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 250);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(4, _T("Serial"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(5, _T("Made in"), CFMT_TEXT, 80);
	m_wndItemList.InsertColumn(6, _T("Quality Level"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(7, _T("Department"), CFMT_TEXT, 50);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 80);	
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Type"), CFMT_TEXT, 50);
	m_wndItemName.InsertColumn(6, _T("QtyLevel"), CFMT_NUMBER, 0);

	m_tbl_line.SetTableName(_T("fam_invent_line"));
	m_tbl_line.AddField(_T("fil_createdby"), dfText, 15);
	m_tbl_line.AddField(_T("fil_createddate"), dfDateTime);
	m_tbl_line.AddField(_T("fil_updatedby"), dfText, 15);
	m_tbl_line.AddField(_T("fil_updateddate"), dfDateTime);
	m_tbl_line.AddField(_T("fil_orderno"), dfText, 30);
	m_tbl_line.AddField(_T("fil_idx"), dfLong);
	m_tbl_line.AddField(_T("fil_assetno"), dfText, 30);
	m_tbl_line.AddField(_T("fil_name"), dfText, 250);
	m_tbl_line.AddField(_T("fil_qtylevel"), dfText, 1);
	m_tbl_line.AddField(_T("fil_dept"), dfText, 15);
	m_tbl_line.AddField(_T("fil_note"), dfText, 10);

}
void CFAMInventLine::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemList.SetEvent(WE_SELCHANGE, _OnItemListSelectChangeFnc);
	m_wndItemList.SetEvent(WE_LOADDATA, _OnItemListLoadDataFnc);
	m_wndItemList.SetEvent(WE_DBLCLICK, _OnItemListDblClickFnc);
	m_wndItemList.AddEvent(1, _T("Delete"), _OnItemListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	m_wndLevel1.SetEvent(WE_CLICK, _OnLevel1SelectFnc);
	m_wndLevel2.SetEvent(WE_CLICK, _OnLevel2SelectFnc);
	m_wndLevel3.SetEvent(WE_CLICK, _OnLevel3SelectFnc);
	m_wndLevel4.SetEvent(WE_CLICK, _OnLevel4SelectFnc);
	m_wndLevel5.SetEvent(WE_CLICK, _OnLevel5SelectFnc);
	m_wndLiquidRequest.SetEvent(WE_CLICK, _OnLiquidRequestSelectFnc);
	m_wndTransferRequest.SetEvent(WE_CLICK, _OnTransferRequestSelectFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	
}
void CFAMInventLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Radio(pDX, m_wndLevel1.GetDlgCtrlID(), m_nLevel1);
	DDX_Radio(pDX, m_wndLevel2.GetDlgCtrlID(), m_nLevel2);
	DDX_Radio(pDX, m_wndLevel3.GetDlgCtrlID(), m_nLevel3);
	DDX_Radio(pDX, m_wndLevel4.GetDlgCtrlID(), m_nLevel4);
	DDX_Radio(pDX, m_wndLevel5.GetDlgCtrlID(), m_nLevel5);
	DDX_Check(pDX, m_wndLiquidRequest.GetDlgCtrlID(), m_bLiquidRequest);
	DDX_Check(pDX, m_wndTransferRequest.GetDlgCtrlID(), m_bTransferRequest);

}
void CFAMInventLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMInventLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szQty, szStt;
	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT coalesce(max(fil_idx), 0)+1 FROM fam_invent_line where fil_orderno='%s'"), m_szOrderNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_line.SetValue(_T("fil_createdby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fil_createddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fil_updatedby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fil_updateddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fil_orderno"), m_szOrderNo);
	m_tbl_line.SetValue(_T("fil_idx"), m_nIndex);
	m_tbl_line.SetValue(_T("fil_assetno"), m_szItemNameKey);
	m_tbl_line.SetValue(_T("fil_name"), m_szName);
	m_tbl_line.SetValue(_T("fil_qtylevel"), m_szQty);
	m_tbl_line.SetValue(_T("fil_dept"), m_szDepartmentKey);
	if(m_wndLiquidRequest.GetCheck() == 1)
	{
		szStt.Format(_T("TL"));
	}else if(m_wndLiquidRequest.GetCheck() == 0){
			szStt.Format(_T("DC"));
	}else
		szStt.Format(_T(""));
	m_tbl_line.SetValue(_T("fil_note"), szStt);

}
void CFAMInventLine::SetDefaultValues(){
	m_szItemNameKey.Empty();
	m_nLevel1=0;
	m_nLevel2=1;
	m_nLevel3=1;
	m_nLevel4=1;
	m_nLevel5=1;
	m_szQty.Format(_T("1"));
	m_szSet.Format(_T("fami_level1"));
	m_bLiquidRequest=FALSE;
	m_bTransferRequest=FALSE;

}
int CFAMInventLine::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
 			EnableButtons(TRUE, 0, -1);
			m_wndLevel1.EnableWindow(TRUE);
			m_wndLevel2.EnableWindow(TRUE);
			m_wndLevel3.EnableWindow(TRUE);
			m_wndLevel4.EnableWindow(TRUE);
			m_wndLevel5.EnableWindow(TRUE);
			m_wndLiquidRequest.EnableWindow(TRUE);
			m_wndTransferRequest.EnableWindow(TRUE);
			OnItemListLoadData();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
			m_wndDepartment.EnableWindow(FALSE);
			m_wndItemName.EnableWindow(FALSE);
			m_wndLevel1.EnableWindow(FALSE);
			m_wndLevel2.EnableWindow(FALSE);
			m_wndLevel3.EnableWindow(FALSE);
			m_wndLevel4.EnableWindow(FALSE);
			m_wndLevel5.EnableWindow(FALSE);
			m_wndLiquidRequest.EnableWindow(FALSE);
			m_wndTransferRequest.EnableWindow(FALSE);
			OnItemListLoadData();
			//m_wndItemList.EnableWindow(FALSE);
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
void CFAMInventLine::OnItemListDblClick(){
	
} 
void CFAMInventLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIndex = str2long(m_wndItemList.GetItemText(nNewItem, 0));
} 
int CFAMInventLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUpdate;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(GetMode() == VM_VIEW)
		return -1;
	szSQL.Format(_T("DELETE FROM fam_invent_line WHERE fil_orderno = '%s' AND fil_idx = %ld"), m_szOrderNo, m_nIndex);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMInventLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	
	szSQL.Format(_T("SELECT fil_idx, fil_assetno, fil_name, fil_qtylevel, si_model, si_serial, sil_madein, fil_dept ") \
		_T(" FROM fam_invent_line ") \
		_T(" LEFT JOIN storage_item ON(fil_assetno = si_item_id) ") \
		_T(" LEFT JOIN storage_item_list ON(sil_item_list_id = si_item_list_id) ") \
		_T(" WHERE fil_orderno = '%s' ORDER BY fil_idx"), m_szOrderNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("fil_idx")),
			rs.GetValue(_T("fil_assetno")), 
			rs.GetValue(_T("fil_name")), 
			rs.GetValue(_T("si_model")),
			rs.GetValue(_T("si_serial")),
			rs.GetValue(_T("sil_madein")),
			rs.GetValue(_T("fil_qtylevel")),
			rs.GetValue(_T("fil_dept")),NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;

}
void CFAMInventLine::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMInventLine::OnDepartmentSelendok(){
		UpdateData(TRUE); 
}
/*void CFAMInventLine::OnDepartmentSetfocus(){
	
}*/
/*void CFAMInventLine::OnDepartmentKillfocus(){
	
}*/
long CFAMInventLine::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY sd_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMInventLine::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMInventLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMInventLine::OnItemNameSelendok(){
	 m_szName = m_wndItemName.GetCurrent(1);
	 CString szInventQty;
	 szInventQty = m_wndItemName.GetCurrent(6);
	 if(szInventQty == _T("2")){
		 OnLevel2Select();
		 m_wndLevel1.SetCheck(false);
		 m_wndLevel2.SetCheck(true);
		 m_wndLevel3.SetCheck(false);
		 m_wndLevel4.SetCheck(false);
		 m_wndLevel5.SetCheck(false);
	 }
	 if(szInventQty == _T("3")){
		 OnLevel3Select();
		 m_wndLevel1.SetCheck(false);
		 m_wndLevel2.SetCheck(false);
		 m_wndLevel3.SetCheck(true);
		 m_wndLevel4.SetCheck(false);
		 m_wndLevel5.SetCheck(false);
	 }
	 if(szInventQty == _T("4")){
		 OnLevel4Select();
		 m_wndLevel1.SetCheck(false);
		 m_wndLevel2.SetCheck(false);
		 m_wndLevel3.SetCheck(false);
		 m_wndLevel4.SetCheck(true);
		 m_wndLevel5.SetCheck(false);
	 }
	 if(szInventQty == _T("5")){
		 OnLevel5Select();
		 m_wndLevel1.SetCheck(false);
		 m_wndLevel2.SetCheck(false);
		 m_wndLevel3.SetCheck(false);
		 m_wndLevel4.SetCheck(false);
		 m_wndLevel5.SetCheck(true);
	 }

}
/*void CFAMInventLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMInventLine::OnItemNameKillfocus(){
	
}*/
long CFAMInventLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIdx;
	m_wndItemName.BeginWaitCursor(); 
	int nCount = 0;
	if(!m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and sb_storage_id = '%s'"), m_szDepartmentKey);
		szWhere.AppendFormat(_T(" and sb_storage_id = '%s' "), m_szDepartmentKey);
	}
	if(!m_szItemNameKey.IsEmpty())
	{
		//szWhere.Format(_T(" and sb_storage_id = '%s'"), m_szDepartmentKey);
		szWhere.AppendFormat(_T(" and si_item_id = '%s' "), m_szItemNameKey);
	}
	/*szSQL.Format(_T(" SELECT sb_storage_id, sb_item_id, fal_assetname, fal_model, fal_type,(select ss_desc from sys_sel where ss_id = 'fam_uom' and ss_code = fal_unit) as unit ") \
			_T(" FROM storage_bin ") \
			_T(" LEFT JOIN fam_asset_list ON(fal_assetno = sb_item_id) ") \
			_T(" WHERE 1=1 %s "), szWhere);*/
	szSQL.Format(_T(" SELECT si_item_id, ") \
				_T(" si_name, ") \
				_T(" si_model, ") \
				_T(" si_serial, ") \
				_T(" storage_get_uomname(si_uom_id) AS unit, ") \
				_T(" (SELECT max(fil_qtylevel) ") \
				_T(" FROM fam_invent_line ") \
				_T(" WHERE fil_assetno = si_item_id ") \
				_T(" AND fil_idx       = ") \
				_T(" (SELECT MAX(fil_idx) FROM fam_invent_line WHERE fil_assetno = si_item_id )) AS qty ") \
				_T(" FROM storage_item ") \
				_T(" LEFT JOIN storage_bin ON(sb_item_id = si_item_id) ") \
				_T(" WHERE si_item_id NOT IN ") \
				_T(" (SELECT fil_assetno ") \
				_T(" FROM fam_invent_line ") \
				_T(" LEFT JOIN fam_invent ") \
				_T(" ON(fi_orderno    = fil_orderno) ") \
				_T(" WHERE fi_orderno = '%s' ") \
				_T(" )  ") \
				_T(" AND si_org_id = 'ITS' and sb_qtyonhand > 0 %s"), m_szOrderNo, szWhere);
	nCount = rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){		  
		m_wndItemName.AddItems(
			rs.GetValue(_T("si_item_id")),
			rs.GetValue(_T("si_name")),
			rs.GetValue(_T("si_model")),
			rs.GetValue(_T("si_serial")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("fa_type")),
			rs.GetValue(_T("qty")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemName.EndWaitCursor(); 
	return nCount;
}
/*void CFAMInventLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMInventLine::OnLevel1Select(){
	m_nLevel1 = 0;
	m_nLevel2 = 1;
	m_nLevel3 = 1;
	m_nLevel4 = 1;
	m_nLevel5 = 1;
	m_szQty.Format(_T("1"));
	m_szSet.Format(_T("fami_level1"));
}
void CFAMInventLine::OnLevel2Select(){
	m_nLevel1 = 1;
	m_nLevel2 = 0;
	m_nLevel3 = 1;
	m_nLevel4 = 1;
	m_nLevel5 = 1;
	m_szQty.Format(_T("2"));
	m_szSet.Format(_T("fami_level2"));
}
void CFAMInventLine::OnLevel3Select(){
	m_nLevel1 = 1;
	m_nLevel2 = 1;
	m_nLevel3 = 0;
	m_nLevel4 = 1;
	m_nLevel5 = 1;
	m_szQty.Format(_T("3"));
	m_szSet.Format(_T("fami_level3"));
}
void CFAMInventLine::OnLevel4Select(){
	m_nLevel1 = 1;
	m_nLevel2 = 1;
	m_nLevel3 = 1;
	m_nLevel4 = 0;
	m_nLevel5 = 1;
	m_szQty.Format(_T("4"));
	m_szSet.Format(_T("fami_level4"));
}
void CFAMInventLine::OnLevel5Select(){
	m_nLevel1 = 1;
	m_nLevel2 = 1;
	m_nLevel3 = 1;
	m_nLevel4 = 1;
	m_nLevel5 = 0;
	m_szQty.Format(_T("5"));
	m_szSet.Format(_T("fami_level5"));
}
void CFAMInventLine::OnLiquidRequestSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_wndLiquidRequest.GetCheck() == 1)
	{
		m_wndLiquidRequest.SetCheck(true);
		m_wndTransferRequest.EnableWindow(false);
	}else
	{
		m_wndLiquidRequest.SetCheck(false);
		m_wndTransferRequest.EnableWindow(true);
	}
}
void CFAMInventLine::OnTransferRequestSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_wndTransferRequest.GetCheck() == 1)
	{
		m_wndTransferRequest.SetCheck(true);
		m_wndLiquidRequest.EnableWindow(false);
	}else
	{
		m_wndTransferRequest.SetCheck(false);
		m_wndLiquidRequest.EnableWindow(true);
	}
}
void CFAMInventLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMInventLine();
} 
int CFAMInventLine::OnAddFAMInventLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMInventLine::OnEditFAMInventLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMInventLine::OnDeleteFAMInventLine(){
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
 		OnCancelFAMInventLine();
 	}
	return 0;
}
int CFAMInventLine::OnSaveFAMInventLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate, szSQL2;
	CRecord rs(&pMF->m_db);
	int Idx = 0;
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL = m_tbl_line.GetInsertSQL();
 	}
 	else {

 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		OnItemListLoadData();
		SetMode(VM_ADD);
		m_wndItemName.SetFocus();
		m_wndLiquidRequest.SetCheck(0);
		m_wndTransferRequest.SetCheck(0);
		m_wndLiquidRequest.EnableWindow(true);
		m_wndTransferRequest.EnableWindow(true);
 	}
 	else
 	{
 	}
 	return ret;

}
int CFAMInventLine::OnCancelFAMInventLine(){
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
int CFAMInventLine::OnFAMInventLineListLoadData(){
	return 0;
}
