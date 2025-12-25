#include "HMSTrackingPatientFeeDialog.h"
#include "MainFrm.h"

static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeDialog* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnFromMoneyChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneyChange();
} */
/*static void _OnFromMoneySetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneySetfocus();} */ 
/*static void _OnFromMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneyKillfocus();
} */
static int _OnFromMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnFromMoneyCheckValue();
} 
/*static void _OnToMoneyChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneyChange();
} */
/*static void _OnToMoneySetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneySetfocus();} */ 
/*static void _OnToMoneyKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneyKillfocus();
} */
static int _OnToMoneyCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnToMoneyCheckValue();
} 
static void _OnObjectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeDialog* )pWnd)->OnObjectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnObjectSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectSelendok();
}
/*static void _OnObjectSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectKillfocus();
}*/
/*static void _OnObjectKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectKillfocus();
}*/
static long _OnObjectLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectLoadData();
}
/*static void _OnObjectAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnObjectAddNew();
}*/
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnNumberInwardChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardChange();
} */
/*static void _OnNumberInwardSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardSetfocus();} */ 
/*static void _OnNumberInwardKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardKillfocus();
} */
static int _OnNumberInwardCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnNumberInwardCheckValue();
}
static void _OnFeeLevelSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTrackingPatientFeeDialog* )pWnd)->OnFeeLevelSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFeeLevelSelendokFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFeeLevelSelendok();
}
/*static void _OnFeeLevelSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFeeLevelKillfocus();
}*/
/*static void _OnFeeLevelKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFeeLevelKillfocus();
}*/
static long _OnFeeLevelLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnFeeLevelLoadData();
}
/*static void _OnFeeLevelAddNewFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnFeeLevelAddNew();
}*/
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSTrackingPatientFeeDialog *pVw = (CHMSTrackingPatientFeeDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTrackingPatientFeeDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTrackingPatientFeeDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnListDeleteItem();
} 
static int _OnAddHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnAddHMSTrackingPatientFeeDialog();
} 
static int _OnEditHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnEditHMSTrackingPatientFeeDialog();
} 
static int _OnDeleteHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnDeleteHMSTrackingPatientFeeDialog();
} 
static int _OnSaveHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnSaveHMSTrackingPatientFeeDialog();
} 
static int _OnCancelHMSTrackingPatientFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnCancelHMSTrackingPatientFeeDialog();
}

static int _OnReloadDataFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnReloadData();
}

static int _OnPrintPatientListFnc(CWnd *pWnd){
	return ((CHMSTrackingPatientFeeDialog*)pWnd)->OnPrintPatientList();
} 

