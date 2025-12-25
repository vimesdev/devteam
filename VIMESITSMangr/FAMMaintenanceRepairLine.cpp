#include "FAMMaintenanceRepairLine.h"
#include "MainFrm.h"
static long _OnItemListLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine*)pWnd)->OnItemListLoadData();
} 
static void _OnItemListDblClickFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine*)pWnd)->OnItemListDblClick();
} 
static void _OnItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CFAMMaintenanceRepairLine*)pWnd)->OnItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairLine*)pWnd)->OnItemListDeleteItem();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMMaintenanceRepairLine* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMMaintenanceRepairLine* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnItemNameAddNew();
}*/
static void _OnConditionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CFAMMaintenanceRepairLine* )pWnd)->OnConditionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnConditionSelendokFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnConditionSelendok();
}
/*static void _OnConditionSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnConditionKillfocus();
}*/
/*static void _OnConditionKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnConditionKillfocus();
}*/
static long _OnConditionLoadDataFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnConditionLoadData();
}
/*static void _OnConditionAddNewFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnConditionAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnNextScheduleChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnNextScheduleChange();
} */
/*static void _OnNextScheduleSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnNextScheduleSetfocus();} */ 
/*static void _OnNextScheduleKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnNextScheduleKillfocus();
} */
static int _OnNextScheduleCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnNextScheduleCheckValue();
} 
/*static void _OnCauseChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnCauseChange();
} */
/*static void _OnCauseSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnCauseSetfocus();} */ 
/*static void _OnCauseKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnCauseKillfocus();
} */
static int _OnCauseCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnCauseCheckValue();
} 
/*static void _OnRepairContentChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnRepairContentChange();
} */
/*static void _OnRepairContentSetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnRepairContentSetfocus();} */ 
/*static void _OnRepairContentKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnRepairContentKillfocus();
} */
static int _OnRepairContentCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnRepairContentCheckValue();
} 
/*static void _OnPerformedByChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnPerformedByChange();
} */
/*static void _OnPerformedBySetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnPerformedBySetfocus();} */ 
/*static void _OnPerformedByKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnPerformedByKillfocus();
} */
static int _OnPerformedByCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnPerformedByCheckValue();
} 
/*static void _OnMoneyChangeFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnMoneyChange();
} */
/*static void _OnMoneySetfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnMoneySetfocus();} */ 
/*static void _OnMoneyKillfocusFnc(CWnd *pWnd){
	((CFAMMaintenanceRepairLine *)pWnd)->OnMoneyKillfocus();
} */
static int _OnMoneyCheckValueFnc(CWnd *pWnd){
	return ((CFAMMaintenanceRepairLine *)pWnd)->OnMoneyCheckValue();
} 
static void _OnSaveItemSelectFnc(CWnd *pWnd){
	CFAMMaintenanceRepairLine *pVw = (CFAMMaintenanceRepairLine *)pWnd;
	pVw->OnSaveItemSelect();
} 
static int _OnAddFAMMaintenanceRepairLineFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairLine*)pWnd)->OnAddFAMMaintenanceRepairLine();
} 
static int _OnEditFAMMaintenanceRepairLineFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairLine*)pWnd)->OnEditFAMMaintenanceRepairLine();
} 
static int _OnDeleteFAMMaintenanceRepairLineFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairLine*)pWnd)->OnDeleteFAMMaintenanceRepairLine();
} 
static int _OnSaveFAMMaintenanceRepairLineFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairLine*)pWnd)->OnSaveFAMMaintenanceRepairLine();
} 
static int _OnCancelFAMMaintenanceRepairLineFnc(CWnd *pWnd){
	 return ((CFAMMaintenanceRepairLine*)pWnd)->OnCancelFAMMaintenanceRepairLine();
} 
CFAMMaintenanceRepairLine::CFAMMaintenanceRepairLine(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CFAMMaintenanceRepairLine::~CFAMMaintenanceRepairLine(){
}
void CFAMMaintenanceRepairLine::OnCreateComponents(){
	/*m_wndItemList.Create(this,5, 5, 790, 260); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 265, 85, 290);
	m_wndDepartment.Create(this,90, 264, 250, 289); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 255, 265, 335, 290);
	m_wndItemName.Create(this,340, 265, 790, 290); 
	m_wndConditionLabel.Create(this, _T("Condition"), 5, 295, 85, 320);
	m_wndCondition.Create(this,90, 295, 250, 320); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 255, 295, 335, 320);
	m_wndFromDate.Create(this,340, 295, 420, 320); 
	m_wndToDateLabel.Create(this, _T("To Date"), 425, 295, 505, 320);
	m_wndToDate.Create(this,510, 295, 590, 320); 
	m_wndNextScheduleLabel.Create(this, _T("Next Scheduled"), 595, 295, 695, 320);
	m_wndNextSchedule.Create(this,700, 295, 790, 320); 
	m_wndCauseLabel.Create(this, _T("Cause"), 5, 325, 85, 350);
	m_wndCause.Create(this,90, 325, 420, 350); 
	m_wndRepairContentLabel.Create(this, _T("Repair Content"), 425, 325, 505, 350);
	m_wndRepairContent.Create(this,510, 325, 790, 350); 
	m_wndPerformedBylabel.Create(this, _T("Performed By"), 5, 355, 85, 380);
	m_wndPerformedBy.Create(this,90, 355, 420, 380); 
	m_wndMoneyLabel.Create(this, _T("Money"), 425, 355, 505, 380);
	m_wndMoney.Create(this,511, 355, 706, 380); 
	m_wndSaveItem.Create(this, _T("+"), 710, 355, 790, 380);*/

	m_wndItemList.Create(this,5, 5, 790, 260); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 5, 265, 95, 290);
	m_wndDepartment.Create(this,100, 264, 250, 289); 
	m_wndItemNameLabel.Create(this, _T("Item Name"), 255, 265, 335, 290);
	m_wndItemName.Create(this,340, 265, 790, 290); 
	m_wndConditionLabel.Create(this, _T("Condition"), 5, 295, 95, 320);
	m_wndCondition.Create(this,100, 295, 250, 320); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 255, 295, 335, 320);
	m_wndFromDate.Create(this,340, 295, 420, 320); 
	m_wndToDateLabel.Create(this, _T("To Date"), 425, 295, 505, 320);
	m_wndToDate.Create(this,510, 295, 590, 320); 
	m_wndNextScheduleLabel.Create(this, _T("Next Scheduled"), 595, 295, 695, 320);
	m_wndNextSchedule.Create(this,700, 295, 790, 320); 
	m_wndCauseLabel.Create(this, _T("Cause"), 5, 325, 95, 350);
	m_wndCause.Create(this,100, 325, 420, 350); 
	m_wndRepairContentLabel.Create(this, _T("Repair Content"), 425, 325, 505, 350);
	m_wndRepairContent.Create(this,510, 325, 790, 350); 
	m_wndPerformedBylabel.Create(this, _T("Performed By"), 5, 355, 95, 380);
	m_wndPerformedBy.Create(this,100, 355, 420, 380); 
	m_wndMoneyLabel.Create(this, _T("Money"), 425, 355, 505, 380);
	m_wndMoney.Create(this,510, 355, 705, 380); 
	m_wndSaveItem.Create(this, _T("+"), 710, 355, 790, 380);

}
void CFAMMaintenanceRepairLine::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.LimitText(35);
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(1024);
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetCheckValue(true);
	m_wndMoney.SetLimitText(16);
	m_wndMoney.SetCurrencyFormat(true);
	m_wndPerformedBy.SetLimitText(128);


	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCondition.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCondition.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndItemList.InsertColumn(0, _T("STT"), CFMT_TEXT, 50);
	m_wndItemList.InsertColumn(1, _T("Asset No"), CFMT_TEXT, 120);
	m_wndItemList.InsertColumn(2, _T("Asset Name"), CFMT_TEXT, 200);
	m_wndItemList.InsertColumn(3, _T("Model"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(4, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemList.InsertColumn(5, _T("From Date"), CFMT_TEXT, 85);
	m_wndItemList.InsertColumn(6, _T("To Date"), CFMT_TEXT, 85);
	m_wndItemList.InsertColumn(7, _T("Next Scheduled"), CFMT_TEXT, 85);
	m_wndItemList.InsertColumn(8, _T("Money"), CFMT_MONEY, 100);
	m_wndItemList.InsertColumn(9, _T("Performed By"), CFMT_TEXT, 100);

	m_wndItemName.InsertColumn(0, _T("Asset No"), CFMT_TEXT, 150);
	m_wndItemName.InsertColumn(1, _T("Asset Name"), CFMT_TEXT, 350);
	m_wndItemName.InsertColumn(2, _T("Model"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(3, _T("Serial"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Unit"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(5, _T("Type"), CFMT_TEXT, 50);
	m_wndItemName.InsertColumn(6, _T("TranID"), CFMT_TEXT, 0);

	m_tbl_line.SetTableName(_T("fam_maintenance_repair_l"));
	m_tbl_line.AddField(_T("fmrl_createdby"), dfText, 15);
	m_tbl_line.AddField(_T("fmrl_createddate"), dfDateTime);
	m_tbl_line.AddField(_T("fmrl_updatedby"), dfText, 15);
	m_tbl_line.AddField(_T("fmrl_updateddate"), dfDateTime);
	m_tbl_line.AddField(_T("fmrl_orderno"), dfText, 30);
	m_tbl_line.AddField(_T("fmrl_idx"), dfLong);
	m_tbl_line.AddField(_T("fmrl_assetno"), dfText, 30);
	m_tbl_line.AddField(_T("fmrl_name"), dfText, 250);
	m_tbl_line.AddField(_T("fmrl_fromdate"), dfDate);
	m_tbl_line.AddField(_T("fmrl_todate"), dfDate);
	m_tbl_line.AddField(_T("fmrl_nextschedule"), dfDate);
	m_tbl_line.AddField(_T("fmrl_money"), dfDouble);
	m_tbl_line.AddField(_T("fmrl_performedby"), dfText, 128);
	m_tbl_line.AddField(_T("fmrl_status"), dfText, 20);
	m_tbl_line.AddField(_T("fmrl_cause"), dfText, 250);
	m_tbl_line.AddField(_T("fmrl_content"), dfText, 250);
	m_tbl_line.AddField(_T("fmrl_note"), dfText, 250);

}
void CFAMMaintenanceRepairLine::OnSetWindowEvents(){
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
	m_wndCondition.SetEvent(WE_SELENDOK, _OnConditionSelendokFnc);
	//m_wndCondition.SetEvent(WE_SETFOCUS, _OnConditionSetfocusFnc);
	//m_wndCondition.SetEvent(WE_KILLFOCUS, _OnConditionKillfocusFnc);
	m_wndCondition.SetEvent(WE_SELCHANGE, _OnConditionSelectChangeFnc);
	m_wndCondition.SetEvent(WE_LOADDATA, _OnConditionLoadDataFnc);
	//m_wndCondition.SetEvent(WE_ADDNEW, _OnConditionAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndNextSchedule.SetEvent(WE_CHANGE, _OnNextScheduleChangeFnc);
	//m_wndNextSchedule.SetEvent(WE_SETFOCUS, _OnNextScheduleSetfocusFnc);
	//m_wndNextSchedule.SetEvent(WE_KILLFOCUS, _OnNextScheduleKillfocusFnc);
	m_wndNextSchedule.SetEvent(WE_CHECKVALUE, _OnNextScheduleCheckValueFnc);
	//m_wndCause.SetEvent(WE_CHANGE, _OnCauseChangeFnc);
	//m_wndCause.SetEvent(WE_SETFOCUS, _OnCauseSetfocusFnc);
	//m_wndCause.SetEvent(WE_KILLFOCUS, _OnCauseKillfocusFnc);
	m_wndCause.SetEvent(WE_CHECKVALUE, _OnCauseCheckValueFnc);
	//m_wndRepairContent.SetEvent(WE_CHANGE, _OnRepairContentChangeFnc);
	//m_wndRepairContent.SetEvent(WE_SETFOCUS, _OnRepairContentSetfocusFnc);
	//m_wndRepairContent.SetEvent(WE_KILLFOCUS, _OnRepairContentKillfocusFnc);
	m_wndRepairContent.SetEvent(WE_CHECKVALUE, _OnRepairContentCheckValueFnc);
	//m_wndPerformedBy.SetEvent(WE_CHANGE, _OnPerformedByChangeFnc);
	//m_wndPerformedBy.SetEvent(WE_SETFOCUS, _OnPerformedBySetfocusFnc);
	//m_wndPerformedBy.SetEvent(WE_KILLFOCUS, _OnPerformedByKillfocusFnc);
	m_wndPerformedBy.SetEvent(WE_CHECKVALUE, _OnPerformedByCheckValueFnc);
	//m_wndMoney.SetEvent(WE_CHANGE, _OnMoneyChangeFnc);
	//m_wndMoney.SetEvent(WE_SETFOCUS, _OnMoneySetfocusFnc);
	//m_wndMoney.SetEvent(WE_KILLFOCUS, _OnMoneyKillfocusFnc);
	m_wndMoney.SetEvent(WE_CHECKVALUE, _OnMoneyCheckValueFnc);
	m_wndSaveItem.SetEvent(WE_CLICK, _OnSaveItemSelectFnc);
	

}
void CFAMMaintenanceRepairLine::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_TextEx(pDX, m_wndCondition.GetDlgCtrlID(), m_szConditionKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndNextSchedule.GetDlgCtrlID(), m_szNextSchedule);
	DDX_Text(pDX, m_wndCause.GetDlgCtrlID(), m_szCause);
	DDX_Text(pDX, m_wndRepairContent.GetDlgCtrlID(), m_szRepairContent);
	DDX_Text(pDX, m_wndPerformedBy.GetDlgCtrlID(), m_szPerformedBy);
	DDX_Text(pDX, m_wndMoney.GetDlgCtrlID(), m_nMoney);

}
void CFAMMaintenanceRepairLine::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CFAMMaintenanceRepairLine::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	
	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT coalesce(max(fmrl_idx), 0)+1 FROM fam_maintenance_repair_l where fmrl_orderno='%s'"), m_szOrderNo);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
	}
	m_tbl_line.SetValue(_T("fmrl_createdby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fmrl_createddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fmrl_updatedby"), pMF->GetCurrentUser());
	m_tbl_line.SetValue(_T("fmrl_updateddate"), pMF->GetSysDateTime());
	m_tbl_line.SetValue(_T("fmrl_orderno"), m_szOrderNo);
	m_tbl_line.SetValue(_T("fmrl_idx"), m_nIndex);
	m_tbl_line.SetValue(_T("fmrl_assetno"), m_szItemNameKey);
	m_tbl_line.SetValue(_T("fmrl_name"), m_szName);
	m_tbl_line.SetValue(_T("fmrl_fromdate"), m_szFromDate);
	m_tbl_line.SetValue(_T("fmrl_todate"), m_szToDate);
	m_tbl_line.SetValue(_T("fmrl_nextschedule"), m_szNextSchedule);
	m_tbl_line.SetValue(_T("fmrl_money"), m_nMoney);
	m_tbl_line.SetValue(_T("fmrl_performedby"), m_szPerformedBy);
	m_tbl_line.SetValue(_T("fmrl_content"), m_szRepairContent);
	m_tbl_line.SetValue(_T("fmrl_cause"), m_szCause);
	m_tbl_line.SetValue(_T("fmrl_status"), m_szConditionKey);


}
void CFAMMaintenanceRepairLine::SetDefaultValues(){

	//m_szDepartmentKey.Empty();
	m_szItemNameKey.Empty();
	m_szConditionKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szNextSchedule.Empty();
	m_szCause.Empty();
	m_szRepairContent.Empty();
	m_szPerformedBy.Empty();
	m_nMoney=0;
}
int CFAMMaintenanceRepairLine::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
			m_szFromDate = m_szToDate = m_szNextSchedule = pMF->GetSysDate();
			if(m_szType == _T("2"))
			{
				m_wndCondition.EnableWindow(FALSE);
				m_wndCause.EnableWindow(FALSE);
				m_wndRepairContent.EnableWindow(FALSE);
			}
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
			m_szFromDate = m_szToDate = m_szNextSchedule = pMF->GetSysDate();
			if(m_szType == _T("2"))
			{
				m_wndCondition.EnableWindow(FALSE);
				m_wndCause.EnableWindow(FALSE);
				m_wndRepairContent.EnableWindow(FALSE);
			}
			OnItemListLoadData();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
			OnItemListLoadData();
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
void CFAMMaintenanceRepairLine::OnItemListDblClick(){
	
} 
void CFAMMaintenanceRepairLine::OnItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nIndex = str2long(m_wndItemList.GetItemText(nNewItem, 0));
} 
int CFAMMaintenanceRepairLine::OnItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szUpdate;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	if(GetMode() == VM_VIEW)
		return -1;
	szSQL.Format(_T("DELETE FROM fam_maintenance_repair_l WHERE fmrl_orderno = '%s' AND fmrl_idx = %ld"), m_szOrderNo, m_nIndex);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
		OnItemListLoadData();
 	}
	return 0;
} 
long CFAMMaintenanceRepairLine::OnItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItemList.BeginLoad(); 
	int nCount = 0;
	//szSQL.Format(_T("SELECT * FROM fam_maintenance_repair_l WHERE fmrl_orderno = '%s' ORDER BY fmrl_idx"), m_szOrderNo);
	szSQL.Format(_T("SELECT fmrl_idx, fmrl_assetno, fmrl_name, fmrl_fromdate, fmrl_todate, ") \
				_T(" fmrl_nextschedule, fmrl_money, fmrl_performedby, fmrl_note, fa_model, fa_serial ") \
				_T(" FROM fam_maintenance_repair_l") \
				_T(" LEFT JOIN fam_asset ON(fa_assetno = fmrl_assetno) ") \
				_T(" WHERE fmrl_orderno = '%s' ORDER BY fmrl_idx"), m_szOrderNo);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemList.AddItems(
			rs.GetValue(_T("fmrl_idx")),
			rs.GetValue(_T("fmrl_assetno")), 
			rs.GetValue(_T("fmrl_name")),
			rs.GetValue(_T("fa_model")),
			rs.GetValue(_T("fa_serial")),
			CDate::Convert(rs.GetValue(_T("fmrl_fromdate")), yyyymmdd, ddmmyyyy), 
			CDate::Convert(rs.GetValue(_T("fmrl_todate")), yyyymmdd, ddmmyyyy), 
			CDate::Convert(rs.GetValue(_T("fmrl_nextschedule")), yyyymmdd, ddmmyyyy), 
			rs.GetValue(_T("fmrl_money")),
			rs.GetValue(_T("fmrl_performedby")),
			rs.GetValue(_T("fmrl_note")), NULL);
		rs.MoveNext();
	}
	m_wndItemList.EndLoad(); 
	return nCount;
}
void CFAMMaintenanceRepairLine::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CFAMMaintenanceRepairLine::OnDepartmentSelendok(){
	UpdateData(TRUE); 
}
/*void CFAMMaintenanceRepairLine::OnDepartmentSetfocus(){
	
}*/
/*void CFAMMaintenanceRepairLine::OnDepartmentKillfocus(){
	
}*/
long CFAMMaintenanceRepairLine::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
		szWhere.Format(_T(" and sl_storage_id='%s' "), m_szDepartmentKey);
	}
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sl_storage_id as id, sl_name as name FROM storage_location WHERE sl_org_id IN('GL', '%s') %s ORDER BY sl_storage_id "), pMF->GetModuleID(),szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CFAMMaintenanceRepairLine::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMMaintenanceRepairLine::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMMaintenanceRepairLine::OnItemNameSelendok(){
	  m_szName = m_wndItemName.GetCurrent(1);
	  m_szTranID = m_wndItemName.GetCurrent(5);
}
/*void CFAMMaintenanceRepairLine::OnItemNameSetfocus(){
	
}*/
/*void CFAMMaintenanceRepairLine::OnItemNameKillfocus(){
	
}*/
long CFAMMaintenanceRepairLine::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szIdx;
	m_wndItemName.BeginWaitCursor(); 
	int nCount = 0;
	if(!m_szDepartmentKey.IsEmpty())
	{
		szWhere.Format(_T(" and sb_storage_id = '%s'"), m_szDepartmentKey);
		//szWhere.AppendFormat(_T(" and fa_department = '%s' "), m_szDepartmentKey);
	}
	if(!m_szItemNameKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and si_item_id = '%s' "), m_szItemNameKey);
	}
	/*szSQL.Format(_T(" SELECT sb_storage_id, sb_item_id, fal_assetname, fal_model, fal_type,(select ss_desc from sys_sel where ss_id = 'fam_uom' and ss_code = fal_unit) as unit ") \
			_T(" FROM storage_bin ") \
			_T(" LEFT JOIN fam_asset_list ON(fal_assetno = sb_item_id) ") \
			_T(" WHERE 1=1 %s "), szWhere);*/
	/*szSQL.Format(_T(" SELECT fa_assetno, fa_name, fa_model, fa_type, fa_strgtransline_id, fa_serial,") \
			_T(" (select ss_desc from sys_sel where ss_id = 'its_uom' and ss_code = fa_unit) as unit ") \
			_T(" FROM fam_asset ") \
			_T(" WHERE 1=1 %s "), szWhere);*/
	szSQL.Format(_T(" SELECT si_item_id, si_name, si_model, si_serial, ") \
				_T(" STORAGE_GET_UOMNAME(sil_uom_id) as unit ") \
				_T(" FROM ") \
				_T(" storage_item ") \
				_T(" LEFT JOIN storage_item_list ON (sil_item_list_id = si_item_list_id) ") \
				_T(" LEFT JOIN storage_bin ON (sb_item_id = si_item_id) ") \
				_T(" WHERE sb_qtyonhand > 0 %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("si_item_id")),
			rs.GetValue(_T("si_name")),
			rs.GetValue(_T("si_model")),
			rs.GetValue(_T("si_serial")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("fa_type")),
			rs.GetValue(_T("fa_strgtransline_id")),
			NULL);
		rs.MoveNext();
	}
	m_wndItemName.EndWaitCursor(); 
	return nCount;
}
/*void CFAMMaintenanceRepairLine::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CFAMMaintenanceRepairLine::OnConditionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CFAMMaintenanceRepairLine::OnConditionSelendok(){
	 
}
/*void CFAMMaintenanceRepairLine::OnConditionSetfocus(){
	
}*/
/*void CFAMMaintenanceRepairLine::OnConditionKillfocus(){
	
}*/
long CFAMMaintenanceRepairLine::OnConditionLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCondition.IsSearchKey() && !m_szConditionKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szConditionKey);
	}
	
	m_wndCondition.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id = 'its_condition' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCondition.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CFAMMaintenanceRepairLine::OnConditionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CFAMMaintenanceRepairLine::OnFromDateChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnFromDateSetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnFromDateKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnFromDateCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairLine::OnToDateChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnToDateSetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnToDateKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnToDateCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairLine::OnNextScheduleChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnNextScheduleSetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnNextScheduleKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnNextScheduleCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairLine::OnCauseChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnCauseSetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnCauseKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnCauseCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairLine::OnRepairContentChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnRepairContentSetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnRepairContentKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnRepairContentCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairLine::OnMoneyChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnMoneySetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnMoneyKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnMoneyCheckValue(){
	return 0;
} 
/*void CFAMMaintenanceRepairLine::OnPerformedByChange(){
	
} */
/*void CFAMMaintenanceRepairLine::OnPerformedBySetfocus(){
	
} */
/*void CFAMMaintenanceRepairLine::OnPerformedByKillfocus(){
	
} */
int CFAMMaintenanceRepairLine::OnPerformedByCheckValue(){
	return 0;
} 

