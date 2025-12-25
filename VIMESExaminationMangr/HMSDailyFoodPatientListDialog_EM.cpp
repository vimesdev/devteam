#include "HMSDailyFoodPatientListDialog_EM.h"
#include "MainFrm.h"
#include "HMSDailyFoodOrder_EM.h"
#include "HMSFoodModifyItemDialog_EM.h"

static int _OnPatientListSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListSelectAllItem();
} 
static int _OnPatientListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListUnselectAllItem();
} 

static void _OnSheetSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnSheetSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSheetSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetSelendok();
}
/*static void _OnSheetSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetKillfocus();
}*/
/*static void _OnSheetKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetKillfocus();
}*/
static long _OnSheetLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetLoadData();
}
/*static void _OnSheetAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetAddNew();
}*/
static void _OnDescSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnDescSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDescSelendok();
}
/*static void _OnDescSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDescKillfocus();
}*/
/*static void _OnDescKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDescKillfocus();
}*/
static long _OnDescLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnDescLoadData();
}
/*static void _OnDescAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnDescAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnPatientListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListLoadData();
} 
static void _OnPatientListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListDblClick();
} 
static void _OnPatientListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListSelectChange(nOldItem, nNewItem);
} 
static int _OnPatientListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListDeleteItem();
} 
static void _OnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnMarkSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static long _OnSelectedListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListLoadData();
} 
static void _OnSelectedListDblClickFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListDblClick();
} 
static void _OnSelectedListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectedListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSelectedListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnAddHMSDailyFoodPatientListDialog();
} 
static int _OnEditHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnEditHMSDailyFoodPatientListDialog();
} 
static int _OnDeleteHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnDeleteHMSDailyFoodPatientListDialog();
} 
static int _OnSaveHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSaveHMSDailyFoodPatientListDialog();
} 
static int _OnCancelHMSDailyFoodPatientListDialogFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnCancelHMSDailyFoodPatientListDialog();
} 
CHMSDailyFoodPatientListDialog::CHMSDailyFoodPatientListDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_bHaucan = FALSE;
	m_nOrderID = 0;
}
CHMSDailyFoodPatientListDialog::~CHMSDailyFoodPatientListDialog()
{
}
void CHMSDailyFoodPatientListDialog::OnCreateComponents(){
	m_wndGroupPatientList.Create(this, _T("Patient List"), 5, 35, 960, 570);
	m_wndSheetLabel.Create(this, _T("Sheet"), 5, 5, 85, 30);
	m_wndSheet.Create(this,90, 5, 320, 30); 
	m_wndDescLabel.Create(this, _T("Bữa ăn"), 325, 5, 405, 30);
	m_wndDesc.Create(this,410, 5, 640, 30); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 645, 5, 765, 30);
	m_wndPatientName.Create(this,770, 5, 929, 30); 
	m_wndRefresh.Create(this, _T("@"), 934, 5, 959, 30);
	m_wndPatientList.Create(this,10, 60, 955, 570); 
	m_wndMark.Create(this, _T("Chọn tất cả"), 10, 575, 121, 600);
	m_wndUnMark.Create(this, _T("Bỏ chọn tất cả"), 126, 575, 237, 600);
	m_wndAdmission.Create(this, _T("&Admission"), 0, 0, 0, 0);
	//m_wndRemove.Create(this, _T("Remove"), 175, 575, 255, 600);
	//m_wndSelectedList.Create(this,10, 325, 955, 565);
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 870, 600);
	m_wndClose.Create(this, _T("&Close"), 875, 575, 960, 600);

	m_wndAdd.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAdd.ShowWindow(SW_HIDE);
	m_wndAdd.EnableWindow(FALSE);

}
void CHMSDailyFoodPatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSheet.SetCheckValue(true);
	//m_wndSheet.LimitText(35);
	m_wndDesc.SetCheckValue(true);
	//m_wndDesc.LimitText(35);

	/*m_wndPatientList.SetCheckBox(true);
	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);	
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 150);
	m_wndPatientList.InsertColumn(3, _T("Bữa sáng"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(4, _T("Bữa trưa"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(5, _T("Bữa tối"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(6, _T("Light_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(7, _T("lunch_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(8, _T("dinner_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(9, _T("relative_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(10, _T("RoomID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(11, _T("BedID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(12, _T("Refidx"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(13, _T("Level"), CFMT_TEXT, 0);*/

	m_wndPatientList.SetCheckBox(true);
	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);	
	m_wndPatientList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndPatientList.InsertColumn(3, _T("Năm sinh"), CFMT_TEXT, 60);
	m_wndPatientList.InsertColumn(4, _T("Giới"), CFMT_TEXT, 50);
	m_wndPatientList.InsertColumn(5, _T("Khoa"), CFMT_TEXT, 60);
	m_wndPatientList.InsertColumn(6, _T("Lưu trú tại"), CFMT_TEXT, 250);
	m_wndPatientList.InsertColumn(7, _T("Ngày lưu trú"), CFMT_TEXT, 100);
	m_wndPatientList.InsertColumn(8, _T("dinner_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(9, _T("relative_item"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(10, _T("RoomID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(11, _T("BedID"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(12, _T("Refidx"), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(13, _T("Level"), CFMT_TEXT, 0);
	


	m_wndSheet.InsertColumn(0, _T("SheetNo"), CFMT_TEXT, 100); //refidx	
	m_wndSheet.InsertColumn(1, _T("Order Date"), CFMT_DATE, 120);
	m_wndSheet.InsertColumn(2, _T("Desc"), CFMT_TEXT, 250);
	m_wndSheet.InsertColumn(3, _T("Status"), CFMT_TEXT, 100);
	m_wndSheet.InsertColumn(4, _T("CreatedBy"), CFMT_TEXT, 0);
	m_wndSheet.InsertColumn(5, _T("ITEMID"), CFMT_TEXT, 0);
	
	m_wndDesc.InsertColumn(0, _T("Mã"), CFMT_TEXT, 100); //refidx	
	m_wndDesc.InsertColumn(1, _T("Tên"), CFMT_TEXT, 200);
	m_wndDesc.InsertColumn(2, _T("Đơn vị"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndDesc.InsertColumn(3, _T("Đơn giá"), CFMT_MONEY, 70);
	m_wndDesc.InsertColumn(4, _T("Nhóm"), CFMT_TEXT, 100);
	m_wndDesc.InsertColumn(5, _T("ITEMID"), CFMT_TEXT, 0);
	

	m_hms_feefodorderTbl.SetTableName(_T("HMS_FEEFOOD"));
	
	m_hms_feefodorderTbl.AddField(_T("hfo_org_id"), dfText, 15);
	m_hms_feefodorderTbl.AddField(_T("hfo_user_id"), dfText, 15);
	m_hms_feefodorderTbl.AddField(_T("hfo_reforder_id"), dfLong);
	m_hms_feefodorderTbl.AddField(_T("hfo_docno"), dfLong); 
	m_hms_feefodorderTbl.AddField(_T("hfo_deptid"), dfText, 7); 
	m_hms_feefodorderTbl.AddField(_T("hfo_refidx"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_roomid"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_bedid"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_ordertype"), dfText, 1); 
	m_hms_feefodorderTbl.AddField(_T("hfo_orderdate"), dfDateTime); 	
	m_hms_feefodorderTbl.AddField(_T("hfol_itemid"), dfText); 
	m_hms_feefodorderTbl.AddField(_T("hfol_qtyorder"), dfFloat); 
	m_hms_feefodorderTbl.AddField(_T("hfol_type"), dfText); 
	m_hms_feefodorderTbl.AddField(_T("hfol_level"), dfBool);

}
void CHMSDailyFoodPatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSheet.SetEvent(WE_SELENDOK, _OnSheetSelendokFnc);
	//m_wndSheet.SetEvent(WE_SETFOCUS, _OnSheetSetfocusFnc);
	//m_wndSheet.SetEvent(WE_KILLFOCUS, _OnSheetKillfocusFnc);
	m_wndSheet.SetEvent(WE_SELCHANGE, _OnSheetSelectChangeFnc);
	m_wndSheet.SetEvent(WE_LOADDATA, _OnSheetLoadDataFnc);
	//m_wndSheet.SetEvent(WE_ADDNEW, _OnSheetAddNewFnc);
	m_wndDesc.SetEvent(WE_SELENDOK, _OnDescSelendokFnc);
	//m_wndDesc.SetEvent(WE_SETFOCUS, _OnDescSetfocusFnc);
	//m_wndDesc.SetEvent(WE_KILLFOCUS, _OnDescKillfocusFnc);
	m_wndDesc.SetEvent(WE_SELCHANGE, _OnDescSelectChangeFnc);
	m_wndDesc.SetEvent(WE_LOADDATA, _OnDescLoadDataFnc);
	//m_wndDesc.SetEvent(WE_ADDNEW, _OnDescAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	//m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMark.SetEvent(WE_CLICK, _OnMarkSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndSelectedList.SetEvent(WE_SELCHANGE, _OnSelectedListSelectChangeFnc);
	m_wndSelectedList.SetEvent(WE_LOADDATA, _OnSelectedListLoadDataFnc);
	m_wndSelectedList.SetEvent(WE_DBLCLICK, _OnSelectedListDblClickFnc);
	m_wndSelectedList.AddEvent(1, _T("Delete"), _OnSelectedListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	
	SetMode(VM_VIEW);
    OnPatientListLoadData();
	
	

}
void CHMSDailyFoodPatientListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndSheet.GetDlgCtrlID(), m_szSheetKey);
	DDX_TextEx(pDX, m_wndDesc.GetDlgCtrlID(), m_szDescKey);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
}
void CHMSDailyFoodPatientListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDailyFoodPatientListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_feefodorderTbl.SetValue(_T("hfo_org_id"), pMF->GetModuleID());	
	m_hms_feefodorderTbl.SetValue(_T("hfo_user_id"), pMF->GetCurrentUser());
	m_hms_feefodorderTbl.SetValue(_T("hfo_reforder_id"), m_nOID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_docno"), m_nDocumentNo);
	m_hms_feefodorderTbl.SetValue(_T("hfo_deptid"), pMF->m_szDept);
	m_hms_feefodorderTbl.SetValue(_T("hfo_refidx"), m_nRefIndex);
	m_hms_feefodorderTbl.SetValue(_T("hfo_roomid"), m_nRoomID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_bedid"), m_nBedID);	
	m_hms_feefodorderTbl.SetValue(_T("hfo_ordertype"), _T("D"));
	m_hms_feefodorderTbl.SetValue(_T("hfo_orderdate"), m_szOrderDate);
	m_hms_feefodorderTbl.SetValue(_T("hfol_itemid"), m_szSheetKey);
	m_hms_feefodorderTbl.SetValue(_T("hfol_qtyorder"), m_nQty);
	m_hms_feefodorderTbl.SetValue(_T("hfol_type"), _T("S"));
	m_hms_feefodorderTbl.SetValue(_T("hfol_level"), m_nLevel);
}
void CHMSDailyFoodPatientListDialog::SetDefaultValues(){

	m_szSheetKey.Empty();
	m_szDescKey.Empty();
	m_nQty = 1;
	m_nPatientNo = 0;
	m_nDocumentNo = 0;
	m_nRoomID = 0;
	m_nBedID = 0;
	m_nRefIndex = 0;
	m_szPatientName.Empty();
	m_nOrderNoOld=0;
	m_nLevel=0;
}
int CHMSDailyFoodPatientListDialog::SetMode(int nMode){
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
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, 6, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndSheet.EnableWindow(false);

 		UpdateData(FALSE);
 		return nOldMode;
}

void CHMSDailyFoodPatientListDialog::OnSheetSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnSheetSelendok()
{
	//m_nOrderID = ToLong(m_wndSheet.GetCurrent(4));
	//m_szDescKey = m_wndSheet.GetCurrent(2);

	//UpdateData(false);
	//if(m_nOrderID > 0)
	//	OnPatientListLoadData();
}
/*void CHMSDailyFoodPatientListDialog::OnSheetSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnSheetKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnSheetLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szFromDate, szToDate;
	
	szFromDate = pMF->GetSysDate();
	szToDate = pMF->GetSysDate();

	if(m_wndSheet.IsSearchKey() && m_szSheetKey){
		szWhere.Format(_T(" AND HFOS_SHEETNO='%s' "), m_szSheetKey);
	};
	
	if(m_bHaucan)
	{
		szWhere.AppendFormat(_T(" and nvl(hfos_depttype,'XX') = 'HC' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and nvl(hfos_depttype,'XX') <> 'HC' "));
	}

	m_wndSheet.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT HFOS_ORDERID as ORDERID,") \
		_T(" HFOS_SHEETNO as SHEETNO, ") \
		_T("   trunc_date(HFOS_ORDERDATE) AS orderdate,") \
		_T("   HFOS_UPDATEDDATE AS issuedate,") \
		_T("   HFOS_DESCRIPTION as description,") \
		_T("   HFOS_ORDERSTATUS as status,") \
		_T("   m_transaction_getstatusdesc(HFOS_ORDERSTATUS) as statusdesc,") \
		_T("   HFOS_CREATEDBY as createdby ") \
		_T(" FROM HMS_FOODORDERSHEET ") \
		_T(" WHERE hfos_orderstatus IN('S','A') AND hfos_deptid='%s' AND trunc_date(HFOS_ORDERDATE) > to_date('%s', 'yyyy/mm/dd hh24:mi:ss')-5 %s")
		_T(" ORDER BY HFOS_ORDERDATE DESC"), pMF->m_szDept, szFromDate, szWhere);

	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndSheet.AddItems(			
			rs.GetValue(_T("SHEETNO")),			
			CDate::Convert(rs.GetValue(_T("orderDate")), yyyymmdd, ddmmyyyy), 
			rs.GetValue(_T("description")),
			rs.GetValue(_T("statusdesc")),
			rs.GetValue(_T("ORDERID")),
			rs.GetValue(_T("createdby")), 
			NULL);
		rs.MoveNext();
	}

	
	return nCount;
}
/*void CHMSDailyFoodPatientListDialog::OnSheetAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyFoodPatientListDialog::OnDescSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnDescSelendok(){
	 
}
/*void CHMSDailyFoodPatientListDialog::OnDescSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnDescKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnDescLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndDesc.IsSearchKey() && m_szDescKey){
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szDescKey);
	};
	
	m_wndDesc.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_feeid as id,") \
				_T(" 	hfl_name as name, ") \
				_T(" 	hfl_unit as unit, ") \
				_T(" 	hfl_servprice as unitprice,") \
				_T(" 	HFL_SUBGROUP as groupid, ") \
				_T(" 	hfl_typeid as typeid ") \
				_T(" FROM hms_fee_list ") \
				_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_deptid ='LT' and hfl_active='Y' %s ") \
				_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
					nCount = rs.ExecSQL(szSQL);
				_tprintf(_T("%s"), szSQL);

//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndDesc.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			rs.GetValue(_T("itemid")),			
			NULL);
		rs.MoveNext();
	}
	return 0;
}
/*void CHMSDailyFoodPatientListDialog::OnDescAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDailyFoodPatientListDialog::OnPatientNameChange(){
	
} */
/*void CHMSDailyFoodPatientListDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSDailyFoodPatientListDialog::OnPatientNameKillfocus(){
	
} */
int CHMSDailyFoodPatientListDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSDailyFoodPatientListDialog::OnRefreshSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnPatientListLoadData();
	UpdateData(FALSE);
	
} 
void CHMSDailyFoodPatientListDialog::OnPatientListDblClick(){
	int nSel = m_wndPatientList.GetCurSel();
	if(nSel < 0) return;

	CHMSFoodModifyItemDialog_EM dlg(this, VM_EDIT);
	
	dlg.m_szLightKey = m_wndPatientList.GetItemText(nSel, 6);
	dlg.m_szLunchKey = m_wndPatientList.GetItemText(nSel, 7);
	dlg.m_szDinnerKey = m_wndPatientList.GetItemText(nSel, 8);
	dlg.m_szRelativeKey = m_wndPatientList.GetItemText(nSel, 9);
	dlg.m_bLevel = ToInt(m_wndPatientList.GetItemText(nSel, 13));
	dlg.m_bHaucan= m_bHaucan;
	dlg.UpdateData(true);
	if(dlg.DoModal() == IDOK)
	{
		m_wndPatientList.SetItemText(nSel, 3, dlg.m_szLightName);
		m_wndPatientList.SetItemText(nSel, 4, dlg.m_szLunchName);
		m_wndPatientList.SetItemText(nSel, 5, dlg.m_szDinnerName);
		m_wndPatientList.SetItemText(nSel, 6, dlg.m_szLightKey);
		m_wndPatientList.SetItemText(nSel, 7, dlg.m_szLunchKey);
		m_wndPatientList.SetItemText(nSel, 8, dlg.m_szDinnerKey);
		m_wndPatientList.SetItemText(nSel, 9, dlg.m_szRelativeKey);
		m_wndPatientList.SetItemText(nSel, 13, ToString(dlg.m_bLevel));

	}

} 
void CHMSDailyFoodPatientListDialog::OnPatientListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodPatientListDialog::OnPatientListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
}

int CHMSDailyFoodPatientListDialog::OnPatientListSelectAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndPatientList.GetItemCount(); i++){
		m_wndPatientList.SetCheck(i, true);
	}
	return 0;
}

int CHMSDailyFoodPatientListDialog::OnPatientListUnselectAllItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for(int i = 0; i < m_wndPatientList.GetItemCount(); i++){
		m_wndPatientList.SetCheck(i, false);
	}
	return 0;
}
long CHMSDailyFoodPatientListDialog::OnPatientListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	m_wndPatientList.BeginLoad(); 
	
	szWhere.Empty();	

	szSQL.Format(_T(" SELECT hd_docno as docno,") \
				_T("   trim(hp_surname") \
				_T("     ||' '") \
				_T("     ||hp_midname") \
				_T("     ||' '") \
				_T("     ||hp_firstname) as pname, ") \
				_T("   extract(YEAR FROM hp_birthdate) AS namsinh,") \
				_T("   hms_getsex(hp_sex)              AS gioi,") \
				_T("   CASE WHEN HP_DEPARTMENT is not null THEN HP_DEPARTMENT else hd_khoa END as khoa,") \
				_T("   hrl_name as noiluutru,") \
				_T("   to_char(he_examdate, 'DD/MM/YYYY') as ngayluutru,") \
				_T("   NULL recordno,") \
				_T("   he_roomid as roomid,") \
				_T("   0 as bedid,") \
				_T("   0 as refidx,") \
				_T("   hms_getobjectname(hd_object) as objectname,  ") \
				_T("   0 AS Level1,") \
				_T("   NULL AS Light_item,") \
				_T("   NULL AS Light_name,") \
				_T("   NULL AS lunch_item,") \
				_T("   NULL AS lunch_name,") \
				_T("   NULL AS dinner_item,") \
				_T("   NULL AS dinner_name,") \
				_T("   NULL AS relative_item  ") \
				_T("   FROM hms_patient") \
				_T("   LEFT JOIN hms_doc ON(hd_patientno = hp_patientno)") \
				_T("   LEFT JOIN hms_exam ON(hd_docno    =he_docno)") \
				_T("   LEFT JOIN hms_roomlist ON (he_deptid=HRL_DEPTID AND he_roomid=hrl_id)") \
				_T("   WHERE he_deptid='C1.1' AND hrl_group='LT' AND HE_HASFEE='Y'") \
				_T("   AND hd_docno >20000000") \
				_T("   AND he_status IN('O','P','T') AND NVL(hd_status,'X') <> 'T'")
				_T("   ORDER BY he_examdate"));
	
	//_msg(_T("%s"), szSQL);
	m_wndPatientList.BeginLoad(); 	
	CString szEmergency, tmpStr;
	CString szDischargeDate;
	
	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}


	int nCount = 0,  nItem=1, nIdx = 1;;
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 

		rs.GetValue(_T("pname"), tmpStr);
		if(!m_szPatientName.IsEmpty()){

				CString szPatientName;
				
				StringLower(tmpStr, szPatientName);

				SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
				GetShortName(szPatientName, szShortName);
				if(szShortName != m_szPatientName)
				{
					if(!szFirstName.IsEmpty() && szFirstName != szFirstName2){
						rs.MoveNext();
						continue;
					}
				}

					
					if(!szSurName.IsEmpty() && szSurName != szSurName2){
						rs.MoveNext();
						continue;
					}
					if(!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1){
						rs.MoveNext();
						continue;
					}
			
		}

		tmpStr.Format(_T("%d"), nIdx++);
		nItem = m_wndPatientList.AddItems(
			tmpStr,
			rs.GetValue(_T("docno")),			
			rs.GetValue(_T("pname")), 		
			rs.GetValue(_T("namsinh")), 
			rs.GetValue(_T("gioi")), 
			rs.GetValue(_T("khoa")), 
			rs.GetValue(_T("noiluutru")), 
			rs.GetValue(_T("ngayluutru")), 
			rs.GetValue(_T("dinner_item")),
			rs.GetValue(_T("relative_item")),
			rs.GetValue(_T("roomid")),
			rs.GetValue(_T("bedid")),
			rs.GetValue(_T("refidx")),
			rs.GetValue(_T("level1")),
			NULL);
		m_wndPatientList.SetCheck(nItem, true);

		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;
}

