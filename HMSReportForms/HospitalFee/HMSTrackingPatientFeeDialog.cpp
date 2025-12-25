#include "stdafx.h"
#include "HMSTrackingPatientFeeDialog.h"
//#include "MainFrm.h"
#include "HMSMainFrame.h"

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
CHMSTrackingPatientFeeDialog::CHMSTrackingPatientFeeDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1010;
	m_nDlgHeight = 610;
	SetDefaultValues();
}
CHMSTrackingPatientFeeDialog::~CHMSTrackingPatientFeeDialog(){
}
void CHMSTrackingPatientFeeDialog::OnCreateComponents()
{
	/*m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1000, 600);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndDepartmentLabel.Create(this, _T("Department"), 10, 30, 80, 55);
	m_wndDepartment.Create(this,85, 30, 375, 55); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 380, 30, 460, 55);
	m_wndFromMoney.Create(this,465, 30, 565, 55); 
	m_wndSign.Create(this, _T("-"), 570, 30, 575, 55);
	m_wndToMoney.Create(this,580, 30, 680, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 685, 30, 755, 55);
	m_wndObject.Create(this,760, 30, 995, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 10, 60, 80, 85);
	m_wndDocumentNo.Create(this,85, 60, 275, 85); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 280, 60, 375, 85);
	m_wndNumberInward.Create(this,380, 60, 565, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 570, 60, 680, 85);
	m_wndPatientName.Create(this,685, 60, 965, 85); 
	m_wndSearch.Create(this, _T("@"), 970, 60, 995, 85);
	m_wndList.Create(this,10, 120, 995, 595);*/ 

	m_wndPatientInformation.Create(this, _T("Patient List"), 5, 95, 1000, 600);
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 1000, 90);
	m_wndDepartmentLabel.Create(this, _T("Department"), 410, 30, 520, 55);
	m_wndDepartment.Create(this,525, 30, 670, 55); 
	m_wndUnpaidLabel.Create(this, _T("Unpaid"), 675, 30, 770, 55);
	m_wndFromMoney.Create(this,775, 30, 875, 55); 
	m_wndSign.Create(this, _T("-"), 880, 30, 885, 55);
	m_wndToMoney.Create(this,890, 30, 990, 55); 
	m_wndObjectLabel.Create(this, _T("Object"), 10, 30, 120, 55);
	m_wndObject.Create(this,125, 30, 405, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Doc No"), 410, 60, 520, 85);
	m_wndDocumentNo.Create(this,525, 60, 670, 85); 
	m_wndNumberInwardLabel.Create(this, _T("Number Inward"), 675, 60, 770, 85);
	m_wndNumberInward.Create(this,775, 60, 960, 85); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 120, 85);
	m_wndPatientName.Create(this,125, 60, 405, 85); 
	m_wndSearch.Create(this, _T("@"), 965, 60, 990, 85);
	m_wndList.Create(this,10, 120, 995, 595); 

}
void CHMSTrackingPatientFeeDialog::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(81);

	m_wndFromMoney.SetLimitText(16);
	//m_wndFromMoney.SetCheckValue(true);

	m_wndToMoney.SetLimitText(16);
	//m_wndToMoney.SetCheckValue(true);

	//m_wndObject.SetCheckValue(true);
	m_wndObject.LimitText(35);

	m_wndDocumentNo.SetLimitText(16);
	m_wndDocumentNo.SetCheckValue(true);

	m_wndNumberInward.SetLimitText(35);
	m_wndNumberInward.SetCheckValue(true);

	m_wndPatientName.SetLimitText(75);
	m_wndPatientName.SetCheckValue(true);

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

	m_wndList.GetHeaderControl()->SetItemHeight(2);
}
void CHMSTrackingPatientFeeDialog::OnSetWindowEvents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//SetMode(VM_NONE);
	m_szDepartmentKey = pMF->m_UserInfo.su_hms_xdept;

	SetWindowFont(&m_wndDocumentNo, GetFaceName(), GetFaceSize() + 2, TRUE);
	m_wndDocumentNo.SetTextColor(RGB(255, 0, 0));

	SetWindowFont(&m_wndNumberInward, GetFaceName(), GetFaceSize() + 2, TRUE);
	m_wndNumberInward.SetTextColor(RGB(0, 0, 255));

	if (m_szDepartmentKey == _T("PTC"))
		m_wndDepartment.SetCheckBox(TRUE);

	SetMode(VM_EDIT);

//	OnListLoadData();
}
void CHMSTrackingPatientFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndFromMoney.GetDlgCtrlID(), m_nFromMoney);
	DDX_Text(pDX, m_wndToMoney.GetDlgCtrlID(), m_nToMoney);
	DDX_TextEx(pDX, m_wndObject.GetDlgCtrlID(), m_szObjectKey);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndNumberInward.GetDlgCtrlID(), m_szNumberInward);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);

}
void CHMSTrackingPatientFeeDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTrackingPatientFeeDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSTrackingPatientFeeDialog::SetDefaultValues(){

	m_szDepartmentKey.Empty();
	m_nFromMoney=0;
	m_nToMoney=0;
	m_szObjectKey.Empty();
	m_nDocumentNo=0;
	m_szNumberInward.Empty();
	m_szPatientName.Empty();

}
int CHMSTrackingPatientFeeDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnDepartmentSelendok(){
	 
}
/*void CHMSTrackingPatientFeeDialog::OnDepartmentSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnDepartmentKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnDepartmentLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();

	if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty())
	{
		//szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey);
    }

	if (pMF->m_UserInfo.su_hms_xdept == _T("PTC"))
		szWhere.Empty();
	else
		szWhere.Format(_T(" and sd_id='%s' "), pMF->m_UserInfo.su_hms_xdept);

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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTrackingPatientFeeDialog::OnObjectSelendok(){
	 
}
/*void CHMSTrackingPatientFeeDialog::OnObjectSetfocus(){
	
}*/
/*void CHMSTrackingPatientFeeDialog::OnObjectKillfocus(){
	
}*/
long CHMSTrackingPatientFeeDialog::OnObjectLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoChange(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSTrackingPatientFeeDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSTrackingPatientFeeDialog::OnDocumentNoCheckValue()
{
	if (m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	if (m_wndFromMoney.GetWindowTextLength() == 0)
	{
		m_wndFromMoney.SetWindowText(_T("0"));
	}
	if (m_wndToMoney.GetWindowTextLength() == 0)
	{
		m_wndToMoney.SetWindowText(_T("0"));
	}
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
	if (m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	if (m_wndFromMoney.GetWindowTextLength() == 0)
	{
		m_wndFromMoney.SetWindowText(_T("0"));
	}
	if (m_wndToMoney.GetWindowTextLength() == 0)
	{
		m_wndToMoney.SetWindowText(_T("0"));
	}
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
	if (m_wndDocumentNo.GetWindowTextLength() == 0)
	{
		m_wndDocumentNo.SetWindowText(_T("0"));
	}
	if (m_wndFromMoney.GetWindowTextLength() == 0)
	{
		m_wndFromMoney.SetWindowText(_T("0"));
	}
	if (m_wndToMoney.GetWindowTextLength() == 0)
	{
		m_wndToMoney.SetWindowText(_T("0"));
	}
	OnListLoadData();
	return 1;
} 
void CHMSTrackingPatientFeeDialog::OnSearchSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CHMSTrackingPatientFeeDialog::OnListDblClick(){
	
} 
void CHMSTrackingPatientFeeDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTrackingPatientFeeDialog::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTrackingPatientFeeDialog::OnListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsx(&pMF->m_db);
	CString szSQL;
	CString szWhere, tmpStr;
	CString szObjects, szDepts;
	long nDocumentNo;
	double nCost, nInsPaid, nDiscount, nPatDebt;
	UpdateData(TRUE);

	pMF->BeginWaitCursor();

	szSQL.Format(_T("SELECT htr_docno FROM hms_treatment_record WHERE htr_deptid='%s' and htr_status='I' "), 
		pMF->m_szDept);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("htr_docno"), nDocumentNo);
		szSQL.Format(_T("HMS_INPATIENT_FEE_CREATE(%ld, 'ETPODXMBFJ', '%s') "),
			nDocumentNo, pMF->GetModuleID());
		pMF->ExecDML(szSQL);
/*
		szSQL.Format(_T("SELECT sum(hfe_cost) as cost, sum(hfe_inspaid) as inspaid, sum(hfe_discount) as discount, sum(hfe_patpaid+hfe_patdebt) as patdebt ") \
			_T("FROM hms_fee WHERE hfe_docno = %ld and hfe_status not in('P','C') and NVL(hfe_category,'N') <> 'Y' "), nDocumentNo);
		rsx.ExecSQL(szSQL);
		rsx.GetValue(_T("cost"), nCost);
		rsx.GetValue(_T("inspaid"), nInsPaid);
		rsx.GetValue(_T("discount"), nDiscount);
		rsx.GetValue(_T("patdebt"), nPatDebt);
		szSQL.Format(_T("UPDATE hms_doc SET hfe_cost=%.3f, hfe_inspaid_amount=%.3f, hfe_discount_amount=%.3f  WHERE hd_docno = %ld "), nCost, nInsPaid, nDiscount, nDocumentNo);
		pMF->ExecSQL(szSQL);
*/
		rs.MoveNext();
	}

	if (m_nToMoney > 0)
	{
		szWhere.AppendFormat(_T(" AND hfe_patpaid_amount BETWEEN %ld AND %ld "),
			                 m_nFromMoney, m_nToMoney);
	}

	/*if (!m_szObjectKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" AND ho_id='%s' "), m_szObjectKey);
	}*/

	szWhere.AppendFormat(_T(" AND htr_deptid='%s' "), pMF->m_szDept);
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

	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hd_docno AS docno,") \
				_T("        hcr_recordno AS recordno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) AS patientname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
				_T("        hms_getsex(hp_sex) AS sex,") \
				_T("        hms_getobjectname(ho_id) AS objectname,") \
				_T("        hfe_cost AS amount,") \
				_T("        hfe_inspaid_amount AS inspaid,") \
				_T("        hfe_deposit_amount AS deposit,") \
				_T("        case when hfe_deposit_amount > 0 then hfe_cost-hfe_inspaid_amount-hfe_deposit_amount ") \
				_T("        else hfe_cost-hfe_inspaid_amount end AS patpaid") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno AND htr_idx=hcr_refidx)") \
				_T(" WHERE htr_status='I' AND hfe_cost > 0 %s"),
				szWhere);

	nCount = rs.ExecSQL(szSQL);

	int nIndex = 1, nItem;

	CString szFirstName, szMidName, szSurName, szSearchName;
	CString szFirstName2, szMidName2, szSurName2, szSearchName2, szShortName;
	if(!m_szPatientName.IsEmpty())
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
			rs.GetValue(_T("patpaid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	pMF->EndWaitCursor();
	return nCount;
}
int CHMSTrackingPatientFeeDialog::OnAddHMSTrackingPatientFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTrackingPatientFeeDialog::OnEditHMSTrackingPatientFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTrackingPatientFeeDialog::OnDeleteHMSTrackingPatientFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSTrackingPatientFeeDialog::OnHMSTrackingPatientFeeDialogListLoadData(){
	return 0;
}