void CFAMMaintenanceRepairLine::OnSaveItemSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMMaintenanceRepairLine();
} 
int CFAMMaintenanceRepairLine::OnAddFAMMaintenanceRepairLine(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMMaintenanceRepairLine::OnEditFAMMaintenanceRepairLine(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMMaintenanceRepairLine::OnDeleteFAMMaintenanceRepairLine(){
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
 		OnCancelFAMMaintenanceRepairLine();
 	}
	return 0;
}
int CFAMMaintenanceRepairLine::OnSaveFAMMaintenanceRepairLine(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, szUpdate, szSQL1, szTemp;
	int nCount = 0;
	CRecord rs(&pMF->m_db);
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT){
 		szSQL = m_tbl_line.GetInsertSQL();
 	}
 	else {
		
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		szSQL1.Format(_T(" SELECT coalesce(max(fam_idx), 0)+1 FROM fam_maintenance WHERE fam_assetno='%s'"), m_szItemNameKey);
		rs.ExecSQL(szSQL1);
		nCount = rs.GetIntValue();
		
		szTemp.Format(_T(" ('%s', TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'), '%s', TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS'), '%s', %d, cast_string2date('%s'), ") \
			_T(" cast_string2date('%s'), cast_string2date('%s'), '%s', %ld, '%s', '%s') "), pMF->GetCurrentUser(), 
			pMF->GetSysDateTime(), pMF->GetCurrentUser(), pMF->GetSysDateTime(), m_szItemNameKey, nCount+1, 
			m_szFromDate, m_szToDate, m_szNextSchedule, m_szRepairContent, m_nMoney, m_szPerformedBy, pMF->m_wndMR.m_szTypeKey);
		
		szUpdate.Format(_T(" INSERT INTO fam_maintenance (fam_createdby, fam_createddate, fam_updatedby, fam_updateddate, ") \
			_T(" fam_assetno, fam_idx, fam_fromdate, fam_todate, fam_nextdue, fam_desc, fam_cost, fam_performedby, fam_type) VALUES %s"), szTemp);
		pMF->ExecSQL(szUpdate);
		
 		OnItemListLoadData();
		SetMode(VM_ADD);
		
		m_wndItemName.SetFocus();
 	}
 	else
 	{
		
 	}
 	return ret;
}
int CFAMMaintenanceRepairLine::OnCancelFAMMaintenanceRepairLine(){
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
int CFAMMaintenanceRepairLine::OnFAMMaintenanceRepairLineListLoadData(){
	return 0;
}