void CHMSDailyFoodPatientListDialog::OnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{
		m_wndPatientList.SetCheck(i, TRUE);
	}
	
} 
void CHMSDailyFoodPatientListDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{
		m_wndPatientList.SetCheck(i, FALSE);
	}
} 
void CHMSDailyFoodPatientListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString tmpStr;
	int nIndex = 1;
	//m_wndSelectedList.BeginLoad();
	for (int i = m_wndPatientList.GetItemCount()-1; i >= 0; i--){
		if(m_wndPatientList.GetCheck(i))
		{
			tmpStr.Format(_T("%d"), nIndex++);
			m_wndSelectedList.AddItems(tmpStr, 
				m_wndPatientList.GetItemText(i, 1), 
				m_wndPatientList.GetItemText(i, 2), 
				m_wndPatientList.GetItemText(i, 3), 
				m_wndPatientList.GetItemText(i, 4), 
				m_wndPatientList.GetItemText(i, 5), 
				m_wndPatientList.GetItemText(i, 6), 
				m_wndPatientList.GetItemText(i, 7), 
				m_wndPatientList.GetItemText(i, 8), 
				m_wndPatientList.GetItemText(i, 9), 
				NULL);
			m_wndPatientList.DeleteItem(i);
		}
	}
	m_wndSelectedList.EndLoad();
} 
void CHMSDailyFoodPatientListDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i = m_wndSelectedList.GetItemCount()-1; i >=0; i--)
	{
		if(m_wndSelectedList.GetCheck(i))
		{
			m_wndSelectedList.DeleteItem(i);
		}
	}

} 
void CHMSDailyFoodPatientListDialog::OnSelectedListDblClick(){
	int nSel = m_wndSelectedList.GetCurSel();
	if(nSel < 0) return;
	//CHMSFoodModifyItemDialog_EM dlg(this, VM_EDIT);
	
	/*dlg.m_szSheetKey = m_wndSelectedList.GetItemText(nSel, 7);
	dlg.m_szDescKey = m_wndSelectedList.GetItemText(nSel, 8);
	if(dlg.DoModal() == IDOK)
	{
		m_wndSelectedList.SetItemText(nSel, 5, dlg.m_szSheetName);
		m_wndSelectedList.SetItemText(nSel, 6, dlg.m_szDescName);
		m_wndSelectedList.SetItemText(nSel, 7, dlg.m_szSheetKey);
		m_wndSelectedList.SetItemText(nSel, 8, dlg.m_szDescKey);
		

	}*/
} 
void CHMSDailyFoodPatientListDialog::OnSelectedListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDailyFoodPatientListDialog::OnSelectedListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDailyFoodPatientListDialog::OnSelectedListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndSelectedList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSelectedList.AddItems(
		rs.MoveNext();
	}
	m_wndSelectedList.EndLoad(); 
	return nCount;
