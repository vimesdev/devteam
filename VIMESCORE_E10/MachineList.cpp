#include "MachineList.h"
#include "MainFrame_E10.h"
#include "HMSMachineTaskDialog.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CMachineList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CMachineList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CMachineList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CMachineList*)pWnd)->OnListDeleteItem();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMachineList* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnGroupSelendok();
}
static int _OnListSetupTaskFnc(CWnd* pWnd) {
	return ((CMachineList*)pWnd)->OnListSetupTask();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnMachineNameChangeFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnMachineNameChange();
} */
/*static void _OnMachineNameSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnMachineNameSetfocus();} */ 
/*static void _OnMachineNameKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnMachineNameKillfocus();
} */
static int _OnMachineNameCheckValueFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnMachineNameCheckValue();
} 
/*static void _OnShortNameChangeFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnShortNameChange();
} */
/*static void _OnShortNameSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnShortNameSetfocus();} */ 
/*static void _OnShortNameKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnShortNameKillfocus();
} */
static int _OnShortNameCheckValueFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnShortNameCheckValue();
} 
/*static void _OnQtyChangeFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnQtyChange();
} */
/*static void _OnQtySetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnQtySetfocus();} */ 
/*static void _OnQtyKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnQtyKillfocus();
} */
static int _OnQtyCheckValueFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnQtyCheckValue();
} 
/*static void _OnMachineCodeChangeFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnMachineCodeChange();
} */
/*static void _OnMachineCodeSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnMachineCodeSetfocus();} */ 
/*static void _OnMachineCodeKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnMachineCodeKillfocus();
} */
static int _OnMachineCodeCheckValueFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnMachineCodeCheckValue();
} 
/*static void _OnSourceChangeFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnSourceChange();
} */
/*static void _OnSourceSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnSourceSetfocus();} */ 
/*static void _OnSourceKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnSourceKillfocus();
} */
static int _OnSourceCheckValueFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnSourceCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CMachineList*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd* pWnd) {
	((CMachineList*)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CMachineList*)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnRoomSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CMachineList*)pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRoomSelendokFnc(CWnd* pWnd) {
	((CMachineList*)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd* pWnd) {
	return ((CMachineList*)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CMachineList *)pWnd)->OnRoomAddNew();
}*/
static int _OnSohieumayCheckValueFnc(CWnd* pWnd) {
	return ((CMachineList*)pWnd)->OnSohieumayCheckValue();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CMachineList *pVw = (CMachineList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CMachineList *pVw = (CMachineList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CMachineList *pVw = (CMachineList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CMachineList *pVw = (CMachineList *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CMachineList *pVw = (CMachineList *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddMachineListFnc(CWnd *pWnd){
	 return ((CMachineList*)pWnd)->OnAddMachineList();
} 
static int _OnEditMachineListFnc(CWnd *pWnd){
	 return ((CMachineList*)pWnd)->OnEditMachineList();
} 
static int _OnDeleteMachineListFnc(CWnd *pWnd){
	 return ((CMachineList*)pWnd)->OnDeleteMachineList();
} 
static int _OnSaveMachineListFnc(CWnd *pWnd){
	 return ((CMachineList*)pWnd)->OnSaveMachineList();
} 
static int _OnCancelMachineListFnc(CWnd *pWnd){
	 return ((CMachineList*)pWnd)->OnCancelMachineList();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CMachineList*)pWnd)->OnActiveSelect();
}
static long _OnSourceLoadDataFnc(CWnd *pWnd){
	return ((CMachineList *)pWnd)->OnSourceLoadData();
}
CMachineList::CMachineList(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CMachineList::~CMachineList(){
}
void CMachineList::OnCreateComponents(){
	m_wndMachineListBox.Create(this, _T("Danh sách máy"), 5, 5, 805, 635);
	m_wndList.Create(this, 10, 30, 800, 450);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 455, 110, 480);
	m_wndGroup.Create(this, 115, 455, 800, 480);
	m_wndMachineNameLabel.Create(this, _T("Tên máy"), 10, 484, 110, 509);
	m_wndMachineName.Create(this, 115, 485, 800, 510);
	m_wndSohieumayLabel.Create(this, _T("Số hiệu máy"), 10, 515, 110, 540);
	m_wndSohieumay.Create(this, 115, 515, 800, 540);
	m_wndShortNameLabel.Create(this, _T("S/N"), 10, 545, 110, 570);
	m_wndShortName.Create(this, 115, 545, 635, 570);
	m_wndQty.Create(this, 731, 545, 800, 570);
	m_wndQtyLabel.Create(this, _T("Số lượng"), 640, 545, 725, 571);
	m_wndMachineCodeLabel.Create(this, _T("Mã máy"), 10, 575, 110, 600);
	m_wndMachineCode.Create(this, 115, 575, 415, 600);
	m_wndSourceLabel.Create(this, _T("Source"), 420, 575, 508, 600);
	m_wndSource.Create(this, 515, 575, 800, 600);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 605, 110, 630);
	m_wndDepartment.Create(this, 115, 605, 415, 630);
	m_wndRoomLabel.Create(this, _T("Room"), 420, 605, 508, 630);
	m_wndRoom.Create(this, 513, 605, 798, 630);
	m_wndAdd.Create(this, _T("&Add"), 404, 640, 479, 665);
	m_wndEdit.Create(this, _T("&Edit"), 484, 640, 559, 665);
	m_wndDelete.Create(this, _T("&Delete"), 564, 640, 639, 665);
	m_wndSave.Create(this, _T("&Save"), 644, 640, 719, 665);
	m_wndCancel.Create(this, _T("&Cancel"), 724, 640, 799, 665);
	m_wndActive.Create(this, _T("Hoạt động"), 10, 640, 110, 665);

}
void CMachineList::OnInitializeComponents()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndMachineName.SetLimitText(1024);
	m_wndMachineName.SetCheckValue(true);
	m_wndShortName.SetLimitText(1024);
	m_wndShortName.SetCheckValue(true);
	m_wndQty.SetLimitText(1024);
	m_wndQty.SetCheckValue(true);
	m_wndMachineCode.SetLimitText(1024);
	m_wndMachineCode.SetCheckValue(true);

	m_wndSource.SetCheckValue(true);

	m_hms_machine_list_for_ins.SetTableName(_T("hms_machine_list_for_ins"));
	m_hms_machine_list_for_ins.AddField(_T("MA_GROUP"), dfText, 10);
	m_hms_machine_list_for_ins.AddField(_T("MA_MACHINENAME"), dfText, 128);
	m_hms_machine_list_for_ins.AddField(_T("MA_DETAILNAME"), dfText, 128);
	m_hms_machine_list_for_ins.AddField(_T("MA_SHORTNAME"), dfText, 64);
	m_hms_machine_list_for_ins.AddField(_T("MA_QTY"), dfInteger, 4);
	m_hms_machine_list_for_ins.AddField(_T("MA_MACHINECODE"), dfText, 64);
	m_hms_machine_list_for_ins.AddField(_T("MA_SOURCE"), dfText, 4);
	m_hms_machine_list_for_ins.AddField(_T("MA_ACTIVE"), dfText, 1);
	m_hms_machine_list_for_ins.AddField(_T("MA_DEPTID"), dfText, 10);
	m_hms_machine_list_for_ins.AddField(_T("MA_ROOMID"), dfText, 10);


	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Nhóm"), CFMT_TEXT, 60);
	m_wndList.InsertColumn(2, _T("Tên máy"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Số hiệu"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("S/N"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Số lượng"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(6, _T("Mã máy"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(7, _T("Nguồn"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(8, _T("Active"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(9, _T("Phòng TH"), CFMT_TEXT, 150);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_wndSource.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndSource.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndRoom.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

}
void CMachineList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Setup Task"), _OnListSetupTaskFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndMachineName.SetEvent(WE_CHANGE, _OnMachineNameChangeFnc);
	//m_wndMachineName.SetEvent(WE_SETFOCUS, _OnMachineNameSetfocusFnc);
	//m_wndMachineName.SetEvent(WE_KILLFOCUS, _OnMachineNameKillfocusFnc);
	m_wndMachineName.SetEvent(WE_CHECKVALUE, _OnMachineNameCheckValueFnc);
	//m_wndShortName.SetEvent(WE_CHANGE, _OnShortNameChangeFnc);
	//m_wndShortName.SetEvent(WE_SETFOCUS, _OnShortNameSetfocusFnc);
	//m_wndShortName.SetEvent(WE_KILLFOCUS, _OnShortNameKillfocusFnc);
	m_wndShortName.SetEvent(WE_CHECKVALUE, _OnShortNameCheckValueFnc);
	//m_wndQty.SetEvent(WE_CHANGE, _OnQtyChangeFnc);
	//m_wndQty.SetEvent(WE_SETFOCUS, _OnQtySetfocusFnc);
	//m_wndQty.SetEvent(WE_KILLFOCUS, _OnQtyKillfocusFnc);
	m_wndQty.SetEvent(WE_CHECKVALUE, _OnQtyCheckValueFnc);
	//m_wndMachineCode.SetEvent(WE_CHANGE, _OnMachineCodeChangeFnc);
	//m_wndMachineCode.SetEvent(WE_SETFOCUS, _OnMachineCodeSetfocusFnc);
	//m_wndMachineCode.SetEvent(WE_KILLFOCUS, _OnMachineCodeKillfocusFnc);
	m_wndMachineCode.SetEvent(WE_CHECKVALUE, _OnMachineCodeCheckValueFnc);
	//m_wndSource.SetEvent(WE_CHANGE, _OnSourceChangeFnc);
	//m_wndSource.SetEvent(WE_SETFOCUS, _OnSourceSetfocusFnc);
	//m_wndSource.SetEvent(WE_KILLFOCUS, _OnSourceKillfocusFnc);
	m_wndSource.SetEvent(WE_CHECKVALUE, _OnSourceCheckValueFnc);
	m_wndSource.SetEvent(WE_LOADDATA, _OnSourceLoadDataFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndActive.SetEvent(WE_CLICK, _OnActiveSelectFnc);
	m_wndSohieumay.SetEvent(WE_CHECKVALUE, _OnSohieumayCheckValueFnc);
	OnListLoadData();
	SetMode(VM_NONE);

}
void CMachineList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndMachineName.GetDlgCtrlID(), m_szMachineName);
	DDX_Text(pDX, m_wndSohieumay.GetDlgCtrlID(), m_szSohieumay);
	DDX_Text(pDX, m_wndShortName.GetDlgCtrlID(), m_szShortName);
	DDX_Text(pDX, m_wndQty.GetDlgCtrlID(), m_nQty);
	DDX_Text(pDX, m_wndMachineCode.GetDlgCtrlID(), m_szMachineCode);
	DDX_TextEx(pDX, m_wndSource.GetDlgCtrlID(), m_szSourceKey);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);
}
void CMachineList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Group")] =  m_szGroupKey;
	m_jData[_T("MachineName")] =  m_szMachineName;
	m_jData[_T("ShortName")] =  m_szShortName;
	m_jData[_T("Qty")] =  m_nQty;
	m_jData[_T("MachineCode")] =  m_szMachineCode;
	
	}
	else
	{
			
	m_jData[_T("Group")].GetValue(m_szGroupKey);
	m_jData[_T("MachineName")].GetValue(m_szMachineName);
	m_jData[_T("ShortName")].GetValue(m_szShortName);
	m_jData[_T("Qty")].GetValue(m_nQty);
	m_jData[_T("MachineCode")].GetValue(m_szMachineCode);

	}

}
void CMachineList::GetDataToScreen()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT * FROM hms_machine_list_for_ins WHERE MA_MACHINECODE='%s' "), m_szMachineCode);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("MA_GROUP"), m_szGroupKey);
		rs.GetValue(_T("MA_MACHINENAME"), m_szMachineName);
		rs.GetValue(_T("MA_DETAILNAME"), m_szSohieumay);
		rs.GetValue(_T("MA_SHORTNAME"), m_szShortName);
		rs.GetValue(_T("MA_QTY"), m_nQty);
		rs.GetValue(_T("MA_MACHINECODE"), m_szMachineCode);
		rs.GetValue(_T("MA_SOURCE"), m_szSourceKey);
		rs.GetValue(_T("MA_DEPTID"), m_szDepartmentKey);
		rs.GetValue(_T("MA_ROOMID"), m_szRoomKey);

		rs.GetValue(_T("MA_ACTIVE"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bActive = true;
		else m_bActive = false;
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CMachineList::GetScreenToData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_hms_machine_list_for_ins.SetValue(_T("MA_GROUP"), m_szGroupKey);
	m_hms_machine_list_for_ins.SetValue(_T("MA_MACHINENAME"), m_szMachineName);
	m_hms_machine_list_for_ins.SetValue(_T("MA_DETAILNAME"), m_szSohieumay);
	m_hms_machine_list_for_ins.SetValue(_T("MA_SHORTNAME"), m_szShortName);
	m_hms_machine_list_for_ins.SetValue(_T("MA_QTY"), m_nQty);
	m_hms_machine_list_for_ins.SetValue(_T("MA_MACHINECODE"), m_szMachineCode);
	m_hms_machine_list_for_ins.SetValue(_T("MA_SOURCE"), m_szSourceKey);
	m_hms_machine_list_for_ins.SetValue(_T("MA_ACTIVE"), m_bActive ? _T("Y") : _T("N"));
	m_hms_machine_list_for_ins.SetValue(_T("MA_DEPTID"), m_szDepartmentKey);
	m_hms_machine_list_for_ins.SetValue(_T("MA_ROOMID"), m_szRoomKey);
}
void CMachineList::SetDefaultValues(){

	m_szMachineName.Empty();
	m_szShortName.Empty();
	m_szSohieumay.Empty();
	m_nQty = 1;
	m_bActive = FALSE;
	m_szDepartmentKey.Empty();
	m_szRoomKey.Empty();

}
int CMachineList::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
		switch (nMode)
		{
		case VM_ADD:
			EnableControls(TRUE);
			EnableButtons(TRUE, 3, 4, 5, -1);
			SetDefaultValues();
			if (m_szGroupKey.IsEmpty())
				m_wndGroup.SetFocus();
			else
				m_wndMachineName.SetFocus();
			break;
		case VM_EDIT:
			EnableControls(TRUE);
			EnableButtons(TRUE, 3, 4, 5, -1);
			m_wndMachineName.SetFocus();
			break;
		case VM_VIEW:
			EnableControls(FALSE);
			EnableButtons(FALSE, 3, 4, -1);
			break;
		case VM_NONE:
			EnableControls(FALSE);
			EnableButtons(TRUE, 0, 5, -1);
			SetDefaultValues();
			break;
		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CMachineList::OnListDblClick(){
	
} 
void CMachineList::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0) return;
	m_szMachineCode = m_wndList.GetItemText(nSel, 6);
	m_szShortName = m_wndList.GetItemText(nSel, 4);
	GetDataToScreen();
	
} 
int CMachineList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
int CMachineList::OnListSetupTask() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CHMSMachineTaskDialog dlg(this);
	dlg.m_szMachineID = m_szShortName;
	dlg.DoModal();
	return 0;
}
long CMachineList::OnListLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad();
	m_wndList.DeleteAllItems();
	int nCount = 0, nIdx = 1;
	szSQL.Format(_T("SELECT MA_GROUP,MA_MACHINENAME,MA_DETAILNAME,MA_SHORTNAME,MA_QTY, ") \
		_T(" MA_MACHINECODE, MA_SOURCE, MA_ACTIVE, GET_ROOMNAME(MA_DEPTID, MA_ROOMID) AS ROOM_NAME ") \
		_T(" FROM hms_machine_list_for_ins ORDER BY MA_GROUP, MA_MACHINENAME"));
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("MA_GROUP")),
			rs.GetValue(_T("MA_MACHINENAME")),
			rs.GetValue(_T("MA_DETAILNAME")),
			rs.GetValue(_T("MA_SHORTNAME")),
			rs.GetValue(_T("MA_QTY")),
			rs.GetValue(_T("MA_MACHINECODE")),
			rs.GetValue(_T("MA_SOURCE")),
			rs.GetValue(_T("MA_ACTIVE")),
			rs.GetValue(_T("ROOM_NAME")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad();
	return nCount;
}
void CMachineList::OnGroupSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CMachineList::OnGroupSelendok(){
	 
}
/*void CMachineList::OnGroupSetfocus(){
	
}*/
/*void CMachineList::OnGroupKillfocus(){
	
}*/
long CMachineList::OnGroupLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndGroup.IsSearchKey()) {
		szWhere.Format(_T(" AND hfg_id='%s' "), m_szGroupKey);
	};
	szSQL.Format(_T("SELECT  hfg_id as id, hfg_name as name ") \
		_T(" FROM hms_fee_group ") \
		_T(" WHERE substr(hfg_id, 1, 1) IN('B') and hfg_active='Y' ") \
		_T(" ORDER BY hfg_id "), szWhere);

	m_wndGroup.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndGroup.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	
}
/*void CMachineList::OnGroupAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CMachineList::OnMachineNameChange(){
	
} */
/*void CMachineList::OnMachineNameSetfocus(){
	
} */
/*void CMachineList::OnMachineNameKillfocus(){
	
} */
int CMachineList::OnMachineNameCheckValue(){
	return 0;
} 
/*void CMachineList::OnShortNameChange(){
	
} */
/*void CMachineList::OnShortNameSetfocus(){
	
} */
/*void CMachineList::OnShortNameKillfocus(){
	
} */
int CMachineList::OnShortNameCheckValue(){
	return 0;
} 
/*void CMachineList::OnQtyChange(){
	
} */
/*void CMachineList::OnQtySetfocus(){
	
} */
/*void CMachineList::OnQtyKillfocus(){
	
} */
int CMachineList::OnQtyCheckValue()
{
	if (m_nQty <=0) 
		return -1;
	return 0;
} 
/*void CMachineList::OnMachineCodeChange(){
	
} */
/*void CMachineList::OnMachineCodeSetfocus(){
	
} */
/*void CMachineList::OnMachineCodeKillfocus(){
	
} */
int CMachineList::OnMachineCodeCheckValue(){
	return 0;
} 
/*void CMachineList::OnSourceChange(){
	
} */
/*void CMachineList::OnSourceSetfocus(){
	
} */
/*void CMachineList::OnSourceKillfocus(){
	
} */
int CMachineList::OnSourceCheckValue()
{
	return 0;
} 

long CMachineList::OnSourceLoadData()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (m_wndSource.IsSearchKey()) {
		szWhere.Format(_T(" AND ss_id='%s' "), m_szSourceKey);
	};
	szSQL.Format(_T("select ss_code as id, ss_desc as name from sys_sel where ss_id='hms_machine_source' "), szWhere);
	m_wndSource.DeleteAllItems();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndSource.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
void CMachineList::OnActiveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}

void CMachineList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddMachineList();
	
} 
void CMachineList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditMachineList();
	
} 
void CMachineList::OnDeleteSelect()
{
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteMachineList();
} 
void CMachineList::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveMachineList();
	
} 
void CMachineList::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnCancelMachineList();
	
} 
int CMachineList::OnAddMachineList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMachineList::OnEditMachineList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMachineList::OnDeleteMachineList()
{
 	if(GetMode() != VM_VIEW)
 		return -1;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	m_szMachineCode = m_wndList.GetItemText(nSel, 5);
	
	szSQL.Format(_T("DELETE FROM hms_machine_list_for_ins WHERE MA_MACHINECODE = '%s'"),m_szMachineCode); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
 		SetMode(VM_ADD);  		
		m_wndList.DeleteItem(nSel);
 	}
	return 0;
}
int CMachineList::OnSaveMachineList()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_hms_machine_list_for_ins.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE MA_MACHINECODE='%s'"), m_szMachineCode); 
 		szSQL = m_hms_machine_list_for_ins.GetUpdateSQL(_T("MA_MACHINECODE")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_ADD )
		{
			OnListLoadData();
			SetMode(VM_ADD);

		}
		else if (GetMode() == VM_EDIT)
		{
			OnListLoadData(); 
			SetMode(VM_VIEW); 
		}
		else
			SetMode(VM_VIEW); 
 	} 
 	return ret; 
}
int CMachineList::OnCancelMachineList(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CMachineList::OnMachineListListLoadData(){
	return 0;
}
void CMachineList::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CMachineList::OnDepartmentSelendok() {

}
/*void CMachineList::OnDepartmentSetfocus(){

}*/
/*void CMachineList::OnDepartmentKillfocus(){

}*/
long CMachineList::OnDepartmentLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()) {
		szWhere.Format(_T(" and sd_id='%s' "), m_szDepartmentKey);
	};
	m_wndDepartment.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE 1=1 %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}

	return 0;
}
/*void CMachineList::OnDepartmentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
void CMachineList::OnRoomSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CMachineList::OnRoomSelendok() {

}
/*void CMachineList::OnRoomSetfocus(){

}*/
/*void CMachineList::OnRoomKillfocus(){

}*/
long CMachineList::OnRoomLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL, szWhere, szPrefromDept;
	CRecord rs(&pMF->m_db);
	UpdateData(true);

	szSQL.Format(_T(" SELECT hrl_id,") \
		_T("   hrl_name,") \
		_T("   hrl_deptid,") \
		_T("   hrl_active,") \
		_T("   hrl_limited") \
		_T(" FROM hms_roomlist") \
		_T(" WHERE hrl_deptid ='%s'") \
		_T(" AND hrl_active   ='Y'") \
		_T(" ORDER BY hrl_id"), m_szDepartmentKey);

	//_msg(_T("%s"), szSQL);

	int nCount = 0, nRooomID, nItem = 0;
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		nItem = m_wndRoom.AddItems(
			rs.GetValue(_T("hrl_id")),
			rs.GetValue(_T("hrl_name")),
			NULL);
		rs.MoveNext();
	}

	return 0;
}
/*void CMachineList::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

} */
int CMachineList::OnSohieumayCheckValue()
{
	return 0;
}