CHMSTrackingPatientFeeDialog::CHMSTrackingPatientFeeDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1010;
	m_nDlgHeight = 610;
	SetDefaultValues();
	m_bReload = false;
}
CHMSTrackingPatientFeeDialog::~CHMSTrackingPatientFeeDialog(){
}
void CHMSTrackingPatientFeeDialog::OnCreateComponents()
{
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1000, 600);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 90, 55);
	m_wndDepartment.Create(this,95, 30, 295, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 300, 30, 385, 55);
	m_wndObject.Create(this,390, 30, 580, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 585, 30, 660, 55);
	m_wndDocumentNo.Create(this,665, 30, 770, 55); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 775, 30, 890, 55);
	m_wndNumberInward.Create(this,895, 30, 995, 55); 
	m_wndFeeLevelLabel.Create(this, _T("Fee Level"), 10, 60, 90, 85);
	m_wndFeeLevel.Create(this,95, 60, 295, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 300, 60, 385, 85);
	m_wndPatientName.Create(this,390, 60, 580, 85); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 585, 60, 660, 85);
	m_wndFromMoney.Create(this,665, 60, 770, 85); 
	m_wndSign.Create(this, _T("-"), 775, 60, 780, 85);
	m_wndToMoney.Create(this,785, 60, 890, 85); 
	m_wndSearch.Create(this, _T("&Search"), 895, 60, 995, 85);
	m_wndList.Create(this,10, 120, 995, 595);

}
void CHMSTrackingPatientFeeDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);

	m_wndFromMoney.SetLimitText(16);
	//m_wndFromMoney.SetCheckValue(true);

	m_wndToMoney.SetLimitText(16);
	//m_wndToMoney.SetCheckValue(true);

	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndDocumentNo.SetLimitText(16);
	//m_wndDocumentNo.SetCheckValue(true);

	m_wndNumberInward.SetLimitText(35);
	//m_wndNumberInward.SetCheckValue(true);

	m_wndPatientName.SetLimitText(75);
	//m_wndPatientName.SetCheckValue(true);

	m_wndDocumentNo.SetNotEmpty(false);
	m_wndNumberInward.SetNotEmpty(false);
	m_wndPatientName.SetNotEmpty(false);

	m_wndFromMoney.SetCurrencyFormat(TRUE);
	m_wndToMoney.SetCurrencyFormat(TRUE);

	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 75);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndObject.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 50);
	m_wndObject.InsertColumn(1, _T("Name"), CFMT_TEXT, 180);
	m_wndObject.SetCheckBox(TRUE);

	m_wndFeeLevel.InsertColumn(0, _T("ID"), CFMT_TEXT, 30);
	m_wndFeeLevel.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndFeeLevel.InsertColumn(2, _T("Desc"), CFMT_TEXT, 0);

	m_wndSearch.ModifyStyle(WS_TABSTOP, 0);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(2, _T("Number Inward"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 140);
	m_wndList.InsertColumn(4, _T("Age"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 40);
	m_wndList.InsertColumn(6, _T("Object"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(7, _T("Total Cost"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(8, _T("Total Insurance Paid"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(9, _T("Total Deposit"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(10, _T("Total Unpaid"), CFMT_MONEY, 110);
	m_wndList.InsertColumn(11, _T("DeptID"), CFMT_TEXT, 0);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
}
void CHMSTrackingPatientFeeDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndFromMoney.SetEvent(WE_CHANGE, _OnFromMoneyChangeFnc);
	//m_wndFromMoney.SetEvent(WE_SETFOCUS, _OnFromMoneySetfocusFnc);
	//m_wndFromMoney.SetEvent(WE_KILLFOCUS, _OnFromMoneyKillfocusFnc);
	m_wndFromMoney.SetEvent(WE_CHECKVALUE, _OnFromMoneyCheckValueFnc);
	//m_wndToMoney.SetEvent(WE_CHANGE, _OnToMoneyChangeFnc);
	//m_wndToMoney.SetEvent(WE_SETFOCUS, _OnToMoneySetfocusFnc);
	//m_wndToMoney.SetEvent(WE_KILLFOCUS, _OnToMoneyKillfocusFnc);
	m_wndToMoney.SetEvent(WE_CHECKVALUE, _OnToMoneyCheckValueFnc);
	m_wndObject.SetEvent(WE_SELENDOK, _OnObjectSelendokFnc);
	//m_wndObject.SetEvent(WE_SETFOCUS, _OnObjectSetfocusFnc);
	//m_wndObject.SetEvent(WE_KILLFOCUS, _OnObjectKillfocusFnc);
	m_wndObject.SetEvent(WE_SELCHANGE, _OnObjectSelectChangeFnc);
	m_wndObject.SetEvent(WE_LOADDATA, _OnObjectLoadDataFnc);
	//m_wndObject.SetEvent(WE_ADDNEW, _OnObjectAddNewFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndNumberInward.SetEvent(WE_CHANGE, _OnNumberInwardChangeFnc);
	//m_wndNumberInward.SetEvent(WE_SETFOCUS, _OnNumberInwardSetfocusFnc);
	//m_wndNumberInward.SetEvent(WE_KILLFOCUS, _OnNumberInwardKillfocusFnc);
	m_wndNumberInward.SetEvent(WE_CHECKVALUE, _OnNumberInwardCheckValueFnc);
	m_wndFeeLevel.SetEvent(WE_SELENDOK, _OnFeeLevelSelendokFnc);
	//m_wndFeeLevel.SetEvent(WE_SETFOCUS, _OnFeeLevelSetfocusFnc);
	//m_wndFeeLevel.SetEvent(WE_KILLFOCUS, _OnFeeLevelKillfocusFnc);
	m_wndFeeLevel.SetEvent(WE_SELCHANGE, _OnFeeLevelSelectChangeFnc);
	m_wndFeeLevel.SetEvent(WE_LOADDATA, _OnFeeLevelLoadDataFnc);
	//m_wndFeeLevel.SetEvent(WE_ADDNEW, _OnFeeLevelAddNewFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);


	m_wndList.SetWindowText(_T("Patient List"));
	m_wndList.AddEvent(1, _T("Reload"), _OnReloadDataFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Print Patient List"), _OnPrintPatientListFnc);

	//SetMode(VM_NONE);

	m_szDepartmentKey = pMF->m_UserInfo.su_deptid;

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndNumberInward, GetFaceName(), GetFaceSize() + 2, TRUE);
	m_wndNumberInward.SetTextColor(RGB(0, 0, 255));

	if (m_szDepartmentKey == _T("PTC"))
	{
		m_wndDepartment.SetCheckBox(TRUE);
	}

	SetMode(VM_EDIT);

	//OnListLoadData();
}
void CHMSTrackingPatientFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndFromMoney.GetDlgCtrlID(), m_nFromMoney);
	DDX_Text(pDX, m_wndToMoney.GetDlgCtrlID(), m_nToMoney);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_TextEx(pDX, m_wndFeeLevel.GetDlgCtrlID(), m_szFeeLevelKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumberInward.GetDlgCtrlID(), m_szNumberInward);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSTrackingPatientFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTrackingPatientFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTrackingPatientFeeDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nFromMoney=0;
	m_nToMoney=0;
	m_szObjectKey.Empty();
	m_szFeeLevelKey.Empty();
	m_nDocumentNo=0;
	m_szNumberInward.Empty();
	m_szPatientName.Empty();

}
int CHMSTrackingPatientFeeDialog::SetMode(int nMode)
{
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
 			EnableButtons(TRUE, 0, 1, -1);
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
void CHMSTrackingPatientFeeDialog::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSTrackingPatientFeeDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnDepartmentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
    }

	if (pMF->m_UserInfo.su_deptid == _T("PTC"))
		szWhere.Empty();
	else
		szWhere.Format(_T(" and sd_id='%s' "), pMF->m_UserInfo.su_deptid);

	m_wndDepartment.DeleteAllItems();
	int nCount = 0;

	szSQL.Format(_T("SELECT sd_id as id, ") \
		         _T("sd_name as name ") \
				 _T("FROM sys_dept ") \
				 _T("WHERE 1=1 AND sd_type='DT' %s ORDER BY id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndDepartment.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTrackingPatientFeeDialog::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeDialog::OnFromMoneyChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnFromMoneySetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnFromMoneyKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnFromMoneyCheckValue()
{
	return 0;
} 
/*void CHMSTrackingPatientFeeDialog::OnToMoneyChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnToMoneySetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnToMoneyKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnToMoneyCheckValue()
{
	return 0;
} 
void CHMSTrackingPatientFeeDialog::OnObjectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnObjectSelendok(){
	 
}
/*void CHMSTrackingPatientFeeDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnObjectKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnObjectLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndObject.IsSearchKey() && !m_szObjectKey.IsEmpty())
	{
		szWhere.Format(_T(" and ho_id='%s' "), m_szObjectKey);
    }

	m_wndObject.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T("SELECT ho_id as id, ") \
		         _T("ho_desc as name ") \
				 _T("FROM hms_object ") \
				 _T("WHERE 1=1 %s ORDER BY cast(ho_id as integer)"), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndObject.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTrackingPatientFeeDialog::OnObjectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnDocumentNoCheckValue()
{
	OnListLoadData();
	return 1;
} 
/*void CHMSTrackingPatientFeeDialog::OnNumberInwardChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnNumberInwardSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnNumberInwardKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnNumberInwardCheckValue()
{
	OnListLoadData();
	return 1;
} 
/*void CHMSTrackingPatientFeeDialog::OnPatientNameChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnPatientNameKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnPatientNameCheckValue()
{
	OnListLoadData();
	return 1;
} 
void CHMSTrackingPatientFeeDialog::OnSearchSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
}
void CHMSTrackingPatientFeeDialog::OnFeeLevelSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnFeeLevelSelendok()
{
}
/*void CHMSTrackingPatientFeeDialog::OnFeeLevelSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnFeeLevelKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnFeeLevelLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndFeeLevel.IsSearchKey() && !m_szFeeLevelKey.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szFeeLevelKey);
	}

	m_wndFeeLevel.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ") \
		         _T("ss_desc AS name, ") \
				 _T("ss_vndesc AS description ") \
				 _T("FROM sys_sel ") \
				 _T("WHERE 1=1 AND ss_id='hms_fee_level' %s") \
				 _T("ORDER BY cast(ss_code as integer)"), szWhere);

	nCount = rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){ 
		m_wndFeeLevel.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")),
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSTrackingPatientFeeDialog::OnFeeLevelAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTrackingPatientFeeDialog::OnListDblClick(){
	
} 
void CHMSTrackingPatientFeeDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTrackingPatientFeeDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTrackingPatientFeeDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere, tmpStr;
	CString szObjects, szDepts;
	CString szLevel;
	long nDocNo;

	UpdateData(TRUE);

	/*if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_id='%s' "), m_szObjectKey);
	}*/

	pMF->BeginWaitCursor();

	if (m_szDepartmentKey != _T("PTC"))
	{
		if (!m_szDepartmentKey.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND htr_deptid='%s' "), m_szDepartmentKey);
		}
		else
		{
			ShowMessageBox(_T("\x42\x1EA1n \x63h\x1B0\x61 \x63h\x1ECDn kho\x61!"), MB_OK | MB_ICONERROR);
			return -1;
		}
	}
	else
	{
		for (int i = 0; i < m_wndDepartment.GetCount(); i++)
		{
			if (m_wndDepartment.GetCheck(i))
			{
				if (!szDepts.IsEmpty())
					szDepts += _T(",");
				szDepts.AppendFormat(_T("'%s'"), m_wndDepartment.GetCheck(i, 0));
			}
		}

		if (!szDepts.IsEmpty())
		{
			szWhere.AppendFormat(_T(" AND htr_deptid IN(%s) "), szDepts);
		}
		else
		{
			ShowMessageBox(_T("\x42\x1EA1n \x63h\x1B0\x61 \x63h\x1ECDn kho\x61!"), MB_OK | MB_ICONERROR);
			return -1;
		}
	}

	for (int i = 0; i < m_wndObject.GetCount(); i++)
	{
		if (m_wndObject.GetCheck(i))
		{
			if (!szObjects.IsEmpty())
				szObjects += _T(",");
			szObjects.AppendFormat(_T("'%s'"), m_wndObject.GetCheck(i, 0));
		}
	}

	if (!szObjects.IsEmpty())
		szWhere.AppendFormat(_T(" AND ho_id IN(%s) "), szObjects);


	if (m_nDocumentNo > 0)
	{
		szWhere.Format(_T(" AND htr_docno=%ld "), m_nDocumentNo);
	}

	if (!m_szNumberInward.IsEmpty())
	{
		szWhere.Format(_T(" AND hcr_recordno='%s' "), m_szNumberInward);
	}


	if (!m_bReload)
	{
		szSQL.Format(_T(" SELECT distinct htr_docno AS docno,") \
					_T("        htr_deptid AS deptid") \
					_T(" FROM hms_treatment_record") \
					_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=htr_docno)") \
					_T(" LEFT JOIN hms_doc ON(hd_docno=hcr_docno)") \
					_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
					_T(" WHERE htr_status='I' %s"), szWhere);
		rs.ExecSQL(szSQL);

		while (!rs.IsEOF())
		{
			rs.GetValue(_T("docno"), nDocNo);
			szSQL.Format(_T("hms_inpatient_fee_create(%ld, 'BIOTPDMXSJF', 'TM')"), nDocNo);
			pMF->ExecDML(szSQL);
			rs.MoveNext();
		}
	}
	else
	{
		for (int i = 0; i < m_wndList.GetItemCount(); i++)
		{
			nDocNo = str2long(m_wndList.GetItemText(i, 1));
			szSQL.Format(_T("hms_inpatient_fee_create(%ld, 'BIOTPDMXSJF', 'TM')"), nDocNo);
			pMF->ExecDML(szSQL);
		}
	}

	if (m_nToMoney > 0 && m_szFeeLevelKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfe_patpaid_amount BETWEEN %ld AND %ld "),
			                 m_nFromMoney, m_nToMoney);
	}

	if (!m_szFeeLevelKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND hfe_patpaid_amount %s "), m_wndFeeLevel.GetCurrent(2));
	}

	szSQL.Format(_T("SELECT ss_code AS ID, ") \
		         _T("ss_vndesc AS VNDesc ") \
				 _T("FROM sys_sel ") \
				 _T("WHERE ss_id='hms_fee_level' ") \
				 _T("ORDER BY cast(ss_code as integer)"));

	rs.ExecSQL(szSQL);
	
	while (!rs.IsEOF())
	{
		if (!szLevel.IsEmpty())
		{
			szLevel.AppendFormat(_T(" when hfe_patpaid_amount %s then %s "),
				                 rs.GetValue(_T("VNDesc")), rs.GetValue(_T("ID")));
		}
		else
		{
			szLevel.AppendFormat(_T(", case when hfe_patpaid_amount %s then %s "),
				                 rs.GetValue(_T("VNDesc")), rs.GetValue(_T("ID")));
		}
		rs.MoveNext();
	}

	if (!szLevel.IsEmpty())
		szLevel += _T(" else 0 end as feelevel ");

	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
				_T("        hcr_recordno AS recordno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS patientname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
				_T("        hms_getsex(hp_sex) AS sex,") \
				_T("        hms_getobjectname(ho_id) AS objectname,") \
				_T("        htr_deptid AS deptid,") \
				_T("        hfe_cost AS amount,") \
				_T("        hfe_inspaid_amount AS inspaid,") \
				_T("        hfe_deposit_amount AS deposit,") \
				_T("        hfe_cost-hfe_inspaid_amount-hfe_deposit_amount AS patpaid") \
				_T("        %s") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno AND htr_idx=hcr_refidx)") \
				_T(" WHERE htr_status='I' AND hfe_cost > 0 %s") \
				_T(" ORDER BY htr_deptid, hd_docno"),
				szLevel, szWhere);

	nCount = rs.ExecSQL(szSQL);

	int nIndex = 1, nItem;

	szLevel.Empty();

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if (!m_szPatientName.IsEmpty())
	{
		StringLower(m_szPatientName, szSearchName);
		SplitName(szSearchName, szSurName, szMidName, szFirstName);
	}

	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("patientname"), tmpStr);

		if (!m_szPatientName.IsEmpty())
		{
			CString szPatientName;
			
			StringLower(tmpStr, szPatientName);

			SplitName(szPatientName, szSurName2, szMidName2, szFirstName2);
			GetShortName(szPatientName, szShortName);

			if (szShortName != m_szPatientName)
			{
				if (!szFirstName.IsEmpty() && szFirstName != szFirstName2)
				{
					rs.MoveNext();
					continue;
				}
			}
				
			if (!szSurName.IsEmpty() && szSurName != szSurName2)
			{
				rs.MoveNext();
				continue;
			}

			if (!szMidName.IsEmpty() && szMidName2.Find(szMidName) == -1)
			{
				rs.MoveNext();
				continue;
			}
			
		}

		tmpStr.Format(_T("%d"), nIndex++);

		rs.GetValue(_T("feelevel"), szLevel);

		nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")), 
			rs.GetValue(_T("recordno")), 
			rs.GetValue(_T("patientname")), 
			rs.GetValue(_T("age")), 
			rs.GetValue(_T("sex")), 
			rs.GetValue(_T("objectname")), 
			rs.GetValue(_T("amount")), 
			rs.GetValue(_T("inspaid")), 
			rs.GetValue(_T("deposit")),
			rs.GetValue(_T("patpaid")),
			rs.GetValue(_T("deptid")), NULL);

		if (szLevel == _T("1"))
		{
			m_wndList.SetSubItemBkColor(nItem, 1, RGB(0, 128, 192), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}
		else if (szLevel == _T("2"))
		{
			m_wndList.SetSubItemBkColor(nItem, 1, RGB(255, 128, 64), FALSE);
			m_wndList.SetSubItemTextColor(nItem, 1, RGB(255, 255, 255), FALSE);
		}
		else if (szLevel == _T("3"))
		{
			m_wndList.SetItemBkColor(nItem, RGB(128, 0, 0), FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(255, 255, 255), FALSE);
		}
		else
		{

		}

		rs.MoveNext();
	}
	m_wndList.EndLoad();

	pMF->EndWaitCursor();
	return nCount;
}
int CHMSTrackingPatientFeeDialog::OnAddHMSTrackingPatientFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTrackingPatientFeeDialog::OnEditHMSTrackingPatientFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTrackingPatientFeeDialog::OnDeleteHMSTrackingPatientFeeDialog(){
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
 		OnCancelHMSTrackingPatientFeeDialog();
 	}
	return 0;
}
int CHMSTrackingPatientFeeDialog::OnSaveHMSTrackingPatientFeeDialog(){
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
 		//OnHMSTrackingPatientFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTrackingPatientFeeDialog::OnCancelHMSTrackingPatientFeeDialog(){
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
int CHMSTrackingPatientFeeDialog::OnHMSTrackingPatientFeeDialogListLoadData(){
	return 0;
}

int CHMSTrackingPatientFeeDialog::OnReloadData()
{
	if (m_wndList.GetItemCount() == 0)
		return -1;

	m_bReload = true;
	OnListLoadData();
	m_bReload = false;
	UpdateData(FALSE);
	return 0;
}

int CHMSTrackingPatientFeeDialog::OnPrintPatientList()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	
	if (m_wndList.GetItemCount() == 0)
		return -1;

	CReport rpt;
	CString tmpStr, szTemp;
	CString szSysDate;

	double nCost = 0;
	long double nGroupTotal[11];
	long double nTotal[11];


	if (!rpt.Init(_T("Reports/HMS/HF_THEODOICHIPHICUABENHNHANTRONGKHOA.RPT")))
		return -2;

	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), pMF->m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), pMF->m_CompanyInfo.sc_name);

	for (int i = 0; i < 11; i++)
	{
		nGroupTotal[i] = 0;
		nTotal[i] = 0;
	}

	CReportSection *rptDetail = NULL;
	CString szOldLine, szNewLine;
	szOldLine.Empty();
	szNewLine.Empty();

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		szNewLine = m_wndList.GetItemText(i, 11);

		if (szNewLine != szOldLine)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), pMF->GetDepartmentName(szNewLine));

			szOldLine = szNewLine;
		}

		rptDetail = rpt.AddDetail();
		tmpStr.Format(_T("%d"), i + 1);
		rptDetail->SetValue(_T("1"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 1);
		rptDetail->SetValue(_T("2"), tmpStr);
		
		tmpStr = m_wndList.GetItemText(i, 2);
		rptDetail->SetValue(_T("3"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 3);
		rptDetail->SetValue(_T("4"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 4);
		rptDetail->SetValue(_T("5"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 5);
		rptDetail->SetValue(_T("6"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 6);
		rptDetail->SetValue(_T("7"), tmpStr);

		tmpStr = m_wndList.GetItemText(i, 7);
		nCost = str2double(tmpStr);
		nGroupTotal[7] += nCost;
		FormatCurrencyStr(tmpStr, szTemp);
		rptDetail->SetValue(_T("8"), szTemp);

		tmpStr = m_wndList.GetItemText(i, 8);
		nCost = str2double(tmpStr);
		nGroupTotal[8] += nCost;
		FormatCurrencyStr(tmpStr, szTemp);
		rptDetail->SetValue(_T("9"), szTemp);

		tmpStr = m_wndList.GetItemText(i, 9);
		nCost = str2double(tmpStr);
		nGroupTotal[9] += nCost;
		FormatCurrencyStr(tmpStr, szTemp);
		rptDetail->SetValue(_T("10"), szTemp);

		tmpStr = m_wndList.GetItemText(i, 10);
		nCost = str2double(tmpStr);
		nGroupTotal[10] += nCost;
		FormatCurrencyStr(tmpStr, szTemp);
		rptDetail->SetValue(_T("11"), szTemp);
	}
	
	szSysDate = pMF->GetSysDate();
	tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),
		                                          szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);

	rpt.PrintPreview();
	return 0;
}