*/
	return 0;
}

void CHMSDailyFoodPatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nOrderID = 0;
	bool bAddFlag = false;
	CString szMfgID;
	
	if(!IsValidateData()) 
 		return ;

	//if (m_szDescKey.IsEmpty())
	//	ShowMessageBox(_T("Bạn chưa chọn bữa ăn cần báo!"));
	//	return;
	
	m_nQty = 1;

	if(ShowMessageBox(_T("Tác vụ này sẽ tạo phiếu báo ăn cho những bệnh nhân đã được chọn trên danh sách?"), MB_YESNO) == IDNO)
		return;	
	
	
	int nQty = 1;
	CString szFoodType, szDescription, szItemID;
	szFoodType = m_wndDesc.GetCurrent(4);
	
	for (int i =0; i < m_wndPatientList.GetItemCount(); i++)
	{
		if(m_wndPatientList.GetCheck(i))
		{
			m_nDocumentNo = str2long(m_wndPatientList.GetItemText(i, 1));
			m_nRoomID = str2long(m_wndPatientList.GetItemText(i, 10));
			m_nBedID = str2long(m_wndPatientList.GetItemText(i, 11));
			m_nRefIndex = str2long(m_wndPatientList.GetItemText(i, 12));
			m_nLevel = str2int(m_wndPatientList.GetItemText(i, 13));


			szItemID  = m_szDescKey;

			m_hms_feefodorderTbl.SetValue(_T("hfo_docno"), m_nDocumentNo);
			m_hms_feefodorderTbl.SetValue(_T("hfo_roomid"), m_nRoomID);
			m_hms_feefodorderTbl.SetValue(_T("hfo_bedid"), m_nBedID);
			m_hms_feefodorderTbl.SetValue(_T("hfo_refidx"), m_nRefIndex);	
			m_hms_feefodorderTbl.SetValue(_T("hfol_level"), 0);	

			if(!szItemID.IsEmpty())
			{
				
				m_hms_feefodorderTbl.SetValue(_T("hfol_qtyorder"), nQty);
				m_hms_feefodorderTbl.SetValue(_T("hfol_itemid"), szItemID);
				m_hms_feefodorderTbl.SetValue(_T("hfol_type"), szFoodType);
				m_hms_feefodorderTbl.SetValue(_T("hfol_level"), m_nLevel);
				szSQL.Format(_T("HMS_FEEFOOD_CREATELINE(%s)"), m_hms_feefodorderTbl.FormatSQL());
				pMF->ExecDML(szSQL);
				
			}			
			bAddFlag = true;
		}
	}

	if(bAddFlag)
		OnOK();	
	else
		ShowMessageBox(_T("No data"));
} 
void CHMSDailyFoodPatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 

int CHMSDailyFoodPatientListDialog::OnAddHMSDailyFoodPatientListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDailyFoodPatientListDialog::OnEditHMSDailyFoodPatientListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDailyFoodPatientListDialog::OnDeleteHMSDailyFoodPatientListDialog(){
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
 		OnCancelHMSDailyFoodPatientListDialog();
 	}
	return 0;
}
int CHMSDailyFoodPatientListDialog::OnSaveHMSDailyFoodPatientListDialog(){
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
 		//OnHMSDailyFoodPatientListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDailyFoodPatientListDialog::OnCancelHMSDailyFoodPatientListDialog(){
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
int CHMSDailyFoodPatientListDialog::OnHMSDailyFoodPatientListDialogListLoadData(){
	return 0;
}
