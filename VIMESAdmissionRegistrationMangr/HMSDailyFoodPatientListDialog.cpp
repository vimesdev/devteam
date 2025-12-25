#include "HMSDailyFoodPatientListDialog.h"
#include "MainFrm.h"
#include "HMSDailyFoodOrder.h"
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
static int _OnPatientListSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListSelectAllItem();
} 
static int _OnPatientListUnSelectAllItemFnc(CWnd *pWnd){
	 return ((CHMSDailyFoodPatientListDialog*)pWnd)->OnPatientListUnselectAllItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDailyFoodPatientListDialog *pVw = (CHMSDailyFoodPatientListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnAntruaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnAntruaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAntruaSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAntruaSelendok();
}
/*static void _OnAntruaSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAntruaKillfocus();
}*/
/*static void _OnAntruaKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAntruaKillfocus();
}*/
static long _OnAntruaLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnAntruaLoadData();
}
/*static void _OnAntruaAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAntruaAddNew();
}*/
static void _OnAnToiSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnAnToiSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAnToiSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAnToiSelendok();
}
/*static void _OnAnToiSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAnToiKillfocus();
}*/
/*static void _OnAnToiKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAnToiKillfocus();
}*/
static long _OnAnToiLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnAnToiLoadData();
}
/*static void _OnAnToiAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnAnToiAddNew();
}*/
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
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSheetOldSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDailyFoodPatientListDialog* )pWnd)->OnSheetOldSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSheetOldSelendokFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetOldSelendok();
}
/*static void _OnSheetOldSetfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetOldKillfocus();
}*/
/*static void _OnSheetOldKillfocusFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetOldKillfocus();
}*/
static long _OnSheetOldLoadDataFnc(CWnd *pWnd){
	return ((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetOldLoadData();
}
/*static void _OnSheetOldAddNewFnc(CWnd *pWnd){
	((CHMSDailyFoodPatientListDialog *)pWnd)->OnSheetOldAddNew();
}*/
static void _OnSheetFoodSelectOldSelectFnc(CWnd *pWnd){
	 ((CHMSDailyFoodPatientListDialog*)pWnd)->OnSheetFoodSelectOldSelect();
}

CHMSDailyFoodPatientListDialog::CHMSDailyFoodPatientListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 985;
	m_nDlgHeight = 585;
	SetDefaultValues();
}
CHMSDailyFoodPatientListDialog::~CHMSDailyFoodPatientListDialog(){
}
void CHMSDailyFoodPatientListDialog::OnCreateComponents(){	
	m_wndGroupPatientList.Create(this, _T("Patient List"), 5, 5, 975, 550);
	m_wndPatientList.Create(this,10, 10, 970, 545);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 400, 555, 520, 580);
	m_wndPatientName.Create(this, 525, 555, 785, 580);
	m_wndApply.Create(this, _T("&Apply"), 800, 555, 885, 580);
	m_wndClose.Create(this, _T("&Close"), 890, 555, 975, 580);	

	m_wndAntruaLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAntruaLabel.ShowWindow(SW_HIDE);
	m_wndAntruaLabel.EnableWindow(FALSE);
	m_wndAntrua.Create(this, 0, 0, 0, 0);
	m_wndAntrua.ShowWindow(SW_HIDE);
	m_wndAntrua.EnableWindow(FALSE);
	m_wndAnToiLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAnToiLabel.ShowWindow(SW_HIDE);
	m_wndAnToiLabel.EnableWindow(FALSE);
	m_wndAnToi.Create(this, 0, 0, 0, 0);
	m_wndAnToi.ShowWindow(SW_HIDE);
	m_wndAnToi.EnableWindow(FALSE);
	m_wndSheetOldLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndSheetOldLabel.ShowWindow(SW_HIDE);
	m_wndSheetOldLabel.EnableWindow(FALSE);
	m_wndSheetOld.Create(this, 0, 0, 0, 0);
	m_wndSheetOld.ShowWindow(SW_HIDE);
	m_wndSheetOld.EnableWindow(FALSE);
	m_wndSheetFoodSelectOld.Create(this, _T(""), 0, 0, 0, 0);
	m_wndSheetFoodSelectOld.ShowWindow(SW_HIDE);
	m_wndSheetFoodSelectOld.EnableWindow(FALSE);
}
void CHMSDailyFoodPatientListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndAntrua.SetCheckValue(true);
	m_wndAntrua.LimitText(35);
	//m_wndAnToi.SetCheckValue(true);
	m_wndAnToi.LimitText(35);

	m_wndPatientList.SetCheckBox(true);
	m_wndPatientList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndPatientList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 85);	
	m_wndPatientList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndPatientList.InsertColumn(4, _T("Age"), CFMT_TEXT|CFMT_CENTER, 50);	
	m_wndPatientList.InsertColumn(5, _T("Order Date"), CFMT_DATE, 120);	
	m_wndPatientList.InsertColumn(6, _T("\x102n tr\x1B0\x61"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(7, _T("\x102n t\x1ED1i"), CFMT_TEXT, 230);
	m_wndPatientList.InsertColumn(8, _T(""), CFMT_TEXT, 0);
	m_wndPatientList.InsertColumn(9, _T(""), CFMT_TEXT, 0);

	m_wndAntrua.InsertColumn(0, _T("ID"), CFMT_TEXT, 100); //refidx	
	m_wndAntrua.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 350);
	m_wndAntrua.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndAntrua.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndAntrua.InsertColumn(4, _T("GroupID"), CFMT_TEXT, 0);
	m_wndAntrua.InsertColumn(5, _T("ITEMID"), CFMT_TEXT, 0);
	
	m_wndAnToi.InsertColumn(0, _T("ID"), CFMT_TEXT, 100); //refidx	
	m_wndAnToi.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 350);
	m_wndAnToi.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndAnToi.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 70);
	m_wndAnToi.InsertColumn(4, _T("GroupID"), CFMT_TEXT, 0);
	m_wndAnToi.InsertColumn(5, _T("ITEMID"), CFMT_TEXT, 0);
	

	m_wndSheetOld.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndSheetOld.InsertColumn(1, _T("OrderDate"), CFMT_DATE, 120);
	m_wndSheetOld.InsertColumn(2, _T("Desc"), CFMT_TEXT, 250);
	m_wndSheetOld.InsertColumn(3, _T("OrderNo"), CFMT_TEXT, 0);

	m_hms_feefodorderTbl.SetTableName(_T("HMS_FEEFOOD"));
	
	m_hms_feefodorderTbl.AddField(_T("hfo_org_id"), dfText, 15);
	m_hms_feefodorderTbl.AddField(_T("hfo_user_id"), dfText, 15);
	m_hms_feefodorderTbl.AddField(_T("hfo_patientno"), dfLong); 
	m_hms_feefodorderTbl.AddField(_T("hfo_docno"), dfLong); 
	m_hms_feefodorderTbl.AddField(_T("hfo_deptid"), dfText, 7); 
	m_hms_feefodorderTbl.AddField(_T("hfo_refidx"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_roomid"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_bedid"), dfInteger); 
	m_hms_feefodorderTbl.AddField(_T("hfo_ordertype"), dfText, 1); 
	m_hms_feefodorderTbl.AddField(_T("hfo_orderdate"), dfDateTime); 
	m_hms_feefodorderTbl.AddField(_T("hfo_doctor"), dfText, 15); 	
	m_hms_feefodorderTbl.AddField(_T("hfo_reforder_id"), dfLong); 
	
	
	m_hms_feefodorderlineTbl.SetTableName(_T("HMS_FEEFOODLINE"));	
	m_hms_feefodorderlineTbl.AddField(_T("hfol_orderid"), dfLong); 
	m_hms_feefodorderlineTbl.AddField(_T("hfol_groupid"), dfText); 
	m_hms_feefodorderlineTbl.AddField(_T("hfol_itemid"), dfText); 
	m_hms_feefodorderlineTbl.AddField(_T("hfol_qtyorder"), dfInteger); 
	m_hms_feefodorderlineTbl.AddField(_T("hfol_type"), dfText); 
	m_hms_feefodorderlineTbl.AddField(_T("hfol_desc"), dfText, 254); 

}
void CHMSDailyFoodPatientListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientList.SetEvent(WE_SELCHANGE, _OnPatientListSelectChangeFnc);
	m_wndPatientList.SetEvent(WE_LOADDATA, _OnPatientListLoadDataFnc);
	m_wndPatientList.SetEvent(WE_DBLCLICK, _OnPatientListDblClickFnc);
	m_wndPatientList.AddEvent(1, _T("Select All"), _OnPatientListSelectAllItemFnc);
	m_wndPatientList.AddEvent(0, _T("-"));
	m_wndPatientList.AddEvent(2, _T("Unselect All"), _OnPatientListUnSelectAllItemFnc);
	//m_wndPatientList.AddEvent(1, _T("Delete"), _OnPatientListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndAntrua.SetEvent(WE_SELENDOK, _OnAntruaSelendokFnc);
	//m_wndAntrua.SetEvent(WE_SETFOCUS, _OnAntruaSetfocusFnc);
	//m_wndAntrua.SetEvent(WE_KILLFOCUS, _OnAntruaKillfocusFnc);
	m_wndAntrua.SetEvent(WE_SELCHANGE, _OnAntruaSelectChangeFnc);
	m_wndAntrua.SetEvent(WE_LOADDATA, _OnAntruaLoadDataFnc);
	//m_wndAntrua.SetEvent(WE_ADDNEW, _OnAntruaAddNewFnc);
	m_wndAnToi.SetEvent(WE_SELENDOK, _OnAnToiSelendokFnc);
	//m_wndAnToi.SetEvent(WE_SETFOCUS, _OnAnToiSetfocusFnc);
	//m_wndAnToi.SetEvent(WE_KILLFOCUS, _OnAnToiKillfocusFnc);
	m_wndAnToi.SetEvent(WE_SELCHANGE, _OnAnToiSelectChangeFnc);
	m_wndAnToi.SetEvent(WE_LOADDATA, _OnAnToiLoadDataFnc);
	//m_wndAnToi.SetEvent(WE_ADDNEW, _OnAnToiAddNewFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);

	m_wndSheetOld.SetEvent(WE_SELENDOK, _OnSheetOldSelendokFnc);
	//m_wndSheetOld.SetEvent(WE_SETFOCUS, _OnSheetOldSetfocusFnc);
	//m_wndSheetOld.SetEvent(WE_KILLFOCUS, _OnSheetOldKillfocusFnc);
	m_wndSheetOld.SetEvent(WE_SELCHANGE, _OnSheetOldSelectChangeFnc);
	m_wndSheetOld.SetEvent(WE_LOADDATA, _OnSheetOldLoadDataFnc);
	//m_wndSheetOld.SetEvent(WE_ADDNEW, _OnSheetOldAddNewFnc);

	m_wndSheetFoodSelectOld.SetEvent(WE_CLICK, _OnSheetFoodSelectOldSelectFnc);

	SetMode(VM_NONE);
	m_wndSheetOld.EnableWindow(false);
	OnPatientListLoadData();

}
void CHMSDailyFoodPatientListDialog::OnDoDataExchange(CDataExchange* pDX){	
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
	m_hms_feefodorderTbl.SetValue(_T("hfo_patientno"), m_nPatientNo);
	m_hms_feefodorderTbl.SetValue(_T("hfo_docno"), m_nDocumentNo);
	m_hms_feefodorderTbl.SetValue(_T("hfo_deptid"), pMF->m_szDept);
	m_hms_feefodorderTbl.SetValue(_T("hfo_roomid"), m_nRoomID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_bedid"), m_nBedID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_refidx"), m_nRefIndex);	
	m_hms_feefodorderTbl.SetValue(_T("hfo_ordertype"), _T("D"));
	m_hms_feefodorderTbl.SetValue(_T("hfo_orderdate"), m_szOrderDate);
	m_hms_feefodorderTbl.SetValue(_T("hfo_reforder_id"), m_nOID);
	m_hms_feefodorderTbl.SetValue(_T("hfo_doctor"), m_szDoctor);
	
		
	m_hms_feefodorderlineTbl.SetValue(_T("hfol_orderid"), 0);	
	m_hms_feefodorderlineTbl.SetValue(_T("hfol_groupid"), _T("FF000"));
	m_hms_feefodorderlineTbl.SetValue(_T("hfol_itemid"), m_szAntruaKey);
	m_hms_feefodorderlineTbl.SetValue(_T("hfol_qtyorder"), m_nQty);
	m_hms_feefodorderlineTbl.SetValue(_T("hfol_type"), _T("S"));
	m_hms_feefodorderlineTbl.SetValue(_T("hfol_desc"), m_szUsage);

}
void CHMSDailyFoodPatientListDialog::SetDefaultValues(){

	m_szAntruaKey.Empty();
	m_szAnToiKey.Empty();
	m_nQty = 1;
	m_nPatientNo = 0;
	m_nDocumentNo = 0;
	m_nRoomID = 0;
	m_nBedID = 0;
	m_nRefIndex = 0;
	m_szPatientName.Empty();
	m_nOrderNoOld=0;

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
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSDailyFoodPatientListDialog::OnPatientListDblClick(){
	int nSel = m_wndPatientList.GetCurSel();
	if(m_wndPatientList.GetCheck(nSel))
		m_wndPatientList.SetCheck(nSel, false);
	else
		m_wndPatientList.SetCheck(nSel, true);

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
long CHMSDailyFoodPatientListDialog::OnPatientListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPatientList.BeginLoad(); 
	
			szSQL.Format(_T(" SELECT hp_patientno AS patientno,") \
	_T("   hd_docno          AS docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                 AS pname,") \
	_T("   extract(YEAR FROM hp_birthdate) AS age,") \
	_T("   (SELECT DISTINCT ss_desc") \
	_T("   FROM sys_sel") \
	_T("   WHERE ss_id='hrm_sex'") \
	_T("   AND ss_code=hp_sex") \
	_T("   ) AS sex,") \
	_T("   trunc_date(hfo_orderdate) AS admitdate,") \
	_T("   (SELECT DISTINCT hfol_itemid") \
	_T("   FROM hms_feefoodline") \
	_T("   WHERE hfol_orderid=hfo_orderid") \
	_T("   AND hfol_type     ='T'") \
	_T("   ) AS lunch_item,") \
	_T("   (SELECT DISTINCT hfl_name") \
	_T("   FROM hms_feefoodline") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(hfl_feeid      =hfol_itemid)") \
	_T("   WHERE hfol_orderid=hfo_orderid") \
	_T("   AND hfol_type     ='T'") \
	_T("   ) AS lunch_name,") \
	_T("   (SELECT DISTINCT hfol_itemid") \
	_T("   FROM hms_feefoodline") \
	_T("   WHERE hfol_orderid=hfo_orderid") \
	_T("   AND hfol_type     ='C'") \
	_T("   ) AS dinner_item,") \
	_T("   (SELECT DISTINCT hfl_name") \
	_T("   FROM hms_feefoodline") \
	_T("   LEFT JOIN hms_fee_list") \
	_T("   ON(hfl_feeid      =hfol_itemid)") \
	_T("   WHERE hfol_orderid=hfo_orderid") \
	_T("   AND hfol_type     ='C'") \
	_T("   ) AS dinner_name") \
	_T(" FROM hms_feefood") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=hfo_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hd_patientno     =hp_patientno)") \
	_T(" WHERE hfo_deptid    ='%s'") \
	_T(" AND hd_status       ='T'") \
	_T(" AND hfo_orderstatus ='O'") \
	_T(" AND hfo_reforder_id <=0 ") \
	_T(" ORDER BY hp_firstname,") \
	_T("   admitdate,") \
	_T("   pname"), pMF->m_szDept);

	_fmsg(_T("%s"), szSQL);
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
			rs.GetValue(_T("age")),			
			CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("lunch_name")), 
			rs.GetValue(_T("dinner_name")),
			rs.GetValue(_T("lunch_item")), 
			rs.GetValue(_T("dinner_item")),
			NULL);
		m_wndPatientList.SetCheck(nItem, true);
		rs.MoveNext();
	}
	m_wndPatientList.EndLoad(); 
	return nCount;

}
void CHMSDailyFoodPatientListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();		
	CString szSQL;
	CRecord rs(&pMF->m_db);
	long nOrderID = 0, nDocumentNo;
	
	CString szMfgID;
	
	if(!IsValidateData()) 
 		return ; 
	
	m_nQty = 1;

	if(ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y s\x1EBD t\x1EA1o phi\x1EBFu \x62\xE1o \x103n \x63ho nh\x1EEFng \x62\x1EC7nh nh\xE2n \x111\xE3 \x111\x1B0\x1EE3\x63 \x63h\x1ECDn."), MB_YESNO) == IDNO)
		return;	
	
	
	for(int i=0; i < m_wndPatientList.GetItemCount(); i++)
	{
		if(m_wndPatientList.GetCheck(i)== TRUE)
		{
			nDocumentNo = ToLong(m_wndPatientList.GetItemText(i, 1));
			szSQL.Format(_T("UPDATE hms_feefood SET hfo_reforder_id=%ld WHERE hfo_docno=%ld AND hfo_deptid='%s' AND hfo_orderstatus='O' "), m_nOID,nDocumentNo, pMF->m_szDept);
			
			pMF->ExecSQL(szSQL);
		}
	}
		
	
	OnOK();	
} 
void CHMSDailyFoodPatientListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSDailyFoodPatientListDialog::OnAntruaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnAntruaSelendok(){
	 
}
/*void CHMSDailyFoodPatientListDialog::OnAntruaSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnAntruaKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnAntruaLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndAntrua.IsSearchKey() && m_szAntruaKey){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szAntruaKey);
	};
	
	m_wndAntrua.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_idx,hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndAntrua.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			rs.GetValue(_T("itemid")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDailyFoodPatientListDialog::OnAntruaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyFoodPatientListDialog::OnAnToiSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDailyFoodPatientListDialog::OnAnToiSelendok(){
	 
}
/*void CHMSDailyFoodPatientListDialog::OnAnToiSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnAnToiKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnAnToiLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if(m_wndAnToi.IsSearchKey() && m_szAnToiKey){
		szWhere.Format(_T(" AND hfl_name2='%s' "), m_szAnToiKey);
	};
	
	m_wndAnToi.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT  hfl_idx,hfl_name2 as id,") \
_T(" 	hfl_feeid as itemid, ") \
_T(" 	hfl_name as name, ") \
_T(" 	hfl_unit as unit, ") \
_T(" 	hfl_servprice as unitprice,") \
_T(" 	hfl_groupid as groupid, ") \
_T(" 	hfl_typeid as typeid ") \
_T(" FROM hms_fee_list ") \
_T(" WHERE hfl_typeid = 'F' and hfl_groupid = 'FF000' and hfl_active='Y' %s ") \
_T(" ORDER BY hfl_idx, name, unit, unitprice "), szWhere );
	nCount = rs.ExecSQL(szSQL);
_tprintf(_T("%s"), szSQL);

_fmsg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndAnToi.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("unitprice")), 
			rs.GetValue(_T("groupid")), 
			rs.GetValue(_T("itemid")),			
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDailyFoodPatientListDialog::OnAnToiAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDailyFoodPatientListDialog::OnSheetFoodSelectOldSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bSheetFoodSelectOld)
	{		
		m_wndSheetOld.EnableWindow(true);
	}
	else
	{		
		m_wndSheetOld.EnableWindow(false);
	}
	UpdateData(false);
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
int CHMSDailyFoodPatientListDialog::OnPatientNameCheckValue(){
	
	OnPatientListLoadData();
	return 1;
} 
void CHMSDailyFoodPatientListDialog::OnSheetOldSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nOrderNoOld = ToLong(m_wndSheetOld.GetCurrent(3));
} 
void CHMSDailyFoodPatientListDialog::OnSheetOldSelendok(){
	 m_nOrderNoOld = ToLong(m_wndSheetOld.GetCurrent(3));
	 OnPatientListLoadData();
}
/*void CHMSDailyFoodPatientListDialog::OnSheetOldSetfocus(){
	
}*/
/*void CHMSDailyFoodPatientListDialog::OnSheetOldKillfocus(){
	
}*/
long CHMSDailyFoodPatientListDialog::OnSheetOldLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndSheetOld.IsSearchKey() && !m_szSheetOldKey.IsEmpty()){
	 szWhere.Format(_T(" and hfos_sheetno='%s' "), m_szSheetOldKey);
	};
	m_wndSheetOld.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfos_sheetno, TRUNC_DATE(hfos_orderdate) as hfos_orderdate, hfos_description, HFOS_ORDERID FROM hms_foodordersheet WHERE hfos_deptid='%s' AND TRUNC_DATE(hfos_orderdate) BETWEEN to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')-10 AND to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss') AND hfos_orderid not in(%d)%s"), pMF->m_szDept,pMF->GetSysDate(), pMF->GetSysDate(), m_nOID, szWhere);
//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSheetOld.AddItems(
			rs.GetValue(_T("hfos_sheetno")), 
			CDate::Convert(rs.GetValue(_T("hfos_orderdate")), yyyymmdd, ddmmyyyy),
			rs.GetValue(_T("hfos_description")),
			rs.GetValue(_T("HFOS_ORDERID")),
			NULL);
		rs.MoveNext();
	}
	return nCount;


}
/*void CHMSDailyFoodPatientListDialog::OnSheetOldAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */

